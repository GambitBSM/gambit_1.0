#include "NNfunction_ss_cLuR.h"
#include <cmath>

double NNfunction_ss_cLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9877)/15.029;
   input1 = (in1 - 45.63)/768.436;
   input2 = (in2 - 376.466)/481.105;
   input3 = (in3 - 240.36)/624.422;
   input4 = (in4 - 750.683)/714.979;
   input5 = (in5 - 656.259)/689.32;
   input6 = (in6 - 658.979)/689.432;
   input7 = (in7 - 656.565)/686.834;
   input8 = (in8 - 647.934)/698.277;
   input9 = (in9 - 638.715)/686.291;
   input10 = (in10 - 655.048)/712.002;
   input11 = (in11 - 670.747)/587.87;
   input12 = (in12 - 536.762)/341.685;
   input13 = (in13 - 517.569)/363.554;
   input14 = (in14 - 545.871)/347.314;
   input15 = (in15 - 670.236)/569.065;
   input16 = (in16 - 468.085)/390.068;
   input17 = (in17 - 683.288)/610.71;
   input18 = (in18 - 680.179)/616.392;
   input19 = (in19 - 682.202)/601.004;
   input20 = (in20 - -191.123)/400.19;
   input21 = (in21 - -245.484)/886.274;
   input22 = (in22 - 2.29009)/890.146;
   input23 = (in23 - -24.3759)/498.796;
   switch(index) {
     case 0:
         return neuron0x29ca140();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.9877)/15.029;
   input1 = (input[1] - 45.63)/768.436;
   input2 = (input[2] - 376.466)/481.105;
   input3 = (input[3] - 240.36)/624.422;
   input4 = (input[4] - 750.683)/714.979;
   input5 = (input[5] - 656.259)/689.32;
   input6 = (input[6] - 658.979)/689.432;
   input7 = (input[7] - 656.565)/686.834;
   input8 = (input[8] - 647.934)/698.277;
   input9 = (input[9] - 638.715)/686.291;
   input10 = (input[10] - 655.048)/712.002;
   input11 = (input[11] - 670.747)/587.87;
   input12 = (input[12] - 536.762)/341.685;
   input13 = (input[13] - 517.569)/363.554;
   input14 = (input[14] - 545.871)/347.314;
   input15 = (input[15] - 670.236)/569.065;
   input16 = (input[16] - 468.085)/390.068;
   input17 = (input[17] - 683.288)/610.71;
   input18 = (input[18] - 680.179)/616.392;
   input19 = (input[19] - 682.202)/601.004;
   input20 = (input[20] - -191.123)/400.19;
   input21 = (input[21] - -245.484)/886.274;
   input22 = (input[22] - 2.29009)/890.146;
   input23 = (input[23] - -24.3759)/498.796;
   switch(index) {
     case 0:
         return neuron0x29ca140();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuR::neuron0x2996230() {
   return input0;
}

double NNfunction_ss_cLuR::neuron0x2996570() {
   return input1;
}

double NNfunction_ss_cLuR::neuron0x29968b0() {
   return input2;
}

double NNfunction_ss_cLuR::neuron0x2996bf0() {
   return input3;
}

double NNfunction_ss_cLuR::neuron0x2996f30() {
   return input4;
}

double NNfunction_ss_cLuR::neuron0x2997270() {
   return input5;
}

double NNfunction_ss_cLuR::neuron0x29975b0() {
   return input6;
}

double NNfunction_ss_cLuR::neuron0x29978f0() {
   return input7;
}

double NNfunction_ss_cLuR::neuron0x2997c30() {
   return input8;
}

double NNfunction_ss_cLuR::neuron0x2997f70() {
   return input9;
}

double NNfunction_ss_cLuR::neuron0x29982b0() {
   return input10;
}

double NNfunction_ss_cLuR::neuron0x29985f0() {
   return input11;
}

double NNfunction_ss_cLuR::neuron0x2998930() {
   return input12;
}

double NNfunction_ss_cLuR::neuron0x2998c70() {
   return input13;
}

double NNfunction_ss_cLuR::neuron0x2998fb0() {
   return input14;
}

double NNfunction_ss_cLuR::neuron0x29992f0() {
   return input15;
}

double NNfunction_ss_cLuR::neuron0x2999630() {
   return input16;
}

double NNfunction_ss_cLuR::neuron0x2999b90() {
   return input17;
}

double NNfunction_ss_cLuR::neuron0x2999db0() {
   return input18;
}

double NNfunction_ss_cLuR::neuron0x299a0f0() {
   return input19;
}

double NNfunction_ss_cLuR::neuron0x299a430() {
   return input20;
}

double NNfunction_ss_cLuR::neuron0x299a770() {
   return input21;
}

double NNfunction_ss_cLuR::neuron0x299aab0() {
   return input22;
}

double NNfunction_ss_cLuR::neuron0x299adf0() {
   return input23;
}

double NNfunction_ss_cLuR::input0x299b260() {
   double input = 0.198437;
   input += synapse0x29960f0();
   input += synapse0x2996130();
   input += synapse0x299b510();
   input += synapse0x299b550();
   input += synapse0x299b590();
   input += synapse0x299b5d0();
   input += synapse0x299b610();
   input += synapse0x299b650();
   input += synapse0x299b690();
   input += synapse0x299b6d0();
   input += synapse0x299b710();
   input += synapse0x299b750();
   input += synapse0x299b790();
   input += synapse0x299b7d0();
   input += synapse0x299b810();
   input += synapse0x299b850();
   input += synapse0x2996060();
   input += synapse0x29960a0();
   input += synapse0x2751450();
   input += synapse0x2751490();
   input += synapse0x299bab0();
   input += synapse0x299baf0();
   input += synapse0x299bb30();
   input += synapse0x299bb70();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299b260() {
   double input = input0x299b260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299bbb0() {
   double input = 0.223449;
   input += synapse0x299bef0();
   input += synapse0x299bf30();
   input += synapse0x299bf70();
   input += synapse0x299bfb0();
   input += synapse0x299bff0();
   input += synapse0x299c030();
   input += synapse0x299c070();
   input += synapse0x299c0b0();
   input += synapse0x299c0f0();
   input += synapse0x299b9a0();
   input += synapse0x299b9e0();
   input += synapse0x299ba20();
   input += synapse0x299ba60();
   input += synapse0x299c340();
   input += synapse0x299c380();
   input += synapse0x299c3c0();
   input += synapse0x299bd40();
   input += synapse0x299bd80();
   input += synapse0x299c510();
   input += synapse0x299c550();
   input += synapse0x299c590();
   input += synapse0x299c5d0();
   input += synapse0x299c610();
   input += synapse0x299c650();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299bbb0() {
   double input = input0x299bbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299c690() {
   double input = 1.71763;
   input += synapse0x299c9d0();
   input += synapse0x299ca10();
   input += synapse0x299ca50();
   input += synapse0x299ca90();
   input += synapse0x299cad0();
   input += synapse0x299cb10();
   input += synapse0x299cb50();
   input += synapse0x299cb90();
   input += synapse0x299cbd0();
   input += synapse0x299cc10();
   input += synapse0x299cc50();
   input += synapse0x299cc90();
   input += synapse0x299ccd0();
   input += synapse0x299cd10();
   input += synapse0x299cd50();
   input += synapse0x299cd90();
   input += synapse0x299c820();
   input += synapse0x299c860();
   input += synapse0x27505a0();
   input += synapse0x275f3a0();
   input += synapse0x275f3e0();
   input += synapse0x29852c0();
   input += synapse0x2985300();
   input += synapse0x2985340();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299c690() {
   double input = input0x299c690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299c130() {
   double input = 1.09211;
   input += synapse0x275fc20();
   input += synapse0x299c2c0();
   input += synapse0x299c300();
   input += synapse0x299cee0();
   input += synapse0x299cf20();
   input += synapse0x299cf60();
   input += synapse0x299cfa0();
   input += synapse0x299cfe0();
   input += synapse0x299d020();
   input += synapse0x299d060();
   input += synapse0x299d0a0();
   input += synapse0x299d0e0();
   input += synapse0x299d120();
   input += synapse0x299d160();
   input += synapse0x299d1a0();
   input += synapse0x299d1e0();
   input += synapse0x2996170();
   input += synapse0x29961b0();
   input += synapse0x29961f0();
   input += synapse0x299d330();
   input += synapse0x299d370();
   input += synapse0x299d3b0();
   input += synapse0x299d3f0();
   input += synapse0x299d430();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299c130() {
   double input = input0x299c130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299d470() {
   double input = 0.648842;
   input += synapse0x299d7b0();
   input += synapse0x299d7f0();
   input += synapse0x299d830();
   input += synapse0x299d870();
   input += synapse0x299d8b0();
   input += synapse0x299d8f0();
   input += synapse0x299d930();
   input += synapse0x299d970();
   input += synapse0x299d9b0();
   input += synapse0x299d9f0();
   input += synapse0x299da30();
   input += synapse0x299da70();
   input += synapse0x299dab0();
   input += synapse0x299daf0();
   input += synapse0x299db30();
   input += synapse0x299db70();
   input += synapse0x299d600();
   input += synapse0x299d640();
   input += synapse0x299dcc0();
   input += synapse0x299dd00();
   input += synapse0x299dd40();
   input += synapse0x299dd80();
   input += synapse0x299ddc0();
   input += synapse0x299de00();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299d470() {
   double input = input0x299d470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299de40() {
   double input = 0.157314;
   input += synapse0x299e180();
   input += synapse0x299e1c0();
   input += synapse0x299e200();
   input += synapse0x299e240();
   input += synapse0x299e280();
   input += synapse0x299e2c0();
   input += synapse0x299e300();
   input += synapse0x299e340();
   input += synapse0x299e380();
   input += synapse0x275f6f0();
   input += synapse0x275f730();
   input += synapse0x275f770();
   input += synapse0x275f7b0();
   input += synapse0x275f7f0();
   input += synapse0x275f830();
   input += synapse0x275f870();
   input += synapse0x299dfd0();
   input += synapse0x299e010();
   input += synapse0x275f9c0();
   input += synapse0x275fa00();
   input += synapse0x275fa40();
   input += synapse0x275fa80();
   input += synapse0x275fac0();
   input += synapse0x299ebd0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299de40() {
   double input = input0x299de40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299ec10() {
   double input = 0.626237;
   input += synapse0x299ef50();
   input += synapse0x299ef90();
   input += synapse0x299efd0();
   input += synapse0x299f010();
   input += synapse0x299f050();
   input += synapse0x299f090();
   input += synapse0x299f0d0();
   input += synapse0x299f110();
   input += synapse0x299f150();
   input += synapse0x299f190();
   input += synapse0x299f1d0();
   input += synapse0x299f210();
   input += synapse0x299f250();
   input += synapse0x299f290();
   input += synapse0x299f2d0();
   input += synapse0x299f310();
   input += synapse0x299eda0();
   input += synapse0x299ede0();
   input += synapse0x299f460();
   input += synapse0x299f4a0();
   input += synapse0x299f4e0();
   input += synapse0x299f520();
   input += synapse0x299f560();
   input += synapse0x299f5a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299ec10() {
   double input = input0x299ec10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299f5e0() {
   double input = -1.46653;
   input += synapse0x299f920();
   input += synapse0x299f960();
   input += synapse0x299f9a0();
   input += synapse0x299f9e0();
   input += synapse0x299fa20();
   input += synapse0x299fa60();
   input += synapse0x299faa0();
   input += synapse0x299fae0();
   input += synapse0x299fb20();
   input += synapse0x299fb60();
   input += synapse0x299fba0();
   input += synapse0x299fbe0();
   input += synapse0x299fc20();
   input += synapse0x299fc60();
   input += synapse0x299fca0();
   input += synapse0x299fce0();
   input += synapse0x299f770();
   input += synapse0x299f7b0();
   input += synapse0x299fe30();
   input += synapse0x299fe70();
   input += synapse0x299feb0();
   input += synapse0x299fef0();
   input += synapse0x299ff30();
   input += synapse0x299ff70();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299f5e0() {
   double input = input0x299f5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299ffb0() {
   double input = -1.30265;
   input += synapse0x2999a80();
   input += synapse0x2999ac0();
   input += synapse0x2999b00();
   input += synapse0x2999b40();
   input += synapse0x29a0500();
   input += synapse0x29a0540();
   input += synapse0x29a0580();
   input += synapse0x29a05c0();
   input += synapse0x29a0600();
   input += synapse0x29a0640();
   input += synapse0x29a0680();
   input += synapse0x29a06c0();
   input += synapse0x29a0700();
   input += synapse0x29a0740();
   input += synapse0x29a0780();
   input += synapse0x29a07c0();
   input += synapse0x29a0140();
   input += synapse0x29a0180();
   input += synapse0x29a0910();
   input += synapse0x29a0950();
   input += synapse0x29a0990();
   input += synapse0x29a09d0();
   input += synapse0x29a0a10();
   input += synapse0x29a0a50();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299ffb0() {
   double input = input0x299ffb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a0a90() {
   double input = 0.568214;
   input += synapse0x29a0dd0();
   input += synapse0x29a0e10();
   input += synapse0x29a0e50();
   input += synapse0x29a0e90();
   input += synapse0x29a0ed0();
   input += synapse0x29a0f10();
   input += synapse0x29a0f50();
   input += synapse0x29a0f90();
   input += synapse0x29a0fd0();
   input += synapse0x29a1010();
   input += synapse0x29a1050();
   input += synapse0x29a1090();
   input += synapse0x29a10d0();
   input += synapse0x29a1110();
   input += synapse0x29a1150();
   input += synapse0x29a1190();
   input += synapse0x29a0c20();
   input += synapse0x29a0c60();
   input += synapse0x29a12e0();
   input += synapse0x29a1320();
   input += synapse0x29a1360();
   input += synapse0x29a13a0();
   input += synapse0x29a13e0();
   input += synapse0x29a1420();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a0a90() {
   double input = input0x29a0a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a1460() {
   double input = -0.87376;
   input += synapse0x29a17a0();
   input += synapse0x29a17e0();
   input += synapse0x29a1820();
   input += synapse0x29a1860();
   input += synapse0x29a18a0();
   input += synapse0x29a18e0();
   input += synapse0x29a1920();
   input += synapse0x29a1960();
   input += synapse0x29a19a0();
   input += synapse0x29a19e0();
   input += synapse0x29a1a20();
   input += synapse0x29a1a60();
   input += synapse0x29a1aa0();
   input += synapse0x29a1ae0();
   input += synapse0x29a1b20();
   input += synapse0x29a1b60();
   input += synapse0x29a15f0();
   input += synapse0x29a1630();
   input += synapse0x299e3c0();
   input += synapse0x299e400();
   input += synapse0x299e440();
   input += synapse0x299e480();
   input += synapse0x299e4c0();
   input += synapse0x299e500();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a1460() {
   double input = input0x29a1460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x299e540() {
   double input = -0.22735;
   input += synapse0x299e880();
   input += synapse0x299e8c0();
   input += synapse0x299e900();
   input += synapse0x299e940();
   input += synapse0x299e980();
   input += synapse0x299e9c0();
   input += synapse0x299ea00();
   input += synapse0x299ea40();
   input += synapse0x299ea80();
   input += synapse0x299eac0();
   input += synapse0x299eb00();
   input += synapse0x299eb40();
   input += synapse0x299eb80();
   input += synapse0x29a2cc0();
   input += synapse0x29a2d00();
   input += synapse0x29a2d40();
   input += synapse0x299e6d0();
   input += synapse0x299e710();
   input += synapse0x29a2e90();
   input += synapse0x29a2ed0();
   input += synapse0x29a2f10();
   input += synapse0x29a2f50();
   input += synapse0x29a2f90();
   input += synapse0x29a2fd0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x299e540() {
   double input = input0x299e540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a3010() {
   double input = 0.504922;
   input += synapse0x29a3350();
   input += synapse0x29a3390();
   input += synapse0x29a33d0();
   input += synapse0x29a3410();
   input += synapse0x29a3450();
   input += synapse0x29a3490();
   input += synapse0x29a34d0();
   input += synapse0x29a3510();
   input += synapse0x29a3550();
   input += synapse0x29a3590();
   input += synapse0x29a35d0();
   input += synapse0x29a3610();
   input += synapse0x29a3650();
   input += synapse0x29a3690();
   input += synapse0x29a36d0();
   input += synapse0x29a3710();
   input += synapse0x29a31a0();
   input += synapse0x29a31e0();
   input += synapse0x29a3860();
   input += synapse0x29a38a0();
   input += synapse0x29a38e0();
   input += synapse0x29a3920();
   input += synapse0x29a3960();
   input += synapse0x29a39a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a3010() {
   double input = input0x29a3010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a39e0() {
   double input = -1.81496;
   input += synapse0x29a3d20();
   input += synapse0x29a3d60();
   input += synapse0x29a3da0();
   input += synapse0x29a3de0();
   input += synapse0x29a3e20();
   input += synapse0x29a3e60();
   input += synapse0x29a3ea0();
   input += synapse0x29a3ee0();
   input += synapse0x29a3f20();
   input += synapse0x29a3f60();
   input += synapse0x29a3fa0();
   input += synapse0x29a3fe0();
   input += synapse0x29a4020();
   input += synapse0x29a4060();
   input += synapse0x29a40a0();
   input += synapse0x29a40e0();
   input += synapse0x29a3b70();
   input += synapse0x29a3bb0();
   input += synapse0x29a4230();
   input += synapse0x29a4270();
   input += synapse0x29a42b0();
   input += synapse0x29a42f0();
   input += synapse0x29a4330();
   input += synapse0x29a4370();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a39e0() {
   double input = input0x29a39e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a43b0() {
   double input = 0.786538;
   input += synapse0x29a46f0();
   input += synapse0x29a4730();
   input += synapse0x29a4770();
   input += synapse0x29a47b0();
   input += synapse0x29a47f0();
   input += synapse0x29a4830();
   input += synapse0x29a4870();
   input += synapse0x29a48b0();
   input += synapse0x29a48f0();
   input += synapse0x29a4930();
   input += synapse0x29a4970();
   input += synapse0x29a49b0();
   input += synapse0x29a49f0();
   input += synapse0x29a4a30();
   input += synapse0x29a4a70();
   input += synapse0x29a4ab0();
   input += synapse0x29a4540();
   input += synapse0x29a4580();
   input += synapse0x29a4c00();
   input += synapse0x29a4c40();
   input += synapse0x29a4c80();
   input += synapse0x29a4cc0();
   input += synapse0x29a4d00();
   input += synapse0x29a4d40();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a43b0() {
   double input = input0x29a43b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a4d80() {
   double input = 1.56619;
   input += synapse0x29a50c0();
   input += synapse0x2996450();
   input += synapse0x2996490();
   input += synapse0x2996790();
   input += synapse0x29967d0();
   input += synapse0x2996ad0();
   input += synapse0x2996b10();
   input += synapse0x2996e10();
   input += synapse0x2996e50();
   input += synapse0x2997150();
   input += synapse0x2997190();
   input += synapse0x2997490();
   input += synapse0x29974d0();
   input += synapse0x29977d0();
   input += synapse0x2997810();
   input += synapse0x2997b10();
   input += synapse0x2997b50();
   input += synapse0x2997e50();
   input += synapse0x2997e90();
   input += synapse0x2998190();
   input += synapse0x29981d0();
   input += synapse0x29984d0();
   input += synapse0x2998510();
   input += synapse0x2998810();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a4d80() {
   double input = input0x29a4d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a6b90() {
   double input = 0.322917;
   input += synapse0x2998850();
   input += synapse0x2999510();
   input += synapse0x2999550();
   input += synapse0x29a4f10();
   input += synapse0x29a4f50();
   input += synapse0x2999850();
   input += synapse0x2999890();
   input += synapse0x2751330();
   input += synapse0x2751370();
   input += synapse0x2999fd0();
   input += synapse0x299a010();
   input += synapse0x299a310();
   input += synapse0x299a350();
   input += synapse0x299a650();
   input += synapse0x299a690();
   input += synapse0x299a990();
   input += synapse0x299a9d0();
   input += synapse0x299acd0();
   input += synapse0x299ad10();
   input += synapse0x299b010();
   input += synapse0x299b050();
   input += synapse0x2998b50();
   input += synapse0x2998b90();
   input += synapse0x29a6e30();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a6b90() {
   double input = input0x29a6b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a6e70() {
   double input = 1.46337;
   input += synapse0x29a71b0();
   input += synapse0x29a71f0();
   input += synapse0x29a7230();
   input += synapse0x29a7270();
   input += synapse0x29a72b0();
   input += synapse0x29a72f0();
   input += synapse0x29a7330();
   input += synapse0x29a7370();
   input += synapse0x29a73b0();
   input += synapse0x29a73f0();
   input += synapse0x29a7430();
   input += synapse0x29a7470();
   input += synapse0x29a74b0();
   input += synapse0x29a74f0();
   input += synapse0x29a7530();
   input += synapse0x29a7570();
   input += synapse0x29a7000();
   input += synapse0x29a7040();
   input += synapse0x29a76c0();
   input += synapse0x29a7700();
   input += synapse0x29a7740();
   input += synapse0x29a7780();
   input += synapse0x29a77c0();
   input += synapse0x29a7800();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a6e70() {
   double input = input0x29a6e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a7840() {
   double input = 1.69056;
   input += synapse0x29a7b80();
   input += synapse0x29a7bc0();
   input += synapse0x29a7c00();
   input += synapse0x29a7c40();
   input += synapse0x29a7c80();
   input += synapse0x29a7cc0();
   input += synapse0x29a7d00();
   input += synapse0x29a7d40();
   input += synapse0x29a7d80();
   input += synapse0x29a7dc0();
   input += synapse0x29a7e00();
   input += synapse0x29a7e40();
   input += synapse0x29a7e80();
   input += synapse0x29a7ec0();
   input += synapse0x29a7f00();
   input += synapse0x29a7f40();
   input += synapse0x29a79d0();
   input += synapse0x29a7a10();
   input += synapse0x29a8090();
   input += synapse0x29a80d0();
   input += synapse0x29a8110();
   input += synapse0x29a8150();
   input += synapse0x29a8190();
   input += synapse0x29a81d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a7840() {
   double input = input0x29a7840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a8210() {
   double input = 0.29966;
   input += synapse0x29a8550();
   input += synapse0x29a8590();
   input += synapse0x29a85d0();
   input += synapse0x29a8610();
   input += synapse0x29a8650();
   input += synapse0x29a8690();
   input += synapse0x29a86d0();
   input += synapse0x29a8710();
   input += synapse0x29a8750();
   input += synapse0x29a8790();
   input += synapse0x29a87d0();
   input += synapse0x29a8810();
   input += synapse0x29a8850();
   input += synapse0x29a8890();
   input += synapse0x29a88d0();
   input += synapse0x29a8910();
   input += synapse0x29a83a0();
   input += synapse0x29a83e0();
   input += synapse0x29a8a60();
   input += synapse0x29a8aa0();
   input += synapse0x29a8ae0();
   input += synapse0x29a8b20();
   input += synapse0x29a8b60();
   input += synapse0x29a8ba0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a8210() {
   double input = input0x29a8210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a8be0() {
   double input = 0.818956;
   input += synapse0x29a8f20();
   input += synapse0x29a8f60();
   input += synapse0x29a8fa0();
   input += synapse0x29a8fe0();
   input += synapse0x29a9020();
   input += synapse0x29a9060();
   input += synapse0x29a90a0();
   input += synapse0x29a90e0();
   input += synapse0x29a9120();
   input += synapse0x29a9160();
   input += synapse0x29a91a0();
   input += synapse0x29a91e0();
   input += synapse0x29a9220();
   input += synapse0x29a9260();
   input += synapse0x29a92a0();
   input += synapse0x29a92e0();
   input += synapse0x29a8d70();
   input += synapse0x29a8db0();
   input += synapse0x29a9430();
   input += synapse0x29a9470();
   input += synapse0x29a94b0();
   input += synapse0x29a94f0();
   input += synapse0x29a9530();
   input += synapse0x29a9570();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a8be0() {
   double input = input0x29a8be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a95b0() {
   double input = 0.499322;
   input += synapse0x29a98f0();
   input += synapse0x29a9930();
   input += synapse0x29a9970();
   input += synapse0x29a99b0();
   input += synapse0x29a99f0();
   input += synapse0x29a9a30();
   input += synapse0x29a9a70();
   input += synapse0x29a9ab0();
   input += synapse0x29a9af0();
   input += synapse0x29a1cb0();
   input += synapse0x29a1cf0();
   input += synapse0x29a1d30();
   input += synapse0x29a1d70();
   input += synapse0x29a1db0();
   input += synapse0x29a1df0();
   input += synapse0x29a1e30();
   input += synapse0x29a9740();
   input += synapse0x29a9780();
   input += synapse0x29a1f80();
   input += synapse0x29a1fc0();
   input += synapse0x29a2000();
   input += synapse0x29a2040();
   input += synapse0x29a2080();
   input += synapse0x29a20c0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a95b0() {
   double input = input0x29a95b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a2100() {
   double input = 0.887117;
   input += synapse0x29a2440();
   input += synapse0x29a2480();
   input += synapse0x29a24c0();
   input += synapse0x29a2500();
   input += synapse0x29a2540();
   input += synapse0x29a2580();
   input += synapse0x29a25c0();
   input += synapse0x29a2600();
   input += synapse0x29a2640();
   input += synapse0x29a2680();
   input += synapse0x29a26c0();
   input += synapse0x29a2700();
   input += synapse0x29a2740();
   input += synapse0x29a2780();
   input += synapse0x29a27c0();
   input += synapse0x29a2800();
   input += synapse0x29a2290();
   input += synapse0x29a22d0();
   input += synapse0x29a2950();
   input += synapse0x29a2990();
   input += synapse0x29a29d0();
   input += synapse0x29a2a10();
   input += synapse0x29a2a50();
   input += synapse0x29a2a90();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a2100() {
   double input = input0x29a2100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a2ad0() {
   double input = 1.09992;
   input += synapse0x29a2c60();
   input += synapse0x29abcf0();
   input += synapse0x29abd30();
   input += synapse0x29abd70();
   input += synapse0x29abdb0();
   input += synapse0x29abdf0();
   input += synapse0x29abe30();
   input += synapse0x29abe70();
   input += synapse0x29abeb0();
   input += synapse0x29abef0();
   input += synapse0x29abf30();
   input += synapse0x29abf70();
   input += synapse0x29abfb0();
   input += synapse0x29abff0();
   input += synapse0x29ac030();
   input += synapse0x29ac070();
   input += synapse0x29abb40();
   input += synapse0x29abb80();
   input += synapse0x29ac1c0();
   input += synapse0x29ac200();
   input += synapse0x29ac240();
   input += synapse0x29ac280();
   input += synapse0x29ac2c0();
   input += synapse0x29ac300();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a2ad0() {
   double input = input0x29a2ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29ac340() {
   double input = -0.10245;
   input += synapse0x29ac680();
   input += synapse0x29ac6c0();
   input += synapse0x29ac700();
   input += synapse0x29ac740();
   input += synapse0x29ac780();
   input += synapse0x29ac7c0();
   input += synapse0x29ac800();
   input += synapse0x29ac840();
   input += synapse0x29ac880();
   input += synapse0x29ac8c0();
   input += synapse0x29ac900();
   input += synapse0x29ac940();
   input += synapse0x29ac980();
   input += synapse0x29ac9c0();
   input += synapse0x29aca00();
   input += synapse0x29aca40();
   input += synapse0x29ac4d0();
   input += synapse0x29ac510();
   input += synapse0x29acb90();
   input += synapse0x29acbd0();
   input += synapse0x29acc10();
   input += synapse0x29acc50();
   input += synapse0x29acc90();
   input += synapse0x29accd0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29ac340() {
   double input = input0x29ac340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29acd10() {
   double input = -1.08771;
   input += synapse0x29ad050();
   input += synapse0x29ad090();
   input += synapse0x29ad0d0();
   input += synapse0x29ad110();
   input += synapse0x29ad150();
   input += synapse0x29ad190();
   input += synapse0x29ad1d0();
   input += synapse0x29ad210();
   input += synapse0x29ad250();
   input += synapse0x29ad290();
   input += synapse0x29ad2d0();
   input += synapse0x29ad310();
   input += synapse0x29ad350();
   input += synapse0x29ad390();
   input += synapse0x29ad3d0();
   input += synapse0x29ad410();
   input += synapse0x29acea0();
   input += synapse0x29acee0();
   input += synapse0x29ad560();
   input += synapse0x29ad5a0();
   input += synapse0x29ad5e0();
   input += synapse0x29ad620();
   input += synapse0x29ad660();
   input += synapse0x29ad6a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29acd10() {
   double input = input0x29acd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29ad6e0() {
   double input = -0.0194303;
   input += synapse0x29ada20();
   input += synapse0x29ada60();
   input += synapse0x29adaa0();
   input += synapse0x29adae0();
   input += synapse0x29adb20();
   input += synapse0x29adb60();
   input += synapse0x29adba0();
   input += synapse0x29adbe0();
   input += synapse0x29adc20();
   input += synapse0x29adc60();
   input += synapse0x29adca0();
   input += synapse0x29adce0();
   input += synapse0x29add20();
   input += synapse0x29add60();
   input += synapse0x29adda0();
   input += synapse0x29adde0();
   input += synapse0x29ad870();
   input += synapse0x29ad8b0();
   input += synapse0x29adf30();
   input += synapse0x29adf70();
   input += synapse0x29adfb0();
   input += synapse0x29adff0();
   input += synapse0x29ae030();
   input += synapse0x29ae070();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29ad6e0() {
   double input = input0x29ad6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29ae0b0() {
   double input = -0.0712738;
   input += synapse0x29ae3f0();
   input += synapse0x29ae430();
   input += synapse0x29ae470();
   input += synapse0x29ae4b0();
   input += synapse0x29ae4f0();
   input += synapse0x29ae530();
   input += synapse0x29ae570();
   input += synapse0x29ae5b0();
   input += synapse0x29ae5f0();
   input += synapse0x29ae630();
   input += synapse0x29ae670();
   input += synapse0x29ae6b0();
   input += synapse0x29ae6f0();
   input += synapse0x29ae730();
   input += synapse0x29ae770();
   input += synapse0x29ae7b0();
   input += synapse0x29ae240();
   input += synapse0x29ae280();
   input += synapse0x29ae900();
   input += synapse0x29ae940();
   input += synapse0x29ae980();
   input += synapse0x29ae9c0();
   input += synapse0x29aea00();
   input += synapse0x29aea40();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29ae0b0() {
   double input = input0x29ae0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29aea80() {
   double input = 2.65445;
   input += synapse0x29aedc0();
   input += synapse0x29aee00();
   input += synapse0x29aee40();
   input += synapse0x29aee80();
   input += synapse0x29aeec0();
   input += synapse0x29aef00();
   input += synapse0x29aef40();
   input += synapse0x29aef80();
   input += synapse0x29aefc0();
   input += synapse0x29af000();
   input += synapse0x29af040();
   input += synapse0x29af080();
   input += synapse0x29af0c0();
   input += synapse0x29af100();
   input += synapse0x29af140();
   input += synapse0x29af180();
   input += synapse0x29aec10();
   input += synapse0x29aec50();
   input += synapse0x29af2d0();
   input += synapse0x29af310();
   input += synapse0x29af350();
   input += synapse0x29af390();
   input += synapse0x29af3d0();
   input += synapse0x29af410();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29aea80() {
   double input = input0x29aea80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29af450() {
   double input = 1.21061;
   input += synapse0x29af790();
   input += synapse0x29af7d0();
   input += synapse0x29af810();
   input += synapse0x29af850();
   input += synapse0x29af890();
   input += synapse0x29af8d0();
   input += synapse0x29af910();
   input += synapse0x29af950();
   input += synapse0x29af990();
   input += synapse0x29af9d0();
   input += synapse0x29afa10();
   input += synapse0x29afa50();
   input += synapse0x29afa90();
   input += synapse0x29afad0();
   input += synapse0x29afb10();
   input += synapse0x29afb50();
   input += synapse0x29af5e0();
   input += synapse0x29af620();
   input += synapse0x29afca0();
   input += synapse0x29afce0();
   input += synapse0x29afd20();
   input += synapse0x29afd60();
   input += synapse0x29afda0();
   input += synapse0x29afde0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29af450() {
   double input = input0x29af450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29afe20() {
   double input = 0.119965;
   input += synapse0x29b0160();
   input += synapse0x29b01a0();
   input += synapse0x29b01e0();
   input += synapse0x29b0220();
   input += synapse0x29b0260();
   input += synapse0x29b02a0();
   input += synapse0x29b02e0();
   input += synapse0x29b0320();
   input += synapse0x29b0360();
   input += synapse0x29b03a0();
   input += synapse0x29b03e0();
   input += synapse0x29b0420();
   input += synapse0x29b0460();
   input += synapse0x29b04a0();
   input += synapse0x29b04e0();
   input += synapse0x29b0520();
   input += synapse0x29affb0();
   input += synapse0x29afff0();
   input += synapse0x29b0670();
   input += synapse0x29b06b0();
   input += synapse0x29b06f0();
   input += synapse0x29b0730();
   input += synapse0x29b0770();
   input += synapse0x29b07b0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29afe20() {
   double input = input0x29afe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b07f0() {
   double input = 0.926937;
   input += synapse0x29b0b30();
   input += synapse0x29a5100();
   input += synapse0x29a5140();
   input += synapse0x29a5180();
   input += synapse0x29a53d0();
   input += synapse0x29a5410();
   input += synapse0x29a5450();
   input += synapse0x29a56a0();
   input += synapse0x29a56e0();
   input += synapse0x29a5930();
   input += synapse0x29a5970();
   input += synapse0x29a59b0();
   input += synapse0x29a5c00();
   input += synapse0x29a5c40();
   input += synapse0x29a5e90();
   input += synapse0x29a5ed0();
   input += synapse0x29b0980();
   input += synapse0x29b09c0();
   input += synapse0x29a6020();
   input += synapse0x29a6530();
   input += synapse0x29a6570();
   input += synapse0x29a65b0();
   input += synapse0x29a6800();
   input += synapse0x29a6840();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b07f0() {
   double input = input0x29b07f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a6880() {
   double input = -0.315724;
   input += synapse0x29a60f0();
   input += synapse0x29a6130();
   input += synapse0x29a6170();
   input += synapse0x29a61b0();
   input += synapse0x29a6b30();
   input += synapse0x29b2e80();
   input += synapse0x29b2ec0();
   input += synapse0x29b2f00();
   input += synapse0x29b2f40();
   input += synapse0x29b2f80();
   input += synapse0x29b2fc0();
   input += synapse0x29b3000();
   input += synapse0x29b3040();
   input += synapse0x29b3080();
   input += synapse0x29b30c0();
   input += synapse0x29b3100();
   input += synapse0x29a6a10();
   input += synapse0x29a6a50();
   input += synapse0x29b3250();
   input += synapse0x29b3290();
   input += synapse0x29b32d0();
   input += synapse0x29b3310();
   input += synapse0x29b3350();
   input += synapse0x29b3390();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a6880() {
   double input = input0x29a6880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b33d0() {
   double input = 0.451704;
   input += synapse0x29b3710();
   input += synapse0x29b3750();
   input += synapse0x29b3790();
   input += synapse0x29b37d0();
   input += synapse0x29b3810();
   input += synapse0x29b3850();
   input += synapse0x29b3890();
   input += synapse0x29b38d0();
   input += synapse0x29b3910();
   input += synapse0x29b3950();
   input += synapse0x29b3990();
   input += synapse0x29b39d0();
   input += synapse0x29b3a10();
   input += synapse0x29b3a50();
   input += synapse0x29b3a90();
   input += synapse0x29b3ad0();
   input += synapse0x29b3560();
   input += synapse0x29b35a0();
   input += synapse0x29b3c20();
   input += synapse0x29b3c60();
   input += synapse0x29b3ca0();
   input += synapse0x29b3ce0();
   input += synapse0x29b3d20();
   input += synapse0x29b3d60();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b33d0() {
   double input = input0x29b33d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b3da0() {
   double input = -0.107422;
   input += synapse0x29b40e0();
   input += synapse0x29b4120();
   input += synapse0x29b4160();
   input += synapse0x29b41a0();
   input += synapse0x29b41e0();
   input += synapse0x29b4220();
   input += synapse0x29b4260();
   input += synapse0x29b42a0();
   input += synapse0x29b42e0();
   input += synapse0x29b4320();
   input += synapse0x29b4360();
   input += synapse0x29b43a0();
   input += synapse0x29b43e0();
   input += synapse0x29b4420();
   input += synapse0x29b4460();
   input += synapse0x29b44a0();
   input += synapse0x29b3f30();
   input += synapse0x29b3f70();
   input += synapse0x29b45f0();
   input += synapse0x29b4630();
   input += synapse0x29b4670();
   input += synapse0x29b46b0();
   input += synapse0x29b46f0();
   input += synapse0x29b4730();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b3da0() {
   double input = input0x29b3da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b4770() {
   double input = 1.34249;
   input += synapse0x29b4ab0();
   input += synapse0x29b4af0();
   input += synapse0x29b4b30();
   input += synapse0x29b4b70();
   input += synapse0x29b4bb0();
   input += synapse0x29b4bf0();
   input += synapse0x29b4c30();
   input += synapse0x29b4c70();
   input += synapse0x29b4cb0();
   input += synapse0x29b4cf0();
   input += synapse0x29b4d30();
   input += synapse0x29b4d70();
   input += synapse0x29b4db0();
   input += synapse0x29b4df0();
   input += synapse0x29b4e30();
   input += synapse0x29b4e70();
   input += synapse0x29b4900();
   input += synapse0x29b4940();
   input += synapse0x29b4fc0();
   input += synapse0x29b5000();
   input += synapse0x29b5040();
   input += synapse0x29b5080();
   input += synapse0x29b50c0();
   input += synapse0x29b5100();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b4770() {
   double input = input0x29b4770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b5140() {
   double input = -0.139065;
   input += synapse0x29b5480();
   input += synapse0x29b54c0();
   input += synapse0x29b5500();
   input += synapse0x29b5540();
   input += synapse0x29b5580();
   input += synapse0x29b55c0();
   input += synapse0x29b5600();
   input += synapse0x29b5640();
   input += synapse0x29b5680();
   input += synapse0x29b56c0();
   input += synapse0x29b5700();
   input += synapse0x29b5740();
   input += synapse0x29b5780();
   input += synapse0x29b57c0();
   input += synapse0x29b5800();
   input += synapse0x29b5840();
   input += synapse0x29b52d0();
   input += synapse0x29b5310();
   input += synapse0x29b5990();
   input += synapse0x29b59d0();
   input += synapse0x29b5a10();
   input += synapse0x29b5a50();
   input += synapse0x29b5a90();
   input += synapse0x29b5ad0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b5140() {
   double input = input0x29b5140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b5b10() {
   double input = -0.845701;
   input += synapse0x29b5e50();
   input += synapse0x29b5e90();
   input += synapse0x29b5ed0();
   input += synapse0x29b5f10();
   input += synapse0x29b5f50();
   input += synapse0x29b5f90();
   input += synapse0x29b5fd0();
   input += synapse0x29b6010();
   input += synapse0x29b6050();
   input += synapse0x29b6090();
   input += synapse0x29b60d0();
   input += synapse0x29b6110();
   input += synapse0x29b6150();
   input += synapse0x29b6190();
   input += synapse0x29b61d0();
   input += synapse0x29b6210();
   input += synapse0x29b5ca0();
   input += synapse0x29b5ce0();
   input += synapse0x29b6360();
   input += synapse0x29b63a0();
   input += synapse0x29b63e0();
   input += synapse0x29b6420();
   input += synapse0x29b6460();
   input += synapse0x29b64a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b5b10() {
   double input = input0x29b5b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b64e0() {
   double input = -1.31052;
   input += synapse0x29b6820();
   input += synapse0x29b6860();
   input += synapse0x29b68a0();
   input += synapse0x29b68e0();
   input += synapse0x29b6920();
   input += synapse0x29b6960();
   input += synapse0x29b69a0();
   input += synapse0x29b69e0();
   input += synapse0x29b6a20();
   input += synapse0x29b6a60();
   input += synapse0x29b6aa0();
   input += synapse0x29b6ae0();
   input += synapse0x29b6b20();
   input += synapse0x29b6b60();
   input += synapse0x29b6ba0();
   input += synapse0x29b6be0();
   input += synapse0x29b6670();
   input += synapse0x29b66b0();
   input += synapse0x29b6d30();
   input += synapse0x29b6d70();
   input += synapse0x29b6db0();
   input += synapse0x29b6df0();
   input += synapse0x29b6e30();
   input += synapse0x29b6e70();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b64e0() {
   double input = input0x29b64e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b6eb0() {
   double input = -1.25314;
   input += synapse0x29b71f0();
   input += synapse0x29b7230();
   input += synapse0x29b7270();
   input += synapse0x29b72b0();
   input += synapse0x29b72f0();
   input += synapse0x29b7330();
   input += synapse0x29b7370();
   input += synapse0x29b73b0();
   input += synapse0x29b73f0();
   input += synapse0x29b7430();
   input += synapse0x29b7470();
   input += synapse0x29b74b0();
   input += synapse0x29b74f0();
   input += synapse0x29b7530();
   input += synapse0x29b7570();
   input += synapse0x29b75b0();
   input += synapse0x29b7040();
   input += synapse0x29b7080();
   input += synapse0x29b7700();
   input += synapse0x29b7740();
   input += synapse0x29b7780();
   input += synapse0x29b77c0();
   input += synapse0x29b7800();
   input += synapse0x29b7840();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b6eb0() {
   double input = input0x29b6eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b7880() {
   double input = -1.05565;
   input += synapse0x29a02f0();
   input += synapse0x29a0330();
   input += synapse0x29a0370();
   input += synapse0x29a03b0();
   input += synapse0x29a03f0();
   input += synapse0x29a0430();
   input += synapse0x29a0470();
   input += synapse0x29a04b0();
   input += synapse0x29b7fd0();
   input += synapse0x29b8010();
   input += synapse0x29b8050();
   input += synapse0x29b8090();
   input += synapse0x29b80d0();
   input += synapse0x29b8110();
   input += synapse0x29b8150();
   input += synapse0x29b8190();
   input += synapse0x29b7a10();
   input += synapse0x29b7a50();
   input += synapse0x29b82e0();
   input += synapse0x29b8320();
   input += synapse0x29b8360();
   input += synapse0x29b83a0();
   input += synapse0x29b83e0();
   input += synapse0x29b8420();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b7880() {
   double input = input0x29b7880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b8460() {
   double input = 0.767069;
   input += synapse0x29b87a0();
   input += synapse0x29b87e0();
   input += synapse0x29b8820();
   input += synapse0x29b8860();
   input += synapse0x29b88a0();
   input += synapse0x29b88e0();
   input += synapse0x29b8920();
   input += synapse0x29b8960();
   input += synapse0x29b89a0();
   input += synapse0x29b89e0();
   input += synapse0x29b8a20();
   input += synapse0x29b8a60();
   input += synapse0x29b8aa0();
   input += synapse0x29b8ae0();
   input += synapse0x29b8b20();
   input += synapse0x29b8b60();
   input += synapse0x29b85f0();
   input += synapse0x29b8630();
   input += synapse0x29b8cb0();
   input += synapse0x29b8cf0();
   input += synapse0x29b8d30();
   input += synapse0x29b8d70();
   input += synapse0x29b8db0();
   input += synapse0x29b8df0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b8460() {
   double input = input0x29b8460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29b8e30() {
   double input = 0.458196;
   input += synapse0x29b9170();
   input += synapse0x29b91b0();
   input += synapse0x29b91f0();
   input += synapse0x29b9230();
   input += synapse0x29b9270();
   input += synapse0x29b92b0();
   input += synapse0x29b92f0();
   input += synapse0x29b9330();
   input += synapse0x29b9370();
   input += synapse0x29b93b0();
   input += synapse0x29b93f0();
   input += synapse0x29b9430();
   input += synapse0x29b9470();
   input += synapse0x29b94b0();
   input += synapse0x29b94f0();
   input += synapse0x29b9530();
   input += synapse0x29b8fc0();
   input += synapse0x29b9000();
   input += synapse0x29a9b30();
   input += synapse0x29a9b70();
   input += synapse0x29a9bb0();
   input += synapse0x29a9bf0();
   input += synapse0x29a9c30();
   input += synapse0x29a9c70();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29b8e30() {
   double input = input0x29b8e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29a9cb0() {
   double input = 2.65005;
   input += synapse0x29a9ff0();
   input += synapse0x29aa030();
   input += synapse0x29aa070();
   input += synapse0x29aa0b0();
   input += synapse0x29aa0f0();
   input += synapse0x29aa130();
   input += synapse0x29aa170();
   input += synapse0x29aa1b0();
   input += synapse0x29aa1f0();
   input += synapse0x29aa230();
   input += synapse0x29aa270();
   input += synapse0x29aa2b0();
   input += synapse0x29aa2f0();
   input += synapse0x29aa330();
   input += synapse0x29aa370();
   input += synapse0x29aa3b0();
   input += synapse0x29a9e40();
   input += synapse0x29a9e80();
   input += synapse0x29aa500();
   input += synapse0x29aa540();
   input += synapse0x29aa580();
   input += synapse0x29aa5c0();
   input += synapse0x29aa600();
   input += synapse0x29aa640();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29a9cb0() {
   double input = input0x29a9cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29aa680() {
   double input = 2.86248;
   input += synapse0x29aa9c0();
   input += synapse0x29aaa00();
   input += synapse0x29aaa40();
   input += synapse0x29aaa80();
   input += synapse0x29aaac0();
   input += synapse0x29aab00();
   input += synapse0x29aab40();
   input += synapse0x29aab80();
   input += synapse0x29aabc0();
   input += synapse0x29aac00();
   input += synapse0x29aac40();
   input += synapse0x29aac80();
   input += synapse0x29aacc0();
   input += synapse0x29aad00();
   input += synapse0x29aad40();
   input += synapse0x29aad80();
   input += synapse0x29aa810();
   input += synapse0x29aa850();
   input += synapse0x29aaed0();
   input += synapse0x29aaf10();
   input += synapse0x29aaf50();
   input += synapse0x29aaf90();
   input += synapse0x29aafd0();
   input += synapse0x29ab010();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29aa680() {
   double input = input0x29aa680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29ab050() {
   double input = -5.31342;
   input += synapse0x29ab390();
   input += synapse0x29ab3d0();
   input += synapse0x29ab410();
   input += synapse0x29ab450();
   input += synapse0x29ab490();
   input += synapse0x29ab4d0();
   input += synapse0x29ab510();
   input += synapse0x29ab550();
   input += synapse0x29ab590();
   input += synapse0x29ab5d0();
   input += synapse0x29ab610();
   input += synapse0x29ab650();
   input += synapse0x29ab690();
   input += synapse0x29ab6d0();
   input += synapse0x29ab710();
   input += synapse0x29ab750();
   input += synapse0x29ab1e0();
   input += synapse0x29ab220();
   input += synapse0x29ab8a0();
   input += synapse0x29ab8e0();
   input += synapse0x29ab920();
   input += synapse0x29ab960();
   input += synapse0x29ab9a0();
   input += synapse0x29ab9e0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29ab050() {
   double input = input0x29ab050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29bd690() {
   double input = 0.383498;
   input += synapse0x29bd8b0();
   input += synapse0x29bd8f0();
   input += synapse0x29bd930();
   input += synapse0x29bd970();
   input += synapse0x29bd9b0();
   input += synapse0x29bd9f0();
   input += synapse0x29bda30();
   input += synapse0x29bda70();
   input += synapse0x29bdab0();
   input += synapse0x29bdaf0();
   input += synapse0x29bdb30();
   input += synapse0x29bdb70();
   input += synapse0x29bdbb0();
   input += synapse0x29bdbf0();
   input += synapse0x29bdc30();
   input += synapse0x29bdc70();
   input += synapse0x29aba20();
   input += synapse0x29aba60();
   input += synapse0x29bddc0();
   input += synapse0x29bde00();
   input += synapse0x29bde40();
   input += synapse0x29bde80();
   input += synapse0x29bdec0();
   input += synapse0x29bdf00();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29bd690() {
   double input = input0x29bd690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29bdf40() {
   double input = -0.20178;
   input += synapse0x29be280();
   input += synapse0x29be2c0();
   input += synapse0x29be300();
   input += synapse0x29be340();
   input += synapse0x29be380();
   input += synapse0x29be3c0();
   input += synapse0x29be400();
   input += synapse0x29be440();
   input += synapse0x29be480();
   input += synapse0x29be4c0();
   input += synapse0x29be500();
   input += synapse0x29be540();
   input += synapse0x29be580();
   input += synapse0x29be5c0();
   input += synapse0x29be600();
   input += synapse0x29be640();
   input += synapse0x29be0d0();
   input += synapse0x29be110();
   input += synapse0x29be790();
   input += synapse0x29be7d0();
   input += synapse0x29be810();
   input += synapse0x29be850();
   input += synapse0x29be890();
   input += synapse0x29be8d0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29bdf40() {
   double input = input0x29bdf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29be910() {
   double input = -0.692151;
   input += synapse0x29bec50();
   input += synapse0x29bec90();
   input += synapse0x29becd0();
   input += synapse0x29bed10();
   input += synapse0x29bed50();
   input += synapse0x29bed90();
   input += synapse0x29bedd0();
   input += synapse0x29bee10();
   input += synapse0x29bee50();
   input += synapse0x29bee90();
   input += synapse0x29beed0();
   input += synapse0x29bef10();
   input += synapse0x29bef50();
   input += synapse0x29bef90();
   input += synapse0x29befd0();
   input += synapse0x29bf010();
   input += synapse0x29beaa0();
   input += synapse0x29beae0();
   input += synapse0x29bf160();
   input += synapse0x29bf1a0();
   input += synapse0x29bf1e0();
   input += synapse0x29bf220();
   input += synapse0x29bf260();
   input += synapse0x29bf2a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29be910() {
   double input = input0x29be910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29bf2e0() {
   double input = -1.1148;
   input += synapse0x29bf620();
   input += synapse0x29bf660();
   input += synapse0x29bf6a0();
   input += synapse0x29bf6e0();
   input += synapse0x29bf720();
   input += synapse0x29bf760();
   input += synapse0x29bf7a0();
   input += synapse0x29bf7e0();
   input += synapse0x29bf820();
   input += synapse0x29bf860();
   input += synapse0x29bf8a0();
   input += synapse0x29bf8e0();
   input += synapse0x29bf920();
   input += synapse0x29bf960();
   input += synapse0x29bf9a0();
   input += synapse0x29bf9e0();
   input += synapse0x29bf470();
   input += synapse0x29bf4b0();
   input += synapse0x29bfb30();
   input += synapse0x29bfb70();
   input += synapse0x29bfbb0();
   input += synapse0x29bfbf0();
   input += synapse0x29bfc30();
   input += synapse0x29bfc70();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29bf2e0() {
   double input = input0x29bf2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29c64e0() {
   double input = -0.862931;
   input += synapse0x275fb90();
   input += synapse0x275fbd0();
   input += synapse0x299d720();
   input += synapse0x299d760();
   input += synapse0x299e0f0();
   input += synapse0x299e130();
   input += synapse0x299eec0();
   input += synapse0x299ef00();
   input += synapse0x299f890();
   input += synapse0x299f8d0();
   input += synapse0x29a0260();
   input += synapse0x29a02a0();
   input += synapse0x29a0d40();
   input += synapse0x29a0d80();
   input += synapse0x29a1710();
   input += synapse0x29a1750();
   input += synapse0x299e7f0();
   input += synapse0x299e830();
   input += synapse0x29a32c0();
   input += synapse0x29a3300();
   input += synapse0x29a3c90();
   input += synapse0x29a3cd0();
   input += synapse0x29a4660();
   input += synapse0x29a46a0();
   input += synapse0x29a5030();
   input += synapse0x29a5070();
   input += synapse0x29991d0();
   input += synapse0x2999210();
   input += synapse0x29a7120();
   input += synapse0x29a7160();
   input += synapse0x29a7af0();
   input += synapse0x29a7b30();
   input += synapse0x29a84c0();
   input += synapse0x29a8500();
   input += synapse0x29a8e90();
   input += synapse0x29a8ed0();
   input += synapse0x29a9860();
   input += synapse0x29a98a0();
   input += synapse0x29a23b0();
   input += synapse0x29a23f0();
   input += synapse0x29abc60();
   input += synapse0x29abca0();
   input += synapse0x29ac5f0();
   input += synapse0x29ac630();
   input += synapse0x29acfc0();
   input += synapse0x29ad000();
   input += synapse0x29ad990();
   input += synapse0x29ad9d0();
   input += synapse0x29ae360();
   input += synapse0x29ae3a0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29c64e0() {
   double input = input0x29c64e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29c6880() {
   double input = -0.219432;
   input += synapse0x29b0aa0();
   input += synapse0x29b0ae0();
   input += synapse0x29a6060();
   input += synapse0x29a60a0();
   input += synapse0x29b3680();
   input += synapse0x29b36c0();
   input += synapse0x29b4050();
   input += synapse0x29b4090();
   input += synapse0x29b4a20();
   input += synapse0x29b4a60();
   input += synapse0x29b53f0();
   input += synapse0x29b5430();
   input += synapse0x29b5dc0();
   input += synapse0x29b5e00();
   input += synapse0x29b6790();
   input += synapse0x29b67d0();
   input += synapse0x29b7160();
   input += synapse0x29b71a0();
   input += synapse0x29b7b30();
   input += synapse0x29b7b70();
   input += synapse0x29b8710();
   input += synapse0x29b8750();
   input += synapse0x29b90e0();
   input += synapse0x29b9120();
   input += synapse0x29a9f60();
   input += synapse0x29a9fa0();
   input += synapse0x29aa930();
   input += synapse0x29aa970();
   input += synapse0x29ab300();
   input += synapse0x29ab340();
   input += synapse0x29bd820();
   input += synapse0x29bd860();
   input += synapse0x29be1f0();
   input += synapse0x29be230();
   input += synapse0x29bebc0();
   input += synapse0x29bec00();
   input += synapse0x29bf590();
   input += synapse0x29bf5d0();
   input += synapse0x299b480();
   input += synapse0x299b4c0();
   input += synapse0x29aed30();
   input += synapse0x29aed70();
   input += synapse0x29bfcb0();
   input += synapse0x29bfcf0();
   input += synapse0x29bfd30();
   input += synapse0x29bfd70();
   input += synapse0x29c6c20();
   input += synapse0x29c6c60();
   input += synapse0x29c6ca0();
   input += synapse0x29c6ce0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29c6880() {
   double input = input0x29c6880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29c6d20() {
   double input = 1.70787;
   input += synapse0x29c7060();
   input += synapse0x29c70a0();
   input += synapse0x29c70e0();
   input += synapse0x29c7120();
   input += synapse0x29c7160();
   input += synapse0x29c71a0();
   input += synapse0x29c71e0();
   input += synapse0x29c7220();
   input += synapse0x29c7260();
   input += synapse0x29c72a0();
   input += synapse0x29c72e0();
   input += synapse0x29c7320();
   input += synapse0x29c7360();
   input += synapse0x29c73a0();
   input += synapse0x29c73e0();
   input += synapse0x29c7420();
   input += synapse0x29c6eb0();
   input += synapse0x29c6ef0();
   input += synapse0x29c7570();
   input += synapse0x29c75b0();
   input += synapse0x29c75f0();
   input += synapse0x29c7630();
   input += synapse0x29c7670();
   input += synapse0x29c76b0();
   input += synapse0x29c76f0();
   input += synapse0x29c7730();
   input += synapse0x29c7770();
   input += synapse0x29c77b0();
   input += synapse0x29c77f0();
   input += synapse0x29c7830();
   input += synapse0x29c7870();
   input += synapse0x29c78b0();
   input += synapse0x29c7460();
   input += synapse0x29c74a0();
   input += synapse0x29c74e0();
   input += synapse0x29c7520();
   input += synapse0x29c7b00();
   input += synapse0x29c7b40();
   input += synapse0x29c7b80();
   input += synapse0x29c7bc0();
   input += synapse0x29c7c00();
   input += synapse0x29c7c40();
   input += synapse0x29c7c80();
   input += synapse0x29c7cc0();
   input += synapse0x29c7d00();
   input += synapse0x29c7d40();
   input += synapse0x29c7d80();
   input += synapse0x29c7dc0();
   input += synapse0x29c7e00();
   input += synapse0x29c7e40();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29c6d20() {
   double input = input0x29c6d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29c7e80() {
   double input = -0.54404;
   input += synapse0x29c81c0();
   input += synapse0x29c8200();
   input += synapse0x29c8240();
   input += synapse0x29c8280();
   input += synapse0x29c82c0();
   input += synapse0x29c8300();
   input += synapse0x29c8340();
   input += synapse0x29c8380();
   input += synapse0x29c83c0();
   input += synapse0x29c8400();
   input += synapse0x29c8440();
   input += synapse0x29c8480();
   input += synapse0x29c84c0();
   input += synapse0x29c8500();
   input += synapse0x29c8540();
   input += synapse0x29c8580();
   input += synapse0x29c8010();
   input += synapse0x29c8050();
   input += synapse0x29c86d0();
   input += synapse0x29c8710();
   input += synapse0x29c8750();
   input += synapse0x29c8790();
   input += synapse0x29c87d0();
   input += synapse0x29c8810();
   input += synapse0x29c8850();
   input += synapse0x29c8890();
   input += synapse0x29c88d0();
   input += synapse0x29c8910();
   input += synapse0x29c8950();
   input += synapse0x29c8990();
   input += synapse0x29c89d0();
   input += synapse0x29c8a10();
   input += synapse0x29c85c0();
   input += synapse0x29c8600();
   input += synapse0x29c8640();
   input += synapse0x29c8680();
   input += synapse0x29c8c60();
   input += synapse0x29c8ca0();
   input += synapse0x29c8ce0();
   input += synapse0x29c8d20();
   input += synapse0x29c8d60();
   input += synapse0x29c8da0();
   input += synapse0x29c8de0();
   input += synapse0x29c8e20();
   input += synapse0x29c8e60();
   input += synapse0x29c8ea0();
   input += synapse0x29c8ee0();
   input += synapse0x29c8f20();
   input += synapse0x29c8f60();
   input += synapse0x29c8fa0();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29c7e80() {
   double input = input0x29c7e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29c8fe0() {
   double input = 1.5046;
   input += synapse0x29c9320();
   input += synapse0x29c9360();
   input += synapse0x29c93a0();
   input += synapse0x29c93e0();
   input += synapse0x29c9420();
   input += synapse0x29c9460();
   input += synapse0x29c94a0();
   input += synapse0x29c94e0();
   input += synapse0x29c9520();
   input += synapse0x29c9560();
   input += synapse0x29c95a0();
   input += synapse0x29c95e0();
   input += synapse0x29c9620();
   input += synapse0x29c9660();
   input += synapse0x29c96a0();
   input += synapse0x29c96e0();
   input += synapse0x29c9170();
   input += synapse0x29c91b0();
   input += synapse0x29c9830();
   input += synapse0x29c9870();
   input += synapse0x29c98b0();
   input += synapse0x29c98f0();
   input += synapse0x29c9930();
   input += synapse0x29c9970();
   input += synapse0x29c99b0();
   input += synapse0x29c99f0();
   input += synapse0x29c9a30();
   input += synapse0x29c9a70();
   input += synapse0x29c9ab0();
   input += synapse0x29c9af0();
   input += synapse0x29c9b30();
   input += synapse0x29c9b70();
   input += synapse0x29c9720();
   input += synapse0x29c9760();
   input += synapse0x29c97a0();
   input += synapse0x29c97e0();
   input += synapse0x29c9dc0();
   input += synapse0x29c9e00();
   input += synapse0x29c9e40();
   input += synapse0x29c9e80();
   input += synapse0x29c9ec0();
   input += synapse0x29c9f00();
   input += synapse0x29c9f40();
   input += synapse0x29c9f80();
   input += synapse0x29c9fc0();
   input += synapse0x29ca000();
   input += synapse0x29ca040();
   input += synapse0x29ca080();
   input += synapse0x29ca0c0();
   input += synapse0x29ca100();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29c8fe0() {
   double input = input0x29c8fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuR::input0x29ca140() {
   double input = 6.58683;
   input += synapse0x29ca360();
   input += synapse0x29ca3a0();
   input += synapse0x29ca3e0();
   input += synapse0x29ca420();
   input += synapse0x29ca460();
   return input;
}

double NNfunction_ss_cLuR::neuron0x29ca140() {
   double input = input0x29ca140();
   return (input * 1)+0;
}

double NNfunction_ss_cLuR::synapse0x29960f0() {
   return (neuron0x2996230()*-0.15029);
}

double NNfunction_ss_cLuR::synapse0x2996130() {
   return (neuron0x2996570()*-0.0805157);
}

double NNfunction_ss_cLuR::synapse0x299b510() {
   return (neuron0x29968b0()*0.481801);
}

double NNfunction_ss_cLuR::synapse0x299b550() {
   return (neuron0x2996bf0()*-0.591853);
}

double NNfunction_ss_cLuR::synapse0x299b590() {
   return (neuron0x2996f30()*0.902097);
}

double NNfunction_ss_cLuR::synapse0x299b5d0() {
   return (neuron0x2997270()*-0.529962);
}

double NNfunction_ss_cLuR::synapse0x299b610() {
   return (neuron0x29975b0()*-0.238784);
}

double NNfunction_ss_cLuR::synapse0x299b650() {
   return (neuron0x29978f0()*-0.313578);
}

double NNfunction_ss_cLuR::synapse0x299b690() {
   return (neuron0x2997c30()*-0.298815);
}

double NNfunction_ss_cLuR::synapse0x299b6d0() {
   return (neuron0x2997f70()*-0.156649);
}

double NNfunction_ss_cLuR::synapse0x299b710() {
   return (neuron0x29982b0()*-0.449324);
}

double NNfunction_ss_cLuR::synapse0x299b750() {
   return (neuron0x29985f0()*-0.66233);
}

double NNfunction_ss_cLuR::synapse0x299b790() {
   return (neuron0x2998930()*0.0874348);
}

double NNfunction_ss_cLuR::synapse0x299b7d0() {
   return (neuron0x2998c70()*-0.802879);
}

double NNfunction_ss_cLuR::synapse0x299b810() {
   return (neuron0x2998fb0()*0.281539);
}

double NNfunction_ss_cLuR::synapse0x299b850() {
   return (neuron0x29992f0()*0.349612);
}

double NNfunction_ss_cLuR::synapse0x2996060() {
   return (neuron0x2999630()*0.102032);
}

double NNfunction_ss_cLuR::synapse0x29960a0() {
   return (neuron0x2999b90()*0.0691019);
}

double NNfunction_ss_cLuR::synapse0x2751450() {
   return (neuron0x2999db0()*0.489065);
}

double NNfunction_ss_cLuR::synapse0x2751490() {
   return (neuron0x299a0f0()*-0.0854103);
}

double NNfunction_ss_cLuR::synapse0x299bab0() {
   return (neuron0x299a430()*-0.727951);
}

double NNfunction_ss_cLuR::synapse0x299baf0() {
   return (neuron0x299a770()*-0.206517);
}

double NNfunction_ss_cLuR::synapse0x299bb30() {
   return (neuron0x299aab0()*0.496375);
}

double NNfunction_ss_cLuR::synapse0x299bb70() {
   return (neuron0x299adf0()*0.421641);
}

double NNfunction_ss_cLuR::synapse0x299bef0() {
   return (neuron0x2996230()*0.157772);
}

double NNfunction_ss_cLuR::synapse0x299bf30() {
   return (neuron0x2996570()*-0.158504);
}

double NNfunction_ss_cLuR::synapse0x299bf70() {
   return (neuron0x29968b0()*0.0866416);
}

double NNfunction_ss_cLuR::synapse0x299bfb0() {
   return (neuron0x2996bf0()*0.549961);
}

double NNfunction_ss_cLuR::synapse0x299bff0() {
   return (neuron0x2996f30()*-0.580193);
}

double NNfunction_ss_cLuR::synapse0x299c030() {
   return (neuron0x2997270()*-0.319086);
}

double NNfunction_ss_cLuR::synapse0x299c070() {
   return (neuron0x29975b0()*-0.0141495);
}

double NNfunction_ss_cLuR::synapse0x299c0b0() {
   return (neuron0x29978f0()*-0.791776);
}

double NNfunction_ss_cLuR::synapse0x299c0f0() {
   return (neuron0x2997c30()*0.0814869);
}

double NNfunction_ss_cLuR::synapse0x299b9a0() {
   return (neuron0x2997f70()*0.0453508);
}

double NNfunction_ss_cLuR::synapse0x299b9e0() {
   return (neuron0x29982b0()*0.121222);
}

double NNfunction_ss_cLuR::synapse0x299ba20() {
   return (neuron0x29985f0()*0.357181);
}

double NNfunction_ss_cLuR::synapse0x299ba60() {
   return (neuron0x2998930()*-0.943023);
}

double NNfunction_ss_cLuR::synapse0x299c340() {
   return (neuron0x2998c70()*0.058706);
}

double NNfunction_ss_cLuR::synapse0x299c380() {
   return (neuron0x2998fb0()*0.112585);
}

double NNfunction_ss_cLuR::synapse0x299c3c0() {
   return (neuron0x29992f0()*-0.370474);
}

double NNfunction_ss_cLuR::synapse0x299bd40() {
   return (neuron0x2999630()*-0.57234);
}

double NNfunction_ss_cLuR::synapse0x299bd80() {
   return (neuron0x2999b90()*-0.465943);
}

double NNfunction_ss_cLuR::synapse0x299c510() {
   return (neuron0x2999db0()*0.267965);
}

double NNfunction_ss_cLuR::synapse0x299c550() {
   return (neuron0x299a0f0()*0.0609268);
}

double NNfunction_ss_cLuR::synapse0x299c590() {
   return (neuron0x299a430()*-0.218902);
}

double NNfunction_ss_cLuR::synapse0x299c5d0() {
   return (neuron0x299a770()*0.31129);
}

double NNfunction_ss_cLuR::synapse0x299c610() {
   return (neuron0x299aab0()*0.191736);
}

double NNfunction_ss_cLuR::synapse0x299c650() {
   return (neuron0x299adf0()*0.0325367);
}

double NNfunction_ss_cLuR::synapse0x299c9d0() {
   return (neuron0x2996230()*0.184487);
}

double NNfunction_ss_cLuR::synapse0x299ca10() {
   return (neuron0x2996570()*0.445237);
}

double NNfunction_ss_cLuR::synapse0x299ca50() {
   return (neuron0x29968b0()*-0.67505);
}

double NNfunction_ss_cLuR::synapse0x299ca90() {
   return (neuron0x2996bf0()*0.395277);
}

double NNfunction_ss_cLuR::synapse0x299cad0() {
   return (neuron0x2996f30()*0.953743);
}

double NNfunction_ss_cLuR::synapse0x299cb10() {
   return (neuron0x2997270()*-0.15303);
}

double NNfunction_ss_cLuR::synapse0x299cb50() {
   return (neuron0x29975b0()*1.09978);
}

double NNfunction_ss_cLuR::synapse0x299cb90() {
   return (neuron0x29978f0()*0.305934);
}

double NNfunction_ss_cLuR::synapse0x299cbd0() {
   return (neuron0x2997c30()*0.902607);
}

double NNfunction_ss_cLuR::synapse0x299cc10() {
   return (neuron0x2997f70()*0.498699);
}

double NNfunction_ss_cLuR::synapse0x299cc50() {
   return (neuron0x29982b0()*-0.278903);
}

double NNfunction_ss_cLuR::synapse0x299cc90() {
   return (neuron0x29985f0()*0.689559);
}

double NNfunction_ss_cLuR::synapse0x299ccd0() {
   return (neuron0x2998930()*0.699051);
}

double NNfunction_ss_cLuR::synapse0x299cd10() {
   return (neuron0x2998c70()*-0.109335);
}

double NNfunction_ss_cLuR::synapse0x299cd50() {
   return (neuron0x2998fb0()*-0.332154);
}

double NNfunction_ss_cLuR::synapse0x299cd90() {
   return (neuron0x29992f0()*0.044517);
}

double NNfunction_ss_cLuR::synapse0x299c820() {
   return (neuron0x2999630()*-0.170364);
}

double NNfunction_ss_cLuR::synapse0x299c860() {
   return (neuron0x2999b90()*-1.26816);
}

double NNfunction_ss_cLuR::synapse0x27505a0() {
   return (neuron0x2999db0()*0.0678986);
}

double NNfunction_ss_cLuR::synapse0x275f3a0() {
   return (neuron0x299a0f0()*-0.597025);
}

double NNfunction_ss_cLuR::synapse0x275f3e0() {
   return (neuron0x299a430()*0.148734);
}

double NNfunction_ss_cLuR::synapse0x29852c0() {
   return (neuron0x299a770()*0.716771);
}

double NNfunction_ss_cLuR::synapse0x2985300() {
   return (neuron0x299aab0()*0.0143252);
}

double NNfunction_ss_cLuR::synapse0x2985340() {
   return (neuron0x299adf0()*-0.731585);
}

double NNfunction_ss_cLuR::synapse0x275fc20() {
   return (neuron0x2996230()*0.0443216);
}

double NNfunction_ss_cLuR::synapse0x299c2c0() {
   return (neuron0x2996570()*-0.428023);
}

double NNfunction_ss_cLuR::synapse0x299c300() {
   return (neuron0x29968b0()*0.707139);
}

double NNfunction_ss_cLuR::synapse0x299cee0() {
   return (neuron0x2996bf0()*-0.893752);
}

double NNfunction_ss_cLuR::synapse0x299cf20() {
   return (neuron0x2996f30()*-0.0975449);
}

double NNfunction_ss_cLuR::synapse0x299cf60() {
   return (neuron0x2997270()*0.539518);
}

double NNfunction_ss_cLuR::synapse0x299cfa0() {
   return (neuron0x29975b0()*1.63853);
}

double NNfunction_ss_cLuR::synapse0x299cfe0() {
   return (neuron0x29978f0()*-0.252552);
}

double NNfunction_ss_cLuR::synapse0x299d020() {
   return (neuron0x2997c30()*-0.495053);
}

double NNfunction_ss_cLuR::synapse0x299d060() {
   return (neuron0x2997f70()*-0.31404);
}

double NNfunction_ss_cLuR::synapse0x299d0a0() {
   return (neuron0x29982b0()*0.914265);
}

double NNfunction_ss_cLuR::synapse0x299d0e0() {
   return (neuron0x29985f0()*0.352348);
}

double NNfunction_ss_cLuR::synapse0x299d120() {
   return (neuron0x2998930()*0.441588);
}

double NNfunction_ss_cLuR::synapse0x299d160() {
   return (neuron0x2998c70()*0.0648814);
}

double NNfunction_ss_cLuR::synapse0x299d1a0() {
   return (neuron0x2998fb0()*-0.214961);
}

double NNfunction_ss_cLuR::synapse0x299d1e0() {
   return (neuron0x29992f0()*-0.674147);
}

double NNfunction_ss_cLuR::synapse0x2996170() {
   return (neuron0x2999630()*0.234795);
}

double NNfunction_ss_cLuR::synapse0x29961b0() {
   return (neuron0x2999b90()*-0.458104);
}

double NNfunction_ss_cLuR::synapse0x29961f0() {
   return (neuron0x2999db0()*-0.00689808);
}

double NNfunction_ss_cLuR::synapse0x299d330() {
   return (neuron0x299a0f0()*-1.1629);
}

double NNfunction_ss_cLuR::synapse0x299d370() {
   return (neuron0x299a430()*-0.278746);
}

double NNfunction_ss_cLuR::synapse0x299d3b0() {
   return (neuron0x299a770()*0.622103);
}

double NNfunction_ss_cLuR::synapse0x299d3f0() {
   return (neuron0x299aab0()*-0.454319);
}

double NNfunction_ss_cLuR::synapse0x299d430() {
   return (neuron0x299adf0()*-0.474787);
}

double NNfunction_ss_cLuR::synapse0x299d7b0() {
   return (neuron0x2996230()*-0.0915794);
}

double NNfunction_ss_cLuR::synapse0x299d7f0() {
   return (neuron0x2996570()*-0.0260645);
}

double NNfunction_ss_cLuR::synapse0x299d830() {
   return (neuron0x29968b0()*0.129304);
}

double NNfunction_ss_cLuR::synapse0x299d870() {
   return (neuron0x2996bf0()*-0.00102142);
}

double NNfunction_ss_cLuR::synapse0x299d8b0() {
   return (neuron0x2996f30()*-0.174091);
}

double NNfunction_ss_cLuR::synapse0x299d8f0() {
   return (neuron0x2997270()*0.0871245);
}

double NNfunction_ss_cLuR::synapse0x299d930() {
   return (neuron0x29975b0()*-0.0012656);
}

double NNfunction_ss_cLuR::synapse0x299d970() {
   return (neuron0x29978f0()*0.00375957);
}

double NNfunction_ss_cLuR::synapse0x299d9b0() {
   return (neuron0x2997c30()*0.091736);
}

double NNfunction_ss_cLuR::synapse0x299d9f0() {
   return (neuron0x2997f70()*-0.0603595);
}

double NNfunction_ss_cLuR::synapse0x299da30() {
   return (neuron0x29982b0()*-0.0504816);
}

double NNfunction_ss_cLuR::synapse0x299da70() {
   return (neuron0x29985f0()*0.138621);
}

double NNfunction_ss_cLuR::synapse0x299dab0() {
   return (neuron0x2998930()*-0.799646);
}

double NNfunction_ss_cLuR::synapse0x299daf0() {
   return (neuron0x2998c70()*0.137856);
}

double NNfunction_ss_cLuR::synapse0x299db30() {
   return (neuron0x2998fb0()*-0.304364);
}

double NNfunction_ss_cLuR::synapse0x299db70() {
   return (neuron0x29992f0()*0.0616343);
}

double NNfunction_ss_cLuR::synapse0x299d600() {
   return (neuron0x2999630()*-0.109885);
}

double NNfunction_ss_cLuR::synapse0x299d640() {
   return (neuron0x2999b90()*-0.229593);
}

double NNfunction_ss_cLuR::synapse0x299dcc0() {
   return (neuron0x2999db0()*0.359509);
}

double NNfunction_ss_cLuR::synapse0x299dd00() {
   return (neuron0x299a0f0()*0.210875);
}

double NNfunction_ss_cLuR::synapse0x299dd40() {
   return (neuron0x299a430()*0.0688803);
}

double NNfunction_ss_cLuR::synapse0x299dd80() {
   return (neuron0x299a770()*0.29469);
}

double NNfunction_ss_cLuR::synapse0x299ddc0() {
   return (neuron0x299aab0()*-0.0833966);
}

double NNfunction_ss_cLuR::synapse0x299de00() {
   return (neuron0x299adf0()*0.103893);
}

double NNfunction_ss_cLuR::synapse0x299e180() {
   return (neuron0x2996230()*0.0619128);
}

double NNfunction_ss_cLuR::synapse0x299e1c0() {
   return (neuron0x2996570()*-0.118113);
}

double NNfunction_ss_cLuR::synapse0x299e200() {
   return (neuron0x29968b0()*0.479897);
}

double NNfunction_ss_cLuR::synapse0x299e240() {
   return (neuron0x2996bf0()*0.331666);
}

double NNfunction_ss_cLuR::synapse0x299e280() {
   return (neuron0x2996f30()*0.260641);
}

double NNfunction_ss_cLuR::synapse0x299e2c0() {
   return (neuron0x2997270()*0.231933);
}

double NNfunction_ss_cLuR::synapse0x299e300() {
   return (neuron0x29975b0()*0.227358);
}

double NNfunction_ss_cLuR::synapse0x299e340() {
   return (neuron0x29978f0()*0.221984);
}

double NNfunction_ss_cLuR::synapse0x299e380() {
   return (neuron0x2997c30()*0.178671);
}

double NNfunction_ss_cLuR::synapse0x275f6f0() {
   return (neuron0x2997f70()*0.0414968);
}

double NNfunction_ss_cLuR::synapse0x275f730() {
   return (neuron0x29982b0()*0.216971);
}

double NNfunction_ss_cLuR::synapse0x275f770() {
   return (neuron0x29985f0()*-0.236056);
}

double NNfunction_ss_cLuR::synapse0x275f7b0() {
   return (neuron0x2998930()*-0.66619);
}

double NNfunction_ss_cLuR::synapse0x275f7f0() {
   return (neuron0x2998c70()*-0.0744105);
}

double NNfunction_ss_cLuR::synapse0x275f830() {
   return (neuron0x2998fb0()*-0.909524);
}

double NNfunction_ss_cLuR::synapse0x275f870() {
   return (neuron0x29992f0()*0.296558);
}

double NNfunction_ss_cLuR::synapse0x299dfd0() {
   return (neuron0x2999630()*-0.0393753);
}

double NNfunction_ss_cLuR::synapse0x299e010() {
   return (neuron0x2999b90()*0.160649);
}

double NNfunction_ss_cLuR::synapse0x275f9c0() {
   return (neuron0x2999db0()*-0.0454423);
}

double NNfunction_ss_cLuR::synapse0x275fa00() {
   return (neuron0x299a0f0()*-0.0795639);
}

double NNfunction_ss_cLuR::synapse0x275fa40() {
   return (neuron0x299a430()*-0.200172);
}

double NNfunction_ss_cLuR::synapse0x275fa80() {
   return (neuron0x299a770()*0.802836);
}

double NNfunction_ss_cLuR::synapse0x275fac0() {
   return (neuron0x299aab0()*0.073661);
}

double NNfunction_ss_cLuR::synapse0x299ebd0() {
   return (neuron0x299adf0()*-0.0713143);
}

double NNfunction_ss_cLuR::synapse0x299ef50() {
   return (neuron0x2996230()*0.215541);
}

double NNfunction_ss_cLuR::synapse0x299ef90() {
   return (neuron0x2996570()*0.549619);
}

double NNfunction_ss_cLuR::synapse0x299efd0() {
   return (neuron0x29968b0()*-0.619851);
}

double NNfunction_ss_cLuR::synapse0x299f010() {
   return (neuron0x2996bf0()*-1.37711);
}

double NNfunction_ss_cLuR::synapse0x299f050() {
   return (neuron0x2996f30()*0.0354645);
}

double NNfunction_ss_cLuR::synapse0x299f090() {
   return (neuron0x2997270()*-0.30203);
}

double NNfunction_ss_cLuR::synapse0x299f0d0() {
   return (neuron0x29975b0()*-0.654736);
}

double NNfunction_ss_cLuR::synapse0x299f110() {
   return (neuron0x29978f0()*0.25242);
}

double NNfunction_ss_cLuR::synapse0x299f150() {
   return (neuron0x2997c30()*-0.44354);
}

double NNfunction_ss_cLuR::synapse0x299f190() {
   return (neuron0x2997f70()*0.364588);
}

double NNfunction_ss_cLuR::synapse0x299f1d0() {
   return (neuron0x29982b0()*-0.52017);
}

double NNfunction_ss_cLuR::synapse0x299f210() {
   return (neuron0x29985f0()*-0.204887);
}

double NNfunction_ss_cLuR::synapse0x299f250() {
   return (neuron0x2998930()*-0.88677);
}

double NNfunction_ss_cLuR::synapse0x299f290() {
   return (neuron0x2998c70()*-0.147184);
}

double NNfunction_ss_cLuR::synapse0x299f2d0() {
   return (neuron0x2998fb0()*-1.41538);
}

double NNfunction_ss_cLuR::synapse0x299f310() {
   return (neuron0x29992f0()*-0.0459833);
}

double NNfunction_ss_cLuR::synapse0x299eda0() {
   return (neuron0x2999630()*0.716808);
}

double NNfunction_ss_cLuR::synapse0x299ede0() {
   return (neuron0x2999b90()*0.206316);
}

double NNfunction_ss_cLuR::synapse0x299f460() {
   return (neuron0x2999db0()*0.0342378);
}

double NNfunction_ss_cLuR::synapse0x299f4a0() {
   return (neuron0x299a0f0()*-0.146231);
}

double NNfunction_ss_cLuR::synapse0x299f4e0() {
   return (neuron0x299a430()*0.368634);
}

double NNfunction_ss_cLuR::synapse0x299f520() {
   return (neuron0x299a770()*-0.0345846);
}

double NNfunction_ss_cLuR::synapse0x299f560() {
   return (neuron0x299aab0()*0.453946);
}

double NNfunction_ss_cLuR::synapse0x299f5a0() {
   return (neuron0x299adf0()*0.17878);
}

double NNfunction_ss_cLuR::synapse0x299f920() {
   return (neuron0x2996230()*0.014933);
}

double NNfunction_ss_cLuR::synapse0x299f960() {
   return (neuron0x2996570()*0.0146522);
}

double NNfunction_ss_cLuR::synapse0x299f9a0() {
   return (neuron0x29968b0()*-0.0382143);
}

double NNfunction_ss_cLuR::synapse0x299f9e0() {
   return (neuron0x2996bf0()*0.045632);
}

double NNfunction_ss_cLuR::synapse0x299fa20() {
   return (neuron0x2996f30()*0.000348918);
}

double NNfunction_ss_cLuR::synapse0x299fa60() {
   return (neuron0x2997270()*-0.0190877);
}

double NNfunction_ss_cLuR::synapse0x299faa0() {
   return (neuron0x29975b0()*-0.0285755);
}

double NNfunction_ss_cLuR::synapse0x299fae0() {
   return (neuron0x29978f0()*0.012273);
}

double NNfunction_ss_cLuR::synapse0x299fb20() {
   return (neuron0x2997c30()*-0.00871227);
}

double NNfunction_ss_cLuR::synapse0x299fb60() {
   return (neuron0x2997f70()*-0.00907106);
}

double NNfunction_ss_cLuR::synapse0x299fba0() {
   return (neuron0x29982b0()*-0.0223361);
}

double NNfunction_ss_cLuR::synapse0x299fbe0() {
   return (neuron0x29985f0()*-0.0197918);
}

double NNfunction_ss_cLuR::synapse0x299fc20() {
   return (neuron0x2998930()*0.767213);
}

double NNfunction_ss_cLuR::synapse0x299fc60() {
   return (neuron0x2998c70()*0.012775);
}

double NNfunction_ss_cLuR::synapse0x299fca0() {
   return (neuron0x2998fb0()*0.756785);
}

double NNfunction_ss_cLuR::synapse0x299fce0() {
   return (neuron0x29992f0()*-0.00495911);
}

double NNfunction_ss_cLuR::synapse0x299f770() {
   return (neuron0x2999630()*0.0124102);
}

double NNfunction_ss_cLuR::synapse0x299f7b0() {
   return (neuron0x2999b90()*-0.00627538);
}

double NNfunction_ss_cLuR::synapse0x299fe30() {
   return (neuron0x2999db0()*-0.00264523);
}

double NNfunction_ss_cLuR::synapse0x299fe70() {
   return (neuron0x299a0f0()*0.00300107);
}

double NNfunction_ss_cLuR::synapse0x299feb0() {
   return (neuron0x299a430()*-0.0050285);
}

double NNfunction_ss_cLuR::synapse0x299fef0() {
   return (neuron0x299a770()*-0.0110383);
}

double NNfunction_ss_cLuR::synapse0x299ff30() {
   return (neuron0x299aab0()*0.0126285);
}

double NNfunction_ss_cLuR::synapse0x299ff70() {
   return (neuron0x299adf0()*0.00444439);
}

double NNfunction_ss_cLuR::synapse0x2999a80() {
   return (neuron0x2996230()*0.0437769);
}

double NNfunction_ss_cLuR::synapse0x2999ac0() {
   return (neuron0x2996570()*0.13671);
}

double NNfunction_ss_cLuR::synapse0x2999b00() {
   return (neuron0x29968b0()*0.183689);
}

double NNfunction_ss_cLuR::synapse0x2999b40() {
   return (neuron0x2996bf0()*-0.2438);
}

double NNfunction_ss_cLuR::synapse0x29a0500() {
   return (neuron0x2996f30()*0.27706);
}

double NNfunction_ss_cLuR::synapse0x29a0540() {
   return (neuron0x2997270()*0.193993);
}

double NNfunction_ss_cLuR::synapse0x29a0580() {
   return (neuron0x29975b0()*0.257937);
}

double NNfunction_ss_cLuR::synapse0x29a05c0() {
   return (neuron0x29978f0()*0.246367);
}

double NNfunction_ss_cLuR::synapse0x29a0600() {
   return (neuron0x2997c30()*0.477084);
}

double NNfunction_ss_cLuR::synapse0x29a0640() {
   return (neuron0x2997f70()*0.193083);
}

double NNfunction_ss_cLuR::synapse0x29a0680() {
   return (neuron0x29982b0()*0.427033);
}

double NNfunction_ss_cLuR::synapse0x29a06c0() {
   return (neuron0x29985f0()*0.0661581);
}

double NNfunction_ss_cLuR::synapse0x29a0700() {
   return (neuron0x2998930()*-0.0291152);
}

double NNfunction_ss_cLuR::synapse0x29a0740() {
   return (neuron0x2998c70()*0.0239315);
}

double NNfunction_ss_cLuR::synapse0x29a0780() {
   return (neuron0x2998fb0()*-0.443823);
}

double NNfunction_ss_cLuR::synapse0x29a07c0() {
   return (neuron0x29992f0()*0.0495546);
}

double NNfunction_ss_cLuR::synapse0x29a0140() {
   return (neuron0x2999630()*0.0820491);
}

double NNfunction_ss_cLuR::synapse0x29a0180() {
   return (neuron0x2999b90()*0.0183726);
}

double NNfunction_ss_cLuR::synapse0x29a0910() {
   return (neuron0x2999db0()*-0.00420273);
}

double NNfunction_ss_cLuR::synapse0x29a0950() {
   return (neuron0x299a0f0()*-0.0274062);
}

double NNfunction_ss_cLuR::synapse0x29a0990() {
   return (neuron0x299a430()*0.187288);
}

double NNfunction_ss_cLuR::synapse0x29a09d0() {
   return (neuron0x299a770()*0.0132202);
}

double NNfunction_ss_cLuR::synapse0x29a0a10() {
   return (neuron0x299aab0()*-0.0925159);
}

double NNfunction_ss_cLuR::synapse0x29a0a50() {
   return (neuron0x299adf0()*-0.00819842);
}

double NNfunction_ss_cLuR::synapse0x29a0dd0() {
   return (neuron0x2996230()*0.015041);
}

double NNfunction_ss_cLuR::synapse0x29a0e10() {
   return (neuron0x2996570()*0.0768817);
}

double NNfunction_ss_cLuR::synapse0x29a0e50() {
   return (neuron0x29968b0()*0.0799503);
}

double NNfunction_ss_cLuR::synapse0x29a0e90() {
   return (neuron0x2996bf0()*-1.46825);
}

double NNfunction_ss_cLuR::synapse0x29a0ed0() {
   return (neuron0x2996f30()*0.347793);
}

double NNfunction_ss_cLuR::synapse0x29a0f10() {
   return (neuron0x2997270()*0.0417449);
}

double NNfunction_ss_cLuR::synapse0x29a0f50() {
   return (neuron0x29975b0()*-0.167758);
}

double NNfunction_ss_cLuR::synapse0x29a0f90() {
   return (neuron0x29978f0()*-0.34512);
}

double NNfunction_ss_cLuR::synapse0x29a0fd0() {
   return (neuron0x2997c30()*-0.0979207);
}

double NNfunction_ss_cLuR::synapse0x29a1010() {
   return (neuron0x2997f70()*-0.387583);
}

double NNfunction_ss_cLuR::synapse0x29a1050() {
   return (neuron0x29982b0()*0.241354);
}

double NNfunction_ss_cLuR::synapse0x29a1090() {
   return (neuron0x29985f0()*-0.261179);
}

double NNfunction_ss_cLuR::synapse0x29a10d0() {
   return (neuron0x2998930()*-1.24715);
}

double NNfunction_ss_cLuR::synapse0x29a1110() {
   return (neuron0x2998c70()*0.312463);
}

double NNfunction_ss_cLuR::synapse0x29a1150() {
   return (neuron0x2998fb0()*-0.947828);
}

double NNfunction_ss_cLuR::synapse0x29a1190() {
   return (neuron0x29992f0()*-0.288288);
}

double NNfunction_ss_cLuR::synapse0x29a0c20() {
   return (neuron0x2999630()*-0.246438);
}

double NNfunction_ss_cLuR::synapse0x29a0c60() {
   return (neuron0x2999b90()*0.133023);
}

double NNfunction_ss_cLuR::synapse0x29a12e0() {
   return (neuron0x2999db0()*-0.182023);
}

double NNfunction_ss_cLuR::synapse0x29a1320() {
   return (neuron0x299a0f0()*0.230157);
}

double NNfunction_ss_cLuR::synapse0x29a1360() {
   return (neuron0x299a430()*-0.146571);
}

double NNfunction_ss_cLuR::synapse0x29a13a0() {
   return (neuron0x299a770()*0.224456);
}

double NNfunction_ss_cLuR::synapse0x29a13e0() {
   return (neuron0x299aab0()*-0.0188061);
}

double NNfunction_ss_cLuR::synapse0x29a1420() {
   return (neuron0x299adf0()*0.273418);
}

double NNfunction_ss_cLuR::synapse0x29a17a0() {
   return (neuron0x2996230()*0.000621734);
}

double NNfunction_ss_cLuR::synapse0x29a17e0() {
   return (neuron0x2996570()*0.0292754);
}

double NNfunction_ss_cLuR::synapse0x29a1820() {
   return (neuron0x29968b0()*-0.0698183);
}

double NNfunction_ss_cLuR::synapse0x29a1860() {
   return (neuron0x2996bf0()*0.0621193);
}

double NNfunction_ss_cLuR::synapse0x29a18a0() {
   return (neuron0x2996f30()*-0.0167987);
}

double NNfunction_ss_cLuR::synapse0x29a18e0() {
   return (neuron0x2997270()*-0.0192304);
}

double NNfunction_ss_cLuR::synapse0x29a1920() {
   return (neuron0x29975b0()*-0.0480823);
}

double NNfunction_ss_cLuR::synapse0x29a1960() {
   return (neuron0x29978f0()*-0.012307);
}

double NNfunction_ss_cLuR::synapse0x29a19a0() {
   return (neuron0x2997c30()*-0.00924766);
}

double NNfunction_ss_cLuR::synapse0x29a19e0() {
   return (neuron0x2997f70()*-0.0416298);
}

double NNfunction_ss_cLuR::synapse0x29a1a20() {
   return (neuron0x29982b0()*-0.0514426);
}

double NNfunction_ss_cLuR::synapse0x29a1a60() {
   return (neuron0x29985f0()*0.0133069);
}

double NNfunction_ss_cLuR::synapse0x29a1aa0() {
   return (neuron0x2998930()*1.19818);
}

double NNfunction_ss_cLuR::synapse0x29a1ae0() {
   return (neuron0x2998c70()*0.0248677);
}

double NNfunction_ss_cLuR::synapse0x29a1b20() {
   return (neuron0x2998fb0()*-1.0063);
}

double NNfunction_ss_cLuR::synapse0x29a1b60() {
   return (neuron0x29992f0()*0.0179069);
}

double NNfunction_ss_cLuR::synapse0x29a15f0() {
   return (neuron0x2999630()*-0.0165159);
}

double NNfunction_ss_cLuR::synapse0x29a1630() {
   return (neuron0x2999b90()*-0.0311255);
}

double NNfunction_ss_cLuR::synapse0x299e3c0() {
   return (neuron0x2999db0()*-0.0433982);
}

double NNfunction_ss_cLuR::synapse0x299e400() {
   return (neuron0x299a0f0()*-0.0169625);
}

double NNfunction_ss_cLuR::synapse0x299e440() {
   return (neuron0x299a430()*-0.00709586);
}

double NNfunction_ss_cLuR::synapse0x299e480() {
   return (neuron0x299a770()*0.0253929);
}

double NNfunction_ss_cLuR::synapse0x299e4c0() {
   return (neuron0x299aab0()*-0.00634696);
}

double NNfunction_ss_cLuR::synapse0x299e500() {
   return (neuron0x299adf0()*0.0323587);
}

double NNfunction_ss_cLuR::synapse0x299e880() {
   return (neuron0x2996230()*0.504502);
}

double NNfunction_ss_cLuR::synapse0x299e8c0() {
   return (neuron0x2996570()*-0.507969);
}

double NNfunction_ss_cLuR::synapse0x299e900() {
   return (neuron0x29968b0()*0.237323);
}

double NNfunction_ss_cLuR::synapse0x299e940() {
   return (neuron0x2996bf0()*-0.108503);
}

double NNfunction_ss_cLuR::synapse0x299e980() {
   return (neuron0x2996f30()*-0.488165);
}

double NNfunction_ss_cLuR::synapse0x299e9c0() {
   return (neuron0x2997270()*-0.470533);
}

double NNfunction_ss_cLuR::synapse0x299ea00() {
   return (neuron0x29975b0()*0.155885);
}

double NNfunction_ss_cLuR::synapse0x299ea40() {
   return (neuron0x29978f0()*-0.356114);
}

double NNfunction_ss_cLuR::synapse0x299ea80() {
   return (neuron0x2997c30()*-0.166528);
}

double NNfunction_ss_cLuR::synapse0x299eac0() {
   return (neuron0x2997f70()*-0.855369);
}

double NNfunction_ss_cLuR::synapse0x299eb00() {
   return (neuron0x29982b0()*0.161165);
}

double NNfunction_ss_cLuR::synapse0x299eb40() {
   return (neuron0x29985f0()*-0.490632);
}

double NNfunction_ss_cLuR::synapse0x299eb80() {
   return (neuron0x2998930()*-0.932292);
}

double NNfunction_ss_cLuR::synapse0x29a2cc0() {
   return (neuron0x2998c70()*0.0809871);
}

double NNfunction_ss_cLuR::synapse0x29a2d00() {
   return (neuron0x2998fb0()*-0.306514);
}

double NNfunction_ss_cLuR::synapse0x29a2d40() {
   return (neuron0x29992f0()*-0.60379);
}

double NNfunction_ss_cLuR::synapse0x299e6d0() {
   return (neuron0x2999630()*0.537334);
}

double NNfunction_ss_cLuR::synapse0x299e710() {
   return (neuron0x2999b90()*-0.806572);
}

double NNfunction_ss_cLuR::synapse0x29a2e90() {
   return (neuron0x2999db0()*-0.026711);
}

double NNfunction_ss_cLuR::synapse0x29a2ed0() {
   return (neuron0x299a0f0()*-0.234706);
}

double NNfunction_ss_cLuR::synapse0x29a2f10() {
   return (neuron0x299a430()*-0.174566);
}

double NNfunction_ss_cLuR::synapse0x29a2f50() {
   return (neuron0x299a770()*0.30775);
}

double NNfunction_ss_cLuR::synapse0x29a2f90() {
   return (neuron0x299aab0()*0.000178223);
}

double NNfunction_ss_cLuR::synapse0x29a2fd0() {
   return (neuron0x299adf0()*0.0588289);
}

double NNfunction_ss_cLuR::synapse0x29a3350() {
   return (neuron0x2996230()*-0.312707);
}

double NNfunction_ss_cLuR::synapse0x29a3390() {
   return (neuron0x2996570()*-0.161005);
}

double NNfunction_ss_cLuR::synapse0x29a33d0() {
   return (neuron0x29968b0()*-0.524702);
}

double NNfunction_ss_cLuR::synapse0x29a3410() {
   return (neuron0x2996bf0()*-1.18469);
}

double NNfunction_ss_cLuR::synapse0x29a3450() {
   return (neuron0x2996f30()*-0.413942);
}

double NNfunction_ss_cLuR::synapse0x29a3490() {
   return (neuron0x2997270()*0.152184);
}

double NNfunction_ss_cLuR::synapse0x29a34d0() {
   return (neuron0x29975b0()*0.570239);
}

double NNfunction_ss_cLuR::synapse0x29a3510() {
   return (neuron0x29978f0()*-0.0217515);
}

double NNfunction_ss_cLuR::synapse0x29a3550() {
   return (neuron0x2997c30()*-0.174549);
}

double NNfunction_ss_cLuR::synapse0x29a3590() {
   return (neuron0x2997f70()*1.17911);
}

double NNfunction_ss_cLuR::synapse0x29a35d0() {
   return (neuron0x29982b0()*0.365735);
}

double NNfunction_ss_cLuR::synapse0x29a3610() {
   return (neuron0x29985f0()*0.171708);
}

double NNfunction_ss_cLuR::synapse0x29a3650() {
   return (neuron0x2998930()*-0.176953);
}

double NNfunction_ss_cLuR::synapse0x29a3690() {
   return (neuron0x2998c70()*-0.263621);
}

double NNfunction_ss_cLuR::synapse0x29a36d0() {
   return (neuron0x2998fb0()*-1.43899);
}

double NNfunction_ss_cLuR::synapse0x29a3710() {
   return (neuron0x29992f0()*0.856632);
}

double NNfunction_ss_cLuR::synapse0x29a31a0() {
   return (neuron0x2999630()*-0.151689);
}

double NNfunction_ss_cLuR::synapse0x29a31e0() {
   return (neuron0x2999b90()*0.316946);
}

double NNfunction_ss_cLuR::synapse0x29a3860() {
   return (neuron0x2999db0()*-0.140855);
}

double NNfunction_ss_cLuR::synapse0x29a38a0() {
   return (neuron0x299a0f0()*0.604855);
}

double NNfunction_ss_cLuR::synapse0x29a38e0() {
   return (neuron0x299a430()*-0.608764);
}

double NNfunction_ss_cLuR::synapse0x29a3920() {
   return (neuron0x299a770()*0.200772);
}

double NNfunction_ss_cLuR::synapse0x29a3960() {
   return (neuron0x299aab0()*-0.202258);
}

double NNfunction_ss_cLuR::synapse0x29a39a0() {
   return (neuron0x299adf0()*0.136108);
}

double NNfunction_ss_cLuR::synapse0x29a3d20() {
   return (neuron0x2996230()*-0.366563);
}

double NNfunction_ss_cLuR::synapse0x29a3d60() {
   return (neuron0x2996570()*0.0365174);
}

double NNfunction_ss_cLuR::synapse0x29a3da0() {
   return (neuron0x29968b0()*-1.06692);
}

double NNfunction_ss_cLuR::synapse0x29a3de0() {
   return (neuron0x2996bf0()*-0.411409);
}

double NNfunction_ss_cLuR::synapse0x29a3e20() {
   return (neuron0x2996f30()*-1.04283);
}

double NNfunction_ss_cLuR::synapse0x29a3e60() {
   return (neuron0x2997270()*0.781262);
}

double NNfunction_ss_cLuR::synapse0x29a3ea0() {
   return (neuron0x29975b0()*-0.478411);
}

double NNfunction_ss_cLuR::synapse0x29a3ee0() {
   return (neuron0x29978f0()*-0.686898);
}

double NNfunction_ss_cLuR::synapse0x29a3f20() {
   return (neuron0x2997c30()*-0.699436);
}

double NNfunction_ss_cLuR::synapse0x29a3f60() {
   return (neuron0x2997f70()*-0.0454033);
}

double NNfunction_ss_cLuR::synapse0x29a3fa0() {
   return (neuron0x29982b0()*0.172711);
}

double NNfunction_ss_cLuR::synapse0x29a3fe0() {
   return (neuron0x29985f0()*0.0668729);
}

double NNfunction_ss_cLuR::synapse0x29a4020() {
   return (neuron0x2998930()*-0.138429);
}

double NNfunction_ss_cLuR::synapse0x29a4060() {
   return (neuron0x2998c70()*-0.456082);
}

double NNfunction_ss_cLuR::synapse0x29a40a0() {
   return (neuron0x2998fb0()*-0.0264103);
}

double NNfunction_ss_cLuR::synapse0x29a40e0() {
   return (neuron0x29992f0()*0.917749);
}

double NNfunction_ss_cLuR::synapse0x29a3b70() {
   return (neuron0x2999630()*-0.0229518);
}

double NNfunction_ss_cLuR::synapse0x29a3bb0() {
   return (neuron0x2999b90()*0.0260269);
}

double NNfunction_ss_cLuR::synapse0x29a4230() {
   return (neuron0x2999db0()*-0.815387);
}

double NNfunction_ss_cLuR::synapse0x29a4270() {
   return (neuron0x299a0f0()*0.518175);
}

double NNfunction_ss_cLuR::synapse0x29a42b0() {
   return (neuron0x299a430()*-0.308063);
}

double NNfunction_ss_cLuR::synapse0x29a42f0() {
   return (neuron0x299a770()*-0.397294);
}

double NNfunction_ss_cLuR::synapse0x29a4330() {
   return (neuron0x299aab0()*0.363501);
}

double NNfunction_ss_cLuR::synapse0x29a4370() {
   return (neuron0x299adf0()*-0.146601);
}

double NNfunction_ss_cLuR::synapse0x29a46f0() {
   return (neuron0x2996230()*0.215166);
}

double NNfunction_ss_cLuR::synapse0x29a4730() {
   return (neuron0x2996570()*0.202103);
}

double NNfunction_ss_cLuR::synapse0x29a4770() {
   return (neuron0x29968b0()*-0.0461786);
}

double NNfunction_ss_cLuR::synapse0x29a47b0() {
   return (neuron0x2996bf0()*-1.39515);
}

double NNfunction_ss_cLuR::synapse0x29a47f0() {
   return (neuron0x2996f30()*-0.032033);
}

double NNfunction_ss_cLuR::synapse0x29a4830() {
   return (neuron0x2997270()*-0.42046);
}

double NNfunction_ss_cLuR::synapse0x29a4870() {
   return (neuron0x29975b0()*-0.014579);
}

double NNfunction_ss_cLuR::synapse0x29a48b0() {
   return (neuron0x29978f0()*-0.0379534);
}

double NNfunction_ss_cLuR::synapse0x29a48f0() {
   return (neuron0x2997c30()*0.0920061);
}

double NNfunction_ss_cLuR::synapse0x29a4930() {
   return (neuron0x2997f70()*-0.0136689);
}

double NNfunction_ss_cLuR::synapse0x29a4970() {
   return (neuron0x29982b0()*-0.222706);
}

double NNfunction_ss_cLuR::synapse0x29a49b0() {
   return (neuron0x29985f0()*-0.318997);
}

double NNfunction_ss_cLuR::synapse0x29a49f0() {
   return (neuron0x2998930()*1.44226);
}

double NNfunction_ss_cLuR::synapse0x29a4a30() {
   return (neuron0x2998c70()*-0.550711);
}

double NNfunction_ss_cLuR::synapse0x29a4a70() {
   return (neuron0x2998fb0()*1.1994);
}

double NNfunction_ss_cLuR::synapse0x29a4ab0() {
   return (neuron0x29992f0()*-0.293098);
}

double NNfunction_ss_cLuR::synapse0x29a4540() {
   return (neuron0x2999630()*-0.0824365);
}

double NNfunction_ss_cLuR::synapse0x29a4580() {
   return (neuron0x2999b90()*-0.0677657);
}

double NNfunction_ss_cLuR::synapse0x29a4c00() {
   return (neuron0x2999db0()*-0.0486665);
}

double NNfunction_ss_cLuR::synapse0x29a4c40() {
   return (neuron0x299a0f0()*0.184518);
}

double NNfunction_ss_cLuR::synapse0x29a4c80() {
   return (neuron0x299a430()*0.172555);
}

double NNfunction_ss_cLuR::synapse0x29a4cc0() {
   return (neuron0x299a770()*-0.0960084);
}

double NNfunction_ss_cLuR::synapse0x29a4d00() {
   return (neuron0x299aab0()*-0.168481);
}

double NNfunction_ss_cLuR::synapse0x29a4d40() {
   return (neuron0x299adf0()*0.049003);
}

double NNfunction_ss_cLuR::synapse0x29a50c0() {
   return (neuron0x2996230()*0.149011);
}

double NNfunction_ss_cLuR::synapse0x2996450() {
   return (neuron0x2996570()*-0.00182849);
}

double NNfunction_ss_cLuR::synapse0x2996490() {
   return (neuron0x29968b0()*-0.0725476);
}

double NNfunction_ss_cLuR::synapse0x2996790() {
   return (neuron0x2996bf0()*0.0393903);
}

double NNfunction_ss_cLuR::synapse0x29967d0() {
   return (neuron0x2996f30()*0.00276429);
}

double NNfunction_ss_cLuR::synapse0x2996ad0() {
   return (neuron0x2997270()*-0.276162);
}

double NNfunction_ss_cLuR::synapse0x2996b10() {
   return (neuron0x29975b0()*-0.168373);
}

double NNfunction_ss_cLuR::synapse0x2996e10() {
   return (neuron0x29978f0()*-0.0499837);
}

double NNfunction_ss_cLuR::synapse0x2996e50() {
   return (neuron0x2997c30()*-0.0875595);
}

double NNfunction_ss_cLuR::synapse0x2997150() {
   return (neuron0x2997f70()*-0.015224);
}

double NNfunction_ss_cLuR::synapse0x2997190() {
   return (neuron0x29982b0()*-0.0537738);
}

double NNfunction_ss_cLuR::synapse0x2997490() {
   return (neuron0x29985f0()*0.135683);
}

double NNfunction_ss_cLuR::synapse0x29974d0() {
   return (neuron0x2998930()*-0.604748);
}

double NNfunction_ss_cLuR::synapse0x29977d0() {
   return (neuron0x2998c70()*0.00157131);
}

double NNfunction_ss_cLuR::synapse0x2997810() {
   return (neuron0x2998fb0()*-0.575289);
}

double NNfunction_ss_cLuR::synapse0x2997b10() {
   return (neuron0x29992f0()*-0.0558485);
}

double NNfunction_ss_cLuR::synapse0x2997b50() {
   return (neuron0x2999630()*0.0671672);
}

double NNfunction_ss_cLuR::synapse0x2997e50() {
   return (neuron0x2999b90()*0.0354213);
}

double NNfunction_ss_cLuR::synapse0x2997e90() {
   return (neuron0x2999db0()*0.0657213);
}

double NNfunction_ss_cLuR::synapse0x2998190() {
   return (neuron0x299a0f0()*0.0174886);
}

double NNfunction_ss_cLuR::synapse0x29981d0() {
   return (neuron0x299a430()*-0.00897651);
}

double NNfunction_ss_cLuR::synapse0x29984d0() {
   return (neuron0x299a770()*-0.0353869);
}

double NNfunction_ss_cLuR::synapse0x2998510() {
   return (neuron0x299aab0()*0.160937);
}

double NNfunction_ss_cLuR::synapse0x2998810() {
   return (neuron0x299adf0()*-0.0331956);
}

double NNfunction_ss_cLuR::synapse0x2998850() {
   return (neuron0x2996230()*0.65807);
}

double NNfunction_ss_cLuR::synapse0x2999510() {
   return (neuron0x2996570()*0.346232);
}

double NNfunction_ss_cLuR::synapse0x2999550() {
   return (neuron0x29968b0()*0.362603);
}

double NNfunction_ss_cLuR::synapse0x29a4f10() {
   return (neuron0x2996bf0()*-0.371066);
}

double NNfunction_ss_cLuR::synapse0x29a4f50() {
   return (neuron0x2996f30()*-0.218747);
}

double NNfunction_ss_cLuR::synapse0x2999850() {
   return (neuron0x2997270()*-0.44182);
}

double NNfunction_ss_cLuR::synapse0x2999890() {
   return (neuron0x29975b0()*-0.110136);
}

double NNfunction_ss_cLuR::synapse0x2751330() {
   return (neuron0x29978f0()*0.981992);
}

double NNfunction_ss_cLuR::synapse0x2751370() {
   return (neuron0x2997c30()*0.384718);
}

double NNfunction_ss_cLuR::synapse0x2999fd0() {
   return (neuron0x2997f70()*0.257446);
}

double NNfunction_ss_cLuR::synapse0x299a010() {
   return (neuron0x29982b0()*0.683414);
}

double NNfunction_ss_cLuR::synapse0x299a310() {
   return (neuron0x29985f0()*1.46206);
}

double NNfunction_ss_cLuR::synapse0x299a350() {
   return (neuron0x2998930()*-1.19458);
}

double NNfunction_ss_cLuR::synapse0x299a650() {
   return (neuron0x2998c70()*-0.0636545);
}

double NNfunction_ss_cLuR::synapse0x299a690() {
   return (neuron0x2998fb0()*0.665008);
}

double NNfunction_ss_cLuR::synapse0x299a990() {
   return (neuron0x29992f0()*-0.382065);
}

double NNfunction_ss_cLuR::synapse0x299a9d0() {
   return (neuron0x2999630()*-1.0671);
}

double NNfunction_ss_cLuR::synapse0x299acd0() {
   return (neuron0x2999b90()*-0.620176);
}

double NNfunction_ss_cLuR::synapse0x299ad10() {
   return (neuron0x2999db0()*0.539864);
}

double NNfunction_ss_cLuR::synapse0x299b010() {
   return (neuron0x299a0f0()*-0.671613);
}

double NNfunction_ss_cLuR::synapse0x299b050() {
   return (neuron0x299a430()*0.254405);
}

double NNfunction_ss_cLuR::synapse0x2998b50() {
   return (neuron0x299a770()*0.075208);
}

double NNfunction_ss_cLuR::synapse0x2998b90() {
   return (neuron0x299aab0()*-0.270434);
}

double NNfunction_ss_cLuR::synapse0x29a6e30() {
   return (neuron0x299adf0()*0.278696);
}

double NNfunction_ss_cLuR::synapse0x29a71b0() {
   return (neuron0x2996230()*-0.034789);
}

double NNfunction_ss_cLuR::synapse0x29a71f0() {
   return (neuron0x2996570()*-0.00407633);
}

double NNfunction_ss_cLuR::synapse0x29a7230() {
   return (neuron0x29968b0()*-0.00437214);
}

double NNfunction_ss_cLuR::synapse0x29a7270() {
   return (neuron0x2996bf0()*7.06555);
}

double NNfunction_ss_cLuR::synapse0x29a72b0() {
   return (neuron0x2996f30()*0.00890036);
}

double NNfunction_ss_cLuR::synapse0x29a72f0() {
   return (neuron0x2997270()*0.0132197);
}

double NNfunction_ss_cLuR::synapse0x29a7330() {
   return (neuron0x29975b0()*0.0530791);
}

double NNfunction_ss_cLuR::synapse0x29a7370() {
   return (neuron0x29978f0()*0.00965767);
}

double NNfunction_ss_cLuR::synapse0x29a73b0() {
   return (neuron0x2997c30()*-0.00126182);
}

double NNfunction_ss_cLuR::synapse0x29a73f0() {
   return (neuron0x2997f70()*0.00581997);
}

double NNfunction_ss_cLuR::synapse0x29a7430() {
   return (neuron0x29982b0()*0.00357915);
}

double NNfunction_ss_cLuR::synapse0x29a7470() {
   return (neuron0x29985f0()*-0.0158197);
}

double NNfunction_ss_cLuR::synapse0x29a74b0() {
   return (neuron0x2998930()*0.407636);
}

double NNfunction_ss_cLuR::synapse0x29a74f0() {
   return (neuron0x2998c70()*0.00363637);
}

double NNfunction_ss_cLuR::synapse0x29a7530() {
   return (neuron0x2998fb0()*0.476305);
}

double NNfunction_ss_cLuR::synapse0x29a7570() {
   return (neuron0x29992f0()*-0.0383086);
}

double NNfunction_ss_cLuR::synapse0x29a7000() {
   return (neuron0x2999630()*-0.00431949);
}

double NNfunction_ss_cLuR::synapse0x29a7040() {
   return (neuron0x2999b90()*-0.00299182);
}

double NNfunction_ss_cLuR::synapse0x29a76c0() {
   return (neuron0x2999db0()*0.00888653);
}

double NNfunction_ss_cLuR::synapse0x29a7700() {
   return (neuron0x299a0f0()*-0.0197867);
}

double NNfunction_ss_cLuR::synapse0x29a7740() {
   return (neuron0x299a430()*0.0261881);
}

double NNfunction_ss_cLuR::synapse0x29a7780() {
   return (neuron0x299a770()*-0.0103471);
}

double NNfunction_ss_cLuR::synapse0x29a77c0() {
   return (neuron0x299aab0()*0.0168946);
}

double NNfunction_ss_cLuR::synapse0x29a7800() {
   return (neuron0x299adf0()*0.0128068);
}

double NNfunction_ss_cLuR::synapse0x29a7b80() {
   return (neuron0x2996230()*0.0665183);
}

double NNfunction_ss_cLuR::synapse0x29a7bc0() {
   return (neuron0x2996570()*-0.390235);
}

double NNfunction_ss_cLuR::synapse0x29a7c00() {
   return (neuron0x29968b0()*0.0578379);
}

double NNfunction_ss_cLuR::synapse0x29a7c40() {
   return (neuron0x2996bf0()*-0.078414);
}

double NNfunction_ss_cLuR::synapse0x29a7c80() {
   return (neuron0x2996f30()*0.0035644);
}

double NNfunction_ss_cLuR::synapse0x29a7cc0() {
   return (neuron0x2997270()*-0.09618);
}

double NNfunction_ss_cLuR::synapse0x29a7d00() {
   return (neuron0x29975b0()*-0.0279595);
}

double NNfunction_ss_cLuR::synapse0x29a7d40() {
   return (neuron0x29978f0()*-0.0674812);
}

double NNfunction_ss_cLuR::synapse0x29a7d80() {
   return (neuron0x2997c30()*-0.175696);
}

double NNfunction_ss_cLuR::synapse0x29a7dc0() {
   return (neuron0x2997f70()*-0.266429);
}

double NNfunction_ss_cLuR::synapse0x29a7e00() {
   return (neuron0x29982b0()*0.106822);
}

double NNfunction_ss_cLuR::synapse0x29a7e40() {
   return (neuron0x29985f0()*0.927459);
}

double NNfunction_ss_cLuR::synapse0x29a7e80() {
   return (neuron0x2998930()*-0.135486);
}

double NNfunction_ss_cLuR::synapse0x29a7ec0() {
   return (neuron0x2998c70()*-0.330195);
}

double NNfunction_ss_cLuR::synapse0x29a7f00() {
   return (neuron0x2998fb0()*-0.233947);
}

double NNfunction_ss_cLuR::synapse0x29a7f40() {
   return (neuron0x29992f0()*0.45563);
}

double NNfunction_ss_cLuR::synapse0x29a79d0() {
   return (neuron0x2999630()*-0.198482);
}

double NNfunction_ss_cLuR::synapse0x29a7a10() {
   return (neuron0x2999b90()*1.00333);
}

double NNfunction_ss_cLuR::synapse0x29a8090() {
   return (neuron0x2999db0()*0.223845);
}

double NNfunction_ss_cLuR::synapse0x29a80d0() {
   return (neuron0x299a0f0()*-0.168813);
}

double NNfunction_ss_cLuR::synapse0x29a8110() {
   return (neuron0x299a430()*0.158875);
}

double NNfunction_ss_cLuR::synapse0x29a8150() {
   return (neuron0x299a770()*-0.161972);
}

double NNfunction_ss_cLuR::synapse0x29a8190() {
   return (neuron0x299aab0()*-0.129402);
}

double NNfunction_ss_cLuR::synapse0x29a81d0() {
   return (neuron0x299adf0()*0.0335819);
}

double NNfunction_ss_cLuR::synapse0x29a8550() {
   return (neuron0x2996230()*0.12163);
}

double NNfunction_ss_cLuR::synapse0x29a8590() {
   return (neuron0x2996570()*-0.0417596);
}

double NNfunction_ss_cLuR::synapse0x29a85d0() {
   return (neuron0x29968b0()*-0.264454);
}

double NNfunction_ss_cLuR::synapse0x29a8610() {
   return (neuron0x2996bf0()*0.443222);
}

double NNfunction_ss_cLuR::synapse0x29a8650() {
   return (neuron0x2996f30()*0.0244055);
}

double NNfunction_ss_cLuR::synapse0x29a8690() {
   return (neuron0x2997270()*-0.101989);
}

double NNfunction_ss_cLuR::synapse0x29a86d0() {
   return (neuron0x29975b0()*0.187713);
}

double NNfunction_ss_cLuR::synapse0x29a8710() {
   return (neuron0x29978f0()*-0.208864);
}

double NNfunction_ss_cLuR::synapse0x29a8750() {
   return (neuron0x2997c30()*-0.500899);
}

double NNfunction_ss_cLuR::synapse0x29a8790() {
   return (neuron0x2997f70()*-0.202659);
}

double NNfunction_ss_cLuR::synapse0x29a87d0() {
   return (neuron0x29982b0()*0.506362);
}

double NNfunction_ss_cLuR::synapse0x29a8810() {
   return (neuron0x29985f0()*-0.00762372);
}

double NNfunction_ss_cLuR::synapse0x29a8850() {
   return (neuron0x2998930()*0.11096);
}

double NNfunction_ss_cLuR::synapse0x29a8890() {
   return (neuron0x2998c70()*-0.0211939);
}

double NNfunction_ss_cLuR::synapse0x29a88d0() {
   return (neuron0x2998fb0()*-1.26534);
}

double NNfunction_ss_cLuR::synapse0x29a8910() {
   return (neuron0x29992f0()*0.0702318);
}

double NNfunction_ss_cLuR::synapse0x29a83a0() {
   return (neuron0x2999630()*0.233132);
}

double NNfunction_ss_cLuR::synapse0x29a83e0() {
   return (neuron0x2999b90()*-0.347773);
}

double NNfunction_ss_cLuR::synapse0x29a8a60() {
   return (neuron0x2999db0()*-0.179608);
}

double NNfunction_ss_cLuR::synapse0x29a8aa0() {
   return (neuron0x299a0f0()*-0.019047);
}

double NNfunction_ss_cLuR::synapse0x29a8ae0() {
   return (neuron0x299a430()*-0.230603);
}

double NNfunction_ss_cLuR::synapse0x29a8b20() {
   return (neuron0x299a770()*0.413903);
}

double NNfunction_ss_cLuR::synapse0x29a8b60() {
   return (neuron0x299aab0()*-0.180886);
}

double NNfunction_ss_cLuR::synapse0x29a8ba0() {
   return (neuron0x299adf0()*-0.0208347);
}

double NNfunction_ss_cLuR::synapse0x29a8f20() {
   return (neuron0x2996230()*-0.066917);
}

double NNfunction_ss_cLuR::synapse0x29a8f60() {
   return (neuron0x2996570()*0.00791299);
}

double NNfunction_ss_cLuR::synapse0x29a8fa0() {
   return (neuron0x29968b0()*-0.0665539);
}

double NNfunction_ss_cLuR::synapse0x29a8fe0() {
   return (neuron0x2996bf0()*0.104388);
}

double NNfunction_ss_cLuR::synapse0x29a9020() {
   return (neuron0x2996f30()*-0.0326023);
}

double NNfunction_ss_cLuR::synapse0x29a9060() {
   return (neuron0x2997270()*-0.0206349);
}

double NNfunction_ss_cLuR::synapse0x29a90a0() {
   return (neuron0x29975b0()*0.0145713);
}

double NNfunction_ss_cLuR::synapse0x29a90e0() {
   return (neuron0x29978f0()*-0.0265691);
}

double NNfunction_ss_cLuR::synapse0x29a9120() {
   return (neuron0x2997c30()*-0.00675272);
}

double NNfunction_ss_cLuR::synapse0x29a9160() {
   return (neuron0x2997f70()*0.00462103);
}

double NNfunction_ss_cLuR::synapse0x29a91a0() {
   return (neuron0x29982b0()*-0.0590686);
}

double NNfunction_ss_cLuR::synapse0x29a91e0() {
   return (neuron0x29985f0()*-0.0157455);
}

double NNfunction_ss_cLuR::synapse0x29a9220() {
   return (neuron0x2998930()*-0.32577);
}

double NNfunction_ss_cLuR::synapse0x29a9260() {
   return (neuron0x2998c70()*-0.00824119);
}

double NNfunction_ss_cLuR::synapse0x29a92a0() {
   return (neuron0x2998fb0()*1.68418);
}

double NNfunction_ss_cLuR::synapse0x29a92e0() {
   return (neuron0x29992f0()*-0.00306179);
}

double NNfunction_ss_cLuR::synapse0x29a8d70() {
   return (neuron0x2999630()*0.0657727);
}

double NNfunction_ss_cLuR::synapse0x29a8db0() {
   return (neuron0x2999b90()*-0.0385577);
}

double NNfunction_ss_cLuR::synapse0x29a9430() {
   return (neuron0x2999db0()*0.0180034);
}

double NNfunction_ss_cLuR::synapse0x29a9470() {
   return (neuron0x299a0f0()*0.0430313);
}

double NNfunction_ss_cLuR::synapse0x29a94b0() {
   return (neuron0x299a430()*-0.0431158);
}

double NNfunction_ss_cLuR::synapse0x29a94f0() {
   return (neuron0x299a770()*-0.029237);
}

double NNfunction_ss_cLuR::synapse0x29a9530() {
   return (neuron0x299aab0()*0.036828);
}

double NNfunction_ss_cLuR::synapse0x29a9570() {
   return (neuron0x299adf0()*-0.0394373);
}

double NNfunction_ss_cLuR::synapse0x29a98f0() {
   return (neuron0x2996230()*0.635543);
}

double NNfunction_ss_cLuR::synapse0x29a9930() {
   return (neuron0x2996570()*0.0148599);
}

double NNfunction_ss_cLuR::synapse0x29a9970() {
   return (neuron0x29968b0()*-0.550234);
}

double NNfunction_ss_cLuR::synapse0x29a99b0() {
   return (neuron0x2996bf0()*-0.73923);
}

double NNfunction_ss_cLuR::synapse0x29a99f0() {
   return (neuron0x2996f30()*-0.139571);
}

double NNfunction_ss_cLuR::synapse0x29a9a30() {
   return (neuron0x2997270()*0.381338);
}

double NNfunction_ss_cLuR::synapse0x29a9a70() {
   return (neuron0x29975b0()*-0.497683);
}

double NNfunction_ss_cLuR::synapse0x29a9ab0() {
   return (neuron0x29978f0()*-0.193166);
}

double NNfunction_ss_cLuR::synapse0x29a9af0() {
   return (neuron0x2997c30()*-0.158257);
}

double NNfunction_ss_cLuR::synapse0x29a1cb0() {
   return (neuron0x2997f70()*-0.455402);
}

double NNfunction_ss_cLuR::synapse0x29a1cf0() {
   return (neuron0x29982b0()*-0.28979);
}

double NNfunction_ss_cLuR::synapse0x29a1d30() {
   return (neuron0x29985f0()*0.0663327);
}

double NNfunction_ss_cLuR::synapse0x29a1d70() {
   return (neuron0x2998930()*-0.143834);
}

double NNfunction_ss_cLuR::synapse0x29a1db0() {
   return (neuron0x2998c70()*0.041043);
}

double NNfunction_ss_cLuR::synapse0x29a1df0() {
   return (neuron0x2998fb0()*1.08221);
}

double NNfunction_ss_cLuR::synapse0x29a1e30() {
   return (neuron0x29992f0()*-0.367993);
}

double NNfunction_ss_cLuR::synapse0x29a9740() {
   return (neuron0x2999630()*-0.399066);
}

double NNfunction_ss_cLuR::synapse0x29a9780() {
   return (neuron0x2999b90()*0.0765016);
}

double NNfunction_ss_cLuR::synapse0x29a1f80() {
   return (neuron0x2999db0()*0.265124);
}

double NNfunction_ss_cLuR::synapse0x29a1fc0() {
   return (neuron0x299a0f0()*0.117279);
}

double NNfunction_ss_cLuR::synapse0x29a2000() {
   return (neuron0x299a430()*-0.0666104);
}

double NNfunction_ss_cLuR::synapse0x29a2040() {
   return (neuron0x299a770()*0.0330942);
}

double NNfunction_ss_cLuR::synapse0x29a2080() {
   return (neuron0x299aab0()*0.237676);
}

double NNfunction_ss_cLuR::synapse0x29a20c0() {
   return (neuron0x299adf0()*-0.124623);
}

double NNfunction_ss_cLuR::synapse0x29a2440() {
   return (neuron0x2996230()*0.0905834);
}

double NNfunction_ss_cLuR::synapse0x29a2480() {
   return (neuron0x2996570()*0.0303029);
}

double NNfunction_ss_cLuR::synapse0x29a24c0() {
   return (neuron0x29968b0()*-0.125148);
}

double NNfunction_ss_cLuR::synapse0x29a2500() {
   return (neuron0x2996bf0()*-0.0185935);
}

double NNfunction_ss_cLuR::synapse0x29a2540() {
   return (neuron0x2996f30()*0.0540087);
}

double NNfunction_ss_cLuR::synapse0x29a2580() {
   return (neuron0x2997270()*-0.195313);
}

double NNfunction_ss_cLuR::synapse0x29a25c0() {
   return (neuron0x29975b0()*-0.158427);
}

double NNfunction_ss_cLuR::synapse0x29a2600() {
   return (neuron0x29978f0()*-0.333224);
}

double NNfunction_ss_cLuR::synapse0x29a2640() {
   return (neuron0x2997c30()*0.0437707);
}

double NNfunction_ss_cLuR::synapse0x29a2680() {
   return (neuron0x2997f70()*0.0140292);
}

double NNfunction_ss_cLuR::synapse0x29a26c0() {
   return (neuron0x29982b0()*0.078424);
}

double NNfunction_ss_cLuR::synapse0x29a2700() {
   return (neuron0x29985f0()*0.844268);
}

double NNfunction_ss_cLuR::synapse0x29a2740() {
   return (neuron0x2998930()*-0.0463496);
}

double NNfunction_ss_cLuR::synapse0x29a2780() {
   return (neuron0x2998c70()*-0.281445);
}

double NNfunction_ss_cLuR::synapse0x29a27c0() {
   return (neuron0x2998fb0()*-0.106589);
}

double NNfunction_ss_cLuR::synapse0x29a2800() {
   return (neuron0x29992f0()*0.212954);
}

double NNfunction_ss_cLuR::synapse0x29a2290() {
   return (neuron0x2999630()*-0.0469455);
}

double NNfunction_ss_cLuR::synapse0x29a22d0() {
   return (neuron0x2999b90()*-0.0244967);
}

double NNfunction_ss_cLuR::synapse0x29a2950() {
   return (neuron0x2999db0()*1.13698);
}

double NNfunction_ss_cLuR::synapse0x29a2990() {
   return (neuron0x299a0f0()*-0.210724);
}

double NNfunction_ss_cLuR::synapse0x29a29d0() {
   return (neuron0x299a430()*-0.328445);
}

double NNfunction_ss_cLuR::synapse0x29a2a10() {
   return (neuron0x299a770()*0.0238993);
}

double NNfunction_ss_cLuR::synapse0x29a2a50() {
   return (neuron0x299aab0()*0.200146);
}

double NNfunction_ss_cLuR::synapse0x29a2a90() {
   return (neuron0x299adf0()*0.0611764);
}

double NNfunction_ss_cLuR::synapse0x29a2c60() {
   return (neuron0x2996230()*0.132777);
}

double NNfunction_ss_cLuR::synapse0x29abcf0() {
   return (neuron0x2996570()*-0.486898);
}

double NNfunction_ss_cLuR::synapse0x29abd30() {
   return (neuron0x29968b0()*0.0463557);
}

double NNfunction_ss_cLuR::synapse0x29abd70() {
   return (neuron0x2996bf0()*-0.832454);
}

double NNfunction_ss_cLuR::synapse0x29abdb0() {
   return (neuron0x2996f30()*0.529877);
}

double NNfunction_ss_cLuR::synapse0x29abdf0() {
   return (neuron0x2997270()*-0.348624);
}

double NNfunction_ss_cLuR::synapse0x29abe30() {
   return (neuron0x29975b0()*-0.0425547);
}

double NNfunction_ss_cLuR::synapse0x29abe70() {
   return (neuron0x29978f0()*-0.282056);
}

double NNfunction_ss_cLuR::synapse0x29abeb0() {
   return (neuron0x2997c30()*-0.30856);
}

double NNfunction_ss_cLuR::synapse0x29abef0() {
   return (neuron0x2997f70()*-0.00841637);
}

double NNfunction_ss_cLuR::synapse0x29abf30() {
   return (neuron0x29982b0()*-0.966269);
}

double NNfunction_ss_cLuR::synapse0x29abf70() {
   return (neuron0x29985f0()*0.0531905);
}

double NNfunction_ss_cLuR::synapse0x29abfb0() {
   return (neuron0x2998930()*0.285654);
}

double NNfunction_ss_cLuR::synapse0x29abff0() {
   return (neuron0x2998c70()*1.47402);
}

double NNfunction_ss_cLuR::synapse0x29ac030() {
   return (neuron0x2998fb0()*-0.280938);
}

double NNfunction_ss_cLuR::synapse0x29ac070() {
   return (neuron0x29992f0()*-1.11884);
}

double NNfunction_ss_cLuR::synapse0x29abb40() {
   return (neuron0x2999630()*0.331234);
}

double NNfunction_ss_cLuR::synapse0x29abb80() {
   return (neuron0x2999b90()*-0.425558);
}

double NNfunction_ss_cLuR::synapse0x29ac1c0() {
   return (neuron0x2999db0()*0.241076);
}

double NNfunction_ss_cLuR::synapse0x29ac200() {
   return (neuron0x299a0f0()*-0.0129475);
}

double NNfunction_ss_cLuR::synapse0x29ac240() {
   return (neuron0x299a430()*-0.370952);
}

double NNfunction_ss_cLuR::synapse0x29ac280() {
   return (neuron0x299a770()*0.620092);
}

double NNfunction_ss_cLuR::synapse0x29ac2c0() {
   return (neuron0x299aab0()*0.268184);
}

double NNfunction_ss_cLuR::synapse0x29ac300() {
   return (neuron0x299adf0()*0.0771195);
}

double NNfunction_ss_cLuR::synapse0x29ac680() {
   return (neuron0x2996230()*0.114089);
}

double NNfunction_ss_cLuR::synapse0x29ac6c0() {
   return (neuron0x2996570()*0.901873);
}

double NNfunction_ss_cLuR::synapse0x29ac700() {
   return (neuron0x29968b0()*0.846848);
}

double NNfunction_ss_cLuR::synapse0x29ac740() {
   return (neuron0x2996bf0()*-0.857072);
}

double NNfunction_ss_cLuR::synapse0x29ac780() {
   return (neuron0x2996f30()*0.114752);
}

double NNfunction_ss_cLuR::synapse0x29ac7c0() {
   return (neuron0x2997270()*0.124464);
}

double NNfunction_ss_cLuR::synapse0x29ac800() {
   return (neuron0x29975b0()*0.0296013);
}

double NNfunction_ss_cLuR::synapse0x29ac840() {
   return (neuron0x29978f0()*0.248876);
}

double NNfunction_ss_cLuR::synapse0x29ac880() {
   return (neuron0x2997c30()*0.220253);
}

double NNfunction_ss_cLuR::synapse0x29ac8c0() {
   return (neuron0x2997f70()*-0.0909146);
}

double NNfunction_ss_cLuR::synapse0x29ac900() {
   return (neuron0x29982b0()*0.793185);
}

double NNfunction_ss_cLuR::synapse0x29ac940() {
   return (neuron0x29985f0()*-0.0873331);
}

double NNfunction_ss_cLuR::synapse0x29ac980() {
   return (neuron0x2998930()*-0.591668);
}

double NNfunction_ss_cLuR::synapse0x29ac9c0() {
   return (neuron0x2998c70()*0.195712);
}

double NNfunction_ss_cLuR::synapse0x29aca00() {
   return (neuron0x2998fb0()*0.251619);
}

double NNfunction_ss_cLuR::synapse0x29aca40() {
   return (neuron0x29992f0()*0.184055);
}

double NNfunction_ss_cLuR::synapse0x29ac4d0() {
   return (neuron0x2999630()*0.129955);
}

double NNfunction_ss_cLuR::synapse0x29ac510() {
   return (neuron0x2999b90()*-0.0877588);
}

double NNfunction_ss_cLuR::synapse0x29acb90() {
   return (neuron0x2999db0()*-0.112582);
}

double NNfunction_ss_cLuR::synapse0x29acbd0() {
   return (neuron0x299a0f0()*-0.272073);
}

double NNfunction_ss_cLuR::synapse0x29acc10() {
   return (neuron0x299a430()*-0.37834);
}

double NNfunction_ss_cLuR::synapse0x29acc50() {
   return (neuron0x299a770()*-0.431529);
}

double NNfunction_ss_cLuR::synapse0x29acc90() {
   return (neuron0x299aab0()*-0.0724387);
}

double NNfunction_ss_cLuR::synapse0x29accd0() {
   return (neuron0x299adf0()*-0.063507);
}

double NNfunction_ss_cLuR::synapse0x29ad050() {
   return (neuron0x2996230()*-0.28125);
}

double NNfunction_ss_cLuR::synapse0x29ad090() {
   return (neuron0x2996570()*0.0786601);
}

double NNfunction_ss_cLuR::synapse0x29ad0d0() {
   return (neuron0x29968b0()*0.320948);
}

double NNfunction_ss_cLuR::synapse0x29ad110() {
   return (neuron0x2996bf0()*-1.48606);
}

double NNfunction_ss_cLuR::synapse0x29ad150() {
   return (neuron0x2996f30()*1.50857);
}

double NNfunction_ss_cLuR::synapse0x29ad190() {
   return (neuron0x2997270()*0.911538);
}

double NNfunction_ss_cLuR::synapse0x29ad1d0() {
   return (neuron0x29975b0()*0.0038119);
}

double NNfunction_ss_cLuR::synapse0x29ad210() {
   return (neuron0x29978f0()*0.135609);
}

double NNfunction_ss_cLuR::synapse0x29ad250() {
   return (neuron0x2997c30()*-0.136658);
}

double NNfunction_ss_cLuR::synapse0x29ad290() {
   return (neuron0x2997f70()*-0.0840253);
}

double NNfunction_ss_cLuR::synapse0x29ad2d0() {
   return (neuron0x29982b0()*0.127817);
}

double NNfunction_ss_cLuR::synapse0x29ad310() {
   return (neuron0x29985f0()*-0.453581);
}

double NNfunction_ss_cLuR::synapse0x29ad350() {
   return (neuron0x2998930()*-0.430996);
}

double NNfunction_ss_cLuR::synapse0x29ad390() {
   return (neuron0x2998c70()*0.328633);
}

double NNfunction_ss_cLuR::synapse0x29ad3d0() {
   return (neuron0x2998fb0()*-2.0327);
}

double NNfunction_ss_cLuR::synapse0x29ad410() {
   return (neuron0x29992f0()*0.0567576);
}

double NNfunction_ss_cLuR::synapse0x29acea0() {
   return (neuron0x2999630()*-0.11928);
}

double NNfunction_ss_cLuR::synapse0x29acee0() {
   return (neuron0x2999b90()*-0.207935);
}

double NNfunction_ss_cLuR::synapse0x29ad560() {
   return (neuron0x2999db0()*-0.172154);
}

double NNfunction_ss_cLuR::synapse0x29ad5a0() {
   return (neuron0x299a0f0()*-0.118065);
}

double NNfunction_ss_cLuR::synapse0x29ad5e0() {
   return (neuron0x299a430()*-0.00776934);
}

double NNfunction_ss_cLuR::synapse0x29ad620() {
   return (neuron0x299a770()*-0.0660848);
}

double NNfunction_ss_cLuR::synapse0x29ad660() {
   return (neuron0x299aab0()*0.290991);
}

double NNfunction_ss_cLuR::synapse0x29ad6a0() {
   return (neuron0x299adf0()*0.5098);
}

double NNfunction_ss_cLuR::synapse0x29ada20() {
   return (neuron0x2996230()*-0.00171295);
}

double NNfunction_ss_cLuR::synapse0x29ada60() {
   return (neuron0x2996570()*0.0168276);
}

double NNfunction_ss_cLuR::synapse0x29adaa0() {
   return (neuron0x29968b0()*0.0121021);
}

double NNfunction_ss_cLuR::synapse0x29adae0() {
   return (neuron0x2996bf0()*-2.17221);
}

double NNfunction_ss_cLuR::synapse0x29adb20() {
   return (neuron0x2996f30()*-0.00742904);
}

double NNfunction_ss_cLuR::synapse0x29adb60() {
   return (neuron0x2997270()*-0.00414881);
}

double NNfunction_ss_cLuR::synapse0x29adba0() {
   return (neuron0x29975b0()*0.00254103);
}

double NNfunction_ss_cLuR::synapse0x29adbe0() {
   return (neuron0x29978f0()*0.00218784);
}

double NNfunction_ss_cLuR::synapse0x29adc20() {
   return (neuron0x2997c30()*-0.00363793);
}

double NNfunction_ss_cLuR::synapse0x29adc60() {
   return (neuron0x2997f70()*-0.00236666);
}

double NNfunction_ss_cLuR::synapse0x29adca0() {
   return (neuron0x29982b0()*0.0131826);
}

double NNfunction_ss_cLuR::synapse0x29adce0() {
   return (neuron0x29985f0()*0.0345066);
}

double NNfunction_ss_cLuR::synapse0x29add20() {
   return (neuron0x2998930()*-0.27969);
}

double NNfunction_ss_cLuR::synapse0x29add60() {
   return (neuron0x2998c70()*0.023066);
}

double NNfunction_ss_cLuR::synapse0x29adda0() {
   return (neuron0x2998fb0()*-0.270185);
}

double NNfunction_ss_cLuR::synapse0x29adde0() {
   return (neuron0x29992f0()*0.0176532);
}

double NNfunction_ss_cLuR::synapse0x29ad870() {
   return (neuron0x2999630()*-0.00378677);
}

double NNfunction_ss_cLuR::synapse0x29ad8b0() {
   return (neuron0x2999b90()*0.0152487);
}

double NNfunction_ss_cLuR::synapse0x29adf30() {
   return (neuron0x2999db0()*0.0239806);
}

double NNfunction_ss_cLuR::synapse0x29adf70() {
   return (neuron0x299a0f0()*0.000908999);
}

double NNfunction_ss_cLuR::synapse0x29adfb0() {
   return (neuron0x299a430()*0.0130064);
}

double NNfunction_ss_cLuR::synapse0x29adff0() {
   return (neuron0x299a770()*-0.00236063);
}

double NNfunction_ss_cLuR::synapse0x29ae030() {
   return (neuron0x299aab0()*0.00394879);
}

double NNfunction_ss_cLuR::synapse0x29ae070() {
   return (neuron0x299adf0()*0.0146088);
}

double NNfunction_ss_cLuR::synapse0x29ae3f0() {
   return (neuron0x2996230()*0.395411);
}

double NNfunction_ss_cLuR::synapse0x29ae430() {
   return (neuron0x2996570()*-1.5463);
}

double NNfunction_ss_cLuR::synapse0x29ae470() {
   return (neuron0x29968b0()*-0.928375);
}

double NNfunction_ss_cLuR::synapse0x29ae4b0() {
   return (neuron0x2996bf0()*-0.954238);
}

double NNfunction_ss_cLuR::synapse0x29ae4f0() {
   return (neuron0x2996f30()*0.216449);
}

double NNfunction_ss_cLuR::synapse0x29ae530() {
   return (neuron0x2997270()*0.741524);
}

double NNfunction_ss_cLuR::synapse0x29ae570() {
   return (neuron0x29975b0()*-0.760469);
}

double NNfunction_ss_cLuR::synapse0x29ae5b0() {
   return (neuron0x29978f0()*-0.532687);
}

double NNfunction_ss_cLuR::synapse0x29ae5f0() {
   return (neuron0x2997c30()*0.247571);
}

double NNfunction_ss_cLuR::synapse0x29ae630() {
   return (neuron0x2997f70()*0.99272);
}

double NNfunction_ss_cLuR::synapse0x29ae670() {
   return (neuron0x29982b0()*0.962444);
}

double NNfunction_ss_cLuR::synapse0x29ae6b0() {
   return (neuron0x29985f0()*-0.506961);
}

double NNfunction_ss_cLuR::synapse0x29ae6f0() {
   return (neuron0x2998930()*0.612635);
}

double NNfunction_ss_cLuR::synapse0x29ae730() {
   return (neuron0x2998c70()*-6.53885e-05);
}

double NNfunction_ss_cLuR::synapse0x29ae770() {
   return (neuron0x2998fb0()*0.488259);
}

double NNfunction_ss_cLuR::synapse0x29ae7b0() {
   return (neuron0x29992f0()*-0.610604);
}

double NNfunction_ss_cLuR::synapse0x29ae240() {
   return (neuron0x2999630()*-1.16076);
}

double NNfunction_ss_cLuR::synapse0x29ae280() {
   return (neuron0x2999b90()*-1.68351);
}

double NNfunction_ss_cLuR::synapse0x29ae900() {
   return (neuron0x2999db0()*1.23496);
}

double NNfunction_ss_cLuR::synapse0x29ae940() {
   return (neuron0x299a0f0()*-0.445866);
}

double NNfunction_ss_cLuR::synapse0x29ae980() {
   return (neuron0x299a430()*0.0109312);
}

double NNfunction_ss_cLuR::synapse0x29ae9c0() {
   return (neuron0x299a770()*0.178666);
}

double NNfunction_ss_cLuR::synapse0x29aea00() {
   return (neuron0x299aab0()*-0.177423);
}

double NNfunction_ss_cLuR::synapse0x29aea40() {
   return (neuron0x299adf0()*-0.635127);
}

double NNfunction_ss_cLuR::synapse0x29aedc0() {
   return (neuron0x2996230()*0.081153);
}

double NNfunction_ss_cLuR::synapse0x29aee00() {
   return (neuron0x2996570()*0.0464613);
}

double NNfunction_ss_cLuR::synapse0x29aee40() {
   return (neuron0x29968b0()*-0.0896616);
}

double NNfunction_ss_cLuR::synapse0x29aee80() {
   return (neuron0x2996bf0()*0.236348);
}

double NNfunction_ss_cLuR::synapse0x29aeec0() {
   return (neuron0x2996f30()*-9.77328e-05);
}

double NNfunction_ss_cLuR::synapse0x29aef00() {
   return (neuron0x2997270()*-0.0244178);
}

double NNfunction_ss_cLuR::synapse0x29aef40() {
   return (neuron0x29975b0()*-0.0358408);
}

double NNfunction_ss_cLuR::synapse0x29aef80() {
   return (neuron0x29978f0()*0.050897);
}

double NNfunction_ss_cLuR::synapse0x29aefc0() {
   return (neuron0x2997c30()*-0.0152485);
}

double NNfunction_ss_cLuR::synapse0x29af000() {
   return (neuron0x2997f70()*-0.013661);
}

double NNfunction_ss_cLuR::synapse0x29af040() {
   return (neuron0x29982b0()*0.0109396);
}

double NNfunction_ss_cLuR::synapse0x29af080() {
   return (neuron0x29985f0()*-0.0761112);
}

double NNfunction_ss_cLuR::synapse0x29af0c0() {
   return (neuron0x2998930()*1.32894);
}

double NNfunction_ss_cLuR::synapse0x29af100() {
   return (neuron0x2998c70()*0.0326605);
}

double NNfunction_ss_cLuR::synapse0x29af140() {
   return (neuron0x2998fb0()*1.01076);
}

double NNfunction_ss_cLuR::synapse0x29af180() {
   return (neuron0x29992f0()*0.0116298);
}

double NNfunction_ss_cLuR::synapse0x29aec10() {
   return (neuron0x2999630()*-0.00463744);
}

double NNfunction_ss_cLuR::synapse0x29aec50() {
   return (neuron0x2999b90()*0.0178766);
}

double NNfunction_ss_cLuR::synapse0x29af2d0() {
   return (neuron0x2999db0()*-0.0477424);
}

double NNfunction_ss_cLuR::synapse0x29af310() {
   return (neuron0x299a0f0()*-0.0141036);
}

double NNfunction_ss_cLuR::synapse0x29af350() {
   return (neuron0x299a430()*0.0545246);
}

double NNfunction_ss_cLuR::synapse0x29af390() {
   return (neuron0x299a770()*-0.0871465);
}

double NNfunction_ss_cLuR::synapse0x29af3d0() {
   return (neuron0x299aab0()*-0.00743118);
}

double NNfunction_ss_cLuR::synapse0x29af410() {
   return (neuron0x299adf0()*0.0486546);
}

double NNfunction_ss_cLuR::synapse0x29af790() {
   return (neuron0x2996230()*-0.0194522);
}

double NNfunction_ss_cLuR::synapse0x29af7d0() {
   return (neuron0x2996570()*0.515661);
}

double NNfunction_ss_cLuR::synapse0x29af810() {
   return (neuron0x29968b0()*-0.366258);
}

double NNfunction_ss_cLuR::synapse0x29af850() {
   return (neuron0x2996bf0()*-0.743105);
}

double NNfunction_ss_cLuR::synapse0x29af890() {
   return (neuron0x2996f30()*-0.0154527);
}

double NNfunction_ss_cLuR::synapse0x29af8d0() {
   return (neuron0x2997270()*1.33575);
}

double NNfunction_ss_cLuR::synapse0x29af910() {
   return (neuron0x29975b0()*0.386703);
}

double NNfunction_ss_cLuR::synapse0x29af950() {
   return (neuron0x29978f0()*0.24127);
}

double NNfunction_ss_cLuR::synapse0x29af990() {
   return (neuron0x2997c30()*-0.354044);
}

double NNfunction_ss_cLuR::synapse0x29af9d0() {
   return (neuron0x2997f70()*-0.168524);
}

double NNfunction_ss_cLuR::synapse0x29afa10() {
   return (neuron0x29982b0()*-0.923874);
}

double NNfunction_ss_cLuR::synapse0x29afa50() {
   return (neuron0x29985f0()*-0.247248);
}

double NNfunction_ss_cLuR::synapse0x29afa90() {
   return (neuron0x2998930()*-0.428848);
}

double NNfunction_ss_cLuR::synapse0x29afad0() {
   return (neuron0x2998c70()*-0.00334287);
}

double NNfunction_ss_cLuR::synapse0x29afb10() {
   return (neuron0x2998fb0()*0.210243);
}

double NNfunction_ss_cLuR::synapse0x29afb50() {
   return (neuron0x29992f0()*-0.475072);
}

double NNfunction_ss_cLuR::synapse0x29af5e0() {
   return (neuron0x2999630()*0.365617);
}

double NNfunction_ss_cLuR::synapse0x29af620() {
   return (neuron0x2999b90()*-0.376368);
}

double NNfunction_ss_cLuR::synapse0x29afca0() {
   return (neuron0x2999db0()*-0.318133);
}

double NNfunction_ss_cLuR::synapse0x29afce0() {
   return (neuron0x299a0f0()*0.0605207);
}

double NNfunction_ss_cLuR::synapse0x29afd20() {
   return (neuron0x299a430()*1.20501);
}

double NNfunction_ss_cLuR::synapse0x29afd60() {
   return (neuron0x299a770()*-0.928509);
}

double NNfunction_ss_cLuR::synapse0x29afda0() {
   return (neuron0x299aab0()*0.0337723);
}

double NNfunction_ss_cLuR::synapse0x29afde0() {
   return (neuron0x299adf0()*-0.482171);
}

double NNfunction_ss_cLuR::synapse0x29b0160() {
   return (neuron0x2996230()*-0.230873);
}

double NNfunction_ss_cLuR::synapse0x29b01a0() {
   return (neuron0x2996570()*0.602627);
}

double NNfunction_ss_cLuR::synapse0x29b01e0() {
   return (neuron0x29968b0()*0.291549);
}

double NNfunction_ss_cLuR::synapse0x29b0220() {
   return (neuron0x2996bf0()*0.123228);
}

double NNfunction_ss_cLuR::synapse0x29b0260() {
   return (neuron0x2996f30()*0.10861);
}

double NNfunction_ss_cLuR::synapse0x29b02a0() {
   return (neuron0x2997270()*0.107232);
}

double NNfunction_ss_cLuR::synapse0x29b02e0() {
   return (neuron0x29975b0()*0.16803);
}

double NNfunction_ss_cLuR::synapse0x29b0320() {
   return (neuron0x29978f0()*-0.135238);
}

double NNfunction_ss_cLuR::synapse0x29b0360() {
   return (neuron0x2997c30()*-0.217589);
}

double NNfunction_ss_cLuR::synapse0x29b03a0() {
   return (neuron0x2997f70()*0.477681);
}

double NNfunction_ss_cLuR::synapse0x29b03e0() {
   return (neuron0x29982b0()*-0.352861);
}

double NNfunction_ss_cLuR::synapse0x29b0420() {
   return (neuron0x29985f0()*0.90264);
}

double NNfunction_ss_cLuR::synapse0x29b0460() {
   return (neuron0x2998930()*-0.860089);
}

double NNfunction_ss_cLuR::synapse0x29b04a0() {
   return (neuron0x2998c70()*-0.428973);
}

double NNfunction_ss_cLuR::synapse0x29b04e0() {
   return (neuron0x2998fb0()*-0.25997);
}

double NNfunction_ss_cLuR::synapse0x29b0520() {
   return (neuron0x29992f0()*0.257252);
}

double NNfunction_ss_cLuR::synapse0x29affb0() {
   return (neuron0x2999630()*-0.710533);
}

double NNfunction_ss_cLuR::synapse0x29afff0() {
   return (neuron0x2999b90()*-0.37095);
}

double NNfunction_ss_cLuR::synapse0x29b0670() {
   return (neuron0x2999db0()*0.407605);
}

double NNfunction_ss_cLuR::synapse0x29b06b0() {
   return (neuron0x299a0f0()*0.0435714);
}

double NNfunction_ss_cLuR::synapse0x29b06f0() {
   return (neuron0x299a430()*-0.118758);
}

double NNfunction_ss_cLuR::synapse0x29b0730() {
   return (neuron0x299a770()*0.373139);
}

double NNfunction_ss_cLuR::synapse0x29b0770() {
   return (neuron0x299aab0()*-0.257416);
}

double NNfunction_ss_cLuR::synapse0x29b07b0() {
   return (neuron0x299adf0()*-0.334386);
}

double NNfunction_ss_cLuR::synapse0x29b0b30() {
   return (neuron0x2996230()*-0.14049);
}

double NNfunction_ss_cLuR::synapse0x29a5100() {
   return (neuron0x2996570()*-0.301868);
}

double NNfunction_ss_cLuR::synapse0x29a5140() {
   return (neuron0x29968b0()*-0.381431);
}

double NNfunction_ss_cLuR::synapse0x29a5180() {
   return (neuron0x2996bf0()*-0.374314);
}

double NNfunction_ss_cLuR::synapse0x29a53d0() {
   return (neuron0x2996f30()*-0.428374);
}

double NNfunction_ss_cLuR::synapse0x29a5410() {
   return (neuron0x2997270()*-0.125129);
}

double NNfunction_ss_cLuR::synapse0x29a5450() {
   return (neuron0x29975b0()*0.107512);
}

double NNfunction_ss_cLuR::synapse0x29a56a0() {
   return (neuron0x29978f0()*0.133835);
}

double NNfunction_ss_cLuR::synapse0x29a56e0() {
   return (neuron0x2997c30()*-0.186017);
}

double NNfunction_ss_cLuR::synapse0x29a5930() {
   return (neuron0x2997f70()*0.00314082);
}

double NNfunction_ss_cLuR::synapse0x29a5970() {
   return (neuron0x29982b0()*0.0397527);
}

double NNfunction_ss_cLuR::synapse0x29a59b0() {
   return (neuron0x29985f0()*1.0829);
}

double NNfunction_ss_cLuR::synapse0x29a5c00() {
   return (neuron0x2998930()*0.564145);
}

double NNfunction_ss_cLuR::synapse0x29a5c40() {
   return (neuron0x2998c70()*0.244615);
}

double NNfunction_ss_cLuR::synapse0x29a5e90() {
   return (neuron0x2998fb0()*-0.0549262);
}

double NNfunction_ss_cLuR::synapse0x29a5ed0() {
   return (neuron0x29992f0()*0.107163);
}

double NNfunction_ss_cLuR::synapse0x29b0980() {
   return (neuron0x2999630()*-0.350826);
}

double NNfunction_ss_cLuR::synapse0x29b09c0() {
   return (neuron0x2999b90()*0.159844);
}

double NNfunction_ss_cLuR::synapse0x29a6020() {
   return (neuron0x2999db0()*-0.108454);
}

double NNfunction_ss_cLuR::synapse0x29a6530() {
   return (neuron0x299a0f0()*0.14521);
}

double NNfunction_ss_cLuR::synapse0x29a6570() {
   return (neuron0x299a430()*0.0486414);
}

double NNfunction_ss_cLuR::synapse0x29a65b0() {
   return (neuron0x299a770()*0.277722);
}

double NNfunction_ss_cLuR::synapse0x29a6800() {
   return (neuron0x299aab0()*0.0334718);
}

double NNfunction_ss_cLuR::synapse0x29a6840() {
   return (neuron0x299adf0()*0.0763691);
}

double NNfunction_ss_cLuR::synapse0x29a60f0() {
   return (neuron0x2996230()*0.307796);
}

double NNfunction_ss_cLuR::synapse0x29a6130() {
   return (neuron0x2996570()*0.114761);
}

double NNfunction_ss_cLuR::synapse0x29a6170() {
   return (neuron0x29968b0()*0.607682);
}

double NNfunction_ss_cLuR::synapse0x29a61b0() {
   return (neuron0x2996bf0()*0.73998);
}

double NNfunction_ss_cLuR::synapse0x29a6b30() {
   return (neuron0x2996f30()*-1.137);
}

double NNfunction_ss_cLuR::synapse0x29b2e80() {
   return (neuron0x2997270()*-0.183532);
}

double NNfunction_ss_cLuR::synapse0x29b2ec0() {
   return (neuron0x29975b0()*0.149167);
}

double NNfunction_ss_cLuR::synapse0x29b2f00() {
   return (neuron0x29978f0()*-0.284311);
}

double NNfunction_ss_cLuR::synapse0x29b2f40() {
   return (neuron0x2997c30()*0.196799);
}

double NNfunction_ss_cLuR::synapse0x29b2f80() {
   return (neuron0x2997f70()*0.158594);
}

double NNfunction_ss_cLuR::synapse0x29b2fc0() {
   return (neuron0x29982b0()*0.120369);
}

double NNfunction_ss_cLuR::synapse0x29b3000() {
   return (neuron0x29985f0()*0.433746);
}

double NNfunction_ss_cLuR::synapse0x29b3040() {
   return (neuron0x2998930()*0.114612);
}

double NNfunction_ss_cLuR::synapse0x29b3080() {
   return (neuron0x2998c70()*0.465732);
}

double NNfunction_ss_cLuR::synapse0x29b30c0() {
   return (neuron0x2998fb0()*0.218622);
}

double NNfunction_ss_cLuR::synapse0x29b3100() {
   return (neuron0x29992f0()*-0.0999638);
}

double NNfunction_ss_cLuR::synapse0x29a6a10() {
   return (neuron0x2999630()*0.407643);
}

double NNfunction_ss_cLuR::synapse0x29a6a50() {
   return (neuron0x2999b90()*-0.179316);
}

double NNfunction_ss_cLuR::synapse0x29b3250() {
   return (neuron0x2999db0()*0.514449);
}

double NNfunction_ss_cLuR::synapse0x29b3290() {
   return (neuron0x299a0f0()*-0.0743227);
}

double NNfunction_ss_cLuR::synapse0x29b32d0() {
   return (neuron0x299a430()*0.302319);
}

double NNfunction_ss_cLuR::synapse0x29b3310() {
   return (neuron0x299a770()*0.143359);
}

double NNfunction_ss_cLuR::synapse0x29b3350() {
   return (neuron0x299aab0()*-0.112143);
}

double NNfunction_ss_cLuR::synapse0x29b3390() {
   return (neuron0x299adf0()*-0.0194803);
}

double NNfunction_ss_cLuR::synapse0x29b3710() {
   return (neuron0x2996230()*-0.344151);
}

double NNfunction_ss_cLuR::synapse0x29b3750() {
   return (neuron0x2996570()*0.488089);
}

double NNfunction_ss_cLuR::synapse0x29b3790() {
   return (neuron0x29968b0()*-1.24518);
}

double NNfunction_ss_cLuR::synapse0x29b37d0() {
   return (neuron0x2996bf0()*-1.04841);
}

double NNfunction_ss_cLuR::synapse0x29b3810() {
   return (neuron0x2996f30()*0.341777);
}

double NNfunction_ss_cLuR::synapse0x29b3850() {
   return (neuron0x2997270()*0.125615);
}

double NNfunction_ss_cLuR::synapse0x29b3890() {
   return (neuron0x29975b0()*0.282195);
}

double NNfunction_ss_cLuR::synapse0x29b38d0() {
   return (neuron0x29978f0()*0.294672);
}

double NNfunction_ss_cLuR::synapse0x29b3910() {
   return (neuron0x2997c30()*-0.50213);
}

double NNfunction_ss_cLuR::synapse0x29b3950() {
   return (neuron0x2997f70()*-0.395311);
}

double NNfunction_ss_cLuR::synapse0x29b3990() {
   return (neuron0x29982b0()*-0.214695);
}

double NNfunction_ss_cLuR::synapse0x29b39d0() {
   return (neuron0x29985f0()*-0.188934);
}

double NNfunction_ss_cLuR::synapse0x29b3a10() {
   return (neuron0x2998930()*-0.0257941);
}

double NNfunction_ss_cLuR::synapse0x29b3a50() {
   return (neuron0x2998c70()*0.413616);
}

double NNfunction_ss_cLuR::synapse0x29b3a90() {
   return (neuron0x2998fb0()*2.35027);
}

double NNfunction_ss_cLuR::synapse0x29b3ad0() {
   return (neuron0x29992f0()*-0.020145);
}

double NNfunction_ss_cLuR::synapse0x29b3560() {
   return (neuron0x2999630()*0.342977);
}

double NNfunction_ss_cLuR::synapse0x29b35a0() {
   return (neuron0x2999b90()*-0.347349);
}

double NNfunction_ss_cLuR::synapse0x29b3c20() {
   return (neuron0x2999db0()*-0.57065);
}

double NNfunction_ss_cLuR::synapse0x29b3c60() {
   return (neuron0x299a0f0()*-0.356375);
}

double NNfunction_ss_cLuR::synapse0x29b3ca0() {
   return (neuron0x299a430()*-0.207928);
}

double NNfunction_ss_cLuR::synapse0x29b3ce0() {
   return (neuron0x299a770()*-1.05312);
}

double NNfunction_ss_cLuR::synapse0x29b3d20() {
   return (neuron0x299aab0()*0.306227);
}

double NNfunction_ss_cLuR::synapse0x29b3d60() {
   return (neuron0x299adf0()*-0.210078);
}

double NNfunction_ss_cLuR::synapse0x29b40e0() {
   return (neuron0x2996230()*0.619266);
}

double NNfunction_ss_cLuR::synapse0x29b4120() {
   return (neuron0x2996570()*-0.57025);
}

double NNfunction_ss_cLuR::synapse0x29b4160() {
   return (neuron0x29968b0()*0.355382);
}

double NNfunction_ss_cLuR::synapse0x29b41a0() {
   return (neuron0x2996bf0()*0.682354);
}

double NNfunction_ss_cLuR::synapse0x29b41e0() {
   return (neuron0x2996f30()*0.882542);
}

double NNfunction_ss_cLuR::synapse0x29b4220() {
   return (neuron0x2997270()*-0.800331);
}

double NNfunction_ss_cLuR::synapse0x29b4260() {
   return (neuron0x29975b0()*0.145339);
}

double NNfunction_ss_cLuR::synapse0x29b42a0() {
   return (neuron0x29978f0()*0.233873);
}

double NNfunction_ss_cLuR::synapse0x29b42e0() {
   return (neuron0x2997c30()*0.948169);
}

double NNfunction_ss_cLuR::synapse0x29b4320() {
   return (neuron0x2997f70()*0.38588);
}

double NNfunction_ss_cLuR::synapse0x29b4360() {
   return (neuron0x29982b0()*0.233821);
}

double NNfunction_ss_cLuR::synapse0x29b43a0() {
   return (neuron0x29985f0()*-0.874128);
}

double NNfunction_ss_cLuR::synapse0x29b43e0() {
   return (neuron0x2998930()*-0.443828);
}

double NNfunction_ss_cLuR::synapse0x29b4420() {
   return (neuron0x2998c70()*-0.687182);
}

double NNfunction_ss_cLuR::synapse0x29b4460() {
   return (neuron0x2998fb0()*0.4681);
}

double NNfunction_ss_cLuR::synapse0x29b44a0() {
   return (neuron0x29992f0()*-0.326055);
}

double NNfunction_ss_cLuR::synapse0x29b3f30() {
   return (neuron0x2999630()*0.65);
}

double NNfunction_ss_cLuR::synapse0x29b3f70() {
   return (neuron0x2999b90()*0.0503825);
}

double NNfunction_ss_cLuR::synapse0x29b45f0() {
   return (neuron0x2999db0()*-0.443526);
}

double NNfunction_ss_cLuR::synapse0x29b4630() {
   return (neuron0x299a0f0()*-0.354978);
}

double NNfunction_ss_cLuR::synapse0x29b4670() {
   return (neuron0x299a430()*0.763949);
}

double NNfunction_ss_cLuR::synapse0x29b46b0() {
   return (neuron0x299a770()*-0.593923);
}

double NNfunction_ss_cLuR::synapse0x29b46f0() {
   return (neuron0x299aab0()*0.124691);
}

double NNfunction_ss_cLuR::synapse0x29b4730() {
   return (neuron0x299adf0()*-0.159769);
}

double NNfunction_ss_cLuR::synapse0x29b4ab0() {
   return (neuron0x2996230()*0.00346293);
}

double NNfunction_ss_cLuR::synapse0x29b4af0() {
   return (neuron0x2996570()*-0.00260327);
}

double NNfunction_ss_cLuR::synapse0x29b4b30() {
   return (neuron0x29968b0()*-0.0289767);
}

double NNfunction_ss_cLuR::synapse0x29b4b70() {
   return (neuron0x2996bf0()*1.99885);
}

double NNfunction_ss_cLuR::synapse0x29b4bb0() {
   return (neuron0x2996f30()*-0.0284585);
}

double NNfunction_ss_cLuR::synapse0x29b4bf0() {
   return (neuron0x2997270()*-0.0191021);
}

double NNfunction_ss_cLuR::synapse0x29b4c30() {
   return (neuron0x29975b0()*-0.0206542);
}

double NNfunction_ss_cLuR::synapse0x29b4c70() {
   return (neuron0x29978f0()*-0.0084325);
}

double NNfunction_ss_cLuR::synapse0x29b4cb0() {
   return (neuron0x2997c30()*-0.00260006);
}

double NNfunction_ss_cLuR::synapse0x29b4cf0() {
   return (neuron0x2997f70()*-0.0118636);
}

double NNfunction_ss_cLuR::synapse0x29b4d30() {
   return (neuron0x29982b0()*-0.0189559);
}

double NNfunction_ss_cLuR::synapse0x29b4d70() {
   return (neuron0x29985f0()*0.0251424);
}

double NNfunction_ss_cLuR::synapse0x29b4db0() {
   return (neuron0x2998930()*-0.172566);
}

double NNfunction_ss_cLuR::synapse0x29b4df0() {
   return (neuron0x2998c70()*-0.0412361);
}

double NNfunction_ss_cLuR::synapse0x29b4e30() {
   return (neuron0x2998fb0()*-0.19184);
}

double NNfunction_ss_cLuR::synapse0x29b4e70() {
   return (neuron0x29992f0()*0.0030163);
}

double NNfunction_ss_cLuR::synapse0x29b4900() {
   return (neuron0x2999630()*-0.0127075);
}

double NNfunction_ss_cLuR::synapse0x29b4940() {
   return (neuron0x2999b90()*-0.00143209);
}

double NNfunction_ss_cLuR::synapse0x29b4fc0() {
   return (neuron0x2999db0()*0.0141429);
}

double NNfunction_ss_cLuR::synapse0x29b5000() {
   return (neuron0x299a0f0()*0.00115703);
}

double NNfunction_ss_cLuR::synapse0x29b5040() {
   return (neuron0x299a430()*-0.00718283);
}

double NNfunction_ss_cLuR::synapse0x29b5080() {
   return (neuron0x299a770()*-0.0212152);
}

double NNfunction_ss_cLuR::synapse0x29b50c0() {
   return (neuron0x299aab0()*-0.0072937);
}

double NNfunction_ss_cLuR::synapse0x29b5100() {
   return (neuron0x299adf0()*0.00351255);
}

double NNfunction_ss_cLuR::synapse0x29b5480() {
   return (neuron0x2996230()*-0.352394);
}

double NNfunction_ss_cLuR::synapse0x29b54c0() {
   return (neuron0x2996570()*0.672805);
}

double NNfunction_ss_cLuR::synapse0x29b5500() {
   return (neuron0x29968b0()*-0.295556);
}

double NNfunction_ss_cLuR::synapse0x29b5540() {
   return (neuron0x2996bf0()*-0.708234);
}

double NNfunction_ss_cLuR::synapse0x29b5580() {
   return (neuron0x2996f30()*-1.32967);
}

double NNfunction_ss_cLuR::synapse0x29b55c0() {
   return (neuron0x2997270()*0.802641);
}

double NNfunction_ss_cLuR::synapse0x29b5600() {
   return (neuron0x29975b0()*0.506244);
}

double NNfunction_ss_cLuR::synapse0x29b5640() {
   return (neuron0x29978f0()*-1.34957);
}

double NNfunction_ss_cLuR::synapse0x29b5680() {
   return (neuron0x2997c30()*-0.519039);
}

double NNfunction_ss_cLuR::synapse0x29b56c0() {
   return (neuron0x2997f70()*0.243208);
}

double NNfunction_ss_cLuR::synapse0x29b5700() {
   return (neuron0x29982b0()*-0.191129);
}

double NNfunction_ss_cLuR::synapse0x29b5740() {
   return (neuron0x29985f0()*-0.637588);
}

double NNfunction_ss_cLuR::synapse0x29b5780() {
   return (neuron0x2998930()*-0.205337);
}

double NNfunction_ss_cLuR::synapse0x29b57c0() {
   return (neuron0x2998c70()*-0.279117);
}

double NNfunction_ss_cLuR::synapse0x29b5800() {
   return (neuron0x2998fb0()*1.79232);
}

double NNfunction_ss_cLuR::synapse0x29b5840() {
   return (neuron0x29992f0()*0.55016);
}

double NNfunction_ss_cLuR::synapse0x29b52d0() {
   return (neuron0x2999630()*0.14452);
}

double NNfunction_ss_cLuR::synapse0x29b5310() {
   return (neuron0x2999b90()*-0.102146);
}

double NNfunction_ss_cLuR::synapse0x29b5990() {
   return (neuron0x2999db0()*-0.703858);
}

double NNfunction_ss_cLuR::synapse0x29b59d0() {
   return (neuron0x299a0f0()*0.0509789);
}

double NNfunction_ss_cLuR::synapse0x29b5a10() {
   return (neuron0x299a430()*1.00959);
}

double NNfunction_ss_cLuR::synapse0x29b5a50() {
   return (neuron0x299a770()*-0.725865);
}

double NNfunction_ss_cLuR::synapse0x29b5a90() {
   return (neuron0x299aab0()*0.265314);
}

double NNfunction_ss_cLuR::synapse0x29b5ad0() {
   return (neuron0x299adf0()*-0.0386066);
}

double NNfunction_ss_cLuR::synapse0x29b5e50() {
   return (neuron0x2996230()*-0.150218);
}

double NNfunction_ss_cLuR::synapse0x29b5e90() {
   return (neuron0x2996570()*0.137741);
}

double NNfunction_ss_cLuR::synapse0x29b5ed0() {
   return (neuron0x29968b0()*-0.6609);
}

double NNfunction_ss_cLuR::synapse0x29b5f10() {
   return (neuron0x2996bf0()*1.17254);
}

double NNfunction_ss_cLuR::synapse0x29b5f50() {
   return (neuron0x2996f30()*-0.120092);
}

double NNfunction_ss_cLuR::synapse0x29b5f90() {
   return (neuron0x2997270()*-0.274647);
}

double NNfunction_ss_cLuR::synapse0x29b5fd0() {
   return (neuron0x29975b0()*-0.713988);
}

double NNfunction_ss_cLuR::synapse0x29b6010() {
   return (neuron0x29978f0()*-0.125425);
}

double NNfunction_ss_cLuR::synapse0x29b6050() {
   return (neuron0x2997c30()*-0.483493);
}

double NNfunction_ss_cLuR::synapse0x29b6090() {
   return (neuron0x2997f70()*-0.0934608);
}

double NNfunction_ss_cLuR::synapse0x29b60d0() {
   return (neuron0x29982b0()*-0.0221472);
}

double NNfunction_ss_cLuR::synapse0x29b6110() {
   return (neuron0x29985f0()*0.140745);
}

double NNfunction_ss_cLuR::synapse0x29b6150() {
   return (neuron0x2998930()*-0.889601);
}

double NNfunction_ss_cLuR::synapse0x29b6190() {
   return (neuron0x2998c70()*0.329488);
}

double NNfunction_ss_cLuR::synapse0x29b61d0() {
   return (neuron0x2998fb0()*1.94357);
}

double NNfunction_ss_cLuR::synapse0x29b6210() {
   return (neuron0x29992f0()*-0.0541316);
}

double NNfunction_ss_cLuR::synapse0x29b5ca0() {
   return (neuron0x2999630()*-0.583581);
}

double NNfunction_ss_cLuR::synapse0x29b5ce0() {
   return (neuron0x2999b90()*-0.0262385);
}

double NNfunction_ss_cLuR::synapse0x29b6360() {
   return (neuron0x2999db0()*0.288431);
}

double NNfunction_ss_cLuR::synapse0x29b63a0() {
   return (neuron0x299a0f0()*-0.200321);
}

double NNfunction_ss_cLuR::synapse0x29b63e0() {
   return (neuron0x299a430()*-0.0785221);
}

double NNfunction_ss_cLuR::synapse0x29b6420() {
   return (neuron0x299a770()*-0.143523);
}

double NNfunction_ss_cLuR::synapse0x29b6460() {
   return (neuron0x299aab0()*0.143481);
}

double NNfunction_ss_cLuR::synapse0x29b64a0() {
   return (neuron0x299adf0()*0.145409);
}

double NNfunction_ss_cLuR::synapse0x29b6820() {
   return (neuron0x2996230()*0.232716);
}

double NNfunction_ss_cLuR::synapse0x29b6860() {
   return (neuron0x2996570()*-0.0289322);
}

double NNfunction_ss_cLuR::synapse0x29b68a0() {
   return (neuron0x29968b0()*0.108238);
}

double NNfunction_ss_cLuR::synapse0x29b68e0() {
   return (neuron0x2996bf0()*0.470626);
}

double NNfunction_ss_cLuR::synapse0x29b6920() {
   return (neuron0x2996f30()*-0.292026);
}

double NNfunction_ss_cLuR::synapse0x29b6960() {
   return (neuron0x2997270()*0.104759);
}

double NNfunction_ss_cLuR::synapse0x29b69a0() {
   return (neuron0x29975b0()*-0.357655);
}

double NNfunction_ss_cLuR::synapse0x29b69e0() {
   return (neuron0x29978f0()*-0.475116);
}

double NNfunction_ss_cLuR::synapse0x29b6a20() {
   return (neuron0x2997c30()*-0.279217);
}

double NNfunction_ss_cLuR::synapse0x29b6a60() {
   return (neuron0x2997f70()*-0.105134);
}

double NNfunction_ss_cLuR::synapse0x29b6aa0() {
   return (neuron0x29982b0()*-0.00378032);
}

double NNfunction_ss_cLuR::synapse0x29b6ae0() {
   return (neuron0x29985f0()*-0.112146);
}

double NNfunction_ss_cLuR::synapse0x29b6b20() {
   return (neuron0x2998930()*-1.75101);
}

double NNfunction_ss_cLuR::synapse0x29b6b60() {
   return (neuron0x2998c70()*0.0510928);
}

double NNfunction_ss_cLuR::synapse0x29b6ba0() {
   return (neuron0x2998fb0()*-1.92045);
}

double NNfunction_ss_cLuR::synapse0x29b6be0() {
   return (neuron0x29992f0()*0.121856);
}

double NNfunction_ss_cLuR::synapse0x29b6670() {
   return (neuron0x2999630()*-0.0144584);
}

double NNfunction_ss_cLuR::synapse0x29b66b0() {
   return (neuron0x2999b90()*0.27052);
}

double NNfunction_ss_cLuR::synapse0x29b6d30() {
   return (neuron0x2999db0()*-0.0701713);
}

double NNfunction_ss_cLuR::synapse0x29b6d70() {
   return (neuron0x299a0f0()*0.244252);
}

double NNfunction_ss_cLuR::synapse0x29b6db0() {
   return (neuron0x299a430()*0.0945117);
}

double NNfunction_ss_cLuR::synapse0x29b6df0() {
   return (neuron0x299a770()*-0.110455);
}

double NNfunction_ss_cLuR::synapse0x29b6e30() {
   return (neuron0x299aab0()*0.116843);
}

double NNfunction_ss_cLuR::synapse0x29b6e70() {
   return (neuron0x299adf0()*0.2032);
}

double NNfunction_ss_cLuR::synapse0x29b71f0() {
   return (neuron0x2996230()*0.190684);
}

double NNfunction_ss_cLuR::synapse0x29b7230() {
   return (neuron0x2996570()*0.387036);
}

double NNfunction_ss_cLuR::synapse0x29b7270() {
   return (neuron0x29968b0()*0.269068);
}

double NNfunction_ss_cLuR::synapse0x29b72b0() {
   return (neuron0x2996bf0()*-0.141489);
}

double NNfunction_ss_cLuR::synapse0x29b72f0() {
   return (neuron0x2996f30()*-0.0292289);
}

double NNfunction_ss_cLuR::synapse0x29b7330() {
   return (neuron0x2997270()*-0.240923);
}

double NNfunction_ss_cLuR::synapse0x29b7370() {
   return (neuron0x29975b0()*-0.12731);
}

double NNfunction_ss_cLuR::synapse0x29b73b0() {
   return (neuron0x29978f0()*-0.0340037);
}

double NNfunction_ss_cLuR::synapse0x29b73f0() {
   return (neuron0x2997c30()*0.0403472);
}

double NNfunction_ss_cLuR::synapse0x29b7430() {
   return (neuron0x2997f70()*-0.105401);
}

double NNfunction_ss_cLuR::synapse0x29b7470() {
   return (neuron0x29982b0()*0.00516929);
}

double NNfunction_ss_cLuR::synapse0x29b74b0() {
   return (neuron0x29985f0()*0.35164);
}

double NNfunction_ss_cLuR::synapse0x29b74f0() {
   return (neuron0x2998930()*-0.105792);
}

double NNfunction_ss_cLuR::synapse0x29b7530() {
   return (neuron0x2998c70()*-0.0192704);
}

double NNfunction_ss_cLuR::synapse0x29b7570() {
   return (neuron0x2998fb0()*-0.213952);
}

double NNfunction_ss_cLuR::synapse0x29b75b0() {
   return (neuron0x29992f0()*0.0202754);
}

double NNfunction_ss_cLuR::synapse0x29b7040() {
   return (neuron0x2999630()*0.0541795);
}

double NNfunction_ss_cLuR::synapse0x29b7080() {
   return (neuron0x2999b90()*-0.0115555);
}

double NNfunction_ss_cLuR::synapse0x29b7700() {
   return (neuron0x2999db0()*-0.0697493);
}

double NNfunction_ss_cLuR::synapse0x29b7740() {
   return (neuron0x299a0f0()*0.0266439);
}

double NNfunction_ss_cLuR::synapse0x29b7780() {
   return (neuron0x299a430()*-0.164013);
}

double NNfunction_ss_cLuR::synapse0x29b77c0() {
   return (neuron0x299a770()*-0.174123);
}

double NNfunction_ss_cLuR::synapse0x29b7800() {
   return (neuron0x299aab0()*0.02981);
}

double NNfunction_ss_cLuR::synapse0x29b7840() {
   return (neuron0x299adf0()*0.0685879);
}

double NNfunction_ss_cLuR::synapse0x29a02f0() {
   return (neuron0x2996230()*0.521511);
}

double NNfunction_ss_cLuR::synapse0x29a0330() {
   return (neuron0x2996570()*-0.0683194);
}

double NNfunction_ss_cLuR::synapse0x29a0370() {
   return (neuron0x29968b0()*0.0326433);
}

double NNfunction_ss_cLuR::synapse0x29a03b0() {
   return (neuron0x2996bf0()*0.0643225);
}

double NNfunction_ss_cLuR::synapse0x29a03f0() {
   return (neuron0x2996f30()*-0.210091);
}

double NNfunction_ss_cLuR::synapse0x29a0430() {
   return (neuron0x2997270()*0.176781);
}

double NNfunction_ss_cLuR::synapse0x29a0470() {
   return (neuron0x29975b0()*-0.0359608);
}

double NNfunction_ss_cLuR::synapse0x29a04b0() {
   return (neuron0x29978f0()*0.426132);
}

double NNfunction_ss_cLuR::synapse0x29b7fd0() {
   return (neuron0x2997c30()*0.245524);
}

double NNfunction_ss_cLuR::synapse0x29b8010() {
   return (neuron0x2997f70()*0.264777);
}

double NNfunction_ss_cLuR::synapse0x29b8050() {
   return (neuron0x29982b0()*0.25359);
}

double NNfunction_ss_cLuR::synapse0x29b8090() {
   return (neuron0x29985f0()*-0.572942);
}

double NNfunction_ss_cLuR::synapse0x29b80d0() {
   return (neuron0x2998930()*-0.229455);
}

double NNfunction_ss_cLuR::synapse0x29b8110() {
   return (neuron0x2998c70()*-0.0360425);
}

double NNfunction_ss_cLuR::synapse0x29b8150() {
   return (neuron0x2998fb0()*-0.194461);
}

double NNfunction_ss_cLuR::synapse0x29b8190() {
   return (neuron0x29992f0()*0.0847625);
}

double NNfunction_ss_cLuR::synapse0x29b7a10() {
   return (neuron0x2999630()*0.378335);
}

double NNfunction_ss_cLuR::synapse0x29b7a50() {
   return (neuron0x2999b90()*-0.115937);
}

double NNfunction_ss_cLuR::synapse0x29b82e0() {
   return (neuron0x2999db0()*-0.16326);
}

double NNfunction_ss_cLuR::synapse0x29b8320() {
   return (neuron0x299a0f0()*0.132461);
}

double NNfunction_ss_cLuR::synapse0x29b8360() {
   return (neuron0x299a430()*0.138347);
}

double NNfunction_ss_cLuR::synapse0x29b83a0() {
   return (neuron0x299a770()*0.598689);
}

double NNfunction_ss_cLuR::synapse0x29b83e0() {
   return (neuron0x299aab0()*0.167932);
}

double NNfunction_ss_cLuR::synapse0x29b8420() {
   return (neuron0x299adf0()*0.0548473);
}

double NNfunction_ss_cLuR::synapse0x29b87a0() {
   return (neuron0x2996230()*-0.22311);
}

double NNfunction_ss_cLuR::synapse0x29b87e0() {
   return (neuron0x2996570()*1.09955);
}

double NNfunction_ss_cLuR::synapse0x29b8820() {
   return (neuron0x29968b0()*-0.259711);
}

double NNfunction_ss_cLuR::synapse0x29b8860() {
   return (neuron0x2996bf0()*-0.385675);
}

double NNfunction_ss_cLuR::synapse0x29b88a0() {
   return (neuron0x2996f30()*-0.112489);
}

double NNfunction_ss_cLuR::synapse0x29b88e0() {
   return (neuron0x2997270()*0.357556);
}

double NNfunction_ss_cLuR::synapse0x29b8920() {
   return (neuron0x29975b0()*0.471814);
}

double NNfunction_ss_cLuR::synapse0x29b8960() {
   return (neuron0x29978f0()*-0.121965);
}

double NNfunction_ss_cLuR::synapse0x29b89a0() {
   return (neuron0x2997c30()*0.0209796);
}

double NNfunction_ss_cLuR::synapse0x29b89e0() {
   return (neuron0x2997f70()*0.734059);
}

double NNfunction_ss_cLuR::synapse0x29b8a20() {
   return (neuron0x29982b0()*-0.403985);
}

double NNfunction_ss_cLuR::synapse0x29b8a60() {
   return (neuron0x29985f0()*-0.0147085);
}

double NNfunction_ss_cLuR::synapse0x29b8aa0() {
   return (neuron0x2998930()*-1.32126);
}

double NNfunction_ss_cLuR::synapse0x29b8ae0() {
   return (neuron0x2998c70()*-0.13477);
}

double NNfunction_ss_cLuR::synapse0x29b8b20() {
   return (neuron0x2998fb0()*-0.410538);
}

double NNfunction_ss_cLuR::synapse0x29b8b60() {
   return (neuron0x29992f0()*0.20291);
}

double NNfunction_ss_cLuR::synapse0x29b85f0() {
   return (neuron0x2999630()*0.293399);
}

double NNfunction_ss_cLuR::synapse0x29b8630() {
   return (neuron0x2999b90()*0.597714);
}

double NNfunction_ss_cLuR::synapse0x29b8cb0() {
   return (neuron0x2999db0()*-0.341112);
}

double NNfunction_ss_cLuR::synapse0x29b8cf0() {
   return (neuron0x299a0f0()*0.324018);
}

double NNfunction_ss_cLuR::synapse0x29b8d30() {
   return (neuron0x299a430()*0.531498);
}

double NNfunction_ss_cLuR::synapse0x29b8d70() {
   return (neuron0x299a770()*-0.313024);
}

double NNfunction_ss_cLuR::synapse0x29b8db0() {
   return (neuron0x299aab0()*-0.524254);
}

double NNfunction_ss_cLuR::synapse0x29b8df0() {
   return (neuron0x299adf0()*-0.326722);
}

double NNfunction_ss_cLuR::synapse0x29b9170() {
   return (neuron0x2996230()*-0.115957);
}

double NNfunction_ss_cLuR::synapse0x29b91b0() {
   return (neuron0x2996570()*0.124038);
}

double NNfunction_ss_cLuR::synapse0x29b91f0() {
   return (neuron0x29968b0()*0.0669159);
}

double NNfunction_ss_cLuR::synapse0x29b9230() {
   return (neuron0x2996bf0()*1.23229);
}

double NNfunction_ss_cLuR::synapse0x29b9270() {
   return (neuron0x2996f30()*0.375782);
}

double NNfunction_ss_cLuR::synapse0x29b92b0() {
   return (neuron0x2997270()*0.271492);
}

double NNfunction_ss_cLuR::synapse0x29b92f0() {
   return (neuron0x29975b0()*0.421172);
}

double NNfunction_ss_cLuR::synapse0x29b9330() {
   return (neuron0x29978f0()*0.37005);
}

double NNfunction_ss_cLuR::synapse0x29b9370() {
   return (neuron0x2997c30()*0.347082);
}

double NNfunction_ss_cLuR::synapse0x29b93b0() {
   return (neuron0x2997f70()*0.0620567);
}

double NNfunction_ss_cLuR::synapse0x29b93f0() {
   return (neuron0x29982b0()*0.0255072);
}

double NNfunction_ss_cLuR::synapse0x29b9430() {
   return (neuron0x29985f0()*-0.257786);
}

double NNfunction_ss_cLuR::synapse0x29b9470() {
   return (neuron0x2998930()*-0.381135);
}

double NNfunction_ss_cLuR::synapse0x29b94b0() {
   return (neuron0x2998c70()*0.154524);
}

double NNfunction_ss_cLuR::synapse0x29b94f0() {
   return (neuron0x2998fb0()*-0.722083);
}

double NNfunction_ss_cLuR::synapse0x29b9530() {
   return (neuron0x29992f0()*-0.214194);
}

double NNfunction_ss_cLuR::synapse0x29b8fc0() {
   return (neuron0x2999630()*-0.182542);
}

double NNfunction_ss_cLuR::synapse0x29b9000() {
   return (neuron0x2999b90()*-0.0460814);
}

double NNfunction_ss_cLuR::synapse0x29a9b30() {
   return (neuron0x2999db0()*0.1016);
}

double NNfunction_ss_cLuR::synapse0x29a9b70() {
   return (neuron0x299a0f0()*-0.187619);
}

double NNfunction_ss_cLuR::synapse0x29a9bb0() {
   return (neuron0x299a430()*0.575212);
}

double NNfunction_ss_cLuR::synapse0x29a9bf0() {
   return (neuron0x299a770()*0.143899);
}

double NNfunction_ss_cLuR::synapse0x29a9c30() {
   return (neuron0x299aab0()*-0.15761);
}

double NNfunction_ss_cLuR::synapse0x29a9c70() {
   return (neuron0x299adf0()*-0.041875);
}

double NNfunction_ss_cLuR::synapse0x29a9ff0() {
   return (neuron0x2996230()*0.298255);
}

double NNfunction_ss_cLuR::synapse0x29aa030() {
   return (neuron0x2996570()*0.0103428);
}

double NNfunction_ss_cLuR::synapse0x29aa070() {
   return (neuron0x29968b0()*-0.247376);
}

double NNfunction_ss_cLuR::synapse0x29aa0b0() {
   return (neuron0x2996bf0()*3.04621);
}

double NNfunction_ss_cLuR::synapse0x29aa0f0() {
   return (neuron0x2996f30()*0.0521137);
}

double NNfunction_ss_cLuR::synapse0x29aa130() {
   return (neuron0x2997270()*-0.24324);
}

double NNfunction_ss_cLuR::synapse0x29aa170() {
   return (neuron0x29975b0()*-0.128786);
}

double NNfunction_ss_cLuR::synapse0x29aa1b0() {
   return (neuron0x29978f0()*-0.0026048);
}

double NNfunction_ss_cLuR::synapse0x29aa1f0() {
   return (neuron0x2997c30()*-0.153678);
}

double NNfunction_ss_cLuR::synapse0x29aa230() {
   return (neuron0x2997f70()*-0.145759);
}

double NNfunction_ss_cLuR::synapse0x29aa270() {
   return (neuron0x29982b0()*-0.146053);
}

double NNfunction_ss_cLuR::synapse0x29aa2b0() {
   return (neuron0x29985f0()*-0.397606);
}

double NNfunction_ss_cLuR::synapse0x29aa2f0() {
   return (neuron0x2998930()*0.666042);
}

double NNfunction_ss_cLuR::synapse0x29aa330() {
   return (neuron0x2998c70()*0.0179496);
}

double NNfunction_ss_cLuR::synapse0x29aa370() {
   return (neuron0x2998fb0()*0.659836);
}

double NNfunction_ss_cLuR::synapse0x29aa3b0() {
   return (neuron0x29992f0()*0.13872);
}

double NNfunction_ss_cLuR::synapse0x29a9e40() {
   return (neuron0x2999630()*-0.0433062);
}

double NNfunction_ss_cLuR::synapse0x29a9e80() {
   return (neuron0x2999b90()*0.0937921);
}

double NNfunction_ss_cLuR::synapse0x29aa500() {
   return (neuron0x2999db0()*0.0254316);
}

double NNfunction_ss_cLuR::synapse0x29aa540() {
   return (neuron0x299a0f0()*0.0561978);
}

double NNfunction_ss_cLuR::synapse0x29aa580() {
   return (neuron0x299a430()*-0.169152);
}

double NNfunction_ss_cLuR::synapse0x29aa5c0() {
   return (neuron0x299a770()*-0.00994048);
}

double NNfunction_ss_cLuR::synapse0x29aa600() {
   return (neuron0x299aab0()*0.252865);
}

double NNfunction_ss_cLuR::synapse0x29aa640() {
   return (neuron0x299adf0()*-0.100003);
}

double NNfunction_ss_cLuR::synapse0x29aa9c0() {
   return (neuron0x2996230()*-0.0235251);
}

double NNfunction_ss_cLuR::synapse0x29aaa00() {
   return (neuron0x2996570()*-0.0283345);
}

double NNfunction_ss_cLuR::synapse0x29aaa40() {
   return (neuron0x29968b0()*-0.0509618);
}

double NNfunction_ss_cLuR::synapse0x29aaa80() {
   return (neuron0x2996bf0()*-2.26993);
}

double NNfunction_ss_cLuR::synapse0x29aaac0() {
   return (neuron0x2996f30()*0.498755);
}

double NNfunction_ss_cLuR::synapse0x29aab00() {
   return (neuron0x2997270()*1.24721);
}

double NNfunction_ss_cLuR::synapse0x29aab40() {
   return (neuron0x29975b0()*0.0897948);
}

double NNfunction_ss_cLuR::synapse0x29aab80() {
   return (neuron0x29978f0()*0.110154);
}

double NNfunction_ss_cLuR::synapse0x29aabc0() {
   return (neuron0x2997c30()*1.35938);
}

double NNfunction_ss_cLuR::synapse0x29aac00() {
   return (neuron0x2997f70()*1.08811);
}

double NNfunction_ss_cLuR::synapse0x29aac40() {
   return (neuron0x29982b0()*0.249377);
}

double NNfunction_ss_cLuR::synapse0x29aac80() {
   return (neuron0x29985f0()*-0.169696);
}

double NNfunction_ss_cLuR::synapse0x29aacc0() {
   return (neuron0x2998930()*1.29614);
}

double NNfunction_ss_cLuR::synapse0x29aad00() {
   return (neuron0x2998c70()*-1.801);
}

double NNfunction_ss_cLuR::synapse0x29aad40() {
   return (neuron0x2998fb0()*1.43536);
}

double NNfunction_ss_cLuR::synapse0x29aad80() {
   return (neuron0x29992f0()*-0.560995);
}

double NNfunction_ss_cLuR::synapse0x29aa810() {
   return (neuron0x2999630()*-0.172309);
}

double NNfunction_ss_cLuR::synapse0x29aa850() {
   return (neuron0x2999b90()*-0.59653);
}

double NNfunction_ss_cLuR::synapse0x29aaed0() {
   return (neuron0x2999db0()*-0.128287);
}

double NNfunction_ss_cLuR::synapse0x29aaf10() {
   return (neuron0x299a0f0()*0.9587);
}

double NNfunction_ss_cLuR::synapse0x29aaf50() {
   return (neuron0x299a430()*1.00956);
}

double NNfunction_ss_cLuR::synapse0x29aaf90() {
   return (neuron0x299a770()*-0.450753);
}

double NNfunction_ss_cLuR::synapse0x29aafd0() {
   return (neuron0x299aab0()*-0.731339);
}

double NNfunction_ss_cLuR::synapse0x29ab010() {
   return (neuron0x299adf0()*-0.093732);
}

double NNfunction_ss_cLuR::synapse0x29ab390() {
   return (neuron0x2996230()*0.0155631);
}

double NNfunction_ss_cLuR::synapse0x29ab3d0() {
   return (neuron0x2996570()*0.00845861);
}

double NNfunction_ss_cLuR::synapse0x29ab410() {
   return (neuron0x29968b0()*0.0471101);
}

double NNfunction_ss_cLuR::synapse0x29ab450() {
   return (neuron0x2996bf0()*-9.46369);
}

double NNfunction_ss_cLuR::synapse0x29ab490() {
   return (neuron0x2996f30()*0.00276128);
}

double NNfunction_ss_cLuR::synapse0x29ab4d0() {
   return (neuron0x2997270()*0.0110539);
}

double NNfunction_ss_cLuR::synapse0x29ab510() {
   return (neuron0x29975b0()*-0.0231653);
}

double NNfunction_ss_cLuR::synapse0x29ab550() {
   return (neuron0x29978f0()*-0.0063309);
}

double NNfunction_ss_cLuR::synapse0x29ab590() {
   return (neuron0x2997c30()*0.0500221);
}

double NNfunction_ss_cLuR::synapse0x29ab5d0() {
   return (neuron0x2997f70()*0.0259978);
}

double NNfunction_ss_cLuR::synapse0x29ab610() {
   return (neuron0x29982b0()*0.00595223);
}

double NNfunction_ss_cLuR::synapse0x29ab650() {
   return (neuron0x29985f0()*-0.011961);
}

double NNfunction_ss_cLuR::synapse0x29ab690() {
   return (neuron0x2998930()*0.35821);
}

double NNfunction_ss_cLuR::synapse0x29ab6d0() {
   return (neuron0x2998c70()*0.0229251);
}

double NNfunction_ss_cLuR::synapse0x29ab710() {
   return (neuron0x2998fb0()*0.392092);
}

double NNfunction_ss_cLuR::synapse0x29ab750() {
   return (neuron0x29992f0()*-0.0310061);
}

double NNfunction_ss_cLuR::synapse0x29ab1e0() {
   return (neuron0x2999630()*-0.0162922);
}

double NNfunction_ss_cLuR::synapse0x29ab220() {
   return (neuron0x2999b90()*0.00216372);
}

double NNfunction_ss_cLuR::synapse0x29ab8a0() {
   return (neuron0x2999db0()*-0.0244302);
}

double NNfunction_ss_cLuR::synapse0x29ab8e0() {
   return (neuron0x299a0f0()*0.0232591);
}

double NNfunction_ss_cLuR::synapse0x29ab920() {
   return (neuron0x299a430()*0.0364678);
}

double NNfunction_ss_cLuR::synapse0x29ab960() {
   return (neuron0x299a770()*-0.0123615);
}

double NNfunction_ss_cLuR::synapse0x29ab9a0() {
   return (neuron0x299aab0()*0.000525961);
}

double NNfunction_ss_cLuR::synapse0x29ab9e0() {
   return (neuron0x299adf0()*-0.0254125);
}

double NNfunction_ss_cLuR::synapse0x29bd8b0() {
   return (neuron0x2996230()*-0.131965);
}

double NNfunction_ss_cLuR::synapse0x29bd8f0() {
   return (neuron0x2996570()*0.0524434);
}

double NNfunction_ss_cLuR::synapse0x29bd930() {
   return (neuron0x29968b0()*0.145552);
}

double NNfunction_ss_cLuR::synapse0x29bd970() {
   return (neuron0x2996bf0()*0.540387);
}

double NNfunction_ss_cLuR::synapse0x29bd9b0() {
   return (neuron0x2996f30()*0.146517);
}

double NNfunction_ss_cLuR::synapse0x29bd9f0() {
   return (neuron0x2997270()*0.0156651);
}

double NNfunction_ss_cLuR::synapse0x29bda30() {
   return (neuron0x29975b0()*0.489197);
}

double NNfunction_ss_cLuR::synapse0x29bda70() {
   return (neuron0x29978f0()*0.62187);
}

double NNfunction_ss_cLuR::synapse0x29bdab0() {
   return (neuron0x2997c30()*-0.147543);
}

double NNfunction_ss_cLuR::synapse0x29bdaf0() {
   return (neuron0x2997f70()*0.0313425);
}

double NNfunction_ss_cLuR::synapse0x29bdb30() {
   return (neuron0x29982b0()*-0.15281);
}

double NNfunction_ss_cLuR::synapse0x29bdb70() {
   return (neuron0x29985f0()*0.309453);
}

double NNfunction_ss_cLuR::synapse0x29bdbb0() {
   return (neuron0x2998930()*-0.268669);
}

double NNfunction_ss_cLuR::synapse0x29bdbf0() {
   return (neuron0x2998c70()*-0.0807874);
}

double NNfunction_ss_cLuR::synapse0x29bdc30() {
   return (neuron0x2998fb0()*0.823865);
}

double NNfunction_ss_cLuR::synapse0x29bdc70() {
   return (neuron0x29992f0()*-0.529256);
}

double NNfunction_ss_cLuR::synapse0x29aba20() {
   return (neuron0x2999630()*-0.277004);
}

double NNfunction_ss_cLuR::synapse0x29aba60() {
   return (neuron0x2999b90()*-0.1431);
}

double NNfunction_ss_cLuR::synapse0x29bddc0() {
   return (neuron0x2999db0()*-0.0992198);
}

double NNfunction_ss_cLuR::synapse0x29bde00() {
   return (neuron0x299a0f0()*-0.203157);
}

double NNfunction_ss_cLuR::synapse0x29bde40() {
   return (neuron0x299a430()*0.0525071);
}

double NNfunction_ss_cLuR::synapse0x29bde80() {
   return (neuron0x299a770()*-0.0158211);
}

double NNfunction_ss_cLuR::synapse0x29bdec0() {
   return (neuron0x299aab0()*-0.322595);
}

double NNfunction_ss_cLuR::synapse0x29bdf00() {
   return (neuron0x299adf0()*-0.347917);
}

double NNfunction_ss_cLuR::synapse0x29be280() {
   return (neuron0x2996230()*0.0859999);
}

double NNfunction_ss_cLuR::synapse0x29be2c0() {
   return (neuron0x2996570()*0.403337);
}

double NNfunction_ss_cLuR::synapse0x29be300() {
   return (neuron0x29968b0()*-0.0387966);
}

double NNfunction_ss_cLuR::synapse0x29be340() {
   return (neuron0x2996bf0()*-0.542776);
}

double NNfunction_ss_cLuR::synapse0x29be380() {
   return (neuron0x2996f30()*1.27525);
}

double NNfunction_ss_cLuR::synapse0x29be3c0() {
   return (neuron0x2997270()*0.659782);
}

double NNfunction_ss_cLuR::synapse0x29be400() {
   return (neuron0x29975b0()*-0.838205);
}

double NNfunction_ss_cLuR::synapse0x29be440() {
   return (neuron0x29978f0()*0.781816);
}

double NNfunction_ss_cLuR::synapse0x29be480() {
   return (neuron0x2997c30()*0.421987);
}

double NNfunction_ss_cLuR::synapse0x29be4c0() {
   return (neuron0x2997f70()*0.27915);
}

double NNfunction_ss_cLuR::synapse0x29be500() {
   return (neuron0x29982b0()*-0.18744);
}

double NNfunction_ss_cLuR::synapse0x29be540() {
   return (neuron0x29985f0()*-0.305587);
}

double NNfunction_ss_cLuR::synapse0x29be580() {
   return (neuron0x2998930()*0.00858512);
}

double NNfunction_ss_cLuR::synapse0x29be5c0() {
   return (neuron0x2998c70()*-0.32388);
}

double NNfunction_ss_cLuR::synapse0x29be600() {
   return (neuron0x2998fb0()*-0.0402432);
}

double NNfunction_ss_cLuR::synapse0x29be640() {
   return (neuron0x29992f0()*-0.988701);
}

double NNfunction_ss_cLuR::synapse0x29be0d0() {
   return (neuron0x2999630()*-0.187171);
}

double NNfunction_ss_cLuR::synapse0x29be110() {
   return (neuron0x2999b90()*-0.0384998);
}

double NNfunction_ss_cLuR::synapse0x29be790() {
   return (neuron0x2999db0()*-0.236723);
}

double NNfunction_ss_cLuR::synapse0x29be7d0() {
   return (neuron0x299a0f0()*-0.793668);
}

double NNfunction_ss_cLuR::synapse0x29be810() {
   return (neuron0x299a430()*-0.67022);
}

double NNfunction_ss_cLuR::synapse0x29be850() {
   return (neuron0x299a770()*-0.0930396);
}

double NNfunction_ss_cLuR::synapse0x29be890() {
   return (neuron0x299aab0()*0.370316);
}

double NNfunction_ss_cLuR::synapse0x29be8d0() {
   return (neuron0x299adf0()*0.238399);
}

double NNfunction_ss_cLuR::synapse0x29bec50() {
   return (neuron0x2996230()*-0.609982);
}

double NNfunction_ss_cLuR::synapse0x29bec90() {
   return (neuron0x2996570()*-0.615685);
}

double NNfunction_ss_cLuR::synapse0x29becd0() {
   return (neuron0x29968b0()*-0.164066);
}

double NNfunction_ss_cLuR::synapse0x29bed10() {
   return (neuron0x2996bf0()*-0.271702);
}

double NNfunction_ss_cLuR::synapse0x29bed50() {
   return (neuron0x2996f30()*0.190116);
}

double NNfunction_ss_cLuR::synapse0x29bed90() {
   return (neuron0x2997270()*0.0181838);
}

double NNfunction_ss_cLuR::synapse0x29bedd0() {
   return (neuron0x29975b0()*0.323708);
}

double NNfunction_ss_cLuR::synapse0x29bee10() {
   return (neuron0x29978f0()*0.057795);
}

double NNfunction_ss_cLuR::synapse0x29bee50() {
   return (neuron0x2997c30()*-0.39896);
}

double NNfunction_ss_cLuR::synapse0x29bee90() {
   return (neuron0x2997f70()*0.0288618);
}

double NNfunction_ss_cLuR::synapse0x29beed0() {
   return (neuron0x29982b0()*-0.536544);
}

double NNfunction_ss_cLuR::synapse0x29bef10() {
   return (neuron0x29985f0()*0.0379285);
}

double NNfunction_ss_cLuR::synapse0x29bef50() {
   return (neuron0x2998930()*0.700815);
}

double NNfunction_ss_cLuR::synapse0x29bef90() {
   return (neuron0x2998c70()*0.614482);
}

double NNfunction_ss_cLuR::synapse0x29befd0() {
   return (neuron0x2998fb0()*0.875282);
}

double NNfunction_ss_cLuR::synapse0x29bf010() {
   return (neuron0x29992f0()*-0.630932);
}

double NNfunction_ss_cLuR::synapse0x29beaa0() {
   return (neuron0x2999630()*-0.460507);
}

double NNfunction_ss_cLuR::synapse0x29beae0() {
   return (neuron0x2999b90()*-0.218287);
}

double NNfunction_ss_cLuR::synapse0x29bf160() {
   return (neuron0x2999db0()*0.267281);
}

double NNfunction_ss_cLuR::synapse0x29bf1a0() {
   return (neuron0x299a0f0()*0.938694);
}

double NNfunction_ss_cLuR::synapse0x29bf1e0() {
   return (neuron0x299a430()*-0.599218);
}

double NNfunction_ss_cLuR::synapse0x29bf220() {
   return (neuron0x299a770()*0.983303);
}

double NNfunction_ss_cLuR::synapse0x29bf260() {
   return (neuron0x299aab0()*0.0337424);
}

double NNfunction_ss_cLuR::synapse0x29bf2a0() {
   return (neuron0x299adf0()*0.0521784);
}

double NNfunction_ss_cLuR::synapse0x29bf620() {
   return (neuron0x2996230()*-0.169887);
}

double NNfunction_ss_cLuR::synapse0x29bf660() {
   return (neuron0x2996570()*-0.0658349);
}

double NNfunction_ss_cLuR::synapse0x29bf6a0() {
   return (neuron0x29968b0()*1.34809);
}

double NNfunction_ss_cLuR::synapse0x29bf6e0() {
   return (neuron0x2996bf0()*-0.14051);
}

double NNfunction_ss_cLuR::synapse0x29bf720() {
   return (neuron0x2996f30()*-0.0602104);
}

double NNfunction_ss_cLuR::synapse0x29bf760() {
   return (neuron0x2997270()*0.0571201);
}

double NNfunction_ss_cLuR::synapse0x29bf7a0() {
   return (neuron0x29975b0()*0.0923319);
}

double NNfunction_ss_cLuR::synapse0x29bf7e0() {
   return (neuron0x29978f0()*0.0493);
}

double NNfunction_ss_cLuR::synapse0x29bf820() {
   return (neuron0x2997c30()*0.0128982);
}

double NNfunction_ss_cLuR::synapse0x29bf860() {
   return (neuron0x2997f70()*-0.0397113);
}

double NNfunction_ss_cLuR::synapse0x29bf8a0() {
   return (neuron0x29982b0()*-0.0865032);
}

double NNfunction_ss_cLuR::synapse0x29bf8e0() {
   return (neuron0x29985f0()*0.0617856);
}

double NNfunction_ss_cLuR::synapse0x29bf920() {
   return (neuron0x2998930()*-0.815011);
}

double NNfunction_ss_cLuR::synapse0x29bf960() {
   return (neuron0x2998c70()*0.0352534);
}

double NNfunction_ss_cLuR::synapse0x29bf9a0() {
   return (neuron0x2998fb0()*0.103324);
}

double NNfunction_ss_cLuR::synapse0x29bf9e0() {
   return (neuron0x29992f0()*-0.0243049);
}

double NNfunction_ss_cLuR::synapse0x29bf470() {
   return (neuron0x2999630()*0.124836);
}

double NNfunction_ss_cLuR::synapse0x29bf4b0() {
   return (neuron0x2999b90()*-0.0377945);
}

double NNfunction_ss_cLuR::synapse0x29bfb30() {
   return (neuron0x2999db0()*0.00260352);
}

double NNfunction_ss_cLuR::synapse0x29bfb70() {
   return (neuron0x299a0f0()*0.000806831);
}

double NNfunction_ss_cLuR::synapse0x29bfbb0() {
   return (neuron0x299a430()*-0.0540769);
}

double NNfunction_ss_cLuR::synapse0x29bfbf0() {
   return (neuron0x299a770()*0.0898778);
}

double NNfunction_ss_cLuR::synapse0x29bfc30() {
   return (neuron0x299aab0()*-0.0292297);
}

double NNfunction_ss_cLuR::synapse0x29bfc70() {
   return (neuron0x299adf0()*-0.100438);
}

double NNfunction_ss_cLuR::synapse0x275fb90() {
   return (neuron0x299b260()*-0.0131861);
}

double NNfunction_ss_cLuR::synapse0x275fbd0() {
   return (neuron0x299bbb0()*0.442583);
}

double NNfunction_ss_cLuR::synapse0x299d720() {
   return (neuron0x299c690()*-0.0821913);
}

double NNfunction_ss_cLuR::synapse0x299d760() {
   return (neuron0x299c130()*-0.0269794);
}

double NNfunction_ss_cLuR::synapse0x299e0f0() {
   return (neuron0x299d470()*-0.0360126);
}

double NNfunction_ss_cLuR::synapse0x299e130() {
   return (neuron0x299de40()*0.163089);
}

double NNfunction_ss_cLuR::synapse0x299eec0() {
   return (neuron0x299ec10()*0.451766);
}

double NNfunction_ss_cLuR::synapse0x299ef00() {
   return (neuron0x299f5e0()*-0.608351);
}

double NNfunction_ss_cLuR::synapse0x299f890() {
   return (neuron0x299ffb0()*-0.356231);
}

double NNfunction_ss_cLuR::synapse0x299f8d0() {
   return (neuron0x29a0a90()*0.0141658);
}

double NNfunction_ss_cLuR::synapse0x29a0260() {
   return (neuron0x29a1460()*-0.116075);
}

double NNfunction_ss_cLuR::synapse0x29a02a0() {
   return (neuron0x299e540()*-0.160388);
}

double NNfunction_ss_cLuR::synapse0x29a0d40() {
   return (neuron0x29a3010()*0.155152);
}

double NNfunction_ss_cLuR::synapse0x29a0d80() {
   return (neuron0x29a39e0()*0.0137168);
}

double NNfunction_ss_cLuR::synapse0x29a1710() {
   return (neuron0x29a43b0()*-0.0919485);
}

double NNfunction_ss_cLuR::synapse0x29a1750() {
   return (neuron0x29a4d80()*-0.262637);
}

double NNfunction_ss_cLuR::synapse0x299e7f0() {
   return (neuron0x29a6b90()*-0.196805);
}

double NNfunction_ss_cLuR::synapse0x299e830() {
   return (neuron0x29a6e70()*-0.064331);
}

double NNfunction_ss_cLuR::synapse0x29a32c0() {
   return (neuron0x29a7840()*-0.254945);
}

double NNfunction_ss_cLuR::synapse0x29a3300() {
   return (neuron0x29a8210()*-0.0745482);
}

double NNfunction_ss_cLuR::synapse0x29a3c90() {
   return (neuron0x29a8be0()*-0.0635777);
}

double NNfunction_ss_cLuR::synapse0x29a3cd0() {
   return (neuron0x29a95b0()*0.234149);
}

double NNfunction_ss_cLuR::synapse0x29a4660() {
   return (neuron0x29a2100()*0.016785);
}

double NNfunction_ss_cLuR::synapse0x29a46a0() {
   return (neuron0x29a2ad0()*0.183439);
}

double NNfunction_ss_cLuR::synapse0x29a5030() {
   return (neuron0x29ac340()*0.167849);
}

double NNfunction_ss_cLuR::synapse0x29a5070() {
   return (neuron0x29acd10()*-0.121066);
}

double NNfunction_ss_cLuR::synapse0x29991d0() {
   return (neuron0x29ad6e0()*1.08778);
}

double NNfunction_ss_cLuR::synapse0x2999210() {
   return (neuron0x29ae0b0()*0.195925);
}

double NNfunction_ss_cLuR::synapse0x29a7120() {
   return (neuron0x29aea80()*-0.926856);
}

double NNfunction_ss_cLuR::synapse0x29a7160() {
   return (neuron0x29af450()*0.0042609);
}

double NNfunction_ss_cLuR::synapse0x29a7af0() {
   return (neuron0x29afe20()*-0.213633);
}

double NNfunction_ss_cLuR::synapse0x29a7b30() {
   return (neuron0x29b07f0()*0.201427);
}

double NNfunction_ss_cLuR::synapse0x29a84c0() {
   return (neuron0x29a6880()*-0.274919);
}

double NNfunction_ss_cLuR::synapse0x29a8500() {
   return (neuron0x29b33d0()*0.143604);
}

double NNfunction_ss_cLuR::synapse0x29a8e90() {
   return (neuron0x29b3da0()*0.320556);
}

double NNfunction_ss_cLuR::synapse0x29a8ed0() {
   return (neuron0x29b4770()*1.49383);
}

double NNfunction_ss_cLuR::synapse0x29a9860() {
   return (neuron0x29b5140()*-0.178384);
}

double NNfunction_ss_cLuR::synapse0x29a98a0() {
   return (neuron0x29b5b10()*-0.28042);
}

double NNfunction_ss_cLuR::synapse0x29a23b0() {
   return (neuron0x29b64e0()*-0.306394);
}

double NNfunction_ss_cLuR::synapse0x29a23f0() {
   return (neuron0x29b6eb0()*-0.0824791);
}

double NNfunction_ss_cLuR::synapse0x29abc60() {
   return (neuron0x29b7880()*-0.0384241);
}

double NNfunction_ss_cLuR::synapse0x29abca0() {
   return (neuron0x29b8460()*-0.398286);
}

double NNfunction_ss_cLuR::synapse0x29ac5f0() {
   return (neuron0x29b8e30()*0.256053);
}

double NNfunction_ss_cLuR::synapse0x29ac630() {
   return (neuron0x29a9cb0()*-0.611313);
}

double NNfunction_ss_cLuR::synapse0x29acfc0() {
   return (neuron0x29aa680()*0.341825);
}

double NNfunction_ss_cLuR::synapse0x29ad000() {
   return (neuron0x29ab050()*-0.542988);
}

double NNfunction_ss_cLuR::synapse0x29ad990() {
   return (neuron0x29bd690()*0.0998852);
}

double NNfunction_ss_cLuR::synapse0x29ad9d0() {
   return (neuron0x29bdf40()*-0.442524);
}

double NNfunction_ss_cLuR::synapse0x29ae360() {
   return (neuron0x29be910()*-0.359413);
}

double NNfunction_ss_cLuR::synapse0x29ae3a0() {
   return (neuron0x29bf2e0()*-0.0259512);
}

double NNfunction_ss_cLuR::synapse0x29b0aa0() {
   return (neuron0x299b260()*0.0977325);
}

double NNfunction_ss_cLuR::synapse0x29b0ae0() {
   return (neuron0x299bbb0()*-1.36622);
}

double NNfunction_ss_cLuR::synapse0x29a6060() {
   return (neuron0x299c690()*1.33867);
}

double NNfunction_ss_cLuR::synapse0x29a60a0() {
   return (neuron0x299c130()*0.133513);
}

double NNfunction_ss_cLuR::synapse0x29b3680() {
   return (neuron0x299d470()*-0.844579);
}

double NNfunction_ss_cLuR::synapse0x29b36c0() {
   return (neuron0x299de40()*-0.967912);
}

double NNfunction_ss_cLuR::synapse0x29b4050() {
   return (neuron0x299ec10()*1.9352);
}

double NNfunction_ss_cLuR::synapse0x29b4090() {
   return (neuron0x299f5e0()*0.530934);
}

double NNfunction_ss_cLuR::synapse0x29b4a20() {
   return (neuron0x299ffb0()*-1.02106);
}

double NNfunction_ss_cLuR::synapse0x29b4a60() {
   return (neuron0x29a0a90()*2.41271);
}

double NNfunction_ss_cLuR::synapse0x29b53f0() {
   return (neuron0x29a1460()*0.912478);
}

double NNfunction_ss_cLuR::synapse0x29b5430() {
   return (neuron0x299e540()*0.817685);
}

double NNfunction_ss_cLuR::synapse0x29b5dc0() {
   return (neuron0x29a3010()*0.834859);
}

double NNfunction_ss_cLuR::synapse0x29b5e00() {
   return (neuron0x29a39e0()*-0.234156);
}

double NNfunction_ss_cLuR::synapse0x29b6790() {
   return (neuron0x29a43b0()*1.63421);
}

double NNfunction_ss_cLuR::synapse0x29b67d0() {
   return (neuron0x29a4d80()*-1.26554);
}

double NNfunction_ss_cLuR::synapse0x29b7160() {
   return (neuron0x29a6b90()*0.574702);
}

double NNfunction_ss_cLuR::synapse0x29b71a0() {
   return (neuron0x29a6e70()*6.66007);
}

double NNfunction_ss_cLuR::synapse0x29b7b30() {
   return (neuron0x29a7840()*0.558551);
}

double NNfunction_ss_cLuR::synapse0x29b7b70() {
   return (neuron0x29a8210()*-0.482092);
}

double NNfunction_ss_cLuR::synapse0x29b8710() {
   return (neuron0x29a8be0()*1.58189);
}

double NNfunction_ss_cLuR::synapse0x29b8750() {
   return (neuron0x29a95b0()*1.08745);
}

double NNfunction_ss_cLuR::synapse0x29b90e0() {
   return (neuron0x29a2100()*0.393538);
}

double NNfunction_ss_cLuR::synapse0x29b9120() {
   return (neuron0x29a2ad0()*0.308952);
}

double NNfunction_ss_cLuR::synapse0x29a9f60() {
   return (neuron0x29ac340()*1.7304);
}

double NNfunction_ss_cLuR::synapse0x29a9fa0() {
   return (neuron0x29acd10()*-0.70044);
}

double NNfunction_ss_cLuR::synapse0x29aa930() {
   return (neuron0x29ad6e0()*0.414028);
}

double NNfunction_ss_cLuR::synapse0x29aa970() {
   return (neuron0x29ae0b0()*0.916301);
}

double NNfunction_ss_cLuR::synapse0x29ab300() {
   return (neuron0x29aea80()*2.02671);
}

double NNfunction_ss_cLuR::synapse0x29ab340() {
   return (neuron0x29af450()*-0.238614);
}

double NNfunction_ss_cLuR::synapse0x29bd820() {
   return (neuron0x29afe20()*-0.87742);
}

double NNfunction_ss_cLuR::synapse0x29bd860() {
   return (neuron0x29b07f0()*1.21534);
}

double NNfunction_ss_cLuR::synapse0x29be1f0() {
   return (neuron0x29a6880()*-0.711028);
}

double NNfunction_ss_cLuR::synapse0x29be230() {
   return (neuron0x29b33d0()*-1.02698);
}

double NNfunction_ss_cLuR::synapse0x29bebc0() {
   return (neuron0x29b3da0()*-0.105829);
}

double NNfunction_ss_cLuR::synapse0x29bec00() {
   return (neuron0x29b4770()*-2.96798);
}

double NNfunction_ss_cLuR::synapse0x29bf590() {
   return (neuron0x29b5140()*0.828481);
}

double NNfunction_ss_cLuR::synapse0x29bf5d0() {
   return (neuron0x29b5b10()*-1.37996);
}

double NNfunction_ss_cLuR::synapse0x299b480() {
   return (neuron0x29b64e0()*-2.90404);
}

double NNfunction_ss_cLuR::synapse0x299b4c0() {
   return (neuron0x29b6eb0()*-2.19182);
}

double NNfunction_ss_cLuR::synapse0x29aed30() {
   return (neuron0x29b7880()*-0.916892);
}

double NNfunction_ss_cLuR::synapse0x29aed70() {
   return (neuron0x29b8460()*1.1016);
}

double NNfunction_ss_cLuR::synapse0x29bfcb0() {
   return (neuron0x29b8e30()*-0.804475);
}

double NNfunction_ss_cLuR::synapse0x29bfcf0() {
   return (neuron0x29a9cb0()*0.548802);
}

double NNfunction_ss_cLuR::synapse0x29bfd30() {
   return (neuron0x29aa680()*0.404676);
}

double NNfunction_ss_cLuR::synapse0x29bfd70() {
   return (neuron0x29ab050()*1.18836);
}

double NNfunction_ss_cLuR::synapse0x29c6c20() {
   return (neuron0x29bd690()*-1.32247);
}

double NNfunction_ss_cLuR::synapse0x29c6c60() {
   return (neuron0x29bdf40()*-0.131017);
}

double NNfunction_ss_cLuR::synapse0x29c6ca0() {
   return (neuron0x29be910()*0.204939);
}

double NNfunction_ss_cLuR::synapse0x29c6ce0() {
   return (neuron0x29bf2e0()*2.18196);
}

double NNfunction_ss_cLuR::synapse0x29c7060() {
   return (neuron0x299b260()*0.284753);
}

double NNfunction_ss_cLuR::synapse0x29c70a0() {
   return (neuron0x299bbb0()*0.409255);
}

double NNfunction_ss_cLuR::synapse0x29c70e0() {
   return (neuron0x299c690()*0.0975885);
}

double NNfunction_ss_cLuR::synapse0x29c7120() {
   return (neuron0x299c130()*-0.180913);
}

double NNfunction_ss_cLuR::synapse0x29c7160() {
   return (neuron0x299d470()*-1.07088);
}

double NNfunction_ss_cLuR::synapse0x29c71a0() {
   return (neuron0x299de40()*-0.506421);
}

double NNfunction_ss_cLuR::synapse0x29c71e0() {
   return (neuron0x299ec10()*0.37416);
}

double NNfunction_ss_cLuR::synapse0x29c7220() {
   return (neuron0x299f5e0()*1.09005);
}

double NNfunction_ss_cLuR::synapse0x29c7260() {
   return (neuron0x299ffb0()*0.126026);
}

double NNfunction_ss_cLuR::synapse0x29c72a0() {
   return (neuron0x29a0a90()*0.0604105);
}

double NNfunction_ss_cLuR::synapse0x29c72e0() {
   return (neuron0x29a1460()*-0.927371);
}

double NNfunction_ss_cLuR::synapse0x29c7320() {
   return (neuron0x299e540()*-0.493835);
}

double NNfunction_ss_cLuR::synapse0x29c7360() {
   return (neuron0x29a3010()*-0.307549);
}

double NNfunction_ss_cLuR::synapse0x29c73a0() {
   return (neuron0x29a39e0()*0.0437987);
}

double NNfunction_ss_cLuR::synapse0x29c73e0() {
   return (neuron0x29a43b0()*0.216931);
}

double NNfunction_ss_cLuR::synapse0x29c7420() {
   return (neuron0x29a4d80()*-1.75417);
}

double NNfunction_ss_cLuR::synapse0x29c6eb0() {
   return (neuron0x29a6b90()*-0.326925);
}

double NNfunction_ss_cLuR::synapse0x29c6ef0() {
   return (neuron0x29a6e70()*-6.11423);
}

double NNfunction_ss_cLuR::synapse0x29c7570() {
   return (neuron0x29a7840()*0.191118);
}

double NNfunction_ss_cLuR::synapse0x29c75b0() {
   return (neuron0x29a8210()*0.0179352);
}

double NNfunction_ss_cLuR::synapse0x29c75f0() {
   return (neuron0x29a8be0()*-0.337651);
}

double NNfunction_ss_cLuR::synapse0x29c7630() {
   return (neuron0x29a95b0()*0.284413);
}

double NNfunction_ss_cLuR::synapse0x29c7670() {
   return (neuron0x29a2100()*0.237512);
}

double NNfunction_ss_cLuR::synapse0x29c76b0() {
   return (neuron0x29a2ad0()*0.512268);
}

double NNfunction_ss_cLuR::synapse0x29c76f0() {
   return (neuron0x29ac340()*0.328238);
}

double NNfunction_ss_cLuR::synapse0x29c7730() {
   return (neuron0x29acd10()*-0.354928);
}

double NNfunction_ss_cLuR::synapse0x29c7770() {
   return (neuron0x29ad6e0()*-1.09153);
}

double NNfunction_ss_cLuR::synapse0x29c77b0() {
   return (neuron0x29ae0b0()*0.135949);
}

double NNfunction_ss_cLuR::synapse0x29c77f0() {
   return (neuron0x29aea80()*2.5427);
}

double NNfunction_ss_cLuR::synapse0x29c7830() {
   return (neuron0x29af450()*-0.213696);
}

double NNfunction_ss_cLuR::synapse0x29c7870() {
   return (neuron0x29afe20()*0.134333);
}

double NNfunction_ss_cLuR::synapse0x29c78b0() {
   return (neuron0x29b07f0()*0.371295);
}

double NNfunction_ss_cLuR::synapse0x29c7460() {
   return (neuron0x29a6880()*-0.192994);
}

double NNfunction_ss_cLuR::synapse0x29c74a0() {
   return (neuron0x29b33d0()*0.168568);
}

double NNfunction_ss_cLuR::synapse0x29c74e0() {
   return (neuron0x29b3da0()*-0.0424905);
}

double NNfunction_ss_cLuR::synapse0x29c7520() {
   return (neuron0x29b4770()*0.320671);
}

double NNfunction_ss_cLuR::synapse0x29c7b00() {
   return (neuron0x29b5140()*-0.0538125);
}

double NNfunction_ss_cLuR::synapse0x29c7b40() {
   return (neuron0x29b5b10()*-0.251602);
}

double NNfunction_ss_cLuR::synapse0x29c7b80() {
   return (neuron0x29b64e0()*0.182262);
}

double NNfunction_ss_cLuR::synapse0x29c7bc0() {
   return (neuron0x29b6eb0()*-0.0695074);
}

double NNfunction_ss_cLuR::synapse0x29c7c00() {
   return (neuron0x29b7880()*0.698826);
}

double NNfunction_ss_cLuR::synapse0x29c7c40() {
   return (neuron0x29b8460()*-0.493304);
}

double NNfunction_ss_cLuR::synapse0x29c7c80() {
   return (neuron0x29b8e30()*0.231362);
}

double NNfunction_ss_cLuR::synapse0x29c7cc0() {
   return (neuron0x29a9cb0()*-0.495506);
}

double NNfunction_ss_cLuR::synapse0x29c7d00() {
   return (neuron0x29aa680()*-0.0827919);
}

double NNfunction_ss_cLuR::synapse0x29c7d40() {
   return (neuron0x29ab050()*-5.50079);
}

double NNfunction_ss_cLuR::synapse0x29c7d80() {
   return (neuron0x29bd690()*0.239986);
}

double NNfunction_ss_cLuR::synapse0x29c7dc0() {
   return (neuron0x29bdf40()*-0.688375);
}

double NNfunction_ss_cLuR::synapse0x29c7e00() {
   return (neuron0x29be910()*-0.166819);
}

double NNfunction_ss_cLuR::synapse0x29c7e40() {
   return (neuron0x29bf2e0()*0.0735671);
}

double NNfunction_ss_cLuR::synapse0x29c81c0() {
   return (neuron0x299b260()*0.0244435);
}

double NNfunction_ss_cLuR::synapse0x29c8200() {
   return (neuron0x299bbb0()*-0.17237);
}

double NNfunction_ss_cLuR::synapse0x29c8240() {
   return (neuron0x299c690()*0.0400897);
}

double NNfunction_ss_cLuR::synapse0x29c8280() {
   return (neuron0x299c130()*-0.012467);
}

double NNfunction_ss_cLuR::synapse0x29c82c0() {
   return (neuron0x299d470()*0.00187112);
}

double NNfunction_ss_cLuR::synapse0x29c8300() {
   return (neuron0x299de40()*-0.0952022);
}

double NNfunction_ss_cLuR::synapse0x29c8340() {
   return (neuron0x299ec10()*-0.152874);
}

double NNfunction_ss_cLuR::synapse0x29c8380() {
   return (neuron0x299f5e0()*-2.77476);
}

double NNfunction_ss_cLuR::synapse0x29c83c0() {
   return (neuron0x299ffb0()*-0.117043);
}

double NNfunction_ss_cLuR::synapse0x29c8400() {
   return (neuron0x29a0a90()*-0.0133082);
}

double NNfunction_ss_cLuR::synapse0x29c8440() {
   return (neuron0x29a1460()*-0.636489);
}

double NNfunction_ss_cLuR::synapse0x29c8480() {
   return (neuron0x299e540()*0.0609202);
}

double NNfunction_ss_cLuR::synapse0x29c84c0() {
   return (neuron0x29a3010()*-0.0599118);
}

double NNfunction_ss_cLuR::synapse0x29c8500() {
   return (neuron0x29a39e0()*0.0233903);
}

double NNfunction_ss_cLuR::synapse0x29c8540() {
   return (neuron0x29a43b0()*-0.0844724);
}

double NNfunction_ss_cLuR::synapse0x29c8580() {
   return (neuron0x29a4d80()*0.292789);
}

double NNfunction_ss_cLuR::synapse0x29c8010() {
   return (neuron0x29a6b90()*0.0587666);
}

double NNfunction_ss_cLuR::synapse0x29c8050() {
   return (neuron0x29a6e70()*-0.346638);
}

double NNfunction_ss_cLuR::synapse0x29c86d0() {
   return (neuron0x29a7840()*-0.0543544);
}

double NNfunction_ss_cLuR::synapse0x29c8710() {
   return (neuron0x29a8210()*0.00178885);
}

double NNfunction_ss_cLuR::synapse0x29c8750() {
   return (neuron0x29a8be0()*-0.57486);
}

double NNfunction_ss_cLuR::synapse0x29c8790() {
   return (neuron0x29a95b0()*-0.107712);
}

double NNfunction_ss_cLuR::synapse0x29c87d0() {
   return (neuron0x29a2100()*-0.139862);
}

double NNfunction_ss_cLuR::synapse0x29c8810() {
   return (neuron0x29a2ad0()*-0.0691098);
}

double NNfunction_ss_cLuR::synapse0x29c8850() {
   return (neuron0x29ac340()*-0.016977);
}

double NNfunction_ss_cLuR::synapse0x29c8890() {
   return (neuron0x29acd10()*0.0760681);
}

double NNfunction_ss_cLuR::synapse0x29c88d0() {
   return (neuron0x29ad6e0()*0.945461);
}

double NNfunction_ss_cLuR::synapse0x29c8910() {
   return (neuron0x29ae0b0()*-0.0598867);
}

double NNfunction_ss_cLuR::synapse0x29c8950() {
   return (neuron0x29aea80()*-0.228107);
}

double NNfunction_ss_cLuR::synapse0x29c8990() {
   return (neuron0x29af450()*-0.028631);
}

double NNfunction_ss_cLuR::synapse0x29c89d0() {
   return (neuron0x29afe20()*0.0591932);
}

double NNfunction_ss_cLuR::synapse0x29c8a10() {
   return (neuron0x29b07f0()*-0.159562);
}

double NNfunction_ss_cLuR::synapse0x29c85c0() {
   return (neuron0x29a6880()*0.137712);
}

double NNfunction_ss_cLuR::synapse0x29c8600() {
   return (neuron0x29b33d0()*-0.0857253);
}

double NNfunction_ss_cLuR::synapse0x29c8640() {
   return (neuron0x29b3da0()*-0.0916326);
}

double NNfunction_ss_cLuR::synapse0x29c8680() {
   return (neuron0x29b4770()*1.03276);
}

double NNfunction_ss_cLuR::synapse0x29c8c60() {
   return (neuron0x29b5140()*0.0400041);
}

double NNfunction_ss_cLuR::synapse0x29c8ca0() {
   return (neuron0x29b5b10()*-0.00976063);
}

double NNfunction_ss_cLuR::synapse0x29c8ce0() {
   return (neuron0x29b64e0()*0.102533);
}

double NNfunction_ss_cLuR::synapse0x29c8d20() {
   return (neuron0x29b6eb0()*0.195647);
}

double NNfunction_ss_cLuR::synapse0x29c8d60() {
   return (neuron0x29b7880()*0.0400457);
}

double NNfunction_ss_cLuR::synapse0x29c8da0() {
   return (neuron0x29b8460()*0.124977);
}

double NNfunction_ss_cLuR::synapse0x29c8de0() {
   return (neuron0x29b8e30()*0.0306387);
}

double NNfunction_ss_cLuR::synapse0x29c8e20() {
   return (neuron0x29a9cb0()*0.106901);
}

double NNfunction_ss_cLuR::synapse0x29c8e60() {
   return (neuron0x29aa680()*-0.113974);
}

double NNfunction_ss_cLuR::synapse0x29c8ea0() {
   return (neuron0x29ab050()*-0.0530656);
}

double NNfunction_ss_cLuR::synapse0x29c8ee0() {
   return (neuron0x29bd690()*0.00279966);
}

double NNfunction_ss_cLuR::synapse0x29c8f20() {
   return (neuron0x29bdf40()*0.136513);
}

double NNfunction_ss_cLuR::synapse0x29c8f60() {
   return (neuron0x29be910()*0.131694);
}

double NNfunction_ss_cLuR::synapse0x29c8fa0() {
   return (neuron0x29bf2e0()*-0.224776);
}

double NNfunction_ss_cLuR::synapse0x29c9320() {
   return (neuron0x299b260()*0.839808);
}

double NNfunction_ss_cLuR::synapse0x29c9360() {
   return (neuron0x299bbb0()*0.872831);
}

double NNfunction_ss_cLuR::synapse0x29c93a0() {
   return (neuron0x299c690()*-0.596226);
}

double NNfunction_ss_cLuR::synapse0x29c93e0() {
   return (neuron0x299c130()*-0.824539);
}

double NNfunction_ss_cLuR::synapse0x29c9420() {
   return (neuron0x299d470()*-0.00218336);
}

double NNfunction_ss_cLuR::synapse0x29c9460() {
   return (neuron0x299de40()*-1.38681);
}

double NNfunction_ss_cLuR::synapse0x29c94a0() {
   return (neuron0x299ec10()*0.0569323);
}

double NNfunction_ss_cLuR::synapse0x29c94e0() {
   return (neuron0x299f5e0()*2.36402);
}

double NNfunction_ss_cLuR::synapse0x29c9520() {
   return (neuron0x299ffb0()*-0.523594);
}

double NNfunction_ss_cLuR::synapse0x29c9560() {
   return (neuron0x29a0a90()*0.311198);
}

double NNfunction_ss_cLuR::synapse0x29c95a0() {
   return (neuron0x29a1460()*1.2671);
}

double NNfunction_ss_cLuR::synapse0x29c95e0() {
   return (neuron0x299e540()*0.0702893);
}

double NNfunction_ss_cLuR::synapse0x29c9620() {
   return (neuron0x29a3010()*-0.0193665);
}

double NNfunction_ss_cLuR::synapse0x29c9660() {
   return (neuron0x29a39e0()*1.67531);
}

double NNfunction_ss_cLuR::synapse0x29c96a0() {
   return (neuron0x29a43b0()*-2.63772);
}

double NNfunction_ss_cLuR::synapse0x29c96e0() {
   return (neuron0x29a4d80()*-1.23239);
}

double NNfunction_ss_cLuR::synapse0x29c9170() {
   return (neuron0x29a6b90()*-0.677462);
}

double NNfunction_ss_cLuR::synapse0x29c91b0() {
   return (neuron0x29a6e70()*4.33951);
}

double NNfunction_ss_cLuR::synapse0x29c9830() {
   return (neuron0x29a7840()*-1.24572);
}

double NNfunction_ss_cLuR::synapse0x29c9870() {
   return (neuron0x29a8210()*1.7515);
}

double NNfunction_ss_cLuR::synapse0x29c98b0() {
   return (neuron0x29a8be0()*3.62606);
}

double NNfunction_ss_cLuR::synapse0x29c98f0() {
   return (neuron0x29a95b0()*0.770193);
}

double NNfunction_ss_cLuR::synapse0x29c9930() {
   return (neuron0x29a2100()*-0.288918);
}

double NNfunction_ss_cLuR::synapse0x29c9970() {
   return (neuron0x29a2ad0()*-0.356295);
}

double NNfunction_ss_cLuR::synapse0x29c99b0() {
   return (neuron0x29ac340()*0.0491615);
}

double NNfunction_ss_cLuR::synapse0x29c99f0() {
   return (neuron0x29acd10()*0.521211);
}

double NNfunction_ss_cLuR::synapse0x29c9a30() {
   return (neuron0x29ad6e0()*-1.20754);
}

double NNfunction_ss_cLuR::synapse0x29c9a70() {
   return (neuron0x29ae0b0()*-0.850862);
}

double NNfunction_ss_cLuR::synapse0x29c9ab0() {
   return (neuron0x29aea80()*3.79872);
}

double NNfunction_ss_cLuR::synapse0x29c9af0() {
   return (neuron0x29af450()*-0.568584);
}

double NNfunction_ss_cLuR::synapse0x29c9b30() {
   return (neuron0x29afe20()*1.24086);
}

double NNfunction_ss_cLuR::synapse0x29c9b70() {
   return (neuron0x29b07f0()*-0.652693);
}

double NNfunction_ss_cLuR::synapse0x29c9720() {
   return (neuron0x29a6880()*1.65138);
}

double NNfunction_ss_cLuR::synapse0x29c9760() {
   return (neuron0x29b33d0()*-1.38657);
}

double NNfunction_ss_cLuR::synapse0x29c97a0() {
   return (neuron0x29b3da0()*1.38817);
}

double NNfunction_ss_cLuR::synapse0x29c97e0() {
   return (neuron0x29b4770()*-2.4622);
}

double NNfunction_ss_cLuR::synapse0x29c9dc0() {
   return (neuron0x29b5140()*-1.10913);
}

double NNfunction_ss_cLuR::synapse0x29c9e00() {
   return (neuron0x29b5b10()*-1.70415);
}

double NNfunction_ss_cLuR::synapse0x29c9e40() {
   return (neuron0x29b64e0()*0.198441);
}

double NNfunction_ss_cLuR::synapse0x29c9e80() {
   return (neuron0x29b6eb0()*-0.515821);
}

double NNfunction_ss_cLuR::synapse0x29c9ec0() {
   return (neuron0x29b7880()*-0.343028);
}

double NNfunction_ss_cLuR::synapse0x29c9f00() {
   return (neuron0x29b8460()*-0.401396);
}

double NNfunction_ss_cLuR::synapse0x29c9f40() {
   return (neuron0x29b8e30()*2.8846);
}

double NNfunction_ss_cLuR::synapse0x29c9f80() {
   return (neuron0x29a9cb0()*-2.74698);
}

double NNfunction_ss_cLuR::synapse0x29c9fc0() {
   return (neuron0x29aa680()*-0.908368);
}

double NNfunction_ss_cLuR::synapse0x29ca000() {
   return (neuron0x29ab050()*4.90213);
}

double NNfunction_ss_cLuR::synapse0x29ca040() {
   return (neuron0x29bd690()*2.15203);
}

double NNfunction_ss_cLuR::synapse0x29ca080() {
   return (neuron0x29bdf40()*0.388736);
}

double NNfunction_ss_cLuR::synapse0x29ca0c0() {
   return (neuron0x29be910()*-0.779792);
}

double NNfunction_ss_cLuR::synapse0x29ca100() {
   return (neuron0x29bf2e0()*-0.400803);
}

double NNfunction_ss_cLuR::synapse0x29ca360() {
   return (neuron0x29c64e0()*2.69856);
}

double NNfunction_ss_cLuR::synapse0x29ca3a0() {
   return (neuron0x29c6880()*-5.07715);
}

double NNfunction_ss_cLuR::synapse0x29ca3e0() {
   return (neuron0x29c6d20()*-7.45236);
}

double NNfunction_ss_cLuR::synapse0x29ca420() {
   return (neuron0x29c7e80()*6.22264);
}

double NNfunction_ss_cLuR::synapse0x29ca460() {
   return (neuron0x29c8fe0()*-5.71898);
}

