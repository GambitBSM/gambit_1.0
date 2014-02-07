#include "NNfunction_ss_uRuR.h"
#include <cmath>

double NNfunction_ss_uRuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4986)/15.3148;
   input1 = (in1 - -4.82126)/1166.19;
   input2 = (in2 - 651.504)/625.051;
   input3 = (in3 - -56.6622)/837.219;
   input4 = (in4 - 1090.64)/973.504;
   input5 = (in5 - 915.373)/965.365;
   input6 = (in6 - 926.689)/968.697;
   input7 = (in7 - 936.092)/946.096;
   input8 = (in8 - 911.585)/957.884;
   input9 = (in9 - 893.278)/941.48;
   input10 = (in10 - 979.832)/939.991;
   input11 = (in11 - 713.249)/855.11;
   input12 = (in12 - 716.611)/861.218;
   input13 = (in13 - 508.117)/523.217;
   input14 = (in14 - 446.312)/429.98;
   input15 = (in15 - 745.271)/846.665;
   input16 = (in16 - 543.893)/576.781;
   input17 = (in17 - 746.647)/878.839;
   input18 = (in18 - 739.476)/886.3;
   input19 = (in19 - 790.487)/867.021;
   input20 = (in20 - -5.68846)/490.626;
   input21 = (in21 - 0.614199)/1162.28;
   input22 = (in22 - 4.84517)/1206.15;
   input23 = (in23 - -191.88)/607.969;
   switch(index) {
     case 0:
         return neuron0x183c560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4986)/15.3148;
   input1 = (input[1] - -4.82126)/1166.19;
   input2 = (input[2] - 651.504)/625.051;
   input3 = (input[3] - -56.6622)/837.219;
   input4 = (input[4] - 1090.64)/973.504;
   input5 = (input[5] - 915.373)/965.365;
   input6 = (input[6] - 926.689)/968.697;
   input7 = (input[7] - 936.092)/946.096;
   input8 = (input[8] - 911.585)/957.884;
   input9 = (input[9] - 893.278)/941.48;
   input10 = (input[10] - 979.832)/939.991;
   input11 = (input[11] - 713.249)/855.11;
   input12 = (input[12] - 716.611)/861.218;
   input13 = (input[13] - 508.117)/523.217;
   input14 = (input[14] - 446.312)/429.98;
   input15 = (input[15] - 745.271)/846.665;
   input16 = (input[16] - 543.893)/576.781;
   input17 = (input[17] - 746.647)/878.839;
   input18 = (input[18] - 739.476)/886.3;
   input19 = (input[19] - 790.487)/867.021;
   input20 = (input[20] - -5.68846)/490.626;
   input21 = (input[21] - 0.614199)/1162.28;
   input22 = (input[22] - 4.84517)/1206.15;
   input23 = (input[23] - -191.88)/607.969;
   switch(index) {
     case 0:
         return neuron0x183c560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRuR::neuron0x1808620() {
   return input0;
}

double NNfunction_ss_uRuR::neuron0x1808960() {
   return input1;
}

double NNfunction_ss_uRuR::neuron0x1808ca0() {
   return input2;
}

double NNfunction_ss_uRuR::neuron0x1808fe0() {
   return input3;
}

double NNfunction_ss_uRuR::neuron0x1809320() {
   return input4;
}

double NNfunction_ss_uRuR::neuron0x1809660() {
   return input5;
}

double NNfunction_ss_uRuR::neuron0x18099a0() {
   return input6;
}

double NNfunction_ss_uRuR::neuron0x1809ce0() {
   return input7;
}

double NNfunction_ss_uRuR::neuron0x180a020() {
   return input8;
}

double NNfunction_ss_uRuR::neuron0x180a360() {
   return input9;
}

double NNfunction_ss_uRuR::neuron0x180a6a0() {
   return input10;
}

double NNfunction_ss_uRuR::neuron0x180a9e0() {
   return input11;
}

double NNfunction_ss_uRuR::neuron0x180ad20() {
   return input12;
}

double NNfunction_ss_uRuR::neuron0x180b060() {
   return input13;
}

double NNfunction_ss_uRuR::neuron0x180b3a0() {
   return input14;
}

double NNfunction_ss_uRuR::neuron0x180b6e0() {
   return input15;
}

double NNfunction_ss_uRuR::neuron0x180ba20() {
   return input16;
}

double NNfunction_ss_uRuR::neuron0x180bf80() {
   return input17;
}

double NNfunction_ss_uRuR::neuron0x180c1a0() {
   return input18;
}

double NNfunction_ss_uRuR::neuron0x180c4e0() {
   return input19;
}

double NNfunction_ss_uRuR::neuron0x180c820() {
   return input20;
}

double NNfunction_ss_uRuR::neuron0x180cb60() {
   return input21;
}

double NNfunction_ss_uRuR::neuron0x180cea0() {
   return input22;
}

double NNfunction_ss_uRuR::neuron0x180d1e0() {
   return input23;
}

double NNfunction_ss_uRuR::input0x180d680() {
   double input = 0.19086;
   input += synapse0x15c8490();
   input += synapse0x18084e0();
   input += synapse0x1808520();
   input += synapse0x180d930();
   input += synapse0x180d970();
   input += synapse0x180d9b0();
   input += synapse0x180d9f0();
   input += synapse0x180da30();
   input += synapse0x180da70();
   input += synapse0x180dab0();
   input += synapse0x180daf0();
   input += synapse0x180db30();
   input += synapse0x180db70();
   input += synapse0x180dbb0();
   input += synapse0x180dbf0();
   input += synapse0x180dc30();
   input += synapse0x1808450();
   input += synapse0x1808490();
   input += synapse0x15b9d30();
   input += synapse0x15b9d70();
   input += synapse0x180de90();
   input += synapse0x180ded0();
   input += synapse0x180df10();
   input += synapse0x180df50();
   return input;
}

double NNfunction_ss_uRuR::neuron0x180d680() {
   double input = input0x180d680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x180df90() {
   double input = -0.735381;
   input += synapse0x180e2d0();
   input += synapse0x180e310();
   input += synapse0x180e350();
   input += synapse0x180e390();
   input += synapse0x180e3d0();
   input += synapse0x180e410();
   input += synapse0x180e450();
   input += synapse0x180e490();
   input += synapse0x180e4d0();
   input += synapse0x180dd80();
   input += synapse0x180ddc0();
   input += synapse0x180de00();
   input += synapse0x180de40();
   input += synapse0x180e720();
   input += synapse0x180e760();
   input += synapse0x180e7a0();
   input += synapse0x180e120();
   input += synapse0x180e160();
   input += synapse0x180e8f0();
   input += synapse0x180e930();
   input += synapse0x180e970();
   input += synapse0x180e9b0();
   input += synapse0x180e9f0();
   input += synapse0x180ea30();
   return input;
}

double NNfunction_ss_uRuR::neuron0x180df90() {
   double input = input0x180df90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x180ea70() {
   double input = -0.150693;
   input += synapse0x180edb0();
   input += synapse0x180edf0();
   input += synapse0x180ee30();
   input += synapse0x180ee70();
   input += synapse0x180eeb0();
   input += synapse0x180eef0();
   input += synapse0x180ef30();
   input += synapse0x180ef70();
   input += synapse0x180efb0();
   input += synapse0x180eff0();
   input += synapse0x180f030();
   input += synapse0x180f070();
   input += synapse0x180f0b0();
   input += synapse0x180f0f0();
   input += synapse0x180f130();
   input += synapse0x180f170();
   input += synapse0x180ec00();
   input += synapse0x180ec40();
   input += synapse0x15c7b80();
   input += synapse0x15c7bc0();
   input += synapse0x17f76b0();
   input += synapse0x17f76f0();
   input += synapse0x17f7730();
   input += synapse0x1808560();
   return input;
}

double NNfunction_ss_uRuR::neuron0x180ea70() {
   double input = input0x180ea70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x15c8300() {
   double input = 2.07141;
   input += synapse0x180e6c0();
   input += synapse0x18085a0();
   input += synapse0x18085e0();
   input += synapse0x180f2c0();
   input += synapse0x180f300();
   input += synapse0x180f340();
   input += synapse0x180f380();
   input += synapse0x180f3c0();
   input += synapse0x180f400();
   input += synapse0x180f440();
   input += synapse0x180f480();
   input += synapse0x180f4c0();
   input += synapse0x180f500();
   input += synapse0x180f540();
   input += synapse0x180f580();
   input += synapse0x180f5c0();
   input += synapse0x180e510();
   input += synapse0x180e550();
   input += synapse0x180f710();
   input += synapse0x180f750();
   input += synapse0x180f790();
   input += synapse0x180f7d0();
   input += synapse0x180f810();
   input += synapse0x180f850();
   return input;
}

double NNfunction_ss_uRuR::neuron0x15c8300() {
   double input = input0x15c8300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x180f890() {
   double input = 0.0793957;
   input += synapse0x180fbd0();
   input += synapse0x180fc10();
   input += synapse0x180fc50();
   input += synapse0x180fc90();
   input += synapse0x180fcd0();
   input += synapse0x180fd10();
   input += synapse0x180fd50();
   input += synapse0x180fd90();
   input += synapse0x180fdd0();
   input += synapse0x180fe10();
   input += synapse0x180fe50();
   input += synapse0x180fe90();
   input += synapse0x180fed0();
   input += synapse0x180ff10();
   input += synapse0x180ff50();
   input += synapse0x180ff90();
   input += synapse0x180fa20();
   input += synapse0x180fa60();
   input += synapse0x18100e0();
   input += synapse0x1810120();
   input += synapse0x1810160();
   input += synapse0x18101a0();
   input += synapse0x18101e0();
   input += synapse0x1810220();
   return input;
}

double NNfunction_ss_uRuR::neuron0x180f890() {
   double input = input0x180f890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1810260() {
   double input = 1.04878;
   input += synapse0x18105a0();
   input += synapse0x18105e0();
   input += synapse0x1810620();
   input += synapse0x1810660();
   input += synapse0x18106a0();
   input += synapse0x18106e0();
   input += synapse0x1810720();
   input += synapse0x1810760();
   input += synapse0x18107a0();
   input += synapse0x15c7ef0();
   input += synapse0x15c7f30();
   input += synapse0x15c7f70();
   input += synapse0x15c7fb0();
   input += synapse0x15c7ff0();
   input += synapse0x15c8030();
   input += synapse0x15c8070();
   input += synapse0x18103f0();
   input += synapse0x1810430();
   input += synapse0x15c81c0();
   input += synapse0x15c8200();
   input += synapse0x15c8240();
   input += synapse0x15c8280();
   input += synapse0x15c82c0();
   input += synapse0x1810ff0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1810260() {
   double input = input0x1810260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1811030() {
   double input = -0.501553;
   input += synapse0x1811370();
   input += synapse0x18113b0();
   input += synapse0x18113f0();
   input += synapse0x1811430();
   input += synapse0x1811470();
   input += synapse0x18114b0();
   input += synapse0x18114f0();
   input += synapse0x1811530();
   input += synapse0x1811570();
   input += synapse0x18115b0();
   input += synapse0x18115f0();
   input += synapse0x1811630();
   input += synapse0x1811670();
   input += synapse0x18116b0();
   input += synapse0x18116f0();
   input += synapse0x1811730();
   input += synapse0x18111c0();
   input += synapse0x1811200();
   input += synapse0x1811880();
   input += synapse0x18118c0();
   input += synapse0x1811900();
   input += synapse0x1811940();
   input += synapse0x1811980();
   input += synapse0x18119c0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1811030() {
   double input = input0x1811030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1811a00() {
   double input = -0.231864;
   input += synapse0x1811d40();
   input += synapse0x1811d80();
   input += synapse0x1811dc0();
   input += synapse0x1811e00();
   input += synapse0x1811e40();
   input += synapse0x1811e80();
   input += synapse0x1811ec0();
   input += synapse0x1811f00();
   input += synapse0x1811f40();
   input += synapse0x1811f80();
   input += synapse0x1811fc0();
   input += synapse0x1812000();
   input += synapse0x1812040();
   input += synapse0x1812080();
   input += synapse0x18120c0();
   input += synapse0x1812100();
   input += synapse0x1811b90();
   input += synapse0x1811bd0();
   input += synapse0x1812250();
   input += synapse0x1812290();
   input += synapse0x18122d0();
   input += synapse0x1812310();
   input += synapse0x1812350();
   input += synapse0x1812390();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1811a00() {
   double input = input0x1811a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18123d0() {
   double input = 2.9969;
   input += synapse0x180be70();
   input += synapse0x180beb0();
   input += synapse0x180bef0();
   input += synapse0x180bf30();
   input += synapse0x1812920();
   input += synapse0x1812960();
   input += synapse0x18129a0();
   input += synapse0x18129e0();
   input += synapse0x1812a20();
   input += synapse0x1812a60();
   input += synapse0x1812aa0();
   input += synapse0x1812ae0();
   input += synapse0x1812b20();
   input += synapse0x1812b60();
   input += synapse0x1812ba0();
   input += synapse0x1812be0();
   input += synapse0x1812560();
   input += synapse0x18125a0();
   input += synapse0x1812d30();
   input += synapse0x1812d70();
   input += synapse0x1812db0();
   input += synapse0x1812df0();
   input += synapse0x1812e30();
   input += synapse0x1812e70();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18123d0() {
   double input = input0x18123d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1812eb0() {
   double input = -0.0293475;
   input += synapse0x18131f0();
   input += synapse0x1813230();
   input += synapse0x1813270();
   input += synapse0x18132b0();
   input += synapse0x18132f0();
   input += synapse0x1813330();
   input += synapse0x1813370();
   input += synapse0x18133b0();
   input += synapse0x18133f0();
   input += synapse0x1813430();
   input += synapse0x1813470();
   input += synapse0x18134b0();
   input += synapse0x18134f0();
   input += synapse0x1813530();
   input += synapse0x1813570();
   input += synapse0x18135b0();
   input += synapse0x1813040();
   input += synapse0x1813080();
   input += synapse0x1813700();
   input += synapse0x1813740();
   input += synapse0x1813780();
   input += synapse0x18137c0();
   input += synapse0x1813800();
   input += synapse0x1813840();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1812eb0() {
   double input = input0x1812eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1813880() {
   double input = -0.388927;
   input += synapse0x1813bc0();
   input += synapse0x1813c00();
   input += synapse0x1813c40();
   input += synapse0x1813c80();
   input += synapse0x1813cc0();
   input += synapse0x1813d00();
   input += synapse0x1813d40();
   input += synapse0x1813d80();
   input += synapse0x1813dc0();
   input += synapse0x1813e00();
   input += synapse0x1813e40();
   input += synapse0x1813e80();
   input += synapse0x1813ec0();
   input += synapse0x1813f00();
   input += synapse0x1813f40();
   input += synapse0x1813f80();
   input += synapse0x1813a10();
   input += synapse0x1813a50();
   input += synapse0x18107e0();
   input += synapse0x1810820();
   input += synapse0x1810860();
   input += synapse0x18108a0();
   input += synapse0x18108e0();
   input += synapse0x1810920();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1813880() {
   double input = input0x1813880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1810960() {
   double input = 0.353601;
   input += synapse0x1810ca0();
   input += synapse0x1810ce0();
   input += synapse0x1810d20();
   input += synapse0x1810d60();
   input += synapse0x1810da0();
   input += synapse0x1810de0();
   input += synapse0x1810e20();
   input += synapse0x1810e60();
   input += synapse0x1810ea0();
   input += synapse0x1810ee0();
   input += synapse0x1810f20();
   input += synapse0x1810f60();
   input += synapse0x1810fa0();
   input += synapse0x18150e0();
   input += synapse0x1815120();
   input += synapse0x1815160();
   input += synapse0x1810af0();
   input += synapse0x1810b30();
   input += synapse0x18152b0();
   input += synapse0x18152f0();
   input += synapse0x1815330();
   input += synapse0x1815370();
   input += synapse0x18153b0();
   input += synapse0x18153f0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1810960() {
   double input = input0x1810960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1815430() {
   double input = -1.12603;
   input += synapse0x1815770();
   input += synapse0x18157b0();
   input += synapse0x18157f0();
   input += synapse0x1815830();
   input += synapse0x1815870();
   input += synapse0x18158b0();
   input += synapse0x18158f0();
   input += synapse0x1815930();
   input += synapse0x1815970();
   input += synapse0x18159b0();
   input += synapse0x18159f0();
   input += synapse0x1815a30();
   input += synapse0x1815a70();
   input += synapse0x1815ab0();
   input += synapse0x1815af0();
   input += synapse0x1815b30();
   input += synapse0x18155c0();
   input += synapse0x1815600();
   input += synapse0x1815c80();
   input += synapse0x1815cc0();
   input += synapse0x1815d00();
   input += synapse0x1815d40();
   input += synapse0x1815d80();
   input += synapse0x1815dc0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1815430() {
   double input = input0x1815430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1815e00() {
   double input = -2.34907;
   input += synapse0x1816140();
   input += synapse0x1816180();
   input += synapse0x18161c0();
   input += synapse0x1816200();
   input += synapse0x1816240();
   input += synapse0x1816280();
   input += synapse0x18162c0();
   input += synapse0x1816300();
   input += synapse0x1816340();
   input += synapse0x1816380();
   input += synapse0x18163c0();
   input += synapse0x1816400();
   input += synapse0x1816440();
   input += synapse0x1816480();
   input += synapse0x18164c0();
   input += synapse0x1816500();
   input += synapse0x1815f90();
   input += synapse0x1815fd0();
   input += synapse0x1816650();
   input += synapse0x1816690();
   input += synapse0x18166d0();
   input += synapse0x1816710();
   input += synapse0x1816750();
   input += synapse0x1816790();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1815e00() {
   double input = input0x1815e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18167d0() {
   double input = -1.15079;
   input += synapse0x1816b10();
   input += synapse0x1816b50();
   input += synapse0x1816b90();
   input += synapse0x1816bd0();
   input += synapse0x1816c10();
   input += synapse0x1816c50();
   input += synapse0x1816c90();
   input += synapse0x1816cd0();
   input += synapse0x1816d10();
   input += synapse0x1816d50();
   input += synapse0x1816d90();
   input += synapse0x1816dd0();
   input += synapse0x1816e10();
   input += synapse0x1816e50();
   input += synapse0x1816e90();
   input += synapse0x1816ed0();
   input += synapse0x1816960();
   input += synapse0x18169a0();
   input += synapse0x1817020();
   input += synapse0x1817060();
   input += synapse0x18170a0();
   input += synapse0x18170e0();
   input += synapse0x1817120();
   input += synapse0x1817160();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18167d0() {
   double input = input0x18167d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18171a0() {
   double input = 0.284348;
   input += synapse0x18174e0();
   input += synapse0x1808840();
   input += synapse0x1808880();
   input += synapse0x1808b80();
   input += synapse0x1808bc0();
   input += synapse0x1808ec0();
   input += synapse0x1808f00();
   input += synapse0x1809200();
   input += synapse0x1809240();
   input += synapse0x1809540();
   input += synapse0x1809580();
   input += synapse0x1809880();
   input += synapse0x18098c0();
   input += synapse0x1809bc0();
   input += synapse0x1809c00();
   input += synapse0x1809f00();
   input += synapse0x1809f40();
   input += synapse0x180a240();
   input += synapse0x180a280();
   input += synapse0x180a580();
   input += synapse0x180a5c0();
   input += synapse0x180a8c0();
   input += synapse0x180a900();
   input += synapse0x180ac00();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18171a0() {
   double input = input0x18171a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1818fb0() {
   double input = 1.09692;
   input += synapse0x180ac40();
   input += synapse0x180b900();
   input += synapse0x180b940();
   input += synapse0x1817330();
   input += synapse0x1817370();
   input += synapse0x180bc40();
   input += synapse0x180bc80();
   input += synapse0x15b9c10();
   input += synapse0x15b9c50();
   input += synapse0x180c3c0();
   input += synapse0x180c400();
   input += synapse0x180c700();
   input += synapse0x180c740();
   input += synapse0x180ca40();
   input += synapse0x180ca80();
   input += synapse0x180cd80();
   input += synapse0x180cdc0();
   input += synapse0x180d0c0();
   input += synapse0x180d100();
   input += synapse0x180d400();
   input += synapse0x180d440();
   input += synapse0x180af40();
   input += synapse0x180af80();
   input += synapse0x1819250();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1818fb0() {
   double input = input0x1818fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1819290() {
   double input = -0.240384;
   input += synapse0x18195d0();
   input += synapse0x1819610();
   input += synapse0x1819650();
   input += synapse0x1819690();
   input += synapse0x18196d0();
   input += synapse0x1819710();
   input += synapse0x1819750();
   input += synapse0x1819790();
   input += synapse0x18197d0();
   input += synapse0x1819810();
   input += synapse0x1819850();
   input += synapse0x1819890();
   input += synapse0x18198d0();
   input += synapse0x1819910();
   input += synapse0x1819950();
   input += synapse0x1819990();
   input += synapse0x1819420();
   input += synapse0x1819460();
   input += synapse0x1819ae0();
   input += synapse0x1819b20();
   input += synapse0x1819b60();
   input += synapse0x1819ba0();
   input += synapse0x1819be0();
   input += synapse0x1819c20();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1819290() {
   double input = input0x1819290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1819c60() {
   double input = -0.377074;
   input += synapse0x1819fa0();
   input += synapse0x1819fe0();
   input += synapse0x181a020();
   input += synapse0x181a060();
   input += synapse0x181a0a0();
   input += synapse0x181a0e0();
   input += synapse0x181a120();
   input += synapse0x181a160();
   input += synapse0x181a1a0();
   input += synapse0x181a1e0();
   input += synapse0x181a220();
   input += synapse0x181a260();
   input += synapse0x181a2a0();
   input += synapse0x181a2e0();
   input += synapse0x181a320();
   input += synapse0x181a360();
   input += synapse0x1819df0();
   input += synapse0x1819e30();
   input += synapse0x181a4b0();
   input += synapse0x181a4f0();
   input += synapse0x181a530();
   input += synapse0x181a570();
   input += synapse0x181a5b0();
   input += synapse0x181a5f0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1819c60() {
   double input = input0x1819c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181a630() {
   double input = -1.71492;
   input += synapse0x181a970();
   input += synapse0x181a9b0();
   input += synapse0x181a9f0();
   input += synapse0x181aa30();
   input += synapse0x181aa70();
   input += synapse0x181aab0();
   input += synapse0x181aaf0();
   input += synapse0x181ab30();
   input += synapse0x181ab70();
   input += synapse0x181abb0();
   input += synapse0x181abf0();
   input += synapse0x181ac30();
   input += synapse0x181ac70();
   input += synapse0x181acb0();
   input += synapse0x181acf0();
   input += synapse0x181ad30();
   input += synapse0x181a7c0();
   input += synapse0x181a800();
   input += synapse0x181ae80();
   input += synapse0x181aec0();
   input += synapse0x181af00();
   input += synapse0x181af40();
   input += synapse0x181af80();
   input += synapse0x181afc0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181a630() {
   double input = input0x181a630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181b000() {
   double input = 1.73299;
   input += synapse0x181b340();
   input += synapse0x181b380();
   input += synapse0x181b3c0();
   input += synapse0x181b400();
   input += synapse0x181b440();
   input += synapse0x181b480();
   input += synapse0x181b4c0();
   input += synapse0x181b500();
   input += synapse0x181b540();
   input += synapse0x181b580();
   input += synapse0x181b5c0();
   input += synapse0x181b600();
   input += synapse0x181b640();
   input += synapse0x181b680();
   input += synapse0x181b6c0();
   input += synapse0x181b700();
   input += synapse0x181b190();
   input += synapse0x181b1d0();
   input += synapse0x181b850();
   input += synapse0x181b890();
   input += synapse0x181b8d0();
   input += synapse0x181b910();
   input += synapse0x181b950();
   input += synapse0x181b990();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181b000() {
   double input = input0x181b000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181b9d0() {
   double input = 0.813789;
   input += synapse0x181bd10();
   input += synapse0x181bd50();
   input += synapse0x181bd90();
   input += synapse0x181bdd0();
   input += synapse0x181be10();
   input += synapse0x181be50();
   input += synapse0x181be90();
   input += synapse0x181bed0();
   input += synapse0x181bf10();
   input += synapse0x18140d0();
   input += synapse0x1814110();
   input += synapse0x1814150();
   input += synapse0x1814190();
   input += synapse0x18141d0();
   input += synapse0x1814210();
   input += synapse0x1814250();
   input += synapse0x181bb60();
   input += synapse0x181bba0();
   input += synapse0x18143a0();
   input += synapse0x18143e0();
   input += synapse0x1814420();
   input += synapse0x1814460();
   input += synapse0x18144a0();
   input += synapse0x18144e0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181b9d0() {
   double input = input0x181b9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1814520() {
   double input = 2.96177;
   input += synapse0x1814860();
   input += synapse0x18148a0();
   input += synapse0x18148e0();
   input += synapse0x1814920();
   input += synapse0x1814960();
   input += synapse0x18149a0();
   input += synapse0x18149e0();
   input += synapse0x1814a20();
   input += synapse0x1814a60();
   input += synapse0x1814aa0();
   input += synapse0x1814ae0();
   input += synapse0x1814b20();
   input += synapse0x1814b60();
   input += synapse0x1814ba0();
   input += synapse0x1814be0();
   input += synapse0x1814c20();
   input += synapse0x18146b0();
   input += synapse0x18146f0();
   input += synapse0x1814d70();
   input += synapse0x1814db0();
   input += synapse0x1814df0();
   input += synapse0x1814e30();
   input += synapse0x1814e70();
   input += synapse0x1814eb0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1814520() {
   double input = input0x1814520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1814ef0() {
   double input = 0.512644;
   input += synapse0x1815080();
   input += synapse0x181e110();
   input += synapse0x181e150();
   input += synapse0x181e190();
   input += synapse0x181e1d0();
   input += synapse0x181e210();
   input += synapse0x181e250();
   input += synapse0x181e290();
   input += synapse0x181e2d0();
   input += synapse0x181e310();
   input += synapse0x181e350();
   input += synapse0x181e390();
   input += synapse0x181e3d0();
   input += synapse0x181e410();
   input += synapse0x181e450();
   input += synapse0x181e490();
   input += synapse0x181df60();
   input += synapse0x181dfa0();
   input += synapse0x181e5e0();
   input += synapse0x181e620();
   input += synapse0x181e660();
   input += synapse0x181e6a0();
   input += synapse0x181e6e0();
   input += synapse0x181e720();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1814ef0() {
   double input = input0x1814ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181e760() {
   double input = 0.62563;
   input += synapse0x181eaa0();
   input += synapse0x181eae0();
   input += synapse0x181eb20();
   input += synapse0x181eb60();
   input += synapse0x181eba0();
   input += synapse0x181ebe0();
   input += synapse0x181ec20();
   input += synapse0x181ec60();
   input += synapse0x181eca0();
   input += synapse0x181ece0();
   input += synapse0x181ed20();
   input += synapse0x181ed60();
   input += synapse0x181eda0();
   input += synapse0x181ede0();
   input += synapse0x181ee20();
   input += synapse0x181ee60();
   input += synapse0x181e8f0();
   input += synapse0x181e930();
   input += synapse0x181efb0();
   input += synapse0x181eff0();
   input += synapse0x181f030();
   input += synapse0x181f070();
   input += synapse0x181f0b0();
   input += synapse0x181f0f0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181e760() {
   double input = input0x181e760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181f130() {
   double input = -2.10504;
   input += synapse0x181f470();
   input += synapse0x181f4b0();
   input += synapse0x181f4f0();
   input += synapse0x181f530();
   input += synapse0x181f570();
   input += synapse0x181f5b0();
   input += synapse0x181f5f0();
   input += synapse0x181f630();
   input += synapse0x181f670();
   input += synapse0x181f6b0();
   input += synapse0x181f6f0();
   input += synapse0x181f730();
   input += synapse0x181f770();
   input += synapse0x181f7b0();
   input += synapse0x181f7f0();
   input += synapse0x181f830();
   input += synapse0x181f2c0();
   input += synapse0x181f300();
   input += synapse0x181f980();
   input += synapse0x181f9c0();
   input += synapse0x181fa00();
   input += synapse0x181fa40();
   input += synapse0x181fa80();
   input += synapse0x181fac0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181f130() {
   double input = input0x181f130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181fb00() {
   double input = -1.84549;
   input += synapse0x181fe40();
   input += synapse0x181fe80();
   input += synapse0x181fec0();
   input += synapse0x181ff00();
   input += synapse0x181ff40();
   input += synapse0x181ff80();
   input += synapse0x181ffc0();
   input += synapse0x1820000();
   input += synapse0x1820040();
   input += synapse0x1820080();
   input += synapse0x18200c0();
   input += synapse0x1820100();
   input += synapse0x1820140();
   input += synapse0x1820180();
   input += synapse0x18201c0();
   input += synapse0x1820200();
   input += synapse0x181fc90();
   input += synapse0x181fcd0();
   input += synapse0x1820350();
   input += synapse0x1820390();
   input += synapse0x18203d0();
   input += synapse0x1820410();
   input += synapse0x1820450();
   input += synapse0x1820490();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181fb00() {
   double input = input0x181fb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18204d0() {
   double input = 0.47129;
   input += synapse0x1820810();
   input += synapse0x1820850();
   input += synapse0x1820890();
   input += synapse0x18208d0();
   input += synapse0x1820910();
   input += synapse0x1820950();
   input += synapse0x1820990();
   input += synapse0x18209d0();
   input += synapse0x1820a10();
   input += synapse0x1820a50();
   input += synapse0x1820a90();
   input += synapse0x1820ad0();
   input += synapse0x1820b10();
   input += synapse0x1820b50();
   input += synapse0x1820b90();
   input += synapse0x1820bd0();
   input += synapse0x1820660();
   input += synapse0x18206a0();
   input += synapse0x1820d20();
   input += synapse0x1820d60();
   input += synapse0x1820da0();
   input += synapse0x1820de0();
   input += synapse0x1820e20();
   input += synapse0x1820e60();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18204d0() {
   double input = input0x18204d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1820ea0() {
   double input = -3.72459;
   input += synapse0x18211e0();
   input += synapse0x1821220();
   input += synapse0x1821260();
   input += synapse0x18212a0();
   input += synapse0x18212e0();
   input += synapse0x1821320();
   input += synapse0x1821360();
   input += synapse0x18213a0();
   input += synapse0x18213e0();
   input += synapse0x1821420();
   input += synapse0x1821460();
   input += synapse0x18214a0();
   input += synapse0x18214e0();
   input += synapse0x1821520();
   input += synapse0x1821560();
   input += synapse0x18215a0();
   input += synapse0x1821030();
   input += synapse0x1821070();
   input += synapse0x18216f0();
   input += synapse0x1821730();
   input += synapse0x1821770();
   input += synapse0x18217b0();
   input += synapse0x18217f0();
   input += synapse0x1821830();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1820ea0() {
   double input = input0x1820ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1821870() {
   double input = -0.204389;
   input += synapse0x1821bb0();
   input += synapse0x1821bf0();
   input += synapse0x1821c30();
   input += synapse0x1821c70();
   input += synapse0x1821cb0();
   input += synapse0x1821cf0();
   input += synapse0x1821d30();
   input += synapse0x1821d70();
   input += synapse0x1821db0();
   input += synapse0x1821df0();
   input += synapse0x1821e30();
   input += synapse0x1821e70();
   input += synapse0x1821eb0();
   input += synapse0x1821ef0();
   input += synapse0x1821f30();
   input += synapse0x1821f70();
   input += synapse0x1821a00();
   input += synapse0x1821a40();
   input += synapse0x18220c0();
   input += synapse0x1822100();
   input += synapse0x1822140();
   input += synapse0x1822180();
   input += synapse0x18221c0();
   input += synapse0x1822200();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1821870() {
   double input = input0x1821870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1822240() {
   double input = -1.47929;
   input += synapse0x1822580();
   input += synapse0x18225c0();
   input += synapse0x1822600();
   input += synapse0x1822640();
   input += synapse0x1822680();
   input += synapse0x18226c0();
   input += synapse0x1822700();
   input += synapse0x1822740();
   input += synapse0x1822780();
   input += synapse0x18227c0();
   input += synapse0x1822800();
   input += synapse0x1822840();
   input += synapse0x1822880();
   input += synapse0x18228c0();
   input += synapse0x1822900();
   input += synapse0x1822940();
   input += synapse0x18223d0();
   input += synapse0x1822410();
   input += synapse0x1822a90();
   input += synapse0x1822ad0();
   input += synapse0x1822b10();
   input += synapse0x1822b50();
   input += synapse0x1822b90();
   input += synapse0x1822bd0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1822240() {
   double input = input0x1822240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1822c10() {
   double input = 1.33996;
   input += synapse0x1822f50();
   input += synapse0x1817520();
   input += synapse0x1817560();
   input += synapse0x18175a0();
   input += synapse0x18177f0();
   input += synapse0x1817830();
   input += synapse0x1817870();
   input += synapse0x1817ac0();
   input += synapse0x1817b00();
   input += synapse0x1817d50();
   input += synapse0x1817d90();
   input += synapse0x1817dd0();
   input += synapse0x1818020();
   input += synapse0x1818060();
   input += synapse0x18182b0();
   input += synapse0x18182f0();
   input += synapse0x1822da0();
   input += synapse0x1822de0();
   input += synapse0x1818440();
   input += synapse0x1818950();
   input += synapse0x1818990();
   input += synapse0x18189d0();
   input += synapse0x1818c20();
   input += synapse0x1818c60();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1822c10() {
   double input = input0x1822c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1818ca0() {
   double input = 0.382166;
   input += synapse0x1818510();
   input += synapse0x1818550();
   input += synapse0x1818590();
   input += synapse0x18185d0();
   input += synapse0x1818f50();
   input += synapse0x18252a0();
   input += synapse0x18252e0();
   input += synapse0x1825320();
   input += synapse0x1825360();
   input += synapse0x18253a0();
   input += synapse0x18253e0();
   input += synapse0x1825420();
   input += synapse0x1825460();
   input += synapse0x18254a0();
   input += synapse0x18254e0();
   input += synapse0x1825520();
   input += synapse0x1818e30();
   input += synapse0x1818e70();
   input += synapse0x1825670();
   input += synapse0x18256b0();
   input += synapse0x18256f0();
   input += synapse0x1825730();
   input += synapse0x1825770();
   input += synapse0x18257b0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1818ca0() {
   double input = input0x1818ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18257f0() {
   double input = -0.842626;
   input += synapse0x1825b30();
   input += synapse0x1825b70();
   input += synapse0x1825bb0();
   input += synapse0x1825bf0();
   input += synapse0x1825c30();
   input += synapse0x1825c70();
   input += synapse0x1825cb0();
   input += synapse0x1825cf0();
   input += synapse0x1825d30();
   input += synapse0x1825d70();
   input += synapse0x1825db0();
   input += synapse0x1825df0();
   input += synapse0x1825e30();
   input += synapse0x1825e70();
   input += synapse0x1825eb0();
   input += synapse0x1825ef0();
   input += synapse0x1825980();
   input += synapse0x18259c0();
   input += synapse0x1826040();
   input += synapse0x1826080();
   input += synapse0x18260c0();
   input += synapse0x1826100();
   input += synapse0x1826140();
   input += synapse0x1826180();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18257f0() {
   double input = input0x18257f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18261c0() {
   double input = 0.616224;
   input += synapse0x1826500();
   input += synapse0x1826540();
   input += synapse0x1826580();
   input += synapse0x18265c0();
   input += synapse0x1826600();
   input += synapse0x1826640();
   input += synapse0x1826680();
   input += synapse0x18266c0();
   input += synapse0x1826700();
   input += synapse0x1826740();
   input += synapse0x1826780();
   input += synapse0x18267c0();
   input += synapse0x1826800();
   input += synapse0x1826840();
   input += synapse0x1826880();
   input += synapse0x18268c0();
   input += synapse0x1826350();
   input += synapse0x1826390();
   input += synapse0x1826a10();
   input += synapse0x1826a50();
   input += synapse0x1826a90();
   input += synapse0x1826ad0();
   input += synapse0x1826b10();
   input += synapse0x1826b50();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18261c0() {
   double input = input0x18261c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1826b90() {
   double input = 0.594042;
   input += synapse0x1826ed0();
   input += synapse0x1826f10();
   input += synapse0x1826f50();
   input += synapse0x1826f90();
   input += synapse0x1826fd0();
   input += synapse0x1827010();
   input += synapse0x1827050();
   input += synapse0x1827090();
   input += synapse0x18270d0();
   input += synapse0x1827110();
   input += synapse0x1827150();
   input += synapse0x1827190();
   input += synapse0x18271d0();
   input += synapse0x1827210();
   input += synapse0x1827250();
   input += synapse0x1827290();
   input += synapse0x1826d20();
   input += synapse0x1826d60();
   input += synapse0x18273e0();
   input += synapse0x1827420();
   input += synapse0x1827460();
   input += synapse0x18274a0();
   input += synapse0x18274e0();
   input += synapse0x1827520();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1826b90() {
   double input = input0x1826b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1827560() {
   double input = 1.27262;
   input += synapse0x18278a0();
   input += synapse0x18278e0();
   input += synapse0x1827920();
   input += synapse0x1827960();
   input += synapse0x18279a0();
   input += synapse0x18279e0();
   input += synapse0x1827a20();
   input += synapse0x1827a60();
   input += synapse0x1827aa0();
   input += synapse0x1827ae0();
   input += synapse0x1827b20();
   input += synapse0x1827b60();
   input += synapse0x1827ba0();
   input += synapse0x1827be0();
   input += synapse0x1827c20();
   input += synapse0x1827c60();
   input += synapse0x18276f0();
   input += synapse0x1827730();
   input += synapse0x1827db0();
   input += synapse0x1827df0();
   input += synapse0x1827e30();
   input += synapse0x1827e70();
   input += synapse0x1827eb0();
   input += synapse0x1827ef0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1827560() {
   double input = input0x1827560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1827f30() {
   double input = -0.684709;
   input += synapse0x1828270();
   input += synapse0x18282b0();
   input += synapse0x18282f0();
   input += synapse0x1828330();
   input += synapse0x1828370();
   input += synapse0x18283b0();
   input += synapse0x18283f0();
   input += synapse0x1828430();
   input += synapse0x1828470();
   input += synapse0x18284b0();
   input += synapse0x18284f0();
   input += synapse0x1828530();
   input += synapse0x1828570();
   input += synapse0x18285b0();
   input += synapse0x18285f0();
   input += synapse0x1828630();
   input += synapse0x18280c0();
   input += synapse0x1828100();
   input += synapse0x1828780();
   input += synapse0x18287c0();
   input += synapse0x1828800();
   input += synapse0x1828840();
   input += synapse0x1828880();
   input += synapse0x18288c0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1827f30() {
   double input = input0x1827f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1828900() {
   double input = 1.41505;
   input += synapse0x1828c40();
   input += synapse0x1828c80();
   input += synapse0x1828cc0();
   input += synapse0x1828d00();
   input += synapse0x1828d40();
   input += synapse0x1828d80();
   input += synapse0x1828dc0();
   input += synapse0x1828e00();
   input += synapse0x1828e40();
   input += synapse0x1828e80();
   input += synapse0x1828ec0();
   input += synapse0x1828f00();
   input += synapse0x1828f40();
   input += synapse0x1828f80();
   input += synapse0x1828fc0();
   input += synapse0x1829000();
   input += synapse0x1828a90();
   input += synapse0x1828ad0();
   input += synapse0x1829150();
   input += synapse0x1829190();
   input += synapse0x18291d0();
   input += synapse0x1829210();
   input += synapse0x1829250();
   input += synapse0x1829290();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1828900() {
   double input = input0x1828900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x18292d0() {
   double input = 0.0296387;
   input += synapse0x1829610();
   input += synapse0x1829650();
   input += synapse0x1829690();
   input += synapse0x18296d0();
   input += synapse0x1829710();
   input += synapse0x1829750();
   input += synapse0x1829790();
   input += synapse0x18297d0();
   input += synapse0x1829810();
   input += synapse0x1829850();
   input += synapse0x1829890();
   input += synapse0x18298d0();
   input += synapse0x1829910();
   input += synapse0x1829950();
   input += synapse0x1829990();
   input += synapse0x18299d0();
   input += synapse0x1829460();
   input += synapse0x18294a0();
   input += synapse0x1829b20();
   input += synapse0x1829b60();
   input += synapse0x1829ba0();
   input += synapse0x1829be0();
   input += synapse0x1829c20();
   input += synapse0x1829c60();
   return input;
}

double NNfunction_ss_uRuR::neuron0x18292d0() {
   double input = input0x18292d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1829ca0() {
   double input = -0.0920315;
   input += synapse0x1812710();
   input += synapse0x1812750();
   input += synapse0x1812790();
   input += synapse0x18127d0();
   input += synapse0x1812810();
   input += synapse0x1812850();
   input += synapse0x1812890();
   input += synapse0x18128d0();
   input += synapse0x182a3f0();
   input += synapse0x182a430();
   input += synapse0x182a470();
   input += synapse0x182a4b0();
   input += synapse0x182a4f0();
   input += synapse0x182a530();
   input += synapse0x182a570();
   input += synapse0x182a5b0();
   input += synapse0x1829e30();
   input += synapse0x1829e70();
   input += synapse0x182a700();
   input += synapse0x182a740();
   input += synapse0x182a780();
   input += synapse0x182a7c0();
   input += synapse0x182a800();
   input += synapse0x182a840();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1829ca0() {
   double input = input0x1829ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x182a880() {
   double input = 1.44666;
   input += synapse0x182abc0();
   input += synapse0x182ac00();
   input += synapse0x182ac40();
   input += synapse0x182ac80();
   input += synapse0x182acc0();
   input += synapse0x182ad00();
   input += synapse0x182ad40();
   input += synapse0x182ad80();
   input += synapse0x182adc0();
   input += synapse0x182ae00();
   input += synapse0x182ae40();
   input += synapse0x182ae80();
   input += synapse0x182aec0();
   input += synapse0x182af00();
   input += synapse0x182af40();
   input += synapse0x182af80();
   input += synapse0x182aa10();
   input += synapse0x182aa50();
   input += synapse0x182b0d0();
   input += synapse0x182b110();
   input += synapse0x182b150();
   input += synapse0x182b190();
   input += synapse0x182b1d0();
   input += synapse0x182b210();
   return input;
}

double NNfunction_ss_uRuR::neuron0x182a880() {
   double input = input0x182a880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x182b250() {
   double input = 1.48085;
   input += synapse0x182b590();
   input += synapse0x182b5d0();
   input += synapse0x182b610();
   input += synapse0x182b650();
   input += synapse0x182b690();
   input += synapse0x182b6d0();
   input += synapse0x182b710();
   input += synapse0x182b750();
   input += synapse0x182b790();
   input += synapse0x182b7d0();
   input += synapse0x182b810();
   input += synapse0x182b850();
   input += synapse0x182b890();
   input += synapse0x182b8d0();
   input += synapse0x182b910();
   input += synapse0x182b950();
   input += synapse0x182b3e0();
   input += synapse0x182b420();
   input += synapse0x181bf50();
   input += synapse0x181bf90();
   input += synapse0x181bfd0();
   input += synapse0x181c010();
   input += synapse0x181c050();
   input += synapse0x181c090();
   return input;
}

double NNfunction_ss_uRuR::neuron0x182b250() {
   double input = input0x182b250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181c0d0() {
   double input = 0.0516007;
   input += synapse0x181c410();
   input += synapse0x181c450();
   input += synapse0x181c490();
   input += synapse0x181c4d0();
   input += synapse0x181c510();
   input += synapse0x181c550();
   input += synapse0x181c590();
   input += synapse0x181c5d0();
   input += synapse0x181c610();
   input += synapse0x181c650();
   input += synapse0x181c690();
   input += synapse0x181c6d0();
   input += synapse0x181c710();
   input += synapse0x181c750();
   input += synapse0x181c790();
   input += synapse0x181c7d0();
   input += synapse0x181c260();
   input += synapse0x181c2a0();
   input += synapse0x181c920();
   input += synapse0x181c960();
   input += synapse0x181c9a0();
   input += synapse0x181c9e0();
   input += synapse0x181ca20();
   input += synapse0x181ca60();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181c0d0() {
   double input = input0x181c0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181caa0() {
   double input = 0.37271;
   input += synapse0x181cde0();
   input += synapse0x181ce20();
   input += synapse0x181ce60();
   input += synapse0x181cea0();
   input += synapse0x181cee0();
   input += synapse0x181cf20();
   input += synapse0x181cf60();
   input += synapse0x181cfa0();
   input += synapse0x181cfe0();
   input += synapse0x181d020();
   input += synapse0x181d060();
   input += synapse0x181d0a0();
   input += synapse0x181d0e0();
   input += synapse0x181d120();
   input += synapse0x181d160();
   input += synapse0x181d1a0();
   input += synapse0x181cc30();
   input += synapse0x181cc70();
   input += synapse0x181d2f0();
   input += synapse0x181d330();
   input += synapse0x181d370();
   input += synapse0x181d3b0();
   input += synapse0x181d3f0();
   input += synapse0x181d430();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181caa0() {
   double input = input0x181caa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x181d470() {
   double input = 1.83279;
   input += synapse0x181d7b0();
   input += synapse0x181d7f0();
   input += synapse0x181d830();
   input += synapse0x181d870();
   input += synapse0x181d8b0();
   input += synapse0x181d8f0();
   input += synapse0x181d930();
   input += synapse0x181d970();
   input += synapse0x181d9b0();
   input += synapse0x181d9f0();
   input += synapse0x181da30();
   input += synapse0x181da70();
   input += synapse0x181dab0();
   input += synapse0x181daf0();
   input += synapse0x181db30();
   input += synapse0x181db70();
   input += synapse0x181d600();
   input += synapse0x181d640();
   input += synapse0x181dcc0();
   input += synapse0x181dd00();
   input += synapse0x181dd40();
   input += synapse0x181dd80();
   input += synapse0x181ddc0();
   input += synapse0x181de00();
   return input;
}

double NNfunction_ss_uRuR::neuron0x181d470() {
   double input = input0x181d470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x182fab0() {
   double input = 0.629037;
   input += synapse0x182fcd0();
   input += synapse0x182fd10();
   input += synapse0x182fd50();
   input += synapse0x182fd90();
   input += synapse0x182fdd0();
   input += synapse0x182fe10();
   input += synapse0x182fe50();
   input += synapse0x182fe90();
   input += synapse0x182fed0();
   input += synapse0x182ff10();
   input += synapse0x182ff50();
   input += synapse0x182ff90();
   input += synapse0x182ffd0();
   input += synapse0x1830010();
   input += synapse0x1830050();
   input += synapse0x1830090();
   input += synapse0x181de40();
   input += synapse0x181de80();
   input += synapse0x18301e0();
   input += synapse0x1830220();
   input += synapse0x1830260();
   input += synapse0x18302a0();
   input += synapse0x18302e0();
   input += synapse0x1830320();
   return input;
}

double NNfunction_ss_uRuR::neuron0x182fab0() {
   double input = input0x182fab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1830360() {
   double input = -0.558909;
   input += synapse0x18306a0();
   input += synapse0x18306e0();
   input += synapse0x1830720();
   input += synapse0x1830760();
   input += synapse0x18307a0();
   input += synapse0x18307e0();
   input += synapse0x1830820();
   input += synapse0x1830860();
   input += synapse0x18308a0();
   input += synapse0x18308e0();
   input += synapse0x1830920();
   input += synapse0x1830960();
   input += synapse0x18309a0();
   input += synapse0x18309e0();
   input += synapse0x1830a20();
   input += synapse0x1830a60();
   input += synapse0x18304f0();
   input += synapse0x1830530();
   input += synapse0x1830bb0();
   input += synapse0x1830bf0();
   input += synapse0x1830c30();
   input += synapse0x1830c70();
   input += synapse0x1830cb0();
   input += synapse0x1830cf0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1830360() {
   double input = input0x1830360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1830d30() {
   double input = 0.0267043;
   input += synapse0x1831070();
   input += synapse0x18310b0();
   input += synapse0x18310f0();
   input += synapse0x1831130();
   input += synapse0x1831170();
   input += synapse0x18311b0();
   input += synapse0x18311f0();
   input += synapse0x1831230();
   input += synapse0x1831270();
   input += synapse0x18312b0();
   input += synapse0x18312f0();
   input += synapse0x1831330();
   input += synapse0x1831370();
   input += synapse0x18313b0();
   input += synapse0x18313f0();
   input += synapse0x1831430();
   input += synapse0x1830ec0();
   input += synapse0x1830f00();
   input += synapse0x1831580();
   input += synapse0x18315c0();
   input += synapse0x1831600();
   input += synapse0x1831640();
   input += synapse0x1831680();
   input += synapse0x18316c0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1830d30() {
   double input = input0x1830d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1831700() {
   double input = 1.49446;
   input += synapse0x1831a40();
   input += synapse0x1831a80();
   input += synapse0x1831ac0();
   input += synapse0x1831b00();
   input += synapse0x1831b40();
   input += synapse0x1831b80();
   input += synapse0x1831bc0();
   input += synapse0x1831c00();
   input += synapse0x1831c40();
   input += synapse0x1831c80();
   input += synapse0x1831cc0();
   input += synapse0x1831d00();
   input += synapse0x1831d40();
   input += synapse0x1831d80();
   input += synapse0x1831dc0();
   input += synapse0x1831e00();
   input += synapse0x1831890();
   input += synapse0x18318d0();
   input += synapse0x1831f50();
   input += synapse0x1831f90();
   input += synapse0x1831fd0();
   input += synapse0x1832010();
   input += synapse0x1832050();
   input += synapse0x1832090();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1831700() {
   double input = input0x1831700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1838900() {
   double input = 1.33144;
   input += synapse0x180e630();
   input += synapse0x180e670();
   input += synapse0x180fb40();
   input += synapse0x180fb80();
   input += synapse0x1810510();
   input += synapse0x1810550();
   input += synapse0x18112e0();
   input += synapse0x1811320();
   input += synapse0x1811cb0();
   input += synapse0x1811cf0();
   input += synapse0x1812680();
   input += synapse0x18126c0();
   input += synapse0x1813160();
   input += synapse0x18131a0();
   input += synapse0x1813b30();
   input += synapse0x1813b70();
   input += synapse0x1810c10();
   input += synapse0x1810c50();
   input += synapse0x18156e0();
   input += synapse0x1815720();
   input += synapse0x18160b0();
   input += synapse0x18160f0();
   input += synapse0x1816a80();
   input += synapse0x1816ac0();
   input += synapse0x1817450();
   input += synapse0x1817490();
   input += synapse0x180b5c0();
   input += synapse0x180b600();
   input += synapse0x1819540();
   input += synapse0x1819580();
   input += synapse0x1819f10();
   input += synapse0x1819f50();
   input += synapse0x181a8e0();
   input += synapse0x181a920();
   input += synapse0x181b2b0();
   input += synapse0x181b2f0();
   input += synapse0x181bc80();
   input += synapse0x181bcc0();
   input += synapse0x18147d0();
   input += synapse0x1814810();
   input += synapse0x181e080();
   input += synapse0x181e0c0();
   input += synapse0x181ea10();
   input += synapse0x181ea50();
   input += synapse0x181f3e0();
   input += synapse0x181f420();
   input += synapse0x181fdb0();
   input += synapse0x181fdf0();
   input += synapse0x1820780();
   input += synapse0x18207c0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1838900() {
   double input = input0x1838900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1838ca0() {
   double input = 0.00310279;
   input += synapse0x1822ec0();
   input += synapse0x1822f00();
   input += synapse0x1818480();
   input += synapse0x18184c0();
   input += synapse0x1825aa0();
   input += synapse0x1825ae0();
   input += synapse0x1826470();
   input += synapse0x18264b0();
   input += synapse0x1826e40();
   input += synapse0x1826e80();
   input += synapse0x1827810();
   input += synapse0x1827850();
   input += synapse0x18281e0();
   input += synapse0x1828220();
   input += synapse0x1828bb0();
   input += synapse0x1828bf0();
   input += synapse0x1829580();
   input += synapse0x18295c0();
   input += synapse0x1829f50();
   input += synapse0x1829f90();
   input += synapse0x182ab30();
   input += synapse0x182ab70();
   input += synapse0x182b500();
   input += synapse0x182b540();
   input += synapse0x181c380();
   input += synapse0x181c3c0();
   input += synapse0x181cd50();
   input += synapse0x181cd90();
   input += synapse0x181d720();
   input += synapse0x181d760();
   input += synapse0x182fc40();
   input += synapse0x182fc80();
   input += synapse0x1830610();
   input += synapse0x1830650();
   input += synapse0x1830fe0();
   input += synapse0x1831020();
   input += synapse0x18319b0();
   input += synapse0x18319f0();
   input += synapse0x180d8a0();
   input += synapse0x180d8e0();
   input += synapse0x1821150();
   input += synapse0x1821190();
   input += synapse0x18320d0();
   input += synapse0x1832110();
   input += synapse0x1832150();
   input += synapse0x1832190();
   input += synapse0x1839040();
   input += synapse0x1839080();
   input += synapse0x18390c0();
   input += synapse0x1839100();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1838ca0() {
   double input = input0x1838ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x1839140() {
   double input = -1.52344;
   input += synapse0x1839480();
   input += synapse0x18394c0();
   input += synapse0x1839500();
   input += synapse0x1839540();
   input += synapse0x1839580();
   input += synapse0x18395c0();
   input += synapse0x1839600();
   input += synapse0x1839640();
   input += synapse0x1839680();
   input += synapse0x18396c0();
   input += synapse0x1839700();
   input += synapse0x1839740();
   input += synapse0x1839780();
   input += synapse0x18397c0();
   input += synapse0x1839800();
   input += synapse0x1839840();
   input += synapse0x18392d0();
   input += synapse0x1839310();
   input += synapse0x1839990();
   input += synapse0x18399d0();
   input += synapse0x1839a10();
   input += synapse0x1839a50();
   input += synapse0x1839a90();
   input += synapse0x1839ad0();
   input += synapse0x1839b10();
   input += synapse0x1839b50();
   input += synapse0x1839b90();
   input += synapse0x1839bd0();
   input += synapse0x1839c10();
   input += synapse0x1839c50();
   input += synapse0x1839c90();
   input += synapse0x1839cd0();
   input += synapse0x1839880();
   input += synapse0x18398c0();
   input += synapse0x1839900();
   input += synapse0x1839940();
   input += synapse0x1839f20();
   input += synapse0x1839f60();
   input += synapse0x1839fa0();
   input += synapse0x1839fe0();
   input += synapse0x183a020();
   input += synapse0x183a060();
   input += synapse0x183a0a0();
   input += synapse0x183a0e0();
   input += synapse0x183a120();
   input += synapse0x183a160();
   input += synapse0x183a1a0();
   input += synapse0x183a1e0();
   input += synapse0x183a220();
   input += synapse0x183a260();
   return input;
}

double NNfunction_ss_uRuR::neuron0x1839140() {
   double input = input0x1839140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x183a2a0() {
   double input = -0.752;
   input += synapse0x183a5e0();
   input += synapse0x183a620();
   input += synapse0x183a660();
   input += synapse0x183a6a0();
   input += synapse0x183a6e0();
   input += synapse0x183a720();
   input += synapse0x183a760();
   input += synapse0x183a7a0();
   input += synapse0x183a7e0();
   input += synapse0x183a820();
   input += synapse0x183a860();
   input += synapse0x183a8a0();
   input += synapse0x183a8e0();
   input += synapse0x183a920();
   input += synapse0x183a960();
   input += synapse0x183a9a0();
   input += synapse0x183a430();
   input += synapse0x183a470();
   input += synapse0x183aaf0();
   input += synapse0x183ab30();
   input += synapse0x183ab70();
   input += synapse0x183abb0();
   input += synapse0x183abf0();
   input += synapse0x183ac30();
   input += synapse0x183ac70();
   input += synapse0x183acb0();
   input += synapse0x183acf0();
   input += synapse0x183ad30();
   input += synapse0x183ad70();
   input += synapse0x183adb0();
   input += synapse0x183adf0();
   input += synapse0x183ae30();
   input += synapse0x183a9e0();
   input += synapse0x183aa20();
   input += synapse0x183aa60();
   input += synapse0x183aaa0();
   input += synapse0x183b080();
   input += synapse0x183b0c0();
   input += synapse0x183b100();
   input += synapse0x183b140();
   input += synapse0x183b180();
   input += synapse0x183b1c0();
   input += synapse0x183b200();
   input += synapse0x183b240();
   input += synapse0x183b280();
   input += synapse0x183b2c0();
   input += synapse0x183b300();
   input += synapse0x183b340();
   input += synapse0x183b380();
   input += synapse0x183b3c0();
   return input;
}

double NNfunction_ss_uRuR::neuron0x183a2a0() {
   double input = input0x183a2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x183b400() {
   double input = -0.234618;
   input += synapse0x183b740();
   input += synapse0x183b780();
   input += synapse0x183b7c0();
   input += synapse0x183b800();
   input += synapse0x183b840();
   input += synapse0x183b880();
   input += synapse0x183b8c0();
   input += synapse0x183b900();
   input += synapse0x183b940();
   input += synapse0x183b980();
   input += synapse0x183b9c0();
   input += synapse0x183ba00();
   input += synapse0x183ba40();
   input += synapse0x183ba80();
   input += synapse0x183bac0();
   input += synapse0x183bb00();
   input += synapse0x183b590();
   input += synapse0x183b5d0();
   input += synapse0x183bc50();
   input += synapse0x183bc90();
   input += synapse0x183bcd0();
   input += synapse0x183bd10();
   input += synapse0x183bd50();
   input += synapse0x183bd90();
   input += synapse0x183bdd0();
   input += synapse0x183be10();
   input += synapse0x183be50();
   input += synapse0x183be90();
   input += synapse0x183bed0();
   input += synapse0x183bf10();
   input += synapse0x183bf50();
   input += synapse0x183bf90();
   input += synapse0x183bb40();
   input += synapse0x183bb80();
   input += synapse0x183bbc0();
   input += synapse0x183bc00();
   input += synapse0x183c1e0();
   input += synapse0x183c220();
   input += synapse0x183c260();
   input += synapse0x183c2a0();
   input += synapse0x183c2e0();
   input += synapse0x183c320();
   input += synapse0x183c360();
   input += synapse0x183c3a0();
   input += synapse0x183c3e0();
   input += synapse0x183c420();
   input += synapse0x183c460();
   input += synapse0x183c4a0();
   input += synapse0x183c4e0();
   input += synapse0x183c520();
   return input;
}

double NNfunction_ss_uRuR::neuron0x183b400() {
   double input = input0x183b400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRuR::input0x183c560() {
   double input = 2.09394;
   input += synapse0x180d640();
   input += synapse0x183c780();
   input += synapse0x183c7c0();
   input += synapse0x183c800();
   input += synapse0x183c840();
   return input;
}

double NNfunction_ss_uRuR::neuron0x183c560() {
   double input = input0x183c560();
   return (input * 1)+0;
}

double NNfunction_ss_uRuR::synapse0x15c8490() {
   return (neuron0x1808620()*-0.00902336);
}

double NNfunction_ss_uRuR::synapse0x18084e0() {
   return (neuron0x1808960()*-0.148573);
}

double NNfunction_ss_uRuR::synapse0x1808520() {
   return (neuron0x1808ca0()*0.113721);
}

double NNfunction_ss_uRuR::synapse0x180d930() {
   return (neuron0x1808fe0()*-0.493681);
}

double NNfunction_ss_uRuR::synapse0x180d970() {
   return (neuron0x1809320()*0.159842);
}

double NNfunction_ss_uRuR::synapse0x180d9b0() {
   return (neuron0x1809660()*0.152602);
}

double NNfunction_ss_uRuR::synapse0x180d9f0() {
   return (neuron0x18099a0()*0.0173738);
}

double NNfunction_ss_uRuR::synapse0x180da30() {
   return (neuron0x1809ce0()*-0.0522721);
}

double NNfunction_ss_uRuR::synapse0x180da70() {
   return (neuron0x180a020()*-0.0272023);
}

double NNfunction_ss_uRuR::synapse0x180dab0() {
   return (neuron0x180a360()*-0.0544448);
}

double NNfunction_ss_uRuR::synapse0x180daf0() {
   return (neuron0x180a6a0()*0.0164398);
}

double NNfunction_ss_uRuR::synapse0x180db30() {
   return (neuron0x180a9e0()*0.142022);
}

double NNfunction_ss_uRuR::synapse0x180db70() {
   return (neuron0x180ad20()*-0.0539349);
}

double NNfunction_ss_uRuR::synapse0x180dbb0() {
   return (neuron0x180b060()*-0.114649);
}

double NNfunction_ss_uRuR::synapse0x180dbf0() {
   return (neuron0x180b3a0()*-1.04863);
}

double NNfunction_ss_uRuR::synapse0x180dc30() {
   return (neuron0x180b6e0()*0.0209978);
}

double NNfunction_ss_uRuR::synapse0x1808450() {
   return (neuron0x180ba20()*0.0444039);
}

double NNfunction_ss_uRuR::synapse0x1808490() {
   return (neuron0x180bf80()*0.65103);
}

double NNfunction_ss_uRuR::synapse0x15b9d30() {
   return (neuron0x180c1a0()*-0.226797);
}

double NNfunction_ss_uRuR::synapse0x15b9d70() {
   return (neuron0x180c4e0()*0.00479626);
}

double NNfunction_ss_uRuR::synapse0x180de90() {
   return (neuron0x180c820()*-0.0256468);
}

double NNfunction_ss_uRuR::synapse0x180ded0() {
   return (neuron0x180cb60()*-0.0773653);
}

double NNfunction_ss_uRuR::synapse0x180df10() {
   return (neuron0x180cea0()*0.0286407);
}

double NNfunction_ss_uRuR::synapse0x180df50() {
   return (neuron0x180d1e0()*0.0843372);
}

double NNfunction_ss_uRuR::synapse0x180e2d0() {
   return (neuron0x1808620()*0.364422);
}

double NNfunction_ss_uRuR::synapse0x180e310() {
   return (neuron0x1808960()*-0.98407);
}

double NNfunction_ss_uRuR::synapse0x180e350() {
   return (neuron0x1808ca0()*-0.292821);
}

double NNfunction_ss_uRuR::synapse0x180e390() {
   return (neuron0x1808fe0()*-0.499762);
}

double NNfunction_ss_uRuR::synapse0x180e3d0() {
   return (neuron0x1809320()*0.215913);
}

double NNfunction_ss_uRuR::synapse0x180e410() {
   return (neuron0x1809660()*-0.533569);
}

double NNfunction_ss_uRuR::synapse0x180e450() {
   return (neuron0x18099a0()*0.214749);
}

double NNfunction_ss_uRuR::synapse0x180e490() {
   return (neuron0x1809ce0()*-0.109744);
}

double NNfunction_ss_uRuR::synapse0x180e4d0() {
   return (neuron0x180a020()*0.200823);
}

double NNfunction_ss_uRuR::synapse0x180dd80() {
   return (neuron0x180a360()*-1.1898);
}

double NNfunction_ss_uRuR::synapse0x180ddc0() {
   return (neuron0x180a6a0()*-0.755619);
}

double NNfunction_ss_uRuR::synapse0x180de00() {
   return (neuron0x180a9e0()*0.06599);
}

double NNfunction_ss_uRuR::synapse0x180de40() {
   return (neuron0x180ad20()*-0.140343);
}

double NNfunction_ss_uRuR::synapse0x180e720() {
   return (neuron0x180b060()*-0.798452);
}

double NNfunction_ss_uRuR::synapse0x180e760() {
   return (neuron0x180b3a0()*0.101444);
}

double NNfunction_ss_uRuR::synapse0x180e7a0() {
   return (neuron0x180b6e0()*-0.31467);
}

double NNfunction_ss_uRuR::synapse0x180e120() {
   return (neuron0x180ba20()*0.193165);
}

double NNfunction_ss_uRuR::synapse0x180e160() {
   return (neuron0x180bf80()*0.17403);
}

double NNfunction_ss_uRuR::synapse0x180e8f0() {
   return (neuron0x180c1a0()*0.129084);
}

double NNfunction_ss_uRuR::synapse0x180e930() {
   return (neuron0x180c4e0()*-0.572633);
}

double NNfunction_ss_uRuR::synapse0x180e970() {
   return (neuron0x180c820()*0.154973);
}

double NNfunction_ss_uRuR::synapse0x180e9b0() {
   return (neuron0x180cb60()*-0.16269);
}

double NNfunction_ss_uRuR::synapse0x180e9f0() {
   return (neuron0x180cea0()*-0.341255);
}

double NNfunction_ss_uRuR::synapse0x180ea30() {
   return (neuron0x180d1e0()*0.0369405);
}

double NNfunction_ss_uRuR::synapse0x180edb0() {
   return (neuron0x1808620()*0.481707);
}

double NNfunction_ss_uRuR::synapse0x180edf0() {
   return (neuron0x1808960()*0.0826568);
}

double NNfunction_ss_uRuR::synapse0x180ee30() {
   return (neuron0x1808ca0()*-0.868668);
}

double NNfunction_ss_uRuR::synapse0x180ee70() {
   return (neuron0x1808fe0()*-0.26472);
}

double NNfunction_ss_uRuR::synapse0x180eeb0() {
   return (neuron0x1809320()*-0.694772);
}

double NNfunction_ss_uRuR::synapse0x180eef0() {
   return (neuron0x1809660()*0.393651);
}

double NNfunction_ss_uRuR::synapse0x180ef30() {
   return (neuron0x18099a0()*-1.98537);
}

double NNfunction_ss_uRuR::synapse0x180ef70() {
   return (neuron0x1809ce0()*-0.0735256);
}

double NNfunction_ss_uRuR::synapse0x180efb0() {
   return (neuron0x180a020()*-0.105253);
}

double NNfunction_ss_uRuR::synapse0x180eff0() {
   return (neuron0x180a360()*0.27127);
}

double NNfunction_ss_uRuR::synapse0x180f030() {
   return (neuron0x180a6a0()*0.00628183);
}

double NNfunction_ss_uRuR::synapse0x180f070() {
   return (neuron0x180a9e0()*0.49485);
}

double NNfunction_ss_uRuR::synapse0x180f0b0() {
   return (neuron0x180ad20()*-0.290424);
}

double NNfunction_ss_uRuR::synapse0x180f0f0() {
   return (neuron0x180b060()*-0.0416071);
}

double NNfunction_ss_uRuR::synapse0x180f130() {
   return (neuron0x180b3a0()*1.82895);
}

double NNfunction_ss_uRuR::synapse0x180f170() {
   return (neuron0x180b6e0()*-0.869945);
}

double NNfunction_ss_uRuR::synapse0x180ec00() {
   return (neuron0x180ba20()*0.480322);
}

double NNfunction_ss_uRuR::synapse0x180ec40() {
   return (neuron0x180bf80()*0.0188923);
}

double NNfunction_ss_uRuR::synapse0x15c7b80() {
   return (neuron0x180c1a0()*-0.276915);
}

double NNfunction_ss_uRuR::synapse0x15c7bc0() {
   return (neuron0x180c4e0()*-0.197917);
}

double NNfunction_ss_uRuR::synapse0x17f76b0() {
   return (neuron0x180c820()*0.517525);
}

double NNfunction_ss_uRuR::synapse0x17f76f0() {
   return (neuron0x180cb60()*0.288252);
}

double NNfunction_ss_uRuR::synapse0x17f7730() {
   return (neuron0x180cea0()*-0.55397);
}

double NNfunction_ss_uRuR::synapse0x1808560() {
   return (neuron0x180d1e0()*-0.461536);
}

double NNfunction_ss_uRuR::synapse0x180e6c0() {
   return (neuron0x1808620()*-0.0308976);
}

double NNfunction_ss_uRuR::synapse0x18085a0() {
   return (neuron0x1808960()*-0.211585);
}

double NNfunction_ss_uRuR::synapse0x18085e0() {
   return (neuron0x1808ca0()*0.0201003);
}

double NNfunction_ss_uRuR::synapse0x180f2c0() {
   return (neuron0x1808fe0()*-0.510272);
}

double NNfunction_ss_uRuR::synapse0x180f300() {
   return (neuron0x1809320()*0.0943587);
}

double NNfunction_ss_uRuR::synapse0x180f340() {
   return (neuron0x1809660()*-0.059736);
}

double NNfunction_ss_uRuR::synapse0x180f380() {
   return (neuron0x18099a0()*0.0587289);
}

double NNfunction_ss_uRuR::synapse0x180f3c0() {
   return (neuron0x1809ce0()*-0.0912932);
}

double NNfunction_ss_uRuR::synapse0x180f400() {
   return (neuron0x180a020()*0.253739);
}

double NNfunction_ss_uRuR::synapse0x180f440() {
   return (neuron0x180a360()*-0.385501);
}

double NNfunction_ss_uRuR::synapse0x180f480() {
   return (neuron0x180a6a0()*0.199543);
}

double NNfunction_ss_uRuR::synapse0x180f4c0() {
   return (neuron0x180a9e0()*-0.14867);
}

double NNfunction_ss_uRuR::synapse0x180f500() {
   return (neuron0x180ad20()*-0.267934);
}

double NNfunction_ss_uRuR::synapse0x180f540() {
   return (neuron0x180b060()*0.392824);
}

double NNfunction_ss_uRuR::synapse0x180f580() {
   return (neuron0x180b3a0()*0.207617);
}

double NNfunction_ss_uRuR::synapse0x180f5c0() {
   return (neuron0x180b6e0()*-0.12756);
}

double NNfunction_ss_uRuR::synapse0x180e510() {
   return (neuron0x180ba20()*0.150071);
}

double NNfunction_ss_uRuR::synapse0x180e550() {
   return (neuron0x180bf80()*-0.371332);
}

double NNfunction_ss_uRuR::synapse0x180f710() {
   return (neuron0x180c1a0()*-0.549288);
}

double NNfunction_ss_uRuR::synapse0x180f750() {
   return (neuron0x180c4e0()*0.295305);
}

double NNfunction_ss_uRuR::synapse0x180f790() {
   return (neuron0x180c820()*0.00531855);
}

double NNfunction_ss_uRuR::synapse0x180f7d0() {
   return (neuron0x180cb60()*0.0482938);
}

double NNfunction_ss_uRuR::synapse0x180f810() {
   return (neuron0x180cea0()*-0.0084939);
}

double NNfunction_ss_uRuR::synapse0x180f850() {
   return (neuron0x180d1e0()*-0.0105045);
}

double NNfunction_ss_uRuR::synapse0x180fbd0() {
   return (neuron0x1808620()*0.0927605);
}

double NNfunction_ss_uRuR::synapse0x180fc10() {
   return (neuron0x1808960()*-0.545275);
}

double NNfunction_ss_uRuR::synapse0x180fc50() {
   return (neuron0x1808ca0()*-0.520099);
}

double NNfunction_ss_uRuR::synapse0x180fc90() {
   return (neuron0x1808fe0()*0.60921);
}

double NNfunction_ss_uRuR::synapse0x180fcd0() {
   return (neuron0x1809320()*0.485536);
}

double NNfunction_ss_uRuR::synapse0x180fd10() {
   return (neuron0x1809660()*-0.741894);
}

double NNfunction_ss_uRuR::synapse0x180fd50() {
   return (neuron0x18099a0()*-0.534317);
}

double NNfunction_ss_uRuR::synapse0x180fd90() {
   return (neuron0x1809ce0()*-0.553096);
}

double NNfunction_ss_uRuR::synapse0x180fdd0() {
   return (neuron0x180a020()*-0.478205);
}

double NNfunction_ss_uRuR::synapse0x180fe10() {
   return (neuron0x180a360()*0.506695);
}

double NNfunction_ss_uRuR::synapse0x180fe50() {
   return (neuron0x180a6a0()*-0.262938);
}

double NNfunction_ss_uRuR::synapse0x180fe90() {
   return (neuron0x180a9e0()*-0.480854);
}

double NNfunction_ss_uRuR::synapse0x180fed0() {
   return (neuron0x180ad20()*-1.66032);
}

double NNfunction_ss_uRuR::synapse0x180ff10() {
   return (neuron0x180b060()*1.63725);
}

double NNfunction_ss_uRuR::synapse0x180ff50() {
   return (neuron0x180b3a0()*-0.0659099);
}

double NNfunction_ss_uRuR::synapse0x180ff90() {
   return (neuron0x180b6e0()*-0.72885);
}

double NNfunction_ss_uRuR::synapse0x180fa20() {
   return (neuron0x180ba20()*1.44253);
}

double NNfunction_ss_uRuR::synapse0x180fa60() {
   return (neuron0x180bf80()*-0.225636);
}

double NNfunction_ss_uRuR::synapse0x18100e0() {
   return (neuron0x180c1a0()*0.366101);
}

double NNfunction_ss_uRuR::synapse0x1810120() {
   return (neuron0x180c4e0()*0.155488);
}

double NNfunction_ss_uRuR::synapse0x1810160() {
   return (neuron0x180c820()*-0.0578671);
}

double NNfunction_ss_uRuR::synapse0x18101a0() {
   return (neuron0x180cb60()*-0.227956);
}

double NNfunction_ss_uRuR::synapse0x18101e0() {
   return (neuron0x180cea0()*0.0522429);
}

double NNfunction_ss_uRuR::synapse0x1810220() {
   return (neuron0x180d1e0()*-0.323071);
}

double NNfunction_ss_uRuR::synapse0x18105a0() {
   return (neuron0x1808620()*0.330456);
}

double NNfunction_ss_uRuR::synapse0x18105e0() {
   return (neuron0x1808960()*-0.242226);
}

double NNfunction_ss_uRuR::synapse0x1810620() {
   return (neuron0x1808ca0()*-0.1564);
}

double NNfunction_ss_uRuR::synapse0x1810660() {
   return (neuron0x1808fe0()*-0.236925);
}

double NNfunction_ss_uRuR::synapse0x18106a0() {
   return (neuron0x1809320()*-0.739349);
}

double NNfunction_ss_uRuR::synapse0x18106e0() {
   return (neuron0x1809660()*-0.325403);
}

double NNfunction_ss_uRuR::synapse0x1810720() {
   return (neuron0x18099a0()*0.120343);
}

double NNfunction_ss_uRuR::synapse0x1810760() {
   return (neuron0x1809ce0()*-0.526045);
}

double NNfunction_ss_uRuR::synapse0x18107a0() {
   return (neuron0x180a020()*-0.905102);
}

double NNfunction_ss_uRuR::synapse0x15c7ef0() {
   return (neuron0x180a360()*1.77466);
}

double NNfunction_ss_uRuR::synapse0x15c7f30() {
   return (neuron0x180a6a0()*-0.639378);
}

double NNfunction_ss_uRuR::synapse0x15c7f70() {
   return (neuron0x180a9e0()*-0.481534);
}

double NNfunction_ss_uRuR::synapse0x15c7fb0() {
   return (neuron0x180ad20()*-0.626763);
}

double NNfunction_ss_uRuR::synapse0x15c7ff0() {
   return (neuron0x180b060()*0.435691);
}

double NNfunction_ss_uRuR::synapse0x15c8030() {
   return (neuron0x180b3a0()*-0.227569);
}

double NNfunction_ss_uRuR::synapse0x15c8070() {
   return (neuron0x180b6e0()*-0.108809);
}

double NNfunction_ss_uRuR::synapse0x18103f0() {
   return (neuron0x180ba20()*-0.356692);
}

double NNfunction_ss_uRuR::synapse0x1810430() {
   return (neuron0x180bf80()*-0.588195);
}

double NNfunction_ss_uRuR::synapse0x15c81c0() {
   return (neuron0x180c1a0()*0.224348);
}

double NNfunction_ss_uRuR::synapse0x15c8200() {
   return (neuron0x180c4e0()*0.707401);
}

double NNfunction_ss_uRuR::synapse0x15c8240() {
   return (neuron0x180c820()*-0.0899013);
}

double NNfunction_ss_uRuR::synapse0x15c8280() {
   return (neuron0x180cb60()*-0.231708);
}

double NNfunction_ss_uRuR::synapse0x15c82c0() {
   return (neuron0x180cea0()*0.68482);
}

double NNfunction_ss_uRuR::synapse0x1810ff0() {
   return (neuron0x180d1e0()*0.16338);
}

double NNfunction_ss_uRuR::synapse0x1811370() {
   return (neuron0x1808620()*-0.954878);
}

double NNfunction_ss_uRuR::synapse0x18113b0() {
   return (neuron0x1808960()*0.0496491);
}

double NNfunction_ss_uRuR::synapse0x18113f0() {
   return (neuron0x1808ca0()*-0.545309);
}

double NNfunction_ss_uRuR::synapse0x1811430() {
   return (neuron0x1808fe0()*-0.219688);
}

double NNfunction_ss_uRuR::synapse0x1811470() {
   return (neuron0x1809320()*-0.102893);
}

double NNfunction_ss_uRuR::synapse0x18114b0() {
   return (neuron0x1809660()*-0.650323);
}

double NNfunction_ss_uRuR::synapse0x18114f0() {
   return (neuron0x18099a0()*0.852175);
}

double NNfunction_ss_uRuR::synapse0x1811530() {
   return (neuron0x1809ce0()*-0.206268);
}

double NNfunction_ss_uRuR::synapse0x1811570() {
   return (neuron0x180a020()*-0.86603);
}

double NNfunction_ss_uRuR::synapse0x18115b0() {
   return (neuron0x180a360()*-0.114621);
}

double NNfunction_ss_uRuR::synapse0x18115f0() {
   return (neuron0x180a6a0()*0.0220281);
}

double NNfunction_ss_uRuR::synapse0x1811630() {
   return (neuron0x180a9e0()*1.16182);
}

double NNfunction_ss_uRuR::synapse0x1811670() {
   return (neuron0x180ad20()*0.504765);
}

double NNfunction_ss_uRuR::synapse0x18116b0() {
   return (neuron0x180b060()*0.112386);
}

double NNfunction_ss_uRuR::synapse0x18116f0() {
   return (neuron0x180b3a0()*0.50633);
}

double NNfunction_ss_uRuR::synapse0x1811730() {
   return (neuron0x180b6e0()*0.260442);
}

double NNfunction_ss_uRuR::synapse0x18111c0() {
   return (neuron0x180ba20()*0.239564);
}

double NNfunction_ss_uRuR::synapse0x1811200() {
   return (neuron0x180bf80()*-1.06897);
}

double NNfunction_ss_uRuR::synapse0x1811880() {
   return (neuron0x180c1a0()*-0.161689);
}

double NNfunction_ss_uRuR::synapse0x18118c0() {
   return (neuron0x180c4e0()*-0.0455926);
}

double NNfunction_ss_uRuR::synapse0x1811900() {
   return (neuron0x180c820()*0.403239);
}

double NNfunction_ss_uRuR::synapse0x1811940() {
   return (neuron0x180cb60()*0.722381);
}

double NNfunction_ss_uRuR::synapse0x1811980() {
   return (neuron0x180cea0()*-0.473612);
}

double NNfunction_ss_uRuR::synapse0x18119c0() {
   return (neuron0x180d1e0()*0.164226);
}

double NNfunction_ss_uRuR::synapse0x1811d40() {
   return (neuron0x1808620()*0.839363);
}

double NNfunction_ss_uRuR::synapse0x1811d80() {
   return (neuron0x1808960()*-0.440121);
}

double NNfunction_ss_uRuR::synapse0x1811dc0() {
   return (neuron0x1808ca0()*-0.857222);
}

double NNfunction_ss_uRuR::synapse0x1811e00() {
   return (neuron0x1808fe0()*-0.406093);
}

double NNfunction_ss_uRuR::synapse0x1811e40() {
   return (neuron0x1809320()*0.579982);
}

double NNfunction_ss_uRuR::synapse0x1811e80() {
   return (neuron0x1809660()*-0.116305);
}

double NNfunction_ss_uRuR::synapse0x1811ec0() {
   return (neuron0x18099a0()*-0.277777);
}

double NNfunction_ss_uRuR::synapse0x1811f00() {
   return (neuron0x1809ce0()*0.245847);
}

double NNfunction_ss_uRuR::synapse0x1811f40() {
   return (neuron0x180a020()*0.607086);
}

double NNfunction_ss_uRuR::synapse0x1811f80() {
   return (neuron0x180a360()*-0.153436);
}

double NNfunction_ss_uRuR::synapse0x1811fc0() {
   return (neuron0x180a6a0()*-0.796929);
}

double NNfunction_ss_uRuR::synapse0x1812000() {
   return (neuron0x180a9e0()*-0.135112);
}

double NNfunction_ss_uRuR::synapse0x1812040() {
   return (neuron0x180ad20()*0.31575);
}

double NNfunction_ss_uRuR::synapse0x1812080() {
   return (neuron0x180b060()*-0.0674498);
}

double NNfunction_ss_uRuR::synapse0x18120c0() {
   return (neuron0x180b3a0()*-1.15502);
}

double NNfunction_ss_uRuR::synapse0x1812100() {
   return (neuron0x180b6e0()*-0.344076);
}

double NNfunction_ss_uRuR::synapse0x1811b90() {
   return (neuron0x180ba20()*0.0347351);
}

double NNfunction_ss_uRuR::synapse0x1811bd0() {
   return (neuron0x180bf80()*1.56842);
}

double NNfunction_ss_uRuR::synapse0x1812250() {
   return (neuron0x180c1a0()*0.468408);
}

double NNfunction_ss_uRuR::synapse0x1812290() {
   return (neuron0x180c4e0()*-0.601709);
}

double NNfunction_ss_uRuR::synapse0x18122d0() {
   return (neuron0x180c820()*-1.37387);
}

double NNfunction_ss_uRuR::synapse0x1812310() {
   return (neuron0x180cb60()*-0.177586);
}

double NNfunction_ss_uRuR::synapse0x1812350() {
   return (neuron0x180cea0()*0.690238);
}

double NNfunction_ss_uRuR::synapse0x1812390() {
   return (neuron0x180d1e0()*-0.128005);
}

double NNfunction_ss_uRuR::synapse0x180be70() {
   return (neuron0x1808620()*0.0242417);
}

double NNfunction_ss_uRuR::synapse0x180beb0() {
   return (neuron0x1808960()*0.00736623);
}

double NNfunction_ss_uRuR::synapse0x180bef0() {
   return (neuron0x1808ca0()*0.00810005);
}

double NNfunction_ss_uRuR::synapse0x180bf30() {
   return (neuron0x1808fe0()*-19.583);
}

double NNfunction_ss_uRuR::synapse0x1812920() {
   return (neuron0x1809320()*0.00539598);
}

double NNfunction_ss_uRuR::synapse0x1812960() {
   return (neuron0x1809660()*-0.0338614);
}

double NNfunction_ss_uRuR::synapse0x18129a0() {
   return (neuron0x18099a0()*-0.0445831);
}

double NNfunction_ss_uRuR::synapse0x18129e0() {
   return (neuron0x1809ce0()*-0.00242168);
}

double NNfunction_ss_uRuR::synapse0x1812a20() {
   return (neuron0x180a020()*0.0316302);
}

double NNfunction_ss_uRuR::synapse0x1812a60() {
   return (neuron0x180a360()*-0.041161);
}

double NNfunction_ss_uRuR::synapse0x1812aa0() {
   return (neuron0x180a6a0()*0.00626033);
}

double NNfunction_ss_uRuR::synapse0x1812ae0() {
   return (neuron0x180a9e0()*-0.0215852);
}

double NNfunction_ss_uRuR::synapse0x1812b20() {
   return (neuron0x180ad20()*-0.026134);
}

double NNfunction_ss_uRuR::synapse0x1812b60() {
   return (neuron0x180b060()*0.0194819);
}

double NNfunction_ss_uRuR::synapse0x1812ba0() {
   return (neuron0x180b3a0()*0.841535);
}

double NNfunction_ss_uRuR::synapse0x1812be0() {
   return (neuron0x180b6e0()*0.0673722);
}

double NNfunction_ss_uRuR::synapse0x1812560() {
   return (neuron0x180ba20()*0.00545005);
}

double NNfunction_ss_uRuR::synapse0x18125a0() {
   return (neuron0x180bf80()*-0.000681348);
}

double NNfunction_ss_uRuR::synapse0x1812d30() {
   return (neuron0x180c1a0()*0.0228024);
}

double NNfunction_ss_uRuR::synapse0x1812d70() {
   return (neuron0x180c4e0()*-0.0498248);
}

double NNfunction_ss_uRuR::synapse0x1812db0() {
   return (neuron0x180c820()*-0.0245763);
}

double NNfunction_ss_uRuR::synapse0x1812df0() {
   return (neuron0x180cb60()*0.000883622);
}

double NNfunction_ss_uRuR::synapse0x1812e30() {
   return (neuron0x180cea0()*-0.0230214);
}

double NNfunction_ss_uRuR::synapse0x1812e70() {
   return (neuron0x180d1e0()*-0.0245858);
}

double NNfunction_ss_uRuR::synapse0x18131f0() {
   return (neuron0x1808620()*0.0792049);
}

double NNfunction_ss_uRuR::synapse0x1813230() {
   return (neuron0x1808960()*-0.843985);
}

double NNfunction_ss_uRuR::synapse0x1813270() {
   return (neuron0x1808ca0()*0.673815);
}

double NNfunction_ss_uRuR::synapse0x18132b0() {
   return (neuron0x1808fe0()*-0.809564);
}

double NNfunction_ss_uRuR::synapse0x18132f0() {
   return (neuron0x1809320()*1.0343);
}

double NNfunction_ss_uRuR::synapse0x1813330() {
   return (neuron0x1809660()*0.0150442);
}

double NNfunction_ss_uRuR::synapse0x1813370() {
   return (neuron0x18099a0()*0.0132253);
}

double NNfunction_ss_uRuR::synapse0x18133b0() {
   return (neuron0x1809ce0()*0.04594);
}

double NNfunction_ss_uRuR::synapse0x18133f0() {
   return (neuron0x180a020()*-0.10209);
}

double NNfunction_ss_uRuR::synapse0x1813430() {
   return (neuron0x180a360()*0.0965098);
}

double NNfunction_ss_uRuR::synapse0x1813470() {
   return (neuron0x180a6a0()*-0.124205);
}

double NNfunction_ss_uRuR::synapse0x18134b0() {
   return (neuron0x180a9e0()*0.0858247);
}

double NNfunction_ss_uRuR::synapse0x18134f0() {
   return (neuron0x180ad20()*1.39403);
}

double NNfunction_ss_uRuR::synapse0x1813530() {
   return (neuron0x180b060()*-0.250359);
}

double NNfunction_ss_uRuR::synapse0x1813570() {
   return (neuron0x180b3a0()*1.45915);
}

double NNfunction_ss_uRuR::synapse0x18135b0() {
   return (neuron0x180b6e0()*0.383968);
}

double NNfunction_ss_uRuR::synapse0x1813040() {
   return (neuron0x180ba20()*-0.698702);
}

double NNfunction_ss_uRuR::synapse0x1813080() {
   return (neuron0x180bf80()*-0.230072);
}

double NNfunction_ss_uRuR::synapse0x1813700() {
   return (neuron0x180c1a0()*-0.0754533);
}

double NNfunction_ss_uRuR::synapse0x1813740() {
   return (neuron0x180c4e0()*-0.22408);
}

double NNfunction_ss_uRuR::synapse0x1813780() {
   return (neuron0x180c820()*0.762537);
}

double NNfunction_ss_uRuR::synapse0x18137c0() {
   return (neuron0x180cb60()*-0.378708);
}

double NNfunction_ss_uRuR::synapse0x1813800() {
   return (neuron0x180cea0()*0.307391);
}

double NNfunction_ss_uRuR::synapse0x1813840() {
   return (neuron0x180d1e0()*0.242108);
}

double NNfunction_ss_uRuR::synapse0x1813bc0() {
   return (neuron0x1808620()*0.154566);
}

double NNfunction_ss_uRuR::synapse0x1813c00() {
   return (neuron0x1808960()*-0.325839);
}

double NNfunction_ss_uRuR::synapse0x1813c40() {
   return (neuron0x1808ca0()*-0.513743);
}

double NNfunction_ss_uRuR::synapse0x1813c80() {
   return (neuron0x1808fe0()*0.0111021);
}

double NNfunction_ss_uRuR::synapse0x1813cc0() {
   return (neuron0x1809320()*0.104309);
}

double NNfunction_ss_uRuR::synapse0x1813d00() {
   return (neuron0x1809660()*0.260799);
}

double NNfunction_ss_uRuR::synapse0x1813d40() {
   return (neuron0x18099a0()*-0.321362);
}

double NNfunction_ss_uRuR::synapse0x1813d80() {
   return (neuron0x1809ce0()*0.185648);
}

double NNfunction_ss_uRuR::synapse0x1813dc0() {
   return (neuron0x180a020()*0.303478);
}

double NNfunction_ss_uRuR::synapse0x1813e00() {
   return (neuron0x180a360()*0.42499);
}

double NNfunction_ss_uRuR::synapse0x1813e40() {
   return (neuron0x180a6a0()*-0.771033);
}

double NNfunction_ss_uRuR::synapse0x1813e80() {
   return (neuron0x180a9e0()*0.194822);
}

double NNfunction_ss_uRuR::synapse0x1813ec0() {
   return (neuron0x180ad20()*0.644128);
}

double NNfunction_ss_uRuR::synapse0x1813f00() {
   return (neuron0x180b060()*-0.370371);
}

double NNfunction_ss_uRuR::synapse0x1813f40() {
   return (neuron0x180b3a0()*-0.148998);
}

double NNfunction_ss_uRuR::synapse0x1813f80() {
   return (neuron0x180b6e0()*-0.03319);
}

double NNfunction_ss_uRuR::synapse0x1813a10() {
   return (neuron0x180ba20()*0.476652);
}

double NNfunction_ss_uRuR::synapse0x1813a50() {
   return (neuron0x180bf80()*-0.0668278);
}

double NNfunction_ss_uRuR::synapse0x18107e0() {
   return (neuron0x180c1a0()*0.409352);
}

double NNfunction_ss_uRuR::synapse0x1810820() {
   return (neuron0x180c4e0()*-0.513271);
}

double NNfunction_ss_uRuR::synapse0x1810860() {
   return (neuron0x180c820()*0.620835);
}

double NNfunction_ss_uRuR::synapse0x18108a0() {
   return (neuron0x180cb60()*-0.871073);
}

double NNfunction_ss_uRuR::synapse0x18108e0() {
   return (neuron0x180cea0()*0.361865);
}

double NNfunction_ss_uRuR::synapse0x1810920() {
   return (neuron0x180d1e0()*-0.18546);
}

double NNfunction_ss_uRuR::synapse0x1810ca0() {
   return (neuron0x1808620()*0.0040836);
}

double NNfunction_ss_uRuR::synapse0x1810ce0() {
   return (neuron0x1808960()*0.0274876);
}

double NNfunction_ss_uRuR::synapse0x1810d20() {
   return (neuron0x1808ca0()*0.0251488);
}

double NNfunction_ss_uRuR::synapse0x1810d60() {
   return (neuron0x1808fe0()*-5.69267);
}

double NNfunction_ss_uRuR::synapse0x1810da0() {
   return (neuron0x1809320()*0.000781484);
}

double NNfunction_ss_uRuR::synapse0x1810de0() {
   return (neuron0x1809660()*0.0591461);
}

double NNfunction_ss_uRuR::synapse0x1810e20() {
   return (neuron0x18099a0()*0.0274992);
}

double NNfunction_ss_uRuR::synapse0x1810e60() {
   return (neuron0x1809ce0()*0.00277703);
}

double NNfunction_ss_uRuR::synapse0x1810ea0() {
   return (neuron0x180a020()*0.0146599);
}

double NNfunction_ss_uRuR::synapse0x1810ee0() {
   return (neuron0x180a360()*-0.0239777);
}

double NNfunction_ss_uRuR::synapse0x1810f20() {
   return (neuron0x180a6a0()*-0.0283259);
}

double NNfunction_ss_uRuR::synapse0x1810f60() {
   return (neuron0x180a9e0()*-0.0248411);
}

double NNfunction_ss_uRuR::synapse0x1810fa0() {
   return (neuron0x180ad20()*0.0137448);
}

double NNfunction_ss_uRuR::synapse0x18150e0() {
   return (neuron0x180b060()*0.0212989);
}

double NNfunction_ss_uRuR::synapse0x1815120() {
   return (neuron0x180b3a0()*1.3561);
}

double NNfunction_ss_uRuR::synapse0x1815160() {
   return (neuron0x180b6e0()*0.0047359);
}

double NNfunction_ss_uRuR::synapse0x1810af0() {
   return (neuron0x180ba20()*0.0152834);
}

double NNfunction_ss_uRuR::synapse0x1810b30() {
   return (neuron0x180bf80()*-0.00745058);
}

double NNfunction_ss_uRuR::synapse0x18152b0() {
   return (neuron0x180c1a0()*0.0104716);
}

double NNfunction_ss_uRuR::synapse0x18152f0() {
   return (neuron0x180c4e0()*-0.0124775);
}

double NNfunction_ss_uRuR::synapse0x1815330() {
   return (neuron0x180c820()*-0.0107485);
}

double NNfunction_ss_uRuR::synapse0x1815370() {
   return (neuron0x180cb60()*0.00227409);
}

double NNfunction_ss_uRuR::synapse0x18153b0() {
   return (neuron0x180cea0()*0.0280247);
}

double NNfunction_ss_uRuR::synapse0x18153f0() {
   return (neuron0x180d1e0()*0.000372007);
}

double NNfunction_ss_uRuR::synapse0x1815770() {
   return (neuron0x1808620()*-0.0040129);
}

double NNfunction_ss_uRuR::synapse0x18157b0() {
   return (neuron0x1808960()*0.000800645);
}

double NNfunction_ss_uRuR::synapse0x18157f0() {
   return (neuron0x1808ca0()*0.0011571);
}

double NNfunction_ss_uRuR::synapse0x1815830() {
   return (neuron0x1808fe0()*2.97866);
}

double NNfunction_ss_uRuR::synapse0x1815870() {
   return (neuron0x1809320()*-0.00286568);
}

double NNfunction_ss_uRuR::synapse0x18158b0() {
   return (neuron0x1809660()*0.0266253);
}

double NNfunction_ss_uRuR::synapse0x18158f0() {
   return (neuron0x18099a0()*0.0217953);
}

double NNfunction_ss_uRuR::synapse0x1815930() {
   return (neuron0x1809ce0()*0.00370526);
}

double NNfunction_ss_uRuR::synapse0x1815970() {
   return (neuron0x180a020()*0.0111455);
}

double NNfunction_ss_uRuR::synapse0x18159b0() {
   return (neuron0x180a360()*-0.00369853);
}

double NNfunction_ss_uRuR::synapse0x18159f0() {
   return (neuron0x180a6a0()*0.00816103);
}

double NNfunction_ss_uRuR::synapse0x1815a30() {
   return (neuron0x180a9e0()*-0.0208568);
}

double NNfunction_ss_uRuR::synapse0x1815a70() {
   return (neuron0x180ad20()*0.00935574);
}

double NNfunction_ss_uRuR::synapse0x1815ab0() {
   return (neuron0x180b060()*0.00501182);
}

double NNfunction_ss_uRuR::synapse0x1815af0() {
   return (neuron0x180b3a0()*0.852308);
}

double NNfunction_ss_uRuR::synapse0x1815b30() {
   return (neuron0x180b6e0()*-0.00910169);
}

double NNfunction_ss_uRuR::synapse0x18155c0() {
   return (neuron0x180ba20()*0.00391428);
}

double NNfunction_ss_uRuR::synapse0x1815600() {
   return (neuron0x180bf80()*-0.0170711);
}

double NNfunction_ss_uRuR::synapse0x1815c80() {
   return (neuron0x180c1a0()*-0.0138135);
}

double NNfunction_ss_uRuR::synapse0x1815cc0() {
   return (neuron0x180c4e0()*-0.012682);
}

double NNfunction_ss_uRuR::synapse0x1815d00() {
   return (neuron0x180c820()*-0.0089875);
}

double NNfunction_ss_uRuR::synapse0x1815d40() {
   return (neuron0x180cb60()*-0.00242559);
}

double NNfunction_ss_uRuR::synapse0x1815d80() {
   return (neuron0x180cea0()*0.0122266);
}

double NNfunction_ss_uRuR::synapse0x1815dc0() {
   return (neuron0x180d1e0()*-0.0142125);
}

double NNfunction_ss_uRuR::synapse0x1816140() {
   return (neuron0x1808620()*-0.0732814);
}

double NNfunction_ss_uRuR::synapse0x1816180() {
   return (neuron0x1808960()*-0.461974);
}

double NNfunction_ss_uRuR::synapse0x18161c0() {
   return (neuron0x1808ca0()*-0.0754539);
}

double NNfunction_ss_uRuR::synapse0x1816200() {
   return (neuron0x1808fe0()*0.337444);
}

double NNfunction_ss_uRuR::synapse0x1816240() {
   return (neuron0x1809320()*-0.171986);
}

double NNfunction_ss_uRuR::synapse0x1816280() {
   return (neuron0x1809660()*-0.205087);
}

double NNfunction_ss_uRuR::synapse0x18162c0() {
   return (neuron0x18099a0()*-0.0461074);
}

double NNfunction_ss_uRuR::synapse0x1816300() {
   return (neuron0x1809ce0()*0.186956);
}

double NNfunction_ss_uRuR::synapse0x1816340() {
   return (neuron0x180a020()*0.356735);
}

double NNfunction_ss_uRuR::synapse0x1816380() {
   return (neuron0x180a360()*0.422885);
}

double NNfunction_ss_uRuR::synapse0x18163c0() {
   return (neuron0x180a6a0()*0.454319);
}

double NNfunction_ss_uRuR::synapse0x1816400() {
   return (neuron0x180a9e0()*0.349132);
}

double NNfunction_ss_uRuR::synapse0x1816440() {
   return (neuron0x180ad20()*0.249205);
}

double NNfunction_ss_uRuR::synapse0x1816480() {
   return (neuron0x180b060()*0.121143);
}

double NNfunction_ss_uRuR::synapse0x18164c0() {
   return (neuron0x180b3a0()*-0.0258026);
}

double NNfunction_ss_uRuR::synapse0x1816500() {
   return (neuron0x180b6e0()*-0.143095);
}

double NNfunction_ss_uRuR::synapse0x1815f90() {
   return (neuron0x180ba20()*0.062931);
}

double NNfunction_ss_uRuR::synapse0x1815fd0() {
   return (neuron0x180bf80()*0.134196);
}

double NNfunction_ss_uRuR::synapse0x1816650() {
   return (neuron0x180c1a0()*0.2074);
}

double NNfunction_ss_uRuR::synapse0x1816690() {
   return (neuron0x180c4e0()*0.239699);
}

double NNfunction_ss_uRuR::synapse0x18166d0() {
   return (neuron0x180c820()*0.00446173);
}

double NNfunction_ss_uRuR::synapse0x1816710() {
   return (neuron0x180cb60()*0.159635);
}

double NNfunction_ss_uRuR::synapse0x1816750() {
   return (neuron0x180cea0()*-0.103205);
}

double NNfunction_ss_uRuR::synapse0x1816790() {
   return (neuron0x180d1e0()*-0.0830665);
}

double NNfunction_ss_uRuR::synapse0x1816b10() {
   return (neuron0x1808620()*-0.0493733);
}

double NNfunction_ss_uRuR::synapse0x1816b50() {
   return (neuron0x1808960()*-0.078291);
}

double NNfunction_ss_uRuR::synapse0x1816b90() {
   return (neuron0x1808ca0()*0.108546);
}

double NNfunction_ss_uRuR::synapse0x1816bd0() {
   return (neuron0x1808fe0()*0.825423);
}

double NNfunction_ss_uRuR::synapse0x1816c10() {
   return (neuron0x1809320()*0.190831);
}

double NNfunction_ss_uRuR::synapse0x1816c50() {
   return (neuron0x1809660()*0.0401665);
}

double NNfunction_ss_uRuR::synapse0x1816c90() {
   return (neuron0x18099a0()*-0.0789844);
}

double NNfunction_ss_uRuR::synapse0x1816cd0() {
   return (neuron0x1809ce0()*0.167419);
}

double NNfunction_ss_uRuR::synapse0x1816d10() {
   return (neuron0x180a020()*0.173737);
}

double NNfunction_ss_uRuR::synapse0x1816d50() {
   return (neuron0x180a360()*-0.295459);
}

double NNfunction_ss_uRuR::synapse0x1816d90() {
   return (neuron0x180a6a0()*0.0690425);
}

double NNfunction_ss_uRuR::synapse0x1816dd0() {
   return (neuron0x180a9e0()*0.00351025);
}

double NNfunction_ss_uRuR::synapse0x1816e10() {
   return (neuron0x180ad20()*-0.555233);
}

double NNfunction_ss_uRuR::synapse0x1816e50() {
   return (neuron0x180b060()*0.0444648);
}

double NNfunction_ss_uRuR::synapse0x1816e90() {
   return (neuron0x180b3a0()*0.613401);
}

double NNfunction_ss_uRuR::synapse0x1816ed0() {
   return (neuron0x180b6e0()*-0.00392531);
}

double NNfunction_ss_uRuR::synapse0x1816960() {
   return (neuron0x180ba20()*0.0117118);
}

double NNfunction_ss_uRuR::synapse0x18169a0() {
   return (neuron0x180bf80()*0.0237915);
}

double NNfunction_ss_uRuR::synapse0x1817020() {
   return (neuron0x180c1a0()*0.371914);
}

double NNfunction_ss_uRuR::synapse0x1817060() {
   return (neuron0x180c4e0()*0.284881);
}

double NNfunction_ss_uRuR::synapse0x18170a0() {
   return (neuron0x180c820()*-0.110914);
}

double NNfunction_ss_uRuR::synapse0x18170e0() {
   return (neuron0x180cb60()*-0.0528734);
}

double NNfunction_ss_uRuR::synapse0x1817120() {
   return (neuron0x180cea0()*0.103414);
}

double NNfunction_ss_uRuR::synapse0x1817160() {
   return (neuron0x180d1e0()*0.0190191);
}

double NNfunction_ss_uRuR::synapse0x18174e0() {
   return (neuron0x1808620()*0.524333);
}

double NNfunction_ss_uRuR::synapse0x1808840() {
   return (neuron0x1808960()*-0.882106);
}

double NNfunction_ss_uRuR::synapse0x1808880() {
   return (neuron0x1808ca0()*1.34279);
}

double NNfunction_ss_uRuR::synapse0x1808b80() {
   return (neuron0x1808fe0()*-0.310664);
}

double NNfunction_ss_uRuR::synapse0x1808bc0() {
   return (neuron0x1809320()*-0.257871);
}

double NNfunction_ss_uRuR::synapse0x1808ec0() {
   return (neuron0x1809660()*0.00955974);
}

double NNfunction_ss_uRuR::synapse0x1808f00() {
   return (neuron0x18099a0()*1.14215);
}

double NNfunction_ss_uRuR::synapse0x1809200() {
   return (neuron0x1809ce0()*0.364724);
}

double NNfunction_ss_uRuR::synapse0x1809240() {
   return (neuron0x180a020()*-1.13989);
}

double NNfunction_ss_uRuR::synapse0x1809540() {
   return (neuron0x180a360()*-0.485184);
}

double NNfunction_ss_uRuR::synapse0x1809580() {
   return (neuron0x180a6a0()*-0.0590923);
}

double NNfunction_ss_uRuR::synapse0x1809880() {
   return (neuron0x180a9e0()*0.234234);
}

double NNfunction_ss_uRuR::synapse0x18098c0() {
   return (neuron0x180ad20()*-0.364124);
}

double NNfunction_ss_uRuR::synapse0x1809bc0() {
   return (neuron0x180b060()*-1.30765);
}

double NNfunction_ss_uRuR::synapse0x1809c00() {
   return (neuron0x180b3a0()*0.0448083);
}

double NNfunction_ss_uRuR::synapse0x1809f00() {
   return (neuron0x180b6e0()*-1.51125);
}

double NNfunction_ss_uRuR::synapse0x1809f40() {
   return (neuron0x180ba20()*-0.295183);
}

double NNfunction_ss_uRuR::synapse0x180a240() {
   return (neuron0x180bf80()*0.439791);
}

double NNfunction_ss_uRuR::synapse0x180a280() {
   return (neuron0x180c1a0()*-0.731251);
}

double NNfunction_ss_uRuR::synapse0x180a580() {
   return (neuron0x180c4e0()*0.238601);
}

double NNfunction_ss_uRuR::synapse0x180a5c0() {
   return (neuron0x180c820()*-0.416122);
}

double NNfunction_ss_uRuR::synapse0x180a8c0() {
   return (neuron0x180cb60()*0.0106856);
}

double NNfunction_ss_uRuR::synapse0x180a900() {
   return (neuron0x180cea0()*0.0466201);
}

double NNfunction_ss_uRuR::synapse0x180ac00() {
   return (neuron0x180d1e0()*-0.134614);
}

double NNfunction_ss_uRuR::synapse0x180ac40() {
   return (neuron0x1808620()*-0.0459779);
}

double NNfunction_ss_uRuR::synapse0x180b900() {
   return (neuron0x1808960()*0.140449);
}

double NNfunction_ss_uRuR::synapse0x180b940() {
   return (neuron0x1808ca0()*0.00558812);
}

double NNfunction_ss_uRuR::synapse0x1817330() {
   return (neuron0x1808fe0()*0.460375);
}

double NNfunction_ss_uRuR::synapse0x1817370() {
   return (neuron0x1809320()*0.0942315);
}

double NNfunction_ss_uRuR::synapse0x180bc40() {
   return (neuron0x1809660()*0.301229);
}

double NNfunction_ss_uRuR::synapse0x180bc80() {
   return (neuron0x18099a0()*-0.450917);
}

double NNfunction_ss_uRuR::synapse0x15b9c10() {
   return (neuron0x1809ce0()*-0.220898);
}

double NNfunction_ss_uRuR::synapse0x15b9c50() {
   return (neuron0x180a020()*-0.142373);
}

double NNfunction_ss_uRuR::synapse0x180c3c0() {
   return (neuron0x180a360()*-0.0722856);
}

double NNfunction_ss_uRuR::synapse0x180c400() {
   return (neuron0x180a6a0()*0.0197293);
}

double NNfunction_ss_uRuR::synapse0x180c700() {
   return (neuron0x180a9e0()*-0.13807);
}

double NNfunction_ss_uRuR::synapse0x180c740() {
   return (neuron0x180ad20()*-0.0486689);
}

double NNfunction_ss_uRuR::synapse0x180ca40() {
   return (neuron0x180b060()*-0.155408);
}

double NNfunction_ss_uRuR::synapse0x180ca80() {
   return (neuron0x180b3a0()*-1.28343);
}

double NNfunction_ss_uRuR::synapse0x180cd80() {
   return (neuron0x180b6e0()*0.99025);
}

double NNfunction_ss_uRuR::synapse0x180cdc0() {
   return (neuron0x180ba20()*-0.146246);
}

double NNfunction_ss_uRuR::synapse0x180d0c0() {
   return (neuron0x180bf80()*0.0477884);
}

double NNfunction_ss_uRuR::synapse0x180d100() {
   return (neuron0x180c1a0()*-0.1587);
}

double NNfunction_ss_uRuR::synapse0x180d400() {
   return (neuron0x180c4e0()*0.107681);
}

double NNfunction_ss_uRuR::synapse0x180d440() {
   return (neuron0x180c820()*0.0510947);
}

double NNfunction_ss_uRuR::synapse0x180af40() {
   return (neuron0x180cb60()*-0.104879);
}

double NNfunction_ss_uRuR::synapse0x180af80() {
   return (neuron0x180cea0()*0.113745);
}

double NNfunction_ss_uRuR::synapse0x1819250() {
   return (neuron0x180d1e0()*0.0527193);
}

double NNfunction_ss_uRuR::synapse0x18195d0() {
   return (neuron0x1808620()*0.278057);
}

double NNfunction_ss_uRuR::synapse0x1819610() {
   return (neuron0x1808960()*1.40462);
}

double NNfunction_ss_uRuR::synapse0x1819650() {
   return (neuron0x1808ca0()*-0.369797);
}

double NNfunction_ss_uRuR::synapse0x1819690() {
   return (neuron0x1808fe0()*-0.176188);
}

double NNfunction_ss_uRuR::synapse0x18196d0() {
   return (neuron0x1809320()*0.32571);
}

double NNfunction_ss_uRuR::synapse0x1819710() {
   return (neuron0x1809660()*0.495666);
}

double NNfunction_ss_uRuR::synapse0x1819750() {
   return (neuron0x18099a0()*0.365403);
}

double NNfunction_ss_uRuR::synapse0x1819790() {
   return (neuron0x1809ce0()*0.666847);
}

double NNfunction_ss_uRuR::synapse0x18197d0() {
   return (neuron0x180a020()*-0.200962);
}

double NNfunction_ss_uRuR::synapse0x1819810() {
   return (neuron0x180a360()*-0.118739);
}

double NNfunction_ss_uRuR::synapse0x1819850() {
   return (neuron0x180a6a0()*0.426941);
}

double NNfunction_ss_uRuR::synapse0x1819890() {
   return (neuron0x180a9e0()*-0.54204);
}

double NNfunction_ss_uRuR::synapse0x18198d0() {
   return (neuron0x180ad20()*0.294768);
}

double NNfunction_ss_uRuR::synapse0x1819910() {
   return (neuron0x180b060()*0.29086);
}

double NNfunction_ss_uRuR::synapse0x1819950() {
   return (neuron0x180b3a0()*0.264038);
}

double NNfunction_ss_uRuR::synapse0x1819990() {
   return (neuron0x180b6e0()*1.28518);
}

double NNfunction_ss_uRuR::synapse0x1819420() {
   return (neuron0x180ba20()*1.18549);
}

double NNfunction_ss_uRuR::synapse0x1819460() {
   return (neuron0x180bf80()*0.33015);
}

double NNfunction_ss_uRuR::synapse0x1819ae0() {
   return (neuron0x180c1a0()*0.15942);
}

double NNfunction_ss_uRuR::synapse0x1819b20() {
   return (neuron0x180c4e0()*-0.74022);
}

double NNfunction_ss_uRuR::synapse0x1819b60() {
   return (neuron0x180c820()*0.0150481);
}

double NNfunction_ss_uRuR::synapse0x1819ba0() {
   return (neuron0x180cb60()*-0.951274);
}

double NNfunction_ss_uRuR::synapse0x1819be0() {
   return (neuron0x180cea0()*0.0708176);
}

double NNfunction_ss_uRuR::synapse0x1819c20() {
   return (neuron0x180d1e0()*-0.583923);
}

double NNfunction_ss_uRuR::synapse0x1819fa0() {
   return (neuron0x1808620()*0.160944);
}

double NNfunction_ss_uRuR::synapse0x1819fe0() {
   return (neuron0x1808960()*-0.216077);
}

double NNfunction_ss_uRuR::synapse0x181a020() {
   return (neuron0x1808ca0()*0.0222978);
}

double NNfunction_ss_uRuR::synapse0x181a060() {
   return (neuron0x1808fe0()*0.643035);
}

double NNfunction_ss_uRuR::synapse0x181a0a0() {
   return (neuron0x1809320()*0.0437352);
}

double NNfunction_ss_uRuR::synapse0x181a0e0() {
   return (neuron0x1809660()*-0.057969);
}

double NNfunction_ss_uRuR::synapse0x181a120() {
   return (neuron0x18099a0()*0.0332694);
}

double NNfunction_ss_uRuR::synapse0x181a160() {
   return (neuron0x1809ce0()*-0.0511477);
}

double NNfunction_ss_uRuR::synapse0x181a1a0() {
   return (neuron0x180a020()*0.176268);
}

double NNfunction_ss_uRuR::synapse0x181a1e0() {
   return (neuron0x180a360()*0.0419325);
}

double NNfunction_ss_uRuR::synapse0x181a220() {
   return (neuron0x180a6a0()*-0.00980647);
}

double NNfunction_ss_uRuR::synapse0x181a260() {
   return (neuron0x180a9e0()*0.212523);
}

double NNfunction_ss_uRuR::synapse0x181a2a0() {
   return (neuron0x180ad20()*-0.0669806);
}

double NNfunction_ss_uRuR::synapse0x181a2e0() {
   return (neuron0x180b060()*0.143151);
}

double NNfunction_ss_uRuR::synapse0x181a320() {
   return (neuron0x180b3a0()*1.01641);
}

double NNfunction_ss_uRuR::synapse0x181a360() {
   return (neuron0x180b6e0()*-0.0867102);
}

double NNfunction_ss_uRuR::synapse0x1819df0() {
   return (neuron0x180ba20()*-0.00373139);
}

double NNfunction_ss_uRuR::synapse0x1819e30() {
   return (neuron0x180bf80()*-0.0293816);
}

double NNfunction_ss_uRuR::synapse0x181a4b0() {
   return (neuron0x180c1a0()*-0.337106);
}

double NNfunction_ss_uRuR::synapse0x181a4f0() {
   return (neuron0x180c4e0()*-0.608596);
}

double NNfunction_ss_uRuR::synapse0x181a530() {
   return (neuron0x180c820()*0.0339568);
}

double NNfunction_ss_uRuR::synapse0x181a570() {
   return (neuron0x180cb60()*0.0327614);
}

double NNfunction_ss_uRuR::synapse0x181a5b0() {
   return (neuron0x180cea0()*-0.0792397);
}

double NNfunction_ss_uRuR::synapse0x181a5f0() {
   return (neuron0x180d1e0()*0.0418398);
}

double NNfunction_ss_uRuR::synapse0x181a970() {
   return (neuron0x1808620()*0.0314675);
}

double NNfunction_ss_uRuR::synapse0x181a9b0() {
   return (neuron0x1808960()*0.573416);
}

double NNfunction_ss_uRuR::synapse0x181a9f0() {
   return (neuron0x1808ca0()*0.0335157);
}

double NNfunction_ss_uRuR::synapse0x181aa30() {
   return (neuron0x1808fe0()*0.691395);
}

double NNfunction_ss_uRuR::synapse0x181aa70() {
   return (neuron0x1809320()*0.0885114);
}

double NNfunction_ss_uRuR::synapse0x181aab0() {
   return (neuron0x1809660()*0.00511606);
}

double NNfunction_ss_uRuR::synapse0x181aaf0() {
   return (neuron0x18099a0()*-0.0686144);
}

double NNfunction_ss_uRuR::synapse0x181ab30() {
   return (neuron0x1809ce0()*-0.0404632);
}

double NNfunction_ss_uRuR::synapse0x181ab70() {
   return (neuron0x180a020()*-0.0693654);
}

double NNfunction_ss_uRuR::synapse0x181abb0() {
   return (neuron0x180a360()*-0.11233);
}

double NNfunction_ss_uRuR::synapse0x181abf0() {
   return (neuron0x180a6a0()*0.107773);
}

double NNfunction_ss_uRuR::synapse0x181ac30() {
   return (neuron0x180a9e0()*0.216659);
}

double NNfunction_ss_uRuR::synapse0x181ac70() {
   return (neuron0x180ad20()*0.380876);
}

double NNfunction_ss_uRuR::synapse0x181acb0() {
   return (neuron0x180b060()*-0.0732959);
}

double NNfunction_ss_uRuR::synapse0x181acf0() {
   return (neuron0x180b3a0()*-0.296758);
}

double NNfunction_ss_uRuR::synapse0x181ad30() {
   return (neuron0x180b6e0()*0.0593362);
}

double NNfunction_ss_uRuR::synapse0x181a7c0() {
   return (neuron0x180ba20()*-0.183471);
}

double NNfunction_ss_uRuR::synapse0x181a800() {
   return (neuron0x180bf80()*-0.0703398);
}

double NNfunction_ss_uRuR::synapse0x181ae80() {
   return (neuron0x180c1a0()*-0.58294);
}

double NNfunction_ss_uRuR::synapse0x181aec0() {
   return (neuron0x180c4e0()*0.389863);
}

double NNfunction_ss_uRuR::synapse0x181af00() {
   return (neuron0x180c820()*-0.0949782);
}

double NNfunction_ss_uRuR::synapse0x181af40() {
   return (neuron0x180cb60()*-0.130008);
}

double NNfunction_ss_uRuR::synapse0x181af80() {
   return (neuron0x180cea0()*0.016298);
}

double NNfunction_ss_uRuR::synapse0x181afc0() {
   return (neuron0x180d1e0()*-0.0179962);
}

double NNfunction_ss_uRuR::synapse0x181b340() {
   return (neuron0x1808620()*-0.0109515);
}

double NNfunction_ss_uRuR::synapse0x181b380() {
   return (neuron0x1808960()*0.000989298);
}

double NNfunction_ss_uRuR::synapse0x181b3c0() {
   return (neuron0x1808ca0()*0.0113088);
}

double NNfunction_ss_uRuR::synapse0x181b400() {
   return (neuron0x1808fe0()*-0.0851713);
}

double NNfunction_ss_uRuR::synapse0x181b440() {
   return (neuron0x1809320()*-0.0558396);
}

double NNfunction_ss_uRuR::synapse0x181b480() {
   return (neuron0x1809660()*-0.0139748);
}

double NNfunction_ss_uRuR::synapse0x181b4c0() {
   return (neuron0x18099a0()*-0.168443);
}

double NNfunction_ss_uRuR::synapse0x181b500() {
   return (neuron0x1809ce0()*-0.0270063);
}

double NNfunction_ss_uRuR::synapse0x181b540() {
   return (neuron0x180a020()*0.0140054);
}

double NNfunction_ss_uRuR::synapse0x181b580() {
   return (neuron0x180a360()*0.0113323);
}

double NNfunction_ss_uRuR::synapse0x181b5c0() {
   return (neuron0x180a6a0()*0.0238496);
}

double NNfunction_ss_uRuR::synapse0x181b600() {
   return (neuron0x180a9e0()*-0.000978479);
}

double NNfunction_ss_uRuR::synapse0x181b640() {
   return (neuron0x180ad20()*-0.0278856);
}

double NNfunction_ss_uRuR::synapse0x181b680() {
   return (neuron0x180b060()*-0.00787518);
}

double NNfunction_ss_uRuR::synapse0x181b6c0() {
   return (neuron0x180b3a0()*-0.638011);
}

double NNfunction_ss_uRuR::synapse0x181b700() {
   return (neuron0x180b6e0()*-0.0675272);
}

double NNfunction_ss_uRuR::synapse0x181b190() {
   return (neuron0x180ba20()*0.0177654);
}

double NNfunction_ss_uRuR::synapse0x181b1d0() {
   return (neuron0x180bf80()*-0.00389866);
}

double NNfunction_ss_uRuR::synapse0x181b850() {
   return (neuron0x180c1a0()*-0.00875833);
}

double NNfunction_ss_uRuR::synapse0x181b890() {
   return (neuron0x180c4e0()*0.0172409);
}

double NNfunction_ss_uRuR::synapse0x181b8d0() {
   return (neuron0x180c820()*-0.0188269);
}

double NNfunction_ss_uRuR::synapse0x181b910() {
   return (neuron0x180cb60()*0.0118457);
}

double NNfunction_ss_uRuR::synapse0x181b950() {
   return (neuron0x180cea0()*0.0077698);
}

double NNfunction_ss_uRuR::synapse0x181b990() {
   return (neuron0x180d1e0()*0.0140804);
}

double NNfunction_ss_uRuR::synapse0x181bd10() {
   return (neuron0x1808620()*0.00795423);
}

double NNfunction_ss_uRuR::synapse0x181bd50() {
   return (neuron0x1808960()*-0.0127512);
}

double NNfunction_ss_uRuR::synapse0x181bd90() {
   return (neuron0x1808ca0()*-0.0339601);
}

double NNfunction_ss_uRuR::synapse0x181bdd0() {
   return (neuron0x1808fe0()*0.0968933);
}

double NNfunction_ss_uRuR::synapse0x181be10() {
   return (neuron0x1809320()*0.0120248);
}

double NNfunction_ss_uRuR::synapse0x181be50() {
   return (neuron0x1809660()*0.00351978);
}

double NNfunction_ss_uRuR::synapse0x181be90() {
   return (neuron0x18099a0()*-0.0121282);
}

double NNfunction_ss_uRuR::synapse0x181bed0() {
   return (neuron0x1809ce0()*-0.054696);
}

double NNfunction_ss_uRuR::synapse0x181bf10() {
   return (neuron0x180a020()*-0.00700563);
}

double NNfunction_ss_uRuR::synapse0x18140d0() {
   return (neuron0x180a360()*0.0274324);
}

double NNfunction_ss_uRuR::synapse0x1814110() {
   return (neuron0x180a6a0()*0.0245466);
}

double NNfunction_ss_uRuR::synapse0x1814150() {
   return (neuron0x180a9e0()*0.012411);
}

double NNfunction_ss_uRuR::synapse0x1814190() {
   return (neuron0x180ad20()*0.025583);
}

double NNfunction_ss_uRuR::synapse0x18141d0() {
   return (neuron0x180b060()*0.0377917);
}

double NNfunction_ss_uRuR::synapse0x1814210() {
   return (neuron0x180b3a0()*2.54548);
}

double NNfunction_ss_uRuR::synapse0x1814250() {
   return (neuron0x180b6e0()*0.0735932);
}

double NNfunction_ss_uRuR::synapse0x181bb60() {
   return (neuron0x180ba20()*0.022118);
}

double NNfunction_ss_uRuR::synapse0x181bba0() {
   return (neuron0x180bf80()*-0.027335);
}

double NNfunction_ss_uRuR::synapse0x18143a0() {
   return (neuron0x180c1a0()*0.00700551);
}

double NNfunction_ss_uRuR::synapse0x18143e0() {
   return (neuron0x180c4e0()*-0.0321666);
}

double NNfunction_ss_uRuR::synapse0x1814420() {
   return (neuron0x180c820()*0.0217334);
}

double NNfunction_ss_uRuR::synapse0x1814460() {
   return (neuron0x180cb60()*0.0154727);
}

double NNfunction_ss_uRuR::synapse0x18144a0() {
   return (neuron0x180cea0()*-0.020665);
}

double NNfunction_ss_uRuR::synapse0x18144e0() {
   return (neuron0x180d1e0()*-0.013185);
}

double NNfunction_ss_uRuR::synapse0x1814860() {
   return (neuron0x1808620()*-0.0504296);
}

double NNfunction_ss_uRuR::synapse0x18148a0() {
   return (neuron0x1808960()*0.615519);
}

double NNfunction_ss_uRuR::synapse0x18148e0() {
   return (neuron0x1808ca0()*0.0510186);
}

double NNfunction_ss_uRuR::synapse0x1814920() {
   return (neuron0x1808fe0()*1.98203);
}

double NNfunction_ss_uRuR::synapse0x1814960() {
   return (neuron0x1809320()*-0.111962);
}

double NNfunction_ss_uRuR::synapse0x18149a0() {
   return (neuron0x1809660()*0.126242);
}

double NNfunction_ss_uRuR::synapse0x18149e0() {
   return (neuron0x18099a0()*0.208742);
}

double NNfunction_ss_uRuR::synapse0x1814a20() {
   return (neuron0x1809ce0()*0.0717679);
}

double NNfunction_ss_uRuR::synapse0x1814a60() {
   return (neuron0x180a020()*-0.00441227);
}

double NNfunction_ss_uRuR::synapse0x1814aa0() {
   return (neuron0x180a360()*-0.258229);
}

double NNfunction_ss_uRuR::synapse0x1814ae0() {
   return (neuron0x180a6a0()*-0.064977);
}

double NNfunction_ss_uRuR::synapse0x1814b20() {
   return (neuron0x180a9e0()*0.0648874);
}

double NNfunction_ss_uRuR::synapse0x1814b60() {
   return (neuron0x180ad20()*0.611988);
}

double NNfunction_ss_uRuR::synapse0x1814ba0() {
   return (neuron0x180b060()*0.133433);
}

double NNfunction_ss_uRuR::synapse0x1814be0() {
   return (neuron0x180b3a0()*-0.583642);
}

double NNfunction_ss_uRuR::synapse0x1814c20() {
   return (neuron0x180b6e0()*0.392284);
}

double NNfunction_ss_uRuR::synapse0x18146b0() {
   return (neuron0x180ba20()*0.0191893);
}

double NNfunction_ss_uRuR::synapse0x18146f0() {
   return (neuron0x180bf80()*-0.272666);
}

double NNfunction_ss_uRuR::synapse0x1814d70() {
   return (neuron0x180c1a0()*0.787582);
}

double NNfunction_ss_uRuR::synapse0x1814db0() {
   return (neuron0x180c4e0()*0.187907);
}

double NNfunction_ss_uRuR::synapse0x1814df0() {
   return (neuron0x180c820()*0.0359759);
}

double NNfunction_ss_uRuR::synapse0x1814e30() {
   return (neuron0x180cb60()*-0.195678);
}

double NNfunction_ss_uRuR::synapse0x1814e70() {
   return (neuron0x180cea0()*0.167204);
}

double NNfunction_ss_uRuR::synapse0x1814eb0() {
   return (neuron0x180d1e0()*-0.0499366);
}

double NNfunction_ss_uRuR::synapse0x1815080() {
   return (neuron0x1808620()*0.00601987);
}

double NNfunction_ss_uRuR::synapse0x181e110() {
   return (neuron0x1808960()*0.0862687);
}

double NNfunction_ss_uRuR::synapse0x181e150() {
   return (neuron0x1808ca0()*0.0896606);
}

double NNfunction_ss_uRuR::synapse0x181e190() {
   return (neuron0x1808fe0()*-0.847636);
}

double NNfunction_ss_uRuR::synapse0x181e1d0() {
   return (neuron0x1809320()*0.0214028);
}

double NNfunction_ss_uRuR::synapse0x181e210() {
   return (neuron0x1809660()*-0.102389);
}

double NNfunction_ss_uRuR::synapse0x181e250() {
   return (neuron0x18099a0()*-0.0466007);
}

double NNfunction_ss_uRuR::synapse0x181e290() {
   return (neuron0x1809ce0()*-0.311289);
}

double NNfunction_ss_uRuR::synapse0x181e2d0() {
   return (neuron0x180a020()*0.024427);
}

double NNfunction_ss_uRuR::synapse0x181e310() {
   return (neuron0x180a360()*-0.230219);
}

double NNfunction_ss_uRuR::synapse0x181e350() {
   return (neuron0x180a6a0()*-0.10346);
}

double NNfunction_ss_uRuR::synapse0x181e390() {
   return (neuron0x180a9e0()*1.28036);
}

double NNfunction_ss_uRuR::synapse0x181e3d0() {
   return (neuron0x180ad20()*-0.365279);
}

double NNfunction_ss_uRuR::synapse0x181e410() {
   return (neuron0x180b060()*-0.165035);
}

double NNfunction_ss_uRuR::synapse0x181e450() {
   return (neuron0x180b3a0()*-1.06423);
}

double NNfunction_ss_uRuR::synapse0x181e490() {
   return (neuron0x180b6e0()*0.078661);
}

double NNfunction_ss_uRuR::synapse0x181df60() {
   return (neuron0x180ba20()*-0.190467);
}

double NNfunction_ss_uRuR::synapse0x181dfa0() {
   return (neuron0x180bf80()*-0.241431);
}

double NNfunction_ss_uRuR::synapse0x181e5e0() {
   return (neuron0x180c1a0()*-0.0334015);
}

double NNfunction_ss_uRuR::synapse0x181e620() {
   return (neuron0x180c4e0()*-0.0446035);
}

double NNfunction_ss_uRuR::synapse0x181e660() {
   return (neuron0x180c820()*-0.114956);
}

double NNfunction_ss_uRuR::synapse0x181e6a0() {
   return (neuron0x180cb60()*0.216525);
}

double NNfunction_ss_uRuR::synapse0x181e6e0() {
   return (neuron0x180cea0()*-0.0542057);
}

double NNfunction_ss_uRuR::synapse0x181e720() {
   return (neuron0x180d1e0()*0.137344);
}

double NNfunction_ss_uRuR::synapse0x181eaa0() {
   return (neuron0x1808620()*0.178739);
}

double NNfunction_ss_uRuR::synapse0x181eae0() {
   return (neuron0x1808960()*0.348398);
}

double NNfunction_ss_uRuR::synapse0x181eb20() {
   return (neuron0x1808ca0()*-0.333148);
}

double NNfunction_ss_uRuR::synapse0x181eb60() {
   return (neuron0x1808fe0()*0.154691);
}

double NNfunction_ss_uRuR::synapse0x181eba0() {
   return (neuron0x1809320()*0.165158);
}

double NNfunction_ss_uRuR::synapse0x181ebe0() {
   return (neuron0x1809660()*-0.0500124);
}

double NNfunction_ss_uRuR::synapse0x181ec20() {
   return (neuron0x18099a0()*0.0882161);
}

double NNfunction_ss_uRuR::synapse0x181ec60() {
   return (neuron0x1809ce0()*-0.472891);
}

double NNfunction_ss_uRuR::synapse0x181eca0() {
   return (neuron0x180a020()*-0.612398);
}

double NNfunction_ss_uRuR::synapse0x181ece0() {
   return (neuron0x180a360()*-0.15994);
}

double NNfunction_ss_uRuR::synapse0x181ed20() {
   return (neuron0x180a6a0()*0.0699273);
}

double NNfunction_ss_uRuR::synapse0x181ed60() {
   return (neuron0x180a9e0()*-0.615902);
}

double NNfunction_ss_uRuR::synapse0x181eda0() {
   return (neuron0x180ad20()*0.308115);
}

double NNfunction_ss_uRuR::synapse0x181ede0() {
   return (neuron0x180b060()*0.0233724);
}

double NNfunction_ss_uRuR::synapse0x181ee20() {
   return (neuron0x180b3a0()*-1.51699);
}

double NNfunction_ss_uRuR::synapse0x181ee60() {
   return (neuron0x180b6e0()*-0.994909);
}

double NNfunction_ss_uRuR::synapse0x181e8f0() {
   return (neuron0x180ba20()*-0.365841);
}

double NNfunction_ss_uRuR::synapse0x181e930() {
   return (neuron0x180bf80()*-0.0857371);
}

double NNfunction_ss_uRuR::synapse0x181efb0() {
   return (neuron0x180c1a0()*0.651374);
}

double NNfunction_ss_uRuR::synapse0x181eff0() {
   return (neuron0x180c4e0()*0.417301);
}

double NNfunction_ss_uRuR::synapse0x181f030() {
   return (neuron0x180c820()*0.333788);
}

double NNfunction_ss_uRuR::synapse0x181f070() {
   return (neuron0x180cb60()*-0.484879);
}

double NNfunction_ss_uRuR::synapse0x181f0b0() {
   return (neuron0x180cea0()*0.487753);
}

double NNfunction_ss_uRuR::synapse0x181f0f0() {
   return (neuron0x180d1e0()*-0.0670041);
}

double NNfunction_ss_uRuR::synapse0x181f470() {
   return (neuron0x1808620()*-0.102266);
}

double NNfunction_ss_uRuR::synapse0x181f4b0() {
   return (neuron0x1808960()*0.675071);
}

double NNfunction_ss_uRuR::synapse0x181f4f0() {
   return (neuron0x1808ca0()*-0.237876);
}

double NNfunction_ss_uRuR::synapse0x181f530() {
   return (neuron0x1808fe0()*-1.17687);
}

double NNfunction_ss_uRuR::synapse0x181f570() {
   return (neuron0x1809320()*-0.0679369);
}

double NNfunction_ss_uRuR::synapse0x181f5b0() {
   return (neuron0x1809660()*-0.332763);
}

double NNfunction_ss_uRuR::synapse0x181f5f0() {
   return (neuron0x18099a0()*-0.103868);
}

double NNfunction_ss_uRuR::synapse0x181f630() {
   return (neuron0x1809ce0()*0.0496117);
}

double NNfunction_ss_uRuR::synapse0x181f670() {
   return (neuron0x180a020()*0.547634);
}

double NNfunction_ss_uRuR::synapse0x181f6b0() {
   return (neuron0x180a360()*0.248109);
}

double NNfunction_ss_uRuR::synapse0x181f6f0() {
   return (neuron0x180a6a0()*0.500955);
}

double NNfunction_ss_uRuR::synapse0x181f730() {
   return (neuron0x180a9e0()*-0.114627);
}

double NNfunction_ss_uRuR::synapse0x181f770() {
   return (neuron0x180ad20()*-0.101726);
}

double NNfunction_ss_uRuR::synapse0x181f7b0() {
   return (neuron0x180b060()*0.246981);
}

double NNfunction_ss_uRuR::synapse0x181f7f0() {
   return (neuron0x180b3a0()*-0.00760696);
}

double NNfunction_ss_uRuR::synapse0x181f830() {
   return (neuron0x180b6e0()*0.344906);
}

double NNfunction_ss_uRuR::synapse0x181f2c0() {
   return (neuron0x180ba20()*0.284445);
}

double NNfunction_ss_uRuR::synapse0x181f300() {
   return (neuron0x180bf80()*-0.0400165);
}

double NNfunction_ss_uRuR::synapse0x181f980() {
   return (neuron0x180c1a0()*0.126681);
}

double NNfunction_ss_uRuR::synapse0x181f9c0() {
   return (neuron0x180c4e0()*-0.128563);
}

double NNfunction_ss_uRuR::synapse0x181fa00() {
   return (neuron0x180c820()*-0.535643);
}

double NNfunction_ss_uRuR::synapse0x181fa40() {
   return (neuron0x180cb60()*-0.0293531);
}

double NNfunction_ss_uRuR::synapse0x181fa80() {
   return (neuron0x180cea0()*0.256914);
}

double NNfunction_ss_uRuR::synapse0x181fac0() {
   return (neuron0x180d1e0()*-0.0270005);
}

double NNfunction_ss_uRuR::synapse0x181fe40() {
   return (neuron0x1808620()*-0.00417182);
}

double NNfunction_ss_uRuR::synapse0x181fe80() {
   return (neuron0x1808960()*-0.130321);
}

double NNfunction_ss_uRuR::synapse0x181fec0() {
   return (neuron0x1808ca0()*-0.00834673);
}

double NNfunction_ss_uRuR::synapse0x181ff00() {
   return (neuron0x1808fe0()*-0.118711);
}

double NNfunction_ss_uRuR::synapse0x181ff40() {
   return (neuron0x1809320()*-0.0904709);
}

double NNfunction_ss_uRuR::synapse0x181ff80() {
   return (neuron0x1809660()*-0.0232606);
}

double NNfunction_ss_uRuR::synapse0x181ffc0() {
   return (neuron0x18099a0()*-0.118363);
}

double NNfunction_ss_uRuR::synapse0x1820000() {
   return (neuron0x1809ce0()*-0.0849073);
}

double NNfunction_ss_uRuR::synapse0x1820040() {
   return (neuron0x180a020()*-0.0828351);
}

double NNfunction_ss_uRuR::synapse0x1820080() {
   return (neuron0x180a360()*0.25268);
}

double NNfunction_ss_uRuR::synapse0x18200c0() {
   return (neuron0x180a6a0()*0.159331);
}

double NNfunction_ss_uRuR::synapse0x1820100() {
   return (neuron0x180a9e0()*-0.45256);
}

double NNfunction_ss_uRuR::synapse0x1820140() {
   return (neuron0x180ad20()*-0.867005);
}

double NNfunction_ss_uRuR::synapse0x1820180() {
   return (neuron0x180b060()*-0.0349356);
}

double NNfunction_ss_uRuR::synapse0x18201c0() {
   return (neuron0x180b3a0()*-0.295815);
}

double NNfunction_ss_uRuR::synapse0x1820200() {
   return (neuron0x180b6e0()*-0.23649);
}

double NNfunction_ss_uRuR::synapse0x181fc90() {
   return (neuron0x180ba20()*0.0276274);
}

double NNfunction_ss_uRuR::synapse0x181fcd0() {
   return (neuron0x180bf80()*-0.07014);
}

double NNfunction_ss_uRuR::synapse0x1820350() {
   return (neuron0x180c1a0()*-0.562619);
}

double NNfunction_ss_uRuR::synapse0x1820390() {
   return (neuron0x180c4e0()*0.102889);
}

double NNfunction_ss_uRuR::synapse0x18203d0() {
   return (neuron0x180c820()*-0.00121806);
}

double NNfunction_ss_uRuR::synapse0x1820410() {
   return (neuron0x180cb60()*0.119383);
}

double NNfunction_ss_uRuR::synapse0x1820450() {
   return (neuron0x180cea0()*-0.102914);
}

double NNfunction_ss_uRuR::synapse0x1820490() {
   return (neuron0x180d1e0()*0.0175031);
}

double NNfunction_ss_uRuR::synapse0x1820810() {
   return (neuron0x1808620()*-0.0145237);
}

double NNfunction_ss_uRuR::synapse0x1820850() {
   return (neuron0x1808960()*0.0404422);
}

double NNfunction_ss_uRuR::synapse0x1820890() {
   return (neuron0x1808ca0()*0.0834925);
}

double NNfunction_ss_uRuR::synapse0x18208d0() {
   return (neuron0x1808fe0()*-0.595027);
}

double NNfunction_ss_uRuR::synapse0x1820910() {
   return (neuron0x1809320()*0.599959);
}

double NNfunction_ss_uRuR::synapse0x1820950() {
   return (neuron0x1809660()*0.0678923);
}

double NNfunction_ss_uRuR::synapse0x1820990() {
   return (neuron0x18099a0()*0.25139);
}

double NNfunction_ss_uRuR::synapse0x18209d0() {
   return (neuron0x1809ce0()*-0.367857);
}

double NNfunction_ss_uRuR::synapse0x1820a10() {
   return (neuron0x180a020()*-0.3694);
}

double NNfunction_ss_uRuR::synapse0x1820a50() {
   return (neuron0x180a360()*-0.0775297);
}

double NNfunction_ss_uRuR::synapse0x1820a90() {
   return (neuron0x180a6a0()*-0.311078);
}

double NNfunction_ss_uRuR::synapse0x1820ad0() {
   return (neuron0x180a9e0()*-0.515207);
}

double NNfunction_ss_uRuR::synapse0x1820b10() {
   return (neuron0x180ad20()*-0.439354);
}

double NNfunction_ss_uRuR::synapse0x1820b50() {
   return (neuron0x180b060()*0.422162);
}

double NNfunction_ss_uRuR::synapse0x1820b90() {
   return (neuron0x180b3a0()*0.52876);
}

double NNfunction_ss_uRuR::synapse0x1820bd0() {
   return (neuron0x180b6e0()*-0.027765);
}

double NNfunction_ss_uRuR::synapse0x1820660() {
   return (neuron0x180ba20()*0.166718);
}

double NNfunction_ss_uRuR::synapse0x18206a0() {
   return (neuron0x180bf80()*0.223696);
}

double NNfunction_ss_uRuR::synapse0x1820d20() {
   return (neuron0x180c1a0()*-0.0558264);
}

double NNfunction_ss_uRuR::synapse0x1820d60() {
   return (neuron0x180c4e0()*-0.159849);
}

double NNfunction_ss_uRuR::synapse0x1820da0() {
   return (neuron0x180c820()*0.109716);
}

double NNfunction_ss_uRuR::synapse0x1820de0() {
   return (neuron0x180cb60()*0.222295);
}

double NNfunction_ss_uRuR::synapse0x1820e20() {
   return (neuron0x180cea0()*-0.400787);
}

double NNfunction_ss_uRuR::synapse0x1820e60() {
   return (neuron0x180d1e0()*0.0473066);
}

double NNfunction_ss_uRuR::synapse0x18211e0() {
   return (neuron0x1808620()*-0.00722834);
}

double NNfunction_ss_uRuR::synapse0x1821220() {
   return (neuron0x1808960()*0.0718184);
}

double NNfunction_ss_uRuR::synapse0x1821260() {
   return (neuron0x1808ca0()*0.0317711);
}

double NNfunction_ss_uRuR::synapse0x18212a0() {
   return (neuron0x1808fe0()*-2.64548);
}

double NNfunction_ss_uRuR::synapse0x18212e0() {
   return (neuron0x1809320()*0.0260077);
}

double NNfunction_ss_uRuR::synapse0x1821320() {
   return (neuron0x1809660()*0.0792388);
}

double NNfunction_ss_uRuR::synapse0x1821360() {
   return (neuron0x18099a0()*0.0804861);
}

double NNfunction_ss_uRuR::synapse0x18213a0() {
   return (neuron0x1809ce0()*0.014424);
}

double NNfunction_ss_uRuR::synapse0x18213e0() {
   return (neuron0x180a020()*-0.0246996);
}

double NNfunction_ss_uRuR::synapse0x1821420() {
   return (neuron0x180a360()*-0.0309387);
}

double NNfunction_ss_uRuR::synapse0x1821460() {
   return (neuron0x180a6a0()*-0.0413041);
}

double NNfunction_ss_uRuR::synapse0x18214a0() {
   return (neuron0x180a9e0()*-0.0174797);
}

double NNfunction_ss_uRuR::synapse0x18214e0() {
   return (neuron0x180ad20()*0.004006);
}

double NNfunction_ss_uRuR::synapse0x1821520() {
   return (neuron0x180b060()*0.0176098);
}

double NNfunction_ss_uRuR::synapse0x1821560() {
   return (neuron0x180b3a0()*0.392185);
}

double NNfunction_ss_uRuR::synapse0x18215a0() {
   return (neuron0x180b6e0()*0.0547906);
}

double NNfunction_ss_uRuR::synapse0x1821030() {
   return (neuron0x180ba20()*0.046594);
}

double NNfunction_ss_uRuR::synapse0x1821070() {
   return (neuron0x180bf80()*0.000675965);
}

double NNfunction_ss_uRuR::synapse0x18216f0() {
   return (neuron0x180c1a0()*0.00435107);
}

double NNfunction_ss_uRuR::synapse0x1821730() {
   return (neuron0x180c4e0()*0.0151183);
}

double NNfunction_ss_uRuR::synapse0x1821770() {
   return (neuron0x180c820()*-0.00927339);
}

double NNfunction_ss_uRuR::synapse0x18217b0() {
   return (neuron0x180cb60()*-0.023258);
}

double NNfunction_ss_uRuR::synapse0x18217f0() {
   return (neuron0x180cea0()*0.0341162);
}

double NNfunction_ss_uRuR::synapse0x1821830() {
   return (neuron0x180d1e0()*-0.00311259);
}

double NNfunction_ss_uRuR::synapse0x1821bb0() {
   return (neuron0x1808620()*0.217082);
}

double NNfunction_ss_uRuR::synapse0x1821bf0() {
   return (neuron0x1808960()*-0.754096);
}

double NNfunction_ss_uRuR::synapse0x1821c30() {
   return (neuron0x1808ca0()*-0.223761);
}

double NNfunction_ss_uRuR::synapse0x1821c70() {
   return (neuron0x1808fe0()*-0.145065);
}

double NNfunction_ss_uRuR::synapse0x1821cb0() {
   return (neuron0x1809320()*-0.942504);
}

double NNfunction_ss_uRuR::synapse0x1821cf0() {
   return (neuron0x1809660()*1.34681);
}

double NNfunction_ss_uRuR::synapse0x1821d30() {
   return (neuron0x18099a0()*0.558931);
}

double NNfunction_ss_uRuR::synapse0x1821d70() {
   return (neuron0x1809ce0()*0.246489);
}

double NNfunction_ss_uRuR::synapse0x1821db0() {
   return (neuron0x180a020()*-0.689864);
}

double NNfunction_ss_uRuR::synapse0x1821df0() {
   return (neuron0x180a360()*0.734929);
}

double NNfunction_ss_uRuR::synapse0x1821e30() {
   return (neuron0x180a6a0()*0.167608);
}

double NNfunction_ss_uRuR::synapse0x1821e70() {
   return (neuron0x180a9e0()*-0.605208);
}

double NNfunction_ss_uRuR::synapse0x1821eb0() {
   return (neuron0x180ad20()*0.560705);
}

double NNfunction_ss_uRuR::synapse0x1821ef0() {
   return (neuron0x180b060()*-0.447044);
}

double NNfunction_ss_uRuR::synapse0x1821f30() {
   return (neuron0x180b3a0()*0.910731);
}

double NNfunction_ss_uRuR::synapse0x1821f70() {
   return (neuron0x180b6e0()*0.726254);
}

double NNfunction_ss_uRuR::synapse0x1821a00() {
   return (neuron0x180ba20()*0.594662);
}

double NNfunction_ss_uRuR::synapse0x1821a40() {
   return (neuron0x180bf80()*0.149523);
}

double NNfunction_ss_uRuR::synapse0x18220c0() {
   return (neuron0x180c1a0()*-0.562926);
}

double NNfunction_ss_uRuR::synapse0x1822100() {
   return (neuron0x180c4e0()*-0.135491);
}

double NNfunction_ss_uRuR::synapse0x1822140() {
   return (neuron0x180c820()*-0.673435);
}

double NNfunction_ss_uRuR::synapse0x1822180() {
   return (neuron0x180cb60()*-1.45477);
}

double NNfunction_ss_uRuR::synapse0x18221c0() {
   return (neuron0x180cea0()*1.03665);
}

double NNfunction_ss_uRuR::synapse0x1822200() {
   return (neuron0x180d1e0()*0.447875);
}

double NNfunction_ss_uRuR::synapse0x1822580() {
   return (neuron0x1808620()*-0.106922);
}

double NNfunction_ss_uRuR::synapse0x18225c0() {
   return (neuron0x1808960()*-0.844458);
}

double NNfunction_ss_uRuR::synapse0x1822600() {
   return (neuron0x1808ca0()*-0.102043);
}

double NNfunction_ss_uRuR::synapse0x1822640() {
   return (neuron0x1808fe0()*-0.690969);
}

double NNfunction_ss_uRuR::synapse0x1822680() {
   return (neuron0x1809320()*-0.0327653);
}

double NNfunction_ss_uRuR::synapse0x18226c0() {
   return (neuron0x1809660()*-0.330096);
}

double NNfunction_ss_uRuR::synapse0x1822700() {
   return (neuron0x18099a0()*-0.0897835);
}

double NNfunction_ss_uRuR::synapse0x1822740() {
   return (neuron0x1809ce0()*0.287436);
}

double NNfunction_ss_uRuR::synapse0x1822780() {
   return (neuron0x180a020()*-0.7211);
}

double NNfunction_ss_uRuR::synapse0x18227c0() {
   return (neuron0x180a360()*0.0870722);
}

double NNfunction_ss_uRuR::synapse0x1822800() {
   return (neuron0x180a6a0()*0.200899);
}

double NNfunction_ss_uRuR::synapse0x1822840() {
   return (neuron0x180a9e0()*0.0905397);
}

double NNfunction_ss_uRuR::synapse0x1822880() {
   return (neuron0x180ad20()*0.507046);
}

double NNfunction_ss_uRuR::synapse0x18228c0() {
   return (neuron0x180b060()*-0.132441);
}

double NNfunction_ss_uRuR::synapse0x1822900() {
   return (neuron0x180b3a0()*0.275374);
}

double NNfunction_ss_uRuR::synapse0x1822940() {
   return (neuron0x180b6e0()*0.119648);
}

double NNfunction_ss_uRuR::synapse0x18223d0() {
   return (neuron0x180ba20()*-0.182155);
}

double NNfunction_ss_uRuR::synapse0x1822410() {
   return (neuron0x180bf80()*-0.0588713);
}

double NNfunction_ss_uRuR::synapse0x1822a90() {
   return (neuron0x180c1a0()*0.000540769);
}

double NNfunction_ss_uRuR::synapse0x1822ad0() {
   return (neuron0x180c4e0()*0.220167);
}

double NNfunction_ss_uRuR::synapse0x1822b10() {
   return (neuron0x180c820()*-0.12066);
}

double NNfunction_ss_uRuR::synapse0x1822b50() {
   return (neuron0x180cb60()*0.0304601);
}

double NNfunction_ss_uRuR::synapse0x1822b90() {
   return (neuron0x180cea0()*-0.00492407);
}

double NNfunction_ss_uRuR::synapse0x1822bd0() {
   return (neuron0x180d1e0()*-0.107154);
}

double NNfunction_ss_uRuR::synapse0x1822f50() {
   return (neuron0x1808620()*0.105224);
}

double NNfunction_ss_uRuR::synapse0x1817520() {
   return (neuron0x1808960()*0.58066);
}

double NNfunction_ss_uRuR::synapse0x1817560() {
   return (neuron0x1808ca0()*-0.247028);
}

double NNfunction_ss_uRuR::synapse0x18175a0() {
   return (neuron0x1808fe0()*0.815142);
}

double NNfunction_ss_uRuR::synapse0x18177f0() {
   return (neuron0x1809320()*0.253997);
}

double NNfunction_ss_uRuR::synapse0x1817830() {
   return (neuron0x1809660()*-0.0245209);
}

double NNfunction_ss_uRuR::synapse0x1817870() {
   return (neuron0x18099a0()*-0.290387);
}

double NNfunction_ss_uRuR::synapse0x1817ac0() {
   return (neuron0x1809ce0()*-0.213036);
}

double NNfunction_ss_uRuR::synapse0x1817b00() {
   return (neuron0x180a020()*-0.526562);
}

double NNfunction_ss_uRuR::synapse0x1817d50() {
   return (neuron0x180a360()*-0.324512);
}

double NNfunction_ss_uRuR::synapse0x1817d90() {
   return (neuron0x180a6a0()*1.00437);
}

double NNfunction_ss_uRuR::synapse0x1817dd0() {
   return (neuron0x180a9e0()*-0.0382733);
}

double NNfunction_ss_uRuR::synapse0x1818020() {
   return (neuron0x180ad20()*-0.031802);
}

double NNfunction_ss_uRuR::synapse0x1818060() {
   return (neuron0x180b060()*0.128459);
}

double NNfunction_ss_uRuR::synapse0x18182b0() {
   return (neuron0x180b3a0()*-0.752722);
}

double NNfunction_ss_uRuR::synapse0x18182f0() {
   return (neuron0x180b6e0()*0.0435386);
}

double NNfunction_ss_uRuR::synapse0x1822da0() {
   return (neuron0x180ba20()*0.172071);
}

double NNfunction_ss_uRuR::synapse0x1822de0() {
   return (neuron0x180bf80()*0.493582);
}

double NNfunction_ss_uRuR::synapse0x1818440() {
   return (neuron0x180c1a0()*0.335164);
}

double NNfunction_ss_uRuR::synapse0x1818950() {
   return (neuron0x180c4e0()*-0.344599);
}

double NNfunction_ss_uRuR::synapse0x1818990() {
   return (neuron0x180c820()*0.156334);
}

double NNfunction_ss_uRuR::synapse0x18189d0() {
   return (neuron0x180cb60()*-0.126203);
}

double NNfunction_ss_uRuR::synapse0x1818c20() {
   return (neuron0x180cea0()*-0.0684725);
}

double NNfunction_ss_uRuR::synapse0x1818c60() {
   return (neuron0x180d1e0()*-0.22331);
}

double NNfunction_ss_uRuR::synapse0x1818510() {
   return (neuron0x1808620()*0.325744);
}

double NNfunction_ss_uRuR::synapse0x1818550() {
   return (neuron0x1808960()*0.171891);
}

double NNfunction_ss_uRuR::synapse0x1818590() {
   return (neuron0x1808ca0()*-0.0968258);
}

double NNfunction_ss_uRuR::synapse0x18185d0() {
   return (neuron0x1808fe0()*-0.36759);
}

double NNfunction_ss_uRuR::synapse0x1818f50() {
   return (neuron0x1809320()*0.59951);
}

double NNfunction_ss_uRuR::synapse0x18252a0() {
   return (neuron0x1809660()*-2.53328);
}

double NNfunction_ss_uRuR::synapse0x18252e0() {
   return (neuron0x18099a0()*-0.319595);
}

double NNfunction_ss_uRuR::synapse0x1825320() {
   return (neuron0x1809ce0()*-0.588212);
}

double NNfunction_ss_uRuR::synapse0x1825360() {
   return (neuron0x180a020()*0.173107);
}

double NNfunction_ss_uRuR::synapse0x18253a0() {
   return (neuron0x180a360()*0.20621);
}

double NNfunction_ss_uRuR::synapse0x18253e0() {
   return (neuron0x180a6a0()*-0.259904);
}

double NNfunction_ss_uRuR::synapse0x1825420() {
   return (neuron0x180a9e0()*0.526225);
}

double NNfunction_ss_uRuR::synapse0x1825460() {
   return (neuron0x180ad20()*-0.0713465);
}

double NNfunction_ss_uRuR::synapse0x18254a0() {
   return (neuron0x180b060()*-0.160449);
}

double NNfunction_ss_uRuR::synapse0x18254e0() {
   return (neuron0x180b3a0()*0.932554);
}

double NNfunction_ss_uRuR::synapse0x1825520() {
   return (neuron0x180b6e0()*0.165309);
}

double NNfunction_ss_uRuR::synapse0x1818e30() {
   return (neuron0x180ba20()*-0.12831);
}

double NNfunction_ss_uRuR::synapse0x1818e70() {
   return (neuron0x180bf80()*-0.144929);
}

double NNfunction_ss_uRuR::synapse0x1825670() {
   return (neuron0x180c1a0()*-0.171577);
}

double NNfunction_ss_uRuR::synapse0x18256b0() {
   return (neuron0x180c4e0()*-0.166277);
}

double NNfunction_ss_uRuR::synapse0x18256f0() {
   return (neuron0x180c820()*0.0773567);
}

double NNfunction_ss_uRuR::synapse0x1825730() {
   return (neuron0x180cb60()*-0.409791);
}

double NNfunction_ss_uRuR::synapse0x1825770() {
   return (neuron0x180cea0()*-0.168935);
}

double NNfunction_ss_uRuR::synapse0x18257b0() {
   return (neuron0x180d1e0()*-0.00491717);
}

double NNfunction_ss_uRuR::synapse0x1825b30() {
   return (neuron0x1808620()*-0.141114);
}

double NNfunction_ss_uRuR::synapse0x1825b70() {
   return (neuron0x1808960()*0.565397);
}

double NNfunction_ss_uRuR::synapse0x1825bb0() {
   return (neuron0x1808ca0()*-0.392172);
}

double NNfunction_ss_uRuR::synapse0x1825bf0() {
   return (neuron0x1808fe0()*-0.752472);
}

double NNfunction_ss_uRuR::synapse0x1825c30() {
   return (neuron0x1809320()*-0.0358094);
}

double NNfunction_ss_uRuR::synapse0x1825c70() {
   return (neuron0x1809660()*-0.395842);
}

double NNfunction_ss_uRuR::synapse0x1825cb0() {
   return (neuron0x18099a0()*-0.0381175);
}

double NNfunction_ss_uRuR::synapse0x1825cf0() {
   return (neuron0x1809ce0()*0.296534);
}

double NNfunction_ss_uRuR::synapse0x1825d30() {
   return (neuron0x180a020()*0.0791243);
}

double NNfunction_ss_uRuR::synapse0x1825d70() {
   return (neuron0x180a360()*-0.267545);
}

double NNfunction_ss_uRuR::synapse0x1825db0() {
   return (neuron0x180a6a0()*-0.358328);
}

double NNfunction_ss_uRuR::synapse0x1825df0() {
   return (neuron0x180a9e0()*-0.674129);
}

double NNfunction_ss_uRuR::synapse0x1825e30() {
   return (neuron0x180ad20()*0.463364);
}

double NNfunction_ss_uRuR::synapse0x1825e70() {
   return (neuron0x180b060()*0.0337501);
}

double NNfunction_ss_uRuR::synapse0x1825eb0() {
   return (neuron0x180b3a0()*0.572258);
}

double NNfunction_ss_uRuR::synapse0x1825ef0() {
   return (neuron0x180b6e0()*0.224575);
}

double NNfunction_ss_uRuR::synapse0x1825980() {
   return (neuron0x180ba20()*0.342681);
}

double NNfunction_ss_uRuR::synapse0x18259c0() {
   return (neuron0x180bf80()*0.803895);
}

double NNfunction_ss_uRuR::synapse0x1826040() {
   return (neuron0x180c1a0()*0.161422);
}

double NNfunction_ss_uRuR::synapse0x1826080() {
   return (neuron0x180c4e0()*0.0908391);
}

double NNfunction_ss_uRuR::synapse0x18260c0() {
   return (neuron0x180c820()*-0.303961);
}

double NNfunction_ss_uRuR::synapse0x1826100() {
   return (neuron0x180cb60()*0.0104973);
}

double NNfunction_ss_uRuR::synapse0x1826140() {
   return (neuron0x180cea0()*-0.240196);
}

double NNfunction_ss_uRuR::synapse0x1826180() {
   return (neuron0x180d1e0()*-0.660337);
}

double NNfunction_ss_uRuR::synapse0x1826500() {
   return (neuron0x1808620()*-0.65854);
}

double NNfunction_ss_uRuR::synapse0x1826540() {
   return (neuron0x1808960()*-0.0544663);
}

double NNfunction_ss_uRuR::synapse0x1826580() {
   return (neuron0x1808ca0()*0.0157727);
}

double NNfunction_ss_uRuR::synapse0x18265c0() {
   return (neuron0x1808fe0()*-0.260504);
}

double NNfunction_ss_uRuR::synapse0x1826600() {
   return (neuron0x1809320()*-0.28612);
}

double NNfunction_ss_uRuR::synapse0x1826640() {
   return (neuron0x1809660()*0.188775);
}

double NNfunction_ss_uRuR::synapse0x1826680() {
   return (neuron0x18099a0()*-0.286127);
}

double NNfunction_ss_uRuR::synapse0x18266c0() {
   return (neuron0x1809ce0()*-0.227692);
}

double NNfunction_ss_uRuR::synapse0x1826700() {
   return (neuron0x180a020()*-0.92694);
}

double NNfunction_ss_uRuR::synapse0x1826740() {
   return (neuron0x180a360()*-1.36811);
}

double NNfunction_ss_uRuR::synapse0x1826780() {
   return (neuron0x180a6a0()*-0.0800121);
}

double NNfunction_ss_uRuR::synapse0x18267c0() {
   return (neuron0x180a9e0()*-0.372411);
}

double NNfunction_ss_uRuR::synapse0x1826800() {
   return (neuron0x180ad20()*-0.600534);
}

double NNfunction_ss_uRuR::synapse0x1826840() {
   return (neuron0x180b060()*-0.316931);
}

double NNfunction_ss_uRuR::synapse0x1826880() {
   return (neuron0x180b3a0()*0.330644);
}

double NNfunction_ss_uRuR::synapse0x18268c0() {
   return (neuron0x180b6e0()*0.06096);
}

double NNfunction_ss_uRuR::synapse0x1826350() {
   return (neuron0x180ba20()*0.513768);
}

double NNfunction_ss_uRuR::synapse0x1826390() {
   return (neuron0x180bf80()*0.377489);
}

double NNfunction_ss_uRuR::synapse0x1826a10() {
   return (neuron0x180c1a0()*-0.179591);
}

double NNfunction_ss_uRuR::synapse0x1826a50() {
   return (neuron0x180c4e0()*1.05124);
}

double NNfunction_ss_uRuR::synapse0x1826a90() {
   return (neuron0x180c820()*-0.280169);
}

double NNfunction_ss_uRuR::synapse0x1826ad0() {
   return (neuron0x180cb60()*-0.225905);
}

double NNfunction_ss_uRuR::synapse0x1826b10() {
   return (neuron0x180cea0()*0.349936);
}

double NNfunction_ss_uRuR::synapse0x1826b50() {
   return (neuron0x180d1e0()*-0.0425514);
}

double NNfunction_ss_uRuR::synapse0x1826ed0() {
   return (neuron0x1808620()*0.0129316);
}

double NNfunction_ss_uRuR::synapse0x1826f10() {
   return (neuron0x1808960()*0.00958107);
}

double NNfunction_ss_uRuR::synapse0x1826f50() {
   return (neuron0x1808ca0()*-0.0121449);
}

double NNfunction_ss_uRuR::synapse0x1826f90() {
   return (neuron0x1808fe0()*-14.4007);
}

double NNfunction_ss_uRuR::synapse0x1826fd0() {
   return (neuron0x1809320()*-0.0277241);
}

double NNfunction_ss_uRuR::synapse0x1827010() {
   return (neuron0x1809660()*-0.0174608);
}

double NNfunction_ss_uRuR::synapse0x1827050() {
   return (neuron0x18099a0()*-0.0219958);
}

double NNfunction_ss_uRuR::synapse0x1827090() {
   return (neuron0x1809ce0()*-0.0156073);
}

double NNfunction_ss_uRuR::synapse0x18270d0() {
   return (neuron0x180a020()*0.0208284);
}

double NNfunction_ss_uRuR::synapse0x1827110() {
   return (neuron0x180a360()*-0.0175915);
}

double NNfunction_ss_uRuR::synapse0x1827150() {
   return (neuron0x180a6a0()*0.0400512);
}

double NNfunction_ss_uRuR::synapse0x1827190() {
   return (neuron0x180a9e0()*-0.0113421);
}

double NNfunction_ss_uRuR::synapse0x18271d0() {
   return (neuron0x180ad20()*-0.0023973);
}

double NNfunction_ss_uRuR::synapse0x1827210() {
   return (neuron0x180b060()*-0.0432624);
}

double NNfunction_ss_uRuR::synapse0x1827250() {
   return (neuron0x180b3a0()*-1.52966);
}

double NNfunction_ss_uRuR::synapse0x1827290() {
   return (neuron0x180b6e0()*-0.00864899);
}

double NNfunction_ss_uRuR::synapse0x1826d20() {
   return (neuron0x180ba20()*-0.0304968);
}

double NNfunction_ss_uRuR::synapse0x1826d60() {
   return (neuron0x180bf80()*0.0182591);
}

double NNfunction_ss_uRuR::synapse0x18273e0() {
   return (neuron0x180c1a0()*-0.0132218);
}

double NNfunction_ss_uRuR::synapse0x1827420() {
   return (neuron0x180c4e0()*0.00839272);
}

double NNfunction_ss_uRuR::synapse0x1827460() {
   return (neuron0x180c820()*-0.00937294);
}

double NNfunction_ss_uRuR::synapse0x18274a0() {
   return (neuron0x180cb60()*0.00730222);
}

double NNfunction_ss_uRuR::synapse0x18274e0() {
   return (neuron0x180cea0()*-0.0113937);
}

double NNfunction_ss_uRuR::synapse0x1827520() {
   return (neuron0x180d1e0()*0.000775336);
}

double NNfunction_ss_uRuR::synapse0x18278a0() {
   return (neuron0x1808620()*0.105429);
}

double NNfunction_ss_uRuR::synapse0x18278e0() {
   return (neuron0x1808960()*0.0417176);
}

double NNfunction_ss_uRuR::synapse0x1827920() {
   return (neuron0x1808ca0()*0.0684485);
}

double NNfunction_ss_uRuR::synapse0x1827960() {
   return (neuron0x1808fe0()*0.218302);
}

double NNfunction_ss_uRuR::synapse0x18279a0() {
   return (neuron0x1809320()*0.894488);
}

double NNfunction_ss_uRuR::synapse0x18279e0() {
   return (neuron0x1809660()*0.244702);
}

double NNfunction_ss_uRuR::synapse0x1827a20() {
   return (neuron0x18099a0()*-0.122296);
}

double NNfunction_ss_uRuR::synapse0x1827a60() {
   return (neuron0x1809ce0()*-0.366904);
}

double NNfunction_ss_uRuR::synapse0x1827aa0() {
   return (neuron0x180a020()*0.0669629);
}

double NNfunction_ss_uRuR::synapse0x1827ae0() {
   return (neuron0x180a360()*-0.184682);
}

double NNfunction_ss_uRuR::synapse0x1827b20() {
   return (neuron0x180a6a0()*-0.0776584);
}

double NNfunction_ss_uRuR::synapse0x1827b60() {
   return (neuron0x180a9e0()*0.0570485);
}

double NNfunction_ss_uRuR::synapse0x1827ba0() {
   return (neuron0x180ad20()*-0.128122);
}

double NNfunction_ss_uRuR::synapse0x1827be0() {
   return (neuron0x180b060()*-0.0521472);
}

double NNfunction_ss_uRuR::synapse0x1827c20() {
   return (neuron0x180b3a0()*-0.664886);
}

double NNfunction_ss_uRuR::synapse0x1827c60() {
   return (neuron0x180b6e0()*-0.206003);
}

double NNfunction_ss_uRuR::synapse0x18276f0() {
   return (neuron0x180ba20()*0.068021);
}

double NNfunction_ss_uRuR::synapse0x1827730() {
   return (neuron0x180bf80()*0.221822);
}

double NNfunction_ss_uRuR::synapse0x1827db0() {
   return (neuron0x180c1a0()*-0.142182);
}

double NNfunction_ss_uRuR::synapse0x1827df0() {
   return (neuron0x180c4e0()*-0.132434);
}

double NNfunction_ss_uRuR::synapse0x1827e30() {
   return (neuron0x180c820()*-0.000472918);
}

double NNfunction_ss_uRuR::synapse0x1827e70() {
   return (neuron0x180cb60()*-0.0685938);
}

double NNfunction_ss_uRuR::synapse0x1827eb0() {
   return (neuron0x180cea0()*-0.0558393);
}

double NNfunction_ss_uRuR::synapse0x1827ef0() {
   return (neuron0x180d1e0()*-0.0522206);
}

double NNfunction_ss_uRuR::synapse0x1828270() {
   return (neuron0x1808620()*0.0239073);
}

double NNfunction_ss_uRuR::synapse0x18282b0() {
   return (neuron0x1808960()*0.110746);
}

double NNfunction_ss_uRuR::synapse0x18282f0() {
   return (neuron0x1808ca0()*-0.105347);
}

double NNfunction_ss_uRuR::synapse0x1828330() {
   return (neuron0x1808fe0()*-0.743375);
}

double NNfunction_ss_uRuR::synapse0x1828370() {
   return (neuron0x1809320()*0.047866);
}

double NNfunction_ss_uRuR::synapse0x18283b0() {
   return (neuron0x1809660()*-0.711561);
}

double NNfunction_ss_uRuR::synapse0x18283f0() {
   return (neuron0x18099a0()*-0.636719);
}

double NNfunction_ss_uRuR::synapse0x1828430() {
   return (neuron0x1809ce0()*-0.181217);
}

double NNfunction_ss_uRuR::synapse0x1828470() {
   return (neuron0x180a020()*0.119921);
}

double NNfunction_ss_uRuR::synapse0x18284b0() {
   return (neuron0x180a360()*-0.0453616);
}

double NNfunction_ss_uRuR::synapse0x18284f0() {
   return (neuron0x180a6a0()*0.499785);
}

double NNfunction_ss_uRuR::synapse0x1828530() {
   return (neuron0x180a9e0()*0.0393945);
}

double NNfunction_ss_uRuR::synapse0x1828570() {
   return (neuron0x180ad20()*0.126116);
}

double NNfunction_ss_uRuR::synapse0x18285b0() {
   return (neuron0x180b060()*0.620434);
}

double NNfunction_ss_uRuR::synapse0x18285f0() {
   return (neuron0x180b3a0()*2.59596);
}

double NNfunction_ss_uRuR::synapse0x1828630() {
   return (neuron0x180b6e0()*0.229622);
}

double NNfunction_ss_uRuR::synapse0x18280c0() {
   return (neuron0x180ba20()*-0.169454);
}

double NNfunction_ss_uRuR::synapse0x1828100() {
   return (neuron0x180bf80()*-0.316655);
}

double NNfunction_ss_uRuR::synapse0x1828780() {
   return (neuron0x180c1a0()*0.232114);
}

double NNfunction_ss_uRuR::synapse0x18287c0() {
   return (neuron0x180c4e0()*0.399854);
}

double NNfunction_ss_uRuR::synapse0x1828800() {
   return (neuron0x180c820()*-0.599706);
}

double NNfunction_ss_uRuR::synapse0x1828840() {
   return (neuron0x180cb60()*-0.0988308);
}

double NNfunction_ss_uRuR::synapse0x1828880() {
   return (neuron0x180cea0()*0.0402584);
}

double NNfunction_ss_uRuR::synapse0x18288c0() {
   return (neuron0x180d1e0()*-0.34939);
}

double NNfunction_ss_uRuR::synapse0x1828c40() {
   return (neuron0x1808620()*0.0561131);
}

double NNfunction_ss_uRuR::synapse0x1828c80() {
   return (neuron0x1808960()*-0.0634923);
}

double NNfunction_ss_uRuR::synapse0x1828cc0() {
   return (neuron0x1808ca0()*0.305687);
}

double NNfunction_ss_uRuR::synapse0x1828d00() {
   return (neuron0x1808fe0()*-1.69872);
}

double NNfunction_ss_uRuR::synapse0x1828d40() {
   return (neuron0x1809320()*-0.061475);
}

double NNfunction_ss_uRuR::synapse0x1828d80() {
   return (neuron0x1809660()*-0.057483);
}

double NNfunction_ss_uRuR::synapse0x1828dc0() {
   return (neuron0x18099a0()*0.0766775);
}

double NNfunction_ss_uRuR::synapse0x1828e00() {
   return (neuron0x1809ce0()*-0.0160064);
}

double NNfunction_ss_uRuR::synapse0x1828e40() {
   return (neuron0x180a020()*0.537362);
}

double NNfunction_ss_uRuR::synapse0x1828e80() {
   return (neuron0x180a360()*-0.328478);
}

double NNfunction_ss_uRuR::synapse0x1828ec0() {
   return (neuron0x180a6a0()*0.196823);
}

double NNfunction_ss_uRuR::synapse0x1828f00() {
   return (neuron0x180a9e0()*0.0113162);
}

double NNfunction_ss_uRuR::synapse0x1828f40() {
   return (neuron0x180ad20()*0.579306);
}

double NNfunction_ss_uRuR::synapse0x1828f80() {
   return (neuron0x180b060()*0.179344);
}

double NNfunction_ss_uRuR::synapse0x1828fc0() {
   return (neuron0x180b3a0()*-0.673759);
}

double NNfunction_ss_uRuR::synapse0x1829000() {
   return (neuron0x180b6e0()*-0.435572);
}

double NNfunction_ss_uRuR::synapse0x1828a90() {
   return (neuron0x180ba20()*-0.336508);
}

double NNfunction_ss_uRuR::synapse0x1828ad0() {
   return (neuron0x180bf80()*-0.297763);
}

double NNfunction_ss_uRuR::synapse0x1829150() {
   return (neuron0x180c1a0()*0.655663);
}

double NNfunction_ss_uRuR::synapse0x1829190() {
   return (neuron0x180c4e0()*0.0181437);
}

double NNfunction_ss_uRuR::synapse0x18291d0() {
   return (neuron0x180c820()*0.00238425);
}

double NNfunction_ss_uRuR::synapse0x1829210() {
   return (neuron0x180cb60()*-0.0974257);
}

double NNfunction_ss_uRuR::synapse0x1829250() {
   return (neuron0x180cea0()*0.053096);
}

double NNfunction_ss_uRuR::synapse0x1829290() {
   return (neuron0x180d1e0()*0.0783518);
}

double NNfunction_ss_uRuR::synapse0x1829610() {
   return (neuron0x1808620()*0.530313);
}

double NNfunction_ss_uRuR::synapse0x1829650() {
   return (neuron0x1808960()*0.660999);
}

double NNfunction_ss_uRuR::synapse0x1829690() {
   return (neuron0x1808ca0()*-0.0755553);
}

double NNfunction_ss_uRuR::synapse0x18296d0() {
   return (neuron0x1808fe0()*-0.867556);
}

double NNfunction_ss_uRuR::synapse0x1829710() {
   return (neuron0x1809320()*-0.54996);
}

double NNfunction_ss_uRuR::synapse0x1829750() {
   return (neuron0x1809660()*0.00465676);
}

double NNfunction_ss_uRuR::synapse0x1829790() {
   return (neuron0x18099a0()*0.328282);
}

double NNfunction_ss_uRuR::synapse0x18297d0() {
   return (neuron0x1809ce0()*-0.130973);
}

double NNfunction_ss_uRuR::synapse0x1829810() {
   return (neuron0x180a020()*-0.422862);
}

double NNfunction_ss_uRuR::synapse0x1829850() {
   return (neuron0x180a360()*-0.84376);
}

double NNfunction_ss_uRuR::synapse0x1829890() {
   return (neuron0x180a6a0()*-0.114072);
}

double NNfunction_ss_uRuR::synapse0x18298d0() {
   return (neuron0x180a9e0()*-0.185619);
}

double NNfunction_ss_uRuR::synapse0x1829910() {
   return (neuron0x180ad20()*-0.542815);
}

double NNfunction_ss_uRuR::synapse0x1829950() {
   return (neuron0x180b060()*0.117868);
}

double NNfunction_ss_uRuR::synapse0x1829990() {
   return (neuron0x180b3a0()*0.207056);
}

double NNfunction_ss_uRuR::synapse0x18299d0() {
   return (neuron0x180b6e0()*-1.12789);
}

double NNfunction_ss_uRuR::synapse0x1829460() {
   return (neuron0x180ba20()*-0.727504);
}

double NNfunction_ss_uRuR::synapse0x18294a0() {
   return (neuron0x180bf80()*-1.17168);
}

double NNfunction_ss_uRuR::synapse0x1829b20() {
   return (neuron0x180c1a0()*-0.0560952);
}

double NNfunction_ss_uRuR::synapse0x1829b60() {
   return (neuron0x180c4e0()*-0.167977);
}

double NNfunction_ss_uRuR::synapse0x1829ba0() {
   return (neuron0x180c820()*0.258028);
}

double NNfunction_ss_uRuR::synapse0x1829be0() {
   return (neuron0x180cb60()*1.05099);
}

double NNfunction_ss_uRuR::synapse0x1829c20() {
   return (neuron0x180cea0()*-0.504023);
}

double NNfunction_ss_uRuR::synapse0x1829c60() {
   return (neuron0x180d1e0()*0.0684111);
}

double NNfunction_ss_uRuR::synapse0x1812710() {
   return (neuron0x1808620()*0.124965);
}

double NNfunction_ss_uRuR::synapse0x1812750() {
   return (neuron0x1808960()*-0.240175);
}

double NNfunction_ss_uRuR::synapse0x1812790() {
   return (neuron0x1808ca0()*-0.0554679);
}

double NNfunction_ss_uRuR::synapse0x18127d0() {
   return (neuron0x1808fe0()*-0.803284);
}

double NNfunction_ss_uRuR::synapse0x1812810() {
   return (neuron0x1809320()*0.307976);
}

double NNfunction_ss_uRuR::synapse0x1812850() {
   return (neuron0x1809660()*0.0109112);
}

double NNfunction_ss_uRuR::synapse0x1812890() {
   return (neuron0x18099a0()*-0.239642);
}

double NNfunction_ss_uRuR::synapse0x18128d0() {
   return (neuron0x1809ce0()*0.303085);
}

double NNfunction_ss_uRuR::synapse0x182a3f0() {
   return (neuron0x180a020()*-0.0298141);
}

double NNfunction_ss_uRuR::synapse0x182a430() {
   return (neuron0x180a360()*-0.185678);
}

double NNfunction_ss_uRuR::synapse0x182a470() {
   return (neuron0x180a6a0()*-0.28714);
}

double NNfunction_ss_uRuR::synapse0x182a4b0() {
   return (neuron0x180a9e0()*-0.13276);
}

double NNfunction_ss_uRuR::synapse0x182a4f0() {
   return (neuron0x180ad20()*-0.0815573);
}

double NNfunction_ss_uRuR::synapse0x182a530() {
   return (neuron0x180b060()*-0.151679);
}

double NNfunction_ss_uRuR::synapse0x182a570() {
   return (neuron0x180b3a0()*0.264638);
}

double NNfunction_ss_uRuR::synapse0x182a5b0() {
   return (neuron0x180b6e0()*-0.676142);
}

double NNfunction_ss_uRuR::synapse0x1829e30() {
   return (neuron0x180ba20()*-1.2316);
}

double NNfunction_ss_uRuR::synapse0x1829e70() {
   return (neuron0x180bf80()*-0.388689);
}

double NNfunction_ss_uRuR::synapse0x182a700() {
   return (neuron0x180c1a0()*-0.00244929);
}

double NNfunction_ss_uRuR::synapse0x182a740() {
   return (neuron0x180c4e0()*0.329813);
}

double NNfunction_ss_uRuR::synapse0x182a780() {
   return (neuron0x180c820()*-0.106795);
}

double NNfunction_ss_uRuR::synapse0x182a7c0() {
   return (neuron0x180cb60()*-0.089019);
}

double NNfunction_ss_uRuR::synapse0x182a800() {
   return (neuron0x180cea0()*-0.253149);
}

double NNfunction_ss_uRuR::synapse0x182a840() {
   return (neuron0x180d1e0()*-0.164971);
}

double NNfunction_ss_uRuR::synapse0x182abc0() {
   return (neuron0x1808620()*-0.112932);
}

double NNfunction_ss_uRuR::synapse0x182ac00() {
   return (neuron0x1808960()*-0.523588);
}

double NNfunction_ss_uRuR::synapse0x182ac40() {
   return (neuron0x1808ca0()*-0.0116501);
}

double NNfunction_ss_uRuR::synapse0x182ac80() {
   return (neuron0x1808fe0()*1.0668);
}

double NNfunction_ss_uRuR::synapse0x182acc0() {
   return (neuron0x1809320()*0.112793);
}

double NNfunction_ss_uRuR::synapse0x182ad00() {
   return (neuron0x1809660()*0.203239);
}

double NNfunction_ss_uRuR::synapse0x182ad40() {
   return (neuron0x18099a0()*-0.211333);
}

double NNfunction_ss_uRuR::synapse0x182ad80() {
   return (neuron0x1809ce0()*-0.112118);
}

double NNfunction_ss_uRuR::synapse0x182adc0() {
   return (neuron0x180a020()*0.176464);
}

double NNfunction_ss_uRuR::synapse0x182ae00() {
   return (neuron0x180a360()*-0.0884248);
}

double NNfunction_ss_uRuR::synapse0x182ae40() {
   return (neuron0x180a6a0()*0.0739977);
}

double NNfunction_ss_uRuR::synapse0x182ae80() {
   return (neuron0x180a9e0()*-0.0836538);
}

double NNfunction_ss_uRuR::synapse0x182aec0() {
   return (neuron0x180ad20()*0.238667);
}

double NNfunction_ss_uRuR::synapse0x182af00() {
   return (neuron0x180b060()*-0.294225);
}

double NNfunction_ss_uRuR::synapse0x182af40() {
   return (neuron0x180b3a0()*-0.781331);
}

double NNfunction_ss_uRuR::synapse0x182af80() {
   return (neuron0x180b6e0()*0.250621);
}

double NNfunction_ss_uRuR::synapse0x182aa10() {
   return (neuron0x180ba20()*0.0265833);
}

double NNfunction_ss_uRuR::synapse0x182aa50() {
   return (neuron0x180bf80()*-0.19005);
}

double NNfunction_ss_uRuR::synapse0x182b0d0() {
   return (neuron0x180c1a0()*-0.167773);
}

double NNfunction_ss_uRuR::synapse0x182b110() {
   return (neuron0x180c4e0()*0.0508378);
}

double NNfunction_ss_uRuR::synapse0x182b150() {
   return (neuron0x180c820()*-0.127347);
}

double NNfunction_ss_uRuR::synapse0x182b190() {
   return (neuron0x180cb60()*0.0150232);
}

double NNfunction_ss_uRuR::synapse0x182b1d0() {
   return (neuron0x180cea0()*0.189226);
}

double NNfunction_ss_uRuR::synapse0x182b210() {
   return (neuron0x180d1e0()*0.0994958);
}

double NNfunction_ss_uRuR::synapse0x182b590() {
   return (neuron0x1808620()*0.300379);
}

double NNfunction_ss_uRuR::synapse0x182b5d0() {
   return (neuron0x1808960()*0.123932);
}

double NNfunction_ss_uRuR::synapse0x182b610() {
   return (neuron0x1808ca0()*-0.0113642);
}

double NNfunction_ss_uRuR::synapse0x182b650() {
   return (neuron0x1808fe0()*-1.42493);
}

double NNfunction_ss_uRuR::synapse0x182b690() {
   return (neuron0x1809320()*-0.411121);
}

double NNfunction_ss_uRuR::synapse0x182b6d0() {
   return (neuron0x1809660()*0.0950316);
}

double NNfunction_ss_uRuR::synapse0x182b710() {
   return (neuron0x18099a0()*0.089863);
}

double NNfunction_ss_uRuR::synapse0x182b750() {
   return (neuron0x1809ce0()*0.0971784);
}

double NNfunction_ss_uRuR::synapse0x182b790() {
   return (neuron0x180a020()*-0.729824);
}

double NNfunction_ss_uRuR::synapse0x182b7d0() {
   return (neuron0x180a360()*0.242174);
}

double NNfunction_ss_uRuR::synapse0x182b810() {
   return (neuron0x180a6a0()*0.719739);
}

double NNfunction_ss_uRuR::synapse0x182b850() {
   return (neuron0x180a9e0()*-0.13537);
}

double NNfunction_ss_uRuR::synapse0x182b890() {
   return (neuron0x180ad20()*-0.166832);
}

double NNfunction_ss_uRuR::synapse0x182b8d0() {
   return (neuron0x180b060()*0.211178);
}

double NNfunction_ss_uRuR::synapse0x182b910() {
   return (neuron0x180b3a0()*-0.555359);
}

double NNfunction_ss_uRuR::synapse0x182b950() {
   return (neuron0x180b6e0()*0.686604);
}

double NNfunction_ss_uRuR::synapse0x182b3e0() {
   return (neuron0x180ba20()*0.251899);
}

double NNfunction_ss_uRuR::synapse0x182b420() {
   return (neuron0x180bf80()*-0.915683);
}

double NNfunction_ss_uRuR::synapse0x181bf50() {
   return (neuron0x180c1a0()*0.00573792);
}

double NNfunction_ss_uRuR::synapse0x181bf90() {
   return (neuron0x180c4e0()*-0.00214611);
}

double NNfunction_ss_uRuR::synapse0x181bfd0() {
   return (neuron0x180c820()*0.0484568);
}

double NNfunction_ss_uRuR::synapse0x181c010() {
   return (neuron0x180cb60()*-0.324452);
}

double NNfunction_ss_uRuR::synapse0x181c050() {
   return (neuron0x180cea0()*0.28198);
}

double NNfunction_ss_uRuR::synapse0x181c090() {
   return (neuron0x180d1e0()*-0.218396);
}

double NNfunction_ss_uRuR::synapse0x181c410() {
   return (neuron0x1808620()*-1.31404);
}

double NNfunction_ss_uRuR::synapse0x181c450() {
   return (neuron0x1808960()*0.260051);
}

double NNfunction_ss_uRuR::synapse0x181c490() {
   return (neuron0x1808ca0()*-0.599442);
}

double NNfunction_ss_uRuR::synapse0x181c4d0() {
   return (neuron0x1808fe0()*0.625397);
}

double NNfunction_ss_uRuR::synapse0x181c510() {
   return (neuron0x1809320()*-0.514631);
}

double NNfunction_ss_uRuR::synapse0x181c550() {
   return (neuron0x1809660()*-0.0508683);
}

double NNfunction_ss_uRuR::synapse0x181c590() {
   return (neuron0x18099a0()*-1.01296);
}

double NNfunction_ss_uRuR::synapse0x181c5d0() {
   return (neuron0x1809ce0()*-0.0792905);
}

double NNfunction_ss_uRuR::synapse0x181c610() {
   return (neuron0x180a020()*0.772131);
}

double NNfunction_ss_uRuR::synapse0x181c650() {
   return (neuron0x180a360()*0.188651);
}

double NNfunction_ss_uRuR::synapse0x181c690() {
   return (neuron0x180a6a0()*0.00462583);
}

double NNfunction_ss_uRuR::synapse0x181c6d0() {
   return (neuron0x180a9e0()*-0.188719);
}

double NNfunction_ss_uRuR::synapse0x181c710() {
   return (neuron0x180ad20()*-0.966975);
}

double NNfunction_ss_uRuR::synapse0x181c750() {
   return (neuron0x180b060()*0.170501);
}

double NNfunction_ss_uRuR::synapse0x181c790() {
   return (neuron0x180b3a0()*0.189792);
}

double NNfunction_ss_uRuR::synapse0x181c7d0() {
   return (neuron0x180b6e0()*-0.259984);
}

double NNfunction_ss_uRuR::synapse0x181c260() {
   return (neuron0x180ba20()*0.3178);
}

double NNfunction_ss_uRuR::synapse0x181c2a0() {
   return (neuron0x180bf80()*0.529304);
}

double NNfunction_ss_uRuR::synapse0x181c920() {
   return (neuron0x180c1a0()*0.533038);
}

double NNfunction_ss_uRuR::synapse0x181c960() {
   return (neuron0x180c4e0()*0.182218);
}

double NNfunction_ss_uRuR::synapse0x181c9a0() {
   return (neuron0x180c820()*0.498252);
}

double NNfunction_ss_uRuR::synapse0x181c9e0() {
   return (neuron0x180cb60()*-0.392317);
}

double NNfunction_ss_uRuR::synapse0x181ca20() {
   return (neuron0x180cea0()*-0.122155);
}

double NNfunction_ss_uRuR::synapse0x181ca60() {
   return (neuron0x180d1e0()*-0.146534);
}

double NNfunction_ss_uRuR::synapse0x181cde0() {
   return (neuron0x1808620()*0.0671442);
}

double NNfunction_ss_uRuR::synapse0x181ce20() {
   return (neuron0x1808960()*-0.124234);
}

double NNfunction_ss_uRuR::synapse0x181ce60() {
   return (neuron0x1808ca0()*0.744234);
}

double NNfunction_ss_uRuR::synapse0x181cea0() {
   return (neuron0x1808fe0()*-0.129764);
}

double NNfunction_ss_uRuR::synapse0x181cee0() {
   return (neuron0x1809320()*-0.305602);
}

double NNfunction_ss_uRuR::synapse0x181cf20() {
   return (neuron0x1809660()*0.042647);
}

double NNfunction_ss_uRuR::synapse0x181cf60() {
   return (neuron0x18099a0()*0.21569);
}

double NNfunction_ss_uRuR::synapse0x181cfa0() {
   return (neuron0x1809ce0()*-0.0677067);
}

double NNfunction_ss_uRuR::synapse0x181cfe0() {
   return (neuron0x180a020()*-1.0531);
}

double NNfunction_ss_uRuR::synapse0x181d020() {
   return (neuron0x180a360()*-1.3243);
}

double NNfunction_ss_uRuR::synapse0x181d060() {
   return (neuron0x180a6a0()*0.230098);
}

double NNfunction_ss_uRuR::synapse0x181d0a0() {
   return (neuron0x180a9e0()*0.162603);
}

double NNfunction_ss_uRuR::synapse0x181d0e0() {
   return (neuron0x180ad20()*0.247281);
}

double NNfunction_ss_uRuR::synapse0x181d120() {
   return (neuron0x180b060()*-0.13383);
}

double NNfunction_ss_uRuR::synapse0x181d160() {
   return (neuron0x180b3a0()*0.798798);
}

double NNfunction_ss_uRuR::synapse0x181d1a0() {
   return (neuron0x180b6e0()*-0.351468);
}

double NNfunction_ss_uRuR::synapse0x181cc30() {
   return (neuron0x180ba20()*-0.763735);
}

double NNfunction_ss_uRuR::synapse0x181cc70() {
   return (neuron0x180bf80()*0.235467);
}

double NNfunction_ss_uRuR::synapse0x181d2f0() {
   return (neuron0x180c1a0()*0.238075);
}

double NNfunction_ss_uRuR::synapse0x181d330() {
   return (neuron0x180c4e0()*0.752648);
}

double NNfunction_ss_uRuR::synapse0x181d370() {
   return (neuron0x180c820()*-0.290391);
}

double NNfunction_ss_uRuR::synapse0x181d3b0() {
   return (neuron0x180cb60()*0.299096);
}

double NNfunction_ss_uRuR::synapse0x181d3f0() {
   return (neuron0x180cea0()*0.175704);
}

double NNfunction_ss_uRuR::synapse0x181d430() {
   return (neuron0x180d1e0()*0.375659);
}

double NNfunction_ss_uRuR::synapse0x181d7b0() {
   return (neuron0x1808620()*0.0698929);
}

double NNfunction_ss_uRuR::synapse0x181d7f0() {
   return (neuron0x1808960()*0.130456);
}

double NNfunction_ss_uRuR::synapse0x181d830() {
   return (neuron0x1808ca0()*-0.00700718);
}

double NNfunction_ss_uRuR::synapse0x181d870() {
   return (neuron0x1808fe0()*-0.25825);
}

double NNfunction_ss_uRuR::synapse0x181d8b0() {
   return (neuron0x1809320()*-0.521978);
}

double NNfunction_ss_uRuR::synapse0x181d8f0() {
   return (neuron0x1809660()*0.135273);
}

double NNfunction_ss_uRuR::synapse0x181d930() {
   return (neuron0x18099a0()*0.251141);
}

double NNfunction_ss_uRuR::synapse0x181d970() {
   return (neuron0x1809ce0()*-1.00185);
}

double NNfunction_ss_uRuR::synapse0x181d9b0() {
   return (neuron0x180a020()*0.0275449);
}

double NNfunction_ss_uRuR::synapse0x181d9f0() {
   return (neuron0x180a360()*-0.104391);
}

double NNfunction_ss_uRuR::synapse0x181da30() {
   return (neuron0x180a6a0()*-0.0070328);
}

double NNfunction_ss_uRuR::synapse0x181da70() {
   return (neuron0x180a9e0()*0.0832593);
}

double NNfunction_ss_uRuR::synapse0x181dab0() {
   return (neuron0x180ad20()*-0.109444);
}

double NNfunction_ss_uRuR::synapse0x181daf0() {
   return (neuron0x180b060()*0.0037102);
}

double NNfunction_ss_uRuR::synapse0x181db30() {
   return (neuron0x180b3a0()*-0.831774);
}

double NNfunction_ss_uRuR::synapse0x181db70() {
   return (neuron0x180b6e0()*-0.0832102);
}

double NNfunction_ss_uRuR::synapse0x181d600() {
   return (neuron0x180ba20()*-0.237408);
}

double NNfunction_ss_uRuR::synapse0x181d640() {
   return (neuron0x180bf80()*-0.125438);
}

double NNfunction_ss_uRuR::synapse0x181dcc0() {
   return (neuron0x180c1a0()*-0.278491);
}

double NNfunction_ss_uRuR::synapse0x181dd00() {
   return (neuron0x180c4e0()*-0.101446);
}

double NNfunction_ss_uRuR::synapse0x181dd40() {
   return (neuron0x180c820()*0.0492242);
}

double NNfunction_ss_uRuR::synapse0x181dd80() {
   return (neuron0x180cb60()*-0.0082719);
}

double NNfunction_ss_uRuR::synapse0x181ddc0() {
   return (neuron0x180cea0()*0.0364988);
}

double NNfunction_ss_uRuR::synapse0x181de00() {
   return (neuron0x180d1e0()*0.0534836);
}

double NNfunction_ss_uRuR::synapse0x182fcd0() {
   return (neuron0x1808620()*0.203468);
}

double NNfunction_ss_uRuR::synapse0x182fd10() {
   return (neuron0x1808960()*0.117671);
}

double NNfunction_ss_uRuR::synapse0x182fd50() {
   return (neuron0x1808ca0()*0.00249921);
}

double NNfunction_ss_uRuR::synapse0x182fd90() {
   return (neuron0x1808fe0()*-0.321214);
}

double NNfunction_ss_uRuR::synapse0x182fdd0() {
   return (neuron0x1809320()*0.673794);
}

double NNfunction_ss_uRuR::synapse0x182fe10() {
   return (neuron0x1809660()*0.78025);
}

double NNfunction_ss_uRuR::synapse0x182fe50() {
   return (neuron0x18099a0()*-0.245655);
}

double NNfunction_ss_uRuR::synapse0x182fe90() {
   return (neuron0x1809ce0()*0.0956013);
}

double NNfunction_ss_uRuR::synapse0x182fed0() {
   return (neuron0x180a020()*-0.014682);
}

double NNfunction_ss_uRuR::synapse0x182ff10() {
   return (neuron0x180a360()*0.38319);
}

double NNfunction_ss_uRuR::synapse0x182ff50() {
   return (neuron0x180a6a0()*-0.506481);
}

double NNfunction_ss_uRuR::synapse0x182ff90() {
   return (neuron0x180a9e0()*-0.185329);
}

double NNfunction_ss_uRuR::synapse0x182ffd0() {
   return (neuron0x180ad20()*0.147111);
}

double NNfunction_ss_uRuR::synapse0x1830010() {
   return (neuron0x180b060()*-0.530311);
}

double NNfunction_ss_uRuR::synapse0x1830050() {
   return (neuron0x180b3a0()*-0.613337);
}

double NNfunction_ss_uRuR::synapse0x1830090() {
   return (neuron0x180b6e0()*-1.13784);
}

double NNfunction_ss_uRuR::synapse0x181de40() {
   return (neuron0x180ba20()*-0.0379087);
}

double NNfunction_ss_uRuR::synapse0x181de80() {
   return (neuron0x180bf80()*0.421795);
}

double NNfunction_ss_uRuR::synapse0x18301e0() {
   return (neuron0x180c1a0()*-0.271179);
}

double NNfunction_ss_uRuR::synapse0x1830220() {
   return (neuron0x180c4e0()*-0.145989);
}

double NNfunction_ss_uRuR::synapse0x1830260() {
   return (neuron0x180c820()*0.490008);
}

double NNfunction_ss_uRuR::synapse0x18302a0() {
   return (neuron0x180cb60()*0.826432);
}

double NNfunction_ss_uRuR::synapse0x18302e0() {
   return (neuron0x180cea0()*0.0969451);
}

double NNfunction_ss_uRuR::synapse0x1830320() {
   return (neuron0x180d1e0()*-0.0311573);
}

double NNfunction_ss_uRuR::synapse0x18306a0() {
   return (neuron0x1808620()*0.0146121);
}

double NNfunction_ss_uRuR::synapse0x18306e0() {
   return (neuron0x1808960()*-0.150152);
}

double NNfunction_ss_uRuR::synapse0x1830720() {
   return (neuron0x1808ca0()*-0.145287);
}

double NNfunction_ss_uRuR::synapse0x1830760() {
   return (neuron0x1808fe0()*0.777519);
}

double NNfunction_ss_uRuR::synapse0x18307a0() {
   return (neuron0x1809320()*0.363243);
}

double NNfunction_ss_uRuR::synapse0x18307e0() {
   return (neuron0x1809660()*-0.153333);
}

double NNfunction_ss_uRuR::synapse0x1830820() {
   return (neuron0x18099a0()*0.134509);
}

double NNfunction_ss_uRuR::synapse0x1830860() {
   return (neuron0x1809ce0()*-0.14658);
}

double NNfunction_ss_uRuR::synapse0x18308a0() {
   return (neuron0x180a020()*-0.346456);
}

double NNfunction_ss_uRuR::synapse0x18308e0() {
   return (neuron0x180a360()*-0.178926);
}

double NNfunction_ss_uRuR::synapse0x1830920() {
   return (neuron0x180a6a0()*0.823712);
}

double NNfunction_ss_uRuR::synapse0x1830960() {
   return (neuron0x180a9e0()*-0.142332);
}

double NNfunction_ss_uRuR::synapse0x18309a0() {
   return (neuron0x180ad20()*0.435295);
}

double NNfunction_ss_uRuR::synapse0x18309e0() {
   return (neuron0x180b060()*-0.230045);
}

double NNfunction_ss_uRuR::synapse0x1830a20() {
   return (neuron0x180b3a0()*1.04995);
}

double NNfunction_ss_uRuR::synapse0x1830a60() {
   return (neuron0x180b6e0()*0.573957);
}

double NNfunction_ss_uRuR::synapse0x18304f0() {
   return (neuron0x180ba20()*0.115976);
}

double NNfunction_ss_uRuR::synapse0x1830530() {
   return (neuron0x180bf80()*2.1251);
}

double NNfunction_ss_uRuR::synapse0x1830bb0() {
   return (neuron0x180c1a0()*0.543861);
}

double NNfunction_ss_uRuR::synapse0x1830bf0() {
   return (neuron0x180c4e0()*0.436549);
}

double NNfunction_ss_uRuR::synapse0x1830c30() {
   return (neuron0x180c820()*-0.258853);
}

double NNfunction_ss_uRuR::synapse0x1830c70() {
   return (neuron0x180cb60()*0.31249);
}

double NNfunction_ss_uRuR::synapse0x1830cb0() {
   return (neuron0x180cea0()*0.426647);
}

double NNfunction_ss_uRuR::synapse0x1830cf0() {
   return (neuron0x180d1e0()*-0.975411);
}

double NNfunction_ss_uRuR::synapse0x1831070() {
   return (neuron0x1808620()*-0.0164267);
}

double NNfunction_ss_uRuR::synapse0x18310b0() {
   return (neuron0x1808960()*-0.339258);
}

double NNfunction_ss_uRuR::synapse0x18310f0() {
   return (neuron0x1808ca0()*-0.139083);
}

double NNfunction_ss_uRuR::synapse0x1831130() {
   return (neuron0x1808fe0()*-1.0166);
}

double NNfunction_ss_uRuR::synapse0x1831170() {
   return (neuron0x1809320()*-0.349169);
}

double NNfunction_ss_uRuR::synapse0x18311b0() {
   return (neuron0x1809660()*-0.217031);
}

double NNfunction_ss_uRuR::synapse0x18311f0() {
   return (neuron0x18099a0()*0.200684);
}

double NNfunction_ss_uRuR::synapse0x1831230() {
   return (neuron0x1809ce0()*0.220204);
}

double NNfunction_ss_uRuR::synapse0x1831270() {
   return (neuron0x180a020()*-0.902903);
}

double NNfunction_ss_uRuR::synapse0x18312b0() {
   return (neuron0x180a360()*1.0699);
}

double NNfunction_ss_uRuR::synapse0x18312f0() {
   return (neuron0x180a6a0()*0.442988);
}

double NNfunction_ss_uRuR::synapse0x1831330() {
   return (neuron0x180a9e0()*0.288524);
}

double NNfunction_ss_uRuR::synapse0x1831370() {
   return (neuron0x180ad20()*-0.467551);
}

double NNfunction_ss_uRuR::synapse0x18313b0() {
   return (neuron0x180b060()*-0.159166);
}

double NNfunction_ss_uRuR::synapse0x18313f0() {
   return (neuron0x180b3a0()*1.3995);
}

double NNfunction_ss_uRuR::synapse0x1831430() {
   return (neuron0x180b6e0()*-0.100147);
}

double NNfunction_ss_uRuR::synapse0x1830ec0() {
   return (neuron0x180ba20()*0.0978445);
}

double NNfunction_ss_uRuR::synapse0x1830f00() {
   return (neuron0x180bf80()*-1.06509);
}

double NNfunction_ss_uRuR::synapse0x1831580() {
   return (neuron0x180c1a0()*-0.0614516);
}

double NNfunction_ss_uRuR::synapse0x18315c0() {
   return (neuron0x180c4e0()*-0.18427);
}

double NNfunction_ss_uRuR::synapse0x1831600() {
   return (neuron0x180c820()*0.288645);
}

double NNfunction_ss_uRuR::synapse0x1831640() {
   return (neuron0x180cb60()*-0.480176);
}

double NNfunction_ss_uRuR::synapse0x1831680() {
   return (neuron0x180cea0()*0.556797);
}

double NNfunction_ss_uRuR::synapse0x18316c0() {
   return (neuron0x180d1e0()*-0.537162);
}

double NNfunction_ss_uRuR::synapse0x1831a40() {
   return (neuron0x1808620()*0.0125054);
}

double NNfunction_ss_uRuR::synapse0x1831a80() {
   return (neuron0x1808960()*0.00280025);
}

double NNfunction_ss_uRuR::synapse0x1831ac0() {
   return (neuron0x1808ca0()*-0.0035981);
}

double NNfunction_ss_uRuR::synapse0x1831b00() {
   return (neuron0x1808fe0()*-0.0310106);
}

double NNfunction_ss_uRuR::synapse0x1831b40() {
   return (neuron0x1809320()*0.0488883);
}

double NNfunction_ss_uRuR::synapse0x1831b80() {
   return (neuron0x1809660()*0.0159175);
}

double NNfunction_ss_uRuR::synapse0x1831bc0() {
   return (neuron0x18099a0()*0.131307);
}

double NNfunction_ss_uRuR::synapse0x1831c00() {
   return (neuron0x1809ce0()*0.0264195);
}

double NNfunction_ss_uRuR::synapse0x1831c40() {
   return (neuron0x180a020()*-0.0141406);
}

double NNfunction_ss_uRuR::synapse0x1831c80() {
   return (neuron0x180a360()*-0.0267992);
}

double NNfunction_ss_uRuR::synapse0x1831cc0() {
   return (neuron0x180a6a0()*-0.0273798);
}

double NNfunction_ss_uRuR::synapse0x1831d00() {
   return (neuron0x180a9e0()*-0.0249587);
}

double NNfunction_ss_uRuR::synapse0x1831d40() {
   return (neuron0x180ad20()*-0.00547715);
}

double NNfunction_ss_uRuR::synapse0x1831d80() {
   return (neuron0x180b060()*0.00781398);
}

double NNfunction_ss_uRuR::synapse0x1831dc0() {
   return (neuron0x180b3a0()*-0.639503);
}

double NNfunction_ss_uRuR::synapse0x1831e00() {
   return (neuron0x180b6e0()*0.0402767);
}

double NNfunction_ss_uRuR::synapse0x1831890() {
   return (neuron0x180ba20()*-0.0076777);
}

double NNfunction_ss_uRuR::synapse0x18318d0() {
   return (neuron0x180bf80()*-0.0027455);
}

double NNfunction_ss_uRuR::synapse0x1831f50() {
   return (neuron0x180c1a0()*-0.00197396);
}

double NNfunction_ss_uRuR::synapse0x1831f90() {
   return (neuron0x180c4e0()*-0.0154454);
}

double NNfunction_ss_uRuR::synapse0x1831fd0() {
   return (neuron0x180c820()*0.0108651);
}

double NNfunction_ss_uRuR::synapse0x1832010() {
   return (neuron0x180cb60()*-0.0113767);
}

double NNfunction_ss_uRuR::synapse0x1832050() {
   return (neuron0x180cea0()*0.00114595);
}

double NNfunction_ss_uRuR::synapse0x1832090() {
   return (neuron0x180d1e0()*-0.014636);
}

double NNfunction_ss_uRuR::synapse0x180e630() {
   return (neuron0x180d680()*0.95815);
}

double NNfunction_ss_uRuR::synapse0x180e670() {
   return (neuron0x180df90()*-0.094877);
}

double NNfunction_ss_uRuR::synapse0x180fb40() {
   return (neuron0x180ea70()*0.138194);
}

double NNfunction_ss_uRuR::synapse0x180fb80() {
   return (neuron0x15c8300()*0.425037);
}

double NNfunction_ss_uRuR::synapse0x1810510() {
   return (neuron0x180f890()*-0.166739);
}

double NNfunction_ss_uRuR::synapse0x1810550() {
   return (neuron0x1810260()*0.0385094);
}

double NNfunction_ss_uRuR::synapse0x18112e0() {
   return (neuron0x1811030()*0.0199238);
}

double NNfunction_ss_uRuR::synapse0x1811320() {
   return (neuron0x1811a00()*0.0559066);
}

double NNfunction_ss_uRuR::synapse0x1811cb0() {
   return (neuron0x18123d0()*0.577258);
}

double NNfunction_ss_uRuR::synapse0x1811cf0() {
   return (neuron0x1812eb0()*0.112734);
}

double NNfunction_ss_uRuR::synapse0x1812680() {
   return (neuron0x1813880()*0.115644);
}

double NNfunction_ss_uRuR::synapse0x18126c0() {
   return (neuron0x1810960()*1.66704);
}

double NNfunction_ss_uRuR::synapse0x1813160() {
   return (neuron0x1815430()*3.21617);
}

double NNfunction_ss_uRuR::synapse0x18131a0() {
   return (neuron0x1815e00()*-0.307967);
}

double NNfunction_ss_uRuR::synapse0x1813b30() {
   return (neuron0x18167d0()*-0.348654);
}

double NNfunction_ss_uRuR::synapse0x1813b70() {
   return (neuron0x18171a0()*0.0221133);
}

double NNfunction_ss_uRuR::synapse0x1810c10() {
   return (neuron0x1818fb0()*-0.473449);
}

double NNfunction_ss_uRuR::synapse0x1810c50() {
   return (neuron0x1819290()*0.0698064);
}

double NNfunction_ss_uRuR::synapse0x18156e0() {
   return (neuron0x1819c60()*-0.736829);
}

double NNfunction_ss_uRuR::synapse0x1815720() {
   return (neuron0x181a630()*-0.394724);
}

double NNfunction_ss_uRuR::synapse0x18160b0() {
   return (neuron0x181b000()*-0.402718);
}

double NNfunction_ss_uRuR::synapse0x18160f0() {
   return (neuron0x181b9d0()*1.07083);
}

double NNfunction_ss_uRuR::synapse0x1816a80() {
   return (neuron0x1814520()*-0.312883);
}

double NNfunction_ss_uRuR::synapse0x1816ac0() {
   return (neuron0x1814ef0()*0.228071);
}

double NNfunction_ss_uRuR::synapse0x1817450() {
   return (neuron0x181e760()*-0.107683);
}

double NNfunction_ss_uRuR::synapse0x1817490() {
   return (neuron0x181f130()*0.0864661);
}

double NNfunction_ss_uRuR::synapse0x180b5c0() {
   return (neuron0x181fb00()*-0.244436);
}

double NNfunction_ss_uRuR::synapse0x180b600() {
   return (neuron0x18204d0()*0.370525);
}

double NNfunction_ss_uRuR::synapse0x1819540() {
   return (neuron0x1820ea0()*4.22494);
}

double NNfunction_ss_uRuR::synapse0x1819580() {
   return (neuron0x1821870()*0.0179581);
}

double NNfunction_ss_uRuR::synapse0x1819f10() {
   return (neuron0x1822240()*-0.268972);
}

double NNfunction_ss_uRuR::synapse0x1819f50() {
   return (neuron0x1822c10()*0.0462376);
}

double NNfunction_ss_uRuR::synapse0x181a8e0() {
   return (neuron0x1818ca0()*0.192631);
}

double NNfunction_ss_uRuR::synapse0x181a920() {
   return (neuron0x18257f0()*-0.0433614);
}

double NNfunction_ss_uRuR::synapse0x181b2b0() {
   return (neuron0x18261c0()*-0.0287286);
}

double NNfunction_ss_uRuR::synapse0x181b2f0() {
   return (neuron0x1826b90()*-1.3511);
}

double NNfunction_ss_uRuR::synapse0x181bc80() {
   return (neuron0x1827560()*-0.532111);
}

double NNfunction_ss_uRuR::synapse0x181bcc0() {
   return (neuron0x1827f30()*0.15904);
}

double NNfunction_ss_uRuR::synapse0x18147d0() {
   return (neuron0x1828900()*0.00846708);
}

double NNfunction_ss_uRuR::synapse0x1814810() {
   return (neuron0x18292d0()*0.180668);
}

double NNfunction_ss_uRuR::synapse0x181e080() {
   return (neuron0x1829ca0()*0.228971);
}

double NNfunction_ss_uRuR::synapse0x181e0c0() {
   return (neuron0x182a880()*0.327695);
}

double NNfunction_ss_uRuR::synapse0x181ea10() {
   return (neuron0x182b250()*0.161363);
}

double NNfunction_ss_uRuR::synapse0x181ea50() {
   return (neuron0x181c0d0()*0.0618417);
}

double NNfunction_ss_uRuR::synapse0x181f3e0() {
   return (neuron0x181caa0()*-0.0149331);
}

double NNfunction_ss_uRuR::synapse0x181f420() {
   return (neuron0x181d470()*-0.40255);
}

double NNfunction_ss_uRuR::synapse0x181fdb0() {
   return (neuron0x182fab0()*-0.0419699);
}

double NNfunction_ss_uRuR::synapse0x181fdf0() {
   return (neuron0x1830360()*0.0304945);
}

double NNfunction_ss_uRuR::synapse0x1820780() {
   return (neuron0x1830d30()*0.0527265);
}

double NNfunction_ss_uRuR::synapse0x18207c0() {
   return (neuron0x1831700()*-1.04498);
}

double NNfunction_ss_uRuR::synapse0x1822ec0() {
   return (neuron0x180d680()*0.266849);
}

double NNfunction_ss_uRuR::synapse0x1822f00() {
   return (neuron0x180df90()*0.386469);
}

double NNfunction_ss_uRuR::synapse0x1818480() {
   return (neuron0x180ea70()*0.335607);
}

double NNfunction_ss_uRuR::synapse0x18184c0() {
   return (neuron0x15c8300()*0.195466);
}

double NNfunction_ss_uRuR::synapse0x1825aa0() {
   return (neuron0x180f890()*-0.256705);
}

double NNfunction_ss_uRuR::synapse0x1825ae0() {
   return (neuron0x1810260()*0.287885);
}

double NNfunction_ss_uRuR::synapse0x1826470() {
   return (neuron0x1811030()*0.45376);
}

double NNfunction_ss_uRuR::synapse0x18264b0() {
   return (neuron0x1811a00()*-0.0659151);
}

double NNfunction_ss_uRuR::synapse0x1826e40() {
   return (neuron0x18123d0()*-0.148296);
}

double NNfunction_ss_uRuR::synapse0x1826e80() {
   return (neuron0x1812eb0()*0.453895);
}

double NNfunction_ss_uRuR::synapse0x1827810() {
   return (neuron0x1813880()*-0.155082);
}

double NNfunction_ss_uRuR::synapse0x1827850() {
   return (neuron0x1810960()*-0.103615);
}

double NNfunction_ss_uRuR::synapse0x18281e0() {
   return (neuron0x1815430()*-0.168549);
}

double NNfunction_ss_uRuR::synapse0x1828220() {
   return (neuron0x1815e00()*-0.189878);
}

double NNfunction_ss_uRuR::synapse0x1828bb0() {
   return (neuron0x18167d0()*-0.100275);
}

double NNfunction_ss_uRuR::synapse0x1828bf0() {
   return (neuron0x18171a0()*0.106962);
}

double NNfunction_ss_uRuR::synapse0x1829580() {
   return (neuron0x1818fb0()*-0.00635013);
}

double NNfunction_ss_uRuR::synapse0x18295c0() {
   return (neuron0x1819290()*0.339833);
}

double NNfunction_ss_uRuR::synapse0x1829f50() {
   return (neuron0x1819c60()*0.243289);
}

double NNfunction_ss_uRuR::synapse0x1829f90() {
   return (neuron0x181a630()*-0.128864);
}

double NNfunction_ss_uRuR::synapse0x182ab30() {
   return (neuron0x181b000()*-0.0169098);
}

double NNfunction_ss_uRuR::synapse0x182ab70() {
   return (neuron0x181b9d0()*0.538446);
}

double NNfunction_ss_uRuR::synapse0x182b500() {
   return (neuron0x1814520()*0.437592);
}

double NNfunction_ss_uRuR::synapse0x182b540() {
   return (neuron0x1814ef0()*-0.145593);
}

double NNfunction_ss_uRuR::synapse0x181c380() {
   return (neuron0x181e760()*-0.476271);
}

double NNfunction_ss_uRuR::synapse0x181c3c0() {
   return (neuron0x181f130()*0.121605);
}

double NNfunction_ss_uRuR::synapse0x181cd50() {
   return (neuron0x181fb00()*0.334877);
}

double NNfunction_ss_uRuR::synapse0x181cd90() {
   return (neuron0x18204d0()*0.503791);
}

double NNfunction_ss_uRuR::synapse0x181d720() {
   return (neuron0x1820ea0()*0.223067);
}

double NNfunction_ss_uRuR::synapse0x181d760() {
   return (neuron0x1821870()*-0.280822);
}

double NNfunction_ss_uRuR::synapse0x182fc40() {
   return (neuron0x1822240()*0.497259);
}

double NNfunction_ss_uRuR::synapse0x182fc80() {
   return (neuron0x1822c10()*-0.0557584);
}

double NNfunction_ss_uRuR::synapse0x1830610() {
   return (neuron0x1818ca0()*0.171052);
}

double NNfunction_ss_uRuR::synapse0x1830650() {
   return (neuron0x18257f0()*0.279947);
}

double NNfunction_ss_uRuR::synapse0x1830fe0() {
   return (neuron0x18261c0()*0.20247);
}

double NNfunction_ss_uRuR::synapse0x1831020() {
   return (neuron0x1826b90()*0.135946);
}

double NNfunction_ss_uRuR::synapse0x18319b0() {
   return (neuron0x1827560()*-0.526763);
}

double NNfunction_ss_uRuR::synapse0x18319f0() {
   return (neuron0x1827f30()*0.94865);
}

double NNfunction_ss_uRuR::synapse0x180d8a0() {
   return (neuron0x1828900()*0.430985);
}

double NNfunction_ss_uRuR::synapse0x180d8e0() {
   return (neuron0x18292d0()*0.047325);
}

double NNfunction_ss_uRuR::synapse0x1821150() {
   return (neuron0x1829ca0()*0.643439);
}

double NNfunction_ss_uRuR::synapse0x1821190() {
   return (neuron0x182a880()*0.184375);
}

double NNfunction_ss_uRuR::synapse0x18320d0() {
   return (neuron0x182b250()*0.395563);
}

double NNfunction_ss_uRuR::synapse0x1832110() {
   return (neuron0x181c0d0()*0.103358);
}

double NNfunction_ss_uRuR::synapse0x1832150() {
   return (neuron0x181caa0()*-0.333639);
}

double NNfunction_ss_uRuR::synapse0x1832190() {
   return (neuron0x181d470()*0.215613);
}

double NNfunction_ss_uRuR::synapse0x1839040() {
   return (neuron0x182fab0()*0.231398);
}

double NNfunction_ss_uRuR::synapse0x1839080() {
   return (neuron0x1830360()*0.450211);
}

double NNfunction_ss_uRuR::synapse0x18390c0() {
   return (neuron0x1830d30()*0.414884);
}

double NNfunction_ss_uRuR::synapse0x1839100() {
   return (neuron0x1831700()*-0.0143129);
}

double NNfunction_ss_uRuR::synapse0x1839480() {
   return (neuron0x180d680()*0.0508032);
}

double NNfunction_ss_uRuR::synapse0x18394c0() {
   return (neuron0x180df90()*-0.00404608);
}

double NNfunction_ss_uRuR::synapse0x1839500() {
   return (neuron0x180ea70()*0.0146116);
}

double NNfunction_ss_uRuR::synapse0x1839540() {
   return (neuron0x15c8300()*0.00263514);
}

double NNfunction_ss_uRuR::synapse0x1839580() {
   return (neuron0x180f890()*-0.00588281);
}

double NNfunction_ss_uRuR::synapse0x18395c0() {
   return (neuron0x1810260()*2.95542e-05);
}

double NNfunction_ss_uRuR::synapse0x1839600() {
   return (neuron0x1811030()*0.00484212);
}

double NNfunction_ss_uRuR::synapse0x1839640() {
   return (neuron0x1811a00()*0.0047432);
}

double NNfunction_ss_uRuR::synapse0x1839680() {
   return (neuron0x18123d0()*-0.399565);
}

double NNfunction_ss_uRuR::synapse0x18396c0() {
   return (neuron0x1812eb0()*0.000103612);
}

double NNfunction_ss_uRuR::synapse0x1839700() {
   return (neuron0x1813880()*-5.00862e-06);
}

double NNfunction_ss_uRuR::synapse0x1839740() {
   return (neuron0x1810960()*-0.414921);
}

double NNfunction_ss_uRuR::synapse0x1839780() {
   return (neuron0x1815430()*-0.325326);
}

double NNfunction_ss_uRuR::synapse0x18397c0() {
   return (neuron0x1815e00()*0.0221535);
}

double NNfunction_ss_uRuR::synapse0x1839800() {
   return (neuron0x18167d0()*-0.0433835);
}

double NNfunction_ss_uRuR::synapse0x1839840() {
   return (neuron0x18171a0()*-0.0110041);
}

double NNfunction_ss_uRuR::synapse0x18392d0() {
   return (neuron0x1818fb0()*-0.0295631);
}

double NNfunction_ss_uRuR::synapse0x1839310() {
   return (neuron0x1819290()*-0.00151096);
}

double NNfunction_ss_uRuR::synapse0x1839990() {
   return (neuron0x1819c60()*-0.0680176);
}

double NNfunction_ss_uRuR::synapse0x18399d0() {
   return (neuron0x181a630()*-0.0136842);
}

double NNfunction_ss_uRuR::synapse0x1839a10() {
   return (neuron0x181b000()*1.7126);
}

double NNfunction_ss_uRuR::synapse0x1839a50() {
   return (neuron0x181b9d0()*-0.623036);
}

double NNfunction_ss_uRuR::synapse0x1839a90() {
   return (neuron0x1814520()*0.0141459);
}

double NNfunction_ss_uRuR::synapse0x1839ad0() {
   return (neuron0x1814ef0()*-0.0012376);
}

double NNfunction_ss_uRuR::synapse0x1839b10() {
   return (neuron0x181e760()*-0.00152055);
}

double NNfunction_ss_uRuR::synapse0x1839b50() {
   return (neuron0x181f130()*0.0180152);
}

double NNfunction_ss_uRuR::synapse0x1839b90() {
   return (neuron0x181fb00()*0.15463);
}

double NNfunction_ss_uRuR::synapse0x1839bd0() {
   return (neuron0x18204d0()*0.0121237);
}

double NNfunction_ss_uRuR::synapse0x1839c10() {
   return (neuron0x1820ea0()*-0.173715);
}

double NNfunction_ss_uRuR::synapse0x1839c50() {
   return (neuron0x1821870()*0.00252894);
}

double NNfunction_ss_uRuR::synapse0x1839c90() {
   return (neuron0x1822240()*-0.00792636);
}

double NNfunction_ss_uRuR::synapse0x1839cd0() {
   return (neuron0x1822c10()*-0.00980221);
}

double NNfunction_ss_uRuR::synapse0x1839880() {
   return (neuron0x1818ca0()*0.0031);
}

double NNfunction_ss_uRuR::synapse0x18398c0() {
   return (neuron0x18257f0()*-0.00525029);
}

double NNfunction_ss_uRuR::synapse0x1839900() {
   return (neuron0x18261c0()*-0.00779577);
}

double NNfunction_ss_uRuR::synapse0x1839940() {
   return (neuron0x1826b90()*0.414743);
}

double NNfunction_ss_uRuR::synapse0x1839f20() {
   return (neuron0x1827560()*0.00239559);
}

double NNfunction_ss_uRuR::synapse0x1839f60() {
   return (neuron0x1827f30()*0.00343394);
}

double NNfunction_ss_uRuR::synapse0x1839fa0() {
   return (neuron0x1828900()*0.0248183);
}

double NNfunction_ss_uRuR::synapse0x1839fe0() {
   return (neuron0x18292d0()*0.0074733);
}

double NNfunction_ss_uRuR::synapse0x183a020() {
   return (neuron0x1829ca0()*-0.00228373);
}

double NNfunction_ss_uRuR::synapse0x183a060() {
   return (neuron0x182a880()*0.0224558);
}

double NNfunction_ss_uRuR::synapse0x183a0a0() {
   return (neuron0x182b250()*0.0071838);
}

double NNfunction_ss_uRuR::synapse0x183a0e0() {
   return (neuron0x181c0d0()*0.00292133);
}

double NNfunction_ss_uRuR::synapse0x183a120() {
   return (neuron0x181caa0()*-0.00471088);
}

double NNfunction_ss_uRuR::synapse0x183a160() {
   return (neuron0x181d470()*0.00312003);
}

double NNfunction_ss_uRuR::synapse0x183a1a0() {
   return (neuron0x182fab0()*-0.00749066);
}

double NNfunction_ss_uRuR::synapse0x183a1e0() {
   return (neuron0x1830360()*-0.0142424);
}

double NNfunction_ss_uRuR::synapse0x183a220() {
   return (neuron0x1830d30()*0.00967147);
}

double NNfunction_ss_uRuR::synapse0x183a260() {
   return (neuron0x1831700()*2.30218);
}

double NNfunction_ss_uRuR::synapse0x183a5e0() {
   return (neuron0x180d680()*1.64307);
}

double NNfunction_ss_uRuR::synapse0x183a620() {
   return (neuron0x180df90()*-1.35189);
}

double NNfunction_ss_uRuR::synapse0x183a660() {
   return (neuron0x180ea70()*1.16516);
}

double NNfunction_ss_uRuR::synapse0x183a6a0() {
   return (neuron0x15c8300()*2.51674);
}

double NNfunction_ss_uRuR::synapse0x183a6e0() {
   return (neuron0x180f890()*-0.916589);
}

double NNfunction_ss_uRuR::synapse0x183a720() {
   return (neuron0x1810260()*1.03614);
}

double NNfunction_ss_uRuR::synapse0x183a760() {
   return (neuron0x1811030()*1.31261);
}

double NNfunction_ss_uRuR::synapse0x183a7a0() {
   return (neuron0x1811a00()*1.19888);
}

double NNfunction_ss_uRuR::synapse0x183a7e0() {
   return (neuron0x18123d0()*3.90399);
}

double NNfunction_ss_uRuR::synapse0x183a820() {
   return (neuron0x1812eb0()*1.28624);
}

double NNfunction_ss_uRuR::synapse0x183a860() {
   return (neuron0x1813880()*-1.00928);
}

double NNfunction_ss_uRuR::synapse0x183a8a0() {
   return (neuron0x1810960()*7.04344);
}

double NNfunction_ss_uRuR::synapse0x183a8e0() {
   return (neuron0x1815430()*6.14933);
}

double NNfunction_ss_uRuR::synapse0x183a920() {
   return (neuron0x1815e00()*-3.65243);
}

double NNfunction_ss_uRuR::synapse0x183a960() {
   return (neuron0x18167d0()*-2.62672);
}

double NNfunction_ss_uRuR::synapse0x183a9a0() {
   return (neuron0x18171a0()*1.08605);
}

double NNfunction_ss_uRuR::synapse0x183a430() {
   return (neuron0x1818fb0()*-3.34427);
}

double NNfunction_ss_uRuR::synapse0x183a470() {
   return (neuron0x1819290()*1.49188);
}

double NNfunction_ss_uRuR::synapse0x183aaf0() {
   return (neuron0x1819c60()*-2.06073);
}

double NNfunction_ss_uRuR::synapse0x183ab30() {
   return (neuron0x181a630()*-3.30867);
}

double NNfunction_ss_uRuR::synapse0x183ab70() {
   return (neuron0x181b000()*-3.13894);
}

double NNfunction_ss_uRuR::synapse0x183abb0() {
   return (neuron0x181b9d0()*3.13483);
}

double NNfunction_ss_uRuR::synapse0x183abf0() {
   return (neuron0x1814520()*2.60942);
}

double NNfunction_ss_uRuR::synapse0x183ac30() {
   return (neuron0x1814ef0()*1.75441);
}

double NNfunction_ss_uRuR::synapse0x183ac70() {
   return (neuron0x181e760()*-1.99147);
}

double NNfunction_ss_uRuR::synapse0x183acb0() {
   return (neuron0x181f130()*-2.25142);
}

double NNfunction_ss_uRuR::synapse0x183acf0() {
   return (neuron0x181fb00()*0.660275);
}

double NNfunction_ss_uRuR::synapse0x183ad30() {
   return (neuron0x18204d0()*1.45794);
}

double NNfunction_ss_uRuR::synapse0x183ad70() {
   return (neuron0x1820ea0()*-5.16083);
}

double NNfunction_ss_uRuR::synapse0x183adb0() {
   return (neuron0x1821870()*1.29385);
}

double NNfunction_ss_uRuR::synapse0x183adf0() {
   return (neuron0x1822240()*-2.40188);
}

double NNfunction_ss_uRuR::synapse0x183ae30() {
   return (neuron0x1822c10()*1.1256);
}

double NNfunction_ss_uRuR::synapse0x183a9e0() {
   return (neuron0x1818ca0()*1.50977);
}

double NNfunction_ss_uRuR::synapse0x183aa20() {
   return (neuron0x18257f0()*-1.57592);
}

double NNfunction_ss_uRuR::synapse0x183aa60() {
   return (neuron0x18261c0()*1.1789);
}

double NNfunction_ss_uRuR::synapse0x183aaa0() {
   return (neuron0x1826b90()*-8.33461);
}

double NNfunction_ss_uRuR::synapse0x183b080() {
   return (neuron0x1827560()*-2.74285);
}

double NNfunction_ss_uRuR::synapse0x183b0c0() {
   return (neuron0x1827f30()*2.22794);
}

double NNfunction_ss_uRuR::synapse0x183b100() {
   return (neuron0x1828900()*3.15722);
}

double NNfunction_ss_uRuR::synapse0x183b140() {
   return (neuron0x18292d0()*0.119452);
}

double NNfunction_ss_uRuR::synapse0x183b180() {
   return (neuron0x1829ca0()*1.45218);
}

double NNfunction_ss_uRuR::synapse0x183b1c0() {
   return (neuron0x182a880()*2.38146);
}

double NNfunction_ss_uRuR::synapse0x183b200() {
   return (neuron0x182b250()*1.55232);
}

double NNfunction_ss_uRuR::synapse0x183b240() {
   return (neuron0x181c0d0()*1.22892);
}

double NNfunction_ss_uRuR::synapse0x183b280() {
   return (neuron0x181caa0()*-1.69152);
}

double NNfunction_ss_uRuR::synapse0x183b2c0() {
   return (neuron0x181d470()*-2.46512);
}

double NNfunction_ss_uRuR::synapse0x183b300() {
   return (neuron0x182fab0()*1.18046);
}

double NNfunction_ss_uRuR::synapse0x183b340() {
   return (neuron0x1830360()*1.21219);
}

double NNfunction_ss_uRuR::synapse0x183b380() {
   return (neuron0x1830d30()*-1.3662);
}

double NNfunction_ss_uRuR::synapse0x183b3c0() {
   return (neuron0x1831700()*-2.10033);
}

double NNfunction_ss_uRuR::synapse0x183b740() {
   return (neuron0x180d680()*-1.01062);
}

double NNfunction_ss_uRuR::synapse0x183b780() {
   return (neuron0x180df90()*-1.20257);
}

double NNfunction_ss_uRuR::synapse0x183b7c0() {
   return (neuron0x180ea70()*0.773532);
}

double NNfunction_ss_uRuR::synapse0x183b800() {
   return (neuron0x15c8300()*-0.0932515);
}

double NNfunction_ss_uRuR::synapse0x183b840() {
   return (neuron0x180f890()*-1.37062);
}

double NNfunction_ss_uRuR::synapse0x183b880() {
   return (neuron0x1810260()*0.466796);
}

double NNfunction_ss_uRuR::synapse0x183b8c0() {
   return (neuron0x1811030()*0.89133);
}

double NNfunction_ss_uRuR::synapse0x183b900() {
   return (neuron0x1811a00()*1.29266);
}

double NNfunction_ss_uRuR::synapse0x183b940() {
   return (neuron0x18123d0()*-11.4219);
}

double NNfunction_ss_uRuR::synapse0x183b980() {
   return (neuron0x1812eb0()*1.50305);
}

double NNfunction_ss_uRuR::synapse0x183b9c0() {
   return (neuron0x1813880()*0.654813);
}

double NNfunction_ss_uRuR::synapse0x183ba00() {
   return (neuron0x1810960()*3.06776);
}

double NNfunction_ss_uRuR::synapse0x183ba40() {
   return (neuron0x1815430()*0.8078);
}

double NNfunction_ss_uRuR::synapse0x183ba80() {
   return (neuron0x1815e00()*0.432427);
}

double NNfunction_ss_uRuR::synapse0x183bac0() {
   return (neuron0x18167d0()*1.00501);
}

double NNfunction_ss_uRuR::synapse0x183bb00() {
   return (neuron0x18171a0()*1.10884);
}

double NNfunction_ss_uRuR::synapse0x183b590() {
   return (neuron0x1818fb0()*-1.31806);
}

double NNfunction_ss_uRuR::synapse0x183b5d0() {
   return (neuron0x1819290()*1.03924);
}

double NNfunction_ss_uRuR::synapse0x183bc50() {
   return (neuron0x1819c60()*0.2565);
}

double NNfunction_ss_uRuR::synapse0x183bc90() {
   return (neuron0x181a630()*-0.494365);
}

double NNfunction_ss_uRuR::synapse0x183bcd0() {
   return (neuron0x181b000()*-0.344363);
}

double NNfunction_ss_uRuR::synapse0x183bd10() {
   return (neuron0x181b9d0()*0.843956);
}

double NNfunction_ss_uRuR::synapse0x183bd50() {
   return (neuron0x1814520()*0.758306);
}

double NNfunction_ss_uRuR::synapse0x183bd90() {
   return (neuron0x1814ef0()*-0.151314);
}

double NNfunction_ss_uRuR::synapse0x183bdd0() {
   return (neuron0x181e760()*-1.66266);
}

double NNfunction_ss_uRuR::synapse0x183be10() {
   return (neuron0x181f130()*-0.0415335);
}

double NNfunction_ss_uRuR::synapse0x183be50() {
   return (neuron0x181fb00()*1.03743);
}

double NNfunction_ss_uRuR::synapse0x183be90() {
   return (neuron0x18204d0()*2.3657);
}

double NNfunction_ss_uRuR::synapse0x183bed0() {
   return (neuron0x1820ea0()*-1.71778);
}

double NNfunction_ss_uRuR::synapse0x183bf10() {
   return (neuron0x1821870()*1.08672);
}

double NNfunction_ss_uRuR::synapse0x183bf50() {
   return (neuron0x1822240()*-0.848312);
}

double NNfunction_ss_uRuR::synapse0x183bf90() {
   return (neuron0x1822c10()*-0.6876);
}

double NNfunction_ss_uRuR::synapse0x183bb40() {
   return (neuron0x1818ca0()*1.06029);
}

double NNfunction_ss_uRuR::synapse0x183bb80() {
   return (neuron0x18257f0()*-1.30834);
}

double NNfunction_ss_uRuR::synapse0x183bbc0() {
   return (neuron0x18261c0()*0.864674);
}

double NNfunction_ss_uRuR::synapse0x183bc00() {
   return (neuron0x1826b90()*8.65703);
}

double NNfunction_ss_uRuR::synapse0x183c1e0() {
   return (neuron0x1827560()*0.49022);
}

double NNfunction_ss_uRuR::synapse0x183c220() {
   return (neuron0x1827f30()*1.36218);
}

double NNfunction_ss_uRuR::synapse0x183c260() {
   return (neuron0x1828900()*0.658596);
}

double NNfunction_ss_uRuR::synapse0x183c2a0() {
   return (neuron0x18292d0()*1.39993);
}

double NNfunction_ss_uRuR::synapse0x183c2e0() {
   return (neuron0x1829ca0()*0.123649);
}

double NNfunction_ss_uRuR::synapse0x183c320() {
   return (neuron0x182a880()*-0.302716);
}

double NNfunction_ss_uRuR::synapse0x183c360() {
   return (neuron0x182b250()*1.31569);
}

double NNfunction_ss_uRuR::synapse0x183c3a0() {
   return (neuron0x181c0d0()*1.55622);
}

double NNfunction_ss_uRuR::synapse0x183c3e0() {
   return (neuron0x181caa0()*-0.307378);
}

double NNfunction_ss_uRuR::synapse0x183c420() {
   return (neuron0x181d470()*-0.270542);
}

double NNfunction_ss_uRuR::synapse0x183c460() {
   return (neuron0x182fab0()*0.123393);
}

double NNfunction_ss_uRuR::synapse0x183c4a0() {
   return (neuron0x1830360()*0.97982);
}

double NNfunction_ss_uRuR::synapse0x183c4e0() {
   return (neuron0x1830d30()*-1.09382);
}

double NNfunction_ss_uRuR::synapse0x183c520() {
   return (neuron0x1831700()*0.395701);
}

double NNfunction_ss_uRuR::synapse0x180d640() {
   return (neuron0x1838900()*-6.61689);
}

double NNfunction_ss_uRuR::synapse0x183c780() {
   return (neuron0x1838ca0()*1.07436);
}

double NNfunction_ss_uRuR::synapse0x183c7c0() {
   return (neuron0x1839140()*6.94784);
}

double NNfunction_ss_uRuR::synapse0x183c800() {
   return (neuron0x183a2a0()*-12.0596);
}

double NNfunction_ss_uRuR::synapse0x183c840() {
   return (neuron0x183b400()*9.64414);
}

