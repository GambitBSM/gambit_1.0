#include "NNfunction_sb_cLsL.h"
#include <cmath>

double NNfunction_sb_cLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0675)/15.112;
   input1 = (in1 - 23.9358)/907.837;
   input2 = (in2 - 453.062)/553.962;
   input3 = (in3 - 104.507)/650.449;
   input4 = (in4 - 772.294)/819.039;
   input5 = (in5 - 662.22)/796.703;
   input6 = (in6 - 667.913)/797.798;
   input7 = (in7 - 678.778)/798.77;
   input8 = (in8 - 676.307)/825.863;
   input9 = (in9 - 658.924)/803.963;
   input10 = (in10 - 709.411)/838.834;
   input11 = (in11 - 609.53)/695.467;
   input12 = (in12 - 283.253)/176.191;
   input13 = (in13 - 447.603)/409.871;
   input14 = (in14 - 606.367)/655.465;
   input15 = (in15 - 602.89)/655.476;
   input16 = (in16 - 437.641)/451.635;
   input17 = (in17 - 630.425)/725.28;
   input18 = (in18 - 630.457)/730.319;
   input19 = (in19 - 648.461)/716.312;
   input20 = (in20 - -97.0793)/406.528;
   input21 = (in21 - -118.711)/935.799;
   input22 = (in22 - 8.39981)/970.294;
   input23 = (in23 - -94.1152)/514.031;
   switch(index) {
     case 0:
         return neuron0x1a92bf0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsL::Value(int index, double* input) {
   input0 = (input[0] - 23.0675)/15.112;
   input1 = (input[1] - 23.9358)/907.837;
   input2 = (input[2] - 453.062)/553.962;
   input3 = (input[3] - 104.507)/650.449;
   input4 = (input[4] - 772.294)/819.039;
   input5 = (input[5] - 662.22)/796.703;
   input6 = (input[6] - 667.913)/797.798;
   input7 = (input[7] - 678.778)/798.77;
   input8 = (input[8] - 676.307)/825.863;
   input9 = (input[9] - 658.924)/803.963;
   input10 = (input[10] - 709.411)/838.834;
   input11 = (input[11] - 609.53)/695.467;
   input12 = (input[12] - 283.253)/176.191;
   input13 = (input[13] - 447.603)/409.871;
   input14 = (input[14] - 606.367)/655.465;
   input15 = (input[15] - 602.89)/655.476;
   input16 = (input[16] - 437.641)/451.635;
   input17 = (input[17] - 630.425)/725.28;
   input18 = (input[18] - 630.457)/730.319;
   input19 = (input[19] - 648.461)/716.312;
   input20 = (input[20] - -97.0793)/406.528;
   input21 = (input[21] - -118.711)/935.799;
   input22 = (input[22] - 8.39981)/970.294;
   input23 = (input[23] - -94.1152)/514.031;
   switch(index) {
     case 0:
         return neuron0x1a92bf0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsL::neuron0x1a5dc60() {
   return input0;
}

double NNfunction_sb_cLsL::neuron0x1a5df10() {
   return input1;
}

double NNfunction_sb_cLsL::neuron0x1a5e250() {
   return input2;
}

double NNfunction_sb_cLsL::neuron0x1a5e590() {
   return input3;
}

double NNfunction_sb_cLsL::neuron0x1a5e8d0() {
   return input4;
}

double NNfunction_sb_cLsL::neuron0x1a5ec10() {
   return input5;
}

double NNfunction_sb_cLsL::neuron0x1a5ef50() {
   return input6;
}

double NNfunction_sb_cLsL::neuron0x1a5f290() {
   return input7;
}

double NNfunction_sb_cLsL::neuron0x1a5f5d0() {
   return input8;
}

double NNfunction_sb_cLsL::neuron0x1a5f910() {
   return input9;
}

double NNfunction_sb_cLsL::neuron0x1a5fc50() {
   return input10;
}

double NNfunction_sb_cLsL::neuron0x1a5ff90() {
   return input11;
}

double NNfunction_sb_cLsL::neuron0x1a602d0() {
   return input12;
}

double NNfunction_sb_cLsL::neuron0x1a60610() {
   return input13;
}

double NNfunction_sb_cLsL::neuron0x1a60950() {
   return input14;
}

double NNfunction_sb_cLsL::neuron0x1a60c90() {
   return input15;
}

double NNfunction_sb_cLsL::neuron0x1a60fd0() {
   return input16;
}

double NNfunction_sb_cLsL::neuron0x1a61530() {
   return input17;
}

double NNfunction_sb_cLsL::neuron0x1a61870() {
   return input18;
}

double NNfunction_sb_cLsL::neuron0x1a61bb0() {
   return input19;
}

double NNfunction_sb_cLsL::neuron0x1a61ef0() {
   return input20;
}

double NNfunction_sb_cLsL::neuron0x1a62230() {
   return input21;
}

double NNfunction_sb_cLsL::neuron0x1a62570() {
   return input22;
}

double NNfunction_sb_cLsL::neuron0x1a628b0() {
   return input23;
}

double NNfunction_sb_cLsL::input0x1a62d20() {
   double input = -0.0861902;
   input += synapse0x1a63060();
   input += synapse0x1a630a0();
   input += synapse0x1a630e0();
   input += synapse0x1a63120();
   input += synapse0x1a63160();
   input += synapse0x1a631a0();
   input += synapse0x1a631e0();
   input += synapse0x1a63220();
   input += synapse0x1a63260();
   input += synapse0x1a632a0();
   input += synapse0x1a632e0();
   input += synapse0x1a63320();
   input += synapse0x1a63360();
   input += synapse0x1a633a0();
   input += synapse0x1a633e0();
   input += synapse0x1a63420();
   input += synapse0x1a62eb0();
   input += synapse0x1a62ef0();
   input += synapse0x1819e20();
   input += synapse0x1819e60();
   input += synapse0x1a63460();
   input += synapse0x1a634a0();
   input += synapse0x1a634e0();
   input += synapse0x1a63520();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a62d20() {
   double input = input0x1a62d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a63560() {
   double input = -2.17675;
   input += synapse0x1a638a0();
   input += synapse0x1a638e0();
   input += synapse0x1a63920();
   input += synapse0x1a63960();
   input += synapse0x1a639a0();
   input += synapse0x1a639e0();
   input += synapse0x1a63a20();
   input += synapse0x1a63a60();
   input += synapse0x1a63aa0();
   input += synapse0x1819c70();
   input += synapse0x1819cb0();
   input += synapse0x1819cf0();
   input += synapse0x1819d30();
   input += synapse0x1a63cf0();
   input += synapse0x1a63d30();
   input += synapse0x1a63d70();
   input += synapse0x1a636f0();
   input += synapse0x1a63730();
   input += synapse0x1a63ec0();
   input += synapse0x1a63f00();
   input += synapse0x1a63f40();
   input += synapse0x1a63f80();
   input += synapse0x1a63fc0();
   input += synapse0x1a64000();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a63560() {
   double input = input0x1a63560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a64040() {
   double input = -0.739581;
   input += synapse0x1a64380();
   input += synapse0x1a643c0();
   input += synapse0x1a64400();
   input += synapse0x1a64440();
   input += synapse0x1a64480();
   input += synapse0x1a644c0();
   input += synapse0x1a64500();
   input += synapse0x1a64540();
   input += synapse0x1a64580();
   input += synapse0x1a645c0();
   input += synapse0x1a64600();
   input += synapse0x1a64640();
   input += synapse0x1a64680();
   input += synapse0x1a646c0();
   input += synapse0x1a64700();
   input += synapse0x1a64740();
   input += synapse0x1a641d0();
   input += synapse0x1a64210();
   input += synapse0x181a4d0();
   input += synapse0x1827da0();
   input += synapse0x1827de0();
   input += synapse0x1a66670();
   input += synapse0x1a666b0();
   input += synapse0x1a5d9a0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a64040() {
   double input = input0x1a64040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a63ae0() {
   double input = -0.370517;
   input += synapse0x1a5da70();
   input += synapse0x1828620();
   input += synapse0x1a63c70();
   input += synapse0x1a63cb0();
   input += synapse0x1a64890();
   input += synapse0x1a648d0();
   input += synapse0x1a64910();
   input += synapse0x1a64950();
   input += synapse0x1a64990();
   input += synapse0x1a649d0();
   input += synapse0x1a64a10();
   input += synapse0x1a64a50();
   input += synapse0x1a64a90();
   input += synapse0x1a64ad0();
   input += synapse0x1a64b10();
   input += synapse0x1a64b50();
   input += synapse0x1a5d9e0();
   input += synapse0x1a5da20();
   input += synapse0x1a64ca0();
   input += synapse0x1a64ce0();
   input += synapse0x1a64d20();
   input += synapse0x1a64d60();
   input += synapse0x1a64da0();
   input += synapse0x1a64de0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a63ae0() {
   double input = input0x1a63ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a64e20() {
   double input = 0.195602;
   input += synapse0x1a65160();
   input += synapse0x1a651a0();
   input += synapse0x1a651e0();
   input += synapse0x1a65220();
   input += synapse0x1a65260();
   input += synapse0x1a652a0();
   input += synapse0x1a652e0();
   input += synapse0x1a65320();
   input += synapse0x1a65360();
   input += synapse0x1a653a0();
   input += synapse0x1a653e0();
   input += synapse0x1a65420();
   input += synapse0x1a65460();
   input += synapse0x1a654a0();
   input += synapse0x1a654e0();
   input += synapse0x1a65520();
   input += synapse0x1a65670();
   input += synapse0x1a64fb0();
   input += synapse0x1a64ff0();
   input += synapse0x1a667b0();
   input += synapse0x1a667f0();
   input += synapse0x1a66830();
   input += synapse0x1a66870();
   input += synapse0x1a668b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a64e20() {
   double input = input0x1a64e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a668f0() {
   double input = -0.177017;
   input += synapse0x1a66c30();
   input += synapse0x1a66c70();
   input += synapse0x1a66cb0();
   input += synapse0x1a66cf0();
   input += synapse0x1a66d30();
   input += synapse0x1a66d70();
   input += synapse0x1a66db0();
   input += synapse0x1a66df0();
   input += synapse0x1a66e30();
   input += synapse0x18280f0();
   input += synapse0x1828130();
   input += synapse0x1828170();
   input += synapse0x18281b0();
   input += synapse0x18281f0();
   input += synapse0x1828230();
   input += synapse0x1828270();
   input += synapse0x1a66a80();
   input += synapse0x1a66ac0();
   input += synapse0x18283c0();
   input += synapse0x1828400();
   input += synapse0x1828440();
   input += synapse0x1828480();
   input += synapse0x18284c0();
   input += synapse0x1a67680();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a668f0() {
   double input = input0x1a668f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a676c0() {
   double input = -1.72261;
   input += synapse0x1a67a00();
   input += synapse0x1a67a40();
   input += synapse0x1a67a80();
   input += synapse0x1a67ac0();
   input += synapse0x1a67b00();
   input += synapse0x1a67b40();
   input += synapse0x1a67b80();
   input += synapse0x1a67bc0();
   input += synapse0x1a67c00();
   input += synapse0x1a67c40();
   input += synapse0x1a67c80();
   input += synapse0x1a67cc0();
   input += synapse0x1a67d00();
   input += synapse0x1a67d40();
   input += synapse0x1a67d80();
   input += synapse0x1a67dc0();
   input += synapse0x1a67850();
   input += synapse0x1a67890();
   input += synapse0x1a67f10();
   input += synapse0x1a67f50();
   input += synapse0x1a67f90();
   input += synapse0x1a67fd0();
   input += synapse0x1a68010();
   input += synapse0x1a68050();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a676c0() {
   double input = input0x1a676c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a68090() {
   double input = 0.130906;
   input += synapse0x1a683d0();
   input += synapse0x1a68410();
   input += synapse0x1a68450();
   input += synapse0x1a68490();
   input += synapse0x1a684d0();
   input += synapse0x1a68510();
   input += synapse0x1a68550();
   input += synapse0x1a68590();
   input += synapse0x1a685d0();
   input += synapse0x1a68610();
   input += synapse0x1a68650();
   input += synapse0x1a68690();
   input += synapse0x1a686d0();
   input += synapse0x1a68710();
   input += synapse0x1a68750();
   input += synapse0x1a68790();
   input += synapse0x1a68220();
   input += synapse0x1a68260();
   input += synapse0x1a688e0();
   input += synapse0x1a68920();
   input += synapse0x1a68960();
   input += synapse0x1a689a0();
   input += synapse0x1a689e0();
   input += synapse0x1a68a20();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a68090() {
   double input = input0x1a68090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a68a60() {
   double input = -0.39408;
   input += synapse0x1a61420();
   input += synapse0x1a61460();
   input += synapse0x1a614a0();
   input += synapse0x1a614e0();
   input += synapse0x1a68fb0();
   input += synapse0x1a68ff0();
   input += synapse0x1a69030();
   input += synapse0x1a69070();
   input += synapse0x1a690b0();
   input += synapse0x1a690f0();
   input += synapse0x1a69130();
   input += synapse0x1a69170();
   input += synapse0x1a691b0();
   input += synapse0x1a691f0();
   input += synapse0x1a69230();
   input += synapse0x1a69270();
   input += synapse0x1a68bf0();
   input += synapse0x1a68c30();
   input += synapse0x1a693c0();
   input += synapse0x1a69400();
   input += synapse0x1a69440();
   input += synapse0x1a69480();
   input += synapse0x1a694c0();
   input += synapse0x1a69500();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a68a60() {
   double input = input0x1a68a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a69540() {
   double input = -4.81222;
   input += synapse0x1a69880();
   input += synapse0x1a698c0();
   input += synapse0x1a69900();
   input += synapse0x1a69940();
   input += synapse0x1a69980();
   input += synapse0x1a699c0();
   input += synapse0x1a69a00();
   input += synapse0x1a69a40();
   input += synapse0x1a69a80();
   input += synapse0x1a69ac0();
   input += synapse0x1a69b00();
   input += synapse0x1a69b40();
   input += synapse0x1a69b80();
   input += synapse0x1a69bc0();
   input += synapse0x1a69c00();
   input += synapse0x1a69c40();
   input += synapse0x1a696d0();
   input += synapse0x1a69710();
   input += synapse0x1a69d90();
   input += synapse0x1a69dd0();
   input += synapse0x1a69e10();
   input += synapse0x1a69e50();
   input += synapse0x1a69e90();
   input += synapse0x1a69ed0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a69540() {
   double input = input0x1a69540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a69f10() {
   double input = -4.12627;
   input += synapse0x1a6a250();
   input += synapse0x1a6a290();
   input += synapse0x1a6a2d0();
   input += synapse0x1a6a310();
   input += synapse0x1a6a350();
   input += synapse0x1a6a390();
   input += synapse0x1a6a3d0();
   input += synapse0x1a6a410();
   input += synapse0x1a6a450();
   input += synapse0x1a6a490();
   input += synapse0x1a6a4d0();
   input += synapse0x1a6a510();
   input += synapse0x1a6a550();
   input += synapse0x1a6a590();
   input += synapse0x1a6a5d0();
   input += synapse0x1a6a610();
   input += synapse0x1a6a0a0();
   input += synapse0x1a6a0e0();
   input += synapse0x1a66e70();
   input += synapse0x1a66eb0();
   input += synapse0x1a66ef0();
   input += synapse0x1a66f30();
   input += synapse0x1a66f70();
   input += synapse0x1a66fb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a69f10() {
   double input = input0x1a69f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a66ff0() {
   double input = 0.333777;
   input += synapse0x1a67330();
   input += synapse0x1a67370();
   input += synapse0x1a673b0();
   input += synapse0x1a673f0();
   input += synapse0x1a67430();
   input += synapse0x1a67470();
   input += synapse0x1a674b0();
   input += synapse0x1a674f0();
   input += synapse0x1a67530();
   input += synapse0x1a67570();
   input += synapse0x1a675b0();
   input += synapse0x1a675f0();
   input += synapse0x1a67630();
   input += synapse0x1a6b770();
   input += synapse0x1a6b7b0();
   input += synapse0x1a6b7f0();
   input += synapse0x1a67180();
   input += synapse0x1a671c0();
   input += synapse0x1a6b940();
   input += synapse0x1a6b980();
   input += synapse0x1a6b9c0();
   input += synapse0x1a6ba00();
   input += synapse0x1a6ba40();
   input += synapse0x1a6ba80();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a66ff0() {
   double input = input0x1a66ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6bac0() {
   double input = -1.47106;
   input += synapse0x1a6be00();
   input += synapse0x1a6be40();
   input += synapse0x1a6be80();
   input += synapse0x1a6bec0();
   input += synapse0x1a6bf00();
   input += synapse0x1a6bf40();
   input += synapse0x1a6bf80();
   input += synapse0x1a6bfc0();
   input += synapse0x1a6c000();
   input += synapse0x1a6c040();
   input += synapse0x1a6c080();
   input += synapse0x1a6c0c0();
   input += synapse0x1a6c100();
   input += synapse0x1a6c140();
   input += synapse0x1a6c180();
   input += synapse0x1a6c1c0();
   input += synapse0x1a6bc50();
   input += synapse0x1a6bc90();
   input += synapse0x1a6c310();
   input += synapse0x1a6c350();
   input += synapse0x1a6c390();
   input += synapse0x1a6c3d0();
   input += synapse0x1a6c410();
   input += synapse0x1a6c450();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6bac0() {
   double input = input0x1a6bac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6c490() {
   double input = -3.36139;
   input += synapse0x1a6c7d0();
   input += synapse0x1a6c810();
   input += synapse0x1a6c850();
   input += synapse0x1a6c890();
   input += synapse0x1a6c8d0();
   input += synapse0x1a6c910();
   input += synapse0x1a6c950();
   input += synapse0x1a6c990();
   input += synapse0x1a6c9d0();
   input += synapse0x1a6ca10();
   input += synapse0x1a6ca50();
   input += synapse0x1a6ca90();
   input += synapse0x1a6cad0();
   input += synapse0x1a6cb10();
   input += synapse0x1a6cb50();
   input += synapse0x1a6cb90();
   input += synapse0x1a6c620();
   input += synapse0x1a6c660();
   input += synapse0x1a6cce0();
   input += synapse0x1a6cd20();
   input += synapse0x1a6cd60();
   input += synapse0x1a6cda0();
   input += synapse0x1a6cde0();
   input += synapse0x1a6ce20();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6c490() {
   double input = input0x1a6c490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6ce60() {
   double input = 0.0118282;
   input += synapse0x1a6d1a0();
   input += synapse0x1a6d1e0();
   input += synapse0x1a6d220();
   input += synapse0x1a6d260();
   input += synapse0x1a6d2a0();
   input += synapse0x1a6d2e0();
   input += synapse0x1a6d320();
   input += synapse0x1a6d360();
   input += synapse0x1a6d3a0();
   input += synapse0x1a6d3e0();
   input += synapse0x1a6d420();
   input += synapse0x1a6d460();
   input += synapse0x1a6d4a0();
   input += synapse0x1a6d4e0();
   input += synapse0x1a6d520();
   input += synapse0x1a6d560();
   input += synapse0x1a6cff0();
   input += synapse0x1a6d030();
   input += synapse0x1a6d6b0();
   input += synapse0x1a6d6f0();
   input += synapse0x1a6d730();
   input += synapse0x1a6d770();
   input += synapse0x1a6d7b0();
   input += synapse0x1a6d7f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6ce60() {
   double input = input0x1a6ce60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6d830() {
   double input = 2.27775;
   input += synapse0x1a6db70();
   input += synapse0x1a5ddf0();
   input += synapse0x1a5de30();
   input += synapse0x1a5e130();
   input += synapse0x1a5e170();
   input += synapse0x1a5e470();
   input += synapse0x1a5e4b0();
   input += synapse0x1a5e7b0();
   input += synapse0x1a5e7f0();
   input += synapse0x1a5eaf0();
   input += synapse0x1a5eb30();
   input += synapse0x1a5ee30();
   input += synapse0x1a5ee70();
   input += synapse0x1a5f170();
   input += synapse0x1a5f1b0();
   input += synapse0x1a5f4b0();
   input += synapse0x1a5f4f0();
   input += synapse0x1a5f7f0();
   input += synapse0x1a5f830();
   input += synapse0x1a5fb30();
   input += synapse0x1a5fb70();
   input += synapse0x1a5fe70();
   input += synapse0x1a5feb0();
   input += synapse0x1a601b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6d830() {
   double input = input0x1a6d830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6f640() {
   double input = 1.77965;
   input += synapse0x1a601f0();
   input += synapse0x1a60eb0();
   input += synapse0x1a60ef0();
   input += synapse0x1a6d9c0();
   input += synapse0x1a6da00();
   input += synapse0x1a611f0();
   input += synapse0x1a61230();
   input += synapse0x1a61750();
   input += synapse0x1a61790();
   input += synapse0x1a61a90();
   input += synapse0x1a61ad0();
   input += synapse0x1a61dd0();
   input += synapse0x1a61e10();
   input += synapse0x1a62110();
   input += synapse0x1a62150();
   input += synapse0x1a62450();
   input += synapse0x1a62490();
   input += synapse0x1a62790();
   input += synapse0x1a627d0();
   input += synapse0x1a62ad0();
   input += synapse0x1a62b10();
   input += synapse0x1a604f0();
   input += synapse0x1a60530();
   input += synapse0x1a6f8e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6f640() {
   double input = input0x1a6f640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6f920() {
   double input = 0.311025;
   input += synapse0x1a6fc60();
   input += synapse0x1a6fca0();
   input += synapse0x1a6fce0();
   input += synapse0x1a6fd20();
   input += synapse0x1a6fd60();
   input += synapse0x1a6fda0();
   input += synapse0x1a6fde0();
   input += synapse0x1a6fe20();
   input += synapse0x1a6fe60();
   input += synapse0x1a6fea0();
   input += synapse0x1a6fee0();
   input += synapse0x1a6ff20();
   input += synapse0x1a6ff60();
   input += synapse0x1a6ffa0();
   input += synapse0x1a6ffe0();
   input += synapse0x1a70020();
   input += synapse0x1a6fab0();
   input += synapse0x1a6faf0();
   input += synapse0x1a70170();
   input += synapse0x1a701b0();
   input += synapse0x1a701f0();
   input += synapse0x1a70230();
   input += synapse0x1a70270();
   input += synapse0x1a702b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6f920() {
   double input = input0x1a6f920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a702f0() {
   double input = 1.64136;
   input += synapse0x1a70630();
   input += synapse0x1a70670();
   input += synapse0x1a706b0();
   input += synapse0x1a706f0();
   input += synapse0x1a70730();
   input += synapse0x1a70770();
   input += synapse0x1a707b0();
   input += synapse0x1a707f0();
   input += synapse0x1a70830();
   input += synapse0x1a70870();
   input += synapse0x1a708b0();
   input += synapse0x1a708f0();
   input += synapse0x1a70930();
   input += synapse0x1a70970();
   input += synapse0x1a709b0();
   input += synapse0x1a709f0();
   input += synapse0x1a70480();
   input += synapse0x1a704c0();
   input += synapse0x1a70b40();
   input += synapse0x1a70b80();
   input += synapse0x1a70bc0();
   input += synapse0x1a70c00();
   input += synapse0x1a70c40();
   input += synapse0x1a70c80();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a702f0() {
   double input = input0x1a702f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a70cc0() {
   double input = 1.89335;
   input += synapse0x1a71000();
   input += synapse0x1a71040();
   input += synapse0x1a71080();
   input += synapse0x1a710c0();
   input += synapse0x1a71100();
   input += synapse0x1a71140();
   input += synapse0x1a71180();
   input += synapse0x1a711c0();
   input += synapse0x1a71200();
   input += synapse0x1a71240();
   input += synapse0x1a71280();
   input += synapse0x1a712c0();
   input += synapse0x1a71300();
   input += synapse0x1a71340();
   input += synapse0x1a71380();
   input += synapse0x1a713c0();
   input += synapse0x1a70e50();
   input += synapse0x1a70e90();
   input += synapse0x1a71510();
   input += synapse0x1a71550();
   input += synapse0x1a71590();
   input += synapse0x1a715d0();
   input += synapse0x1a71610();
   input += synapse0x1a71650();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a70cc0() {
   double input = input0x1a70cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a71690() {
   double input = -3.51253;
   input += synapse0x1a719d0();
   input += synapse0x1a71a10();
   input += synapse0x1a71a50();
   input += synapse0x1a71a90();
   input += synapse0x1a71ad0();
   input += synapse0x1a71b10();
   input += synapse0x1a71b50();
   input += synapse0x1a71b90();
   input += synapse0x1a71bd0();
   input += synapse0x1a71c10();
   input += synapse0x1a71c50();
   input += synapse0x1a71c90();
   input += synapse0x1a71cd0();
   input += synapse0x1a71d10();
   input += synapse0x1a71d50();
   input += synapse0x1a71d90();
   input += synapse0x1a71820();
   input += synapse0x1a71860();
   input += synapse0x1a71ee0();
   input += synapse0x1a71f20();
   input += synapse0x1a71f60();
   input += synapse0x1a71fa0();
   input += synapse0x1a71fe0();
   input += synapse0x1a72020();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a71690() {
   double input = input0x1a71690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a72060() {
   double input = 0.122407;
   input += synapse0x1a723a0();
   input += synapse0x1a723e0();
   input += synapse0x1a72420();
   input += synapse0x1a72460();
   input += synapse0x1a724a0();
   input += synapse0x1a724e0();
   input += synapse0x1a72520();
   input += synapse0x1a72560();
   input += synapse0x1a725a0();
   input += synapse0x1a6a760();
   input += synapse0x1a6a7a0();
   input += synapse0x1a6a7e0();
   input += synapse0x1a6a820();
   input += synapse0x1a6a860();
   input += synapse0x1a6a8a0();
   input += synapse0x1a6a8e0();
   input += synapse0x1a721f0();
   input += synapse0x1a72230();
   input += synapse0x1a6aa30();
   input += synapse0x1a6aa70();
   input += synapse0x1a6aab0();
   input += synapse0x1a6aaf0();
   input += synapse0x1a6ab30();
   input += synapse0x1a6ab70();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a72060() {
   double input = input0x1a72060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6abb0() {
   double input = 3.07695;
   input += synapse0x1a6aef0();
   input += synapse0x1a6af30();
   input += synapse0x1a6af70();
   input += synapse0x1a6afb0();
   input += synapse0x1a6aff0();
   input += synapse0x1a6b030();
   input += synapse0x1a6b070();
   input += synapse0x1a6b0b0();
   input += synapse0x1a6b0f0();
   input += synapse0x1a6b130();
   input += synapse0x1a6b170();
   input += synapse0x1a6b1b0();
   input += synapse0x1a6b1f0();
   input += synapse0x1a6b230();
   input += synapse0x1a6b270();
   input += synapse0x1a6b2b0();
   input += synapse0x1a6ad40();
   input += synapse0x1a6ad80();
   input += synapse0x1a6b400();
   input += synapse0x1a6b440();
   input += synapse0x1a6b480();
   input += synapse0x1a6b4c0();
   input += synapse0x1a6b500();
   input += synapse0x1a6b540();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6abb0() {
   double input = input0x1a6abb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6b580() {
   double input = 0.867723;
   input += synapse0x1a6b710();
   input += synapse0x1a747a0();
   input += synapse0x1a747e0();
   input += synapse0x1a74820();
   input += synapse0x1a74860();
   input += synapse0x1a748a0();
   input += synapse0x1a748e0();
   input += synapse0x1a74920();
   input += synapse0x1a74960();
   input += synapse0x1a749a0();
   input += synapse0x1a749e0();
   input += synapse0x1a74a20();
   input += synapse0x1a74a60();
   input += synapse0x1a74aa0();
   input += synapse0x1a74ae0();
   input += synapse0x1a74b20();
   input += synapse0x1a745f0();
   input += synapse0x1a74630();
   input += synapse0x1a74c70();
   input += synapse0x1a74cb0();
   input += synapse0x1a74cf0();
   input += synapse0x1a74d30();
   input += synapse0x1a74d70();
   input += synapse0x1a74db0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6b580() {
   double input = input0x1a6b580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a74df0() {
   double input = 1.7797;
   input += synapse0x1a75130();
   input += synapse0x1a75170();
   input += synapse0x1a751b0();
   input += synapse0x1a751f0();
   input += synapse0x1a75230();
   input += synapse0x1a75270();
   input += synapse0x1a752b0();
   input += synapse0x1a752f0();
   input += synapse0x1a75330();
   input += synapse0x1a75370();
   input += synapse0x1a753b0();
   input += synapse0x1a753f0();
   input += synapse0x1a75430();
   input += synapse0x1a75470();
   input += synapse0x1a754b0();
   input += synapse0x1a754f0();
   input += synapse0x1a74f80();
   input += synapse0x1a74fc0();
   input += synapse0x1a75640();
   input += synapse0x1a75680();
   input += synapse0x1a756c0();
   input += synapse0x1a75700();
   input += synapse0x1a75740();
   input += synapse0x1a75780();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a74df0() {
   double input = input0x1a74df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a757c0() {
   double input = -0.28188;
   input += synapse0x1a75b00();
   input += synapse0x1a75b40();
   input += synapse0x1a75b80();
   input += synapse0x1a75bc0();
   input += synapse0x1a75c00();
   input += synapse0x1a75c40();
   input += synapse0x1a75c80();
   input += synapse0x1a75cc0();
   input += synapse0x1a75d00();
   input += synapse0x1a75d40();
   input += synapse0x1a75d80();
   input += synapse0x1a75dc0();
   input += synapse0x1a75e00();
   input += synapse0x1a75e40();
   input += synapse0x1a75e80();
   input += synapse0x1a75ec0();
   input += synapse0x1a75950();
   input += synapse0x1a75990();
   input += synapse0x1a76010();
   input += synapse0x1a76050();
   input += synapse0x1a76090();
   input += synapse0x1a760d0();
   input += synapse0x1a76110();
   input += synapse0x1a76150();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a757c0() {
   double input = input0x1a757c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a76190() {
   double input = 0.227904;
   input += synapse0x1a764d0();
   input += synapse0x1a76510();
   input += synapse0x1a76550();
   input += synapse0x1a76590();
   input += synapse0x1a765d0();
   input += synapse0x1a76610();
   input += synapse0x1a76650();
   input += synapse0x1a76690();
   input += synapse0x1a766d0();
   input += synapse0x1a76710();
   input += synapse0x1a76750();
   input += synapse0x1a76790();
   input += synapse0x1a767d0();
   input += synapse0x1a76810();
   input += synapse0x1a76850();
   input += synapse0x1a76890();
   input += synapse0x1a76320();
   input += synapse0x1a76360();
   input += synapse0x1a769e0();
   input += synapse0x1a76a20();
   input += synapse0x1a76a60();
   input += synapse0x1a76aa0();
   input += synapse0x1a76ae0();
   input += synapse0x1a76b20();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a76190() {
   double input = input0x1a76190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a76b60() {
   double input = -2.14251;
   input += synapse0x1a76ea0();
   input += synapse0x1a76ee0();
   input += synapse0x1a76f20();
   input += synapse0x1a76f60();
   input += synapse0x1a76fa0();
   input += synapse0x1a76fe0();
   input += synapse0x1a77020();
   input += synapse0x1a77060();
   input += synapse0x1a770a0();
   input += synapse0x1a770e0();
   input += synapse0x1a77120();
   input += synapse0x1a77160();
   input += synapse0x1a771a0();
   input += synapse0x1a771e0();
   input += synapse0x1a77220();
   input += synapse0x1a77260();
   input += synapse0x1a76cf0();
   input += synapse0x1a76d30();
   input += synapse0x1a773b0();
   input += synapse0x1a773f0();
   input += synapse0x1a77430();
   input += synapse0x1a77470();
   input += synapse0x1a774b0();
   input += synapse0x1a774f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a76b60() {
   double input = input0x1a76b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a77530() {
   double input = 0.0461445;
   input += synapse0x1a77870();
   input += synapse0x1a778b0();
   input += synapse0x1a778f0();
   input += synapse0x1a77930();
   input += synapse0x1a77970();
   input += synapse0x1a779b0();
   input += synapse0x1a779f0();
   input += synapse0x1a77a30();
   input += synapse0x1a77a70();
   input += synapse0x1a77ab0();
   input += synapse0x1a77af0();
   input += synapse0x1a77b30();
   input += synapse0x1a77b70();
   input += synapse0x1a77bb0();
   input += synapse0x1a77bf0();
   input += synapse0x1a77c30();
   input += synapse0x1a776c0();
   input += synapse0x1a77700();
   input += synapse0x1a77d80();
   input += synapse0x1a77dc0();
   input += synapse0x1a77e00();
   input += synapse0x1a77e40();
   input += synapse0x1a77e80();
   input += synapse0x1a77ec0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a77530() {
   double input = input0x1a77530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a77f00() {
   double input = -0.730185;
   input += synapse0x1a78240();
   input += synapse0x1a78280();
   input += synapse0x1a782c0();
   input += synapse0x1a78300();
   input += synapse0x1a78340();
   input += synapse0x1a78380();
   input += synapse0x1a783c0();
   input += synapse0x1a78400();
   input += synapse0x1a78440();
   input += synapse0x1a78480();
   input += synapse0x1a784c0();
   input += synapse0x1a78500();
   input += synapse0x1a78540();
   input += synapse0x1a78580();
   input += synapse0x1a785c0();
   input += synapse0x1a78600();
   input += synapse0x1a78090();
   input += synapse0x1a780d0();
   input += synapse0x1a78750();
   input += synapse0x1a78790();
   input += synapse0x1a787d0();
   input += synapse0x1a78810();
   input += synapse0x1a78850();
   input += synapse0x1a78890();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a77f00() {
   double input = input0x1a77f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a788d0() {
   double input = -1.91138;
   input += synapse0x1a78c10();
   input += synapse0x1a78c50();
   input += synapse0x1a78c90();
   input += synapse0x1a78cd0();
   input += synapse0x1a78d10();
   input += synapse0x1a78d50();
   input += synapse0x1a78d90();
   input += synapse0x1a78dd0();
   input += synapse0x1a78e10();
   input += synapse0x1a78e50();
   input += synapse0x1a78e90();
   input += synapse0x1a78ed0();
   input += synapse0x1a78f10();
   input += synapse0x1a78f50();
   input += synapse0x1a78f90();
   input += synapse0x1a78fd0();
   input += synapse0x1a78a60();
   input += synapse0x1a78aa0();
   input += synapse0x1a79120();
   input += synapse0x1a79160();
   input += synapse0x1a791a0();
   input += synapse0x1a791e0();
   input += synapse0x1a79220();
   input += synapse0x1a79260();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a788d0() {
   double input = input0x1a788d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a792a0() {
   double input = -0.261568;
   input += synapse0x1a795e0();
   input += synapse0x1a6dbb0();
   input += synapse0x1a6dbf0();
   input += synapse0x1a6dc30();
   input += synapse0x1a6de80();
   input += synapse0x1a6dec0();
   input += synapse0x1a6df00();
   input += synapse0x1a6e150();
   input += synapse0x1a6e190();
   input += synapse0x1a6e3e0();
   input += synapse0x1a6e420();
   input += synapse0x1a6e460();
   input += synapse0x1a6e6b0();
   input += synapse0x1a6e6f0();
   input += synapse0x1a6e940();
   input += synapse0x1a6e980();
   input += synapse0x1a79430();
   input += synapse0x1a79470();
   input += synapse0x1a6ead0();
   input += synapse0x1a6efe0();
   input += synapse0x1a6f020();
   input += synapse0x1a6f060();
   input += synapse0x1a6f2b0();
   input += synapse0x1a6f2f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a792a0() {
   double input = input0x1a792a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a6f330() {
   double input = -0.0670475;
   input += synapse0x1a6eba0();
   input += synapse0x1a6ebe0();
   input += synapse0x1a6ec20();
   input += synapse0x1a6ec60();
   input += synapse0x1a6f5e0();
   input += synapse0x1a7b930();
   input += synapse0x1a7b970();
   input += synapse0x1a7b9b0();
   input += synapse0x1a7b9f0();
   input += synapse0x1a7ba30();
   input += synapse0x1a7ba70();
   input += synapse0x1a7bab0();
   input += synapse0x1a7baf0();
   input += synapse0x1a7bb30();
   input += synapse0x1a7bb70();
   input += synapse0x1a7bbb0();
   input += synapse0x1a6f4c0();
   input += synapse0x1a6f500();
   input += synapse0x1a7bd00();
   input += synapse0x1a7bd40();
   input += synapse0x1a7bd80();
   input += synapse0x1a7bdc0();
   input += synapse0x1a7be00();
   input += synapse0x1a7be40();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a6f330() {
   double input = input0x1a6f330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7be80() {
   double input = -0.658719;
   input += synapse0x1a7c1c0();
   input += synapse0x1a7c200();
   input += synapse0x1a7c240();
   input += synapse0x1a7c280();
   input += synapse0x1a7c2c0();
   input += synapse0x1a7c300();
   input += synapse0x1a7c340();
   input += synapse0x1a7c380();
   input += synapse0x1a7c3c0();
   input += synapse0x1a7c400();
   input += synapse0x1a7c440();
   input += synapse0x1a7c480();
   input += synapse0x1a7c4c0();
   input += synapse0x1a7c500();
   input += synapse0x1a7c540();
   input += synapse0x1a7c580();
   input += synapse0x1a7c010();
   input += synapse0x1a7c050();
   input += synapse0x1a7c6d0();
   input += synapse0x1a7c710();
   input += synapse0x1a7c750();
   input += synapse0x1a7c790();
   input += synapse0x1a7c7d0();
   input += synapse0x1a7c810();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7be80() {
   double input = input0x1a7be80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7c850() {
   double input = 1.31281;
   input += synapse0x1a7cb90();
   input += synapse0x1a7cbd0();
   input += synapse0x1a7cc10();
   input += synapse0x1a7cc50();
   input += synapse0x1a7cc90();
   input += synapse0x1a7ccd0();
   input += synapse0x1a7cd10();
   input += synapse0x1a7cd50();
   input += synapse0x1a7cd90();
   input += synapse0x1a7cdd0();
   input += synapse0x1a7ce10();
   input += synapse0x1a7ce50();
   input += synapse0x1a7ce90();
   input += synapse0x1a7ced0();
   input += synapse0x1a7cf10();
   input += synapse0x1a7cf50();
   input += synapse0x1a7c9e0();
   input += synapse0x1a7ca20();
   input += synapse0x1a7d0a0();
   input += synapse0x1a7d0e0();
   input += synapse0x1a7d120();
   input += synapse0x1a7d160();
   input += synapse0x1a7d1a0();
   input += synapse0x1a7d1e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7c850() {
   double input = input0x1a7c850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7d220() {
   double input = -0.641971;
   input += synapse0x1a7d560();
   input += synapse0x1a7d5a0();
   input += synapse0x1a7d5e0();
   input += synapse0x1a7d620();
   input += synapse0x1a7d660();
   input += synapse0x1a7d6a0();
   input += synapse0x1a7d6e0();
   input += synapse0x1a7d720();
   input += synapse0x1a7d760();
   input += synapse0x1a7d7a0();
   input += synapse0x1a7d7e0();
   input += synapse0x1a7d820();
   input += synapse0x1a7d860();
   input += synapse0x1a7d8a0();
   input += synapse0x1a7d8e0();
   input += synapse0x1a7d920();
   input += synapse0x1a7d3b0();
   input += synapse0x1a7d3f0();
   input += synapse0x1a7da70();
   input += synapse0x1a7dab0();
   input += synapse0x1a7daf0();
   input += synapse0x1a7db30();
   input += synapse0x1a7db70();
   input += synapse0x1a7dbb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7d220() {
   double input = input0x1a7d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7dbf0() {
   double input = -1.38151;
   input += synapse0x1a7df30();
   input += synapse0x1a7df70();
   input += synapse0x1a7dfb0();
   input += synapse0x1a7dff0();
   input += synapse0x1a7e030();
   input += synapse0x1a7e070();
   input += synapse0x1a7e0b0();
   input += synapse0x1a7e0f0();
   input += synapse0x1a7e130();
   input += synapse0x1a7e170();
   input += synapse0x1a7e1b0();
   input += synapse0x1a7e1f0();
   input += synapse0x1a7e230();
   input += synapse0x1a7e270();
   input += synapse0x1a7e2b0();
   input += synapse0x1a7e2f0();
   input += synapse0x1a7dd80();
   input += synapse0x1a7ddc0();
   input += synapse0x1a7e440();
   input += synapse0x1a7e480();
   input += synapse0x1a7e4c0();
   input += synapse0x1a7e500();
   input += synapse0x1a7e540();
   input += synapse0x1a7e580();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7dbf0() {
   double input = input0x1a7dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7e5c0() {
   double input = 0.367234;
   input += synapse0x1a7e900();
   input += synapse0x1a7e940();
   input += synapse0x1a7e980();
   input += synapse0x1a7e9c0();
   input += synapse0x1a7ea00();
   input += synapse0x1a7ea40();
   input += synapse0x1a7ea80();
   input += synapse0x1a7eac0();
   input += synapse0x1a7eb00();
   input += synapse0x1a7eb40();
   input += synapse0x1a7eb80();
   input += synapse0x1a7ebc0();
   input += synapse0x1a7ec00();
   input += synapse0x1a7ec40();
   input += synapse0x1a7ec80();
   input += synapse0x1a7ecc0();
   input += synapse0x1a7e750();
   input += synapse0x1a7e790();
   input += synapse0x1a7ee10();
   input += synapse0x1a7ee50();
   input += synapse0x1a7ee90();
   input += synapse0x1a7eed0();
   input += synapse0x1a7ef10();
   input += synapse0x1a7ef50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7e5c0() {
   double input = input0x1a7e5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7ef90() {
   double input = 1.10431;
   input += synapse0x1a7f2d0();
   input += synapse0x1a7f310();
   input += synapse0x1a7f350();
   input += synapse0x1a7f390();
   input += synapse0x1a7f3d0();
   input += synapse0x1a7f410();
   input += synapse0x1a7f450();
   input += synapse0x1a7f490();
   input += synapse0x1a7f4d0();
   input += synapse0x1a7f510();
   input += synapse0x1a7f550();
   input += synapse0x1a7f590();
   input += synapse0x1a7f5d0();
   input += synapse0x1a7f610();
   input += synapse0x1a7f650();
   input += synapse0x1a7f690();
   input += synapse0x1a7f120();
   input += synapse0x1a7f160();
   input += synapse0x1a7f7e0();
   input += synapse0x1a7f820();
   input += synapse0x1a7f860();
   input += synapse0x1a7f8a0();
   input += synapse0x1a7f8e0();
   input += synapse0x1a7f920();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7ef90() {
   double input = input0x1a7ef90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a7f960() {
   double input = 1.46219;
   input += synapse0x1a7fca0();
   input += synapse0x1a7fce0();
   input += synapse0x1a7fd20();
   input += synapse0x1a7fd60();
   input += synapse0x1a7fda0();
   input += synapse0x1a7fde0();
   input += synapse0x1a7fe20();
   input += synapse0x1a7fe60();
   input += synapse0x1a7fea0();
   input += synapse0x1a7fee0();
   input += synapse0x1a7ff20();
   input += synapse0x1a7ff60();
   input += synapse0x1a7ffa0();
   input += synapse0x1a7ffe0();
   input += synapse0x1a80020();
   input += synapse0x1a80060();
   input += synapse0x1a7faf0();
   input += synapse0x1a7fb30();
   input += synapse0x1a801b0();
   input += synapse0x1a801f0();
   input += synapse0x1a80230();
   input += synapse0x1a80270();
   input += synapse0x1a802b0();
   input += synapse0x1a802f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a7f960() {
   double input = input0x1a7f960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a80330() {
   double input = -0.330508;
   input += synapse0x1a68da0();
   input += synapse0x1a68de0();
   input += synapse0x1a68e20();
   input += synapse0x1a68e60();
   input += synapse0x1a68ea0();
   input += synapse0x1a68ee0();
   input += synapse0x1a68f20();
   input += synapse0x1a68f60();
   input += synapse0x1a80a80();
   input += synapse0x1a80ac0();
   input += synapse0x1a80b00();
   input += synapse0x1a80b40();
   input += synapse0x1a80b80();
   input += synapse0x1a80bc0();
   input += synapse0x1a80c00();
   input += synapse0x1a80c40();
   input += synapse0x1a804c0();
   input += synapse0x1a80500();
   input += synapse0x1a80d90();
   input += synapse0x1a80dd0();
   input += synapse0x1a80e10();
   input += synapse0x1a80e50();
   input += synapse0x1a80e90();
   input += synapse0x1a80ed0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a80330() {
   double input = input0x1a80330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a80f10() {
   double input = -1.8432;
   input += synapse0x1a81250();
   input += synapse0x1a81290();
   input += synapse0x1a812d0();
   input += synapse0x1a81310();
   input += synapse0x1a81350();
   input += synapse0x1a81390();
   input += synapse0x1a813d0();
   input += synapse0x1a81410();
   input += synapse0x1a81450();
   input += synapse0x1a81490();
   input += synapse0x1a814d0();
   input += synapse0x1a81510();
   input += synapse0x1a81550();
   input += synapse0x1a81590();
   input += synapse0x1a815d0();
   input += synapse0x1a81610();
   input += synapse0x1a810a0();
   input += synapse0x1a810e0();
   input += synapse0x1a81760();
   input += synapse0x1a817a0();
   input += synapse0x1a817e0();
   input += synapse0x1a81820();
   input += synapse0x1a81860();
   input += synapse0x1a818a0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a80f10() {
   double input = input0x1a80f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a818e0() {
   double input = -4.83828;
   input += synapse0x1a81c20();
   input += synapse0x1a81c60();
   input += synapse0x1a81ca0();
   input += synapse0x1a81ce0();
   input += synapse0x1a81d20();
   input += synapse0x1a81d60();
   input += synapse0x1a81da0();
   input += synapse0x1a81de0();
   input += synapse0x1a81e20();
   input += synapse0x1a81e60();
   input += synapse0x1a81ea0();
   input += synapse0x1a81ee0();
   input += synapse0x1a81f20();
   input += synapse0x1a81f60();
   input += synapse0x1a81fa0();
   input += synapse0x1a81fe0();
   input += synapse0x1a81a70();
   input += synapse0x1a81ab0();
   input += synapse0x1a725e0();
   input += synapse0x1a72620();
   input += synapse0x1a72660();
   input += synapse0x1a726a0();
   input += synapse0x1a726e0();
   input += synapse0x1a72720();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a818e0() {
   double input = input0x1a818e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a72760() {
   double input = -0.84135;
   input += synapse0x1a72aa0();
   input += synapse0x1a72ae0();
   input += synapse0x1a72b20();
   input += synapse0x1a72b60();
   input += synapse0x1a72ba0();
   input += synapse0x1a72be0();
   input += synapse0x1a72c20();
   input += synapse0x1a72c60();
   input += synapse0x1a72ca0();
   input += synapse0x1a72ce0();
   input += synapse0x1a72d20();
   input += synapse0x1a72d60();
   input += synapse0x1a72da0();
   input += synapse0x1a72de0();
   input += synapse0x1a72e20();
   input += synapse0x1a72e60();
   input += synapse0x1a728f0();
   input += synapse0x1a72930();
   input += synapse0x1a72fb0();
   input += synapse0x1a72ff0();
   input += synapse0x1a73030();
   input += synapse0x1a73070();
   input += synapse0x1a730b0();
   input += synapse0x1a730f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a72760() {
   double input = input0x1a72760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a73130() {
   double input = -2.05612;
   input += synapse0x1a73470();
   input += synapse0x1a734b0();
   input += synapse0x1a734f0();
   input += synapse0x1a73530();
   input += synapse0x1a73570();
   input += synapse0x1a735b0();
   input += synapse0x1a735f0();
   input += synapse0x1a73630();
   input += synapse0x1a73670();
   input += synapse0x1a736b0();
   input += synapse0x1a736f0();
   input += synapse0x1a73730();
   input += synapse0x1a73770();
   input += synapse0x1a737b0();
   input += synapse0x1a737f0();
   input += synapse0x1a73830();
   input += synapse0x1a732c0();
   input += synapse0x1a73300();
   input += synapse0x1a73980();
   input += synapse0x1a739c0();
   input += synapse0x1a73a00();
   input += synapse0x1a73a40();
   input += synapse0x1a73a80();
   input += synapse0x1a73ac0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a73130() {
   double input = input0x1a73130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a73b00() {
   double input = 0.874097;
   input += synapse0x1a73e40();
   input += synapse0x1a73e80();
   input += synapse0x1a73ec0();
   input += synapse0x1a73f00();
   input += synapse0x1a73f40();
   input += synapse0x1a73f80();
   input += synapse0x1a73fc0();
   input += synapse0x1a74000();
   input += synapse0x1a74040();
   input += synapse0x1a74080();
   input += synapse0x1a740c0();
   input += synapse0x1a74100();
   input += synapse0x1a74140();
   input += synapse0x1a74180();
   input += synapse0x1a741c0();
   input += synapse0x1a74200();
   input += synapse0x1a73c90();
   input += synapse0x1a73cd0();
   input += synapse0x1a74350();
   input += synapse0x1a74390();
   input += synapse0x1a743d0();
   input += synapse0x1a74410();
   input += synapse0x1a74450();
   input += synapse0x1a74490();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a73b00() {
   double input = input0x1a73b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a86140() {
   double input = -1.68554;
   input += synapse0x1a86360();
   input += synapse0x1a863a0();
   input += synapse0x1a863e0();
   input += synapse0x1a86420();
   input += synapse0x1a86460();
   input += synapse0x1a864a0();
   input += synapse0x1a864e0();
   input += synapse0x1a86520();
   input += synapse0x1a86560();
   input += synapse0x1a865a0();
   input += synapse0x1a865e0();
   input += synapse0x1a86620();
   input += synapse0x1a86660();
   input += synapse0x1a866a0();
   input += synapse0x1a866e0();
   input += synapse0x1a86720();
   input += synapse0x1a744d0();
   input += synapse0x1a74510();
   input += synapse0x1a86870();
   input += synapse0x1a868b0();
   input += synapse0x1a868f0();
   input += synapse0x1a86930();
   input += synapse0x1a86970();
   input += synapse0x1a869b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a86140() {
   double input = input0x1a86140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a869f0() {
   double input = 0.0512598;
   input += synapse0x1a86d30();
   input += synapse0x1a86d70();
   input += synapse0x1a86db0();
   input += synapse0x1a86df0();
   input += synapse0x1a86e30();
   input += synapse0x1a86e70();
   input += synapse0x1a86eb0();
   input += synapse0x1a86ef0();
   input += synapse0x1a86f30();
   input += synapse0x1a86f70();
   input += synapse0x1a86fb0();
   input += synapse0x1a86ff0();
   input += synapse0x1a87030();
   input += synapse0x1a87070();
   input += synapse0x1a870b0();
   input += synapse0x1a870f0();
   input += synapse0x1a86b80();
   input += synapse0x1a86bc0();
   input += synapse0x1a87240();
   input += synapse0x1a87280();
   input += synapse0x1a872c0();
   input += synapse0x1a87300();
   input += synapse0x1a87340();
   input += synapse0x1a87380();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a869f0() {
   double input = input0x1a869f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a873c0() {
   double input = 1.0714;
   input += synapse0x1a87700();
   input += synapse0x1a87740();
   input += synapse0x1a87780();
   input += synapse0x1a877c0();
   input += synapse0x1a87800();
   input += synapse0x1a87840();
   input += synapse0x1a87880();
   input += synapse0x1a878c0();
   input += synapse0x1a87900();
   input += synapse0x1a87940();
   input += synapse0x1a87980();
   input += synapse0x1a879c0();
   input += synapse0x1a87a00();
   input += synapse0x1a87a40();
   input += synapse0x1a87a80();
   input += synapse0x1a87ac0();
   input += synapse0x1a87550();
   input += synapse0x1a87590();
   input += synapse0x1a87c10();
   input += synapse0x1a87c50();
   input += synapse0x1a87c90();
   input += synapse0x1a87cd0();
   input += synapse0x1a87d10();
   input += synapse0x1a87d50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a873c0() {
   double input = input0x1a873c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a87d90() {
   double input = -1.60383;
   input += synapse0x1a880d0();
   input += synapse0x1a88110();
   input += synapse0x1a88150();
   input += synapse0x1a88190();
   input += synapse0x1a881d0();
   input += synapse0x1a88210();
   input += synapse0x1a88250();
   input += synapse0x1a88290();
   input += synapse0x1a882d0();
   input += synapse0x1a88310();
   input += synapse0x1a88350();
   input += synapse0x1a88390();
   input += synapse0x1a883d0();
   input += synapse0x1a88410();
   input += synapse0x1a88450();
   input += synapse0x1a88490();
   input += synapse0x1a87f20();
   input += synapse0x1a87f60();
   input += synapse0x1a885e0();
   input += synapse0x1a88620();
   input += synapse0x1a88660();
   input += synapse0x1a886a0();
   input += synapse0x1a886e0();
   input += synapse0x1a88720();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a87d90() {
   double input = input0x1a87d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a8ef90() {
   double input = -0.385175;
   input += synapse0x1828590();
   input += synapse0x18285d0();
   input += synapse0x1a650d0();
   input += synapse0x1a65110();
   input += synapse0x1a66ba0();
   input += synapse0x1a66be0();
   input += synapse0x1a67970();
   input += synapse0x1a679b0();
   input += synapse0x1a68340();
   input += synapse0x1a68380();
   input += synapse0x1a68d10();
   input += synapse0x1a68d50();
   input += synapse0x1a697f0();
   input += synapse0x1a69830();
   input += synapse0x1a6a1c0();
   input += synapse0x1a6a200();
   input += synapse0x1a672a0();
   input += synapse0x1a672e0();
   input += synapse0x1a6bd70();
   input += synapse0x1a6bdb0();
   input += synapse0x1a6c740();
   input += synapse0x1a6c780();
   input += synapse0x1a6d110();
   input += synapse0x1a6d150();
   input += synapse0x1a6dae0();
   input += synapse0x1a6db20();
   input += synapse0x1a60b70();
   input += synapse0x1a60bb0();
   input += synapse0x1a6fbd0();
   input += synapse0x1a6fc10();
   input += synapse0x1a705a0();
   input += synapse0x1a705e0();
   input += synapse0x1a70f70();
   input += synapse0x1a70fb0();
   input += synapse0x1a71940();
   input += synapse0x1a71980();
   input += synapse0x1a72310();
   input += synapse0x1a72350();
   input += synapse0x1a6ae60();
   input += synapse0x1a6aea0();
   input += synapse0x1a74710();
   input += synapse0x1a74750();
   input += synapse0x1a750a0();
   input += synapse0x1a750e0();
   input += synapse0x1a75a70();
   input += synapse0x1a75ab0();
   input += synapse0x1a76440();
   input += synapse0x1a76480();
   input += synapse0x1a76e10();
   input += synapse0x1a76e50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a8ef90() {
   double input = input0x1a8ef90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a8f330() {
   double input = -1.09871;
   input += synapse0x1a79550();
   input += synapse0x1a79590();
   input += synapse0x1a6eb10();
   input += synapse0x1a6eb50();
   input += synapse0x1a7c130();
   input += synapse0x1a7c170();
   input += synapse0x1a7cb00();
   input += synapse0x1a7cb40();
   input += synapse0x1a7d4d0();
   input += synapse0x1a7d510();
   input += synapse0x1a7dea0();
   input += synapse0x1a7dee0();
   input += synapse0x1a7e870();
   input += synapse0x1a7e8b0();
   input += synapse0x1a7f240();
   input += synapse0x1a7f280();
   input += synapse0x1a7fc10();
   input += synapse0x1a7fc50();
   input += synapse0x1a805e0();
   input += synapse0x1a80620();
   input += synapse0x1a811c0();
   input += synapse0x1a81200();
   input += synapse0x1a81b90();
   input += synapse0x1a81bd0();
   input += synapse0x1a72a10();
   input += synapse0x1a72a50();
   input += synapse0x1a733e0();
   input += synapse0x1a73420();
   input += synapse0x1a73db0();
   input += synapse0x1a73df0();
   input += synapse0x1a862d0();
   input += synapse0x1a86310();
   input += synapse0x1a86ca0();
   input += synapse0x1a86ce0();
   input += synapse0x1a87670();
   input += synapse0x1a876b0();
   input += synapse0x1a88040();
   input += synapse0x1a88080();
   input += synapse0x1a62fd0();
   input += synapse0x1a63010();
   input += synapse0x1a777e0();
   input += synapse0x1a77820();
   input += synapse0x1a88760();
   input += synapse0x1a887a0();
   input += synapse0x1a887e0();
   input += synapse0x1a88820();
   input += synapse0x1a8f6d0();
   input += synapse0x1a8f710();
   input += synapse0x1a8f750();
   input += synapse0x1a8f790();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a8f330() {
   double input = input0x1a8f330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a8f7d0() {
   double input = -1.25851;
   input += synapse0x1a8fb10();
   input += synapse0x1a8fb50();
   input += synapse0x1a8fb90();
   input += synapse0x1a8fbd0();
   input += synapse0x1a8fc10();
   input += synapse0x1a8fc50();
   input += synapse0x1a8fc90();
   input += synapse0x1a8fcd0();
   input += synapse0x1a8fd10();
   input += synapse0x1a8fd50();
   input += synapse0x1a8fd90();
   input += synapse0x1a8fdd0();
   input += synapse0x1a8fe10();
   input += synapse0x1a8fe50();
   input += synapse0x1a8fe90();
   input += synapse0x1a8fed0();
   input += synapse0x1a8f960();
   input += synapse0x1a8f9a0();
   input += synapse0x1a90020();
   input += synapse0x1a90060();
   input += synapse0x1a900a0();
   input += synapse0x1a900e0();
   input += synapse0x1a90120();
   input += synapse0x1a90160();
   input += synapse0x1a901a0();
   input += synapse0x1a901e0();
   input += synapse0x1a90220();
   input += synapse0x1a90260();
   input += synapse0x1a902a0();
   input += synapse0x1a902e0();
   input += synapse0x1a90320();
   input += synapse0x1a90360();
   input += synapse0x1a8ff10();
   input += synapse0x1a8ff50();
   input += synapse0x1a8ff90();
   input += synapse0x1a8ffd0();
   input += synapse0x1a905b0();
   input += synapse0x1a905f0();
   input += synapse0x1a90630();
   input += synapse0x1a90670();
   input += synapse0x1a906b0();
   input += synapse0x1a906f0();
   input += synapse0x1a90730();
   input += synapse0x1a90770();
   input += synapse0x1a907b0();
   input += synapse0x1a907f0();
   input += synapse0x1a90830();
   input += synapse0x1a90870();
   input += synapse0x1a908b0();
   input += synapse0x1a908f0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a8f7d0() {
   double input = input0x1a8f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a90930() {
   double input = 0.176719;
   input += synapse0x1a90c70();
   input += synapse0x1a90cb0();
   input += synapse0x1a90cf0();
   input += synapse0x1a90d30();
   input += synapse0x1a90d70();
   input += synapse0x1a90db0();
   input += synapse0x1a90df0();
   input += synapse0x1a90e30();
   input += synapse0x1a90e70();
   input += synapse0x1a90eb0();
   input += synapse0x1a90ef0();
   input += synapse0x1a90f30();
   input += synapse0x1a90f70();
   input += synapse0x1a90fb0();
   input += synapse0x1a90ff0();
   input += synapse0x1a91030();
   input += synapse0x1a90ac0();
   input += synapse0x1a90b00();
   input += synapse0x1a91180();
   input += synapse0x1a911c0();
   input += synapse0x1a91200();
   input += synapse0x1a91240();
   input += synapse0x1a91280();
   input += synapse0x1a912c0();
   input += synapse0x1a91300();
   input += synapse0x1a91340();
   input += synapse0x1a91380();
   input += synapse0x1a913c0();
   input += synapse0x1a91400();
   input += synapse0x1a91440();
   input += synapse0x1a91480();
   input += synapse0x1a914c0();
   input += synapse0x1a91070();
   input += synapse0x1a910b0();
   input += synapse0x1a910f0();
   input += synapse0x1a91130();
   input += synapse0x1a91710();
   input += synapse0x1a91750();
   input += synapse0x1a91790();
   input += synapse0x1a917d0();
   input += synapse0x1a91810();
   input += synapse0x1a91850();
   input += synapse0x1a91890();
   input += synapse0x1a918d0();
   input += synapse0x1a91910();
   input += synapse0x1a91950();
   input += synapse0x1a91990();
   input += synapse0x1a919d0();
   input += synapse0x1a91a10();
   input += synapse0x1a91a50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a90930() {
   double input = input0x1a90930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a91a90() {
   double input = -0.00844582;
   input += synapse0x1a91dd0();
   input += synapse0x1a91e10();
   input += synapse0x1a91e50();
   input += synapse0x1a91e90();
   input += synapse0x1a91ed0();
   input += synapse0x1a91f10();
   input += synapse0x1a91f50();
   input += synapse0x1a91f90();
   input += synapse0x1a91fd0();
   input += synapse0x1a92010();
   input += synapse0x1a92050();
   input += synapse0x1a92090();
   input += synapse0x1a920d0();
   input += synapse0x1a92110();
   input += synapse0x1a92150();
   input += synapse0x1a92190();
   input += synapse0x1a91c20();
   input += synapse0x1a91c60();
   input += synapse0x1a922e0();
   input += synapse0x1a92320();
   input += synapse0x1a92360();
   input += synapse0x1a923a0();
   input += synapse0x1a923e0();
   input += synapse0x1a92420();
   input += synapse0x1a92460();
   input += synapse0x1a924a0();
   input += synapse0x1a924e0();
   input += synapse0x1a92520();
   input += synapse0x1a92560();
   input += synapse0x1a925a0();
   input += synapse0x1a925e0();
   input += synapse0x1a92620();
   input += synapse0x1a921d0();
   input += synapse0x1a92210();
   input += synapse0x1a92250();
   input += synapse0x1a92290();
   input += synapse0x1a92870();
   input += synapse0x1a928b0();
   input += synapse0x1a928f0();
   input += synapse0x1a92930();
   input += synapse0x1a92970();
   input += synapse0x1a929b0();
   input += synapse0x1a929f0();
   input += synapse0x1a92a30();
   input += synapse0x1a92a70();
   input += synapse0x1a92ab0();
   input += synapse0x1a92af0();
   input += synapse0x1a92b30();
   input += synapse0x1a92b70();
   input += synapse0x1a92bb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a91a90() {
   double input = input0x1a91a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x1a92bf0() {
   double input = 10.9608;
   input += synapse0x1a92e10();
   input += synapse0x1a92e50();
   input += synapse0x1a92e90();
   input += synapse0x1a92ed0();
   input += synapse0x1a92f10();
   return input;
}

double NNfunction_sb_cLsL::neuron0x1a92bf0() {
   double input = input0x1a92bf0();
   return (input * 1)+0;
}

double NNfunction_sb_cLsL::synapse0x1a63060() {
   return (neuron0x1a5dc60()*0.280673);
}

double NNfunction_sb_cLsL::synapse0x1a630a0() {
   return (neuron0x1a5df10()*-0.471492);
}

double NNfunction_sb_cLsL::synapse0x1a630e0() {
   return (neuron0x1a5e250()*0.133612);
}

double NNfunction_sb_cLsL::synapse0x1a63120() {
   return (neuron0x1a5e590()*0.693695);
}

double NNfunction_sb_cLsL::synapse0x1a63160() {
   return (neuron0x1a5e8d0()*-0.678217);
}

double NNfunction_sb_cLsL::synapse0x1a631a0() {
   return (neuron0x1a5ec10()*0.0318197);
}

double NNfunction_sb_cLsL::synapse0x1a631e0() {
   return (neuron0x1a5ef50()*-0.33874);
}

double NNfunction_sb_cLsL::synapse0x1a63220() {
   return (neuron0x1a5f290()*0.373004);
}

double NNfunction_sb_cLsL::synapse0x1a63260() {
   return (neuron0x1a5f5d0()*0.393021);
}

double NNfunction_sb_cLsL::synapse0x1a632a0() {
   return (neuron0x1a5f910()*0.619151);
}

double NNfunction_sb_cLsL::synapse0x1a632e0() {
   return (neuron0x1a5fc50()*0.412658);
}

double NNfunction_sb_cLsL::synapse0x1a63320() {
   return (neuron0x1a5ff90()*-0.323646);
}

double NNfunction_sb_cLsL::synapse0x1a63360() {
   return (neuron0x1a602d0()*1.55865);
}

double NNfunction_sb_cLsL::synapse0x1a633a0() {
   return (neuron0x1a60610()*0.382513);
}

double NNfunction_sb_cLsL::synapse0x1a633e0() {
   return (neuron0x1a60950()*0.125646);
}

double NNfunction_sb_cLsL::synapse0x1a63420() {
   return (neuron0x1a60c90()*-0.401469);
}

double NNfunction_sb_cLsL::synapse0x1a62eb0() {
   return (neuron0x1a60fd0()*0.570168);
}

double NNfunction_sb_cLsL::synapse0x1a62ef0() {
   return (neuron0x1a61530()*0.351655);
}

double NNfunction_sb_cLsL::synapse0x1819e20() {
   return (neuron0x1a61870()*0.0574493);
}

double NNfunction_sb_cLsL::synapse0x1819e60() {
   return (neuron0x1a61bb0()*0.626364);
}

double NNfunction_sb_cLsL::synapse0x1a63460() {
   return (neuron0x1a61ef0()*-0.0884115);
}

double NNfunction_sb_cLsL::synapse0x1a634a0() {
   return (neuron0x1a62230()*-0.362798);
}

double NNfunction_sb_cLsL::synapse0x1a634e0() {
   return (neuron0x1a62570()*0.216269);
}

double NNfunction_sb_cLsL::synapse0x1a63520() {
   return (neuron0x1a628b0()*-0.62371);
}

double NNfunction_sb_cLsL::synapse0x1a638a0() {
   return (neuron0x1a5dc60()*-0.000441244);
}

double NNfunction_sb_cLsL::synapse0x1a638e0() {
   return (neuron0x1a5df10()*0.0680484);
}

double NNfunction_sb_cLsL::synapse0x1a63920() {
   return (neuron0x1a5e250()*-0.10794);
}

double NNfunction_sb_cLsL::synapse0x1a63960() {
   return (neuron0x1a5e590()*-4.91294);
}

double NNfunction_sb_cLsL::synapse0x1a639a0() {
   return (neuron0x1a5e8d0()*0.0324321);
}

double NNfunction_sb_cLsL::synapse0x1a639e0() {
   return (neuron0x1a5ec10()*0.0119017);
}

double NNfunction_sb_cLsL::synapse0x1a63a20() {
   return (neuron0x1a5ef50()*0.0157906);
}

double NNfunction_sb_cLsL::synapse0x1a63a60() {
   return (neuron0x1a5f290()*-0.0900626);
}

double NNfunction_sb_cLsL::synapse0x1a63aa0() {
   return (neuron0x1a5f5d0()*0.155516);
}

double NNfunction_sb_cLsL::synapse0x1819c70() {
   return (neuron0x1a5f910()*0.0563739);
}

double NNfunction_sb_cLsL::synapse0x1819cb0() {
   return (neuron0x1a5fc50()*-0.203897);
}

double NNfunction_sb_cLsL::synapse0x1819cf0() {
   return (neuron0x1a5ff90()*0.105184);
}

double NNfunction_sb_cLsL::synapse0x1819d30() {
   return (neuron0x1a602d0()*0.797668);
}

double NNfunction_sb_cLsL::synapse0x1a63cf0() {
   return (neuron0x1a60610()*-0.180704);
}

double NNfunction_sb_cLsL::synapse0x1a63d30() {
   return (neuron0x1a60950()*-0.030519);
}

double NNfunction_sb_cLsL::synapse0x1a63d70() {
   return (neuron0x1a60c90()*-0.0125865);
}

double NNfunction_sb_cLsL::synapse0x1a636f0() {
   return (neuron0x1a60fd0()*-0.182745);
}

double NNfunction_sb_cLsL::synapse0x1a63730() {
   return (neuron0x1a61530()*-0.0294676);
}

double NNfunction_sb_cLsL::synapse0x1a63ec0() {
   return (neuron0x1a61870()*-0.0484277);
}

double NNfunction_sb_cLsL::synapse0x1a63f00() {
   return (neuron0x1a61bb0()*-0.24634);
}

double NNfunction_sb_cLsL::synapse0x1a63f40() {
   return (neuron0x1a61ef0()*-0.0687072);
}

double NNfunction_sb_cLsL::synapse0x1a63f80() {
   return (neuron0x1a62230()*-0.0443251);
}

double NNfunction_sb_cLsL::synapse0x1a63fc0() {
   return (neuron0x1a62570()*0.0939679);
}

double NNfunction_sb_cLsL::synapse0x1a64000() {
   return (neuron0x1a628b0()*0.0416682);
}

double NNfunction_sb_cLsL::synapse0x1a64380() {
   return (neuron0x1a5dc60()*0.126446);
}

double NNfunction_sb_cLsL::synapse0x1a643c0() {
   return (neuron0x1a5df10()*0.541277);
}

double NNfunction_sb_cLsL::synapse0x1a64400() {
   return (neuron0x1a5e250()*-0.00318768);
}

double NNfunction_sb_cLsL::synapse0x1a64440() {
   return (neuron0x1a5e590()*0.378911);
}

double NNfunction_sb_cLsL::synapse0x1a64480() {
   return (neuron0x1a5e8d0()*-0.655518);
}

double NNfunction_sb_cLsL::synapse0x1a644c0() {
   return (neuron0x1a5ec10()*0.409126);
}

double NNfunction_sb_cLsL::synapse0x1a64500() {
   return (neuron0x1a5ef50()*-0.810722);
}

double NNfunction_sb_cLsL::synapse0x1a64540() {
   return (neuron0x1a5f290()*0.135866);
}

double NNfunction_sb_cLsL::synapse0x1a64580() {
   return (neuron0x1a5f5d0()*-0.332816);
}

double NNfunction_sb_cLsL::synapse0x1a645c0() {
   return (neuron0x1a5f910()*1.1475);
}

double NNfunction_sb_cLsL::synapse0x1a64600() {
   return (neuron0x1a5fc50()*0.0695244);
}

double NNfunction_sb_cLsL::synapse0x1a64640() {
   return (neuron0x1a5ff90()*-1.21733);
}

double NNfunction_sb_cLsL::synapse0x1a64680() {
   return (neuron0x1a602d0()*1.09617);
}

double NNfunction_sb_cLsL::synapse0x1a646c0() {
   return (neuron0x1a60610()*0.0686535);
}

double NNfunction_sb_cLsL::synapse0x1a64700() {
   return (neuron0x1a60950()*-1.42627);
}

double NNfunction_sb_cLsL::synapse0x1a64740() {
   return (neuron0x1a60c90()*-0.440531);
}

double NNfunction_sb_cLsL::synapse0x1a641d0() {
   return (neuron0x1a60fd0()*0.658613);
}

double NNfunction_sb_cLsL::synapse0x1a64210() {
   return (neuron0x1a61530()*-0.487235);
}

double NNfunction_sb_cLsL::synapse0x181a4d0() {
   return (neuron0x1a61870()*0.141111);
}

double NNfunction_sb_cLsL::synapse0x1827da0() {
   return (neuron0x1a61bb0()*0.45199);
}

double NNfunction_sb_cLsL::synapse0x1827de0() {
   return (neuron0x1a61ef0()*0.208712);
}

double NNfunction_sb_cLsL::synapse0x1a66670() {
   return (neuron0x1a62230()*-0.321886);
}

double NNfunction_sb_cLsL::synapse0x1a666b0() {
   return (neuron0x1a62570()*0.289915);
}

double NNfunction_sb_cLsL::synapse0x1a5d9a0() {
   return (neuron0x1a628b0()*-0.725585);
}

double NNfunction_sb_cLsL::synapse0x1a5da70() {
   return (neuron0x1a5dc60()*0.0990949);
}

double NNfunction_sb_cLsL::synapse0x1828620() {
   return (neuron0x1a5df10()*-0.0545181);
}

double NNfunction_sb_cLsL::synapse0x1a63c70() {
   return (neuron0x1a5e250()*0.257037);
}

double NNfunction_sb_cLsL::synapse0x1a63cb0() {
   return (neuron0x1a5e590()*-4.56502);
}

double NNfunction_sb_cLsL::synapse0x1a64890() {
   return (neuron0x1a5e8d0()*0.0367603);
}

double NNfunction_sb_cLsL::synapse0x1a648d0() {
   return (neuron0x1a5ec10()*-0.047215);
}

double NNfunction_sb_cLsL::synapse0x1a64910() {
   return (neuron0x1a5ef50()*0.0206811);
}

double NNfunction_sb_cLsL::synapse0x1a64950() {
   return (neuron0x1a5f290()*0.0707322);
}

double NNfunction_sb_cLsL::synapse0x1a64990() {
   return (neuron0x1a5f5d0()*-0.0029574);
}

double NNfunction_sb_cLsL::synapse0x1a649d0() {
   return (neuron0x1a5f910()*-0.0652744);
}

double NNfunction_sb_cLsL::synapse0x1a64a10() {
   return (neuron0x1a5fc50()*0.0252339);
}

double NNfunction_sb_cLsL::synapse0x1a64a50() {
   return (neuron0x1a5ff90()*0.0694777);
}

double NNfunction_sb_cLsL::synapse0x1a64a90() {
   return (neuron0x1a602d0()*-0.0641242);
}

double NNfunction_sb_cLsL::synapse0x1a64ad0() {
   return (neuron0x1a60610()*0.0377145);
}

double NNfunction_sb_cLsL::synapse0x1a64b10() {
   return (neuron0x1a60950()*0.0524833);
}

double NNfunction_sb_cLsL::synapse0x1a64b50() {
   return (neuron0x1a60c90()*-0.0164048);
}

double NNfunction_sb_cLsL::synapse0x1a5d9e0() {
   return (neuron0x1a60fd0()*0.0896477);
}

double NNfunction_sb_cLsL::synapse0x1a5da20() {
   return (neuron0x1a61530()*0.0664915);
}

double NNfunction_sb_cLsL::synapse0x1a64ca0() {
   return (neuron0x1a61870()*-0.0673824);
}

double NNfunction_sb_cLsL::synapse0x1a64ce0() {
   return (neuron0x1a61bb0()*0.0440296);
}

double NNfunction_sb_cLsL::synapse0x1a64d20() {
   return (neuron0x1a61ef0()*0.0438894);
}

double NNfunction_sb_cLsL::synapse0x1a64d60() {
   return (neuron0x1a62230()*0.04018);
}

double NNfunction_sb_cLsL::synapse0x1a64da0() {
   return (neuron0x1a62570()*-0.0405984);
}

double NNfunction_sb_cLsL::synapse0x1a64de0() {
   return (neuron0x1a628b0()*0.0297531);
}

double NNfunction_sb_cLsL::synapse0x1a65160() {
   return (neuron0x1a5dc60()*0.444455);
}

double NNfunction_sb_cLsL::synapse0x1a651a0() {
   return (neuron0x1a5df10()*0.0600361);
}

double NNfunction_sb_cLsL::synapse0x1a651e0() {
   return (neuron0x1a5e250()*0.186583);
}

double NNfunction_sb_cLsL::synapse0x1a65220() {
   return (neuron0x1a5e590()*-0.965969);
}

double NNfunction_sb_cLsL::synapse0x1a65260() {
   return (neuron0x1a5e8d0()*-0.0175634);
}

double NNfunction_sb_cLsL::synapse0x1a652a0() {
   return (neuron0x1a5ec10()*-0.516074);
}

double NNfunction_sb_cLsL::synapse0x1a652e0() {
   return (neuron0x1a5ef50()*-0.0111932);
}

double NNfunction_sb_cLsL::synapse0x1a65320() {
   return (neuron0x1a5f290()*-0.782802);
}

double NNfunction_sb_cLsL::synapse0x1a65360() {
   return (neuron0x1a5f5d0()*-0.304397);
}

double NNfunction_sb_cLsL::synapse0x1a653a0() {
   return (neuron0x1a5f910()*-0.253253);
}

double NNfunction_sb_cLsL::synapse0x1a653e0() {
   return (neuron0x1a5fc50()*0.1464);
}

double NNfunction_sb_cLsL::synapse0x1a65420() {
   return (neuron0x1a5ff90()*-0.744318);
}

double NNfunction_sb_cLsL::synapse0x1a65460() {
   return (neuron0x1a602d0()*-0.539012);
}

double NNfunction_sb_cLsL::synapse0x1a654a0() {
   return (neuron0x1a60610()*-0.860169);
}

double NNfunction_sb_cLsL::synapse0x1a654e0() {
   return (neuron0x1a60950()*1.02574);
}

double NNfunction_sb_cLsL::synapse0x1a65520() {
   return (neuron0x1a60c90()*-1.53381);
}

double NNfunction_sb_cLsL::synapse0x1a65670() {
   return (neuron0x1a60fd0()*-0.981545);
}

double NNfunction_sb_cLsL::synapse0x1a64fb0() {
   return (neuron0x1a61530()*-0.383774);
}

double NNfunction_sb_cLsL::synapse0x1a64ff0() {
   return (neuron0x1a61870()*-0.854118);
}

double NNfunction_sb_cLsL::synapse0x1a667b0() {
   return (neuron0x1a61bb0()*0.0413669);
}

double NNfunction_sb_cLsL::synapse0x1a667f0() {
   return (neuron0x1a61ef0()*0.00137068);
}

double NNfunction_sb_cLsL::synapse0x1a66830() {
   return (neuron0x1a62230()*-0.0192439);
}

double NNfunction_sb_cLsL::synapse0x1a66870() {
   return (neuron0x1a62570()*0.120518);
}

double NNfunction_sb_cLsL::synapse0x1a668b0() {
   return (neuron0x1a628b0()*0.671739);
}

double NNfunction_sb_cLsL::synapse0x1a66c30() {
   return (neuron0x1a5dc60()*0.717946);
}

double NNfunction_sb_cLsL::synapse0x1a66c70() {
   return (neuron0x1a5df10()*-1.25948);
}

double NNfunction_sb_cLsL::synapse0x1a66cb0() {
   return (neuron0x1a5e250()*-0.230052);
}

double NNfunction_sb_cLsL::synapse0x1a66cf0() {
   return (neuron0x1a5e590()*-0.134896);
}

double NNfunction_sb_cLsL::synapse0x1a66d30() {
   return (neuron0x1a5e8d0()*0.772238);
}

double NNfunction_sb_cLsL::synapse0x1a66d70() {
   return (neuron0x1a5ec10()*-0.0315138);
}

double NNfunction_sb_cLsL::synapse0x1a66db0() {
   return (neuron0x1a5ef50()*0.135516);
}

double NNfunction_sb_cLsL::synapse0x1a66df0() {
   return (neuron0x1a5f290()*-0.370331);
}

double NNfunction_sb_cLsL::synapse0x1a66e30() {
   return (neuron0x1a5f5d0()*-0.81622);
}

double NNfunction_sb_cLsL::synapse0x18280f0() {
   return (neuron0x1a5f910()*0.903936);
}

double NNfunction_sb_cLsL::synapse0x1828130() {
   return (neuron0x1a5fc50()*0.308873);
}

double NNfunction_sb_cLsL::synapse0x1828170() {
   return (neuron0x1a5ff90()*0.258082);
}

double NNfunction_sb_cLsL::synapse0x18281b0() {
   return (neuron0x1a602d0()*-0.981398);
}

double NNfunction_sb_cLsL::synapse0x18281f0() {
   return (neuron0x1a60610()*-0.248436);
}

double NNfunction_sb_cLsL::synapse0x1828230() {
   return (neuron0x1a60950()*0.520175);
}

double NNfunction_sb_cLsL::synapse0x1828270() {
   return (neuron0x1a60c90()*-0.628069);
}

double NNfunction_sb_cLsL::synapse0x1a66a80() {
   return (neuron0x1a60fd0()*0.294374);
}

double NNfunction_sb_cLsL::synapse0x1a66ac0() {
   return (neuron0x1a61530()*0.790553);
}

double NNfunction_sb_cLsL::synapse0x18283c0() {
   return (neuron0x1a61870()*-0.281582);
}

double NNfunction_sb_cLsL::synapse0x1828400() {
   return (neuron0x1a61bb0()*0.402502);
}

double NNfunction_sb_cLsL::synapse0x1828440() {
   return (neuron0x1a61ef0()*-0.639922);
}

double NNfunction_sb_cLsL::synapse0x1828480() {
   return (neuron0x1a62230()*0.450537);
}

double NNfunction_sb_cLsL::synapse0x18284c0() {
   return (neuron0x1a62570()*0.472254);
}

double NNfunction_sb_cLsL::synapse0x1a67680() {
   return (neuron0x1a628b0()*0.0313184);
}

double NNfunction_sb_cLsL::synapse0x1a67a00() {
   return (neuron0x1a5dc60()*-0.0157127);
}

double NNfunction_sb_cLsL::synapse0x1a67a40() {
   return (neuron0x1a5df10()*0.0158549);
}

double NNfunction_sb_cLsL::synapse0x1a67a80() {
   return (neuron0x1a5e250()*-0.448932);
}

double NNfunction_sb_cLsL::synapse0x1a67ac0() {
   return (neuron0x1a5e590()*3.95048);
}

double NNfunction_sb_cLsL::synapse0x1a67b00() {
   return (neuron0x1a5e8d0()*-0.0276323);
}

double NNfunction_sb_cLsL::synapse0x1a67b40() {
   return (neuron0x1a5ec10()*-0.0227685);
}

double NNfunction_sb_cLsL::synapse0x1a67b80() {
   return (neuron0x1a5ef50()*0.00761285);
}

double NNfunction_sb_cLsL::synapse0x1a67bc0() {
   return (neuron0x1a5f290()*-0.0168478);
}

double NNfunction_sb_cLsL::synapse0x1a67c00() {
   return (neuron0x1a5f5d0()*-0.0369344);
}

double NNfunction_sb_cLsL::synapse0x1a67c40() {
   return (neuron0x1a5f910()*0.013634);
}

double NNfunction_sb_cLsL::synapse0x1a67c80() {
   return (neuron0x1a5fc50()*-0.0118297);
}

double NNfunction_sb_cLsL::synapse0x1a67cc0() {
   return (neuron0x1a5ff90()*0.0384447);
}

double NNfunction_sb_cLsL::synapse0x1a67d00() {
   return (neuron0x1a602d0()*-1.25174);
}

double NNfunction_sb_cLsL::synapse0x1a67d40() {
   return (neuron0x1a60610()*-0.00322205);
}

double NNfunction_sb_cLsL::synapse0x1a67d80() {
   return (neuron0x1a60950()*0.0922109);
}

double NNfunction_sb_cLsL::synapse0x1a67dc0() {
   return (neuron0x1a60c90()*0.0570252);
}

double NNfunction_sb_cLsL::synapse0x1a67850() {
   return (neuron0x1a60fd0()*-0.0708437);
}

double NNfunction_sb_cLsL::synapse0x1a67890() {
   return (neuron0x1a61530()*0.0129078);
}

double NNfunction_sb_cLsL::synapse0x1a67f10() {
   return (neuron0x1a61870()*0.0871012);
}

double NNfunction_sb_cLsL::synapse0x1a67f50() {
   return (neuron0x1a61bb0()*0.00398376);
}

double NNfunction_sb_cLsL::synapse0x1a67f90() {
   return (neuron0x1a61ef0()*-0.0138747);
}

double NNfunction_sb_cLsL::synapse0x1a67fd0() {
   return (neuron0x1a62230()*0.00104867);
}

double NNfunction_sb_cLsL::synapse0x1a68010() {
   return (neuron0x1a62570()*0.015665);
}

double NNfunction_sb_cLsL::synapse0x1a68050() {
   return (neuron0x1a628b0()*0.0121973);
}

double NNfunction_sb_cLsL::synapse0x1a683d0() {
   return (neuron0x1a5dc60()*-0.0542624);
}

double NNfunction_sb_cLsL::synapse0x1a68410() {
   return (neuron0x1a5df10()*0.0909085);
}

double NNfunction_sb_cLsL::synapse0x1a68450() {
   return (neuron0x1a5e250()*-0.124969);
}

double NNfunction_sb_cLsL::synapse0x1a68490() {
   return (neuron0x1a5e590()*0.20172);
}

double NNfunction_sb_cLsL::synapse0x1a684d0() {
   return (neuron0x1a5e8d0()*-0.270616);
}

double NNfunction_sb_cLsL::synapse0x1a68510() {
   return (neuron0x1a5ec10()*0.0502757);
}

double NNfunction_sb_cLsL::synapse0x1a68550() {
   return (neuron0x1a5ef50()*0.206174);
}

double NNfunction_sb_cLsL::synapse0x1a68590() {
   return (neuron0x1a5f290()*0.212503);
}

double NNfunction_sb_cLsL::synapse0x1a685d0() {
   return (neuron0x1a5f5d0()*-0.309515);
}

double NNfunction_sb_cLsL::synapse0x1a68610() {
   return (neuron0x1a5f910()*-0.877591);
}

double NNfunction_sb_cLsL::synapse0x1a68650() {
   return (neuron0x1a5fc50()*-0.30302);
}

double NNfunction_sb_cLsL::synapse0x1a68690() {
   return (neuron0x1a5ff90()*0.510814);
}

double NNfunction_sb_cLsL::synapse0x1a686d0() {
   return (neuron0x1a602d0()*-0.119322);
}

double NNfunction_sb_cLsL::synapse0x1a68710() {
   return (neuron0x1a60610()*-0.0477245);
}

double NNfunction_sb_cLsL::synapse0x1a68750() {
   return (neuron0x1a60950()*0.0382525);
}

double NNfunction_sb_cLsL::synapse0x1a68790() {
   return (neuron0x1a60c90()*-0.282961);
}

double NNfunction_sb_cLsL::synapse0x1a68220() {
   return (neuron0x1a60fd0()*0.618278);
}

double NNfunction_sb_cLsL::synapse0x1a68260() {
   return (neuron0x1a61530()*0.0439863);
}

double NNfunction_sb_cLsL::synapse0x1a688e0() {
   return (neuron0x1a61870()*-0.421179);
}

double NNfunction_sb_cLsL::synapse0x1a68920() {
   return (neuron0x1a61bb0()*0.0991583);
}

double NNfunction_sb_cLsL::synapse0x1a68960() {
   return (neuron0x1a61ef0()*-0.238626);
}

double NNfunction_sb_cLsL::synapse0x1a689a0() {
   return (neuron0x1a62230()*0.479929);
}

double NNfunction_sb_cLsL::synapse0x1a689e0() {
   return (neuron0x1a62570()*-0.429751);
}

double NNfunction_sb_cLsL::synapse0x1a68a20() {
   return (neuron0x1a628b0()*0.384934);
}

double NNfunction_sb_cLsL::synapse0x1a61420() {
   return (neuron0x1a5dc60()*0.051372);
}

double NNfunction_sb_cLsL::synapse0x1a61460() {
   return (neuron0x1a5df10()*0.501822);
}

double NNfunction_sb_cLsL::synapse0x1a614a0() {
   return (neuron0x1a5e250()*-0.0746566);
}

double NNfunction_sb_cLsL::synapse0x1a614e0() {
   return (neuron0x1a5e590()*-1.31885);
}

double NNfunction_sb_cLsL::synapse0x1a68fb0() {
   return (neuron0x1a5e8d0()*0.669977);
}

double NNfunction_sb_cLsL::synapse0x1a68ff0() {
   return (neuron0x1a5ec10()*-0.143269);
}

double NNfunction_sb_cLsL::synapse0x1a69030() {
   return (neuron0x1a5ef50()*0.778357);
}

double NNfunction_sb_cLsL::synapse0x1a69070() {
   return (neuron0x1a5f290()*-0.616103);
}

double NNfunction_sb_cLsL::synapse0x1a690b0() {
   return (neuron0x1a5f5d0()*0.72062);
}

double NNfunction_sb_cLsL::synapse0x1a690f0() {
   return (neuron0x1a5f910()*0.864642);
}

double NNfunction_sb_cLsL::synapse0x1a69130() {
   return (neuron0x1a5fc50()*0.435834);
}

double NNfunction_sb_cLsL::synapse0x1a69170() {
   return (neuron0x1a5ff90()*-0.349496);
}

double NNfunction_sb_cLsL::synapse0x1a691b0() {
   return (neuron0x1a602d0()*-1.07935);
}

double NNfunction_sb_cLsL::synapse0x1a691f0() {
   return (neuron0x1a60610()*-0.295168);
}

double NNfunction_sb_cLsL::synapse0x1a69230() {
   return (neuron0x1a60950()*1.86741);
}

double NNfunction_sb_cLsL::synapse0x1a69270() {
   return (neuron0x1a60c90()*-0.103357);
}

double NNfunction_sb_cLsL::synapse0x1a68bf0() {
   return (neuron0x1a60fd0()*-0.234749);
}

double NNfunction_sb_cLsL::synapse0x1a68c30() {
   return (neuron0x1a61530()*-0.138788);
}

double NNfunction_sb_cLsL::synapse0x1a693c0() {
   return (neuron0x1a61870()*0.548771);
}

double NNfunction_sb_cLsL::synapse0x1a69400() {
   return (neuron0x1a61bb0()*-1.09345);
}

double NNfunction_sb_cLsL::synapse0x1a69440() {
   return (neuron0x1a61ef0()*0.692926);
}

double NNfunction_sb_cLsL::synapse0x1a69480() {
   return (neuron0x1a62230()*-0.835941);
}

double NNfunction_sb_cLsL::synapse0x1a694c0() {
   return (neuron0x1a62570()*0.508716);
}

double NNfunction_sb_cLsL::synapse0x1a69500() {
   return (neuron0x1a628b0()*-0.301306);
}

double NNfunction_sb_cLsL::synapse0x1a69880() {
   return (neuron0x1a5dc60()*0.011743);
}

double NNfunction_sb_cLsL::synapse0x1a698c0() {
   return (neuron0x1a5df10()*-0.044668);
}

double NNfunction_sb_cLsL::synapse0x1a69900() {
   return (neuron0x1a5e250()*0.0156164);
}

double NNfunction_sb_cLsL::synapse0x1a69940() {
   return (neuron0x1a5e590()*1.76704);
}

double NNfunction_sb_cLsL::synapse0x1a69980() {
   return (neuron0x1a5e8d0()*-0.0694448);
}

double NNfunction_sb_cLsL::synapse0x1a699c0() {
   return (neuron0x1a5ec10()*-0.000422086);
}

double NNfunction_sb_cLsL::synapse0x1a69a00() {
   return (neuron0x1a5ef50()*-0.0971622);
}

double NNfunction_sb_cLsL::synapse0x1a69a40() {
   return (neuron0x1a5f290()*0.0257182);
}

double NNfunction_sb_cLsL::synapse0x1a69a80() {
   return (neuron0x1a5f5d0()*0.0167845);
}

double NNfunction_sb_cLsL::synapse0x1a69ac0() {
   return (neuron0x1a5f910()*0.0444189);
}

double NNfunction_sb_cLsL::synapse0x1a69b00() {
   return (neuron0x1a5fc50()*-0.068406);
}

double NNfunction_sb_cLsL::synapse0x1a69b40() {
   return (neuron0x1a5ff90()*0.108744);
}

double NNfunction_sb_cLsL::synapse0x1a69b80() {
   return (neuron0x1a602d0()*0.112202);
}

double NNfunction_sb_cLsL::synapse0x1a69bc0() {
   return (neuron0x1a60610()*0.00164123);
}

double NNfunction_sb_cLsL::synapse0x1a69c00() {
   return (neuron0x1a60950()*-0.0495832);
}

double NNfunction_sb_cLsL::synapse0x1a69c40() {
   return (neuron0x1a60c90()*-0.00237889);
}

double NNfunction_sb_cLsL::synapse0x1a696d0() {
   return (neuron0x1a60fd0()*-0.0813876);
}

double NNfunction_sb_cLsL::synapse0x1a69710() {
   return (neuron0x1a61530()*-0.0264804);
}

double NNfunction_sb_cLsL::synapse0x1a69d90() {
   return (neuron0x1a61870()*0.0962288);
}

double NNfunction_sb_cLsL::synapse0x1a69dd0() {
   return (neuron0x1a61bb0()*-0.190451);
}

double NNfunction_sb_cLsL::synapse0x1a69e10() {
   return (neuron0x1a61ef0()*0.0205263);
}

double NNfunction_sb_cLsL::synapse0x1a69e50() {
   return (neuron0x1a62230()*-0.0621721);
}

double NNfunction_sb_cLsL::synapse0x1a69e90() {
   return (neuron0x1a62570()*0.0750905);
}

double NNfunction_sb_cLsL::synapse0x1a69ed0() {
   return (neuron0x1a628b0()*0.00696221);
}

double NNfunction_sb_cLsL::synapse0x1a6a250() {
   return (neuron0x1a5dc60()*-0.0904481);
}

double NNfunction_sb_cLsL::synapse0x1a6a290() {
   return (neuron0x1a5df10()*-0.0166579);
}

double NNfunction_sb_cLsL::synapse0x1a6a2d0() {
   return (neuron0x1a5e250()*-0.00950759);
}

double NNfunction_sb_cLsL::synapse0x1a6a310() {
   return (neuron0x1a5e590()*2.63605);
}

double NNfunction_sb_cLsL::synapse0x1a6a350() {
   return (neuron0x1a5e8d0()*-0.16293);
}

double NNfunction_sb_cLsL::synapse0x1a6a390() {
   return (neuron0x1a5ec10()*0.0421148);
}

double NNfunction_sb_cLsL::synapse0x1a6a3d0() {
   return (neuron0x1a5ef50()*-0.140484);
}

double NNfunction_sb_cLsL::synapse0x1a6a410() {
   return (neuron0x1a5f290()*0.0576919);
}

double NNfunction_sb_cLsL::synapse0x1a6a450() {
   return (neuron0x1a5f5d0()*-0.00552791);
}

double NNfunction_sb_cLsL::synapse0x1a6a490() {
   return (neuron0x1a5f910()*-0.0845389);
}

double NNfunction_sb_cLsL::synapse0x1a6a4d0() {
   return (neuron0x1a5fc50()*-0.0228896);
}

double NNfunction_sb_cLsL::synapse0x1a6a510() {
   return (neuron0x1a5ff90()*0.0909557);
}

double NNfunction_sb_cLsL::synapse0x1a6a550() {
   return (neuron0x1a602d0()*0.665021);
}

double NNfunction_sb_cLsL::synapse0x1a6a590() {
   return (neuron0x1a60610()*-0.0254376);
}

double NNfunction_sb_cLsL::synapse0x1a6a5d0() {
   return (neuron0x1a60950()*-0.0935539);
}

double NNfunction_sb_cLsL::synapse0x1a6a610() {
   return (neuron0x1a60c90()*-0.127769);
}

double NNfunction_sb_cLsL::synapse0x1a6a0a0() {
   return (neuron0x1a60fd0()*-0.234559);
}

double NNfunction_sb_cLsL::synapse0x1a6a0e0() {
   return (neuron0x1a61530()*-0.185546);
}

double NNfunction_sb_cLsL::synapse0x1a66e70() {
   return (neuron0x1a61870()*-0.0652445);
}

double NNfunction_sb_cLsL::synapse0x1a66eb0() {
   return (neuron0x1a61bb0()*0.202838);
}

double NNfunction_sb_cLsL::synapse0x1a66ef0() {
   return (neuron0x1a61ef0()*0.0681589);
}

double NNfunction_sb_cLsL::synapse0x1a66f30() {
   return (neuron0x1a62230()*-0.0511483);
}

double NNfunction_sb_cLsL::synapse0x1a66f70() {
   return (neuron0x1a62570()*0.0510101);
}

double NNfunction_sb_cLsL::synapse0x1a66fb0() {
   return (neuron0x1a628b0()*0.147524);
}

double NNfunction_sb_cLsL::synapse0x1a67330() {
   return (neuron0x1a5dc60()*0.504316);
}

double NNfunction_sb_cLsL::synapse0x1a67370() {
   return (neuron0x1a5df10()*-0.00736912);
}

double NNfunction_sb_cLsL::synapse0x1a673b0() {
   return (neuron0x1a5e250()*-0.262652);
}

double NNfunction_sb_cLsL::synapse0x1a673f0() {
   return (neuron0x1a5e590()*-0.010366);
}

double NNfunction_sb_cLsL::synapse0x1a67430() {
   return (neuron0x1a5e8d0()*-0.816094);
}

double NNfunction_sb_cLsL::synapse0x1a67470() {
   return (neuron0x1a5ec10()*-0.595883);
}

double NNfunction_sb_cLsL::synapse0x1a674b0() {
   return (neuron0x1a5ef50()*-0.44558);
}

double NNfunction_sb_cLsL::synapse0x1a674f0() {
   return (neuron0x1a5f290()*-0.345063);
}

double NNfunction_sb_cLsL::synapse0x1a67530() {
   return (neuron0x1a5f5d0()*-0.3157);
}

double NNfunction_sb_cLsL::synapse0x1a67570() {
   return (neuron0x1a5f910()*0.252177);
}

double NNfunction_sb_cLsL::synapse0x1a675b0() {
   return (neuron0x1a5fc50()*-1.17092);
}

double NNfunction_sb_cLsL::synapse0x1a675f0() {
   return (neuron0x1a5ff90()*0.479052);
}

double NNfunction_sb_cLsL::synapse0x1a67630() {
   return (neuron0x1a602d0()*0.926082);
}

double NNfunction_sb_cLsL::synapse0x1a6b770() {
   return (neuron0x1a60610()*-0.251959);
}

double NNfunction_sb_cLsL::synapse0x1a6b7b0() {
   return (neuron0x1a60950()*-0.754762);
}

double NNfunction_sb_cLsL::synapse0x1a6b7f0() {
   return (neuron0x1a60c90()*-0.00343328);
}

double NNfunction_sb_cLsL::synapse0x1a67180() {
   return (neuron0x1a60fd0()*-0.00519899);
}

double NNfunction_sb_cLsL::synapse0x1a671c0() {
   return (neuron0x1a61530()*0.713032);
}

double NNfunction_sb_cLsL::synapse0x1a6b940() {
   return (neuron0x1a61870()*0.674186);
}

double NNfunction_sb_cLsL::synapse0x1a6b980() {
   return (neuron0x1a61bb0()*0.664892);
}

double NNfunction_sb_cLsL::synapse0x1a6b9c0() {
   return (neuron0x1a61ef0()*-0.635222);
}

double NNfunction_sb_cLsL::synapse0x1a6ba00() {
   return (neuron0x1a62230()*0.0604894);
}

double NNfunction_sb_cLsL::synapse0x1a6ba40() {
   return (neuron0x1a62570()*-0.216878);
}

double NNfunction_sb_cLsL::synapse0x1a6ba80() {
   return (neuron0x1a628b0()*-0.0539442);
}

double NNfunction_sb_cLsL::synapse0x1a6be00() {
   return (neuron0x1a5dc60()*0.288217);
}

double NNfunction_sb_cLsL::synapse0x1a6be40() {
   return (neuron0x1a5df10()*0.0220378);
}

double NNfunction_sb_cLsL::synapse0x1a6be80() {
   return (neuron0x1a5e250()*0.784899);
}

double NNfunction_sb_cLsL::synapse0x1a6bec0() {
   return (neuron0x1a5e590()*0.0840964);
}

double NNfunction_sb_cLsL::synapse0x1a6bf00() {
   return (neuron0x1a5e8d0()*0.485663);
}

double NNfunction_sb_cLsL::synapse0x1a6bf40() {
   return (neuron0x1a5ec10()*0.71998);
}

double NNfunction_sb_cLsL::synapse0x1a6bf80() {
   return (neuron0x1a5ef50()*-0.199868);
}

double NNfunction_sb_cLsL::synapse0x1a6bfc0() {
   return (neuron0x1a5f290()*-0.444851);
}

double NNfunction_sb_cLsL::synapse0x1a6c000() {
   return (neuron0x1a5f5d0()*0.306993);
}

double NNfunction_sb_cLsL::synapse0x1a6c040() {
   return (neuron0x1a5f910()*0.569532);
}

double NNfunction_sb_cLsL::synapse0x1a6c080() {
   return (neuron0x1a5fc50()*-0.340225);
}

double NNfunction_sb_cLsL::synapse0x1a6c0c0() {
   return (neuron0x1a5ff90()*-0.649737);
}

double NNfunction_sb_cLsL::synapse0x1a6c100() {
   return (neuron0x1a602d0()*-0.834058);
}

double NNfunction_sb_cLsL::synapse0x1a6c140() {
   return (neuron0x1a60610()*0.633456);
}

double NNfunction_sb_cLsL::synapse0x1a6c180() {
   return (neuron0x1a60950()*-1.06391);
}

double NNfunction_sb_cLsL::synapse0x1a6c1c0() {
   return (neuron0x1a60c90()*0.25801);
}

double NNfunction_sb_cLsL::synapse0x1a6bc50() {
   return (neuron0x1a60fd0()*0.820222);
}

double NNfunction_sb_cLsL::synapse0x1a6bc90() {
   return (neuron0x1a61530()*-0.313872);
}

double NNfunction_sb_cLsL::synapse0x1a6c310() {
   return (neuron0x1a61870()*0.195731);
}

double NNfunction_sb_cLsL::synapse0x1a6c350() {
   return (neuron0x1a61bb0()*0.487843);
}

double NNfunction_sb_cLsL::synapse0x1a6c390() {
   return (neuron0x1a61ef0()*-0.23018);
}

double NNfunction_sb_cLsL::synapse0x1a6c3d0() {
   return (neuron0x1a62230()*-0.437158);
}

double NNfunction_sb_cLsL::synapse0x1a6c410() {
   return (neuron0x1a62570()*0.451596);
}

double NNfunction_sb_cLsL::synapse0x1a6c450() {
   return (neuron0x1a628b0()*-0.359805);
}

double NNfunction_sb_cLsL::synapse0x1a6c7d0() {
   return (neuron0x1a5dc60()*-0.00441482);
}

double NNfunction_sb_cLsL::synapse0x1a6c810() {
   return (neuron0x1a5df10()*-0.0199882);
}

double NNfunction_sb_cLsL::synapse0x1a6c850() {
   return (neuron0x1a5e250()*-0.0871364);
}

double NNfunction_sb_cLsL::synapse0x1a6c890() {
   return (neuron0x1a5e590()*1.6283);
}

double NNfunction_sb_cLsL::synapse0x1a6c8d0() {
   return (neuron0x1a5e8d0()*-0.0655046);
}

double NNfunction_sb_cLsL::synapse0x1a6c910() {
   return (neuron0x1a5ec10()*-0.0371048);
}

double NNfunction_sb_cLsL::synapse0x1a6c950() {
   return (neuron0x1a5ef50()*-0.0576546);
}

double NNfunction_sb_cLsL::synapse0x1a6c990() {
   return (neuron0x1a5f290()*0.00478756);
}

double NNfunction_sb_cLsL::synapse0x1a6c9d0() {
   return (neuron0x1a5f5d0()*-0.00673759);
}

double NNfunction_sb_cLsL::synapse0x1a6ca10() {
   return (neuron0x1a5f910()*-0.0252343);
}

double NNfunction_sb_cLsL::synapse0x1a6ca50() {
   return (neuron0x1a5fc50()*-0.027343);
}

double NNfunction_sb_cLsL::synapse0x1a6ca90() {
   return (neuron0x1a5ff90()*0.0159024);
}

double NNfunction_sb_cLsL::synapse0x1a6cad0() {
   return (neuron0x1a602d0()*0.461891);
}

double NNfunction_sb_cLsL::synapse0x1a6cb10() {
   return (neuron0x1a60610()*-0.0690622);
}

double NNfunction_sb_cLsL::synapse0x1a6cb50() {
   return (neuron0x1a60950()*-0.0566791);
}

double NNfunction_sb_cLsL::synapse0x1a6cb90() {
   return (neuron0x1a60c90()*-0.0650513);
}

double NNfunction_sb_cLsL::synapse0x1a6c620() {
   return (neuron0x1a60fd0()*-0.171161);
}

double NNfunction_sb_cLsL::synapse0x1a6c660() {
   return (neuron0x1a61530()*-0.0852779);
}

double NNfunction_sb_cLsL::synapse0x1a6cce0() {
   return (neuron0x1a61870()*-0.0564632);
}

double NNfunction_sb_cLsL::synapse0x1a6cd20() {
   return (neuron0x1a61bb0()*0.119141);
}

double NNfunction_sb_cLsL::synapse0x1a6cd60() {
   return (neuron0x1a61ef0()*0.0482446);
}

double NNfunction_sb_cLsL::synapse0x1a6cda0() {
   return (neuron0x1a62230()*-0.0383952);
}

double NNfunction_sb_cLsL::synapse0x1a6cde0() {
   return (neuron0x1a62570()*0.0296302);
}

double NNfunction_sb_cLsL::synapse0x1a6ce20() {
   return (neuron0x1a628b0()*0.0860792);
}

double NNfunction_sb_cLsL::synapse0x1a6d1a0() {
   return (neuron0x1a5dc60()*-0.128752);
}

double NNfunction_sb_cLsL::synapse0x1a6d1e0() {
   return (neuron0x1a5df10()*0.451066);
}

double NNfunction_sb_cLsL::synapse0x1a6d220() {
   return (neuron0x1a5e250()*0.659971);
}

double NNfunction_sb_cLsL::synapse0x1a6d260() {
   return (neuron0x1a5e590()*0.117846);
}

double NNfunction_sb_cLsL::synapse0x1a6d2a0() {
   return (neuron0x1a5e8d0()*0.408939);
}

double NNfunction_sb_cLsL::synapse0x1a6d2e0() {
   return (neuron0x1a5ec10()*-0.14784);
}

double NNfunction_sb_cLsL::synapse0x1a6d320() {
   return (neuron0x1a5ef50()*-0.0905567);
}

double NNfunction_sb_cLsL::synapse0x1a6d360() {
   return (neuron0x1a5f290()*0.500688);
}

double NNfunction_sb_cLsL::synapse0x1a6d3a0() {
   return (neuron0x1a5f5d0()*0.542969);
}

double NNfunction_sb_cLsL::synapse0x1a6d3e0() {
   return (neuron0x1a5f910()*0.336505);
}

double NNfunction_sb_cLsL::synapse0x1a6d420() {
   return (neuron0x1a5fc50()*0.508842);
}

double NNfunction_sb_cLsL::synapse0x1a6d460() {
   return (neuron0x1a5ff90()*0.513592);
}

double NNfunction_sb_cLsL::synapse0x1a6d4a0() {
   return (neuron0x1a602d0()*-0.959762);
}

double NNfunction_sb_cLsL::synapse0x1a6d4e0() {
   return (neuron0x1a60610()*0.371312);
}

double NNfunction_sb_cLsL::synapse0x1a6d520() {
   return (neuron0x1a60950()*-0.507777);
}

double NNfunction_sb_cLsL::synapse0x1a6d560() {
   return (neuron0x1a60c90()*0.1184);
}

double NNfunction_sb_cLsL::synapse0x1a6cff0() {
   return (neuron0x1a60fd0()*-0.0854859);
}

double NNfunction_sb_cLsL::synapse0x1a6d030() {
   return (neuron0x1a61530()*0.134569);
}

double NNfunction_sb_cLsL::synapse0x1a6d6b0() {
   return (neuron0x1a61870()*-0.881946);
}

double NNfunction_sb_cLsL::synapse0x1a6d6f0() {
   return (neuron0x1a61bb0()*0.017578);
}

double NNfunction_sb_cLsL::synapse0x1a6d730() {
   return (neuron0x1a61ef0()*-0.535775);
}

double NNfunction_sb_cLsL::synapse0x1a6d770() {
   return (neuron0x1a62230()*-0.364455);
}

double NNfunction_sb_cLsL::synapse0x1a6d7b0() {
   return (neuron0x1a62570()*0.490787);
}

double NNfunction_sb_cLsL::synapse0x1a6d7f0() {
   return (neuron0x1a628b0()*0.0922734);
}

double NNfunction_sb_cLsL::synapse0x1a6db70() {
   return (neuron0x1a5dc60()*-0.0465896);
}

double NNfunction_sb_cLsL::synapse0x1a5ddf0() {
   return (neuron0x1a5df10()*0.0552651);
}

double NNfunction_sb_cLsL::synapse0x1a5de30() {
   return (neuron0x1a5e250()*0.0148294);
}

double NNfunction_sb_cLsL::synapse0x1a5e130() {
   return (neuron0x1a5e590()*1.19982);
}

double NNfunction_sb_cLsL::synapse0x1a5e170() {
   return (neuron0x1a5e8d0()*0.0317567);
}

double NNfunction_sb_cLsL::synapse0x1a5e470() {
   return (neuron0x1a5ec10()*0.238083);
}

double NNfunction_sb_cLsL::synapse0x1a5e4b0() {
   return (neuron0x1a5ef50()*-0.0246221);
}

double NNfunction_sb_cLsL::synapse0x1a5e7b0() {
   return (neuron0x1a5f290()*0.000431446);
}

double NNfunction_sb_cLsL::synapse0x1a5e7f0() {
   return (neuron0x1a5f5d0()*0.000867329);
}

double NNfunction_sb_cLsL::synapse0x1a5eaf0() {
   return (neuron0x1a5f910()*-0.14198);
}

double NNfunction_sb_cLsL::synapse0x1a5eb30() {
   return (neuron0x1a5fc50()*0.0935624);
}

double NNfunction_sb_cLsL::synapse0x1a5ee30() {
   return (neuron0x1a5ff90()*-0.477849);
}

double NNfunction_sb_cLsL::synapse0x1a5ee70() {
   return (neuron0x1a602d0()*-0.575896);
}

double NNfunction_sb_cLsL::synapse0x1a5f170() {
   return (neuron0x1a60610()*0.46021);
}

double NNfunction_sb_cLsL::synapse0x1a5f1b0() {
   return (neuron0x1a60950()*-0.325075);
}

double NNfunction_sb_cLsL::synapse0x1a5f4b0() {
   return (neuron0x1a60c90()*-0.328461);
}

double NNfunction_sb_cLsL::synapse0x1a5f4f0() {
   return (neuron0x1a60fd0()*0.213882);
}

double NNfunction_sb_cLsL::synapse0x1a5f7f0() {
   return (neuron0x1a61530()*-0.384905);
}

double NNfunction_sb_cLsL::synapse0x1a5f830() {
   return (neuron0x1a61870()*-0.140856);
}

double NNfunction_sb_cLsL::synapse0x1a5fb30() {
   return (neuron0x1a61bb0()*0.255095);
}

double NNfunction_sb_cLsL::synapse0x1a5fb70() {
   return (neuron0x1a61ef0()*-0.056334);
}

double NNfunction_sb_cLsL::synapse0x1a5fe70() {
   return (neuron0x1a62230()*-0.0844271);
}

double NNfunction_sb_cLsL::synapse0x1a5feb0() {
   return (neuron0x1a62570()*-0.118987);
}

double NNfunction_sb_cLsL::synapse0x1a601b0() {
   return (neuron0x1a628b0()*-0.0857521);
}

double NNfunction_sb_cLsL::synapse0x1a601f0() {
   return (neuron0x1a5dc60()*-0.457629);
}

double NNfunction_sb_cLsL::synapse0x1a60eb0() {
   return (neuron0x1a5df10()*0.544543);
}

double NNfunction_sb_cLsL::synapse0x1a60ef0() {
   return (neuron0x1a5e250()*0.259012);
}

double NNfunction_sb_cLsL::synapse0x1a6d9c0() {
   return (neuron0x1a5e590()*1.49971);
}

double NNfunction_sb_cLsL::synapse0x1a6da00() {
   return (neuron0x1a5e8d0()*0.0267204);
}

double NNfunction_sb_cLsL::synapse0x1a611f0() {
   return (neuron0x1a5ec10()*-0.395195);
}

double NNfunction_sb_cLsL::synapse0x1a61230() {
   return (neuron0x1a5ef50()*-0.363663);
}

double NNfunction_sb_cLsL::synapse0x1a61750() {
   return (neuron0x1a5f290()*-0.0195525);
}

double NNfunction_sb_cLsL::synapse0x1a61790() {
   return (neuron0x1a5f5d0()*0.0732845);
}

double NNfunction_sb_cLsL::synapse0x1a61a90() {
   return (neuron0x1a5f910()*0.106028);
}

double NNfunction_sb_cLsL::synapse0x1a61ad0() {
   return (neuron0x1a5fc50()*0.229572);
}

double NNfunction_sb_cLsL::synapse0x1a61dd0() {
   return (neuron0x1a5ff90()*-0.218648);
}

double NNfunction_sb_cLsL::synapse0x1a61e10() {
   return (neuron0x1a602d0()*-0.482236);
}

double NNfunction_sb_cLsL::synapse0x1a62110() {
   return (neuron0x1a60610()*0.0171424);
}

double NNfunction_sb_cLsL::synapse0x1a62150() {
   return (neuron0x1a60950()*0.24941);
}

double NNfunction_sb_cLsL::synapse0x1a62450() {
   return (neuron0x1a60c90()*0.26521);
}

double NNfunction_sb_cLsL::synapse0x1a62490() {
   return (neuron0x1a60fd0()*0.0639969);
}

double NNfunction_sb_cLsL::synapse0x1a62790() {
   return (neuron0x1a61530()*0.0476125);
}

double NNfunction_sb_cLsL::synapse0x1a627d0() {
   return (neuron0x1a61870()*0.499642);
}

double NNfunction_sb_cLsL::synapse0x1a62ad0() {
   return (neuron0x1a61bb0()*0.252175);
}

double NNfunction_sb_cLsL::synapse0x1a62b10() {
   return (neuron0x1a61ef0()*-0.00609873);
}

double NNfunction_sb_cLsL::synapse0x1a604f0() {
   return (neuron0x1a62230()*-0.0876093);
}

double NNfunction_sb_cLsL::synapse0x1a60530() {
   return (neuron0x1a62570()*0.159314);
}

double NNfunction_sb_cLsL::synapse0x1a6f8e0() {
   return (neuron0x1a628b0()*-0.443056);
}

double NNfunction_sb_cLsL::synapse0x1a6fc60() {
   return (neuron0x1a5dc60()*-0.045366);
}

double NNfunction_sb_cLsL::synapse0x1a6fca0() {
   return (neuron0x1a5df10()*0.00307178);
}

double NNfunction_sb_cLsL::synapse0x1a6fce0() {
   return (neuron0x1a5e250()*0.225575);
}

double NNfunction_sb_cLsL::synapse0x1a6fd20() {
   return (neuron0x1a5e590()*-1.6856);
}

double NNfunction_sb_cLsL::synapse0x1a6fd60() {
   return (neuron0x1a5e8d0()*-0.0188641);
}

double NNfunction_sb_cLsL::synapse0x1a6fda0() {
   return (neuron0x1a5ec10()*0.00108135);
}

double NNfunction_sb_cLsL::synapse0x1a6fde0() {
   return (neuron0x1a5ef50()*-0.000864953);
}

double NNfunction_sb_cLsL::synapse0x1a6fe20() {
   return (neuron0x1a5f290()*0.00616246);
}

double NNfunction_sb_cLsL::synapse0x1a6fe60() {
   return (neuron0x1a5f5d0()*-0.0161879);
}

double NNfunction_sb_cLsL::synapse0x1a6fea0() {
   return (neuron0x1a5f910()*-0.0123561);
}

double NNfunction_sb_cLsL::synapse0x1a6fee0() {
   return (neuron0x1a5fc50()*0.0165768);
}

double NNfunction_sb_cLsL::synapse0x1a6ff20() {
   return (neuron0x1a5ff90()*-0.396091);
}

double NNfunction_sb_cLsL::synapse0x1a6ff60() {
   return (neuron0x1a602d0()*0.0452814);
}

double NNfunction_sb_cLsL::synapse0x1a6ffa0() {
   return (neuron0x1a60610()*0.110629);
}

double NNfunction_sb_cLsL::synapse0x1a6ffe0() {
   return (neuron0x1a60950()*-0.19219);
}

double NNfunction_sb_cLsL::synapse0x1a70020() {
   return (neuron0x1a60c90()*-0.172299);
}

double NNfunction_sb_cLsL::synapse0x1a6fab0() {
   return (neuron0x1a60fd0()*0.120417);
}

double NNfunction_sb_cLsL::synapse0x1a6faf0() {
   return (neuron0x1a61530()*-0.211946);
}

double NNfunction_sb_cLsL::synapse0x1a70170() {
   return (neuron0x1a61870()*-0.163065);
}

double NNfunction_sb_cLsL::synapse0x1a701b0() {
   return (neuron0x1a61bb0()*-0.0249802);
}

double NNfunction_sb_cLsL::synapse0x1a701f0() {
   return (neuron0x1a61ef0()*0.0209757);
}

double NNfunction_sb_cLsL::synapse0x1a70230() {
   return (neuron0x1a62230()*0.00226732);
}

double NNfunction_sb_cLsL::synapse0x1a70270() {
   return (neuron0x1a62570()*0.00336458);
}

double NNfunction_sb_cLsL::synapse0x1a702b0() {
   return (neuron0x1a628b0()*-0.00534757);
}

double NNfunction_sb_cLsL::synapse0x1a70630() {
   return (neuron0x1a5dc60()*-0.112461);
}

double NNfunction_sb_cLsL::synapse0x1a70670() {
   return (neuron0x1a5df10()*0.0736467);
}

double NNfunction_sb_cLsL::synapse0x1a706b0() {
   return (neuron0x1a5e250()*-0.228701);
}

double NNfunction_sb_cLsL::synapse0x1a706f0() {
   return (neuron0x1a5e590()*2.77212);
}

double NNfunction_sb_cLsL::synapse0x1a70730() {
   return (neuron0x1a5e8d0()*-0.0468262);
}

double NNfunction_sb_cLsL::synapse0x1a70770() {
   return (neuron0x1a5ec10()*0.00980245);
}

double NNfunction_sb_cLsL::synapse0x1a707b0() {
   return (neuron0x1a5ef50()*-0.0691819);
}

double NNfunction_sb_cLsL::synapse0x1a707f0() {
   return (neuron0x1a5f290()*-0.100353);
}

double NNfunction_sb_cLsL::synapse0x1a70830() {
   return (neuron0x1a5f5d0()*0.0333832);
}

double NNfunction_sb_cLsL::synapse0x1a70870() {
   return (neuron0x1a5f910()*0.11989);
}

double NNfunction_sb_cLsL::synapse0x1a708b0() {
   return (neuron0x1a5fc50()*-0.0814782);
}

double NNfunction_sb_cLsL::synapse0x1a708f0() {
   return (neuron0x1a5ff90()*-0.0627857);
}

double NNfunction_sb_cLsL::synapse0x1a70930() {
   return (neuron0x1a602d0()*-0.524626);
}

double NNfunction_sb_cLsL::synapse0x1a70970() {
   return (neuron0x1a60610()*-0.092674);
}

double NNfunction_sb_cLsL::synapse0x1a709b0() {
   return (neuron0x1a60950()*0.0329401);
}

double NNfunction_sb_cLsL::synapse0x1a709f0() {
   return (neuron0x1a60c90()*0.0201111);
}

double NNfunction_sb_cLsL::synapse0x1a70480() {
   return (neuron0x1a60fd0()*-0.210371);
}

double NNfunction_sb_cLsL::synapse0x1a704c0() {
   return (neuron0x1a61530()*-0.127073);
}

double NNfunction_sb_cLsL::synapse0x1a70b40() {
   return (neuron0x1a61870()*0.0345154);
}

double NNfunction_sb_cLsL::synapse0x1a70b80() {
   return (neuron0x1a61bb0()*-0.0759256);
}

double NNfunction_sb_cLsL::synapse0x1a70bc0() {
   return (neuron0x1a61ef0()*-0.110449);
}

double NNfunction_sb_cLsL::synapse0x1a70c00() {
   return (neuron0x1a62230()*-0.0573538);
}

double NNfunction_sb_cLsL::synapse0x1a70c40() {
   return (neuron0x1a62570()*0.0806595);
}

double NNfunction_sb_cLsL::synapse0x1a70c80() {
   return (neuron0x1a628b0()*0.0841596);
}

double NNfunction_sb_cLsL::synapse0x1a71000() {
   return (neuron0x1a5dc60()*0.791506);
}

double NNfunction_sb_cLsL::synapse0x1a71040() {
   return (neuron0x1a5df10()*0.141911);
}

double NNfunction_sb_cLsL::synapse0x1a71080() {
   return (neuron0x1a5e250()*0.185765);
}

double NNfunction_sb_cLsL::synapse0x1a710c0() {
   return (neuron0x1a5e590()*1.77809);
}

double NNfunction_sb_cLsL::synapse0x1a71100() {
   return (neuron0x1a5e8d0()*-0.0635504);
}

double NNfunction_sb_cLsL::synapse0x1a71140() {
   return (neuron0x1a5ec10()*0.233146);
}

double NNfunction_sb_cLsL::synapse0x1a71180() {
   return (neuron0x1a5ef50()*0.11038);
}

double NNfunction_sb_cLsL::synapse0x1a711c0() {
   return (neuron0x1a5f290()*-0.134884);
}

double NNfunction_sb_cLsL::synapse0x1a71200() {
   return (neuron0x1a5f5d0()*-0.279897);
}

double NNfunction_sb_cLsL::synapse0x1a71240() {
   return (neuron0x1a5f910()*-0.00106564);
}

double NNfunction_sb_cLsL::synapse0x1a71280() {
   return (neuron0x1a5fc50()*-0.0510883);
}

double NNfunction_sb_cLsL::synapse0x1a712c0() {
   return (neuron0x1a5ff90()*0.0525681);
}

double NNfunction_sb_cLsL::synapse0x1a71300() {
   return (neuron0x1a602d0()*-1.5423);
}

double NNfunction_sb_cLsL::synapse0x1a71340() {
   return (neuron0x1a60610()*-0.58715);
}

double NNfunction_sb_cLsL::synapse0x1a71380() {
   return (neuron0x1a60950()*0.375916);
}

double NNfunction_sb_cLsL::synapse0x1a713c0() {
   return (neuron0x1a60c90()*0.226575);
}

double NNfunction_sb_cLsL::synapse0x1a70e50() {
   return (neuron0x1a60fd0()*-0.5196);
}

double NNfunction_sb_cLsL::synapse0x1a70e90() {
   return (neuron0x1a61530()*0.320751);
}

double NNfunction_sb_cLsL::synapse0x1a71510() {
   return (neuron0x1a61870()*-0.12448);
}

double NNfunction_sb_cLsL::synapse0x1a71550() {
   return (neuron0x1a61bb0()*-0.0552413);
}

double NNfunction_sb_cLsL::synapse0x1a71590() {
   return (neuron0x1a61ef0()*0.118077);
}

double NNfunction_sb_cLsL::synapse0x1a715d0() {
   return (neuron0x1a62230()*-0.223824);
}

double NNfunction_sb_cLsL::synapse0x1a71610() {
   return (neuron0x1a62570()*-0.1276);
}

double NNfunction_sb_cLsL::synapse0x1a71650() {
   return (neuron0x1a628b0()*0.197903);
}

double NNfunction_sb_cLsL::synapse0x1a719d0() {
   return (neuron0x1a5dc60()*0.127377);
}

double NNfunction_sb_cLsL::synapse0x1a71a10() {
   return (neuron0x1a5df10()*-0.122402);
}

double NNfunction_sb_cLsL::synapse0x1a71a50() {
   return (neuron0x1a5e250()*-0.0777072);
}

double NNfunction_sb_cLsL::synapse0x1a71a90() {
   return (neuron0x1a5e590()*2.04037);
}

double NNfunction_sb_cLsL::synapse0x1a71ad0() {
   return (neuron0x1a5e8d0()*-0.0686892);
}

double NNfunction_sb_cLsL::synapse0x1a71b10() {
   return (neuron0x1a5ec10()*-0.0575901);
}

double NNfunction_sb_cLsL::synapse0x1a71b50() {
   return (neuron0x1a5ef50()*-0.173252);
}

double NNfunction_sb_cLsL::synapse0x1a71b90() {
   return (neuron0x1a5f290()*0.00404981);
}

double NNfunction_sb_cLsL::synapse0x1a71bd0() {
   return (neuron0x1a5f5d0()*0.0351814);
}

double NNfunction_sb_cLsL::synapse0x1a71c10() {
   return (neuron0x1a5f910()*0.0930686);
}

double NNfunction_sb_cLsL::synapse0x1a71c50() {
   return (neuron0x1a5fc50()*-0.0309162);
}

double NNfunction_sb_cLsL::synapse0x1a71c90() {
   return (neuron0x1a5ff90()*0.257804);
}

double NNfunction_sb_cLsL::synapse0x1a71cd0() {
   return (neuron0x1a602d0()*0.244311);
}

double NNfunction_sb_cLsL::synapse0x1a71d10() {
   return (neuron0x1a60610()*-0.164328);
}

double NNfunction_sb_cLsL::synapse0x1a71d50() {
   return (neuron0x1a60950()*-0.0169059);
}

double NNfunction_sb_cLsL::synapse0x1a71d90() {
   return (neuron0x1a60c90()*0.0349082);
}

double NNfunction_sb_cLsL::synapse0x1a71820() {
   return (neuron0x1a60fd0()*-0.140766);
}

double NNfunction_sb_cLsL::synapse0x1a71860() {
   return (neuron0x1a61530()*0.0252731);
}

double NNfunction_sb_cLsL::synapse0x1a71ee0() {
   return (neuron0x1a61870()*0.142629);
}

double NNfunction_sb_cLsL::synapse0x1a71f20() {
   return (neuron0x1a61bb0()*-0.361157);
}

double NNfunction_sb_cLsL::synapse0x1a71f60() {
   return (neuron0x1a61ef0()*0.0684085);
}

double NNfunction_sb_cLsL::synapse0x1a71fa0() {
   return (neuron0x1a62230()*-0.144375);
}

double NNfunction_sb_cLsL::synapse0x1a71fe0() {
   return (neuron0x1a62570()*0.091456);
}

double NNfunction_sb_cLsL::synapse0x1a72020() {
   return (neuron0x1a628b0()*-0.0412316);
}

double NNfunction_sb_cLsL::synapse0x1a723a0() {
   return (neuron0x1a5dc60()*-0.61893);
}

double NNfunction_sb_cLsL::synapse0x1a723e0() {
   return (neuron0x1a5df10()*-0.520244);
}

double NNfunction_sb_cLsL::synapse0x1a72420() {
   return (neuron0x1a5e250()*0.439493);
}

double NNfunction_sb_cLsL::synapse0x1a72460() {
   return (neuron0x1a5e590()*0.00964858);
}

double NNfunction_sb_cLsL::synapse0x1a724a0() {
   return (neuron0x1a5e8d0()*0.475914);
}

double NNfunction_sb_cLsL::synapse0x1a724e0() {
   return (neuron0x1a5ec10()*0.473072);
}

double NNfunction_sb_cLsL::synapse0x1a72520() {
   return (neuron0x1a5ef50()*0.62109);
}

double NNfunction_sb_cLsL::synapse0x1a72560() {
   return (neuron0x1a5f290()*0.574373);
}

double NNfunction_sb_cLsL::synapse0x1a725a0() {
   return (neuron0x1a5f5d0()*1.45577);
}

double NNfunction_sb_cLsL::synapse0x1a6a760() {
   return (neuron0x1a5f910()*0.376338);
}

double NNfunction_sb_cLsL::synapse0x1a6a7a0() {
   return (neuron0x1a5fc50()*-0.972005);
}

double NNfunction_sb_cLsL::synapse0x1a6a7e0() {
   return (neuron0x1a5ff90()*0.472104);
}

double NNfunction_sb_cLsL::synapse0x1a6a820() {
   return (neuron0x1a602d0()*-0.251721);
}

double NNfunction_sb_cLsL::synapse0x1a6a860() {
   return (neuron0x1a60610()*-1.0817);
}

double NNfunction_sb_cLsL::synapse0x1a6a8a0() {
   return (neuron0x1a60950()*1.08085);
}

double NNfunction_sb_cLsL::synapse0x1a6a8e0() {
   return (neuron0x1a60c90()*0.529917);
}

double NNfunction_sb_cLsL::synapse0x1a721f0() {
   return (neuron0x1a60fd0()*0.0625264);
}

double NNfunction_sb_cLsL::synapse0x1a72230() {
   return (neuron0x1a61530()*-0.293083);
}

double NNfunction_sb_cLsL::synapse0x1a6aa30() {
   return (neuron0x1a61870()*0.571824);
}

double NNfunction_sb_cLsL::synapse0x1a6aa70() {
   return (neuron0x1a61bb0()*-0.243228);
}

double NNfunction_sb_cLsL::synapse0x1a6aab0() {
   return (neuron0x1a61ef0()*0.0748167);
}

double NNfunction_sb_cLsL::synapse0x1a6aaf0() {
   return (neuron0x1a62230()*-0.0734922);
}

double NNfunction_sb_cLsL::synapse0x1a6ab30() {
   return (neuron0x1a62570()*0.737823);
}

double NNfunction_sb_cLsL::synapse0x1a6ab70() {
   return (neuron0x1a628b0()*0.238343);
}

double NNfunction_sb_cLsL::synapse0x1a6aef0() {
   return (neuron0x1a5dc60()*-0.537147);
}

double NNfunction_sb_cLsL::synapse0x1a6af30() {
   return (neuron0x1a5df10()*-0.0598648);
}

double NNfunction_sb_cLsL::synapse0x1a6af70() {
   return (neuron0x1a5e250()*-0.784248);
}

double NNfunction_sb_cLsL::synapse0x1a6afb0() {
   return (neuron0x1a5e590()*1.31914);
}

double NNfunction_sb_cLsL::synapse0x1a6aff0() {
   return (neuron0x1a5e8d0()*-0.0274622);
}

double NNfunction_sb_cLsL::synapse0x1a6b030() {
   return (neuron0x1a5ec10()*-0.191763);
}

double NNfunction_sb_cLsL::synapse0x1a6b070() {
   return (neuron0x1a5ef50()*-0.450753);
}

double NNfunction_sb_cLsL::synapse0x1a6b0b0() {
   return (neuron0x1a5f290()*-0.107931);
}

double NNfunction_sb_cLsL::synapse0x1a6b0f0() {
   return (neuron0x1a5f5d0()*0.287722);
}

double NNfunction_sb_cLsL::synapse0x1a6b130() {
   return (neuron0x1a5f910()*0.0779813);
}

double NNfunction_sb_cLsL::synapse0x1a6b170() {
   return (neuron0x1a5fc50()*-0.153628);
}

double NNfunction_sb_cLsL::synapse0x1a6b1b0() {
   return (neuron0x1a5ff90()*-0.103241);
}

double NNfunction_sb_cLsL::synapse0x1a6b1f0() {
   return (neuron0x1a602d0()*-1.12898);
}

double NNfunction_sb_cLsL::synapse0x1a6b230() {
   return (neuron0x1a60610()*-0.135613);
}

double NNfunction_sb_cLsL::synapse0x1a6b270() {
   return (neuron0x1a60950()*0.109297);
}

double NNfunction_sb_cLsL::synapse0x1a6b2b0() {
   return (neuron0x1a60c90()*-0.186932);
}

double NNfunction_sb_cLsL::synapse0x1a6ad40() {
   return (neuron0x1a60fd0()*-0.0481304);
}

double NNfunction_sb_cLsL::synapse0x1a6ad80() {
   return (neuron0x1a61530()*-0.025544);
}

double NNfunction_sb_cLsL::synapse0x1a6b400() {
   return (neuron0x1a61870()*0.029356);
}

double NNfunction_sb_cLsL::synapse0x1a6b440() {
   return (neuron0x1a61bb0()*-0.160164);
}

double NNfunction_sb_cLsL::synapse0x1a6b480() {
   return (neuron0x1a61ef0()*-0.208205);
}

double NNfunction_sb_cLsL::synapse0x1a6b4c0() {
   return (neuron0x1a62230()*0.13147);
}

double NNfunction_sb_cLsL::synapse0x1a6b500() {
   return (neuron0x1a62570()*0.115304);
}

double NNfunction_sb_cLsL::synapse0x1a6b540() {
   return (neuron0x1a628b0()*0.310513);
}

double NNfunction_sb_cLsL::synapse0x1a6b710() {
   return (neuron0x1a5dc60()*-0.0137651);
}

double NNfunction_sb_cLsL::synapse0x1a747a0() {
   return (neuron0x1a5df10()*0.0178314);
}

double NNfunction_sb_cLsL::synapse0x1a747e0() {
   return (neuron0x1a5e250()*-0.00613534);
}

double NNfunction_sb_cLsL::synapse0x1a74820() {
   return (neuron0x1a5e590()*-0.417202);
}

double NNfunction_sb_cLsL::synapse0x1a74860() {
   return (neuron0x1a5e8d0()*0.00220408);
}

double NNfunction_sb_cLsL::synapse0x1a748a0() {
   return (neuron0x1a5ec10()*0.0165675);
}

double NNfunction_sb_cLsL::synapse0x1a748e0() {
   return (neuron0x1a5ef50()*-0.00188981);
}

double NNfunction_sb_cLsL::synapse0x1a74920() {
   return (neuron0x1a5f290()*-0.0157294);
}

double NNfunction_sb_cLsL::synapse0x1a74960() {
   return (neuron0x1a5f5d0()*-0.00139144);
}

double NNfunction_sb_cLsL::synapse0x1a749a0() {
   return (neuron0x1a5f910()*0.0108803);
}

double NNfunction_sb_cLsL::synapse0x1a749e0() {
   return (neuron0x1a5fc50()*-0.00301082);
}

double NNfunction_sb_cLsL::synapse0x1a74a20() {
   return (neuron0x1a5ff90()*-0.0116112);
}

double NNfunction_sb_cLsL::synapse0x1a74a60() {
   return (neuron0x1a602d0()*-1.16948);
}

double NNfunction_sb_cLsL::synapse0x1a74aa0() {
   return (neuron0x1a60610()*-0.00414856);
}

double NNfunction_sb_cLsL::synapse0x1a74ae0() {
   return (neuron0x1a60950()*-0.00933592);
}

double NNfunction_sb_cLsL::synapse0x1a74b20() {
   return (neuron0x1a60c90()*0.0342357);
}

double NNfunction_sb_cLsL::synapse0x1a745f0() {
   return (neuron0x1a60fd0()*0.00210456);
}

double NNfunction_sb_cLsL::synapse0x1a74630() {
   return (neuron0x1a61530()*-0.0201052);
}

double NNfunction_sb_cLsL::synapse0x1a74c70() {
   return (neuron0x1a61870()*0.020109);
}

double NNfunction_sb_cLsL::synapse0x1a74cb0() {
   return (neuron0x1a61bb0()*-0.0128818);
}

double NNfunction_sb_cLsL::synapse0x1a74cf0() {
   return (neuron0x1a61ef0()*0.00253914);
}

double NNfunction_sb_cLsL::synapse0x1a74d30() {
   return (neuron0x1a62230()*6.95585e-05);
}

double NNfunction_sb_cLsL::synapse0x1a74d70() {
   return (neuron0x1a62570()*0.0021986);
}

double NNfunction_sb_cLsL::synapse0x1a74db0() {
   return (neuron0x1a628b0()*-0.0108205);
}

double NNfunction_sb_cLsL::synapse0x1a75130() {
   return (neuron0x1a5dc60()*-0.00900225);
}

double NNfunction_sb_cLsL::synapse0x1a75170() {
   return (neuron0x1a5df10()*-0.00917565);
}

double NNfunction_sb_cLsL::synapse0x1a751b0() {
   return (neuron0x1a5e250()*-0.452662);
}

double NNfunction_sb_cLsL::synapse0x1a751f0() {
   return (neuron0x1a5e590()*-3.74013);
}

double NNfunction_sb_cLsL::synapse0x1a75230() {
   return (neuron0x1a5e8d0()*-0.0647471);
}

double NNfunction_sb_cLsL::synapse0x1a75270() {
   return (neuron0x1a5ec10()*-0.0401888);
}

double NNfunction_sb_cLsL::synapse0x1a752b0() {
   return (neuron0x1a5ef50()*-0.0444853);
}

double NNfunction_sb_cLsL::synapse0x1a752f0() {
   return (neuron0x1a5f290()*-0.0308227);
}

double NNfunction_sb_cLsL::synapse0x1a75330() {
   return (neuron0x1a5f5d0()*0.00799393);
}

double NNfunction_sb_cLsL::synapse0x1a75370() {
   return (neuron0x1a5f910()*0.0176413);
}

double NNfunction_sb_cLsL::synapse0x1a753b0() {
   return (neuron0x1a5fc50()*-0.000911828);
}

double NNfunction_sb_cLsL::synapse0x1a753f0() {
   return (neuron0x1a5ff90()*0.0607667);
}

double NNfunction_sb_cLsL::synapse0x1a75430() {
   return (neuron0x1a602d0()*1.15765);
}

double NNfunction_sb_cLsL::synapse0x1a75470() {
   return (neuron0x1a60610()*0.0300508);
}

double NNfunction_sb_cLsL::synapse0x1a754b0() {
   return (neuron0x1a60950()*0.0279112);
}

double NNfunction_sb_cLsL::synapse0x1a754f0() {
   return (neuron0x1a60c90()*0.00161471);
}

double NNfunction_sb_cLsL::synapse0x1a74f80() {
   return (neuron0x1a60fd0()*-0.0335462);
}

double NNfunction_sb_cLsL::synapse0x1a74fc0() {
   return (neuron0x1a61530()*0.0256686);
}

double NNfunction_sb_cLsL::synapse0x1a75640() {
   return (neuron0x1a61870()*0.0176015);
}

double NNfunction_sb_cLsL::synapse0x1a75680() {
   return (neuron0x1a61bb0()*0.0101443);
}

double NNfunction_sb_cLsL::synapse0x1a756c0() {
   return (neuron0x1a61ef0()*-0.0326042);
}

double NNfunction_sb_cLsL::synapse0x1a75700() {
   return (neuron0x1a62230()*0.00969741);
}

double NNfunction_sb_cLsL::synapse0x1a75740() {
   return (neuron0x1a62570()*-0.0108416);
}

double NNfunction_sb_cLsL::synapse0x1a75780() {
   return (neuron0x1a628b0()*0.000716462);
}

double NNfunction_sb_cLsL::synapse0x1a75b00() {
   return (neuron0x1a5dc60()*-0.0695847);
}

double NNfunction_sb_cLsL::synapse0x1a75b40() {
   return (neuron0x1a5df10()*0.0739149);
}

double NNfunction_sb_cLsL::synapse0x1a75b80() {
   return (neuron0x1a5e250()*-0.00385895);
}

double NNfunction_sb_cLsL::synapse0x1a75bc0() {
   return (neuron0x1a5e590()*-0.992331);
}

double NNfunction_sb_cLsL::synapse0x1a75c00() {
   return (neuron0x1a5e8d0()*-0.00841313);
}

double NNfunction_sb_cLsL::synapse0x1a75c40() {
   return (neuron0x1a5ec10()*0.16503);
}

double NNfunction_sb_cLsL::synapse0x1a75c80() {
   return (neuron0x1a5ef50()*-0.00551055);
}

double NNfunction_sb_cLsL::synapse0x1a75cc0() {
   return (neuron0x1a5f290()*-0.0450326);
}

double NNfunction_sb_cLsL::synapse0x1a75d00() {
   return (neuron0x1a5f5d0()*0.0199499);
}

double NNfunction_sb_cLsL::synapse0x1a75d40() {
   return (neuron0x1a5f910()*-0.0070197);
}

double NNfunction_sb_cLsL::synapse0x1a75d80() {
   return (neuron0x1a5fc50()*0.0197798);
}

double NNfunction_sb_cLsL::synapse0x1a75dc0() {
   return (neuron0x1a5ff90()*0.0631201);
}

double NNfunction_sb_cLsL::synapse0x1a75e00() {
   return (neuron0x1a602d0()*-0.513881);
}

double NNfunction_sb_cLsL::synapse0x1a75e40() {
   return (neuron0x1a60610()*0.0397813);
}

double NNfunction_sb_cLsL::synapse0x1a75e80() {
   return (neuron0x1a60950()*0.0121791);
}

double NNfunction_sb_cLsL::synapse0x1a75ec0() {
   return (neuron0x1a60c90()*0.419454);
}

double NNfunction_sb_cLsL::synapse0x1a75950() {
   return (neuron0x1a60fd0()*0.0422297);
}

double NNfunction_sb_cLsL::synapse0x1a75990() {
   return (neuron0x1a61530()*-0.028279);
}

double NNfunction_sb_cLsL::synapse0x1a76010() {
   return (neuron0x1a61870()*0.0397048);
}

double NNfunction_sb_cLsL::synapse0x1a76050() {
   return (neuron0x1a61bb0()*0.0047461);
}

double NNfunction_sb_cLsL::synapse0x1a76090() {
   return (neuron0x1a61ef0()*-0.00135576);
}

double NNfunction_sb_cLsL::synapse0x1a760d0() {
   return (neuron0x1a62230()*-0.0171749);
}

double NNfunction_sb_cLsL::synapse0x1a76110() {
   return (neuron0x1a62570()*-0.0580195);
}

double NNfunction_sb_cLsL::synapse0x1a76150() {
   return (neuron0x1a628b0()*-0.050965);
}

double NNfunction_sb_cLsL::synapse0x1a764d0() {
   return (neuron0x1a5dc60()*0.324364);
}

double NNfunction_sb_cLsL::synapse0x1a76510() {
   return (neuron0x1a5df10()*1.42041);
}

double NNfunction_sb_cLsL::synapse0x1a76550() {
   return (neuron0x1a5e250()*0.740646);
}

double NNfunction_sb_cLsL::synapse0x1a76590() {
   return (neuron0x1a5e590()*-0.707831);
}

double NNfunction_sb_cLsL::synapse0x1a765d0() {
   return (neuron0x1a5e8d0()*-0.945736);
}

double NNfunction_sb_cLsL::synapse0x1a76610() {
   return (neuron0x1a5ec10()*-0.18487);
}

double NNfunction_sb_cLsL::synapse0x1a76650() {
   return (neuron0x1a5ef50()*0.260531);
}

double NNfunction_sb_cLsL::synapse0x1a76690() {
   return (neuron0x1a5f290()*-0.577259);
}

double NNfunction_sb_cLsL::synapse0x1a766d0() {
   return (neuron0x1a5f5d0()*0.439064);
}

double NNfunction_sb_cLsL::synapse0x1a76710() {
   return (neuron0x1a5f910()*-0.0396103);
}

double NNfunction_sb_cLsL::synapse0x1a76750() {
   return (neuron0x1a5fc50()*-0.22566);
}

double NNfunction_sb_cLsL::synapse0x1a76790() {
   return (neuron0x1a5ff90()*-0.475372);
}

double NNfunction_sb_cLsL::synapse0x1a767d0() {
   return (neuron0x1a602d0()*-0.947597);
}

double NNfunction_sb_cLsL::synapse0x1a76810() {
   return (neuron0x1a60610()*-0.391116);
}

double NNfunction_sb_cLsL::synapse0x1a76850() {
   return (neuron0x1a60950()*-0.22959);
}

double NNfunction_sb_cLsL::synapse0x1a76890() {
   return (neuron0x1a60c90()*-0.359101);
}

double NNfunction_sb_cLsL::synapse0x1a76320() {
   return (neuron0x1a60fd0()*-0.289069);
}

double NNfunction_sb_cLsL::synapse0x1a76360() {
   return (neuron0x1a61530()*-1.09276);
}

double NNfunction_sb_cLsL::synapse0x1a769e0() {
   return (neuron0x1a61870()*-0.0169119);
}

double NNfunction_sb_cLsL::synapse0x1a76a20() {
   return (neuron0x1a61bb0()*-0.38796);
}

double NNfunction_sb_cLsL::synapse0x1a76a60() {
   return (neuron0x1a61ef0()*1.439);
}

double NNfunction_sb_cLsL::synapse0x1a76aa0() {
   return (neuron0x1a62230()*-0.193848);
}

double NNfunction_sb_cLsL::synapse0x1a76ae0() {
   return (neuron0x1a62570()*0.390506);
}

double NNfunction_sb_cLsL::synapse0x1a76b20() {
   return (neuron0x1a628b0()*-0.340599);
}

double NNfunction_sb_cLsL::synapse0x1a76ea0() {
   return (neuron0x1a5dc60()*0.00722687);
}

double NNfunction_sb_cLsL::synapse0x1a76ee0() {
   return (neuron0x1a5df10()*0.0336837);
}

double NNfunction_sb_cLsL::synapse0x1a76f20() {
   return (neuron0x1a5e250()*0.0544029);
}

double NNfunction_sb_cLsL::synapse0x1a76f60() {
   return (neuron0x1a5e590()*0.649274);
}

double NNfunction_sb_cLsL::synapse0x1a76fa0() {
   return (neuron0x1a5e8d0()*0.037105);
}

double NNfunction_sb_cLsL::synapse0x1a76fe0() {
   return (neuron0x1a5ec10()*0.00602762);
}

double NNfunction_sb_cLsL::synapse0x1a77020() {
   return (neuron0x1a5ef50()*0.0810217);
}

double NNfunction_sb_cLsL::synapse0x1a77060() {
   return (neuron0x1a5f290()*-0.0435676);
}

double NNfunction_sb_cLsL::synapse0x1a770a0() {
   return (neuron0x1a5f5d0()*0.0425682);
}

double NNfunction_sb_cLsL::synapse0x1a770e0() {
   return (neuron0x1a5f910()*0.00383333);
}

double NNfunction_sb_cLsL::synapse0x1a77120() {
   return (neuron0x1a5fc50()*-0.0315133);
}

double NNfunction_sb_cLsL::synapse0x1a77160() {
   return (neuron0x1a5ff90()*-0.025186);
}

double NNfunction_sb_cLsL::synapse0x1a771a0() {
   return (neuron0x1a602d0()*-0.53458);
}

double NNfunction_sb_cLsL::synapse0x1a771e0() {
   return (neuron0x1a60610()*0.0219907);
}

double NNfunction_sb_cLsL::synapse0x1a77220() {
   return (neuron0x1a60950()*0.0217038);
}

double NNfunction_sb_cLsL::synapse0x1a77260() {
   return (neuron0x1a60c90()*0.0689174);
}

double NNfunction_sb_cLsL::synapse0x1a76cf0() {
   return (neuron0x1a60fd0()*-0.0290519);
}

double NNfunction_sb_cLsL::synapse0x1a76d30() {
   return (neuron0x1a61530()*-0.00879045);
}

double NNfunction_sb_cLsL::synapse0x1a773b0() {
   return (neuron0x1a61870()*-0.00450409);
}

double NNfunction_sb_cLsL::synapse0x1a773f0() {
   return (neuron0x1a61bb0()*0.0122353);
}

double NNfunction_sb_cLsL::synapse0x1a77430() {
   return (neuron0x1a61ef0()*0.0258965);
}

double NNfunction_sb_cLsL::synapse0x1a77470() {
   return (neuron0x1a62230()*-0.0145763);
}

double NNfunction_sb_cLsL::synapse0x1a774b0() {
   return (neuron0x1a62570()*-0.0012383);
}

double NNfunction_sb_cLsL::synapse0x1a774f0() {
   return (neuron0x1a628b0()*0.0110651);
}

double NNfunction_sb_cLsL::synapse0x1a77870() {
   return (neuron0x1a5dc60()*0.852606);
}

double NNfunction_sb_cLsL::synapse0x1a778b0() {
   return (neuron0x1a5df10()*-0.841799);
}

double NNfunction_sb_cLsL::synapse0x1a778f0() {
   return (neuron0x1a5e250()*-0.621869);
}

double NNfunction_sb_cLsL::synapse0x1a77930() {
   return (neuron0x1a5e590()*-0.388879);
}

double NNfunction_sb_cLsL::synapse0x1a77970() {
   return (neuron0x1a5e8d0()*-0.561007);
}

double NNfunction_sb_cLsL::synapse0x1a779b0() {
   return (neuron0x1a5ec10()*-0.327267);
}

double NNfunction_sb_cLsL::synapse0x1a779f0() {
   return (neuron0x1a5ef50()*0.61619);
}

double NNfunction_sb_cLsL::synapse0x1a77a30() {
   return (neuron0x1a5f290()*-0.468035);
}

double NNfunction_sb_cLsL::synapse0x1a77a70() {
   return (neuron0x1a5f5d0()*0.197239);
}

double NNfunction_sb_cLsL::synapse0x1a77ab0() {
   return (neuron0x1a5f910()*0.634165);
}

double NNfunction_sb_cLsL::synapse0x1a77af0() {
   return (neuron0x1a5fc50()*-0.117335);
}

double NNfunction_sb_cLsL::synapse0x1a77b30() {
   return (neuron0x1a5ff90()*1.3366);
}

double NNfunction_sb_cLsL::synapse0x1a77b70() {
   return (neuron0x1a602d0()*-1.19501);
}

double NNfunction_sb_cLsL::synapse0x1a77bb0() {
   return (neuron0x1a60610()*-0.568526);
}

double NNfunction_sb_cLsL::synapse0x1a77bf0() {
   return (neuron0x1a60950()*0.631552);
}

double NNfunction_sb_cLsL::synapse0x1a77c30() {
   return (neuron0x1a60c90()*0.132737);
}

double NNfunction_sb_cLsL::synapse0x1a776c0() {
   return (neuron0x1a60fd0()*-0.738376);
}

double NNfunction_sb_cLsL::synapse0x1a77700() {
   return (neuron0x1a61530()*0.111346);
}

double NNfunction_sb_cLsL::synapse0x1a77d80() {
   return (neuron0x1a61870()*-0.208129);
}

double NNfunction_sb_cLsL::synapse0x1a77dc0() {
   return (neuron0x1a61bb0()*0.22212);
}

double NNfunction_sb_cLsL::synapse0x1a77e00() {
   return (neuron0x1a61ef0()*-1.17925);
}

double NNfunction_sb_cLsL::synapse0x1a77e40() {
   return (neuron0x1a62230()*0.500319);
}

double NNfunction_sb_cLsL::synapse0x1a77e80() {
   return (neuron0x1a62570()*0.142398);
}

double NNfunction_sb_cLsL::synapse0x1a77ec0() {
   return (neuron0x1a628b0()*1.01902);
}

double NNfunction_sb_cLsL::synapse0x1a78240() {
   return (neuron0x1a5dc60()*-0.143111);
}

double NNfunction_sb_cLsL::synapse0x1a78280() {
   return (neuron0x1a5df10()*0.0477776);
}

double NNfunction_sb_cLsL::synapse0x1a782c0() {
   return (neuron0x1a5e250()*0.869554);
}

double NNfunction_sb_cLsL::synapse0x1a78300() {
   return (neuron0x1a5e590()*1.47288);
}

double NNfunction_sb_cLsL::synapse0x1a78340() {
   return (neuron0x1a5e8d0()*-0.308762);
}

double NNfunction_sb_cLsL::synapse0x1a78380() {
   return (neuron0x1a5ec10()*-0.0257263);
}

double NNfunction_sb_cLsL::synapse0x1a783c0() {
   return (neuron0x1a5ef50()*0.0892605);
}

double NNfunction_sb_cLsL::synapse0x1a78400() {
   return (neuron0x1a5f290()*-0.122896);
}

double NNfunction_sb_cLsL::synapse0x1a78440() {
   return (neuron0x1a5f5d0()*0.0415347);
}

double NNfunction_sb_cLsL::synapse0x1a78480() {
   return (neuron0x1a5f910()*0.0331865);
}

double NNfunction_sb_cLsL::synapse0x1a784c0() {
   return (neuron0x1a5fc50()*-0.0322645);
}

double NNfunction_sb_cLsL::synapse0x1a78500() {
   return (neuron0x1a5ff90()*0.103664);
}

double NNfunction_sb_cLsL::synapse0x1a78540() {
   return (neuron0x1a602d0()*0.402111);
}

double NNfunction_sb_cLsL::synapse0x1a78580() {
   return (neuron0x1a60610()*0.0535734);
}

double NNfunction_sb_cLsL::synapse0x1a785c0() {
   return (neuron0x1a60950()*0.0363016);
}

double NNfunction_sb_cLsL::synapse0x1a78600() {
   return (neuron0x1a60c90()*0.149076);
}

double NNfunction_sb_cLsL::synapse0x1a78090() {
   return (neuron0x1a60fd0()*-0.104101);
}

double NNfunction_sb_cLsL::synapse0x1a780d0() {
   return (neuron0x1a61530()*-0.020271);
}

double NNfunction_sb_cLsL::synapse0x1a78750() {
   return (neuron0x1a61870()*0.119506);
}

double NNfunction_sb_cLsL::synapse0x1a78790() {
   return (neuron0x1a61bb0()*0.000389696);
}

double NNfunction_sb_cLsL::synapse0x1a787d0() {
   return (neuron0x1a61ef0()*-0.115362);
}

double NNfunction_sb_cLsL::synapse0x1a78810() {
   return (neuron0x1a62230()*-0.0290171);
}

double NNfunction_sb_cLsL::synapse0x1a78850() {
   return (neuron0x1a62570()*-0.0163966);
}

double NNfunction_sb_cLsL::synapse0x1a78890() {
   return (neuron0x1a628b0()*0.0136011);
}

double NNfunction_sb_cLsL::synapse0x1a78c10() {
   return (neuron0x1a5dc60()*0.00720385);
}

double NNfunction_sb_cLsL::synapse0x1a78c50() {
   return (neuron0x1a5df10()*-0.0120844);
}

double NNfunction_sb_cLsL::synapse0x1a78c90() {
   return (neuron0x1a5e250()*-0.0193701);
}

double NNfunction_sb_cLsL::synapse0x1a78cd0() {
   return (neuron0x1a5e590()*3.29454);
}

double NNfunction_sb_cLsL::synapse0x1a78d10() {
   return (neuron0x1a5e8d0()*-0.00137135);
}

double NNfunction_sb_cLsL::synapse0x1a78d50() {
   return (neuron0x1a5ec10()*-0.00336686);
}

double NNfunction_sb_cLsL::synapse0x1a78d90() {
   return (neuron0x1a5ef50()*0.0251701);
}

double NNfunction_sb_cLsL::synapse0x1a78dd0() {
   return (neuron0x1a5f290()*-0.0145541);
}

double NNfunction_sb_cLsL::synapse0x1a78e10() {
   return (neuron0x1a5f5d0()*0.0286941);
}

double NNfunction_sb_cLsL::synapse0x1a78e50() {
   return (neuron0x1a5f910()*0.0136147);
}

double NNfunction_sb_cLsL::synapse0x1a78e90() {
   return (neuron0x1a5fc50()*-0.0343401);
}

double NNfunction_sb_cLsL::synapse0x1a78ed0() {
   return (neuron0x1a5ff90()*-0.031221);
}

double NNfunction_sb_cLsL::synapse0x1a78f10() {
   return (neuron0x1a602d0()*0.00489446);
}

double NNfunction_sb_cLsL::synapse0x1a78f50() {
   return (neuron0x1a60610()*0.0453272);
}

double NNfunction_sb_cLsL::synapse0x1a78f90() {
   return (neuron0x1a60950()*-0.0184166);
}

double NNfunction_sb_cLsL::synapse0x1a78fd0() {
   return (neuron0x1a60c90()*-0.0546623);
}

double NNfunction_sb_cLsL::synapse0x1a78a60() {
   return (neuron0x1a60fd0()*-0.00938012);
}

double NNfunction_sb_cLsL::synapse0x1a78aa0() {
   return (neuron0x1a61530()*-0.00334398);
}

double NNfunction_sb_cLsL::synapse0x1a79120() {
   return (neuron0x1a61870()*0.00333592);
}

double NNfunction_sb_cLsL::synapse0x1a79160() {
   return (neuron0x1a61bb0()*-0.0136222);
}

double NNfunction_sb_cLsL::synapse0x1a791a0() {
   return (neuron0x1a61ef0()*0.0228095);
}

double NNfunction_sb_cLsL::synapse0x1a791e0() {
   return (neuron0x1a62230()*-0.0108014);
}

double NNfunction_sb_cLsL::synapse0x1a79220() {
   return (neuron0x1a62570()*0.0350392);
}

double NNfunction_sb_cLsL::synapse0x1a79260() {
   return (neuron0x1a628b0()*0.0426467);
}

double NNfunction_sb_cLsL::synapse0x1a795e0() {
   return (neuron0x1a5dc60()*0.496263);
}

double NNfunction_sb_cLsL::synapse0x1a6dbb0() {
   return (neuron0x1a5df10()*-0.102828);
}

double NNfunction_sb_cLsL::synapse0x1a6dbf0() {
   return (neuron0x1a5e250()*0.513618);
}

double NNfunction_sb_cLsL::synapse0x1a6dc30() {
   return (neuron0x1a5e590()*0.895679);
}

double NNfunction_sb_cLsL::synapse0x1a6de80() {
   return (neuron0x1a5e8d0()*0.258525);
}

double NNfunction_sb_cLsL::synapse0x1a6dec0() {
   return (neuron0x1a5ec10()*0.223389);
}

double NNfunction_sb_cLsL::synapse0x1a6df00() {
   return (neuron0x1a5ef50()*0.0744946);
}

double NNfunction_sb_cLsL::synapse0x1a6e150() {
   return (neuron0x1a5f290()*-0.0474026);
}

double NNfunction_sb_cLsL::synapse0x1a6e190() {
   return (neuron0x1a5f5d0()*-0.401863);
}

double NNfunction_sb_cLsL::synapse0x1a6e3e0() {
   return (neuron0x1a5f910()*0.0883267);
}

double NNfunction_sb_cLsL::synapse0x1a6e420() {
   return (neuron0x1a5fc50()*-0.0725038);
}

double NNfunction_sb_cLsL::synapse0x1a6e460() {
   return (neuron0x1a5ff90()*-0.49742);
}

double NNfunction_sb_cLsL::synapse0x1a6e6b0() {
   return (neuron0x1a602d0()*-0.744039);
}

double NNfunction_sb_cLsL::synapse0x1a6e6f0() {
   return (neuron0x1a60610()*0.394533);
}

double NNfunction_sb_cLsL::synapse0x1a6e940() {
   return (neuron0x1a60950()*-0.031178);
}

double NNfunction_sb_cLsL::synapse0x1a6e980() {
   return (neuron0x1a60c90()*-0.0829831);
}

double NNfunction_sb_cLsL::synapse0x1a79430() {
   return (neuron0x1a60fd0()*0.682645);
}

double NNfunction_sb_cLsL::synapse0x1a79470() {
   return (neuron0x1a61530()*0.678036);
}

double NNfunction_sb_cLsL::synapse0x1a6ead0() {
   return (neuron0x1a61870()*0.0666932);
}

double NNfunction_sb_cLsL::synapse0x1a6efe0() {
   return (neuron0x1a61bb0()*0.61502);
}

double NNfunction_sb_cLsL::synapse0x1a6f020() {
   return (neuron0x1a61ef0()*-0.484992);
}

double NNfunction_sb_cLsL::synapse0x1a6f060() {
   return (neuron0x1a62230()*0.250167);
}

double NNfunction_sb_cLsL::synapse0x1a6f2b0() {
   return (neuron0x1a62570()*0.0681758);
}

double NNfunction_sb_cLsL::synapse0x1a6f2f0() {
   return (neuron0x1a628b0()*0.198585);
}

double NNfunction_sb_cLsL::synapse0x1a6eba0() {
   return (neuron0x1a5dc60()*1.0103);
}

double NNfunction_sb_cLsL::synapse0x1a6ebe0() {
   return (neuron0x1a5df10()*-0.598057);
}

double NNfunction_sb_cLsL::synapse0x1a6ec20() {
   return (neuron0x1a5e250()*0.801106);
}

double NNfunction_sb_cLsL::synapse0x1a6ec60() {
   return (neuron0x1a5e590()*0.289418);
}

double NNfunction_sb_cLsL::synapse0x1a6f5e0() {
   return (neuron0x1a5e8d0()*0.950374);
}

double NNfunction_sb_cLsL::synapse0x1a7b930() {
   return (neuron0x1a5ec10()*-0.327268);
}

double NNfunction_sb_cLsL::synapse0x1a7b970() {
   return (neuron0x1a5ef50()*0.273797);
}

double NNfunction_sb_cLsL::synapse0x1a7b9b0() {
   return (neuron0x1a5f290()*0.12321);
}

double NNfunction_sb_cLsL::synapse0x1a7b9f0() {
   return (neuron0x1a5f5d0()*0.85642);
}

double NNfunction_sb_cLsL::synapse0x1a7ba30() {
   return (neuron0x1a5f910()*-0.214394);
}

double NNfunction_sb_cLsL::synapse0x1a7ba70() {
   return (neuron0x1a5fc50()*-0.00148683);
}

double NNfunction_sb_cLsL::synapse0x1a7bab0() {
   return (neuron0x1a5ff90()*0.272731);
}

double NNfunction_sb_cLsL::synapse0x1a7baf0() {
   return (neuron0x1a602d0()*0.0353906);
}

double NNfunction_sb_cLsL::synapse0x1a7bb30() {
   return (neuron0x1a60610()*0.127596);
}

double NNfunction_sb_cLsL::synapse0x1a7bb70() {
   return (neuron0x1a60950()*1.2631);
}

double NNfunction_sb_cLsL::synapse0x1a7bbb0() {
   return (neuron0x1a60c90()*0.260338);
}

double NNfunction_sb_cLsL::synapse0x1a6f4c0() {
   return (neuron0x1a60fd0()*0.84734);
}

double NNfunction_sb_cLsL::synapse0x1a6f500() {
   return (neuron0x1a61530()*-0.679555);
}

double NNfunction_sb_cLsL::synapse0x1a7bd00() {
   return (neuron0x1a61870()*0.00791004);
}

double NNfunction_sb_cLsL::synapse0x1a7bd40() {
   return (neuron0x1a61bb0()*0.0250306);
}

double NNfunction_sb_cLsL::synapse0x1a7bd80() {
   return (neuron0x1a61ef0()*-0.735843);
}

double NNfunction_sb_cLsL::synapse0x1a7bdc0() {
   return (neuron0x1a62230()*-0.605231);
}

double NNfunction_sb_cLsL::synapse0x1a7be00() {
   return (neuron0x1a62570()*0.672356);
}

double NNfunction_sb_cLsL::synapse0x1a7be40() {
   return (neuron0x1a628b0()*-0.197005);
}

double NNfunction_sb_cLsL::synapse0x1a7c1c0() {
   return (neuron0x1a5dc60()*1.02559);
}

double NNfunction_sb_cLsL::synapse0x1a7c200() {
   return (neuron0x1a5df10()*0.463139);
}

double NNfunction_sb_cLsL::synapse0x1a7c240() {
   return (neuron0x1a5e250()*0.00774033);
}

double NNfunction_sb_cLsL::synapse0x1a7c280() {
   return (neuron0x1a5e590()*0.87017);
}

double NNfunction_sb_cLsL::synapse0x1a7c2c0() {
   return (neuron0x1a5e8d0()*0.35016);
}

double NNfunction_sb_cLsL::synapse0x1a7c300() {
   return (neuron0x1a5ec10()*0.10842);
}

double NNfunction_sb_cLsL::synapse0x1a7c340() {
   return (neuron0x1a5ef50()*0.0477474);
}

double NNfunction_sb_cLsL::synapse0x1a7c380() {
   return (neuron0x1a5f290()*-0.253183);
}

double NNfunction_sb_cLsL::synapse0x1a7c3c0() {
   return (neuron0x1a5f5d0()*0.00952274);
}

double NNfunction_sb_cLsL::synapse0x1a7c400() {
   return (neuron0x1a5f910()*-0.127741);
}

double NNfunction_sb_cLsL::synapse0x1a7c440() {
   return (neuron0x1a5fc50()*0.325059);
}

double NNfunction_sb_cLsL::synapse0x1a7c480() {
   return (neuron0x1a5ff90()*-0.296466);
}

double NNfunction_sb_cLsL::synapse0x1a7c4c0() {
   return (neuron0x1a602d0()*0.0773767);
}

double NNfunction_sb_cLsL::synapse0x1a7c500() {
   return (neuron0x1a60610()*-0.601556);
}

double NNfunction_sb_cLsL::synapse0x1a7c540() {
   return (neuron0x1a60950()*-0.151401);
}

double NNfunction_sb_cLsL::synapse0x1a7c580() {
   return (neuron0x1a60c90()*0.771869);
}

double NNfunction_sb_cLsL::synapse0x1a7c010() {
   return (neuron0x1a60fd0()*-0.98154);
}

double NNfunction_sb_cLsL::synapse0x1a7c050() {
   return (neuron0x1a61530()*0.0218476);
}

double NNfunction_sb_cLsL::synapse0x1a7c6d0() {
   return (neuron0x1a61870()*0.749023);
}

double NNfunction_sb_cLsL::synapse0x1a7c710() {
   return (neuron0x1a61bb0()*1.05119);
}

double NNfunction_sb_cLsL::synapse0x1a7c750() {
   return (neuron0x1a61ef0()*-0.0505589);
}

double NNfunction_sb_cLsL::synapse0x1a7c790() {
   return (neuron0x1a62230()*-0.142386);
}

double NNfunction_sb_cLsL::synapse0x1a7c7d0() {
   return (neuron0x1a62570()*-0.000714698);
}

double NNfunction_sb_cLsL::synapse0x1a7c810() {
   return (neuron0x1a628b0()*0.392336);
}

double NNfunction_sb_cLsL::synapse0x1a7cb90() {
   return (neuron0x1a5dc60()*0.0768927);
}

double NNfunction_sb_cLsL::synapse0x1a7cbd0() {
   return (neuron0x1a5df10()*-0.0521087);
}

double NNfunction_sb_cLsL::synapse0x1a7cc10() {
   return (neuron0x1a5e250()*0.183608);
}

double NNfunction_sb_cLsL::synapse0x1a7cc50() {
   return (neuron0x1a5e590()*6.90972);
}

double NNfunction_sb_cLsL::synapse0x1a7cc90() {
   return (neuron0x1a5e8d0()*-0.00557271);
}

double NNfunction_sb_cLsL::synapse0x1a7ccd0() {
   return (neuron0x1a5ec10()*-0.0626763);
}

double NNfunction_sb_cLsL::synapse0x1a7cd10() {
   return (neuron0x1a5ef50()*-0.00252611);
}

double NNfunction_sb_cLsL::synapse0x1a7cd50() {
   return (neuron0x1a5f290()*0.0189728);
}

double NNfunction_sb_cLsL::synapse0x1a7cd90() {
   return (neuron0x1a5f5d0()*-0.0111328);
}

double NNfunction_sb_cLsL::synapse0x1a7cdd0() {
   return (neuron0x1a5f910()*0.0161246);
}

double NNfunction_sb_cLsL::synapse0x1a7ce10() {
   return (neuron0x1a5fc50()*0.0202344);
}

double NNfunction_sb_cLsL::synapse0x1a7ce50() {
   return (neuron0x1a5ff90()*-0.0761192);
}

double NNfunction_sb_cLsL::synapse0x1a7ce90() {
   return (neuron0x1a602d0()*0.521557);
}

double NNfunction_sb_cLsL::synapse0x1a7ced0() {
   return (neuron0x1a60610()*0.0939656);
}

double NNfunction_sb_cLsL::synapse0x1a7cf10() {
   return (neuron0x1a60950()*0.0135171);
}

double NNfunction_sb_cLsL::synapse0x1a7cf50() {
   return (neuron0x1a60c90()*-0.0767942);
}

double NNfunction_sb_cLsL::synapse0x1a7c9e0() {
   return (neuron0x1a60fd0()*0.103704);
}

double NNfunction_sb_cLsL::synapse0x1a7ca20() {
   return (neuron0x1a61530()*0.00254643);
}

double NNfunction_sb_cLsL::synapse0x1a7d0a0() {
   return (neuron0x1a61870()*-0.0597193);
}

double NNfunction_sb_cLsL::synapse0x1a7d0e0() {
   return (neuron0x1a61bb0()*0.0281545);
}

double NNfunction_sb_cLsL::synapse0x1a7d120() {
   return (neuron0x1a61ef0()*0.00507319);
}

double NNfunction_sb_cLsL::synapse0x1a7d160() {
   return (neuron0x1a62230()*0.0367306);
}

double NNfunction_sb_cLsL::synapse0x1a7d1a0() {
   return (neuron0x1a62570()*0.00882205);
}

double NNfunction_sb_cLsL::synapse0x1a7d1e0() {
   return (neuron0x1a628b0()*0.105343);
}

double NNfunction_sb_cLsL::synapse0x1a7d560() {
   return (neuron0x1a5dc60()*-0.538857);
}

double NNfunction_sb_cLsL::synapse0x1a7d5a0() {
   return (neuron0x1a5df10()*-0.0321182);
}

double NNfunction_sb_cLsL::synapse0x1a7d5e0() {
   return (neuron0x1a5e250()*0.652344);
}

double NNfunction_sb_cLsL::synapse0x1a7d620() {
   return (neuron0x1a5e590()*1.23534);
}

double NNfunction_sb_cLsL::synapse0x1a7d660() {
   return (neuron0x1a5e8d0()*0.0342807);
}

double NNfunction_sb_cLsL::synapse0x1a7d6a0() {
   return (neuron0x1a5ec10()*0.199492);
}

double NNfunction_sb_cLsL::synapse0x1a7d6e0() {
   return (neuron0x1a5ef50()*0.0213826);
}

double NNfunction_sb_cLsL::synapse0x1a7d720() {
   return (neuron0x1a5f290()*0.283053);
}

double NNfunction_sb_cLsL::synapse0x1a7d760() {
   return (neuron0x1a5f5d0()*-0.0758838);
}

double NNfunction_sb_cLsL::synapse0x1a7d7a0() {
   return (neuron0x1a5f910()*0.0133816);
}

double NNfunction_sb_cLsL::synapse0x1a7d7e0() {
   return (neuron0x1a5fc50()*0.28242);
}

double NNfunction_sb_cLsL::synapse0x1a7d820() {
   return (neuron0x1a5ff90()*0.515487);
}

double NNfunction_sb_cLsL::synapse0x1a7d860() {
   return (neuron0x1a602d0()*0.362105);
}

double NNfunction_sb_cLsL::synapse0x1a7d8a0() {
   return (neuron0x1a60610()*0.222856);
}

double NNfunction_sb_cLsL::synapse0x1a7d8e0() {
   return (neuron0x1a60950()*-0.0284296);
}

double NNfunction_sb_cLsL::synapse0x1a7d920() {
   return (neuron0x1a60c90()*-0.342721);
}

double NNfunction_sb_cLsL::synapse0x1a7d3b0() {
   return (neuron0x1a60fd0()*-0.233633);
}

double NNfunction_sb_cLsL::synapse0x1a7d3f0() {
   return (neuron0x1a61530()*0.0389286);
}

double NNfunction_sb_cLsL::synapse0x1a7da70() {
   return (neuron0x1a61870()*-0.140057);
}

double NNfunction_sb_cLsL::synapse0x1a7dab0() {
   return (neuron0x1a61bb0()*0.329668);
}

double NNfunction_sb_cLsL::synapse0x1a7daf0() {
   return (neuron0x1a61ef0()*0.16914);
}

double NNfunction_sb_cLsL::synapse0x1a7db30() {
   return (neuron0x1a62230()*-0.0953382);
}

double NNfunction_sb_cLsL::synapse0x1a7db70() {
   return (neuron0x1a62570()*0.20441);
}

double NNfunction_sb_cLsL::synapse0x1a7dbb0() {
   return (neuron0x1a628b0()*0.278986);
}

double NNfunction_sb_cLsL::synapse0x1a7df30() {
   return (neuron0x1a5dc60()*-0.0195313);
}

double NNfunction_sb_cLsL::synapse0x1a7df70() {
   return (neuron0x1a5df10()*0.0219103);
}

double NNfunction_sb_cLsL::synapse0x1a7dfb0() {
   return (neuron0x1a5e250()*0.0513342);
}

double NNfunction_sb_cLsL::synapse0x1a7dff0() {
   return (neuron0x1a5e590()*0.272605);
}

double NNfunction_sb_cLsL::synapse0x1a7e030() {
   return (neuron0x1a5e8d0()*0.0115899);
}

double NNfunction_sb_cLsL::synapse0x1a7e070() {
   return (neuron0x1a5ec10()*-0.00381082);
}

double NNfunction_sb_cLsL::synapse0x1a7e0b0() {
   return (neuron0x1a5ef50()*-0.0195536);
}

double NNfunction_sb_cLsL::synapse0x1a7e0f0() {
   return (neuron0x1a5f290()*-0.0353264);
}

double NNfunction_sb_cLsL::synapse0x1a7e130() {
   return (neuron0x1a5f5d0()*-0.00181126);
}

double NNfunction_sb_cLsL::synapse0x1a7e170() {
   return (neuron0x1a5f910()*0.0538494);
}

double NNfunction_sb_cLsL::synapse0x1a7e1b0() {
   return (neuron0x1a5fc50()*0.00652524);
}

double NNfunction_sb_cLsL::synapse0x1a7e1f0() {
   return (neuron0x1a5ff90()*-0.0514901);
}

double NNfunction_sb_cLsL::synapse0x1a7e230() {
   return (neuron0x1a602d0()*-3.02378);
}

double NNfunction_sb_cLsL::synapse0x1a7e270() {
   return (neuron0x1a60610()*-0.0206319);
}

double NNfunction_sb_cLsL::synapse0x1a7e2b0() {
   return (neuron0x1a60950()*-0.0496075);
}

double NNfunction_sb_cLsL::synapse0x1a7e2f0() {
   return (neuron0x1a60c90()*-0.0237788);
}

double NNfunction_sb_cLsL::synapse0x1a7dd80() {
   return (neuron0x1a60fd0()*-0.0167924);
}

double NNfunction_sb_cLsL::synapse0x1a7ddc0() {
   return (neuron0x1a61530()*-0.064282);
}

double NNfunction_sb_cLsL::synapse0x1a7e440() {
   return (neuron0x1a61870()*0.0184949);
}

double NNfunction_sb_cLsL::synapse0x1a7e480() {
   return (neuron0x1a61bb0()*-0.0471695);
}

double NNfunction_sb_cLsL::synapse0x1a7e4c0() {
   return (neuron0x1a61ef0()*-0.026251);
}

double NNfunction_sb_cLsL::synapse0x1a7e500() {
   return (neuron0x1a62230()*-0.038802);
}

double NNfunction_sb_cLsL::synapse0x1a7e540() {
   return (neuron0x1a62570()*-0.0218698);
}

double NNfunction_sb_cLsL::synapse0x1a7e580() {
   return (neuron0x1a628b0()*-0.0224712);
}

double NNfunction_sb_cLsL::synapse0x1a7e900() {
   return (neuron0x1a5dc60()*-1.4285);
}

double NNfunction_sb_cLsL::synapse0x1a7e940() {
   return (neuron0x1a5df10()*-0.170363);
}

double NNfunction_sb_cLsL::synapse0x1a7e980() {
   return (neuron0x1a5e250()*0.922169);
}

double NNfunction_sb_cLsL::synapse0x1a7e9c0() {
   return (neuron0x1a5e590()*0.166495);
}

double NNfunction_sb_cLsL::synapse0x1a7ea00() {
   return (neuron0x1a5e8d0()*0.00876277);
}

double NNfunction_sb_cLsL::synapse0x1a7ea40() {
   return (neuron0x1a5ec10()*0.287996);
}

double NNfunction_sb_cLsL::synapse0x1a7ea80() {
   return (neuron0x1a5ef50()*-0.450105);
}

double NNfunction_sb_cLsL::synapse0x1a7eac0() {
   return (neuron0x1a5f290()*-0.392751);
}

double NNfunction_sb_cLsL::synapse0x1a7eb00() {
   return (neuron0x1a5f5d0()*0.585524);
}

double NNfunction_sb_cLsL::synapse0x1a7eb40() {
   return (neuron0x1a5f910()*0.268722);
}

double NNfunction_sb_cLsL::synapse0x1a7eb80() {
   return (neuron0x1a5fc50()*-0.157631);
}

double NNfunction_sb_cLsL::synapse0x1a7ebc0() {
   return (neuron0x1a5ff90()*0.0482979);
}

double NNfunction_sb_cLsL::synapse0x1a7ec00() {
   return (neuron0x1a602d0()*-0.537401);
}

double NNfunction_sb_cLsL::synapse0x1a7ec40() {
   return (neuron0x1a60610()*0.824881);
}

double NNfunction_sb_cLsL::synapse0x1a7ec80() {
   return (neuron0x1a60950()*0.128234);
}

double NNfunction_sb_cLsL::synapse0x1a7ecc0() {
   return (neuron0x1a60c90()*-0.871516);
}

double NNfunction_sb_cLsL::synapse0x1a7e750() {
   return (neuron0x1a60fd0()*0.568472);
}

double NNfunction_sb_cLsL::synapse0x1a7e790() {
   return (neuron0x1a61530()*-0.478125);
}

double NNfunction_sb_cLsL::synapse0x1a7ee10() {
   return (neuron0x1a61870()*-0.590067);
}

double NNfunction_sb_cLsL::synapse0x1a7ee50() {
   return (neuron0x1a61bb0()*-1.21503);
}

double NNfunction_sb_cLsL::synapse0x1a7ee90() {
   return (neuron0x1a61ef0()*-0.385486);
}

double NNfunction_sb_cLsL::synapse0x1a7eed0() {
   return (neuron0x1a62230()*0.0912817);
}

double NNfunction_sb_cLsL::synapse0x1a7ef10() {
   return (neuron0x1a62570()*-0.322732);
}

double NNfunction_sb_cLsL::synapse0x1a7ef50() {
   return (neuron0x1a628b0()*0.191128);
}

double NNfunction_sb_cLsL::synapse0x1a7f2d0() {
   return (neuron0x1a5dc60()*0.0198512);
}

double NNfunction_sb_cLsL::synapse0x1a7f310() {
   return (neuron0x1a5df10()*-0.0180031);
}

double NNfunction_sb_cLsL::synapse0x1a7f350() {
   return (neuron0x1a5e250()*0.132987);
}

double NNfunction_sb_cLsL::synapse0x1a7f390() {
   return (neuron0x1a5e590()*1.23225);
}

double NNfunction_sb_cLsL::synapse0x1a7f3d0() {
   return (neuron0x1a5e8d0()*0.0292155);
}

double NNfunction_sb_cLsL::synapse0x1a7f410() {
   return (neuron0x1a5ec10()*-0.0119757);
}

double NNfunction_sb_cLsL::synapse0x1a7f450() {
   return (neuron0x1a5ef50()*0.0104652);
}

double NNfunction_sb_cLsL::synapse0x1a7f490() {
   return (neuron0x1a5f290()*0.0326124);
}

double NNfunction_sb_cLsL::synapse0x1a7f4d0() {
   return (neuron0x1a5f5d0()*-0.0201597);
}

double NNfunction_sb_cLsL::synapse0x1a7f510() {
   return (neuron0x1a5f910()*-0.0402516);
}

double NNfunction_sb_cLsL::synapse0x1a7f550() {
   return (neuron0x1a5fc50()*-0.00328725);
}

double NNfunction_sb_cLsL::synapse0x1a7f590() {
   return (neuron0x1a5ff90()*-0.0723582);
}

double NNfunction_sb_cLsL::synapse0x1a7f5d0() {
   return (neuron0x1a602d0()*0.31009);
}

double NNfunction_sb_cLsL::synapse0x1a7f610() {
   return (neuron0x1a60610()*-0.0174449);
}

double NNfunction_sb_cLsL::synapse0x1a7f650() {
   return (neuron0x1a60950()*0.0113183);
}

double NNfunction_sb_cLsL::synapse0x1a7f690() {
   return (neuron0x1a60c90()*0.0126731);
}

double NNfunction_sb_cLsL::synapse0x1a7f120() {
   return (neuron0x1a60fd0()*0.018196);
}

double NNfunction_sb_cLsL::synapse0x1a7f160() {
   return (neuron0x1a61530()*-0.0154659);
}

double NNfunction_sb_cLsL::synapse0x1a7f7e0() {
   return (neuron0x1a61870()*-0.0720404);
}

double NNfunction_sb_cLsL::synapse0x1a7f820() {
   return (neuron0x1a61bb0()*-0.014723);
}

double NNfunction_sb_cLsL::synapse0x1a7f860() {
   return (neuron0x1a61ef0()*0.00972856);
}

double NNfunction_sb_cLsL::synapse0x1a7f8a0() {
   return (neuron0x1a62230()*0.0179359);
}

double NNfunction_sb_cLsL::synapse0x1a7f8e0() {
   return (neuron0x1a62570()*-0.0184477);
}

double NNfunction_sb_cLsL::synapse0x1a7f920() {
   return (neuron0x1a628b0()*-0.0033982);
}

double NNfunction_sb_cLsL::synapse0x1a7fca0() {
   return (neuron0x1a5dc60()*0.13793);
}

double NNfunction_sb_cLsL::synapse0x1a7fce0() {
   return (neuron0x1a5df10()*-0.793772);
}

double NNfunction_sb_cLsL::synapse0x1a7fd20() {
   return (neuron0x1a5e250()*-0.507597);
}

double NNfunction_sb_cLsL::synapse0x1a7fd60() {
   return (neuron0x1a5e590()*0.507161);
}

double NNfunction_sb_cLsL::synapse0x1a7fda0() {
   return (neuron0x1a5e8d0()*0.175818);
}

double NNfunction_sb_cLsL::synapse0x1a7fde0() {
   return (neuron0x1a5ec10()*1.03234);
}

double NNfunction_sb_cLsL::synapse0x1a7fe20() {
   return (neuron0x1a5ef50()*0.20678);
}

double NNfunction_sb_cLsL::synapse0x1a7fe60() {
   return (neuron0x1a5f290()*-0.440404);
}

double NNfunction_sb_cLsL::synapse0x1a7fea0() {
   return (neuron0x1a5f5d0()*0.230207);
}

double NNfunction_sb_cLsL::synapse0x1a7fee0() {
   return (neuron0x1a5f910()*0.39138);
}

double NNfunction_sb_cLsL::synapse0x1a7ff20() {
   return (neuron0x1a5fc50()*-0.153965);
}

double NNfunction_sb_cLsL::synapse0x1a7ff60() {
   return (neuron0x1a5ff90()*-0.147928);
}

double NNfunction_sb_cLsL::synapse0x1a7ffa0() {
   return (neuron0x1a602d0()*0.383257);
}

double NNfunction_sb_cLsL::synapse0x1a7ffe0() {
   return (neuron0x1a60610()*-0.765164);
}

double NNfunction_sb_cLsL::synapse0x1a80020() {
   return (neuron0x1a60950()*0.567672);
}

double NNfunction_sb_cLsL::synapse0x1a80060() {
   return (neuron0x1a60c90()*0.839603);
}

double NNfunction_sb_cLsL::synapse0x1a7faf0() {
   return (neuron0x1a60fd0()*-0.992563);
}

double NNfunction_sb_cLsL::synapse0x1a7fb30() {
   return (neuron0x1a61530()*0.0189059);
}

double NNfunction_sb_cLsL::synapse0x1a801b0() {
   return (neuron0x1a61870()*0.73746);
}

double NNfunction_sb_cLsL::synapse0x1a801f0() {
   return (neuron0x1a61bb0()*0.352817);
}

double NNfunction_sb_cLsL::synapse0x1a80230() {
   return (neuron0x1a61ef0()*-0.152584);
}

double NNfunction_sb_cLsL::synapse0x1a80270() {
   return (neuron0x1a62230()*-0.525368);
}

double NNfunction_sb_cLsL::synapse0x1a802b0() {
   return (neuron0x1a62570()*0.474702);
}

double NNfunction_sb_cLsL::synapse0x1a802f0() {
   return (neuron0x1a628b0()*-0.721272);
}

double NNfunction_sb_cLsL::synapse0x1a68da0() {
   return (neuron0x1a5dc60()*0.281528);
}

double NNfunction_sb_cLsL::synapse0x1a68de0() {
   return (neuron0x1a5df10()*0.262657);
}

double NNfunction_sb_cLsL::synapse0x1a68e20() {
   return (neuron0x1a5e250()*0.115831);
}

double NNfunction_sb_cLsL::synapse0x1a68e60() {
   return (neuron0x1a5e590()*1.76082);
}

double NNfunction_sb_cLsL::synapse0x1a68ea0() {
   return (neuron0x1a5e8d0()*-0.364972);
}

double NNfunction_sb_cLsL::synapse0x1a68ee0() {
   return (neuron0x1a5ec10()*0.418446);
}

double NNfunction_sb_cLsL::synapse0x1a68f20() {
   return (neuron0x1a5ef50()*-0.64265);
}

double NNfunction_sb_cLsL::synapse0x1a68f60() {
   return (neuron0x1a5f290()*-0.0893281);
}

double NNfunction_sb_cLsL::synapse0x1a80a80() {
   return (neuron0x1a5f5d0()*0.0150686);
}

double NNfunction_sb_cLsL::synapse0x1a80ac0() {
   return (neuron0x1a5f910()*1.25352);
}

double NNfunction_sb_cLsL::synapse0x1a80b00() {
   return (neuron0x1a5fc50()*0.444306);
}

double NNfunction_sb_cLsL::synapse0x1a80b40() {
   return (neuron0x1a5ff90()*0.75874);
}

double NNfunction_sb_cLsL::synapse0x1a80b80() {
   return (neuron0x1a602d0()*-0.0357379);
}

double NNfunction_sb_cLsL::synapse0x1a80bc0() {
   return (neuron0x1a60610()*-0.322078);
}

double NNfunction_sb_cLsL::synapse0x1a80c00() {
   return (neuron0x1a60950()*-0.705159);
}

double NNfunction_sb_cLsL::synapse0x1a80c40() {
   return (neuron0x1a60c90()*-0.0481784);
}

double NNfunction_sb_cLsL::synapse0x1a804c0() {
   return (neuron0x1a60fd0()*0.324071);
}

double NNfunction_sb_cLsL::synapse0x1a80500() {
   return (neuron0x1a61530()*-0.598545);
}

double NNfunction_sb_cLsL::synapse0x1a80d90() {
   return (neuron0x1a61870()*0.641727);
}

double NNfunction_sb_cLsL::synapse0x1a80dd0() {
   return (neuron0x1a61bb0()*-0.239569);
}

double NNfunction_sb_cLsL::synapse0x1a80e10() {
   return (neuron0x1a61ef0()*0.310039);
}

double NNfunction_sb_cLsL::synapse0x1a80e50() {
   return (neuron0x1a62230()*-0.101503);
}

double NNfunction_sb_cLsL::synapse0x1a80e90() {
   return (neuron0x1a62570()*-0.511452);
}

double NNfunction_sb_cLsL::synapse0x1a80ed0() {
   return (neuron0x1a628b0()*-0.84423);
}

double NNfunction_sb_cLsL::synapse0x1a81250() {
   return (neuron0x1a5dc60()*-0.213264);
}

double NNfunction_sb_cLsL::synapse0x1a81290() {
   return (neuron0x1a5df10()*0.251931);
}

double NNfunction_sb_cLsL::synapse0x1a812d0() {
   return (neuron0x1a5e250()*0.732569);
}

double NNfunction_sb_cLsL::synapse0x1a81310() {
   return (neuron0x1a5e590()*-1.26864);
}

double NNfunction_sb_cLsL::synapse0x1a81350() {
   return (neuron0x1a5e8d0()*-0.255643);
}

double NNfunction_sb_cLsL::synapse0x1a81390() {
   return (neuron0x1a5ec10()*0.128171);
}

double NNfunction_sb_cLsL::synapse0x1a813d0() {
   return (neuron0x1a5ef50()*-0.120531);
}

double NNfunction_sb_cLsL::synapse0x1a81410() {
   return (neuron0x1a5f290()*-0.217081);
}

double NNfunction_sb_cLsL::synapse0x1a81450() {
   return (neuron0x1a5f5d0()*0.134281);
}

double NNfunction_sb_cLsL::synapse0x1a81490() {
   return (neuron0x1a5f910()*-0.0472428);
}

double NNfunction_sb_cLsL::synapse0x1a814d0() {
   return (neuron0x1a5fc50()*-0.0643459);
}

double NNfunction_sb_cLsL::synapse0x1a81510() {
   return (neuron0x1a5ff90()*0.136696);
}

double NNfunction_sb_cLsL::synapse0x1a81550() {
   return (neuron0x1a602d0()*0.241968);
}

double NNfunction_sb_cLsL::synapse0x1a81590() {
   return (neuron0x1a60610()*0.0468725);
}

double NNfunction_sb_cLsL::synapse0x1a815d0() {
   return (neuron0x1a60950()*-0.0185302);
}

double NNfunction_sb_cLsL::synapse0x1a81610() {
   return (neuron0x1a60c90()*-0.0939382);
}

double NNfunction_sb_cLsL::synapse0x1a810a0() {
   return (neuron0x1a60fd0()*0.126187);
}

double NNfunction_sb_cLsL::synapse0x1a810e0() {
   return (neuron0x1a61530()*-0.306885);
}

double NNfunction_sb_cLsL::synapse0x1a81760() {
   return (neuron0x1a61870()*0.0133617);
}

double NNfunction_sb_cLsL::synapse0x1a817a0() {
   return (neuron0x1a61bb0()*0.0390004);
}

double NNfunction_sb_cLsL::synapse0x1a817e0() {
   return (neuron0x1a61ef0()*-0.058057);
}

double NNfunction_sb_cLsL::synapse0x1a81820() {
   return (neuron0x1a62230()*0.0423123);
}

double NNfunction_sb_cLsL::synapse0x1a81860() {
   return (neuron0x1a62570()*0.045494);
}

double NNfunction_sb_cLsL::synapse0x1a818a0() {
   return (neuron0x1a628b0()*-0.0276324);
}

double NNfunction_sb_cLsL::synapse0x1a81c20() {
   return (neuron0x1a5dc60()*0.00676779);
}

double NNfunction_sb_cLsL::synapse0x1a81c60() {
   return (neuron0x1a5df10()*-0.00555211);
}

double NNfunction_sb_cLsL::synapse0x1a81ca0() {
   return (neuron0x1a5e250()*0.0756734);
}

double NNfunction_sb_cLsL::synapse0x1a81ce0() {
   return (neuron0x1a5e590()*2.60847);
}

double NNfunction_sb_cLsL::synapse0x1a81d20() {
   return (neuron0x1a5e8d0()*0.0122392);
}

double NNfunction_sb_cLsL::synapse0x1a81d60() {
   return (neuron0x1a5ec10()*0.0441885);
}

double NNfunction_sb_cLsL::synapse0x1a81da0() {
   return (neuron0x1a5ef50()*0.0636325);
}

double NNfunction_sb_cLsL::synapse0x1a81de0() {
   return (neuron0x1a5f290()*-0.0539828);
}

double NNfunction_sb_cLsL::synapse0x1a81e20() {
   return (neuron0x1a5f5d0()*0.0983558);
}

double NNfunction_sb_cLsL::synapse0x1a81e60() {
   return (neuron0x1a5f910()*0.0160036);
}

double NNfunction_sb_cLsL::synapse0x1a81ea0() {
   return (neuron0x1a5fc50()*-0.0995788);
}

double NNfunction_sb_cLsL::synapse0x1a81ee0() {
   return (neuron0x1a5ff90()*-0.028931);
}

double NNfunction_sb_cLsL::synapse0x1a81f20() {
   return (neuron0x1a602d0()*-0.424585);
}

double NNfunction_sb_cLsL::synapse0x1a81f60() {
   return (neuron0x1a60610()*0.069118);
}

double NNfunction_sb_cLsL::synapse0x1a81fa0() {
   return (neuron0x1a60950()*-0.0652019);
}

double NNfunction_sb_cLsL::synapse0x1a81fe0() {
   return (neuron0x1a60c90()*-0.0159782);
}

double NNfunction_sb_cLsL::synapse0x1a81a70() {
   return (neuron0x1a60fd0()*-0.0306291);
}

double NNfunction_sb_cLsL::synapse0x1a81ab0() {
   return (neuron0x1a61530()*0.0146679);
}

double NNfunction_sb_cLsL::synapse0x1a725e0() {
   return (neuron0x1a61870()*-0.00455721);
}

double NNfunction_sb_cLsL::synapse0x1a72620() {
   return (neuron0x1a61bb0()*-0.00109546);
}

double NNfunction_sb_cLsL::synapse0x1a72660() {
   return (neuron0x1a61ef0()*0.0293232);
}

double NNfunction_sb_cLsL::synapse0x1a726a0() {
   return (neuron0x1a62230()*-0.0276616);
}

double NNfunction_sb_cLsL::synapse0x1a726e0() {
   return (neuron0x1a62570()*0.0415261);
}

double NNfunction_sb_cLsL::synapse0x1a72720() {
   return (neuron0x1a628b0()*0.0449675);
}

double NNfunction_sb_cLsL::synapse0x1a72aa0() {
   return (neuron0x1a5dc60()*-0.298317);
}

double NNfunction_sb_cLsL::synapse0x1a72ae0() {
   return (neuron0x1a5df10()*0.867554);
}

double NNfunction_sb_cLsL::synapse0x1a72b20() {
   return (neuron0x1a5e250()*-1.62648);
}

double NNfunction_sb_cLsL::synapse0x1a72b60() {
   return (neuron0x1a5e590()*0.299415);
}

double NNfunction_sb_cLsL::synapse0x1a72ba0() {
   return (neuron0x1a5e8d0()*-0.180458);
}

double NNfunction_sb_cLsL::synapse0x1a72be0() {
   return (neuron0x1a5ec10()*-0.700418);
}

double NNfunction_sb_cLsL::synapse0x1a72c20() {
   return (neuron0x1a5ef50()*0.417912);
}

double NNfunction_sb_cLsL::synapse0x1a72c60() {
   return (neuron0x1a5f290()*-0.307491);
}

double NNfunction_sb_cLsL::synapse0x1a72ca0() {
   return (neuron0x1a5f5d0()*0.59356);
}

double NNfunction_sb_cLsL::synapse0x1a72ce0() {
   return (neuron0x1a5f910()*-0.353947);
}

double NNfunction_sb_cLsL::synapse0x1a72d20() {
   return (neuron0x1a5fc50()*-0.120016);
}

double NNfunction_sb_cLsL::synapse0x1a72d60() {
   return (neuron0x1a5ff90()*0.289996);
}

double NNfunction_sb_cLsL::synapse0x1a72da0() {
   return (neuron0x1a602d0()*0.65389);
}

double NNfunction_sb_cLsL::synapse0x1a72de0() {
   return (neuron0x1a60610()*-1.03844);
}

double NNfunction_sb_cLsL::synapse0x1a72e20() {
   return (neuron0x1a60950()*0.840507);
}

double NNfunction_sb_cLsL::synapse0x1a72e60() {
   return (neuron0x1a60c90()*0.932414);
}

double NNfunction_sb_cLsL::synapse0x1a728f0() {
   return (neuron0x1a60fd0()*-1.34804);
}

double NNfunction_sb_cLsL::synapse0x1a72930() {
   return (neuron0x1a61530()*0.470333);
}

double NNfunction_sb_cLsL::synapse0x1a72fb0() {
   return (neuron0x1a61870()*-0.374677);
}

double NNfunction_sb_cLsL::synapse0x1a72ff0() {
   return (neuron0x1a61bb0()*0.129518);
}

double NNfunction_sb_cLsL::synapse0x1a73030() {
   return (neuron0x1a61ef0()*-0.642476);
}

double NNfunction_sb_cLsL::synapse0x1a73070() {
   return (neuron0x1a62230()*-0.141466);
}

double NNfunction_sb_cLsL::synapse0x1a730b0() {
   return (neuron0x1a62570()*0.0278857);
}

double NNfunction_sb_cLsL::synapse0x1a730f0() {
   return (neuron0x1a628b0()*0.270098);
}

double NNfunction_sb_cLsL::synapse0x1a73470() {
   return (neuron0x1a5dc60()*0.630479);
}

double NNfunction_sb_cLsL::synapse0x1a734b0() {
   return (neuron0x1a5df10()*0.4375);
}

double NNfunction_sb_cLsL::synapse0x1a734f0() {
   return (neuron0x1a5e250()*0.521766);
}

double NNfunction_sb_cLsL::synapse0x1a73530() {
   return (neuron0x1a5e590()*-0.950594);
}

double NNfunction_sb_cLsL::synapse0x1a73570() {
   return (neuron0x1a5e8d0()*-0.339594);
}

double NNfunction_sb_cLsL::synapse0x1a735b0() {
   return (neuron0x1a5ec10()*-0.345394);
}

double NNfunction_sb_cLsL::synapse0x1a735f0() {
   return (neuron0x1a5ef50()*-0.409272);
}

double NNfunction_sb_cLsL::synapse0x1a73630() {
   return (neuron0x1a5f290()*-0.668117);
}

double NNfunction_sb_cLsL::synapse0x1a73670() {
   return (neuron0x1a5f5d0()*-0.243802);
}

double NNfunction_sb_cLsL::synapse0x1a736b0() {
   return (neuron0x1a5f910()*-0.108621);
}

double NNfunction_sb_cLsL::synapse0x1a736f0() {
   return (neuron0x1a5fc50()*0.0881618);
}

double NNfunction_sb_cLsL::synapse0x1a73730() {
   return (neuron0x1a5ff90()*-0.101972);
}

double NNfunction_sb_cLsL::synapse0x1a73770() {
   return (neuron0x1a602d0()*-0.313505);
}

double NNfunction_sb_cLsL::synapse0x1a737b0() {
   return (neuron0x1a60610()*-0.0597475);
}

double NNfunction_sb_cLsL::synapse0x1a737f0() {
   return (neuron0x1a60950()*0.0929064);
}

double NNfunction_sb_cLsL::synapse0x1a73830() {
   return (neuron0x1a60c90()*0.187641);
}

double NNfunction_sb_cLsL::synapse0x1a732c0() {
   return (neuron0x1a60fd0()*-1.02188);
}

double NNfunction_sb_cLsL::synapse0x1a73300() {
   return (neuron0x1a61530()*0.0524507);
}

double NNfunction_sb_cLsL::synapse0x1a73980() {
   return (neuron0x1a61870()*0.740955);
}

double NNfunction_sb_cLsL::synapse0x1a739c0() {
   return (neuron0x1a61bb0()*0.441781);
}

double NNfunction_sb_cLsL::synapse0x1a73a00() {
   return (neuron0x1a61ef0()*-0.854353);
}

double NNfunction_sb_cLsL::synapse0x1a73a40() {
   return (neuron0x1a62230()*-0.079558);
}

double NNfunction_sb_cLsL::synapse0x1a73a80() {
   return (neuron0x1a62570()*-0.493862);
}

double NNfunction_sb_cLsL::synapse0x1a73ac0() {
   return (neuron0x1a628b0()*0.334195);
}

double NNfunction_sb_cLsL::synapse0x1a73e40() {
   return (neuron0x1a5dc60()*0.0478882);
}

double NNfunction_sb_cLsL::synapse0x1a73e80() {
   return (neuron0x1a5df10()*-0.0136877);
}

double NNfunction_sb_cLsL::synapse0x1a73ec0() {
   return (neuron0x1a5e250()*-1.89713);
}

double NNfunction_sb_cLsL::synapse0x1a73f00() {
   return (neuron0x1a5e590()*0.087965);
}

double NNfunction_sb_cLsL::synapse0x1a73f40() {
   return (neuron0x1a5e8d0()*-0.0348128);
}

double NNfunction_sb_cLsL::synapse0x1a73f80() {
   return (neuron0x1a5ec10()*0.0562337);
}

double NNfunction_sb_cLsL::synapse0x1a73fc0() {
   return (neuron0x1a5ef50()*0.0360727);
}

double NNfunction_sb_cLsL::synapse0x1a74000() {
   return (neuron0x1a5f290()*-0.0097075);
}

double NNfunction_sb_cLsL::synapse0x1a74040() {
   return (neuron0x1a5f5d0()*-0.0137522);
}

double NNfunction_sb_cLsL::synapse0x1a74080() {
   return (neuron0x1a5f910()*0.039999);
}

double NNfunction_sb_cLsL::synapse0x1a740c0() {
   return (neuron0x1a5fc50()*-0.042379);
}

double NNfunction_sb_cLsL::synapse0x1a74100() {
   return (neuron0x1a5ff90()*0.0251122);
}

double NNfunction_sb_cLsL::synapse0x1a74140() {
   return (neuron0x1a602d0()*0.491931);
}

double NNfunction_sb_cLsL::synapse0x1a74180() {
   return (neuron0x1a60610()*-0.0968701);
}

double NNfunction_sb_cLsL::synapse0x1a741c0() {
   return (neuron0x1a60950()*-0.0309173);
}

double NNfunction_sb_cLsL::synapse0x1a74200() {
   return (neuron0x1a60c90()*-0.0330327);
}

double NNfunction_sb_cLsL::synapse0x1a73c90() {
   return (neuron0x1a60fd0()*-0.0279163);
}

double NNfunction_sb_cLsL::synapse0x1a73cd0() {
   return (neuron0x1a61530()*0.0341001);
}

double NNfunction_sb_cLsL::synapse0x1a74350() {
   return (neuron0x1a61870()*-0.0325811);
}

double NNfunction_sb_cLsL::synapse0x1a74390() {
   return (neuron0x1a61bb0()*-0.028955);
}

double NNfunction_sb_cLsL::synapse0x1a743d0() {
   return (neuron0x1a61ef0()*0.00539872);
}

double NNfunction_sb_cLsL::synapse0x1a74410() {
   return (neuron0x1a62230()*0.0259275);
}

double NNfunction_sb_cLsL::synapse0x1a74450() {
   return (neuron0x1a62570()*0.0549334);
}

double NNfunction_sb_cLsL::synapse0x1a74490() {
   return (neuron0x1a628b0()*0.10052);
}

double NNfunction_sb_cLsL::synapse0x1a86360() {
   return (neuron0x1a5dc60()*-0.0273984);
}

double NNfunction_sb_cLsL::synapse0x1a863a0() {
   return (neuron0x1a5df10()*-0.0456005);
}

double NNfunction_sb_cLsL::synapse0x1a863e0() {
   return (neuron0x1a5e250()*0.146722);
}

double NNfunction_sb_cLsL::synapse0x1a86420() {
   return (neuron0x1a5e590()*1.02072);
}

double NNfunction_sb_cLsL::synapse0x1a86460() {
   return (neuron0x1a5e8d0()*-0.0268026);
}

double NNfunction_sb_cLsL::synapse0x1a864a0() {
   return (neuron0x1a5ec10()*0.0742769);
}

double NNfunction_sb_cLsL::synapse0x1a864e0() {
   return (neuron0x1a5ef50()*-0.0354318);
}

double NNfunction_sb_cLsL::synapse0x1a86520() {
   return (neuron0x1a5f290()*0.0142754);
}

double NNfunction_sb_cLsL::synapse0x1a86560() {
   return (neuron0x1a5f5d0()*0.0201137);
}

double NNfunction_sb_cLsL::synapse0x1a865a0() {
   return (neuron0x1a5f910()*-0.00430545);
}

double NNfunction_sb_cLsL::synapse0x1a865e0() {
   return (neuron0x1a5fc50()*-0.00831719);
}

double NNfunction_sb_cLsL::synapse0x1a86620() {
   return (neuron0x1a5ff90()*0.0360681);
}

double NNfunction_sb_cLsL::synapse0x1a86660() {
   return (neuron0x1a602d0()*0.276949);
}

double NNfunction_sb_cLsL::synapse0x1a866a0() {
   return (neuron0x1a60610()*0.0485842);
}

double NNfunction_sb_cLsL::synapse0x1a866e0() {
   return (neuron0x1a60950()*-0.0686858);
}

double NNfunction_sb_cLsL::synapse0x1a86720() {
   return (neuron0x1a60c90()*-0.0481797);
}

double NNfunction_sb_cLsL::synapse0x1a744d0() {
   return (neuron0x1a60fd0()*0.046885);
}

double NNfunction_sb_cLsL::synapse0x1a74510() {
   return (neuron0x1a61530()*0.0359241);
}

double NNfunction_sb_cLsL::synapse0x1a86870() {
   return (neuron0x1a61870()*0.00752264);
}

double NNfunction_sb_cLsL::synapse0x1a868b0() {
   return (neuron0x1a61bb0()*-0.00507953);
}

double NNfunction_sb_cLsL::synapse0x1a868f0() {
   return (neuron0x1a61ef0()*-0.0137676);
}

double NNfunction_sb_cLsL::synapse0x1a86930() {
   return (neuron0x1a62230()*-0.00277971);
}

double NNfunction_sb_cLsL::synapse0x1a86970() {
   return (neuron0x1a62570()*0.0110962);
}

double NNfunction_sb_cLsL::synapse0x1a869b0() {
   return (neuron0x1a628b0()*-0.00660944);
}

double NNfunction_sb_cLsL::synapse0x1a86d30() {
   return (neuron0x1a5dc60()*-0.277605);
}

double NNfunction_sb_cLsL::synapse0x1a86d70() {
   return (neuron0x1a5df10()*-0.227167);
}

double NNfunction_sb_cLsL::synapse0x1a86db0() {
   return (neuron0x1a5e250()*-0.352259);
}

double NNfunction_sb_cLsL::synapse0x1a86df0() {
   return (neuron0x1a5e590()*0.568322);
}

double NNfunction_sb_cLsL::synapse0x1a86e30() {
   return (neuron0x1a5e8d0()*0.378923);
}

double NNfunction_sb_cLsL::synapse0x1a86e70() {
   return (neuron0x1a5ec10()*0.35046);
}

double NNfunction_sb_cLsL::synapse0x1a86eb0() {
   return (neuron0x1a5ef50()*0.490602);
}

double NNfunction_sb_cLsL::synapse0x1a86ef0() {
   return (neuron0x1a5f290()*0.252302);
}

double NNfunction_sb_cLsL::synapse0x1a86f30() {
   return (neuron0x1a5f5d0()*-1.47382);
}

double NNfunction_sb_cLsL::synapse0x1a86f70() {
   return (neuron0x1a5f910()*-0.032462);
}

double NNfunction_sb_cLsL::synapse0x1a86fb0() {
   return (neuron0x1a5fc50()*0.412192);
}

double NNfunction_sb_cLsL::synapse0x1a86ff0() {
   return (neuron0x1a5ff90()*1.36642);
}

double NNfunction_sb_cLsL::synapse0x1a87030() {
   return (neuron0x1a602d0()*-0.64392);
}

double NNfunction_sb_cLsL::synapse0x1a87070() {
   return (neuron0x1a60610()*-0.448062);
}

double NNfunction_sb_cLsL::synapse0x1a870b0() {
   return (neuron0x1a60950()*-0.509125);
}

double NNfunction_sb_cLsL::synapse0x1a870f0() {
   return (neuron0x1a60c90()*-0.232055);
}

double NNfunction_sb_cLsL::synapse0x1a86b80() {
   return (neuron0x1a60fd0()*0.0642512);
}

double NNfunction_sb_cLsL::synapse0x1a86bc0() {
   return (neuron0x1a61530()*-0.757731);
}

double NNfunction_sb_cLsL::synapse0x1a87240() {
   return (neuron0x1a61870()*0.537451);
}

double NNfunction_sb_cLsL::synapse0x1a87280() {
   return (neuron0x1a61bb0()*0.260046);
}

double NNfunction_sb_cLsL::synapse0x1a872c0() {
   return (neuron0x1a61ef0()*0.644177);
}

double NNfunction_sb_cLsL::synapse0x1a87300() {
   return (neuron0x1a62230()*0.273324);
}

double NNfunction_sb_cLsL::synapse0x1a87340() {
   return (neuron0x1a62570()*-0.488358);
}

double NNfunction_sb_cLsL::synapse0x1a87380() {
   return (neuron0x1a628b0()*0.420887);
}

double NNfunction_sb_cLsL::synapse0x1a87700() {
   return (neuron0x1a5dc60()*0.0586762);
}

double NNfunction_sb_cLsL::synapse0x1a87740() {
   return (neuron0x1a5df10()*-0.0436218);
}

double NNfunction_sb_cLsL::synapse0x1a87780() {
   return (neuron0x1a5e250()*0.333603);
}

double NNfunction_sb_cLsL::synapse0x1a877c0() {
   return (neuron0x1a5e590()*-1.84269);
}

double NNfunction_sb_cLsL::synapse0x1a87800() {
   return (neuron0x1a5e8d0()*-0.0117297);
}

double NNfunction_sb_cLsL::synapse0x1a87840() {
   return (neuron0x1a5ec10()*-0.070069);
}

double NNfunction_sb_cLsL::synapse0x1a87880() {
   return (neuron0x1a5ef50()*-0.0168386);
}

double NNfunction_sb_cLsL::synapse0x1a878c0() {
   return (neuron0x1a5f290()*0.0660156);
}

double NNfunction_sb_cLsL::synapse0x1a87900() {
   return (neuron0x1a5f5d0()*-0.0431197);
}

double NNfunction_sb_cLsL::synapse0x1a87940() {
   return (neuron0x1a5f910()*-0.0132685);
}

double NNfunction_sb_cLsL::synapse0x1a87980() {
   return (neuron0x1a5fc50()*-0.00284444);
}

double NNfunction_sb_cLsL::synapse0x1a879c0() {
   return (neuron0x1a5ff90()*0.219518);
}

double NNfunction_sb_cLsL::synapse0x1a87a00() {
   return (neuron0x1a602d0()*0.279267);
}

double NNfunction_sb_cLsL::synapse0x1a87a40() {
   return (neuron0x1a60610()*-0.0373892);
}

double NNfunction_sb_cLsL::synapse0x1a87a80() {
   return (neuron0x1a60950()*0.192599);
}

double NNfunction_sb_cLsL::synapse0x1a87ac0() {
   return (neuron0x1a60c90()*0.0557449);
}

double NNfunction_sb_cLsL::synapse0x1a87550() {
   return (neuron0x1a60fd0()*-0.0220239);
}

double NNfunction_sb_cLsL::synapse0x1a87590() {
   return (neuron0x1a61530()*0.142807);
}

double NNfunction_sb_cLsL::synapse0x1a87c10() {
   return (neuron0x1a61870()*0.103546);
}

double NNfunction_sb_cLsL::synapse0x1a87c50() {
   return (neuron0x1a61bb0()*-0.0080119);
}

double NNfunction_sb_cLsL::synapse0x1a87c90() {
   return (neuron0x1a61ef0()*0.00628932);
}

double NNfunction_sb_cLsL::synapse0x1a87cd0() {
   return (neuron0x1a62230()*0.0303725);
}

double NNfunction_sb_cLsL::synapse0x1a87d10() {
   return (neuron0x1a62570()*0.00751845);
}

double NNfunction_sb_cLsL::synapse0x1a87d50() {
   return (neuron0x1a628b0()*0.028266);
}

double NNfunction_sb_cLsL::synapse0x1a880d0() {
   return (neuron0x1a5dc60()*-0.660432);
}

double NNfunction_sb_cLsL::synapse0x1a88110() {
   return (neuron0x1a5df10()*-0.175511);
}

double NNfunction_sb_cLsL::synapse0x1a88150() {
   return (neuron0x1a5e250()*-0.316102);
}

double NNfunction_sb_cLsL::synapse0x1a88190() {
   return (neuron0x1a5e590()*-2.49554);
}

double NNfunction_sb_cLsL::synapse0x1a881d0() {
   return (neuron0x1a5e8d0()*-0.0244484);
}

double NNfunction_sb_cLsL::synapse0x1a88210() {
   return (neuron0x1a5ec10()*0.0732651);
}

double NNfunction_sb_cLsL::synapse0x1a88250() {
   return (neuron0x1a5ef50()*-0.0100265);
}

double NNfunction_sb_cLsL::synapse0x1a88290() {
   return (neuron0x1a5f290()*-0.139996);
}

double NNfunction_sb_cLsL::synapse0x1a882d0() {
   return (neuron0x1a5f5d0()*0.158275);
}

double NNfunction_sb_cLsL::synapse0x1a88310() {
   return (neuron0x1a5f910()*-0.132368);
}

double NNfunction_sb_cLsL::synapse0x1a88350() {
   return (neuron0x1a5fc50()*0.117565);
}

double NNfunction_sb_cLsL::synapse0x1a88390() {
   return (neuron0x1a5ff90()*0.273992);
}

double NNfunction_sb_cLsL::synapse0x1a883d0() {
   return (neuron0x1a602d0()*0.55156);
}

double NNfunction_sb_cLsL::synapse0x1a88410() {
   return (neuron0x1a60610()*0.508194);
}

double NNfunction_sb_cLsL::synapse0x1a88450() {
   return (neuron0x1a60950()*-0.515412);
}

double NNfunction_sb_cLsL::synapse0x1a88490() {
   return (neuron0x1a60c90()*-0.736341);
}

double NNfunction_sb_cLsL::synapse0x1a87f20() {
   return (neuron0x1a60fd0()*0.831216);
}

double NNfunction_sb_cLsL::synapse0x1a87f60() {
   return (neuron0x1a61530()*-0.0987665);
}

double NNfunction_sb_cLsL::synapse0x1a885e0() {
   return (neuron0x1a61870()*-0.013603);
}

double NNfunction_sb_cLsL::synapse0x1a88620() {
   return (neuron0x1a61bb0()*-0.283137);
}

double NNfunction_sb_cLsL::synapse0x1a88660() {
   return (neuron0x1a61ef0()*-0.644713);
}

double NNfunction_sb_cLsL::synapse0x1a886a0() {
   return (neuron0x1a62230()*0.569997);
}

double NNfunction_sb_cLsL::synapse0x1a886e0() {
   return (neuron0x1a62570()*-0.272583);
}

double NNfunction_sb_cLsL::synapse0x1a88720() {
   return (neuron0x1a628b0()*-0.231373);
}

double NNfunction_sb_cLsL::synapse0x1828590() {
   return (neuron0x1a62d20()*-0.324653);
}

double NNfunction_sb_cLsL::synapse0x18285d0() {
   return (neuron0x1a63560()*0.883446);
}

double NNfunction_sb_cLsL::synapse0x1a650d0() {
   return (neuron0x1a64040()*0.15902);
}

double NNfunction_sb_cLsL::synapse0x1a65110() {
   return (neuron0x1a63ae0()*-1.15472);
}

double NNfunction_sb_cLsL::synapse0x1a66ba0() {
   return (neuron0x1a64e20()*-0.0434711);
}

double NNfunction_sb_cLsL::synapse0x1a66be0() {
   return (neuron0x1a668f0()*-0.161511);
}

double NNfunction_sb_cLsL::synapse0x1a67970() {
   return (neuron0x1a676c0()*-0.602611);
}

double NNfunction_sb_cLsL::synapse0x1a679b0() {
   return (neuron0x1a68090()*-0.528784);
}

double NNfunction_sb_cLsL::synapse0x1a68340() {
   return (neuron0x1a68a60()*-0.120697);
}

double NNfunction_sb_cLsL::synapse0x1a68380() {
   return (neuron0x1a69540()*-4.02321);
}

double NNfunction_sb_cLsL::synapse0x1a68d10() {
   return (neuron0x1a69f10()*2.0412);
}

double NNfunction_sb_cLsL::synapse0x1a68d50() {
   return (neuron0x1a66ff0()*0.167373);
}

double NNfunction_sb_cLsL::synapse0x1a697f0() {
   return (neuron0x1a6bac0()*-0.240828);
}

double NNfunction_sb_cLsL::synapse0x1a69830() {
   return (neuron0x1a6c490()*-3.12262);
}

double NNfunction_sb_cLsL::synapse0x1a6a1c0() {
   return (neuron0x1a6ce60()*-0.185184);
}

double NNfunction_sb_cLsL::synapse0x1a6a200() {
   return (neuron0x1a6d830()*0.291535);
}

double NNfunction_sb_cLsL::synapse0x1a672a0() {
   return (neuron0x1a6f640()*-0.0277901);
}

double NNfunction_sb_cLsL::synapse0x1a672e0() {
   return (neuron0x1a6f920()*-0.645279);
}

double NNfunction_sb_cLsL::synapse0x1a6bd70() {
   return (neuron0x1a702f0()*-1.27832);
}

double NNfunction_sb_cLsL::synapse0x1a6bdb0() {
   return (neuron0x1a70cc0()*0.182098);
}

double NNfunction_sb_cLsL::synapse0x1a6c740() {
   return (neuron0x1a71690()*1.47915);
}

double NNfunction_sb_cLsL::synapse0x1a6c780() {
   return (neuron0x1a72060()*-0.0452999);
}

double NNfunction_sb_cLsL::synapse0x1a6d110() {
   return (neuron0x1a6abb0()*0.16704);
}

double NNfunction_sb_cLsL::synapse0x1a6d150() {
   return (neuron0x1a6b580()*-0.990075);
}

double NNfunction_sb_cLsL::synapse0x1a6dae0() {
   return (neuron0x1a74df0()*0.0140607);
}

double NNfunction_sb_cLsL::synapse0x1a6db20() {
   return (neuron0x1a757c0()*0.508172);
}

double NNfunction_sb_cLsL::synapse0x1a60b70() {
   return (neuron0x1a76190()*-0.00266485);
}

double NNfunction_sb_cLsL::synapse0x1a60bb0() {
   return (neuron0x1a76b60()*-3.36207);
}

double NNfunction_sb_cLsL::synapse0x1a6fbd0() {
   return (neuron0x1a77530()*0.13484);
}

double NNfunction_sb_cLsL::synapse0x1a6fc10() {
   return (neuron0x1a77f00()*-0.042289);
}

double NNfunction_sb_cLsL::synapse0x1a705a0() {
   return (neuron0x1a788d0()*1.17055);
}

double NNfunction_sb_cLsL::synapse0x1a705e0() {
   return (neuron0x1a792a0()*0.385203);
}

double NNfunction_sb_cLsL::synapse0x1a70f70() {
   return (neuron0x1a6f330()*0.217335);
}

double NNfunction_sb_cLsL::synapse0x1a70fb0() {
   return (neuron0x1a7be80()*-0.326555);
}

double NNfunction_sb_cLsL::synapse0x1a71940() {
   return (neuron0x1a7c850()*1.54455);
}

double NNfunction_sb_cLsL::synapse0x1a71980() {
   return (neuron0x1a7d220()*0.423817);
}

double NNfunction_sb_cLsL::synapse0x1a72310() {
   return (neuron0x1a7dbf0()*-0.122647);
}

double NNfunction_sb_cLsL::synapse0x1a72350() {
   return (neuron0x1a7e5c0()*-0.117866);
}

double NNfunction_sb_cLsL::synapse0x1a6ae60() {
   return (neuron0x1a7ef90()*0.505876);
}

double NNfunction_sb_cLsL::synapse0x1a6aea0() {
   return (neuron0x1a7f960()*0.0286635);
}

double NNfunction_sb_cLsL::synapse0x1a74710() {
   return (neuron0x1a80330()*-0.0213289);
}

double NNfunction_sb_cLsL::synapse0x1a74750() {
   return (neuron0x1a80f10()*0.269058);
}

double NNfunction_sb_cLsL::synapse0x1a750a0() {
   return (neuron0x1a818e0()*2.98508);
}

double NNfunction_sb_cLsL::synapse0x1a750e0() {
   return (neuron0x1a72760()*0.112382);
}

double NNfunction_sb_cLsL::synapse0x1a75a70() {
   return (neuron0x1a73130()*0.00271895);
}

double NNfunction_sb_cLsL::synapse0x1a75ab0() {
   return (neuron0x1a73b00()*-0.159935);
}

double NNfunction_sb_cLsL::synapse0x1a76440() {
   return (neuron0x1a86140()*-1.95221);
}

double NNfunction_sb_cLsL::synapse0x1a76480() {
   return (neuron0x1a869f0()*0.0282972);
}

double NNfunction_sb_cLsL::synapse0x1a76e10() {
   return (neuron0x1a873c0()*-0.955315);
}

double NNfunction_sb_cLsL::synapse0x1a76e50() {
   return (neuron0x1a87d90()*0.233412);
}

double NNfunction_sb_cLsL::synapse0x1a79550() {
   return (neuron0x1a62d20()*-0.124349);
}

double NNfunction_sb_cLsL::synapse0x1a79590() {
   return (neuron0x1a63560()*-1.78067);
}

double NNfunction_sb_cLsL::synapse0x1a6eb10() {
   return (neuron0x1a64040()*0.0135293);
}

double NNfunction_sb_cLsL::synapse0x1a6eb50() {
   return (neuron0x1a63ae0()*1.49793);
}

double NNfunction_sb_cLsL::synapse0x1a7c130() {
   return (neuron0x1a64e20()*-0.0261088);
}

double NNfunction_sb_cLsL::synapse0x1a7c170() {
   return (neuron0x1a668f0()*0.0504689);
}

double NNfunction_sb_cLsL::synapse0x1a7cb00() {
   return (neuron0x1a676c0()*-2.50325);
}

double NNfunction_sb_cLsL::synapse0x1a7cb40() {
   return (neuron0x1a68090()*-0.0903868);
}

double NNfunction_sb_cLsL::synapse0x1a7d4d0() {
   return (neuron0x1a68a60()*-0.0980893);
}

double NNfunction_sb_cLsL::synapse0x1a7d510() {
   return (neuron0x1a69540()*0.0976457);
}

double NNfunction_sb_cLsL::synapse0x1a7dea0() {
   return (neuron0x1a69f10()*1.1221);
}

double NNfunction_sb_cLsL::synapse0x1a7dee0() {
   return (neuron0x1a66ff0()*-0.127309);
}

double NNfunction_sb_cLsL::synapse0x1a7e870() {
   return (neuron0x1a6bac0()*0.0861954);
}

double NNfunction_sb_cLsL::synapse0x1a7e8b0() {
   return (neuron0x1a6c490()*0.399791);
}

double NNfunction_sb_cLsL::synapse0x1a7f240() {
   return (neuron0x1a6ce60()*-0.0895591);
}

double NNfunction_sb_cLsL::synapse0x1a7f280() {
   return (neuron0x1a6d830()*-0.618359);
}

double NNfunction_sb_cLsL::synapse0x1a7fc10() {
   return (neuron0x1a6f640()*-0.177515);
}

double NNfunction_sb_cLsL::synapse0x1a7fc50() {
   return (neuron0x1a6f920()*1.25816);
}

double NNfunction_sb_cLsL::synapse0x1a805e0() {
   return (neuron0x1a702f0()*0.969169);
}

double NNfunction_sb_cLsL::synapse0x1a80620() {
   return (neuron0x1a70cc0()*-0.169295);
}

double NNfunction_sb_cLsL::synapse0x1a811c0() {
   return (neuron0x1a71690()*-0.345179);
}

double NNfunction_sb_cLsL::synapse0x1a81200() {
   return (neuron0x1a72060()*0.0379757);
}

double NNfunction_sb_cLsL::synapse0x1a81b90() {
   return (neuron0x1a6abb0()*-0.336412);
}

double NNfunction_sb_cLsL::synapse0x1a81bd0() {
   return (neuron0x1a6b580()*-1.68903);
}

double NNfunction_sb_cLsL::synapse0x1a72a10() {
   return (neuron0x1a74df0()*1.38641);
}

double NNfunction_sb_cLsL::synapse0x1a72a50() {
   return (neuron0x1a757c0()*-0.445261);
}

double NNfunction_sb_cLsL::synapse0x1a733e0() {
   return (neuron0x1a76190()*-0.0534998);
}

double NNfunction_sb_cLsL::synapse0x1a73420() {
   return (neuron0x1a76b60()*0.81045);
}

double NNfunction_sb_cLsL::synapse0x1a73db0() {
   return (neuron0x1a77530()*-0.0691052);
}

double NNfunction_sb_cLsL::synapse0x1a73df0() {
   return (neuron0x1a77f00()*0.123334);
}

double NNfunction_sb_cLsL::synapse0x1a862d0() {
   return (neuron0x1a788d0()*-0.0274466);
}

double NNfunction_sb_cLsL::synapse0x1a86310() {
   return (neuron0x1a792a0()*0.05486);
}

double NNfunction_sb_cLsL::synapse0x1a86ca0() {
   return (neuron0x1a6f330()*0.0207338);
}

double NNfunction_sb_cLsL::synapse0x1a86ce0() {
   return (neuron0x1a7be80()*-0.0178915);
}

double NNfunction_sb_cLsL::synapse0x1a87670() {
   return (neuron0x1a7c850()*-3.12884);
}

double NNfunction_sb_cLsL::synapse0x1a876b0() {
   return (neuron0x1a7d220()*-0.00327578);
}

double NNfunction_sb_cLsL::synapse0x1a88040() {
   return (neuron0x1a7dbf0()*0.444054);
}

double NNfunction_sb_cLsL::synapse0x1a88080() {
   return (neuron0x1a7e5c0()*0.00579861);
}

double NNfunction_sb_cLsL::synapse0x1a62fd0() {
   return (neuron0x1a7ef90()*-1.32659);
}

double NNfunction_sb_cLsL::synapse0x1a63010() {
   return (neuron0x1a7f960()*-0.0786126);
}

double NNfunction_sb_cLsL::synapse0x1a777e0() {
   return (neuron0x1a80330()*0.0135318);
}

double NNfunction_sb_cLsL::synapse0x1a77820() {
   return (neuron0x1a80f10()*0.371528);
}

double NNfunction_sb_cLsL::synapse0x1a88760() {
   return (neuron0x1a818e0()*-2.59219);
}

double NNfunction_sb_cLsL::synapse0x1a887a0() {
   return (neuron0x1a72760()*0.0610382);
}

double NNfunction_sb_cLsL::synapse0x1a887e0() {
   return (neuron0x1a73130()*0.128649);
}

double NNfunction_sb_cLsL::synapse0x1a88820() {
   return (neuron0x1a73b00()*0.611371);
}

double NNfunction_sb_cLsL::synapse0x1a8f6d0() {
   return (neuron0x1a86140()*1.16396);
}

double NNfunction_sb_cLsL::synapse0x1a8f710() {
   return (neuron0x1a869f0()*-0.0830524);
}

double NNfunction_sb_cLsL::synapse0x1a8f750() {
   return (neuron0x1a873c0()*1.60098);
}

double NNfunction_sb_cLsL::synapse0x1a8f790() {
   return (neuron0x1a87d90()*-0.190918);
}

double NNfunction_sb_cLsL::synapse0x1a8fb10() {
   return (neuron0x1a62d20()*0.214044);
}

double NNfunction_sb_cLsL::synapse0x1a8fb50() {
   return (neuron0x1a63560()*4.6229);
}

double NNfunction_sb_cLsL::synapse0x1a8fb90() {
   return (neuron0x1a64040()*1.63651);
}

double NNfunction_sb_cLsL::synapse0x1a8fbd0() {
   return (neuron0x1a63ae0()*-1.63546);
}

double NNfunction_sb_cLsL::synapse0x1a8fc10() {
   return (neuron0x1a64e20()*-2.26048);
}

double NNfunction_sb_cLsL::synapse0x1a8fc50() {
   return (neuron0x1a668f0()*-2.01304);
}

double NNfunction_sb_cLsL::synapse0x1a8fc90() {
   return (neuron0x1a676c0()*-1.1611);
}

double NNfunction_sb_cLsL::synapse0x1a8fcd0() {
   return (neuron0x1a68090()*1.1249);
}

double NNfunction_sb_cLsL::synapse0x1a8fd10() {
   return (neuron0x1a68a60()*1.88853);
}

double NNfunction_sb_cLsL::synapse0x1a8fd50() {
   return (neuron0x1a69540()*-1.15342);
}

double NNfunction_sb_cLsL::synapse0x1a8fd90() {
   return (neuron0x1a69f10()*-0.356229);
}

double NNfunction_sb_cLsL::synapse0x1a8fdd0() {
   return (neuron0x1a66ff0()*1.53947);
}

double NNfunction_sb_cLsL::synapse0x1a8fe10() {
   return (neuron0x1a6bac0()*-1.9553);
}

double NNfunction_sb_cLsL::synapse0x1a8fe50() {
   return (neuron0x1a6c490()*-1.82564);
}

double NNfunction_sb_cLsL::synapse0x1a8fe90() {
   return (neuron0x1a6ce60()*0.948755);
}

double NNfunction_sb_cLsL::synapse0x1a8fed0() {
   return (neuron0x1a6d830()*2.13853);
}

double NNfunction_sb_cLsL::synapse0x1a8f960() {
   return (neuron0x1a6f640()*2.75536);
}

double NNfunction_sb_cLsL::synapse0x1a8f9a0() {
   return (neuron0x1a6f920()*-1.24344);
}

double NNfunction_sb_cLsL::synapse0x1a90020() {
   return (neuron0x1a702f0()*-1.66744);
}

double NNfunction_sb_cLsL::synapse0x1a90060() {
   return (neuron0x1a70cc0()*3.15784);
}

double NNfunction_sb_cLsL::synapse0x1a900a0() {
   return (neuron0x1a71690()*-0.758409);
}

double NNfunction_sb_cLsL::synapse0x1a900e0() {
   return (neuron0x1a72060()*-2.29449);
}

double NNfunction_sb_cLsL::synapse0x1a90120() {
   return (neuron0x1a6abb0()*4.2504);
}

double NNfunction_sb_cLsL::synapse0x1a90160() {
   return (neuron0x1a6b580()*-2.42216);
}

double NNfunction_sb_cLsL::synapse0x1a901a0() {
   return (neuron0x1a74df0()*1.59232);
}

double NNfunction_sb_cLsL::synapse0x1a901e0() {
   return (neuron0x1a757c0()*-0.387997);
}

double NNfunction_sb_cLsL::synapse0x1a90220() {
   return (neuron0x1a76190()*1.58147);
}

double NNfunction_sb_cLsL::synapse0x1a90260() {
   return (neuron0x1a76b60()*1.0273);
}

double NNfunction_sb_cLsL::synapse0x1a902a0() {
   return (neuron0x1a77530()*2.03815);
}

double NNfunction_sb_cLsL::synapse0x1a902e0() {
   return (neuron0x1a77f00()*-2.55099);
}

double NNfunction_sb_cLsL::synapse0x1a90320() {
   return (neuron0x1a788d0()*1.23594);
}

double NNfunction_sb_cLsL::synapse0x1a90360() {
   return (neuron0x1a792a0()*1.17689);
}

double NNfunction_sb_cLsL::synapse0x1a8ff10() {
   return (neuron0x1a6f330()*1.36074);
}

double NNfunction_sb_cLsL::synapse0x1a8ff50() {
   return (neuron0x1a7be80()*1.97089);
}

double NNfunction_sb_cLsL::synapse0x1a8ff90() {
   return (neuron0x1a7c850()*1.39486);
}

double NNfunction_sb_cLsL::synapse0x1a8ffd0() {
   return (neuron0x1a7d220()*-0.701029);
}

double NNfunction_sb_cLsL::synapse0x1a905b0() {
   return (neuron0x1a7dbf0()*-3.76689);
}

double NNfunction_sb_cLsL::synapse0x1a905f0() {
   return (neuron0x1a7e5c0()*2.25803);
}

double NNfunction_sb_cLsL::synapse0x1a90630() {
   return (neuron0x1a7ef90()*1.20364);
}

double NNfunction_sb_cLsL::synapse0x1a90670() {
   return (neuron0x1a7f960()*1.84265);
}

double NNfunction_sb_cLsL::synapse0x1a906b0() {
   return (neuron0x1a80330()*-1.90661);
}

double NNfunction_sb_cLsL::synapse0x1a906f0() {
   return (neuron0x1a80f10()*-3.69967);
}

double NNfunction_sb_cLsL::synapse0x1a90730() {
   return (neuron0x1a818e0()*-1.12937);
}

double NNfunction_sb_cLsL::synapse0x1a90770() {
   return (neuron0x1a72760()*-1.60119);
}

double NNfunction_sb_cLsL::synapse0x1a907b0() {
   return (neuron0x1a73130()*-2.90884);
}

double NNfunction_sb_cLsL::synapse0x1a907f0() {
   return (neuron0x1a73b00()*-3.17786);
}

double NNfunction_sb_cLsL::synapse0x1a90830() {
   return (neuron0x1a86140()*-1.69044);
}

double NNfunction_sb_cLsL::synapse0x1a90870() {
   return (neuron0x1a869f0()*1.52514);
}

double NNfunction_sb_cLsL::synapse0x1a908b0() {
   return (neuron0x1a873c0()*-0.10678);
}

double NNfunction_sb_cLsL::synapse0x1a908f0() {
   return (neuron0x1a87d90()*2.14922);
}

double NNfunction_sb_cLsL::synapse0x1a90c70() {
   return (neuron0x1a62d20()*-0.216083);
}

double NNfunction_sb_cLsL::synapse0x1a90cb0() {
   return (neuron0x1a63560()*2.06316);
}

double NNfunction_sb_cLsL::synapse0x1a90cf0() {
   return (neuron0x1a64040()*0.15733);
}

double NNfunction_sb_cLsL::synapse0x1a90d30() {
   return (neuron0x1a63ae0()*-2.70404);
}

double NNfunction_sb_cLsL::synapse0x1a90d70() {
   return (neuron0x1a64e20()*0.0152929);
}

double NNfunction_sb_cLsL::synapse0x1a90db0() {
   return (neuron0x1a668f0()*-0.279756);
}

double NNfunction_sb_cLsL::synapse0x1a90df0() {
   return (neuron0x1a676c0()*-0.93473);
}

double NNfunction_sb_cLsL::synapse0x1a90e30() {
   return (neuron0x1a68090()*-0.485975);
}

double NNfunction_sb_cLsL::synapse0x1a90e70() {
   return (neuron0x1a68a60()*0.0719886);
}

double NNfunction_sb_cLsL::synapse0x1a90eb0() {
   return (neuron0x1a69540()*-0.341013);
}

double NNfunction_sb_cLsL::synapse0x1a90ef0() {
   return (neuron0x1a69f10()*0.990338);
}

double NNfunction_sb_cLsL::synapse0x1a90f30() {
   return (neuron0x1a66ff0()*0.403544);
}

double NNfunction_sb_cLsL::synapse0x1a90f70() {
   return (neuron0x1a6bac0()*-0.527849);
}

double NNfunction_sb_cLsL::synapse0x1a90fb0() {
   return (neuron0x1a6c490()*1.42183);
}

double NNfunction_sb_cLsL::synapse0x1a90ff0() {
   return (neuron0x1a6ce60()*-0.0141589);
}

double NNfunction_sb_cLsL::synapse0x1a91030() {
   return (neuron0x1a6d830()*0.68962);
}

double NNfunction_sb_cLsL::synapse0x1a90ac0() {
   return (neuron0x1a6f640()*0.298694);
}

double NNfunction_sb_cLsL::synapse0x1a90b00() {
   return (neuron0x1a6f920()*-0.256904);
}

double NNfunction_sb_cLsL::synapse0x1a91180() {
   return (neuron0x1a702f0()*-1.41243);
}

double NNfunction_sb_cLsL::synapse0x1a911c0() {
   return (neuron0x1a70cc0()*0.43645);
}

double NNfunction_sb_cLsL::synapse0x1a91200() {
   return (neuron0x1a71690()*0.639722);
}

double NNfunction_sb_cLsL::synapse0x1a91240() {
   return (neuron0x1a72060()*-0.0796245);
}

double NNfunction_sb_cLsL::synapse0x1a91280() {
   return (neuron0x1a6abb0()*0.591102);
}

double NNfunction_sb_cLsL::synapse0x1a912c0() {
   return (neuron0x1a6b580()*-0.437382);
}

double NNfunction_sb_cLsL::synapse0x1a91300() {
   return (neuron0x1a74df0()*0.863497);
}

double NNfunction_sb_cLsL::synapse0x1a91340() {
   return (neuron0x1a757c0()*1.61063);
}

double NNfunction_sb_cLsL::synapse0x1a91380() {
   return (neuron0x1a76190()*0.122165);
}

double NNfunction_sb_cLsL::synapse0x1a913c0() {
   return (neuron0x1a76b60()*0.755938);
}

double NNfunction_sb_cLsL::synapse0x1a91400() {
   return (neuron0x1a77530()*0.308112);
}

double NNfunction_sb_cLsL::synapse0x1a91440() {
   return (neuron0x1a77f00()*-0.923239);
}

double NNfunction_sb_cLsL::synapse0x1a91480() {
   return (neuron0x1a788d0()*2.44117);
}

double NNfunction_sb_cLsL::synapse0x1a914c0() {
   return (neuron0x1a792a0()*0.392606);
}

double NNfunction_sb_cLsL::synapse0x1a91070() {
   return (neuron0x1a6f330()*0.239531);
}

double NNfunction_sb_cLsL::synapse0x1a910b0() {
   return (neuron0x1a7be80()*-0.373883);
}

double NNfunction_sb_cLsL::synapse0x1a910f0() {
   return (neuron0x1a7c850()*3.29662);
}

double NNfunction_sb_cLsL::synapse0x1a91130() {
   return (neuron0x1a7d220()*0.306153);
}

double NNfunction_sb_cLsL::synapse0x1a91710() {
   return (neuron0x1a7dbf0()*-1.18914);
}

double NNfunction_sb_cLsL::synapse0x1a91750() {
   return (neuron0x1a7e5c0()*-0.114337);
}

double NNfunction_sb_cLsL::synapse0x1a91790() {
   return (neuron0x1a7ef90()*-0.379466);
}

double NNfunction_sb_cLsL::synapse0x1a917d0() {
   return (neuron0x1a7f960()*0.163148);
}

double NNfunction_sb_cLsL::synapse0x1a91810() {
   return (neuron0x1a80330()*-0.0277756);
}

double NNfunction_sb_cLsL::synapse0x1a91850() {
   return (neuron0x1a80f10()*-0.410589);
}

double NNfunction_sb_cLsL::synapse0x1a91890() {
   return (neuron0x1a818e0()*2.62469);
}

double NNfunction_sb_cLsL::synapse0x1a918d0() {
   return (neuron0x1a72760()*0.0249778);
}

double NNfunction_sb_cLsL::synapse0x1a91910() {
   return (neuron0x1a73130()*-0.134745);
}

double NNfunction_sb_cLsL::synapse0x1a91950() {
   return (neuron0x1a73b00()*-0.994089);
}

double NNfunction_sb_cLsL::synapse0x1a91990() {
   return (neuron0x1a86140()*-0.435071);
}

double NNfunction_sb_cLsL::synapse0x1a919d0() {
   return (neuron0x1a869f0()*0.178097);
}

double NNfunction_sb_cLsL::synapse0x1a91a10() {
   return (neuron0x1a873c0()*-0.351839);
}

double NNfunction_sb_cLsL::synapse0x1a91a50() {
   return (neuron0x1a87d90()*0.595644);
}

double NNfunction_sb_cLsL::synapse0x1a91dd0() {
   return (neuron0x1a62d20()*0.580198);
}

double NNfunction_sb_cLsL::synapse0x1a91e10() {
   return (neuron0x1a63560()*0.613315);
}

double NNfunction_sb_cLsL::synapse0x1a91e50() {
   return (neuron0x1a64040()*-0.296402);
}

double NNfunction_sb_cLsL::synapse0x1a91e90() {
   return (neuron0x1a63ae0()*-0.724824);
}

double NNfunction_sb_cLsL::synapse0x1a91ed0() {
   return (neuron0x1a64e20()*0.100492);
}

double NNfunction_sb_cLsL::synapse0x1a91f10() {
   return (neuron0x1a668f0()*0.326976);
}

double NNfunction_sb_cLsL::synapse0x1a91f50() {
   return (neuron0x1a676c0()*0.083827);
}

double NNfunction_sb_cLsL::synapse0x1a91f90() {
   return (neuron0x1a68090()*0.980079);
}

double NNfunction_sb_cLsL::synapse0x1a91fd0() {
   return (neuron0x1a68a60()*0.169802);
}

double NNfunction_sb_cLsL::synapse0x1a92010() {
   return (neuron0x1a69540()*-1.55177);
}

double NNfunction_sb_cLsL::synapse0x1a92050() {
   return (neuron0x1a69f10()*-1.62622);
}

double NNfunction_sb_cLsL::synapse0x1a92090() {
   return (neuron0x1a66ff0()*-0.286269);
}

double NNfunction_sb_cLsL::synapse0x1a920d0() {
   return (neuron0x1a6bac0()*0.540914);
}

double NNfunction_sb_cLsL::synapse0x1a92110() {
   return (neuron0x1a6c490()*-1.3642);
}

double NNfunction_sb_cLsL::synapse0x1a92150() {
   return (neuron0x1a6ce60()*0.274045);
}

double NNfunction_sb_cLsL::synapse0x1a92190() {
   return (neuron0x1a6d830()*0.0540016);
}

double NNfunction_sb_cLsL::synapse0x1a91c20() {
   return (neuron0x1a6f640()*0.000921097);
}

double NNfunction_sb_cLsL::synapse0x1a91c60() {
   return (neuron0x1a6f920()*-0.240497);
}

double NNfunction_sb_cLsL::synapse0x1a922e0() {
   return (neuron0x1a702f0()*0.156958);
}

double NNfunction_sb_cLsL::synapse0x1a92320() {
   return (neuron0x1a70cc0()*-0.279861);
}

double NNfunction_sb_cLsL::synapse0x1a92360() {
   return (neuron0x1a71690()*-1.36968);
}

double NNfunction_sb_cLsL::synapse0x1a923a0() {
   return (neuron0x1a72060()*0.0736932);
}

double NNfunction_sb_cLsL::synapse0x1a923e0() {
   return (neuron0x1a6abb0()*-0.127972);
}

double NNfunction_sb_cLsL::synapse0x1a92420() {
   return (neuron0x1a6b580()*-0.275714);
}

double NNfunction_sb_cLsL::synapse0x1a92460() {
   return (neuron0x1a74df0()*0.11014);
}

double NNfunction_sb_cLsL::synapse0x1a924a0() {
   return (neuron0x1a757c0()*-0.197429);
}

double NNfunction_sb_cLsL::synapse0x1a924e0() {
   return (neuron0x1a76190()*-0.0506772);
}

double NNfunction_sb_cLsL::synapse0x1a92520() {
   return (neuron0x1a76b60()*-1.05003);
}

double NNfunction_sb_cLsL::synapse0x1a92560() {
   return (neuron0x1a77530()*-0.29612);
}

double NNfunction_sb_cLsL::synapse0x1a925a0() {
   return (neuron0x1a77f00()*0.369285);
}

double NNfunction_sb_cLsL::synapse0x1a925e0() {
   return (neuron0x1a788d0()*1.93315);
}

double NNfunction_sb_cLsL::synapse0x1a92620() {
   return (neuron0x1a792a0()*-0.728984);
}

double NNfunction_sb_cLsL::synapse0x1a921d0() {
   return (neuron0x1a6f330()*-0.40502);
}

double NNfunction_sb_cLsL::synapse0x1a92210() {
   return (neuron0x1a7be80()*0.538945);
}

double NNfunction_sb_cLsL::synapse0x1a92250() {
   return (neuron0x1a7c850()*0.811354);
}

double NNfunction_sb_cLsL::synapse0x1a92290() {
   return (neuron0x1a7d220()*-0.594005);
}

double NNfunction_sb_cLsL::synapse0x1a92870() {
   return (neuron0x1a7dbf0()*-0.181037);
}

double NNfunction_sb_cLsL::synapse0x1a928b0() {
   return (neuron0x1a7e5c0()*0.139057);
}

double NNfunction_sb_cLsL::synapse0x1a928f0() {
   return (neuron0x1a7ef90()*-0.247234);
}

double NNfunction_sb_cLsL::synapse0x1a92930() {
   return (neuron0x1a7f960()*-0.0398161);
}

double NNfunction_sb_cLsL::synapse0x1a92970() {
   return (neuron0x1a80330()*0.0399301);
}

double NNfunction_sb_cLsL::synapse0x1a929b0() {
   return (neuron0x1a80f10()*-0.442495);
}

double NNfunction_sb_cLsL::synapse0x1a929f0() {
   return (neuron0x1a818e0()*-1.07474);
}

double NNfunction_sb_cLsL::synapse0x1a92a30() {
   return (neuron0x1a72760()*-0.167037);
}

double NNfunction_sb_cLsL::synapse0x1a92a70() {
   return (neuron0x1a73130()*-0.0183581);
}

double NNfunction_sb_cLsL::synapse0x1a92ab0() {
   return (neuron0x1a73b00()*-0.299819);
}

double NNfunction_sb_cLsL::synapse0x1a92af0() {
   return (neuron0x1a86140()*-1.62273);
}

double NNfunction_sb_cLsL::synapse0x1a92b30() {
   return (neuron0x1a869f0()*-0.0603856);
}

double NNfunction_sb_cLsL::synapse0x1a92b70() {
   return (neuron0x1a873c0()*1.03532);
}

double NNfunction_sb_cLsL::synapse0x1a92bb0() {
   return (neuron0x1a87d90()*-0.414145);
}

double NNfunction_sb_cLsL::synapse0x1a92e10() {
   return (neuron0x1a8ef90()*-8.10742);
}

double NNfunction_sb_cLsL::synapse0x1a92e50() {
   return (neuron0x1a8f330()*-6.31859);
}

double NNfunction_sb_cLsL::synapse0x1a92e90() {
   return (neuron0x1a8f7d0()*-5.50225);
}

double NNfunction_sb_cLsL::synapse0x1a92ed0() {
   return (neuron0x1a90930()*-4.06388);
}

double NNfunction_sb_cLsL::synapse0x1a92f10() {
   return (neuron0x1a91a90()*-3.52472);
}

