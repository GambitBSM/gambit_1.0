#include "NNfunction_sb_dLdL.h"
#include <cmath>

double NNfunction_sb_dLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9525)/15.058;
   input1 = (in1 - 56.4633)/734.458;
   input2 = (in2 - 376.417)/466.931;
   input3 = (in3 - 295.116)/626.344;
   input4 = (in4 - 763.524)/681.856;
   input5 = (in5 - 669.194)/658.936;
   input6 = (in6 - 676.131)/664.805;
   input7 = (in7 - 667.847)/657.128;
   input8 = (in8 - 669.572)/690.206;
   input9 = (in9 - 657.411)/671.182;
   input10 = (in10 - 662.489)/694.445;
   input11 = (in11 - 562.109)/328.336;
   input12 = (in12 - 724.007)/588.496;
   input13 = (in13 - 561.755)/371.014;
   input14 = (in14 - 711.993)/550.949;
   input15 = (in15 - 714.239)/552.35;
   input16 = (in16 - 499.767)/385.071;
   input17 = (in17 - 732.17)/607.502;
   input18 = (in18 - 725.863)/602.978;
   input19 = (in19 - 724.962)/592.868;
   input20 = (in20 - -228.754)/421.838;
   input21 = (in21 - -296.088)/899.59;
   input22 = (in22 - 0.286256)/895.601;
   input23 = (in23 - -0.154774)/506.919;
   switch(index) {
     case 0:
         return neuron0x1d340c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.9525)/15.058;
   input1 = (input[1] - 56.4633)/734.458;
   input2 = (input[2] - 376.417)/466.931;
   input3 = (input[3] - 295.116)/626.344;
   input4 = (input[4] - 763.524)/681.856;
   input5 = (input[5] - 669.194)/658.936;
   input6 = (input[6] - 676.131)/664.805;
   input7 = (input[7] - 667.847)/657.128;
   input8 = (input[8] - 669.572)/690.206;
   input9 = (input[9] - 657.411)/671.182;
   input10 = (input[10] - 662.489)/694.445;
   input11 = (input[11] - 562.109)/328.336;
   input12 = (input[12] - 724.007)/588.496;
   input13 = (input[13] - 561.755)/371.014;
   input14 = (input[14] - 711.993)/550.949;
   input15 = (input[15] - 714.239)/552.35;
   input16 = (input[16] - 499.767)/385.071;
   input17 = (input[17] - 732.17)/607.502;
   input18 = (input[18] - 725.863)/602.978;
   input19 = (input[19] - 724.962)/592.868;
   input20 = (input[20] - -228.754)/421.838;
   input21 = (input[21] - -296.088)/899.59;
   input22 = (input[22] - 0.286256)/895.601;
   input23 = (input[23] - -0.154774)/506.919;
   switch(index) {
     case 0:
         return neuron0x1d340c0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdL::neuron0x1d00240() {
   return input0;
}

double NNfunction_sb_dLdL::neuron0x1d004f0() {
   return input1;
}

double NNfunction_sb_dLdL::neuron0x1d00830() {
   return input2;
}

double NNfunction_sb_dLdL::neuron0x1d00b70() {
   return input3;
}

double NNfunction_sb_dLdL::neuron0x1d00eb0() {
   return input4;
}

double NNfunction_sb_dLdL::neuron0x1d011f0() {
   return input5;
}

double NNfunction_sb_dLdL::neuron0x1d01530() {
   return input6;
}

double NNfunction_sb_dLdL::neuron0x1d01870() {
   return input7;
}

double NNfunction_sb_dLdL::neuron0x1d01bb0() {
   return input8;
}

double NNfunction_sb_dLdL::neuron0x1d01ef0() {
   return input9;
}

double NNfunction_sb_dLdL::neuron0x1d02230() {
   return input10;
}

double NNfunction_sb_dLdL::neuron0x1d02570() {
   return input11;
}

double NNfunction_sb_dLdL::neuron0x1d028b0() {
   return input12;
}

double NNfunction_sb_dLdL::neuron0x1d02bf0() {
   return input13;
}

double NNfunction_sb_dLdL::neuron0x1d02f30() {
   return input14;
}

double NNfunction_sb_dLdL::neuron0x1d03270() {
   return input15;
}

double NNfunction_sb_dLdL::neuron0x1d035b0() {
   return input16;
}

double NNfunction_sb_dLdL::neuron0x1d03b10() {
   return input17;
}

double NNfunction_sb_dLdL::neuron0x1d03d30() {
   return input18;
}

double NNfunction_sb_dLdL::neuron0x1d04070() {
   return input19;
}

double NNfunction_sb_dLdL::neuron0x1d043b0() {
   return input20;
}

double NNfunction_sb_dLdL::neuron0x1d046f0() {
   return input21;
}

double NNfunction_sb_dLdL::neuron0x1d04a30() {
   return input22;
}

double NNfunction_sb_dLdL::neuron0x1d04d70() {
   return input23;
}

double NNfunction_sb_dLdL::input0x1d051e0() {
   double input = 0.622976;
   input += synapse0x1d001c0();
   input += synapse0x1d00200();
   input += synapse0x1d05490();
   input += synapse0x1d054d0();
   input += synapse0x1d05510();
   input += synapse0x1d05550();
   input += synapse0x1d05590();
   input += synapse0x1d055d0();
   input += synapse0x1d05610();
   input += synapse0x1d05650();
   input += synapse0x1d05690();
   input += synapse0x1d056d0();
   input += synapse0x1d05710();
   input += synapse0x1d05750();
   input += synapse0x1d05790();
   input += synapse0x1d057d0();
   input += synapse0x1d00130();
   input += synapse0x1d00170();
   input += synapse0x1abb390();
   input += synapse0x1abb3d0();
   input += synapse0x1d05a30();
   input += synapse0x1d05a70();
   input += synapse0x1d05ab0();
   input += synapse0x1d05af0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d051e0() {
   double input = input0x1d051e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d05b30() {
   double input = 2.80679;
   input += synapse0x1d05e70();
   input += synapse0x1d05eb0();
   input += synapse0x1d05ef0();
   input += synapse0x1d05f30();
   input += synapse0x1d05f70();
   input += synapse0x1d05fb0();
   input += synapse0x1d05ff0();
   input += synapse0x1d06030();
   input += synapse0x1d06070();
   input += synapse0x1d05920();
   input += synapse0x1d05960();
   input += synapse0x1d059a0();
   input += synapse0x1d059e0();
   input += synapse0x1d062c0();
   input += synapse0x1d06300();
   input += synapse0x1d06340();
   input += synapse0x1d05cc0();
   input += synapse0x1d05d00();
   input += synapse0x1d06490();
   input += synapse0x1d064d0();
   input += synapse0x1d06510();
   input += synapse0x1d06550();
   input += synapse0x1d06590();
   input += synapse0x1d065d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d05b30() {
   double input = input0x1d05b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d06610() {
   double input = 0.849698;
   input += synapse0x1d06950();
   input += synapse0x1d06990();
   input += synapse0x1d069d0();
   input += synapse0x1d06a10();
   input += synapse0x1d06a50();
   input += synapse0x1d06a90();
   input += synapse0x1d06ad0();
   input += synapse0x1d06b10();
   input += synapse0x1d06b50();
   input += synapse0x1d06b90();
   input += synapse0x1d06bd0();
   input += synapse0x1d06c10();
   input += synapse0x1d06c50();
   input += synapse0x1d06c90();
   input += synapse0x1d06cd0();
   input += synapse0x1d06d10();
   input += synapse0x1d067a0();
   input += synapse0x1d067e0();
   input += synapse0x1aba4e0();
   input += synapse0x1cef2b0();
   input += synapse0x1ac9210();
   input += synapse0x1ac9250();
   input += synapse0x1be4750();
   input += synapse0x1be4790();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d06610() {
   double input = input0x1d06610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d060b0() {
   double input = 0.489741;
   input += synapse0x1ac9a90();
   input += synapse0x1d00030();
   input += synapse0x1d06240();
   input += synapse0x1d06280();
   input += synapse0x1d06e60();
   input += synapse0x1d06ea0();
   input += synapse0x1d06ee0();
   input += synapse0x1d06f20();
   input += synapse0x1d06f60();
   input += synapse0x1d06fa0();
   input += synapse0x1d06fe0();
   input += synapse0x1d07020();
   input += synapse0x1d07060();
   input += synapse0x1d070a0();
   input += synapse0x1d070e0();
   input += synapse0x1d07120();
   input += synapse0x1cfffa0();
   input += synapse0x1cfffe0();
   input += synapse0x1d07270();
   input += synapse0x1d072b0();
   input += synapse0x1d072f0();
   input += synapse0x1d07330();
   input += synapse0x1d07370();
   input += synapse0x1d073b0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d060b0() {
   double input = input0x1d060b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d073f0() {
   double input = 0.216806;
   input += synapse0x1d07730();
   input += synapse0x1d07770();
   input += synapse0x1d077b0();
   input += synapse0x1d077f0();
   input += synapse0x1d07830();
   input += synapse0x1d07870();
   input += synapse0x1d078b0();
   input += synapse0x1d078f0();
   input += synapse0x1d07930();
   input += synapse0x1d07970();
   input += synapse0x1d079b0();
   input += synapse0x1d079f0();
   input += synapse0x1d07a30();
   input += synapse0x1d07a70();
   input += synapse0x1d07ab0();
   input += synapse0x1d07af0();
   input += synapse0x1d07580();
   input += synapse0x1d075c0();
   input += synapse0x1d07c40();
   input += synapse0x1d07c80();
   input += synapse0x1d07cc0();
   input += synapse0x1d07d00();
   input += synapse0x1d07d40();
   input += synapse0x1d07d80();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d073f0() {
   double input = input0x1d073f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d07dc0() {
   double input = 1.38195;
   input += synapse0x1d08100();
   input += synapse0x1d08140();
   input += synapse0x1d08180();
   input += synapse0x1d081c0();
   input += synapse0x1d08200();
   input += synapse0x1d08240();
   input += synapse0x1d08280();
   input += synapse0x1d082c0();
   input += synapse0x1d08300();
   input += synapse0x1ac9560();
   input += synapse0x1ac95a0();
   input += synapse0x1ac95e0();
   input += synapse0x1ac9620();
   input += synapse0x1ac9660();
   input += synapse0x1ac96a0();
   input += synapse0x1ac96e0();
   input += synapse0x1d07f50();
   input += synapse0x1d07f90();
   input += synapse0x1ac9830();
   input += synapse0x1ac9870();
   input += synapse0x1ac98b0();
   input += synapse0x1ac98f0();
   input += synapse0x1ac9930();
   input += synapse0x1d08b50();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d07dc0() {
   double input = input0x1d07dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d08b90() {
   double input = 0.737121;
   input += synapse0x1d08ed0();
   input += synapse0x1d08f10();
   input += synapse0x1d08f50();
   input += synapse0x1d08f90();
   input += synapse0x1d08fd0();
   input += synapse0x1d09010();
   input += synapse0x1d09050();
   input += synapse0x1d09090();
   input += synapse0x1d090d0();
   input += synapse0x1d09110();
   input += synapse0x1d09150();
   input += synapse0x1d09190();
   input += synapse0x1d091d0();
   input += synapse0x1d09210();
   input += synapse0x1d09250();
   input += synapse0x1d09290();
   input += synapse0x1d08d20();
   input += synapse0x1d08d60();
   input += synapse0x1d093e0();
   input += synapse0x1d09420();
   input += synapse0x1d09460();
   input += synapse0x1d094a0();
   input += synapse0x1d094e0();
   input += synapse0x1d09520();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d08b90() {
   double input = input0x1d08b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d09560() {
   double input = 1.00163;
   input += synapse0x1d098a0();
   input += synapse0x1d098e0();
   input += synapse0x1d09920();
   input += synapse0x1d09960();
   input += synapse0x1d099a0();
   input += synapse0x1d099e0();
   input += synapse0x1d09a20();
   input += synapse0x1d09a60();
   input += synapse0x1d09aa0();
   input += synapse0x1d09ae0();
   input += synapse0x1d09b20();
   input += synapse0x1d09b60();
   input += synapse0x1d09ba0();
   input += synapse0x1d09be0();
   input += synapse0x1d09c20();
   input += synapse0x1d09c60();
   input += synapse0x1d096f0();
   input += synapse0x1d09730();
   input += synapse0x1d09db0();
   input += synapse0x1d09df0();
   input += synapse0x1d09e30();
   input += synapse0x1d09e70();
   input += synapse0x1d09eb0();
   input += synapse0x1d09ef0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d09560() {
   double input = input0x1d09560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d09f30() {
   double input = -0.917616;
   input += synapse0x1d03a00();
   input += synapse0x1d03a40();
   input += synapse0x1d03a80();
   input += synapse0x1d03ac0();
   input += synapse0x1d0a480();
   input += synapse0x1d0a4c0();
   input += synapse0x1d0a500();
   input += synapse0x1d0a540();
   input += synapse0x1d0a580();
   input += synapse0x1d0a5c0();
   input += synapse0x1d0a600();
   input += synapse0x1d0a640();
   input += synapse0x1d0a680();
   input += synapse0x1d0a6c0();
   input += synapse0x1d0a700();
   input += synapse0x1d0a740();
   input += synapse0x1d0a0c0();
   input += synapse0x1d0a100();
   input += synapse0x1d0a890();
   input += synapse0x1d0a8d0();
   input += synapse0x1d0a910();
   input += synapse0x1d0a950();
   input += synapse0x1d0a990();
   input += synapse0x1d0a9d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d09f30() {
   double input = input0x1d09f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0aa10() {
   double input = 1.31906;
   input += synapse0x1d0ad50();
   input += synapse0x1d0ad90();
   input += synapse0x1d0add0();
   input += synapse0x1d0ae10();
   input += synapse0x1d0ae50();
   input += synapse0x1d0ae90();
   input += synapse0x1d0aed0();
   input += synapse0x1d0af10();
   input += synapse0x1d0af50();
   input += synapse0x1d0af90();
   input += synapse0x1d0afd0();
   input += synapse0x1d0b010();
   input += synapse0x1d0b050();
   input += synapse0x1d0b090();
   input += synapse0x1d0b0d0();
   input += synapse0x1d0b110();
   input += synapse0x1d0aba0();
   input += synapse0x1d0abe0();
   input += synapse0x1d0b260();
   input += synapse0x1d0b2a0();
   input += synapse0x1d0b2e0();
   input += synapse0x1d0b320();
   input += synapse0x1d0b360();
   input += synapse0x1d0b3a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0aa10() {
   double input = input0x1d0aa10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0b3e0() {
   double input = 0.283895;
   input += synapse0x1d0b720();
   input += synapse0x1d0b760();
   input += synapse0x1d0b7a0();
   input += synapse0x1d0b7e0();
   input += synapse0x1d0b820();
   input += synapse0x1d0b860();
   input += synapse0x1d0b8a0();
   input += synapse0x1d0b8e0();
   input += synapse0x1d0b920();
   input += synapse0x1d0b960();
   input += synapse0x1d0b9a0();
   input += synapse0x1d0b9e0();
   input += synapse0x1d0ba20();
   input += synapse0x1d0ba60();
   input += synapse0x1d0baa0();
   input += synapse0x1d0bae0();
   input += synapse0x1d0b570();
   input += synapse0x1d0b5b0();
   input += synapse0x1d08340();
   input += synapse0x1d08380();
   input += synapse0x1d083c0();
   input += synapse0x1d08400();
   input += synapse0x1d08440();
   input += synapse0x1d08480();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0b3e0() {
   double input = input0x1d0b3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d084c0() {
   double input = -4.18455;
   input += synapse0x1d08800();
   input += synapse0x1d08840();
   input += synapse0x1d08880();
   input += synapse0x1d088c0();
   input += synapse0x1d08900();
   input += synapse0x1d08940();
   input += synapse0x1d08980();
   input += synapse0x1d089c0();
   input += synapse0x1d08a00();
   input += synapse0x1d08a40();
   input += synapse0x1d08a80();
   input += synapse0x1d08ac0();
   input += synapse0x1d08b00();
   input += synapse0x1d0cc40();
   input += synapse0x1d0cc80();
   input += synapse0x1d0ccc0();
   input += synapse0x1d08650();
   input += synapse0x1d08690();
   input += synapse0x1d0ce10();
   input += synapse0x1d0ce50();
   input += synapse0x1d0ce90();
   input += synapse0x1d0ced0();
   input += synapse0x1d0cf10();
   input += synapse0x1d0cf50();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d084c0() {
   double input = input0x1d084c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0cf90() {
   double input = -0.379335;
   input += synapse0x1d0d2d0();
   input += synapse0x1d0d310();
   input += synapse0x1d0d350();
   input += synapse0x1d0d390();
   input += synapse0x1d0d3d0();
   input += synapse0x1d0d410();
   input += synapse0x1d0d450();
   input += synapse0x1d0d490();
   input += synapse0x1d0d4d0();
   input += synapse0x1d0d510();
   input += synapse0x1d0d550();
   input += synapse0x1d0d590();
   input += synapse0x1d0d5d0();
   input += synapse0x1d0d610();
   input += synapse0x1d0d650();
   input += synapse0x1d0d690();
   input += synapse0x1d0d120();
   input += synapse0x1d0d160();
   input += synapse0x1d0d7e0();
   input += synapse0x1d0d820();
   input += synapse0x1d0d860();
   input += synapse0x1d0d8a0();
   input += synapse0x1d0d8e0();
   input += synapse0x1d0d920();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0cf90() {
   double input = input0x1d0cf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0d960() {
   double input = 1.39945;
   input += synapse0x1d0dca0();
   input += synapse0x1d0dce0();
   input += synapse0x1d0dd20();
   input += synapse0x1d0dd60();
   input += synapse0x1d0dda0();
   input += synapse0x1d0dde0();
   input += synapse0x1d0de20();
   input += synapse0x1d0de60();
   input += synapse0x1d0dea0();
   input += synapse0x1d0dee0();
   input += synapse0x1d0df20();
   input += synapse0x1d0df60();
   input += synapse0x1d0dfa0();
   input += synapse0x1d0dfe0();
   input += synapse0x1d0e020();
   input += synapse0x1d0e060();
   input += synapse0x1d0daf0();
   input += synapse0x1d0db30();
   input += synapse0x1d0e1b0();
   input += synapse0x1d0e1f0();
   input += synapse0x1d0e230();
   input += synapse0x1d0e270();
   input += synapse0x1d0e2b0();
   input += synapse0x1d0e2f0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0d960() {
   double input = input0x1d0d960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0e330() {
   double input = 1.15455;
   input += synapse0x1d0e670();
   input += synapse0x1d0e6b0();
   input += synapse0x1d0e6f0();
   input += synapse0x1d0e730();
   input += synapse0x1d0e770();
   input += synapse0x1d0e7b0();
   input += synapse0x1d0e7f0();
   input += synapse0x1d0e830();
   input += synapse0x1d0e870();
   input += synapse0x1d0e8b0();
   input += synapse0x1d0e8f0();
   input += synapse0x1d0e930();
   input += synapse0x1d0e970();
   input += synapse0x1d0e9b0();
   input += synapse0x1d0e9f0();
   input += synapse0x1d0ea30();
   input += synapse0x1d0e4c0();
   input += synapse0x1d0e500();
   input += synapse0x1d0eb80();
   input += synapse0x1d0ebc0();
   input += synapse0x1d0ec00();
   input += synapse0x1d0ec40();
   input += synapse0x1d0ec80();
   input += synapse0x1d0ecc0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0e330() {
   double input = input0x1d0e330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0ed00() {
   double input = -0.0577598;
   input += synapse0x1d0f040();
   input += synapse0x1d003d0();
   input += synapse0x1d00410();
   input += synapse0x1d00710();
   input += synapse0x1d00750();
   input += synapse0x1d00a50();
   input += synapse0x1d00a90();
   input += synapse0x1d00d90();
   input += synapse0x1d00dd0();
   input += synapse0x1d010d0();
   input += synapse0x1d01110();
   input += synapse0x1d01410();
   input += synapse0x1d01450();
   input += synapse0x1d01750();
   input += synapse0x1d01790();
   input += synapse0x1d01a90();
   input += synapse0x1d01ad0();
   input += synapse0x1d01dd0();
   input += synapse0x1d01e10();
   input += synapse0x1d02110();
   input += synapse0x1d02150();
   input += synapse0x1d02450();
   input += synapse0x1d02490();
   input += synapse0x1d02790();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0ed00() {
   double input = input0x1d0ed00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d10b10() {
   double input = 0.306265;
   input += synapse0x1d027d0();
   input += synapse0x1d03490();
   input += synapse0x1d034d0();
   input += synapse0x1d0ee90();
   input += synapse0x1d0eed0();
   input += synapse0x1d037d0();
   input += synapse0x1d03810();
   input += synapse0x1abb270();
   input += synapse0x1abb2b0();
   input += synapse0x1d03f50();
   input += synapse0x1d03f90();
   input += synapse0x1d04290();
   input += synapse0x1d042d0();
   input += synapse0x1d045d0();
   input += synapse0x1d04610();
   input += synapse0x1d04910();
   input += synapse0x1d04950();
   input += synapse0x1d04c50();
   input += synapse0x1d04c90();
   input += synapse0x1d04f90();
   input += synapse0x1d04fd0();
   input += synapse0x1d02ad0();
   input += synapse0x1d02b10();
   input += synapse0x1d10db0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d10b10() {
   double input = input0x1d10b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d10df0() {
   double input = 0.882129;
   input += synapse0x1d11130();
   input += synapse0x1d11170();
   input += synapse0x1d111b0();
   input += synapse0x1d111f0();
   input += synapse0x1d11230();
   input += synapse0x1d11270();
   input += synapse0x1d112b0();
   input += synapse0x1d112f0();
   input += synapse0x1d11330();
   input += synapse0x1d11370();
   input += synapse0x1d113b0();
   input += synapse0x1d113f0();
   input += synapse0x1d11430();
   input += synapse0x1d11470();
   input += synapse0x1d114b0();
   input += synapse0x1d114f0();
   input += synapse0x1d10f80();
   input += synapse0x1d10fc0();
   input += synapse0x1d11640();
   input += synapse0x1d11680();
   input += synapse0x1d116c0();
   input += synapse0x1d11700();
   input += synapse0x1d11740();
   input += synapse0x1d11780();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d10df0() {
   double input = input0x1d10df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d117c0() {
   double input = -0.212502;
   input += synapse0x1d11b00();
   input += synapse0x1d11b40();
   input += synapse0x1d11b80();
   input += synapse0x1d11bc0();
   input += synapse0x1d11c00();
   input += synapse0x1d11c40();
   input += synapse0x1d11c80();
   input += synapse0x1d11cc0();
   input += synapse0x1d11d00();
   input += synapse0x1d11d40();
   input += synapse0x1d11d80();
   input += synapse0x1d11dc0();
   input += synapse0x1d11e00();
   input += synapse0x1d11e40();
   input += synapse0x1d11e80();
   input += synapse0x1d11ec0();
   input += synapse0x1d11950();
   input += synapse0x1d11990();
   input += synapse0x1d12010();
   input += synapse0x1d12050();
   input += synapse0x1d12090();
   input += synapse0x1d120d0();
   input += synapse0x1d12110();
   input += synapse0x1d12150();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d117c0() {
   double input = input0x1d117c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d12190() {
   double input = 0.329772;
   input += synapse0x1d124d0();
   input += synapse0x1d12510();
   input += synapse0x1d12550();
   input += synapse0x1d12590();
   input += synapse0x1d125d0();
   input += synapse0x1d12610();
   input += synapse0x1d12650();
   input += synapse0x1d12690();
   input += synapse0x1d126d0();
   input += synapse0x1d12710();
   input += synapse0x1d12750();
   input += synapse0x1d12790();
   input += synapse0x1d127d0();
   input += synapse0x1d12810();
   input += synapse0x1d12850();
   input += synapse0x1d12890();
   input += synapse0x1d12320();
   input += synapse0x1d12360();
   input += synapse0x1d129e0();
   input += synapse0x1d12a20();
   input += synapse0x1d12a60();
   input += synapse0x1d12aa0();
   input += synapse0x1d12ae0();
   input += synapse0x1d12b20();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d12190() {
   double input = input0x1d12190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d12b60() {
   double input = -0.0399291;
   input += synapse0x1d12ea0();
   input += synapse0x1d12ee0();
   input += synapse0x1d12f20();
   input += synapse0x1d12f60();
   input += synapse0x1d12fa0();
   input += synapse0x1d12fe0();
   input += synapse0x1d13020();
   input += synapse0x1d13060();
   input += synapse0x1d130a0();
   input += synapse0x1d130e0();
   input += synapse0x1d13120();
   input += synapse0x1d13160();
   input += synapse0x1d131a0();
   input += synapse0x1d131e0();
   input += synapse0x1d13220();
   input += synapse0x1d13260();
   input += synapse0x1d12cf0();
   input += synapse0x1d12d30();
   input += synapse0x1d133b0();
   input += synapse0x1d133f0();
   input += synapse0x1d13430();
   input += synapse0x1d13470();
   input += synapse0x1d134b0();
   input += synapse0x1d134f0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d12b60() {
   double input = input0x1d12b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d13530() {
   double input = -1.86137;
   input += synapse0x1d13870();
   input += synapse0x1d138b0();
   input += synapse0x1d138f0();
   input += synapse0x1d13930();
   input += synapse0x1d13970();
   input += synapse0x1d139b0();
   input += synapse0x1d139f0();
   input += synapse0x1d13a30();
   input += synapse0x1d13a70();
   input += synapse0x1d0bc30();
   input += synapse0x1d0bc70();
   input += synapse0x1d0bcb0();
   input += synapse0x1d0bcf0();
   input += synapse0x1d0bd30();
   input += synapse0x1d0bd70();
   input += synapse0x1d0bdb0();
   input += synapse0x1d136c0();
   input += synapse0x1d13700();
   input += synapse0x1d0bf00();
   input += synapse0x1d0bf40();
   input += synapse0x1d0bf80();
   input += synapse0x1d0bfc0();
   input += synapse0x1d0c000();
   input += synapse0x1d0c040();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d13530() {
   double input = input0x1d13530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0c080() {
   double input = -0.704174;
   input += synapse0x1d0c3c0();
   input += synapse0x1d0c400();
   input += synapse0x1d0c440();
   input += synapse0x1d0c480();
   input += synapse0x1d0c4c0();
   input += synapse0x1d0c500();
   input += synapse0x1d0c540();
   input += synapse0x1d0c580();
   input += synapse0x1d0c5c0();
   input += synapse0x1d0c600();
   input += synapse0x1d0c640();
   input += synapse0x1d0c680();
   input += synapse0x1d0c6c0();
   input += synapse0x1d0c700();
   input += synapse0x1d0c740();
   input += synapse0x1d0c780();
   input += synapse0x1d0c210();
   input += synapse0x1d0c250();
   input += synapse0x1d0c8d0();
   input += synapse0x1d0c910();
   input += synapse0x1d0c950();
   input += synapse0x1d0c990();
   input += synapse0x1d0c9d0();
   input += synapse0x1d0ca10();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0c080() {
   double input = input0x1d0c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d0ca50() {
   double input = 1.48677;
   input += synapse0x1d0cbe0();
   input += synapse0x1d15c70();
   input += synapse0x1d15cb0();
   input += synapse0x1d15cf0();
   input += synapse0x1d15d30();
   input += synapse0x1d15d70();
   input += synapse0x1d15db0();
   input += synapse0x1d15df0();
   input += synapse0x1d15e30();
   input += synapse0x1d15e70();
   input += synapse0x1d15eb0();
   input += synapse0x1d15ef0();
   input += synapse0x1d15f30();
   input += synapse0x1d15f70();
   input += synapse0x1d15fb0();
   input += synapse0x1d15ff0();
   input += synapse0x1d15ac0();
   input += synapse0x1d15b00();
   input += synapse0x1d16140();
   input += synapse0x1d16180();
   input += synapse0x1d161c0();
   input += synapse0x1d16200();
   input += synapse0x1d16240();
   input += synapse0x1d16280();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d0ca50() {
   double input = input0x1d0ca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d162c0() {
   double input = 3.04349;
   input += synapse0x1d16600();
   input += synapse0x1d16640();
   input += synapse0x1d16680();
   input += synapse0x1d166c0();
   input += synapse0x1d16700();
   input += synapse0x1d16740();
   input += synapse0x1d16780();
   input += synapse0x1d167c0();
   input += synapse0x1d16800();
   input += synapse0x1d16840();
   input += synapse0x1d16880();
   input += synapse0x1d168c0();
   input += synapse0x1d16900();
   input += synapse0x1d16940();
   input += synapse0x1d16980();
   input += synapse0x1d169c0();
   input += synapse0x1d16450();
   input += synapse0x1d16490();
   input += synapse0x1d16b10();
   input += synapse0x1d16b50();
   input += synapse0x1d16b90();
   input += synapse0x1d16bd0();
   input += synapse0x1d16c10();
   input += synapse0x1d16c50();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d162c0() {
   double input = input0x1d162c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d16c90() {
   double input = 0.171119;
   input += synapse0x1d16fd0();
   input += synapse0x1d17010();
   input += synapse0x1d17050();
   input += synapse0x1d17090();
   input += synapse0x1d170d0();
   input += synapse0x1d17110();
   input += synapse0x1d17150();
   input += synapse0x1d17190();
   input += synapse0x1d171d0();
   input += synapse0x1d17210();
   input += synapse0x1d17250();
   input += synapse0x1d17290();
   input += synapse0x1d172d0();
   input += synapse0x1d17310();
   input += synapse0x1d17350();
   input += synapse0x1d17390();
   input += synapse0x1d16e20();
   input += synapse0x1d16e60();
   input += synapse0x1d174e0();
   input += synapse0x1d17520();
   input += synapse0x1d17560();
   input += synapse0x1d175a0();
   input += synapse0x1d175e0();
   input += synapse0x1d17620();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d16c90() {
   double input = input0x1d16c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d17660() {
   double input = 1.21744;
   input += synapse0x1d179a0();
   input += synapse0x1d179e0();
   input += synapse0x1d17a20();
   input += synapse0x1d17a60();
   input += synapse0x1d17aa0();
   input += synapse0x1d17ae0();
   input += synapse0x1d17b20();
   input += synapse0x1d17b60();
   input += synapse0x1d17ba0();
   input += synapse0x1d17be0();
   input += synapse0x1d17c20();
   input += synapse0x1d17c60();
   input += synapse0x1d17ca0();
   input += synapse0x1d17ce0();
   input += synapse0x1d17d20();
   input += synapse0x1d17d60();
   input += synapse0x1d177f0();
   input += synapse0x1d17830();
   input += synapse0x1d17eb0();
   input += synapse0x1d17ef0();
   input += synapse0x1d17f30();
   input += synapse0x1d17f70();
   input += synapse0x1d17fb0();
   input += synapse0x1d17ff0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d17660() {
   double input = input0x1d17660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d18030() {
   double input = -0.0440561;
   input += synapse0x1d18370();
   input += synapse0x1d183b0();
   input += synapse0x1d183f0();
   input += synapse0x1d18430();
   input += synapse0x1d18470();
   input += synapse0x1d184b0();
   input += synapse0x1d184f0();
   input += synapse0x1d18530();
   input += synapse0x1d18570();
   input += synapse0x1d185b0();
   input += synapse0x1d185f0();
   input += synapse0x1d18630();
   input += synapse0x1d18670();
   input += synapse0x1d186b0();
   input += synapse0x1d186f0();
   input += synapse0x1d18730();
   input += synapse0x1d181c0();
   input += synapse0x1d18200();
   input += synapse0x1d18880();
   input += synapse0x1d188c0();
   input += synapse0x1d18900();
   input += synapse0x1d18940();
   input += synapse0x1d18980();
   input += synapse0x1d189c0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d18030() {
   double input = input0x1d18030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d18a00() {
   double input = -0.681519;
   input += synapse0x1d18d40();
   input += synapse0x1d18d80();
   input += synapse0x1d18dc0();
   input += synapse0x1d18e00();
   input += synapse0x1d18e40();
   input += synapse0x1d18e80();
   input += synapse0x1d18ec0();
   input += synapse0x1d18f00();
   input += synapse0x1d18f40();
   input += synapse0x1d18f80();
   input += synapse0x1d18fc0();
   input += synapse0x1d19000();
   input += synapse0x1d19040();
   input += synapse0x1d19080();
   input += synapse0x1d190c0();
   input += synapse0x1d19100();
   input += synapse0x1d18b90();
   input += synapse0x1d18bd0();
   input += synapse0x1d19250();
   input += synapse0x1d19290();
   input += synapse0x1d192d0();
   input += synapse0x1d19310();
   input += synapse0x1d19350();
   input += synapse0x1d19390();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d18a00() {
   double input = input0x1d18a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d193d0() {
   double input = 1.56379;
   input += synapse0x1d19710();
   input += synapse0x1d19750();
   input += synapse0x1d19790();
   input += synapse0x1d197d0();
   input += synapse0x1d19810();
   input += synapse0x1d19850();
   input += synapse0x1d19890();
   input += synapse0x1d198d0();
   input += synapse0x1d19910();
   input += synapse0x1d19950();
   input += synapse0x1d19990();
   input += synapse0x1d199d0();
   input += synapse0x1d19a10();
   input += synapse0x1d19a50();
   input += synapse0x1d19a90();
   input += synapse0x1d19ad0();
   input += synapse0x1d19560();
   input += synapse0x1d195a0();
   input += synapse0x1d19c20();
   input += synapse0x1d19c60();
   input += synapse0x1d19ca0();
   input += synapse0x1d19ce0();
   input += synapse0x1d19d20();
   input += synapse0x1d19d60();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d193d0() {
   double input = input0x1d193d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d19da0() {
   double input = -0.473048;
   input += synapse0x1d1a0e0();
   input += synapse0x1d1a120();
   input += synapse0x1d1a160();
   input += synapse0x1d1a1a0();
   input += synapse0x1d1a1e0();
   input += synapse0x1d1a220();
   input += synapse0x1d1a260();
   input += synapse0x1d1a2a0();
   input += synapse0x1d1a2e0();
   input += synapse0x1d1a320();
   input += synapse0x1d1a360();
   input += synapse0x1d1a3a0();
   input += synapse0x1d1a3e0();
   input += synapse0x1d1a420();
   input += synapse0x1d1a460();
   input += synapse0x1d1a4a0();
   input += synapse0x1d19f30();
   input += synapse0x1d19f70();
   input += synapse0x1d1a5f0();
   input += synapse0x1d1a630();
   input += synapse0x1d1a670();
   input += synapse0x1d1a6b0();
   input += synapse0x1d1a6f0();
   input += synapse0x1d1a730();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d19da0() {
   double input = input0x1d19da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1a770() {
   double input = 0.0795319;
   input += synapse0x1d1aab0();
   input += synapse0x1d0f080();
   input += synapse0x1d0f0c0();
   input += synapse0x1d0f100();
   input += synapse0x1d0f350();
   input += synapse0x1d0f390();
   input += synapse0x1d0f3d0();
   input += synapse0x1d0f620();
   input += synapse0x1d0f660();
   input += synapse0x1d0f8b0();
   input += synapse0x1d0f8f0();
   input += synapse0x1d0f930();
   input += synapse0x1d0fb80();
   input += synapse0x1d0fbc0();
   input += synapse0x1d0fe10();
   input += synapse0x1d0fe50();
   input += synapse0x1d1a900();
   input += synapse0x1d1a940();
   input += synapse0x1d0ffa0();
   input += synapse0x1d104b0();
   input += synapse0x1d104f0();
   input += synapse0x1d10530();
   input += synapse0x1d10780();
   input += synapse0x1d107c0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1a770() {
   double input = input0x1d1a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d10800() {
   double input = 1.17699;
   input += synapse0x1d10070();
   input += synapse0x1d100b0();
   input += synapse0x1d100f0();
   input += synapse0x1d10130();
   input += synapse0x1d10ab0();
   input += synapse0x1d1ce00();
   input += synapse0x1d1ce40();
   input += synapse0x1d1ce80();
   input += synapse0x1d1cec0();
   input += synapse0x1d1cf00();
   input += synapse0x1d1cf40();
   input += synapse0x1d1cf80();
   input += synapse0x1d1cfc0();
   input += synapse0x1d1d000();
   input += synapse0x1d1d040();
   input += synapse0x1d1d080();
   input += synapse0x1d10990();
   input += synapse0x1d109d0();
   input += synapse0x1d1d1d0();
   input += synapse0x1d1d210();
   input += synapse0x1d1d250();
   input += synapse0x1d1d290();
   input += synapse0x1d1d2d0();
   input += synapse0x1d1d310();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d10800() {
   double input = input0x1d10800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1d350() {
   double input = 1.05728;
   input += synapse0x1d1d690();
   input += synapse0x1d1d6d0();
   input += synapse0x1d1d710();
   input += synapse0x1d1d750();
   input += synapse0x1d1d790();
   input += synapse0x1d1d7d0();
   input += synapse0x1d1d810();
   input += synapse0x1d1d850();
   input += synapse0x1d1d890();
   input += synapse0x1d1d8d0();
   input += synapse0x1d1d910();
   input += synapse0x1d1d950();
   input += synapse0x1d1d990();
   input += synapse0x1d1d9d0();
   input += synapse0x1d1da10();
   input += synapse0x1d1da50();
   input += synapse0x1d1d4e0();
   input += synapse0x1d1d520();
   input += synapse0x1d1dba0();
   input += synapse0x1d1dbe0();
   input += synapse0x1d1dc20();
   input += synapse0x1d1dc60();
   input += synapse0x1d1dca0();
   input += synapse0x1d1dce0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1d350() {
   double input = input0x1d1d350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1dd20() {
   double input = 0.763835;
   input += synapse0x1d1e060();
   input += synapse0x1d1e0a0();
   input += synapse0x1d1e0e0();
   input += synapse0x1d1e120();
   input += synapse0x1d1e160();
   input += synapse0x1d1e1a0();
   input += synapse0x1d1e1e0();
   input += synapse0x1d1e220();
   input += synapse0x1d1e260();
   input += synapse0x1d1e2a0();
   input += synapse0x1d1e2e0();
   input += synapse0x1d1e320();
   input += synapse0x1d1e360();
   input += synapse0x1d1e3a0();
   input += synapse0x1d1e3e0();
   input += synapse0x1d1e420();
   input += synapse0x1d1deb0();
   input += synapse0x1d1def0();
   input += synapse0x1d1e570();
   input += synapse0x1d1e5b0();
   input += synapse0x1d1e5f0();
   input += synapse0x1d1e630();
   input += synapse0x1d1e670();
   input += synapse0x1d1e6b0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1dd20() {
   double input = input0x1d1dd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1e6f0() {
   double input = -0.771834;
   input += synapse0x1d1ea30();
   input += synapse0x1d1ea70();
   input += synapse0x1d1eab0();
   input += synapse0x1d1eaf0();
   input += synapse0x1d1eb30();
   input += synapse0x1d1eb70();
   input += synapse0x1d1ebb0();
   input += synapse0x1d1ebf0();
   input += synapse0x1d1ec30();
   input += synapse0x1d1ec70();
   input += synapse0x1d1ecb0();
   input += synapse0x1d1ecf0();
   input += synapse0x1d1ed30();
   input += synapse0x1d1ed70();
   input += synapse0x1d1edb0();
   input += synapse0x1d1edf0();
   input += synapse0x1d1e880();
   input += synapse0x1d1e8c0();
   input += synapse0x1d1ef40();
   input += synapse0x1d1ef80();
   input += synapse0x1d1efc0();
   input += synapse0x1d1f000();
   input += synapse0x1d1f040();
   input += synapse0x1d1f080();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1e6f0() {
   double input = input0x1d1e6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1f0c0() {
   double input = -0.14978;
   input += synapse0x1d1f400();
   input += synapse0x1d1f440();
   input += synapse0x1d1f480();
   input += synapse0x1d1f4c0();
   input += synapse0x1d1f500();
   input += synapse0x1d1f540();
   input += synapse0x1d1f580();
   input += synapse0x1d1f5c0();
   input += synapse0x1d1f600();
   input += synapse0x1d1f640();
   input += synapse0x1d1f680();
   input += synapse0x1d1f6c0();
   input += synapse0x1d1f700();
   input += synapse0x1d1f740();
   input += synapse0x1d1f780();
   input += synapse0x1d1f7c0();
   input += synapse0x1d1f250();
   input += synapse0x1d1f290();
   input += synapse0x1d1f910();
   input += synapse0x1d1f950();
   input += synapse0x1d1f990();
   input += synapse0x1d1f9d0();
   input += synapse0x1d1fa10();
   input += synapse0x1d1fa50();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1f0c0() {
   double input = input0x1d1f0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d1fa90() {
   double input = 3.70111;
   input += synapse0x1d1fdd0();
   input += synapse0x1d1fe10();
   input += synapse0x1d1fe50();
   input += synapse0x1d1fe90();
   input += synapse0x1d1fed0();
   input += synapse0x1d1ff10();
   input += synapse0x1d1ff50();
   input += synapse0x1d1ff90();
   input += synapse0x1d1ffd0();
   input += synapse0x1d20010();
   input += synapse0x1d20050();
   input += synapse0x1d20090();
   input += synapse0x1d200d0();
   input += synapse0x1d20110();
   input += synapse0x1d20150();
   input += synapse0x1d20190();
   input += synapse0x1d1fc20();
   input += synapse0x1d1fc60();
   input += synapse0x1d202e0();
   input += synapse0x1d20320();
   input += synapse0x1d20360();
   input += synapse0x1d203a0();
   input += synapse0x1d203e0();
   input += synapse0x1d20420();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d1fa90() {
   double input = input0x1d1fa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d20460() {
   double input = 0.795709;
   input += synapse0x1d207a0();
   input += synapse0x1d207e0();
   input += synapse0x1d20820();
   input += synapse0x1d20860();
   input += synapse0x1d208a0();
   input += synapse0x1d208e0();
   input += synapse0x1d20920();
   input += synapse0x1d20960();
   input += synapse0x1d209a0();
   input += synapse0x1d209e0();
   input += synapse0x1d20a20();
   input += synapse0x1d20a60();
   input += synapse0x1d20aa0();
   input += synapse0x1d20ae0();
   input += synapse0x1d20b20();
   input += synapse0x1d20b60();
   input += synapse0x1d205f0();
   input += synapse0x1d20630();
   input += synapse0x1d20cb0();
   input += synapse0x1d20cf0();
   input += synapse0x1d20d30();
   input += synapse0x1d20d70();
   input += synapse0x1d20db0();
   input += synapse0x1d20df0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d20460() {
   double input = input0x1d20460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d20e30() {
   double input = 0.832594;
   input += synapse0x1d21170();
   input += synapse0x1d211b0();
   input += synapse0x1d211f0();
   input += synapse0x1d21230();
   input += synapse0x1d21270();
   input += synapse0x1d212b0();
   input += synapse0x1d212f0();
   input += synapse0x1d21330();
   input += synapse0x1d21370();
   input += synapse0x1d213b0();
   input += synapse0x1d213f0();
   input += synapse0x1d21430();
   input += synapse0x1d21470();
   input += synapse0x1d214b0();
   input += synapse0x1d214f0();
   input += synapse0x1d21530();
   input += synapse0x1d20fc0();
   input += synapse0x1d21000();
   input += synapse0x1d21680();
   input += synapse0x1d216c0();
   input += synapse0x1d21700();
   input += synapse0x1d21740();
   input += synapse0x1d21780();
   input += synapse0x1d217c0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d20e30() {
   double input = input0x1d20e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d21800() {
   double input = 2.78028;
   input += synapse0x1d0a270();
   input += synapse0x1d0a2b0();
   input += synapse0x1d0a2f0();
   input += synapse0x1d0a330();
   input += synapse0x1d0a370();
   input += synapse0x1d0a3b0();
   input += synapse0x1d0a3f0();
   input += synapse0x1d0a430();
   input += synapse0x1d21f50();
   input += synapse0x1d21f90();
   input += synapse0x1d21fd0();
   input += synapse0x1d22010();
   input += synapse0x1d22050();
   input += synapse0x1d22090();
   input += synapse0x1d220d0();
   input += synapse0x1d22110();
   input += synapse0x1d21990();
   input += synapse0x1d219d0();
   input += synapse0x1d22260();
   input += synapse0x1d222a0();
   input += synapse0x1d222e0();
   input += synapse0x1d22320();
   input += synapse0x1d22360();
   input += synapse0x1d223a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d21800() {
   double input = input0x1d21800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d223e0() {
   double input = 0.885356;
   input += synapse0x1d22720();
   input += synapse0x1d22760();
   input += synapse0x1d227a0();
   input += synapse0x1d227e0();
   input += synapse0x1d22820();
   input += synapse0x1d22860();
   input += synapse0x1d228a0();
   input += synapse0x1d228e0();
   input += synapse0x1d22920();
   input += synapse0x1d22960();
   input += synapse0x1d229a0();
   input += synapse0x1d229e0();
   input += synapse0x1d22a20();
   input += synapse0x1d22a60();
   input += synapse0x1d22aa0();
   input += synapse0x1d22ae0();
   input += synapse0x1d22570();
   input += synapse0x1d225b0();
   input += synapse0x1d22c30();
   input += synapse0x1d22c70();
   input += synapse0x1d22cb0();
   input += synapse0x1d22cf0();
   input += synapse0x1d22d30();
   input += synapse0x1d22d70();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d223e0() {
   double input = input0x1d223e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d22db0() {
   double input = 1.36759;
   input += synapse0x1d230f0();
   input += synapse0x1d23130();
   input += synapse0x1d23170();
   input += synapse0x1d231b0();
   input += synapse0x1d231f0();
   input += synapse0x1d23230();
   input += synapse0x1d23270();
   input += synapse0x1d232b0();
   input += synapse0x1d232f0();
   input += synapse0x1d23330();
   input += synapse0x1d23370();
   input += synapse0x1d233b0();
   input += synapse0x1d233f0();
   input += synapse0x1d23430();
   input += synapse0x1d23470();
   input += synapse0x1d234b0();
   input += synapse0x1d22f40();
   input += synapse0x1d22f80();
   input += synapse0x1d13ab0();
   input += synapse0x1d13af0();
   input += synapse0x1d13b30();
   input += synapse0x1d13b70();
   input += synapse0x1d13bb0();
   input += synapse0x1d13bf0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d22db0() {
   double input = input0x1d22db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d13c30() {
   double input = -0.0342553;
   input += synapse0x1d13f70();
   input += synapse0x1d13fb0();
   input += synapse0x1d13ff0();
   input += synapse0x1d14030();
   input += synapse0x1d14070();
   input += synapse0x1d140b0();
   input += synapse0x1d140f0();
   input += synapse0x1d14130();
   input += synapse0x1d14170();
   input += synapse0x1d141b0();
   input += synapse0x1d141f0();
   input += synapse0x1d14230();
   input += synapse0x1d14270();
   input += synapse0x1d142b0();
   input += synapse0x1d142f0();
   input += synapse0x1d14330();
   input += synapse0x1d13dc0();
   input += synapse0x1d13e00();
   input += synapse0x1d14480();
   input += synapse0x1d144c0();
   input += synapse0x1d14500();
   input += synapse0x1d14540();
   input += synapse0x1d14580();
   input += synapse0x1d145c0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d13c30() {
   double input = input0x1d13c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d14600() {
   double input = 0.175498;
   input += synapse0x1d14940();
   input += synapse0x1d14980();
   input += synapse0x1d149c0();
   input += synapse0x1d14a00();
   input += synapse0x1d14a40();
   input += synapse0x1d14a80();
   input += synapse0x1d14ac0();
   input += synapse0x1d14b00();
   input += synapse0x1d14b40();
   input += synapse0x1d14b80();
   input += synapse0x1d14bc0();
   input += synapse0x1d14c00();
   input += synapse0x1d14c40();
   input += synapse0x1d14c80();
   input += synapse0x1d14cc0();
   input += synapse0x1d14d00();
   input += synapse0x1d14790();
   input += synapse0x1d147d0();
   input += synapse0x1d14e50();
   input += synapse0x1d14e90();
   input += synapse0x1d14ed0();
   input += synapse0x1d14f10();
   input += synapse0x1d14f50();
   input += synapse0x1d14f90();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d14600() {
   double input = input0x1d14600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d14fd0() {
   double input = 1.23858;
   input += synapse0x1d15310();
   input += synapse0x1d15350();
   input += synapse0x1d15390();
   input += synapse0x1d153d0();
   input += synapse0x1d15410();
   input += synapse0x1d15450();
   input += synapse0x1d15490();
   input += synapse0x1d154d0();
   input += synapse0x1d15510();
   input += synapse0x1d15550();
   input += synapse0x1d15590();
   input += synapse0x1d155d0();
   input += synapse0x1d15610();
   input += synapse0x1d15650();
   input += synapse0x1d15690();
   input += synapse0x1d156d0();
   input += synapse0x1d15160();
   input += synapse0x1d151a0();
   input += synapse0x1d15820();
   input += synapse0x1d15860();
   input += synapse0x1d158a0();
   input += synapse0x1d158e0();
   input += synapse0x1d15920();
   input += synapse0x1d15960();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d14fd0() {
   double input = input0x1d14fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d27610() {
   double input = 2.46149;
   input += synapse0x1d27830();
   input += synapse0x1d27870();
   input += synapse0x1d278b0();
   input += synapse0x1d278f0();
   input += synapse0x1d27930();
   input += synapse0x1d27970();
   input += synapse0x1d279b0();
   input += synapse0x1d279f0();
   input += synapse0x1d27a30();
   input += synapse0x1d27a70();
   input += synapse0x1d27ab0();
   input += synapse0x1d27af0();
   input += synapse0x1d27b30();
   input += synapse0x1d27b70();
   input += synapse0x1d27bb0();
   input += synapse0x1d27bf0();
   input += synapse0x1d159a0();
   input += synapse0x1d159e0();
   input += synapse0x1d27d40();
   input += synapse0x1d27d80();
   input += synapse0x1d27dc0();
   input += synapse0x1d27e00();
   input += synapse0x1d27e40();
   input += synapse0x1d27e80();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d27610() {
   double input = input0x1d27610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d27ec0() {
   double input = 1.18421;
   input += synapse0x1d28200();
   input += synapse0x1d28240();
   input += synapse0x1d28280();
   input += synapse0x1d282c0();
   input += synapse0x1d28300();
   input += synapse0x1d28340();
   input += synapse0x1d28380();
   input += synapse0x1d283c0();
   input += synapse0x1d28400();
   input += synapse0x1d28440();
   input += synapse0x1d28480();
   input += synapse0x1d284c0();
   input += synapse0x1d28500();
   input += synapse0x1d28540();
   input += synapse0x1d28580();
   input += synapse0x1d285c0();
   input += synapse0x1d28050();
   input += synapse0x1d28090();
   input += synapse0x1d28710();
   input += synapse0x1d28750();
   input += synapse0x1d28790();
   input += synapse0x1d287d0();
   input += synapse0x1d28810();
   input += synapse0x1d28850();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d27ec0() {
   double input = input0x1d27ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d28890() {
   double input = -0.363831;
   input += synapse0x1d28bd0();
   input += synapse0x1d28c10();
   input += synapse0x1d28c50();
   input += synapse0x1d28c90();
   input += synapse0x1d28cd0();
   input += synapse0x1d28d10();
   input += synapse0x1d28d50();
   input += synapse0x1d28d90();
   input += synapse0x1d28dd0();
   input += synapse0x1d28e10();
   input += synapse0x1d28e50();
   input += synapse0x1d28e90();
   input += synapse0x1d28ed0();
   input += synapse0x1d28f10();
   input += synapse0x1d28f50();
   input += synapse0x1d28f90();
   input += synapse0x1d28a20();
   input += synapse0x1d28a60();
   input += synapse0x1d290e0();
   input += synapse0x1d29120();
   input += synapse0x1d29160();
   input += synapse0x1d291a0();
   input += synapse0x1d291e0();
   input += synapse0x1d29220();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d28890() {
   double input = input0x1d28890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d29260() {
   double input = 1.19291;
   input += synapse0x1d295a0();
   input += synapse0x1d295e0();
   input += synapse0x1d29620();
   input += synapse0x1d29660();
   input += synapse0x1d296a0();
   input += synapse0x1d296e0();
   input += synapse0x1d29720();
   input += synapse0x1d29760();
   input += synapse0x1d297a0();
   input += synapse0x1d297e0();
   input += synapse0x1d29820();
   input += synapse0x1d29860();
   input += synapse0x1d298a0();
   input += synapse0x1d298e0();
   input += synapse0x1d29920();
   input += synapse0x1d29960();
   input += synapse0x1d293f0();
   input += synapse0x1d29430();
   input += synapse0x1d29ab0();
   input += synapse0x1d29af0();
   input += synapse0x1d29b30();
   input += synapse0x1d29b70();
   input += synapse0x1d29bb0();
   input += synapse0x1d29bf0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d29260() {
   double input = input0x1d29260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d30460() {
   double input = 0.842276;
   input += synapse0x1ac9a00();
   input += synapse0x1ac9a40();
   input += synapse0x1d076a0();
   input += synapse0x1d076e0();
   input += synapse0x1d08070();
   input += synapse0x1d080b0();
   input += synapse0x1d08e40();
   input += synapse0x1d08e80();
   input += synapse0x1d09810();
   input += synapse0x1d09850();
   input += synapse0x1d0a1e0();
   input += synapse0x1d0a220();
   input += synapse0x1d0acc0();
   input += synapse0x1d0ad00();
   input += synapse0x1d0b690();
   input += synapse0x1d0b6d0();
   input += synapse0x1d08770();
   input += synapse0x1d087b0();
   input += synapse0x1d0d240();
   input += synapse0x1d0d280();
   input += synapse0x1d0dc10();
   input += synapse0x1d0dc50();
   input += synapse0x1d0e5e0();
   input += synapse0x1d0e620();
   input += synapse0x1d0efb0();
   input += synapse0x1d0eff0();
   input += synapse0x1d03150();
   input += synapse0x1d03190();
   input += synapse0x1d110a0();
   input += synapse0x1d110e0();
   input += synapse0x1d11a70();
   input += synapse0x1d11ab0();
   input += synapse0x1d12440();
   input += synapse0x1d12480();
   input += synapse0x1d12e10();
   input += synapse0x1d12e50();
   input += synapse0x1d137e0();
   input += synapse0x1d13820();
   input += synapse0x1d0c330();
   input += synapse0x1d0c370();
   input += synapse0x1d15be0();
   input += synapse0x1d15c20();
   input += synapse0x1d16570();
   input += synapse0x1d165b0();
   input += synapse0x1d16f40();
   input += synapse0x1d16f80();
   input += synapse0x1d17910();
   input += synapse0x1d17950();
   input += synapse0x1d182e0();
   input += synapse0x1d18320();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d30460() {
   double input = input0x1d30460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d30800() {
   double input = -0.418443;
   input += synapse0x1d1aa20();
   input += synapse0x1d1aa60();
   input += synapse0x1d0ffe0();
   input += synapse0x1d10020();
   input += synapse0x1d1d600();
   input += synapse0x1d1d640();
   input += synapse0x1d1dfd0();
   input += synapse0x1d1e010();
   input += synapse0x1d1e9a0();
   input += synapse0x1d1e9e0();
   input += synapse0x1d1f370();
   input += synapse0x1d1f3b0();
   input += synapse0x1d1fd40();
   input += synapse0x1d1fd80();
   input += synapse0x1d20710();
   input += synapse0x1d20750();
   input += synapse0x1d210e0();
   input += synapse0x1d21120();
   input += synapse0x1d21ab0();
   input += synapse0x1d21af0();
   input += synapse0x1d22690();
   input += synapse0x1d226d0();
   input += synapse0x1d23060();
   input += synapse0x1d230a0();
   input += synapse0x1d13ee0();
   input += synapse0x1d13f20();
   input += synapse0x1d148b0();
   input += synapse0x1d148f0();
   input += synapse0x1d15280();
   input += synapse0x1d152c0();
   input += synapse0x1d277a0();
   input += synapse0x1d277e0();
   input += synapse0x1d28170();
   input += synapse0x1d281b0();
   input += synapse0x1d28b40();
   input += synapse0x1d28b80();
   input += synapse0x1d29510();
   input += synapse0x1d29550();
   input += synapse0x1d05400();
   input += synapse0x1d05440();
   input += synapse0x1d18cb0();
   input += synapse0x1d18cf0();
   input += synapse0x1d29c30();
   input += synapse0x1d29c70();
   input += synapse0x1d29cb0();
   input += synapse0x1d29cf0();
   input += synapse0x1d30ba0();
   input += synapse0x1d30be0();
   input += synapse0x1d30c20();
   input += synapse0x1d30c60();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d30800() {
   double input = input0x1d30800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d30ca0() {
   double input = -0.256082;
   input += synapse0x1d30fe0();
   input += synapse0x1d31020();
   input += synapse0x1d31060();
   input += synapse0x1d310a0();
   input += synapse0x1d310e0();
   input += synapse0x1d31120();
   input += synapse0x1d31160();
   input += synapse0x1d311a0();
   input += synapse0x1d311e0();
   input += synapse0x1d31220();
   input += synapse0x1d31260();
   input += synapse0x1d312a0();
   input += synapse0x1d312e0();
   input += synapse0x1d31320();
   input += synapse0x1d31360();
   input += synapse0x1d313a0();
   input += synapse0x1d30e30();
   input += synapse0x1d30e70();
   input += synapse0x1d314f0();
   input += synapse0x1d31530();
   input += synapse0x1d31570();
   input += synapse0x1d315b0();
   input += synapse0x1d315f0();
   input += synapse0x1d31630();
   input += synapse0x1d31670();
   input += synapse0x1d316b0();
   input += synapse0x1d316f0();
   input += synapse0x1d31730();
   input += synapse0x1d31770();
   input += synapse0x1d317b0();
   input += synapse0x1d317f0();
   input += synapse0x1d31830();
   input += synapse0x1d313e0();
   input += synapse0x1d31420();
   input += synapse0x1d31460();
   input += synapse0x1d314a0();
   input += synapse0x1d31a80();
   input += synapse0x1d31ac0();
   input += synapse0x1d31b00();
   input += synapse0x1d31b40();
   input += synapse0x1d31b80();
   input += synapse0x1d31bc0();
   input += synapse0x1d31c00();
   input += synapse0x1d31c40();
   input += synapse0x1d31c80();
   input += synapse0x1d31cc0();
   input += synapse0x1d31d00();
   input += synapse0x1d31d40();
   input += synapse0x1d31d80();
   input += synapse0x1d31dc0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d30ca0() {
   double input = input0x1d30ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d31e00() {
   double input = -0.347092;
   input += synapse0x1d32140();
   input += synapse0x1d32180();
   input += synapse0x1d321c0();
   input += synapse0x1d32200();
   input += synapse0x1d32240();
   input += synapse0x1d32280();
   input += synapse0x1d322c0();
   input += synapse0x1d32300();
   input += synapse0x1d32340();
   input += synapse0x1d32380();
   input += synapse0x1d323c0();
   input += synapse0x1d32400();
   input += synapse0x1d32440();
   input += synapse0x1d32480();
   input += synapse0x1d324c0();
   input += synapse0x1d32500();
   input += synapse0x1d31f90();
   input += synapse0x1d31fd0();
   input += synapse0x1d32650();
   input += synapse0x1d32690();
   input += synapse0x1d326d0();
   input += synapse0x1d32710();
   input += synapse0x1d32750();
   input += synapse0x1d32790();
   input += synapse0x1d327d0();
   input += synapse0x1d32810();
   input += synapse0x1d32850();
   input += synapse0x1d32890();
   input += synapse0x1d328d0();
   input += synapse0x1d32910();
   input += synapse0x1d32950();
   input += synapse0x1d32990();
   input += synapse0x1d32540();
   input += synapse0x1d32580();
   input += synapse0x1d325c0();
   input += synapse0x1d32600();
   input += synapse0x1d32be0();
   input += synapse0x1d32c20();
   input += synapse0x1d32c60();
   input += synapse0x1d32ca0();
   input += synapse0x1d32ce0();
   input += synapse0x1d32d20();
   input += synapse0x1d32d60();
   input += synapse0x1d32da0();
   input += synapse0x1d32de0();
   input += synapse0x1d32e20();
   input += synapse0x1d32e60();
   input += synapse0x1d32ea0();
   input += synapse0x1d32ee0();
   input += synapse0x1d32f20();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d31e00() {
   double input = input0x1d31e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d32f60() {
   double input = -0.856468;
   input += synapse0x1d332a0();
   input += synapse0x1d332e0();
   input += synapse0x1d33320();
   input += synapse0x1d33360();
   input += synapse0x1d333a0();
   input += synapse0x1d333e0();
   input += synapse0x1d33420();
   input += synapse0x1d33460();
   input += synapse0x1d334a0();
   input += synapse0x1d334e0();
   input += synapse0x1d33520();
   input += synapse0x1d33560();
   input += synapse0x1d335a0();
   input += synapse0x1d335e0();
   input += synapse0x1d33620();
   input += synapse0x1d33660();
   input += synapse0x1d330f0();
   input += synapse0x1d33130();
   input += synapse0x1d337b0();
   input += synapse0x1d337f0();
   input += synapse0x1d33830();
   input += synapse0x1d33870();
   input += synapse0x1d338b0();
   input += synapse0x1d338f0();
   input += synapse0x1d33930();
   input += synapse0x1d33970();
   input += synapse0x1d339b0();
   input += synapse0x1d339f0();
   input += synapse0x1d33a30();
   input += synapse0x1d33a70();
   input += synapse0x1d33ab0();
   input += synapse0x1d33af0();
   input += synapse0x1d336a0();
   input += synapse0x1d336e0();
   input += synapse0x1d33720();
   input += synapse0x1d33760();
   input += synapse0x1d33d40();
   input += synapse0x1d33d80();
   input += synapse0x1d33dc0();
   input += synapse0x1d33e00();
   input += synapse0x1d33e40();
   input += synapse0x1d33e80();
   input += synapse0x1d33ec0();
   input += synapse0x1d33f00();
   input += synapse0x1d33f40();
   input += synapse0x1d33f80();
   input += synapse0x1d33fc0();
   input += synapse0x1d34000();
   input += synapse0x1d34040();
   input += synapse0x1d34080();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d32f60() {
   double input = input0x1d32f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x1d340c0() {
   double input = 5.44005;
   input += synapse0x1d342e0();
   input += synapse0x1d34320();
   input += synapse0x1d34360();
   input += synapse0x1d343a0();
   input += synapse0x1d343e0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x1d340c0() {
   double input = input0x1d340c0();
   return (input * 1)+0;
}

double NNfunction_sb_dLdL::synapse0x1d001c0() {
   return (neuron0x1d00240()*-0.216054);
}

double NNfunction_sb_dLdL::synapse0x1d00200() {
   return (neuron0x1d004f0()*-0.215691);
}

double NNfunction_sb_dLdL::synapse0x1d05490() {
   return (neuron0x1d00830()*0.251542);
}

double NNfunction_sb_dLdL::synapse0x1d054d0() {
   return (neuron0x1d00b70()*0.563407);
}

double NNfunction_sb_dLdL::synapse0x1d05510() {
   return (neuron0x1d00eb0()*-0.106625);
}

double NNfunction_sb_dLdL::synapse0x1d05550() {
   return (neuron0x1d011f0()*0.496352);
}

double NNfunction_sb_dLdL::synapse0x1d05590() {
   return (neuron0x1d01530()*0.629723);
}

double NNfunction_sb_dLdL::synapse0x1d055d0() {
   return (neuron0x1d01870()*0.0119784);
}

double NNfunction_sb_dLdL::synapse0x1d05610() {
   return (neuron0x1d01bb0()*0.357827);
}

double NNfunction_sb_dLdL::synapse0x1d05650() {
   return (neuron0x1d01ef0()*0.078008);
}

double NNfunction_sb_dLdL::synapse0x1d05690() {
   return (neuron0x1d02230()*-0.202865);
}

double NNfunction_sb_dLdL::synapse0x1d056d0() {
   return (neuron0x1d02570()*0.36181);
}

double NNfunction_sb_dLdL::synapse0x1d05710() {
   return (neuron0x1d028b0()*-0.513672);
}

double NNfunction_sb_dLdL::synapse0x1d05750() {
   return (neuron0x1d02bf0()*-0.243274);
}

double NNfunction_sb_dLdL::synapse0x1d05790() {
   return (neuron0x1d02f30()*0.446971);
}

double NNfunction_sb_dLdL::synapse0x1d057d0() {
   return (neuron0x1d03270()*0.00756313);
}

double NNfunction_sb_dLdL::synapse0x1d00130() {
   return (neuron0x1d035b0()*-0.184908);
}

double NNfunction_sb_dLdL::synapse0x1d00170() {
   return (neuron0x1d03b10()*-0.177168);
}

double NNfunction_sb_dLdL::synapse0x1abb390() {
   return (neuron0x1d03d30()*0.551252);
}

double NNfunction_sb_dLdL::synapse0x1abb3d0() {
   return (neuron0x1d04070()*0.28461);
}

double NNfunction_sb_dLdL::synapse0x1d05a30() {
   return (neuron0x1d043b0()*0.471087);
}

double NNfunction_sb_dLdL::synapse0x1d05a70() {
   return (neuron0x1d046f0()*-0.54741);
}

double NNfunction_sb_dLdL::synapse0x1d05ab0() {
   return (neuron0x1d04a30()*-0.124855);
}

double NNfunction_sb_dLdL::synapse0x1d05af0() {
   return (neuron0x1d04d70()*0.412545);
}

double NNfunction_sb_dLdL::synapse0x1d05e70() {
   return (neuron0x1d00240()*-0.0146237);
}

double NNfunction_sb_dLdL::synapse0x1d05eb0() {
   return (neuron0x1d004f0()*-0.00935854);
}

double NNfunction_sb_dLdL::synapse0x1d05ef0() {
   return (neuron0x1d00830()*-0.00803988);
}

double NNfunction_sb_dLdL::synapse0x1d05f30() {
   return (neuron0x1d00b70()*3.94065);
}

double NNfunction_sb_dLdL::synapse0x1d05f70() {
   return (neuron0x1d00eb0()*0.00159137);
}

double NNfunction_sb_dLdL::synapse0x1d05fb0() {
   return (neuron0x1d011f0()*0.00775377);
}

double NNfunction_sb_dLdL::synapse0x1d05ff0() {
   return (neuron0x1d01530()*-0.0038682);
}

double NNfunction_sb_dLdL::synapse0x1d06030() {
   return (neuron0x1d01870()*0.00416887);
}

double NNfunction_sb_dLdL::synapse0x1d06070() {
   return (neuron0x1d01bb0()*0.000808437);
}

double NNfunction_sb_dLdL::synapse0x1d05920() {
   return (neuron0x1d01ef0()*0.00944222);
}

double NNfunction_sb_dLdL::synapse0x1d05960() {
   return (neuron0x1d02230()*-0.00120038);
}

double NNfunction_sb_dLdL::synapse0x1d059a0() {
   return (neuron0x1d02570()*-0.471636);
}

double NNfunction_sb_dLdL::synapse0x1d059e0() {
   return (neuron0x1d028b0()*0.00671326);
}

double NNfunction_sb_dLdL::synapse0x1d062c0() {
   return (neuron0x1d02bf0()*-0.0307875);
}

double NNfunction_sb_dLdL::synapse0x1d06300() {
   return (neuron0x1d02f30()*-0.00977509);
}

double NNfunction_sb_dLdL::synapse0x1d06340() {
   return (neuron0x1d03270()*0.00909017);
}

double NNfunction_sb_dLdL::synapse0x1d05cc0() {
   return (neuron0x1d035b0()*-0.0301989);
}

double NNfunction_sb_dLdL::synapse0x1d05d00() {
   return (neuron0x1d03b10()*0.000896843);
}

double NNfunction_sb_dLdL::synapse0x1d06490() {
   return (neuron0x1d03d30()*-0.00464082);
}

double NNfunction_sb_dLdL::synapse0x1d064d0() {
   return (neuron0x1d04070()*0.0103338);
}

double NNfunction_sb_dLdL::synapse0x1d06510() {
   return (neuron0x1d043b0()*0.0169943);
}

double NNfunction_sb_dLdL::synapse0x1d06550() {
   return (neuron0x1d046f0()*-0.00231276);
}

double NNfunction_sb_dLdL::synapse0x1d06590() {
   return (neuron0x1d04a30()*0.000870116);
}

double NNfunction_sb_dLdL::synapse0x1d065d0() {
   return (neuron0x1d04d70()*0.0137741);
}

double NNfunction_sb_dLdL::synapse0x1d06950() {
   return (neuron0x1d00240()*0.239626);
}

double NNfunction_sb_dLdL::synapse0x1d06990() {
   return (neuron0x1d004f0()*0.188993);
}

double NNfunction_sb_dLdL::synapse0x1d069d0() {
   return (neuron0x1d00830()*-0.0383197);
}

double NNfunction_sb_dLdL::synapse0x1d06a10() {
   return (neuron0x1d00b70()*0.0796677);
}

double NNfunction_sb_dLdL::synapse0x1d06a50() {
   return (neuron0x1d00eb0()*0.191235);
}

double NNfunction_sb_dLdL::synapse0x1d06a90() {
   return (neuron0x1d011f0()*0.105168);
}

double NNfunction_sb_dLdL::synapse0x1d06ad0() {
   return (neuron0x1d01530()*-0.00330383);
}

double NNfunction_sb_dLdL::synapse0x1d06b10() {
   return (neuron0x1d01870()*-0.200498);
}

double NNfunction_sb_dLdL::synapse0x1d06b50() {
   return (neuron0x1d01bb0()*0.129619);
}

double NNfunction_sb_dLdL::synapse0x1d06b90() {
   return (neuron0x1d01ef0()*-0.0273084);
}

double NNfunction_sb_dLdL::synapse0x1d06bd0() {
   return (neuron0x1d02230()*0.0452262);
}

double NNfunction_sb_dLdL::synapse0x1d06c10() {
   return (neuron0x1d02570()*-1.03348);
}

double NNfunction_sb_dLdL::synapse0x1d06c50() {
   return (neuron0x1d028b0()*0.164628);
}

double NNfunction_sb_dLdL::synapse0x1d06c90() {
   return (neuron0x1d02bf0()*0.174084);
}

double NNfunction_sb_dLdL::synapse0x1d06cd0() {
   return (neuron0x1d02f30()*-0.0267859);
}

double NNfunction_sb_dLdL::synapse0x1d06d10() {
   return (neuron0x1d03270()*-0.289438);
}

double NNfunction_sb_dLdL::synapse0x1d067a0() {
   return (neuron0x1d035b0()*-0.393694);
}

double NNfunction_sb_dLdL::synapse0x1d067e0() {
   return (neuron0x1d03b10()*0.0663391);
}

double NNfunction_sb_dLdL::synapse0x1aba4e0() {
   return (neuron0x1d03d30()*0.140341);
}

double NNfunction_sb_dLdL::synapse0x1cef2b0() {
   return (neuron0x1d04070()*0.177375);
}

double NNfunction_sb_dLdL::synapse0x1ac9210() {
   return (neuron0x1d043b0()*0.116333);
}

double NNfunction_sb_dLdL::synapse0x1ac9250() {
   return (neuron0x1d046f0()*-0.0562693);
}

double NNfunction_sb_dLdL::synapse0x1be4750() {
   return (neuron0x1d04a30()*-0.105244);
}

double NNfunction_sb_dLdL::synapse0x1be4790() {
   return (neuron0x1d04d70()*-0.145224);
}

double NNfunction_sb_dLdL::synapse0x1ac9a90() {
   return (neuron0x1d00240()*-0.153735);
}

double NNfunction_sb_dLdL::synapse0x1d00030() {
   return (neuron0x1d004f0()*-0.0398083);
}

double NNfunction_sb_dLdL::synapse0x1d06240() {
   return (neuron0x1d00830()*-0.21944);
}

double NNfunction_sb_dLdL::synapse0x1d06280() {
   return (neuron0x1d00b70()*0.344901);
}

double NNfunction_sb_dLdL::synapse0x1d06e60() {
   return (neuron0x1d00eb0()*-0.0231052);
}

double NNfunction_sb_dLdL::synapse0x1d06ea0() {
   return (neuron0x1d011f0()*-0.192582);
}

double NNfunction_sb_dLdL::synapse0x1d06ee0() {
   return (neuron0x1d01530()*-0.407964);
}

double NNfunction_sb_dLdL::synapse0x1d06f20() {
   return (neuron0x1d01870()*-0.197391);
}

double NNfunction_sb_dLdL::synapse0x1d06f60() {
   return (neuron0x1d01bb0()*0.292765);
}

double NNfunction_sb_dLdL::synapse0x1d06fa0() {
   return (neuron0x1d01ef0()*0.100521);
}

double NNfunction_sb_dLdL::synapse0x1d06fe0() {
   return (neuron0x1d02230()*0.230102);
}

double NNfunction_sb_dLdL::synapse0x1d07020() {
   return (neuron0x1d02570()*-0.0735517);
}

double NNfunction_sb_dLdL::synapse0x1d07060() {
   return (neuron0x1d028b0()*0.0743008);
}

double NNfunction_sb_dLdL::synapse0x1d070a0() {
   return (neuron0x1d02bf0()*0.533681);
}

double NNfunction_sb_dLdL::synapse0x1d070e0() {
   return (neuron0x1d02f30()*0.480193);
}

double NNfunction_sb_dLdL::synapse0x1d07120() {
   return (neuron0x1d03270()*-0.028427);
}

double NNfunction_sb_dLdL::synapse0x1cfffa0() {
   return (neuron0x1d035b0()*-0.557499);
}

double NNfunction_sb_dLdL::synapse0x1cfffe0() {
   return (neuron0x1d03b10()*0.708147);
}

double NNfunction_sb_dLdL::synapse0x1d07270() {
   return (neuron0x1d03d30()*0.385373);
}

double NNfunction_sb_dLdL::synapse0x1d072b0() {
   return (neuron0x1d04070()*-0.232014);
}

double NNfunction_sb_dLdL::synapse0x1d072f0() {
   return (neuron0x1d043b0()*-0.363433);
}

double NNfunction_sb_dLdL::synapse0x1d07330() {
   return (neuron0x1d046f0()*-0.349361);
}

double NNfunction_sb_dLdL::synapse0x1d07370() {
   return (neuron0x1d04a30()*0.149946);
}

double NNfunction_sb_dLdL::synapse0x1d073b0() {
   return (neuron0x1d04d70()*0.503404);
}

double NNfunction_sb_dLdL::synapse0x1d07730() {
   return (neuron0x1d00240()*-0.0109569);
}

double NNfunction_sb_dLdL::synapse0x1d07770() {
   return (neuron0x1d004f0()*0.00395407);
}

double NNfunction_sb_dLdL::synapse0x1d077b0() {
   return (neuron0x1d00830()*0.0153751);
}

double NNfunction_sb_dLdL::synapse0x1d077f0() {
   return (neuron0x1d00b70()*0.0605822);
}

double NNfunction_sb_dLdL::synapse0x1d07830() {
   return (neuron0x1d00eb0()*0.037387);
}

double NNfunction_sb_dLdL::synapse0x1d07870() {
   return (neuron0x1d011f0()*0.0107987);
}

double NNfunction_sb_dLdL::synapse0x1d078b0() {
   return (neuron0x1d01530()*0.0120268);
}

double NNfunction_sb_dLdL::synapse0x1d078f0() {
   return (neuron0x1d01870()*0.00178762);
}

double NNfunction_sb_dLdL::synapse0x1d07930() {
   return (neuron0x1d01bb0()*-0.0304548);
}

double NNfunction_sb_dLdL::synapse0x1d07970() {
   return (neuron0x1d01ef0()*-0.223665);
}

double NNfunction_sb_dLdL::synapse0x1d079b0() {
   return (neuron0x1d02230()*0.321846);
}

double NNfunction_sb_dLdL::synapse0x1d079f0() {
   return (neuron0x1d02570()*-1.03069);
}

double NNfunction_sb_dLdL::synapse0x1d07a30() {
   return (neuron0x1d028b0()*0.0991986);
}

double NNfunction_sb_dLdL::synapse0x1d07a70() {
   return (neuron0x1d02bf0()*0.0363807);
}

double NNfunction_sb_dLdL::synapse0x1d07ab0() {
   return (neuron0x1d02f30()*-0.0081224);
}

double NNfunction_sb_dLdL::synapse0x1d07af0() {
   return (neuron0x1d03270()*0.0384353);
}

double NNfunction_sb_dLdL::synapse0x1d07580() {
   return (neuron0x1d035b0()*0.0946727);
}

double NNfunction_sb_dLdL::synapse0x1d075c0() {
   return (neuron0x1d03b10()*0.06656);
}

double NNfunction_sb_dLdL::synapse0x1d07c40() {
   return (neuron0x1d03d30()*-0.0201175);
}

double NNfunction_sb_dLdL::synapse0x1d07c80() {
   return (neuron0x1d04070()*0.0436789);
}

double NNfunction_sb_dLdL::synapse0x1d07cc0() {
   return (neuron0x1d043b0()*0.00877204);
}

double NNfunction_sb_dLdL::synapse0x1d07d00() {
   return (neuron0x1d046f0()*0.0644004);
}

double NNfunction_sb_dLdL::synapse0x1d07d40() {
   return (neuron0x1d04a30()*-0.0213565);
}

double NNfunction_sb_dLdL::synapse0x1d07d80() {
   return (neuron0x1d04d70()*-0.00290171);
}

double NNfunction_sb_dLdL::synapse0x1d08100() {
   return (neuron0x1d00240()*0.0058562);
}

double NNfunction_sb_dLdL::synapse0x1d08140() {
   return (neuron0x1d004f0()*-0.0166209);
}

double NNfunction_sb_dLdL::synapse0x1d08180() {
   return (neuron0x1d00830()*-0.867878);
}

double NNfunction_sb_dLdL::synapse0x1d081c0() {
   return (neuron0x1d00b70()*-0.0202633);
}

double NNfunction_sb_dLdL::synapse0x1d08200() {
   return (neuron0x1d00eb0()*0.0280019);
}

double NNfunction_sb_dLdL::synapse0x1d08240() {
   return (neuron0x1d011f0()*-0.0175196);
}

double NNfunction_sb_dLdL::synapse0x1d08280() {
   return (neuron0x1d01530()*0.00536847);
}

double NNfunction_sb_dLdL::synapse0x1d082c0() {
   return (neuron0x1d01870()*0.00730653);
}

double NNfunction_sb_dLdL::synapse0x1d08300() {
   return (neuron0x1d01bb0()*-0.00658674);
}

double NNfunction_sb_dLdL::synapse0x1ac9560() {
   return (neuron0x1d01ef0()*0.00694883);
}

double NNfunction_sb_dLdL::synapse0x1ac95a0() {
   return (neuron0x1d02230()*-0.0279635);
}

double NNfunction_sb_dLdL::synapse0x1ac95e0() {
   return (neuron0x1d02570()*0.620618);
}

double NNfunction_sb_dLdL::synapse0x1ac9620() {
   return (neuron0x1d028b0()*0.0245674);
}

double NNfunction_sb_dLdL::synapse0x1ac9660() {
   return (neuron0x1d02bf0()*-0.0444209);
}

double NNfunction_sb_dLdL::synapse0x1ac96a0() {
   return (neuron0x1d02f30()*-0.00198124);
}

double NNfunction_sb_dLdL::synapse0x1ac96e0() {
   return (neuron0x1d03270()*0.0181767);
}

double NNfunction_sb_dLdL::synapse0x1d07f50() {
   return (neuron0x1d035b0()*-0.0371102);
}

double NNfunction_sb_dLdL::synapse0x1d07f90() {
   return (neuron0x1d03b10()*-0.00135406);
}

double NNfunction_sb_dLdL::synapse0x1ac9830() {
   return (neuron0x1d03d30()*0.0327414);
}

double NNfunction_sb_dLdL::synapse0x1ac9870() {
   return (neuron0x1d04070()*0.0143029);
}

double NNfunction_sb_dLdL::synapse0x1ac98b0() {
   return (neuron0x1d043b0()*-0.0195955);
}

double NNfunction_sb_dLdL::synapse0x1ac98f0() {
   return (neuron0x1d046f0()*0.0165341);
}

double NNfunction_sb_dLdL::synapse0x1ac9930() {
   return (neuron0x1d04a30()*-0.00289136);
}

double NNfunction_sb_dLdL::synapse0x1d08b50() {
   return (neuron0x1d04d70()*0.00995207);
}

double NNfunction_sb_dLdL::synapse0x1d08ed0() {
   return (neuron0x1d00240()*-0.0595543);
}

double NNfunction_sb_dLdL::synapse0x1d08f10() {
   return (neuron0x1d004f0()*0.025034);
}

double NNfunction_sb_dLdL::synapse0x1d08f50() {
   return (neuron0x1d00830()*-0.505725);
}

double NNfunction_sb_dLdL::synapse0x1d08f90() {
   return (neuron0x1d00b70()*-0.235928);
}

double NNfunction_sb_dLdL::synapse0x1d08fd0() {
   return (neuron0x1d00eb0()*0.172203);
}

double NNfunction_sb_dLdL::synapse0x1d09010() {
   return (neuron0x1d011f0()*0.298846);
}

double NNfunction_sb_dLdL::synapse0x1d09050() {
   return (neuron0x1d01530()*0.0389941);
}

double NNfunction_sb_dLdL::synapse0x1d09090() {
   return (neuron0x1d01870()*0.0251983);
}

double NNfunction_sb_dLdL::synapse0x1d090d0() {
   return (neuron0x1d01bb0()*0.0421124);
}

double NNfunction_sb_dLdL::synapse0x1d09110() {
   return (neuron0x1d01ef0()*-0.0136685);
}

double NNfunction_sb_dLdL::synapse0x1d09150() {
   return (neuron0x1d02230()*-0.0366793);
}

double NNfunction_sb_dLdL::synapse0x1d09190() {
   return (neuron0x1d02570()*-0.897688);
}

double NNfunction_sb_dLdL::synapse0x1d091d0() {
   return (neuron0x1d028b0()*-0.0633941);
}

double NNfunction_sb_dLdL::synapse0x1d09210() {
   return (neuron0x1d02bf0()*0.0286506);
}

double NNfunction_sb_dLdL::synapse0x1d09250() {
   return (neuron0x1d02f30()*-0.0985604);
}

double NNfunction_sb_dLdL::synapse0x1d09290() {
   return (neuron0x1d03270()*-0.171068);
}

double NNfunction_sb_dLdL::synapse0x1d08d20() {
   return (neuron0x1d035b0()*0.173527);
}

double NNfunction_sb_dLdL::synapse0x1d08d60() {
   return (neuron0x1d03b10()*-0.0288763);
}

double NNfunction_sb_dLdL::synapse0x1d093e0() {
   return (neuron0x1d03d30()*-0.0149622);
}

double NNfunction_sb_dLdL::synapse0x1d09420() {
   return (neuron0x1d04070()*-0.095851);
}

double NNfunction_sb_dLdL::synapse0x1d09460() {
   return (neuron0x1d043b0()*0.031476);
}

double NNfunction_sb_dLdL::synapse0x1d094a0() {
   return (neuron0x1d046f0()*-0.00625357);
}

double NNfunction_sb_dLdL::synapse0x1d094e0() {
   return (neuron0x1d04a30()*-0.0988283);
}

double NNfunction_sb_dLdL::synapse0x1d09520() {
   return (neuron0x1d04d70()*0.108972);
}

double NNfunction_sb_dLdL::synapse0x1d098a0() {
   return (neuron0x1d00240()*-0.0203039);
}

double NNfunction_sb_dLdL::synapse0x1d098e0() {
   return (neuron0x1d004f0()*0.0221069);
}

double NNfunction_sb_dLdL::synapse0x1d09920() {
   return (neuron0x1d00830()*-0.435609);
}

double NNfunction_sb_dLdL::synapse0x1d09960() {
   return (neuron0x1d00b70()*0.246814);
}

double NNfunction_sb_dLdL::synapse0x1d099a0() {
   return (neuron0x1d00eb0()*-0.0471637);
}

double NNfunction_sb_dLdL::synapse0x1d099e0() {
   return (neuron0x1d011f0()*0.00514815);
}

double NNfunction_sb_dLdL::synapse0x1d09a20() {
   return (neuron0x1d01530()*-0.0113238);
}

double NNfunction_sb_dLdL::synapse0x1d09a60() {
   return (neuron0x1d01870()*-0.0813478);
}

double NNfunction_sb_dLdL::synapse0x1d09aa0() {
   return (neuron0x1d01bb0()*-0.00595279);
}

double NNfunction_sb_dLdL::synapse0x1d09ae0() {
   return (neuron0x1d01ef0()*-0.0541096);
}

double NNfunction_sb_dLdL::synapse0x1d09b20() {
   return (neuron0x1d02230()*0.00503564);
}

double NNfunction_sb_dLdL::synapse0x1d09b60() {
   return (neuron0x1d02570()*-0.0246742);
}

double NNfunction_sb_dLdL::synapse0x1d09ba0() {
   return (neuron0x1d028b0()*-0.134501);
}

double NNfunction_sb_dLdL::synapse0x1d09be0() {
   return (neuron0x1d02bf0()*0.094471);
}

double NNfunction_sb_dLdL::synapse0x1d09c20() {
   return (neuron0x1d02f30()*0.0721993);
}

double NNfunction_sb_dLdL::synapse0x1d09c60() {
   return (neuron0x1d03270()*-0.0935761);
}

double NNfunction_sb_dLdL::synapse0x1d096f0() {
   return (neuron0x1d035b0()*0.0795547);
}

double NNfunction_sb_dLdL::synapse0x1d09730() {
   return (neuron0x1d03b10()*-0.010347);
}

double NNfunction_sb_dLdL::synapse0x1d09db0() {
   return (neuron0x1d03d30()*-0.0769201);
}

double NNfunction_sb_dLdL::synapse0x1d09df0() {
   return (neuron0x1d04070()*-0.0302117);
}

double NNfunction_sb_dLdL::synapse0x1d09e30() {
   return (neuron0x1d043b0()*0.0246347);
}

double NNfunction_sb_dLdL::synapse0x1d09e70() {
   return (neuron0x1d046f0()*-0.0115443);
}

double NNfunction_sb_dLdL::synapse0x1d09eb0() {
   return (neuron0x1d04a30()*-0.00782466);
}

double NNfunction_sb_dLdL::synapse0x1d09ef0() {
   return (neuron0x1d04d70()*-0.0266695);
}

double NNfunction_sb_dLdL::synapse0x1d03a00() {
   return (neuron0x1d00240()*-0.0261664);
}

double NNfunction_sb_dLdL::synapse0x1d03a40() {
   return (neuron0x1d004f0()*0.0108045);
}

double NNfunction_sb_dLdL::synapse0x1d03a80() {
   return (neuron0x1d00830()*0.14198);
}

double NNfunction_sb_dLdL::synapse0x1d03ac0() {
   return (neuron0x1d00b70()*-0.124552);
}

double NNfunction_sb_dLdL::synapse0x1d0a480() {
   return (neuron0x1d00eb0()*0.022679);
}

double NNfunction_sb_dLdL::synapse0x1d0a4c0() {
   return (neuron0x1d011f0()*0.00860715);
}

double NNfunction_sb_dLdL::synapse0x1d0a500() {
   return (neuron0x1d01530()*-0.00592706);
}

double NNfunction_sb_dLdL::synapse0x1d0a540() {
   return (neuron0x1d01870()*-0.00541505);
}

double NNfunction_sb_dLdL::synapse0x1d0a580() {
   return (neuron0x1d01bb0()*0.00746142);
}

double NNfunction_sb_dLdL::synapse0x1d0a5c0() {
   return (neuron0x1d01ef0()*0.00829855);
}

double NNfunction_sb_dLdL::synapse0x1d0a600() {
   return (neuron0x1d02230()*-0.00850255);
}

double NNfunction_sb_dLdL::synapse0x1d0a640() {
   return (neuron0x1d02570()*1.60346);
}

double NNfunction_sb_dLdL::synapse0x1d0a680() {
   return (neuron0x1d028b0()*-0.0197175);
}

double NNfunction_sb_dLdL::synapse0x1d0a6c0() {
   return (neuron0x1d02bf0()*0.0619488);
}

double NNfunction_sb_dLdL::synapse0x1d0a700() {
   return (neuron0x1d02f30()*0.011724);
}

double NNfunction_sb_dLdL::synapse0x1d0a740() {
   return (neuron0x1d03270()*0.0271113);
}

double NNfunction_sb_dLdL::synapse0x1d0a0c0() {
   return (neuron0x1d035b0()*0.0541594);
}

double NNfunction_sb_dLdL::synapse0x1d0a100() {
   return (neuron0x1d03b10()*-0.00123464);
}

double NNfunction_sb_dLdL::synapse0x1d0a890() {
   return (neuron0x1d03d30()*-0.0255949);
}

double NNfunction_sb_dLdL::synapse0x1d0a8d0() {
   return (neuron0x1d04070()*0.0142837);
}

double NNfunction_sb_dLdL::synapse0x1d0a910() {
   return (neuron0x1d043b0()*-0.0106978);
}

double NNfunction_sb_dLdL::synapse0x1d0a950() {
   return (neuron0x1d046f0()*0.0173769);
}

double NNfunction_sb_dLdL::synapse0x1d0a990() {
   return (neuron0x1d04a30()*-0.014908);
}

double NNfunction_sb_dLdL::synapse0x1d0a9d0() {
   return (neuron0x1d04d70()*0.0144222);
}

double NNfunction_sb_dLdL::synapse0x1d0ad50() {
   return (neuron0x1d00240()*-0.083637);
}

double NNfunction_sb_dLdL::synapse0x1d0ad90() {
   return (neuron0x1d004f0()*-0.0101263);
}

double NNfunction_sb_dLdL::synapse0x1d0add0() {
   return (neuron0x1d00830()*-0.0646403);
}

double NNfunction_sb_dLdL::synapse0x1d0ae10() {
   return (neuron0x1d00b70()*0.595904);
}

double NNfunction_sb_dLdL::synapse0x1d0ae50() {
   return (neuron0x1d00eb0()*0.00540396);
}

double NNfunction_sb_dLdL::synapse0x1d0ae90() {
   return (neuron0x1d011f0()*-0.0588865);
}

double NNfunction_sb_dLdL::synapse0x1d0aed0() {
   return (neuron0x1d01530()*-0.0480919);
}

double NNfunction_sb_dLdL::synapse0x1d0af10() {
   return (neuron0x1d01870()*0.00347997);
}

double NNfunction_sb_dLdL::synapse0x1d0af50() {
   return (neuron0x1d01bb0()*-0.0355228);
}

double NNfunction_sb_dLdL::synapse0x1d0af90() {
   return (neuron0x1d01ef0()*0.142721);
}

double NNfunction_sb_dLdL::synapse0x1d0afd0() {
   return (neuron0x1d02230()*0.0380986);
}

double NNfunction_sb_dLdL::synapse0x1d0b010() {
   return (neuron0x1d02570()*2.29775);
}

double NNfunction_sb_dLdL::synapse0x1d0b050() {
   return (neuron0x1d028b0()*0.0818434);
}

double NNfunction_sb_dLdL::synapse0x1d0b090() {
   return (neuron0x1d02bf0()*0.274611);
}

double NNfunction_sb_dLdL::synapse0x1d0b0d0() {
   return (neuron0x1d02f30()*0.00343845);
}

double NNfunction_sb_dLdL::synapse0x1d0b110() {
   return (neuron0x1d03270()*0.0496595);
}

double NNfunction_sb_dLdL::synapse0x1d0aba0() {
   return (neuron0x1d035b0()*0.119686);
}

double NNfunction_sb_dLdL::synapse0x1d0abe0() {
   return (neuron0x1d03b10()*0.135815);
}

double NNfunction_sb_dLdL::synapse0x1d0b260() {
   return (neuron0x1d03d30()*0.211399);
}

double NNfunction_sb_dLdL::synapse0x1d0b2a0() {
   return (neuron0x1d04070()*0.177612);
}

double NNfunction_sb_dLdL::synapse0x1d0b2e0() {
   return (neuron0x1d043b0()*-0.0129504);
}

double NNfunction_sb_dLdL::synapse0x1d0b320() {
   return (neuron0x1d046f0()*0.0362773);
}

double NNfunction_sb_dLdL::synapse0x1d0b360() {
   return (neuron0x1d04a30()*-0.0323851);
}

double NNfunction_sb_dLdL::synapse0x1d0b3a0() {
   return (neuron0x1d04d70()*0.00342895);
}

double NNfunction_sb_dLdL::synapse0x1d0b720() {
   return (neuron0x1d00240()*0.22055);
}

double NNfunction_sb_dLdL::synapse0x1d0b760() {
   return (neuron0x1d004f0()*0.275535);
}

double NNfunction_sb_dLdL::synapse0x1d0b7a0() {
   return (neuron0x1d00830()*-0.162862);
}

double NNfunction_sb_dLdL::synapse0x1d0b7e0() {
   return (neuron0x1d00b70()*-0.247079);
}

double NNfunction_sb_dLdL::synapse0x1d0b820() {
   return (neuron0x1d00eb0()*-0.21961);
}

double NNfunction_sb_dLdL::synapse0x1d0b860() {
   return (neuron0x1d011f0()*0.132411);
}

double NNfunction_sb_dLdL::synapse0x1d0b8a0() {
   return (neuron0x1d01530()*-0.33165);
}

double NNfunction_sb_dLdL::synapse0x1d0b8e0() {
   return (neuron0x1d01870()*0.460314);
}

double NNfunction_sb_dLdL::synapse0x1d0b920() {
   return (neuron0x1d01bb0()*0.182363);
}

double NNfunction_sb_dLdL::synapse0x1d0b960() {
   return (neuron0x1d01ef0()*-0.215462);
}

double NNfunction_sb_dLdL::synapse0x1d0b9a0() {
   return (neuron0x1d02230()*0.058643);
}

double NNfunction_sb_dLdL::synapse0x1d0b9e0() {
   return (neuron0x1d02570()*0.0511049);
}

double NNfunction_sb_dLdL::synapse0x1d0ba20() {
   return (neuron0x1d028b0()*0.29419);
}

double NNfunction_sb_dLdL::synapse0x1d0ba60() {
   return (neuron0x1d02bf0()*-0.445525);
}

double NNfunction_sb_dLdL::synapse0x1d0baa0() {
   return (neuron0x1d02f30()*0.0774383);
}

double NNfunction_sb_dLdL::synapse0x1d0bae0() {
   return (neuron0x1d03270()*0.433991);
}

double NNfunction_sb_dLdL::synapse0x1d0b570() {
   return (neuron0x1d035b0()*-0.181815);
}

double NNfunction_sb_dLdL::synapse0x1d0b5b0() {
   return (neuron0x1d03b10()*0.113255);
}

double NNfunction_sb_dLdL::synapse0x1d08340() {
   return (neuron0x1d03d30()*-0.216488);
}

double NNfunction_sb_dLdL::synapse0x1d08380() {
   return (neuron0x1d04070()*-0.626837);
}

double NNfunction_sb_dLdL::synapse0x1d083c0() {
   return (neuron0x1d043b0()*-0.000340181);
}

double NNfunction_sb_dLdL::synapse0x1d08400() {
   return (neuron0x1d046f0()*0.238341);
}

double NNfunction_sb_dLdL::synapse0x1d08440() {
   return (neuron0x1d04a30()*0.103655);
}

double NNfunction_sb_dLdL::synapse0x1d08480() {
   return (neuron0x1d04d70()*0.176119);
}

double NNfunction_sb_dLdL::synapse0x1d08800() {
   return (neuron0x1d00240()*-0.00466392);
}

double NNfunction_sb_dLdL::synapse0x1d08840() {
   return (neuron0x1d004f0()*-0.00910805);
}

double NNfunction_sb_dLdL::synapse0x1d08880() {
   return (neuron0x1d00830()*-0.110758);
}

double NNfunction_sb_dLdL::synapse0x1d088c0() {
   return (neuron0x1d00b70()*2.96389);
}

double NNfunction_sb_dLdL::synapse0x1d08900() {
   return (neuron0x1d00eb0()*-0.00624848);
}

double NNfunction_sb_dLdL::synapse0x1d08940() {
   return (neuron0x1d011f0()*-0.00325938);
}

double NNfunction_sb_dLdL::synapse0x1d08980() {
   return (neuron0x1d01530()*0.012594);
}

double NNfunction_sb_dLdL::synapse0x1d089c0() {
   return (neuron0x1d01870()*-0.0575009);
}

double NNfunction_sb_dLdL::synapse0x1d08a00() {
   return (neuron0x1d01bb0()*-0.0126067);
}

double NNfunction_sb_dLdL::synapse0x1d08a40() {
   return (neuron0x1d01ef0()*0.0303063);
}

double NNfunction_sb_dLdL::synapse0x1d08a80() {
   return (neuron0x1d02230()*0.00133726);
}

double NNfunction_sb_dLdL::synapse0x1d08ac0() {
   return (neuron0x1d02570()*1.20331);
}

double NNfunction_sb_dLdL::synapse0x1d08b00() {
   return (neuron0x1d028b0()*-0.00905995);
}

double NNfunction_sb_dLdL::synapse0x1d0cc40() {
   return (neuron0x1d02bf0()*0.0283171);
}

double NNfunction_sb_dLdL::synapse0x1d0cc80() {
   return (neuron0x1d02f30()*-0.0332254);
}

double NNfunction_sb_dLdL::synapse0x1d0ccc0() {
   return (neuron0x1d03270()*-0.00348243);
}

double NNfunction_sb_dLdL::synapse0x1d08650() {
   return (neuron0x1d035b0()*0.0411918);
}

double NNfunction_sb_dLdL::synapse0x1d08690() {
   return (neuron0x1d03b10()*0.0121129);
}

double NNfunction_sb_dLdL::synapse0x1d0ce10() {
   return (neuron0x1d03d30()*0.0127779);
}

double NNfunction_sb_dLdL::synapse0x1d0ce50() {
   return (neuron0x1d04070()*0.0171828);
}

double NNfunction_sb_dLdL::synapse0x1d0ce90() {
   return (neuron0x1d043b0()*0.000463288);
}

double NNfunction_sb_dLdL::synapse0x1d0ced0() {
   return (neuron0x1d046f0()*0.0110366);
}

double NNfunction_sb_dLdL::synapse0x1d0cf10() {
   return (neuron0x1d04a30()*0.0114539);
}

double NNfunction_sb_dLdL::synapse0x1d0cf50() {
   return (neuron0x1d04d70()*-0.0300542);
}

double NNfunction_sb_dLdL::synapse0x1d0d2d0() {
   return (neuron0x1d00240()*-0.0722178);
}

double NNfunction_sb_dLdL::synapse0x1d0d310() {
   return (neuron0x1d004f0()*0.00499186);
}

double NNfunction_sb_dLdL::synapse0x1d0d350() {
   return (neuron0x1d00830()*-0.670731);
}

double NNfunction_sb_dLdL::synapse0x1d0d390() {
   return (neuron0x1d00b70()*-0.534632);
}

double NNfunction_sb_dLdL::synapse0x1d0d3d0() {
   return (neuron0x1d00eb0()*0.160512);
}

double NNfunction_sb_dLdL::synapse0x1d0d410() {
   return (neuron0x1d011f0()*-0.388687);
}

double NNfunction_sb_dLdL::synapse0x1d0d450() {
   return (neuron0x1d01530()*0.182602);
}

double NNfunction_sb_dLdL::synapse0x1d0d490() {
   return (neuron0x1d01870()*-0.257339);
}

double NNfunction_sb_dLdL::synapse0x1d0d4d0() {
   return (neuron0x1d01bb0()*-0.157753);
}

double NNfunction_sb_dLdL::synapse0x1d0d510() {
   return (neuron0x1d01ef0()*-0.106361);
}

double NNfunction_sb_dLdL::synapse0x1d0d550() {
   return (neuron0x1d02230()*-0.0722198);
}

double NNfunction_sb_dLdL::synapse0x1d0d590() {
   return (neuron0x1d02570()*0.52286);
}

double NNfunction_sb_dLdL::synapse0x1d0d5d0() {
   return (neuron0x1d028b0()*-0.443393);
}

double NNfunction_sb_dLdL::synapse0x1d0d610() {
   return (neuron0x1d02bf0()*0.107181);
}

double NNfunction_sb_dLdL::synapse0x1d0d650() {
   return (neuron0x1d02f30()*-0.136065);
}

double NNfunction_sb_dLdL::synapse0x1d0d690() {
   return (neuron0x1d03270()*0.22564);
}

double NNfunction_sb_dLdL::synapse0x1d0d120() {
   return (neuron0x1d035b0()*0.0626348);
}

double NNfunction_sb_dLdL::synapse0x1d0d160() {
   return (neuron0x1d03b10()*-0.125576);
}

double NNfunction_sb_dLdL::synapse0x1d0d7e0() {
   return (neuron0x1d03d30()*-0.0166941);
}

double NNfunction_sb_dLdL::synapse0x1d0d820() {
   return (neuron0x1d04070()*-0.125313);
}

double NNfunction_sb_dLdL::synapse0x1d0d860() {
   return (neuron0x1d043b0()*-0.0351808);
}

double NNfunction_sb_dLdL::synapse0x1d0d8a0() {
   return (neuron0x1d046f0()*-0.0633502);
}

double NNfunction_sb_dLdL::synapse0x1d0d8e0() {
   return (neuron0x1d04a30()*-0.0776435);
}

double NNfunction_sb_dLdL::synapse0x1d0d920() {
   return (neuron0x1d04d70()*-0.0338706);
}

double NNfunction_sb_dLdL::synapse0x1d0dca0() {
   return (neuron0x1d00240()*-0.0106154);
}

double NNfunction_sb_dLdL::synapse0x1d0dce0() {
   return (neuron0x1d004f0()*-0.000880418);
}

double NNfunction_sb_dLdL::synapse0x1d0dd20() {
   return (neuron0x1d00830()*-0.0685848);
}

double NNfunction_sb_dLdL::synapse0x1d0dd60() {
   return (neuron0x1d00b70()*-0.0194471);
}

double NNfunction_sb_dLdL::synapse0x1d0dda0() {
   return (neuron0x1d00eb0()*0.00337237);
}

double NNfunction_sb_dLdL::synapse0x1d0dde0() {
   return (neuron0x1d011f0()*-0.0124932);
}

double NNfunction_sb_dLdL::synapse0x1d0de20() {
   return (neuron0x1d01530()*0.00835869);
}

double NNfunction_sb_dLdL::synapse0x1d0de60() {
   return (neuron0x1d01870()*0.00111329);
}

double NNfunction_sb_dLdL::synapse0x1d0dea0() {
   return (neuron0x1d01bb0()*0.02246);
}

double NNfunction_sb_dLdL::synapse0x1d0dee0() {
   return (neuron0x1d01ef0()*-0.00618398);
}

double NNfunction_sb_dLdL::synapse0x1d0df20() {
   return (neuron0x1d02230()*-0.00269034);
}

double NNfunction_sb_dLdL::synapse0x1d0df60() {
   return (neuron0x1d02570()*-0.279869);
}

double NNfunction_sb_dLdL::synapse0x1d0dfa0() {
   return (neuron0x1d028b0()*0.379173);
}

double NNfunction_sb_dLdL::synapse0x1d0dfe0() {
   return (neuron0x1d02bf0()*-0.0302142);
}

double NNfunction_sb_dLdL::synapse0x1d0e020() {
   return (neuron0x1d02f30()*0.195696);
}

double NNfunction_sb_dLdL::synapse0x1d0e060() {
   return (neuron0x1d03270()*0.173859);
}

double NNfunction_sb_dLdL::synapse0x1d0daf0() {
   return (neuron0x1d035b0()*-0.0106583);
}

double NNfunction_sb_dLdL::synapse0x1d0db30() {
   return (neuron0x1d03b10()*0.186757);
}

double NNfunction_sb_dLdL::synapse0x1d0e1b0() {
   return (neuron0x1d03d30()*0.18573);
}

double NNfunction_sb_dLdL::synapse0x1d0e1f0() {
   return (neuron0x1d04070()*-0.00888647);
}

double NNfunction_sb_dLdL::synapse0x1d0e230() {
   return (neuron0x1d043b0()*-0.0254401);
}

double NNfunction_sb_dLdL::synapse0x1d0e270() {
   return (neuron0x1d046f0()*0.00935013);
}

double NNfunction_sb_dLdL::synapse0x1d0e2b0() {
   return (neuron0x1d04a30()*-0.0044907);
}

double NNfunction_sb_dLdL::synapse0x1d0e2f0() {
   return (neuron0x1d04d70()*0.00329405);
}

double NNfunction_sb_dLdL::synapse0x1d0e670() {
   return (neuron0x1d00240()*0.0119038);
}

double NNfunction_sb_dLdL::synapse0x1d0e6b0() {
   return (neuron0x1d004f0()*0.0186767);
}

double NNfunction_sb_dLdL::synapse0x1d0e6f0() {
   return (neuron0x1d00830()*0.097724);
}

double NNfunction_sb_dLdL::synapse0x1d0e730() {
   return (neuron0x1d00b70()*-0.621081);
}

double NNfunction_sb_dLdL::synapse0x1d0e770() {
   return (neuron0x1d00eb0()*0.0351475);
}

double NNfunction_sb_dLdL::synapse0x1d0e7b0() {
   return (neuron0x1d011f0()*0.00160967);
}

double NNfunction_sb_dLdL::synapse0x1d0e7f0() {
   return (neuron0x1d01530()*0.0362664);
}

double NNfunction_sb_dLdL::synapse0x1d0e830() {
   return (neuron0x1d01870()*-0.0570138);
}

double NNfunction_sb_dLdL::synapse0x1d0e870() {
   return (neuron0x1d01bb0()*0.0119367);
}

double NNfunction_sb_dLdL::synapse0x1d0e8b0() {
   return (neuron0x1d01ef0()*-0.201851);
}

double NNfunction_sb_dLdL::synapse0x1d0e8f0() {
   return (neuron0x1d02230()*0.0129129);
}

double NNfunction_sb_dLdL::synapse0x1d0e930() {
   return (neuron0x1d02570()*2.77773);
}

double NNfunction_sb_dLdL::synapse0x1d0e970() {
   return (neuron0x1d028b0()*-0.0632084);
}

double NNfunction_sb_dLdL::synapse0x1d0e9b0() {
   return (neuron0x1d02bf0()*-0.239385);
}

double NNfunction_sb_dLdL::synapse0x1d0e9f0() {
   return (neuron0x1d02f30()*0.0853646);
}

double NNfunction_sb_dLdL::synapse0x1d0ea30() {
   return (neuron0x1d03270()*0.0163514);
}

double NNfunction_sb_dLdL::synapse0x1d0e4c0() {
   return (neuron0x1d035b0()*-0.0856984);
}

double NNfunction_sb_dLdL::synapse0x1d0e500() {
   return (neuron0x1d03b10()*-0.119012);
}

double NNfunction_sb_dLdL::synapse0x1d0eb80() {
   return (neuron0x1d03d30()*-0.0231274);
}

double NNfunction_sb_dLdL::synapse0x1d0ebc0() {
   return (neuron0x1d04070()*-0.0325245);
}

double NNfunction_sb_dLdL::synapse0x1d0ec00() {
   return (neuron0x1d043b0()*0.0240928);
}

double NNfunction_sb_dLdL::synapse0x1d0ec40() {
   return (neuron0x1d046f0()*-0.0571616);
}

double NNfunction_sb_dLdL::synapse0x1d0ec80() {
   return (neuron0x1d04a30()*0.0932308);
}

double NNfunction_sb_dLdL::synapse0x1d0ecc0() {
   return (neuron0x1d04d70()*0.128808);
}

double NNfunction_sb_dLdL::synapse0x1d0f040() {
   return (neuron0x1d00240()*-0.0808165);
}

double NNfunction_sb_dLdL::synapse0x1d003d0() {
   return (neuron0x1d004f0()*0.0816052);
}

double NNfunction_sb_dLdL::synapse0x1d00410() {
   return (neuron0x1d00830()*-0.328923);
}

double NNfunction_sb_dLdL::synapse0x1d00710() {
   return (neuron0x1d00b70()*-0.49878);
}

double NNfunction_sb_dLdL::synapse0x1d00750() {
   return (neuron0x1d00eb0()*-0.459415);
}

double NNfunction_sb_dLdL::synapse0x1d00a50() {
   return (neuron0x1d011f0()*0.108478);
}

double NNfunction_sb_dLdL::synapse0x1d00a90() {
   return (neuron0x1d01530()*0.0486854);
}

double NNfunction_sb_dLdL::synapse0x1d00d90() {
   return (neuron0x1d01870()*-0.0650642);
}

double NNfunction_sb_dLdL::synapse0x1d00dd0() {
   return (neuron0x1d01bb0()*-0.328242);
}

double NNfunction_sb_dLdL::synapse0x1d010d0() {
   return (neuron0x1d01ef0()*0.23278);
}

double NNfunction_sb_dLdL::synapse0x1d01110() {
   return (neuron0x1d02230()*-0.241298);
}

double NNfunction_sb_dLdL::synapse0x1d01410() {
   return (neuron0x1d02570()*0.200552);
}

double NNfunction_sb_dLdL::synapse0x1d01450() {
   return (neuron0x1d028b0()*-0.209131);
}

double NNfunction_sb_dLdL::synapse0x1d01750() {
   return (neuron0x1d02bf0()*-0.621631);
}

double NNfunction_sb_dLdL::synapse0x1d01790() {
   return (neuron0x1d02f30()*-0.249178);
}

double NNfunction_sb_dLdL::synapse0x1d01a90() {
   return (neuron0x1d03270()*-0.37252);
}

double NNfunction_sb_dLdL::synapse0x1d01ad0() {
   return (neuron0x1d035b0()*-0.329395);
}

double NNfunction_sb_dLdL::synapse0x1d01dd0() {
   return (neuron0x1d03b10()*0.0610598);
}

double NNfunction_sb_dLdL::synapse0x1d01e10() {
   return (neuron0x1d03d30()*0.122875);
}

double NNfunction_sb_dLdL::synapse0x1d02110() {
   return (neuron0x1d04070()*0.37625);
}

double NNfunction_sb_dLdL::synapse0x1d02150() {
   return (neuron0x1d043b0()*-0.0403217);
}

double NNfunction_sb_dLdL::synapse0x1d02450() {
   return (neuron0x1d046f0()*-0.39892);
}

double NNfunction_sb_dLdL::synapse0x1d02490() {
   return (neuron0x1d04a30()*0.116898);
}

double NNfunction_sb_dLdL::synapse0x1d02790() {
   return (neuron0x1d04d70()*0.0343731);
}

double NNfunction_sb_dLdL::synapse0x1d027d0() {
   return (neuron0x1d00240()*0.103872);
}

double NNfunction_sb_dLdL::synapse0x1d03490() {
   return (neuron0x1d004f0()*-0.00794587);
}

double NNfunction_sb_dLdL::synapse0x1d034d0() {
   return (neuron0x1d00830()*-0.271773);
}

double NNfunction_sb_dLdL::synapse0x1d0ee90() {
   return (neuron0x1d00b70()*0.364636);
}

double NNfunction_sb_dLdL::synapse0x1d0eed0() {
   return (neuron0x1d00eb0()*-0.310805);
}

double NNfunction_sb_dLdL::synapse0x1d037d0() {
   return (neuron0x1d011f0()*0.197201);
}

double NNfunction_sb_dLdL::synapse0x1d03810() {
   return (neuron0x1d01530()*-0.229132);
}

double NNfunction_sb_dLdL::synapse0x1abb270() {
   return (neuron0x1d01870()*-0.235807);
}

double NNfunction_sb_dLdL::synapse0x1abb2b0() {
   return (neuron0x1d01bb0()*0.342497);
}

double NNfunction_sb_dLdL::synapse0x1d03f50() {
   return (neuron0x1d01ef0()*0.10695);
}

double NNfunction_sb_dLdL::synapse0x1d03f90() {
   return (neuron0x1d02230()*0.304168);
}

double NNfunction_sb_dLdL::synapse0x1d04290() {
   return (neuron0x1d02570()*-0.543687);
}

double NNfunction_sb_dLdL::synapse0x1d042d0() {
   return (neuron0x1d028b0()*0.107076);
}

double NNfunction_sb_dLdL::synapse0x1d045d0() {
   return (neuron0x1d02bf0()*0.170088);
}

double NNfunction_sb_dLdL::synapse0x1d04610() {
   return (neuron0x1d02f30()*-0.0293287);
}

double NNfunction_sb_dLdL::synapse0x1d04910() {
   return (neuron0x1d03270()*-0.196055);
}

double NNfunction_sb_dLdL::synapse0x1d04950() {
   return (neuron0x1d035b0()*-0.109945);
}

double NNfunction_sb_dLdL::synapse0x1d04c50() {
   return (neuron0x1d03b10()*-0.255927);
}

double NNfunction_sb_dLdL::synapse0x1d04c90() {
   return (neuron0x1d03d30()*-0.169481);
}

double NNfunction_sb_dLdL::synapse0x1d04f90() {
   return (neuron0x1d04070()*0.133646);
}

double NNfunction_sb_dLdL::synapse0x1d04fd0() {
   return (neuron0x1d043b0()*0.101228);
}

double NNfunction_sb_dLdL::synapse0x1d02ad0() {
   return (neuron0x1d046f0()*0.000811692);
}

double NNfunction_sb_dLdL::synapse0x1d02b10() {
   return (neuron0x1d04a30()*-0.142403);
}

double NNfunction_sb_dLdL::synapse0x1d10db0() {
   return (neuron0x1d04d70()*-0.0320811);
}

double NNfunction_sb_dLdL::synapse0x1d11130() {
   return (neuron0x1d00240()*0.0281558);
}

double NNfunction_sb_dLdL::synapse0x1d11170() {
   return (neuron0x1d004f0()*-0.0509421);
}

double NNfunction_sb_dLdL::synapse0x1d111b0() {
   return (neuron0x1d00830()*0.292609);
}

double NNfunction_sb_dLdL::synapse0x1d111f0() {
   return (neuron0x1d00b70()*-0.113386);
}

double NNfunction_sb_dLdL::synapse0x1d11230() {
   return (neuron0x1d00eb0()*-0.202456);
}

double NNfunction_sb_dLdL::synapse0x1d11270() {
   return (neuron0x1d011f0()*-0.0613999);
}

double NNfunction_sb_dLdL::synapse0x1d112b0() {
   return (neuron0x1d01530()*0.00314577);
}

double NNfunction_sb_dLdL::synapse0x1d112f0() {
   return (neuron0x1d01870()*0.016659);
}

double NNfunction_sb_dLdL::synapse0x1d11330() {
   return (neuron0x1d01bb0()*0.102152);
}

double NNfunction_sb_dLdL::synapse0x1d11370() {
   return (neuron0x1d01ef0()*0.0248377);
}

double NNfunction_sb_dLdL::synapse0x1d113b0() {
   return (neuron0x1d02230()*0.0834031);
}

double NNfunction_sb_dLdL::synapse0x1d113f0() {
   return (neuron0x1d02570()*-0.909517);
}

double NNfunction_sb_dLdL::synapse0x1d11430() {
   return (neuron0x1d028b0()*0.0544601);
}

double NNfunction_sb_dLdL::synapse0x1d11470() {
   return (neuron0x1d02bf0()*-0.022495);
}

double NNfunction_sb_dLdL::synapse0x1d114b0() {
   return (neuron0x1d02f30()*-0.50502);
}

double NNfunction_sb_dLdL::synapse0x1d114f0() {
   return (neuron0x1d03270()*-0.105902);
}

double NNfunction_sb_dLdL::synapse0x1d10f80() {
   return (neuron0x1d035b0()*0.113889);
}

double NNfunction_sb_dLdL::synapse0x1d10fc0() {
   return (neuron0x1d03b10()*-0.0126755);
}

double NNfunction_sb_dLdL::synapse0x1d11640() {
   return (neuron0x1d03d30()*0.0315948);
}

double NNfunction_sb_dLdL::synapse0x1d11680() {
   return (neuron0x1d04070()*-0.0232364);
}

double NNfunction_sb_dLdL::synapse0x1d116c0() {
   return (neuron0x1d043b0()*-0.0865486);
}

double NNfunction_sb_dLdL::synapse0x1d11700() {
   return (neuron0x1d046f0()*-0.0121383);
}

double NNfunction_sb_dLdL::synapse0x1d11740() {
   return (neuron0x1d04a30()*0.0682315);
}

double NNfunction_sb_dLdL::synapse0x1d11780() {
   return (neuron0x1d04d70()*0.0256756);
}

double NNfunction_sb_dLdL::synapse0x1d11b00() {
   return (neuron0x1d00240()*-0.0754877);
}

double NNfunction_sb_dLdL::synapse0x1d11b40() {
   return (neuron0x1d004f0()*0.0245347);
}

double NNfunction_sb_dLdL::synapse0x1d11b80() {
   return (neuron0x1d00830()*0.476336);
}

double NNfunction_sb_dLdL::synapse0x1d11bc0() {
   return (neuron0x1d00b70()*0.436661);
}

double NNfunction_sb_dLdL::synapse0x1d11c00() {
   return (neuron0x1d00eb0()*0.0811347);
}

double NNfunction_sb_dLdL::synapse0x1d11c40() {
   return (neuron0x1d011f0()*-0.0259965);
}

double NNfunction_sb_dLdL::synapse0x1d11c80() {
   return (neuron0x1d01530()*-0.140988);
}

double NNfunction_sb_dLdL::synapse0x1d11cc0() {
   return (neuron0x1d01870()*0.233269);
}

double NNfunction_sb_dLdL::synapse0x1d11d00() {
   return (neuron0x1d01bb0()*0.0626887);
}

double NNfunction_sb_dLdL::synapse0x1d11d40() {
   return (neuron0x1d01ef0()*-0.0649545);
}

double NNfunction_sb_dLdL::synapse0x1d11d80() {
   return (neuron0x1d02230()*0.0303556);
}

double NNfunction_sb_dLdL::synapse0x1d11dc0() {
   return (neuron0x1d02570()*1.12944);
}

double NNfunction_sb_dLdL::synapse0x1d11e00() {
   return (neuron0x1d028b0()*-0.0646655);
}

double NNfunction_sb_dLdL::synapse0x1d11e40() {
   return (neuron0x1d02bf0()*0.137005);
}

double NNfunction_sb_dLdL::synapse0x1d11e80() {
   return (neuron0x1d02f30()*-0.0513028);
}

double NNfunction_sb_dLdL::synapse0x1d11ec0() {
   return (neuron0x1d03270()*-0.265096);
}

double NNfunction_sb_dLdL::synapse0x1d11950() {
   return (neuron0x1d035b0()*0.119177);
}

double NNfunction_sb_dLdL::synapse0x1d11990() {
   return (neuron0x1d03b10()*-0.15346);
}

double NNfunction_sb_dLdL::synapse0x1d12010() {
   return (neuron0x1d03d30()*-0.0464196);
}

double NNfunction_sb_dLdL::synapse0x1d12050() {
   return (neuron0x1d04070()*-0.0315423);
}

double NNfunction_sb_dLdL::synapse0x1d12090() {
   return (neuron0x1d043b0()*0.0974219);
}

double NNfunction_sb_dLdL::synapse0x1d120d0() {
   return (neuron0x1d046f0()*-0.0513446);
}

double NNfunction_sb_dLdL::synapse0x1d12110() {
   return (neuron0x1d04a30()*-0.00592999);
}

double NNfunction_sb_dLdL::synapse0x1d12150() {
   return (neuron0x1d04d70()*-0.0146358);
}

double NNfunction_sb_dLdL::synapse0x1d124d0() {
   return (neuron0x1d00240()*-0.0934458);
}

double NNfunction_sb_dLdL::synapse0x1d12510() {
   return (neuron0x1d004f0()*0.102805);
}

double NNfunction_sb_dLdL::synapse0x1d12550() {
   return (neuron0x1d00830()*-0.0875401);
}

double NNfunction_sb_dLdL::synapse0x1d12590() {
   return (neuron0x1d00b70()*-0.0996665);
}

double NNfunction_sb_dLdL::synapse0x1d125d0() {
   return (neuron0x1d00eb0()*0.145647);
}

double NNfunction_sb_dLdL::synapse0x1d12610() {
   return (neuron0x1d011f0()*-0.121888);
}

double NNfunction_sb_dLdL::synapse0x1d12650() {
   return (neuron0x1d01530()*-0.044648);
}

double NNfunction_sb_dLdL::synapse0x1d12690() {
   return (neuron0x1d01870()*-0.0274228);
}

double NNfunction_sb_dLdL::synapse0x1d126d0() {
   return (neuron0x1d01bb0()*-0.737743);
}

double NNfunction_sb_dLdL::synapse0x1d12710() {
   return (neuron0x1d01ef0()*-0.0986211);
}

double NNfunction_sb_dLdL::synapse0x1d12750() {
   return (neuron0x1d02230()*-0.156123);
}

double NNfunction_sb_dLdL::synapse0x1d12790() {
   return (neuron0x1d02570()*0.424572);
}

double NNfunction_sb_dLdL::synapse0x1d127d0() {
   return (neuron0x1d028b0()*-0.240754);
}

double NNfunction_sb_dLdL::synapse0x1d12810() {
   return (neuron0x1d02bf0()*-0.13906);
}

double NNfunction_sb_dLdL::synapse0x1d12850() {
   return (neuron0x1d02f30()*0.00117327);
}

double NNfunction_sb_dLdL::synapse0x1d12890() {
   return (neuron0x1d03270()*0.189702);
}

double NNfunction_sb_dLdL::synapse0x1d12320() {
   return (neuron0x1d035b0()*-0.191589);
}

double NNfunction_sb_dLdL::synapse0x1d12360() {
   return (neuron0x1d03b10()*0.0114446);
}

double NNfunction_sb_dLdL::synapse0x1d129e0() {
   return (neuron0x1d03d30()*0.0588084);
}

double NNfunction_sb_dLdL::synapse0x1d12a20() {
   return (neuron0x1d04070()*-0.0923169);
}

double NNfunction_sb_dLdL::synapse0x1d12a60() {
   return (neuron0x1d043b0()*-0.188517);
}

double NNfunction_sb_dLdL::synapse0x1d12aa0() {
   return (neuron0x1d046f0()*0.0105781);
}

double NNfunction_sb_dLdL::synapse0x1d12ae0() {
   return (neuron0x1d04a30()*-0.130595);
}

double NNfunction_sb_dLdL::synapse0x1d12b20() {
   return (neuron0x1d04d70()*-0.0810606);
}

double NNfunction_sb_dLdL::synapse0x1d12ea0() {
   return (neuron0x1d00240()*-0.170216);
}

double NNfunction_sb_dLdL::synapse0x1d12ee0() {
   return (neuron0x1d004f0()*0.0445802);
}

double NNfunction_sb_dLdL::synapse0x1d12f20() {
   return (neuron0x1d00830()*-0.270749);
}

double NNfunction_sb_dLdL::synapse0x1d12f60() {
   return (neuron0x1d00b70()*-0.698713);
}

double NNfunction_sb_dLdL::synapse0x1d12fa0() {
   return (neuron0x1d00eb0()*0.386268);
}

double NNfunction_sb_dLdL::synapse0x1d12fe0() {
   return (neuron0x1d011f0()*0.189264);
}

double NNfunction_sb_dLdL::synapse0x1d13020() {
   return (neuron0x1d01530()*-0.259298);
}

double NNfunction_sb_dLdL::synapse0x1d13060() {
   return (neuron0x1d01870()*-0.150343);
}

double NNfunction_sb_dLdL::synapse0x1d130a0() {
   return (neuron0x1d01bb0()*-0.0879418);
}

double NNfunction_sb_dLdL::synapse0x1d130e0() {
   return (neuron0x1d01ef0()*0.109936);
}

double NNfunction_sb_dLdL::synapse0x1d13120() {
   return (neuron0x1d02230()*0.0176905);
}

double NNfunction_sb_dLdL::synapse0x1d13160() {
   return (neuron0x1d02570()*-0.42682);
}

double NNfunction_sb_dLdL::synapse0x1d131a0() {
   return (neuron0x1d028b0()*0.0122196);
}

double NNfunction_sb_dLdL::synapse0x1d131e0() {
   return (neuron0x1d02bf0()*0.0414586);
}

double NNfunction_sb_dLdL::synapse0x1d13220() {
   return (neuron0x1d02f30()*-0.379874);
}

double NNfunction_sb_dLdL::synapse0x1d13260() {
   return (neuron0x1d03270()*0.066458);
}

double NNfunction_sb_dLdL::synapse0x1d12cf0() {
   return (neuron0x1d035b0()*0.220009);
}

double NNfunction_sb_dLdL::synapse0x1d12d30() {
   return (neuron0x1d03b10()*0.0717485);
}

double NNfunction_sb_dLdL::synapse0x1d133b0() {
   return (neuron0x1d03d30()*-0.307167);
}

double NNfunction_sb_dLdL::synapse0x1d133f0() {
   return (neuron0x1d04070()*-0.049814);
}

double NNfunction_sb_dLdL::synapse0x1d13430() {
   return (neuron0x1d043b0()*0.0660764);
}

double NNfunction_sb_dLdL::synapse0x1d13470() {
   return (neuron0x1d046f0()*0.21592);
}

double NNfunction_sb_dLdL::synapse0x1d134b0() {
   return (neuron0x1d04a30()*0.0503109);
}

double NNfunction_sb_dLdL::synapse0x1d134f0() {
   return (neuron0x1d04d70()*-0.389508);
}

double NNfunction_sb_dLdL::synapse0x1d13870() {
   return (neuron0x1d00240()*0.00712879);
}

double NNfunction_sb_dLdL::synapse0x1d138b0() {
   return (neuron0x1d004f0()*-0.0169825);
}

double NNfunction_sb_dLdL::synapse0x1d138f0() {
   return (neuron0x1d00830()*-0.0387863);
}

double NNfunction_sb_dLdL::synapse0x1d13930() {
   return (neuron0x1d00b70()*0.601556);
}

double NNfunction_sb_dLdL::synapse0x1d13970() {
   return (neuron0x1d00eb0()*-0.00876067);
}

double NNfunction_sb_dLdL::synapse0x1d139b0() {
   return (neuron0x1d011f0()*-0.0116716);
}

double NNfunction_sb_dLdL::synapse0x1d139f0() {
   return (neuron0x1d01530()*-0.0257217);
}

double NNfunction_sb_dLdL::synapse0x1d13a30() {
   return (neuron0x1d01870()*-0.0041212);
}

double NNfunction_sb_dLdL::synapse0x1d13a70() {
   return (neuron0x1d01bb0()*-0.0325975);
}

double NNfunction_sb_dLdL::synapse0x1d0bc30() {
   return (neuron0x1d01ef0()*-0.0617965);
}

double NNfunction_sb_dLdL::synapse0x1d0bc70() {
   return (neuron0x1d02230()*-0.00554519);
}

double NNfunction_sb_dLdL::synapse0x1d0bcb0() {
   return (neuron0x1d02570()*-2.82438);
}

double NNfunction_sb_dLdL::synapse0x1d0bcf0() {
   return (neuron0x1d028b0()*0.00540832);
}

double NNfunction_sb_dLdL::synapse0x1d0bd30() {
   return (neuron0x1d02bf0()*-0.113816);
}

double NNfunction_sb_dLdL::synapse0x1d0bd70() {
   return (neuron0x1d02f30()*-0.0181522);
}

double NNfunction_sb_dLdL::synapse0x1d0bdb0() {
   return (neuron0x1d03270()*-0.00581034);
}

double NNfunction_sb_dLdL::synapse0x1d136c0() {
   return (neuron0x1d035b0()*-0.0998688);
}

double NNfunction_sb_dLdL::synapse0x1d13700() {
   return (neuron0x1d03b10()*-0.0393518);
}

double NNfunction_sb_dLdL::synapse0x1d0bf00() {
   return (neuron0x1d03d30()*-0.00321936);
}

double NNfunction_sb_dLdL::synapse0x1d0bf40() {
   return (neuron0x1d04070()*-0.000319898);
}

double NNfunction_sb_dLdL::synapse0x1d0bf80() {
   return (neuron0x1d043b0()*0.00635424);
}

double NNfunction_sb_dLdL::synapse0x1d0bfc0() {
   return (neuron0x1d046f0()*-0.0300672);
}

double NNfunction_sb_dLdL::synapse0x1d0c000() {
   return (neuron0x1d04a30()*0.0254466);
}

double NNfunction_sb_dLdL::synapse0x1d0c040() {
   return (neuron0x1d04d70()*0.0143477);
}

double NNfunction_sb_dLdL::synapse0x1d0c3c0() {
   return (neuron0x1d00240()*-0.00324316);
}

double NNfunction_sb_dLdL::synapse0x1d0c400() {
   return (neuron0x1d004f0()*0.00503154);
}

double NNfunction_sb_dLdL::synapse0x1d0c440() {
   return (neuron0x1d00830()*-0.00897284);
}

double NNfunction_sb_dLdL::synapse0x1d0c480() {
   return (neuron0x1d00b70()*-2.5825);
}

double NNfunction_sb_dLdL::synapse0x1d0c4c0() {
   return (neuron0x1d00eb0()*0.0106295);
}

double NNfunction_sb_dLdL::synapse0x1d0c500() {
   return (neuron0x1d011f0()*-0.00612861);
}

double NNfunction_sb_dLdL::synapse0x1d0c540() {
   return (neuron0x1d01530()*0.00186495);
}

double NNfunction_sb_dLdL::synapse0x1d0c580() {
   return (neuron0x1d01870()*0.00945601);
}

double NNfunction_sb_dLdL::synapse0x1d0c5c0() {
   return (neuron0x1d01bb0()*-0.000382728);
}

double NNfunction_sb_dLdL::synapse0x1d0c600() {
   return (neuron0x1d01ef0()*-0.00257987);
}

double NNfunction_sb_dLdL::synapse0x1d0c640() {
   return (neuron0x1d02230()*0.000896282);
}

double NNfunction_sb_dLdL::synapse0x1d0c680() {
   return (neuron0x1d02570()*-0.132441);
}

double NNfunction_sb_dLdL::synapse0x1d0c6c0() {
   return (neuron0x1d028b0()*0.00270794);
}

double NNfunction_sb_dLdL::synapse0x1d0c700() {
   return (neuron0x1d02bf0()*0.00545668);
}

double NNfunction_sb_dLdL::synapse0x1d0c740() {
   return (neuron0x1d02f30()*-0.005682);
}

double NNfunction_sb_dLdL::synapse0x1d0c780() {
   return (neuron0x1d03270()*-0.00397998);
}

double NNfunction_sb_dLdL::synapse0x1d0c210() {
   return (neuron0x1d035b0()*-0.000234844);
}

double NNfunction_sb_dLdL::synapse0x1d0c250() {
   return (neuron0x1d03b10()*0.00894897);
}

double NNfunction_sb_dLdL::synapse0x1d0c8d0() {
   return (neuron0x1d03d30()*0.0177363);
}

double NNfunction_sb_dLdL::synapse0x1d0c910() {
   return (neuron0x1d04070()*-0.000848873);
}

double NNfunction_sb_dLdL::synapse0x1d0c950() {
   return (neuron0x1d043b0()*-0.00601176);
}

double NNfunction_sb_dLdL::synapse0x1d0c990() {
   return (neuron0x1d046f0()*9.13991e-05);
}

double NNfunction_sb_dLdL::synapse0x1d0c9d0() {
   return (neuron0x1d04a30()*-0.00475989);
}

double NNfunction_sb_dLdL::synapse0x1d0ca10() {
   return (neuron0x1d04d70()*-0.00170838);
}

double NNfunction_sb_dLdL::synapse0x1d0cbe0() {
   return (neuron0x1d00240()*0.0134265);
}

double NNfunction_sb_dLdL::synapse0x1d15c70() {
   return (neuron0x1d004f0()*0.000495833);
}

double NNfunction_sb_dLdL::synapse0x1d15cb0() {
   return (neuron0x1d00830()*-0.0119851);
}

double NNfunction_sb_dLdL::synapse0x1d15cf0() {
   return (neuron0x1d00b70()*1.50722);
}

double NNfunction_sb_dLdL::synapse0x1d15d30() {
   return (neuron0x1d00eb0()*-0.0157604);
}

double NNfunction_sb_dLdL::synapse0x1d15d70() {
   return (neuron0x1d011f0()*0.00486379);
}

double NNfunction_sb_dLdL::synapse0x1d15db0() {
   return (neuron0x1d01530()*-0.00032219);
}

double NNfunction_sb_dLdL::synapse0x1d15df0() {
   return (neuron0x1d01870()*-0.0206495);
}

double NNfunction_sb_dLdL::synapse0x1d15e30() {
   return (neuron0x1d01bb0()*-0.00615718);
}

double NNfunction_sb_dLdL::synapse0x1d15e70() {
   return (neuron0x1d01ef0()*-0.00851013);
}

double NNfunction_sb_dLdL::synapse0x1d15eb0() {
   return (neuron0x1d02230()*0.0136235);
}

double NNfunction_sb_dLdL::synapse0x1d15ef0() {
   return (neuron0x1d02570()*0.0174589);
}

double NNfunction_sb_dLdL::synapse0x1d15f30() {
   return (neuron0x1d028b0()*0.00459055);
}

double NNfunction_sb_dLdL::synapse0x1d15f70() {
   return (neuron0x1d02bf0()*0.00152617);
}

double NNfunction_sb_dLdL::synapse0x1d15fb0() {
   return (neuron0x1d02f30()*0.0386642);
}

double NNfunction_sb_dLdL::synapse0x1d15ff0() {
   return (neuron0x1d03270()*-0.0105432);
}

double NNfunction_sb_dLdL::synapse0x1d15ac0() {
   return (neuron0x1d035b0()*0.012795);
}

double NNfunction_sb_dLdL::synapse0x1d15b00() {
   return (neuron0x1d03b10()*-0.00163462);
}

double NNfunction_sb_dLdL::synapse0x1d16140() {
   return (neuron0x1d03d30()*-0.0107309);
}

double NNfunction_sb_dLdL::synapse0x1d16180() {
   return (neuron0x1d04070()*-0.00394593);
}

double NNfunction_sb_dLdL::synapse0x1d161c0() {
   return (neuron0x1d043b0()*0.0143376);
}

double NNfunction_sb_dLdL::synapse0x1d16200() {
   return (neuron0x1d046f0()*0.00194886);
}

double NNfunction_sb_dLdL::synapse0x1d16240() {
   return (neuron0x1d04a30()*0.00677224);
}

double NNfunction_sb_dLdL::synapse0x1d16280() {
   return (neuron0x1d04d70()*-0.00677275);
}

double NNfunction_sb_dLdL::synapse0x1d16600() {
   return (neuron0x1d00240()*0.00123704);
}

double NNfunction_sb_dLdL::synapse0x1d16640() {
   return (neuron0x1d004f0()*0.0253885);
}

double NNfunction_sb_dLdL::synapse0x1d16680() {
   return (neuron0x1d00830()*0.120944);
}

double NNfunction_sb_dLdL::synapse0x1d166c0() {
   return (neuron0x1d00b70()*1.79379);
}

double NNfunction_sb_dLdL::synapse0x1d16700() {
   return (neuron0x1d00eb0()*0.000821817);
}

double NNfunction_sb_dLdL::synapse0x1d16740() {
   return (neuron0x1d011f0()*-0.0213137);
}

double NNfunction_sb_dLdL::synapse0x1d16780() {
   return (neuron0x1d01530()*0.0505829);
}

double NNfunction_sb_dLdL::synapse0x1d167c0() {
   return (neuron0x1d01870()*-0.077868);
}

double NNfunction_sb_dLdL::synapse0x1d16800() {
   return (neuron0x1d01bb0()*-0.0947265);
}

double NNfunction_sb_dLdL::synapse0x1d16840() {
   return (neuron0x1d01ef0()*-0.00528424);
}

double NNfunction_sb_dLdL::synapse0x1d16880() {
   return (neuron0x1d02230()*-0.071757);
}

double NNfunction_sb_dLdL::synapse0x1d168c0() {
   return (neuron0x1d02570()*-1.36607);
}

double NNfunction_sb_dLdL::synapse0x1d16900() {
   return (neuron0x1d028b0()*-0.0224095);
}

double NNfunction_sb_dLdL::synapse0x1d16940() {
   return (neuron0x1d02bf0()*-0.0889246);
}

double NNfunction_sb_dLdL::synapse0x1d16980() {
   return (neuron0x1d02f30()*-0.0197231);
}

double NNfunction_sb_dLdL::synapse0x1d169c0() {
   return (neuron0x1d03270()*0.00519764);
}

double NNfunction_sb_dLdL::synapse0x1d16450() {
   return (neuron0x1d035b0()*-0.0544848);
}

double NNfunction_sb_dLdL::synapse0x1d16490() {
   return (neuron0x1d03b10()*0.0253737);
}

double NNfunction_sb_dLdL::synapse0x1d16b10() {
   return (neuron0x1d03d30()*-0.0181087);
}

double NNfunction_sb_dLdL::synapse0x1d16b50() {
   return (neuron0x1d04070()*-0.00890188);
}

double NNfunction_sb_dLdL::synapse0x1d16b90() {
   return (neuron0x1d043b0()*-0.0537672);
}

double NNfunction_sb_dLdL::synapse0x1d16bd0() {
   return (neuron0x1d046f0()*-0.0363342);
}

double NNfunction_sb_dLdL::synapse0x1d16c10() {
   return (neuron0x1d04a30()*0.0419987);
}

double NNfunction_sb_dLdL::synapse0x1d16c50() {
   return (neuron0x1d04d70()*-0.0143006);
}

double NNfunction_sb_dLdL::synapse0x1d16fd0() {
   return (neuron0x1d00240()*-0.300683);
}

double NNfunction_sb_dLdL::synapse0x1d17010() {
   return (neuron0x1d004f0()*-0.0678447);
}

double NNfunction_sb_dLdL::synapse0x1d17050() {
   return (neuron0x1d00830()*-0.0993798);
}

double NNfunction_sb_dLdL::synapse0x1d17090() {
   return (neuron0x1d00b70()*-0.512175);
}

double NNfunction_sb_dLdL::synapse0x1d170d0() {
   return (neuron0x1d00eb0()*-0.253865);
}

double NNfunction_sb_dLdL::synapse0x1d17110() {
   return (neuron0x1d011f0()*0.229349);
}

double NNfunction_sb_dLdL::synapse0x1d17150() {
   return (neuron0x1d01530()*-0.116186);
}

double NNfunction_sb_dLdL::synapse0x1d17190() {
   return (neuron0x1d01870()*-0.0055039);
}

double NNfunction_sb_dLdL::synapse0x1d171d0() {
   return (neuron0x1d01bb0()*0.113196);
}

double NNfunction_sb_dLdL::synapse0x1d17210() {
   return (neuron0x1d01ef0()*-0.0326904);
}

double NNfunction_sb_dLdL::synapse0x1d17250() {
   return (neuron0x1d02230()*-0.216988);
}

double NNfunction_sb_dLdL::synapse0x1d17290() {
   return (neuron0x1d02570()*-0.00267197);
}

double NNfunction_sb_dLdL::synapse0x1d172d0() {
   return (neuron0x1d028b0()*0.364794);
}

double NNfunction_sb_dLdL::synapse0x1d17310() {
   return (neuron0x1d02bf0()*0.0177145);
}

double NNfunction_sb_dLdL::synapse0x1d17350() {
   return (neuron0x1d02f30()*-0.11934);
}

double NNfunction_sb_dLdL::synapse0x1d17390() {
   return (neuron0x1d03270()*0.104655);
}

double NNfunction_sb_dLdL::synapse0x1d16e20() {
   return (neuron0x1d035b0()*0.00339419);
}

double NNfunction_sb_dLdL::synapse0x1d16e60() {
   return (neuron0x1d03b10()*-0.00849247);
}

double NNfunction_sb_dLdL::synapse0x1d174e0() {
   return (neuron0x1d03d30()*-0.114251);
}

double NNfunction_sb_dLdL::synapse0x1d17520() {
   return (neuron0x1d04070()*0.344611);
}

double NNfunction_sb_dLdL::synapse0x1d17560() {
   return (neuron0x1d043b0()*0.0704189);
}

double NNfunction_sb_dLdL::synapse0x1d175a0() {
   return (neuron0x1d046f0()*0.00153466);
}

double NNfunction_sb_dLdL::synapse0x1d175e0() {
   return (neuron0x1d04a30()*0.188257);
}

double NNfunction_sb_dLdL::synapse0x1d17620() {
   return (neuron0x1d04d70()*-0.0865267);
}

double NNfunction_sb_dLdL::synapse0x1d179a0() {
   return (neuron0x1d00240()*-0.022913);
}

double NNfunction_sb_dLdL::synapse0x1d179e0() {
   return (neuron0x1d004f0()*-0.0148502);
}

double NNfunction_sb_dLdL::synapse0x1d17a20() {
   return (neuron0x1d00830()*0.0491301);
}

double NNfunction_sb_dLdL::synapse0x1d17a60() {
   return (neuron0x1d00b70()*-0.13444);
}

double NNfunction_sb_dLdL::synapse0x1d17aa0() {
   return (neuron0x1d00eb0()*-0.0111537);
}

double NNfunction_sb_dLdL::synapse0x1d17ae0() {
   return (neuron0x1d011f0()*0.00891478);
}

double NNfunction_sb_dLdL::synapse0x1d17b20() {
   return (neuron0x1d01530()*-0.0056632);
}

double NNfunction_sb_dLdL::synapse0x1d17b60() {
   return (neuron0x1d01870()*-0.00955959);
}

double NNfunction_sb_dLdL::synapse0x1d17ba0() {
   return (neuron0x1d01bb0()*0.0208083);
}

double NNfunction_sb_dLdL::synapse0x1d17be0() {
   return (neuron0x1d01ef0()*0.103604);
}

double NNfunction_sb_dLdL::synapse0x1d17c20() {
   return (neuron0x1d02230()*0.0542626);
}

double NNfunction_sb_dLdL::synapse0x1d17c60() {
   return (neuron0x1d02570()*-1.01308);
}

double NNfunction_sb_dLdL::synapse0x1d17ca0() {
   return (neuron0x1d028b0()*0.0553252);
}

double NNfunction_sb_dLdL::synapse0x1d17ce0() {
   return (neuron0x1d02bf0()*-0.0164137);
}

double NNfunction_sb_dLdL::synapse0x1d17d20() {
   return (neuron0x1d02f30()*0.0135102);
}

double NNfunction_sb_dLdL::synapse0x1d17d60() {
   return (neuron0x1d03270()*0.0310746);
}

double NNfunction_sb_dLdL::synapse0x1d177f0() {
   return (neuron0x1d035b0()*-0.00846487);
}

double NNfunction_sb_dLdL::synapse0x1d17830() {
   return (neuron0x1d03b10()*0.0117252);
}

double NNfunction_sb_dLdL::synapse0x1d17eb0() {
   return (neuron0x1d03d30()*0.0134179);
}

double NNfunction_sb_dLdL::synapse0x1d17ef0() {
   return (neuron0x1d04070()*-0.00694357);
}

double NNfunction_sb_dLdL::synapse0x1d17f30() {
   return (neuron0x1d043b0()*-0.00872475);
}

double NNfunction_sb_dLdL::synapse0x1d17f70() {
   return (neuron0x1d046f0()*-0.00636845);
}

double NNfunction_sb_dLdL::synapse0x1d17fb0() {
   return (neuron0x1d04a30()*0.00307466);
}

double NNfunction_sb_dLdL::synapse0x1d17ff0() {
   return (neuron0x1d04d70()*0.00694808);
}

double NNfunction_sb_dLdL::synapse0x1d18370() {
   return (neuron0x1d00240()*0.0160457);
}

double NNfunction_sb_dLdL::synapse0x1d183b0() {
   return (neuron0x1d004f0()*-0.114264);
}

double NNfunction_sb_dLdL::synapse0x1d183f0() {
   return (neuron0x1d00830()*-0.086993);
}

double NNfunction_sb_dLdL::synapse0x1d18430() {
   return (neuron0x1d00b70()*0.469787);
}

double NNfunction_sb_dLdL::synapse0x1d18470() {
   return (neuron0x1d00eb0()*0.109372);
}

double NNfunction_sb_dLdL::synapse0x1d184b0() {
   return (neuron0x1d011f0()*-0.2168);
}

double NNfunction_sb_dLdL::synapse0x1d184f0() {
   return (neuron0x1d01530()*-0.0442773);
}

double NNfunction_sb_dLdL::synapse0x1d18530() {
   return (neuron0x1d01870()*-0.00923362);
}

double NNfunction_sb_dLdL::synapse0x1d18570() {
   return (neuron0x1d01bb0()*-0.28189);
}

double NNfunction_sb_dLdL::synapse0x1d185b0() {
   return (neuron0x1d01ef0()*-0.122628);
}

double NNfunction_sb_dLdL::synapse0x1d185f0() {
   return (neuron0x1d02230()*-0.0494174);
}

double NNfunction_sb_dLdL::synapse0x1d18630() {
   return (neuron0x1d02570()*0.932708);
}

double NNfunction_sb_dLdL::synapse0x1d18670() {
   return (neuron0x1d028b0()*0.221463);
}

double NNfunction_sb_dLdL::synapse0x1d186b0() {
   return (neuron0x1d02bf0()*-0.0420069);
}

double NNfunction_sb_dLdL::synapse0x1d186f0() {
   return (neuron0x1d02f30()*0.0787852);
}

double NNfunction_sb_dLdL::synapse0x1d18730() {
   return (neuron0x1d03270()*-0.0738387);
}

double NNfunction_sb_dLdL::synapse0x1d181c0() {
   return (neuron0x1d035b0()*0.158399);
}

double NNfunction_sb_dLdL::synapse0x1d18200() {
   return (neuron0x1d03b10()*0.0393926);
}

double NNfunction_sb_dLdL::synapse0x1d18880() {
   return (neuron0x1d03d30()*0.190932);
}

double NNfunction_sb_dLdL::synapse0x1d188c0() {
   return (neuron0x1d04070()*0.194182);
}

double NNfunction_sb_dLdL::synapse0x1d18900() {
   return (neuron0x1d043b0()*-0.122996);
}

double NNfunction_sb_dLdL::synapse0x1d18940() {
   return (neuron0x1d046f0()*-0.149006);
}

double NNfunction_sb_dLdL::synapse0x1d18980() {
   return (neuron0x1d04a30()*0.169639);
}

double NNfunction_sb_dLdL::synapse0x1d189c0() {
   return (neuron0x1d04d70()*-0.152478);
}

double NNfunction_sb_dLdL::synapse0x1d18d40() {
   return (neuron0x1d00240()*-0.0505581);
}

double NNfunction_sb_dLdL::synapse0x1d18d80() {
   return (neuron0x1d004f0()*0.0522349);
}

double NNfunction_sb_dLdL::synapse0x1d18dc0() {
   return (neuron0x1d00830()*0.0369107);
}

double NNfunction_sb_dLdL::synapse0x1d18e00() {
   return (neuron0x1d00b70()*0.028379);
}

double NNfunction_sb_dLdL::synapse0x1d18e40() {
   return (neuron0x1d00eb0()*0.0188663);
}

double NNfunction_sb_dLdL::synapse0x1d18e80() {
   return (neuron0x1d011f0()*0.0929458);
}

double NNfunction_sb_dLdL::synapse0x1d18ec0() {
   return (neuron0x1d01530()*0.0201029);
}

double NNfunction_sb_dLdL::synapse0x1d18f00() {
   return (neuron0x1d01870()*0.112045);
}

double NNfunction_sb_dLdL::synapse0x1d18f40() {
   return (neuron0x1d01bb0()*0.153497);
}

double NNfunction_sb_dLdL::synapse0x1d18f80() {
   return (neuron0x1d01ef0()*-0.497558);
}

double NNfunction_sb_dLdL::synapse0x1d18fc0() {
   return (neuron0x1d02230()*-0.499098);
}

double NNfunction_sb_dLdL::synapse0x1d19000() {
   return (neuron0x1d02570()*1.23893);
}

double NNfunction_sb_dLdL::synapse0x1d19040() {
   return (neuron0x1d028b0()*-0.0348801);
}

double NNfunction_sb_dLdL::synapse0x1d19080() {
   return (neuron0x1d02bf0()*0.229029);
}

double NNfunction_sb_dLdL::synapse0x1d190c0() {
   return (neuron0x1d02f30()*0.0132059);
}

double NNfunction_sb_dLdL::synapse0x1d19100() {
   return (neuron0x1d03270()*0.150904);
}

double NNfunction_sb_dLdL::synapse0x1d18b90() {
   return (neuron0x1d035b0()*0.251654);
}

double NNfunction_sb_dLdL::synapse0x1d18bd0() {
   return (neuron0x1d03b10()*0.203089);
}

double NNfunction_sb_dLdL::synapse0x1d19250() {
   return (neuron0x1d03d30()*-0.0891538);
}

double NNfunction_sb_dLdL::synapse0x1d19290() {
   return (neuron0x1d04070()*-0.161119);
}

double NNfunction_sb_dLdL::synapse0x1d192d0() {
   return (neuron0x1d043b0()*-0.0667703);
}

double NNfunction_sb_dLdL::synapse0x1d19310() {
   return (neuron0x1d046f0()*0.0253495);
}

double NNfunction_sb_dLdL::synapse0x1d19350() {
   return (neuron0x1d04a30()*-0.0325786);
}

double NNfunction_sb_dLdL::synapse0x1d19390() {
   return (neuron0x1d04d70()*0.273774);
}

double NNfunction_sb_dLdL::synapse0x1d19710() {
   return (neuron0x1d00240()*-0.00144954);
}

double NNfunction_sb_dLdL::synapse0x1d19750() {
   return (neuron0x1d004f0()*-0.0761384);
}

double NNfunction_sb_dLdL::synapse0x1d19790() {
   return (neuron0x1d00830()*-0.467741);
}

double NNfunction_sb_dLdL::synapse0x1d197d0() {
   return (neuron0x1d00b70()*0.488627);
}

double NNfunction_sb_dLdL::synapse0x1d19810() {
   return (neuron0x1d00eb0()*0.148301);
}

double NNfunction_sb_dLdL::synapse0x1d19850() {
   return (neuron0x1d011f0()*-0.121492);
}

double NNfunction_sb_dLdL::synapse0x1d19890() {
   return (neuron0x1d01530()*0.0173313);
}

double NNfunction_sb_dLdL::synapse0x1d198d0() {
   return (neuron0x1d01870()*-0.0282258);
}

double NNfunction_sb_dLdL::synapse0x1d19910() {
   return (neuron0x1d01bb0()*-0.164357);
}

double NNfunction_sb_dLdL::synapse0x1d19950() {
   return (neuron0x1d01ef0()*0.0328126);
}

double NNfunction_sb_dLdL::synapse0x1d19990() {
   return (neuron0x1d02230()*0.0509722);
}

double NNfunction_sb_dLdL::synapse0x1d199d0() {
   return (neuron0x1d02570()*-0.84836);
}

double NNfunction_sb_dLdL::synapse0x1d19a10() {
   return (neuron0x1d028b0()*0.231227);
}

double NNfunction_sb_dLdL::synapse0x1d19a50() {
   return (neuron0x1d02bf0()*-0.24781);
}

double NNfunction_sb_dLdL::synapse0x1d19a90() {
   return (neuron0x1d02f30()*-0.164);
}

double NNfunction_sb_dLdL::synapse0x1d19ad0() {
   return (neuron0x1d03270()*-0.192975);
}

double NNfunction_sb_dLdL::synapse0x1d19560() {
   return (neuron0x1d035b0()*-0.248204);
}

double NNfunction_sb_dLdL::synapse0x1d195a0() {
   return (neuron0x1d03b10()*0.0164298);
}

double NNfunction_sb_dLdL::synapse0x1d19c20() {
   return (neuron0x1d03d30()*0.088477);
}

double NNfunction_sb_dLdL::synapse0x1d19c60() {
   return (neuron0x1d04070()*0.0759805);
}

double NNfunction_sb_dLdL::synapse0x1d19ca0() {
   return (neuron0x1d043b0()*0.0291363);
}

double NNfunction_sb_dLdL::synapse0x1d19ce0() {
   return (neuron0x1d046f0()*-0.00895215);
}

double NNfunction_sb_dLdL::synapse0x1d19d20() {
   return (neuron0x1d04a30()*0.0337129);
}

double NNfunction_sb_dLdL::synapse0x1d19d60() {
   return (neuron0x1d04d70()*-0.119554);
}

double NNfunction_sb_dLdL::synapse0x1d1a0e0() {
   return (neuron0x1d00240()*-0.309447);
}

double NNfunction_sb_dLdL::synapse0x1d1a120() {
   return (neuron0x1d004f0()*-0.0128166);
}

double NNfunction_sb_dLdL::synapse0x1d1a160() {
   return (neuron0x1d00830()*-0.483249);
}

double NNfunction_sb_dLdL::synapse0x1d1a1a0() {
   return (neuron0x1d00b70()*0.0170646);
}

double NNfunction_sb_dLdL::synapse0x1d1a1e0() {
   return (neuron0x1d00eb0()*-0.255143);
}

double NNfunction_sb_dLdL::synapse0x1d1a220() {
   return (neuron0x1d011f0()*0.14778);
}

double NNfunction_sb_dLdL::synapse0x1d1a260() {
   return (neuron0x1d01530()*-0.0874724);
}

double NNfunction_sb_dLdL::synapse0x1d1a2a0() {
   return (neuron0x1d01870()*0.282232);
}

double NNfunction_sb_dLdL::synapse0x1d1a2e0() {
   return (neuron0x1d01bb0()*-0.0702597);
}

double NNfunction_sb_dLdL::synapse0x1d1a320() {
   return (neuron0x1d01ef0()*0.0857139);
}

double NNfunction_sb_dLdL::synapse0x1d1a360() {
   return (neuron0x1d02230()*-0.0646185);
}

double NNfunction_sb_dLdL::synapse0x1d1a3a0() {
   return (neuron0x1d02570()*0.576964);
}

double NNfunction_sb_dLdL::synapse0x1d1a3e0() {
   return (neuron0x1d028b0()*-0.269667);
}

double NNfunction_sb_dLdL::synapse0x1d1a420() {
   return (neuron0x1d02bf0()*0.599597);
}

double NNfunction_sb_dLdL::synapse0x1d1a460() {
   return (neuron0x1d02f30()*-0.537325);
}

double NNfunction_sb_dLdL::synapse0x1d1a4a0() {
   return (neuron0x1d03270()*0.231575);
}

double NNfunction_sb_dLdL::synapse0x1d19f30() {
   return (neuron0x1d035b0()*0.385036);
}

double NNfunction_sb_dLdL::synapse0x1d19f70() {
   return (neuron0x1d03b10()*0.265698);
}

double NNfunction_sb_dLdL::synapse0x1d1a5f0() {
   return (neuron0x1d03d30()*-0.0874283);
}

double NNfunction_sb_dLdL::synapse0x1d1a630() {
   return (neuron0x1d04070()*-0.0272477);
}

double NNfunction_sb_dLdL::synapse0x1d1a670() {
   return (neuron0x1d043b0()*-0.270473);
}

double NNfunction_sb_dLdL::synapse0x1d1a6b0() {
   return (neuron0x1d046f0()*0.00195457);
}

double NNfunction_sb_dLdL::synapse0x1d1a6f0() {
   return (neuron0x1d04a30()*-0.111616);
}

double NNfunction_sb_dLdL::synapse0x1d1a730() {
   return (neuron0x1d04d70()*-0.0536303);
}

double NNfunction_sb_dLdL::synapse0x1d1aab0() {
   return (neuron0x1d00240()*-0.176731);
}

double NNfunction_sb_dLdL::synapse0x1d0f080() {
   return (neuron0x1d004f0()*0.36443);
}

double NNfunction_sb_dLdL::synapse0x1d0f0c0() {
   return (neuron0x1d00830()*0.0386177);
}

double NNfunction_sb_dLdL::synapse0x1d0f100() {
   return (neuron0x1d00b70()*-0.0687164);
}

double NNfunction_sb_dLdL::synapse0x1d0f350() {
   return (neuron0x1d00eb0()*0.374513);
}

double NNfunction_sb_dLdL::synapse0x1d0f390() {
   return (neuron0x1d011f0()*0.173375);
}

double NNfunction_sb_dLdL::synapse0x1d0f3d0() {
   return (neuron0x1d01530()*0.0731854);
}

double NNfunction_sb_dLdL::synapse0x1d0f620() {
   return (neuron0x1d01870()*-0.37884);
}

double NNfunction_sb_dLdL::synapse0x1d0f660() {
   return (neuron0x1d01bb0()*-0.793148);
}

double NNfunction_sb_dLdL::synapse0x1d0f8b0() {
   return (neuron0x1d01ef0()*0.450681);
}

double NNfunction_sb_dLdL::synapse0x1d0f8f0() {
   return (neuron0x1d02230()*-0.442287);
}

double NNfunction_sb_dLdL::synapse0x1d0f930() {
   return (neuron0x1d02570()*0.580371);
}

double NNfunction_sb_dLdL::synapse0x1d0fb80() {
   return (neuron0x1d028b0()*-0.163377);
}

double NNfunction_sb_dLdL::synapse0x1d0fbc0() {
   return (neuron0x1d02bf0()*0.0455531);
}

double NNfunction_sb_dLdL::synapse0x1d0fe10() {
   return (neuron0x1d02f30()*0.405856);
}

double NNfunction_sb_dLdL::synapse0x1d0fe50() {
   return (neuron0x1d03270()*0.361412);
}

double NNfunction_sb_dLdL::synapse0x1d1a900() {
   return (neuron0x1d035b0()*0.523595);
}

double NNfunction_sb_dLdL::synapse0x1d1a940() {
   return (neuron0x1d03b10()*0.15282);
}

double NNfunction_sb_dLdL::synapse0x1d0ffa0() {
   return (neuron0x1d03d30()*-0.382888);
}

double NNfunction_sb_dLdL::synapse0x1d104b0() {
   return (neuron0x1d04070()*-0.232042);
}

double NNfunction_sb_dLdL::synapse0x1d104f0() {
   return (neuron0x1d043b0()*-0.636045);
}

double NNfunction_sb_dLdL::synapse0x1d10530() {
   return (neuron0x1d046f0()*-0.185481);
}

double NNfunction_sb_dLdL::synapse0x1d10780() {
   return (neuron0x1d04a30()*0.0366106);
}

double NNfunction_sb_dLdL::synapse0x1d107c0() {
   return (neuron0x1d04d70()*0.0630997);
}

double NNfunction_sb_dLdL::synapse0x1d10070() {
   return (neuron0x1d00240()*0.055712);
}

double NNfunction_sb_dLdL::synapse0x1d100b0() {
   return (neuron0x1d004f0()*0.030304);
}

double NNfunction_sb_dLdL::synapse0x1d100f0() {
   return (neuron0x1d00830()*-0.232847);
}

double NNfunction_sb_dLdL::synapse0x1d10130() {
   return (neuron0x1d00b70()*0.631629);
}

double NNfunction_sb_dLdL::synapse0x1d10ab0() {
   return (neuron0x1d00eb0()*0.039175);
}

double NNfunction_sb_dLdL::synapse0x1d1ce00() {
   return (neuron0x1d011f0()*-0.0714815);
}

double NNfunction_sb_dLdL::synapse0x1d1ce40() {
   return (neuron0x1d01530()*-0.111957);
}

double NNfunction_sb_dLdL::synapse0x1d1ce80() {
   return (neuron0x1d01870()*0.0887185);
}

double NNfunction_sb_dLdL::synapse0x1d1cec0() {
   return (neuron0x1d01bb0()*-0.0176011);
}

double NNfunction_sb_dLdL::synapse0x1d1cf00() {
   return (neuron0x1d01ef0()*0.0317005);
}

double NNfunction_sb_dLdL::synapse0x1d1cf40() {
   return (neuron0x1d02230()*-0.0119206);
}

double NNfunction_sb_dLdL::synapse0x1d1cf80() {
   return (neuron0x1d02570()*-0.531693);
}

double NNfunction_sb_dLdL::synapse0x1d1cfc0() {
   return (neuron0x1d028b0()*-0.0888762);
}

double NNfunction_sb_dLdL::synapse0x1d1d000() {
   return (neuron0x1d02bf0()*0.340061);
}

double NNfunction_sb_dLdL::synapse0x1d1d040() {
   return (neuron0x1d02f30()*-0.162601);
}

double NNfunction_sb_dLdL::synapse0x1d1d080() {
   return (neuron0x1d03270()*0.2334);
}

double NNfunction_sb_dLdL::synapse0x1d10990() {
   return (neuron0x1d035b0()*0.102492);
}

double NNfunction_sb_dLdL::synapse0x1d109d0() {
   return (neuron0x1d03b10()*-0.0707807);
}

double NNfunction_sb_dLdL::synapse0x1d1d1d0() {
   return (neuron0x1d03d30()*-0.0647099);
}

double NNfunction_sb_dLdL::synapse0x1d1d210() {
   return (neuron0x1d04070()*-0.0578977);
}

double NNfunction_sb_dLdL::synapse0x1d1d250() {
   return (neuron0x1d043b0()*-0.0625425);
}

double NNfunction_sb_dLdL::synapse0x1d1d290() {
   return (neuron0x1d046f0()*0.141802);
}

double NNfunction_sb_dLdL::synapse0x1d1d2d0() {
   return (neuron0x1d04a30()*-0.0689196);
}

double NNfunction_sb_dLdL::synapse0x1d1d310() {
   return (neuron0x1d04d70()*-0.0400235);
}

double NNfunction_sb_dLdL::synapse0x1d1d690() {
   return (neuron0x1d00240()*-0.146983);
}

double NNfunction_sb_dLdL::synapse0x1d1d6d0() {
   return (neuron0x1d004f0()*-0.184776);
}

double NNfunction_sb_dLdL::synapse0x1d1d710() {
   return (neuron0x1d00830()*-0.224531);
}

double NNfunction_sb_dLdL::synapse0x1d1d750() {
   return (neuron0x1d00b70()*0.625648);
}

double NNfunction_sb_dLdL::synapse0x1d1d790() {
   return (neuron0x1d00eb0()*0.0823098);
}

double NNfunction_sb_dLdL::synapse0x1d1d7d0() {
   return (neuron0x1d011f0()*-0.146125);
}

double NNfunction_sb_dLdL::synapse0x1d1d810() {
   return (neuron0x1d01530()*-0.157466);
}

double NNfunction_sb_dLdL::synapse0x1d1d850() {
   return (neuron0x1d01870()*0.176145);
}

double NNfunction_sb_dLdL::synapse0x1d1d890() {
   return (neuron0x1d01bb0()*0.0347027);
}

double NNfunction_sb_dLdL::synapse0x1d1d8d0() {
   return (neuron0x1d01ef0()*0.0899295);
}

double NNfunction_sb_dLdL::synapse0x1d1d910() {
   return (neuron0x1d02230()*0.0347901);
}

double NNfunction_sb_dLdL::synapse0x1d1d950() {
   return (neuron0x1d02570()*-0.268443);
}

double NNfunction_sb_dLdL::synapse0x1d1d990() {
   return (neuron0x1d028b0()*0.0339317);
}

double NNfunction_sb_dLdL::synapse0x1d1d9d0() {
   return (neuron0x1d02bf0()*-0.0403085);
}

double NNfunction_sb_dLdL::synapse0x1d1da10() {
   return (neuron0x1d02f30()*0.0737176);
}

double NNfunction_sb_dLdL::synapse0x1d1da50() {
   return (neuron0x1d03270()*-0.109148);
}

double NNfunction_sb_dLdL::synapse0x1d1d4e0() {
   return (neuron0x1d035b0()*0.018009);
}

double NNfunction_sb_dLdL::synapse0x1d1d520() {
   return (neuron0x1d03b10()*0.0977809);
}

double NNfunction_sb_dLdL::synapse0x1d1dba0() {
   return (neuron0x1d03d30()*-0.000135999);
}

double NNfunction_sb_dLdL::synapse0x1d1dbe0() {
   return (neuron0x1d04070()*0.0988158);
}

double NNfunction_sb_dLdL::synapse0x1d1dc20() {
   return (neuron0x1d043b0()*0.0863746);
}

double NNfunction_sb_dLdL::synapse0x1d1dc60() {
   return (neuron0x1d046f0()*0.0277444);
}

double NNfunction_sb_dLdL::synapse0x1d1dca0() {
   return (neuron0x1d04a30()*-0.0277295);
}

double NNfunction_sb_dLdL::synapse0x1d1dce0() {
   return (neuron0x1d04d70()*0.0431805);
}

double NNfunction_sb_dLdL::synapse0x1d1e060() {
   return (neuron0x1d00240()*0.00203467);
}

double NNfunction_sb_dLdL::synapse0x1d1e0a0() {
   return (neuron0x1d004f0()*-0.06419);
}

double NNfunction_sb_dLdL::synapse0x1d1e0e0() {
   return (neuron0x1d00830()*-0.371142);
}

double NNfunction_sb_dLdL::synapse0x1d1e120() {
   return (neuron0x1d00b70()*0.202151);
}

double NNfunction_sb_dLdL::synapse0x1d1e160() {
   return (neuron0x1d00eb0()*-0.027905);
}

double NNfunction_sb_dLdL::synapse0x1d1e1a0() {
   return (neuron0x1d011f0()*-0.102885);
}

double NNfunction_sb_dLdL::synapse0x1d1e1e0() {
   return (neuron0x1d01530()*0.145334);
}

double NNfunction_sb_dLdL::synapse0x1d1e220() {
   return (neuron0x1d01870()*-0.133577);
}

double NNfunction_sb_dLdL::synapse0x1d1e260() {
   return (neuron0x1d01bb0()*0.0968833);
}

double NNfunction_sb_dLdL::synapse0x1d1e2a0() {
   return (neuron0x1d01ef0()*0.0860576);
}

double NNfunction_sb_dLdL::synapse0x1d1e2e0() {
   return (neuron0x1d02230()*-0.0446068);
}

double NNfunction_sb_dLdL::synapse0x1d1e320() {
   return (neuron0x1d02570()*0.375066);
}

double NNfunction_sb_dLdL::synapse0x1d1e360() {
   return (neuron0x1d028b0()*0.170794);
}

double NNfunction_sb_dLdL::synapse0x1d1e3a0() {
   return (neuron0x1d02bf0()*-0.295631);
}

double NNfunction_sb_dLdL::synapse0x1d1e3e0() {
   return (neuron0x1d02f30()*-0.0567649);
}

double NNfunction_sb_dLdL::synapse0x1d1e420() {
   return (neuron0x1d03270()*-0.0362397);
}

double NNfunction_sb_dLdL::synapse0x1d1deb0() {
   return (neuron0x1d035b0()*0.838191);
}

double NNfunction_sb_dLdL::synapse0x1d1def0() {
   return (neuron0x1d03b10()*0.0508585);
}

double NNfunction_sb_dLdL::synapse0x1d1e570() {
   return (neuron0x1d03d30()*0.0216331);
}

double NNfunction_sb_dLdL::synapse0x1d1e5b0() {
   return (neuron0x1d04070()*0.078427);
}

double NNfunction_sb_dLdL::synapse0x1d1e5f0() {
   return (neuron0x1d043b0()*0.0786715);
}

double NNfunction_sb_dLdL::synapse0x1d1e630() {
   return (neuron0x1d046f0()*0.1578);
}

double NNfunction_sb_dLdL::synapse0x1d1e670() {
   return (neuron0x1d04a30()*0.0148645);
}

double NNfunction_sb_dLdL::synapse0x1d1e6b0() {
   return (neuron0x1d04d70()*-0.0234224);
}

double NNfunction_sb_dLdL::synapse0x1d1ea30() {
   return (neuron0x1d00240()*-0.0147073);
}

double NNfunction_sb_dLdL::synapse0x1d1ea70() {
   return (neuron0x1d004f0()*0.0621825);
}

double NNfunction_sb_dLdL::synapse0x1d1eab0() {
   return (neuron0x1d00830()*-0.267775);
}

double NNfunction_sb_dLdL::synapse0x1d1eaf0() {
   return (neuron0x1d00b70()*0.414585);
}

double NNfunction_sb_dLdL::synapse0x1d1eb30() {
   return (neuron0x1d00eb0()*-0.120331);
}

double NNfunction_sb_dLdL::synapse0x1d1eb70() {
   return (neuron0x1d011f0()*-0.071993);
}

double NNfunction_sb_dLdL::synapse0x1d1ebb0() {
   return (neuron0x1d01530()*-0.176362);
}

double NNfunction_sb_dLdL::synapse0x1d1ebf0() {
   return (neuron0x1d01870()*0.0490179);
}

double NNfunction_sb_dLdL::synapse0x1d1ec30() {
   return (neuron0x1d01bb0()*0.464298);
}

double NNfunction_sb_dLdL::synapse0x1d1ec70() {
   return (neuron0x1d01ef0()*-0.257215);
}

double NNfunction_sb_dLdL::synapse0x1d1ecb0() {
   return (neuron0x1d02230()*0.292581);
}

double NNfunction_sb_dLdL::synapse0x1d1ecf0() {
   return (neuron0x1d02570()*0.724811);
}

double NNfunction_sb_dLdL::synapse0x1d1ed30() {
   return (neuron0x1d028b0()*-0.00837328);
}

double NNfunction_sb_dLdL::synapse0x1d1ed70() {
   return (neuron0x1d02bf0()*0.00380705);
}

double NNfunction_sb_dLdL::synapse0x1d1edb0() {
   return (neuron0x1d02f30()*-0.0384067);
}

double NNfunction_sb_dLdL::synapse0x1d1edf0() {
   return (neuron0x1d03270()*-0.0460461);
}

double NNfunction_sb_dLdL::synapse0x1d1e880() {
   return (neuron0x1d035b0()*-0.183459);
}

double NNfunction_sb_dLdL::synapse0x1d1e8c0() {
   return (neuron0x1d03b10()*-0.200184);
}

double NNfunction_sb_dLdL::synapse0x1d1ef40() {
   return (neuron0x1d03d30()*0.231894);
}

double NNfunction_sb_dLdL::synapse0x1d1ef80() {
   return (neuron0x1d04070()*-0.0799011);
}

double NNfunction_sb_dLdL::synapse0x1d1efc0() {
   return (neuron0x1d043b0()*-0.256391);
}

double NNfunction_sb_dLdL::synapse0x1d1f000() {
   return (neuron0x1d046f0()*-0.221784);
}

double NNfunction_sb_dLdL::synapse0x1d1f040() {
   return (neuron0x1d04a30()*-0.0461169);
}

double NNfunction_sb_dLdL::synapse0x1d1f080() {
   return (neuron0x1d04d70()*0.107454);
}

double NNfunction_sb_dLdL::synapse0x1d1f400() {
   return (neuron0x1d00240()*0.000629867);
}

double NNfunction_sb_dLdL::synapse0x1d1f440() {
   return (neuron0x1d004f0()*-0.0650317);
}

double NNfunction_sb_dLdL::synapse0x1d1f480() {
   return (neuron0x1d00830()*0.114789);
}

double NNfunction_sb_dLdL::synapse0x1d1f4c0() {
   return (neuron0x1d00b70()*-0.10202);
}

double NNfunction_sb_dLdL::synapse0x1d1f500() {
   return (neuron0x1d00eb0()*-0.0275511);
}

double NNfunction_sb_dLdL::synapse0x1d1f540() {
   return (neuron0x1d011f0()*-0.114085);
}

double NNfunction_sb_dLdL::synapse0x1d1f580() {
   return (neuron0x1d01530()*0.0955256);
}

double NNfunction_sb_dLdL::synapse0x1d1f5c0() {
   return (neuron0x1d01870()*-0.153353);
}

double NNfunction_sb_dLdL::synapse0x1d1f600() {
   return (neuron0x1d01bb0()*-0.426689);
}

double NNfunction_sb_dLdL::synapse0x1d1f640() {
   return (neuron0x1d01ef0()*0.12339);
}

double NNfunction_sb_dLdL::synapse0x1d1f680() {
   return (neuron0x1d02230()*0.0821107);
}

double NNfunction_sb_dLdL::synapse0x1d1f6c0() {
   return (neuron0x1d02570()*0.0834314);
}

double NNfunction_sb_dLdL::synapse0x1d1f700() {
   return (neuron0x1d028b0()*0.121411);
}

double NNfunction_sb_dLdL::synapse0x1d1f740() {
   return (neuron0x1d02bf0()*0.151622);
}

double NNfunction_sb_dLdL::synapse0x1d1f780() {
   return (neuron0x1d02f30()*0.0828617);
}

double NNfunction_sb_dLdL::synapse0x1d1f7c0() {
   return (neuron0x1d03270()*0.0647774);
}

double NNfunction_sb_dLdL::synapse0x1d1f250() {
   return (neuron0x1d035b0()*0.338022);
}

double NNfunction_sb_dLdL::synapse0x1d1f290() {
   return (neuron0x1d03b10()*0.340142);
}

double NNfunction_sb_dLdL::synapse0x1d1f910() {
   return (neuron0x1d03d30()*-0.142521);
}

double NNfunction_sb_dLdL::synapse0x1d1f950() {
   return (neuron0x1d04070()*0.316059);
}

double NNfunction_sb_dLdL::synapse0x1d1f990() {
   return (neuron0x1d043b0()*0.0209714);
}

double NNfunction_sb_dLdL::synapse0x1d1f9d0() {
   return (neuron0x1d046f0()*-0.0163491);
}

double NNfunction_sb_dLdL::synapse0x1d1fa10() {
   return (neuron0x1d04a30()*-0.154282);
}

double NNfunction_sb_dLdL::synapse0x1d1fa50() {
   return (neuron0x1d04d70()*-0.298543);
}

double NNfunction_sb_dLdL::synapse0x1d1fdd0() {
   return (neuron0x1d00240()*-9.07639e-05);
}

double NNfunction_sb_dLdL::synapse0x1d1fe10() {
   return (neuron0x1d004f0()*0.0101216);
}

double NNfunction_sb_dLdL::synapse0x1d1fe50() {
   return (neuron0x1d00830()*0.066329);
}

double NNfunction_sb_dLdL::synapse0x1d1fe90() {
   return (neuron0x1d00b70()*0.24109);
}

double NNfunction_sb_dLdL::synapse0x1d1fed0() {
   return (neuron0x1d00eb0()*0.000825077);
}

double NNfunction_sb_dLdL::synapse0x1d1ff10() {
   return (neuron0x1d011f0()*-0.00145656);
}

double NNfunction_sb_dLdL::synapse0x1d1ff50() {
   return (neuron0x1d01530()*-0.0179955);
}

double NNfunction_sb_dLdL::synapse0x1d1ff90() {
   return (neuron0x1d01870()*-0.00206325);
}

double NNfunction_sb_dLdL::synapse0x1d1ffd0() {
   return (neuron0x1d01bb0()*-0.0166828);
}

double NNfunction_sb_dLdL::synapse0x1d20010() {
   return (neuron0x1d01ef0()*0.00161221);
}

double NNfunction_sb_dLdL::synapse0x1d20050() {
   return (neuron0x1d02230()*0.00754807);
}

double NNfunction_sb_dLdL::synapse0x1d20090() {
   return (neuron0x1d02570()*3.61753);
}

double NNfunction_sb_dLdL::synapse0x1d200d0() {
   return (neuron0x1d028b0()*-0.0125192);
}

double NNfunction_sb_dLdL::synapse0x1d20110() {
   return (neuron0x1d02bf0()*0.0217402);
}

double NNfunction_sb_dLdL::synapse0x1d20150() {
   return (neuron0x1d02f30()*-0.00616418);
}

double NNfunction_sb_dLdL::synapse0x1d20190() {
   return (neuron0x1d03270()*0.00343071);
}

double NNfunction_sb_dLdL::synapse0x1d1fc20() {
   return (neuron0x1d035b0()*0.00898006);
}

double NNfunction_sb_dLdL::synapse0x1d1fc60() {
   return (neuron0x1d03b10()*-0.00355918);
}

double NNfunction_sb_dLdL::synapse0x1d202e0() {
   return (neuron0x1d03d30()*-0.0258919);
}

double NNfunction_sb_dLdL::synapse0x1d20320() {
   return (neuron0x1d04070()*0.0029738);
}

double NNfunction_sb_dLdL::synapse0x1d20360() {
   return (neuron0x1d043b0()*-0.0116026);
}

double NNfunction_sb_dLdL::synapse0x1d203a0() {
   return (neuron0x1d046f0()*0.0120336);
}

double NNfunction_sb_dLdL::synapse0x1d203e0() {
   return (neuron0x1d04a30()*0.000823897);
}

double NNfunction_sb_dLdL::synapse0x1d20420() {
   return (neuron0x1d04d70()*0.00644518);
}

double NNfunction_sb_dLdL::synapse0x1d207a0() {
   return (neuron0x1d00240()*-0.134539);
}

double NNfunction_sb_dLdL::synapse0x1d207e0() {
   return (neuron0x1d004f0()*0.545363);
}

double NNfunction_sb_dLdL::synapse0x1d20820() {
   return (neuron0x1d00830()*-0.0974357);
}

double NNfunction_sb_dLdL::synapse0x1d20860() {
   return (neuron0x1d00b70()*0.431316);
}

double NNfunction_sb_dLdL::synapse0x1d208a0() {
   return (neuron0x1d00eb0()*-0.0624039);
}

double NNfunction_sb_dLdL::synapse0x1d208e0() {
   return (neuron0x1d011f0()*0.00272152);
}

double NNfunction_sb_dLdL::synapse0x1d20920() {
   return (neuron0x1d01530()*-0.565864);
}

double NNfunction_sb_dLdL::synapse0x1d20960() {
   return (neuron0x1d01870()*-0.267637);
}

double NNfunction_sb_dLdL::synapse0x1d209a0() {
   return (neuron0x1d01bb0()*-0.625545);
}

double NNfunction_sb_dLdL::synapse0x1d209e0() {
   return (neuron0x1d01ef0()*0.132309);
}

double NNfunction_sb_dLdL::synapse0x1d20a20() {
   return (neuron0x1d02230()*-0.11178);
}

double NNfunction_sb_dLdL::synapse0x1d20a60() {
   return (neuron0x1d02570()*0.620555);
}

double NNfunction_sb_dLdL::synapse0x1d20aa0() {
   return (neuron0x1d028b0()*-0.277108);
}

double NNfunction_sb_dLdL::synapse0x1d20ae0() {
   return (neuron0x1d02bf0()*-0.027206);
}

double NNfunction_sb_dLdL::synapse0x1d20b20() {
   return (neuron0x1d02f30()*0.0526867);
}

double NNfunction_sb_dLdL::synapse0x1d20b60() {
   return (neuron0x1d03270()*-0.104211);
}

double NNfunction_sb_dLdL::synapse0x1d205f0() {
   return (neuron0x1d035b0()*-0.107769);
}

double NNfunction_sb_dLdL::synapse0x1d20630() {
   return (neuron0x1d03b10()*0.289221);
}

double NNfunction_sb_dLdL::synapse0x1d20cb0() {
   return (neuron0x1d03d30()*0.15276);
}

double NNfunction_sb_dLdL::synapse0x1d20cf0() {
   return (neuron0x1d04070()*0.0632114);
}

double NNfunction_sb_dLdL::synapse0x1d20d30() {
   return (neuron0x1d043b0()*-0.363755);
}

double NNfunction_sb_dLdL::synapse0x1d20d70() {
   return (neuron0x1d046f0()*-0.0672879);
}

double NNfunction_sb_dLdL::synapse0x1d20db0() {
   return (neuron0x1d04a30()*-0.230138);
}

double NNfunction_sb_dLdL::synapse0x1d20df0() {
   return (neuron0x1d04d70()*-0.149647);
}

double NNfunction_sb_dLdL::synapse0x1d21170() {
   return (neuron0x1d00240()*0.198156);
}

double NNfunction_sb_dLdL::synapse0x1d211b0() {
   return (neuron0x1d004f0()*0.237067);
}

double NNfunction_sb_dLdL::synapse0x1d211f0() {
   return (neuron0x1d00830()*-0.328856);
}

double NNfunction_sb_dLdL::synapse0x1d21230() {
   return (neuron0x1d00b70()*0.0417257);
}

double NNfunction_sb_dLdL::synapse0x1d21270() {
   return (neuron0x1d00eb0()*-0.14119);
}

double NNfunction_sb_dLdL::synapse0x1d212b0() {
   return (neuron0x1d011f0()*0.0483146);
}

double NNfunction_sb_dLdL::synapse0x1d212f0() {
   return (neuron0x1d01530()*0.66289);
}

double NNfunction_sb_dLdL::synapse0x1d21330() {
   return (neuron0x1d01870()*0.392249);
}

double NNfunction_sb_dLdL::synapse0x1d21370() {
   return (neuron0x1d01bb0()*-0.142904);
}

double NNfunction_sb_dLdL::synapse0x1d213b0() {
   return (neuron0x1d01ef0()*0.019336);
}

double NNfunction_sb_dLdL::synapse0x1d213f0() {
   return (neuron0x1d02230()*-0.0380861);
}

double NNfunction_sb_dLdL::synapse0x1d21430() {
   return (neuron0x1d02570()*0.0358161);
}

double NNfunction_sb_dLdL::synapse0x1d21470() {
   return (neuron0x1d028b0()*-0.274013);
}

double NNfunction_sb_dLdL::synapse0x1d214b0() {
   return (neuron0x1d02bf0()*-0.120672);
}

double NNfunction_sb_dLdL::synapse0x1d214f0() {
   return (neuron0x1d02f30()*0.0126212);
}

double NNfunction_sb_dLdL::synapse0x1d21530() {
   return (neuron0x1d03270()*-0.176788);
}

double NNfunction_sb_dLdL::synapse0x1d20fc0() {
   return (neuron0x1d035b0()*0.0309748);
}

double NNfunction_sb_dLdL::synapse0x1d21000() {
   return (neuron0x1d03b10()*0.121611);
}

double NNfunction_sb_dLdL::synapse0x1d21680() {
   return (neuron0x1d03d30()*-0.539831);
}

double NNfunction_sb_dLdL::synapse0x1d216c0() {
   return (neuron0x1d04070()*-0.0262184);
}

double NNfunction_sb_dLdL::synapse0x1d21700() {
   return (neuron0x1d043b0()*0.0131203);
}

double NNfunction_sb_dLdL::synapse0x1d21740() {
   return (neuron0x1d046f0()*0.287728);
}

double NNfunction_sb_dLdL::synapse0x1d21780() {
   return (neuron0x1d04a30()*-0.0169231);
}

double NNfunction_sb_dLdL::synapse0x1d217c0() {
   return (neuron0x1d04d70()*-0.226536);
}

double NNfunction_sb_dLdL::synapse0x1d0a270() {
   return (neuron0x1d00240()*0.0748035);
}

double NNfunction_sb_dLdL::synapse0x1d0a2b0() {
   return (neuron0x1d004f0()*0.0210386);
}

double NNfunction_sb_dLdL::synapse0x1d0a2f0() {
   return (neuron0x1d00830()*-0.736432);
}

double NNfunction_sb_dLdL::synapse0x1d0a330() {
   return (neuron0x1d00b70()*0.097211);
}

double NNfunction_sb_dLdL::synapse0x1d0a370() {
   return (neuron0x1d00eb0()*-0.2276);
}

double NNfunction_sb_dLdL::synapse0x1d0a3b0() {
   return (neuron0x1d011f0()*0.0522334);
}

double NNfunction_sb_dLdL::synapse0x1d0a3f0() {
   return (neuron0x1d01530()*-0.0993167);
}

double NNfunction_sb_dLdL::synapse0x1d0a430() {
   return (neuron0x1d01870()*0.0970703);
}

double NNfunction_sb_dLdL::synapse0x1d21f50() {
   return (neuron0x1d01bb0()*0.0672548);
}

double NNfunction_sb_dLdL::synapse0x1d21f90() {
   return (neuron0x1d01ef0()*0.0362988);
}

double NNfunction_sb_dLdL::synapse0x1d21fd0() {
   return (neuron0x1d02230()*0.084027);
}

double NNfunction_sb_dLdL::synapse0x1d22010() {
   return (neuron0x1d02570()*-0.815866);
}

double NNfunction_sb_dLdL::synapse0x1d22050() {
   return (neuron0x1d028b0()*0.096675);
}

double NNfunction_sb_dLdL::synapse0x1d22090() {
   return (neuron0x1d02bf0()*-0.0397272);
}

double NNfunction_sb_dLdL::synapse0x1d220d0() {
   return (neuron0x1d02f30()*0.0661737);
}

double NNfunction_sb_dLdL::synapse0x1d22110() {
   return (neuron0x1d03270()*-0.0715789);
}

double NNfunction_sb_dLdL::synapse0x1d21990() {
   return (neuron0x1d035b0()*-0.100277);
}

double NNfunction_sb_dLdL::synapse0x1d219d0() {
   return (neuron0x1d03b10()*0.0120807);
}

double NNfunction_sb_dLdL::synapse0x1d22260() {
   return (neuron0x1d03d30()*0.067422);
}

double NNfunction_sb_dLdL::synapse0x1d222a0() {
   return (neuron0x1d04070()*-0.028849);
}

double NNfunction_sb_dLdL::synapse0x1d222e0() {
   return (neuron0x1d043b0()*0.099959);
}

double NNfunction_sb_dLdL::synapse0x1d22320() {
   return (neuron0x1d046f0()*-0.0634953);
}

double NNfunction_sb_dLdL::synapse0x1d22360() {
   return (neuron0x1d04a30()*0.0246794);
}

double NNfunction_sb_dLdL::synapse0x1d223a0() {
   return (neuron0x1d04d70()*-0.0536313);
}

double NNfunction_sb_dLdL::synapse0x1d22720() {
   return (neuron0x1d00240()*-0.0393353);
}

double NNfunction_sb_dLdL::synapse0x1d22760() {
   return (neuron0x1d004f0()*-0.0165871);
}

double NNfunction_sb_dLdL::synapse0x1d227a0() {
   return (neuron0x1d00830()*-0.190035);
}

double NNfunction_sb_dLdL::synapse0x1d227e0() {
   return (neuron0x1d00b70()*0.578576);
}

double NNfunction_sb_dLdL::synapse0x1d22820() {
   return (neuron0x1d00eb0()*0.0216829);
}

double NNfunction_sb_dLdL::synapse0x1d22860() {
   return (neuron0x1d011f0()*0.125741);
}

double NNfunction_sb_dLdL::synapse0x1d228a0() {
   return (neuron0x1d01530()*0.0464371);
}

double NNfunction_sb_dLdL::synapse0x1d228e0() {
   return (neuron0x1d01870()*0.0819592);
}

double NNfunction_sb_dLdL::synapse0x1d22920() {
   return (neuron0x1d01bb0()*-0.0150357);
}

double NNfunction_sb_dLdL::synapse0x1d22960() {
   return (neuron0x1d01ef0()*-0.0583009);
}

double NNfunction_sb_dLdL::synapse0x1d229a0() {
   return (neuron0x1d02230()*0.0294);
}

double NNfunction_sb_dLdL::synapse0x1d229e0() {
   return (neuron0x1d02570()*-0.476761);
}

double NNfunction_sb_dLdL::synapse0x1d22a20() {
   return (neuron0x1d028b0()*0.185453);
}

double NNfunction_sb_dLdL::synapse0x1d22a60() {
   return (neuron0x1d02bf0()*-0.147128);
}

double NNfunction_sb_dLdL::synapse0x1d22aa0() {
   return (neuron0x1d02f30()*0.0346904);
}

double NNfunction_sb_dLdL::synapse0x1d22ae0() {
   return (neuron0x1d03270()*0.424683);
}

double NNfunction_sb_dLdL::synapse0x1d22570() {
   return (neuron0x1d035b0()*-0.256005);
}

double NNfunction_sb_dLdL::synapse0x1d225b0() {
   return (neuron0x1d03b10()*0.0538672);
}

double NNfunction_sb_dLdL::synapse0x1d22c30() {
   return (neuron0x1d03d30()*0.124619);
}

double NNfunction_sb_dLdL::synapse0x1d22c70() {
   return (neuron0x1d04070()*0.0849023);
}

double NNfunction_sb_dLdL::synapse0x1d22cb0() {
   return (neuron0x1d043b0()*0.0512923);
}

double NNfunction_sb_dLdL::synapse0x1d22cf0() {
   return (neuron0x1d046f0()*-0.0454826);
}

double NNfunction_sb_dLdL::synapse0x1d22d30() {
   return (neuron0x1d04a30()*0.00471035);
}

double NNfunction_sb_dLdL::synapse0x1d22d70() {
   return (neuron0x1d04d70()*0.0259689);
}

double NNfunction_sb_dLdL::synapse0x1d230f0() {
   return (neuron0x1d00240()*0.0210923);
}

double NNfunction_sb_dLdL::synapse0x1d23130() {
   return (neuron0x1d004f0()*0.0172605);
}

double NNfunction_sb_dLdL::synapse0x1d23170() {
   return (neuron0x1d00830()*-0.28736);
}

double NNfunction_sb_dLdL::synapse0x1d231b0() {
   return (neuron0x1d00b70()*0.555937);
}

double NNfunction_sb_dLdL::synapse0x1d231f0() {
   return (neuron0x1d00eb0()*-0.0627068);
}

double NNfunction_sb_dLdL::synapse0x1d23230() {
   return (neuron0x1d011f0()*0.0079612);
}

double NNfunction_sb_dLdL::synapse0x1d23270() {
   return (neuron0x1d01530()*0.0063035);
}

double NNfunction_sb_dLdL::synapse0x1d232b0() {
   return (neuron0x1d01870()*-0.0787129);
}

double NNfunction_sb_dLdL::synapse0x1d232f0() {
   return (neuron0x1d01bb0()*0.0103248);
}

double NNfunction_sb_dLdL::synapse0x1d23330() {
   return (neuron0x1d01ef0()*-0.0395174);
}

double NNfunction_sb_dLdL::synapse0x1d23370() {
   return (neuron0x1d02230()*0.012485);
}

double NNfunction_sb_dLdL::synapse0x1d233b0() {
   return (neuron0x1d02570()*-0.206392);
}

double NNfunction_sb_dLdL::synapse0x1d233f0() {
   return (neuron0x1d028b0()*-0.0909484);
}

double NNfunction_sb_dLdL::synapse0x1d23430() {
   return (neuron0x1d02bf0()*0.0560903);
}

double NNfunction_sb_dLdL::synapse0x1d23470() {
   return (neuron0x1d02f30()*0.0390235);
}

double NNfunction_sb_dLdL::synapse0x1d234b0() {
   return (neuron0x1d03270()*-0.0826286);
}

double NNfunction_sb_dLdL::synapse0x1d22f40() {
   return (neuron0x1d035b0()*0.0644919);
}

double NNfunction_sb_dLdL::synapse0x1d22f80() {
   return (neuron0x1d03b10()*-0.0268826);
}

double NNfunction_sb_dLdL::synapse0x1d13ab0() {
   return (neuron0x1d03d30()*-0.0494105);
}

double NNfunction_sb_dLdL::synapse0x1d13af0() {
   return (neuron0x1d04070()*-0.0284438);
}

double NNfunction_sb_dLdL::synapse0x1d13b30() {
   return (neuron0x1d043b0()*0.0111628);
}

double NNfunction_sb_dLdL::synapse0x1d13b70() {
   return (neuron0x1d046f0()*0.000389397);
}

double NNfunction_sb_dLdL::synapse0x1d13bb0() {
   return (neuron0x1d04a30()*-0.00470815);
}

double NNfunction_sb_dLdL::synapse0x1d13bf0() {
   return (neuron0x1d04d70()*-0.0200767);
}

double NNfunction_sb_dLdL::synapse0x1d13f70() {
   return (neuron0x1d00240()*-0.00485509);
}

double NNfunction_sb_dLdL::synapse0x1d13fb0() {
   return (neuron0x1d004f0()*-0.057371);
}

double NNfunction_sb_dLdL::synapse0x1d13ff0() {
   return (neuron0x1d00830()*-0.224265);
}

double NNfunction_sb_dLdL::synapse0x1d14030() {
   return (neuron0x1d00b70()*-0.330309);
}

double NNfunction_sb_dLdL::synapse0x1d14070() {
   return (neuron0x1d00eb0()*-0.0453549);
}

double NNfunction_sb_dLdL::synapse0x1d140b0() {
   return (neuron0x1d011f0()*-0.133837);
}

double NNfunction_sb_dLdL::synapse0x1d140f0() {
   return (neuron0x1d01530()*-0.0880284);
}

double NNfunction_sb_dLdL::synapse0x1d14130() {
   return (neuron0x1d01870()*0.0101495);
}

double NNfunction_sb_dLdL::synapse0x1d14170() {
   return (neuron0x1d01bb0()*0.0456283);
}

double NNfunction_sb_dLdL::synapse0x1d141b0() {
   return (neuron0x1d01ef0()*-0.0173956);
}

double NNfunction_sb_dLdL::synapse0x1d141f0() {
   return (neuron0x1d02230()*0.0159987);
}

double NNfunction_sb_dLdL::synapse0x1d14230() {
   return (neuron0x1d02570()*-0.703584);
}

double NNfunction_sb_dLdL::synapse0x1d14270() {
   return (neuron0x1d028b0()*-0.165176);
}

double NNfunction_sb_dLdL::synapse0x1d142b0() {
   return (neuron0x1d02bf0()*0.00189374);
}

double NNfunction_sb_dLdL::synapse0x1d142f0() {
   return (neuron0x1d02f30()*0.133062);
}

double NNfunction_sb_dLdL::synapse0x1d14330() {
   return (neuron0x1d03270()*-0.117099);
}

double NNfunction_sb_dLdL::synapse0x1d13dc0() {
   return (neuron0x1d035b0()*0.0195946);
}

double NNfunction_sb_dLdL::synapse0x1d13e00() {
   return (neuron0x1d03b10()*-0.0755878);
}

double NNfunction_sb_dLdL::synapse0x1d14480() {
   return (neuron0x1d03d30()*-0.0277479);
}

double NNfunction_sb_dLdL::synapse0x1d144c0() {
   return (neuron0x1d04070()*-0.0359046);
}

double NNfunction_sb_dLdL::synapse0x1d14500() {
   return (neuron0x1d043b0()*-0.0279333);
}

double NNfunction_sb_dLdL::synapse0x1d14540() {
   return (neuron0x1d046f0()*-0.066632);
}

double NNfunction_sb_dLdL::synapse0x1d14580() {
   return (neuron0x1d04a30()*0.0258276);
}

double NNfunction_sb_dLdL::synapse0x1d145c0() {
   return (neuron0x1d04d70()*-0.0220183);
}

double NNfunction_sb_dLdL::synapse0x1d14940() {
   return (neuron0x1d00240()*-0.347122);
}

double NNfunction_sb_dLdL::synapse0x1d14980() {
   return (neuron0x1d004f0()*0.0180386);
}

double NNfunction_sb_dLdL::synapse0x1d149c0() {
   return (neuron0x1d00830()*-0.77492);
}

double NNfunction_sb_dLdL::synapse0x1d14a00() {
   return (neuron0x1d00b70()*-0.383249);
}

double NNfunction_sb_dLdL::synapse0x1d14a40() {
   return (neuron0x1d00eb0()*0.153171);
}

double NNfunction_sb_dLdL::synapse0x1d14a80() {
   return (neuron0x1d011f0()*-0.110491);
}

double NNfunction_sb_dLdL::synapse0x1d14ac0() {
   return (neuron0x1d01530()*-0.158367);
}

double NNfunction_sb_dLdL::synapse0x1d14b00() {
   return (neuron0x1d01870()*0.333895);
}

double NNfunction_sb_dLdL::synapse0x1d14b40() {
   return (neuron0x1d01bb0()*-0.184295);
}

double NNfunction_sb_dLdL::synapse0x1d14b80() {
   return (neuron0x1d01ef0()*-0.278879);
}

double NNfunction_sb_dLdL::synapse0x1d14bc0() {
   return (neuron0x1d02230()*-0.255597);
}

double NNfunction_sb_dLdL::synapse0x1d14c00() {
   return (neuron0x1d02570()*0.661281);
}

double NNfunction_sb_dLdL::synapse0x1d14c40() {
   return (neuron0x1d028b0()*-0.0380885);
}

double NNfunction_sb_dLdL::synapse0x1d14c80() {
   return (neuron0x1d02bf0()*-0.22296);
}

double NNfunction_sb_dLdL::synapse0x1d14cc0() {
   return (neuron0x1d02f30()*0.388406);
}

double NNfunction_sb_dLdL::synapse0x1d14d00() {
   return (neuron0x1d03270()*0.237129);
}

double NNfunction_sb_dLdL::synapse0x1d14790() {
   return (neuron0x1d035b0()*-0.118121);
}

double NNfunction_sb_dLdL::synapse0x1d147d0() {
   return (neuron0x1d03b10()*0.289388);
}

double NNfunction_sb_dLdL::synapse0x1d14e50() {
   return (neuron0x1d03d30()*-0.175781);
}

double NNfunction_sb_dLdL::synapse0x1d14e90() {
   return (neuron0x1d04070()*-0.0724247);
}

double NNfunction_sb_dLdL::synapse0x1d14ed0() {
   return (neuron0x1d043b0()*-0.434196);
}

double NNfunction_sb_dLdL::synapse0x1d14f10() {
   return (neuron0x1d046f0()*0.0846866);
}

double NNfunction_sb_dLdL::synapse0x1d14f50() {
   return (neuron0x1d04a30()*0.275679);
}

double NNfunction_sb_dLdL::synapse0x1d14f90() {
   return (neuron0x1d04d70()*0.630055);
}

double NNfunction_sb_dLdL::synapse0x1d15310() {
   return (neuron0x1d00240()*-0.00661937);
}

double NNfunction_sb_dLdL::synapse0x1d15350() {
   return (neuron0x1d004f0()*0.0133821);
}

double NNfunction_sb_dLdL::synapse0x1d15390() {
   return (neuron0x1d00830()*-0.00777986);
}

double NNfunction_sb_dLdL::synapse0x1d153d0() {
   return (neuron0x1d00b70()*-0.109443);
}

double NNfunction_sb_dLdL::synapse0x1d15410() {
   return (neuron0x1d00eb0()*0.0263979);
}

double NNfunction_sb_dLdL::synapse0x1d15450() {
   return (neuron0x1d011f0()*-0.00724531);
}

double NNfunction_sb_dLdL::synapse0x1d15490() {
   return (neuron0x1d01530()*0.0121045);
}

double NNfunction_sb_dLdL::synapse0x1d154d0() {
   return (neuron0x1d01870()*0.0202154);
}

double NNfunction_sb_dLdL::synapse0x1d15510() {
   return (neuron0x1d01bb0()*0.0350154);
}

double NNfunction_sb_dLdL::synapse0x1d15550() {
   return (neuron0x1d01ef0()*-0.0838108);
}

double NNfunction_sb_dLdL::synapse0x1d15590() {
   return (neuron0x1d02230()*-0.127996);
}

double NNfunction_sb_dLdL::synapse0x1d155d0() {
   return (neuron0x1d02570()*-0.916243);
}

double NNfunction_sb_dLdL::synapse0x1d15610() {
   return (neuron0x1d028b0()*0.0306756);
}

double NNfunction_sb_dLdL::synapse0x1d15650() {
   return (neuron0x1d02bf0()*0.0139817);
}

double NNfunction_sb_dLdL::synapse0x1d15690() {
   return (neuron0x1d02f30()*0.0276474);
}

double NNfunction_sb_dLdL::synapse0x1d156d0() {
   return (neuron0x1d03270()*0.0492884);
}

double NNfunction_sb_dLdL::synapse0x1d15160() {
   return (neuron0x1d035b0()*0.011432);
}

double NNfunction_sb_dLdL::synapse0x1d151a0() {
   return (neuron0x1d03b10()*0.00542906);
}

double NNfunction_sb_dLdL::synapse0x1d15820() {
   return (neuron0x1d03d30()*0.0328673);
}

double NNfunction_sb_dLdL::synapse0x1d15860() {
   return (neuron0x1d04070()*0.0207325);
}

double NNfunction_sb_dLdL::synapse0x1d158a0() {
   return (neuron0x1d043b0()*-0.0266328);
}

double NNfunction_sb_dLdL::synapse0x1d158e0() {
   return (neuron0x1d046f0()*0.0176908);
}

double NNfunction_sb_dLdL::synapse0x1d15920() {
   return (neuron0x1d04a30()*-0.0149365);
}

double NNfunction_sb_dLdL::synapse0x1d15960() {
   return (neuron0x1d04d70()*0.00939093);
}

double NNfunction_sb_dLdL::synapse0x1d27830() {
   return (neuron0x1d00240()*-0.0266638);
}

double NNfunction_sb_dLdL::synapse0x1d27870() {
   return (neuron0x1d004f0()*0.0116492);
}

double NNfunction_sb_dLdL::synapse0x1d278b0() {
   return (neuron0x1d00830()*-0.578838);
}

double NNfunction_sb_dLdL::synapse0x1d278f0() {
   return (neuron0x1d00b70()*-0.213395);
}

double NNfunction_sb_dLdL::synapse0x1d27930() {
   return (neuron0x1d00eb0()*0.0325124);
}

double NNfunction_sb_dLdL::synapse0x1d27970() {
   return (neuron0x1d011f0()*-0.041507);
}

double NNfunction_sb_dLdL::synapse0x1d279b0() {
   return (neuron0x1d01530()*0.0124154);
}

double NNfunction_sb_dLdL::synapse0x1d279f0() {
   return (neuron0x1d01870()*0.000165053);
}

double NNfunction_sb_dLdL::synapse0x1d27a30() {
   return (neuron0x1d01bb0()*0.00140665);
}

double NNfunction_sb_dLdL::synapse0x1d27a70() {
   return (neuron0x1d01ef0()*-0.0314441);
}

double NNfunction_sb_dLdL::synapse0x1d27ab0() {
   return (neuron0x1d02230()*-0.026462);
}

double NNfunction_sb_dLdL::synapse0x1d27af0() {
   return (neuron0x1d02570()*-0.210867);
}

double NNfunction_sb_dLdL::synapse0x1d27b30() {
   return (neuron0x1d028b0()*-0.0502719);
}

double NNfunction_sb_dLdL::synapse0x1d27b70() {
   return (neuron0x1d02bf0()*0.00217023);
}

double NNfunction_sb_dLdL::synapse0x1d27bb0() {
   return (neuron0x1d02f30()*-0.0593314);
}

double NNfunction_sb_dLdL::synapse0x1d27bf0() {
   return (neuron0x1d03270()*-0.0233988);
}

double NNfunction_sb_dLdL::synapse0x1d159a0() {
   return (neuron0x1d035b0()*-0.00514247);
}

double NNfunction_sb_dLdL::synapse0x1d159e0() {
   return (neuron0x1d03b10()*-0.0381141);
}

double NNfunction_sb_dLdL::synapse0x1d27d40() {
   return (neuron0x1d03d30()*-0.0266387);
}

double NNfunction_sb_dLdL::synapse0x1d27d80() {
   return (neuron0x1d04070()*0.0149152);
}

double NNfunction_sb_dLdL::synapse0x1d27dc0() {
   return (neuron0x1d043b0()*-0.0373659);
}

double NNfunction_sb_dLdL::synapse0x1d27e00() {
   return (neuron0x1d046f0()*0.00623079);
}

double NNfunction_sb_dLdL::synapse0x1d27e40() {
   return (neuron0x1d04a30()*0.0139653);
}

double NNfunction_sb_dLdL::synapse0x1d27e80() {
   return (neuron0x1d04d70()*0.0173208);
}

double NNfunction_sb_dLdL::synapse0x1d28200() {
   return (neuron0x1d00240()*0.0680165);
}

double NNfunction_sb_dLdL::synapse0x1d28240() {
   return (neuron0x1d004f0()*0.110643);
}

double NNfunction_sb_dLdL::synapse0x1d28280() {
   return (neuron0x1d00830()*-0.198017);
}

double NNfunction_sb_dLdL::synapse0x1d282c0() {
   return (neuron0x1d00b70()*0.711713);
}

double NNfunction_sb_dLdL::synapse0x1d28300() {
   return (neuron0x1d00eb0()*0.0870718);
}

double NNfunction_sb_dLdL::synapse0x1d28340() {
   return (neuron0x1d011f0()*0.0479021);
}

double NNfunction_sb_dLdL::synapse0x1d28380() {
   return (neuron0x1d01530()*0.445933);
}

double NNfunction_sb_dLdL::synapse0x1d283c0() {
   return (neuron0x1d01870()*0.0317375);
}

double NNfunction_sb_dLdL::synapse0x1d28400() {
   return (neuron0x1d01bb0()*-0.223155);
}

double NNfunction_sb_dLdL::synapse0x1d28440() {
   return (neuron0x1d01ef0()*-0.0901056);
}

double NNfunction_sb_dLdL::synapse0x1d28480() {
   return (neuron0x1d02230()*-0.127351);
}

double NNfunction_sb_dLdL::synapse0x1d284c0() {
   return (neuron0x1d02570()*1.56223);
}

double NNfunction_sb_dLdL::synapse0x1d28500() {
   return (neuron0x1d028b0()*-0.107164);
}

double NNfunction_sb_dLdL::synapse0x1d28540() {
   return (neuron0x1d02bf0()*0.200183);
}

double NNfunction_sb_dLdL::synapse0x1d28580() {
   return (neuron0x1d02f30()*-0.0573864);
}

double NNfunction_sb_dLdL::synapse0x1d285c0() {
   return (neuron0x1d03270()*0.356964);
}

double NNfunction_sb_dLdL::synapse0x1d28050() {
   return (neuron0x1d035b0()*-0.179457);
}

double NNfunction_sb_dLdL::synapse0x1d28090() {
   return (neuron0x1d03b10()*0.0597489);
}

double NNfunction_sb_dLdL::synapse0x1d28710() {
   return (neuron0x1d03d30()*-0.342204);
}

double NNfunction_sb_dLdL::synapse0x1d28750() {
   return (neuron0x1d04070()*-0.174209);
}

double NNfunction_sb_dLdL::synapse0x1d28790() {
   return (neuron0x1d043b0()*0.0741203);
}

double NNfunction_sb_dLdL::synapse0x1d287d0() {
   return (neuron0x1d046f0()*-0.150005);
}

double NNfunction_sb_dLdL::synapse0x1d28810() {
   return (neuron0x1d04a30()*0.0382507);
}

double NNfunction_sb_dLdL::synapse0x1d28850() {
   return (neuron0x1d04d70()*-0.08695);
}

double NNfunction_sb_dLdL::synapse0x1d28bd0() {
   return (neuron0x1d00240()*-0.454316);
}

double NNfunction_sb_dLdL::synapse0x1d28c10() {
   return (neuron0x1d004f0()*-0.0274813);
}

double NNfunction_sb_dLdL::synapse0x1d28c50() {
   return (neuron0x1d00830()*0.134533);
}

double NNfunction_sb_dLdL::synapse0x1d28c90() {
   return (neuron0x1d00b70()*-0.430792);
}

double NNfunction_sb_dLdL::synapse0x1d28cd0() {
   return (neuron0x1d00eb0()*0.157391);
}

double NNfunction_sb_dLdL::synapse0x1d28d10() {
   return (neuron0x1d011f0()*-0.552082);
}

double NNfunction_sb_dLdL::synapse0x1d28d50() {
   return (neuron0x1d01530()*0.368734);
}

double NNfunction_sb_dLdL::synapse0x1d28d90() {
   return (neuron0x1d01870()*0.241252);
}

double NNfunction_sb_dLdL::synapse0x1d28dd0() {
   return (neuron0x1d01bb0()*0.188358);
}

double NNfunction_sb_dLdL::synapse0x1d28e10() {
   return (neuron0x1d01ef0()*-0.795861);
}

double NNfunction_sb_dLdL::synapse0x1d28e50() {
   return (neuron0x1d02230()*-1.15178);
}

double NNfunction_sb_dLdL::synapse0x1d28e90() {
   return (neuron0x1d02570()*0.0821402);
}

double NNfunction_sb_dLdL::synapse0x1d28ed0() {
   return (neuron0x1d028b0()*-0.607232);
}

double NNfunction_sb_dLdL::synapse0x1d28f10() {
   return (neuron0x1d02bf0()*-0.0482365);
}

double NNfunction_sb_dLdL::synapse0x1d28f50() {
   return (neuron0x1d02f30()*0.372146);
}

double NNfunction_sb_dLdL::synapse0x1d28f90() {
   return (neuron0x1d03270()*0.3796);
}

double NNfunction_sb_dLdL::synapse0x1d28a20() {
   return (neuron0x1d035b0()*0.00153258);
}

double NNfunction_sb_dLdL::synapse0x1d28a60() {
   return (neuron0x1d03b10()*0.356898);
}

double NNfunction_sb_dLdL::synapse0x1d290e0() {
   return (neuron0x1d03d30()*0.269359);
}

double NNfunction_sb_dLdL::synapse0x1d29120() {
   return (neuron0x1d04070()*0.243545);
}

double NNfunction_sb_dLdL::synapse0x1d29160() {
   return (neuron0x1d043b0()*-0.349412);
}

double NNfunction_sb_dLdL::synapse0x1d291a0() {
   return (neuron0x1d046f0()*0.159078);
}

double NNfunction_sb_dLdL::synapse0x1d291e0() {
   return (neuron0x1d04a30()*0.154167);
}

double NNfunction_sb_dLdL::synapse0x1d29220() {
   return (neuron0x1d04d70()*0.631212);
}

double NNfunction_sb_dLdL::synapse0x1d295a0() {
   return (neuron0x1d00240()*-0.00381162);
}

double NNfunction_sb_dLdL::synapse0x1d295e0() {
   return (neuron0x1d004f0()*-0.0058186);
}

double NNfunction_sb_dLdL::synapse0x1d29620() {
   return (neuron0x1d00830()*-0.0770487);
}

double NNfunction_sb_dLdL::synapse0x1d29660() {
   return (neuron0x1d00b70()*0.356599);
}

double NNfunction_sb_dLdL::synapse0x1d296a0() {
   return (neuron0x1d00eb0()*0.0146821);
}

double NNfunction_sb_dLdL::synapse0x1d296e0() {
   return (neuron0x1d011f0()*0.00990704);
}

double NNfunction_sb_dLdL::synapse0x1d29720() {
   return (neuron0x1d01530()*0.00791937);
}

double NNfunction_sb_dLdL::synapse0x1d29760() {
   return (neuron0x1d01870()*-0.0148772);
}

double NNfunction_sb_dLdL::synapse0x1d297a0() {
   return (neuron0x1d01bb0()*-0.0205488);
}

double NNfunction_sb_dLdL::synapse0x1d297e0() {
   return (neuron0x1d01ef0()*-0.00911091);
}

double NNfunction_sb_dLdL::synapse0x1d29820() {
   return (neuron0x1d02230()*-0.0213935);
}

double NNfunction_sb_dLdL::synapse0x1d29860() {
   return (neuron0x1d02570()*2.16578);
}

double NNfunction_sb_dLdL::synapse0x1d298a0() {
   return (neuron0x1d028b0()*-0.0152806);
}

double NNfunction_sb_dLdL::synapse0x1d298e0() {
   return (neuron0x1d02bf0()*0.00803052);
}

double NNfunction_sb_dLdL::synapse0x1d29920() {
   return (neuron0x1d02f30()*-0.00258217);
}

double NNfunction_sb_dLdL::synapse0x1d29960() {
   return (neuron0x1d03270()*0.00571206);
}

double NNfunction_sb_dLdL::synapse0x1d293f0() {
   return (neuron0x1d035b0()*0.0184144);
}

double NNfunction_sb_dLdL::synapse0x1d29430() {
   return (neuron0x1d03b10()*0.00174653);
}

double NNfunction_sb_dLdL::synapse0x1d29ab0() {
   return (neuron0x1d03d30()*0.00189545);
}

double NNfunction_sb_dLdL::synapse0x1d29af0() {
   return (neuron0x1d04070()*0.00770947);
}

double NNfunction_sb_dLdL::synapse0x1d29b30() {
   return (neuron0x1d043b0()*0.0292575);
}

double NNfunction_sb_dLdL::synapse0x1d29b70() {
   return (neuron0x1d046f0()*-0.00132118);
}

double NNfunction_sb_dLdL::synapse0x1d29bb0() {
   return (neuron0x1d04a30()*0.00210084);
}

double NNfunction_sb_dLdL::synapse0x1d29bf0() {
   return (neuron0x1d04d70()*-0.0159982);
}

double NNfunction_sb_dLdL::synapse0x1ac9a00() {
   return (neuron0x1d051e0()*0.0535341);
}

double NNfunction_sb_dLdL::synapse0x1ac9a40() {
   return (neuron0x1d05b30()*-1.32917);
}

double NNfunction_sb_dLdL::synapse0x1d076a0() {
   return (neuron0x1d06610()*0.403878);
}

double NNfunction_sb_dLdL::synapse0x1d076e0() {
   return (neuron0x1d060b0()*-0.0536663);
}

double NNfunction_sb_dLdL::synapse0x1d08070() {
   return (neuron0x1d073f0()*-0.603793);
}

double NNfunction_sb_dLdL::synapse0x1d080b0() {
   return (neuron0x1d07dc0()*-2.71589);
}

double NNfunction_sb_dLdL::synapse0x1d08e40() {
   return (neuron0x1d08b90()*0.785166);
}

double NNfunction_sb_dLdL::synapse0x1d08e80() {
   return (neuron0x1d09560()*0.527666);
}

double NNfunction_sb_dLdL::synapse0x1d09810() {
   return (neuron0x1d09f30()*0.631419);
}

double NNfunction_sb_dLdL::synapse0x1d09850() {
   return (neuron0x1d0aa10()*1.53571);
}

double NNfunction_sb_dLdL::synapse0x1d0a1e0() {
   return (neuron0x1d0b3e0()*0.158156);
}

double NNfunction_sb_dLdL::synapse0x1d0a220() {
   return (neuron0x1d084c0()*-4.26662);
}

double NNfunction_sb_dLdL::synapse0x1d0acc0() {
   return (neuron0x1d0cf90()*0.034946);
}

double NNfunction_sb_dLdL::synapse0x1d0ad00() {
   return (neuron0x1d0d960()*0.538405);
}

double NNfunction_sb_dLdL::synapse0x1d0b690() {
   return (neuron0x1d0e330()*1.85524);
}

double NNfunction_sb_dLdL::synapse0x1d0b6d0() {
   return (neuron0x1d0ed00()*0.215942);
}

double NNfunction_sb_dLdL::synapse0x1d08770() {
   return (neuron0x1d10b10()*0.0446579);
}

double NNfunction_sb_dLdL::synapse0x1d087b0() {
   return (neuron0x1d10df0()*0.893898);
}

double NNfunction_sb_dLdL::synapse0x1d0d240() {
   return (neuron0x1d117c0()*-1.32509);
}

double NNfunction_sb_dLdL::synapse0x1d0d280() {
   return (neuron0x1d12190()*0.361184);
}

double NNfunction_sb_dLdL::synapse0x1d0dc10() {
   return (neuron0x1d12b60()*0.429471);
}

double NNfunction_sb_dLdL::synapse0x1d0dc50() {
   return (neuron0x1d13530()*-1.57518);
}

double NNfunction_sb_dLdL::synapse0x1d0e5e0() {
   return (neuron0x1d0c080()*-3.39162);
}

double NNfunction_sb_dLdL::synapse0x1d0e620() {
   return (neuron0x1d0ca50()*-1.34212);
}

double NNfunction_sb_dLdL::synapse0x1d0efb0() {
   return (neuron0x1d162c0()*-0.377596);
}

double NNfunction_sb_dLdL::synapse0x1d0eff0() {
   return (neuron0x1d16c90()*0.000847297);
}

double NNfunction_sb_dLdL::synapse0x1d03150() {
   return (neuron0x1d17660()*-0.554231);
}

double NNfunction_sb_dLdL::synapse0x1d03190() {
   return (neuron0x1d18030()*-0.162181);
}

double NNfunction_sb_dLdL::synapse0x1d110a0() {
   return (neuron0x1d18a00()*0.638536);
}

double NNfunction_sb_dLdL::synapse0x1d110e0() {
   return (neuron0x1d193d0()*0.552704);
}

double NNfunction_sb_dLdL::synapse0x1d11a70() {
   return (neuron0x1d19da0()*-0.404448);
}

double NNfunction_sb_dLdL::synapse0x1d11ab0() {
   return (neuron0x1d1a770()*0.083982);
}

double NNfunction_sb_dLdL::synapse0x1d12440() {
   return (neuron0x1d10800()*0.419513);
}

double NNfunction_sb_dLdL::synapse0x1d12480() {
   return (neuron0x1d1d350()*0.289706);
}

double NNfunction_sb_dLdL::synapse0x1d12e10() {
   return (neuron0x1d1dd20()*0.0255159);
}

double NNfunction_sb_dLdL::synapse0x1d12e50() {
   return (neuron0x1d1e6f0()*0.0942092);
}

double NNfunction_sb_dLdL::synapse0x1d137e0() {
   return (neuron0x1d1f0c0()*0.105538);
}

double NNfunction_sb_dLdL::synapse0x1d13820() {
   return (neuron0x1d1fa90()*2.55245);
}

double NNfunction_sb_dLdL::synapse0x1d0c330() {
   return (neuron0x1d20460()*-0.344758);
}

double NNfunction_sb_dLdL::synapse0x1d0c370() {
   return (neuron0x1d20e30()*0.0979445);
}

double NNfunction_sb_dLdL::synapse0x1d15be0() {
   return (neuron0x1d21800()*2.1219);
}

double NNfunction_sb_dLdL::synapse0x1d15c20() {
   return (neuron0x1d223e0()*0.370294);
}

double NNfunction_sb_dLdL::synapse0x1d16570() {
   return (neuron0x1d22db0()*0.261957);
}

double NNfunction_sb_dLdL::synapse0x1d165b0() {
   return (neuron0x1d13c30()*1.25824);
}

double NNfunction_sb_dLdL::synapse0x1d16f40() {
   return (neuron0x1d14600()*-0.00899353);
}

double NNfunction_sb_dLdL::synapse0x1d16f80() {
   return (neuron0x1d14fd0()*-1.13115);
}

double NNfunction_sb_dLdL::synapse0x1d17910() {
   return (neuron0x1d27610()*2.42098);
}

double NNfunction_sb_dLdL::synapse0x1d17950() {
   return (neuron0x1d27ec0()*-0.205831);
}

double NNfunction_sb_dLdL::synapse0x1d182e0() {
   return (neuron0x1d28890()*-0.030653);
}

double NNfunction_sb_dLdL::synapse0x1d18320() {
   return (neuron0x1d29260()*1.60058);
}

double NNfunction_sb_dLdL::synapse0x1d1aa20() {
   return (neuron0x1d051e0()*-0.0124302);
}

double NNfunction_sb_dLdL::synapse0x1d1aa60() {
   return (neuron0x1d05b30()*0.534758);
}

double NNfunction_sb_dLdL::synapse0x1d0ffe0() {
   return (neuron0x1d06610()*-0.0308986);
}

double NNfunction_sb_dLdL::synapse0x1d10020() {
   return (neuron0x1d060b0()*0.0112291);
}

double NNfunction_sb_dLdL::synapse0x1d1d600() {
   return (neuron0x1d073f0()*0.0859005);
}

double NNfunction_sb_dLdL::synapse0x1d1d640() {
   return (neuron0x1d07dc0()*0.256767);
}

double NNfunction_sb_dLdL::synapse0x1d1dfd0() {
   return (neuron0x1d08b90()*-0.0513202);
}

double NNfunction_sb_dLdL::synapse0x1d1e010() {
   return (neuron0x1d09560()*0.566493);
}

double NNfunction_sb_dLdL::synapse0x1d1e9a0() {
   return (neuron0x1d09f30()*-1.03489);
}

double NNfunction_sb_dLdL::synapse0x1d1e9e0() {
   return (neuron0x1d0aa10()*0.0677726);
}

double NNfunction_sb_dLdL::synapse0x1d1f370() {
   return (neuron0x1d0b3e0()*-0.00975976);
}

double NNfunction_sb_dLdL::synapse0x1d1f3b0() {
   return (neuron0x1d084c0()*-0.0271449);
}

double NNfunction_sb_dLdL::synapse0x1d1fd40() {
   return (neuron0x1d0cf90()*0.0110847);
}

double NNfunction_sb_dLdL::synapse0x1d1fd80() {
   return (neuron0x1d0d960()*-0.746182);
}

double NNfunction_sb_dLdL::synapse0x1d20710() {
   return (neuron0x1d0e330()*0.00344659);
}

double NNfunction_sb_dLdL::synapse0x1d20750() {
   return (neuron0x1d0ed00()*0.0156981);
}

double NNfunction_sb_dLdL::synapse0x1d210e0() {
   return (neuron0x1d10b10()*0.0201326);
}

double NNfunction_sb_dLdL::synapse0x1d21120() {
   return (neuron0x1d10df0()*-0.0811835);
}

double NNfunction_sb_dLdL::synapse0x1d21ab0() {
   return (neuron0x1d117c0()*0.022438);
}

double NNfunction_sb_dLdL::synapse0x1d21af0() {
   return (neuron0x1d12190()*-0.0107947);
}

double NNfunction_sb_dLdL::synapse0x1d22690() {
   return (neuron0x1d12b60()*0.0149798);
}

double NNfunction_sb_dLdL::synapse0x1d226d0() {
   return (neuron0x1d13530()*0.264473);
}

double NNfunction_sb_dLdL::synapse0x1d23060() {
   return (neuron0x1d0c080()*1.09157);
}

double NNfunction_sb_dLdL::synapse0x1d230a0() {
   return (neuron0x1d0ca50()*1.03981);
}

double NNfunction_sb_dLdL::synapse0x1d13ee0() {
   return (neuron0x1d162c0()*-0.0690936);
}

double NNfunction_sb_dLdL::synapse0x1d13f20() {
   return (neuron0x1d16c90()*-0.0135321);
}

double NNfunction_sb_dLdL::synapse0x1d148b0() {
   return (neuron0x1d17660()*0.947941);
}

double NNfunction_sb_dLdL::synapse0x1d148f0() {
   return (neuron0x1d18030()*0.0247206);
}

double NNfunction_sb_dLdL::synapse0x1d15280() {
   return (neuron0x1d18a00()*0.0229095);
}

double NNfunction_sb_dLdL::synapse0x1d152c0() {
   return (neuron0x1d193d0()*-0.0660824);
}

double NNfunction_sb_dLdL::synapse0x1d277a0() {
   return (neuron0x1d19da0()*0.00760879);
}

double NNfunction_sb_dLdL::synapse0x1d277e0() {
   return (neuron0x1d1a770()*0.0140066);
}

double NNfunction_sb_dLdL::synapse0x1d28170() {
   return (neuron0x1d10800()*0.0228824);
}

double NNfunction_sb_dLdL::synapse0x1d281b0() {
   return (neuron0x1d1d350()*-0.0677763);
}

double NNfunction_sb_dLdL::synapse0x1d28b40() {
   return (neuron0x1d1dd20()*0.022801);
}

double NNfunction_sb_dLdL::synapse0x1d28b80() {
   return (neuron0x1d1e6f0()*0.000138589);
}

double NNfunction_sb_dLdL::synapse0x1d29510() {
   return (neuron0x1d1f0c0()*-0.00727052);
}

double NNfunction_sb_dLdL::synapse0x1d29550() {
   return (neuron0x1d1fa90()*-0.554153);
}

double NNfunction_sb_dLdL::synapse0x1d05400() {
   return (neuron0x1d20460()*-0.0145478);
}

double NNfunction_sb_dLdL::synapse0x1d05440() {
   return (neuron0x1d20e30()*-0.00436483);
}

double NNfunction_sb_dLdL::synapse0x1d18cb0() {
   return (neuron0x1d21800()*-0.0808911);
}

double NNfunction_sb_dLdL::synapse0x1d18cf0() {
   return (neuron0x1d223e0()*-0.108925);
}

double NNfunction_sb_dLdL::synapse0x1d29c30() {
   return (neuron0x1d22db0()*-0.872272);
}

double NNfunction_sb_dLdL::synapse0x1d29c70() {
   return (neuron0x1d13c30()*-0.182023);
}

double NNfunction_sb_dLdL::synapse0x1d29cb0() {
   return (neuron0x1d14600()*-0.0145983);
}

double NNfunction_sb_dLdL::synapse0x1d29cf0() {
   return (neuron0x1d14fd0()*0.700293);
}

double NNfunction_sb_dLdL::synapse0x1d30ba0() {
   return (neuron0x1d27610()*-0.545796);
}

double NNfunction_sb_dLdL::synapse0x1d30be0() {
   return (neuron0x1d27ec0()*0.00722739);
}

double NNfunction_sb_dLdL::synapse0x1d30c20() {
   return (neuron0x1d28890()*0.0144365);
}

double NNfunction_sb_dLdL::synapse0x1d30c60() {
   return (neuron0x1d29260()*-0.560185);
}

double NNfunction_sb_dLdL::synapse0x1d30fe0() {
   return (neuron0x1d051e0()*-0.194631);
}

double NNfunction_sb_dLdL::synapse0x1d31020() {
   return (neuron0x1d05b30()*-7.64753);
}

double NNfunction_sb_dLdL::synapse0x1d31060() {
   return (neuron0x1d06610()*-0.493095);
}

double NNfunction_sb_dLdL::synapse0x1d310a0() {
   return (neuron0x1d060b0()*0.470096);
}

double NNfunction_sb_dLdL::synapse0x1d310e0() {
   return (neuron0x1d073f0()*-1.01045);
}

double NNfunction_sb_dLdL::synapse0x1d31120() {
   return (neuron0x1d07dc0()*-3.4438);
}

double NNfunction_sb_dLdL::synapse0x1d31160() {
   return (neuron0x1d08b90()*0.918699);
}

double NNfunction_sb_dLdL::synapse0x1d311a0() {
   return (neuron0x1d09560()*0.876257);
}

double NNfunction_sb_dLdL::synapse0x1d311e0() {
   return (neuron0x1d09f30()*0.759427);
}

double NNfunction_sb_dLdL::synapse0x1d31220() {
   return (neuron0x1d0aa10()*0.549476);
}

double NNfunction_sb_dLdL::synapse0x1d31260() {
   return (neuron0x1d0b3e0()*-0.400501);
}

double NNfunction_sb_dLdL::synapse0x1d312a0() {
   return (neuron0x1d084c0()*0.26191);
}

double NNfunction_sb_dLdL::synapse0x1d312e0() {
   return (neuron0x1d0cf90()*-1.00879);
}

double NNfunction_sb_dLdL::synapse0x1d31320() {
   return (neuron0x1d0d960()*0.608258);
}

double NNfunction_sb_dLdL::synapse0x1d31360() {
   return (neuron0x1d0e330()*1.72362);
}

double NNfunction_sb_dLdL::synapse0x1d313a0() {
   return (neuron0x1d0ed00()*0.211836);
}

double NNfunction_sb_dLdL::synapse0x1d30e30() {
   return (neuron0x1d10b10()*1.2048);
}

double NNfunction_sb_dLdL::synapse0x1d30e70() {
   return (neuron0x1d10df0()*0.117961);
}

double NNfunction_sb_dLdL::synapse0x1d314f0() {
   return (neuron0x1d117c0()*0.43997);
}

double NNfunction_sb_dLdL::synapse0x1d31530() {
   return (neuron0x1d12190()*0.791926);
}

double NNfunction_sb_dLdL::synapse0x1d31570() {
   return (neuron0x1d12b60()*0.207703);
}

double NNfunction_sb_dLdL::synapse0x1d315b0() {
   return (neuron0x1d13530()*-2.39688);
}

double NNfunction_sb_dLdL::synapse0x1d315f0() {
   return (neuron0x1d0c080()*-3.26834);
}

double NNfunction_sb_dLdL::synapse0x1d31630() {
   return (neuron0x1d0ca50()*0.323642);
}

double NNfunction_sb_dLdL::synapse0x1d31670() {
   return (neuron0x1d162c0()*3.59258);
}

double NNfunction_sb_dLdL::synapse0x1d316b0() {
   return (neuron0x1d16c90()*-0.792163);
}

double NNfunction_sb_dLdL::synapse0x1d316f0() {
   return (neuron0x1d17660()*-0.782756);
}

double NNfunction_sb_dLdL::synapse0x1d31730() {
   return (neuron0x1d18030()*1.65889);
}

double NNfunction_sb_dLdL::synapse0x1d31770() {
   return (neuron0x1d18a00()*0.623968);
}

double NNfunction_sb_dLdL::synapse0x1d317b0() {
   return (neuron0x1d193d0()*1.52955);
}

double NNfunction_sb_dLdL::synapse0x1d317f0() {
   return (neuron0x1d19da0()*-0.0668076);
}

double NNfunction_sb_dLdL::synapse0x1d31830() {
   return (neuron0x1d1a770()*0.10992);
}

double NNfunction_sb_dLdL::synapse0x1d313e0() {
   return (neuron0x1d10800()*2.0215);
}

double NNfunction_sb_dLdL::synapse0x1d31420() {
   return (neuron0x1d1d350()*2.02779);
}

double NNfunction_sb_dLdL::synapse0x1d31460() {
   return (neuron0x1d1dd20()*0.98786);
}

double NNfunction_sb_dLdL::synapse0x1d314a0() {
   return (neuron0x1d1e6f0()*0.959865);
}

double NNfunction_sb_dLdL::synapse0x1d31a80() {
   return (neuron0x1d1f0c0()*-1.08095);
}

double NNfunction_sb_dLdL::synapse0x1d31ac0() {
   return (neuron0x1d1fa90()*1.47094);
}

double NNfunction_sb_dLdL::synapse0x1d31b00() {
   return (neuron0x1d20460()*-0.0275946);
}

double NNfunction_sb_dLdL::synapse0x1d31b40() {
   return (neuron0x1d20e30()*0.574878);
}

double NNfunction_sb_dLdL::synapse0x1d31b80() {
   return (neuron0x1d21800()*2.17353);
}

double NNfunction_sb_dLdL::synapse0x1d31bc0() {
   return (neuron0x1d223e0()*1.80078);
}

double NNfunction_sb_dLdL::synapse0x1d31c00() {
   return (neuron0x1d22db0()*2.11346);
}

double NNfunction_sb_dLdL::synapse0x1d31c40() {
   return (neuron0x1d13c30()*-1.11516);
}

double NNfunction_sb_dLdL::synapse0x1d31c80() {
   return (neuron0x1d14600()*-0.565765);
}

double NNfunction_sb_dLdL::synapse0x1d31cc0() {
   return (neuron0x1d14fd0()*-0.845168);
}

double NNfunction_sb_dLdL::synapse0x1d31d00() {
   return (neuron0x1d27610()*0.612952);
}

double NNfunction_sb_dLdL::synapse0x1d31d40() {
   return (neuron0x1d27ec0()*0.982703);
}

double NNfunction_sb_dLdL::synapse0x1d31d80() {
   return (neuron0x1d28890()*0.426321);
}

double NNfunction_sb_dLdL::synapse0x1d31dc0() {
   return (neuron0x1d29260()*1.62007);
}

double NNfunction_sb_dLdL::synapse0x1d32140() {
   return (neuron0x1d051e0()*0.0998626);
}

double NNfunction_sb_dLdL::synapse0x1d32180() {
   return (neuron0x1d05b30()*0.225882);
}

double NNfunction_sb_dLdL::synapse0x1d321c0() {
   return (neuron0x1d06610()*-0.578712);
}

double NNfunction_sb_dLdL::synapse0x1d32200() {
   return (neuron0x1d060b0()*-0.238712);
}

double NNfunction_sb_dLdL::synapse0x1d32240() {
   return (neuron0x1d073f0()*-0.655499);
}

double NNfunction_sb_dLdL::synapse0x1d32280() {
   return (neuron0x1d07dc0()*-0.25538);
}

double NNfunction_sb_dLdL::synapse0x1d322c0() {
   return (neuron0x1d08b90()*-0.535924);
}

double NNfunction_sb_dLdL::synapse0x1d32300() {
   return (neuron0x1d09560()*0.472336);
}

double NNfunction_sb_dLdL::synapse0x1d32340() {
   return (neuron0x1d09f30()*-0.165669);
}

double NNfunction_sb_dLdL::synapse0x1d32380() {
   return (neuron0x1d0aa10()*-0.242393);
}

double NNfunction_sb_dLdL::synapse0x1d323c0() {
   return (neuron0x1d0b3e0()*-0.113648);
}

double NNfunction_sb_dLdL::synapse0x1d32400() {
   return (neuron0x1d084c0()*0.0687585);
}

double NNfunction_sb_dLdL::synapse0x1d32440() {
   return (neuron0x1d0cf90()*0.00467962);
}

double NNfunction_sb_dLdL::synapse0x1d32480() {
   return (neuron0x1d0d960()*-0.0603105);
}

double NNfunction_sb_dLdL::synapse0x1d324c0() {
   return (neuron0x1d0e330()*0.568688);
}

double NNfunction_sb_dLdL::synapse0x1d32500() {
   return (neuron0x1d0ed00()*0.251585);
}

double NNfunction_sb_dLdL::synapse0x1d31f90() {
   return (neuron0x1d10b10()*-0.313838);
}

double NNfunction_sb_dLdL::synapse0x1d31fd0() {
   return (neuron0x1d10df0()*0.325533);
}

double NNfunction_sb_dLdL::synapse0x1d32650() {
   return (neuron0x1d117c0()*0.0621177);
}

double NNfunction_sb_dLdL::synapse0x1d32690() {
   return (neuron0x1d12190()*-0.24828);
}

double NNfunction_sb_dLdL::synapse0x1d326d0() {
   return (neuron0x1d12b60()*0.341045);
}

double NNfunction_sb_dLdL::synapse0x1d32710() {
   return (neuron0x1d13530()*-0.363041);
}

double NNfunction_sb_dLdL::synapse0x1d32750() {
   return (neuron0x1d0c080()*-0.391203);
}

double NNfunction_sb_dLdL::synapse0x1d32790() {
   return (neuron0x1d0ca50()*-0.305501);
}

double NNfunction_sb_dLdL::synapse0x1d327d0() {
   return (neuron0x1d162c0()*0.0942328);
}

double NNfunction_sb_dLdL::synapse0x1d32810() {
   return (neuron0x1d16c90()*-0.348681);
}

double NNfunction_sb_dLdL::synapse0x1d32850() {
   return (neuron0x1d17660()*-0.713509);
}

double NNfunction_sb_dLdL::synapse0x1d32890() {
   return (neuron0x1d18030()*0.354382);
}

double NNfunction_sb_dLdL::synapse0x1d328d0() {
   return (neuron0x1d18a00()*-0.022067);
}

double NNfunction_sb_dLdL::synapse0x1d32910() {
   return (neuron0x1d193d0()*-0.152964);
}

double NNfunction_sb_dLdL::synapse0x1d32950() {
   return (neuron0x1d19da0()*0.311086);
}

double NNfunction_sb_dLdL::synapse0x1d32990() {
   return (neuron0x1d1a770()*0.306861);
}

double NNfunction_sb_dLdL::synapse0x1d32540() {
   return (neuron0x1d10800()*0.318506);
}

double NNfunction_sb_dLdL::synapse0x1d32580() {
   return (neuron0x1d1d350()*0.22784);
}

double NNfunction_sb_dLdL::synapse0x1d325c0() {
   return (neuron0x1d1dd20()*-0.237408);
}

double NNfunction_sb_dLdL::synapse0x1d32600() {
   return (neuron0x1d1e6f0()*-0.223208);
}

double NNfunction_sb_dLdL::synapse0x1d32be0() {
   return (neuron0x1d1f0c0()*-0.351588);
}

double NNfunction_sb_dLdL::synapse0x1d32c20() {
   return (neuron0x1d1fa90()*0.0656153);
}

double NNfunction_sb_dLdL::synapse0x1d32c60() {
   return (neuron0x1d20460()*0.00851755);
}

double NNfunction_sb_dLdL::synapse0x1d32ca0() {
   return (neuron0x1d20e30()*0.319729);
}

double NNfunction_sb_dLdL::synapse0x1d32ce0() {
   return (neuron0x1d21800()*-0.339023);
}

double NNfunction_sb_dLdL::synapse0x1d32d20() {
   return (neuron0x1d223e0()*-0.232829);
}

double NNfunction_sb_dLdL::synapse0x1d32d60() {
   return (neuron0x1d22db0()*-0.0613964);
}

double NNfunction_sb_dLdL::synapse0x1d32da0() {
   return (neuron0x1d13c30()*0.159939);
}

double NNfunction_sb_dLdL::synapse0x1d32de0() {
   return (neuron0x1d14600()*-0.224985);
}

double NNfunction_sb_dLdL::synapse0x1d32e20() {
   return (neuron0x1d14fd0()*-0.517573);
}

double NNfunction_sb_dLdL::synapse0x1d32e60() {
   return (neuron0x1d27610()*-0.195891);
}

double NNfunction_sb_dLdL::synapse0x1d32ea0() {
   return (neuron0x1d27ec0()*-0.140463);
}

double NNfunction_sb_dLdL::synapse0x1d32ee0() {
   return (neuron0x1d28890()*0.359941);
}

double NNfunction_sb_dLdL::synapse0x1d32f20() {
   return (neuron0x1d29260()*-0.186953);
}

double NNfunction_sb_dLdL::synapse0x1d332a0() {
   return (neuron0x1d051e0()*-0.0631822);
}

double NNfunction_sb_dLdL::synapse0x1d332e0() {
   return (neuron0x1d05b30()*0.483752);
}

double NNfunction_sb_dLdL::synapse0x1d33320() {
   return (neuron0x1d06610()*-0.0861937);
}

double NNfunction_sb_dLdL::synapse0x1d33360() {
   return (neuron0x1d060b0()*0.00363425);
}

double NNfunction_sb_dLdL::synapse0x1d333a0() {
   return (neuron0x1d073f0()*-0.532457);
}

double NNfunction_sb_dLdL::synapse0x1d333e0() {
   return (neuron0x1d07dc0()*0.353782);
}

double NNfunction_sb_dLdL::synapse0x1d33420() {
   return (neuron0x1d08b90()*-0.29483);
}

double NNfunction_sb_dLdL::synapse0x1d33460() {
   return (neuron0x1d09560()*-0.34276);
}

double NNfunction_sb_dLdL::synapse0x1d334a0() {
   return (neuron0x1d09f30()*0.658851);
}

double NNfunction_sb_dLdL::synapse0x1d334e0() {
   return (neuron0x1d0aa10()*0.0505031);
}

double NNfunction_sb_dLdL::synapse0x1d33520() {
   return (neuron0x1d0b3e0()*-0.0574961);
}

double NNfunction_sb_dLdL::synapse0x1d33560() {
   return (neuron0x1d084c0()*0.519321);
}

double NNfunction_sb_dLdL::synapse0x1d335a0() {
   return (neuron0x1d0cf90()*-0.0116567);
}

double NNfunction_sb_dLdL::synapse0x1d335e0() {
   return (neuron0x1d0d960()*0.195899);
}

double NNfunction_sb_dLdL::synapse0x1d33620() {
   return (neuron0x1d0e330()*0.40551);
}

double NNfunction_sb_dLdL::synapse0x1d33660() {
   return (neuron0x1d0ed00()*0.10757);
}

double NNfunction_sb_dLdL::synapse0x1d330f0() {
   return (neuron0x1d10b10()*0.10973);
}

double NNfunction_sb_dLdL::synapse0x1d33130() {
   return (neuron0x1d10df0()*-0.536275);
}

double NNfunction_sb_dLdL::synapse0x1d337b0() {
   return (neuron0x1d117c0()*-0.00128783);
}

double NNfunction_sb_dLdL::synapse0x1d337f0() {
   return (neuron0x1d12190()*0.0783505);
}

double NNfunction_sb_dLdL::synapse0x1d33830() {
   return (neuron0x1d12b60()*0.178441);
}

double NNfunction_sb_dLdL::synapse0x1d33870() {
   return (neuron0x1d13530()*-0.725489);
}

double NNfunction_sb_dLdL::synapse0x1d338b0() {
   return (neuron0x1d0c080()*0.135906);
}

double NNfunction_sb_dLdL::synapse0x1d338f0() {
   return (neuron0x1d0ca50()*-0.242146);
}

double NNfunction_sb_dLdL::synapse0x1d33930() {
   return (neuron0x1d162c0()*-0.738735);
}

double NNfunction_sb_dLdL::synapse0x1d33970() {
   return (neuron0x1d16c90()*-0.00184323);
}

double NNfunction_sb_dLdL::synapse0x1d339b0() {
   return (neuron0x1d17660()*-1.11121);
}

double NNfunction_sb_dLdL::synapse0x1d339f0() {
   return (neuron0x1d18030()*-0.00965534);
}

double NNfunction_sb_dLdL::synapse0x1d33a30() {
   return (neuron0x1d18a00()*0.0507659);
}

double NNfunction_sb_dLdL::synapse0x1d33a70() {
   return (neuron0x1d193d0()*-0.323085);
}

double NNfunction_sb_dLdL::synapse0x1d33ab0() {
   return (neuron0x1d19da0()*0.105607);
}

double NNfunction_sb_dLdL::synapse0x1d33af0() {
   return (neuron0x1d1a770()*0.0206403);
}

double NNfunction_sb_dLdL::synapse0x1d336a0() {
   return (neuron0x1d10800()*-0.121236);
}

double NNfunction_sb_dLdL::synapse0x1d336e0() {
   return (neuron0x1d1d350()*-0.0454992);
}

double NNfunction_sb_dLdL::synapse0x1d33720() {
   return (neuron0x1d1dd20()*0.145505);
}

double NNfunction_sb_dLdL::synapse0x1d33760() {
   return (neuron0x1d1e6f0()*0.220975);
}

double NNfunction_sb_dLdL::synapse0x1d33d40() {
   return (neuron0x1d1f0c0()*-0.0957289);
}

double NNfunction_sb_dLdL::synapse0x1d33d80() {
   return (neuron0x1d1fa90()*0.401017);
}

double NNfunction_sb_dLdL::synapse0x1d33dc0() {
   return (neuron0x1d20460()*-0.149855);
}

double NNfunction_sb_dLdL::synapse0x1d33e00() {
   return (neuron0x1d20e30()*-0.0347874);
}

double NNfunction_sb_dLdL::synapse0x1d33e40() {
   return (neuron0x1d21800()*-0.444349);
}

double NNfunction_sb_dLdL::synapse0x1d33e80() {
   return (neuron0x1d223e0()*-0.280679);
}

double NNfunction_sb_dLdL::synapse0x1d33ec0() {
   return (neuron0x1d22db0()*-0.282667);
}

double NNfunction_sb_dLdL::synapse0x1d33f00() {
   return (neuron0x1d13c30()*-0.579814);
}

double NNfunction_sb_dLdL::synapse0x1d33f40() {
   return (neuron0x1d14600()*-0.0525231);
}

double NNfunction_sb_dLdL::synapse0x1d33f80() {
   return (neuron0x1d14fd0()*-1.43182);
}

double NNfunction_sb_dLdL::synapse0x1d33fc0() {
   return (neuron0x1d27610()*-0.327278);
}

double NNfunction_sb_dLdL::synapse0x1d34000() {
   return (neuron0x1d27ec0()*0.040533);
}

double NNfunction_sb_dLdL::synapse0x1d34040() {
   return (neuron0x1d28890()*0.0298567);
}

double NNfunction_sb_dLdL::synapse0x1d34080() {
   return (neuron0x1d29260()*0.690197);
}

double NNfunction_sb_dLdL::synapse0x1d342e0() {
   return (neuron0x1d30460()*-4.63705);
}

double NNfunction_sb_dLdL::synapse0x1d34320() {
   return (neuron0x1d30800()*6.95883);
}

double NNfunction_sb_dLdL::synapse0x1d34360() {
   return (neuron0x1d30ca0()*-5.31365);
}

double NNfunction_sb_dLdL::synapse0x1d343a0() {
   return (neuron0x1d31e00()*-0.124979);
}

double NNfunction_sb_dLdL::synapse0x1d343e0() {
   return (neuron0x1d32f60()*-2.89751);
}

