#include "NNfunction_sb_uRdR.h"
#include <cmath>

double NNfunction_sb_uRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9312)/15.0282;
   input1 = (in1 - 54.6332)/737.659;
   input2 = (in2 - 368.4)/463.025;
   input3 = (in3 - 290.707)/611.39;
   input4 = (in4 - 761.677)/683.904;
   input5 = (in5 - 671.427)/662.674;
   input6 = (in6 - 676.134)/664.096;
   input7 = (in7 - 668.252)/657.899;
   input8 = (in8 - 661.612)/677.147;
   input9 = (in9 - 652.658)/663.093;
   input10 = (in10 - 657.531)/683.024;
   input11 = (in11 - 713.206)/573.457;
   input12 = (in12 - 715.902)/578.381;
   input13 = (in13 - 556.666)/365.091;
   input14 = (in14 - 607.63)/374.393;
   input15 = (in15 - 711.827)/553.495;
   input16 = (in16 - 496.475)/385.668;
   input17 = (in17 - 598.236)/372.593;
   input18 = (in18 - 716.521)/592.611;
   input19 = (in19 - 715.249)/579.597;
   input20 = (in20 - -225.915)/413.402;
   input21 = (in21 - -291.159)/890.187;
   input22 = (in22 - -2.33103)/892.186;
   input23 = (in23 - -2.98298)/508.447;
   switch(index) {
     case 0:
         return neuron0x20872c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRdR::Value(int index, double* input) {
   input0 = (input[0] - 22.9312)/15.0282;
   input1 = (input[1] - 54.6332)/737.659;
   input2 = (input[2] - 368.4)/463.025;
   input3 = (input[3] - 290.707)/611.39;
   input4 = (input[4] - 761.677)/683.904;
   input5 = (input[5] - 671.427)/662.674;
   input6 = (input[6] - 676.134)/664.096;
   input7 = (input[7] - 668.252)/657.899;
   input8 = (input[8] - 661.612)/677.147;
   input9 = (input[9] - 652.658)/663.093;
   input10 = (input[10] - 657.531)/683.024;
   input11 = (input[11] - 713.206)/573.457;
   input12 = (input[12] - 715.902)/578.381;
   input13 = (input[13] - 556.666)/365.091;
   input14 = (input[14] - 607.63)/374.393;
   input15 = (input[15] - 711.827)/553.495;
   input16 = (input[16] - 496.475)/385.668;
   input17 = (input[17] - 598.236)/372.593;
   input18 = (input[18] - 716.521)/592.611;
   input19 = (input[19] - 715.249)/579.597;
   input20 = (input[20] - -225.915)/413.402;
   input21 = (input[21] - -291.159)/890.187;
   input22 = (input[22] - -2.33103)/892.186;
   input23 = (input[23] - -2.98298)/508.447;
   switch(index) {
     case 0:
         return neuron0x20872c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRdR::neuron0x20533b0() {
   return input0;
}

double NNfunction_sb_uRdR::neuron0x20536f0() {
   return input1;
}

double NNfunction_sb_uRdR::neuron0x2053a30() {
   return input2;
}

double NNfunction_sb_uRdR::neuron0x2053d70() {
   return input3;
}

double NNfunction_sb_uRdR::neuron0x20540b0() {
   return input4;
}

double NNfunction_sb_uRdR::neuron0x20543f0() {
   return input5;
}

double NNfunction_sb_uRdR::neuron0x2054730() {
   return input6;
}

double NNfunction_sb_uRdR::neuron0x2054a70() {
   return input7;
}

double NNfunction_sb_uRdR::neuron0x2054db0() {
   return input8;
}

double NNfunction_sb_uRdR::neuron0x20550f0() {
   return input9;
}

double NNfunction_sb_uRdR::neuron0x2055430() {
   return input10;
}

double NNfunction_sb_uRdR::neuron0x2055770() {
   return input11;
}

double NNfunction_sb_uRdR::neuron0x2055ab0() {
   return input12;
}

double NNfunction_sb_uRdR::neuron0x2055df0() {
   return input13;
}

double NNfunction_sb_uRdR::neuron0x2056130() {
   return input14;
}

double NNfunction_sb_uRdR::neuron0x2056470() {
   return input15;
}

double NNfunction_sb_uRdR::neuron0x20567b0() {
   return input16;
}

double NNfunction_sb_uRdR::neuron0x2056d10() {
   return input17;
}

double NNfunction_sb_uRdR::neuron0x2056f30() {
   return input18;
}

double NNfunction_sb_uRdR::neuron0x2057270() {
   return input19;
}

double NNfunction_sb_uRdR::neuron0x20575b0() {
   return input20;
}

double NNfunction_sb_uRdR::neuron0x20578f0() {
   return input21;
}

double NNfunction_sb_uRdR::neuron0x2057c30() {
   return input22;
}

double NNfunction_sb_uRdR::neuron0x2057f70() {
   return input23;
}

double NNfunction_sb_uRdR::input0x20583e0() {
   double input = -1.16423;
   input += synapse0x2053270();
   input += synapse0x20532b0();
   input += synapse0x2058690();
   input += synapse0x20586d0();
   input += synapse0x2058710();
   input += synapse0x2058750();
   input += synapse0x2058790();
   input += synapse0x20587d0();
   input += synapse0x2058810();
   input += synapse0x2058850();
   input += synapse0x2058890();
   input += synapse0x20588d0();
   input += synapse0x2058910();
   input += synapse0x2058950();
   input += synapse0x2058990();
   input += synapse0x20589d0();
   input += synapse0x20531e0();
   input += synapse0x2053220();
   input += synapse0x1e0e5d0();
   input += synapse0x1e0e610();
   input += synapse0x2058c30();
   input += synapse0x2058c70();
   input += synapse0x2058cb0();
   input += synapse0x2058cf0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20583e0() {
   double input = input0x20583e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2058d30() {
   double input = -1.75885;
   input += synapse0x2059070();
   input += synapse0x20590b0();
   input += synapse0x20590f0();
   input += synapse0x2059130();
   input += synapse0x2059170();
   input += synapse0x20591b0();
   input += synapse0x20591f0();
   input += synapse0x2059230();
   input += synapse0x2059270();
   input += synapse0x2058b20();
   input += synapse0x2058b60();
   input += synapse0x2058ba0();
   input += synapse0x2058be0();
   input += synapse0x20594c0();
   input += synapse0x2059500();
   input += synapse0x2059540();
   input += synapse0x2058ec0();
   input += synapse0x2058f00();
   input += synapse0x2059690();
   input += synapse0x20596d0();
   input += synapse0x2059710();
   input += synapse0x2059750();
   input += synapse0x2059790();
   input += synapse0x20597d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2058d30() {
   double input = input0x2058d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2059810() {
   double input = -0.21111;
   input += synapse0x2059b50();
   input += synapse0x2059b90();
   input += synapse0x2059bd0();
   input += synapse0x2059c10();
   input += synapse0x2059c50();
   input += synapse0x2059c90();
   input += synapse0x2059cd0();
   input += synapse0x2059d10();
   input += synapse0x2059d50();
   input += synapse0x2059d90();
   input += synapse0x2059dd0();
   input += synapse0x2059e10();
   input += synapse0x2059e50();
   input += synapse0x2059e90();
   input += synapse0x2059ed0();
   input += synapse0x2059f10();
   input += synapse0x20599a0();
   input += synapse0x20599e0();
   input += synapse0x1e0d720();
   input += synapse0x1e1c520();
   input += synapse0x1e1c560();
   input += synapse0x2042440();
   input += synapse0x2042480();
   input += synapse0x20424c0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2059810() {
   double input = input0x2059810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20592b0() {
   double input = -0.333009;
   input += synapse0x1e1cda0();
   input += synapse0x2059440();
   input += synapse0x2059480();
   input += synapse0x205a060();
   input += synapse0x205a0a0();
   input += synapse0x205a0e0();
   input += synapse0x205a120();
   input += synapse0x205a160();
   input += synapse0x205a1a0();
   input += synapse0x205a1e0();
   input += synapse0x205a220();
   input += synapse0x205a260();
   input += synapse0x205a2a0();
   input += synapse0x205a2e0();
   input += synapse0x205a320();
   input += synapse0x205a360();
   input += synapse0x20532f0();
   input += synapse0x2053330();
   input += synapse0x2053370();
   input += synapse0x205a4b0();
   input += synapse0x205a4f0();
   input += synapse0x205a530();
   input += synapse0x205a570();
   input += synapse0x205a5b0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20592b0() {
   double input = input0x20592b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205a5f0() {
   double input = 0.894981;
   input += synapse0x205a930();
   input += synapse0x205a970();
   input += synapse0x205a9b0();
   input += synapse0x205a9f0();
   input += synapse0x205aa30();
   input += synapse0x205aa70();
   input += synapse0x205aab0();
   input += synapse0x205aaf0();
   input += synapse0x205ab30();
   input += synapse0x205ab70();
   input += synapse0x205abb0();
   input += synapse0x205abf0();
   input += synapse0x205ac30();
   input += synapse0x205ac70();
   input += synapse0x205acb0();
   input += synapse0x205acf0();
   input += synapse0x205a780();
   input += synapse0x205a7c0();
   input += synapse0x205ae40();
   input += synapse0x205ae80();
   input += synapse0x205aec0();
   input += synapse0x205af00();
   input += synapse0x205af40();
   input += synapse0x205af80();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205a5f0() {
   double input = input0x205a5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205afc0() {
   double input = 2.20377;
   input += synapse0x205b300();
   input += synapse0x205b340();
   input += synapse0x205b380();
   input += synapse0x205b3c0();
   input += synapse0x205b400();
   input += synapse0x205b440();
   input += synapse0x205b480();
   input += synapse0x205b4c0();
   input += synapse0x205b500();
   input += synapse0x1e1c870();
   input += synapse0x1e1c8b0();
   input += synapse0x1e1c8f0();
   input += synapse0x1e1c930();
   input += synapse0x1e1c970();
   input += synapse0x1e1c9b0();
   input += synapse0x1e1c9f0();
   input += synapse0x205b150();
   input += synapse0x205b190();
   input += synapse0x1e1cb40();
   input += synapse0x1e1cb80();
   input += synapse0x1e1cbc0();
   input += synapse0x1e1cc00();
   input += synapse0x1e1cc40();
   input += synapse0x205bd50();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205afc0() {
   double input = input0x205afc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205bd90() {
   double input = -1.07118;
   input += synapse0x205c0d0();
   input += synapse0x205c110();
   input += synapse0x205c150();
   input += synapse0x205c190();
   input += synapse0x205c1d0();
   input += synapse0x205c210();
   input += synapse0x205c250();
   input += synapse0x205c290();
   input += synapse0x205c2d0();
   input += synapse0x205c310();
   input += synapse0x205c350();
   input += synapse0x205c390();
   input += synapse0x205c3d0();
   input += synapse0x205c410();
   input += synapse0x205c450();
   input += synapse0x205c490();
   input += synapse0x205bf20();
   input += synapse0x205bf60();
   input += synapse0x205c5e0();
   input += synapse0x205c620();
   input += synapse0x205c660();
   input += synapse0x205c6a0();
   input += synapse0x205c6e0();
   input += synapse0x205c720();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205bd90() {
   double input = input0x205bd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205c760() {
   double input = -0.0815152;
   input += synapse0x205caa0();
   input += synapse0x205cae0();
   input += synapse0x205cb20();
   input += synapse0x205cb60();
   input += synapse0x205cba0();
   input += synapse0x205cbe0();
   input += synapse0x205cc20();
   input += synapse0x205cc60();
   input += synapse0x205cca0();
   input += synapse0x205cce0();
   input += synapse0x205cd20();
   input += synapse0x205cd60();
   input += synapse0x205cda0();
   input += synapse0x205cde0();
   input += synapse0x205ce20();
   input += synapse0x205ce60();
   input += synapse0x205c8f0();
   input += synapse0x205c930();
   input += synapse0x205cfb0();
   input += synapse0x205cff0();
   input += synapse0x205d030();
   input += synapse0x205d070();
   input += synapse0x205d0b0();
   input += synapse0x205d0f0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205c760() {
   double input = input0x205c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205d130() {
   double input = -1.41405;
   input += synapse0x2056c00();
   input += synapse0x2056c40();
   input += synapse0x2056c80();
   input += synapse0x2056cc0();
   input += synapse0x205d680();
   input += synapse0x205d6c0();
   input += synapse0x205d700();
   input += synapse0x205d740();
   input += synapse0x205d780();
   input += synapse0x205d7c0();
   input += synapse0x205d800();
   input += synapse0x205d840();
   input += synapse0x205d880();
   input += synapse0x205d8c0();
   input += synapse0x205d900();
   input += synapse0x205d940();
   input += synapse0x205d2c0();
   input += synapse0x205d300();
   input += synapse0x205da90();
   input += synapse0x205dad0();
   input += synapse0x205db10();
   input += synapse0x205db50();
   input += synapse0x205db90();
   input += synapse0x205dbd0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205d130() {
   double input = input0x205d130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205dc10() {
   double input = -0.0728158;
   input += synapse0x205df50();
   input += synapse0x205df90();
   input += synapse0x205dfd0();
   input += synapse0x205e010();
   input += synapse0x205e050();
   input += synapse0x205e090();
   input += synapse0x205e0d0();
   input += synapse0x205e110();
   input += synapse0x205e150();
   input += synapse0x205e190();
   input += synapse0x205e1d0();
   input += synapse0x205e210();
   input += synapse0x205e250();
   input += synapse0x205e290();
   input += synapse0x205e2d0();
   input += synapse0x205e310();
   input += synapse0x205dda0();
   input += synapse0x205dde0();
   input += synapse0x205e460();
   input += synapse0x205e4a0();
   input += synapse0x205e4e0();
   input += synapse0x205e520();
   input += synapse0x205e560();
   input += synapse0x205e5a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205dc10() {
   double input = input0x205dc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205e5e0() {
   double input = -1.03124;
   input += synapse0x205e920();
   input += synapse0x205e960();
   input += synapse0x205e9a0();
   input += synapse0x205e9e0();
   input += synapse0x205ea20();
   input += synapse0x205ea60();
   input += synapse0x205eaa0();
   input += synapse0x205eae0();
   input += synapse0x205eb20();
   input += synapse0x205eb60();
   input += synapse0x205eba0();
   input += synapse0x205ebe0();
   input += synapse0x205ec20();
   input += synapse0x205ec60();
   input += synapse0x205eca0();
   input += synapse0x205ece0();
   input += synapse0x205e770();
   input += synapse0x205e7b0();
   input += synapse0x205b540();
   input += synapse0x205b580();
   input += synapse0x205b5c0();
   input += synapse0x205b600();
   input += synapse0x205b640();
   input += synapse0x205b680();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205e5e0() {
   double input = input0x205e5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205b6c0() {
   double input = 0.873357;
   input += synapse0x205ba00();
   input += synapse0x205ba40();
   input += synapse0x205ba80();
   input += synapse0x205bac0();
   input += synapse0x205bb00();
   input += synapse0x205bb40();
   input += synapse0x205bb80();
   input += synapse0x205bbc0();
   input += synapse0x205bc00();
   input += synapse0x205bc40();
   input += synapse0x205bc80();
   input += synapse0x205bcc0();
   input += synapse0x205bd00();
   input += synapse0x205fe40();
   input += synapse0x205fe80();
   input += synapse0x205fec0();
   input += synapse0x205b850();
   input += synapse0x205b890();
   input += synapse0x2060010();
   input += synapse0x2060050();
   input += synapse0x2060090();
   input += synapse0x20600d0();
   input += synapse0x2060110();
   input += synapse0x2060150();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205b6c0() {
   double input = input0x205b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2060190() {
   double input = 0.0239274;
   input += synapse0x20604d0();
   input += synapse0x2060510();
   input += synapse0x2060550();
   input += synapse0x2060590();
   input += synapse0x20605d0();
   input += synapse0x2060610();
   input += synapse0x2060650();
   input += synapse0x2060690();
   input += synapse0x20606d0();
   input += synapse0x2060710();
   input += synapse0x2060750();
   input += synapse0x2060790();
   input += synapse0x20607d0();
   input += synapse0x2060810();
   input += synapse0x2060850();
   input += synapse0x2060890();
   input += synapse0x2060320();
   input += synapse0x2060360();
   input += synapse0x20609e0();
   input += synapse0x2060a20();
   input += synapse0x2060a60();
   input += synapse0x2060aa0();
   input += synapse0x2060ae0();
   input += synapse0x2060b20();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2060190() {
   double input = input0x2060190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2060b60() {
   double input = 0.402748;
   input += synapse0x2060ea0();
   input += synapse0x2060ee0();
   input += synapse0x2060f20();
   input += synapse0x2060f60();
   input += synapse0x2060fa0();
   input += synapse0x2060fe0();
   input += synapse0x2061020();
   input += synapse0x2061060();
   input += synapse0x20610a0();
   input += synapse0x20610e0();
   input += synapse0x2061120();
   input += synapse0x2061160();
   input += synapse0x20611a0();
   input += synapse0x20611e0();
   input += synapse0x2061220();
   input += synapse0x2061260();
   input += synapse0x2060cf0();
   input += synapse0x2060d30();
   input += synapse0x20613b0();
   input += synapse0x20613f0();
   input += synapse0x2061430();
   input += synapse0x2061470();
   input += synapse0x20614b0();
   input += synapse0x20614f0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2060b60() {
   double input = input0x2060b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2061530() {
   double input = -0.990122;
   input += synapse0x2061870();
   input += synapse0x20618b0();
   input += synapse0x20618f0();
   input += synapse0x2061930();
   input += synapse0x2061970();
   input += synapse0x20619b0();
   input += synapse0x20619f0();
   input += synapse0x2061a30();
   input += synapse0x2061a70();
   input += synapse0x2061ab0();
   input += synapse0x2061af0();
   input += synapse0x2061b30();
   input += synapse0x2061b70();
   input += synapse0x2061bb0();
   input += synapse0x2061bf0();
   input += synapse0x2061c30();
   input += synapse0x20616c0();
   input += synapse0x2061700();
   input += synapse0x2061d80();
   input += synapse0x2061dc0();
   input += synapse0x2061e00();
   input += synapse0x2061e40();
   input += synapse0x2061e80();
   input += synapse0x2061ec0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2061530() {
   double input = input0x2061530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2061f00() {
   double input = -0.319365;
   input += synapse0x2062240();
   input += synapse0x20535d0();
   input += synapse0x2053610();
   input += synapse0x2053910();
   input += synapse0x2053950();
   input += synapse0x2053c50();
   input += synapse0x2053c90();
   input += synapse0x2053f90();
   input += synapse0x2053fd0();
   input += synapse0x20542d0();
   input += synapse0x2054310();
   input += synapse0x2054610();
   input += synapse0x2054650();
   input += synapse0x2054950();
   input += synapse0x2054990();
   input += synapse0x2054c90();
   input += synapse0x2054cd0();
   input += synapse0x2054fd0();
   input += synapse0x2055010();
   input += synapse0x2055310();
   input += synapse0x2055350();
   input += synapse0x2055650();
   input += synapse0x2055690();
   input += synapse0x2055990();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2061f00() {
   double input = input0x2061f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2063d10() {
   double input = -2.69355;
   input += synapse0x20559d0();
   input += synapse0x2056690();
   input += synapse0x20566d0();
   input += synapse0x2062090();
   input += synapse0x20620d0();
   input += synapse0x20569d0();
   input += synapse0x2056a10();
   input += synapse0x1e0e4b0();
   input += synapse0x1e0e4f0();
   input += synapse0x2057150();
   input += synapse0x2057190();
   input += synapse0x2057490();
   input += synapse0x20574d0();
   input += synapse0x20577d0();
   input += synapse0x2057810();
   input += synapse0x2057b10();
   input += synapse0x2057b50();
   input += synapse0x2057e50();
   input += synapse0x2057e90();
   input += synapse0x2058190();
   input += synapse0x20581d0();
   input += synapse0x2055cd0();
   input += synapse0x2055d10();
   input += synapse0x2063fb0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2063d10() {
   double input = input0x2063d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2063ff0() {
   double input = 0.94;
   input += synapse0x2064330();
   input += synapse0x2064370();
   input += synapse0x20643b0();
   input += synapse0x20643f0();
   input += synapse0x2064430();
   input += synapse0x2064470();
   input += synapse0x20644b0();
   input += synapse0x20644f0();
   input += synapse0x2064530();
   input += synapse0x2064570();
   input += synapse0x20645b0();
   input += synapse0x20645f0();
   input += synapse0x2064630();
   input += synapse0x2064670();
   input += synapse0x20646b0();
   input += synapse0x20646f0();
   input += synapse0x2064180();
   input += synapse0x20641c0();
   input += synapse0x2064840();
   input += synapse0x2064880();
   input += synapse0x20648c0();
   input += synapse0x2064900();
   input += synapse0x2064940();
   input += synapse0x2064980();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2063ff0() {
   double input = input0x2063ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20649c0() {
   double input = 0.385175;
   input += synapse0x2064d00();
   input += synapse0x2064d40();
   input += synapse0x2064d80();
   input += synapse0x2064dc0();
   input += synapse0x2064e00();
   input += synapse0x2064e40();
   input += synapse0x2064e80();
   input += synapse0x2064ec0();
   input += synapse0x2064f00();
   input += synapse0x2064f40();
   input += synapse0x2064f80();
   input += synapse0x2064fc0();
   input += synapse0x2065000();
   input += synapse0x2065040();
   input += synapse0x2065080();
   input += synapse0x20650c0();
   input += synapse0x2064b50();
   input += synapse0x2064b90();
   input += synapse0x2065210();
   input += synapse0x2065250();
   input += synapse0x2065290();
   input += synapse0x20652d0();
   input += synapse0x2065310();
   input += synapse0x2065350();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20649c0() {
   double input = input0x20649c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2065390() {
   double input = 1.11074;
   input += synapse0x20656d0();
   input += synapse0x2065710();
   input += synapse0x2065750();
   input += synapse0x2065790();
   input += synapse0x20657d0();
   input += synapse0x2065810();
   input += synapse0x2065850();
   input += synapse0x2065890();
   input += synapse0x20658d0();
   input += synapse0x2065910();
   input += synapse0x2065950();
   input += synapse0x2065990();
   input += synapse0x20659d0();
   input += synapse0x2065a10();
   input += synapse0x2065a50();
   input += synapse0x2065a90();
   input += synapse0x2065520();
   input += synapse0x2065560();
   input += synapse0x2065be0();
   input += synapse0x2065c20();
   input += synapse0x2065c60();
   input += synapse0x2065ca0();
   input += synapse0x2065ce0();
   input += synapse0x2065d20();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2065390() {
   double input = input0x2065390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2065d60() {
   double input = 2.23261;
   input += synapse0x20660a0();
   input += synapse0x20660e0();
   input += synapse0x2066120();
   input += synapse0x2066160();
   input += synapse0x20661a0();
   input += synapse0x20661e0();
   input += synapse0x2066220();
   input += synapse0x2066260();
   input += synapse0x20662a0();
   input += synapse0x20662e0();
   input += synapse0x2066320();
   input += synapse0x2066360();
   input += synapse0x20663a0();
   input += synapse0x20663e0();
   input += synapse0x2066420();
   input += synapse0x2066460();
   input += synapse0x2065ef0();
   input += synapse0x2065f30();
   input += synapse0x20665b0();
   input += synapse0x20665f0();
   input += synapse0x2066630();
   input += synapse0x2066670();
   input += synapse0x20666b0();
   input += synapse0x20666f0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2065d60() {
   double input = input0x2065d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2066730() {
   double input = 2.16609;
   input += synapse0x2066a70();
   input += synapse0x2066ab0();
   input += synapse0x2066af0();
   input += synapse0x2066b30();
   input += synapse0x2066b70();
   input += synapse0x2066bb0();
   input += synapse0x2066bf0();
   input += synapse0x2066c30();
   input += synapse0x2066c70();
   input += synapse0x205ee30();
   input += synapse0x205ee70();
   input += synapse0x205eeb0();
   input += synapse0x205eef0();
   input += synapse0x205ef30();
   input += synapse0x205ef70();
   input += synapse0x205efb0();
   input += synapse0x20668c0();
   input += synapse0x2066900();
   input += synapse0x205f100();
   input += synapse0x205f140();
   input += synapse0x205f180();
   input += synapse0x205f1c0();
   input += synapse0x205f200();
   input += synapse0x205f240();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2066730() {
   double input = input0x2066730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205f280() {
   double input = -0.404746;
   input += synapse0x205f5c0();
   input += synapse0x205f600();
   input += synapse0x205f640();
   input += synapse0x205f680();
   input += synapse0x205f6c0();
   input += synapse0x205f700();
   input += synapse0x205f740();
   input += synapse0x205f780();
   input += synapse0x205f7c0();
   input += synapse0x205f800();
   input += synapse0x205f840();
   input += synapse0x205f880();
   input += synapse0x205f8c0();
   input += synapse0x205f900();
   input += synapse0x205f940();
   input += synapse0x205f980();
   input += synapse0x205f410();
   input += synapse0x205f450();
   input += synapse0x205fad0();
   input += synapse0x205fb10();
   input += synapse0x205fb50();
   input += synapse0x205fb90();
   input += synapse0x205fbd0();
   input += synapse0x205fc10();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205f280() {
   double input = input0x205f280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x205fc50() {
   double input = -1.13635;
   input += synapse0x205fde0();
   input += synapse0x2068e70();
   input += synapse0x2068eb0();
   input += synapse0x2068ef0();
   input += synapse0x2068f30();
   input += synapse0x2068f70();
   input += synapse0x2068fb0();
   input += synapse0x2068ff0();
   input += synapse0x2069030();
   input += synapse0x2069070();
   input += synapse0x20690b0();
   input += synapse0x20690f0();
   input += synapse0x2069130();
   input += synapse0x2069170();
   input += synapse0x20691b0();
   input += synapse0x20691f0();
   input += synapse0x2068cc0();
   input += synapse0x2068d00();
   input += synapse0x2069340();
   input += synapse0x2069380();
   input += synapse0x20693c0();
   input += synapse0x2069400();
   input += synapse0x2069440();
   input += synapse0x2069480();
   return input;
}

double NNfunction_sb_uRdR::neuron0x205fc50() {
   double input = input0x205fc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20694c0() {
   double input = 0.18127;
   input += synapse0x2069800();
   input += synapse0x2069840();
   input += synapse0x2069880();
   input += synapse0x20698c0();
   input += synapse0x2069900();
   input += synapse0x2069940();
   input += synapse0x2069980();
   input += synapse0x20699c0();
   input += synapse0x2069a00();
   input += synapse0x2069a40();
   input += synapse0x2069a80();
   input += synapse0x2069ac0();
   input += synapse0x2069b00();
   input += synapse0x2069b40();
   input += synapse0x2069b80();
   input += synapse0x2069bc0();
   input += synapse0x2069650();
   input += synapse0x2069690();
   input += synapse0x2069d10();
   input += synapse0x2069d50();
   input += synapse0x2069d90();
   input += synapse0x2069dd0();
   input += synapse0x2069e10();
   input += synapse0x2069e50();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20694c0() {
   double input = input0x20694c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2069e90() {
   double input = 0.36348;
   input += synapse0x206a1d0();
   input += synapse0x206a210();
   input += synapse0x206a250();
   input += synapse0x206a290();
   input += synapse0x206a2d0();
   input += synapse0x206a310();
   input += synapse0x206a350();
   input += synapse0x206a390();
   input += synapse0x206a3d0();
   input += synapse0x206a410();
   input += synapse0x206a450();
   input += synapse0x206a490();
   input += synapse0x206a4d0();
   input += synapse0x206a510();
   input += synapse0x206a550();
   input += synapse0x206a590();
   input += synapse0x206a020();
   input += synapse0x206a060();
   input += synapse0x206a6e0();
   input += synapse0x206a720();
   input += synapse0x206a760();
   input += synapse0x206a7a0();
   input += synapse0x206a7e0();
   input += synapse0x206a820();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2069e90() {
   double input = input0x2069e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206a860() {
   double input = -0.234969;
   input += synapse0x206aba0();
   input += synapse0x206abe0();
   input += synapse0x206ac20();
   input += synapse0x206ac60();
   input += synapse0x206aca0();
   input += synapse0x206ace0();
   input += synapse0x206ad20();
   input += synapse0x206ad60();
   input += synapse0x206ada0();
   input += synapse0x206ade0();
   input += synapse0x206ae20();
   input += synapse0x206ae60();
   input += synapse0x206aea0();
   input += synapse0x206aee0();
   input += synapse0x206af20();
   input += synapse0x206af60();
   input += synapse0x206a9f0();
   input += synapse0x206aa30();
   input += synapse0x206b0b0();
   input += synapse0x206b0f0();
   input += synapse0x206b130();
   input += synapse0x206b170();
   input += synapse0x206b1b0();
   input += synapse0x206b1f0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206a860() {
   double input = input0x206a860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206b230() {
   double input = 4.07184;
   input += synapse0x206b570();
   input += synapse0x206b5b0();
   input += synapse0x206b5f0();
   input += synapse0x206b630();
   input += synapse0x206b670();
   input += synapse0x206b6b0();
   input += synapse0x206b6f0();
   input += synapse0x206b730();
   input += synapse0x206b770();
   input += synapse0x206b7b0();
   input += synapse0x206b7f0();
   input += synapse0x206b830();
   input += synapse0x206b870();
   input += synapse0x206b8b0();
   input += synapse0x206b8f0();
   input += synapse0x206b930();
   input += synapse0x206b3c0();
   input += synapse0x206b400();
   input += synapse0x206ba80();
   input += synapse0x206bac0();
   input += synapse0x206bb00();
   input += synapse0x206bb40();
   input += synapse0x206bb80();
   input += synapse0x206bbc0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206b230() {
   double input = input0x206b230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206bc00() {
   double input = 0.212959;
   input += synapse0x206bf40();
   input += synapse0x206bf80();
   input += synapse0x206bfc0();
   input += synapse0x206c000();
   input += synapse0x206c040();
   input += synapse0x206c080();
   input += synapse0x206c0c0();
   input += synapse0x206c100();
   input += synapse0x206c140();
   input += synapse0x206c180();
   input += synapse0x206c1c0();
   input += synapse0x206c200();
   input += synapse0x206c240();
   input += synapse0x206c280();
   input += synapse0x206c2c0();
   input += synapse0x206c300();
   input += synapse0x206bd90();
   input += synapse0x206bdd0();
   input += synapse0x206c450();
   input += synapse0x206c490();
   input += synapse0x206c4d0();
   input += synapse0x206c510();
   input += synapse0x206c550();
   input += synapse0x206c590();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206bc00() {
   double input = input0x206bc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206c5d0() {
   double input = -0.424147;
   input += synapse0x206c910();
   input += synapse0x206c950();
   input += synapse0x206c990();
   input += synapse0x206c9d0();
   input += synapse0x206ca10();
   input += synapse0x206ca50();
   input += synapse0x206ca90();
   input += synapse0x206cad0();
   input += synapse0x206cb10();
   input += synapse0x206cb50();
   input += synapse0x206cb90();
   input += synapse0x206cbd0();
   input += synapse0x206cc10();
   input += synapse0x206cc50();
   input += synapse0x206cc90();
   input += synapse0x206ccd0();
   input += synapse0x206c760();
   input += synapse0x206c7a0();
   input += synapse0x206ce20();
   input += synapse0x206ce60();
   input += synapse0x206cea0();
   input += synapse0x206cee0();
   input += synapse0x206cf20();
   input += synapse0x206cf60();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206c5d0() {
   double input = input0x206c5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206cfa0() {
   double input = 0.0261339;
   input += synapse0x206d2e0();
   input += synapse0x206d320();
   input += synapse0x206d360();
   input += synapse0x206d3a0();
   input += synapse0x206d3e0();
   input += synapse0x206d420();
   input += synapse0x206d460();
   input += synapse0x206d4a0();
   input += synapse0x206d4e0();
   input += synapse0x206d520();
   input += synapse0x206d560();
   input += synapse0x206d5a0();
   input += synapse0x206d5e0();
   input += synapse0x206d620();
   input += synapse0x206d660();
   input += synapse0x206d6a0();
   input += synapse0x206d130();
   input += synapse0x206d170();
   input += synapse0x206d7f0();
   input += synapse0x206d830();
   input += synapse0x206d870();
   input += synapse0x206d8b0();
   input += synapse0x206d8f0();
   input += synapse0x206d930();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206cfa0() {
   double input = input0x206cfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x206d970() {
   double input = 1.1276;
   input += synapse0x206dcb0();
   input += synapse0x2062280();
   input += synapse0x20622c0();
   input += synapse0x2062300();
   input += synapse0x2062550();
   input += synapse0x2062590();
   input += synapse0x20625d0();
   input += synapse0x2062820();
   input += synapse0x2062860();
   input += synapse0x2062ab0();
   input += synapse0x2062af0();
   input += synapse0x2062b30();
   input += synapse0x2062d80();
   input += synapse0x2062dc0();
   input += synapse0x2063010();
   input += synapse0x2063050();
   input += synapse0x206db00();
   input += synapse0x206db40();
   input += synapse0x20631a0();
   input += synapse0x20636b0();
   input += synapse0x20636f0();
   input += synapse0x2063730();
   input += synapse0x2063980();
   input += synapse0x20639c0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x206d970() {
   double input = input0x206d970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2063a00() {
   double input = -0.0811274;
   input += synapse0x2063270();
   input += synapse0x20632b0();
   input += synapse0x20632f0();
   input += synapse0x2063330();
   input += synapse0x2063cb0();
   input += synapse0x2070000();
   input += synapse0x2070040();
   input += synapse0x2070080();
   input += synapse0x20700c0();
   input += synapse0x2070100();
   input += synapse0x2070140();
   input += synapse0x2070180();
   input += synapse0x20701c0();
   input += synapse0x2070200();
   input += synapse0x2070240();
   input += synapse0x2070280();
   input += synapse0x2063b90();
   input += synapse0x2063bd0();
   input += synapse0x20703d0();
   input += synapse0x2070410();
   input += synapse0x2070450();
   input += synapse0x2070490();
   input += synapse0x20704d0();
   input += synapse0x2070510();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2063a00() {
   double input = input0x2063a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2070550() {
   double input = -0.613068;
   input += synapse0x2070890();
   input += synapse0x20708d0();
   input += synapse0x2070910();
   input += synapse0x2070950();
   input += synapse0x2070990();
   input += synapse0x20709d0();
   input += synapse0x2070a10();
   input += synapse0x2070a50();
   input += synapse0x2070a90();
   input += synapse0x2070ad0();
   input += synapse0x2070b10();
   input += synapse0x2070b50();
   input += synapse0x2070b90();
   input += synapse0x2070bd0();
   input += synapse0x2070c10();
   input += synapse0x2070c50();
   input += synapse0x20706e0();
   input += synapse0x2070720();
   input += synapse0x2070da0();
   input += synapse0x2070de0();
   input += synapse0x2070e20();
   input += synapse0x2070e60();
   input += synapse0x2070ea0();
   input += synapse0x2070ee0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2070550() {
   double input = input0x2070550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2070f20() {
   double input = 0.803568;
   input += synapse0x2071260();
   input += synapse0x20712a0();
   input += synapse0x20712e0();
   input += synapse0x2071320();
   input += synapse0x2071360();
   input += synapse0x20713a0();
   input += synapse0x20713e0();
   input += synapse0x2071420();
   input += synapse0x2071460();
   input += synapse0x20714a0();
   input += synapse0x20714e0();
   input += synapse0x2071520();
   input += synapse0x2071560();
   input += synapse0x20715a0();
   input += synapse0x20715e0();
   input += synapse0x2071620();
   input += synapse0x20710b0();
   input += synapse0x20710f0();
   input += synapse0x2071770();
   input += synapse0x20717b0();
   input += synapse0x20717f0();
   input += synapse0x2071830();
   input += synapse0x2071870();
   input += synapse0x20718b0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2070f20() {
   double input = input0x2070f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20718f0() {
   double input = -3.83176;
   input += synapse0x2071c30();
   input += synapse0x2071c70();
   input += synapse0x2071cb0();
   input += synapse0x2071cf0();
   input += synapse0x2071d30();
   input += synapse0x2071d70();
   input += synapse0x2071db0();
   input += synapse0x2071df0();
   input += synapse0x2071e30();
   input += synapse0x2071e70();
   input += synapse0x2071eb0();
   input += synapse0x2071ef0();
   input += synapse0x2071f30();
   input += synapse0x2071f70();
   input += synapse0x2071fb0();
   input += synapse0x2071ff0();
   input += synapse0x2071a80();
   input += synapse0x2071ac0();
   input += synapse0x2072140();
   input += synapse0x2072180();
   input += synapse0x20721c0();
   input += synapse0x2072200();
   input += synapse0x2072240();
   input += synapse0x2072280();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20718f0() {
   double input = input0x20718f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20722c0() {
   double input = -0.308033;
   input += synapse0x2072600();
   input += synapse0x2072640();
   input += synapse0x2072680();
   input += synapse0x20726c0();
   input += synapse0x2072700();
   input += synapse0x2072740();
   input += synapse0x2072780();
   input += synapse0x20727c0();
   input += synapse0x2072800();
   input += synapse0x2072840();
   input += synapse0x2072880();
   input += synapse0x20728c0();
   input += synapse0x2072900();
   input += synapse0x2072940();
   input += synapse0x2072980();
   input += synapse0x20729c0();
   input += synapse0x2072450();
   input += synapse0x2072490();
   input += synapse0x2072b10();
   input += synapse0x2072b50();
   input += synapse0x2072b90();
   input += synapse0x2072bd0();
   input += synapse0x2072c10();
   input += synapse0x2072c50();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20722c0() {
   double input = input0x20722c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2072c90() {
   double input = -0.947257;
   input += synapse0x2072fd0();
   input += synapse0x2073010();
   input += synapse0x2073050();
   input += synapse0x2073090();
   input += synapse0x20730d0();
   input += synapse0x2073110();
   input += synapse0x2073150();
   input += synapse0x2073190();
   input += synapse0x20731d0();
   input += synapse0x2073210();
   input += synapse0x2073250();
   input += synapse0x2073290();
   input += synapse0x20732d0();
   input += synapse0x2073310();
   input += synapse0x2073350();
   input += synapse0x2073390();
   input += synapse0x2072e20();
   input += synapse0x2072e60();
   input += synapse0x20734e0();
   input += synapse0x2073520();
   input += synapse0x2073560();
   input += synapse0x20735a0();
   input += synapse0x20735e0();
   input += synapse0x2073620();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2072c90() {
   double input = input0x2072c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2073660() {
   double input = 0.29376;
   input += synapse0x20739a0();
   input += synapse0x20739e0();
   input += synapse0x2073a20();
   input += synapse0x2073a60();
   input += synapse0x2073aa0();
   input += synapse0x2073ae0();
   input += synapse0x2073b20();
   input += synapse0x2073b60();
   input += synapse0x2073ba0();
   input += synapse0x2073be0();
   input += synapse0x2073c20();
   input += synapse0x2073c60();
   input += synapse0x2073ca0();
   input += synapse0x2073ce0();
   input += synapse0x2073d20();
   input += synapse0x2073d60();
   input += synapse0x20737f0();
   input += synapse0x2073830();
   input += synapse0x2073eb0();
   input += synapse0x2073ef0();
   input += synapse0x2073f30();
   input += synapse0x2073f70();
   input += synapse0x2073fb0();
   input += synapse0x2073ff0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2073660() {
   double input = input0x2073660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2074030() {
   double input = -1.42691;
   input += synapse0x2074370();
   input += synapse0x20743b0();
   input += synapse0x20743f0();
   input += synapse0x2074430();
   input += synapse0x2074470();
   input += synapse0x20744b0();
   input += synapse0x20744f0();
   input += synapse0x2074530();
   input += synapse0x2074570();
   input += synapse0x20745b0();
   input += synapse0x20745f0();
   input += synapse0x2074630();
   input += synapse0x2074670();
   input += synapse0x20746b0();
   input += synapse0x20746f0();
   input += synapse0x2074730();
   input += synapse0x20741c0();
   input += synapse0x2074200();
   input += synapse0x2074880();
   input += synapse0x20748c0();
   input += synapse0x2074900();
   input += synapse0x2074940();
   input += synapse0x2074980();
   input += synapse0x20749c0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2074030() {
   double input = input0x2074030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2074a00() {
   double input = -0.132249;
   input += synapse0x205d470();
   input += synapse0x205d4b0();
   input += synapse0x205d4f0();
   input += synapse0x205d530();
   input += synapse0x205d570();
   input += synapse0x205d5b0();
   input += synapse0x205d5f0();
   input += synapse0x205d630();
   input += synapse0x2075150();
   input += synapse0x2075190();
   input += synapse0x20751d0();
   input += synapse0x2075210();
   input += synapse0x2075250();
   input += synapse0x2075290();
   input += synapse0x20752d0();
   input += synapse0x2075310();
   input += synapse0x2074b90();
   input += synapse0x2074bd0();
   input += synapse0x2075460();
   input += synapse0x20754a0();
   input += synapse0x20754e0();
   input += synapse0x2075520();
   input += synapse0x2075560();
   input += synapse0x20755a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2074a00() {
   double input = input0x2074a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20755e0() {
   double input = 1.56296;
   input += synapse0x2075920();
   input += synapse0x2075960();
   input += synapse0x20759a0();
   input += synapse0x20759e0();
   input += synapse0x2075a20();
   input += synapse0x2075a60();
   input += synapse0x2075aa0();
   input += synapse0x2075ae0();
   input += synapse0x2075b20();
   input += synapse0x2075b60();
   input += synapse0x2075ba0();
   input += synapse0x2075be0();
   input += synapse0x2075c20();
   input += synapse0x2075c60();
   input += synapse0x2075ca0();
   input += synapse0x2075ce0();
   input += synapse0x2075770();
   input += synapse0x20757b0();
   input += synapse0x2075e30();
   input += synapse0x2075e70();
   input += synapse0x2075eb0();
   input += synapse0x2075ef0();
   input += synapse0x2075f30();
   input += synapse0x2075f70();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20755e0() {
   double input = input0x20755e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2075fb0() {
   double input = -2.79913;
   input += synapse0x20762f0();
   input += synapse0x2076330();
   input += synapse0x2076370();
   input += synapse0x20763b0();
   input += synapse0x20763f0();
   input += synapse0x2076430();
   input += synapse0x2076470();
   input += synapse0x20764b0();
   input += synapse0x20764f0();
   input += synapse0x2076530();
   input += synapse0x2076570();
   input += synapse0x20765b0();
   input += synapse0x20765f0();
   input += synapse0x2076630();
   input += synapse0x2076670();
   input += synapse0x20766b0();
   input += synapse0x2076140();
   input += synapse0x2076180();
   input += synapse0x2066cb0();
   input += synapse0x2066cf0();
   input += synapse0x2066d30();
   input += synapse0x2066d70();
   input += synapse0x2066db0();
   input += synapse0x2066df0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2075fb0() {
   double input = input0x2075fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2066e30() {
   double input = 1.28891;
   input += synapse0x2067170();
   input += synapse0x20671b0();
   input += synapse0x20671f0();
   input += synapse0x2067230();
   input += synapse0x2067270();
   input += synapse0x20672b0();
   input += synapse0x20672f0();
   input += synapse0x2067330();
   input += synapse0x2067370();
   input += synapse0x20673b0();
   input += synapse0x20673f0();
   input += synapse0x2067430();
   input += synapse0x2067470();
   input += synapse0x20674b0();
   input += synapse0x20674f0();
   input += synapse0x2067530();
   input += synapse0x2066fc0();
   input += synapse0x2067000();
   input += synapse0x2067680();
   input += synapse0x20676c0();
   input += synapse0x2067700();
   input += synapse0x2067740();
   input += synapse0x2067780();
   input += synapse0x20677c0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2066e30() {
   double input = input0x2066e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2067800() {
   double input = -1.5504;
   input += synapse0x2067b40();
   input += synapse0x2067b80();
   input += synapse0x2067bc0();
   input += synapse0x2067c00();
   input += synapse0x2067c40();
   input += synapse0x2067c80();
   input += synapse0x2067cc0();
   input += synapse0x2067d00();
   input += synapse0x2067d40();
   input += synapse0x2067d80();
   input += synapse0x2067dc0();
   input += synapse0x2067e00();
   input += synapse0x2067e40();
   input += synapse0x2067e80();
   input += synapse0x2067ec0();
   input += synapse0x2067f00();
   input += synapse0x2067990();
   input += synapse0x20679d0();
   input += synapse0x2068050();
   input += synapse0x2068090();
   input += synapse0x20680d0();
   input += synapse0x2068110();
   input += synapse0x2068150();
   input += synapse0x2068190();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2067800() {
   double input = input0x2067800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20681d0() {
   double input = 2.76073;
   input += synapse0x2068510();
   input += synapse0x2068550();
   input += synapse0x2068590();
   input += synapse0x20685d0();
   input += synapse0x2068610();
   input += synapse0x2068650();
   input += synapse0x2068690();
   input += synapse0x20686d0();
   input += synapse0x2068710();
   input += synapse0x2068750();
   input += synapse0x2068790();
   input += synapse0x20687d0();
   input += synapse0x2068810();
   input += synapse0x2068850();
   input += synapse0x2068890();
   input += synapse0x20688d0();
   input += synapse0x2068360();
   input += synapse0x20683a0();
   input += synapse0x2068a20();
   input += synapse0x2068a60();
   input += synapse0x2068aa0();
   input += synapse0x2068ae0();
   input += synapse0x2068b20();
   input += synapse0x2068b60();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20681d0() {
   double input = input0x20681d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x207a810() {
   double input = -0.660503;
   input += synapse0x207aa30();
   input += synapse0x207aa70();
   input += synapse0x207aab0();
   input += synapse0x207aaf0();
   input += synapse0x207ab30();
   input += synapse0x207ab70();
   input += synapse0x207abb0();
   input += synapse0x207abf0();
   input += synapse0x207ac30();
   input += synapse0x207ac70();
   input += synapse0x207acb0();
   input += synapse0x207acf0();
   input += synapse0x207ad30();
   input += synapse0x207ad70();
   input += synapse0x207adb0();
   input += synapse0x207adf0();
   input += synapse0x2068ba0();
   input += synapse0x2068be0();
   input += synapse0x207af40();
   input += synapse0x207af80();
   input += synapse0x207afc0();
   input += synapse0x207b000();
   input += synapse0x207b040();
   input += synapse0x207b080();
   return input;
}

double NNfunction_sb_uRdR::neuron0x207a810() {
   double input = input0x207a810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x207b0c0() {
   double input = -0.533547;
   input += synapse0x207b400();
   input += synapse0x207b440();
   input += synapse0x207b480();
   input += synapse0x207b4c0();
   input += synapse0x207b500();
   input += synapse0x207b540();
   input += synapse0x207b580();
   input += synapse0x207b5c0();
   input += synapse0x207b600();
   input += synapse0x207b640();
   input += synapse0x207b680();
   input += synapse0x207b6c0();
   input += synapse0x207b700();
   input += synapse0x207b740();
   input += synapse0x207b780();
   input += synapse0x207b7c0();
   input += synapse0x207b250();
   input += synapse0x207b290();
   input += synapse0x207b910();
   input += synapse0x207b950();
   input += synapse0x207b990();
   input += synapse0x207b9d0();
   input += synapse0x207ba10();
   input += synapse0x207ba50();
   return input;
}

double NNfunction_sb_uRdR::neuron0x207b0c0() {
   double input = input0x207b0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x207ba90() {
   double input = 0.96011;
   input += synapse0x207bdd0();
   input += synapse0x207be10();
   input += synapse0x207be50();
   input += synapse0x207be90();
   input += synapse0x207bed0();
   input += synapse0x207bf10();
   input += synapse0x207bf50();
   input += synapse0x207bf90();
   input += synapse0x207bfd0();
   input += synapse0x207c010();
   input += synapse0x207c050();
   input += synapse0x207c090();
   input += synapse0x207c0d0();
   input += synapse0x207c110();
   input += synapse0x207c150();
   input += synapse0x207c190();
   input += synapse0x207bc20();
   input += synapse0x207bc60();
   input += synapse0x207c2e0();
   input += synapse0x207c320();
   input += synapse0x207c360();
   input += synapse0x207c3a0();
   input += synapse0x207c3e0();
   input += synapse0x207c420();
   return input;
}

double NNfunction_sb_uRdR::neuron0x207ba90() {
   double input = input0x207ba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x207c460() {
   double input = -0.0338461;
   input += synapse0x207c7a0();
   input += synapse0x207c7e0();
   input += synapse0x207c820();
   input += synapse0x207c860();
   input += synapse0x207c8a0();
   input += synapse0x207c8e0();
   input += synapse0x207c920();
   input += synapse0x207c960();
   input += synapse0x207c9a0();
   input += synapse0x207c9e0();
   input += synapse0x207ca20();
   input += synapse0x207ca60();
   input += synapse0x207caa0();
   input += synapse0x207cae0();
   input += synapse0x207cb20();
   input += synapse0x207cb60();
   input += synapse0x207c5f0();
   input += synapse0x207c630();
   input += synapse0x207ccb0();
   input += synapse0x207ccf0();
   input += synapse0x207cd30();
   input += synapse0x207cd70();
   input += synapse0x207cdb0();
   input += synapse0x207cdf0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x207c460() {
   double input = input0x207c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2083660() {
   double input = -1.80237;
   input += synapse0x1e1cd10();
   input += synapse0x1e1cd50();
   input += synapse0x205a8a0();
   input += synapse0x205a8e0();
   input += synapse0x205b270();
   input += synapse0x205b2b0();
   input += synapse0x205c040();
   input += synapse0x205c080();
   input += synapse0x205ca10();
   input += synapse0x205ca50();
   input += synapse0x205d3e0();
   input += synapse0x205d420();
   input += synapse0x205dec0();
   input += synapse0x205df00();
   input += synapse0x205e890();
   input += synapse0x205e8d0();
   input += synapse0x205b970();
   input += synapse0x205b9b0();
   input += synapse0x2060440();
   input += synapse0x2060480();
   input += synapse0x2060e10();
   input += synapse0x2060e50();
   input += synapse0x20617e0();
   input += synapse0x2061820();
   input += synapse0x20621b0();
   input += synapse0x20621f0();
   input += synapse0x2056350();
   input += synapse0x2056390();
   input += synapse0x20642a0();
   input += synapse0x20642e0();
   input += synapse0x2064c70();
   input += synapse0x2064cb0();
   input += synapse0x2065640();
   input += synapse0x2065680();
   input += synapse0x2066010();
   input += synapse0x2066050();
   input += synapse0x20669e0();
   input += synapse0x2066a20();
   input += synapse0x205f530();
   input += synapse0x205f570();
   input += synapse0x2068de0();
   input += synapse0x2068e20();
   input += synapse0x2069770();
   input += synapse0x20697b0();
   input += synapse0x206a140();
   input += synapse0x206a180();
   input += synapse0x206ab10();
   input += synapse0x206ab50();
   input += synapse0x206b4e0();
   input += synapse0x206b520();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2083660() {
   double input = input0x2083660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2083a00() {
   double input = -0.851541;
   input += synapse0x206dc20();
   input += synapse0x206dc60();
   input += synapse0x20631e0();
   input += synapse0x2063220();
   input += synapse0x2070800();
   input += synapse0x2070840();
   input += synapse0x20711d0();
   input += synapse0x2071210();
   input += synapse0x2071ba0();
   input += synapse0x2071be0();
   input += synapse0x2072570();
   input += synapse0x20725b0();
   input += synapse0x2072f40();
   input += synapse0x2072f80();
   input += synapse0x2073910();
   input += synapse0x2073950();
   input += synapse0x20742e0();
   input += synapse0x2074320();
   input += synapse0x2074cb0();
   input += synapse0x2074cf0();
   input += synapse0x2075890();
   input += synapse0x20758d0();
   input += synapse0x2076260();
   input += synapse0x20762a0();
   input += synapse0x20670e0();
   input += synapse0x2067120();
   input += synapse0x2067ab0();
   input += synapse0x2067af0();
   input += synapse0x2068480();
   input += synapse0x20684c0();
   input += synapse0x207a9a0();
   input += synapse0x207a9e0();
   input += synapse0x207b370();
   input += synapse0x207b3b0();
   input += synapse0x207bd40();
   input += synapse0x207bd80();
   input += synapse0x207c710();
   input += synapse0x207c750();
   input += synapse0x2058600();
   input += synapse0x2058640();
   input += synapse0x206beb0();
   input += synapse0x206bef0();
   input += synapse0x207ce30();
   input += synapse0x207ce70();
   input += synapse0x207ceb0();
   input += synapse0x207cef0();
   input += synapse0x2083da0();
   input += synapse0x2083de0();
   input += synapse0x2083e20();
   input += synapse0x2083e60();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2083a00() {
   double input = input0x2083a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2083ea0() {
   double input = 0.56841;
   input += synapse0x20841e0();
   input += synapse0x2084220();
   input += synapse0x2084260();
   input += synapse0x20842a0();
   input += synapse0x20842e0();
   input += synapse0x2084320();
   input += synapse0x2084360();
   input += synapse0x20843a0();
   input += synapse0x20843e0();
   input += synapse0x2084420();
   input += synapse0x2084460();
   input += synapse0x20844a0();
   input += synapse0x20844e0();
   input += synapse0x2084520();
   input += synapse0x2084560();
   input += synapse0x20845a0();
   input += synapse0x2084030();
   input += synapse0x2084070();
   input += synapse0x20846f0();
   input += synapse0x2084730();
   input += synapse0x2084770();
   input += synapse0x20847b0();
   input += synapse0x20847f0();
   input += synapse0x2084830();
   input += synapse0x2084870();
   input += synapse0x20848b0();
   input += synapse0x20848f0();
   input += synapse0x2084930();
   input += synapse0x2084970();
   input += synapse0x20849b0();
   input += synapse0x20849f0();
   input += synapse0x2084a30();
   input += synapse0x20845e0();
   input += synapse0x2084620();
   input += synapse0x2084660();
   input += synapse0x20846a0();
   input += synapse0x2084c80();
   input += synapse0x2084cc0();
   input += synapse0x2084d00();
   input += synapse0x2084d40();
   input += synapse0x2084d80();
   input += synapse0x2084dc0();
   input += synapse0x2084e00();
   input += synapse0x2084e40();
   input += synapse0x2084e80();
   input += synapse0x2084ec0();
   input += synapse0x2084f00();
   input += synapse0x2084f40();
   input += synapse0x2084f80();
   input += synapse0x2084fc0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2083ea0() {
   double input = input0x2083ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2085000() {
   double input = 0.637179;
   input += synapse0x2085340();
   input += synapse0x2085380();
   input += synapse0x20853c0();
   input += synapse0x2085400();
   input += synapse0x2085440();
   input += synapse0x2085480();
   input += synapse0x20854c0();
   input += synapse0x2085500();
   input += synapse0x2085540();
   input += synapse0x2085580();
   input += synapse0x20855c0();
   input += synapse0x2085600();
   input += synapse0x2085640();
   input += synapse0x2085680();
   input += synapse0x20856c0();
   input += synapse0x2085700();
   input += synapse0x2085190();
   input += synapse0x20851d0();
   input += synapse0x2085850();
   input += synapse0x2085890();
   input += synapse0x20858d0();
   input += synapse0x2085910();
   input += synapse0x2085950();
   input += synapse0x2085990();
   input += synapse0x20859d0();
   input += synapse0x2085a10();
   input += synapse0x2085a50();
   input += synapse0x2085a90();
   input += synapse0x2085ad0();
   input += synapse0x2085b10();
   input += synapse0x2085b50();
   input += synapse0x2085b90();
   input += synapse0x2085740();
   input += synapse0x2085780();
   input += synapse0x20857c0();
   input += synapse0x2085800();
   input += synapse0x2085de0();
   input += synapse0x2085e20();
   input += synapse0x2085e60();
   input += synapse0x2085ea0();
   input += synapse0x2085ee0();
   input += synapse0x2085f20();
   input += synapse0x2085f60();
   input += synapse0x2085fa0();
   input += synapse0x2085fe0();
   input += synapse0x2086020();
   input += synapse0x2086060();
   input += synapse0x20860a0();
   input += synapse0x20860e0();
   input += synapse0x2086120();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2085000() {
   double input = input0x2085000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2086160() {
   double input = 0.3115;
   input += synapse0x20864a0();
   input += synapse0x20864e0();
   input += synapse0x2086520();
   input += synapse0x2086560();
   input += synapse0x20865a0();
   input += synapse0x20865e0();
   input += synapse0x2086620();
   input += synapse0x2086660();
   input += synapse0x20866a0();
   input += synapse0x20866e0();
   input += synapse0x2086720();
   input += synapse0x2086760();
   input += synapse0x20867a0();
   input += synapse0x20867e0();
   input += synapse0x2086820();
   input += synapse0x2086860();
   input += synapse0x20862f0();
   input += synapse0x2086330();
   input += synapse0x20869b0();
   input += synapse0x20869f0();
   input += synapse0x2086a30();
   input += synapse0x2086a70();
   input += synapse0x2086ab0();
   input += synapse0x2086af0();
   input += synapse0x2086b30();
   input += synapse0x2086b70();
   input += synapse0x2086bb0();
   input += synapse0x2086bf0();
   input += synapse0x2086c30();
   input += synapse0x2086c70();
   input += synapse0x2086cb0();
   input += synapse0x2086cf0();
   input += synapse0x20868a0();
   input += synapse0x20868e0();
   input += synapse0x2086920();
   input += synapse0x2086960();
   input += synapse0x2086f40();
   input += synapse0x2086f80();
   input += synapse0x2086fc0();
   input += synapse0x2087000();
   input += synapse0x2087040();
   input += synapse0x2087080();
   input += synapse0x20870c0();
   input += synapse0x2087100();
   input += synapse0x2087140();
   input += synapse0x2087180();
   input += synapse0x20871c0();
   input += synapse0x2087200();
   input += synapse0x2087240();
   input += synapse0x2087280();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2086160() {
   double input = input0x2086160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x20872c0() {
   double input = 10.1053;
   input += synapse0x20874e0();
   input += synapse0x2087520();
   input += synapse0x2087560();
   input += synapse0x20875a0();
   input += synapse0x20875e0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x20872c0() {
   double input = input0x20872c0();
   return (input * 1)+0;
}

double NNfunction_sb_uRdR::synapse0x2053270() {
   return (neuron0x20533b0()*0.00677065);
}

double NNfunction_sb_uRdR::synapse0x20532b0() {
   return (neuron0x20536f0()*-0.0182324);
}

double NNfunction_sb_uRdR::synapse0x2058690() {
   return (neuron0x2053a30()*0.00685876);
}

double NNfunction_sb_uRdR::synapse0x20586d0() {
   return (neuron0x2053d70()*-0.279138);
}

double NNfunction_sb_uRdR::synapse0x2058710() {
   return (neuron0x20540b0()*0.00649098);
}

double NNfunction_sb_uRdR::synapse0x2058750() {
   return (neuron0x20543f0()*-0.0147941);
}

double NNfunction_sb_uRdR::synapse0x2058790() {
   return (neuron0x2054730()*-0.00262444);
}

double NNfunction_sb_uRdR::synapse0x20587d0() {
   return (neuron0x2054a70()*-0.00688365);
}

double NNfunction_sb_uRdR::synapse0x2058810() {
   return (neuron0x2054db0()*0.00318155);
}

double NNfunction_sb_uRdR::synapse0x2058850() {
   return (neuron0x20550f0()*0.0188368);
}

double NNfunction_sb_uRdR::synapse0x2058890() {
   return (neuron0x2055430()*-0.00934566);
}

double NNfunction_sb_uRdR::synapse0x20588d0() {
   return (neuron0x2055770()*0.0110369);
}

double NNfunction_sb_uRdR::synapse0x2058910() {
   return (neuron0x2055ab0()*-0.00569774);
}

double NNfunction_sb_uRdR::synapse0x2058950() {
   return (neuron0x2055df0()*-0.0161755);
}

double NNfunction_sb_uRdR::synapse0x2058990() {
   return (neuron0x2056130()*0.0508053);
}

double NNfunction_sb_uRdR::synapse0x20589d0() {
   return (neuron0x2056470()*-0.0260139);
}

double NNfunction_sb_uRdR::synapse0x20531e0() {
   return (neuron0x20567b0()*-0.0119578);
}

double NNfunction_sb_uRdR::synapse0x2053220() {
   return (neuron0x2056d10()*0.634171);
}

double NNfunction_sb_uRdR::synapse0x1e0e5d0() {
   return (neuron0x2056f30()*0.015394);
}

double NNfunction_sb_uRdR::synapse0x1e0e610() {
   return (neuron0x2057270()*0.0133695);
}

double NNfunction_sb_uRdR::synapse0x2058c30() {
   return (neuron0x20575b0()*0.0114476);
}

double NNfunction_sb_uRdR::synapse0x2058c70() {
   return (neuron0x20578f0()*0.00196022);
}

double NNfunction_sb_uRdR::synapse0x2058cb0() {
   return (neuron0x2057c30()*0.00310441);
}

double NNfunction_sb_uRdR::synapse0x2058cf0() {
   return (neuron0x2057f70()*-0.0023234);
}

double NNfunction_sb_uRdR::synapse0x2059070() {
   return (neuron0x20533b0()*0.0207856);
}

double NNfunction_sb_uRdR::synapse0x20590b0() {
   return (neuron0x20536f0()*-0.171058);
}

double NNfunction_sb_uRdR::synapse0x20590f0() {
   return (neuron0x2053a30()*0.0464272);
}

double NNfunction_sb_uRdR::synapse0x2059130() {
   return (neuron0x2053d70()*-0.719279);
}

double NNfunction_sb_uRdR::synapse0x2059170() {
   return (neuron0x20540b0()*-0.0117889);
}

double NNfunction_sb_uRdR::synapse0x20591b0() {
   return (neuron0x20543f0()*-0.018747);
}

double NNfunction_sb_uRdR::synapse0x20591f0() {
   return (neuron0x2054730()*-0.0574497);
}

double NNfunction_sb_uRdR::synapse0x2059230() {
   return (neuron0x2054a70()*-0.00491973);
}

double NNfunction_sb_uRdR::synapse0x2059270() {
   return (neuron0x2054db0()*-0.0104743);
}

double NNfunction_sb_uRdR::synapse0x2058b20() {
   return (neuron0x20550f0()*-0.00410024);
}

double NNfunction_sb_uRdR::synapse0x2058b60() {
   return (neuron0x2055430()*-0.0447129);
}

double NNfunction_sb_uRdR::synapse0x2058ba0() {
   return (neuron0x2055770()*-0.0345107);
}

double NNfunction_sb_uRdR::synapse0x2058be0() {
   return (neuron0x2055ab0()*-0.0340691);
}

double NNfunction_sb_uRdR::synapse0x20594c0() {
   return (neuron0x2055df0()*-0.0282763);
}

double NNfunction_sb_uRdR::synapse0x2059500() {
   return (neuron0x2056130()*-0.272805);
}

double NNfunction_sb_uRdR::synapse0x2059540() {
   return (neuron0x2056470()*-0.0509045);
}

double NNfunction_sb_uRdR::synapse0x2058ec0() {
   return (neuron0x20567b0()*-0.0211632);
}

double NNfunction_sb_uRdR::synapse0x2058f00() {
   return (neuron0x2056d10()*-0.0923141);
}

double NNfunction_sb_uRdR::synapse0x2059690() {
   return (neuron0x2056f30()*-0.0390572);
}

double NNfunction_sb_uRdR::synapse0x20596d0() {
   return (neuron0x2057270()*-0.0137061);
}

double NNfunction_sb_uRdR::synapse0x2059710() {
   return (neuron0x20575b0()*-0.0264181);
}

double NNfunction_sb_uRdR::synapse0x2059750() {
   return (neuron0x20578f0()*0.0211968);
}

double NNfunction_sb_uRdR::synapse0x2059790() {
   return (neuron0x2057c30()*0.0151971);
}

double NNfunction_sb_uRdR::synapse0x20597d0() {
   return (neuron0x2057f70()*0.000960643);
}

double NNfunction_sb_uRdR::synapse0x2059b50() {
   return (neuron0x20533b0()*0.0979707);
}

double NNfunction_sb_uRdR::synapse0x2059b90() {
   return (neuron0x20536f0()*-0.121278);
}

double NNfunction_sb_uRdR::synapse0x2059bd0() {
   return (neuron0x2053a30()*-0.0533014);
}

double NNfunction_sb_uRdR::synapse0x2059c10() {
   return (neuron0x2053d70()*1.20294);
}

double NNfunction_sb_uRdR::synapse0x2059c50() {
   return (neuron0x20540b0()*-0.010568);
}

double NNfunction_sb_uRdR::synapse0x2059c90() {
   return (neuron0x20543f0()*-0.0247575);
}

double NNfunction_sb_uRdR::synapse0x2059cd0() {
   return (neuron0x2054730()*0.0128162);
}

double NNfunction_sb_uRdR::synapse0x2059d10() {
   return (neuron0x2054a70()*0.00446852);
}

double NNfunction_sb_uRdR::synapse0x2059d50() {
   return (neuron0x2054db0()*-0.018889);
}

double NNfunction_sb_uRdR::synapse0x2059d90() {
   return (neuron0x20550f0()*0.0262823);
}

double NNfunction_sb_uRdR::synapse0x2059dd0() {
   return (neuron0x2055430()*-0.0126933);
}

double NNfunction_sb_uRdR::synapse0x2059e10() {
   return (neuron0x2055770()*-0.0297317);
}

double NNfunction_sb_uRdR::synapse0x2059e50() {
   return (neuron0x2055ab0()*-0.018365);
}

double NNfunction_sb_uRdR::synapse0x2059e90() {
   return (neuron0x2055df0()*-0.10488);
}

double NNfunction_sb_uRdR::synapse0x2059ed0() {
   return (neuron0x2056130()*-0.101252);
}

double NNfunction_sb_uRdR::synapse0x2059f10() {
   return (neuron0x2056470()*-0.0211461);
}

double NNfunction_sb_uRdR::synapse0x20599a0() {
   return (neuron0x20567b0()*0.00652917);
}

double NNfunction_sb_uRdR::synapse0x20599e0() {
   return (neuron0x2056d10()*-0.155869);
}

double NNfunction_sb_uRdR::synapse0x1e0d720() {
   return (neuron0x2056f30()*0.0240995);
}

double NNfunction_sb_uRdR::synapse0x1e1c520() {
   return (neuron0x2057270()*0.149086);
}

double NNfunction_sb_uRdR::synapse0x1e1c560() {
   return (neuron0x20575b0()*0.100754);
}

double NNfunction_sb_uRdR::synapse0x2042440() {
   return (neuron0x20578f0()*-0.0834038);
}

double NNfunction_sb_uRdR::synapse0x2042480() {
   return (neuron0x2057c30()*0.00200601);
}

double NNfunction_sb_uRdR::synapse0x20424c0() {
   return (neuron0x2057f70()*-0.00732681);
}

double NNfunction_sb_uRdR::synapse0x1e1cda0() {
   return (neuron0x20533b0()*0.252671);
}

double NNfunction_sb_uRdR::synapse0x2059440() {
   return (neuron0x20536f0()*-0.847716);
}

double NNfunction_sb_uRdR::synapse0x2059480() {
   return (neuron0x2053a30()*0.284669);
}

double NNfunction_sb_uRdR::synapse0x205a060() {
   return (neuron0x2053d70()*-1.57434);
}

double NNfunction_sb_uRdR::synapse0x205a0a0() {
   return (neuron0x20540b0()*0.466279);
}

double NNfunction_sb_uRdR::synapse0x205a0e0() {
   return (neuron0x20543f0()*0.103604);
}

double NNfunction_sb_uRdR::synapse0x205a120() {
   return (neuron0x2054730()*0.52252);
}

double NNfunction_sb_uRdR::synapse0x205a160() {
   return (neuron0x2054a70()*0.0736373);
}

double NNfunction_sb_uRdR::synapse0x205a1a0() {
   return (neuron0x2054db0()*0.584423);
}

double NNfunction_sb_uRdR::synapse0x205a1e0() {
   return (neuron0x20550f0()*-0.272786);
}

double NNfunction_sb_uRdR::synapse0x205a220() {
   return (neuron0x2055430()*0.0239284);
}

double NNfunction_sb_uRdR::synapse0x205a260() {
   return (neuron0x2055770()*0.0939917);
}

double NNfunction_sb_uRdR::synapse0x205a2a0() {
   return (neuron0x2055ab0()*-0.860714);
}

double NNfunction_sb_uRdR::synapse0x205a2e0() {
   return (neuron0x2055df0()*-0.175242);
}

double NNfunction_sb_uRdR::synapse0x205a320() {
   return (neuron0x2056130()*0.123956);
}

double NNfunction_sb_uRdR::synapse0x205a360() {
   return (neuron0x2056470()*-0.375679);
}

double NNfunction_sb_uRdR::synapse0x20532f0() {
   return (neuron0x20567b0()*0.268013);
}

double NNfunction_sb_uRdR::synapse0x2053330() {
   return (neuron0x2056d10()*0.0251562);
}

double NNfunction_sb_uRdR::synapse0x2053370() {
   return (neuron0x2056f30()*0.146873);
}

double NNfunction_sb_uRdR::synapse0x205a4b0() {
   return (neuron0x2057270()*-0.034088);
}

double NNfunction_sb_uRdR::synapse0x205a4f0() {
   return (neuron0x20575b0()*-0.0649509);
}

double NNfunction_sb_uRdR::synapse0x205a530() {
   return (neuron0x20578f0()*-0.117065);
}

double NNfunction_sb_uRdR::synapse0x205a570() {
   return (neuron0x2057c30()*0.324313);
}

double NNfunction_sb_uRdR::synapse0x205a5b0() {
   return (neuron0x2057f70()*0.0343495);
}

double NNfunction_sb_uRdR::synapse0x205a930() {
   return (neuron0x20533b0()*-0.319234);
}

double NNfunction_sb_uRdR::synapse0x205a970() {
   return (neuron0x20536f0()*0.786299);
}

double NNfunction_sb_uRdR::synapse0x205a9b0() {
   return (neuron0x2053a30()*-0.424545);
}

double NNfunction_sb_uRdR::synapse0x205a9f0() {
   return (neuron0x2053d70()*0.934084);
}

double NNfunction_sb_uRdR::synapse0x205aa30() {
   return (neuron0x20540b0()*0.482635);
}

double NNfunction_sb_uRdR::synapse0x205aa70() {
   return (neuron0x20543f0()*-0.285416);
}

double NNfunction_sb_uRdR::synapse0x205aab0() {
   return (neuron0x2054730()*0.210877);
}

double NNfunction_sb_uRdR::synapse0x205aaf0() {
   return (neuron0x2054a70()*0.232113);
}

double NNfunction_sb_uRdR::synapse0x205ab30() {
   return (neuron0x2054db0()*0.749838);
}

double NNfunction_sb_uRdR::synapse0x205ab70() {
   return (neuron0x20550f0()*0.245952);
}

double NNfunction_sb_uRdR::synapse0x205abb0() {
   return (neuron0x2055430()*0.2766);
}

double NNfunction_sb_uRdR::synapse0x205abf0() {
   return (neuron0x2055770()*-0.106521);
}

double NNfunction_sb_uRdR::synapse0x205ac30() {
   return (neuron0x2055ab0()*0.550955);
}

double NNfunction_sb_uRdR::synapse0x205ac70() {
   return (neuron0x2055df0()*0.367467);
}

double NNfunction_sb_uRdR::synapse0x205acb0() {
   return (neuron0x2056130()*-0.291017);
}

double NNfunction_sb_uRdR::synapse0x205acf0() {
   return (neuron0x2056470()*-0.118647);
}

double NNfunction_sb_uRdR::synapse0x205a780() {
   return (neuron0x20567b0()*-0.299112);
}

double NNfunction_sb_uRdR::synapse0x205a7c0() {
   return (neuron0x2056d10()*0.280177);
}

double NNfunction_sb_uRdR::synapse0x205ae40() {
   return (neuron0x2056f30()*0.111159);
}

double NNfunction_sb_uRdR::synapse0x205ae80() {
   return (neuron0x2057270()*-0.631661);
}

double NNfunction_sb_uRdR::synapse0x205aec0() {
   return (neuron0x20575b0()*0.0606249);
}

double NNfunction_sb_uRdR::synapse0x205af00() {
   return (neuron0x20578f0()*-0.0915926);
}

double NNfunction_sb_uRdR::synapse0x205af40() {
   return (neuron0x2057c30()*-0.0110913);
}

double NNfunction_sb_uRdR::synapse0x205af80() {
   return (neuron0x2057f70()*-0.688524);
}

double NNfunction_sb_uRdR::synapse0x205b300() {
   return (neuron0x20533b0()*-0.754314);
}

double NNfunction_sb_uRdR::synapse0x205b340() {
   return (neuron0x20536f0()*0.211914);
}

double NNfunction_sb_uRdR::synapse0x205b380() {
   return (neuron0x2053a30()*0.330393);
}

double NNfunction_sb_uRdR::synapse0x205b3c0() {
   return (neuron0x2053d70()*-2.29974);
}

double NNfunction_sb_uRdR::synapse0x205b400() {
   return (neuron0x20540b0()*0.329547);
}

double NNfunction_sb_uRdR::synapse0x205b440() {
   return (neuron0x20543f0()*0.251074);
}

double NNfunction_sb_uRdR::synapse0x205b480() {
   return (neuron0x2054730()*-0.0559068);
}

double NNfunction_sb_uRdR::synapse0x205b4c0() {
   return (neuron0x2054a70()*0.00996088);
}

double NNfunction_sb_uRdR::synapse0x205b500() {
   return (neuron0x2054db0()*-0.123082);
}

double NNfunction_sb_uRdR::synapse0x1e1c870() {
   return (neuron0x20550f0()*0.220017);
}

double NNfunction_sb_uRdR::synapse0x1e1c8b0() {
   return (neuron0x2055430()*-0.450327);
}

double NNfunction_sb_uRdR::synapse0x1e1c8f0() {
   return (neuron0x2055770()*-0.295784);
}

double NNfunction_sb_uRdR::synapse0x1e1c930() {
   return (neuron0x2055ab0()*-0.604232);
}

double NNfunction_sb_uRdR::synapse0x1e1c970() {
   return (neuron0x2055df0()*-0.303533);
}

double NNfunction_sb_uRdR::synapse0x1e1c9b0() {
   return (neuron0x2056130()*-0.794116);
}

double NNfunction_sb_uRdR::synapse0x1e1c9f0() {
   return (neuron0x2056470()*-0.245724);
}

double NNfunction_sb_uRdR::synapse0x205b150() {
   return (neuron0x20567b0()*0.0208401);
}

double NNfunction_sb_uRdR::synapse0x205b190() {
   return (neuron0x2056d10()*-1.18653);
}

double NNfunction_sb_uRdR::synapse0x1e1cb40() {
   return (neuron0x2056f30()*-0.202216);
}

double NNfunction_sb_uRdR::synapse0x1e1cb80() {
   return (neuron0x2057270()*0.0145835);
}

double NNfunction_sb_uRdR::synapse0x1e1cbc0() {
   return (neuron0x20575b0()*0.306802);
}

double NNfunction_sb_uRdR::synapse0x1e1cc00() {
   return (neuron0x20578f0()*0.419373);
}

double NNfunction_sb_uRdR::synapse0x1e1cc40() {
   return (neuron0x2057c30()*0.142954);
}

double NNfunction_sb_uRdR::synapse0x205bd50() {
   return (neuron0x2057f70()*-0.938495);
}

double NNfunction_sb_uRdR::synapse0x205c0d0() {
   return (neuron0x20533b0()*0.0209517);
}

double NNfunction_sb_uRdR::synapse0x205c110() {
   return (neuron0x20536f0()*-0.000149895);
}

double NNfunction_sb_uRdR::synapse0x205c150() {
   return (neuron0x2053a30()*-0.00608434);
}

double NNfunction_sb_uRdR::synapse0x205c190() {
   return (neuron0x2053d70()*0.193734);
}

double NNfunction_sb_uRdR::synapse0x205c1d0() {
   return (neuron0x20540b0()*-0.00671027);
}

double NNfunction_sb_uRdR::synapse0x205c210() {
   return (neuron0x20543f0()*-0.00892251);
}

double NNfunction_sb_uRdR::synapse0x205c250() {
   return (neuron0x2054730()*-0.00504698);
}

double NNfunction_sb_uRdR::synapse0x205c290() {
   return (neuron0x2054a70()*0.00939207);
}

double NNfunction_sb_uRdR::synapse0x205c2d0() {
   return (neuron0x2054db0()*0.000276465);
}

double NNfunction_sb_uRdR::synapse0x205c310() {
   return (neuron0x20550f0()*-0.000922838);
}

double NNfunction_sb_uRdR::synapse0x205c350() {
   return (neuron0x2055430()*0.0151021);
}

double NNfunction_sb_uRdR::synapse0x205c390() {
   return (neuron0x2055770()*-0.0120183);
}

double NNfunction_sb_uRdR::synapse0x205c3d0() {
   return (neuron0x2055ab0()*0.0059542);
}

double NNfunction_sb_uRdR::synapse0x205c410() {
   return (neuron0x2055df0()*0.00506956);
}

double NNfunction_sb_uRdR::synapse0x205c450() {
   return (neuron0x2056130()*0.0468774);
}

double NNfunction_sb_uRdR::synapse0x205c490() {
   return (neuron0x2056470()*-0.016685);
}

double NNfunction_sb_uRdR::synapse0x205bf20() {
   return (neuron0x20567b0()*-0.0112519);
}

double NNfunction_sb_uRdR::synapse0x205bf60() {
   return (neuron0x2056d10()*-1.69921);
}

double NNfunction_sb_uRdR::synapse0x205c5e0() {
   return (neuron0x2056f30()*0.0115765);
}

double NNfunction_sb_uRdR::synapse0x205c620() {
   return (neuron0x2057270()*0.00471632);
}

double NNfunction_sb_uRdR::synapse0x205c660() {
   return (neuron0x20575b0()*0.0228428);
}

double NNfunction_sb_uRdR::synapse0x205c6a0() {
   return (neuron0x20578f0()*0.0218723);
}

double NNfunction_sb_uRdR::synapse0x205c6e0() {
   return (neuron0x2057c30()*0.00454384);
}

double NNfunction_sb_uRdR::synapse0x205c720() {
   return (neuron0x2057f70()*0.00288062);
}

double NNfunction_sb_uRdR::synapse0x205caa0() {
   return (neuron0x20533b0()*-0.0303531);
}

double NNfunction_sb_uRdR::synapse0x205cae0() {
   return (neuron0x20536f0()*0.323345);
}

double NNfunction_sb_uRdR::synapse0x205cb20() {
   return (neuron0x2053a30()*0.165581);
}

double NNfunction_sb_uRdR::synapse0x205cb60() {
   return (neuron0x2053d70()*1.06967);
}

double NNfunction_sb_uRdR::synapse0x205cba0() {
   return (neuron0x20540b0()*0.0637054);
}

double NNfunction_sb_uRdR::synapse0x205cbe0() {
   return (neuron0x20543f0()*0.0401742);
}

double NNfunction_sb_uRdR::synapse0x205cc20() {
   return (neuron0x2054730()*0.0646503);
}

double NNfunction_sb_uRdR::synapse0x205cc60() {
   return (neuron0x2054a70()*0.154157);
}

double NNfunction_sb_uRdR::synapse0x205cca0() {
   return (neuron0x2054db0()*-0.0265373);
}

double NNfunction_sb_uRdR::synapse0x205cce0() {
   return (neuron0x20550f0()*-0.039072);
}

double NNfunction_sb_uRdR::synapse0x205cd20() {
   return (neuron0x2055430()*0.184207);
}

double NNfunction_sb_uRdR::synapse0x205cd60() {
   return (neuron0x2055770()*-0.176454);
}

double NNfunction_sb_uRdR::synapse0x205cda0() {
   return (neuron0x2055ab0()*-0.05521);
}

double NNfunction_sb_uRdR::synapse0x205cde0() {
   return (neuron0x2055df0()*-0.0366539);
}

double NNfunction_sb_uRdR::synapse0x205ce20() {
   return (neuron0x2056130()*-0.127053);
}

double NNfunction_sb_uRdR::synapse0x205ce60() {
   return (neuron0x2056470()*-0.0979424);
}

double NNfunction_sb_uRdR::synapse0x205c8f0() {
   return (neuron0x20567b0()*-0.0212072);
}

double NNfunction_sb_uRdR::synapse0x205c930() {
   return (neuron0x2056d10()*-0.271389);
}

double NNfunction_sb_uRdR::synapse0x205cfb0() {
   return (neuron0x2056f30()*-0.10201);
}

double NNfunction_sb_uRdR::synapse0x205cff0() {
   return (neuron0x2057270()*-0.149442);
}

double NNfunction_sb_uRdR::synapse0x205d030() {
   return (neuron0x20575b0()*0.375028);
}

double NNfunction_sb_uRdR::synapse0x205d070() {
   return (neuron0x20578f0()*0.187241);
}

double NNfunction_sb_uRdR::synapse0x205d0b0() {
   return (neuron0x2057c30()*0.174943);
}

double NNfunction_sb_uRdR::synapse0x205d0f0() {
   return (neuron0x2057f70()*0.095636);
}

double NNfunction_sb_uRdR::synapse0x2056c00() {
   return (neuron0x20533b0()*0.0172117);
}

double NNfunction_sb_uRdR::synapse0x2056c40() {
   return (neuron0x20536f0()*0.0548049);
}

double NNfunction_sb_uRdR::synapse0x2056c80() {
   return (neuron0x2053a30()*-0.0342388);
}

double NNfunction_sb_uRdR::synapse0x2056cc0() {
   return (neuron0x2053d70()*0.331023);
}

double NNfunction_sb_uRdR::synapse0x205d680() {
   return (neuron0x20540b0()*-0.0218049);
}

double NNfunction_sb_uRdR::synapse0x205d6c0() {
   return (neuron0x20543f0()*0.0163094);
}

double NNfunction_sb_uRdR::synapse0x205d700() {
   return (neuron0x2054730()*0.00535624);
}

double NNfunction_sb_uRdR::synapse0x205d740() {
   return (neuron0x2054a70()*0.00656453);
}

double NNfunction_sb_uRdR::synapse0x205d780() {
   return (neuron0x2054db0()*-0.0231181);
}

double NNfunction_sb_uRdR::synapse0x205d7c0() {
   return (neuron0x20550f0()*-0.019638);
}

double NNfunction_sb_uRdR::synapse0x205d800() {
   return (neuron0x2055430()*0.0390319);
}

double NNfunction_sb_uRdR::synapse0x205d840() {
   return (neuron0x2055770()*-0.0307013);
}

double NNfunction_sb_uRdR::synapse0x205d880() {
   return (neuron0x2055ab0()*-0.00548684);
}

double NNfunction_sb_uRdR::synapse0x205d8c0() {
   return (neuron0x2055df0()*-0.00195413);
}

double NNfunction_sb_uRdR::synapse0x205d900() {
   return (neuron0x2056130()*0.434193);
}

double NNfunction_sb_uRdR::synapse0x205d940() {
   return (neuron0x2056470()*-0.00180979);
}

double NNfunction_sb_uRdR::synapse0x205d2c0() {
   return (neuron0x20567b0()*0.0312565);
}

double NNfunction_sb_uRdR::synapse0x205d300() {
   return (neuron0x2056d10()*0.245855);
}

double NNfunction_sb_uRdR::synapse0x205da90() {
   return (neuron0x2056f30()*-0.0148128);
}

double NNfunction_sb_uRdR::synapse0x205dad0() {
   return (neuron0x2057270()*0.0189449);
}

double NNfunction_sb_uRdR::synapse0x205db10() {
   return (neuron0x20575b0()*-0.00879218);
}

double NNfunction_sb_uRdR::synapse0x205db50() {
   return (neuron0x20578f0()*-0.0542547);
}

double NNfunction_sb_uRdR::synapse0x205db90() {
   return (neuron0x2057c30()*-0.015855);
}

double NNfunction_sb_uRdR::synapse0x205dbd0() {
   return (neuron0x2057f70()*0.0304673);
}

double NNfunction_sb_uRdR::synapse0x205df50() {
   return (neuron0x20533b0()*0.00529166);
}

double NNfunction_sb_uRdR::synapse0x205df90() {
   return (neuron0x20536f0()*0.0915405);
}

double NNfunction_sb_uRdR::synapse0x205dfd0() {
   return (neuron0x2053a30()*-0.00510491);
}

double NNfunction_sb_uRdR::synapse0x205e010() {
   return (neuron0x2053d70()*1.06094);
}

double NNfunction_sb_uRdR::synapse0x205e050() {
   return (neuron0x20540b0()*-0.0127375);
}

double NNfunction_sb_uRdR::synapse0x205e090() {
   return (neuron0x20543f0()*-0.0138433);
}

double NNfunction_sb_uRdR::synapse0x205e0d0() {
   return (neuron0x2054730()*-0.00794352);
}

double NNfunction_sb_uRdR::synapse0x205e110() {
   return (neuron0x2054a70()*-0.0109225);
}

double NNfunction_sb_uRdR::synapse0x205e150() {
   return (neuron0x2054db0()*-0.0370006);
}

double NNfunction_sb_uRdR::synapse0x205e190() {
   return (neuron0x20550f0()*-0.0214965);
}

double NNfunction_sb_uRdR::synapse0x205e1d0() {
   return (neuron0x2055430()*-0.00214845);
}

double NNfunction_sb_uRdR::synapse0x205e210() {
   return (neuron0x2055770()*0.182754);
}

double NNfunction_sb_uRdR::synapse0x205e250() {
   return (neuron0x2055ab0()*0.200382);
}

double NNfunction_sb_uRdR::synapse0x205e290() {
   return (neuron0x2055df0()*-0.0369005);
}

double NNfunction_sb_uRdR::synapse0x205e2d0() {
   return (neuron0x2056130()*-0.043561);
}

double NNfunction_sb_uRdR::synapse0x205e310() {
   return (neuron0x2056470()*0.0631006);
}

double NNfunction_sb_uRdR::synapse0x205dda0() {
   return (neuron0x20567b0()*-0.0229342);
}

double NNfunction_sb_uRdR::synapse0x205dde0() {
   return (neuron0x2056d10()*-0.105242);
}

double NNfunction_sb_uRdR::synapse0x205e460() {
   return (neuron0x2056f30()*0.066079);
}

double NNfunction_sb_uRdR::synapse0x205e4a0() {
   return (neuron0x2057270()*-0.00837801);
}

double NNfunction_sb_uRdR::synapse0x205e4e0() {
   return (neuron0x20575b0()*-0.0168999);
}

double NNfunction_sb_uRdR::synapse0x205e520() {
   return (neuron0x20578f0()*-0.0182577);
}

double NNfunction_sb_uRdR::synapse0x205e560() {
   return (neuron0x2057c30()*0.0068424);
}

double NNfunction_sb_uRdR::synapse0x205e5a0() {
   return (neuron0x2057f70()*-0.0280683);
}

double NNfunction_sb_uRdR::synapse0x205e920() {
   return (neuron0x20533b0()*-0.337953);
}

double NNfunction_sb_uRdR::synapse0x205e960() {
   return (neuron0x20536f0()*0.341076);
}

double NNfunction_sb_uRdR::synapse0x205e9a0() {
   return (neuron0x2053a30()*-0.207269);
}

double NNfunction_sb_uRdR::synapse0x205e9e0() {
   return (neuron0x2053d70()*0.364503);
}

double NNfunction_sb_uRdR::synapse0x205ea20() {
   return (neuron0x20540b0()*0.281239);
}

double NNfunction_sb_uRdR::synapse0x205ea60() {
   return (neuron0x20543f0()*0.222439);
}

double NNfunction_sb_uRdR::synapse0x205eaa0() {
   return (neuron0x2054730()*0.695144);
}

double NNfunction_sb_uRdR::synapse0x205eae0() {
   return (neuron0x2054a70()*0.661147);
}

double NNfunction_sb_uRdR::synapse0x205eb20() {
   return (neuron0x2054db0()*-0.229509);
}

double NNfunction_sb_uRdR::synapse0x205eb60() {
   return (neuron0x20550f0()*-0.081777);
}

double NNfunction_sb_uRdR::synapse0x205eba0() {
   return (neuron0x2055430()*-0.0895104);
}

double NNfunction_sb_uRdR::synapse0x205ebe0() {
   return (neuron0x2055770()*-0.752809);
}

double NNfunction_sb_uRdR::synapse0x205ec20() {
   return (neuron0x2055ab0()*0.699463);
}

double NNfunction_sb_uRdR::synapse0x205ec60() {
   return (neuron0x2055df0()*0.116008);
}

double NNfunction_sb_uRdR::synapse0x205eca0() {
   return (neuron0x2056130()*-0.00906046);
}

double NNfunction_sb_uRdR::synapse0x205ece0() {
   return (neuron0x2056470()*-0.219703);
}

double NNfunction_sb_uRdR::synapse0x205e770() {
   return (neuron0x20567b0()*0.521591);
}

double NNfunction_sb_uRdR::synapse0x205e7b0() {
   return (neuron0x2056d10()*0.189475);
}

double NNfunction_sb_uRdR::synapse0x205b540() {
   return (neuron0x2056f30()*-0.072047);
}

double NNfunction_sb_uRdR::synapse0x205b580() {
   return (neuron0x2057270()*-0.46661);
}

double NNfunction_sb_uRdR::synapse0x205b5c0() {
   return (neuron0x20575b0()*0.739709);
}

double NNfunction_sb_uRdR::synapse0x205b600() {
   return (neuron0x20578f0()*0.183219);
}

double NNfunction_sb_uRdR::synapse0x205b640() {
   return (neuron0x2057c30()*0.371671);
}

double NNfunction_sb_uRdR::synapse0x205b680() {
   return (neuron0x2057f70()*0.0966548);
}

double NNfunction_sb_uRdR::synapse0x205ba00() {
   return (neuron0x20533b0()*-0.570189);
}

double NNfunction_sb_uRdR::synapse0x205ba40() {
   return (neuron0x20536f0()*-0.558208);
}

double NNfunction_sb_uRdR::synapse0x205ba80() {
   return (neuron0x2053a30()*0.112598);
}

double NNfunction_sb_uRdR::synapse0x205bac0() {
   return (neuron0x2053d70()*0.840731);
}

double NNfunction_sb_uRdR::synapse0x205bb00() {
   return (neuron0x20540b0()*0.528223);
}

double NNfunction_sb_uRdR::synapse0x205bb40() {
   return (neuron0x20543f0()*0.408301);
}

double NNfunction_sb_uRdR::synapse0x205bb80() {
   return (neuron0x2054730()*-0.397128);
}

double NNfunction_sb_uRdR::synapse0x205bbc0() {
   return (neuron0x2054a70()*-0.308359);
}

double NNfunction_sb_uRdR::synapse0x205bc00() {
   return (neuron0x2054db0()*0.533463);
}

double NNfunction_sb_uRdR::synapse0x205bc40() {
   return (neuron0x20550f0()*0.108061);
}

double NNfunction_sb_uRdR::synapse0x205bc80() {
   return (neuron0x2055430()*0.993741);
}

double NNfunction_sb_uRdR::synapse0x205bcc0() {
   return (neuron0x2055770()*-0.157254);
}

double NNfunction_sb_uRdR::synapse0x205bd00() {
   return (neuron0x2055ab0()*0.361953);
}

double NNfunction_sb_uRdR::synapse0x205fe40() {
   return (neuron0x2055df0()*-0.747797);
}

double NNfunction_sb_uRdR::synapse0x205fe80() {
   return (neuron0x2056130()*-0.104038);
}

double NNfunction_sb_uRdR::synapse0x205fec0() {
   return (neuron0x2056470()*0.218126);
}

double NNfunction_sb_uRdR::synapse0x205b850() {
   return (neuron0x20567b0()*0.00311263);
}

double NNfunction_sb_uRdR::synapse0x205b890() {
   return (neuron0x2056d10()*0.129952);
}

double NNfunction_sb_uRdR::synapse0x2060010() {
   return (neuron0x2056f30()*-0.530601);
}

double NNfunction_sb_uRdR::synapse0x2060050() {
   return (neuron0x2057270()*0.243451);
}

double NNfunction_sb_uRdR::synapse0x2060090() {
   return (neuron0x20575b0()*0.768871);
}

double NNfunction_sb_uRdR::synapse0x20600d0() {
   return (neuron0x20578f0()*-0.205925);
}

double NNfunction_sb_uRdR::synapse0x2060110() {
   return (neuron0x2057c30()*0.359721);
}

double NNfunction_sb_uRdR::synapse0x2060150() {
   return (neuron0x2057f70()*-0.617527);
}

double NNfunction_sb_uRdR::synapse0x20604d0() {
   return (neuron0x20533b0()*0.00604521);
}

double NNfunction_sb_uRdR::synapse0x2060510() {
   return (neuron0x20536f0()*-0.0146846);
}

double NNfunction_sb_uRdR::synapse0x2060550() {
   return (neuron0x2053a30()*-0.014783);
}

double NNfunction_sb_uRdR::synapse0x2060590() {
   return (neuron0x2053d70()*-4.7369);
}

double NNfunction_sb_uRdR::synapse0x20605d0() {
   return (neuron0x20540b0()*0.0119848);
}

double NNfunction_sb_uRdR::synapse0x2060610() {
   return (neuron0x20543f0()*-0.00402598);
}

double NNfunction_sb_uRdR::synapse0x2060650() {
   return (neuron0x2054730()*0.00626442);
}

double NNfunction_sb_uRdR::synapse0x2060690() {
   return (neuron0x2054a70()*-0.0111746);
}

double NNfunction_sb_uRdR::synapse0x20606d0() {
   return (neuron0x2054db0()*-0.0250384);
}

double NNfunction_sb_uRdR::synapse0x2060710() {
   return (neuron0x20550f0()*0.0273324);
}

double NNfunction_sb_uRdR::synapse0x2060750() {
   return (neuron0x2055430()*-0.00471657);
}

double NNfunction_sb_uRdR::synapse0x2060790() {
   return (neuron0x2055770()*0.0196933);
}

double NNfunction_sb_uRdR::synapse0x20607d0() {
   return (neuron0x2055ab0()*0.0113647);
}

double NNfunction_sb_uRdR::synapse0x2060810() {
   return (neuron0x2055df0()*-0.0234475);
}

double NNfunction_sb_uRdR::synapse0x2060850() {
   return (neuron0x2056130()*0.776875);
}

double NNfunction_sb_uRdR::synapse0x2060890() {
   return (neuron0x2056470()*-0.0100608);
}

double NNfunction_sb_uRdR::synapse0x2060320() {
   return (neuron0x20567b0()*-0.0153555);
}

double NNfunction_sb_uRdR::synapse0x2060360() {
   return (neuron0x2056d10()*0.987198);
}

double NNfunction_sb_uRdR::synapse0x20609e0() {
   return (neuron0x2056f30()*-0.0127434);
}

double NNfunction_sb_uRdR::synapse0x2060a20() {
   return (neuron0x2057270()*0.0145962);
}

double NNfunction_sb_uRdR::synapse0x2060a60() {
   return (neuron0x20575b0()*0.00802891);
}

double NNfunction_sb_uRdR::synapse0x2060aa0() {
   return (neuron0x20578f0()*-0.00951876);
}

double NNfunction_sb_uRdR::synapse0x2060ae0() {
   return (neuron0x2057c30()*-0.00234879);
}

double NNfunction_sb_uRdR::synapse0x2060b20() {
   return (neuron0x2057f70()*-0.0289372);
}

double NNfunction_sb_uRdR::synapse0x2060ea0() {
   return (neuron0x20533b0()*0.711551);
}

double NNfunction_sb_uRdR::synapse0x2060ee0() {
   return (neuron0x20536f0()*0.431272);
}

double NNfunction_sb_uRdR::synapse0x2060f20() {
   return (neuron0x2053a30()*-0.139641);
}

double NNfunction_sb_uRdR::synapse0x2060f60() {
   return (neuron0x2053d70()*0.302079);
}

double NNfunction_sb_uRdR::synapse0x2060fa0() {
   return (neuron0x20540b0()*0.876684);
}

double NNfunction_sb_uRdR::synapse0x2060fe0() {
   return (neuron0x20543f0()*0.812931);
}

double NNfunction_sb_uRdR::synapse0x2061020() {
   return (neuron0x2054730()*0.522004);
}

double NNfunction_sb_uRdR::synapse0x2061060() {
   return (neuron0x2054a70()*1.06299);
}

double NNfunction_sb_uRdR::synapse0x20610a0() {
   return (neuron0x2054db0()*0.189838);
}

double NNfunction_sb_uRdR::synapse0x20610e0() {
   return (neuron0x20550f0()*0.403431);
}

double NNfunction_sb_uRdR::synapse0x2061120() {
   return (neuron0x2055430()*0.488538);
}

double NNfunction_sb_uRdR::synapse0x2061160() {
   return (neuron0x2055770()*0.199628);
}

double NNfunction_sb_uRdR::synapse0x20611a0() {
   return (neuron0x2055ab0()*0.501605);
}

double NNfunction_sb_uRdR::synapse0x20611e0() {
   return (neuron0x2055df0()*0.118795);
}

double NNfunction_sb_uRdR::synapse0x2061220() {
   return (neuron0x2056130()*-0.603479);
}

double NNfunction_sb_uRdR::synapse0x2061260() {
   return (neuron0x2056470()*0.473047);
}

double NNfunction_sb_uRdR::synapse0x2060cf0() {
   return (neuron0x20567b0()*-0.152846);
}

double NNfunction_sb_uRdR::synapse0x2060d30() {
   return (neuron0x2056d10()*0.199103);
}

double NNfunction_sb_uRdR::synapse0x20613b0() {
   return (neuron0x2056f30()*0.261649);
}

double NNfunction_sb_uRdR::synapse0x20613f0() {
   return (neuron0x2057270()*0.171157);
}

double NNfunction_sb_uRdR::synapse0x2061430() {
   return (neuron0x20575b0()*0.924465);
}

double NNfunction_sb_uRdR::synapse0x2061470() {
   return (neuron0x20578f0()*-0.380765);
}

double NNfunction_sb_uRdR::synapse0x20614b0() {
   return (neuron0x2057c30()*-0.0537166);
}

double NNfunction_sb_uRdR::synapse0x20614f0() {
   return (neuron0x2057f70()*0.120389);
}

double NNfunction_sb_uRdR::synapse0x2061870() {
   return (neuron0x20533b0()*-0.0226094);
}

double NNfunction_sb_uRdR::synapse0x20618b0() {
   return (neuron0x20536f0()*0.0200183);
}

double NNfunction_sb_uRdR::synapse0x20618f0() {
   return (neuron0x2053a30()*-0.00680599);
}

double NNfunction_sb_uRdR::synapse0x2061930() {
   return (neuron0x2053d70()*0.204075);
}

double NNfunction_sb_uRdR::synapse0x2061970() {
   return (neuron0x20540b0()*0.0117222);
}

double NNfunction_sb_uRdR::synapse0x20619b0() {
   return (neuron0x20543f0()*-0.0200138);
}

double NNfunction_sb_uRdR::synapse0x20619f0() {
   return (neuron0x2054730()*0.00271271);
}

double NNfunction_sb_uRdR::synapse0x2061a30() {
   return (neuron0x2054a70()*0.00323098);
}

double NNfunction_sb_uRdR::synapse0x2061a70() {
   return (neuron0x2054db0()*0.0150734);
}

double NNfunction_sb_uRdR::synapse0x2061ab0() {
   return (neuron0x20550f0()*-0.00449305);
}

double NNfunction_sb_uRdR::synapse0x2061af0() {
   return (neuron0x2055430()*0.00633823);
}

double NNfunction_sb_uRdR::synapse0x2061b30() {
   return (neuron0x2055770()*0.0050522);
}

double NNfunction_sb_uRdR::synapse0x2061b70() {
   return (neuron0x2055ab0()*-0.00484247);
}

double NNfunction_sb_uRdR::synapse0x2061bb0() {
   return (neuron0x2055df0()*-0.0169834);
}

double NNfunction_sb_uRdR::synapse0x2061bf0() {
   return (neuron0x2056130()*-1.19682);
}

double NNfunction_sb_uRdR::synapse0x2061c30() {
   return (neuron0x2056470()*-0.0142595);
}

double NNfunction_sb_uRdR::synapse0x20616c0() {
   return (neuron0x20567b0()*-0.0419247);
}

double NNfunction_sb_uRdR::synapse0x2061700() {
   return (neuron0x2056d10()*-0.0640051);
}

double NNfunction_sb_uRdR::synapse0x2061d80() {
   return (neuron0x2056f30()*0.0021078);
}

double NNfunction_sb_uRdR::synapse0x2061dc0() {
   return (neuron0x2057270()*-0.00924657);
}

double NNfunction_sb_uRdR::synapse0x2061e00() {
   return (neuron0x20575b0()*0.0136501);
}

double NNfunction_sb_uRdR::synapse0x2061e40() {
   return (neuron0x20578f0()*0.00703635);
}

double NNfunction_sb_uRdR::synapse0x2061e80() {
   return (neuron0x2057c30()*-0.0127114);
}

double NNfunction_sb_uRdR::synapse0x2061ec0() {
   return (neuron0x2057f70()*-0.00855621);
}

double NNfunction_sb_uRdR::synapse0x2062240() {
   return (neuron0x20533b0()*1.15965);
}

double NNfunction_sb_uRdR::synapse0x20535d0() {
   return (neuron0x20536f0()*-0.27628);
}

double NNfunction_sb_uRdR::synapse0x2053610() {
   return (neuron0x2053a30()*0.354306);
}

double NNfunction_sb_uRdR::synapse0x2053910() {
   return (neuron0x2053d70()*0.206588);
}

double NNfunction_sb_uRdR::synapse0x2053950() {
   return (neuron0x20540b0()*-0.767603);
}

double NNfunction_sb_uRdR::synapse0x2053c50() {
   return (neuron0x20543f0()*0.131638);
}

double NNfunction_sb_uRdR::synapse0x2053c90() {
   return (neuron0x2054730()*-0.10145);
}

double NNfunction_sb_uRdR::synapse0x2053f90() {
   return (neuron0x2054a70()*0.207053);
}

double NNfunction_sb_uRdR::synapse0x2053fd0() {
   return (neuron0x2054db0()*-0.0534755);
}

double NNfunction_sb_uRdR::synapse0x20542d0() {
   return (neuron0x20550f0()*-0.19621);
}

double NNfunction_sb_uRdR::synapse0x2054310() {
   return (neuron0x2055430()*0.105257);
}

double NNfunction_sb_uRdR::synapse0x2054610() {
   return (neuron0x2055770()*0.295815);
}

double NNfunction_sb_uRdR::synapse0x2054650() {
   return (neuron0x2055ab0()*0.613531);
}

double NNfunction_sb_uRdR::synapse0x2054950() {
   return (neuron0x2055df0()*0.827188);
}

double NNfunction_sb_uRdR::synapse0x2054990() {
   return (neuron0x2056130()*-0.0807397);
}

double NNfunction_sb_uRdR::synapse0x2054c90() {
   return (neuron0x2056470()*0.120905);
}

double NNfunction_sb_uRdR::synapse0x2054cd0() {
   return (neuron0x20567b0()*0.051133);
}

double NNfunction_sb_uRdR::synapse0x2054fd0() {
   return (neuron0x2056d10()*-1.43591);
}

double NNfunction_sb_uRdR::synapse0x2055010() {
   return (neuron0x2056f30()*-0.306959);
}

double NNfunction_sb_uRdR::synapse0x2055310() {
   return (neuron0x2057270()*0.100935);
}

double NNfunction_sb_uRdR::synapse0x2055350() {
   return (neuron0x20575b0()*-0.45572);
}

double NNfunction_sb_uRdR::synapse0x2055650() {
   return (neuron0x20578f0()*0.508212);
}

double NNfunction_sb_uRdR::synapse0x2055690() {
   return (neuron0x2057c30()*0.59128);
}

double NNfunction_sb_uRdR::synapse0x2055990() {
   return (neuron0x2057f70()*0.145648);
}

double NNfunction_sb_uRdR::synapse0x20559d0() {
   return (neuron0x20533b0()*0.0532437);
}

double NNfunction_sb_uRdR::synapse0x2056690() {
   return (neuron0x20536f0()*-0.04133);
}

double NNfunction_sb_uRdR::synapse0x20566d0() {
   return (neuron0x2053a30()*0.045039);
}

double NNfunction_sb_uRdR::synapse0x2062090() {
   return (neuron0x2053d70()*-1.16434);
}

double NNfunction_sb_uRdR::synapse0x20620d0() {
   return (neuron0x20540b0()*-0.00149303);
}

double NNfunction_sb_uRdR::synapse0x20569d0() {
   return (neuron0x20543f0()*0.0327842);
}

double NNfunction_sb_uRdR::synapse0x2056a10() {
   return (neuron0x2054730()*-0.0789055);
}

double NNfunction_sb_uRdR::synapse0x1e0e4b0() {
   return (neuron0x2054a70()*0.0331152);
}

double NNfunction_sb_uRdR::synapse0x1e0e4f0() {
   return (neuron0x2054db0()*0.0442999);
}

double NNfunction_sb_uRdR::synapse0x2057150() {
   return (neuron0x20550f0()*-0.0282725);
}

double NNfunction_sb_uRdR::synapse0x2057190() {
   return (neuron0x2055430()*-0.00758151);
}

double NNfunction_sb_uRdR::synapse0x2057490() {
   return (neuron0x2055770()*0.0423677);
}

double NNfunction_sb_uRdR::synapse0x20574d0() {
   return (neuron0x2055ab0()*0.0755956);
}

double NNfunction_sb_uRdR::synapse0x20577d0() {
   return (neuron0x2055df0()*0.00499128);
}

double NNfunction_sb_uRdR::synapse0x2057810() {
   return (neuron0x2056130()*0.836545);
}

double NNfunction_sb_uRdR::synapse0x2057b10() {
   return (neuron0x2056470()*-0.0162661);
}

double NNfunction_sb_uRdR::synapse0x2057b50() {
   return (neuron0x20567b0()*-0.0337282);
}

double NNfunction_sb_uRdR::synapse0x2057e50() {
   return (neuron0x2056d10()*0.292745);
}

double NNfunction_sb_uRdR::synapse0x2057e90() {
   return (neuron0x2056f30()*-0.0627183);
}

double NNfunction_sb_uRdR::synapse0x2058190() {
   return (neuron0x2057270()*-0.0674334);
}

double NNfunction_sb_uRdR::synapse0x20581d0() {
   return (neuron0x20575b0()*-0.0618312);
}

double NNfunction_sb_uRdR::synapse0x2055cd0() {
   return (neuron0x20578f0()*0.0790825);
}

double NNfunction_sb_uRdR::synapse0x2055d10() {
   return (neuron0x2057c30()*0.0374658);
}

double NNfunction_sb_uRdR::synapse0x2063fb0() {
   return (neuron0x2057f70()*0.0272442);
}

double NNfunction_sb_uRdR::synapse0x2064330() {
   return (neuron0x20533b0()*-0.569576);
}

double NNfunction_sb_uRdR::synapse0x2064370() {
   return (neuron0x20536f0()*-0.511052);
}

double NNfunction_sb_uRdR::synapse0x20643b0() {
   return (neuron0x2053a30()*-0.328336);
}

double NNfunction_sb_uRdR::synapse0x20643f0() {
   return (neuron0x2053d70()*0.993844);
}

double NNfunction_sb_uRdR::synapse0x2064430() {
   return (neuron0x20540b0()*-0.531763);
}

double NNfunction_sb_uRdR::synapse0x2064470() {
   return (neuron0x20543f0()*0.237441);
}

double NNfunction_sb_uRdR::synapse0x20644b0() {
   return (neuron0x2054730()*-0.340722);
}

double NNfunction_sb_uRdR::synapse0x20644f0() {
   return (neuron0x2054a70()*0.350528);
}

double NNfunction_sb_uRdR::synapse0x2064530() {
   return (neuron0x2054db0()*0.226292);
}

double NNfunction_sb_uRdR::synapse0x2064570() {
   return (neuron0x20550f0()*-0.0593544);
}

double NNfunction_sb_uRdR::synapse0x20645b0() {
   return (neuron0x2055430()*-0.38412);
}

double NNfunction_sb_uRdR::synapse0x20645f0() {
   return (neuron0x2055770()*-1.02518);
}

double NNfunction_sb_uRdR::synapse0x2064630() {
   return (neuron0x2055ab0()*1.05877);
}

double NNfunction_sb_uRdR::synapse0x2064670() {
   return (neuron0x2055df0()*0.366135);
}

double NNfunction_sb_uRdR::synapse0x20646b0() {
   return (neuron0x2056130()*0.248845);
}

double NNfunction_sb_uRdR::synapse0x20646f0() {
   return (neuron0x2056470()*-0.729886);
}

double NNfunction_sb_uRdR::synapse0x2064180() {
   return (neuron0x20567b0()*-0.21661);
}

double NNfunction_sb_uRdR::synapse0x20641c0() {
   return (neuron0x2056d10()*0.104079);
}

double NNfunction_sb_uRdR::synapse0x2064840() {
   return (neuron0x2056f30()*0.79642);
}

double NNfunction_sb_uRdR::synapse0x2064880() {
   return (neuron0x2057270()*0.221023);
}

double NNfunction_sb_uRdR::synapse0x20648c0() {
   return (neuron0x20575b0()*0.594514);
}

double NNfunction_sb_uRdR::synapse0x2064900() {
   return (neuron0x20578f0()*0.279578);
}

double NNfunction_sb_uRdR::synapse0x2064940() {
   return (neuron0x2057c30()*0.19278);
}

double NNfunction_sb_uRdR::synapse0x2064980() {
   return (neuron0x2057f70()*0.784998);
}

double NNfunction_sb_uRdR::synapse0x2064d00() {
   return (neuron0x20533b0()*-0.313393);
}

double NNfunction_sb_uRdR::synapse0x2064d40() {
   return (neuron0x20536f0()*-0.744525);
}

double NNfunction_sb_uRdR::synapse0x2064d80() {
   return (neuron0x2053a30()*0.281208);
}

double NNfunction_sb_uRdR::synapse0x2064dc0() {
   return (neuron0x2053d70()*0.683115);
}

double NNfunction_sb_uRdR::synapse0x2064e00() {
   return (neuron0x20540b0()*-1.01372);
}

double NNfunction_sb_uRdR::synapse0x2064e40() {
   return (neuron0x20543f0()*-0.172314);
}

double NNfunction_sb_uRdR::synapse0x2064e80() {
   return (neuron0x2054730()*0.500728);
}

double NNfunction_sb_uRdR::synapse0x2064ec0() {
   return (neuron0x2054a70()*-0.473861);
}

double NNfunction_sb_uRdR::synapse0x2064f00() {
   return (neuron0x2054db0()*-0.37578);
}

double NNfunction_sb_uRdR::synapse0x2064f40() {
   return (neuron0x20550f0()*0.626068);
}

double NNfunction_sb_uRdR::synapse0x2064f80() {
   return (neuron0x2055430()*0.378538);
}

double NNfunction_sb_uRdR::synapse0x2064fc0() {
   return (neuron0x2055770()*-0.899541);
}

double NNfunction_sb_uRdR::synapse0x2065000() {
   return (neuron0x2055ab0()*-0.765724);
}

double NNfunction_sb_uRdR::synapse0x2065040() {
   return (neuron0x2055df0()*-0.0234097);
}

double NNfunction_sb_uRdR::synapse0x2065080() {
   return (neuron0x2056130()*0.5459);
}

double NNfunction_sb_uRdR::synapse0x20650c0() {
   return (neuron0x2056470()*-0.041332);
}

double NNfunction_sb_uRdR::synapse0x2064b50() {
   return (neuron0x20567b0()*0.509937);
}

double NNfunction_sb_uRdR::synapse0x2064b90() {
   return (neuron0x2056d10()*-0.264474);
}

double NNfunction_sb_uRdR::synapse0x2065210() {
   return (neuron0x2056f30()*-0.270746);
}

double NNfunction_sb_uRdR::synapse0x2065250() {
   return (neuron0x2057270()*-0.114212);
}

double NNfunction_sb_uRdR::synapse0x2065290() {
   return (neuron0x20575b0()*0.551382);
}

double NNfunction_sb_uRdR::synapse0x20652d0() {
   return (neuron0x20578f0()*1.01417);
}

double NNfunction_sb_uRdR::synapse0x2065310() {
   return (neuron0x2057c30()*0.200838);
}

double NNfunction_sb_uRdR::synapse0x2065350() {
   return (neuron0x2057f70()*-0.0786201);
}

double NNfunction_sb_uRdR::synapse0x20656d0() {
   return (neuron0x20533b0()*0.808571);
}

double NNfunction_sb_uRdR::synapse0x2065710() {
   return (neuron0x20536f0()*0.543624);
}

double NNfunction_sb_uRdR::synapse0x2065750() {
   return (neuron0x2053a30()*0.526736);
}

double NNfunction_sb_uRdR::synapse0x2065790() {
   return (neuron0x2053d70()*0.798158);
}

double NNfunction_sb_uRdR::synapse0x20657d0() {
   return (neuron0x20540b0()*-0.548158);
}

double NNfunction_sb_uRdR::synapse0x2065810() {
   return (neuron0x20543f0()*0.14879);
}

double NNfunction_sb_uRdR::synapse0x2065850() {
   return (neuron0x2054730()*0.0863621);
}

double NNfunction_sb_uRdR::synapse0x2065890() {
   return (neuron0x2054a70()*0.37173);
}

double NNfunction_sb_uRdR::synapse0x20658d0() {
   return (neuron0x2054db0()*0.276544);
}

double NNfunction_sb_uRdR::synapse0x2065910() {
   return (neuron0x20550f0()*0.172232);
}

double NNfunction_sb_uRdR::synapse0x2065950() {
   return (neuron0x2055430()*-0.00711553);
}

double NNfunction_sb_uRdR::synapse0x2065990() {
   return (neuron0x2055770()*0.242098);
}

double NNfunction_sb_uRdR::synapse0x20659d0() {
   return (neuron0x2055ab0()*-0.136362);
}

double NNfunction_sb_uRdR::synapse0x2065a10() {
   return (neuron0x2055df0()*0.182473);
}

double NNfunction_sb_uRdR::synapse0x2065a50() {
   return (neuron0x2056130()*0.0811567);
}

double NNfunction_sb_uRdR::synapse0x2065a90() {
   return (neuron0x2056470()*-0.3638);
}

double NNfunction_sb_uRdR::synapse0x2065520() {
   return (neuron0x20567b0()*-0.0346425);
}

double NNfunction_sb_uRdR::synapse0x2065560() {
   return (neuron0x2056d10()*-0.0942444);
}

double NNfunction_sb_uRdR::synapse0x2065be0() {
   return (neuron0x2056f30()*0.108856);
}

double NNfunction_sb_uRdR::synapse0x2065c20() {
   return (neuron0x2057270()*0.184547);
}

double NNfunction_sb_uRdR::synapse0x2065c60() {
   return (neuron0x20575b0()*-0.248622);
}

double NNfunction_sb_uRdR::synapse0x2065ca0() {
   return (neuron0x20578f0()*0.210456);
}

double NNfunction_sb_uRdR::synapse0x2065ce0() {
   return (neuron0x2057c30()*0.199281);
}

double NNfunction_sb_uRdR::synapse0x2065d20() {
   return (neuron0x2057f70()*0.310448);
}

double NNfunction_sb_uRdR::synapse0x20660a0() {
   return (neuron0x20533b0()*-0.266072);
}

double NNfunction_sb_uRdR::synapse0x20660e0() {
   return (neuron0x20536f0()*0.018397);
}

double NNfunction_sb_uRdR::synapse0x2066120() {
   return (neuron0x2053a30()*-0.111774);
}

double NNfunction_sb_uRdR::synapse0x2066160() {
   return (neuron0x2053d70()*1.75052);
}

double NNfunction_sb_uRdR::synapse0x20661a0() {
   return (neuron0x20540b0()*0.0934761);
}

double NNfunction_sb_uRdR::synapse0x20661e0() {
   return (neuron0x20543f0()*-0.00653777);
}

double NNfunction_sb_uRdR::synapse0x2066220() {
   return (neuron0x2054730()*0.0361296);
}

double NNfunction_sb_uRdR::synapse0x2066260() {
   return (neuron0x2054a70()*0.116277);
}

double NNfunction_sb_uRdR::synapse0x20662a0() {
   return (neuron0x2054db0()*-0.116347);
}

double NNfunction_sb_uRdR::synapse0x20662e0() {
   return (neuron0x20550f0()*-0.120493);
}

double NNfunction_sb_uRdR::synapse0x2066320() {
   return (neuron0x2055430()*0.116526);
}

double NNfunction_sb_uRdR::synapse0x2066360() {
   return (neuron0x2055770()*-0.04856);
}

double NNfunction_sb_uRdR::synapse0x20663a0() {
   return (neuron0x2055ab0()*0.0462444);
}

double NNfunction_sb_uRdR::synapse0x20663e0() {
   return (neuron0x2055df0()*0.0372726);
}

double NNfunction_sb_uRdR::synapse0x2066420() {
   return (neuron0x2056130()*-1.08597);
}

double NNfunction_sb_uRdR::synapse0x2066460() {
   return (neuron0x2056470()*-0.117933);
}

double NNfunction_sb_uRdR::synapse0x2065ef0() {
   return (neuron0x20567b0()*-0.0828803);
}

double NNfunction_sb_uRdR::synapse0x2065f30() {
   return (neuron0x2056d10()*-1.21976);
}

double NNfunction_sb_uRdR::synapse0x20665b0() {
   return (neuron0x2056f30()*0.0211059);
}

double NNfunction_sb_uRdR::synapse0x20665f0() {
   return (neuron0x2057270()*-0.156027);
}

double NNfunction_sb_uRdR::synapse0x2066630() {
   return (neuron0x20575b0()*0.179514);
}

double NNfunction_sb_uRdR::synapse0x2066670() {
   return (neuron0x20578f0()*0.1114);
}

double NNfunction_sb_uRdR::synapse0x20666b0() {
   return (neuron0x2057c30()*0.00267956);
}

double NNfunction_sb_uRdR::synapse0x20666f0() {
   return (neuron0x2057f70()*-0.036385);
}

double NNfunction_sb_uRdR::synapse0x2066a70() {
   return (neuron0x20533b0()*-0.0115465);
}

double NNfunction_sb_uRdR::synapse0x2066ab0() {
   return (neuron0x20536f0()*0.0179155);
}

double NNfunction_sb_uRdR::synapse0x2066af0() {
   return (neuron0x2053a30()*-0.00375318);
}

double NNfunction_sb_uRdR::synapse0x2066b30() {
   return (neuron0x2053d70()*0.0611495);
}

double NNfunction_sb_uRdR::synapse0x2066b70() {
   return (neuron0x20540b0()*0.0110998);
}

double NNfunction_sb_uRdR::synapse0x2066bb0() {
   return (neuron0x20543f0()*0.0170174);
}

double NNfunction_sb_uRdR::synapse0x2066bf0() {
   return (neuron0x2054730()*0.00888965);
}

double NNfunction_sb_uRdR::synapse0x2066c30() {
   return (neuron0x2054a70()*0.00154874);
}

double NNfunction_sb_uRdR::synapse0x2066c70() {
   return (neuron0x2054db0()*-0.00200725);
}

double NNfunction_sb_uRdR::synapse0x205ee30() {
   return (neuron0x20550f0()*-0.0103061);
}

double NNfunction_sb_uRdR::synapse0x205ee70() {
   return (neuron0x2055430()*0.00503558);
}

double NNfunction_sb_uRdR::synapse0x205eeb0() {
   return (neuron0x2055770()*-0.00010969);
}

double NNfunction_sb_uRdR::synapse0x205eef0() {
   return (neuron0x2055ab0()*-0.00549161);
}

double NNfunction_sb_uRdR::synapse0x205ef30() {
   return (neuron0x2055df0()*-0.00275003);
}

double NNfunction_sb_uRdR::synapse0x205ef70() {
   return (neuron0x2056130()*-0.467013);
}

double NNfunction_sb_uRdR::synapse0x205efb0() {
   return (neuron0x2056470()*0.0231152);
}

double NNfunction_sb_uRdR::synapse0x20668c0() {
   return (neuron0x20567b0()*0.00706965);
}

double NNfunction_sb_uRdR::synapse0x2066900() {
   return (neuron0x2056d10()*1.09523);
}

double NNfunction_sb_uRdR::synapse0x205f100() {
   return (neuron0x2056f30()*-0.0129783);
}

double NNfunction_sb_uRdR::synapse0x205f140() {
   return (neuron0x2057270()*-0.0269083);
}

double NNfunction_sb_uRdR::synapse0x205f180() {
   return (neuron0x20575b0()*-0.034107);
}

double NNfunction_sb_uRdR::synapse0x205f1c0() {
   return (neuron0x20578f0()*-0.0080461);
}

double NNfunction_sb_uRdR::synapse0x205f200() {
   return (neuron0x2057c30()*-0.0117255);
}

double NNfunction_sb_uRdR::synapse0x205f240() {
   return (neuron0x2057f70()*0.0125861);
}

double NNfunction_sb_uRdR::synapse0x205f5c0() {
   return (neuron0x20533b0()*-0.831982);
}

double NNfunction_sb_uRdR::synapse0x205f600() {
   return (neuron0x20536f0()*0.429245);
}

double NNfunction_sb_uRdR::synapse0x205f640() {
   return (neuron0x2053a30()*-0.247951);
}

double NNfunction_sb_uRdR::synapse0x205f680() {
   return (neuron0x2053d70()*-0.208229);
}

double NNfunction_sb_uRdR::synapse0x205f6c0() {
   return (neuron0x20540b0()*0.109602);
}

double NNfunction_sb_uRdR::synapse0x205f700() {
   return (neuron0x20543f0()*0.924067);
}

double NNfunction_sb_uRdR::synapse0x205f740() {
   return (neuron0x2054730()*0.567893);
}

double NNfunction_sb_uRdR::synapse0x205f780() {
   return (neuron0x2054a70()*0.287776);
}

double NNfunction_sb_uRdR::synapse0x205f7c0() {
   return (neuron0x2054db0()*-0.198609);
}

double NNfunction_sb_uRdR::synapse0x205f800() {
   return (neuron0x20550f0()*0.0367812);
}

double NNfunction_sb_uRdR::synapse0x205f840() {
   return (neuron0x2055430()*0.439653);
}

double NNfunction_sb_uRdR::synapse0x205f880() {
   return (neuron0x2055770()*0.12053);
}

double NNfunction_sb_uRdR::synapse0x205f8c0() {
   return (neuron0x2055ab0()*-0.184393);
}

double NNfunction_sb_uRdR::synapse0x205f900() {
   return (neuron0x2055df0()*0.177282);
}

double NNfunction_sb_uRdR::synapse0x205f940() {
   return (neuron0x2056130()*-0.272835);
}

double NNfunction_sb_uRdR::synapse0x205f980() {
   return (neuron0x2056470()*0.00423965);
}

double NNfunction_sb_uRdR::synapse0x205f410() {
   return (neuron0x20567b0()*0.534135);
}

double NNfunction_sb_uRdR::synapse0x205f450() {
   return (neuron0x2056d10()*-1.68944);
}

double NNfunction_sb_uRdR::synapse0x205fad0() {
   return (neuron0x2056f30()*0.0838508);
}

double NNfunction_sb_uRdR::synapse0x205fb10() {
   return (neuron0x2057270()*-0.315086);
}

double NNfunction_sb_uRdR::synapse0x205fb50() {
   return (neuron0x20575b0()*0.156416);
}

double NNfunction_sb_uRdR::synapse0x205fb90() {
   return (neuron0x20578f0()*0.078141);
}

double NNfunction_sb_uRdR::synapse0x205fbd0() {
   return (neuron0x2057c30()*0.46973);
}

double NNfunction_sb_uRdR::synapse0x205fc10() {
   return (neuron0x2057f70()*0.101179);
}

double NNfunction_sb_uRdR::synapse0x205fde0() {
   return (neuron0x20533b0()*0.06408);
}

double NNfunction_sb_uRdR::synapse0x2068e70() {
   return (neuron0x20536f0()*0.0906317);
}

double NNfunction_sb_uRdR::synapse0x2068eb0() {
   return (neuron0x2053a30()*0.0172728);
}

double NNfunction_sb_uRdR::synapse0x2068ef0() {
   return (neuron0x2053d70()*-0.790402);
}

double NNfunction_sb_uRdR::synapse0x2068f30() {
   return (neuron0x20540b0()*0.00615882);
}

double NNfunction_sb_uRdR::synapse0x2068f70() {
   return (neuron0x20543f0()*0.0107025);
}

double NNfunction_sb_uRdR::synapse0x2068fb0() {
   return (neuron0x2054730()*0.0174369);
}

double NNfunction_sb_uRdR::synapse0x2068ff0() {
   return (neuron0x2054a70()*0.0206025);
}

double NNfunction_sb_uRdR::synapse0x2069030() {
   return (neuron0x2054db0()*-0.028042);
}

double NNfunction_sb_uRdR::synapse0x2069070() {
   return (neuron0x20550f0()*-0.0189228);
}

double NNfunction_sb_uRdR::synapse0x20690b0() {
   return (neuron0x2055430()*0.0602701);
}

double NNfunction_sb_uRdR::synapse0x20690f0() {
   return (neuron0x2055770()*0.186806);
}

double NNfunction_sb_uRdR::synapse0x2069130() {
   return (neuron0x2055ab0()*0.213579);
}

double NNfunction_sb_uRdR::synapse0x2069170() {
   return (neuron0x2055df0()*-0.0609822);
}

double NNfunction_sb_uRdR::synapse0x20691b0() {
   return (neuron0x2056130()*-0.0561077);
}

double NNfunction_sb_uRdR::synapse0x20691f0() {
   return (neuron0x2056470()*0.0904665);
}

double NNfunction_sb_uRdR::synapse0x2068cc0() {
   return (neuron0x20567b0()*-0.0169656);
}

double NNfunction_sb_uRdR::synapse0x2068d00() {
   return (neuron0x2056d10()*0.023957);
}

double NNfunction_sb_uRdR::synapse0x2069340() {
   return (neuron0x2056f30()*0.0898743);
}

double NNfunction_sb_uRdR::synapse0x2069380() {
   return (neuron0x2057270()*0.0214832);
}

double NNfunction_sb_uRdR::synapse0x20693c0() {
   return (neuron0x20575b0()*0.0519867);
}

double NNfunction_sb_uRdR::synapse0x2069400() {
   return (neuron0x20578f0()*-0.0107835);
}

double NNfunction_sb_uRdR::synapse0x2069440() {
   return (neuron0x2057c30()*0.0115141);
}

double NNfunction_sb_uRdR::synapse0x2069480() {
   return (neuron0x2057f70()*0.0402801);
}

double NNfunction_sb_uRdR::synapse0x2069800() {
   return (neuron0x20533b0()*0.0307063);
}

double NNfunction_sb_uRdR::synapse0x2069840() {
   return (neuron0x20536f0()*0.120317);
}

double NNfunction_sb_uRdR::synapse0x2069880() {
   return (neuron0x2053a30()*0.0530435);
}

double NNfunction_sb_uRdR::synapse0x20698c0() {
   return (neuron0x2053d70()*1.35852);
}

double NNfunction_sb_uRdR::synapse0x2069900() {
   return (neuron0x20540b0()*-0.0402914);
}

double NNfunction_sb_uRdR::synapse0x2069940() {
   return (neuron0x20543f0()*0.0626774);
}

double NNfunction_sb_uRdR::synapse0x2069980() {
   return (neuron0x2054730()*-0.022386);
}

double NNfunction_sb_uRdR::synapse0x20699c0() {
   return (neuron0x2054a70()*-0.134162);
}

double NNfunction_sb_uRdR::synapse0x2069a00() {
   return (neuron0x2054db0()*0.170543);
}

double NNfunction_sb_uRdR::synapse0x2069a40() {
   return (neuron0x20550f0()*0.329896);
}

double NNfunction_sb_uRdR::synapse0x2069a80() {
   return (neuron0x2055430()*0.0205129);
}

double NNfunction_sb_uRdR::synapse0x2069ac0() {
   return (neuron0x2055770()*0.138946);
}

double NNfunction_sb_uRdR::synapse0x2069b00() {
   return (neuron0x2055ab0()*0.0602953);
}

double NNfunction_sb_uRdR::synapse0x2069b40() {
   return (neuron0x2055df0()*0.109432);
}

double NNfunction_sb_uRdR::synapse0x2069b80() {
   return (neuron0x2056130()*0.0500579);
}

double NNfunction_sb_uRdR::synapse0x2069bc0() {
   return (neuron0x2056470()*-0.0332223);
}

double NNfunction_sb_uRdR::synapse0x2069650() {
   return (neuron0x20567b0()*-0.0397701);
}

double NNfunction_sb_uRdR::synapse0x2069690() {
   return (neuron0x2056d10()*-0.0419638);
}

double NNfunction_sb_uRdR::synapse0x2069d10() {
   return (neuron0x2056f30()*0.0969815);
}

double NNfunction_sb_uRdR::synapse0x2069d50() {
   return (neuron0x2057270()*0.0580694);
}

double NNfunction_sb_uRdR::synapse0x2069d90() {
   return (neuron0x20575b0()*0.0512064);
}

double NNfunction_sb_uRdR::synapse0x2069dd0() {
   return (neuron0x20578f0()*0.179668);
}

double NNfunction_sb_uRdR::synapse0x2069e10() {
   return (neuron0x2057c30()*0.0789901);
}

double NNfunction_sb_uRdR::synapse0x2069e50() {
   return (neuron0x2057f70()*0.057049);
}

double NNfunction_sb_uRdR::synapse0x206a1d0() {
   return (neuron0x20533b0()*-0.476604);
}

double NNfunction_sb_uRdR::synapse0x206a210() {
   return (neuron0x20536f0()*-0.0662359);
}

double NNfunction_sb_uRdR::synapse0x206a250() {
   return (neuron0x2053a30()*-0.0230777);
}

double NNfunction_sb_uRdR::synapse0x206a290() {
   return (neuron0x2053d70()*1.00328);
}

double NNfunction_sb_uRdR::synapse0x206a2d0() {
   return (neuron0x20540b0()*-0.198015);
}

double NNfunction_sb_uRdR::synapse0x206a310() {
   return (neuron0x20543f0()*0.318256);
}

double NNfunction_sb_uRdR::synapse0x206a350() {
   return (neuron0x2054730()*0.0262333);
}

double NNfunction_sb_uRdR::synapse0x206a390() {
   return (neuron0x2054a70()*0.0200876);
}

double NNfunction_sb_uRdR::synapse0x206a3d0() {
   return (neuron0x2054db0()*-0.170118);
}

double NNfunction_sb_uRdR::synapse0x206a410() {
   return (neuron0x20550f0()*0.644994);
}

double NNfunction_sb_uRdR::synapse0x206a450() {
   return (neuron0x2055430()*0.190475);
}

double NNfunction_sb_uRdR::synapse0x206a490() {
   return (neuron0x2055770()*-0.56185);
}

double NNfunction_sb_uRdR::synapse0x206a4d0() {
   return (neuron0x2055ab0()*-0.645249);
}

double NNfunction_sb_uRdR::synapse0x206a510() {
   return (neuron0x2055df0()*0.4373);
}

double NNfunction_sb_uRdR::synapse0x206a550() {
   return (neuron0x2056130()*-0.539877);
}

double NNfunction_sb_uRdR::synapse0x206a590() {
   return (neuron0x2056470()*-0.056357);
}

double NNfunction_sb_uRdR::synapse0x206a020() {
   return (neuron0x20567b0()*0.226495);
}

double NNfunction_sb_uRdR::synapse0x206a060() {
   return (neuron0x2056d10()*-0.580392);
}

double NNfunction_sb_uRdR::synapse0x206a6e0() {
   return (neuron0x2056f30()*-0.422142);
}

double NNfunction_sb_uRdR::synapse0x206a720() {
   return (neuron0x2057270()*0.225151);
}

double NNfunction_sb_uRdR::synapse0x206a760() {
   return (neuron0x20575b0()*0.178221);
}

double NNfunction_sb_uRdR::synapse0x206a7a0() {
   return (neuron0x20578f0()*-0.300052);
}

double NNfunction_sb_uRdR::synapse0x206a7e0() {
   return (neuron0x2057c30()*-0.028151);
}

double NNfunction_sb_uRdR::synapse0x206a820() {
   return (neuron0x2057f70()*0.0476);
}

double NNfunction_sb_uRdR::synapse0x206aba0() {
   return (neuron0x20533b0()*1.16037);
}

double NNfunction_sb_uRdR::synapse0x206abe0() {
   return (neuron0x20536f0()*0.431895);
}

double NNfunction_sb_uRdR::synapse0x206ac20() {
   return (neuron0x2053a30()*1.0102);
}

double NNfunction_sb_uRdR::synapse0x206ac60() {
   return (neuron0x2053d70()*-0.775844);
}

double NNfunction_sb_uRdR::synapse0x206aca0() {
   return (neuron0x20540b0()*0.10996);
}

double NNfunction_sb_uRdR::synapse0x206ace0() {
   return (neuron0x20543f0()*0.404018);
}

double NNfunction_sb_uRdR::synapse0x206ad20() {
   return (neuron0x2054730()*-0.745494);
}

double NNfunction_sb_uRdR::synapse0x206ad60() {
   return (neuron0x2054a70()*-0.456203);
}

double NNfunction_sb_uRdR::synapse0x206ada0() {
   return (neuron0x2054db0()*0.0755914);
}

double NNfunction_sb_uRdR::synapse0x206ade0() {
   return (neuron0x20550f0()*-0.0768695);
}

double NNfunction_sb_uRdR::synapse0x206ae20() {
   return (neuron0x2055430()*-0.00143784);
}

double NNfunction_sb_uRdR::synapse0x206ae60() {
   return (neuron0x2055770()*-0.0763597);
}

double NNfunction_sb_uRdR::synapse0x206aea0() {
   return (neuron0x2055ab0()*0.265784);
}

double NNfunction_sb_uRdR::synapse0x206aee0() {
   return (neuron0x2055df0()*0.0927637);
}

double NNfunction_sb_uRdR::synapse0x206af20() {
   return (neuron0x2056130()*-0.0226124);
}

double NNfunction_sb_uRdR::synapse0x206af60() {
   return (neuron0x2056470()*0.650328);
}

double NNfunction_sb_uRdR::synapse0x206a9f0() {
   return (neuron0x20567b0()*0.599204);
}

double NNfunction_sb_uRdR::synapse0x206aa30() {
   return (neuron0x2056d10()*-0.140475);
}

double NNfunction_sb_uRdR::synapse0x206b0b0() {
   return (neuron0x2056f30()*-0.288506);
}

double NNfunction_sb_uRdR::synapse0x206b0f0() {
   return (neuron0x2057270()*0.100324);
}

double NNfunction_sb_uRdR::synapse0x206b130() {
   return (neuron0x20575b0()*0.370287);
}

double NNfunction_sb_uRdR::synapse0x206b170() {
   return (neuron0x20578f0()*-1.04501);
}

double NNfunction_sb_uRdR::synapse0x206b1b0() {
   return (neuron0x2057c30()*0.446193);
}

double NNfunction_sb_uRdR::synapse0x206b1f0() {
   return (neuron0x2057f70()*0.298275);
}

double NNfunction_sb_uRdR::synapse0x206b570() {
   return (neuron0x20533b0()*-0.0341271);
}

double NNfunction_sb_uRdR::synapse0x206b5b0() {
   return (neuron0x20536f0()*-0.0184612);
}

double NNfunction_sb_uRdR::synapse0x206b5f0() {
   return (neuron0x2053a30()*0.0496225);
}

double NNfunction_sb_uRdR::synapse0x206b630() {
   return (neuron0x2053d70()*8.65538);
}

double NNfunction_sb_uRdR::synapse0x206b670() {
   return (neuron0x20540b0()*0.00217772);
}

double NNfunction_sb_uRdR::synapse0x206b6b0() {
   return (neuron0x20543f0()*-0.00692537);
}

double NNfunction_sb_uRdR::synapse0x206b6f0() {
   return (neuron0x2054730()*-0.0586717);
}

double NNfunction_sb_uRdR::synapse0x206b730() {
   return (neuron0x2054a70()*0.025337);
}

double NNfunction_sb_uRdR::synapse0x206b770() {
   return (neuron0x2054db0()*0.000412341);
}

double NNfunction_sb_uRdR::synapse0x206b7b0() {
   return (neuron0x20550f0()*-0.0843871);
}

double NNfunction_sb_uRdR::synapse0x206b7f0() {
   return (neuron0x2055430()*-0.0204089);
}

double NNfunction_sb_uRdR::synapse0x206b830() {
   return (neuron0x2055770()*0.0269376);
}

double NNfunction_sb_uRdR::synapse0x206b870() {
   return (neuron0x2055ab0()*0.103161);
}

double NNfunction_sb_uRdR::synapse0x206b8b0() {
   return (neuron0x2055df0()*-0.0478654);
}

double NNfunction_sb_uRdR::synapse0x206b8f0() {
   return (neuron0x2056130()*0.653726);
}

double NNfunction_sb_uRdR::synapse0x206b930() {
   return (neuron0x2056470()*-0.0749074);
}

double NNfunction_sb_uRdR::synapse0x206b3c0() {
   return (neuron0x20567b0()*-0.0334321);
}

double NNfunction_sb_uRdR::synapse0x206b400() {
   return (neuron0x2056d10()*0.674598);
}

double NNfunction_sb_uRdR::synapse0x206ba80() {
   return (neuron0x2056f30()*-0.0230362);
}

double NNfunction_sb_uRdR::synapse0x206bac0() {
   return (neuron0x2057270()*-0.0640694);
}

double NNfunction_sb_uRdR::synapse0x206bb00() {
   return (neuron0x20575b0()*-0.0424641);
}

double NNfunction_sb_uRdR::synapse0x206bb40() {
   return (neuron0x20578f0()*0.0336765);
}

double NNfunction_sb_uRdR::synapse0x206bb80() {
   return (neuron0x2057c30()*-0.00259212);
}

double NNfunction_sb_uRdR::synapse0x206bbc0() {
   return (neuron0x2057f70()*0.0546788);
}

double NNfunction_sb_uRdR::synapse0x206bf40() {
   return (neuron0x20533b0()*-0.0812035);
}

double NNfunction_sb_uRdR::synapse0x206bf80() {
   return (neuron0x20536f0()*-0.191361);
}

double NNfunction_sb_uRdR::synapse0x206bfc0() {
   return (neuron0x2053a30()*0.0784371);
}

double NNfunction_sb_uRdR::synapse0x206c000() {
   return (neuron0x2053d70()*0.273763);
}

double NNfunction_sb_uRdR::synapse0x206c040() {
   return (neuron0x20540b0()*-0.677031);
}

double NNfunction_sb_uRdR::synapse0x206c080() {
   return (neuron0x20543f0()*-0.408292);
}

double NNfunction_sb_uRdR::synapse0x206c0c0() {
   return (neuron0x2054730()*-0.589088);
}

double NNfunction_sb_uRdR::synapse0x206c100() {
   return (neuron0x2054a70()*0.244913);
}

double NNfunction_sb_uRdR::synapse0x206c140() {
   return (neuron0x2054db0()*-0.771615);
}

double NNfunction_sb_uRdR::synapse0x206c180() {
   return (neuron0x20550f0()*-0.657023);
}

double NNfunction_sb_uRdR::synapse0x206c1c0() {
   return (neuron0x2055430()*0.670994);
}

double NNfunction_sb_uRdR::synapse0x206c200() {
   return (neuron0x2055770()*-0.142952);
}

double NNfunction_sb_uRdR::synapse0x206c240() {
   return (neuron0x2055ab0()*-0.662001);
}

double NNfunction_sb_uRdR::synapse0x206c280() {
   return (neuron0x2055df0()*0.289815);
}

double NNfunction_sb_uRdR::synapse0x206c2c0() {
   return (neuron0x2056130()*-0.771514);
}

double NNfunction_sb_uRdR::synapse0x206c300() {
   return (neuron0x2056470()*0.387243);
}

double NNfunction_sb_uRdR::synapse0x206bd90() {
   return (neuron0x20567b0()*-0.293931);
}

double NNfunction_sb_uRdR::synapse0x206bdd0() {
   return (neuron0x2056d10()*0.625155);
}

double NNfunction_sb_uRdR::synapse0x206c450() {
   return (neuron0x2056f30()*0.413277);
}

double NNfunction_sb_uRdR::synapse0x206c490() {
   return (neuron0x2057270()*0.266097);
}

double NNfunction_sb_uRdR::synapse0x206c4d0() {
   return (neuron0x20575b0()*-0.168359);
}

double NNfunction_sb_uRdR::synapse0x206c510() {
   return (neuron0x20578f0()*0.524784);
}

double NNfunction_sb_uRdR::synapse0x206c550() {
   return (neuron0x2057c30()*-0.262232);
}

double NNfunction_sb_uRdR::synapse0x206c590() {
   return (neuron0x2057f70()*-0.177827);
}

double NNfunction_sb_uRdR::synapse0x206c910() {
   return (neuron0x20533b0()*-0.526504);
}

double NNfunction_sb_uRdR::synapse0x206c950() {
   return (neuron0x20536f0()*-0.159197);
}

double NNfunction_sb_uRdR::synapse0x206c990() {
   return (neuron0x2053a30()*-0.0932116);
}

double NNfunction_sb_uRdR::synapse0x206c9d0() {
   return (neuron0x2053d70()*-0.00599934);
}

double NNfunction_sb_uRdR::synapse0x206ca10() {
   return (neuron0x20540b0()*-0.453598);
}

double NNfunction_sb_uRdR::synapse0x206ca50() {
   return (neuron0x20543f0()*-0.140499);
}

double NNfunction_sb_uRdR::synapse0x206ca90() {
   return (neuron0x2054730()*-0.776438);
}

double NNfunction_sb_uRdR::synapse0x206cad0() {
   return (neuron0x2054a70()*0.321351);
}

double NNfunction_sb_uRdR::synapse0x206cb10() {
   return (neuron0x2054db0()*-0.450402);
}

double NNfunction_sb_uRdR::synapse0x206cb50() {
   return (neuron0x20550f0()*-0.330089);
}

double NNfunction_sb_uRdR::synapse0x206cb90() {
   return (neuron0x2055430()*0.408473);
}

double NNfunction_sb_uRdR::synapse0x206cbd0() {
   return (neuron0x2055770()*-0.249137);
}

double NNfunction_sb_uRdR::synapse0x206cc10() {
   return (neuron0x2055ab0()*0.699224);
}

double NNfunction_sb_uRdR::synapse0x206cc50() {
   return (neuron0x2055df0()*-0.358282);
}

double NNfunction_sb_uRdR::synapse0x206cc90() {
   return (neuron0x2056130()*1.78241);
}

double NNfunction_sb_uRdR::synapse0x206ccd0() {
   return (neuron0x2056470()*0.689602);
}

double NNfunction_sb_uRdR::synapse0x206c760() {
   return (neuron0x20567b0()*0.278802);
}

double NNfunction_sb_uRdR::synapse0x206c7a0() {
   return (neuron0x2056d10()*0.0584209);
}

double NNfunction_sb_uRdR::synapse0x206ce20() {
   return (neuron0x2056f30()*-0.420732);
}

double NNfunction_sb_uRdR::synapse0x206ce60() {
   return (neuron0x2057270()*-0.575705);
}

double NNfunction_sb_uRdR::synapse0x206cea0() {
   return (neuron0x20575b0()*0.197486);
}

double NNfunction_sb_uRdR::synapse0x206cee0() {
   return (neuron0x20578f0()*-0.930921);
}

double NNfunction_sb_uRdR::synapse0x206cf20() {
   return (neuron0x2057c30()*0.437022);
}

double NNfunction_sb_uRdR::synapse0x206cf60() {
   return (neuron0x2057f70()*0.0109226);
}

double NNfunction_sb_uRdR::synapse0x206d2e0() {
   return (neuron0x20533b0()*-0.189656);
}

double NNfunction_sb_uRdR::synapse0x206d320() {
   return (neuron0x20536f0()*-0.914129);
}

double NNfunction_sb_uRdR::synapse0x206d360() {
   return (neuron0x2053a30()*0.14119);
}

double NNfunction_sb_uRdR::synapse0x206d3a0() {
   return (neuron0x2053d70()*0.076897);
}

double NNfunction_sb_uRdR::synapse0x206d3e0() {
   return (neuron0x20540b0()*0.710514);
}

double NNfunction_sb_uRdR::synapse0x206d420() {
   return (neuron0x20543f0()*0.962353);
}

double NNfunction_sb_uRdR::synapse0x206d460() {
   return (neuron0x2054730()*0.391453);
}

double NNfunction_sb_uRdR::synapse0x206d4a0() {
   return (neuron0x2054a70()*-0.376567);
}

double NNfunction_sb_uRdR::synapse0x206d4e0() {
   return (neuron0x2054db0()*-0.11709);
}

double NNfunction_sb_uRdR::synapse0x206d520() {
   return (neuron0x20550f0()*-0.175523);
}

double NNfunction_sb_uRdR::synapse0x206d560() {
   return (neuron0x2055430()*-0.499839);
}

double NNfunction_sb_uRdR::synapse0x206d5a0() {
   return (neuron0x2055770()*0.184194);
}

double NNfunction_sb_uRdR::synapse0x206d5e0() {
   return (neuron0x2055ab0()*0.415637);
}

double NNfunction_sb_uRdR::synapse0x206d620() {
   return (neuron0x2055df0()*0.870852);
}

double NNfunction_sb_uRdR::synapse0x206d660() {
   return (neuron0x2056130()*0.566026);
}

double NNfunction_sb_uRdR::synapse0x206d6a0() {
   return (neuron0x2056470()*0.222576);
}

double NNfunction_sb_uRdR::synapse0x206d130() {
   return (neuron0x20567b0()*0.64458);
}

double NNfunction_sb_uRdR::synapse0x206d170() {
   return (neuron0x2056d10()*-0.348815);
}

double NNfunction_sb_uRdR::synapse0x206d7f0() {
   return (neuron0x2056f30()*-0.37995);
}

double NNfunction_sb_uRdR::synapse0x206d830() {
   return (neuron0x2057270()*-0.113937);
}

double NNfunction_sb_uRdR::synapse0x206d870() {
   return (neuron0x20575b0()*-0.262185);
}

double NNfunction_sb_uRdR::synapse0x206d8b0() {
   return (neuron0x20578f0()*-0.742589);
}

double NNfunction_sb_uRdR::synapse0x206d8f0() {
   return (neuron0x2057c30()*0.464638);
}

double NNfunction_sb_uRdR::synapse0x206d930() {
   return (neuron0x2057f70()*-0.142738);
}

double NNfunction_sb_uRdR::synapse0x206dcb0() {
   return (neuron0x20533b0()*-0.0107989);
}

double NNfunction_sb_uRdR::synapse0x2062280() {
   return (neuron0x20536f0()*0.531668);
}

double NNfunction_sb_uRdR::synapse0x20622c0() {
   return (neuron0x2053a30()*-0.179545);
}

double NNfunction_sb_uRdR::synapse0x2062300() {
   return (neuron0x2053d70()*-1.86728);
}

double NNfunction_sb_uRdR::synapse0x2062550() {
   return (neuron0x20540b0()*0.00106472);
}

double NNfunction_sb_uRdR::synapse0x2062590() {
   return (neuron0x20543f0()*-0.037769);
}

double NNfunction_sb_uRdR::synapse0x20625d0() {
   return (neuron0x2054730()*0.253967);
}

double NNfunction_sb_uRdR::synapse0x2062820() {
   return (neuron0x2054a70()*-0.0378554);
}

double NNfunction_sb_uRdR::synapse0x2062860() {
   return (neuron0x2054db0()*0.243192);
}

double NNfunction_sb_uRdR::synapse0x2062ab0() {
   return (neuron0x20550f0()*0.397481);
}

double NNfunction_sb_uRdR::synapse0x2062af0() {
   return (neuron0x2055430()*0.716329);
}

double NNfunction_sb_uRdR::synapse0x2062b30() {
   return (neuron0x2055770()*0.223409);
}

double NNfunction_sb_uRdR::synapse0x2062d80() {
   return (neuron0x2055ab0()*0.496775);
}

double NNfunction_sb_uRdR::synapse0x2062dc0() {
   return (neuron0x2055df0()*0.793489);
}

double NNfunction_sb_uRdR::synapse0x2063010() {
   return (neuron0x2056130()*-0.233709);
}

double NNfunction_sb_uRdR::synapse0x2063050() {
   return (neuron0x2056470()*-0.148446);
}

double NNfunction_sb_uRdR::synapse0x206db00() {
   return (neuron0x20567b0()*-0.399024);
}

double NNfunction_sb_uRdR::synapse0x206db40() {
   return (neuron0x2056d10()*-0.565536);
}

double NNfunction_sb_uRdR::synapse0x20631a0() {
   return (neuron0x2056f30()*0.0622223);
}

double NNfunction_sb_uRdR::synapse0x20636b0() {
   return (neuron0x2057270()*-0.249238);
}

double NNfunction_sb_uRdR::synapse0x20636f0() {
   return (neuron0x20575b0()*-0.138591);
}

double NNfunction_sb_uRdR::synapse0x2063730() {
   return (neuron0x20578f0()*0.116223);
}

double NNfunction_sb_uRdR::synapse0x2063980() {
   return (neuron0x2057c30()*-0.0289186);
}

double NNfunction_sb_uRdR::synapse0x20639c0() {
   return (neuron0x2057f70()*0.00991439);
}

double NNfunction_sb_uRdR::synapse0x2063270() {
   return (neuron0x20533b0()*-0.0829319);
}

double NNfunction_sb_uRdR::synapse0x20632b0() {
   return (neuron0x20536f0()*-0.30809);
}

double NNfunction_sb_uRdR::synapse0x20632f0() {
   return (neuron0x2053a30()*0.0564103);
}

double NNfunction_sb_uRdR::synapse0x2063330() {
   return (neuron0x2053d70()*-0.535393);
}

double NNfunction_sb_uRdR::synapse0x2063cb0() {
   return (neuron0x20540b0()*0.203781);
}

double NNfunction_sb_uRdR::synapse0x2070000() {
   return (neuron0x20543f0()*-0.0580897);
}

double NNfunction_sb_uRdR::synapse0x2070040() {
   return (neuron0x2054730()*0.0425665);
}

double NNfunction_sb_uRdR::synapse0x2070080() {
   return (neuron0x2054a70()*-0.69449);
}

double NNfunction_sb_uRdR::synapse0x20700c0() {
   return (neuron0x2054db0()*-0.454215);
}

double NNfunction_sb_uRdR::synapse0x2070100() {
   return (neuron0x20550f0()*0.395904);
}

double NNfunction_sb_uRdR::synapse0x2070140() {
   return (neuron0x2055430()*0.190447);
}

double NNfunction_sb_uRdR::synapse0x2070180() {
   return (neuron0x2055770()*-0.425327);
}

double NNfunction_sb_uRdR::synapse0x20701c0() {
   return (neuron0x2055ab0()*-0.401031);
}

double NNfunction_sb_uRdR::synapse0x2070200() {
   return (neuron0x2055df0()*-0.0335838);
}

double NNfunction_sb_uRdR::synapse0x2070240() {
   return (neuron0x2056130()*-0.257134);
}

double NNfunction_sb_uRdR::synapse0x2070280() {
   return (neuron0x2056470()*-0.0377175);
}

double NNfunction_sb_uRdR::synapse0x2063b90() {
   return (neuron0x20567b0()*-0.452226);
}

double NNfunction_sb_uRdR::synapse0x2063bd0() {
   return (neuron0x2056d10()*-0.668751);
}

double NNfunction_sb_uRdR::synapse0x20703d0() {
   return (neuron0x2056f30()*0.490948);
}

double NNfunction_sb_uRdR::synapse0x2070410() {
   return (neuron0x2057270()*-0.675785);
}

double NNfunction_sb_uRdR::synapse0x2070450() {
   return (neuron0x20575b0()*1.03028);
}

double NNfunction_sb_uRdR::synapse0x2070490() {
   return (neuron0x20578f0()*0.535441);
}

double NNfunction_sb_uRdR::synapse0x20704d0() {
   return (neuron0x2057c30()*0.645925);
}

double NNfunction_sb_uRdR::synapse0x2070510() {
   return (neuron0x2057f70()*-0.360966);
}

double NNfunction_sb_uRdR::synapse0x2070890() {
   return (neuron0x20533b0()*-0.275592);
}

double NNfunction_sb_uRdR::synapse0x20708d0() {
   return (neuron0x20536f0()*-0.100419);
}

double NNfunction_sb_uRdR::synapse0x2070910() {
   return (neuron0x2053a30()*-0.319701);
}

double NNfunction_sb_uRdR::synapse0x2070950() {
   return (neuron0x2053d70()*0.498773);
}

double NNfunction_sb_uRdR::synapse0x2070990() {
   return (neuron0x20540b0()*-0.155992);
}

double NNfunction_sb_uRdR::synapse0x20709d0() {
   return (neuron0x20543f0()*-0.0431552);
}

double NNfunction_sb_uRdR::synapse0x2070a10() {
   return (neuron0x2054730()*-0.236253);
}

double NNfunction_sb_uRdR::synapse0x2070a50() {
   return (neuron0x2054a70()*0.924652);
}

double NNfunction_sb_uRdR::synapse0x2070a90() {
   return (neuron0x2054db0()*0.141065);
}

double NNfunction_sb_uRdR::synapse0x2070ad0() {
   return (neuron0x20550f0()*-0.410795);
}

double NNfunction_sb_uRdR::synapse0x2070b10() {
   return (neuron0x2055430()*-0.662684);
}

double NNfunction_sb_uRdR::synapse0x2070b50() {
   return (neuron0x2055770()*0.197751);
}

double NNfunction_sb_uRdR::synapse0x2070b90() {
   return (neuron0x2055ab0()*-0.227166);
}

double NNfunction_sb_uRdR::synapse0x2070bd0() {
   return (neuron0x2055df0()*-0.328738);
}

double NNfunction_sb_uRdR::synapse0x2070c10() {
   return (neuron0x2056130()*0.117894);
}

double NNfunction_sb_uRdR::synapse0x2070c50() {
   return (neuron0x2056470()*0.269746);
}

double NNfunction_sb_uRdR::synapse0x20706e0() {
   return (neuron0x20567b0()*0.820005);
}

double NNfunction_sb_uRdR::synapse0x2070720() {
   return (neuron0x2056d10()*0.810982);
}

double NNfunction_sb_uRdR::synapse0x2070da0() {
   return (neuron0x2056f30()*0.457318);
}

double NNfunction_sb_uRdR::synapse0x2070de0() {
   return (neuron0x2057270()*0.362709);
}

double NNfunction_sb_uRdR::synapse0x2070e20() {
   return (neuron0x20575b0()*-0.223355);
}

double NNfunction_sb_uRdR::synapse0x2070e60() {
   return (neuron0x20578f0()*-0.214202);
}

double NNfunction_sb_uRdR::synapse0x2070ea0() {
   return (neuron0x2057c30()*-0.639664);
}

double NNfunction_sb_uRdR::synapse0x2070ee0() {
   return (neuron0x2057f70()*0.874509);
}

double NNfunction_sb_uRdR::synapse0x2071260() {
   return (neuron0x20533b0()*-0.304735);
}

double NNfunction_sb_uRdR::synapse0x20712a0() {
   return (neuron0x20536f0()*-0.813752);
}

double NNfunction_sb_uRdR::synapse0x20712e0() {
   return (neuron0x2053a30()*0.322186);
}

double NNfunction_sb_uRdR::synapse0x2071320() {
   return (neuron0x2053d70()*0.484785);
}

double NNfunction_sb_uRdR::synapse0x2071360() {
   return (neuron0x20540b0()*-0.838528);
}

double NNfunction_sb_uRdR::synapse0x20713a0() {
   return (neuron0x20543f0()*-0.355271);
}

double NNfunction_sb_uRdR::synapse0x20713e0() {
   return (neuron0x2054730()*-0.577499);
}

double NNfunction_sb_uRdR::synapse0x2071420() {
   return (neuron0x2054a70()*-0.339154);
}

double NNfunction_sb_uRdR::synapse0x2071460() {
   return (neuron0x2054db0()*-0.593084);
}

double NNfunction_sb_uRdR::synapse0x20714a0() {
   return (neuron0x20550f0()*-0.656769);
}

double NNfunction_sb_uRdR::synapse0x20714e0() {
   return (neuron0x2055430()*-0.191106);
}

double NNfunction_sb_uRdR::synapse0x2071520() {
   return (neuron0x2055770()*-0.0272205);
}

double NNfunction_sb_uRdR::synapse0x2071560() {
   return (neuron0x2055ab0()*-0.559738);
}

double NNfunction_sb_uRdR::synapse0x20715a0() {
   return (neuron0x2055df0()*0.0933405);
}

double NNfunction_sb_uRdR::synapse0x20715e0() {
   return (neuron0x2056130()*-0.15009);
}

double NNfunction_sb_uRdR::synapse0x2071620() {
   return (neuron0x2056470()*0.107823);
}

double NNfunction_sb_uRdR::synapse0x20710b0() {
   return (neuron0x20567b0()*-0.12334);
}

double NNfunction_sb_uRdR::synapse0x20710f0() {
   return (neuron0x2056d10()*1.10606);
}

double NNfunction_sb_uRdR::synapse0x2071770() {
   return (neuron0x2056f30()*-0.476877);
}

double NNfunction_sb_uRdR::synapse0x20717b0() {
   return (neuron0x2057270()*0.00268629);
}

double NNfunction_sb_uRdR::synapse0x20717f0() {
   return (neuron0x20575b0()*-0.474704);
}

double NNfunction_sb_uRdR::synapse0x2071830() {
   return (neuron0x20578f0()*0.315202);
}

double NNfunction_sb_uRdR::synapse0x2071870() {
   return (neuron0x2057c30()*0.225004);
}

double NNfunction_sb_uRdR::synapse0x20718b0() {
   return (neuron0x2057f70()*-0.149746);
}

double NNfunction_sb_uRdR::synapse0x2071c30() {
   return (neuron0x20533b0()*0.0661406);
}

double NNfunction_sb_uRdR::synapse0x2071c70() {
   return (neuron0x20536f0()*-0.0184889);
}

double NNfunction_sb_uRdR::synapse0x2071cb0() {
   return (neuron0x2053a30()*0.0520187);
}

double NNfunction_sb_uRdR::synapse0x2071cf0() {
   return (neuron0x2053d70()*2.21391);
}

double NNfunction_sb_uRdR::synapse0x2071d30() {
   return (neuron0x20540b0()*0.133438);
}

double NNfunction_sb_uRdR::synapse0x2071d70() {
   return (neuron0x20543f0()*-0.0214692);
}

double NNfunction_sb_uRdR::synapse0x2071db0() {
   return (neuron0x2054730()*0.0148763);
}

double NNfunction_sb_uRdR::synapse0x2071df0() {
   return (neuron0x2054a70()*-0.0315066);
}

double NNfunction_sb_uRdR::synapse0x2071e30() {
   return (neuron0x2054db0()*0.0387162);
}

double NNfunction_sb_uRdR::synapse0x2071e70() {
   return (neuron0x20550f0()*0.0151715);
}

double NNfunction_sb_uRdR::synapse0x2071eb0() {
   return (neuron0x2055430()*-0.0828061);
}

double NNfunction_sb_uRdR::synapse0x2071ef0() {
   return (neuron0x2055770()*-0.0228018);
}

double NNfunction_sb_uRdR::synapse0x2071f30() {
   return (neuron0x2055ab0()*-0.0539111);
}

double NNfunction_sb_uRdR::synapse0x2071f70() {
   return (neuron0x2055df0()*0.0282711);
}

double NNfunction_sb_uRdR::synapse0x2071fb0() {
   return (neuron0x2056130()*0.537601);
}

double NNfunction_sb_uRdR::synapse0x2071ff0() {
   return (neuron0x2056470()*0.0594545);
}

double NNfunction_sb_uRdR::synapse0x2071a80() {
   return (neuron0x20567b0()*-0.0557099);
}

double NNfunction_sb_uRdR::synapse0x2071ac0() {
   return (neuron0x2056d10()*0.337158);
}

double NNfunction_sb_uRdR::synapse0x2072140() {
   return (neuron0x2056f30()*0.0226858);
}

double NNfunction_sb_uRdR::synapse0x2072180() {
   return (neuron0x2057270()*0.0504257);
}

double NNfunction_sb_uRdR::synapse0x20721c0() {
   return (neuron0x20575b0()*0.0844715);
}

double NNfunction_sb_uRdR::synapse0x2072200() {
   return (neuron0x20578f0()*0.178236);
}

double NNfunction_sb_uRdR::synapse0x2072240() {
   return (neuron0x2057c30()*-0.00417923);
}

double NNfunction_sb_uRdR::synapse0x2072280() {
   return (neuron0x2057f70()*-0.0755823);
}

double NNfunction_sb_uRdR::synapse0x2072600() {
   return (neuron0x20533b0()*-0.111402);
}

double NNfunction_sb_uRdR::synapse0x2072640() {
   return (neuron0x20536f0()*0.573745);
}

double NNfunction_sb_uRdR::synapse0x2072680() {
   return (neuron0x2053a30()*0.451061);
}

double NNfunction_sb_uRdR::synapse0x20726c0() {
   return (neuron0x2053d70()*-1.2577);
}

double NNfunction_sb_uRdR::synapse0x2072700() {
   return (neuron0x20540b0()*0.441826);
}

double NNfunction_sb_uRdR::synapse0x2072740() {
   return (neuron0x20543f0()*-0.0191607);
}

double NNfunction_sb_uRdR::synapse0x2072780() {
   return (neuron0x2054730()*0.139184);
}

double NNfunction_sb_uRdR::synapse0x20727c0() {
   return (neuron0x2054a70()*0.332413);
}

double NNfunction_sb_uRdR::synapse0x2072800() {
   return (neuron0x2054db0()*-0.559949);
}

double NNfunction_sb_uRdR::synapse0x2072840() {
   return (neuron0x20550f0()*-0.309769);
}

double NNfunction_sb_uRdR::synapse0x2072880() {
   return (neuron0x2055430()*0.0308222);
}

double NNfunction_sb_uRdR::synapse0x20728c0() {
   return (neuron0x2055770()*0.0642434);
}

double NNfunction_sb_uRdR::synapse0x2072900() {
   return (neuron0x2055ab0()*-1.22137);
}

double NNfunction_sb_uRdR::synapse0x2072940() {
   return (neuron0x2055df0()*-0.307087);
}

double NNfunction_sb_uRdR::synapse0x2072980() {
   return (neuron0x2056130()*-0.877927);
}

double NNfunction_sb_uRdR::synapse0x20729c0() {
   return (neuron0x2056470()*0.315815);
}

double NNfunction_sb_uRdR::synapse0x2072450() {
   return (neuron0x20567b0()*-0.64473);
}

double NNfunction_sb_uRdR::synapse0x2072490() {
   return (neuron0x2056d10()*0.296131);
}

double NNfunction_sb_uRdR::synapse0x2072b10() {
   return (neuron0x2056f30()*-0.341942);
}

double NNfunction_sb_uRdR::synapse0x2072b50() {
   return (neuron0x2057270()*0.132149);
}

double NNfunction_sb_uRdR::synapse0x2072b90() {
   return (neuron0x20575b0()*-0.448995);
}

double NNfunction_sb_uRdR::synapse0x2072bd0() {
   return (neuron0x20578f0()*0.688983);
}

double NNfunction_sb_uRdR::synapse0x2072c10() {
   return (neuron0x2057c30()*0.15459);
}

double NNfunction_sb_uRdR::synapse0x2072c50() {
   return (neuron0x2057f70()*-0.067049);
}

double NNfunction_sb_uRdR::synapse0x2072fd0() {
   return (neuron0x20533b0()*-0.301427);
}

double NNfunction_sb_uRdR::synapse0x2073010() {
   return (neuron0x20536f0()*0.361139);
}

double NNfunction_sb_uRdR::synapse0x2073050() {
   return (neuron0x2053a30()*0.213239);
}

double NNfunction_sb_uRdR::synapse0x2073090() {
   return (neuron0x2053d70()*0.549283);
}

double NNfunction_sb_uRdR::synapse0x20730d0() {
   return (neuron0x20540b0()*1.02267);
}

double NNfunction_sb_uRdR::synapse0x2073110() {
   return (neuron0x20543f0()*0.0262422);
}

double NNfunction_sb_uRdR::synapse0x2073150() {
   return (neuron0x2054730()*-0.153803);
}

double NNfunction_sb_uRdR::synapse0x2073190() {
   return (neuron0x2054a70()*-0.657607);
}

double NNfunction_sb_uRdR::synapse0x20731d0() {
   return (neuron0x2054db0()*0.745071);
}

double NNfunction_sb_uRdR::synapse0x2073210() {
   return (neuron0x20550f0()*0.589208);
}

double NNfunction_sb_uRdR::synapse0x2073250() {
   return (neuron0x2055430()*0.241836);
}

double NNfunction_sb_uRdR::synapse0x2073290() {
   return (neuron0x2055770()*-0.480249);
}

double NNfunction_sb_uRdR::synapse0x20732d0() {
   return (neuron0x2055ab0()*-0.48411);
}

double NNfunction_sb_uRdR::synapse0x2073310() {
   return (neuron0x2055df0()*-0.163994);
}

double NNfunction_sb_uRdR::synapse0x2073350() {
   return (neuron0x2056130()*-0.6147);
}

double NNfunction_sb_uRdR::synapse0x2073390() {
   return (neuron0x2056470()*0.484441);
}

double NNfunction_sb_uRdR::synapse0x2072e20() {
   return (neuron0x20567b0()*-0.0512115);
}

double NNfunction_sb_uRdR::synapse0x2072e60() {
   return (neuron0x2056d10()*-0.56681);
}

double NNfunction_sb_uRdR::synapse0x20734e0() {
   return (neuron0x2056f30()*-0.121149);
}

double NNfunction_sb_uRdR::synapse0x2073520() {
   return (neuron0x2057270()*0.159579);
}

double NNfunction_sb_uRdR::synapse0x2073560() {
   return (neuron0x20575b0()*-0.289614);
}

double NNfunction_sb_uRdR::synapse0x20735a0() {
   return (neuron0x20578f0()*0.429088);
}

double NNfunction_sb_uRdR::synapse0x20735e0() {
   return (neuron0x2057c30()*-0.551569);
}

double NNfunction_sb_uRdR::synapse0x2073620() {
   return (neuron0x2057f70()*-0.307727);
}

double NNfunction_sb_uRdR::synapse0x20739a0() {
   return (neuron0x20533b0()*-0.516157);
}

double NNfunction_sb_uRdR::synapse0x20739e0() {
   return (neuron0x20536f0()*-0.0535513);
}

double NNfunction_sb_uRdR::synapse0x2073a20() {
   return (neuron0x2053a30()*0.59014);
}

double NNfunction_sb_uRdR::synapse0x2073a60() {
   return (neuron0x2053d70()*-0.394867);
}

double NNfunction_sb_uRdR::synapse0x2073aa0() {
   return (neuron0x20540b0()*-0.385276);
}

double NNfunction_sb_uRdR::synapse0x2073ae0() {
   return (neuron0x20543f0()*-0.0128574);
}

double NNfunction_sb_uRdR::synapse0x2073b20() {
   return (neuron0x2054730()*0.0610901);
}

double NNfunction_sb_uRdR::synapse0x2073b60() {
   return (neuron0x2054a70()*0.798658);
}

double NNfunction_sb_uRdR::synapse0x2073ba0() {
   return (neuron0x2054db0()*-0.11992);
}

double NNfunction_sb_uRdR::synapse0x2073be0() {
   return (neuron0x20550f0()*-1.12159);
}

double NNfunction_sb_uRdR::synapse0x2073c20() {
   return (neuron0x2055430()*-0.133006);
}

double NNfunction_sb_uRdR::synapse0x2073c60() {
   return (neuron0x2055770()*0.334457);
}

double NNfunction_sb_uRdR::synapse0x2073ca0() {
   return (neuron0x2055ab0()*-0.311257);
}

double NNfunction_sb_uRdR::synapse0x2073ce0() {
   return (neuron0x2055df0()*0.280221);
}

double NNfunction_sb_uRdR::synapse0x2073d20() {
   return (neuron0x2056130()*0.755706);
}

double NNfunction_sb_uRdR::synapse0x2073d60() {
   return (neuron0x2056470()*0.238516);
}

double NNfunction_sb_uRdR::synapse0x20737f0() {
   return (neuron0x20567b0()*-0.129098);
}

double NNfunction_sb_uRdR::synapse0x2073830() {
   return (neuron0x2056d10()*-0.0202362);
}

double NNfunction_sb_uRdR::synapse0x2073eb0() {
   return (neuron0x2056f30()*0.0519976);
}

double NNfunction_sb_uRdR::synapse0x2073ef0() {
   return (neuron0x2057270()*-0.568883);
}

double NNfunction_sb_uRdR::synapse0x2073f30() {
   return (neuron0x20575b0()*0.3582);
}

double NNfunction_sb_uRdR::synapse0x2073f70() {
   return (neuron0x20578f0()*-0.424695);
}

double NNfunction_sb_uRdR::synapse0x2073fb0() {
   return (neuron0x2057c30()*0.615619);
}

double NNfunction_sb_uRdR::synapse0x2073ff0() {
   return (neuron0x2057f70()*-0.347235);
}

double NNfunction_sb_uRdR::synapse0x2074370() {
   return (neuron0x20533b0()*0.0385308);
}

double NNfunction_sb_uRdR::synapse0x20743b0() {
   return (neuron0x20536f0()*0.125482);
}

double NNfunction_sb_uRdR::synapse0x20743f0() {
   return (neuron0x2053a30()*-0.0119638);
}

double NNfunction_sb_uRdR::synapse0x2074430() {
   return (neuron0x2053d70()*0.139746);
}

double NNfunction_sb_uRdR::synapse0x2074470() {
   return (neuron0x20540b0()*-0.0128229);
}

double NNfunction_sb_uRdR::synapse0x20744b0() {
   return (neuron0x20543f0()*-0.000106027);
}

double NNfunction_sb_uRdR::synapse0x20744f0() {
   return (neuron0x2054730()*-0.00108595);
}

double NNfunction_sb_uRdR::synapse0x2074530() {
   return (neuron0x2054a70()*-0.00376101);
}

double NNfunction_sb_uRdR::synapse0x2074570() {
   return (neuron0x2054db0()*-0.00262133);
}

double NNfunction_sb_uRdR::synapse0x20745b0() {
   return (neuron0x20550f0()*-0.0273014);
}

double NNfunction_sb_uRdR::synapse0x20745f0() {
   return (neuron0x2055430()*0.0288581);
}

double NNfunction_sb_uRdR::synapse0x2074630() {
   return (neuron0x2055770()*-0.34895);
}

double NNfunction_sb_uRdR::synapse0x2074670() {
   return (neuron0x2055ab0()*-0.29628);
}

double NNfunction_sb_uRdR::synapse0x20746b0() {
   return (neuron0x2055df0()*0.00131187);
}

double NNfunction_sb_uRdR::synapse0x20746f0() {
   return (neuron0x2056130()*0.00311404);
}

double NNfunction_sb_uRdR::synapse0x2074730() {
   return (neuron0x2056470()*-0.17424);
}

double NNfunction_sb_uRdR::synapse0x20741c0() {
   return (neuron0x20567b0()*0.0220043);
}

double NNfunction_sb_uRdR::synapse0x2074200() {
   return (neuron0x2056d10()*-0.021864);
}

double NNfunction_sb_uRdR::synapse0x2074880() {
   return (neuron0x2056f30()*-0.174393);
}

double NNfunction_sb_uRdR::synapse0x20748c0() {
   return (neuron0x2057270()*0.0220918);
}

double NNfunction_sb_uRdR::synapse0x2074900() {
   return (neuron0x20575b0()*0.0207358);
}

double NNfunction_sb_uRdR::synapse0x2074940() {
   return (neuron0x20578f0()*-0.0228063);
}

double NNfunction_sb_uRdR::synapse0x2074980() {
   return (neuron0x2057c30()*0.0125336);
}

double NNfunction_sb_uRdR::synapse0x20749c0() {
   return (neuron0x2057f70()*0.00864397);
}

double NNfunction_sb_uRdR::synapse0x205d470() {
   return (neuron0x20533b0()*-0.822348);
}

double NNfunction_sb_uRdR::synapse0x205d4b0() {
   return (neuron0x20536f0()*0.424689);
}

double NNfunction_sb_uRdR::synapse0x205d4f0() {
   return (neuron0x2053a30()*0.389676);
}

double NNfunction_sb_uRdR::synapse0x205d530() {
   return (neuron0x2053d70()*0.0713942);
}

double NNfunction_sb_uRdR::synapse0x205d570() {
   return (neuron0x20540b0()*0.0790365);
}

double NNfunction_sb_uRdR::synapse0x205d5b0() {
   return (neuron0x20543f0()*-0.185882);
}

double NNfunction_sb_uRdR::synapse0x205d5f0() {
   return (neuron0x2054730()*1.40612);
}

double NNfunction_sb_uRdR::synapse0x205d630() {
   return (neuron0x2054a70()*0.184365);
}

double NNfunction_sb_uRdR::synapse0x2075150() {
   return (neuron0x2054db0()*-0.0823064);
}

double NNfunction_sb_uRdR::synapse0x2075190() {
   return (neuron0x20550f0()*0.574703);
}

double NNfunction_sb_uRdR::synapse0x20751d0() {
   return (neuron0x2055430()*0.264226);
}

double NNfunction_sb_uRdR::synapse0x2075210() {
   return (neuron0x2055770()*0.193584);
}

double NNfunction_sb_uRdR::synapse0x2075250() {
   return (neuron0x2055ab0()*0.258794);
}

double NNfunction_sb_uRdR::synapse0x2075290() {
   return (neuron0x2055df0()*-0.00485407);
}

double NNfunction_sb_uRdR::synapse0x20752d0() {
   return (neuron0x2056130()*0.330505);
}

double NNfunction_sb_uRdR::synapse0x2075310() {
   return (neuron0x2056470()*0.165235);
}

double NNfunction_sb_uRdR::synapse0x2074b90() {
   return (neuron0x20567b0()*0.726502);
}

double NNfunction_sb_uRdR::synapse0x2074bd0() {
   return (neuron0x2056d10()*1.00612);
}

double NNfunction_sb_uRdR::synapse0x2075460() {
   return (neuron0x2056f30()*-0.784975);
}

double NNfunction_sb_uRdR::synapse0x20754a0() {
   return (neuron0x2057270()*-0.822926);
}

double NNfunction_sb_uRdR::synapse0x20754e0() {
   return (neuron0x20575b0()*-0.191461);
}

double NNfunction_sb_uRdR::synapse0x2075520() {
   return (neuron0x20578f0()*0.103229);
}

double NNfunction_sb_uRdR::synapse0x2075560() {
   return (neuron0x2057c30()*0.689661);
}

double NNfunction_sb_uRdR::synapse0x20755a0() {
   return (neuron0x2057f70()*-0.128362);
}

double NNfunction_sb_uRdR::synapse0x2075920() {
   return (neuron0x20533b0()*0.0680748);
}

double NNfunction_sb_uRdR::synapse0x2075960() {
   return (neuron0x20536f0()*-0.104076);
}

double NNfunction_sb_uRdR::synapse0x20759a0() {
   return (neuron0x2053a30()*-0.154354);
}

double NNfunction_sb_uRdR::synapse0x20759e0() {
   return (neuron0x2053d70()*0.289377);
}

double NNfunction_sb_uRdR::synapse0x2075a20() {
   return (neuron0x20540b0()*0.158321);
}

double NNfunction_sb_uRdR::synapse0x2075a60() {
   return (neuron0x20543f0()*0.467096);
}

double NNfunction_sb_uRdR::synapse0x2075aa0() {
   return (neuron0x2054730()*-0.529351);
}

double NNfunction_sb_uRdR::synapse0x2075ae0() {
   return (neuron0x2054a70()*0.077123);
}

double NNfunction_sb_uRdR::synapse0x2075b20() {
   return (neuron0x2054db0()*-0.067569);
}

double NNfunction_sb_uRdR::synapse0x2075b60() {
   return (neuron0x20550f0()*-0.766543);
}

double NNfunction_sb_uRdR::synapse0x2075ba0() {
   return (neuron0x2055430()*-0.7066);
}

double NNfunction_sb_uRdR::synapse0x2075be0() {
   return (neuron0x2055770()*-0.387392);
}

double NNfunction_sb_uRdR::synapse0x2075c20() {
   return (neuron0x2055ab0()*0.0163909);
}

double NNfunction_sb_uRdR::synapse0x2075c60() {
   return (neuron0x2055df0()*0.684751);
}

double NNfunction_sb_uRdR::synapse0x2075ca0() {
   return (neuron0x2056130()*-0.323758);
}

double NNfunction_sb_uRdR::synapse0x2075ce0() {
   return (neuron0x2056470()*-0.126312);
}

double NNfunction_sb_uRdR::synapse0x2075770() {
   return (neuron0x20567b0()*-0.505591);
}

double NNfunction_sb_uRdR::synapse0x20757b0() {
   return (neuron0x2056d10()*-1.23875);
}

double NNfunction_sb_uRdR::synapse0x2075e30() {
   return (neuron0x2056f30()*-0.5833);
}

double NNfunction_sb_uRdR::synapse0x2075e70() {
   return (neuron0x2057270()*0.554052);
}

double NNfunction_sb_uRdR::synapse0x2075eb0() {
   return (neuron0x20575b0()*-0.767424);
}

double NNfunction_sb_uRdR::synapse0x2075ef0() {
   return (neuron0x20578f0()*0.742025);
}

double NNfunction_sb_uRdR::synapse0x2075f30() {
   return (neuron0x2057c30()*-0.660564);
}

double NNfunction_sb_uRdR::synapse0x2075f70() {
   return (neuron0x2057f70()*0.752142);
}

double NNfunction_sb_uRdR::synapse0x20762f0() {
   return (neuron0x20533b0()*0.0252965);
}

double NNfunction_sb_uRdR::synapse0x2076330() {
   return (neuron0x20536f0()*-0.0291554);
}

double NNfunction_sb_uRdR::synapse0x2076370() {
   return (neuron0x2053a30()*0.0117369);
}

double NNfunction_sb_uRdR::synapse0x20763b0() {
   return (neuron0x2053d70()*-2.50456);
}

double NNfunction_sb_uRdR::synapse0x20763f0() {
   return (neuron0x20540b0()*-0.0149219);
}

double NNfunction_sb_uRdR::synapse0x2076430() {
   return (neuron0x20543f0()*-0.00828603);
}

double NNfunction_sb_uRdR::synapse0x2076470() {
   return (neuron0x2054730()*0.00974295);
}

double NNfunction_sb_uRdR::synapse0x20764b0() {
   return (neuron0x2054a70()*-0.0437978);
}

double NNfunction_sb_uRdR::synapse0x20764f0() {
   return (neuron0x2054db0()*-0.00114306);
}

double NNfunction_sb_uRdR::synapse0x2076530() {
   return (neuron0x20550f0()*0.0706339);
}

double NNfunction_sb_uRdR::synapse0x2076570() {
   return (neuron0x2055430()*-0.022233);
}

double NNfunction_sb_uRdR::synapse0x20765b0() {
   return (neuron0x2055770()*0.0462236);
}

double NNfunction_sb_uRdR::synapse0x20765f0() {
   return (neuron0x2055ab0()*0.0558008);
}

double NNfunction_sb_uRdR::synapse0x2076630() {
   return (neuron0x2055df0()*0.000187841);
}

double NNfunction_sb_uRdR::synapse0x2076670() {
   return (neuron0x2056130()*-0.0424823);
}

double NNfunction_sb_uRdR::synapse0x20766b0() {
   return (neuron0x2056470()*0.0309266);
}

double NNfunction_sb_uRdR::synapse0x2076140() {
   return (neuron0x20567b0()*-0.00311767);
}

double NNfunction_sb_uRdR::synapse0x2076180() {
   return (neuron0x2056d10()*-0.0204064);
}

double NNfunction_sb_uRdR::synapse0x2066cb0() {
   return (neuron0x2056f30()*0.02063);
}

double NNfunction_sb_uRdR::synapse0x2066cf0() {
   return (neuron0x2057270()*0.0424871);
}

double NNfunction_sb_uRdR::synapse0x2066d30() {
   return (neuron0x20575b0()*0.021771);
}

double NNfunction_sb_uRdR::synapse0x2066d70() {
   return (neuron0x20578f0()*0.0263007);
}

double NNfunction_sb_uRdR::synapse0x2066db0() {
   return (neuron0x2057c30()*0.0130198);
}

double NNfunction_sb_uRdR::synapse0x2066df0() {
   return (neuron0x2057f70()*-0.0531703);
}

double NNfunction_sb_uRdR::synapse0x2067170() {
   return (neuron0x20533b0()*0.954062);
}

double NNfunction_sb_uRdR::synapse0x20671b0() {
   return (neuron0x20536f0()*-1.27314);
}

double NNfunction_sb_uRdR::synapse0x20671f0() {
   return (neuron0x2053a30()*0.153558);
}

double NNfunction_sb_uRdR::synapse0x2067230() {
   return (neuron0x2053d70()*0.229126);
}

double NNfunction_sb_uRdR::synapse0x2067270() {
   return (neuron0x20540b0()*-0.563371);
}

double NNfunction_sb_uRdR::synapse0x20672b0() {
   return (neuron0x20543f0()*-0.0790667);
}

double NNfunction_sb_uRdR::synapse0x20672f0() {
   return (neuron0x2054730()*0.47318);
}

double NNfunction_sb_uRdR::synapse0x2067330() {
   return (neuron0x2054a70()*-0.917637);
}

double NNfunction_sb_uRdR::synapse0x2067370() {
   return (neuron0x2054db0()*-0.656556);
}

double NNfunction_sb_uRdR::synapse0x20673b0() {
   return (neuron0x20550f0()*0.0263667);
}

double NNfunction_sb_uRdR::synapse0x20673f0() {
   return (neuron0x2055430()*0.043192);
}

double NNfunction_sb_uRdR::synapse0x2067430() {
   return (neuron0x2055770()*-0.137908);
}

double NNfunction_sb_uRdR::synapse0x2067470() {
   return (neuron0x2055ab0()*-0.912478);
}

double NNfunction_sb_uRdR::synapse0x20674b0() {
   return (neuron0x2055df0()*0.0191922);
}

double NNfunction_sb_uRdR::synapse0x20674f0() {
   return (neuron0x2056130()*-0.271399);
}

double NNfunction_sb_uRdR::synapse0x2067530() {
   return (neuron0x2056470()*0.255807);
}

double NNfunction_sb_uRdR::synapse0x2066fc0() {
   return (neuron0x20567b0()*0.741983);
}

double NNfunction_sb_uRdR::synapse0x2067000() {
   return (neuron0x2056d10()*-0.286821);
}

double NNfunction_sb_uRdR::synapse0x2067680() {
   return (neuron0x2056f30()*-0.816582);
}

double NNfunction_sb_uRdR::synapse0x20676c0() {
   return (neuron0x2057270()*0.0183251);
}

double NNfunction_sb_uRdR::synapse0x2067700() {
   return (neuron0x20575b0()*-0.524679);
}

double NNfunction_sb_uRdR::synapse0x2067740() {
   return (neuron0x20578f0()*0.984001);
}

double NNfunction_sb_uRdR::synapse0x2067780() {
   return (neuron0x2057c30()*0.297401);
}

double NNfunction_sb_uRdR::synapse0x20677c0() {
   return (neuron0x2057f70()*0.159945);
}

double NNfunction_sb_uRdR::synapse0x2067b40() {
   return (neuron0x20533b0()*0.0391788);
}

double NNfunction_sb_uRdR::synapse0x2067b80() {
   return (neuron0x20536f0()*-0.0517875);
}

double NNfunction_sb_uRdR::synapse0x2067bc0() {
   return (neuron0x2053a30()*0.0504434);
}

double NNfunction_sb_uRdR::synapse0x2067c00() {
   return (neuron0x2053d70()*-0.206982);
}

double NNfunction_sb_uRdR::synapse0x2067c40() {
   return (neuron0x20540b0()*0.010171);
}

double NNfunction_sb_uRdR::synapse0x2067c80() {
   return (neuron0x20543f0()*0.220208);
}

double NNfunction_sb_uRdR::synapse0x2067cc0() {
   return (neuron0x2054730()*-0.151768);
}

double NNfunction_sb_uRdR::synapse0x2067d00() {
   return (neuron0x2054a70()*-0.0114808);
}

double NNfunction_sb_uRdR::synapse0x2067d40() {
   return (neuron0x2054db0()*0.0135592);
}

double NNfunction_sb_uRdR::synapse0x2067d80() {
   return (neuron0x20550f0()*-0.0594333);
}

double NNfunction_sb_uRdR::synapse0x2067dc0() {
   return (neuron0x2055430()*-0.0153605);
}

double NNfunction_sb_uRdR::synapse0x2067e00() {
   return (neuron0x2055770()*-0.0745668);
}

double NNfunction_sb_uRdR::synapse0x2067e40() {
   return (neuron0x2055ab0()*-0.121431);
}

double NNfunction_sb_uRdR::synapse0x2067e80() {
   return (neuron0x2055df0()*0.08641);
}

double NNfunction_sb_uRdR::synapse0x2067ec0() {
   return (neuron0x2056130()*-2.13283);
}

double NNfunction_sb_uRdR::synapse0x2067f00() {
   return (neuron0x2056470()*-0.0683101);
}

double NNfunction_sb_uRdR::synapse0x2067990() {
   return (neuron0x20567b0()*0.116621);
}

double NNfunction_sb_uRdR::synapse0x20679d0() {
   return (neuron0x2056d10()*0.201395);
}

double NNfunction_sb_uRdR::synapse0x2068050() {
   return (neuron0x2056f30()*-0.0950413);
}

double NNfunction_sb_uRdR::synapse0x2068090() {
   return (neuron0x2057270()*0.0665328);
}

double NNfunction_sb_uRdR::synapse0x20680d0() {
   return (neuron0x20575b0()*-0.358969);
}

double NNfunction_sb_uRdR::synapse0x2068110() {
   return (neuron0x20578f0()*0.00628479);
}

double NNfunction_sb_uRdR::synapse0x2068150() {
   return (neuron0x2057c30()*0.148797);
}

double NNfunction_sb_uRdR::synapse0x2068190() {
   return (neuron0x2057f70()*0.120519);
}

double NNfunction_sb_uRdR::synapse0x2068510() {
   return (neuron0x20533b0()*0.0101836);
}

double NNfunction_sb_uRdR::synapse0x2068550() {
   return (neuron0x20536f0()*0.000512235);
}

double NNfunction_sb_uRdR::synapse0x2068590() {
   return (neuron0x2053a30()*0.004934);
}

double NNfunction_sb_uRdR::synapse0x20685d0() {
   return (neuron0x2053d70()*-0.0602363);
}

double NNfunction_sb_uRdR::synapse0x2068610() {
   return (neuron0x20540b0()*-0.00583593);
}

double NNfunction_sb_uRdR::synapse0x2068650() {
   return (neuron0x20543f0()*0.00610673);
}

double NNfunction_sb_uRdR::synapse0x2068690() {
   return (neuron0x2054730()*0.0177716);
}

double NNfunction_sb_uRdR::synapse0x20686d0() {
   return (neuron0x2054a70()*-0.0154196);
}

double NNfunction_sb_uRdR::synapse0x2068710() {
   return (neuron0x2054db0()*0.0190527);
}

double NNfunction_sb_uRdR::synapse0x2068750() {
   return (neuron0x20550f0()*0.0276169);
}

double NNfunction_sb_uRdR::synapse0x2068790() {
   return (neuron0x2055430()*0.00557408);
}

double NNfunction_sb_uRdR::synapse0x20687d0() {
   return (neuron0x2055770()*0.0122725);
}

double NNfunction_sb_uRdR::synapse0x2068810() {
   return (neuron0x2055ab0()*0.0105218);
}

double NNfunction_sb_uRdR::synapse0x2068850() {
   return (neuron0x2055df0()*0.0168513);
}

double NNfunction_sb_uRdR::synapse0x2068890() {
   return (neuron0x2056130()*1.42252);
}

double NNfunction_sb_uRdR::synapse0x20688d0() {
   return (neuron0x2056470()*0.0159459);
}

double NNfunction_sb_uRdR::synapse0x2068360() {
   return (neuron0x20567b0()*0.0300677);
}

double NNfunction_sb_uRdR::synapse0x20683a0() {
   return (neuron0x2056d10()*-0.153914);
}

double NNfunction_sb_uRdR::synapse0x2068a20() {
   return (neuron0x2056f30()*0.0168386);
}

double NNfunction_sb_uRdR::synapse0x2068a60() {
   return (neuron0x2057270()*-0.00687298);
}

double NNfunction_sb_uRdR::synapse0x2068aa0() {
   return (neuron0x20575b0()*-0.0142598);
}

double NNfunction_sb_uRdR::synapse0x2068ae0() {
   return (neuron0x20578f0()*0.00281927);
}

double NNfunction_sb_uRdR::synapse0x2068b20() {
   return (neuron0x2057c30()*-0.00176015);
}

double NNfunction_sb_uRdR::synapse0x2068b60() {
   return (neuron0x2057f70()*0.00966376);
}

double NNfunction_sb_uRdR::synapse0x207aa30() {
   return (neuron0x20533b0()*-0.131262);
}

double NNfunction_sb_uRdR::synapse0x207aa70() {
   return (neuron0x20536f0()*0.0582085);
}

double NNfunction_sb_uRdR::synapse0x207aab0() {
   return (neuron0x2053a30()*-0.102887);
}

double NNfunction_sb_uRdR::synapse0x207aaf0() {
   return (neuron0x2053d70()*-0.921378);
}

double NNfunction_sb_uRdR::synapse0x207ab30() {
   return (neuron0x20540b0()*-0.0559601);
}

double NNfunction_sb_uRdR::synapse0x207ab70() {
   return (neuron0x20543f0()*-0.363029);
}

double NNfunction_sb_uRdR::synapse0x207abb0() {
   return (neuron0x2054730()*-0.464874);
}

double NNfunction_sb_uRdR::synapse0x207abf0() {
   return (neuron0x2054a70()*-0.198373);
}

double NNfunction_sb_uRdR::synapse0x207ac30() {
   return (neuron0x2054db0()*-0.102072);
}

double NNfunction_sb_uRdR::synapse0x207ac70() {
   return (neuron0x20550f0()*0.184015);
}

double NNfunction_sb_uRdR::synapse0x207acb0() {
   return (neuron0x2055430()*0.0588671);
}

double NNfunction_sb_uRdR::synapse0x207acf0() {
   return (neuron0x2055770()*0.258624);
}

double NNfunction_sb_uRdR::synapse0x207ad30() {
   return (neuron0x2055ab0()*-0.0930789);
}

double NNfunction_sb_uRdR::synapse0x207ad70() {
   return (neuron0x2055df0()*-0.384546);
}

double NNfunction_sb_uRdR::synapse0x207adb0() {
   return (neuron0x2056130()*-0.968092);
}

double NNfunction_sb_uRdR::synapse0x207adf0() {
   return (neuron0x2056470()*-0.169013);
}

double NNfunction_sb_uRdR::synapse0x2068ba0() {
   return (neuron0x20567b0()*-0.553516);
}

double NNfunction_sb_uRdR::synapse0x2068be0() {
   return (neuron0x2056d10()*-0.376103);
}

double NNfunction_sb_uRdR::synapse0x207af40() {
   return (neuron0x2056f30()*0.134252);
}

double NNfunction_sb_uRdR::synapse0x207af80() {
   return (neuron0x2057270()*0.00755496);
}

double NNfunction_sb_uRdR::synapse0x207afc0() {
   return (neuron0x20575b0()*-0.176002);
}

double NNfunction_sb_uRdR::synapse0x207b000() {
   return (neuron0x20578f0()*-0.329979);
}

double NNfunction_sb_uRdR::synapse0x207b040() {
   return (neuron0x2057c30()*-0.00954727);
}

double NNfunction_sb_uRdR::synapse0x207b080() {
   return (neuron0x2057f70()*-0.110375);
}

double NNfunction_sb_uRdR::synapse0x207b400() {
   return (neuron0x20533b0()*-0.10802);
}

double NNfunction_sb_uRdR::synapse0x207b440() {
   return (neuron0x20536f0()*0.306448);
}

double NNfunction_sb_uRdR::synapse0x207b480() {
   return (neuron0x2053a30()*-0.340669);
}

double NNfunction_sb_uRdR::synapse0x207b4c0() {
   return (neuron0x2053d70()*-0.981474);
}

double NNfunction_sb_uRdR::synapse0x207b500() {
   return (neuron0x20540b0()*-0.137);
}

double NNfunction_sb_uRdR::synapse0x207b540() {
   return (neuron0x20543f0()*0.19214);
}

double NNfunction_sb_uRdR::synapse0x207b580() {
   return (neuron0x2054730()*-0.00648708);
}

double NNfunction_sb_uRdR::synapse0x207b5c0() {
   return (neuron0x2054a70()*0.0294144);
}

double NNfunction_sb_uRdR::synapse0x207b600() {
   return (neuron0x2054db0()*0.0271526);
}

double NNfunction_sb_uRdR::synapse0x207b640() {
   return (neuron0x20550f0()*0.0443578);
}

double NNfunction_sb_uRdR::synapse0x207b680() {
   return (neuron0x2055430()*-0.522083);
}

double NNfunction_sb_uRdR::synapse0x207b6c0() {
   return (neuron0x2055770()*0.366264);
}

double NNfunction_sb_uRdR::synapse0x207b700() {
   return (neuron0x2055ab0()*-0.351018);
}

double NNfunction_sb_uRdR::synapse0x207b740() {
   return (neuron0x2055df0()*-0.356306);
}

double NNfunction_sb_uRdR::synapse0x207b780() {
   return (neuron0x2056130()*-0.0951662);
}

double NNfunction_sb_uRdR::synapse0x207b7c0() {
   return (neuron0x2056470()*0.647293);
}

double NNfunction_sb_uRdR::synapse0x207b250() {
   return (neuron0x20567b0()*0.593776);
}

double NNfunction_sb_uRdR::synapse0x207b290() {
   return (neuron0x2056d10()*-0.560753);
}

double NNfunction_sb_uRdR::synapse0x207b910() {
   return (neuron0x2056f30()*0.634326);
}

double NNfunction_sb_uRdR::synapse0x207b950() {
   return (neuron0x2057270()*-0.410618);
}

double NNfunction_sb_uRdR::synapse0x207b990() {
   return (neuron0x20575b0()*-0.12814);
}

double NNfunction_sb_uRdR::synapse0x207b9d0() {
   return (neuron0x20578f0()*0.13481);
}

double NNfunction_sb_uRdR::synapse0x207ba10() {
   return (neuron0x2057c30()*0.0939551);
}

double NNfunction_sb_uRdR::synapse0x207ba50() {
   return (neuron0x2057f70()*-0.267044);
}

double NNfunction_sb_uRdR::synapse0x207bdd0() {
   return (neuron0x20533b0()*-0.0790448);
}

double NNfunction_sb_uRdR::synapse0x207be10() {
   return (neuron0x20536f0()*-0.0105624);
}

double NNfunction_sb_uRdR::synapse0x207be50() {
   return (neuron0x2053a30()*-0.0180752);
}

double NNfunction_sb_uRdR::synapse0x207be90() {
   return (neuron0x2053d70()*2.53181);
}

double NNfunction_sb_uRdR::synapse0x207bed0() {
   return (neuron0x20540b0()*0.0204048);
}

double NNfunction_sb_uRdR::synapse0x207bf10() {
   return (neuron0x20543f0()*0.0167729);
}

double NNfunction_sb_uRdR::synapse0x207bf50() {
   return (neuron0x2054730()*0.0255093);
}

double NNfunction_sb_uRdR::synapse0x207bf90() {
   return (neuron0x2054a70()*0.0147678);
}

double NNfunction_sb_uRdR::synapse0x207bfd0() {
   return (neuron0x2054db0()*-0.0166563);
}

double NNfunction_sb_uRdR::synapse0x207c010() {
   return (neuron0x20550f0()*-0.0167555);
}

double NNfunction_sb_uRdR::synapse0x207c050() {
   return (neuron0x2055430()*0.00782564);
}

double NNfunction_sb_uRdR::synapse0x207c090() {
   return (neuron0x2055770()*-0.0996229);
}

double NNfunction_sb_uRdR::synapse0x207c0d0() {
   return (neuron0x2055ab0()*-0.132605);
}

double NNfunction_sb_uRdR::synapse0x207c110() {
   return (neuron0x2055df0()*0.0484424);
}

double NNfunction_sb_uRdR::synapse0x207c150() {
   return (neuron0x2056130()*-0.130534);
}

double NNfunction_sb_uRdR::synapse0x207c190() {
   return (neuron0x2056470()*0.0132888);
}

double NNfunction_sb_uRdR::synapse0x207bc20() {
   return (neuron0x20567b0()*0.0304492);
}

double NNfunction_sb_uRdR::synapse0x207bc60() {
   return (neuron0x2056d10()*-0.134823);
}

double NNfunction_sb_uRdR::synapse0x207c2e0() {
   return (neuron0x2056f30()*-0.0272863);
}

double NNfunction_sb_uRdR::synapse0x207c320() {
   return (neuron0x2057270()*-0.0119572);
}

double NNfunction_sb_uRdR::synapse0x207c360() {
   return (neuron0x20575b0()*-0.0076966);
}

double NNfunction_sb_uRdR::synapse0x207c3a0() {
   return (neuron0x20578f0()*0.000910598);
}

double NNfunction_sb_uRdR::synapse0x207c3e0() {
   return (neuron0x2057c30()*-0.032841);
}

double NNfunction_sb_uRdR::synapse0x207c420() {
   return (neuron0x2057f70()*-0.00228462);
}

double NNfunction_sb_uRdR::synapse0x207c7a0() {
   return (neuron0x20533b0()*-0.0526745);
}

double NNfunction_sb_uRdR::synapse0x207c7e0() {
   return (neuron0x20536f0()*0.000575884);
}

double NNfunction_sb_uRdR::synapse0x207c820() {
   return (neuron0x2053a30()*-0.0168752);
}

double NNfunction_sb_uRdR::synapse0x207c860() {
   return (neuron0x2053d70()*-1.9512);
}

double NNfunction_sb_uRdR::synapse0x207c8a0() {
   return (neuron0x20540b0()*-0.004755);
}

double NNfunction_sb_uRdR::synapse0x207c8e0() {
   return (neuron0x20543f0()*0.00524158);
}

double NNfunction_sb_uRdR::synapse0x207c920() {
   return (neuron0x2054730()*0.0107682);
}

double NNfunction_sb_uRdR::synapse0x207c960() {
   return (neuron0x2054a70()*-0.0174151);
}

double NNfunction_sb_uRdR::synapse0x207c9a0() {
   return (neuron0x2054db0()*-0.00590311);
}

double NNfunction_sb_uRdR::synapse0x207c9e0() {
   return (neuron0x20550f0()*0.0302687);
}

double NNfunction_sb_uRdR::synapse0x207ca20() {
   return (neuron0x2055430()*-0.00810221);
}

double NNfunction_sb_uRdR::synapse0x207ca60() {
   return (neuron0x2055770()*-0.013561);
}

double NNfunction_sb_uRdR::synapse0x207caa0() {
   return (neuron0x2055ab0()*-0.0175564);
}

double NNfunction_sb_uRdR::synapse0x207cae0() {
   return (neuron0x2055df0()*0.0320181);
}

double NNfunction_sb_uRdR::synapse0x207cb20() {
   return (neuron0x2056130()*-0.331631);
}

double NNfunction_sb_uRdR::synapse0x207cb60() {
   return (neuron0x2056470()*-0.00368898);
}

double NNfunction_sb_uRdR::synapse0x207c5f0() {
   return (neuron0x20567b0()*0.0225176);
}

double NNfunction_sb_uRdR::synapse0x207c630() {
   return (neuron0x2056d10()*-0.297133);
}

double NNfunction_sb_uRdR::synapse0x207ccb0() {
   return (neuron0x2056f30()*0.00606945);
}

double NNfunction_sb_uRdR::synapse0x207ccf0() {
   return (neuron0x2057270()*0.0103131);
}

double NNfunction_sb_uRdR::synapse0x207cd30() {
   return (neuron0x20575b0()*0.0217425);
}

double NNfunction_sb_uRdR::synapse0x207cd70() {
   return (neuron0x20578f0()*-0.0282465);
}

double NNfunction_sb_uRdR::synapse0x207cdb0() {
   return (neuron0x2057c30()*-0.00545041);
}

double NNfunction_sb_uRdR::synapse0x207cdf0() {
   return (neuron0x2057f70()*-0.0183497);
}

double NNfunction_sb_uRdR::synapse0x1e1cd10() {
   return (neuron0x20583e0()*0.183237);
}

double NNfunction_sb_uRdR::synapse0x1e1cd50() {
   return (neuron0x2058d30()*-2.43287);
}

double NNfunction_sb_uRdR::synapse0x205a8a0() {
   return (neuron0x2059810()*-1.98815);
}

double NNfunction_sb_uRdR::synapse0x205a8e0() {
   return (neuron0x20592b0()*1.26775);
}

double NNfunction_sb_uRdR::synapse0x205b270() {
   return (neuron0x205a5f0()*1.95403);
}

double NNfunction_sb_uRdR::synapse0x205b2b0() {
   return (neuron0x205afc0()*2.30584);
}

double NNfunction_sb_uRdR::synapse0x205c040() {
   return (neuron0x205bd90()*-1.96289);
}

double NNfunction_sb_uRdR::synapse0x205c080() {
   return (neuron0x205c760()*-0.150169);
}

double NNfunction_sb_uRdR::synapse0x205ca10() {
   return (neuron0x205d130()*1.1189);
}

double NNfunction_sb_uRdR::synapse0x205ca50() {
   return (neuron0x205dc10()*0.554489);
}

double NNfunction_sb_uRdR::synapse0x205d3e0() {
   return (neuron0x205e5e0()*-1.78748);
}

double NNfunction_sb_uRdR::synapse0x205d420() {
   return (neuron0x205b6c0()*1.73762);
}

double NNfunction_sb_uRdR::synapse0x205dec0() {
   return (neuron0x2060190()*4.50534);
}

double NNfunction_sb_uRdR::synapse0x205df00() {
   return (neuron0x2060b60()*-1.60155);
}

double NNfunction_sb_uRdR::synapse0x205e890() {
   return (neuron0x2061530()*-1.81617);
}

double NNfunction_sb_uRdR::synapse0x205e8d0() {
   return (neuron0x2061f00()*-1.60775);
}

double NNfunction_sb_uRdR::synapse0x205b970() {
   return (neuron0x2063d10()*-3.8893);
}

double NNfunction_sb_uRdR::synapse0x205b9b0() {
   return (neuron0x2063ff0()*1.50113);
}

double NNfunction_sb_uRdR::synapse0x2060440() {
   return (neuron0x20649c0()*-1.8378);
}

double NNfunction_sb_uRdR::synapse0x2060480() {
   return (neuron0x2065390()*2.58166);
}

double NNfunction_sb_uRdR::synapse0x2060e10() {
   return (neuron0x2065d60()*3.73536);
}

double NNfunction_sb_uRdR::synapse0x2060e50() {
   return (neuron0x2066730()*-1.17922);
}

double NNfunction_sb_uRdR::synapse0x20617e0() {
   return (neuron0x205f280()*-1.97212);
}

double NNfunction_sb_uRdR::synapse0x2061820() {
   return (neuron0x205fc50()*-1.09894);
}

double NNfunction_sb_uRdR::synapse0x20621b0() {
   return (neuron0x20694c0()*-1.84722);
}

double NNfunction_sb_uRdR::synapse0x20621f0() {
   return (neuron0x2069e90()*1.18788);
}

double NNfunction_sb_uRdR::synapse0x2056350() {
   return (neuron0x206a860()*1.03614);
}

double NNfunction_sb_uRdR::synapse0x2056390() {
   return (neuron0x206b230()*7.43936);
}

double NNfunction_sb_uRdR::synapse0x20642a0() {
   return (neuron0x206bc00()*1.72376);
}

double NNfunction_sb_uRdR::synapse0x20642e0() {
   return (neuron0x206c5d0()*1.28297);
}

double NNfunction_sb_uRdR::synapse0x2064c70() {
   return (neuron0x206cfa0()*1.23169);
}

double NNfunction_sb_uRdR::synapse0x2064cb0() {
   return (neuron0x206d970()*2.32066);
}

double NNfunction_sb_uRdR::synapse0x2065640() {
   return (neuron0x2063a00()*1.40605);
}

double NNfunction_sb_uRdR::synapse0x2065680() {
   return (neuron0x2070550()*1.80245);
}

double NNfunction_sb_uRdR::synapse0x2066010() {
   return (neuron0x2070f20()*-1.70496);
}

double NNfunction_sb_uRdR::synapse0x2066050() {
   return (neuron0x20718f0()*-5.0242);
}

double NNfunction_sb_uRdR::synapse0x20669e0() {
   return (neuron0x20722c0()*1.39345);
}

double NNfunction_sb_uRdR::synapse0x2066a20() {
   return (neuron0x2072c90()*-1.81159);
}

double NNfunction_sb_uRdR::synapse0x205f530() {
   return (neuron0x2073660()*-1.63558);
}

double NNfunction_sb_uRdR::synapse0x205f570() {
   return (neuron0x2074030()*-1.58559);
}

double NNfunction_sb_uRdR::synapse0x2068de0() {
   return (neuron0x2074a00()*1.48143);
}

double NNfunction_sb_uRdR::synapse0x2068e20() {
   return (neuron0x20755e0()*1.38446);
}

double NNfunction_sb_uRdR::synapse0x2069770() {
   return (neuron0x2075fb0()*2.56889);
}

double NNfunction_sb_uRdR::synapse0x20697b0() {
   return (neuron0x2066e30()*1.88281);
}

double NNfunction_sb_uRdR::synapse0x206a140() {
   return (neuron0x2067800()*-2.68775);
}

double NNfunction_sb_uRdR::synapse0x206a180() {
   return (neuron0x20681d0()*-2.02058);
}

double NNfunction_sb_uRdR::synapse0x206ab10() {
   return (neuron0x207a810()*-2.63051);
}

double NNfunction_sb_uRdR::synapse0x206ab50() {
   return (neuron0x207b0c0()*0.944815);
}

double NNfunction_sb_uRdR::synapse0x206b4e0() {
   return (neuron0x207ba90()*-1.26993);
}

double NNfunction_sb_uRdR::synapse0x206b520() {
   return (neuron0x207c460()*-0.991066);
}

double NNfunction_sb_uRdR::synapse0x206dc20() {
   return (neuron0x20583e0()*0.519037);
}

double NNfunction_sb_uRdR::synapse0x206dc60() {
   return (neuron0x2058d30()*-0.284187);
}

double NNfunction_sb_uRdR::synapse0x20631e0() {
   return (neuron0x2059810()*-0.79771);
}

double NNfunction_sb_uRdR::synapse0x2063220() {
   return (neuron0x20592b0()*-0.0498938);
}

double NNfunction_sb_uRdR::synapse0x2070800() {
   return (neuron0x205a5f0()*-0.225708);
}

double NNfunction_sb_uRdR::synapse0x2070840() {
   return (neuron0x205afc0()*-0.116528);
}

double NNfunction_sb_uRdR::synapse0x20711d0() {
   return (neuron0x205bd90()*0.114704);
}

double NNfunction_sb_uRdR::synapse0x2071210() {
   return (neuron0x205c760()*0.329125);
}

double NNfunction_sb_uRdR::synapse0x2071ba0() {
   return (neuron0x205d130()*-0.323265);
}

double NNfunction_sb_uRdR::synapse0x2071be0() {
   return (neuron0x205dc10()*-1.00905);
}

double NNfunction_sb_uRdR::synapse0x2072570() {
   return (neuron0x205e5e0()*0.12185);
}

double NNfunction_sb_uRdR::synapse0x20725b0() {
   return (neuron0x205b6c0()*-0.0687244);
}

double NNfunction_sb_uRdR::synapse0x2072f40() {
   return (neuron0x2060190()*3.01867);
}

double NNfunction_sb_uRdR::synapse0x2072f80() {
   return (neuron0x2060b60()*0.143792);
}

double NNfunction_sb_uRdR::synapse0x2073910() {
   return (neuron0x2061530()*-0.0389369);
}

double NNfunction_sb_uRdR::synapse0x2073950() {
   return (neuron0x2061f00()*0.129552);
}

double NNfunction_sb_uRdR::synapse0x20742e0() {
   return (neuron0x2063d10()*0.224293);
}

double NNfunction_sb_uRdR::synapse0x2074320() {
   return (neuron0x2063ff0()*-0.0798269);
}

double NNfunction_sb_uRdR::synapse0x2074cb0() {
   return (neuron0x20649c0()*0.156077);
}

double NNfunction_sb_uRdR::synapse0x2074cf0() {
   return (neuron0x2065390()*-0.226131);
}

double NNfunction_sb_uRdR::synapse0x2075890() {
   return (neuron0x2065d60()*-0.912823);
}

double NNfunction_sb_uRdR::synapse0x20758d0() {
   return (neuron0x2066730()*-0.50186);
}

double NNfunction_sb_uRdR::synapse0x2076260() {
   return (neuron0x205f280()*0.140634);
}

double NNfunction_sb_uRdR::synapse0x20762a0() {
   return (neuron0x205fc50()*0.176664);
}

double NNfunction_sb_uRdR::synapse0x20670e0() {
   return (neuron0x20694c0()*-0.539128);
}

double NNfunction_sb_uRdR::synapse0x2067120() {
   return (neuron0x2069e90()*-0.0894649);
}

double NNfunction_sb_uRdR::synapse0x2067ab0() {
   return (neuron0x206a860()*-0.146292);
}

double NNfunction_sb_uRdR::synapse0x2067af0() {
   return (neuron0x206b230()*-1.6953);
}

double NNfunction_sb_uRdR::synapse0x2068480() {
   return (neuron0x206bc00()*-0.16648);
}

double NNfunction_sb_uRdR::synapse0x20684c0() {
   return (neuron0x206c5d0()*-0.147253);
}

double NNfunction_sb_uRdR::synapse0x207a9a0() {
   return (neuron0x206cfa0()*-0.0945029);
}

double NNfunction_sb_uRdR::synapse0x207a9e0() {
   return (neuron0x206d970()*-0.0564328);
}

double NNfunction_sb_uRdR::synapse0x207b370() {
   return (neuron0x2063a00()*-0.0727231);
}

double NNfunction_sb_uRdR::synapse0x207b3b0() {
   return (neuron0x2070550()*-0.0787204);
}

double NNfunction_sb_uRdR::synapse0x207bd40() {
   return (neuron0x2070f20()*0.234079);
}

double NNfunction_sb_uRdR::synapse0x207bd80() {
   return (neuron0x20718f0()*-0.314263);
}

double NNfunction_sb_uRdR::synapse0x207c710() {
   return (neuron0x20722c0()*-0.0838868);
}

double NNfunction_sb_uRdR::synapse0x207c750() {
   return (neuron0x2072c90()*0.185844);
}

double NNfunction_sb_uRdR::synapse0x2058600() {
   return (neuron0x2073660()*0.0610968);
}

double NNfunction_sb_uRdR::synapse0x2058640() {
   return (neuron0x2074030()*-0.321604);
}

double NNfunction_sb_uRdR::synapse0x206beb0() {
   return (neuron0x2074a00()*-0.135964);
}

double NNfunction_sb_uRdR::synapse0x206bef0() {
   return (neuron0x20755e0()*-0.062276);
}

double NNfunction_sb_uRdR::synapse0x207ce30() {
   return (neuron0x2075fb0()*-1.38777);
}

double NNfunction_sb_uRdR::synapse0x207ce70() {
   return (neuron0x2066e30()*-0.168475);
}

double NNfunction_sb_uRdR::synapse0x207ceb0() {
   return (neuron0x2067800()*0.309502);
}

double NNfunction_sb_uRdR::synapse0x207cef0() {
   return (neuron0x20681d0()*0.285673);
}

double NNfunction_sb_uRdR::synapse0x2083da0() {
   return (neuron0x207a810()*0.192727);
}

double NNfunction_sb_uRdR::synapse0x2083de0() {
   return (neuron0x207b0c0()*-0.0433147);
}

double NNfunction_sb_uRdR::synapse0x2083e20() {
   return (neuron0x207ba90()*-2.19246);
}

double NNfunction_sb_uRdR::synapse0x2083e60() {
   return (neuron0x207c460()*0.682644);
}

double NNfunction_sb_uRdR::synapse0x20841e0() {
   return (neuron0x20583e0()*1.47991);
}

double NNfunction_sb_uRdR::synapse0x2084220() {
   return (neuron0x2058d30()*-0.444945);
}

double NNfunction_sb_uRdR::synapse0x2084260() {
   return (neuron0x2059810()*-0.177975);
}

double NNfunction_sb_uRdR::synapse0x20842a0() {
   return (neuron0x20592b0()*-0.00394577);
}

double NNfunction_sb_uRdR::synapse0x20842e0() {
   return (neuron0x205a5f0()*-0.123473);
}

double NNfunction_sb_uRdR::synapse0x2084320() {
   return (neuron0x205afc0()*-0.147637);
}

double NNfunction_sb_uRdR::synapse0x2084360() {
   return (neuron0x205bd90()*-0.329904);
}

double NNfunction_sb_uRdR::synapse0x20843a0() {
   return (neuron0x205c760()*0.236047);
}

double NNfunction_sb_uRdR::synapse0x20843e0() {
   return (neuron0x205d130()*1.2546);
}

double NNfunction_sb_uRdR::synapse0x2084420() {
   return (neuron0x205dc10()*0.681537);
}

double NNfunction_sb_uRdR::synapse0x2084460() {
   return (neuron0x205e5e0()*0.0864346);
}

double NNfunction_sb_uRdR::synapse0x20844a0() {
   return (neuron0x205b6c0()*-0.0371182);
}

double NNfunction_sb_uRdR::synapse0x20844e0() {
   return (neuron0x2060190()*0.0835099);
}

double NNfunction_sb_uRdR::synapse0x2084520() {
   return (neuron0x2060b60()*0.0799708);
}

double NNfunction_sb_uRdR::synapse0x2084560() {
   return (neuron0x2061530()*-0.723151);
}

double NNfunction_sb_uRdR::synapse0x20845a0() {
   return (neuron0x2061f00()*0.0747764);
}

double NNfunction_sb_uRdR::synapse0x2084030() {
   return (neuron0x2063d10()*0.386563);
}

double NNfunction_sb_uRdR::synapse0x2084070() {
   return (neuron0x2063ff0()*-0.0469548);
}

double NNfunction_sb_uRdR::synapse0x20846f0() {
   return (neuron0x20649c0()*0.0909643);
}

double NNfunction_sb_uRdR::synapse0x2084730() {
   return (neuron0x2065390()*-0.140032);
}

double NNfunction_sb_uRdR::synapse0x2084770() {
   return (neuron0x2065d60()*-0.571426);
}

double NNfunction_sb_uRdR::synapse0x20847b0() {
   return (neuron0x2066730()*-0.722088);
}

double NNfunction_sb_uRdR::synapse0x20847f0() {
   return (neuron0x205f280()*0.0983921);
}

double NNfunction_sb_uRdR::synapse0x2084830() {
   return (neuron0x205fc50()*-0.809348);
}

double NNfunction_sb_uRdR::synapse0x2084870() {
   return (neuron0x20694c0()*-0.00983989);
}

double NNfunction_sb_uRdR::synapse0x20848b0() {
   return (neuron0x2069e90()*-0.0659466);
}

double NNfunction_sb_uRdR::synapse0x20848f0() {
   return (neuron0x206a860()*-0.098118);
}

double NNfunction_sb_uRdR::synapse0x2084930() {
   return (neuron0x206b230()*0.172029);
}

double NNfunction_sb_uRdR::synapse0x2084970() {
   return (neuron0x206bc00()*-0.104531);
}

double NNfunction_sb_uRdR::synapse0x20849b0() {
   return (neuron0x206c5d0()*-0.0788698);
}

double NNfunction_sb_uRdR::synapse0x20849f0() {
   return (neuron0x206cfa0()*-0.0656248);
}

double NNfunction_sb_uRdR::synapse0x2084a30() {
   return (neuron0x206d970()*-0.0443137);
}

double NNfunction_sb_uRdR::synapse0x20845e0() {
   return (neuron0x2063a00()*-0.0383142);
}

double NNfunction_sb_uRdR::synapse0x2084620() {
   return (neuron0x2070550()*-0.0646613);
}

double NNfunction_sb_uRdR::synapse0x2084660() {
   return (neuron0x2070f20()*0.138973);
}

double NNfunction_sb_uRdR::synapse0x20846a0() {
   return (neuron0x20718f0()*0.378247);
}

double NNfunction_sb_uRdR::synapse0x2084c80() {
   return (neuron0x20722c0()*-0.0916244);
}

double NNfunction_sb_uRdR::synapse0x2084cc0() {
   return (neuron0x2072c90()*0.130785);
}

double NNfunction_sb_uRdR::synapse0x2084d00() {
   return (neuron0x2073660()*0.0838571);
}

double NNfunction_sb_uRdR::synapse0x2084d40() {
   return (neuron0x2074030()*-0.513814);
}

double NNfunction_sb_uRdR::synapse0x2084d80() {
   return (neuron0x2074a00()*-0.0706113);
}

double NNfunction_sb_uRdR::synapse0x2084dc0() {
   return (neuron0x20755e0()*-0.0511137);
}

double NNfunction_sb_uRdR::synapse0x2084e00() {
   return (neuron0x2075fb0()*0.489696);
}

double NNfunction_sb_uRdR::synapse0x2084e40() {
   return (neuron0x2066e30()*-0.100759);
}

double NNfunction_sb_uRdR::synapse0x2084e80() {
   return (neuron0x2067800()*0.15778);
}

double NNfunction_sb_uRdR::synapse0x2084ec0() {
   return (neuron0x20681d0()*-0.857785);
}

double NNfunction_sb_uRdR::synapse0x2084f00() {
   return (neuron0x207a810()*0.0954161);
}

double NNfunction_sb_uRdR::synapse0x2084f40() {
   return (neuron0x207b0c0()*-0.0409296);
}

double NNfunction_sb_uRdR::synapse0x2084f80() {
   return (neuron0x207ba90()*0.7178);
}

double NNfunction_sb_uRdR::synapse0x2084fc0() {
   return (neuron0x207c460()*-0.607374);
}

double NNfunction_sb_uRdR::synapse0x2085340() {
   return (neuron0x20583e0()*1.19579);
}

double NNfunction_sb_uRdR::synapse0x2085380() {
   return (neuron0x2058d30()*-0.0924571);
}

double NNfunction_sb_uRdR::synapse0x20853c0() {
   return (neuron0x2059810()*-0.39179);
}

double NNfunction_sb_uRdR::synapse0x2085400() {
   return (neuron0x20592b0()*0.00671803);
}

double NNfunction_sb_uRdR::synapse0x2085440() {
   return (neuron0x205a5f0()*0.238789);
}

double NNfunction_sb_uRdR::synapse0x2085480() {
   return (neuron0x205afc0()*0.246646);
}

double NNfunction_sb_uRdR::synapse0x20854c0() {
   return (neuron0x205bd90()*-0.666452);
}

double NNfunction_sb_uRdR::synapse0x2085500() {
   return (neuron0x205c760()*-0.591752);
}

double NNfunction_sb_uRdR::synapse0x2085540() {
   return (neuron0x205d130()*1.49363);
}

double NNfunction_sb_uRdR::synapse0x2085580() {
   return (neuron0x205dc10()*-1.30275);
}

double NNfunction_sb_uRdR::synapse0x20855c0() {
   return (neuron0x205e5e0()*-0.110029);
}

double NNfunction_sb_uRdR::synapse0x2085600() {
   return (neuron0x205b6c0()*0.0355149);
}

double NNfunction_sb_uRdR::synapse0x2085640() {
   return (neuron0x2060190()*-0.244354);
}

double NNfunction_sb_uRdR::synapse0x2085680() {
   return (neuron0x2060b60()*-0.148475);
}

double NNfunction_sb_uRdR::synapse0x20856c0() {
   return (neuron0x2061530()*-0.514798);
}

double NNfunction_sb_uRdR::synapse0x2085700() {
   return (neuron0x2061f00()*-0.124485);
}

double NNfunction_sb_uRdR::synapse0x2085190() {
   return (neuron0x2063d10()*0.484674);
}

double NNfunction_sb_uRdR::synapse0x20851d0() {
   return (neuron0x2063ff0()*0.0820503);
}

double NNfunction_sb_uRdR::synapse0x2085850() {
   return (neuron0x20649c0()*-0.153818);
}

double NNfunction_sb_uRdR::synapse0x2085890() {
   return (neuron0x2065390()*0.195786);
}

double NNfunction_sb_uRdR::synapse0x20858d0() {
   return (neuron0x2065d60()*1.03001);
}

double NNfunction_sb_uRdR::synapse0x2085910() {
   return (neuron0x2066730()*-1.32224);
}

double NNfunction_sb_uRdR::synapse0x2085950() {
   return (neuron0x205f280()*-0.143295);
}

double NNfunction_sb_uRdR::synapse0x2085990() {
   return (neuron0x205fc50()*0.958633);
}

double NNfunction_sb_uRdR::synapse0x20859d0() {
   return (neuron0x20694c0()*0.278881);
}

double NNfunction_sb_uRdR::synapse0x2085a10() {
   return (neuron0x2069e90()*0.0758147);
}

double NNfunction_sb_uRdR::synapse0x2085a50() {
   return (neuron0x206a860()*0.158774);
}

double NNfunction_sb_uRdR::synapse0x2085a90() {
   return (neuron0x206b230()*-0.0430889);
}

double NNfunction_sb_uRdR::synapse0x2085ad0() {
   return (neuron0x206bc00()*0.175408);
}

double NNfunction_sb_uRdR::synapse0x2085b10() {
   return (neuron0x206c5d0()*0.168712);
}

double NNfunction_sb_uRdR::synapse0x2085b50() {
   return (neuron0x206cfa0()*0.0889146);
}

double NNfunction_sb_uRdR::synapse0x2085b90() {
   return (neuron0x206d970()*-0.0237453);
}

double NNfunction_sb_uRdR::synapse0x2085740() {
   return (neuron0x2063a00()*0.0402277);
}

double NNfunction_sb_uRdR::synapse0x2085780() {
   return (neuron0x2070550()*0.0472655);
}

double NNfunction_sb_uRdR::synapse0x20857c0() {
   return (neuron0x2070f20()*-0.275993);
}

double NNfunction_sb_uRdR::synapse0x2085800() {
   return (neuron0x20718f0()*0.183543);
}

double NNfunction_sb_uRdR::synapse0x2085de0() {
   return (neuron0x20722c0()*0.128171);
}

double NNfunction_sb_uRdR::synapse0x2085e20() {
   return (neuron0x2072c90()*-0.190903);
}

double NNfunction_sb_uRdR::synapse0x2085e60() {
   return (neuron0x2073660()*-0.051559);
}

double NNfunction_sb_uRdR::synapse0x2085ea0() {
   return (neuron0x2074030()*-0.124796);
}

double NNfunction_sb_uRdR::synapse0x2085ee0() {
   return (neuron0x2074a00()*0.15204);
}

double NNfunction_sb_uRdR::synapse0x2085f20() {
   return (neuron0x20755e0()*0.06122);
}

double NNfunction_sb_uRdR::synapse0x2085f60() {
   return (neuron0x2075fb0()*1.68215);
}

double NNfunction_sb_uRdR::synapse0x2085fa0() {
   return (neuron0x2066e30()*0.188566);
}

double NNfunction_sb_uRdR::synapse0x2085fe0() {
   return (neuron0x2067800()*-0.335884);
}

double NNfunction_sb_uRdR::synapse0x2086020() {
   return (neuron0x20681d0()*-1.27866);
}

double NNfunction_sb_uRdR::synapse0x2086060() {
   return (neuron0x207a810()*-0.175333);
}

double NNfunction_sb_uRdR::synapse0x20860a0() {
   return (neuron0x207b0c0()*0.0584312);
}

double NNfunction_sb_uRdR::synapse0x20860e0() {
   return (neuron0x207ba90()*-0.590709);
}

double NNfunction_sb_uRdR::synapse0x2086120() {
   return (neuron0x207c460()*-0.637664);
}

double NNfunction_sb_uRdR::synapse0x20864a0() {
   return (neuron0x20583e0()*-0.810269);
}

double NNfunction_sb_uRdR::synapse0x20864e0() {
   return (neuron0x2058d30()*-1.17744);
}

double NNfunction_sb_uRdR::synapse0x2086520() {
   return (neuron0x2059810()*0.671274);
}

double NNfunction_sb_uRdR::synapse0x2086560() {
   return (neuron0x20592b0()*0.018442);
}

double NNfunction_sb_uRdR::synapse0x20865a0() {
   return (neuron0x205a5f0()*0.0467138);
}

double NNfunction_sb_uRdR::synapse0x20865e0() {
   return (neuron0x205afc0()*0.0172859);
}

double NNfunction_sb_uRdR::synapse0x2086620() {
   return (neuron0x205bd90()*-0.877971);
}

double NNfunction_sb_uRdR::synapse0x2086660() {
   return (neuron0x205c760()*0.203528);
}

double NNfunction_sb_uRdR::synapse0x20866a0() {
   return (neuron0x205d130()*-0.174139);
}

double NNfunction_sb_uRdR::synapse0x20866e0() {
   return (neuron0x205dc10()*0.694572);
}

double NNfunction_sb_uRdR::synapse0x2086720() {
   return (neuron0x205e5e0()*-0.0479332);
}

double NNfunction_sb_uRdR::synapse0x2086760() {
   return (neuron0x205b6c0()*0.0371244);
}

double NNfunction_sb_uRdR::synapse0x20867a0() {
   return (neuron0x2060190()*0.577677);
}

double NNfunction_sb_uRdR::synapse0x20867e0() {
   return (neuron0x2060b60()*-0.0451063);
}

double NNfunction_sb_uRdR::synapse0x2086820() {
   return (neuron0x2061530()*-1.38048);
}

double NNfunction_sb_uRdR::synapse0x2086860() {
   return (neuron0x2061f00()*-0.0261367);
}

double NNfunction_sb_uRdR::synapse0x20862f0() {
   return (neuron0x2063d10()*-1.19179);
}

double NNfunction_sb_uRdR::synapse0x2086330() {
   return (neuron0x2063ff0()*0.00361363);
}

double NNfunction_sb_uRdR::synapse0x20869b0() {
   return (neuron0x20649c0()*-0.0220601);
}

double NNfunction_sb_uRdR::synapse0x20869f0() {
   return (neuron0x2065390()*0.0713898);
}

double NNfunction_sb_uRdR::synapse0x2086a30() {
   return (neuron0x2065d60()*0.443628);
}

double NNfunction_sb_uRdR::synapse0x2086a70() {
   return (neuron0x2066730()*0.698895);
}

double NNfunction_sb_uRdR::synapse0x2086ab0() {
   return (neuron0x205f280()*-0.0514674);
}

double NNfunction_sb_uRdR::synapse0x2086af0() {
   return (neuron0x205fc50()*-1.42626);
}

double NNfunction_sb_uRdR::synapse0x2086b30() {
   return (neuron0x20694c0()*0.1615);
}

double NNfunction_sb_uRdR::synapse0x2086b70() {
   return (neuron0x2069e90()*0.0277909);
}

double NNfunction_sb_uRdR::synapse0x2086bb0() {
   return (neuron0x206a860()*0.0703799);
}

double NNfunction_sb_uRdR::synapse0x2086bf0() {
   return (neuron0x206b230()*1.06133);
}

double NNfunction_sb_uRdR::synapse0x2086c30() {
   return (neuron0x206bc00()*0.060596);
}

double NNfunction_sb_uRdR::synapse0x2086c70() {
   return (neuron0x206c5d0()*0.0235509);
}

double NNfunction_sb_uRdR::synapse0x2086cb0() {
   return (neuron0x206cfa0()*0.0526585);
}

double NNfunction_sb_uRdR::synapse0x2086cf0() {
   return (neuron0x206d970()*0.0706753);
}

double NNfunction_sb_uRdR::synapse0x20868a0() {
   return (neuron0x2063a00()*0.0424277);
}

double NNfunction_sb_uRdR::synapse0x20868e0() {
   return (neuron0x2070550()*0.0771414);
}

double NNfunction_sb_uRdR::synapse0x2086920() {
   return (neuron0x2070f20()*-0.0300478);
}

double NNfunction_sb_uRdR::synapse0x2086960() {
   return (neuron0x20718f0()*0.012579);
}

double NNfunction_sb_uRdR::synapse0x2086f40() {
   return (neuron0x20722c0()*0.0212322);
}

double NNfunction_sb_uRdR::synapse0x2086f80() {
   return (neuron0x2072c90()*-0.0724886);
}

double NNfunction_sb_uRdR::synapse0x2086fc0() {
   return (neuron0x2073660()*-0.0590542);
}

double NNfunction_sb_uRdR::synapse0x2087000() {
   return (neuron0x2074030()*-0.749535);
}

double NNfunction_sb_uRdR::synapse0x2087040() {
   return (neuron0x2074a00()*-0.0152773);
}

double NNfunction_sb_uRdR::synapse0x2087080() {
   return (neuron0x20755e0()*0.0193246);
}

double NNfunction_sb_uRdR::synapse0x20870c0() {
   return (neuron0x2075fb0()*-0.624036);
}

double NNfunction_sb_uRdR::synapse0x2087100() {
   return (neuron0x2066e30()*0.00362562);
}

double NNfunction_sb_uRdR::synapse0x2087140() {
   return (neuron0x2067800()*-0.191384);
}

double NNfunction_sb_uRdR::synapse0x2087180() {
   return (neuron0x20681d0()*0.188253);
}

double NNfunction_sb_uRdR::synapse0x20871c0() {
   return (neuron0x207a810()*-0.0477395);
}

double NNfunction_sb_uRdR::synapse0x2087200() {
   return (neuron0x207b0c0()*-0.038881);
}

double NNfunction_sb_uRdR::synapse0x2087240() {
   return (neuron0x207ba90()*0.53383);
}

double NNfunction_sb_uRdR::synapse0x2087280() {
   return (neuron0x207c460()*-1.25882);
}

double NNfunction_sb_uRdR::synapse0x20874e0() {
   return (neuron0x2083660()*-6.37568);
}

double NNfunction_sb_uRdR::synapse0x2087520() {
   return (neuron0x2083a00()*-3.89297);
}

double NNfunction_sb_uRdR::synapse0x2087560() {
   return (neuron0x2083ea0()*-4.81087);
}

double NNfunction_sb_uRdR::synapse0x20875a0() {
   return (neuron0x2085000()*-3.91749);
}

double NNfunction_sb_uRdR::synapse0x20875e0() {
   return (neuron0x2086160()*-3.92797);
}

