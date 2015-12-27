#include "NNfunction_nn_chi2_charge1m.h"
#include <cmath>

double NNfunction_nn_chi2_charge1m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6539)/15.1399;
   input1 = (in1 - 102.046)/743.135;
   input2 = (in2 - 460.825)/453.905;
   input3 = (in3 - 521.869)/832.669;
   input4 = (in4 - 1252.37)/959.516;
   input5 = (in5 - 1223.7)/1033.35;
   input6 = (in6 - 1225.86)/1032.09;
   input7 = (in7 - 1195.97)/992.643;
   input8 = (in8 - 1213.28)/1041.53;
   input9 = (in9 - 1207.39)/1038.08;
   input10 = (in10 - 1153.65)/972.93;
   input11 = (in11 - 1290.09)/1055.48;
   input12 = (in12 - 1296.94)/1054.72;
   input13 = (in13 - 1002.63)/797.564;
   input14 = (in14 - 1292.94)/1035.81;
   input15 = (in15 - 1290.87)/1036.36;
   input16 = (in16 - 841.923)/635.567;
   input17 = (in17 - 1299.73)/1055.07;
   input18 = (in18 - 1298.23)/1056.2;
   input19 = (in19 - 1249.52)/976.881;
   input20 = (in20 - -408.531)/659.873;
   input21 = (in21 - -555.438)/1269.7;
   input22 = (in22 - -80.7735)/1203.82;
   input23 = (in23 - 129.826)/625.296;
   switch(index) {
     case 0:
         return neuron0x42bab30();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge1m::Value(int index, double* input) {
   input0 = (input[0] - 23.6539)/15.1399;
   input1 = (input[1] - 102.046)/743.135;
   input2 = (input[2] - 460.825)/453.905;
   input3 = (input[3] - 521.869)/832.669;
   input4 = (input[4] - 1252.37)/959.516;
   input5 = (input[5] - 1223.7)/1033.35;
   input6 = (input[6] - 1225.86)/1032.09;
   input7 = (input[7] - 1195.97)/992.643;
   input8 = (input[8] - 1213.28)/1041.53;
   input9 = (input[9] - 1207.39)/1038.08;
   input10 = (input[10] - 1153.65)/972.93;
   input11 = (input[11] - 1290.09)/1055.48;
   input12 = (input[12] - 1296.94)/1054.72;
   input13 = (input[13] - 1002.63)/797.564;
   input14 = (input[14] - 1292.94)/1035.81;
   input15 = (input[15] - 1290.87)/1036.36;
   input16 = (input[16] - 841.923)/635.567;
   input17 = (input[17] - 1299.73)/1055.07;
   input18 = (input[18] - 1298.23)/1056.2;
   input19 = (input[19] - 1249.52)/976.881;
   input20 = (input[20] - -408.531)/659.873;
   input21 = (input[21] - -555.438)/1269.7;
   input22 = (input[22] - -80.7735)/1203.82;
   input23 = (input[23] - 129.826)/625.296;
   switch(index) {
     case 0:
         return neuron0x42bab30();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_charge1m::neuron0x4285ba0() {
   return input0;
}

double NNfunction_nn_chi2_charge1m::neuron0x4285e50() {
   return input1;
}

double NNfunction_nn_chi2_charge1m::neuron0x4286190() {
   return input2;
}

double NNfunction_nn_chi2_charge1m::neuron0x42864d0() {
   return input3;
}

double NNfunction_nn_chi2_charge1m::neuron0x4286810() {
   return input4;
}

double NNfunction_nn_chi2_charge1m::neuron0x4286b50() {
   return input5;
}

double NNfunction_nn_chi2_charge1m::neuron0x4286e90() {
   return input6;
}

double NNfunction_nn_chi2_charge1m::neuron0x42871d0() {
   return input7;
}

double NNfunction_nn_chi2_charge1m::neuron0x4287510() {
   return input8;
}

double NNfunction_nn_chi2_charge1m::neuron0x4287850() {
   return input9;
}

double NNfunction_nn_chi2_charge1m::neuron0x4287b90() {
   return input10;
}

double NNfunction_nn_chi2_charge1m::neuron0x4287ed0() {
   return input11;
}

double NNfunction_nn_chi2_charge1m::neuron0x4288210() {
   return input12;
}

double NNfunction_nn_chi2_charge1m::neuron0x4288550() {
   return input13;
}

double NNfunction_nn_chi2_charge1m::neuron0x4288890() {
   return input14;
}

double NNfunction_nn_chi2_charge1m::neuron0x4288bd0() {
   return input15;
}

double NNfunction_nn_chi2_charge1m::neuron0x4288f10() {
   return input16;
}

double NNfunction_nn_chi2_charge1m::neuron0x4289470() {
   return input17;
}

double NNfunction_nn_chi2_charge1m::neuron0x4289690() {
   return input18;
}

double NNfunction_nn_chi2_charge1m::neuron0x42899d0() {
   return input19;
}

double NNfunction_nn_chi2_charge1m::neuron0x4289d10() {
   return input20;
}

double NNfunction_nn_chi2_charge1m::neuron0x428a050() {
   return input21;
}

double NNfunction_nn_chi2_charge1m::neuron0x428a390() {
   return input22;
}

double NNfunction_nn_chi2_charge1m::neuron0x428a6d0() {
   return input23;
}

double NNfunction_nn_chi2_charge1m::input0x428ab40() {
   double input = 0.0187765;
   input += synapse0x428ae80();
   input += synapse0x428aec0();
   input += synapse0x428af00();
   input += synapse0x428af40();
   input += synapse0x428af80();
   input += synapse0x428afc0();
   input += synapse0x428b000();
   input += synapse0x428b040();
   input += synapse0x428b080();
   input += synapse0x428b0c0();
   input += synapse0x428b100();
   input += synapse0x428b140();
   input += synapse0x428b180();
   input += synapse0x428b1c0();
   input += synapse0x428b200();
   input += synapse0x428b240();
   input += synapse0x428acd0();
   input += synapse0x428ad10();
   input += synapse0x2de9eb0();
   input += synapse0x2de9ef0();
   input += synapse0x428b390();
   input += synapse0x428b3d0();
   input += synapse0x428b410();
   input += synapse0x428b450();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428ab40() {
   double input = input0x428ab40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428b490() {
   double input = -4.66388;
   input += synapse0x428b7d0();
   input += synapse0x428b810();
   input += synapse0x428b850();
   input += synapse0x428b890();
   input += synapse0x428b8d0();
   input += synapse0x428b910();
   input += synapse0x428b950();
   input += synapse0x428b990();
   input += synapse0x428b9d0();
   input += synapse0x428b280();
   input += synapse0x428b2c0();
   input += synapse0x428b300();
   input += synapse0x428b340();
   input += synapse0x428bc20();
   input += synapse0x428bc60();
   input += synapse0x428bca0();
   input += synapse0x428b620();
   input += synapse0x428b660();
   input += synapse0x428bdf0();
   input += synapse0x428be30();
   input += synapse0x428be70();
   input += synapse0x428beb0();
   input += synapse0x428bef0();
   input += synapse0x428bf30();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428b490() {
   double input = input0x428b490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428bf70() {
   double input = 1.69133;
   input += synapse0x428c2b0();
   input += synapse0x428c2f0();
   input += synapse0x428c330();
   input += synapse0x428c370();
   input += synapse0x428c3b0();
   input += synapse0x428c3f0();
   input += synapse0x428c430();
   input += synapse0x428c470();
   input += synapse0x428c4b0();
   input += synapse0x428c4f0();
   input += synapse0x428c530();
   input += synapse0x428c570();
   input += synapse0x428c5b0();
   input += synapse0x428c5f0();
   input += synapse0x428c630();
   input += synapse0x428c670();
   input += synapse0x428c100();
   input += synapse0x428c140();
   input += synapse0x2dfee90();
   input += synapse0x404fc50();
   input += synapse0x404fc90();
   input += synapse0x428e5b0();
   input += synapse0x428e5f0();
   input += synapse0x42858e0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428bf70() {
   double input = input0x428bf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428ba10() {
   double input = -0.711921;
   input += synapse0x42859b0();
   input += synapse0x40504d0();
   input += synapse0x428bba0();
   input += synapse0x428bbe0();
   input += synapse0x428c7c0();
   input += synapse0x428c800();
   input += synapse0x428c840();
   input += synapse0x428c880();
   input += synapse0x428c8c0();
   input += synapse0x428c900();
   input += synapse0x428c940();
   input += synapse0x428c980();
   input += synapse0x428c9c0();
   input += synapse0x428ca00();
   input += synapse0x428ca40();
   input += synapse0x428ca80();
   input += synapse0x4285920();
   input += synapse0x4285960();
   input += synapse0x428cbd0();
   input += synapse0x428cc10();
   input += synapse0x428cc50();
   input += synapse0x428cc90();
   input += synapse0x428ccd0();
   input += synapse0x428cd10();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428ba10() {
   double input = input0x428ba10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428cd50() {
   double input = -3.75822;
   input += synapse0x428d090();
   input += synapse0x428d0d0();
   input += synapse0x428d110();
   input += synapse0x428d150();
   input += synapse0x428d190();
   input += synapse0x428d1d0();
   input += synapse0x428d210();
   input += synapse0x428d250();
   input += synapse0x428d290();
   input += synapse0x428d2d0();
   input += synapse0x428d310();
   input += synapse0x428d350();
   input += synapse0x428d390();
   input += synapse0x428d3d0();
   input += synapse0x428d410();
   input += synapse0x428d450();
   input += synapse0x428d5a0();
   input += synapse0x428cee0();
   input += synapse0x428cf20();
   input += synapse0x428e6f0();
   input += synapse0x428e730();
   input += synapse0x428e770();
   input += synapse0x428e7b0();
   input += synapse0x428e7f0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428cd50() {
   double input = input0x428cd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428e830() {
   double input = -7.4818;
   input += synapse0x428eb70();
   input += synapse0x428ebb0();
   input += synapse0x428ebf0();
   input += synapse0x428ec30();
   input += synapse0x428ec70();
   input += synapse0x428ecb0();
   input += synapse0x428ecf0();
   input += synapse0x428ed30();
   input += synapse0x428ed70();
   input += synapse0x404ffa0();
   input += synapse0x404ffe0();
   input += synapse0x4050020();
   input += synapse0x4050060();
   input += synapse0x40500a0();
   input += synapse0x40500e0();
   input += synapse0x4050120();
   input += synapse0x428e9c0();
   input += synapse0x428ea00();
   input += synapse0x4050270();
   input += synapse0x40502b0();
   input += synapse0x40502f0();
   input += synapse0x4050330();
   input += synapse0x4050370();
   input += synapse0x428f5c0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428e830() {
   double input = input0x428e830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428f600() {
   double input = -0.716484;
   input += synapse0x428f940();
   input += synapse0x428f980();
   input += synapse0x428f9c0();
   input += synapse0x428fa00();
   input += synapse0x428fa40();
   input += synapse0x428fa80();
   input += synapse0x428fac0();
   input += synapse0x428fb00();
   input += synapse0x428fb40();
   input += synapse0x428fb80();
   input += synapse0x428fbc0();
   input += synapse0x428fc00();
   input += synapse0x428fc40();
   input += synapse0x428fc80();
   input += synapse0x428fcc0();
   input += synapse0x428fd00();
   input += synapse0x428f790();
   input += synapse0x428f7d0();
   input += synapse0x428fe50();
   input += synapse0x428fe90();
   input += synapse0x428fed0();
   input += synapse0x428ff10();
   input += synapse0x428ff50();
   input += synapse0x428ff90();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428f600() {
   double input = input0x428f600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428ffd0() {
   double input = 2.22471;
   input += synapse0x4290310();
   input += synapse0x4290350();
   input += synapse0x4290390();
   input += synapse0x42903d0();
   input += synapse0x4290410();
   input += synapse0x4290450();
   input += synapse0x4290490();
   input += synapse0x42904d0();
   input += synapse0x4290510();
   input += synapse0x4290550();
   input += synapse0x4290590();
   input += synapse0x42905d0();
   input += synapse0x4290610();
   input += synapse0x4290650();
   input += synapse0x4290690();
   input += synapse0x42906d0();
   input += synapse0x4290160();
   input += synapse0x42901a0();
   input += synapse0x4290820();
   input += synapse0x4290860();
   input += synapse0x42908a0();
   input += synapse0x42908e0();
   input += synapse0x4290920();
   input += synapse0x4290960();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428ffd0() {
   double input = input0x428ffd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42909a0() {
   double input = 3.11527;
   input += synapse0x4289360();
   input += synapse0x42893a0();
   input += synapse0x42893e0();
   input += synapse0x4289420();
   input += synapse0x4290ef0();
   input += synapse0x4290f30();
   input += synapse0x4290f70();
   input += synapse0x4290fb0();
   input += synapse0x4290ff0();
   input += synapse0x4291030();
   input += synapse0x4291070();
   input += synapse0x42910b0();
   input += synapse0x42910f0();
   input += synapse0x4291130();
   input += synapse0x4291170();
   input += synapse0x42911b0();
   input += synapse0x4290b30();
   input += synapse0x4290b70();
   input += synapse0x4291300();
   input += synapse0x4291340();
   input += synapse0x4291380();
   input += synapse0x42913c0();
   input += synapse0x4291400();
   input += synapse0x4291440();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42909a0() {
   double input = input0x42909a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4291480() {
   double input = -0.189398;
   input += synapse0x42917c0();
   input += synapse0x4291800();
   input += synapse0x4291840();
   input += synapse0x4291880();
   input += synapse0x42918c0();
   input += synapse0x4291900();
   input += synapse0x4291940();
   input += synapse0x4291980();
   input += synapse0x42919c0();
   input += synapse0x4291a00();
   input += synapse0x4291a40();
   input += synapse0x4291a80();
   input += synapse0x4291ac0();
   input += synapse0x4291b00();
   input += synapse0x4291b40();
   input += synapse0x4291b80();
   input += synapse0x4291610();
   input += synapse0x4291650();
   input += synapse0x4291cd0();
   input += synapse0x4291d10();
   input += synapse0x4291d50();
   input += synapse0x4291d90();
   input += synapse0x4291dd0();
   input += synapse0x4291e10();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4291480() {
   double input = input0x4291480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4291e50() {
   double input = -2.28511;
   input += synapse0x4292190();
   input += synapse0x42921d0();
   input += synapse0x4292210();
   input += synapse0x4292250();
   input += synapse0x4292290();
   input += synapse0x42922d0();
   input += synapse0x4292310();
   input += synapse0x4292350();
   input += synapse0x4292390();
   input += synapse0x42923d0();
   input += synapse0x4292410();
   input += synapse0x4292450();
   input += synapse0x4292490();
   input += synapse0x42924d0();
   input += synapse0x4292510();
   input += synapse0x4292550();
   input += synapse0x4291fe0();
   input += synapse0x4292020();
   input += synapse0x428edb0();
   input += synapse0x428edf0();
   input += synapse0x428ee30();
   input += synapse0x428ee70();
   input += synapse0x428eeb0();
   input += synapse0x428eef0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4291e50() {
   double input = input0x4291e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x428ef30() {
   double input = -7.68563;
   input += synapse0x428f270();
   input += synapse0x428f2b0();
   input += synapse0x428f2f0();
   input += synapse0x428f330();
   input += synapse0x428f370();
   input += synapse0x428f3b0();
   input += synapse0x428f3f0();
   input += synapse0x428f430();
   input += synapse0x428f470();
   input += synapse0x428f4b0();
   input += synapse0x428f4f0();
   input += synapse0x428f530();
   input += synapse0x428f570();
   input += synapse0x42936b0();
   input += synapse0x42936f0();
   input += synapse0x4293730();
   input += synapse0x428f0c0();
   input += synapse0x428f100();
   input += synapse0x4293880();
   input += synapse0x42938c0();
   input += synapse0x4293900();
   input += synapse0x4293940();
   input += synapse0x4293980();
   input += synapse0x42939c0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x428ef30() {
   double input = input0x428ef30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4293a00() {
   double input = 0.272057;
   input += synapse0x4293d40();
   input += synapse0x4293d80();
   input += synapse0x4293dc0();
   input += synapse0x4293e00();
   input += synapse0x4293e40();
   input += synapse0x4293e80();
   input += synapse0x4293ec0();
   input += synapse0x4293f00();
   input += synapse0x4293f40();
   input += synapse0x4293f80();
   input += synapse0x4293fc0();
   input += synapse0x4294000();
   input += synapse0x4294040();
   input += synapse0x4294080();
   input += synapse0x42940c0();
   input += synapse0x4294100();
   input += synapse0x4293b90();
   input += synapse0x4293bd0();
   input += synapse0x4294250();
   input += synapse0x4294290();
   input += synapse0x42942d0();
   input += synapse0x4294310();
   input += synapse0x4294350();
   input += synapse0x4294390();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4293a00() {
   double input = input0x4293a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42943d0() {
   double input = 3.51801;
   input += synapse0x4294710();
   input += synapse0x4294750();
   input += synapse0x4294790();
   input += synapse0x42947d0();
   input += synapse0x4294810();
   input += synapse0x4294850();
   input += synapse0x4294890();
   input += synapse0x42948d0();
   input += synapse0x4294910();
   input += synapse0x4294950();
   input += synapse0x4294990();
   input += synapse0x42949d0();
   input += synapse0x4294a10();
   input += synapse0x4294a50();
   input += synapse0x4294a90();
   input += synapse0x4294ad0();
   input += synapse0x4294560();
   input += synapse0x42945a0();
   input += synapse0x4294c20();
   input += synapse0x4294c60();
   input += synapse0x4294ca0();
   input += synapse0x4294ce0();
   input += synapse0x4294d20();
   input += synapse0x4294d60();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42943d0() {
   double input = input0x42943d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4294da0() {
   double input = 0.000860314;
   input += synapse0x42950e0();
   input += synapse0x4295120();
   input += synapse0x4295160();
   input += synapse0x42951a0();
   input += synapse0x42951e0();
   input += synapse0x4295220();
   input += synapse0x4295260();
   input += synapse0x42952a0();
   input += synapse0x42952e0();
   input += synapse0x4295320();
   input += synapse0x4295360();
   input += synapse0x42953a0();
   input += synapse0x42953e0();
   input += synapse0x4295420();
   input += synapse0x4295460();
   input += synapse0x42954a0();
   input += synapse0x4294f30();
   input += synapse0x4294f70();
   input += synapse0x42955f0();
   input += synapse0x4295630();
   input += synapse0x4295670();
   input += synapse0x42956b0();
   input += synapse0x42956f0();
   input += synapse0x4295730();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4294da0() {
   double input = input0x4294da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4295770() {
   double input = 1.53225;
   input += synapse0x4295ab0();
   input += synapse0x4285d30();
   input += synapse0x4285d70();
   input += synapse0x4286070();
   input += synapse0x42860b0();
   input += synapse0x42863b0();
   input += synapse0x42863f0();
   input += synapse0x42866f0();
   input += synapse0x4286730();
   input += synapse0x4286a30();
   input += synapse0x4286a70();
   input += synapse0x4286d70();
   input += synapse0x4286db0();
   input += synapse0x42870b0();
   input += synapse0x42870f0();
   input += synapse0x42873f0();
   input += synapse0x4287430();
   input += synapse0x4287730();
   input += synapse0x4287770();
   input += synapse0x4287a70();
   input += synapse0x4287ab0();
   input += synapse0x4287db0();
   input += synapse0x4287df0();
   input += synapse0x42880f0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4295770() {
   double input = input0x4295770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4297580() {
   double input = -0.258496;
   input += synapse0x4288130();
   input += synapse0x4288df0();
   input += synapse0x4288e30();
   input += synapse0x4295900();
   input += synapse0x4295940();
   input += synapse0x4289130();
   input += synapse0x4289170();
   input += synapse0x2dfc050();
   input += synapse0x2dfc090();
   input += synapse0x42898b0();
   input += synapse0x42898f0();
   input += synapse0x4289bf0();
   input += synapse0x4289c30();
   input += synapse0x4289f30();
   input += synapse0x4289f70();
   input += synapse0x428a270();
   input += synapse0x428a2b0();
   input += synapse0x428a5b0();
   input += synapse0x428a5f0();
   input += synapse0x428a8f0();
   input += synapse0x428a930();
   input += synapse0x4288430();
   input += synapse0x4288470();
   input += synapse0x4297820();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4297580() {
   double input = input0x4297580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4297860() {
   double input = 1.50502;
   input += synapse0x4297ba0();
   input += synapse0x4297be0();
   input += synapse0x4297c20();
   input += synapse0x4297c60();
   input += synapse0x4297ca0();
   input += synapse0x4297ce0();
   input += synapse0x4297d20();
   input += synapse0x4297d60();
   input += synapse0x4297da0();
   input += synapse0x4297de0();
   input += synapse0x4297e20();
   input += synapse0x4297e60();
   input += synapse0x4297ea0();
   input += synapse0x4297ee0();
   input += synapse0x4297f20();
   input += synapse0x4297f60();
   input += synapse0x42979f0();
   input += synapse0x4297a30();
   input += synapse0x42980b0();
   input += synapse0x42980f0();
   input += synapse0x4298130();
   input += synapse0x4298170();
   input += synapse0x42981b0();
   input += synapse0x42981f0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4297860() {
   double input = input0x4297860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4298230() {
   double input = 4.14285;
   input += synapse0x4298570();
   input += synapse0x42985b0();
   input += synapse0x42985f0();
   input += synapse0x4298630();
   input += synapse0x4298670();
   input += synapse0x42986b0();
   input += synapse0x42986f0();
   input += synapse0x4298730();
   input += synapse0x4298770();
   input += synapse0x42987b0();
   input += synapse0x42987f0();
   input += synapse0x4298830();
   input += synapse0x4298870();
   input += synapse0x42988b0();
   input += synapse0x42988f0();
   input += synapse0x4298930();
   input += synapse0x42983c0();
   input += synapse0x4298400();
   input += synapse0x4298a80();
   input += synapse0x4298ac0();
   input += synapse0x4298b00();
   input += synapse0x4298b40();
   input += synapse0x4298b80();
   input += synapse0x4298bc0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4298230() {
   double input = input0x4298230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4298c00() {
   double input = -0.12203;
   input += synapse0x4298f40();
   input += synapse0x4298f80();
   input += synapse0x4298fc0();
   input += synapse0x4299000();
   input += synapse0x4299040();
   input += synapse0x4299080();
   input += synapse0x42990c0();
   input += synapse0x4299100();
   input += synapse0x4299140();
   input += synapse0x4299180();
   input += synapse0x42991c0();
   input += synapse0x4299200();
   input += synapse0x4299240();
   input += synapse0x4299280();
   input += synapse0x42992c0();
   input += synapse0x4299300();
   input += synapse0x4298d90();
   input += synapse0x4298dd0();
   input += synapse0x4299450();
   input += synapse0x4299490();
   input += synapse0x42994d0();
   input += synapse0x4299510();
   input += synapse0x4299550();
   input += synapse0x4299590();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4298c00() {
   double input = input0x4298c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42995d0() {
   double input = -0.350172;
   input += synapse0x4299910();
   input += synapse0x4299950();
   input += synapse0x4299990();
   input += synapse0x42999d0();
   input += synapse0x4299a10();
   input += synapse0x4299a50();
   input += synapse0x4299a90();
   input += synapse0x4299ad0();
   input += synapse0x4299b10();
   input += synapse0x4299b50();
   input += synapse0x4299b90();
   input += synapse0x4299bd0();
   input += synapse0x4299c10();
   input += synapse0x4299c50();
   input += synapse0x4299c90();
   input += synapse0x4299cd0();
   input += synapse0x4299760();
   input += synapse0x42997a0();
   input += synapse0x4299e20();
   input += synapse0x4299e60();
   input += synapse0x4299ea0();
   input += synapse0x4299ee0();
   input += synapse0x4299f20();
   input += synapse0x4299f60();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42995d0() {
   double input = input0x42995d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4299fa0() {
   double input = 0.492652;
   input += synapse0x429a2e0();
   input += synapse0x429a320();
   input += synapse0x429a360();
   input += synapse0x429a3a0();
   input += synapse0x429a3e0();
   input += synapse0x429a420();
   input += synapse0x429a460();
   input += synapse0x429a4a0();
   input += synapse0x429a4e0();
   input += synapse0x42926a0();
   input += synapse0x42926e0();
   input += synapse0x4292720();
   input += synapse0x4292760();
   input += synapse0x42927a0();
   input += synapse0x42927e0();
   input += synapse0x4292820();
   input += synapse0x429a130();
   input += synapse0x429a170();
   input += synapse0x4292970();
   input += synapse0x42929b0();
   input += synapse0x42929f0();
   input += synapse0x4292a30();
   input += synapse0x4292a70();
   input += synapse0x4292ab0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4299fa0() {
   double input = input0x4299fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4292af0() {
   double input = 1.08947;
   input += synapse0x4292e30();
   input += synapse0x4292e70();
   input += synapse0x4292eb0();
   input += synapse0x4292ef0();
   input += synapse0x4292f30();
   input += synapse0x4292f70();
   input += synapse0x4292fb0();
   input += synapse0x4292ff0();
   input += synapse0x4293030();
   input += synapse0x4293070();
   input += synapse0x42930b0();
   input += synapse0x42930f0();
   input += synapse0x4293130();
   input += synapse0x4293170();
   input += synapse0x42931b0();
   input += synapse0x42931f0();
   input += synapse0x4292c80();
   input += synapse0x4292cc0();
   input += synapse0x4293340();
   input += synapse0x4293380();
   input += synapse0x42933c0();
   input += synapse0x4293400();
   input += synapse0x4293440();
   input += synapse0x4293480();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4292af0() {
   double input = input0x4292af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42934c0() {
   double input = -2.92841;
   input += synapse0x4293650();
   input += synapse0x429c6e0();
   input += synapse0x429c720();
   input += synapse0x429c760();
   input += synapse0x429c7a0();
   input += synapse0x429c7e0();
   input += synapse0x429c820();
   input += synapse0x429c860();
   input += synapse0x429c8a0();
   input += synapse0x429c8e0();
   input += synapse0x429c920();
   input += synapse0x429c960();
   input += synapse0x429c9a0();
   input += synapse0x429c9e0();
   input += synapse0x429ca20();
   input += synapse0x429ca60();
   input += synapse0x429c530();
   input += synapse0x429c570();
   input += synapse0x429cbb0();
   input += synapse0x429cbf0();
   input += synapse0x429cc30();
   input += synapse0x429cc70();
   input += synapse0x429ccb0();
   input += synapse0x429ccf0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42934c0() {
   double input = input0x42934c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429cd30() {
   double input = 0.981561;
   input += synapse0x429d070();
   input += synapse0x429d0b0();
   input += synapse0x429d0f0();
   input += synapse0x429d130();
   input += synapse0x429d170();
   input += synapse0x429d1b0();
   input += synapse0x429d1f0();
   input += synapse0x429d230();
   input += synapse0x429d270();
   input += synapse0x429d2b0();
   input += synapse0x429d2f0();
   input += synapse0x429d330();
   input += synapse0x429d370();
   input += synapse0x429d3b0();
   input += synapse0x429d3f0();
   input += synapse0x429d430();
   input += synapse0x429cec0();
   input += synapse0x429cf00();
   input += synapse0x429d580();
   input += synapse0x429d5c0();
   input += synapse0x429d600();
   input += synapse0x429d640();
   input += synapse0x429d680();
   input += synapse0x429d6c0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429cd30() {
   double input = input0x429cd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429d700() {
   double input = -0.366825;
   input += synapse0x429da40();
   input += synapse0x429da80();
   input += synapse0x429dac0();
   input += synapse0x429db00();
   input += synapse0x429db40();
   input += synapse0x429db80();
   input += synapse0x429dbc0();
   input += synapse0x429dc00();
   input += synapse0x429dc40();
   input += synapse0x429dc80();
   input += synapse0x429dcc0();
   input += synapse0x429dd00();
   input += synapse0x429dd40();
   input += synapse0x429dd80();
   input += synapse0x429ddc0();
   input += synapse0x429de00();
   input += synapse0x429d890();
   input += synapse0x429d8d0();
   input += synapse0x429df50();
   input += synapse0x429df90();
   input += synapse0x429dfd0();
   input += synapse0x429e010();
   input += synapse0x429e050();
   input += synapse0x429e090();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429d700() {
   double input = input0x429d700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429e0d0() {
   double input = -1.09742;
   input += synapse0x429e410();
   input += synapse0x429e450();
   input += synapse0x429e490();
   input += synapse0x429e4d0();
   input += synapse0x429e510();
   input += synapse0x429e550();
   input += synapse0x429e590();
   input += synapse0x429e5d0();
   input += synapse0x429e610();
   input += synapse0x429e650();
   input += synapse0x429e690();
   input += synapse0x429e6d0();
   input += synapse0x429e710();
   input += synapse0x429e750();
   input += synapse0x429e790();
   input += synapse0x429e7d0();
   input += synapse0x429e260();
   input += synapse0x429e2a0();
   input += synapse0x429e920();
   input += synapse0x429e960();
   input += synapse0x429e9a0();
   input += synapse0x429e9e0();
   input += synapse0x429ea20();
   input += synapse0x429ea60();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429e0d0() {
   double input = input0x429e0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429eaa0() {
   double input = -0.811514;
   input += synapse0x429ede0();
   input += synapse0x429ee20();
   input += synapse0x429ee60();
   input += synapse0x429eea0();
   input += synapse0x429eee0();
   input += synapse0x429ef20();
   input += synapse0x429ef60();
   input += synapse0x429efa0();
   input += synapse0x429efe0();
   input += synapse0x429f020();
   input += synapse0x429f060();
   input += synapse0x429f0a0();
   input += synapse0x429f0e0();
   input += synapse0x429f120();
   input += synapse0x429f160();
   input += synapse0x429f1a0();
   input += synapse0x429ec30();
   input += synapse0x429ec70();
   input += synapse0x429f2f0();
   input += synapse0x429f330();
   input += synapse0x429f370();
   input += synapse0x429f3b0();
   input += synapse0x429f3f0();
   input += synapse0x429f430();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429eaa0() {
   double input = input0x429eaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429f470() {
   double input = -2.19876;
   input += synapse0x429f7b0();
   input += synapse0x429f7f0();
   input += synapse0x429f830();
   input += synapse0x429f870();
   input += synapse0x429f8b0();
   input += synapse0x429f8f0();
   input += synapse0x429f930();
   input += synapse0x429f970();
   input += synapse0x429f9b0();
   input += synapse0x429f9f0();
   input += synapse0x429fa30();
   input += synapse0x429fa70();
   input += synapse0x429fab0();
   input += synapse0x429faf0();
   input += synapse0x429fb30();
   input += synapse0x429fb70();
   input += synapse0x429f600();
   input += synapse0x429f640();
   input += synapse0x429fcc0();
   input += synapse0x429fd00();
   input += synapse0x429fd40();
   input += synapse0x429fd80();
   input += synapse0x429fdc0();
   input += synapse0x429fe00();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429f470() {
   double input = input0x429f470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429fe40() {
   double input = 2.7498;
   input += synapse0x42a0180();
   input += synapse0x42a01c0();
   input += synapse0x42a0200();
   input += synapse0x42a0240();
   input += synapse0x42a0280();
   input += synapse0x42a02c0();
   input += synapse0x42a0300();
   input += synapse0x42a0340();
   input += synapse0x42a0380();
   input += synapse0x42a03c0();
   input += synapse0x42a0400();
   input += synapse0x42a0440();
   input += synapse0x42a0480();
   input += synapse0x42a04c0();
   input += synapse0x42a0500();
   input += synapse0x42a0540();
   input += synapse0x429ffd0();
   input += synapse0x42a0010();
   input += synapse0x42a0690();
   input += synapse0x42a06d0();
   input += synapse0x42a0710();
   input += synapse0x42a0750();
   input += synapse0x42a0790();
   input += synapse0x42a07d0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429fe40() {
   double input = input0x429fe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a0810() {
   double input = -0.727324;
   input += synapse0x42a0b50();
   input += synapse0x42a0b90();
   input += synapse0x42a0bd0();
   input += synapse0x42a0c10();
   input += synapse0x42a0c50();
   input += synapse0x42a0c90();
   input += synapse0x42a0cd0();
   input += synapse0x42a0d10();
   input += synapse0x42a0d50();
   input += synapse0x42a0d90();
   input += synapse0x42a0dd0();
   input += synapse0x42a0e10();
   input += synapse0x42a0e50();
   input += synapse0x42a0e90();
   input += synapse0x42a0ed0();
   input += synapse0x42a0f10();
   input += synapse0x42a09a0();
   input += synapse0x42a09e0();
   input += synapse0x42a1060();
   input += synapse0x42a10a0();
   input += synapse0x42a10e0();
   input += synapse0x42a1120();
   input += synapse0x42a1160();
   input += synapse0x42a11a0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a0810() {
   double input = input0x42a0810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a11e0() {
   double input = 4.00004;
   input += synapse0x42a1520();
   input += synapse0x4295af0();
   input += synapse0x4295b30();
   input += synapse0x4295b70();
   input += synapse0x4295dc0();
   input += synapse0x4295e00();
   input += synapse0x4295e40();
   input += synapse0x4296090();
   input += synapse0x42960d0();
   input += synapse0x4296320();
   input += synapse0x4296360();
   input += synapse0x42963a0();
   input += synapse0x42965f0();
   input += synapse0x4296630();
   input += synapse0x4296880();
   input += synapse0x42968c0();
   input += synapse0x42a1370();
   input += synapse0x42a13b0();
   input += synapse0x4296a10();
   input += synapse0x4296f20();
   input += synapse0x4296f60();
   input += synapse0x4296fa0();
   input += synapse0x42971f0();
   input += synapse0x4297230();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a11e0() {
   double input = input0x42a11e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x4297270() {
   double input = 0.049143;
   input += synapse0x4296ae0();
   input += synapse0x4296b20();
   input += synapse0x4296b60();
   input += synapse0x4296ba0();
   input += synapse0x4297520();
   input += synapse0x42a3870();
   input += synapse0x42a38b0();
   input += synapse0x42a38f0();
   input += synapse0x42a3930();
   input += synapse0x42a3970();
   input += synapse0x42a39b0();
   input += synapse0x42a39f0();
   input += synapse0x42a3a30();
   input += synapse0x42a3a70();
   input += synapse0x42a3ab0();
   input += synapse0x42a3af0();
   input += synapse0x4297400();
   input += synapse0x4297440();
   input += synapse0x42a3c40();
   input += synapse0x42a3c80();
   input += synapse0x42a3cc0();
   input += synapse0x42a3d00();
   input += synapse0x42a3d40();
   input += synapse0x42a3d80();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x4297270() {
   double input = input0x4297270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a3dc0() {
   double input = -11.0618;
   input += synapse0x42a4100();
   input += synapse0x42a4140();
   input += synapse0x42a4180();
   input += synapse0x42a41c0();
   input += synapse0x42a4200();
   input += synapse0x42a4240();
   input += synapse0x42a4280();
   input += synapse0x42a42c0();
   input += synapse0x42a4300();
   input += synapse0x42a4340();
   input += synapse0x42a4380();
   input += synapse0x42a43c0();
   input += synapse0x42a4400();
   input += synapse0x42a4440();
   input += synapse0x42a4480();
   input += synapse0x42a44c0();
   input += synapse0x42a3f50();
   input += synapse0x42a3f90();
   input += synapse0x42a4610();
   input += synapse0x42a4650();
   input += synapse0x42a4690();
   input += synapse0x42a46d0();
   input += synapse0x42a4710();
   input += synapse0x42a4750();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a3dc0() {
   double input = input0x42a3dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a4790() {
   double input = 1.52414;
   input += synapse0x42a4ad0();
   input += synapse0x42a4b10();
   input += synapse0x42a4b50();
   input += synapse0x42a4b90();
   input += synapse0x42a4bd0();
   input += synapse0x42a4c10();
   input += synapse0x42a4c50();
   input += synapse0x42a4c90();
   input += synapse0x42a4cd0();
   input += synapse0x42a4d10();
   input += synapse0x42a4d50();
   input += synapse0x42a4d90();
   input += synapse0x42a4dd0();
   input += synapse0x42a4e10();
   input += synapse0x42a4e50();
   input += synapse0x42a4e90();
   input += synapse0x42a4920();
   input += synapse0x42a4960();
   input += synapse0x42a4fe0();
   input += synapse0x42a5020();
   input += synapse0x42a5060();
   input += synapse0x42a50a0();
   input += synapse0x42a50e0();
   input += synapse0x42a5120();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a4790() {
   double input = input0x42a4790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a5160() {
   double input = 0.165973;
   input += synapse0x42a54a0();
   input += synapse0x42a54e0();
   input += synapse0x42a5520();
   input += synapse0x42a5560();
   input += synapse0x42a55a0();
   input += synapse0x42a55e0();
   input += synapse0x42a5620();
   input += synapse0x42a5660();
   input += synapse0x42a56a0();
   input += synapse0x42a56e0();
   input += synapse0x42a5720();
   input += synapse0x42a5760();
   input += synapse0x42a57a0();
   input += synapse0x42a57e0();
   input += synapse0x42a5820();
   input += synapse0x42a5860();
   input += synapse0x42a52f0();
   input += synapse0x42a5330();
   input += synapse0x42a59b0();
   input += synapse0x42a59f0();
   input += synapse0x42a5a30();
   input += synapse0x42a5a70();
   input += synapse0x42a5ab0();
   input += synapse0x42a5af0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a5160() {
   double input = input0x42a5160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a5b30() {
   double input = -1.14748;
   input += synapse0x42a5e70();
   input += synapse0x42a5eb0();
   input += synapse0x42a5ef0();
   input += synapse0x42a5f30();
   input += synapse0x42a5f70();
   input += synapse0x42a5fb0();
   input += synapse0x42a5ff0();
   input += synapse0x42a6030();
   input += synapse0x42a6070();
   input += synapse0x42a60b0();
   input += synapse0x42a60f0();
   input += synapse0x42a6130();
   input += synapse0x42a6170();
   input += synapse0x42a61b0();
   input += synapse0x42a61f0();
   input += synapse0x42a6230();
   input += synapse0x42a5cc0();
   input += synapse0x42a5d00();
   input += synapse0x42a6380();
   input += synapse0x42a63c0();
   input += synapse0x42a6400();
   input += synapse0x42a6440();
   input += synapse0x42a6480();
   input += synapse0x42a64c0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a5b30() {
   double input = input0x42a5b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a6500() {
   double input = 0.675114;
   input += synapse0x42a6840();
   input += synapse0x42a6880();
   input += synapse0x42a68c0();
   input += synapse0x42a6900();
   input += synapse0x42a6940();
   input += synapse0x42a6980();
   input += synapse0x42a69c0();
   input += synapse0x42a6a00();
   input += synapse0x42a6a40();
   input += synapse0x42a6a80();
   input += synapse0x42a6ac0();
   input += synapse0x42a6b00();
   input += synapse0x42a6b40();
   input += synapse0x42a6b80();
   input += synapse0x42a6bc0();
   input += synapse0x42a6c00();
   input += synapse0x42a6690();
   input += synapse0x42a66d0();
   input += synapse0x42a6d50();
   input += synapse0x42a6d90();
   input += synapse0x42a6dd0();
   input += synapse0x42a6e10();
   input += synapse0x42a6e50();
   input += synapse0x42a6e90();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a6500() {
   double input = input0x42a6500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a6ed0() {
   double input = -0.925687;
   input += synapse0x42a7210();
   input += synapse0x42a7250();
   input += synapse0x42a7290();
   input += synapse0x42a72d0();
   input += synapse0x42a7310();
   input += synapse0x42a7350();
   input += synapse0x42a7390();
   input += synapse0x42a73d0();
   input += synapse0x42a7410();
   input += synapse0x42a7450();
   input += synapse0x42a7490();
   input += synapse0x42a74d0();
   input += synapse0x42a7510();
   input += synapse0x42a7550();
   input += synapse0x42a7590();
   input += synapse0x42a75d0();
   input += synapse0x42a7060();
   input += synapse0x42a70a0();
   input += synapse0x42a7720();
   input += synapse0x42a7760();
   input += synapse0x42a77a0();
   input += synapse0x42a77e0();
   input += synapse0x42a7820();
   input += synapse0x42a7860();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a6ed0() {
   double input = input0x42a6ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a78a0() {
   double input = 13.2268;
   input += synapse0x42a7be0();
   input += synapse0x42a7c20();
   input += synapse0x42a7c60();
   input += synapse0x42a7ca0();
   input += synapse0x42a7ce0();
   input += synapse0x42a7d20();
   input += synapse0x42a7d60();
   input += synapse0x42a7da0();
   input += synapse0x42a7de0();
   input += synapse0x42a7e20();
   input += synapse0x42a7e60();
   input += synapse0x42a7ea0();
   input += synapse0x42a7ee0();
   input += synapse0x42a7f20();
   input += synapse0x42a7f60();
   input += synapse0x42a7fa0();
   input += synapse0x42a7a30();
   input += synapse0x42a7a70();
   input += synapse0x42a80f0();
   input += synapse0x42a8130();
   input += synapse0x42a8170();
   input += synapse0x42a81b0();
   input += synapse0x42a81f0();
   input += synapse0x42a8230();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a78a0() {
   double input = input0x42a78a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a8270() {
   double input = -0.14095;
   input += synapse0x4290ce0();
   input += synapse0x4290d20();
   input += synapse0x4290d60();
   input += synapse0x4290da0();
   input += synapse0x4290de0();
   input += synapse0x4290e20();
   input += synapse0x4290e60();
   input += synapse0x4290ea0();
   input += synapse0x42a89c0();
   input += synapse0x42a8a00();
   input += synapse0x42a8a40();
   input += synapse0x42a8a80();
   input += synapse0x42a8ac0();
   input += synapse0x42a8b00();
   input += synapse0x42a8b40();
   input += synapse0x42a8b80();
   input += synapse0x42a8400();
   input += synapse0x42a8440();
   input += synapse0x42a8cd0();
   input += synapse0x42a8d10();
   input += synapse0x42a8d50();
   input += synapse0x42a8d90();
   input += synapse0x42a8dd0();
   input += synapse0x42a8e10();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a8270() {
   double input = input0x42a8270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a8e50() {
   double input = -1.95914;
   input += synapse0x42a9190();
   input += synapse0x42a91d0();
   input += synapse0x42a9210();
   input += synapse0x42a9250();
   input += synapse0x42a9290();
   input += synapse0x42a92d0();
   input += synapse0x42a9310();
   input += synapse0x42a9350();
   input += synapse0x42a9390();
   input += synapse0x42a93d0();
   input += synapse0x42a9410();
   input += synapse0x42a9450();
   input += synapse0x42a9490();
   input += synapse0x42a94d0();
   input += synapse0x42a9510();
   input += synapse0x42a9550();
   input += synapse0x42a8fe0();
   input += synapse0x42a9020();
   input += synapse0x42a96a0();
   input += synapse0x42a96e0();
   input += synapse0x42a9720();
   input += synapse0x42a9760();
   input += synapse0x42a97a0();
   input += synapse0x42a97e0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a8e50() {
   double input = input0x42a8e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42a9820() {
   double input = 0.873606;
   input += synapse0x42a9b60();
   input += synapse0x42a9ba0();
   input += synapse0x42a9be0();
   input += synapse0x42a9c20();
   input += synapse0x42a9c60();
   input += synapse0x42a9ca0();
   input += synapse0x42a9ce0();
   input += synapse0x42a9d20();
   input += synapse0x42a9d60();
   input += synapse0x42a9da0();
   input += synapse0x42a9de0();
   input += synapse0x42a9e20();
   input += synapse0x42a9e60();
   input += synapse0x42a9ea0();
   input += synapse0x42a9ee0();
   input += synapse0x42a9f20();
   input += synapse0x42a99b0();
   input += synapse0x42a99f0();
   input += synapse0x429a520();
   input += synapse0x429a560();
   input += synapse0x429a5a0();
   input += synapse0x429a5e0();
   input += synapse0x429a620();
   input += synapse0x429a660();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42a9820() {
   double input = input0x42a9820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429a6a0() {
   double input = 1.22858;
   input += synapse0x429a9e0();
   input += synapse0x429aa20();
   input += synapse0x429aa60();
   input += synapse0x429aaa0();
   input += synapse0x429aae0();
   input += synapse0x429ab20();
   input += synapse0x429ab60();
   input += synapse0x429aba0();
   input += synapse0x429abe0();
   input += synapse0x429ac20();
   input += synapse0x429ac60();
   input += synapse0x429aca0();
   input += synapse0x429ace0();
   input += synapse0x429ad20();
   input += synapse0x429ad60();
   input += synapse0x429ada0();
   input += synapse0x429a830();
   input += synapse0x429a870();
   input += synapse0x429aef0();
   input += synapse0x429af30();
   input += synapse0x429af70();
   input += synapse0x429afb0();
   input += synapse0x429aff0();
   input += synapse0x429b030();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429a6a0() {
   double input = input0x429a6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429b070() {
   double input = -0.244209;
   input += synapse0x429b3b0();
   input += synapse0x429b3f0();
   input += synapse0x429b430();
   input += synapse0x429b470();
   input += synapse0x429b4b0();
   input += synapse0x429b4f0();
   input += synapse0x429b530();
   input += synapse0x429b570();
   input += synapse0x429b5b0();
   input += synapse0x429b5f0();
   input += synapse0x429b630();
   input += synapse0x429b670();
   input += synapse0x429b6b0();
   input += synapse0x429b6f0();
   input += synapse0x429b730();
   input += synapse0x429b770();
   input += synapse0x429b200();
   input += synapse0x429b240();
   input += synapse0x429b8c0();
   input += synapse0x429b900();
   input += synapse0x429b940();
   input += synapse0x429b980();
   input += synapse0x429b9c0();
   input += synapse0x429ba00();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429b070() {
   double input = input0x429b070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x429ba40() {
   double input = -0.434674;
   input += synapse0x429bd80();
   input += synapse0x429bdc0();
   input += synapse0x429be00();
   input += synapse0x429be40();
   input += synapse0x429be80();
   input += synapse0x429bec0();
   input += synapse0x429bf00();
   input += synapse0x429bf40();
   input += synapse0x429bf80();
   input += synapse0x429bfc0();
   input += synapse0x429c000();
   input += synapse0x429c040();
   input += synapse0x429c080();
   input += synapse0x429c0c0();
   input += synapse0x429c100();
   input += synapse0x429c140();
   input += synapse0x429bbd0();
   input += synapse0x429bc10();
   input += synapse0x429c290();
   input += synapse0x429c2d0();
   input += synapse0x429c310();
   input += synapse0x429c350();
   input += synapse0x429c390();
   input += synapse0x429c3d0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x429ba40() {
   double input = input0x429ba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42ae080() {
   double input = 4.48323;
   input += synapse0x42ae2a0();
   input += synapse0x42ae2e0();
   input += synapse0x42ae320();
   input += synapse0x42ae360();
   input += synapse0x42ae3a0();
   input += synapse0x42ae3e0();
   input += synapse0x42ae420();
   input += synapse0x42ae460();
   input += synapse0x42ae4a0();
   input += synapse0x42ae4e0();
   input += synapse0x42ae520();
   input += synapse0x42ae560();
   input += synapse0x42ae5a0();
   input += synapse0x42ae5e0();
   input += synapse0x42ae620();
   input += synapse0x42ae660();
   input += synapse0x429c410();
   input += synapse0x429c450();
   input += synapse0x42ae7b0();
   input += synapse0x42ae7f0();
   input += synapse0x42ae830();
   input += synapse0x42ae870();
   input += synapse0x42ae8b0();
   input += synapse0x42ae8f0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42ae080() {
   double input = input0x42ae080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42ae930() {
   double input = -0.0699773;
   input += synapse0x42aec70();
   input += synapse0x42aecb0();
   input += synapse0x42aecf0();
   input += synapse0x42aed30();
   input += synapse0x42aed70();
   input += synapse0x42aedb0();
   input += synapse0x42aedf0();
   input += synapse0x42aee30();
   input += synapse0x42aee70();
   input += synapse0x42aeeb0();
   input += synapse0x42aeef0();
   input += synapse0x42aef30();
   input += synapse0x42aef70();
   input += synapse0x42aefb0();
   input += synapse0x42aeff0();
   input += synapse0x42af030();
   input += synapse0x42aeac0();
   input += synapse0x42aeb00();
   input += synapse0x42af180();
   input += synapse0x42af1c0();
   input += synapse0x42af200();
   input += synapse0x42af240();
   input += synapse0x42af280();
   input += synapse0x42af2c0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42ae930() {
   double input = input0x42ae930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42af300() {
   double input = 6.47234;
   input += synapse0x42af640();
   input += synapse0x42af680();
   input += synapse0x42af6c0();
   input += synapse0x42af700();
   input += synapse0x42af740();
   input += synapse0x42af780();
   input += synapse0x42af7c0();
   input += synapse0x42af800();
   input += synapse0x42af840();
   input += synapse0x42af880();
   input += synapse0x42af8c0();
   input += synapse0x42af900();
   input += synapse0x42af940();
   input += synapse0x42af980();
   input += synapse0x42af9c0();
   input += synapse0x42afa00();
   input += synapse0x42af490();
   input += synapse0x42af4d0();
   input += synapse0x42afb50();
   input += synapse0x42afb90();
   input += synapse0x42afbd0();
   input += synapse0x42afc10();
   input += synapse0x42afc50();
   input += synapse0x42afc90();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42af300() {
   double input = input0x42af300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42afcd0() {
   double input = 0.197942;
   input += synapse0x42b0010();
   input += synapse0x42b0050();
   input += synapse0x42b0090();
   input += synapse0x42b00d0();
   input += synapse0x42b0110();
   input += synapse0x42b0150();
   input += synapse0x42b0190();
   input += synapse0x42b01d0();
   input += synapse0x42b0210();
   input += synapse0x42b0250();
   input += synapse0x42b0290();
   input += synapse0x42b02d0();
   input += synapse0x42b0310();
   input += synapse0x42b0350();
   input += synapse0x42b0390();
   input += synapse0x42b03d0();
   input += synapse0x42afe60();
   input += synapse0x42afea0();
   input += synapse0x42b0520();
   input += synapse0x42b0560();
   input += synapse0x42b05a0();
   input += synapse0x42b05e0();
   input += synapse0x42b0620();
   input += synapse0x42b0660();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42afcd0() {
   double input = input0x42afcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42b6ed0() {
   double input = 2.19235;
   input += synapse0x4050440();
   input += synapse0x4050480();
   input += synapse0x428d000();
   input += synapse0x428d040();
   input += synapse0x428eae0();
   input += synapse0x428eb20();
   input += synapse0x428f8b0();
   input += synapse0x428f8f0();
   input += synapse0x4290280();
   input += synapse0x42902c0();
   input += synapse0x4290c50();
   input += synapse0x4290c90();
   input += synapse0x4291730();
   input += synapse0x4291770();
   input += synapse0x4292100();
   input += synapse0x4292140();
   input += synapse0x428f1e0();
   input += synapse0x428f220();
   input += synapse0x4293cb0();
   input += synapse0x4293cf0();
   input += synapse0x4294680();
   input += synapse0x42946c0();
   input += synapse0x4295050();
   input += synapse0x4295090();
   input += synapse0x4295a20();
   input += synapse0x4295a60();
   input += synapse0x4288ab0();
   input += synapse0x4288af0();
   input += synapse0x4297b10();
   input += synapse0x4297b50();
   input += synapse0x42984e0();
   input += synapse0x4298520();
   input += synapse0x4298eb0();
   input += synapse0x4298ef0();
   input += synapse0x4299880();
   input += synapse0x42998c0();
   input += synapse0x429a250();
   input += synapse0x429a290();
   input += synapse0x4292da0();
   input += synapse0x4292de0();
   input += synapse0x429c650();
   input += synapse0x429c690();
   input += synapse0x429cfe0();
   input += synapse0x429d020();
   input += synapse0x429d9b0();
   input += synapse0x429d9f0();
   input += synapse0x429e380();
   input += synapse0x429e3c0();
   input += synapse0x429ed50();
   input += synapse0x429ed90();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42b6ed0() {
   double input = input0x42b6ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42b7270() {
   double input = -0.64383;
   input += synapse0x42a1490();
   input += synapse0x42a14d0();
   input += synapse0x4296a50();
   input += synapse0x4296a90();
   input += synapse0x42a4070();
   input += synapse0x42a40b0();
   input += synapse0x42a4a40();
   input += synapse0x42a4a80();
   input += synapse0x42a5410();
   input += synapse0x42a5450();
   input += synapse0x42a5de0();
   input += synapse0x42a5e20();
   input += synapse0x42a67b0();
   input += synapse0x42a67f0();
   input += synapse0x42a7180();
   input += synapse0x42a71c0();
   input += synapse0x42a7b50();
   input += synapse0x42a7b90();
   input += synapse0x42a8520();
   input += synapse0x42a8560();
   input += synapse0x42a9100();
   input += synapse0x42a9140();
   input += synapse0x42a9ad0();
   input += synapse0x42a9b10();
   input += synapse0x429a950();
   input += synapse0x429a990();
   input += synapse0x429b320();
   input += synapse0x429b360();
   input += synapse0x429bcf0();
   input += synapse0x429bd30();
   input += synapse0x42ae210();
   input += synapse0x42ae250();
   input += synapse0x42aebe0();
   input += synapse0x42aec20();
   input += synapse0x42af5b0();
   input += synapse0x42af5f0();
   input += synapse0x42aff80();
   input += synapse0x42affc0();
   input += synapse0x428adf0();
   input += synapse0x428ae30();
   input += synapse0x429f720();
   input += synapse0x429f760();
   input += synapse0x42b06a0();
   input += synapse0x42b06e0();
   input += synapse0x42b0720();
   input += synapse0x42b0760();
   input += synapse0x42b7610();
   input += synapse0x42b7650();
   input += synapse0x42b7690();
   input += synapse0x42b76d0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42b7270() {
   double input = input0x42b7270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42b7710() {
   double input = -0.523012;
   input += synapse0x42b7a50();
   input += synapse0x42b7a90();
   input += synapse0x42b7ad0();
   input += synapse0x42b7b10();
   input += synapse0x42b7b50();
   input += synapse0x42b7b90();
   input += synapse0x42b7bd0();
   input += synapse0x42b7c10();
   input += synapse0x42b7c50();
   input += synapse0x42b7c90();
   input += synapse0x42b7cd0();
   input += synapse0x42b7d10();
   input += synapse0x42b7d50();
   input += synapse0x42b7d90();
   input += synapse0x42b7dd0();
   input += synapse0x42b7e10();
   input += synapse0x42b78a0();
   input += synapse0x42b78e0();
   input += synapse0x42b7f60();
   input += synapse0x42b7fa0();
   input += synapse0x42b7fe0();
   input += synapse0x42b8020();
   input += synapse0x42b8060();
   input += synapse0x42b80a0();
   input += synapse0x42b80e0();
   input += synapse0x42b8120();
   input += synapse0x42b8160();
   input += synapse0x42b81a0();
   input += synapse0x42b81e0();
   input += synapse0x42b8220();
   input += synapse0x42b8260();
   input += synapse0x42b82a0();
   input += synapse0x42b7e50();
   input += synapse0x42b7e90();
   input += synapse0x42b7ed0();
   input += synapse0x42b7f10();
   input += synapse0x42b84f0();
   input += synapse0x42b8530();
   input += synapse0x42b8570();
   input += synapse0x42b85b0();
   input += synapse0x42b85f0();
   input += synapse0x42b8630();
   input += synapse0x42b8670();
   input += synapse0x42b86b0();
   input += synapse0x42b86f0();
   input += synapse0x42b8730();
   input += synapse0x42b8770();
   input += synapse0x42b87b0();
   input += synapse0x42b87f0();
   input += synapse0x42b8830();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42b7710() {
   double input = input0x42b7710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42b8870() {
   double input = -1.31397;
   input += synapse0x42b8bb0();
   input += synapse0x42b8bf0();
   input += synapse0x42b8c30();
   input += synapse0x42b8c70();
   input += synapse0x42b8cb0();
   input += synapse0x42b8cf0();
   input += synapse0x42b8d30();
   input += synapse0x42b8d70();
   input += synapse0x42b8db0();
   input += synapse0x42b8df0();
   input += synapse0x42b8e30();
   input += synapse0x42b8e70();
   input += synapse0x42b8eb0();
   input += synapse0x42b8ef0();
   input += synapse0x42b8f30();
   input += synapse0x42b8f70();
   input += synapse0x42b8a00();
   input += synapse0x42b8a40();
   input += synapse0x42b90c0();
   input += synapse0x42b9100();
   input += synapse0x42b9140();
   input += synapse0x42b9180();
   input += synapse0x42b91c0();
   input += synapse0x42b9200();
   input += synapse0x42b9240();
   input += synapse0x42b9280();
   input += synapse0x42b92c0();
   input += synapse0x42b9300();
   input += synapse0x42b9340();
   input += synapse0x42b9380();
   input += synapse0x42b93c0();
   input += synapse0x42b9400();
   input += synapse0x42b8fb0();
   input += synapse0x42b8ff0();
   input += synapse0x42b9030();
   input += synapse0x42b9070();
   input += synapse0x42b9650();
   input += synapse0x42b9690();
   input += synapse0x42b96d0();
   input += synapse0x42b9710();
   input += synapse0x42b9750();
   input += synapse0x42b9790();
   input += synapse0x42b97d0();
   input += synapse0x42b9810();
   input += synapse0x42b9850();
   input += synapse0x42b9890();
   input += synapse0x42b98d0();
   input += synapse0x42b9910();
   input += synapse0x42b9950();
   input += synapse0x42b9990();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42b8870() {
   double input = input0x42b8870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42b99d0() {
   double input = -3.11262;
   input += synapse0x42b9d10();
   input += synapse0x42b9d50();
   input += synapse0x42b9d90();
   input += synapse0x42b9dd0();
   input += synapse0x42b9e10();
   input += synapse0x42b9e50();
   input += synapse0x42b9e90();
   input += synapse0x42b9ed0();
   input += synapse0x42b9f10();
   input += synapse0x42b9f50();
   input += synapse0x42b9f90();
   input += synapse0x42b9fd0();
   input += synapse0x42ba010();
   input += synapse0x42ba050();
   input += synapse0x42ba090();
   input += synapse0x42ba0d0();
   input += synapse0x42b9b60();
   input += synapse0x42b9ba0();
   input += synapse0x42ba220();
   input += synapse0x42ba260();
   input += synapse0x42ba2a0();
   input += synapse0x42ba2e0();
   input += synapse0x42ba320();
   input += synapse0x42ba360();
   input += synapse0x42ba3a0();
   input += synapse0x42ba3e0();
   input += synapse0x42ba420();
   input += synapse0x42ba460();
   input += synapse0x42ba4a0();
   input += synapse0x42ba4e0();
   input += synapse0x42ba520();
   input += synapse0x42ba560();
   input += synapse0x42ba110();
   input += synapse0x42ba150();
   input += synapse0x42ba190();
   input += synapse0x42ba1d0();
   input += synapse0x42ba7b0();
   input += synapse0x42ba7f0();
   input += synapse0x42ba830();
   input += synapse0x42ba870();
   input += synapse0x42ba8b0();
   input += synapse0x42ba8f0();
   input += synapse0x42ba930();
   input += synapse0x42ba970();
   input += synapse0x42ba9b0();
   input += synapse0x42ba9f0();
   input += synapse0x42baa30();
   input += synapse0x42baa70();
   input += synapse0x42baab0();
   input += synapse0x42baaf0();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42b99d0() {
   double input = input0x42b99d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_charge1m::input0x42bab30() {
   double input = 8.7747;
   input += synapse0x42bad50();
   input += synapse0x42bad90();
   input += synapse0x42badd0();
   input += synapse0x42bae10();
   input += synapse0x42bae50();
   return input;
}

double NNfunction_nn_chi2_charge1m::neuron0x42bab30() {
   double input = input0x42bab30();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_charge1m::synapse0x428ae80() {
   return (neuron0x4285ba0()*-0.398991);
}

double NNfunction_nn_chi2_charge1m::synapse0x428aec0() {
   return (neuron0x4285e50()*1.05299);
}

double NNfunction_nn_chi2_charge1m::synapse0x428af00() {
   return (neuron0x4286190()*0.263297);
}

double NNfunction_nn_chi2_charge1m::synapse0x428af40() {
   return (neuron0x42864d0()*-1.21073);
}

double NNfunction_nn_chi2_charge1m::synapse0x428af80() {
   return (neuron0x4286810()*0.239465);
}

double NNfunction_nn_chi2_charge1m::synapse0x428afc0() {
   return (neuron0x4286b50()*0.446465);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b000() {
   return (neuron0x4286e90()*0.63066);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b040() {
   return (neuron0x42871d0()*-0.11413);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b080() {
   return (neuron0x4287510()*0.360174);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b0c0() {
   return (neuron0x4287850()*-0.0424655);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b100() {
   return (neuron0x4287b90()*-0.352834);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b140() {
   return (neuron0x4287ed0()*0.372092);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b180() {
   return (neuron0x4288210()*0.755108);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b1c0() {
   return (neuron0x4288550()*-1.59285);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b200() {
   return (neuron0x4288890()*-0.683687);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b240() {
   return (neuron0x4288bd0()*0.249819);
}

double NNfunction_nn_chi2_charge1m::synapse0x428acd0() {
   return (neuron0x4288f10()*-0.790478);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ad10() {
   return (neuron0x4289470()*-1.00229);
}

double NNfunction_nn_chi2_charge1m::synapse0x2de9eb0() {
   return (neuron0x4289690()*1.08503);
}

double NNfunction_nn_chi2_charge1m::synapse0x2de9ef0() {
   return (neuron0x42899d0()*-0.546306);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b390() {
   return (neuron0x4289d10()*-0.738505);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b3d0() {
   return (neuron0x428a050()*-0.334605);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b410() {
   return (neuron0x428a390()*0.783807);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b450() {
   return (neuron0x428a6d0()*0.286661);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b7d0() {
   return (neuron0x4285ba0()*0.0426132);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b810() {
   return (neuron0x4285e50()*2.03416);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b850() {
   return (neuron0x4286190()*-2.73291);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b890() {
   return (neuron0x42864d0()*-0.0332889);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b8d0() {
   return (neuron0x4286810()*0.0966163);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b910() {
   return (neuron0x4286b50()*0.00897536);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b950() {
   return (neuron0x4286e90()*-0.0507322);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b990() {
   return (neuron0x42871d0()*-0.0160268);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b9d0() {
   return (neuron0x4287510()*0.0694129);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b280() {
   return (neuron0x4287850()*-0.141644);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b2c0() {
   return (neuron0x4287b90()*-0.0592636);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b300() {
   return (neuron0x4287ed0()*0.175786);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b340() {
   return (neuron0x4288210()*0.0359283);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bc20() {
   return (neuron0x4288550()*-0.0213552);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bc60() {
   return (neuron0x4288890()*-0.0212556);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bca0() {
   return (neuron0x4288bd0()*-0.0188933);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b620() {
   return (neuron0x4288f10()*0.00842012);
}

double NNfunction_nn_chi2_charge1m::synapse0x428b660() {
   return (neuron0x4289470()*-0.146484);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bdf0() {
   return (neuron0x4289690()*0.0448491);
}

double NNfunction_nn_chi2_charge1m::synapse0x428be30() {
   return (neuron0x42899d0()*-0.0842319);
}

double NNfunction_nn_chi2_charge1m::synapse0x428be70() {
   return (neuron0x4289d10()*-0.0423332);
}

double NNfunction_nn_chi2_charge1m::synapse0x428beb0() {
   return (neuron0x428a050()*0.0211446);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bef0() {
   return (neuron0x428a390()*0.00262273);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bf30() {
   return (neuron0x428a6d0()*-5.88025);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c2b0() {
   return (neuron0x4285ba0()*0.0242586);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c2f0() {
   return (neuron0x4285e50()*-0.222022);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c330() {
   return (neuron0x4286190()*0.376217);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c370() {
   return (neuron0x42864d0()*-1.48744);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c3b0() {
   return (neuron0x4286810()*-0.31291);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c3f0() {
   return (neuron0x4286b50()*-0.404873);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c430() {
   return (neuron0x4286e90()*-0.223651);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c470() {
   return (neuron0x42871d0()*0.610724);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c4b0() {
   return (neuron0x4287510()*-0.95151);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c4f0() {
   return (neuron0x4287850()*2.34237);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c530() {
   return (neuron0x4287b90()*0.0768408);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c570() {
   return (neuron0x4287ed0()*0.310326);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c5b0() {
   return (neuron0x4288210()*-1.15424);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c5f0() {
   return (neuron0x4288550()*0.476936);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c630() {
   return (neuron0x4288890()*0.0935281);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c670() {
   return (neuron0x4288bd0()*0.0471213);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c100() {
   return (neuron0x4288f10()*-0.339041);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c140() {
   return (neuron0x4289470()*-0.226277);
}

double NNfunction_nn_chi2_charge1m::synapse0x2dfee90() {
   return (neuron0x4289690()*-0.19408);
}

double NNfunction_nn_chi2_charge1m::synapse0x404fc50() {
   return (neuron0x42899d0()*-0.0585128);
}

double NNfunction_nn_chi2_charge1m::synapse0x404fc90() {
   return (neuron0x4289d10()*-0.940344);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e5b0() {
   return (neuron0x428a050()*0.988425);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e5f0() {
   return (neuron0x428a390()*-0.230022);
}

double NNfunction_nn_chi2_charge1m::synapse0x42858e0() {
   return (neuron0x428a6d0()*-0.0965406);
}

double NNfunction_nn_chi2_charge1m::synapse0x42859b0() {
   return (neuron0x4285ba0()*-0.000619625);
}

double NNfunction_nn_chi2_charge1m::synapse0x40504d0() {
   return (neuron0x4285e50()*-0.0578651);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bba0() {
   return (neuron0x4286190()*-0.162354);
}

double NNfunction_nn_chi2_charge1m::synapse0x428bbe0() {
   return (neuron0x42864d0()*0.118242);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c7c0() {
   return (neuron0x4286810()*0.181957);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c800() {
   return (neuron0x4286b50()*0.0764524);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c840() {
   return (neuron0x4286e90()*0.0502231);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c880() {
   return (neuron0x42871d0()*-0.109281);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c8c0() {
   return (neuron0x4287510()*0.0195605);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c900() {
   return (neuron0x4287850()*-0.070158);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c940() {
   return (neuron0x4287b90()*0.04865);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c980() {
   return (neuron0x4287ed0()*-1.00587);
}

double NNfunction_nn_chi2_charge1m::synapse0x428c9c0() {
   return (neuron0x4288210()*-0.110759);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ca00() {
   return (neuron0x4288550()*0.21315);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ca40() {
   return (neuron0x4288890()*0.0963007);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ca80() {
   return (neuron0x4288bd0()*0.0943356);
}

double NNfunction_nn_chi2_charge1m::synapse0x4285920() {
   return (neuron0x4288f10()*0.0587236);
}

double NNfunction_nn_chi2_charge1m::synapse0x4285960() {
   return (neuron0x4289470()*-0.0196564);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cbd0() {
   return (neuron0x4289690()*0.0415331);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cc10() {
   return (neuron0x42899d0()*0.0481622);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cc50() {
   return (neuron0x4289d10()*-0.178702);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cc90() {
   return (neuron0x428a050()*0.0467435);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ccd0() {
   return (neuron0x428a390()*0.0651881);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cd10() {
   return (neuron0x428a6d0()*-2.78853);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d090() {
   return (neuron0x4285ba0()*0.0834259);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d0d0() {
   return (neuron0x4285e50()*2.79666);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d110() {
   return (neuron0x4286190()*-5.41371);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d150() {
   return (neuron0x42864d0()*0.104037);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d190() {
   return (neuron0x4286810()*0.0526398);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d1d0() {
   return (neuron0x4286b50()*-0.0585938);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d210() {
   return (neuron0x4286e90()*0.0547801);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d250() {
   return (neuron0x42871d0()*0.00534928);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d290() {
   return (neuron0x4287510()*-0.0305318);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d2d0() {
   return (neuron0x4287850()*-0.0763816);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d310() {
   return (neuron0x4287b90()*0.0369602);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d350() {
   return (neuron0x4287ed0()*0.225364);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d390() {
   return (neuron0x4288210()*0.0668092);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d3d0() {
   return (neuron0x4288550()*0.0740645);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d410() {
   return (neuron0x4288890()*-0.0368649);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d450() {
   return (neuron0x4288bd0()*-0.121692);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d5a0() {
   return (neuron0x4288f10()*-0.0162797);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cee0() {
   return (neuron0x4289470()*0.0015851);
}

double NNfunction_nn_chi2_charge1m::synapse0x428cf20() {
   return (neuron0x4289690()*0.0472481);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e6f0() {
   return (neuron0x42899d0()*-0.0786804);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e730() {
   return (neuron0x4289d10()*-0.0469223);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e770() {
   return (neuron0x428a050()*-0.0548914);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e7b0() {
   return (neuron0x428a390()*0.0983606);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e7f0() {
   return (neuron0x428a6d0()*6.86194);
}

double NNfunction_nn_chi2_charge1m::synapse0x428eb70() {
   return (neuron0x4285ba0()*0.0727812);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ebb0() {
   return (neuron0x4285e50()*16.2036);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ebf0() {
   return (neuron0x4286190()*-9.67695);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ec30() {
   return (neuron0x42864d0()*0.0329977);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ec70() {
   return (neuron0x4286810()*0.0580522);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ecb0() {
   return (neuron0x4286b50()*0.00381517);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ecf0() {
   return (neuron0x4286e90()*0.0359321);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ed30() {
   return (neuron0x42871d0()*-0.0141928);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ed70() {
   return (neuron0x4287510()*-0.00716892);
}

double NNfunction_nn_chi2_charge1m::synapse0x404ffa0() {
   return (neuron0x4287850()*-0.050777);
}

double NNfunction_nn_chi2_charge1m::synapse0x404ffe0() {
   return (neuron0x4287b90()*0.00985734);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050020() {
   return (neuron0x4287ed0()*-0.163989);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050060() {
   return (neuron0x4288210()*-0.0408857);
}

double NNfunction_nn_chi2_charge1m::synapse0x40500a0() {
   return (neuron0x4288550()*-0.0122141);
}

double NNfunction_nn_chi2_charge1m::synapse0x40500e0() {
   return (neuron0x4288890()*-0.03462);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050120() {
   return (neuron0x4288bd0()*0.0114619);
}

double NNfunction_nn_chi2_charge1m::synapse0x428e9c0() {
   return (neuron0x4288f10()*0.0144287);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ea00() {
   return (neuron0x4289470()*-0.0255597);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050270() {
   return (neuron0x4289690()*0.00600981);
}

double NNfunction_nn_chi2_charge1m::synapse0x40502b0() {
   return (neuron0x42899d0()*-0.0296998);
}

double NNfunction_nn_chi2_charge1m::synapse0x40502f0() {
   return (neuron0x4289d10()*0.0172156);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050330() {
   return (neuron0x428a050()*0.0177061);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050370() {
   return (neuron0x428a390()*0.0247658);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f5c0() {
   return (neuron0x428a6d0()*0.0456916);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f940() {
   return (neuron0x4285ba0()*-0.189024);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f980() {
   return (neuron0x4285e50()*-0.644165);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f9c0() {
   return (neuron0x4286190()*-0.0239883);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fa00() {
   return (neuron0x42864d0()*-0.871339);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fa40() {
   return (neuron0x4286810()*0.113557);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fa80() {
   return (neuron0x4286b50()*0.0917655);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fac0() {
   return (neuron0x4286e90()*0.521314);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fb00() {
   return (neuron0x42871d0()*0.496614);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fb40() {
   return (neuron0x4287510()*-0.114354);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fb80() {
   return (neuron0x4287850()*0.119905);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fbc0() {
   return (neuron0x4287b90()*-0.0572352);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fc00() {
   return (neuron0x4287ed0()*0.124184);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fc40() {
   return (neuron0x4288210()*0.130322);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fc80() {
   return (neuron0x4288550()*-0.856862);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fcc0() {
   return (neuron0x4288890()*-0.0343937);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fd00() {
   return (neuron0x4288bd0()*-0.370423);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f790() {
   return (neuron0x4288f10()*-0.628042);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f7d0() {
   return (neuron0x4289470()*-0.797152);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fe50() {
   return (neuron0x4289690()*0.472638);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fe90() {
   return (neuron0x42899d0()*-0.388098);
}

double NNfunction_nn_chi2_charge1m::synapse0x428fed0() {
   return (neuron0x4289d10()*-0.306525);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ff10() {
   return (neuron0x428a050()*-0.391328);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ff50() {
   return (neuron0x428a390()*0.398978);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ff90() {
   return (neuron0x428a6d0()*0.0228059);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290310() {
   return (neuron0x4285ba0()*-0.0188199);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290350() {
   return (neuron0x4285e50()*-0.105507);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290390() {
   return (neuron0x4286190()*3.17887);
}

double NNfunction_nn_chi2_charge1m::synapse0x42903d0() {
   return (neuron0x42864d0()*0.0236505);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290410() {
   return (neuron0x4286810()*-0.124901);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290450() {
   return (neuron0x4286b50()*-0.0498229);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290490() {
   return (neuron0x4286e90()*-0.0507044);
}

double NNfunction_nn_chi2_charge1m::synapse0x42904d0() {
   return (neuron0x42871d0()*0.060946);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290510() {
   return (neuron0x4287510()*-0.0310072);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290550() {
   return (neuron0x4287850()*-0.00174443);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290590() {
   return (neuron0x4287b90()*0.0421822);
}

double NNfunction_nn_chi2_charge1m::synapse0x42905d0() {
   return (neuron0x4287ed0()*1.25968);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290610() {
   return (neuron0x4288210()*-0.00668371);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290650() {
   return (neuron0x4288550()*-0.204439);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290690() {
   return (neuron0x4288890()*-0.0695084);
}

double NNfunction_nn_chi2_charge1m::synapse0x42906d0() {
   return (neuron0x4288bd0()*0.0371096);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290160() {
   return (neuron0x4288f10()*0.0148371);
}

double NNfunction_nn_chi2_charge1m::synapse0x42901a0() {
   return (neuron0x4289470()*-0.0886222);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290820() {
   return (neuron0x4289690()*-0.0284214);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290860() {
   return (neuron0x42899d0()*0.0410732);
}

double NNfunction_nn_chi2_charge1m::synapse0x42908a0() {
   return (neuron0x4289d10()*0.0601194);
}

double NNfunction_nn_chi2_charge1m::synapse0x42908e0() {
   return (neuron0x428a050()*-0.00227952);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290920() {
   return (neuron0x428a390()*-0.0119625);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290960() {
   return (neuron0x428a6d0()*0.00476565);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289360() {
   return (neuron0x4285ba0()*-0.0520059);
}

double NNfunction_nn_chi2_charge1m::synapse0x42893a0() {
   return (neuron0x4285e50()*3.70241);
}

double NNfunction_nn_chi2_charge1m::synapse0x42893e0() {
   return (neuron0x4286190()*1.88572);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289420() {
   return (neuron0x42864d0()*-0.00476191);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290ef0() {
   return (neuron0x4286810()*0.00895041);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290f30() {
   return (neuron0x4286b50()*0.0642426);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290f70() {
   return (neuron0x4286e90()*0.0513391);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290fb0() {
   return (neuron0x42871d0()*0.000331665);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290ff0() {
   return (neuron0x4287510()*-0.0457401);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291030() {
   return (neuron0x4287850()*-0.069104);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291070() {
   return (neuron0x4287b90()*0.0370512);
}

double NNfunction_nn_chi2_charge1m::synapse0x42910b0() {
   return (neuron0x4287ed0()*-1.46659);
}

double NNfunction_nn_chi2_charge1m::synapse0x42910f0() {
   return (neuron0x4288210()*0.0718818);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291130() {
   return (neuron0x4288550()*0.17297);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291170() {
   return (neuron0x4288890()*0.0605462);
}

double NNfunction_nn_chi2_charge1m::synapse0x42911b0() {
   return (neuron0x4288bd0()*-0.0394921);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290b30() {
   return (neuron0x4288f10()*0.0236901);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290b70() {
   return (neuron0x4289470()*0.00521816);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291300() {
   return (neuron0x4289690()*0.10386);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291340() {
   return (neuron0x42899d0()*0.0583558);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291380() {
   return (neuron0x4289d10()*-0.0116901);
}

double NNfunction_nn_chi2_charge1m::synapse0x42913c0() {
   return (neuron0x428a050()*0.0328286);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291400() {
   return (neuron0x428a390()*-0.0824484);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291440() {
   return (neuron0x428a6d0()*0.0410452);
}

double NNfunction_nn_chi2_charge1m::synapse0x42917c0() {
   return (neuron0x4285ba0()*-0.0734758);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291800() {
   return (neuron0x4285e50()*0.276769);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291840() {
   return (neuron0x4286190()*-2.31382);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291880() {
   return (neuron0x42864d0()*0.0974653);
}

double NNfunction_nn_chi2_charge1m::synapse0x42918c0() {
   return (neuron0x4286810()*0.0476122);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291900() {
   return (neuron0x4286b50()*-0.0672685);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291940() {
   return (neuron0x4286e90()*-0.21718);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291980() {
   return (neuron0x42871d0()*0.282825);
}

double NNfunction_nn_chi2_charge1m::synapse0x42919c0() {
   return (neuron0x4287510()*0.496992);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291a00() {
   return (neuron0x4287850()*0.559222);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291a40() {
   return (neuron0x4287b90()*-0.197927);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291a80() {
   return (neuron0x4287ed0()*1.17282);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291ac0() {
   return (neuron0x4288210()*0.366177);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291b00() {
   return (neuron0x4288550()*-0.0290501);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291b40() {
   return (neuron0x4288890()*-0.320049);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291b80() {
   return (neuron0x4288bd0()*-0.0349232);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291610() {
   return (neuron0x4288f10()*-0.199737);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291650() {
   return (neuron0x4289470()*0.478534);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291cd0() {
   return (neuron0x4289690()*0.340339);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291d10() {
   return (neuron0x42899d0()*-0.0104955);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291d50() {
   return (neuron0x4289d10()*0.0866988);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291d90() {
   return (neuron0x428a050()*-0.1503);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291dd0() {
   return (neuron0x428a390()*0.0969275);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291e10() {
   return (neuron0x428a6d0()*0.288534);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292190() {
   return (neuron0x4285ba0()*-0.0371443);
}

double NNfunction_nn_chi2_charge1m::synapse0x42921d0() {
   return (neuron0x4285e50()*2.21214);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292210() {
   return (neuron0x4286190()*-1.78545);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292250() {
   return (neuron0x42864d0()*-0.125324);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292290() {
   return (neuron0x4286810()*-0.129298);
}

double NNfunction_nn_chi2_charge1m::synapse0x42922d0() {
   return (neuron0x4286b50()*0.0328624);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292310() {
   return (neuron0x4286e90()*0.107978);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292350() {
   return (neuron0x42871d0()*0.103133);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292390() {
   return (neuron0x4287510()*-0.0698752);
}

double NNfunction_nn_chi2_charge1m::synapse0x42923d0() {
   return (neuron0x4287850()*0.085605);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292410() {
   return (neuron0x4287b90()*0.032747);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292450() {
   return (neuron0x4287ed0()*1.24302);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292490() {
   return (neuron0x4288210()*0.138287);
}

double NNfunction_nn_chi2_charge1m::synapse0x42924d0() {
   return (neuron0x4288550()*-0.191278);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292510() {
   return (neuron0x4288890()*-0.0290013);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292550() {
   return (neuron0x4288bd0()*-0.181144);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291fe0() {
   return (neuron0x4288f10()*0.116392);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292020() {
   return (neuron0x4289470()*0.184914);
}

double NNfunction_nn_chi2_charge1m::synapse0x428edb0() {
   return (neuron0x4289690()*0.126537);
}

double NNfunction_nn_chi2_charge1m::synapse0x428edf0() {
   return (neuron0x42899d0()*0.0420781);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ee30() {
   return (neuron0x4289d10()*0.0570424);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ee70() {
   return (neuron0x428a050()*0.0101821);
}

double NNfunction_nn_chi2_charge1m::synapse0x428eeb0() {
   return (neuron0x428a390()*-0.0746762);
}

double NNfunction_nn_chi2_charge1m::synapse0x428eef0() {
   return (neuron0x428a6d0()*-0.13337);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f270() {
   return (neuron0x4285ba0()*0.0923931);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f2b0() {
   return (neuron0x4285e50()*17.9577);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f2f0() {
   return (neuron0x4286190()*-11.0967);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f330() {
   return (neuron0x42864d0()*0.0272785);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f370() {
   return (neuron0x4286810()*0.0586894);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f3b0() {
   return (neuron0x4286b50()*0.0204306);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f3f0() {
   return (neuron0x4286e90()*0.0221153);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f430() {
   return (neuron0x42871d0()*-0.0237629);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f470() {
   return (neuron0x4287510()*0.0106504);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f4b0() {
   return (neuron0x4287850()*-0.0528851);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f4f0() {
   return (neuron0x4287b90()*0.0107212);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f530() {
   return (neuron0x4287ed0()*-0.0441274);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f570() {
   return (neuron0x4288210()*-0.023726);
}

double NNfunction_nn_chi2_charge1m::synapse0x42936b0() {
   return (neuron0x4288550()*-0.016187);
}

double NNfunction_nn_chi2_charge1m::synapse0x42936f0() {
   return (neuron0x4288890()*-0.0563592);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293730() {
   return (neuron0x4288bd0()*0.00609512);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f0c0() {
   return (neuron0x4288f10()*0.0164278);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f100() {
   return (neuron0x4289470()*-0.024465);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293880() {
   return (neuron0x4289690()*0.0286738);
}

double NNfunction_nn_chi2_charge1m::synapse0x42938c0() {
   return (neuron0x42899d0()*-0.030787);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293900() {
   return (neuron0x4289d10()*0.00665983);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293940() {
   return (neuron0x428a050()*0.025679);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293980() {
   return (neuron0x428a390()*0.014332);
}

double NNfunction_nn_chi2_charge1m::synapse0x42939c0() {
   return (neuron0x428a6d0()*0.0160609);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293d40() {
   return (neuron0x4285ba0()*-0.393053);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293d80() {
   return (neuron0x4285e50()*1.03033);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293dc0() {
   return (neuron0x4286190()*-0.782921);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293e00() {
   return (neuron0x42864d0()*-2.14521);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293e40() {
   return (neuron0x4286810()*-1.05454);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293e80() {
   return (neuron0x4286b50()*1.9977);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293ec0() {
   return (neuron0x4286e90()*0.475762);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293f00() {
   return (neuron0x42871d0()*1.44309);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293f40() {
   return (neuron0x4287510()*-0.591627);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293f80() {
   return (neuron0x4287850()*-1.14497);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293fc0() {
   return (neuron0x4287b90()*0.428098);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294000() {
   return (neuron0x4287ed0()*-1.06723);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294040() {
   return (neuron0x4288210()*0.104138);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294080() {
   return (neuron0x4288550()*0.0933607);
}

double NNfunction_nn_chi2_charge1m::synapse0x42940c0() {
   return (neuron0x4288890()*0.0641466);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294100() {
   return (neuron0x4288bd0()*0.0788926);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293b90() {
   return (neuron0x4288f10()*-0.956905);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293bd0() {
   return (neuron0x4289470()*0.201935);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294250() {
   return (neuron0x4289690()*0.180021);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294290() {
   return (neuron0x42899d0()*-0.522746);
}

double NNfunction_nn_chi2_charge1m::synapse0x42942d0() {
   return (neuron0x4289d10()*1.79833);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294310() {
   return (neuron0x428a050()*0.741663);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294350() {
   return (neuron0x428a390()*-1.72217);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294390() {
   return (neuron0x428a6d0()*-0.0662023);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294710() {
   return (neuron0x4285ba0()*-0.0618463);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294750() {
   return (neuron0x4285e50()*6.50395);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294790() {
   return (neuron0x4286190()*2.8138);
}

double NNfunction_nn_chi2_charge1m::synapse0x42947d0() {
   return (neuron0x42864d0()*0.0370787);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294810() {
   return (neuron0x4286810()*-0.00517811);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294850() {
   return (neuron0x4286b50()*0.0170995);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294890() {
   return (neuron0x4286e90()*0.0111017);
}

double NNfunction_nn_chi2_charge1m::synapse0x42948d0() {
   return (neuron0x42871d0()*0.00627743);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294910() {
   return (neuron0x4287510()*-0.0343372);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294950() {
   return (neuron0x4287850()*-0.0974141);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294990() {
   return (neuron0x4287b90()*-0.0474988);
}

double NNfunction_nn_chi2_charge1m::synapse0x42949d0() {
   return (neuron0x4287ed0()*-1.25844);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294a10() {
   return (neuron0x4288210()*0.140523);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294a50() {
   return (neuron0x4288550()*0.236235);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294a90() {
   return (neuron0x4288890()*0.0554432);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294ad0() {
   return (neuron0x4288bd0()*-0.011536);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294560() {
   return (neuron0x4288f10()*-0.0631714);
}

double NNfunction_nn_chi2_charge1m::synapse0x42945a0() {
   return (neuron0x4289470()*-0.102458);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294c20() {
   return (neuron0x4289690()*0.0754268);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294c60() {
   return (neuron0x42899d0()*0.0281395);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294ca0() {
   return (neuron0x4289d10()*0.0206905);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294ce0() {
   return (neuron0x428a050()*-0.0127968);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294d20() {
   return (neuron0x428a390()*-0.0735878);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294d60() {
   return (neuron0x428a6d0()*0.0220791);
}

double NNfunction_nn_chi2_charge1m::synapse0x42950e0() {
   return (neuron0x4285ba0()*0.178304);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295120() {
   return (neuron0x4285e50()*3.99222);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295160() {
   return (neuron0x4286190()*-0.418503);
}

double NNfunction_nn_chi2_charge1m::synapse0x42951a0() {
   return (neuron0x42864d0()*-0.344661);
}

double NNfunction_nn_chi2_charge1m::synapse0x42951e0() {
   return (neuron0x4286810()*-0.15879);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295220() {
   return (neuron0x4286b50()*0.0199193);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295260() {
   return (neuron0x4286e90()*0.322553);
}

double NNfunction_nn_chi2_charge1m::synapse0x42952a0() {
   return (neuron0x42871d0()*0.921392);
}

double NNfunction_nn_chi2_charge1m::synapse0x42952e0() {
   return (neuron0x4287510()*-0.00553148);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295320() {
   return (neuron0x4287850()*0.257153);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295360() {
   return (neuron0x4287b90()*0.455437);
}

double NNfunction_nn_chi2_charge1m::synapse0x42953a0() {
   return (neuron0x4287ed0()*-0.367969);
}

double NNfunction_nn_chi2_charge1m::synapse0x42953e0() {
   return (neuron0x4288210()*-0.518026);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295420() {
   return (neuron0x4288550()*-0.379523);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295460() {
   return (neuron0x4288890()*-0.0142388);
}

double NNfunction_nn_chi2_charge1m::synapse0x42954a0() {
   return (neuron0x4288bd0()*-0.31789);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294f30() {
   return (neuron0x4288f10()*0.12948);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294f70() {
   return (neuron0x4289470()*0.12116);
}

double NNfunction_nn_chi2_charge1m::synapse0x42955f0() {
   return (neuron0x4289690()*-0.434295);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295630() {
   return (neuron0x42899d0()*0.283907);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295670() {
   return (neuron0x4289d10()*1.44764);
}

double NNfunction_nn_chi2_charge1m::synapse0x42956b0() {
   return (neuron0x428a050()*-0.235636);
}

double NNfunction_nn_chi2_charge1m::synapse0x42956f0() {
   return (neuron0x428a390()*-0.662599);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295730() {
   return (neuron0x428a6d0()*-0.152395);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295ab0() {
   return (neuron0x4285ba0()*-0.012641);
}

double NNfunction_nn_chi2_charge1m::synapse0x4285d30() {
   return (neuron0x4285e50()*0.0983245);
}

double NNfunction_nn_chi2_charge1m::synapse0x4285d70() {
   return (neuron0x4286190()*0.301255);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286070() {
   return (neuron0x42864d0()*-0.0189817);
}

double NNfunction_nn_chi2_charge1m::synapse0x42860b0() {
   return (neuron0x4286810()*0.0487915);
}

double NNfunction_nn_chi2_charge1m::synapse0x42863b0() {
   return (neuron0x4286b50()*-0.030219);
}

double NNfunction_nn_chi2_charge1m::synapse0x42863f0() {
   return (neuron0x4286e90()*0.0423197);
}

double NNfunction_nn_chi2_charge1m::synapse0x42866f0() {
   return (neuron0x42871d0()*-0.0317481);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286730() {
   return (neuron0x4287510()*0.019375);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286a30() {
   return (neuron0x4287850()*-0.0157943);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286a70() {
   return (neuron0x4287b90()*0.0153676);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286d70() {
   return (neuron0x4287ed0()*0.111907);
}

double NNfunction_nn_chi2_charge1m::synapse0x4286db0() {
   return (neuron0x4288210()*0.0104315);
}

double NNfunction_nn_chi2_charge1m::synapse0x42870b0() {
   return (neuron0x4288550()*0.0222888);
}

double NNfunction_nn_chi2_charge1m::synapse0x42870f0() {
   return (neuron0x4288890()*0.0121512);
}

double NNfunction_nn_chi2_charge1m::synapse0x42873f0() {
   return (neuron0x4288bd0()*-0.0095316);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287430() {
   return (neuron0x4288f10()*0.00276458);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287730() {
   return (neuron0x4289470()*-0.0138229);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287770() {
   return (neuron0x4289690()*0.0201851);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287a70() {
   return (neuron0x42899d0()*-0.020843);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287ab0() {
   return (neuron0x4289d10()*-0.0444583);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287db0() {
   return (neuron0x428a050()*0.0205642);
}

double NNfunction_nn_chi2_charge1m::synapse0x4287df0() {
   return (neuron0x428a390()*0.0139118);
}

double NNfunction_nn_chi2_charge1m::synapse0x42880f0() {
   return (neuron0x428a6d0()*-6.23385);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288130() {
   return (neuron0x4285ba0()*0.0708155);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288df0() {
   return (neuron0x4285e50()*0.415241);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288e30() {
   return (neuron0x4286190()*1.12056);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295900() {
   return (neuron0x42864d0()*0.774446);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295940() {
   return (neuron0x4286810()*-0.114056);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289130() {
   return (neuron0x4286b50()*-0.177006);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289170() {
   return (neuron0x4286e90()*-0.937016);
}

double NNfunction_nn_chi2_charge1m::synapse0x2dfc050() {
   return (neuron0x42871d0()*-0.281356);
}

double NNfunction_nn_chi2_charge1m::synapse0x2dfc090() {
   return (neuron0x4287510()*0.148749);
}

double NNfunction_nn_chi2_charge1m::synapse0x42898b0() {
   return (neuron0x4287850()*-0.582585);
}

double NNfunction_nn_chi2_charge1m::synapse0x42898f0() {
   return (neuron0x4287b90()*-0.225422);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289bf0() {
   return (neuron0x4287ed0()*0.158553);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289c30() {
   return (neuron0x4288210()*1.22191);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289f30() {
   return (neuron0x4288550()*0.876707);
}

double NNfunction_nn_chi2_charge1m::synapse0x4289f70() {
   return (neuron0x4288890()*-0.192993);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a270() {
   return (neuron0x4288bd0()*0.180695);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a2b0() {
   return (neuron0x4288f10()*0.342244);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a5b0() {
   return (neuron0x4289470()*1.33818);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a5f0() {
   return (neuron0x4289690()*1.27991);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a8f0() {
   return (neuron0x42899d0()*0.740691);
}

double NNfunction_nn_chi2_charge1m::synapse0x428a930() {
   return (neuron0x4289d10()*-0.10055);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288430() {
   return (neuron0x428a050()*-0.912906);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288470() {
   return (neuron0x428a390()*0.376343);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297820() {
   return (neuron0x428a6d0()*-1.76586);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297ba0() {
   return (neuron0x4285ba0()*-0.307498);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297be0() {
   return (neuron0x4285e50()*0.851799);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297c20() {
   return (neuron0x4286190()*-0.483838);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297c60() {
   return (neuron0x42864d0()*-1.26714);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297ca0() {
   return (neuron0x4286810()*-0.0313798);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297ce0() {
   return (neuron0x4286b50()*0.87381);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297d20() {
   return (neuron0x4286e90()*-0.388565);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297d60() {
   return (neuron0x42871d0()*0.608607);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297da0() {
   return (neuron0x4287510()*0.143437);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297de0() {
   return (neuron0x4287850()*-0.972731);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297e20() {
   return (neuron0x4287b90()*-0.375879);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297e60() {
   return (neuron0x4287ed0()*0.604144);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297ea0() {
   return (neuron0x4288210()*1.36134);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297ee0() {
   return (neuron0x4288550()*-0.974722);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297f20() {
   return (neuron0x4288890()*-1.09784);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297f60() {
   return (neuron0x4288bd0()*-1.01876);
}

double NNfunction_nn_chi2_charge1m::synapse0x42979f0() {
   return (neuron0x4288f10()*0.0394667);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297a30() {
   return (neuron0x4289470()*-0.0810688);
}

double NNfunction_nn_chi2_charge1m::synapse0x42980b0() {
   return (neuron0x4289690()*1.3181);
}

double NNfunction_nn_chi2_charge1m::synapse0x42980f0() {
   return (neuron0x42899d0()*-0.441015);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298130() {
   return (neuron0x4289d10()*0.730485);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298170() {
   return (neuron0x428a050()*-0.54356);
}

double NNfunction_nn_chi2_charge1m::synapse0x42981b0() {
   return (neuron0x428a390()*0.152908);
}

double NNfunction_nn_chi2_charge1m::synapse0x42981f0() {
   return (neuron0x428a6d0()*0.365231);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298570() {
   return (neuron0x4285ba0()*0.178491);
}

double NNfunction_nn_chi2_charge1m::synapse0x42985b0() {
   return (neuron0x4285e50()*-1.63561);
}

double NNfunction_nn_chi2_charge1m::synapse0x42985f0() {
   return (neuron0x4286190()*2.40034);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298630() {
   return (neuron0x42864d0()*-0.0372864);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298670() {
   return (neuron0x4286810()*-0.0789782);
}

double NNfunction_nn_chi2_charge1m::synapse0x42986b0() {
   return (neuron0x4286b50()*-0.0555288);
}

double NNfunction_nn_chi2_charge1m::synapse0x42986f0() {
   return (neuron0x4286e90()*0.0244806);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298730() {
   return (neuron0x42871d0()*-0.00813896);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298770() {
   return (neuron0x4287510()*-0.123698);
}

double NNfunction_nn_chi2_charge1m::synapse0x42987b0() {
   return (neuron0x4287850()*0.165323);
}

double NNfunction_nn_chi2_charge1m::synapse0x42987f0() {
   return (neuron0x4287b90()*0.119068);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298830() {
   return (neuron0x4287ed0()*0.535997);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298870() {
   return (neuron0x4288210()*-0.124783);
}

double NNfunction_nn_chi2_charge1m::synapse0x42988b0() {
   return (neuron0x4288550()*-0.00425975);
}

double NNfunction_nn_chi2_charge1m::synapse0x42988f0() {
   return (neuron0x4288890()*-0.164804);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298930() {
   return (neuron0x4288bd0()*-0.166888);
}

double NNfunction_nn_chi2_charge1m::synapse0x42983c0() {
   return (neuron0x4288f10()*-0.0234851);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298400() {
   return (neuron0x4289470()*0.191898);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298a80() {
   return (neuron0x4289690()*-0.0855926);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298ac0() {
   return (neuron0x42899d0()*0.0401568);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298b00() {
   return (neuron0x4289d10()*0.135666);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298b40() {
   return (neuron0x428a050()*-0.138912);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298b80() {
   return (neuron0x428a390()*0.0418927);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298bc0() {
   return (neuron0x428a6d0()*3.25033);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298f40() {
   return (neuron0x4285ba0()*-0.0909826);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298f80() {
   return (neuron0x4285e50()*0.495688);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298fc0() {
   return (neuron0x4286190()*1.30417);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299000() {
   return (neuron0x42864d0()*-0.965777);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299040() {
   return (neuron0x4286810()*-0.167763);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299080() {
   return (neuron0x4286b50()*-0.853033);
}

double NNfunction_nn_chi2_charge1m::synapse0x42990c0() {
   return (neuron0x4286e90()*0.131016);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299100() {
   return (neuron0x42871d0()*0.738236);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299140() {
   return (neuron0x4287510()*0.71065);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299180() {
   return (neuron0x4287850()*1.57523);
}

double NNfunction_nn_chi2_charge1m::synapse0x42991c0() {
   return (neuron0x4287b90()*0.153412);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299200() {
   return (neuron0x4287ed0()*-0.468595);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299240() {
   return (neuron0x4288210()*1.09729);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299280() {
   return (neuron0x4288550()*-0.305317);
}

double NNfunction_nn_chi2_charge1m::synapse0x42992c0() {
   return (neuron0x4288890()*-1.37815);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299300() {
   return (neuron0x4288bd0()*-1.11789);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298d90() {
   return (neuron0x4288f10()*-0.321111);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298dd0() {
   return (neuron0x4289470()*0.238882);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299450() {
   return (neuron0x4289690()*-1.44949);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299490() {
   return (neuron0x42899d0()*1.15671);
}

double NNfunction_nn_chi2_charge1m::synapse0x42994d0() {
   return (neuron0x4289d10()*0.761305);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299510() {
   return (neuron0x428a050()*-0.0563001);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299550() {
   return (neuron0x428a390()*-0.67034);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299590() {
   return (neuron0x428a6d0()*-0.397189);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299910() {
   return (neuron0x4285ba0()*-0.64756);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299950() {
   return (neuron0x4285e50()*-0.849176);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299990() {
   return (neuron0x4286190()*-0.946911);
}

double NNfunction_nn_chi2_charge1m::synapse0x42999d0() {
   return (neuron0x42864d0()*0.172316);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299a10() {
   return (neuron0x4286810()*-0.70239);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299a50() {
   return (neuron0x4286b50()*-0.406492);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299a90() {
   return (neuron0x4286e90()*0.315368);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299ad0() {
   return (neuron0x42871d0()*0.404934);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299b10() {
   return (neuron0x4287510()*-0.0133344);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299b50() {
   return (neuron0x4287850()*0.702087);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299b90() {
   return (neuron0x4287b90()*-0.704426);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299bd0() {
   return (neuron0x4287ed0()*0.0764381);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299c10() {
   return (neuron0x4288210()*-0.0341028);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299c50() {
   return (neuron0x4288550()*0.402816);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299c90() {
   return (neuron0x4288890()*0.113197);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299cd0() {
   return (neuron0x4288bd0()*1.15476);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299760() {
   return (neuron0x4288f10()*-0.157428);
}

double NNfunction_nn_chi2_charge1m::synapse0x42997a0() {
   return (neuron0x4289470()*-0.715147);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299e20() {
   return (neuron0x4289690()*-0.712659);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299e60() {
   return (neuron0x42899d0()*0.152846);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299ea0() {
   return (neuron0x4289d10()*-0.61666);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299ee0() {
   return (neuron0x428a050()*0.318076);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299f20() {
   return (neuron0x428a390()*0.0889685);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299f60() {
   return (neuron0x428a6d0()*-0.473335);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a2e0() {
   return (neuron0x4285ba0()*-0.253635);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a320() {
   return (neuron0x4285e50()*1.29188);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a360() {
   return (neuron0x4286190()*-1.18166);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a3a0() {
   return (neuron0x42864d0()*0.190317);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a3e0() {
   return (neuron0x4286810()*-1.88875);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a420() {
   return (neuron0x4286b50()*-0.758139);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a460() {
   return (neuron0x4286e90()*0.0114292);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a4a0() {
   return (neuron0x42871d0()*0.192516);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a4e0() {
   return (neuron0x4287510()*1.0367);
}

double NNfunction_nn_chi2_charge1m::synapse0x42926a0() {
   return (neuron0x4287850()*1.17512);
}

double NNfunction_nn_chi2_charge1m::synapse0x42926e0() {
   return (neuron0x4287b90()*0.250872);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292720() {
   return (neuron0x4287ed0()*0.931653);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292760() {
   return (neuron0x4288210()*0.000769849);
}

double NNfunction_nn_chi2_charge1m::synapse0x42927a0() {
   return (neuron0x4288550()*-0.806736);
}

double NNfunction_nn_chi2_charge1m::synapse0x42927e0() {
   return (neuron0x4288890()*-0.695345);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292820() {
   return (neuron0x4288bd0()*-0.191703);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a130() {
   return (neuron0x4288f10()*0.2883);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a170() {
   return (neuron0x4289470()*-0.30066);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292970() {
   return (neuron0x4289690()*0.634231);
}

double NNfunction_nn_chi2_charge1m::synapse0x42929b0() {
   return (neuron0x42899d0()*0.157759);
}

double NNfunction_nn_chi2_charge1m::synapse0x42929f0() {
   return (neuron0x4289d10()*-0.410427);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292a30() {
   return (neuron0x428a050()*-0.587389);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292a70() {
   return (neuron0x428a390()*0.803206);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292ab0() {
   return (neuron0x428a6d0()*0.967996);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292e30() {
   return (neuron0x4285ba0()*-0.00179784);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292e70() {
   return (neuron0x4285e50()*0.0121287);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292eb0() {
   return (neuron0x4286190()*0.0227176);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292ef0() {
   return (neuron0x42864d0()*-0.00341696);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292f30() {
   return (neuron0x4286810()*-0.00153298);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292f70() {
   return (neuron0x4286b50()*-0.00674314);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292fb0() {
   return (neuron0x4286e90()*-0.000896713);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292ff0() {
   return (neuron0x42871d0()*0.0028182);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293030() {
   return (neuron0x4287510()*0.0024634);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293070() {
   return (neuron0x4287850()*0.000221881);
}

double NNfunction_nn_chi2_charge1m::synapse0x42930b0() {
   return (neuron0x4287b90()*-0.00193561);
}

double NNfunction_nn_chi2_charge1m::synapse0x42930f0() {
   return (neuron0x4287ed0()*0.0201903);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293130() {
   return (neuron0x4288210()*0.00145812);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293170() {
   return (neuron0x4288550()*0.00012124);
}

double NNfunction_nn_chi2_charge1m::synapse0x42931b0() {
   return (neuron0x4288890()*-0.00154761);
}

double NNfunction_nn_chi2_charge1m::synapse0x42931f0() {
   return (neuron0x4288bd0()*-0.000648887);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292c80() {
   return (neuron0x4288f10()*-0.000756034);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292cc0() {
   return (neuron0x4289470()*-0.0044284);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293340() {
   return (neuron0x4289690()*-0.0031071);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293380() {
   return (neuron0x42899d0()*-0.00138508);
}

double NNfunction_nn_chi2_charge1m::synapse0x42933c0() {
   return (neuron0x4289d10()*0.000800917);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293400() {
   return (neuron0x428a050()*0.00304094);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293440() {
   return (neuron0x428a390()*-0.00284943);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293480() {
   return (neuron0x428a6d0()*1.93344);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293650() {
   return (neuron0x4285ba0()*-0.00262019);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c6e0() {
   return (neuron0x4285e50()*0.0542699);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c720() {
   return (neuron0x4286190()*0.717677);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c760() {
   return (neuron0x42864d0()*-0.0129289);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c7a0() {
   return (neuron0x4286810()*0.100705);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c7e0() {
   return (neuron0x4286b50()*-0.00600164);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c820() {
   return (neuron0x4286e90()*-0.0229074);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c860() {
   return (neuron0x42871d0()*-0.0196457);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c8a0() {
   return (neuron0x4287510()*-0.0129595);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c8e0() {
   return (neuron0x4287850()*-0.0655196);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c920() {
   return (neuron0x4287b90()*-0.000535238);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c960() {
   return (neuron0x4287ed0()*-0.105293);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c9a0() {
   return (neuron0x4288210()*0.0193039);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c9e0() {
   return (neuron0x4288550()*0.0167646);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ca20() {
   return (neuron0x4288890()*-0.0444737);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ca60() {
   return (neuron0x4288bd0()*-0.0361639);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c530() {
   return (neuron0x4288f10()*-0.0556799);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c570() {
   return (neuron0x4289470()*0.00332949);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cbb0() {
   return (neuron0x4289690()*0.0254542);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cbf0() {
   return (neuron0x42899d0()*-0.030552);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cc30() {
   return (neuron0x4289d10()*-0.0645508);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cc70() {
   return (neuron0x428a050()*0.0420354);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ccb0() {
   return (neuron0x428a390()*0.0166583);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ccf0() {
   return (neuron0x428a6d0()*-10.8971);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d070() {
   return (neuron0x4285ba0()*-0.0215491);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d0b0() {
   return (neuron0x4285e50()*2.85203);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d0f0() {
   return (neuron0x4286190()*2.93675);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d130() {
   return (neuron0x42864d0()*-0.0243324);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d170() {
   return (neuron0x4286810()*-0.0601232);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d1b0() {
   return (neuron0x4286b50()*-0.00741962);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d1f0() {
   return (neuron0x4286e90()*-0.00437991);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d230() {
   return (neuron0x42871d0()*0.0957275);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d270() {
   return (neuron0x4287510()*0.0226517);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d2b0() {
   return (neuron0x4287850()*0.178709);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d2f0() {
   return (neuron0x4287b90()*-0.00858646);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d330() {
   return (neuron0x4287ed0()*-1.39726);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d370() {
   return (neuron0x4288210()*-0.0193222);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d3b0() {
   return (neuron0x4288550()*0.0112756);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d3f0() {
   return (neuron0x4288890()*0.00774541);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d430() {
   return (neuron0x4288bd0()*0.113355);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cec0() {
   return (neuron0x4288f10()*0.0298209);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cf00() {
   return (neuron0x4289470()*0.0808573);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d580() {
   return (neuron0x4289690()*-0.0643554);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d5c0() {
   return (neuron0x42899d0()*0.0148449);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d600() {
   return (neuron0x4289d10()*0.0457139);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d640() {
   return (neuron0x428a050()*-0.0678798);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d680() {
   return (neuron0x428a390()*0.0169026);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d6c0() {
   return (neuron0x428a6d0()*-0.0660765);
}

double NNfunction_nn_chi2_charge1m::synapse0x429da40() {
   return (neuron0x4285ba0()*0.140685);
}

double NNfunction_nn_chi2_charge1m::synapse0x429da80() {
   return (neuron0x4285e50()*1.95468);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dac0() {
   return (neuron0x4286190()*2.92974);
}

double NNfunction_nn_chi2_charge1m::synapse0x429db00() {
   return (neuron0x42864d0()*-2.64122);
}

double NNfunction_nn_chi2_charge1m::synapse0x429db40() {
   return (neuron0x4286810()*0.919949);
}

double NNfunction_nn_chi2_charge1m::synapse0x429db80() {
   return (neuron0x4286b50()*-0.761618);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dbc0() {
   return (neuron0x4286e90()*0.998456);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dc00() {
   return (neuron0x42871d0()*2.02035);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dc40() {
   return (neuron0x4287510()*1.14776);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dc80() {
   return (neuron0x4287850()*-0.253791);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dcc0() {
   return (neuron0x4287b90()*-0.184836);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dd00() {
   return (neuron0x4287ed0()*0.0213375);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dd40() {
   return (neuron0x4288210()*-0.177475);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dd80() {
   return (neuron0x4288550()*-1.37374);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ddc0() {
   return (neuron0x4288890()*-1.33028);
}

double NNfunction_nn_chi2_charge1m::synapse0x429de00() {
   return (neuron0x4288bd0()*-0.411833);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d890() {
   return (neuron0x4288f10()*0.148577);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d8d0() {
   return (neuron0x4289470()*-0.214075);
}

double NNfunction_nn_chi2_charge1m::synapse0x429df50() {
   return (neuron0x4289690()*-1.6621);
}

double NNfunction_nn_chi2_charge1m::synapse0x429df90() {
   return (neuron0x42899d0()*-0.402447);
}

double NNfunction_nn_chi2_charge1m::synapse0x429dfd0() {
   return (neuron0x4289d10()*1.77355);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e010() {
   return (neuron0x428a050()*0.358374);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e050() {
   return (neuron0x428a390()*-1.21158);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e090() {
   return (neuron0x428a6d0()*-0.872154);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e410() {
   return (neuron0x4285ba0()*-0.0980397);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e450() {
   return (neuron0x4285e50()*0.589258);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e490() {
   return (neuron0x4286190()*0.210221);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e4d0() {
   return (neuron0x42864d0()*-0.328931);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e510() {
   return (neuron0x4286810()*0.170211);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e550() {
   return (neuron0x4286b50()*0.335263);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e590() {
   return (neuron0x4286e90()*-0.175341);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e5d0() {
   return (neuron0x42871d0()*-0.115416);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e610() {
   return (neuron0x4287510()*0.0692952);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e650() {
   return (neuron0x4287850()*-0.105592);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e690() {
   return (neuron0x4287b90()*0.31185);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e6d0() {
   return (neuron0x4287ed0()*-0.0922541);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e710() {
   return (neuron0x4288210()*3.27372e-05);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e750() {
   return (neuron0x4288550()*-0.983331);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e790() {
   return (neuron0x4288890()*-0.410335);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e7d0() {
   return (neuron0x4288bd0()*-0.996583);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e260() {
   return (neuron0x4288f10()*-0.520997);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e2a0() {
   return (neuron0x4289470()*0.771585);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e920() {
   return (neuron0x4289690()*0.375063);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e960() {
   return (neuron0x42899d0()*-0.211962);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e9a0() {
   return (neuron0x4289d10()*0.696455);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e9e0() {
   return (neuron0x428a050()*-0.235847);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ea20() {
   return (neuron0x428a390()*0.0756);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ea60() {
   return (neuron0x428a6d0()*0.264963);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ede0() {
   return (neuron0x4285ba0()*0.00689046);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ee20() {
   return (neuron0x4285e50()*0.032229);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ee60() {
   return (neuron0x4286190()*0.203991);
}

double NNfunction_nn_chi2_charge1m::synapse0x429eea0() {
   return (neuron0x42864d0()*-0.0233098);
}

double NNfunction_nn_chi2_charge1m::synapse0x429eee0() {
   return (neuron0x4286810()*0.00891384);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ef20() {
   return (neuron0x4286b50()*-0.021673);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ef60() {
   return (neuron0x4286e90()*0.000346459);
}

double NNfunction_nn_chi2_charge1m::synapse0x429efa0() {
   return (neuron0x42871d0()*-0.00245153);
}

double NNfunction_nn_chi2_charge1m::synapse0x429efe0() {
   return (neuron0x4287510()*0.00776804);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f020() {
   return (neuron0x4287850()*-0.00632186);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f060() {
   return (neuron0x4287b90()*-0.00123323);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f0a0() {
   return (neuron0x4287ed0()*0.0899011);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f0e0() {
   return (neuron0x4288210()*0.00352862);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f120() {
   return (neuron0x4288550()*-0.00254399);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f160() {
   return (neuron0x4288890()*-0.00739508);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f1a0() {
   return (neuron0x4288bd0()*-0.019241);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ec30() {
   return (neuron0x4288f10()*-0.00959299);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ec70() {
   return (neuron0x4289470()*-0.0120937);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f2f0() {
   return (neuron0x4289690()*-0.00478668);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f330() {
   return (neuron0x42899d0()*-0.0128706);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f370() {
   return (neuron0x4289d10()*0.00228343);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f3b0() {
   return (neuron0x428a050()*0.0157012);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f3f0() {
   return (neuron0x428a390()*-0.00661439);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f430() {
   return (neuron0x428a6d0()*1.62281);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f7b0() {
   return (neuron0x4285ba0()*0.0110792);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f7f0() {
   return (neuron0x4285e50()*-0.131481);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f830() {
   return (neuron0x4286190()*-0.793834);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f870() {
   return (neuron0x42864d0()*-0.00186872);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f8b0() {
   return (neuron0x4286810()*0.0396864);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f8f0() {
   return (neuron0x4286b50()*0.0342873);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f930() {
   return (neuron0x4286e90()*0.0401074);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f970() {
   return (neuron0x42871d0()*-0.029115);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f9b0() {
   return (neuron0x4287510()*0.0202388);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f9f0() {
   return (neuron0x4287850()*0.00740879);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fa30() {
   return (neuron0x4287b90()*-0.00778182);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fa70() {
   return (neuron0x4287ed0()*-1.30539);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fab0() {
   return (neuron0x4288210()*-0.0577582);
}

double NNfunction_nn_chi2_charge1m::synapse0x429faf0() {
   return (neuron0x4288550()*0.0349229);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fb30() {
   return (neuron0x4288890()*0.0261942);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fb70() {
   return (neuron0x4288bd0()*0.0231509);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f600() {
   return (neuron0x4288f10()*-0.00500065);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f640() {
   return (neuron0x4289470()*-0.0440427);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fcc0() {
   return (neuron0x4289690()*-0.0281467);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fd00() {
   return (neuron0x42899d0()*0.0269505);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fd40() {
   return (neuron0x4289d10()*-0.00353607);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fd80() {
   return (neuron0x428a050()*0.0248956);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fdc0() {
   return (neuron0x428a390()*0.00851356);
}

double NNfunction_nn_chi2_charge1m::synapse0x429fe00() {
   return (neuron0x428a6d0()*0.0453562);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0180() {
   return (neuron0x4285ba0()*0.0444299);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a01c0() {
   return (neuron0x4285e50()*-0.00394097);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0200() {
   return (neuron0x4286190()*0.175891);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0240() {
   return (neuron0x42864d0()*-0.00574313);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0280() {
   return (neuron0x4286810()*0.00942577);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a02c0() {
   return (neuron0x4286b50()*-0.00710217);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0300() {
   return (neuron0x4286e90()*-0.00788721);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0340() {
   return (neuron0x42871d0()*-0.00201025);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0380() {
   return (neuron0x4287510()*-0.0042443);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a03c0() {
   return (neuron0x4287850()*-0.0147263);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0400() {
   return (neuron0x4287b90()*0.00187092);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0440() {
   return (neuron0x4287ed0()*-0.00746384);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0480() {
   return (neuron0x4288210()*-0.00177166);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a04c0() {
   return (neuron0x4288550()*-0.00483282);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0500() {
   return (neuron0x4288890()*-0.00849669);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0540() {
   return (neuron0x4288bd0()*-0.00405487);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ffd0() {
   return (neuron0x4288f10()*-0.0128669);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0010() {
   return (neuron0x4289470()*-0.00679928);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0690() {
   return (neuron0x4289690()*-0.000599449);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a06d0() {
   return (neuron0x42899d0()*-0.0133649);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0710() {
   return (neuron0x4289d10()*0.00298674);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0750() {
   return (neuron0x428a050()*0.00676324);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0790() {
   return (neuron0x428a390()*0.00207011);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a07d0() {
   return (neuron0x428a6d0()*17.9831);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0b50() {
   return (neuron0x4285ba0()*0.516252);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0b90() {
   return (neuron0x4285e50()*-0.961749);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0bd0() {
   return (neuron0x4286190()*1.13997);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0c10() {
   return (neuron0x42864d0()*-1.56814);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0c50() {
   return (neuron0x4286810()*-0.388547);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0c90() {
   return (neuron0x4286b50()*0.296636);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0cd0() {
   return (neuron0x4286e90()*1.20293);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0d10() {
   return (neuron0x42871d0()*0.315673);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0d50() {
   return (neuron0x4287510()*-0.797821);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0d90() {
   return (neuron0x4287850()*0.30186);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0dd0() {
   return (neuron0x4287b90()*0.357585);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0e10() {
   return (neuron0x4287ed0()*-0.234973);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0e50() {
   return (neuron0x4288210()*-0.466176);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0e90() {
   return (neuron0x4288550()*0.186844);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0ed0() {
   return (neuron0x4288890()*-0.305068);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a0f10() {
   return (neuron0x4288bd0()*-1.28378);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a09a0() {
   return (neuron0x4288f10()*0.645024);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a09e0() {
   return (neuron0x4289470()*0.0134069);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1060() {
   return (neuron0x4289690()*-0.465868);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a10a0() {
   return (neuron0x42899d0()*-0.95953);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a10e0() {
   return (neuron0x4289d10()*1.11902);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1120() {
   return (neuron0x428a050()*0.295867);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1160() {
   return (neuron0x428a390()*-0.823029);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a11a0() {
   return (neuron0x428a6d0()*0.180068);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1520() {
   return (neuron0x4285ba0()*0.0788772);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295af0() {
   return (neuron0x4285e50()*0.00694316);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295b30() {
   return (neuron0x4286190()*0.680689);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295b70() {
   return (neuron0x42864d0()*-0.00848252);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295dc0() {
   return (neuron0x4286810()*0.0174238);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295e00() {
   return (neuron0x4286b50()*-0.0150045);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295e40() {
   return (neuron0x4286e90()*-0.00529673);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296090() {
   return (neuron0x42871d0()*0.00333078);
}

double NNfunction_nn_chi2_charge1m::synapse0x42960d0() {
   return (neuron0x4287510()*0.00173003);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296320() {
   return (neuron0x4287850()*-0.0112451);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296360() {
   return (neuron0x4287b90()*0.0104778);
}

double NNfunction_nn_chi2_charge1m::synapse0x42963a0() {
   return (neuron0x4287ed0()*0.0890689);
}

double NNfunction_nn_chi2_charge1m::synapse0x42965f0() {
   return (neuron0x4288210()*0.00324655);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296630() {
   return (neuron0x4288550()*0.0435284);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296880() {
   return (neuron0x4288890()*-0.00920703);
}

double NNfunction_nn_chi2_charge1m::synapse0x42968c0() {
   return (neuron0x4288bd0()*-0.022372);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1370() {
   return (neuron0x4288f10()*-0.0166097);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a13b0() {
   return (neuron0x4289470()*-0.0088935);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296a10() {
   return (neuron0x4289690()*0.00743089);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296f20() {
   return (neuron0x42899d0()*-0.00852446);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296f60() {
   return (neuron0x4289d10()*-0.00634314);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296fa0() {
   return (neuron0x428a050()*0.0182806);
}

double NNfunction_nn_chi2_charge1m::synapse0x42971f0() {
   return (neuron0x428a390()*0.0077314);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297230() {
   return (neuron0x428a6d0()*12.8501);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296ae0() {
   return (neuron0x4285ba0()*0.00272929);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296b20() {
   return (neuron0x4285e50()*-2.20798);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296b60() {
   return (neuron0x4286190()*1.68177);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296ba0() {
   return (neuron0x42864d0()*-0.0642576);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297520() {
   return (neuron0x4286810()*0.0580068);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3870() {
   return (neuron0x4286b50()*-0.0388959);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a38b0() {
   return (neuron0x4286e90()*-0.0177623);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a38f0() {
   return (neuron0x42871d0()*0.0227702);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3930() {
   return (neuron0x4287510()*0.127322);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3970() {
   return (neuron0x4287850()*0.0103526);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a39b0() {
   return (neuron0x4287b90()*-0.0120973);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a39f0() {
   return (neuron0x4287ed0()*-0.806426);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3a30() {
   return (neuron0x4288210()*-0.0893235);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3a70() {
   return (neuron0x4288550()*-0.0695906);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3ab0() {
   return (neuron0x4288890()*-0.0181582);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3af0() {
   return (neuron0x4288bd0()*-0.0789836);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297400() {
   return (neuron0x4288f10()*-0.0913106);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297440() {
   return (neuron0x4289470()*-0.0200617);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3c40() {
   return (neuron0x4289690()*-0.0103835);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3c80() {
   return (neuron0x42899d0()*0.0495462);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3cc0() {
   return (neuron0x4289d10()*0.0623908);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3d00() {
   return (neuron0x428a050()*0.0478565);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3d40() {
   return (neuron0x428a390()*0.0263613);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3d80() {
   return (neuron0x428a6d0()*0.10239);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4100() {
   return (neuron0x4285ba0()*0.0567362);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4140() {
   return (neuron0x4285e50()*-15.9085);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4180() {
   return (neuron0x4286190()*-9.22592);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a41c0() {
   return (neuron0x42864d0()*-0.00353976);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4200() {
   return (neuron0x4286810()*0.0277773);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4240() {
   return (neuron0x4286b50()*0.0168117);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4280() {
   return (neuron0x4286e90()*0.065913);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a42c0() {
   return (neuron0x42871d0()*-0.0202226);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4300() {
   return (neuron0x4287510()*-0.0076589);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4340() {
   return (neuron0x4287850()*0.00901463);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4380() {
   return (neuron0x4287b90()*0.0329325);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a43c0() {
   return (neuron0x4287ed0()*-0.232923);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4400() {
   return (neuron0x4288210()*-0.0738061);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4440() {
   return (neuron0x4288550()*0.0218542);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4480() {
   return (neuron0x4288890()*0.00689232);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a44c0() {
   return (neuron0x4288bd0()*-0.0348527);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3f50() {
   return (neuron0x4288f10()*0.0325212);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a3f90() {
   return (neuron0x4289470()*0.00837775);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4610() {
   return (neuron0x4289690()*-0.00495888);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4650() {
   return (neuron0x42899d0()*0.0185968);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4690() {
   return (neuron0x4289d10()*0.0339983);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a46d0() {
   return (neuron0x428a050()*0.0261097);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4710() {
   return (neuron0x428a390()*0.0245743);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4750() {
   return (neuron0x428a6d0()*0.0667819);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4ad0() {
   return (neuron0x4285ba0()*-0.47771);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4b10() {
   return (neuron0x4285e50()*-0.597225);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4b50() {
   return (neuron0x4286190()*0.507945);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4b90() {
   return (neuron0x42864d0()*-1.32012);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4bd0() {
   return (neuron0x4286810()*-0.569635);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4c10() {
   return (neuron0x4286b50()*0.353185);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4c50() {
   return (neuron0x4286e90()*0.202062);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4c90() {
   return (neuron0x42871d0()*0.435881);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4cd0() {
   return (neuron0x4287510()*-0.115697);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4d10() {
   return (neuron0x4287850()*1.35821);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4d50() {
   return (neuron0x4287b90()*-1.12688);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4d90() {
   return (neuron0x4287ed0()*2.41294);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4dd0() {
   return (neuron0x4288210()*-0.748316);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4e10() {
   return (neuron0x4288550()*-0.119992);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4e50() {
   return (neuron0x4288890()*-0.36262);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4e90() {
   return (neuron0x4288bd0()*1.08491);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4920() {
   return (neuron0x4288f10()*-1.36992);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4960() {
   return (neuron0x4289470()*-0.957165);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4fe0() {
   return (neuron0x4289690()*0.0341603);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5020() {
   return (neuron0x42899d0()*-0.652861);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5060() {
   return (neuron0x4289d10()*-0.763263);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a50a0() {
   return (neuron0x428a050()*0.740369);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a50e0() {
   return (neuron0x428a390()*-0.176056);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5120() {
   return (neuron0x428a6d0()*-0.610313);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a54a0() {
   return (neuron0x4285ba0()*-0.381067);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a54e0() {
   return (neuron0x4285e50()*2.38194);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5520() {
   return (neuron0x4286190()*1.10291);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5560() {
   return (neuron0x42864d0()*-0.338516);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a55a0() {
   return (neuron0x4286810()*-0.426436);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a55e0() {
   return (neuron0x4286b50()*-0.409697);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5620() {
   return (neuron0x4286e90()*-0.506491);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5660() {
   return (neuron0x42871d0()*0.719752);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a56a0() {
   return (neuron0x4287510()*0.419652);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a56e0() {
   return (neuron0x4287850()*1.38853);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5720() {
   return (neuron0x4287b90()*1.07662);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5760() {
   return (neuron0x4287ed0()*-0.332735);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a57a0() {
   return (neuron0x4288210()*0.210712);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a57e0() {
   return (neuron0x4288550()*0.106744);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5820() {
   return (neuron0x4288890()*-1.20397);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5860() {
   return (neuron0x4288bd0()*-0.925246);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a52f0() {
   return (neuron0x4288f10()*0.167379);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5330() {
   return (neuron0x4289470()*0.213503);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a59b0() {
   return (neuron0x4289690()*-1.40122);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a59f0() {
   return (neuron0x42899d0()*0.890838);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5a30() {
   return (neuron0x4289d10()*1.15683);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5a70() {
   return (neuron0x428a050()*-0.270047);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5ab0() {
   return (neuron0x428a390()*-0.654606);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5af0() {
   return (neuron0x428a6d0()*0.0979363);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5e70() {
   return (neuron0x4285ba0()*-0.0541629);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5eb0() {
   return (neuron0x4285e50()*-1.11479);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5ef0() {
   return (neuron0x4286190()*-3.98913);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5f30() {
   return (neuron0x42864d0()*0.267575);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5f70() {
   return (neuron0x4286810()*-0.0100625);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5fb0() {
   return (neuron0x4286b50()*0.146657);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5ff0() {
   return (neuron0x4286e90()*-0.00695184);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6030() {
   return (neuron0x42871d0()*-0.0562656);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6070() {
   return (neuron0x4287510()*-0.0826437);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a60b0() {
   return (neuron0x4287850()*0.00922836);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a60f0() {
   return (neuron0x4287b90()*-0.00568419);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6130() {
   return (neuron0x4287ed0()*3.31451);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6170() {
   return (neuron0x4288210()*0.438422);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a61b0() {
   return (neuron0x4288550()*0.0440548);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a61f0() {
   return (neuron0x4288890()*-0.0422762);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6230() {
   return (neuron0x4288bd0()*-0.0835887);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5cc0() {
   return (neuron0x4288f10()*0.033572);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5d00() {
   return (neuron0x4289470()*0.0945965);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6380() {
   return (neuron0x4289690()*0.163603);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a63c0() {
   return (neuron0x42899d0()*0.00579139);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6400() {
   return (neuron0x4289d10()*-0.103548);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6440() {
   return (neuron0x428a050()*0.074991);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6480() {
   return (neuron0x428a390()*-0.0403087);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a64c0() {
   return (neuron0x428a6d0()*0.0577906);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6840() {
   return (neuron0x4285ba0()*1.2357);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6880() {
   return (neuron0x4285e50()*-2.27318);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a68c0() {
   return (neuron0x4286190()*-0.836013);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6900() {
   return (neuron0x42864d0()*1.35819);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6940() {
   return (neuron0x4286810()*-0.823467);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6980() {
   return (neuron0x4286b50()*0.255523);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a69c0() {
   return (neuron0x4286e90()*0.0410637);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6a00() {
   return (neuron0x42871d0()*-1.32983);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6a40() {
   return (neuron0x4287510()*1.24794);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6a80() {
   return (neuron0x4287850()*1.51073);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6ac0() {
   return (neuron0x4287b90()*-0.144494);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6b00() {
   return (neuron0x4287ed0()*0.0795849);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6b40() {
   return (neuron0x4288210()*0.394255);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6b80() {
   return (neuron0x4288550()*-0.511223);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6bc0() {
   return (neuron0x4288890()*-0.381152);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6c00() {
   return (neuron0x4288bd0()*-1.2131);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6690() {
   return (neuron0x4288f10()*-0.512139);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a66d0() {
   return (neuron0x4289470()*0.361036);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6d50() {
   return (neuron0x4289690()*0.367344);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6d90() {
   return (neuron0x42899d0()*0.901856);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6dd0() {
   return (neuron0x4289d10()*-0.770678);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6e10() {
   return (neuron0x428a050()*-0.998665);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6e50() {
   return (neuron0x428a390()*1.26796);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a6e90() {
   return (neuron0x428a6d0()*2.14961);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7210() {
   return (neuron0x4285ba0()*0.192248);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7250() {
   return (neuron0x4285e50()*1.0793);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7290() {
   return (neuron0x4286190()*1.49633);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a72d0() {
   return (neuron0x42864d0()*-1.05193);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7310() {
   return (neuron0x4286810()*-0.398552);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7350() {
   return (neuron0x4286b50()*0.310373);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7390() {
   return (neuron0x4286e90()*0.0530859);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a73d0() {
   return (neuron0x42871d0()*0.349971);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7410() {
   return (neuron0x4287510()*-0.118936);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7450() {
   return (neuron0x4287850()*0.288624);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7490() {
   return (neuron0x4287b90()*0.259319);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a74d0() {
   return (neuron0x4287ed0()*-0.719534);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7510() {
   return (neuron0x4288210()*-0.77808);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7550() {
   return (neuron0x4288550()*-0.36885);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7590() {
   return (neuron0x4288890()*-0.750326);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a75d0() {
   return (neuron0x4288bd0()*-1.27519);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7060() {
   return (neuron0x4288f10()*-0.931967);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a70a0() {
   return (neuron0x4289470()*0.394905);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7720() {
   return (neuron0x4289690()*-0.0972495);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7760() {
   return (neuron0x42899d0()*0.0419509);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a77a0() {
   return (neuron0x4289d10()*1.17978);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a77e0() {
   return (neuron0x428a050()*-0.977608);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7820() {
   return (neuron0x428a390()*0.125672);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7860() {
   return (neuron0x428a6d0()*0.0788965);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7be0() {
   return (neuron0x4285ba0()*-0.0839346);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7c20() {
   return (neuron0x4285e50()*19.518);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7c60() {
   return (neuron0x4286190()*12.1157);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7ca0() {
   return (neuron0x42864d0()*0.0178497);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7ce0() {
   return (neuron0x4286810()*-0.0222661);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7d20() {
   return (neuron0x4286b50()*-0.0128876);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7d60() {
   return (neuron0x4286e90()*-0.0745288);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7da0() {
   return (neuron0x42871d0()*0.0487614);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7de0() {
   return (neuron0x4287510()*-0.0136679);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7e20() {
   return (neuron0x4287850()*-0.0211822);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7e60() {
   return (neuron0x4287b90()*-0.0232244);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7ea0() {
   return (neuron0x4287ed0()*0.0522096);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7ee0() {
   return (neuron0x4288210()*0.0506269);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7f20() {
   return (neuron0x4288550()*-0.0381529);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7f60() {
   return (neuron0x4288890()*0.000323185);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7fa0() {
   return (neuron0x4288bd0()*0.055281);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7a30() {
   return (neuron0x4288f10()*-0.0247317);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7a70() {
   return (neuron0x4289470()*0.00224285);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a80f0() {
   return (neuron0x4289690()*0.0110112);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8130() {
   return (neuron0x42899d0()*-0.0238608);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8170() {
   return (neuron0x4289d10()*-0.0675612);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a81b0() {
   return (neuron0x428a050()*-0.0180218);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a81f0() {
   return (neuron0x428a390()*-0.0184235);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8230() {
   return (neuron0x428a6d0()*-0.0772767);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290ce0() {
   return (neuron0x4285ba0()*-0.252755);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290d20() {
   return (neuron0x4285e50()*0.445218);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290d60() {
   return (neuron0x4286190()*-0.71705);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290da0() {
   return (neuron0x42864d0()*-0.14532);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290de0() {
   return (neuron0x4286810()*-0.283798);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290e20() {
   return (neuron0x4286b50()*0.147091);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290e60() {
   return (neuron0x4286e90()*-0.770214);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290ea0() {
   return (neuron0x42871d0()*-1.58404);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a89c0() {
   return (neuron0x4287510()*0.847429);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8a00() {
   return (neuron0x4287850()*-1.38193);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8a40() {
   return (neuron0x4287b90()*0.493567);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8a80() {
   return (neuron0x4287ed0()*-0.560056);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8ac0() {
   return (neuron0x4288210()*-1.20227);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8b00() {
   return (neuron0x4288550()*1.07467);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8b40() {
   return (neuron0x4288890()*1.87729);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8b80() {
   return (neuron0x4288bd0()*-0.0738855);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8400() {
   return (neuron0x4288f10()*-0.987482);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8440() {
   return (neuron0x4289470()*0.93855);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8cd0() {
   return (neuron0x4289690()*0.770895);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8d10() {
   return (neuron0x42899d0()*-0.592896);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8d50() {
   return (neuron0x4289d10()*-0.099385);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8d90() {
   return (neuron0x428a050()*0.204725);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8dd0() {
   return (neuron0x428a390()*-0.0619869);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8e10() {
   return (neuron0x428a6d0()*-0.404943);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9190() {
   return (neuron0x4285ba0()*0.243085);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a91d0() {
   return (neuron0x4285e50()*-3.47019);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9210() {
   return (neuron0x4286190()*0.170651);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9250() {
   return (neuron0x42864d0()*-3.08992);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9290() {
   return (neuron0x4286810()*0.967426);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a92d0() {
   return (neuron0x4286b50()*-0.309411);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9310() {
   return (neuron0x4286e90()*1.04564);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9350() {
   return (neuron0x42871d0()*2.1044);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9390() {
   return (neuron0x4287510()*0.745302);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a93d0() {
   return (neuron0x4287850()*-0.361774);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9410() {
   return (neuron0x4287b90()*-0.0929414);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9450() {
   return (neuron0x4287ed0()*1.03993);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9490() {
   return (neuron0x4288210()*-0.982709);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a94d0() {
   return (neuron0x4288550()*-2.08011);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9510() {
   return (neuron0x4288890()*-0.20682);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9550() {
   return (neuron0x4288bd0()*0.0300682);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8fe0() {
   return (neuron0x4288f10()*-0.50576);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9020() {
   return (neuron0x4289470()*-0.214674);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a96a0() {
   return (neuron0x4289690()*-2.03863);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a96e0() {
   return (neuron0x42899d0()*0.204707);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9720() {
   return (neuron0x4289d10()*1.25215);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9760() {
   return (neuron0x428a050()*1.33409);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a97a0() {
   return (neuron0x428a390()*-1.74012);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a97e0() {
   return (neuron0x428a6d0()*0.124264);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9b60() {
   return (neuron0x4285ba0()*-0.218972);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ba0() {
   return (neuron0x4285e50()*1.32172);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9be0() {
   return (neuron0x4286190()*-0.137239);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9c20() {
   return (neuron0x42864d0()*1.01604);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9c60() {
   return (neuron0x4286810()*0.107465);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ca0() {
   return (neuron0x4286b50()*-0.0252058);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ce0() {
   return (neuron0x4286e90()*-0.0305186);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9d20() {
   return (neuron0x42871d0()*-0.647035);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9d60() {
   return (neuron0x4287510()*0.422342);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9da0() {
   return (neuron0x4287850()*0.50583);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9de0() {
   return (neuron0x4287b90()*0.0284501);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9e20() {
   return (neuron0x4287ed0()*-0.399903);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9e60() {
   return (neuron0x4288210()*-0.20127);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ea0() {
   return (neuron0x4288550()*1.56113);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ee0() {
   return (neuron0x4288890()*0.108966);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9f20() {
   return (neuron0x4288bd0()*1.0937);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a99b0() {
   return (neuron0x4288f10()*-0.502938);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a99f0() {
   return (neuron0x4289470()*0.0900699);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a520() {
   return (neuron0x4289690()*-0.497316);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a560() {
   return (neuron0x42899d0()*0.220991);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a5a0() {
   return (neuron0x4289d10()*-0.733373);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a5e0() {
   return (neuron0x428a050()*-0.254761);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a620() {
   return (neuron0x428a390()*0.0455623);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a660() {
   return (neuron0x428a6d0()*-0.243515);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a9e0() {
   return (neuron0x4285ba0()*-0.391395);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aa20() {
   return (neuron0x4285e50()*1.84211);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aa60() {
   return (neuron0x4286190()*-0.120414);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aaa0() {
   return (neuron0x42864d0()*0.287193);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aae0() {
   return (neuron0x4286810()*-0.00864862);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ab20() {
   return (neuron0x4286b50()*0.412132);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ab60() {
   return (neuron0x4286e90()*0.702788);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aba0() {
   return (neuron0x42871d0()*0.556584);
}

double NNfunction_nn_chi2_charge1m::synapse0x429abe0() {
   return (neuron0x4287510()*-0.799642);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ac20() {
   return (neuron0x4287850()*0.302413);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ac60() {
   return (neuron0x4287b90()*-0.0556745);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aca0() {
   return (neuron0x4287ed0()*0.219805);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ace0() {
   return (neuron0x4288210()*0.24979);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ad20() {
   return (neuron0x4288550()*0.148259);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ad60() {
   return (neuron0x4288890()*-0.632302);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ada0() {
   return (neuron0x4288bd0()*0.376748);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a830() {
   return (neuron0x4288f10()*0.784432);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a870() {
   return (neuron0x4289470()*0.128464);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aef0() {
   return (neuron0x4289690()*-0.161354);
}

double NNfunction_nn_chi2_charge1m::synapse0x429af30() {
   return (neuron0x42899d0()*-0.177837);
}

double NNfunction_nn_chi2_charge1m::synapse0x429af70() {
   return (neuron0x4289d10()*-0.529648);
}

double NNfunction_nn_chi2_charge1m::synapse0x429afb0() {
   return (neuron0x428a050()*-0.0666355);
}

double NNfunction_nn_chi2_charge1m::synapse0x429aff0() {
   return (neuron0x428a390()*0.0505293);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b030() {
   return (neuron0x428a6d0()*-0.0631286);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b3b0() {
   return (neuron0x4285ba0()*0.685946);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b3f0() {
   return (neuron0x4285e50()*0.741754);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b430() {
   return (neuron0x4286190()*2.32055);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b470() {
   return (neuron0x42864d0()*-0.49216);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b4b0() {
   return (neuron0x4286810()*-0.0695174);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b4f0() {
   return (neuron0x4286b50()*-0.420493);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b530() {
   return (neuron0x4286e90()*0.82614);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b570() {
   return (neuron0x42871d0()*-0.635588);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b5b0() {
   return (neuron0x4287510()*1.50446);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b5f0() {
   return (neuron0x4287850()*0.766327);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b630() {
   return (neuron0x4287b90()*0.35643);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b670() {
   return (neuron0x4287ed0()*0.090591);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b6b0() {
   return (neuron0x4288210()*-0.570536);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b6f0() {
   return (neuron0x4288550()*-1.33236);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b730() {
   return (neuron0x4288890()*0.556448);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b770() {
   return (neuron0x4288bd0()*-1.7727);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b200() {
   return (neuron0x4288f10()*-2.07098);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b240() {
   return (neuron0x4289470()*0.228576);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b8c0() {
   return (neuron0x4289690()*-0.211047);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b900() {
   return (neuron0x42899d0()*0.793313);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b940() {
   return (neuron0x4289d10()*1.23191);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b980() {
   return (neuron0x428a050()*-0.0528681);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b9c0() {
   return (neuron0x428a390()*-0.40483);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ba00() {
   return (neuron0x428a6d0()*0.118973);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bd80() {
   return (neuron0x4285ba0()*0.569494);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bdc0() {
   return (neuron0x4285e50()*-0.395303);
}

double NNfunction_nn_chi2_charge1m::synapse0x429be00() {
   return (neuron0x4286190()*0.829834);
}

double NNfunction_nn_chi2_charge1m::synapse0x429be40() {
   return (neuron0x42864d0()*-1.37147);
}

double NNfunction_nn_chi2_charge1m::synapse0x429be80() {
   return (neuron0x4286810()*0.03973);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bec0() {
   return (neuron0x4286b50()*-0.0622574);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bf00() {
   return (neuron0x4286e90()*1.44844);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bf40() {
   return (neuron0x42871d0()*-0.00405767);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bf80() {
   return (neuron0x4287510()*-1.01921);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bfc0() {
   return (neuron0x4287850()*0.735759);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c000() {
   return (neuron0x4287b90()*0.364563);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c040() {
   return (neuron0x4287ed0()*-0.11034);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c080() {
   return (neuron0x4288210()*-0.40806);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c0c0() {
   return (neuron0x4288550()*0.401403);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c100() {
   return (neuron0x4288890()*0.13756);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c140() {
   return (neuron0x4288bd0()*-1.01262);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bbd0() {
   return (neuron0x4288f10()*0.329516);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bc10() {
   return (neuron0x4289470()*-0.198984);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c290() {
   return (neuron0x4289690()*-0.687949);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c2d0() {
   return (neuron0x42899d0()*-1.08484);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c310() {
   return (neuron0x4289d10()*0.858717);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c350() {
   return (neuron0x428a050()*0.565906);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c390() {
   return (neuron0x428a390()*-1.17325);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c3d0() {
   return (neuron0x428a6d0()*0.345003);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae2a0() {
   return (neuron0x4285ba0()*-0.0834631);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae2e0() {
   return (neuron0x4285e50()*-0.0357404);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae320() {
   return (neuron0x4286190()*2.70412);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae360() {
   return (neuron0x42864d0()*-0.0176527);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae3a0() {
   return (neuron0x4286810()*-0.0494669);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae3e0() {
   return (neuron0x4286b50()*0.00551166);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae420() {
   return (neuron0x4286e90()*-0.0783942);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae460() {
   return (neuron0x42871d0()*0.00340544);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae4a0() {
   return (neuron0x4287510()*-0.0707481);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae4e0() {
   return (neuron0x4287850()*0.0207808);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae520() {
   return (neuron0x4287b90()*-0.00438784);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae560() {
   return (neuron0x4287ed0()*0.703945);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae5a0() {
   return (neuron0x4288210()*0.01513);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae5e0() {
   return (neuron0x4288550()*-0.107282);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae620() {
   return (neuron0x4288890()*-0.0285491);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae660() {
   return (neuron0x4288bd0()*-0.0456902);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c410() {
   return (neuron0x4288f10()*-0.0783443);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c450() {
   return (neuron0x4289470()*0.0357075);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae7b0() {
   return (neuron0x4289690()*-0.0186555);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae7f0() {
   return (neuron0x42899d0()*0.0300505);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae830() {
   return (neuron0x4289d10()*0.0285659);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae870() {
   return (neuron0x428a050()*0.00857586);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae8b0() {
   return (neuron0x428a390()*-0.0279189);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae8f0() {
   return (neuron0x428a6d0()*-8.13136);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aec70() {
   return (neuron0x4285ba0()*0.20948);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aecb0() {
   return (neuron0x4285e50()*0.162084);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aecf0() {
   return (neuron0x4286190()*1.34628);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aed30() {
   return (neuron0x42864d0()*-0.377881);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aed70() {
   return (neuron0x4286810()*0.573553);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aedb0() {
   return (neuron0x4286b50()*0.376917);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aedf0() {
   return (neuron0x4286e90()*0.392241);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aee30() {
   return (neuron0x42871d0()*-0.351408);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aee70() {
   return (neuron0x4287510()*-0.885023);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aeeb0() {
   return (neuron0x4287850()*-0.776379);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aeef0() {
   return (neuron0x4287b90()*0.00120917);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aef30() {
   return (neuron0x4287ed0()*-0.940901);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aef70() {
   return (neuron0x4288210()*-0.109043);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aefb0() {
   return (neuron0x4288550()*0.0899062);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aeff0() {
   return (neuron0x4288890()*0.773711);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af030() {
   return (neuron0x4288bd0()*-0.104255);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aeac0() {
   return (neuron0x4288f10()*0.120725);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aeb00() {
   return (neuron0x4289470()*-0.00543336);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af180() {
   return (neuron0x4289690()*-0.757265);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af1c0() {
   return (neuron0x42899d0()*0.100731);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af200() {
   return (neuron0x4289d10()*-0.0383211);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af240() {
   return (neuron0x428a050()*0.500941);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af280() {
   return (neuron0x428a390()*-0.349042);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af2c0() {
   return (neuron0x428a6d0()*-0.456969);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af640() {
   return (neuron0x4285ba0()*0.160186);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af680() {
   return (neuron0x4285e50()*-0.0538711);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af6c0() {
   return (neuron0x4286190()*3.62873);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af700() {
   return (neuron0x42864d0()*0.0164851);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af740() {
   return (neuron0x4286810()*-0.00551402);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af780() {
   return (neuron0x4286b50()*0.000436757);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af7c0() {
   return (neuron0x4286e90()*-0.0228067);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af800() {
   return (neuron0x42871d0()*-0.0155873);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af840() {
   return (neuron0x4287510()*-0.0117665);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af880() {
   return (neuron0x4287850()*-0.0239972);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af8c0() {
   return (neuron0x4287b90()*-0.00408543);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af900() {
   return (neuron0x4287ed0()*0.557946);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af940() {
   return (neuron0x4288210()*0.0271057);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af980() {
   return (neuron0x4288550()*-0.0477225);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af9c0() {
   return (neuron0x4288890()*-0.026339);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afa00() {
   return (neuron0x4288bd0()*0.0123489);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af490() {
   return (neuron0x4288f10()*-0.0444714);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af4d0() {
   return (neuron0x4289470()*-0.0010609);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afb50() {
   return (neuron0x4289690()*0.0140489);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afb90() {
   return (neuron0x42899d0()*-0.00389102);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afbd0() {
   return (neuron0x4289d10()*-0.00365443);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afc10() {
   return (neuron0x428a050()*0.0256002);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afc50() {
   return (neuron0x428a390()*-0.0020818);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afc90() {
   return (neuron0x428a6d0()*5.61096);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0010() {
   return (neuron0x4285ba0()*0.372162);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0050() {
   return (neuron0x4285e50()*-0.224627);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0090() {
   return (neuron0x4286190()*-0.0294729);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b00d0() {
   return (neuron0x42864d0()*-1.85223);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0110() {
   return (neuron0x4286810()*0.358872);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0150() {
   return (neuron0x4286b50()*-0.249091);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0190() {
   return (neuron0x4286e90()*0.544098);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b01d0() {
   return (neuron0x42871d0()*1.91724);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0210() {
   return (neuron0x4287510()*-0.477604);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0250() {
   return (neuron0x4287850()*1.0669);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0290() {
   return (neuron0x4287b90()*0.374473);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b02d0() {
   return (neuron0x4287ed0()*0.35929);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0310() {
   return (neuron0x4288210()*-0.760688);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0350() {
   return (neuron0x4288550()*-1.46184);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0390() {
   return (neuron0x4288890()*0.704716);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b03d0() {
   return (neuron0x4288bd0()*0.129496);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afe60() {
   return (neuron0x4288f10()*0.167593);
}

double NNfunction_nn_chi2_charge1m::synapse0x42afea0() {
   return (neuron0x4289470()*-0.361895);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0520() {
   return (neuron0x4289690()*-1.54793);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0560() {
   return (neuron0x42899d0()*1.09146);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b05a0() {
   return (neuron0x4289d10()*0.0436395);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b05e0() {
   return (neuron0x428a050()*0.891439);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0620() {
   return (neuron0x428a390()*-0.795003);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0660() {
   return (neuron0x428a6d0()*0.0680957);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050440() {
   return (neuron0x428ab40()*0.00511543);
}

double NNfunction_nn_chi2_charge1m::synapse0x4050480() {
   return (neuron0x428b490()*-0.104);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d000() {
   return (neuron0x428bf70()*0.00946773);
}

double NNfunction_nn_chi2_charge1m::synapse0x428d040() {
   return (neuron0x428ba10()*0.303473);
}

double NNfunction_nn_chi2_charge1m::synapse0x428eae0() {
   return (neuron0x428cd50()*0.139511);
}

double NNfunction_nn_chi2_charge1m::synapse0x428eb20() {
   return (neuron0x428e830()*-0.605023);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f8b0() {
   return (neuron0x428f600()*0.0136948);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f8f0() {
   return (neuron0x428ffd0()*0.0497492);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290280() {
   return (neuron0x42909a0()*0.0251444);
}

double NNfunction_nn_chi2_charge1m::synapse0x42902c0() {
   return (neuron0x4291480()*0.00565404);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290c50() {
   return (neuron0x4291e50()*0.0227396);
}

double NNfunction_nn_chi2_charge1m::synapse0x4290c90() {
   return (neuron0x428ef30()*0.61152);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291730() {
   return (neuron0x4293a00()*0.00829182);
}

double NNfunction_nn_chi2_charge1m::synapse0x4291770() {
   return (neuron0x42943d0()*0.0287156);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292100() {
   return (neuron0x4294da0()*-0.00646099);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292140() {
   return (neuron0x4295770()*-1.07866);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f1e0() {
   return (neuron0x4297580()*0.0327675);
}

double NNfunction_nn_chi2_charge1m::synapse0x428f220() {
   return (neuron0x4297860()*0.00444045);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293cb0() {
   return (neuron0x4298230()*0.0381499);
}

double NNfunction_nn_chi2_charge1m::synapse0x4293cf0() {
   return (neuron0x4298c00()*0.0159287);
}

double NNfunction_nn_chi2_charge1m::synapse0x4294680() {
   return (neuron0x42995d0()*0.00879631);
}

double NNfunction_nn_chi2_charge1m::synapse0x42946c0() {
   return (neuron0x4299fa0()*0.00829704);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295050() {
   return (neuron0x4292af0()*0.235399);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295090() {
   return (neuron0x42934c0()*-0.5443);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295a20() {
   return (neuron0x429cd30()*-0.0222703);
}

double NNfunction_nn_chi2_charge1m::synapse0x4295a60() {
   return (neuron0x429d700()*-0.00731046);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288ab0() {
   return (neuron0x429e0d0()*0.0296551);
}

double NNfunction_nn_chi2_charge1m::synapse0x4288af0() {
   return (neuron0x429eaa0()*1.6491);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297b10() {
   return (neuron0x429f470()*-0.314018);
}

double NNfunction_nn_chi2_charge1m::synapse0x4297b50() {
   return (neuron0x429fe40()*1.47721);
}

double NNfunction_nn_chi2_charge1m::synapse0x42984e0() {
   return (neuron0x42a0810()*-0.00472749);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298520() {
   return (neuron0x42a11e0()*-1.83884);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298eb0() {
   return (neuron0x4297270()*0.0595902);
}

double NNfunction_nn_chi2_charge1m::synapse0x4298ef0() {
   return (neuron0x42a3dc0()*-0.0790434);
}

double NNfunction_nn_chi2_charge1m::synapse0x4299880() {
   return (neuron0x42a4790()*0.00402254);
}

double NNfunction_nn_chi2_charge1m::synapse0x42998c0() {
   return (neuron0x42a5160()*-0.000844592);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a250() {
   return (neuron0x42a5b30()*-0.0346239);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a290() {
   return (neuron0x42a6500()*0.00589695);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292da0() {
   return (neuron0x42a6ed0()*-0.0125487);
}

double NNfunction_nn_chi2_charge1m::synapse0x4292de0() {
   return (neuron0x42a78a0()*-0.093557);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c650() {
   return (neuron0x42a8270()*-0.0136307);
}

double NNfunction_nn_chi2_charge1m::synapse0x429c690() {
   return (neuron0x42a8e50()*0.000894576);
}

double NNfunction_nn_chi2_charge1m::synapse0x429cfe0() {
   return (neuron0x42a9820()*0.0198347);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d020() {
   return (neuron0x429a6a0()*0.00583105);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d9b0() {
   return (neuron0x429b070()*0.0137987);
}

double NNfunction_nn_chi2_charge1m::synapse0x429d9f0() {
   return (neuron0x429ba40()*0.00344726);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e380() {
   return (neuron0x42ae080()*-1.02219);
}

double NNfunction_nn_chi2_charge1m::synapse0x429e3c0() {
   return (neuron0x42ae930()*0.0278581);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ed50() {
   return (neuron0x42af300()*0.102659);
}

double NNfunction_nn_chi2_charge1m::synapse0x429ed90() {
   return (neuron0x42afcd0()*-0.00690626);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a1490() {
   return (neuron0x428ab40()*0.0225181);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a14d0() {
   return (neuron0x428b490()*-0.382335);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296a50() {
   return (neuron0x428bf70()*0.00762149);
}

double NNfunction_nn_chi2_charge1m::synapse0x4296a90() {
   return (neuron0x428ba10()*0.594347);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4070() {
   return (neuron0x428cd50()*0.23995);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a40b0() {
   return (neuron0x428e830()*-0.186466);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4a40() {
   return (neuron0x428f600()*0.0183397);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a4a80() {
   return (neuron0x428ffd0()*-0.206922);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5410() {
   return (neuron0x42909a0()*-0.0538234);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5450() {
   return (neuron0x4291480()*-0.0285534);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5de0() {
   return (neuron0x4291e50()*0.19506);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a5e20() {
   return (neuron0x428ef30()*0.187959);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a67b0() {
   return (neuron0x4293a00()*0.0183876);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a67f0() {
   return (neuron0x42943d0()*0.019917);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7180() {
   return (neuron0x4294da0()*-0.0288528);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a71c0() {
   return (neuron0x4295770()*-0.728721);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7b50() {
   return (neuron0x4297580()*0.0576507);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a7b90() {
   return (neuron0x4297860()*0.0068198);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8520() {
   return (neuron0x4298230()*0.0885359);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a8560() {
   return (neuron0x4298c00()*0.0213831);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9100() {
   return (neuron0x42995d0()*-0.00711292);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9140() {
   return (neuron0x4299fa0()*-0.000796857);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9ad0() {
   return (neuron0x4292af0()*6.27704);
}

double NNfunction_nn_chi2_charge1m::synapse0x42a9b10() {
   return (neuron0x42934c0()*-1.83088);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a950() {
   return (neuron0x429cd30()*0.016028);
}

double NNfunction_nn_chi2_charge1m::synapse0x429a990() {
   return (neuron0x429d700()*-0.0146118);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b320() {
   return (neuron0x429e0d0()*0.0708923);
}

double NNfunction_nn_chi2_charge1m::synapse0x429b360() {
   return (neuron0x429eaa0()*0.809466);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bcf0() {
   return (neuron0x429f470()*-0.758548);
}

double NNfunction_nn_chi2_charge1m::synapse0x429bd30() {
   return (neuron0x429fe40()*8.39249);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae210() {
   return (neuron0x42a0810()*-0.043931);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ae250() {
   return (neuron0x42a11e0()*-3.03972);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aebe0() {
   return (neuron0x4297270()*0.0865224);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aec20() {
   return (neuron0x42a3dc0()*-0.285162);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af5b0() {
   return (neuron0x42a4790()*0.0160171);
}

double NNfunction_nn_chi2_charge1m::synapse0x42af5f0() {
   return (neuron0x42a5160()*-0.00553932);
}

double NNfunction_nn_chi2_charge1m::synapse0x42aff80() {
   return (neuron0x42a5b30()*-0.0609216);
}

double NNfunction_nn_chi2_charge1m::synapse0x42affc0() {
   return (neuron0x42a6500()*0.0109642);
}

double NNfunction_nn_chi2_charge1m::synapse0x428adf0() {
   return (neuron0x42a6ed0()*-0.0328935);
}

double NNfunction_nn_chi2_charge1m::synapse0x428ae30() {
   return (neuron0x42a78a0()*-0.263783);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f720() {
   return (neuron0x42a8270()*-0.0233198);
}

double NNfunction_nn_chi2_charge1m::synapse0x429f760() {
   return (neuron0x42a8e50()*-0.010278);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b06a0() {
   return (neuron0x42a9820()*0.0187392);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b06e0() {
   return (neuron0x429a6a0()*0.0178145);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0720() {
   return (neuron0x429b070()*0.0394894);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b0760() {
   return (neuron0x429ba40()*0.0339167);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7610() {
   return (neuron0x42ae080()*-0.858211);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7650() {
   return (neuron0x42ae930()*0.02845);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7690() {
   return (neuron0x42af300()*1.26529);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b76d0() {
   return (neuron0x42afcd0()*0.00561284);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7a50() {
   return (neuron0x428ab40()*-0.263223);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7a90() {
   return (neuron0x428b490()*0.319516);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7ad0() {
   return (neuron0x428bf70()*-0.0967239);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7b10() {
   return (neuron0x428ba10()*-0.983065);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7b50() {
   return (neuron0x428cd50()*-0.997484);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7b90() {
   return (neuron0x428e830()*-0.842745);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7bd0() {
   return (neuron0x428f600()*0.224637);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7c10() {
   return (neuron0x428ffd0()*0.92777);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7c50() {
   return (neuron0x42909a0()*-0.0647915);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7c90() {
   return (neuron0x4291480()*0.09405);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7cd0() {
   return (neuron0x4291e50()*0.316471);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7d10() {
   return (neuron0x428ef30()*0.0623269);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7d50() {
   return (neuron0x4293a00()*-0.154905);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7d90() {
   return (neuron0x42943d0()*0.144537);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7dd0() {
   return (neuron0x4294da0()*0.874949);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7e10() {
   return (neuron0x4295770()*-1.13371);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b78a0() {
   return (neuron0x4297580()*0.312638);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b78e0() {
   return (neuron0x4297860()*0.234584);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7f60() {
   return (neuron0x4298230()*0.716714);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7fa0() {
   return (neuron0x4298c00()*-0.257);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7fe0() {
   return (neuron0x42995d0()*-0.218498);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8020() {
   return (neuron0x4299fa0()*-0.128056);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8060() {
   return (neuron0x4292af0()*0.311729);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b80a0() {
   return (neuron0x42934c0()*-0.141023);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b80e0() {
   return (neuron0x429cd30()*-0.748169);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8120() {
   return (neuron0x429d700()*-0.397223);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8160() {
   return (neuron0x429e0d0()*-0.212829);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b81a0() {
   return (neuron0x429eaa0()*-0.49685);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b81e0() {
   return (neuron0x429f470()*-0.858304);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8220() {
   return (neuron0x429fe40()*0.0805843);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8260() {
   return (neuron0x42a0810()*-0.186156);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b82a0() {
   return (neuron0x42a11e0()*-0.69832);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7e50() {
   return (neuron0x4297270()*-0.776678);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7e90() {
   return (neuron0x42a3dc0()*-1.45794);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7ed0() {
   return (neuron0x42a4790()*-0.071313);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b7f10() {
   return (neuron0x42a5160()*-0.598429);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b84f0() {
   return (neuron0x42a5b30()*0.038562);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8530() {
   return (neuron0x42a6500()*-0.178279);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8570() {
   return (neuron0x42a6ed0()*-0.385515);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b85b0() {
   return (neuron0x42a78a0()*-0.944823);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b85f0() {
   return (neuron0x42a8270()*-0.0620935);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8630() {
   return (neuron0x42a8e50()*-0.207636);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8670() {
   return (neuron0x42a9820()*0.397762);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b86b0() {
   return (neuron0x429a6a0()*0.0988705);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b86f0() {
   return (neuron0x429b070()*-0.0727318);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8730() {
   return (neuron0x429ba40()*0.411508);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8770() {
   return (neuron0x42ae080()*0.476376);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b87b0() {
   return (neuron0x42ae930()*-0.480561);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b87f0() {
   return (neuron0x42af300()*0.624088);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8830() {
   return (neuron0x42afcd0()*0.895543);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8bb0() {
   return (neuron0x428ab40()*-0.0641501);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8bf0() {
   return (neuron0x428b490()*1.5537);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8c30() {
   return (neuron0x428bf70()*-3.21675);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8c70() {
   return (neuron0x428ba10()*0.25165);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8cb0() {
   return (neuron0x428cd50()*0.50451);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8cf0() {
   return (neuron0x428e830()*0.624964);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8d30() {
   return (neuron0x428f600()*-1.31926);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8d70() {
   return (neuron0x428ffd0()*0.591153);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8db0() {
   return (neuron0x42909a0()*-0.673786);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8df0() {
   return (neuron0x4291480()*0.480012);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8e30() {
   return (neuron0x4291e50()*0.744827);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8e70() {
   return (neuron0x428ef30()*-1.3921);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8eb0() {
   return (neuron0x4293a00()*-0.661629);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8ef0() {
   return (neuron0x42943d0()*0.170274);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8f30() {
   return (neuron0x4294da0()*-1.54468);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8f70() {
   return (neuron0x4295770()*-0.510277);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8a00() {
   return (neuron0x4297580()*-0.57537);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8a40() {
   return (neuron0x4297860()*-2.01226);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b90c0() {
   return (neuron0x4298230()*-0.528138);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9100() {
   return (neuron0x4298c00()*-0.18006);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9140() {
   return (neuron0x42995d0()*0.662853);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9180() {
   return (neuron0x4299fa0()*0.027968);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b91c0() {
   return (neuron0x4292af0()*-0.711316);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9200() {
   return (neuron0x42934c0()*-0.939428);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9240() {
   return (neuron0x429cd30()*1.80353);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9280() {
   return (neuron0x429d700()*-1.11935);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b92c0() {
   return (neuron0x429e0d0()*-0.071865);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9300() {
   return (neuron0x429eaa0()*0.819557);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9340() {
   return (neuron0x429f470()*-0.0282814);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9380() {
   return (neuron0x429fe40()*-0.815897);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b93c0() {
   return (neuron0x42a0810()*-1.61134);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9400() {
   return (neuron0x42a11e0()*-0.119903);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8fb0() {
   return (neuron0x4297270()*-0.458273);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b8ff0() {
   return (neuron0x42a3dc0()*-1.3181);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9030() {
   return (neuron0x42a4790()*0.167827);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9070() {
   return (neuron0x42a5160()*-1.09731);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9650() {
   return (neuron0x42a5b30()*-0.317962);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9690() {
   return (neuron0x42a6500()*-0.0669477);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b96d0() {
   return (neuron0x42a6ed0()*0.070324);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9710() {
   return (neuron0x42a78a0()*0.922923);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9750() {
   return (neuron0x42a8270()*-0.0802887);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9790() {
   return (neuron0x42a8e50()*-1.25527);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b97d0() {
   return (neuron0x42a9820()*0.104911);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9810() {
   return (neuron0x429a6a0()*-0.310447);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9850() {
   return (neuron0x429b070()*-0.968357);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9890() {
   return (neuron0x429ba40()*-0.720229);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b98d0() {
   return (neuron0x42ae080()*-0.914112);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9910() {
   return (neuron0x42ae930()*-0.815156);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9950() {
   return (neuron0x42af300()*0.488874);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9990() {
   return (neuron0x42afcd0()*-0.672682);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9d10() {
   return (neuron0x428ab40()*0.541593);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9d50() {
   return (neuron0x428b490()*-2.65563);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9d90() {
   return (neuron0x428bf70()*-0.325702);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9dd0() {
   return (neuron0x428ba10()*-1.15979);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9e10() {
   return (neuron0x428cd50()*-1.77708);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9e50() {
   return (neuron0x428e830()*9.82739);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9e90() {
   return (neuron0x428f600()*-0.782971);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9ed0() {
   return (neuron0x428ffd0()*-2.74975);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9f10() {
   return (neuron0x42909a0()*-4.83457);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9f50() {
   return (neuron0x4291480()*-1.5984);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9f90() {
   return (neuron0x4291e50()*1.71122);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9fd0() {
   return (neuron0x428ef30()*-7.33202);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba010() {
   return (neuron0x4293a00()*0.278596);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba050() {
   return (neuron0x42943d0()*3.28109);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba090() {
   return (neuron0x4294da0()*-0.672967);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba0d0() {
   return (neuron0x4295770()*2.37403);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9b60() {
   return (neuron0x4297580()*0.00330462);
}

double NNfunction_nn_chi2_charge1m::synapse0x42b9ba0() {
   return (neuron0x4297860()*-0.400432);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba220() {
   return (neuron0x4298230()*-1.44977);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba260() {
   return (neuron0x4298c00()*-0.391955);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba2a0() {
   return (neuron0x42995d0()*-0.702188);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba2e0() {
   return (neuron0x4299fa0()*-0.523121);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba320() {
   return (neuron0x4292af0()*1.21147);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba360() {
   return (neuron0x42934c0()*1.38079);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba3a0() {
   return (neuron0x429cd30()*3.24006);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba3e0() {
   return (neuron0x429d700()*0.389628);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba420() {
   return (neuron0x429e0d0()*-0.950218);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba460() {
   return (neuron0x429eaa0()*-0.780699);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba4a0() {
   return (neuron0x429f470()*-6.13163);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba4e0() {
   return (neuron0x429fe40()*-3.30472);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba520() {
   return (neuron0x42a0810()*-0.800954);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba560() {
   return (neuron0x42a11e0()*4.6906);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba110() {
   return (neuron0x4297270()*4.03885);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba150() {
   return (neuron0x42a3dc0()*10.1194);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba190() {
   return (neuron0x42a4790()*0.358588);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba1d0() {
   return (neuron0x42a5160()*0.565682);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba7b0() {
   return (neuron0x42a5b30()*1.16318);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba7f0() {
   return (neuron0x42a6500()*0.311544);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba830() {
   return (neuron0x42a6ed0()*0.525794);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba870() {
   return (neuron0x42a78a0()*6.97782);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba8b0() {
   return (neuron0x42a8270()*0.296885);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba8f0() {
   return (neuron0x42a8e50()*-0.430933);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba930() {
   return (neuron0x42a9820()*-0.730107);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba970() {
   return (neuron0x429a6a0()*0.699694);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba9b0() {
   return (neuron0x429b070()*0.261466);
}

double NNfunction_nn_chi2_charge1m::synapse0x42ba9f0() {
   return (neuron0x429ba40()*0.592727);
}

double NNfunction_nn_chi2_charge1m::synapse0x42baa30() {
   return (neuron0x42ae080()*-0.659697);
}

double NNfunction_nn_chi2_charge1m::synapse0x42baa70() {
   return (neuron0x42ae930()*-0.995564);
}

double NNfunction_nn_chi2_charge1m::synapse0x42baab0() {
   return (neuron0x42af300()*0.452989);
}

double NNfunction_nn_chi2_charge1m::synapse0x42baaf0() {
   return (neuron0x42afcd0()*0.341743);
}

double NNfunction_nn_chi2_charge1m::synapse0x42bad50() {
   return (neuron0x42b6ed0()*-12.5541);
}

double NNfunction_nn_chi2_charge1m::synapse0x42bad90() {
   return (neuron0x42b7270()*6.68762);
}

double NNfunction_nn_chi2_charge1m::synapse0x42badd0() {
   return (neuron0x42b7710()*-0.797348);
}

double NNfunction_nn_chi2_charge1m::synapse0x42bae10() {
   return (neuron0x42b8870()*-2.55807);
}

double NNfunction_nn_chi2_charge1m::synapse0x42bae50() {
   return (neuron0x42b99d0()*-7.09872);
}

