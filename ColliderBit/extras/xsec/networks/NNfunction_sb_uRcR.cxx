#include "NNfunction_sb_uRcR.h"
#include <cmath>

double NNfunction_sb_uRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8327)/14.993;
   input1 = (in1 - 44.7237)/772.877;
   input2 = (in2 - 365.585)/474.184;
   input3 = (in3 - 237.923)/600.296;
   input4 = (in4 - 744.232)/726.063;
   input5 = (in5 - 645.289)/696.89;
   input6 = (in6 - 652.976)/704.757;
   input7 = (in7 - 644.617)/694.383;
   input8 = (in8 - 622.889)/678.958;
   input9 = (in9 - 618.697)/670.552;
   input10 = (in10 - 634.246)/694.868;
   input11 = (in11 - 644.445)/561.005;
   input12 = (in12 - 645.342)/566.58;
   input13 = (in13 - 506.037)/355.969;
   input14 = (in14 - 510.583)/308.798;
   input15 = (in15 - 511.739)/310.572;
   input16 = (in16 - 464.485)/399.626;
   input17 = (in17 - 653.517)/578.198;
   input18 = (in18 - 651.021)/584.147;
   input19 = (in19 - 657.692)/578.956;
   input20 = (in20 - -187.463)/397.724;
   input21 = (in21 - -239.929)/874.933;
   input22 = (in22 - 3.95945)/883.844;
   input23 = (in23 - -21.6243)/493.52;
   switch(index) {
     case 0:
         return neuron0x1d8cd70();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.8327)/14.993;
   input1 = (input[1] - 44.7237)/772.877;
   input2 = (input[2] - 365.585)/474.184;
   input3 = (input[3] - 237.923)/600.296;
   input4 = (input[4] - 744.232)/726.063;
   input5 = (input[5] - 645.289)/696.89;
   input6 = (input[6] - 652.976)/704.757;
   input7 = (input[7] - 644.617)/694.383;
   input8 = (input[8] - 622.889)/678.958;
   input9 = (input[9] - 618.697)/670.552;
   input10 = (input[10] - 634.246)/694.868;
   input11 = (input[11] - 644.445)/561.005;
   input12 = (input[12] - 645.342)/566.58;
   input13 = (input[13] - 506.037)/355.969;
   input14 = (input[14] - 510.583)/308.798;
   input15 = (input[15] - 511.739)/310.572;
   input16 = (input[16] - 464.485)/399.626;
   input17 = (input[17] - 653.517)/578.198;
   input18 = (input[18] - 651.021)/584.147;
   input19 = (input[19] - 657.692)/578.956;
   input20 = (input[20] - -187.463)/397.724;
   input21 = (input[21] - -239.929)/874.933;
   input22 = (input[22] - 3.95945)/883.844;
   input23 = (input[23] - -21.6243)/493.52;
   switch(index) {
     case 0:
         return neuron0x1d8cd70();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRcR::neuron0x1d57de0() {
   return input0;
}

double NNfunction_sb_uRcR::neuron0x1d58090() {
   return input1;
}

double NNfunction_sb_uRcR::neuron0x1d583d0() {
   return input2;
}

double NNfunction_sb_uRcR::neuron0x1d58710() {
   return input3;
}

double NNfunction_sb_uRcR::neuron0x1d58a50() {
   return input4;
}

double NNfunction_sb_uRcR::neuron0x1d58d90() {
   return input5;
}

double NNfunction_sb_uRcR::neuron0x1d590d0() {
   return input6;
}

double NNfunction_sb_uRcR::neuron0x1d59410() {
   return input7;
}

double NNfunction_sb_uRcR::neuron0x1d59750() {
   return input8;
}

double NNfunction_sb_uRcR::neuron0x1d59a90() {
   return input9;
}

double NNfunction_sb_uRcR::neuron0x1d59dd0() {
   return input10;
}

double NNfunction_sb_uRcR::neuron0x1d5a110() {
   return input11;
}

double NNfunction_sb_uRcR::neuron0x1d5a450() {
   return input12;
}

double NNfunction_sb_uRcR::neuron0x1d5a790() {
   return input13;
}

double NNfunction_sb_uRcR::neuron0x1d5aad0() {
   return input14;
}

double NNfunction_sb_uRcR::neuron0x1d5ae10() {
   return input15;
}

double NNfunction_sb_uRcR::neuron0x1d5b150() {
   return input16;
}

double NNfunction_sb_uRcR::neuron0x1d5b6b0() {
   return input17;
}

double NNfunction_sb_uRcR::neuron0x1d5b9f0() {
   return input18;
}

double NNfunction_sb_uRcR::neuron0x1d5bd30() {
   return input19;
}

double NNfunction_sb_uRcR::neuron0x1d5c070() {
   return input20;
}

double NNfunction_sb_uRcR::neuron0x1d5c3b0() {
   return input21;
}

double NNfunction_sb_uRcR::neuron0x1d5c6f0() {
   return input22;
}

double NNfunction_sb_uRcR::neuron0x1d5ca30() {
   return input23;
}

double NNfunction_sb_uRcR::input0x1d5cea0() {
   double input = -1.97423;
   input += synapse0x1d5d1e0();
   input += synapse0x1d5d220();
   input += synapse0x1d5d260();
   input += synapse0x1d5d2a0();
   input += synapse0x1d5d2e0();
   input += synapse0x1d5d320();
   input += synapse0x1d5d360();
   input += synapse0x1d5d3a0();
   input += synapse0x1d5d3e0();
   input += synapse0x1d5d420();
   input += synapse0x1d5d460();
   input += synapse0x1d5d4a0();
   input += synapse0x1d5d4e0();
   input += synapse0x1d5d520();
   input += synapse0x1d5d560();
   input += synapse0x1d5d5a0();
   input += synapse0x1d5d030();
   input += synapse0x1d5d070();
   input += synapse0x1b13fa0();
   input += synapse0x1b13fe0();
   input += synapse0x1d5d5e0();
   input += synapse0x1d5d620();
   input += synapse0x1d5d660();
   input += synapse0x1d5d6a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d5cea0() {
   double input = input0x1d5cea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d5d6e0() {
   double input = 1.18582;
   input += synapse0x1d5da20();
   input += synapse0x1d5da60();
   input += synapse0x1d5daa0();
   input += synapse0x1d5dae0();
   input += synapse0x1d5db20();
   input += synapse0x1d5db60();
   input += synapse0x1d5dba0();
   input += synapse0x1d5dbe0();
   input += synapse0x1d5dc20();
   input += synapse0x1b13df0();
   input += synapse0x1b13e30();
   input += synapse0x1b13e70();
   input += synapse0x1b13eb0();
   input += synapse0x1d5de70();
   input += synapse0x1d5deb0();
   input += synapse0x1d5def0();
   input += synapse0x1d5d870();
   input += synapse0x1d5d8b0();
   input += synapse0x1d5e040();
   input += synapse0x1d5e080();
   input += synapse0x1d5e0c0();
   input += synapse0x1d5e100();
   input += synapse0x1d5e140();
   input += synapse0x1d5e180();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d5d6e0() {
   double input = input0x1d5d6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d5e1c0() {
   double input = -3.99437;
   input += synapse0x1d5e500();
   input += synapse0x1d5e540();
   input += synapse0x1d5e580();
   input += synapse0x1d5e5c0();
   input += synapse0x1d5e600();
   input += synapse0x1d5e640();
   input += synapse0x1d5e680();
   input += synapse0x1d5e6c0();
   input += synapse0x1d5e700();
   input += synapse0x1d5e740();
   input += synapse0x1d5e780();
   input += synapse0x1d5e7c0();
   input += synapse0x1d5e800();
   input += synapse0x1d5e840();
   input += synapse0x1d5e880();
   input += synapse0x1d5e8c0();
   input += synapse0x1d5e350();
   input += synapse0x1d5e390();
   input += synapse0x1b14650();
   input += synapse0x1b21f20();
   input += synapse0x1b21f60();
   input += synapse0x1d607f0();
   input += synapse0x1d60830();
   input += synapse0x1d57b20();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d5e1c0() {
   double input = input0x1d5e1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d5dc60() {
   double input = 0.494119;
   input += synapse0x1d57bf0();
   input += synapse0x1b227a0();
   input += synapse0x1d5ddf0();
   input += synapse0x1d5de30();
   input += synapse0x1d5ea10();
   input += synapse0x1d5ea50();
   input += synapse0x1d5ea90();
   input += synapse0x1d5ead0();
   input += synapse0x1d5eb10();
   input += synapse0x1d5eb50();
   input += synapse0x1d5eb90();
   input += synapse0x1d5ebd0();
   input += synapse0x1d5ec10();
   input += synapse0x1d5ec50();
   input += synapse0x1d5ec90();
   input += synapse0x1d5ecd0();
   input += synapse0x1d57b60();
   input += synapse0x1d57ba0();
   input += synapse0x1d5ee20();
   input += synapse0x1d5ee60();
   input += synapse0x1d5eea0();
   input += synapse0x1d5eee0();
   input += synapse0x1d5ef20();
   input += synapse0x1d5ef60();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d5dc60() {
   double input = input0x1d5dc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d5efa0() {
   double input = -1.17811;
   input += synapse0x1d5f2e0();
   input += synapse0x1d5f320();
   input += synapse0x1d5f360();
   input += synapse0x1d5f3a0();
   input += synapse0x1d5f3e0();
   input += synapse0x1d5f420();
   input += synapse0x1d5f460();
   input += synapse0x1d5f4a0();
   input += synapse0x1d5f4e0();
   input += synapse0x1d5f520();
   input += synapse0x1d5f560();
   input += synapse0x1d5f5a0();
   input += synapse0x1d5f5e0();
   input += synapse0x1d5f620();
   input += synapse0x1d5f660();
   input += synapse0x1d5f6a0();
   input += synapse0x1d5f7f0();
   input += synapse0x1d5f130();
   input += synapse0x1d5f170();
   input += synapse0x1d60930();
   input += synapse0x1d60970();
   input += synapse0x1d609b0();
   input += synapse0x1d609f0();
   input += synapse0x1d60a30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d5efa0() {
   double input = input0x1d5efa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d60a70() {
   double input = 0.922299;
   input += synapse0x1d60db0();
   input += synapse0x1d60df0();
   input += synapse0x1d60e30();
   input += synapse0x1d60e70();
   input += synapse0x1d60eb0();
   input += synapse0x1d60ef0();
   input += synapse0x1d60f30();
   input += synapse0x1d60f70();
   input += synapse0x1d60fb0();
   input += synapse0x1b22270();
   input += synapse0x1b222b0();
   input += synapse0x1b222f0();
   input += synapse0x1b22330();
   input += synapse0x1b22370();
   input += synapse0x1b223b0();
   input += synapse0x1b223f0();
   input += synapse0x1d60c00();
   input += synapse0x1d60c40();
   input += synapse0x1b22540();
   input += synapse0x1b22580();
   input += synapse0x1b225c0();
   input += synapse0x1b22600();
   input += synapse0x1b22640();
   input += synapse0x1d61800();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d60a70() {
   double input = input0x1d60a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d61840() {
   double input = -0.598212;
   input += synapse0x1d61b80();
   input += synapse0x1d61bc0();
   input += synapse0x1d61c00();
   input += synapse0x1d61c40();
   input += synapse0x1d61c80();
   input += synapse0x1d61cc0();
   input += synapse0x1d61d00();
   input += synapse0x1d61d40();
   input += synapse0x1d61d80();
   input += synapse0x1d61dc0();
   input += synapse0x1d61e00();
   input += synapse0x1d61e40();
   input += synapse0x1d61e80();
   input += synapse0x1d61ec0();
   input += synapse0x1d61f00();
   input += synapse0x1d61f40();
   input += synapse0x1d619d0();
   input += synapse0x1d61a10();
   input += synapse0x1d62090();
   input += synapse0x1d620d0();
   input += synapse0x1d62110();
   input += synapse0x1d62150();
   input += synapse0x1d62190();
   input += synapse0x1d621d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d61840() {
   double input = input0x1d61840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d62210() {
   double input = 0.211998;
   input += synapse0x1d62550();
   input += synapse0x1d62590();
   input += synapse0x1d625d0();
   input += synapse0x1d62610();
   input += synapse0x1d62650();
   input += synapse0x1d62690();
   input += synapse0x1d626d0();
   input += synapse0x1d62710();
   input += synapse0x1d62750();
   input += synapse0x1d62790();
   input += synapse0x1d627d0();
   input += synapse0x1d62810();
   input += synapse0x1d62850();
   input += synapse0x1d62890();
   input += synapse0x1d628d0();
   input += synapse0x1d62910();
   input += synapse0x1d623a0();
   input += synapse0x1d623e0();
   input += synapse0x1d62a60();
   input += synapse0x1d62aa0();
   input += synapse0x1d62ae0();
   input += synapse0x1d62b20();
   input += synapse0x1d62b60();
   input += synapse0x1d62ba0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d62210() {
   double input = input0x1d62210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d62be0() {
   double input = -1.0336;
   input += synapse0x1d5b5a0();
   input += synapse0x1d5b5e0();
   input += synapse0x1d5b620();
   input += synapse0x1d5b660();
   input += synapse0x1d63130();
   input += synapse0x1d63170();
   input += synapse0x1d631b0();
   input += synapse0x1d631f0();
   input += synapse0x1d63230();
   input += synapse0x1d63270();
   input += synapse0x1d632b0();
   input += synapse0x1d632f0();
   input += synapse0x1d63330();
   input += synapse0x1d63370();
   input += synapse0x1d633b0();
   input += synapse0x1d633f0();
   input += synapse0x1d62d70();
   input += synapse0x1d62db0();
   input += synapse0x1d63540();
   input += synapse0x1d63580();
   input += synapse0x1d635c0();
   input += synapse0x1d63600();
   input += synapse0x1d63640();
   input += synapse0x1d63680();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d62be0() {
   double input = input0x1d62be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d636c0() {
   double input = 1.4223;
   input += synapse0x1d63a00();
   input += synapse0x1d63a40();
   input += synapse0x1d63a80();
   input += synapse0x1d63ac0();
   input += synapse0x1d63b00();
   input += synapse0x1d63b40();
   input += synapse0x1d63b80();
   input += synapse0x1d63bc0();
   input += synapse0x1d63c00();
   input += synapse0x1d63c40();
   input += synapse0x1d63c80();
   input += synapse0x1d63cc0();
   input += synapse0x1d63d00();
   input += synapse0x1d63d40();
   input += synapse0x1d63d80();
   input += synapse0x1d63dc0();
   input += synapse0x1d63850();
   input += synapse0x1d63890();
   input += synapse0x1d63f10();
   input += synapse0x1d63f50();
   input += synapse0x1d63f90();
   input += synapse0x1d63fd0();
   input += synapse0x1d64010();
   input += synapse0x1d64050();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d636c0() {
   double input = input0x1d636c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d64090() {
   double input = -0.429058;
   input += synapse0x1d643d0();
   input += synapse0x1d64410();
   input += synapse0x1d64450();
   input += synapse0x1d64490();
   input += synapse0x1d644d0();
   input += synapse0x1d64510();
   input += synapse0x1d64550();
   input += synapse0x1d64590();
   input += synapse0x1d645d0();
   input += synapse0x1d64610();
   input += synapse0x1d64650();
   input += synapse0x1d64690();
   input += synapse0x1d646d0();
   input += synapse0x1d64710();
   input += synapse0x1d64750();
   input += synapse0x1d64790();
   input += synapse0x1d64220();
   input += synapse0x1d64260();
   input += synapse0x1d60ff0();
   input += synapse0x1d61030();
   input += synapse0x1d61070();
   input += synapse0x1d610b0();
   input += synapse0x1d610f0();
   input += synapse0x1d61130();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d64090() {
   double input = input0x1d64090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d61170() {
   double input = 0.363343;
   input += synapse0x1d614b0();
   input += synapse0x1d614f0();
   input += synapse0x1d61530();
   input += synapse0x1d61570();
   input += synapse0x1d615b0();
   input += synapse0x1d615f0();
   input += synapse0x1d61630();
   input += synapse0x1d61670();
   input += synapse0x1d616b0();
   input += synapse0x1d616f0();
   input += synapse0x1d61730();
   input += synapse0x1d61770();
   input += synapse0x1d617b0();
   input += synapse0x1d658f0();
   input += synapse0x1d65930();
   input += synapse0x1d65970();
   input += synapse0x1d61300();
   input += synapse0x1d61340();
   input += synapse0x1d65ac0();
   input += synapse0x1d65b00();
   input += synapse0x1d65b40();
   input += synapse0x1d65b80();
   input += synapse0x1d65bc0();
   input += synapse0x1d65c00();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d61170() {
   double input = input0x1d61170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d65c40() {
   double input = -0.402541;
   input += synapse0x1d65f80();
   input += synapse0x1d65fc0();
   input += synapse0x1d66000();
   input += synapse0x1d66040();
   input += synapse0x1d66080();
   input += synapse0x1d660c0();
   input += synapse0x1d66100();
   input += synapse0x1d66140();
   input += synapse0x1d66180();
   input += synapse0x1d661c0();
   input += synapse0x1d66200();
   input += synapse0x1d66240();
   input += synapse0x1d66280();
   input += synapse0x1d662c0();
   input += synapse0x1d66300();
   input += synapse0x1d66340();
   input += synapse0x1d65dd0();
   input += synapse0x1d65e10();
   input += synapse0x1d66490();
   input += synapse0x1d664d0();
   input += synapse0x1d66510();
   input += synapse0x1d66550();
   input += synapse0x1d66590();
   input += synapse0x1d665d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d65c40() {
   double input = input0x1d65c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d66610() {
   double input = -0.806326;
   input += synapse0x1d66950();
   input += synapse0x1d66990();
   input += synapse0x1d669d0();
   input += synapse0x1d66a10();
   input += synapse0x1d66a50();
   input += synapse0x1d66a90();
   input += synapse0x1d66ad0();
   input += synapse0x1d66b10();
   input += synapse0x1d66b50();
   input += synapse0x1d66b90();
   input += synapse0x1d66bd0();
   input += synapse0x1d66c10();
   input += synapse0x1d66c50();
   input += synapse0x1d66c90();
   input += synapse0x1d66cd0();
   input += synapse0x1d66d10();
   input += synapse0x1d667a0();
   input += synapse0x1d667e0();
   input += synapse0x1d66e60();
   input += synapse0x1d66ea0();
   input += synapse0x1d66ee0();
   input += synapse0x1d66f20();
   input += synapse0x1d66f60();
   input += synapse0x1d66fa0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d66610() {
   double input = input0x1d66610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d66fe0() {
   double input = 0.15595;
   input += synapse0x1d67320();
   input += synapse0x1d67360();
   input += synapse0x1d673a0();
   input += synapse0x1d673e0();
   input += synapse0x1d67420();
   input += synapse0x1d67460();
   input += synapse0x1d674a0();
   input += synapse0x1d674e0();
   input += synapse0x1d67520();
   input += synapse0x1d67560();
   input += synapse0x1d675a0();
   input += synapse0x1d675e0();
   input += synapse0x1d67620();
   input += synapse0x1d67660();
   input += synapse0x1d676a0();
   input += synapse0x1d676e0();
   input += synapse0x1d67170();
   input += synapse0x1d671b0();
   input += synapse0x1d67830();
   input += synapse0x1d67870();
   input += synapse0x1d678b0();
   input += synapse0x1d678f0();
   input += synapse0x1d67930();
   input += synapse0x1d67970();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d66fe0() {
   double input = input0x1d66fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d679b0() {
   double input = 0.260021;
   input += synapse0x1d67cf0();
   input += synapse0x1d57f70();
   input += synapse0x1d57fb0();
   input += synapse0x1d582b0();
   input += synapse0x1d582f0();
   input += synapse0x1d585f0();
   input += synapse0x1d58630();
   input += synapse0x1d58930();
   input += synapse0x1d58970();
   input += synapse0x1d58c70();
   input += synapse0x1d58cb0();
   input += synapse0x1d58fb0();
   input += synapse0x1d58ff0();
   input += synapse0x1d592f0();
   input += synapse0x1d59330();
   input += synapse0x1d59630();
   input += synapse0x1d59670();
   input += synapse0x1d59970();
   input += synapse0x1d599b0();
   input += synapse0x1d59cb0();
   input += synapse0x1d59cf0();
   input += synapse0x1d59ff0();
   input += synapse0x1d5a030();
   input += synapse0x1d5a330();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d679b0() {
   double input = input0x1d679b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d697c0() {
   double input = 0.221488;
   input += synapse0x1d5a370();
   input += synapse0x1d5b030();
   input += synapse0x1d5b070();
   input += synapse0x1d67b40();
   input += synapse0x1d67b80();
   input += synapse0x1d5b370();
   input += synapse0x1d5b3b0();
   input += synapse0x1d5b8d0();
   input += synapse0x1d5b910();
   input += synapse0x1d5bc10();
   input += synapse0x1d5bc50();
   input += synapse0x1d5bf50();
   input += synapse0x1d5bf90();
   input += synapse0x1d5c290();
   input += synapse0x1d5c2d0();
   input += synapse0x1d5c5d0();
   input += synapse0x1d5c610();
   input += synapse0x1d5c910();
   input += synapse0x1d5c950();
   input += synapse0x1d5cc50();
   input += synapse0x1d5cc90();
   input += synapse0x1d5a670();
   input += synapse0x1d5a6b0();
   input += synapse0x1d69a60();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d697c0() {
   double input = input0x1d697c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d69aa0() {
   double input = -0.586586;
   input += synapse0x1d69de0();
   input += synapse0x1d69e20();
   input += synapse0x1d69e60();
   input += synapse0x1d69ea0();
   input += synapse0x1d69ee0();
   input += synapse0x1d69f20();
   input += synapse0x1d69f60();
   input += synapse0x1d69fa0();
   input += synapse0x1d69fe0();
   input += synapse0x1d6a020();
   input += synapse0x1d6a060();
   input += synapse0x1d6a0a0();
   input += synapse0x1d6a0e0();
   input += synapse0x1d6a120();
   input += synapse0x1d6a160();
   input += synapse0x1d6a1a0();
   input += synapse0x1d69c30();
   input += synapse0x1d69c70();
   input += synapse0x1d6a2f0();
   input += synapse0x1d6a330();
   input += synapse0x1d6a370();
   input += synapse0x1d6a3b0();
   input += synapse0x1d6a3f0();
   input += synapse0x1d6a430();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d69aa0() {
   double input = input0x1d69aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6a470() {
   double input = -0.303184;
   input += synapse0x1d6a7b0();
   input += synapse0x1d6a7f0();
   input += synapse0x1d6a830();
   input += synapse0x1d6a870();
   input += synapse0x1d6a8b0();
   input += synapse0x1d6a8f0();
   input += synapse0x1d6a930();
   input += synapse0x1d6a970();
   input += synapse0x1d6a9b0();
   input += synapse0x1d6a9f0();
   input += synapse0x1d6aa30();
   input += synapse0x1d6aa70();
   input += synapse0x1d6aab0();
   input += synapse0x1d6aaf0();
   input += synapse0x1d6ab30();
   input += synapse0x1d6ab70();
   input += synapse0x1d6a600();
   input += synapse0x1d6a640();
   input += synapse0x1d6acc0();
   input += synapse0x1d6ad00();
   input += synapse0x1d6ad40();
   input += synapse0x1d6ad80();
   input += synapse0x1d6adc0();
   input += synapse0x1d6ae00();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6a470() {
   double input = input0x1d6a470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6ae40() {
   double input = -0.570716;
   input += synapse0x1d6b180();
   input += synapse0x1d6b1c0();
   input += synapse0x1d6b200();
   input += synapse0x1d6b240();
   input += synapse0x1d6b280();
   input += synapse0x1d6b2c0();
   input += synapse0x1d6b300();
   input += synapse0x1d6b340();
   input += synapse0x1d6b380();
   input += synapse0x1d6b3c0();
   input += synapse0x1d6b400();
   input += synapse0x1d6b440();
   input += synapse0x1d6b480();
   input += synapse0x1d6b4c0();
   input += synapse0x1d6b500();
   input += synapse0x1d6b540();
   input += synapse0x1d6afd0();
   input += synapse0x1d6b010();
   input += synapse0x1d6b690();
   input += synapse0x1d6b6d0();
   input += synapse0x1d6b710();
   input += synapse0x1d6b750();
   input += synapse0x1d6b790();
   input += synapse0x1d6b7d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6ae40() {
   double input = input0x1d6ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6b810() {
   double input = 0.672642;
   input += synapse0x1d6bb50();
   input += synapse0x1d6bb90();
   input += synapse0x1d6bbd0();
   input += synapse0x1d6bc10();
   input += synapse0x1d6bc50();
   input += synapse0x1d6bc90();
   input += synapse0x1d6bcd0();
   input += synapse0x1d6bd10();
   input += synapse0x1d6bd50();
   input += synapse0x1d6bd90();
   input += synapse0x1d6bdd0();
   input += synapse0x1d6be10();
   input += synapse0x1d6be50();
   input += synapse0x1d6be90();
   input += synapse0x1d6bed0();
   input += synapse0x1d6bf10();
   input += synapse0x1d6b9a0();
   input += synapse0x1d6b9e0();
   input += synapse0x1d6c060();
   input += synapse0x1d6c0a0();
   input += synapse0x1d6c0e0();
   input += synapse0x1d6c120();
   input += synapse0x1d6c160();
   input += synapse0x1d6c1a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6b810() {
   double input = input0x1d6b810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6c1e0() {
   double input = 3.55363;
   input += synapse0x1d6c520();
   input += synapse0x1d6c560();
   input += synapse0x1d6c5a0();
   input += synapse0x1d6c5e0();
   input += synapse0x1d6c620();
   input += synapse0x1d6c660();
   input += synapse0x1d6c6a0();
   input += synapse0x1d6c6e0();
   input += synapse0x1d6c720();
   input += synapse0x1d648e0();
   input += synapse0x1d64920();
   input += synapse0x1d64960();
   input += synapse0x1d649a0();
   input += synapse0x1d649e0();
   input += synapse0x1d64a20();
   input += synapse0x1d64a60();
   input += synapse0x1d6c370();
   input += synapse0x1d6c3b0();
   input += synapse0x1d64bb0();
   input += synapse0x1d64bf0();
   input += synapse0x1d64c30();
   input += synapse0x1d64c70();
   input += synapse0x1d64cb0();
   input += synapse0x1d64cf0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6c1e0() {
   double input = input0x1d6c1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d64d30() {
   double input = -0.675002;
   input += synapse0x1d65070();
   input += synapse0x1d650b0();
   input += synapse0x1d650f0();
   input += synapse0x1d65130();
   input += synapse0x1d65170();
   input += synapse0x1d651b0();
   input += synapse0x1d651f0();
   input += synapse0x1d65230();
   input += synapse0x1d65270();
   input += synapse0x1d652b0();
   input += synapse0x1d652f0();
   input += synapse0x1d65330();
   input += synapse0x1d65370();
   input += synapse0x1d653b0();
   input += synapse0x1d653f0();
   input += synapse0x1d65430();
   input += synapse0x1d64ec0();
   input += synapse0x1d64f00();
   input += synapse0x1d65580();
   input += synapse0x1d655c0();
   input += synapse0x1d65600();
   input += synapse0x1d65640();
   input += synapse0x1d65680();
   input += synapse0x1d656c0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d64d30() {
   double input = input0x1d64d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d65700() {
   double input = 1.01828;
   input += synapse0x1d65890();
   input += synapse0x1d6e920();
   input += synapse0x1d6e960();
   input += synapse0x1d6e9a0();
   input += synapse0x1d6e9e0();
   input += synapse0x1d6ea20();
   input += synapse0x1d6ea60();
   input += synapse0x1d6eaa0();
   input += synapse0x1d6eae0();
   input += synapse0x1d6eb20();
   input += synapse0x1d6eb60();
   input += synapse0x1d6eba0();
   input += synapse0x1d6ebe0();
   input += synapse0x1d6ec20();
   input += synapse0x1d6ec60();
   input += synapse0x1d6eca0();
   input += synapse0x1d6e770();
   input += synapse0x1d6e7b0();
   input += synapse0x1d6edf0();
   input += synapse0x1d6ee30();
   input += synapse0x1d6ee70();
   input += synapse0x1d6eeb0();
   input += synapse0x1d6eef0();
   input += synapse0x1d6ef30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d65700() {
   double input = input0x1d65700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6ef70() {
   double input = 1.5593;
   input += synapse0x1d6f2b0();
   input += synapse0x1d6f2f0();
   input += synapse0x1d6f330();
   input += synapse0x1d6f370();
   input += synapse0x1d6f3b0();
   input += synapse0x1d6f3f0();
   input += synapse0x1d6f430();
   input += synapse0x1d6f470();
   input += synapse0x1d6f4b0();
   input += synapse0x1d6f4f0();
   input += synapse0x1d6f530();
   input += synapse0x1d6f570();
   input += synapse0x1d6f5b0();
   input += synapse0x1d6f5f0();
   input += synapse0x1d6f630();
   input += synapse0x1d6f670();
   input += synapse0x1d6f100();
   input += synapse0x1d6f140();
   input += synapse0x1d6f7c0();
   input += synapse0x1d6f800();
   input += synapse0x1d6f840();
   input += synapse0x1d6f880();
   input += synapse0x1d6f8c0();
   input += synapse0x1d6f900();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6ef70() {
   double input = input0x1d6ef70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6f940() {
   double input = 0.627034;
   input += synapse0x1d6fc80();
   input += synapse0x1d6fcc0();
   input += synapse0x1d6fd00();
   input += synapse0x1d6fd40();
   input += synapse0x1d6fd80();
   input += synapse0x1d6fdc0();
   input += synapse0x1d6fe00();
   input += synapse0x1d6fe40();
   input += synapse0x1d6fe80();
   input += synapse0x1d6fec0();
   input += synapse0x1d6ff00();
   input += synapse0x1d6ff40();
   input += synapse0x1d6ff80();
   input += synapse0x1d6ffc0();
   input += synapse0x1d70000();
   input += synapse0x1d70040();
   input += synapse0x1d6fad0();
   input += synapse0x1d6fb10();
   input += synapse0x1d70190();
   input += synapse0x1d701d0();
   input += synapse0x1d70210();
   input += synapse0x1d70250();
   input += synapse0x1d70290();
   input += synapse0x1d702d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6f940() {
   double input = input0x1d6f940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d70310() {
   double input = 0.210896;
   input += synapse0x1d70650();
   input += synapse0x1d70690();
   input += synapse0x1d706d0();
   input += synapse0x1d70710();
   input += synapse0x1d70750();
   input += synapse0x1d70790();
   input += synapse0x1d707d0();
   input += synapse0x1d70810();
   input += synapse0x1d70850();
   input += synapse0x1d70890();
   input += synapse0x1d708d0();
   input += synapse0x1d70910();
   input += synapse0x1d70950();
   input += synapse0x1d70990();
   input += synapse0x1d709d0();
   input += synapse0x1d70a10();
   input += synapse0x1d704a0();
   input += synapse0x1d704e0();
   input += synapse0x1d70b60();
   input += synapse0x1d70ba0();
   input += synapse0x1d70be0();
   input += synapse0x1d70c20();
   input += synapse0x1d70c60();
   input += synapse0x1d70ca0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d70310() {
   double input = input0x1d70310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d70ce0() {
   double input = 0.539086;
   input += synapse0x1d71020();
   input += synapse0x1d71060();
   input += synapse0x1d710a0();
   input += synapse0x1d710e0();
   input += synapse0x1d71120();
   input += synapse0x1d71160();
   input += synapse0x1d711a0();
   input += synapse0x1d711e0();
   input += synapse0x1d71220();
   input += synapse0x1d71260();
   input += synapse0x1d712a0();
   input += synapse0x1d712e0();
   input += synapse0x1d71320();
   input += synapse0x1d71360();
   input += synapse0x1d713a0();
   input += synapse0x1d713e0();
   input += synapse0x1d70e70();
   input += synapse0x1d70eb0();
   input += synapse0x1d71530();
   input += synapse0x1d71570();
   input += synapse0x1d715b0();
   input += synapse0x1d715f0();
   input += synapse0x1d71630();
   input += synapse0x1d71670();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d70ce0() {
   double input = input0x1d70ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d716b0() {
   double input = -2.46724;
   input += synapse0x1d719f0();
   input += synapse0x1d71a30();
   input += synapse0x1d71a70();
   input += synapse0x1d71ab0();
   input += synapse0x1d71af0();
   input += synapse0x1d71b30();
   input += synapse0x1d71b70();
   input += synapse0x1d71bb0();
   input += synapse0x1d71bf0();
   input += synapse0x1d71c30();
   input += synapse0x1d71c70();
   input += synapse0x1d71cb0();
   input += synapse0x1d71cf0();
   input += synapse0x1d71d30();
   input += synapse0x1d71d70();
   input += synapse0x1d71db0();
   input += synapse0x1d71840();
   input += synapse0x1d71880();
   input += synapse0x1d71f00();
   input += synapse0x1d71f40();
   input += synapse0x1d71f80();
   input += synapse0x1d71fc0();
   input += synapse0x1d72000();
   input += synapse0x1d72040();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d716b0() {
   double input = input0x1d716b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d72080() {
   double input = -1.48639;
   input += synapse0x1d723c0();
   input += synapse0x1d72400();
   input += synapse0x1d72440();
   input += synapse0x1d72480();
   input += synapse0x1d724c0();
   input += synapse0x1d72500();
   input += synapse0x1d72540();
   input += synapse0x1d72580();
   input += synapse0x1d725c0();
   input += synapse0x1d72600();
   input += synapse0x1d72640();
   input += synapse0x1d72680();
   input += synapse0x1d726c0();
   input += synapse0x1d72700();
   input += synapse0x1d72740();
   input += synapse0x1d72780();
   input += synapse0x1d72210();
   input += synapse0x1d72250();
   input += synapse0x1d728d0();
   input += synapse0x1d72910();
   input += synapse0x1d72950();
   input += synapse0x1d72990();
   input += synapse0x1d729d0();
   input += synapse0x1d72a10();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d72080() {
   double input = input0x1d72080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d72a50() {
   double input = -0.090591;
   input += synapse0x1d72d90();
   input += synapse0x1d72dd0();
   input += synapse0x1d72e10();
   input += synapse0x1d72e50();
   input += synapse0x1d72e90();
   input += synapse0x1d72ed0();
   input += synapse0x1d72f10();
   input += synapse0x1d72f50();
   input += synapse0x1d72f90();
   input += synapse0x1d72fd0();
   input += synapse0x1d73010();
   input += synapse0x1d73050();
   input += synapse0x1d73090();
   input += synapse0x1d730d0();
   input += synapse0x1d73110();
   input += synapse0x1d73150();
   input += synapse0x1d72be0();
   input += synapse0x1d72c20();
   input += synapse0x1d732a0();
   input += synapse0x1d732e0();
   input += synapse0x1d73320();
   input += synapse0x1d73360();
   input += synapse0x1d733a0();
   input += synapse0x1d733e0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d72a50() {
   double input = input0x1d72a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d73420() {
   double input = 1.44214;
   input += synapse0x1d73760();
   input += synapse0x1d67d30();
   input += synapse0x1d67d70();
   input += synapse0x1d67db0();
   input += synapse0x1d68000();
   input += synapse0x1d68040();
   input += synapse0x1d68080();
   input += synapse0x1d682d0();
   input += synapse0x1d68310();
   input += synapse0x1d68560();
   input += synapse0x1d685a0();
   input += synapse0x1d685e0();
   input += synapse0x1d68830();
   input += synapse0x1d68870();
   input += synapse0x1d68ac0();
   input += synapse0x1d68b00();
   input += synapse0x1d735b0();
   input += synapse0x1d735f0();
   input += synapse0x1d68c50();
   input += synapse0x1d69160();
   input += synapse0x1d691a0();
   input += synapse0x1d691e0();
   input += synapse0x1d69430();
   input += synapse0x1d69470();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d73420() {
   double input = input0x1d73420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d694b0() {
   double input = -0.208965;
   input += synapse0x1d68d20();
   input += synapse0x1d68d60();
   input += synapse0x1d68da0();
   input += synapse0x1d68de0();
   input += synapse0x1d69760();
   input += synapse0x1d75ab0();
   input += synapse0x1d75af0();
   input += synapse0x1d75b30();
   input += synapse0x1d75b70();
   input += synapse0x1d75bb0();
   input += synapse0x1d75bf0();
   input += synapse0x1d75c30();
   input += synapse0x1d75c70();
   input += synapse0x1d75cb0();
   input += synapse0x1d75cf0();
   input += synapse0x1d75d30();
   input += synapse0x1d69640();
   input += synapse0x1d69680();
   input += synapse0x1d75e80();
   input += synapse0x1d75ec0();
   input += synapse0x1d75f00();
   input += synapse0x1d75f40();
   input += synapse0x1d75f80();
   input += synapse0x1d75fc0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d694b0() {
   double input = input0x1d694b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d76000() {
   double input = -0.120106;
   input += synapse0x1d76340();
   input += synapse0x1d76380();
   input += synapse0x1d763c0();
   input += synapse0x1d76400();
   input += synapse0x1d76440();
   input += synapse0x1d76480();
   input += synapse0x1d764c0();
   input += synapse0x1d76500();
   input += synapse0x1d76540();
   input += synapse0x1d76580();
   input += synapse0x1d765c0();
   input += synapse0x1d76600();
   input += synapse0x1d76640();
   input += synapse0x1d76680();
   input += synapse0x1d766c0();
   input += synapse0x1d76700();
   input += synapse0x1d76190();
   input += synapse0x1d761d0();
   input += synapse0x1d76850();
   input += synapse0x1d76890();
   input += synapse0x1d768d0();
   input += synapse0x1d76910();
   input += synapse0x1d76950();
   input += synapse0x1d76990();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d76000() {
   double input = input0x1d76000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d769d0() {
   double input = 0.504512;
   input += synapse0x1d76d10();
   input += synapse0x1d76d50();
   input += synapse0x1d76d90();
   input += synapse0x1d76dd0();
   input += synapse0x1d76e10();
   input += synapse0x1d76e50();
   input += synapse0x1d76e90();
   input += synapse0x1d76ed0();
   input += synapse0x1d76f10();
   input += synapse0x1d76f50();
   input += synapse0x1d76f90();
   input += synapse0x1d76fd0();
   input += synapse0x1d77010();
   input += synapse0x1d77050();
   input += synapse0x1d77090();
   input += synapse0x1d770d0();
   input += synapse0x1d76b60();
   input += synapse0x1d76ba0();
   input += synapse0x1d77220();
   input += synapse0x1d77260();
   input += synapse0x1d772a0();
   input += synapse0x1d772e0();
   input += synapse0x1d77320();
   input += synapse0x1d77360();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d769d0() {
   double input = input0x1d769d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d773a0() {
   double input = 1.26955;
   input += synapse0x1d776e0();
   input += synapse0x1d77720();
   input += synapse0x1d77760();
   input += synapse0x1d777a0();
   input += synapse0x1d777e0();
   input += synapse0x1d77820();
   input += synapse0x1d77860();
   input += synapse0x1d778a0();
   input += synapse0x1d778e0();
   input += synapse0x1d77920();
   input += synapse0x1d77960();
   input += synapse0x1d779a0();
   input += synapse0x1d779e0();
   input += synapse0x1d77a20();
   input += synapse0x1d77a60();
   input += synapse0x1d77aa0();
   input += synapse0x1d77530();
   input += synapse0x1d77570();
   input += synapse0x1d77bf0();
   input += synapse0x1d77c30();
   input += synapse0x1d77c70();
   input += synapse0x1d77cb0();
   input += synapse0x1d77cf0();
   input += synapse0x1d77d30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d773a0() {
   double input = input0x1d773a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d77d70() {
   double input = 0.545182;
   input += synapse0x1d780b0();
   input += synapse0x1d780f0();
   input += synapse0x1d78130();
   input += synapse0x1d78170();
   input += synapse0x1d781b0();
   input += synapse0x1d781f0();
   input += synapse0x1d78230();
   input += synapse0x1d78270();
   input += synapse0x1d782b0();
   input += synapse0x1d782f0();
   input += synapse0x1d78330();
   input += synapse0x1d78370();
   input += synapse0x1d783b0();
   input += synapse0x1d783f0();
   input += synapse0x1d78430();
   input += synapse0x1d78470();
   input += synapse0x1d77f00();
   input += synapse0x1d77f40();
   input += synapse0x1d785c0();
   input += synapse0x1d78600();
   input += synapse0x1d78640();
   input += synapse0x1d78680();
   input += synapse0x1d786c0();
   input += synapse0x1d78700();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d77d70() {
   double input = input0x1d77d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d78740() {
   double input = -0.231805;
   input += synapse0x1d78a80();
   input += synapse0x1d78ac0();
   input += synapse0x1d78b00();
   input += synapse0x1d78b40();
   input += synapse0x1d78b80();
   input += synapse0x1d78bc0();
   input += synapse0x1d78c00();
   input += synapse0x1d78c40();
   input += synapse0x1d78c80();
   input += synapse0x1d78cc0();
   input += synapse0x1d78d00();
   input += synapse0x1d78d40();
   input += synapse0x1d78d80();
   input += synapse0x1d78dc0();
   input += synapse0x1d78e00();
   input += synapse0x1d78e40();
   input += synapse0x1d788d0();
   input += synapse0x1d78910();
   input += synapse0x1d78f90();
   input += synapse0x1d78fd0();
   input += synapse0x1d79010();
   input += synapse0x1d79050();
   input += synapse0x1d79090();
   input += synapse0x1d790d0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d78740() {
   double input = input0x1d78740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d79110() {
   double input = 1.08337;
   input += synapse0x1d79450();
   input += synapse0x1d79490();
   input += synapse0x1d794d0();
   input += synapse0x1d79510();
   input += synapse0x1d79550();
   input += synapse0x1d79590();
   input += synapse0x1d795d0();
   input += synapse0x1d79610();
   input += synapse0x1d79650();
   input += synapse0x1d79690();
   input += synapse0x1d796d0();
   input += synapse0x1d79710();
   input += synapse0x1d79750();
   input += synapse0x1d79790();
   input += synapse0x1d797d0();
   input += synapse0x1d79810();
   input += synapse0x1d792a0();
   input += synapse0x1d792e0();
   input += synapse0x1d79960();
   input += synapse0x1d799a0();
   input += synapse0x1d799e0();
   input += synapse0x1d79a20();
   input += synapse0x1d79a60();
   input += synapse0x1d79aa0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d79110() {
   double input = input0x1d79110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d79ae0() {
   double input = 1.85089;
   input += synapse0x1d79e20();
   input += synapse0x1d79e60();
   input += synapse0x1d79ea0();
   input += synapse0x1d79ee0();
   input += synapse0x1d79f20();
   input += synapse0x1d79f60();
   input += synapse0x1d79fa0();
   input += synapse0x1d79fe0();
   input += synapse0x1d7a020();
   input += synapse0x1d7a060();
   input += synapse0x1d7a0a0();
   input += synapse0x1d7a0e0();
   input += synapse0x1d7a120();
   input += synapse0x1d7a160();
   input += synapse0x1d7a1a0();
   input += synapse0x1d7a1e0();
   input += synapse0x1d79c70();
   input += synapse0x1d79cb0();
   input += synapse0x1d7a330();
   input += synapse0x1d7a370();
   input += synapse0x1d7a3b0();
   input += synapse0x1d7a3f0();
   input += synapse0x1d7a430();
   input += synapse0x1d7a470();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d79ae0() {
   double input = input0x1d79ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d7a4b0() {
   double input = -0.780116;
   input += synapse0x1d62f20();
   input += synapse0x1d62f60();
   input += synapse0x1d62fa0();
   input += synapse0x1d62fe0();
   input += synapse0x1d63020();
   input += synapse0x1d63060();
   input += synapse0x1d630a0();
   input += synapse0x1d630e0();
   input += synapse0x1d7ac00();
   input += synapse0x1d7ac40();
   input += synapse0x1d7ac80();
   input += synapse0x1d7acc0();
   input += synapse0x1d7ad00();
   input += synapse0x1d7ad40();
   input += synapse0x1d7ad80();
   input += synapse0x1d7adc0();
   input += synapse0x1d7a640();
   input += synapse0x1d7a680();
   input += synapse0x1d7af10();
   input += synapse0x1d7af50();
   input += synapse0x1d7af90();
   input += synapse0x1d7afd0();
   input += synapse0x1d7b010();
   input += synapse0x1d7b050();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d7a4b0() {
   double input = input0x1d7a4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d7b090() {
   double input = -0.528663;
   input += synapse0x1d7b3d0();
   input += synapse0x1d7b410();
   input += synapse0x1d7b450();
   input += synapse0x1d7b490();
   input += synapse0x1d7b4d0();
   input += synapse0x1d7b510();
   input += synapse0x1d7b550();
   input += synapse0x1d7b590();
   input += synapse0x1d7b5d0();
   input += synapse0x1d7b610();
   input += synapse0x1d7b650();
   input += synapse0x1d7b690();
   input += synapse0x1d7b6d0();
   input += synapse0x1d7b710();
   input += synapse0x1d7b750();
   input += synapse0x1d7b790();
   input += synapse0x1d7b220();
   input += synapse0x1d7b260();
   input += synapse0x1d7b8e0();
   input += synapse0x1d7b920();
   input += synapse0x1d7b960();
   input += synapse0x1d7b9a0();
   input += synapse0x1d7b9e0();
   input += synapse0x1d7ba20();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d7b090() {
   double input = input0x1d7b090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d7ba60() {
   double input = 0.319564;
   input += synapse0x1d7bda0();
   input += synapse0x1d7bde0();
   input += synapse0x1d7be20();
   input += synapse0x1d7be60();
   input += synapse0x1d7bea0();
   input += synapse0x1d7bee0();
   input += synapse0x1d7bf20();
   input += synapse0x1d7bf60();
   input += synapse0x1d7bfa0();
   input += synapse0x1d7bfe0();
   input += synapse0x1d7c020();
   input += synapse0x1d7c060();
   input += synapse0x1d7c0a0();
   input += synapse0x1d7c0e0();
   input += synapse0x1d7c120();
   input += synapse0x1d7c160();
   input += synapse0x1d7bbf0();
   input += synapse0x1d7bc30();
   input += synapse0x1d6c760();
   input += synapse0x1d6c7a0();
   input += synapse0x1d6c7e0();
   input += synapse0x1d6c820();
   input += synapse0x1d6c860();
   input += synapse0x1d6c8a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d7ba60() {
   double input = input0x1d7ba60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6c8e0() {
   double input = 0.202665;
   input += synapse0x1d6cc20();
   input += synapse0x1d6cc60();
   input += synapse0x1d6cca0();
   input += synapse0x1d6cce0();
   input += synapse0x1d6cd20();
   input += synapse0x1d6cd60();
   input += synapse0x1d6cda0();
   input += synapse0x1d6cde0();
   input += synapse0x1d6ce20();
   input += synapse0x1d6ce60();
   input += synapse0x1d6cea0();
   input += synapse0x1d6cee0();
   input += synapse0x1d6cf20();
   input += synapse0x1d6cf60();
   input += synapse0x1d6cfa0();
   input += synapse0x1d6cfe0();
   input += synapse0x1d6ca70();
   input += synapse0x1d6cab0();
   input += synapse0x1d6d130();
   input += synapse0x1d6d170();
   input += synapse0x1d6d1b0();
   input += synapse0x1d6d1f0();
   input += synapse0x1d6d230();
   input += synapse0x1d6d270();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6c8e0() {
   double input = input0x1d6c8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6d2b0() {
   double input = -1.62107;
   input += synapse0x1d6d5f0();
   input += synapse0x1d6d630();
   input += synapse0x1d6d670();
   input += synapse0x1d6d6b0();
   input += synapse0x1d6d6f0();
   input += synapse0x1d6d730();
   input += synapse0x1d6d770();
   input += synapse0x1d6d7b0();
   input += synapse0x1d6d7f0();
   input += synapse0x1d6d830();
   input += synapse0x1d6d870();
   input += synapse0x1d6d8b0();
   input += synapse0x1d6d8f0();
   input += synapse0x1d6d930();
   input += synapse0x1d6d970();
   input += synapse0x1d6d9b0();
   input += synapse0x1d6d440();
   input += synapse0x1d6d480();
   input += synapse0x1d6db00();
   input += synapse0x1d6db40();
   input += synapse0x1d6db80();
   input += synapse0x1d6dbc0();
   input += synapse0x1d6dc00();
   input += synapse0x1d6dc40();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6d2b0() {
   double input = input0x1d6d2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d6dc80() {
   double input = 1.79648;
   input += synapse0x1d6dfc0();
   input += synapse0x1d6e000();
   input += synapse0x1d6e040();
   input += synapse0x1d6e080();
   input += synapse0x1d6e0c0();
   input += synapse0x1d6e100();
   input += synapse0x1d6e140();
   input += synapse0x1d6e180();
   input += synapse0x1d6e1c0();
   input += synapse0x1d6e200();
   input += synapse0x1d6e240();
   input += synapse0x1d6e280();
   input += synapse0x1d6e2c0();
   input += synapse0x1d6e300();
   input += synapse0x1d6e340();
   input += synapse0x1d6e380();
   input += synapse0x1d6de10();
   input += synapse0x1d6de50();
   input += synapse0x1d6e4d0();
   input += synapse0x1d6e510();
   input += synapse0x1d6e550();
   input += synapse0x1d6e590();
   input += synapse0x1d6e5d0();
   input += synapse0x1d6e610();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d6dc80() {
   double input = input0x1d6dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d802c0() {
   double input = 0.831135;
   input += synapse0x1d804e0();
   input += synapse0x1d80520();
   input += synapse0x1d80560();
   input += synapse0x1d805a0();
   input += synapse0x1d805e0();
   input += synapse0x1d80620();
   input += synapse0x1d80660();
   input += synapse0x1d806a0();
   input += synapse0x1d806e0();
   input += synapse0x1d80720();
   input += synapse0x1d80760();
   input += synapse0x1d807a0();
   input += synapse0x1d807e0();
   input += synapse0x1d80820();
   input += synapse0x1d80860();
   input += synapse0x1d808a0();
   input += synapse0x1d6e650();
   input += synapse0x1d6e690();
   input += synapse0x1d809f0();
   input += synapse0x1d80a30();
   input += synapse0x1d80a70();
   input += synapse0x1d80ab0();
   input += synapse0x1d80af0();
   input += synapse0x1d80b30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d802c0() {
   double input = input0x1d802c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d80b70() {
   double input = 1.67536;
   input += synapse0x1d80eb0();
   input += synapse0x1d80ef0();
   input += synapse0x1d80f30();
   input += synapse0x1d80f70();
   input += synapse0x1d80fb0();
   input += synapse0x1d80ff0();
   input += synapse0x1d81030();
   input += synapse0x1d81070();
   input += synapse0x1d810b0();
   input += synapse0x1d810f0();
   input += synapse0x1d81130();
   input += synapse0x1d81170();
   input += synapse0x1d811b0();
   input += synapse0x1d811f0();
   input += synapse0x1d81230();
   input += synapse0x1d81270();
   input += synapse0x1d80d00();
   input += synapse0x1d80d40();
   input += synapse0x1d813c0();
   input += synapse0x1d81400();
   input += synapse0x1d81440();
   input += synapse0x1d81480();
   input += synapse0x1d814c0();
   input += synapse0x1d81500();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d80b70() {
   double input = input0x1d80b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d81540() {
   double input = -0.145869;
   input += synapse0x1d81880();
   input += synapse0x1d818c0();
   input += synapse0x1d81900();
   input += synapse0x1d81940();
   input += synapse0x1d81980();
   input += synapse0x1d819c0();
   input += synapse0x1d81a00();
   input += synapse0x1d81a40();
   input += synapse0x1d81a80();
   input += synapse0x1d81ac0();
   input += synapse0x1d81b00();
   input += synapse0x1d81b40();
   input += synapse0x1d81b80();
   input += synapse0x1d81bc0();
   input += synapse0x1d81c00();
   input += synapse0x1d81c40();
   input += synapse0x1d816d0();
   input += synapse0x1d81710();
   input += synapse0x1d81d90();
   input += synapse0x1d81dd0();
   input += synapse0x1d81e10();
   input += synapse0x1d81e50();
   input += synapse0x1d81e90();
   input += synapse0x1d81ed0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d81540() {
   double input = input0x1d81540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d81f10() {
   double input = 0.0951109;
   input += synapse0x1d82250();
   input += synapse0x1d82290();
   input += synapse0x1d822d0();
   input += synapse0x1d82310();
   input += synapse0x1d82350();
   input += synapse0x1d82390();
   input += synapse0x1d823d0();
   input += synapse0x1d82410();
   input += synapse0x1d82450();
   input += synapse0x1d82490();
   input += synapse0x1d824d0();
   input += synapse0x1d82510();
   input += synapse0x1d82550();
   input += synapse0x1d82590();
   input += synapse0x1d825d0();
   input += synapse0x1d82610();
   input += synapse0x1d820a0();
   input += synapse0x1d820e0();
   input += synapse0x1d82760();
   input += synapse0x1d827a0();
   input += synapse0x1d827e0();
   input += synapse0x1d82820();
   input += synapse0x1d82860();
   input += synapse0x1d828a0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d81f10() {
   double input = input0x1d81f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d89110() {
   double input = -0.320037;
   input += synapse0x1b22710();
   input += synapse0x1b22750();
   input += synapse0x1d5f250();
   input += synapse0x1d5f290();
   input += synapse0x1d60d20();
   input += synapse0x1d60d60();
   input += synapse0x1d61af0();
   input += synapse0x1d61b30();
   input += synapse0x1d624c0();
   input += synapse0x1d62500();
   input += synapse0x1d62e90();
   input += synapse0x1d62ed0();
   input += synapse0x1d63970();
   input += synapse0x1d639b0();
   input += synapse0x1d64340();
   input += synapse0x1d64380();
   input += synapse0x1d61420();
   input += synapse0x1d61460();
   input += synapse0x1d65ef0();
   input += synapse0x1d65f30();
   input += synapse0x1d668c0();
   input += synapse0x1d66900();
   input += synapse0x1d67290();
   input += synapse0x1d672d0();
   input += synapse0x1d67c60();
   input += synapse0x1d67ca0();
   input += synapse0x1d5acf0();
   input += synapse0x1d5ad30();
   input += synapse0x1d69d50();
   input += synapse0x1d69d90();
   input += synapse0x1d6a720();
   input += synapse0x1d6a760();
   input += synapse0x1d6b0f0();
   input += synapse0x1d6b130();
   input += synapse0x1d6bac0();
   input += synapse0x1d6bb00();
   input += synapse0x1d6c490();
   input += synapse0x1d6c4d0();
   input += synapse0x1d64fe0();
   input += synapse0x1d65020();
   input += synapse0x1d6e890();
   input += synapse0x1d6e8d0();
   input += synapse0x1d6f220();
   input += synapse0x1d6f260();
   input += synapse0x1d6fbf0();
   input += synapse0x1d6fc30();
   input += synapse0x1d705c0();
   input += synapse0x1d70600();
   input += synapse0x1d70f90();
   input += synapse0x1d70fd0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d89110() {
   double input = input0x1d89110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d894b0() {
   double input = 0.264101;
   input += synapse0x1d736d0();
   input += synapse0x1d73710();
   input += synapse0x1d68c90();
   input += synapse0x1d68cd0();
   input += synapse0x1d762b0();
   input += synapse0x1d762f0();
   input += synapse0x1d76c80();
   input += synapse0x1d76cc0();
   input += synapse0x1d77650();
   input += synapse0x1d77690();
   input += synapse0x1d78020();
   input += synapse0x1d78060();
   input += synapse0x1d789f0();
   input += synapse0x1d78a30();
   input += synapse0x1d793c0();
   input += synapse0x1d79400();
   input += synapse0x1d79d90();
   input += synapse0x1d79dd0();
   input += synapse0x1d7a760();
   input += synapse0x1d7a7a0();
   input += synapse0x1d7b340();
   input += synapse0x1d7b380();
   input += synapse0x1d7bd10();
   input += synapse0x1d7bd50();
   input += synapse0x1d6cb90();
   input += synapse0x1d6cbd0();
   input += synapse0x1d6d560();
   input += synapse0x1d6d5a0();
   input += synapse0x1d6df30();
   input += synapse0x1d6df70();
   input += synapse0x1d80450();
   input += synapse0x1d80490();
   input += synapse0x1d80e20();
   input += synapse0x1d80e60();
   input += synapse0x1d817f0();
   input += synapse0x1d81830();
   input += synapse0x1d821c0();
   input += synapse0x1d82200();
   input += synapse0x1d5d150();
   input += synapse0x1d5d190();
   input += synapse0x1d71960();
   input += synapse0x1d719a0();
   input += synapse0x1d828e0();
   input += synapse0x1d82920();
   input += synapse0x1d82960();
   input += synapse0x1d829a0();
   input += synapse0x1d89850();
   input += synapse0x1d89890();
   input += synapse0x1d898d0();
   input += synapse0x1d89910();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d894b0() {
   double input = input0x1d894b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d89950() {
   double input = -0.0131658;
   input += synapse0x1d89c90();
   input += synapse0x1d89cd0();
   input += synapse0x1d89d10();
   input += synapse0x1d89d50();
   input += synapse0x1d89d90();
   input += synapse0x1d89dd0();
   input += synapse0x1d89e10();
   input += synapse0x1d89e50();
   input += synapse0x1d89e90();
   input += synapse0x1d89ed0();
   input += synapse0x1d89f10();
   input += synapse0x1d89f50();
   input += synapse0x1d89f90();
   input += synapse0x1d89fd0();
   input += synapse0x1d8a010();
   input += synapse0x1d8a050();
   input += synapse0x1d89ae0();
   input += synapse0x1d89b20();
   input += synapse0x1d8a1a0();
   input += synapse0x1d8a1e0();
   input += synapse0x1d8a220();
   input += synapse0x1d8a260();
   input += synapse0x1d8a2a0();
   input += synapse0x1d8a2e0();
   input += synapse0x1d8a320();
   input += synapse0x1d8a360();
   input += synapse0x1d8a3a0();
   input += synapse0x1d8a3e0();
   input += synapse0x1d8a420();
   input += synapse0x1d8a460();
   input += synapse0x1d8a4a0();
   input += synapse0x1d8a4e0();
   input += synapse0x1d8a090();
   input += synapse0x1d8a0d0();
   input += synapse0x1d8a110();
   input += synapse0x1d8a150();
   input += synapse0x1d8a730();
   input += synapse0x1d8a770();
   input += synapse0x1d8a7b0();
   input += synapse0x1d8a7f0();
   input += synapse0x1d8a830();
   input += synapse0x1d8a870();
   input += synapse0x1d8a8b0();
   input += synapse0x1d8a8f0();
   input += synapse0x1d8a930();
   input += synapse0x1d8a970();
   input += synapse0x1d8a9b0();
   input += synapse0x1d8a9f0();
   input += synapse0x1d8aa30();
   input += synapse0x1d8aa70();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d89950() {
   double input = input0x1d89950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d8aab0() {
   double input = -0.740962;
   input += synapse0x1d8adf0();
   input += synapse0x1d8ae30();
   input += synapse0x1d8ae70();
   input += synapse0x1d8aeb0();
   input += synapse0x1d8aef0();
   input += synapse0x1d8af30();
   input += synapse0x1d8af70();
   input += synapse0x1d8afb0();
   input += synapse0x1d8aff0();
   input += synapse0x1d8b030();
   input += synapse0x1d8b070();
   input += synapse0x1d8b0b0();
   input += synapse0x1d8b0f0();
   input += synapse0x1d8b130();
   input += synapse0x1d8b170();
   input += synapse0x1d8b1b0();
   input += synapse0x1d8ac40();
   input += synapse0x1d8ac80();
   input += synapse0x1d8b300();
   input += synapse0x1d8b340();
   input += synapse0x1d8b380();
   input += synapse0x1d8b3c0();
   input += synapse0x1d8b400();
   input += synapse0x1d8b440();
   input += synapse0x1d8b480();
   input += synapse0x1d8b4c0();
   input += synapse0x1d8b500();
   input += synapse0x1d8b540();
   input += synapse0x1d8b580();
   input += synapse0x1d8b5c0();
   input += synapse0x1d8b600();
   input += synapse0x1d8b640();
   input += synapse0x1d8b1f0();
   input += synapse0x1d8b230();
   input += synapse0x1d8b270();
   input += synapse0x1d8b2b0();
   input += synapse0x1d8b890();
   input += synapse0x1d8b8d0();
   input += synapse0x1d8b910();
   input += synapse0x1d8b950();
   input += synapse0x1d8b990();
   input += synapse0x1d8b9d0();
   input += synapse0x1d8ba10();
   input += synapse0x1d8ba50();
   input += synapse0x1d8ba90();
   input += synapse0x1d8bad0();
   input += synapse0x1d8bb10();
   input += synapse0x1d8bb50();
   input += synapse0x1d8bb90();
   input += synapse0x1d8bbd0();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d8aab0() {
   double input = input0x1d8aab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d8bc10() {
   double input = 0.408785;
   input += synapse0x1d8bf50();
   input += synapse0x1d8bf90();
   input += synapse0x1d8bfd0();
   input += synapse0x1d8c010();
   input += synapse0x1d8c050();
   input += synapse0x1d8c090();
   input += synapse0x1d8c0d0();
   input += synapse0x1d8c110();
   input += synapse0x1d8c150();
   input += synapse0x1d8c190();
   input += synapse0x1d8c1d0();
   input += synapse0x1d8c210();
   input += synapse0x1d8c250();
   input += synapse0x1d8c290();
   input += synapse0x1d8c2d0();
   input += synapse0x1d8c310();
   input += synapse0x1d8bda0();
   input += synapse0x1d8bde0();
   input += synapse0x1d8c460();
   input += synapse0x1d8c4a0();
   input += synapse0x1d8c4e0();
   input += synapse0x1d8c520();
   input += synapse0x1d8c560();
   input += synapse0x1d8c5a0();
   input += synapse0x1d8c5e0();
   input += synapse0x1d8c620();
   input += synapse0x1d8c660();
   input += synapse0x1d8c6a0();
   input += synapse0x1d8c6e0();
   input += synapse0x1d8c720();
   input += synapse0x1d8c760();
   input += synapse0x1d8c7a0();
   input += synapse0x1d8c350();
   input += synapse0x1d8c390();
   input += synapse0x1d8c3d0();
   input += synapse0x1d8c410();
   input += synapse0x1d8c9f0();
   input += synapse0x1d8ca30();
   input += synapse0x1d8ca70();
   input += synapse0x1d8cab0();
   input += synapse0x1d8caf0();
   input += synapse0x1d8cb30();
   input += synapse0x1d8cb70();
   input += synapse0x1d8cbb0();
   input += synapse0x1d8cbf0();
   input += synapse0x1d8cc30();
   input += synapse0x1d8cc70();
   input += synapse0x1d8ccb0();
   input += synapse0x1d8ccf0();
   input += synapse0x1d8cd30();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d8bc10() {
   double input = input0x1d8bc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRcR::input0x1d8cd70() {
   double input = 11.7025;
   input += synapse0x1d8cf90();
   input += synapse0x1d8cfd0();
   input += synapse0x1d8d010();
   input += synapse0x1d8d050();
   input += synapse0x1d8d090();
   return input;
}

double NNfunction_sb_uRcR::neuron0x1d8cd70() {
   double input = input0x1d8cd70();
   return (input * 1)+0;
}

double NNfunction_sb_uRcR::synapse0x1d5d1e0() {
   return (neuron0x1d57de0()*0.0689479);
}

double NNfunction_sb_uRcR::synapse0x1d5d220() {
   return (neuron0x1d58090()*-0.221305);
}

double NNfunction_sb_uRcR::synapse0x1d5d260() {
   return (neuron0x1d583d0()*-0.0827293);
}

double NNfunction_sb_uRcR::synapse0x1d5d2a0() {
   return (neuron0x1d58710()*1.34612);
}

double NNfunction_sb_uRcR::synapse0x1d5d2e0() {
   return (neuron0x1d58a50()*0.146283);
}

double NNfunction_sb_uRcR::synapse0x1d5d320() {
   return (neuron0x1d58d90()*0.0668965);
}

double NNfunction_sb_uRcR::synapse0x1d5d360() {
   return (neuron0x1d590d0()*0.0639639);
}

double NNfunction_sb_uRcR::synapse0x1d5d3a0() {
   return (neuron0x1d59410()*0.0631706);
}

double NNfunction_sb_uRcR::synapse0x1d5d3e0() {
   return (neuron0x1d59750()*-0.229372);
}

double NNfunction_sb_uRcR::synapse0x1d5d420() {
   return (neuron0x1d59a90()*-0.0989866);
}

double NNfunction_sb_uRcR::synapse0x1d5d460() {
   return (neuron0x1d59dd0()*0.182906);
}

double NNfunction_sb_uRcR::synapse0x1d5d4a0() {
   return (neuron0x1d5a110()*-0.114394);
}

double NNfunction_sb_uRcR::synapse0x1d5d4e0() {
   return (neuron0x1d5a450()*-0.0717114);
}

double NNfunction_sb_uRcR::synapse0x1d5d520() {
   return (neuron0x1d5a790()*-0.1601);
}

double NNfunction_sb_uRcR::synapse0x1d5d560() {
   return (neuron0x1d5aad0()*0.268059);
}

double NNfunction_sb_uRcR::synapse0x1d5d5a0() {
   return (neuron0x1d5ae10()*0.271151);
}

double NNfunction_sb_uRcR::synapse0x1d5d030() {
   return (neuron0x1d5b150()*-0.0443969);
}

double NNfunction_sb_uRcR::synapse0x1d5d070() {
   return (neuron0x1d5b6b0()*-0.37625);
}

double NNfunction_sb_uRcR::synapse0x1b13fa0() {
   return (neuron0x1d5b9f0()*-0.109687);
}

double NNfunction_sb_uRcR::synapse0x1b13fe0() {
   return (neuron0x1d5bd30()*0.131888);
}

double NNfunction_sb_uRcR::synapse0x1d5d5e0() {
   return (neuron0x1d5c070()*0.135375);
}

double NNfunction_sb_uRcR::synapse0x1d5d620() {
   return (neuron0x1d5c3b0()*0.0310593);
}

double NNfunction_sb_uRcR::synapse0x1d5d660() {
   return (neuron0x1d5c6f0()*-0.0493865);
}

double NNfunction_sb_uRcR::synapse0x1d5d6a0() {
   return (neuron0x1d5ca30()*-0.108797);
}

double NNfunction_sb_uRcR::synapse0x1d5da20() {
   return (neuron0x1d57de0()*0.347412);
}

double NNfunction_sb_uRcR::synapse0x1d5da60() {
   return (neuron0x1d58090()*-0.153302);
}

double NNfunction_sb_uRcR::synapse0x1d5daa0() {
   return (neuron0x1d583d0()*-0.557189);
}

double NNfunction_sb_uRcR::synapse0x1d5dae0() {
   return (neuron0x1d58710()*-0.371767);
}

double NNfunction_sb_uRcR::synapse0x1d5db20() {
   return (neuron0x1d58a50()*-0.0907683);
}

double NNfunction_sb_uRcR::synapse0x1d5db60() {
   return (neuron0x1d58d90()*-0.165437);
}

double NNfunction_sb_uRcR::synapse0x1d5dba0() {
   return (neuron0x1d590d0()*-0.142995);
}

double NNfunction_sb_uRcR::synapse0x1d5dbe0() {
   return (neuron0x1d59410()*-0.25972);
}

double NNfunction_sb_uRcR::synapse0x1d5dc20() {
   return (neuron0x1d59750()*-0.544928);
}

double NNfunction_sb_uRcR::synapse0x1b13df0() {
   return (neuron0x1d59a90()*-0.351233);
}

double NNfunction_sb_uRcR::synapse0x1b13e30() {
   return (neuron0x1d59dd0()*-0.172658);
}

double NNfunction_sb_uRcR::synapse0x1b13e70() {
   return (neuron0x1d5a110()*-0.363114);
}

double NNfunction_sb_uRcR::synapse0x1b13eb0() {
   return (neuron0x1d5a450()*0.325048);
}

double NNfunction_sb_uRcR::synapse0x1d5de70() {
   return (neuron0x1d5a790()*0.272574);
}

double NNfunction_sb_uRcR::synapse0x1d5deb0() {
   return (neuron0x1d5aad0()*0.519007);
}

double NNfunction_sb_uRcR::synapse0x1d5def0() {
   return (neuron0x1d5ae10()*0.745986);
}

double NNfunction_sb_uRcR::synapse0x1d5d870() {
   return (neuron0x1d5b150()*0.0872596);
}

double NNfunction_sb_uRcR::synapse0x1d5d8b0() {
   return (neuron0x1d5b6b0()*-0.720876);
}

double NNfunction_sb_uRcR::synapse0x1d5e040() {
   return (neuron0x1d5b9f0()*-0.155918);
}

double NNfunction_sb_uRcR::synapse0x1d5e080() {
   return (neuron0x1d5bd30()*-0.269007);
}

double NNfunction_sb_uRcR::synapse0x1d5e0c0() {
   return (neuron0x1d5c070()*-0.714981);
}

double NNfunction_sb_uRcR::synapse0x1d5e100() {
   return (neuron0x1d5c3b0()*-0.851459);
}

double NNfunction_sb_uRcR::synapse0x1d5e140() {
   return (neuron0x1d5c6f0()*0.0751446);
}

double NNfunction_sb_uRcR::synapse0x1d5e180() {
   return (neuron0x1d5ca30()*-0.306084);
}

double NNfunction_sb_uRcR::synapse0x1d5e500() {
   return (neuron0x1d57de0()*0.040426);
}

double NNfunction_sb_uRcR::synapse0x1d5e540() {
   return (neuron0x1d58090()*-0.0812629);
}

double NNfunction_sb_uRcR::synapse0x1d5e580() {
   return (neuron0x1d583d0()*0.000833553);
}

double NNfunction_sb_uRcR::synapse0x1d5e5c0() {
   return (neuron0x1d58710()*-1.66641);
}

double NNfunction_sb_uRcR::synapse0x1d5e600() {
   return (neuron0x1d58a50()*-0.00112396);
}

double NNfunction_sb_uRcR::synapse0x1d5e640() {
   return (neuron0x1d58d90()*-0.074456);
}

double NNfunction_sb_uRcR::synapse0x1d5e680() {
   return (neuron0x1d590d0()*-0.00900664);
}

double NNfunction_sb_uRcR::synapse0x1d5e6c0() {
   return (neuron0x1d59410()*0.025092);
}

double NNfunction_sb_uRcR::synapse0x1d5e700() {
   return (neuron0x1d59750()*-0.0274419);
}

double NNfunction_sb_uRcR::synapse0x1d5e740() {
   return (neuron0x1d59a90()*0.0977017);
}

double NNfunction_sb_uRcR::synapse0x1d5e780() {
   return (neuron0x1d59dd0()*-0.0261785);
}

double NNfunction_sb_uRcR::synapse0x1d5e7c0() {
   return (neuron0x1d5a110()*0.173663);
}

double NNfunction_sb_uRcR::synapse0x1d5e800() {
   return (neuron0x1d5a450()*-0.0242575);
}

double NNfunction_sb_uRcR::synapse0x1d5e840() {
   return (neuron0x1d5a790()*-0.0350475);
}

double NNfunction_sb_uRcR::synapse0x1d5e880() {
   return (neuron0x1d5aad0()*0.186629);
}

double NNfunction_sb_uRcR::synapse0x1d5e8c0() {
   return (neuron0x1d5ae10()*0.392918);
}

double NNfunction_sb_uRcR::synapse0x1d5e350() {
   return (neuron0x1d5b150()*-0.0221005);
}

double NNfunction_sb_uRcR::synapse0x1d5e390() {
   return (neuron0x1d5b6b0()*0.169728);
}

double NNfunction_sb_uRcR::synapse0x1b14650() {
   return (neuron0x1d5b9f0()*0.0066361);
}

double NNfunction_sb_uRcR::synapse0x1b21f20() {
   return (neuron0x1d5bd30()*0.0761418);
}

double NNfunction_sb_uRcR::synapse0x1b21f60() {
   return (neuron0x1d5c070()*-0.0448636);
}

double NNfunction_sb_uRcR::synapse0x1d607f0() {
   return (neuron0x1d5c3b0()*0.0334706);
}

double NNfunction_sb_uRcR::synapse0x1d60830() {
   return (neuron0x1d5c6f0()*-0.00403672);
}

double NNfunction_sb_uRcR::synapse0x1d57b20() {
   return (neuron0x1d5ca30()*-0.0218028);
}

double NNfunction_sb_uRcR::synapse0x1d57bf0() {
   return (neuron0x1d57de0()*0.0460519);
}

double NNfunction_sb_uRcR::synapse0x1b227a0() {
   return (neuron0x1d58090()*0.863547);
}

double NNfunction_sb_uRcR::synapse0x1d5ddf0() {
   return (neuron0x1d583d0()*-0.767377);
}

double NNfunction_sb_uRcR::synapse0x1d5de30() {
   return (neuron0x1d58710()*0.412386);
}

double NNfunction_sb_uRcR::synapse0x1d5ea10() {
   return (neuron0x1d58a50()*-0.19484);
}

double NNfunction_sb_uRcR::synapse0x1d5ea50() {
   return (neuron0x1d58d90()*0.147694);
}

double NNfunction_sb_uRcR::synapse0x1d5ea90() {
   return (neuron0x1d590d0()*0.103069);
}

double NNfunction_sb_uRcR::synapse0x1d5ead0() {
   return (neuron0x1d59410()*-0.18898);
}

double NNfunction_sb_uRcR::synapse0x1d5eb10() {
   return (neuron0x1d59750()*0.0783594);
}

double NNfunction_sb_uRcR::synapse0x1d5eb50() {
   return (neuron0x1d59a90()*0.135047);
}

double NNfunction_sb_uRcR::synapse0x1d5eb90() {
   return (neuron0x1d59dd0()*0.730269);
}

double NNfunction_sb_uRcR::synapse0x1d5ebd0() {
   return (neuron0x1d5a110()*-0.767346);
}

double NNfunction_sb_uRcR::synapse0x1d5ec10() {
   return (neuron0x1d5a450()*-0.54567);
}

double NNfunction_sb_uRcR::synapse0x1d5ec50() {
   return (neuron0x1d5a790()*-0.577698);
}

double NNfunction_sb_uRcR::synapse0x1d5ec90() {
   return (neuron0x1d5aad0()*-0.113776);
}

double NNfunction_sb_uRcR::synapse0x1d5ecd0() {
   return (neuron0x1d5ae10()*-0.295538);
}

double NNfunction_sb_uRcR::synapse0x1d57b60() {
   return (neuron0x1d5b150()*0.215984);
}

double NNfunction_sb_uRcR::synapse0x1d57ba0() {
   return (neuron0x1d5b6b0()*0.146542);
}

double NNfunction_sb_uRcR::synapse0x1d5ee20() {
   return (neuron0x1d5b9f0()*-0.255679);
}

double NNfunction_sb_uRcR::synapse0x1d5ee60() {
   return (neuron0x1d5bd30()*-0.323999);
}

double NNfunction_sb_uRcR::synapse0x1d5eea0() {
   return (neuron0x1d5c070()*-0.318445);
}

double NNfunction_sb_uRcR::synapse0x1d5eee0() {
   return (neuron0x1d5c3b0()*-0.0259323);
}

double NNfunction_sb_uRcR::synapse0x1d5ef20() {
   return (neuron0x1d5c6f0()*0.249408);
}

double NNfunction_sb_uRcR::synapse0x1d5ef60() {
   return (neuron0x1d5ca30()*0.23931);
}

double NNfunction_sb_uRcR::synapse0x1d5f2e0() {
   return (neuron0x1d57de0()*-0.155475);
}

double NNfunction_sb_uRcR::synapse0x1d5f320() {
   return (neuron0x1d58090()*-0.000927288);
}

double NNfunction_sb_uRcR::synapse0x1d5f360() {
   return (neuron0x1d583d0()*0.115919);
}

double NNfunction_sb_uRcR::synapse0x1d5f3a0() {
   return (neuron0x1d58710()*-0.029348);
}

double NNfunction_sb_uRcR::synapse0x1d5f3e0() {
   return (neuron0x1d58a50()*0.020126);
}

double NNfunction_sb_uRcR::synapse0x1d5f420() {
   return (neuron0x1d58d90()*0.17357);
}

double NNfunction_sb_uRcR::synapse0x1d5f460() {
   return (neuron0x1d590d0()*0.194372);
}

double NNfunction_sb_uRcR::synapse0x1d5f4a0() {
   return (neuron0x1d59410()*0.208761);
}

double NNfunction_sb_uRcR::synapse0x1d5f4e0() {
   return (neuron0x1d59750()*-0.0625539);
}

double NNfunction_sb_uRcR::synapse0x1d5f520() {
   return (neuron0x1d59a90()*0.0166257);
}

double NNfunction_sb_uRcR::synapse0x1d5f560() {
   return (neuron0x1d59dd0()*-0.0356351);
}

double NNfunction_sb_uRcR::synapse0x1d5f5a0() {
   return (neuron0x1d5a110()*-0.101675);
}

double NNfunction_sb_uRcR::synapse0x1d5f5e0() {
   return (neuron0x1d5a450()*-0.00181025);
}

double NNfunction_sb_uRcR::synapse0x1d5f620() {
   return (neuron0x1d5a790()*0.0399701);
}

double NNfunction_sb_uRcR::synapse0x1d5f660() {
   return (neuron0x1d5aad0()*-0.484358);
}

double NNfunction_sb_uRcR::synapse0x1d5f6a0() {
   return (neuron0x1d5ae10()*-1.29038);
}

double NNfunction_sb_uRcR::synapse0x1d5f7f0() {
   return (neuron0x1d5b150()*-0.104779);
}

double NNfunction_sb_uRcR::synapse0x1d5f130() {
   return (neuron0x1d5b6b0()*-0.008011);
}

double NNfunction_sb_uRcR::synapse0x1d5f170() {
   return (neuron0x1d5b9f0()*-0.0434327);
}

double NNfunction_sb_uRcR::synapse0x1d60930() {
   return (neuron0x1d5bd30()*0.0178237);
}

double NNfunction_sb_uRcR::synapse0x1d60970() {
   return (neuron0x1d5c070()*0.0295159);
}

double NNfunction_sb_uRcR::synapse0x1d609b0() {
   return (neuron0x1d5c3b0()*-0.0172407);
}

double NNfunction_sb_uRcR::synapse0x1d609f0() {
   return (neuron0x1d5c6f0()*0.0915087);
}

double NNfunction_sb_uRcR::synapse0x1d60a30() {
   return (neuron0x1d5ca30()*0.0427561);
}

double NNfunction_sb_uRcR::synapse0x1d60db0() {
   return (neuron0x1d57de0()*0.272812);
}

double NNfunction_sb_uRcR::synapse0x1d60df0() {
   return (neuron0x1d58090()*0.314808);
}

double NNfunction_sb_uRcR::synapse0x1d60e30() {
   return (neuron0x1d583d0()*-0.416922);
}

double NNfunction_sb_uRcR::synapse0x1d60e70() {
   return (neuron0x1d58710()*-1.25073);
}

double NNfunction_sb_uRcR::synapse0x1d60eb0() {
   return (neuron0x1d58a50()*0.301665);
}

double NNfunction_sb_uRcR::synapse0x1d60ef0() {
   return (neuron0x1d58d90()*0.61388);
}

double NNfunction_sb_uRcR::synapse0x1d60f30() {
   return (neuron0x1d590d0()*0.233853);
}

double NNfunction_sb_uRcR::synapse0x1d60f70() {
   return (neuron0x1d59410()*-0.447566);
}

double NNfunction_sb_uRcR::synapse0x1d60fb0() {
   return (neuron0x1d59750()*-0.131633);
}

double NNfunction_sb_uRcR::synapse0x1b22270() {
   return (neuron0x1d59a90()*0.435704);
}

double NNfunction_sb_uRcR::synapse0x1b222b0() {
   return (neuron0x1d59dd0()*0.81836);
}

double NNfunction_sb_uRcR::synapse0x1b222f0() {
   return (neuron0x1d5a110()*-0.568378);
}

double NNfunction_sb_uRcR::synapse0x1b22330() {
   return (neuron0x1d5a450()*-0.834604);
}

double NNfunction_sb_uRcR::synapse0x1b22370() {
   return (neuron0x1d5a790()*0.717751);
}

double NNfunction_sb_uRcR::synapse0x1b223b0() {
   return (neuron0x1d5aad0()*-0.622234);
}

double NNfunction_sb_uRcR::synapse0x1b223f0() {
   return (neuron0x1d5ae10()*-0.0672147);
}

double NNfunction_sb_uRcR::synapse0x1d60c00() {
   return (neuron0x1d5b150()*-0.216451);
}

double NNfunction_sb_uRcR::synapse0x1d60c40() {
   return (neuron0x1d5b6b0()*-0.413974);
}

double NNfunction_sb_uRcR::synapse0x1b22540() {
   return (neuron0x1d5b9f0()*-0.336971);
}

double NNfunction_sb_uRcR::synapse0x1b22580() {
   return (neuron0x1d5bd30()*-0.597759);
}

double NNfunction_sb_uRcR::synapse0x1b225c0() {
   return (neuron0x1d5c070()*-0.324754);
}

double NNfunction_sb_uRcR::synapse0x1b22600() {
   return (neuron0x1d5c3b0()*0.210606);
}

double NNfunction_sb_uRcR::synapse0x1b22640() {
   return (neuron0x1d5c6f0()*-1.01395);
}

double NNfunction_sb_uRcR::synapse0x1d61800() {
   return (neuron0x1d5ca30()*0.137672);
}

double NNfunction_sb_uRcR::synapse0x1d61b80() {
   return (neuron0x1d57de0()*0.0179427);
}

double NNfunction_sb_uRcR::synapse0x1d61bc0() {
   return (neuron0x1d58090()*-0.031609);
}

double NNfunction_sb_uRcR::synapse0x1d61c00() {
   return (neuron0x1d583d0()*-0.023549);
}

double NNfunction_sb_uRcR::synapse0x1d61c40() {
   return (neuron0x1d58710()*0.0411261);
}

double NNfunction_sb_uRcR::synapse0x1d61c80() {
   return (neuron0x1d58a50()*-0.0157779);
}

double NNfunction_sb_uRcR::synapse0x1d61cc0() {
   return (neuron0x1d58d90()*0.00371489);
}

double NNfunction_sb_uRcR::synapse0x1d61d00() {
   return (neuron0x1d590d0()*0.030679);
}

double NNfunction_sb_uRcR::synapse0x1d61d40() {
   return (neuron0x1d59410()*-0.00636474);
}

double NNfunction_sb_uRcR::synapse0x1d61d80() {
   return (neuron0x1d59750()*-0.0379542);
}

double NNfunction_sb_uRcR::synapse0x1d61dc0() {
   return (neuron0x1d59a90()*0.0195015);
}

double NNfunction_sb_uRcR::synapse0x1d61e00() {
   return (neuron0x1d59dd0()*0.0365945);
}

double NNfunction_sb_uRcR::synapse0x1d61e40() {
   return (neuron0x1d5a110()*0.0135003);
}

double NNfunction_sb_uRcR::synapse0x1d61e80() {
   return (neuron0x1d5a450()*0.00636762);
}

double NNfunction_sb_uRcR::synapse0x1d61ec0() {
   return (neuron0x1d5a790()*0.0119344);
}

double NNfunction_sb_uRcR::synapse0x1d61f00() {
   return (neuron0x1d5aad0()*-1.66879);
}

double NNfunction_sb_uRcR::synapse0x1d61f40() {
   return (neuron0x1d5ae10()*0.103615);
}

double NNfunction_sb_uRcR::synapse0x1d619d0() {
   return (neuron0x1d5b150()*-0.00585824);
}

double NNfunction_sb_uRcR::synapse0x1d61a10() {
   return (neuron0x1d5b6b0()*-0.00832332);
}

double NNfunction_sb_uRcR::synapse0x1d62090() {
   return (neuron0x1d5b9f0()*-0.0104101);
}

double NNfunction_sb_uRcR::synapse0x1d620d0() {
   return (neuron0x1d5bd30()*-0.0369839);
}

double NNfunction_sb_uRcR::synapse0x1d62110() {
   return (neuron0x1d5c070()*0.025598);
}

double NNfunction_sb_uRcR::synapse0x1d62150() {
   return (neuron0x1d5c3b0()*0.0179404);
}

double NNfunction_sb_uRcR::synapse0x1d62190() {
   return (neuron0x1d5c6f0()*0.0357959);
}

double NNfunction_sb_uRcR::synapse0x1d621d0() {
   return (neuron0x1d5ca30()*-0.0206031);
}

double NNfunction_sb_uRcR::synapse0x1d62550() {
   return (neuron0x1d57de0()*0.200663);
}

double NNfunction_sb_uRcR::synapse0x1d62590() {
   return (neuron0x1d58090()*0.39368);
}

double NNfunction_sb_uRcR::synapse0x1d625d0() {
   return (neuron0x1d583d0()*0.193316);
}

double NNfunction_sb_uRcR::synapse0x1d62610() {
   return (neuron0x1d58710()*0.0393174);
}

double NNfunction_sb_uRcR::synapse0x1d62650() {
   return (neuron0x1d58a50()*0.465194);
}

double NNfunction_sb_uRcR::synapse0x1d62690() {
   return (neuron0x1d58d90()*0.295014);
}

double NNfunction_sb_uRcR::synapse0x1d626d0() {
   return (neuron0x1d590d0()*-0.511418);
}

double NNfunction_sb_uRcR::synapse0x1d62710() {
   return (neuron0x1d59410()*-0.414081);
}

double NNfunction_sb_uRcR::synapse0x1d62750() {
   return (neuron0x1d59750()*-0.0473397);
}

double NNfunction_sb_uRcR::synapse0x1d62790() {
   return (neuron0x1d59a90()*0.211363);
}

double NNfunction_sb_uRcR::synapse0x1d627d0() {
   return (neuron0x1d59dd0()*-0.761232);
}

double NNfunction_sb_uRcR::synapse0x1d62810() {
   return (neuron0x1d5a110()*-1.2416);
}

double NNfunction_sb_uRcR::synapse0x1d62850() {
   return (neuron0x1d5a450()*0.129685);
}

double NNfunction_sb_uRcR::synapse0x1d62890() {
   return (neuron0x1d5a790()*-0.0698269);
}

double NNfunction_sb_uRcR::synapse0x1d628d0() {
   return (neuron0x1d5aad0()*0.0613814);
}

double NNfunction_sb_uRcR::synapse0x1d62910() {
   return (neuron0x1d5ae10()*0.946931);
}

double NNfunction_sb_uRcR::synapse0x1d623a0() {
   return (neuron0x1d5b150()*0.418295);
}

double NNfunction_sb_uRcR::synapse0x1d623e0() {
   return (neuron0x1d5b6b0()*-0.315833);
}

double NNfunction_sb_uRcR::synapse0x1d62a60() {
   return (neuron0x1d5b9f0()*-0.274139);
}

double NNfunction_sb_uRcR::synapse0x1d62aa0() {
   return (neuron0x1d5bd30()*0.245517);
}

double NNfunction_sb_uRcR::synapse0x1d62ae0() {
   return (neuron0x1d5c070()*0.344362);
}

double NNfunction_sb_uRcR::synapse0x1d62b20() {
   return (neuron0x1d5c3b0()*-0.0725224);
}

double NNfunction_sb_uRcR::synapse0x1d62b60() {
   return (neuron0x1d5c6f0()*0.387455);
}

double NNfunction_sb_uRcR::synapse0x1d62ba0() {
   return (neuron0x1d5ca30()*-0.210301);
}

double NNfunction_sb_uRcR::synapse0x1d5b5a0() {
   return (neuron0x1d57de0()*-0.150573);
}

double NNfunction_sb_uRcR::synapse0x1d5b5e0() {
   return (neuron0x1d58090()*0.0657234);
}

double NNfunction_sb_uRcR::synapse0x1d5b620() {
   return (neuron0x1d583d0()*0.96386);
}

double NNfunction_sb_uRcR::synapse0x1d5b660() {
   return (neuron0x1d58710()*0.321258);
}

double NNfunction_sb_uRcR::synapse0x1d63130() {
   return (neuron0x1d58a50()*0.232332);
}

double NNfunction_sb_uRcR::synapse0x1d63170() {
   return (neuron0x1d58d90()*-0.824827);
}

double NNfunction_sb_uRcR::synapse0x1d631b0() {
   return (neuron0x1d590d0()*-0.0783779);
}

double NNfunction_sb_uRcR::synapse0x1d631f0() {
   return (neuron0x1d59410()*-0.991465);
}

double NNfunction_sb_uRcR::synapse0x1d63230() {
   return (neuron0x1d59750()*0.504295);
}

double NNfunction_sb_uRcR::synapse0x1d63270() {
   return (neuron0x1d59a90()*-0.598831);
}

double NNfunction_sb_uRcR::synapse0x1d632b0() {
   return (neuron0x1d59dd0()*0.175442);
}

double NNfunction_sb_uRcR::synapse0x1d632f0() {
   return (neuron0x1d5a110()*-0.370042);
}

double NNfunction_sb_uRcR::synapse0x1d63330() {
   return (neuron0x1d5a450()*-0.326104);
}

double NNfunction_sb_uRcR::synapse0x1d63370() {
   return (neuron0x1d5a790()*-0.403911);
}

double NNfunction_sb_uRcR::synapse0x1d633b0() {
   return (neuron0x1d5aad0()*-0.872954);
}

double NNfunction_sb_uRcR::synapse0x1d633f0() {
   return (neuron0x1d5ae10()*-0.173765);
}

double NNfunction_sb_uRcR::synapse0x1d62d70() {
   return (neuron0x1d5b150()*-0.465205);
}

double NNfunction_sb_uRcR::synapse0x1d62db0() {
   return (neuron0x1d5b6b0()*-0.429108);
}

double NNfunction_sb_uRcR::synapse0x1d63540() {
   return (neuron0x1d5b9f0()*0.710814);
}

double NNfunction_sb_uRcR::synapse0x1d63580() {
   return (neuron0x1d5bd30()*-0.116514);
}

double NNfunction_sb_uRcR::synapse0x1d635c0() {
   return (neuron0x1d5c070()*0.682664);
}

double NNfunction_sb_uRcR::synapse0x1d63600() {
   return (neuron0x1d5c3b0()*0.140672);
}

double NNfunction_sb_uRcR::synapse0x1d63640() {
   return (neuron0x1d5c6f0()*-0.491383);
}

double NNfunction_sb_uRcR::synapse0x1d63680() {
   return (neuron0x1d5ca30()*-0.0765918);
}

double NNfunction_sb_uRcR::synapse0x1d63a00() {
   return (neuron0x1d57de0()*-0.0340503);
}

double NNfunction_sb_uRcR::synapse0x1d63a40() {
   return (neuron0x1d58090()*-0.119186);
}

double NNfunction_sb_uRcR::synapse0x1d63a80() {
   return (neuron0x1d583d0()*-0.0142608);
}

double NNfunction_sb_uRcR::synapse0x1d63ac0() {
   return (neuron0x1d58710()*-0.0727531);
}

double NNfunction_sb_uRcR::synapse0x1d63b00() {
   return (neuron0x1d58a50()*-0.0230391);
}

double NNfunction_sb_uRcR::synapse0x1d63b40() {
   return (neuron0x1d58d90()*0.0244284);
}

double NNfunction_sb_uRcR::synapse0x1d63b80() {
   return (neuron0x1d590d0()*-0.000931174);
}

double NNfunction_sb_uRcR::synapse0x1d63bc0() {
   return (neuron0x1d59410()*0.00859201);
}

double NNfunction_sb_uRcR::synapse0x1d63c00() {
   return (neuron0x1d59750()*-0.0256834);
}

double NNfunction_sb_uRcR::synapse0x1d63c40() {
   return (neuron0x1d59a90()*-0.0681172);
}

double NNfunction_sb_uRcR::synapse0x1d63c80() {
   return (neuron0x1d59dd0()*-0.0422124);
}

double NNfunction_sb_uRcR::synapse0x1d63cc0() {
   return (neuron0x1d5a110()*0.422828);
}

double NNfunction_sb_uRcR::synapse0x1d63d00() {
   return (neuron0x1d5a450()*0.461437);
}

double NNfunction_sb_uRcR::synapse0x1d63d40() {
   return (neuron0x1d5a790()*-0.0431263);
}

double NNfunction_sb_uRcR::synapse0x1d63d80() {
   return (neuron0x1d5aad0()*-0.0448225);
}

double NNfunction_sb_uRcR::synapse0x1d63dc0() {
   return (neuron0x1d5ae10()*-0.0315792);
}

double NNfunction_sb_uRcR::synapse0x1d63850() {
   return (neuron0x1d5b150()*-0.0119448);
}

double NNfunction_sb_uRcR::synapse0x1d63890() {
   return (neuron0x1d5b6b0()*0.236666);
}

double NNfunction_sb_uRcR::synapse0x1d63f10() {
   return (neuron0x1d5b9f0()*0.253642);
}

double NNfunction_sb_uRcR::synapse0x1d63f50() {
   return (neuron0x1d5bd30()*0.00835987);
}

double NNfunction_sb_uRcR::synapse0x1d63f90() {
   return (neuron0x1d5c070()*-0.0192313);
}

double NNfunction_sb_uRcR::synapse0x1d63fd0() {
   return (neuron0x1d5c3b0()*-0.0252996);
}

double NNfunction_sb_uRcR::synapse0x1d64010() {
   return (neuron0x1d5c6f0()*0.000441948);
}

double NNfunction_sb_uRcR::synapse0x1d64050() {
   return (neuron0x1d5ca30()*-0.0339458);
}

double NNfunction_sb_uRcR::synapse0x1d643d0() {
   return (neuron0x1d57de0()*-0.262814);
}

double NNfunction_sb_uRcR::synapse0x1d64410() {
   return (neuron0x1d58090()*0.0696582);
}

double NNfunction_sb_uRcR::synapse0x1d64450() {
   return (neuron0x1d583d0()*0.338037);
}

double NNfunction_sb_uRcR::synapse0x1d64490() {
   return (neuron0x1d58710()*-0.503572);
}

double NNfunction_sb_uRcR::synapse0x1d644d0() {
   return (neuron0x1d58a50()*0.746049);
}

double NNfunction_sb_uRcR::synapse0x1d64510() {
   return (neuron0x1d58d90()*-0.300367);
}

double NNfunction_sb_uRcR::synapse0x1d64550() {
   return (neuron0x1d590d0()*0.1749);
}

double NNfunction_sb_uRcR::synapse0x1d64590() {
   return (neuron0x1d59410()*1.00601);
}

double NNfunction_sb_uRcR::synapse0x1d645d0() {
   return (neuron0x1d59750()*-0.177122);
}

double NNfunction_sb_uRcR::synapse0x1d64610() {
   return (neuron0x1d59a90()*0.716099);
}

double NNfunction_sb_uRcR::synapse0x1d64650() {
   return (neuron0x1d59dd0()*-0.0571645);
}

double NNfunction_sb_uRcR::synapse0x1d64690() {
   return (neuron0x1d5a110()*0.118994);
}

double NNfunction_sb_uRcR::synapse0x1d646d0() {
   return (neuron0x1d5a450()*0.797169);
}

double NNfunction_sb_uRcR::synapse0x1d64710() {
   return (neuron0x1d5a790()*0.690279);
}

double NNfunction_sb_uRcR::synapse0x1d64750() {
   return (neuron0x1d5aad0()*1.02445);
}

double NNfunction_sb_uRcR::synapse0x1d64790() {
   return (neuron0x1d5ae10()*0.0367334);
}

double NNfunction_sb_uRcR::synapse0x1d64220() {
   return (neuron0x1d5b150()*-0.300858);
}

double NNfunction_sb_uRcR::synapse0x1d64260() {
   return (neuron0x1d5b6b0()*0.958542);
}

double NNfunction_sb_uRcR::synapse0x1d60ff0() {
   return (neuron0x1d5b9f0()*-0.493211);
}

double NNfunction_sb_uRcR::synapse0x1d61030() {
   return (neuron0x1d5bd30()*-0.0459758);
}

double NNfunction_sb_uRcR::synapse0x1d61070() {
   return (neuron0x1d5c070()*0.213643);
}

double NNfunction_sb_uRcR::synapse0x1d610b0() {
   return (neuron0x1d5c3b0()*-0.421701);
}

double NNfunction_sb_uRcR::synapse0x1d610f0() {
   return (neuron0x1d5c6f0()*0.332982);
}

double NNfunction_sb_uRcR::synapse0x1d61130() {
   return (neuron0x1d5ca30()*0.479473);
}

double NNfunction_sb_uRcR::synapse0x1d614b0() {
   return (neuron0x1d57de0()*0.222065);
}

double NNfunction_sb_uRcR::synapse0x1d614f0() {
   return (neuron0x1d58090()*0.382228);
}

double NNfunction_sb_uRcR::synapse0x1d61530() {
   return (neuron0x1d583d0()*0.304229);
}

double NNfunction_sb_uRcR::synapse0x1d61570() {
   return (neuron0x1d58710()*-0.68606);
}

double NNfunction_sb_uRcR::synapse0x1d615b0() {
   return (neuron0x1d58a50()*-0.515736);
}

double NNfunction_sb_uRcR::synapse0x1d615f0() {
   return (neuron0x1d58d90()*-1.04093);
}

double NNfunction_sb_uRcR::synapse0x1d61630() {
   return (neuron0x1d590d0()*-0.137758);
}

double NNfunction_sb_uRcR::synapse0x1d61670() {
   return (neuron0x1d59410()*-0.482128);
}

double NNfunction_sb_uRcR::synapse0x1d616b0() {
   return (neuron0x1d59750()*-0.736856);
}

double NNfunction_sb_uRcR::synapse0x1d616f0() {
   return (neuron0x1d59a90()*-0.0304068);
}

double NNfunction_sb_uRcR::synapse0x1d61730() {
   return (neuron0x1d59dd0()*-0.704054);
}

double NNfunction_sb_uRcR::synapse0x1d61770() {
   return (neuron0x1d5a110()*-0.0868367);
}

double NNfunction_sb_uRcR::synapse0x1d617b0() {
   return (neuron0x1d5a450()*0.263903);
}

double NNfunction_sb_uRcR::synapse0x1d658f0() {
   return (neuron0x1d5a790()*0.324218);
}

double NNfunction_sb_uRcR::synapse0x1d65930() {
   return (neuron0x1d5aad0()*-0.0564222);
}

double NNfunction_sb_uRcR::synapse0x1d65970() {
   return (neuron0x1d5ae10()*-0.613859);
}

double NNfunction_sb_uRcR::synapse0x1d61300() {
   return (neuron0x1d5b150()*-0.640796);
}

double NNfunction_sb_uRcR::synapse0x1d61340() {
   return (neuron0x1d5b6b0()*-0.860265);
}

double NNfunction_sb_uRcR::synapse0x1d65ac0() {
   return (neuron0x1d5b9f0()*0.0675233);
}

double NNfunction_sb_uRcR::synapse0x1d65b00() {
   return (neuron0x1d5bd30()*-0.233895);
}

double NNfunction_sb_uRcR::synapse0x1d65b40() {
   return (neuron0x1d5c070()*0.0336208);
}

double NNfunction_sb_uRcR::synapse0x1d65b80() {
   return (neuron0x1d5c3b0()*0.769935);
}

double NNfunction_sb_uRcR::synapse0x1d65bc0() {
   return (neuron0x1d5c6f0()*-0.511404);
}

double NNfunction_sb_uRcR::synapse0x1d65c00() {
   return (neuron0x1d5ca30()*-0.477043);
}

double NNfunction_sb_uRcR::synapse0x1d65f80() {
   return (neuron0x1d57de0()*-0.070527);
}

double NNfunction_sb_uRcR::synapse0x1d65fc0() {
   return (neuron0x1d58090()*0.481284);
}

double NNfunction_sb_uRcR::synapse0x1d66000() {
   return (neuron0x1d583d0()*-1.0103);
}

double NNfunction_sb_uRcR::synapse0x1d66040() {
   return (neuron0x1d58710()*-0.00172732);
}

double NNfunction_sb_uRcR::synapse0x1d66080() {
   return (neuron0x1d58a50()*-0.771598);
}

double NNfunction_sb_uRcR::synapse0x1d660c0() {
   return (neuron0x1d58d90()*-0.217032);
}

double NNfunction_sb_uRcR::synapse0x1d66100() {
   return (neuron0x1d590d0()*-0.363867);
}

double NNfunction_sb_uRcR::synapse0x1d66140() {
   return (neuron0x1d59410()*-0.418554);
}

double NNfunction_sb_uRcR::synapse0x1d66180() {
   return (neuron0x1d59750()*-0.607477);
}

double NNfunction_sb_uRcR::synapse0x1d661c0() {
   return (neuron0x1d59a90()*-0.208107);
}

double NNfunction_sb_uRcR::synapse0x1d66200() {
   return (neuron0x1d59dd0()*0.382832);
}

double NNfunction_sb_uRcR::synapse0x1d66240() {
   return (neuron0x1d5a110()*0.930773);
}

double NNfunction_sb_uRcR::synapse0x1d66280() {
   return (neuron0x1d5a450()*0.33814);
}

double NNfunction_sb_uRcR::synapse0x1d662c0() {
   return (neuron0x1d5a790()*0.150595);
}

double NNfunction_sb_uRcR::synapse0x1d66300() {
   return (neuron0x1d5aad0()*-0.984645);
}

double NNfunction_sb_uRcR::synapse0x1d66340() {
   return (neuron0x1d5ae10()*-1.07221);
}

double NNfunction_sb_uRcR::synapse0x1d65dd0() {
   return (neuron0x1d5b150()*-0.667703);
}

double NNfunction_sb_uRcR::synapse0x1d65e10() {
   return (neuron0x1d5b6b0()*-0.0268965);
}

double NNfunction_sb_uRcR::synapse0x1d66490() {
   return (neuron0x1d5b9f0()*-0.336293);
}

double NNfunction_sb_uRcR::synapse0x1d664d0() {
   return (neuron0x1d5bd30()*0.961781);
}

double NNfunction_sb_uRcR::synapse0x1d66510() {
   return (neuron0x1d5c070()*0.385686);
}

double NNfunction_sb_uRcR::synapse0x1d66550() {
   return (neuron0x1d5c3b0()*-0.0723375);
}

double NNfunction_sb_uRcR::synapse0x1d66590() {
   return (neuron0x1d5c6f0()*0.366828);
}

double NNfunction_sb_uRcR::synapse0x1d665d0() {
   return (neuron0x1d5ca30()*-0.111514);
}

double NNfunction_sb_uRcR::synapse0x1d66950() {
   return (neuron0x1d57de0()*-0.280705);
}

double NNfunction_sb_uRcR::synapse0x1d66990() {
   return (neuron0x1d58090()*-0.548555);
}

double NNfunction_sb_uRcR::synapse0x1d669d0() {
   return (neuron0x1d583d0()*0.0407365);
}

double NNfunction_sb_uRcR::synapse0x1d66a10() {
   return (neuron0x1d58710()*-0.359899);
}

double NNfunction_sb_uRcR::synapse0x1d66a50() {
   return (neuron0x1d58a50()*0.0352936);
}

double NNfunction_sb_uRcR::synapse0x1d66a90() {
   return (neuron0x1d58d90()*0.0285354);
}

double NNfunction_sb_uRcR::synapse0x1d66ad0() {
   return (neuron0x1d590d0()*-0.100486);
}

double NNfunction_sb_uRcR::synapse0x1d66b10() {
   return (neuron0x1d59410()*-0.0934364);
}

double NNfunction_sb_uRcR::synapse0x1d66b50() {
   return (neuron0x1d59750()*-0.0885619);
}

double NNfunction_sb_uRcR::synapse0x1d66b90() {
   return (neuron0x1d59a90()*-0.0758205);
}

double NNfunction_sb_uRcR::synapse0x1d66bd0() {
   return (neuron0x1d59dd0()*0.248507);
}

double NNfunction_sb_uRcR::synapse0x1d66c10() {
   return (neuron0x1d5a110()*0.184261);
}

double NNfunction_sb_uRcR::synapse0x1d66c50() {
   return (neuron0x1d5a450()*0.0894801);
}

double NNfunction_sb_uRcR::synapse0x1d66c90() {
   return (neuron0x1d5a790()*-0.122385);
}

double NNfunction_sb_uRcR::synapse0x1d66cd0() {
   return (neuron0x1d5aad0()*-0.0984618);
}

double NNfunction_sb_uRcR::synapse0x1d66d10() {
   return (neuron0x1d5ae10()*0.0464212);
}

double NNfunction_sb_uRcR::synapse0x1d667a0() {
   return (neuron0x1d5b150()*-0.221793);
}

double NNfunction_sb_uRcR::synapse0x1d667e0() {
   return (neuron0x1d5b6b0()*-0.102319);
}

double NNfunction_sb_uRcR::synapse0x1d66e60() {
   return (neuron0x1d5b9f0()*-0.192331);
}

double NNfunction_sb_uRcR::synapse0x1d66ea0() {
   return (neuron0x1d5bd30()*-0.119018);
}

double NNfunction_sb_uRcR::synapse0x1d66ee0() {
   return (neuron0x1d5c070()*0.055476);
}

double NNfunction_sb_uRcR::synapse0x1d66f20() {
   return (neuron0x1d5c3b0()*-0.0767201);
}

double NNfunction_sb_uRcR::synapse0x1d66f60() {
   return (neuron0x1d5c6f0()*0.273737);
}

double NNfunction_sb_uRcR::synapse0x1d66fa0() {
   return (neuron0x1d5ca30()*0.157748);
}

double NNfunction_sb_uRcR::synapse0x1d67320() {
   return (neuron0x1d57de0()*0.0692637);
}

double NNfunction_sb_uRcR::synapse0x1d67360() {
   return (neuron0x1d58090()*0.0627449);
}

double NNfunction_sb_uRcR::synapse0x1d673a0() {
   return (neuron0x1d583d0()*0.355935);
}

double NNfunction_sb_uRcR::synapse0x1d673e0() {
   return (neuron0x1d58710()*-0.315742);
}

double NNfunction_sb_uRcR::synapse0x1d67420() {
   return (neuron0x1d58a50()*-0.516568);
}

double NNfunction_sb_uRcR::synapse0x1d67460() {
   return (neuron0x1d58d90()*-0.303503);
}

double NNfunction_sb_uRcR::synapse0x1d674a0() {
   return (neuron0x1d590d0()*0.149259);
}

double NNfunction_sb_uRcR::synapse0x1d674e0() {
   return (neuron0x1d59410()*-0.408788);
}

double NNfunction_sb_uRcR::synapse0x1d67520() {
   return (neuron0x1d59750()*0.315489);
}

double NNfunction_sb_uRcR::synapse0x1d67560() {
   return (neuron0x1d59a90()*-0.849591);
}

double NNfunction_sb_uRcR::synapse0x1d675a0() {
   return (neuron0x1d59dd0()*-0.185226);
}

double NNfunction_sb_uRcR::synapse0x1d675e0() {
   return (neuron0x1d5a110()*0.636588);
}

double NNfunction_sb_uRcR::synapse0x1d67620() {
   return (neuron0x1d5a450()*-0.464998);
}

double NNfunction_sb_uRcR::synapse0x1d67660() {
   return (neuron0x1d5a790()*0.0542538);
}

double NNfunction_sb_uRcR::synapse0x1d676a0() {
   return (neuron0x1d5aad0()*-0.869379);
}

double NNfunction_sb_uRcR::synapse0x1d676e0() {
   return (neuron0x1d5ae10()*-0.180032);
}

double NNfunction_sb_uRcR::synapse0x1d67170() {
   return (neuron0x1d5b150()*-0.210303);
}

double NNfunction_sb_uRcR::synapse0x1d671b0() {
   return (neuron0x1d5b6b0()*-0.706903);
}

double NNfunction_sb_uRcR::synapse0x1d67830() {
   return (neuron0x1d5b9f0()*0.540339);
}

double NNfunction_sb_uRcR::synapse0x1d67870() {
   return (neuron0x1d5bd30()*0.210435);
}

double NNfunction_sb_uRcR::synapse0x1d678b0() {
   return (neuron0x1d5c070()*0.0540302);
}

double NNfunction_sb_uRcR::synapse0x1d678f0() {
   return (neuron0x1d5c3b0()*-0.15188);
}

double NNfunction_sb_uRcR::synapse0x1d67930() {
   return (neuron0x1d5c6f0()*-0.145088);
}

double NNfunction_sb_uRcR::synapse0x1d67970() {
   return (neuron0x1d5ca30()*-0.312707);
}

double NNfunction_sb_uRcR::synapse0x1d67cf0() {
   return (neuron0x1d57de0()*0.528101);
}

double NNfunction_sb_uRcR::synapse0x1d57f70() {
   return (neuron0x1d58090()*0.322875);
}

double NNfunction_sb_uRcR::synapse0x1d57fb0() {
   return (neuron0x1d583d0()*-0.359116);
}

double NNfunction_sb_uRcR::synapse0x1d582b0() {
   return (neuron0x1d58710()*0.306653);
}

double NNfunction_sb_uRcR::synapse0x1d582f0() {
   return (neuron0x1d58a50()*-0.245031);
}

double NNfunction_sb_uRcR::synapse0x1d585f0() {
   return (neuron0x1d58d90()*-0.00353081);
}

double NNfunction_sb_uRcR::synapse0x1d58630() {
   return (neuron0x1d590d0()*-0.794701);
}

double NNfunction_sb_uRcR::synapse0x1d58930() {
   return (neuron0x1d59410()*-0.233905);
}

double NNfunction_sb_uRcR::synapse0x1d58970() {
   return (neuron0x1d59750()*0.247347);
}

double NNfunction_sb_uRcR::synapse0x1d58c70() {
   return (neuron0x1d59a90()*0.0451048);
}

double NNfunction_sb_uRcR::synapse0x1d58cb0() {
   return (neuron0x1d59dd0()*-0.555636);
}

double NNfunction_sb_uRcR::synapse0x1d58fb0() {
   return (neuron0x1d5a110()*0.59505);
}

double NNfunction_sb_uRcR::synapse0x1d58ff0() {
   return (neuron0x1d5a450()*-0.316388);
}

double NNfunction_sb_uRcR::synapse0x1d592f0() {
   return (neuron0x1d5a790()*1.23249);
}

double NNfunction_sb_uRcR::synapse0x1d59330() {
   return (neuron0x1d5aad0()*-0.253155);
}

double NNfunction_sb_uRcR::synapse0x1d59630() {
   return (neuron0x1d5ae10()*0.300788);
}

double NNfunction_sb_uRcR::synapse0x1d59670() {
   return (neuron0x1d5b150()*0.222901);
}

double NNfunction_sb_uRcR::synapse0x1d59970() {
   return (neuron0x1d5b6b0()*-0.688398);
}

double NNfunction_sb_uRcR::synapse0x1d599b0() {
   return (neuron0x1d5b9f0()*0.473462);
}

double NNfunction_sb_uRcR::synapse0x1d59cb0() {
   return (neuron0x1d5bd30()*-0.138903);
}

double NNfunction_sb_uRcR::synapse0x1d59cf0() {
   return (neuron0x1d5c070()*-0.304186);
}

double NNfunction_sb_uRcR::synapse0x1d59ff0() {
   return (neuron0x1d5c3b0()*-0.933965);
}

double NNfunction_sb_uRcR::synapse0x1d5a030() {
   return (neuron0x1d5c6f0()*0.676209);
}

double NNfunction_sb_uRcR::synapse0x1d5a330() {
   return (neuron0x1d5ca30()*-0.0057337);
}

double NNfunction_sb_uRcR::synapse0x1d5a370() {
   return (neuron0x1d57de0()*-0.00105661);
}

double NNfunction_sb_uRcR::synapse0x1d5b030() {
   return (neuron0x1d58090()*-0.0231852);
}

double NNfunction_sb_uRcR::synapse0x1d5b070() {
   return (neuron0x1d583d0()*0.00151537);
}

double NNfunction_sb_uRcR::synapse0x1d67b40() {
   return (neuron0x1d58710()*2.57283);
}

double NNfunction_sb_uRcR::synapse0x1d67b80() {
   return (neuron0x1d58a50()*0.0206166);
}

double NNfunction_sb_uRcR::synapse0x1d5b370() {
   return (neuron0x1d58d90()*0.00915126);
}

double NNfunction_sb_uRcR::synapse0x1d5b3b0() {
   return (neuron0x1d590d0()*0.00890319);
}

double NNfunction_sb_uRcR::synapse0x1d5b8d0() {
   return (neuron0x1d59410()*0.0124249);
}

double NNfunction_sb_uRcR::synapse0x1d5b910() {
   return (neuron0x1d59750()*-0.059952);
}

double NNfunction_sb_uRcR::synapse0x1d5bc10() {
   return (neuron0x1d59a90()*-0.0349533);
}

double NNfunction_sb_uRcR::synapse0x1d5bc50() {
   return (neuron0x1d59dd0()*0.000595458);
}

double NNfunction_sb_uRcR::synapse0x1d5bf50() {
   return (neuron0x1d5a110()*-0.0327365);
}

double NNfunction_sb_uRcR::synapse0x1d5bf90() {
   return (neuron0x1d5a450()*-0.0172562);
}

double NNfunction_sb_uRcR::synapse0x1d5c290() {
   return (neuron0x1d5a790()*-0.0124419);
}

double NNfunction_sb_uRcR::synapse0x1d5c2d0() {
   return (neuron0x1d5aad0()*0.255319);
}

double NNfunction_sb_uRcR::synapse0x1d5c5d0() {
   return (neuron0x1d5ae10()*0.324888);
}

double NNfunction_sb_uRcR::synapse0x1d5c610() {
   return (neuron0x1d5b150()*-0.0155864);
}

double NNfunction_sb_uRcR::synapse0x1d5c910() {
   return (neuron0x1d5b6b0()*-0.0489166);
}

double NNfunction_sb_uRcR::synapse0x1d5c950() {
   return (neuron0x1d5b9f0()*-0.0313684);
}

double NNfunction_sb_uRcR::synapse0x1d5cc50() {
   return (neuron0x1d5bd30()*0.0144931);
}

double NNfunction_sb_uRcR::synapse0x1d5cc90() {
   return (neuron0x1d5c070()*0.0308647);
}

double NNfunction_sb_uRcR::synapse0x1d5a670() {
   return (neuron0x1d5c3b0()*0.000925036);
}

double NNfunction_sb_uRcR::synapse0x1d5a6b0() {
   return (neuron0x1d5c6f0()*-0.00927764);
}

double NNfunction_sb_uRcR::synapse0x1d69a60() {
   return (neuron0x1d5ca30()*-0.0243517);
}

double NNfunction_sb_uRcR::synapse0x1d69de0() {
   return (neuron0x1d57de0()*0.14796);
}

double NNfunction_sb_uRcR::synapse0x1d69e20() {
   return (neuron0x1d58090()*0.228447);
}

double NNfunction_sb_uRcR::synapse0x1d69e60() {
   return (neuron0x1d583d0()*-0.0729947);
}

double NNfunction_sb_uRcR::synapse0x1d69ea0() {
   return (neuron0x1d58710()*-0.271523);
}

double NNfunction_sb_uRcR::synapse0x1d69ee0() {
   return (neuron0x1d58a50()*0.225481);
}

double NNfunction_sb_uRcR::synapse0x1d69f20() {
   return (neuron0x1d58d90()*0.168994);
}

double NNfunction_sb_uRcR::synapse0x1d69f60() {
   return (neuron0x1d590d0()*0.197299);
}

double NNfunction_sb_uRcR::synapse0x1d69fa0() {
   return (neuron0x1d59410()*0.0355788);
}

double NNfunction_sb_uRcR::synapse0x1d69fe0() {
   return (neuron0x1d59750()*0.000312623);
}

double NNfunction_sb_uRcR::synapse0x1d6a020() {
   return (neuron0x1d59a90()*-0.024325);
}

double NNfunction_sb_uRcR::synapse0x1d6a060() {
   return (neuron0x1d59dd0()*0.226801);
}

double NNfunction_sb_uRcR::synapse0x1d6a0a0() {
   return (neuron0x1d5a110()*-0.0940486);
}

double NNfunction_sb_uRcR::synapse0x1d6a0e0() {
   return (neuron0x1d5a450()*0.112826);
}

double NNfunction_sb_uRcR::synapse0x1d6a120() {
   return (neuron0x1d5a790()*-0.0345706);
}

double NNfunction_sb_uRcR::synapse0x1d6a160() {
   return (neuron0x1d5aad0()*-0.0094018);
}

double NNfunction_sb_uRcR::synapse0x1d6a1a0() {
   return (neuron0x1d5ae10()*0.0951896);
}

double NNfunction_sb_uRcR::synapse0x1d69c30() {
   return (neuron0x1d5b150()*0.0196492);
}

double NNfunction_sb_uRcR::synapse0x1d69c70() {
   return (neuron0x1d5b6b0()*-0.0467402);
}

double NNfunction_sb_uRcR::synapse0x1d6a2f0() {
   return (neuron0x1d5b9f0()*0.0944537);
}

double NNfunction_sb_uRcR::synapse0x1d6a330() {
   return (neuron0x1d5bd30()*0.00201942);
}

double NNfunction_sb_uRcR::synapse0x1d6a370() {
   return (neuron0x1d5c070()*-0.00590343);
}

double NNfunction_sb_uRcR::synapse0x1d6a3b0() {
   return (neuron0x1d5c3b0()*-0.141474);
}

double NNfunction_sb_uRcR::synapse0x1d6a3f0() {
   return (neuron0x1d5c6f0()*0.0420697);
}

double NNfunction_sb_uRcR::synapse0x1d6a430() {
   return (neuron0x1d5ca30()*-0.213183);
}

double NNfunction_sb_uRcR::synapse0x1d6a7b0() {
   return (neuron0x1d57de0()*-0.0836013);
}

double NNfunction_sb_uRcR::synapse0x1d6a7f0() {
   return (neuron0x1d58090()*-1.04314);
}

double NNfunction_sb_uRcR::synapse0x1d6a830() {
   return (neuron0x1d583d0()*0.871269);
}

double NNfunction_sb_uRcR::synapse0x1d6a870() {
   return (neuron0x1d58710()*0.588274);
}

double NNfunction_sb_uRcR::synapse0x1d6a8b0() {
   return (neuron0x1d58a50()*-0.200763);
}

double NNfunction_sb_uRcR::synapse0x1d6a8f0() {
   return (neuron0x1d58d90()*0.0118847);
}

double NNfunction_sb_uRcR::synapse0x1d6a930() {
   return (neuron0x1d590d0()*0.023806);
}

double NNfunction_sb_uRcR::synapse0x1d6a970() {
   return (neuron0x1d59410()*-0.337185);
}

double NNfunction_sb_uRcR::synapse0x1d6a9b0() {
   return (neuron0x1d59750()*0.118623);
}

double NNfunction_sb_uRcR::synapse0x1d6a9f0() {
   return (neuron0x1d59a90()*0.731439);
}

double NNfunction_sb_uRcR::synapse0x1d6aa30() {
   return (neuron0x1d59dd0()*-0.182721);
}

double NNfunction_sb_uRcR::synapse0x1d6aa70() {
   return (neuron0x1d5a110()*0.487498);
}

double NNfunction_sb_uRcR::synapse0x1d6aab0() {
   return (neuron0x1d5a450()*0.0909253);
}

double NNfunction_sb_uRcR::synapse0x1d6aaf0() {
   return (neuron0x1d5a790()*1.3207);
}

double NNfunction_sb_uRcR::synapse0x1d6ab30() {
   return (neuron0x1d5aad0()*-0.335583);
}

double NNfunction_sb_uRcR::synapse0x1d6ab70() {
   return (neuron0x1d5ae10()*-1.08408);
}

double NNfunction_sb_uRcR::synapse0x1d6a600() {
   return (neuron0x1d5b150()*-0.329578);
}

double NNfunction_sb_uRcR::synapse0x1d6a640() {
   return (neuron0x1d5b6b0()*0.306825);
}

double NNfunction_sb_uRcR::synapse0x1d6acc0() {
   return (neuron0x1d5b9f0()*-0.0210446);
}

double NNfunction_sb_uRcR::synapse0x1d6ad00() {
   return (neuron0x1d5bd30()*0.513722);
}

double NNfunction_sb_uRcR::synapse0x1d6ad40() {
   return (neuron0x1d5c070()*-0.733115);
}

double NNfunction_sb_uRcR::synapse0x1d6ad80() {
   return (neuron0x1d5c3b0()*-0.403163);
}

double NNfunction_sb_uRcR::synapse0x1d6adc0() {
   return (neuron0x1d5c6f0()*0.208622);
}

double NNfunction_sb_uRcR::synapse0x1d6ae00() {
   return (neuron0x1d5ca30()*-0.214252);
}

double NNfunction_sb_uRcR::synapse0x1d6b180() {
   return (neuron0x1d57de0()*0.909662);
}

double NNfunction_sb_uRcR::synapse0x1d6b1c0() {
   return (neuron0x1d58090()*0.113355);
}

double NNfunction_sb_uRcR::synapse0x1d6b200() {
   return (neuron0x1d583d0()*0.177452);
}

double NNfunction_sb_uRcR::synapse0x1d6b240() {
   return (neuron0x1d58710()*1.00267);
}

double NNfunction_sb_uRcR::synapse0x1d6b280() {
   return (neuron0x1d58a50()*0.187592);
}

double NNfunction_sb_uRcR::synapse0x1d6b2c0() {
   return (neuron0x1d58d90()*-0.368961);
}

double NNfunction_sb_uRcR::synapse0x1d6b300() {
   return (neuron0x1d590d0()*0.0992545);
}

double NNfunction_sb_uRcR::synapse0x1d6b340() {
   return (neuron0x1d59410()*0.493461);
}

double NNfunction_sb_uRcR::synapse0x1d6b380() {
   return (neuron0x1d59750()*-0.130729);
}

double NNfunction_sb_uRcR::synapse0x1d6b3c0() {
   return (neuron0x1d59a90()*0.00716569);
}

double NNfunction_sb_uRcR::synapse0x1d6b400() {
   return (neuron0x1d59dd0()*0.876467);
}

double NNfunction_sb_uRcR::synapse0x1d6b440() {
   return (neuron0x1d5a110()*0.156332);
}

double NNfunction_sb_uRcR::synapse0x1d6b480() {
   return (neuron0x1d5a450()*0.521897);
}

double NNfunction_sb_uRcR::synapse0x1d6b4c0() {
   return (neuron0x1d5a790()*-0.118055);
}

double NNfunction_sb_uRcR::synapse0x1d6b500() {
   return (neuron0x1d5aad0()*-0.000460756);
}

double NNfunction_sb_uRcR::synapse0x1d6b540() {
   return (neuron0x1d5ae10()*-0.206003);
}

double NNfunction_sb_uRcR::synapse0x1d6afd0() {
   return (neuron0x1d5b150()*0.151709);
}

double NNfunction_sb_uRcR::synapse0x1d6b010() {
   return (neuron0x1d5b6b0()*0.0159827);
}

double NNfunction_sb_uRcR::synapse0x1d6b690() {
   return (neuron0x1d5b9f0()*0.184984);
}

double NNfunction_sb_uRcR::synapse0x1d6b6d0() {
   return (neuron0x1d5bd30()*-0.429989);
}

double NNfunction_sb_uRcR::synapse0x1d6b710() {
   return (neuron0x1d5c070()*-0.120778);
}

double NNfunction_sb_uRcR::synapse0x1d6b750() {
   return (neuron0x1d5c3b0()*0.228443);
}

double NNfunction_sb_uRcR::synapse0x1d6b790() {
   return (neuron0x1d5c6f0()*-0.301945);
}

double NNfunction_sb_uRcR::synapse0x1d6b7d0() {
   return (neuron0x1d5ca30()*-0.40219);
}

double NNfunction_sb_uRcR::synapse0x1d6bb50() {
   return (neuron0x1d57de0()*0.250307);
}

double NNfunction_sb_uRcR::synapse0x1d6bb90() {
   return (neuron0x1d58090()*-0.114924);
}

double NNfunction_sb_uRcR::synapse0x1d6bbd0() {
   return (neuron0x1d583d0()*-0.111245);
}

double NNfunction_sb_uRcR::synapse0x1d6bc10() {
   return (neuron0x1d58710()*0.5806);
}

double NNfunction_sb_uRcR::synapse0x1d6bc50() {
   return (neuron0x1d58a50()*-0.133645);
}

double NNfunction_sb_uRcR::synapse0x1d6bc90() {
   return (neuron0x1d58d90()*0.044409);
}

double NNfunction_sb_uRcR::synapse0x1d6bcd0() {
   return (neuron0x1d590d0()*-0.0232243);
}

double NNfunction_sb_uRcR::synapse0x1d6bd10() {
   return (neuron0x1d59410()*-0.182523);
}

double NNfunction_sb_uRcR::synapse0x1d6bd50() {
   return (neuron0x1d59750()*0.22225);
}

double NNfunction_sb_uRcR::synapse0x1d6bd90() {
   return (neuron0x1d59a90()*1.37025);
}

double NNfunction_sb_uRcR::synapse0x1d6bdd0() {
   return (neuron0x1d59dd0()*0.104022);
}

double NNfunction_sb_uRcR::synapse0x1d6be10() {
   return (neuron0x1d5a110()*0.103192);
}

double NNfunction_sb_uRcR::synapse0x1d6be50() {
   return (neuron0x1d5a450()*0.866508);
}

double NNfunction_sb_uRcR::synapse0x1d6be90() {
   return (neuron0x1d5a790()*-0.112957);
}

double NNfunction_sb_uRcR::synapse0x1d6bed0() {
   return (neuron0x1d5aad0()*-0.963168);
}

double NNfunction_sb_uRcR::synapse0x1d6bf10() {
   return (neuron0x1d5ae10()*-0.279767);
}

double NNfunction_sb_uRcR::synapse0x1d6b9a0() {
   return (neuron0x1d5b150()*-0.0516504);
}

double NNfunction_sb_uRcR::synapse0x1d6b9e0() {
   return (neuron0x1d5b6b0()*-0.228098);
}

double NNfunction_sb_uRcR::synapse0x1d6c060() {
   return (neuron0x1d5b9f0()*0.590153);
}

double NNfunction_sb_uRcR::synapse0x1d6c0a0() {
   return (neuron0x1d5bd30()*0.0229073);
}

double NNfunction_sb_uRcR::synapse0x1d6c0e0() {
   return (neuron0x1d5c070()*0.264172);
}

double NNfunction_sb_uRcR::synapse0x1d6c120() {
   return (neuron0x1d5c3b0()*0.0748318);
}

double NNfunction_sb_uRcR::synapse0x1d6c160() {
   return (neuron0x1d5c6f0()*0.145752);
}

double NNfunction_sb_uRcR::synapse0x1d6c1a0() {
   return (neuron0x1d5ca30()*0.186977);
}

double NNfunction_sb_uRcR::synapse0x1d6c520() {
   return (neuron0x1d57de0()*-0.0529822);
}

double NNfunction_sb_uRcR::synapse0x1d6c560() {
   return (neuron0x1d58090()*0.0193687);
}

double NNfunction_sb_uRcR::synapse0x1d6c5a0() {
   return (neuron0x1d583d0()*-0.014841);
}

double NNfunction_sb_uRcR::synapse0x1d6c5e0() {
   return (neuron0x1d58710()*1.49437);
}

double NNfunction_sb_uRcR::synapse0x1d6c620() {
   return (neuron0x1d58a50()*-0.040355);
}

double NNfunction_sb_uRcR::synapse0x1d6c660() {
   return (neuron0x1d58d90()*0.0236834);
}

double NNfunction_sb_uRcR::synapse0x1d6c6a0() {
   return (neuron0x1d590d0()*-0.0146148);
}

double NNfunction_sb_uRcR::synapse0x1d6c6e0() {
   return (neuron0x1d59410()*-0.0242057);
}

double NNfunction_sb_uRcR::synapse0x1d6c720() {
   return (neuron0x1d59750()*0.0101272);
}

double NNfunction_sb_uRcR::synapse0x1d648e0() {
   return (neuron0x1d59a90()*-0.0516597);
}

double NNfunction_sb_uRcR::synapse0x1d64920() {
   return (neuron0x1d59dd0()*0.00789383);
}

double NNfunction_sb_uRcR::synapse0x1d64960() {
   return (neuron0x1d5a110()*-0.0829301);
}

double NNfunction_sb_uRcR::synapse0x1d649a0() {
   return (neuron0x1d5a450()*0.0155848);
}

double NNfunction_sb_uRcR::synapse0x1d649e0() {
   return (neuron0x1d5a790()*0.032015);
}

double NNfunction_sb_uRcR::synapse0x1d64a20() {
   return (neuron0x1d5aad0()*-0.0816239);
}

double NNfunction_sb_uRcR::synapse0x1d64a60() {
   return (neuron0x1d5ae10()*-0.315546);
}

double NNfunction_sb_uRcR::synapse0x1d6c370() {
   return (neuron0x1d5b150()*0.0297737);
}

double NNfunction_sb_uRcR::synapse0x1d6c3b0() {
   return (neuron0x1d5b6b0()*-0.0829585);
}

double NNfunction_sb_uRcR::synapse0x1d64bb0() {
   return (neuron0x1d5b9f0()*0.00549759);
}

double NNfunction_sb_uRcR::synapse0x1d64bf0() {
   return (neuron0x1d5bd30()*-0.0284955);
}

double NNfunction_sb_uRcR::synapse0x1d64c30() {
   return (neuron0x1d5c070()*0.012871);
}

double NNfunction_sb_uRcR::synapse0x1d64c70() {
   return (neuron0x1d5c3b0()*-0.0102978);
}

double NNfunction_sb_uRcR::synapse0x1d64cb0() {
   return (neuron0x1d5c6f0()*-0.0357359);
}

double NNfunction_sb_uRcR::synapse0x1d64cf0() {
   return (neuron0x1d5ca30()*0.0109154);
}

double NNfunction_sb_uRcR::synapse0x1d65070() {
   return (neuron0x1d57de0()*-0.188612);
}

double NNfunction_sb_uRcR::synapse0x1d650b0() {
   return (neuron0x1d58090()*-0.241554);
}

double NNfunction_sb_uRcR::synapse0x1d650f0() {
   return (neuron0x1d583d0()*0.509656);
}

double NNfunction_sb_uRcR::synapse0x1d65130() {
   return (neuron0x1d58710()*0.337023);
}

double NNfunction_sb_uRcR::synapse0x1d65170() {
   return (neuron0x1d58a50()*-0.812758);
}

double NNfunction_sb_uRcR::synapse0x1d651b0() {
   return (neuron0x1d58d90()*-0.0703045);
}

double NNfunction_sb_uRcR::synapse0x1d651f0() {
   return (neuron0x1d590d0()*-0.366718);
}

double NNfunction_sb_uRcR::synapse0x1d65230() {
   return (neuron0x1d59410()*0.148709);
}

double NNfunction_sb_uRcR::synapse0x1d65270() {
   return (neuron0x1d59750()*0.264448);
}

double NNfunction_sb_uRcR::synapse0x1d652b0() {
   return (neuron0x1d59a90()*-0.63863);
}

double NNfunction_sb_uRcR::synapse0x1d652f0() {
   return (neuron0x1d59dd0()*0.0532516);
}

double NNfunction_sb_uRcR::synapse0x1d65330() {
   return (neuron0x1d5a110()*0.455819);
}

double NNfunction_sb_uRcR::synapse0x1d65370() {
   return (neuron0x1d5a450()*-0.200176);
}

double NNfunction_sb_uRcR::synapse0x1d653b0() {
   return (neuron0x1d5a790()*-0.406589);
}

double NNfunction_sb_uRcR::synapse0x1d653f0() {
   return (neuron0x1d5aad0()*-0.724306);
}

double NNfunction_sb_uRcR::synapse0x1d65430() {
   return (neuron0x1d5ae10()*-0.493845);
}

double NNfunction_sb_uRcR::synapse0x1d64ec0() {
   return (neuron0x1d5b150()*-0.271885);
}

double NNfunction_sb_uRcR::synapse0x1d64f00() {
   return (neuron0x1d5b6b0()*0.451406);
}

double NNfunction_sb_uRcR::synapse0x1d65580() {
   return (neuron0x1d5b9f0()*-0.354982);
}

double NNfunction_sb_uRcR::synapse0x1d655c0() {
   return (neuron0x1d5bd30()*0.14262);
}

double NNfunction_sb_uRcR::synapse0x1d65600() {
   return (neuron0x1d5c070()*0.0604246);
}

double NNfunction_sb_uRcR::synapse0x1d65640() {
   return (neuron0x1d5c3b0()*0.771153);
}

double NNfunction_sb_uRcR::synapse0x1d65680() {
   return (neuron0x1d5c6f0()*0.154443);
}

double NNfunction_sb_uRcR::synapse0x1d656c0() {
   return (neuron0x1d5ca30()*0.65114);
}

double NNfunction_sb_uRcR::synapse0x1d65890() {
   return (neuron0x1d57de0()*0.223199);
}

double NNfunction_sb_uRcR::synapse0x1d6e920() {
   return (neuron0x1d58090()*-0.0596353);
}

double NNfunction_sb_uRcR::synapse0x1d6e960() {
   return (neuron0x1d583d0()*0.114993);
}

double NNfunction_sb_uRcR::synapse0x1d6e9a0() {
   return (neuron0x1d58710()*-0.787465);
}

double NNfunction_sb_uRcR::synapse0x1d6e9e0() {
   return (neuron0x1d58a50()*-0.0679759);
}

double NNfunction_sb_uRcR::synapse0x1d6ea20() {
   return (neuron0x1d58d90()*0.07793);
}

double NNfunction_sb_uRcR::synapse0x1d6ea60() {
   return (neuron0x1d590d0()*-0.115985);
}

double NNfunction_sb_uRcR::synapse0x1d6eaa0() {
   return (neuron0x1d59410()*-0.00550533);
}

double NNfunction_sb_uRcR::synapse0x1d6eae0() {
   return (neuron0x1d59750()*0.518859);
}

double NNfunction_sb_uRcR::synapse0x1d6eb20() {
   return (neuron0x1d59a90()*0.0757969);
}

double NNfunction_sb_uRcR::synapse0x1d6eb60() {
   return (neuron0x1d59dd0()*-0.0600367);
}

double NNfunction_sb_uRcR::synapse0x1d6eba0() {
   return (neuron0x1d5a110()*0.777035);
}

double NNfunction_sb_uRcR::synapse0x1d6ebe0() {
   return (neuron0x1d5a450()*-0.0820294);
}

double NNfunction_sb_uRcR::synapse0x1d6ec20() {
   return (neuron0x1d5a790()*-0.00943056);
}

double NNfunction_sb_uRcR::synapse0x1d6ec60() {
   return (neuron0x1d5aad0()*0.282451);
}

double NNfunction_sb_uRcR::synapse0x1d6eca0() {
   return (neuron0x1d5ae10()*-0.530944);
}

double NNfunction_sb_uRcR::synapse0x1d6e770() {
   return (neuron0x1d5b150()*-0.00513746);
}

double NNfunction_sb_uRcR::synapse0x1d6e7b0() {
   return (neuron0x1d5b6b0()*-0.207211);
}

double NNfunction_sb_uRcR::synapse0x1d6edf0() {
   return (neuron0x1d5b9f0()*-0.403944);
}

double NNfunction_sb_uRcR::synapse0x1d6ee30() {
   return (neuron0x1d5bd30()*0.352877);
}

double NNfunction_sb_uRcR::synapse0x1d6ee70() {
   return (neuron0x1d5c070()*0.336458);
}

double NNfunction_sb_uRcR::synapse0x1d6eeb0() {
   return (neuron0x1d5c3b0()*0.0169971);
}

double NNfunction_sb_uRcR::synapse0x1d6eef0() {
   return (neuron0x1d5c6f0()*-0.0614164);
}

double NNfunction_sb_uRcR::synapse0x1d6ef30() {
   return (neuron0x1d5ca30()*-0.0921734);
}

double NNfunction_sb_uRcR::synapse0x1d6f2b0() {
   return (neuron0x1d57de0()*0.0171826);
}

double NNfunction_sb_uRcR::synapse0x1d6f2f0() {
   return (neuron0x1d58090()*-0.00507416);
}

double NNfunction_sb_uRcR::synapse0x1d6f330() {
   return (neuron0x1d583d0()*0.0140304);
}

double NNfunction_sb_uRcR::synapse0x1d6f370() {
   return (neuron0x1d58710()*-0.183747);
}

double NNfunction_sb_uRcR::synapse0x1d6f3b0() {
   return (neuron0x1d58a50()*0.0161344);
}

double NNfunction_sb_uRcR::synapse0x1d6f3f0() {
   return (neuron0x1d58d90()*-0.000560885);
}

double NNfunction_sb_uRcR::synapse0x1d6f430() {
   return (neuron0x1d590d0()*0.00368181);
}

double NNfunction_sb_uRcR::synapse0x1d6f470() {
   return (neuron0x1d59410()*-0.00366424);
}

double NNfunction_sb_uRcR::synapse0x1d6f4b0() {
   return (neuron0x1d59750()*-0.00452714);
}

double NNfunction_sb_uRcR::synapse0x1d6f4f0() {
   return (neuron0x1d59a90()*-0.013251);
}

double NNfunction_sb_uRcR::synapse0x1d6f530() {
   return (neuron0x1d59dd0()*0.0144958);
}

double NNfunction_sb_uRcR::synapse0x1d6f570() {
   return (neuron0x1d5a110()*-0.00397755);
}

double NNfunction_sb_uRcR::synapse0x1d6f5b0() {
   return (neuron0x1d5a450()*0.0250572);
}

double NNfunction_sb_uRcR::synapse0x1d6f5f0() {
   return (neuron0x1d5a790()*-0.00659494);
}

double NNfunction_sb_uRcR::synapse0x1d6f630() {
   return (neuron0x1d5aad0()*-1.00721);
}

double NNfunction_sb_uRcR::synapse0x1d6f670() {
   return (neuron0x1d5ae10()*-0.0814797);
}

double NNfunction_sb_uRcR::synapse0x1d6f100() {
   return (neuron0x1d5b150()*-0.00747761);
}

double NNfunction_sb_uRcR::synapse0x1d6f140() {
   return (neuron0x1d5b6b0()*-0.0132124);
}

double NNfunction_sb_uRcR::synapse0x1d6f7c0() {
   return (neuron0x1d5b9f0()*0.0208996);
}

double NNfunction_sb_uRcR::synapse0x1d6f800() {
   return (neuron0x1d5bd30()*0.000199186);
}

double NNfunction_sb_uRcR::synapse0x1d6f840() {
   return (neuron0x1d5c070()*0.0153459);
}

double NNfunction_sb_uRcR::synapse0x1d6f880() {
   return (neuron0x1d5c3b0()*-0.0105691);
}

double NNfunction_sb_uRcR::synapse0x1d6f8c0() {
   return (neuron0x1d5c6f0()*0.00129404);
}

double NNfunction_sb_uRcR::synapse0x1d6f900() {
   return (neuron0x1d5ca30()*0.00241907);
}

double NNfunction_sb_uRcR::synapse0x1d6fc80() {
   return (neuron0x1d57de0()*-0.16856);
}

double NNfunction_sb_uRcR::synapse0x1d6fcc0() {
   return (neuron0x1d58090()*-0.313449);
}

double NNfunction_sb_uRcR::synapse0x1d6fd00() {
   return (neuron0x1d583d0()*0.238148);
}

double NNfunction_sb_uRcR::synapse0x1d6fd40() {
   return (neuron0x1d58710()*0.940589);
}

double NNfunction_sb_uRcR::synapse0x1d6fd80() {
   return (neuron0x1d58a50()*-0.215492);
}

double NNfunction_sb_uRcR::synapse0x1d6fdc0() {
   return (neuron0x1d58d90()*-0.0971066);
}

double NNfunction_sb_uRcR::synapse0x1d6fe00() {
   return (neuron0x1d590d0()*-0.0329288);
}

double NNfunction_sb_uRcR::synapse0x1d6fe40() {
   return (neuron0x1d59410()*0.0601549);
}

double NNfunction_sb_uRcR::synapse0x1d6fe80() {
   return (neuron0x1d59750()*-0.0105093);
}

double NNfunction_sb_uRcR::synapse0x1d6fec0() {
   return (neuron0x1d59a90()*-0.00956894);
}

double NNfunction_sb_uRcR::synapse0x1d6ff00() {
   return (neuron0x1d59dd0()*-0.193253);
}

double NNfunction_sb_uRcR::synapse0x1d6ff40() {
   return (neuron0x1d5a110()*-0.0579509);
}

double NNfunction_sb_uRcR::synapse0x1d6ff80() {
   return (neuron0x1d5a450()*-0.243648);
}

double NNfunction_sb_uRcR::synapse0x1d6ffc0() {
   return (neuron0x1d5a790()*0.168948);
}

double NNfunction_sb_uRcR::synapse0x1d70000() {
   return (neuron0x1d5aad0()*0.250542);
}

double NNfunction_sb_uRcR::synapse0x1d70040() {
   return (neuron0x1d5ae10()*0.145964);
}

double NNfunction_sb_uRcR::synapse0x1d6fad0() {
   return (neuron0x1d5b150()*0.0672016);
}

double NNfunction_sb_uRcR::synapse0x1d6fb10() {
   return (neuron0x1d5b6b0()*-0.121554);
}

double NNfunction_sb_uRcR::synapse0x1d70190() {
   return (neuron0x1d5b9f0()*0.0418625);
}

double NNfunction_sb_uRcR::synapse0x1d701d0() {
   return (neuron0x1d5bd30()*0.024894);
}

double NNfunction_sb_uRcR::synapse0x1d70210() {
   return (neuron0x1d5c070()*-0.0906008);
}

double NNfunction_sb_uRcR::synapse0x1d70250() {
   return (neuron0x1d5c3b0()*0.18204);
}

double NNfunction_sb_uRcR::synapse0x1d70290() {
   return (neuron0x1d5c6f0()*0.123161);
}

double NNfunction_sb_uRcR::synapse0x1d702d0() {
   return (neuron0x1d5ca30()*0.388775);
}

double NNfunction_sb_uRcR::synapse0x1d70650() {
   return (neuron0x1d57de0()*-0.373678);
}

double NNfunction_sb_uRcR::synapse0x1d70690() {
   return (neuron0x1d58090()*0.807908);
}

double NNfunction_sb_uRcR::synapse0x1d706d0() {
   return (neuron0x1d583d0()*0.917718);
}

double NNfunction_sb_uRcR::synapse0x1d70710() {
   return (neuron0x1d58710()*0.0416583);
}

double NNfunction_sb_uRcR::synapse0x1d70750() {
   return (neuron0x1d58a50()*0.689792);
}

double NNfunction_sb_uRcR::synapse0x1d70790() {
   return (neuron0x1d58d90()*-0.0161493);
}

double NNfunction_sb_uRcR::synapse0x1d707d0() {
   return (neuron0x1d590d0()*-0.472132);
}

double NNfunction_sb_uRcR::synapse0x1d70810() {
   return (neuron0x1d59410()*0.914828);
}

double NNfunction_sb_uRcR::synapse0x1d70850() {
   return (neuron0x1d59750()*0.785934);
}

double NNfunction_sb_uRcR::synapse0x1d70890() {
   return (neuron0x1d59a90()*0.506707);
}

double NNfunction_sb_uRcR::synapse0x1d708d0() {
   return (neuron0x1d59dd0()*-0.381031);
}

double NNfunction_sb_uRcR::synapse0x1d70910() {
   return (neuron0x1d5a110()*0.865834);
}

double NNfunction_sb_uRcR::synapse0x1d70950() {
   return (neuron0x1d5a450()*-0.597277);
}

double NNfunction_sb_uRcR::synapse0x1d70990() {
   return (neuron0x1d5a790()*-0.0794877);
}

double NNfunction_sb_uRcR::synapse0x1d709d0() {
   return (neuron0x1d5aad0()*0.320688);
}

double NNfunction_sb_uRcR::synapse0x1d70a10() {
   return (neuron0x1d5ae10()*-0.490875);
}

double NNfunction_sb_uRcR::synapse0x1d704a0() {
   return (neuron0x1d5b150()*0.156389);
}

double NNfunction_sb_uRcR::synapse0x1d704e0() {
   return (neuron0x1d5b6b0()*0.214592);
}

double NNfunction_sb_uRcR::synapse0x1d70b60() {
   return (neuron0x1d5b9f0()*0.0665366);
}

double NNfunction_sb_uRcR::synapse0x1d70ba0() {
   return (neuron0x1d5bd30()*-0.601322);
}

double NNfunction_sb_uRcR::synapse0x1d70be0() {
   return (neuron0x1d5c070()*-0.320843);
}

double NNfunction_sb_uRcR::synapse0x1d70c20() {
   return (neuron0x1d5c3b0()*0.376214);
}

double NNfunction_sb_uRcR::synapse0x1d70c60() {
   return (neuron0x1d5c6f0()*-0.180435);
}

double NNfunction_sb_uRcR::synapse0x1d70ca0() {
   return (neuron0x1d5ca30()*-0.421201);
}

double NNfunction_sb_uRcR::synapse0x1d71020() {
   return (neuron0x1d57de0()*1.13587);
}

double NNfunction_sb_uRcR::synapse0x1d71060() {
   return (neuron0x1d58090()*-0.223754);
}

double NNfunction_sb_uRcR::synapse0x1d710a0() {
   return (neuron0x1d583d0()*-0.307155);
}

double NNfunction_sb_uRcR::synapse0x1d710e0() {
   return (neuron0x1d58710()*-0.507287);
}

double NNfunction_sb_uRcR::synapse0x1d71120() {
   return (neuron0x1d58a50()*0.056568);
}

double NNfunction_sb_uRcR::synapse0x1d71160() {
   return (neuron0x1d58d90()*1.49078);
}

double NNfunction_sb_uRcR::synapse0x1d711a0() {
   return (neuron0x1d590d0()*-0.508051);
}

double NNfunction_sb_uRcR::synapse0x1d711e0() {
   return (neuron0x1d59410()*-0.343752);
}

double NNfunction_sb_uRcR::synapse0x1d71220() {
   return (neuron0x1d59750()*0.895616);
}

double NNfunction_sb_uRcR::synapse0x1d71260() {
   return (neuron0x1d59a90()*0.550897);
}

double NNfunction_sb_uRcR::synapse0x1d712a0() {
   return (neuron0x1d59dd0()*0.704495);
}

double NNfunction_sb_uRcR::synapse0x1d712e0() {
   return (neuron0x1d5a110()*-0.311946);
}

double NNfunction_sb_uRcR::synapse0x1d71320() {
   return (neuron0x1d5a450()*-0.217534);
}

double NNfunction_sb_uRcR::synapse0x1d71360() {
   return (neuron0x1d5a790()*0.66505);
}

double NNfunction_sb_uRcR::synapse0x1d713a0() {
   return (neuron0x1d5aad0()*-1.19916);
}

double NNfunction_sb_uRcR::synapse0x1d713e0() {
   return (neuron0x1d5ae10()*-0.509731);
}

double NNfunction_sb_uRcR::synapse0x1d70e70() {
   return (neuron0x1d5b150()*-0.927085);
}

double NNfunction_sb_uRcR::synapse0x1d70eb0() {
   return (neuron0x1d5b6b0()*-0.617613);
}

double NNfunction_sb_uRcR::synapse0x1d71530() {
   return (neuron0x1d5b9f0()*-0.124755);
}

double NNfunction_sb_uRcR::synapse0x1d71570() {
   return (neuron0x1d5bd30()*-0.184363);
}

double NNfunction_sb_uRcR::synapse0x1d715b0() {
   return (neuron0x1d5c070()*-0.245397);
}

double NNfunction_sb_uRcR::synapse0x1d715f0() {
   return (neuron0x1d5c3b0()*-0.397242);
}

double NNfunction_sb_uRcR::synapse0x1d71630() {
   return (neuron0x1d5c6f0()*-0.650606);
}

double NNfunction_sb_uRcR::synapse0x1d71670() {
   return (neuron0x1d5ca30()*0.0484855);
}

double NNfunction_sb_uRcR::synapse0x1d719f0() {
   return (neuron0x1d57de0()*0.0174609);
}

double NNfunction_sb_uRcR::synapse0x1d71a30() {
   return (neuron0x1d58090()*0.0557509);
}

double NNfunction_sb_uRcR::synapse0x1d71a70() {
   return (neuron0x1d583d0()*-0.0178001);
}

double NNfunction_sb_uRcR::synapse0x1d71ab0() {
   return (neuron0x1d58710()*-4.44723);
}

double NNfunction_sb_uRcR::synapse0x1d71af0() {
   return (neuron0x1d58a50()*0.00222625);
}

double NNfunction_sb_uRcR::synapse0x1d71b30() {
   return (neuron0x1d58d90()*0.00604134);
}

double NNfunction_sb_uRcR::synapse0x1d71b70() {
   return (neuron0x1d590d0()*-0.0173379);
}

double NNfunction_sb_uRcR::synapse0x1d71bb0() {
   return (neuron0x1d59410()*-0.00534676);
}

double NNfunction_sb_uRcR::synapse0x1d71bf0() {
   return (neuron0x1d59750()*0.074413);
}

double NNfunction_sb_uRcR::synapse0x1d71c30() {
   return (neuron0x1d59a90()*0.0249088);
}

double NNfunction_sb_uRcR::synapse0x1d71c70() {
   return (neuron0x1d59dd0()*0.0370041);
}

double NNfunction_sb_uRcR::synapse0x1d71cb0() {
   return (neuron0x1d5a110()*0.0138386);
}

double NNfunction_sb_uRcR::synapse0x1d71cf0() {
   return (neuron0x1d5a450()*0.011252);
}

double NNfunction_sb_uRcR::synapse0x1d71d30() {
   return (neuron0x1d5a790()*0.0019599);
}

double NNfunction_sb_uRcR::synapse0x1d71d70() {
   return (neuron0x1d5aad0()*0.225382);
}

double NNfunction_sb_uRcR::synapse0x1d71db0() {
   return (neuron0x1d5ae10()*0.189073);
}

double NNfunction_sb_uRcR::synapse0x1d71840() {
   return (neuron0x1d5b150()*0.00249066);
}

double NNfunction_sb_uRcR::synapse0x1d71880() {
   return (neuron0x1d5b6b0()*0.0363612);
}

double NNfunction_sb_uRcR::synapse0x1d71f00() {
   return (neuron0x1d5b9f0()*0.032204);
}

double NNfunction_sb_uRcR::synapse0x1d71f40() {
   return (neuron0x1d5bd30()*-0.0101688);
}

double NNfunction_sb_uRcR::synapse0x1d71f80() {
   return (neuron0x1d5c070()*-0.0014255);
}

double NNfunction_sb_uRcR::synapse0x1d71fc0() {
   return (neuron0x1d5c3b0()*0.00294298);
}

double NNfunction_sb_uRcR::synapse0x1d72000() {
   return (neuron0x1d5c6f0()*0.0161985);
}

double NNfunction_sb_uRcR::synapse0x1d72040() {
   return (neuron0x1d5ca30()*0.0091447);
}

double NNfunction_sb_uRcR::synapse0x1d723c0() {
   return (neuron0x1d57de0()*0.18839);
}

double NNfunction_sb_uRcR::synapse0x1d72400() {
   return (neuron0x1d58090()*0.0196664);
}

double NNfunction_sb_uRcR::synapse0x1d72440() {
   return (neuron0x1d583d0()*-0.0546769);
}

double NNfunction_sb_uRcR::synapse0x1d72480() {
   return (neuron0x1d58710()*-0.326064);
}

double NNfunction_sb_uRcR::synapse0x1d724c0() {
   return (neuron0x1d58a50()*0.0357829);
}

double NNfunction_sb_uRcR::synapse0x1d72500() {
   return (neuron0x1d58d90()*-0.176684);
}

double NNfunction_sb_uRcR::synapse0x1d72540() {
   return (neuron0x1d590d0()*-0.185582);
}

double NNfunction_sb_uRcR::synapse0x1d72580() {
   return (neuron0x1d59410()*-0.222944);
}

double NNfunction_sb_uRcR::synapse0x1d725c0() {
   return (neuron0x1d59750()*0.0555339);
}

double NNfunction_sb_uRcR::synapse0x1d72600() {
   return (neuron0x1d59a90()*0.047202);
}

double NNfunction_sb_uRcR::synapse0x1d72640() {
   return (neuron0x1d59dd0()*0.107541);
}

double NNfunction_sb_uRcR::synapse0x1d72680() {
   return (neuron0x1d5a110()*0.0817856);
}

double NNfunction_sb_uRcR::synapse0x1d726c0() {
   return (neuron0x1d5a450()*0.122533);
}

double NNfunction_sb_uRcR::synapse0x1d72700() {
   return (neuron0x1d5a790()*-0.0608422);
}

double NNfunction_sb_uRcR::synapse0x1d72740() {
   return (neuron0x1d5aad0()*-0.400548);
}

double NNfunction_sb_uRcR::synapse0x1d72780() {
   return (neuron0x1d5ae10()*-1.21066);
}

double NNfunction_sb_uRcR::synapse0x1d72210() {
   return (neuron0x1d5b150()*0.0839554);
}

double NNfunction_sb_uRcR::synapse0x1d72250() {
   return (neuron0x1d5b6b0()*0.0421757);
}

double NNfunction_sb_uRcR::synapse0x1d728d0() {
   return (neuron0x1d5b9f0()*0.102473);
}

double NNfunction_sb_uRcR::synapse0x1d72910() {
   return (neuron0x1d5bd30()*-0.039056);
}

double NNfunction_sb_uRcR::synapse0x1d72950() {
   return (neuron0x1d5c070()*-0.0636441);
}

double NNfunction_sb_uRcR::synapse0x1d72990() {
   return (neuron0x1d5c3b0()*0.0361649);
}

double NNfunction_sb_uRcR::synapse0x1d729d0() {
   return (neuron0x1d5c6f0()*-0.186125);
}

double NNfunction_sb_uRcR::synapse0x1d72a10() {
   return (neuron0x1d5ca30()*0.0160041);
}

double NNfunction_sb_uRcR::synapse0x1d72d90() {
   return (neuron0x1d57de0()*0.00980755);
}

double NNfunction_sb_uRcR::synapse0x1d72dd0() {
   return (neuron0x1d58090()*-0.225703);
}

double NNfunction_sb_uRcR::synapse0x1d72e10() {
   return (neuron0x1d583d0()*-0.00289441);
}

double NNfunction_sb_uRcR::synapse0x1d72e50() {
   return (neuron0x1d58710()*-1.06929);
}

double NNfunction_sb_uRcR::synapse0x1d72e90() {
   return (neuron0x1d58a50()*-0.0571693);
}

double NNfunction_sb_uRcR::synapse0x1d72ed0() {
   return (neuron0x1d58d90()*-0.00355295);
}

double NNfunction_sb_uRcR::synapse0x1d72f10() {
   return (neuron0x1d590d0()*-0.0221413);
}

double NNfunction_sb_uRcR::synapse0x1d72f50() {
   return (neuron0x1d59410()*0.0258883);
}

double NNfunction_sb_uRcR::synapse0x1d72f90() {
   return (neuron0x1d59750()*-0.00244272);
}

double NNfunction_sb_uRcR::synapse0x1d72fd0() {
   return (neuron0x1d59a90()*-0.0123113);
}

double NNfunction_sb_uRcR::synapse0x1d73010() {
   return (neuron0x1d59dd0()*0.108843);
}

double NNfunction_sb_uRcR::synapse0x1d73050() {
   return (neuron0x1d5a110()*-0.0671347);
}

double NNfunction_sb_uRcR::synapse0x1d73090() {
   return (neuron0x1d5a450()*-0.0725959);
}

double NNfunction_sb_uRcR::synapse0x1d730d0() {
   return (neuron0x1d5a790()*-0.0643574);
}

double NNfunction_sb_uRcR::synapse0x1d73110() {
   return (neuron0x1d5aad0()*-0.135945);
}

double NNfunction_sb_uRcR::synapse0x1d73150() {
   return (neuron0x1d5ae10()*-0.1478);
}

double NNfunction_sb_uRcR::synapse0x1d72be0() {
   return (neuron0x1d5b150()*0.0303305);
}

double NNfunction_sb_uRcR::synapse0x1d72c20() {
   return (neuron0x1d5b6b0()*-0.132344);
}

double NNfunction_sb_uRcR::synapse0x1d732a0() {
   return (neuron0x1d5b9f0()*0.0692588);
}

double NNfunction_sb_uRcR::synapse0x1d732e0() {
   return (neuron0x1d5bd30()*0.160336);
}

double NNfunction_sb_uRcR::synapse0x1d73320() {
   return (neuron0x1d5c070()*-0.0289792);
}

double NNfunction_sb_uRcR::synapse0x1d73360() {
   return (neuron0x1d5c3b0()*-0.00148851);
}

double NNfunction_sb_uRcR::synapse0x1d733a0() {
   return (neuron0x1d5c6f0()*-0.0426651);
}

double NNfunction_sb_uRcR::synapse0x1d733e0() {
   return (neuron0x1d5ca30()*0.00170453);
}

double NNfunction_sb_uRcR::synapse0x1d73760() {
   return (neuron0x1d57de0()*0.134673);
}

double NNfunction_sb_uRcR::synapse0x1d67d30() {
   return (neuron0x1d58090()*-0.819865);
}

double NNfunction_sb_uRcR::synapse0x1d67d70() {
   return (neuron0x1d583d0()*0.0230408);
}

double NNfunction_sb_uRcR::synapse0x1d67db0() {
   return (neuron0x1d58710()*-0.185264);
}

double NNfunction_sb_uRcR::synapse0x1d68000() {
   return (neuron0x1d58a50()*-0.112813);
}

double NNfunction_sb_uRcR::synapse0x1d68040() {
   return (neuron0x1d58d90()*0.0566367);
}

double NNfunction_sb_uRcR::synapse0x1d68080() {
   return (neuron0x1d590d0()*-0.116242);
}

double NNfunction_sb_uRcR::synapse0x1d682d0() {
   return (neuron0x1d59410()*-0.201891);
}

double NNfunction_sb_uRcR::synapse0x1d68310() {
   return (neuron0x1d59750()*0.379173);
}

double NNfunction_sb_uRcR::synapse0x1d68560() {
   return (neuron0x1d59a90()*0.0274307);
}

double NNfunction_sb_uRcR::synapse0x1d685a0() {
   return (neuron0x1d59dd0()*0.554718);
}

double NNfunction_sb_uRcR::synapse0x1d685e0() {
   return (neuron0x1d5a110()*-0.345222);
}

double NNfunction_sb_uRcR::synapse0x1d68830() {
   return (neuron0x1d5a450()*-0.245856);
}

double NNfunction_sb_uRcR::synapse0x1d68870() {
   return (neuron0x1d5a790()*0.376193);
}

double NNfunction_sb_uRcR::synapse0x1d68ac0() {
   return (neuron0x1d5aad0()*-0.459563);
}

double NNfunction_sb_uRcR::synapse0x1d68b00() {
   return (neuron0x1d5ae10()*0.00090689);
}

double NNfunction_sb_uRcR::synapse0x1d735b0() {
   return (neuron0x1d5b150()*0.206231);
}

double NNfunction_sb_uRcR::synapse0x1d735f0() {
   return (neuron0x1d5b6b0()*0.0117336);
}

double NNfunction_sb_uRcR::synapse0x1d68c50() {
   return (neuron0x1d5b9f0()*-0.0166294);
}

double NNfunction_sb_uRcR::synapse0x1d69160() {
   return (neuron0x1d5bd30()*-0.326903);
}

double NNfunction_sb_uRcR::synapse0x1d691a0() {
   return (neuron0x1d5c070()*-0.0759352);
}

double NNfunction_sb_uRcR::synapse0x1d691e0() {
   return (neuron0x1d5c3b0()*-0.142966);
}

double NNfunction_sb_uRcR::synapse0x1d69430() {
   return (neuron0x1d5c6f0()*-0.119109);
}

double NNfunction_sb_uRcR::synapse0x1d69470() {
   return (neuron0x1d5ca30()*-0.147399);
}

double NNfunction_sb_uRcR::synapse0x1d68d20() {
   return (neuron0x1d57de0()*-0.742416);
}

double NNfunction_sb_uRcR::synapse0x1d68d60() {
   return (neuron0x1d58090()*-0.0105702);
}

double NNfunction_sb_uRcR::synapse0x1d68da0() {
   return (neuron0x1d583d0()*0.0192307);
}

double NNfunction_sb_uRcR::synapse0x1d68de0() {
   return (neuron0x1d58710()*0.318881);
}

double NNfunction_sb_uRcR::synapse0x1d69760() {
   return (neuron0x1d58a50()*-0.418191);
}

double NNfunction_sb_uRcR::synapse0x1d75ab0() {
   return (neuron0x1d58d90()*-0.453616);
}

double NNfunction_sb_uRcR::synapse0x1d75af0() {
   return (neuron0x1d590d0()*0.809488);
}

double NNfunction_sb_uRcR::synapse0x1d75b30() {
   return (neuron0x1d59410()*-0.19173);
}

double NNfunction_sb_uRcR::synapse0x1d75b70() {
   return (neuron0x1d59750()*-0.1904);
}

double NNfunction_sb_uRcR::synapse0x1d75bb0() {
   return (neuron0x1d59a90()*-0.036363);
}

double NNfunction_sb_uRcR::synapse0x1d75bf0() {
   return (neuron0x1d59dd0()*-0.109908);
}

double NNfunction_sb_uRcR::synapse0x1d75c30() {
   return (neuron0x1d5a110()*0.23225);
}

double NNfunction_sb_uRcR::synapse0x1d75c70() {
   return (neuron0x1d5a450()*-0.0576701);
}

double NNfunction_sb_uRcR::synapse0x1d75cb0() {
   return (neuron0x1d5a790()*0.714873);
}

double NNfunction_sb_uRcR::synapse0x1d75cf0() {
   return (neuron0x1d5aad0()*0.0829799);
}

double NNfunction_sb_uRcR::synapse0x1d75d30() {
   return (neuron0x1d5ae10()*0.0156245);
}

double NNfunction_sb_uRcR::synapse0x1d69640() {
   return (neuron0x1d5b150()*0.626858);
}

double NNfunction_sb_uRcR::synapse0x1d69680() {
   return (neuron0x1d5b6b0()*0.192347);
}

double NNfunction_sb_uRcR::synapse0x1d75e80() {
   return (neuron0x1d5b9f0()*0.465121);
}

double NNfunction_sb_uRcR::synapse0x1d75ec0() {
   return (neuron0x1d5bd30()*-0.1759);
}

double NNfunction_sb_uRcR::synapse0x1d75f00() {
   return (neuron0x1d5c070()*-0.0119647);
}

double NNfunction_sb_uRcR::synapse0x1d75f40() {
   return (neuron0x1d5c3b0()*-0.104997);
}

double NNfunction_sb_uRcR::synapse0x1d75f80() {
   return (neuron0x1d5c6f0()*0.188438);
}

double NNfunction_sb_uRcR::synapse0x1d75fc0() {
   return (neuron0x1d5ca30()*-0.439338);
}

double NNfunction_sb_uRcR::synapse0x1d76340() {
   return (neuron0x1d57de0()*-0.394468);
}

double NNfunction_sb_uRcR::synapse0x1d76380() {
   return (neuron0x1d58090()*0.224111);
}

double NNfunction_sb_uRcR::synapse0x1d763c0() {
   return (neuron0x1d583d0()*-0.593307);
}

double NNfunction_sb_uRcR::synapse0x1d76400() {
   return (neuron0x1d58710()*-0.826733);
}

double NNfunction_sb_uRcR::synapse0x1d76440() {
   return (neuron0x1d58a50()*0.365338);
}

double NNfunction_sb_uRcR::synapse0x1d76480() {
   return (neuron0x1d58d90()*-0.327481);
}

double NNfunction_sb_uRcR::synapse0x1d764c0() {
   return (neuron0x1d590d0()*0.0460405);
}

double NNfunction_sb_uRcR::synapse0x1d76500() {
   return (neuron0x1d59410()*0.000607551);
}

double NNfunction_sb_uRcR::synapse0x1d76540() {
   return (neuron0x1d59750()*-0.808647);
}

double NNfunction_sb_uRcR::synapse0x1d76580() {
   return (neuron0x1d59a90()*-0.0137896);
}

double NNfunction_sb_uRcR::synapse0x1d765c0() {
   return (neuron0x1d59dd0()*1.00603);
}

double NNfunction_sb_uRcR::synapse0x1d76600() {
   return (neuron0x1d5a110()*0.575736);
}

double NNfunction_sb_uRcR::synapse0x1d76640() {
   return (neuron0x1d5a450()*0.42525);
}

double NNfunction_sb_uRcR::synapse0x1d76680() {
   return (neuron0x1d5a790()*-0.449973);
}

double NNfunction_sb_uRcR::synapse0x1d766c0() {
   return (neuron0x1d5aad0()*-0.31369);
}

double NNfunction_sb_uRcR::synapse0x1d76700() {
   return (neuron0x1d5ae10()*-0.538842);
}

double NNfunction_sb_uRcR::synapse0x1d76190() {
   return (neuron0x1d5b150()*0.0908208);
}

double NNfunction_sb_uRcR::synapse0x1d761d0() {
   return (neuron0x1d5b6b0()*0.620261);
}

double NNfunction_sb_uRcR::synapse0x1d76850() {
   return (neuron0x1d5b9f0()*-0.181649);
}

double NNfunction_sb_uRcR::synapse0x1d76890() {
   return (neuron0x1d5bd30()*0.257419);
}

double NNfunction_sb_uRcR::synapse0x1d768d0() {
   return (neuron0x1d5c070()*0.890885);
}

double NNfunction_sb_uRcR::synapse0x1d76910() {
   return (neuron0x1d5c3b0()*0.0491106);
}

double NNfunction_sb_uRcR::synapse0x1d76950() {
   return (neuron0x1d5c6f0()*0.198197);
}

double NNfunction_sb_uRcR::synapse0x1d76990() {
   return (neuron0x1d5ca30()*0.0983137);
}

double NNfunction_sb_uRcR::synapse0x1d76d10() {
   return (neuron0x1d57de0()*-0.744478);
}

double NNfunction_sb_uRcR::synapse0x1d76d50() {
   return (neuron0x1d58090()*-0.744605);
}

double NNfunction_sb_uRcR::synapse0x1d76d90() {
   return (neuron0x1d583d0()*-0.0576238);
}

double NNfunction_sb_uRcR::synapse0x1d76dd0() {
   return (neuron0x1d58710()*-0.00393644);
}

double NNfunction_sb_uRcR::synapse0x1d76e10() {
   return (neuron0x1d58a50()*0.06768);
}

double NNfunction_sb_uRcR::synapse0x1d76e50() {
   return (neuron0x1d58d90()*0.515721);
}

double NNfunction_sb_uRcR::synapse0x1d76e90() {
   return (neuron0x1d590d0()*0.168016);
}

double NNfunction_sb_uRcR::synapse0x1d76ed0() {
   return (neuron0x1d59410()*1.41983);
}

double NNfunction_sb_uRcR::synapse0x1d76f10() {
   return (neuron0x1d59750()*-0.779565);
}

double NNfunction_sb_uRcR::synapse0x1d76f50() {
   return (neuron0x1d59a90()*-0.0497366);
}

double NNfunction_sb_uRcR::synapse0x1d76f90() {
   return (neuron0x1d59dd0()*-0.171911);
}

double NNfunction_sb_uRcR::synapse0x1d76fd0() {
   return (neuron0x1d5a110()*0.557402);
}

double NNfunction_sb_uRcR::synapse0x1d77010() {
   return (neuron0x1d5a450()*0.313918);
}

double NNfunction_sb_uRcR::synapse0x1d77050() {
   return (neuron0x1d5a790()*0.369539);
}

double NNfunction_sb_uRcR::synapse0x1d77090() {
   return (neuron0x1d5aad0()*-0.280919);
}

double NNfunction_sb_uRcR::synapse0x1d770d0() {
   return (neuron0x1d5ae10()*-0.525083);
}

double NNfunction_sb_uRcR::synapse0x1d76b60() {
   return (neuron0x1d5b150()*-0.356383);
}

double NNfunction_sb_uRcR::synapse0x1d76ba0() {
   return (neuron0x1d5b6b0()*0.492789);
}

double NNfunction_sb_uRcR::synapse0x1d77220() {
   return (neuron0x1d5b9f0()*-0.473835);
}

double NNfunction_sb_uRcR::synapse0x1d77260() {
   return (neuron0x1d5bd30()*0.881218);
}

double NNfunction_sb_uRcR::synapse0x1d772a0() {
   return (neuron0x1d5c070()*0.850473);
}

double NNfunction_sb_uRcR::synapse0x1d772e0() {
   return (neuron0x1d5c3b0()*0.0571521);
}

double NNfunction_sb_uRcR::synapse0x1d77320() {
   return (neuron0x1d5c6f0()*0.281545);
}

double NNfunction_sb_uRcR::synapse0x1d77360() {
   return (neuron0x1d5ca30()*0.50564);
}

double NNfunction_sb_uRcR::synapse0x1d776e0() {
   return (neuron0x1d57de0()*0.441001);
}

double NNfunction_sb_uRcR::synapse0x1d77720() {
   return (neuron0x1d58090()*-0.257393);
}

double NNfunction_sb_uRcR::synapse0x1d77760() {
   return (neuron0x1d583d0()*-0.0732708);
}

double NNfunction_sb_uRcR::synapse0x1d777a0() {
   return (neuron0x1d58710()*-0.308647);
}

double NNfunction_sb_uRcR::synapse0x1d777e0() {
   return (neuron0x1d58a50()*-0.89513);
}

double NNfunction_sb_uRcR::synapse0x1d77820() {
   return (neuron0x1d58d90()*0.0454041);
}

double NNfunction_sb_uRcR::synapse0x1d77860() {
   return (neuron0x1d590d0()*-0.895265);
}

double NNfunction_sb_uRcR::synapse0x1d778a0() {
   return (neuron0x1d59410()*-0.0903621);
}

double NNfunction_sb_uRcR::synapse0x1d778e0() {
   return (neuron0x1d59750()*0.625992);
}

double NNfunction_sb_uRcR::synapse0x1d77920() {
   return (neuron0x1d59a90()*-0.0246864);
}

double NNfunction_sb_uRcR::synapse0x1d77960() {
   return (neuron0x1d59dd0()*-0.0121317);
}

double NNfunction_sb_uRcR::synapse0x1d779a0() {
   return (neuron0x1d5a110()*-0.773093);
}

double NNfunction_sb_uRcR::synapse0x1d779e0() {
   return (neuron0x1d5a450()*-0.0842305);
}

double NNfunction_sb_uRcR::synapse0x1d77a20() {
   return (neuron0x1d5a790()*0.546731);
}

double NNfunction_sb_uRcR::synapse0x1d77a60() {
   return (neuron0x1d5aad0()*-0.930989);
}

double NNfunction_sb_uRcR::synapse0x1d77aa0() {
   return (neuron0x1d5ae10()*-0.00603847);
}

double NNfunction_sb_uRcR::synapse0x1d77530() {
   return (neuron0x1d5b150()*0.254526);
}

double NNfunction_sb_uRcR::synapse0x1d77570() {
   return (neuron0x1d5b6b0()*0.171444);
}

double NNfunction_sb_uRcR::synapse0x1d77bf0() {
   return (neuron0x1d5b9f0()*0.480779);
}

double NNfunction_sb_uRcR::synapse0x1d77c30() {
   return (neuron0x1d5bd30()*-0.407985);
}

double NNfunction_sb_uRcR::synapse0x1d77c70() {
   return (neuron0x1d5c070()*-0.114328);
}

double NNfunction_sb_uRcR::synapse0x1d77cb0() {
   return (neuron0x1d5c3b0()*-0.429051);
}

double NNfunction_sb_uRcR::synapse0x1d77cf0() {
   return (neuron0x1d5c6f0()*0.415649);
}

double NNfunction_sb_uRcR::synapse0x1d77d30() {
   return (neuron0x1d5ca30()*0.211549);
}

double NNfunction_sb_uRcR::synapse0x1d780b0() {
   return (neuron0x1d57de0()*-0.030771);
}

double NNfunction_sb_uRcR::synapse0x1d780f0() {
   return (neuron0x1d58090()*-0.319592);
}

double NNfunction_sb_uRcR::synapse0x1d78130() {
   return (neuron0x1d583d0()*-0.603329);
}

double NNfunction_sb_uRcR::synapse0x1d78170() {
   return (neuron0x1d58710()*0.0127082);
}

double NNfunction_sb_uRcR::synapse0x1d781b0() {
   return (neuron0x1d58a50()*-0.389411);
}

double NNfunction_sb_uRcR::synapse0x1d781f0() {
   return (neuron0x1d58d90()*-0.461325);
}

double NNfunction_sb_uRcR::synapse0x1d78230() {
   return (neuron0x1d590d0()*0.818669);
}

double NNfunction_sb_uRcR::synapse0x1d78270() {
   return (neuron0x1d59410()*-0.456845);
}

double NNfunction_sb_uRcR::synapse0x1d782b0() {
   return (neuron0x1d59750()*0.172532);
}

double NNfunction_sb_uRcR::synapse0x1d782f0() {
   return (neuron0x1d59a90()*0.0456933);
}

double NNfunction_sb_uRcR::synapse0x1d78330() {
   return (neuron0x1d59dd0()*0.573064);
}

double NNfunction_sb_uRcR::synapse0x1d78370() {
   return (neuron0x1d5a110()*0.863002);
}

double NNfunction_sb_uRcR::synapse0x1d783b0() {
   return (neuron0x1d5a450()*-0.283116);
}

double NNfunction_sb_uRcR::synapse0x1d783f0() {
   return (neuron0x1d5a790()*0.038815);
}

double NNfunction_sb_uRcR::synapse0x1d78430() {
   return (neuron0x1d5aad0()*0.808359);
}

double NNfunction_sb_uRcR::synapse0x1d78470() {
   return (neuron0x1d5ae10()*-0.452573);
}

double NNfunction_sb_uRcR::synapse0x1d77f00() {
   return (neuron0x1d5b150()*-0.0444344);
}

double NNfunction_sb_uRcR::synapse0x1d77f40() {
   return (neuron0x1d5b6b0()*-0.422054);
}

double NNfunction_sb_uRcR::synapse0x1d785c0() {
   return (neuron0x1d5b9f0()*-0.309452);
}

double NNfunction_sb_uRcR::synapse0x1d78600() {
   return (neuron0x1d5bd30()*-0.338413);
}

double NNfunction_sb_uRcR::synapse0x1d78640() {
   return (neuron0x1d5c070()*0.59934);
}

double NNfunction_sb_uRcR::synapse0x1d78680() {
   return (neuron0x1d5c3b0()*-0.143636);
}

double NNfunction_sb_uRcR::synapse0x1d786c0() {
   return (neuron0x1d5c6f0()*-0.66476);
}

double NNfunction_sb_uRcR::synapse0x1d78700() {
   return (neuron0x1d5ca30()*0.339041);
}

double NNfunction_sb_uRcR::synapse0x1d78a80() {
   return (neuron0x1d57de0()*0.385476);
}

double NNfunction_sb_uRcR::synapse0x1d78ac0() {
   return (neuron0x1d58090()*-0.464793);
}

double NNfunction_sb_uRcR::synapse0x1d78b00() {
   return (neuron0x1d583d0()*-0.234042);
}

double NNfunction_sb_uRcR::synapse0x1d78b40() {
   return (neuron0x1d58710()*-1.58281);
}

double NNfunction_sb_uRcR::synapse0x1d78b80() {
   return (neuron0x1d58a50()*-0.770054);
}

double NNfunction_sb_uRcR::synapse0x1d78bc0() {
   return (neuron0x1d58d90()*-0.016446);
}

double NNfunction_sb_uRcR::synapse0x1d78c00() {
   return (neuron0x1d590d0()*-0.822474);
}

double NNfunction_sb_uRcR::synapse0x1d78c40() {
   return (neuron0x1d59410()*-0.0503995);
}

double NNfunction_sb_uRcR::synapse0x1d78c80() {
   return (neuron0x1d59750()*0.503601);
}

double NNfunction_sb_uRcR::synapse0x1d78cc0() {
   return (neuron0x1d59a90()*-0.241616);
}

double NNfunction_sb_uRcR::synapse0x1d78d00() {
   return (neuron0x1d59dd0()*-0.379651);
}

double NNfunction_sb_uRcR::synapse0x1d78d40() {
   return (neuron0x1d5a110()*0.140292);
}

double NNfunction_sb_uRcR::synapse0x1d78d80() {
   return (neuron0x1d5a450()*0.416636);
}

double NNfunction_sb_uRcR::synapse0x1d78dc0() {
   return (neuron0x1d5a790()*0.48817);
}

double NNfunction_sb_uRcR::synapse0x1d78e00() {
   return (neuron0x1d5aad0()*-1.20911);
}

double NNfunction_sb_uRcR::synapse0x1d78e40() {
   return (neuron0x1d5ae10()*-0.165891);
}

double NNfunction_sb_uRcR::synapse0x1d788d0() {
   return (neuron0x1d5b150()*-1.37458);
}

double NNfunction_sb_uRcR::synapse0x1d78910() {
   return (neuron0x1d5b6b0()*-0.204961);
}

double NNfunction_sb_uRcR::synapse0x1d78f90() {
   return (neuron0x1d5b9f0()*0.348667);
}

double NNfunction_sb_uRcR::synapse0x1d78fd0() {
   return (neuron0x1d5bd30()*-0.702021);
}

double NNfunction_sb_uRcR::synapse0x1d79010() {
   return (neuron0x1d5c070()*0.470911);
}

double NNfunction_sb_uRcR::synapse0x1d79050() {
   return (neuron0x1d5c3b0()*-0.130957);
}

double NNfunction_sb_uRcR::synapse0x1d79090() {
   return (neuron0x1d5c6f0()*0.34224);
}

double NNfunction_sb_uRcR::synapse0x1d790d0() {
   return (neuron0x1d5ca30()*1.20104);
}

double NNfunction_sb_uRcR::synapse0x1d79450() {
   return (neuron0x1d57de0()*-0.0218873);
}

double NNfunction_sb_uRcR::synapse0x1d79490() {
   return (neuron0x1d58090()*-0.275536);
}

double NNfunction_sb_uRcR::synapse0x1d794d0() {
   return (neuron0x1d583d0()*-0.0605409);
}

double NNfunction_sb_uRcR::synapse0x1d79510() {
   return (neuron0x1d58710()*-0.649441);
}

double NNfunction_sb_uRcR::synapse0x1d79550() {
   return (neuron0x1d58a50()*0.0103304);
}

double NNfunction_sb_uRcR::synapse0x1d79590() {
   return (neuron0x1d58d90()*0.0433357);
}

double NNfunction_sb_uRcR::synapse0x1d795d0() {
   return (neuron0x1d590d0()*0.0386771);
}

double NNfunction_sb_uRcR::synapse0x1d79610() {
   return (neuron0x1d59410()*0.04133);
}

double NNfunction_sb_uRcR::synapse0x1d79650() {
   return (neuron0x1d59750()*-0.330692);
}

double NNfunction_sb_uRcR::synapse0x1d79690() {
   return (neuron0x1d59a90()*0.154742);
}

double NNfunction_sb_uRcR::synapse0x1d796d0() {
   return (neuron0x1d59dd0()*-0.378898);
}

double NNfunction_sb_uRcR::synapse0x1d79710() {
   return (neuron0x1d5a110()*-0.312279);
}

double NNfunction_sb_uRcR::synapse0x1d79750() {
   return (neuron0x1d5a450()*-0.347134);
}

double NNfunction_sb_uRcR::synapse0x1d79790() {
   return (neuron0x1d5a790()*-0.0595768);
}

double NNfunction_sb_uRcR::synapse0x1d797d0() {
   return (neuron0x1d5aad0()*-0.392264);
}

double NNfunction_sb_uRcR::synapse0x1d79810() {
   return (neuron0x1d5ae10()*-0.526883);
}

double NNfunction_sb_uRcR::synapse0x1d792a0() {
   return (neuron0x1d5b150()*0.0223524);
}

double NNfunction_sb_uRcR::synapse0x1d792e0() {
   return (neuron0x1d5b6b0()*0.0695703);
}

double NNfunction_sb_uRcR::synapse0x1d79960() {
   return (neuron0x1d5b9f0()*-0.133116);
}

double NNfunction_sb_uRcR::synapse0x1d799a0() {
   return (neuron0x1d5bd30()*0.150177);
}

double NNfunction_sb_uRcR::synapse0x1d799e0() {
   return (neuron0x1d5c070()*-0.0302113);
}

double NNfunction_sb_uRcR::synapse0x1d79a20() {
   return (neuron0x1d5c3b0()*0.0909454);
}

double NNfunction_sb_uRcR::synapse0x1d79a60() {
   return (neuron0x1d5c6f0()*0.100589);
}

double NNfunction_sb_uRcR::synapse0x1d79aa0() {
   return (neuron0x1d5ca30()*0.0418159);
}

double NNfunction_sb_uRcR::synapse0x1d79e20() {
   return (neuron0x1d57de0()*-0.267781);
}

double NNfunction_sb_uRcR::synapse0x1d79e60() {
   return (neuron0x1d58090()*0.0111618);
}

double NNfunction_sb_uRcR::synapse0x1d79ea0() {
   return (neuron0x1d583d0()*-0.55596);
}

double NNfunction_sb_uRcR::synapse0x1d79ee0() {
   return (neuron0x1d58710()*-1.28036);
}

double NNfunction_sb_uRcR::synapse0x1d79f20() {
   return (neuron0x1d58a50()*0.00834958);
}

double NNfunction_sb_uRcR::synapse0x1d79f60() {
   return (neuron0x1d58d90()*0.105082);
}

double NNfunction_sb_uRcR::synapse0x1d79fa0() {
   return (neuron0x1d590d0()*0.08205);
}

double NNfunction_sb_uRcR::synapse0x1d79fe0() {
   return (neuron0x1d59410()*-0.638639);
}

double NNfunction_sb_uRcR::synapse0x1d7a020() {
   return (neuron0x1d59750()*-0.382899);
}

double NNfunction_sb_uRcR::synapse0x1d7a060() {
   return (neuron0x1d59a90()*-0.513684);
}

double NNfunction_sb_uRcR::synapse0x1d7a0a0() {
   return (neuron0x1d59dd0()*0.110743);
}

double NNfunction_sb_uRcR::synapse0x1d7a0e0() {
   return (neuron0x1d5a110()*-0.312971);
}

double NNfunction_sb_uRcR::synapse0x1d7a120() {
   return (neuron0x1d5a450()*-0.217394);
}

double NNfunction_sb_uRcR::synapse0x1d7a160() {
   return (neuron0x1d5a790()*-1.29565);
}

double NNfunction_sb_uRcR::synapse0x1d7a1a0() {
   return (neuron0x1d5aad0()*0.063584);
}

double NNfunction_sb_uRcR::synapse0x1d7a1e0() {
   return (neuron0x1d5ae10()*-0.437464);
}

double NNfunction_sb_uRcR::synapse0x1d79c70() {
   return (neuron0x1d5b150()*0.27298);
}

double NNfunction_sb_uRcR::synapse0x1d79cb0() {
   return (neuron0x1d5b6b0()*-0.721769);
}

double NNfunction_sb_uRcR::synapse0x1d7a330() {
   return (neuron0x1d5b9f0()*-0.105544);
}

double NNfunction_sb_uRcR::synapse0x1d7a370() {
   return (neuron0x1d5bd30()*0.151442);
}

double NNfunction_sb_uRcR::synapse0x1d7a3b0() {
   return (neuron0x1d5c070()*0.2819);
}

double NNfunction_sb_uRcR::synapse0x1d7a3f0() {
   return (neuron0x1d5c3b0()*0.134682);
}

double NNfunction_sb_uRcR::synapse0x1d7a430() {
   return (neuron0x1d5c6f0()*0.315517);
}

double NNfunction_sb_uRcR::synapse0x1d7a470() {
   return (neuron0x1d5ca30()*-0.359527);
}

double NNfunction_sb_uRcR::synapse0x1d62f20() {
   return (neuron0x1d57de0()*0.0722001);
}

double NNfunction_sb_uRcR::synapse0x1d62f60() {
   return (neuron0x1d58090()*0.206837);
}

double NNfunction_sb_uRcR::synapse0x1d62fa0() {
   return (neuron0x1d583d0()*0.178952);
}

double NNfunction_sb_uRcR::synapse0x1d62fe0() {
   return (neuron0x1d58710()*-0.916359);
}

double NNfunction_sb_uRcR::synapse0x1d63020() {
   return (neuron0x1d58a50()*0.0627449);
}

double NNfunction_sb_uRcR::synapse0x1d63060() {
   return (neuron0x1d58d90()*0.150487);
}

double NNfunction_sb_uRcR::synapse0x1d630a0() {
   return (neuron0x1d590d0()*0.0841945);
}

double NNfunction_sb_uRcR::synapse0x1d630e0() {
   return (neuron0x1d59410()*0.0704227);
}

double NNfunction_sb_uRcR::synapse0x1d7ac00() {
   return (neuron0x1d59750()*0.0735384);
}

double NNfunction_sb_uRcR::synapse0x1d7ac40() {
   return (neuron0x1d59a90()*-0.222637);
}

double NNfunction_sb_uRcR::synapse0x1d7ac80() {
   return (neuron0x1d59dd0()*0.107153);
}

double NNfunction_sb_uRcR::synapse0x1d7acc0() {
   return (neuron0x1d5a110()*-0.142789);
}

double NNfunction_sb_uRcR::synapse0x1d7ad00() {
   return (neuron0x1d5a450()*0.220896);
}

double NNfunction_sb_uRcR::synapse0x1d7ad40() {
   return (neuron0x1d5a790()*0.0746674);
}

double NNfunction_sb_uRcR::synapse0x1d7ad80() {
   return (neuron0x1d5aad0()*-0.452276);
}

double NNfunction_sb_uRcR::synapse0x1d7adc0() {
   return (neuron0x1d5ae10()*-0.713137);
}

double NNfunction_sb_uRcR::synapse0x1d7a640() {
   return (neuron0x1d5b150()*0.0585719);
}

double NNfunction_sb_uRcR::synapse0x1d7a680() {
   return (neuron0x1d5b6b0()*-0.210788);
}

double NNfunction_sb_uRcR::synapse0x1d7af10() {
   return (neuron0x1d5b9f0()*0.0163782);
}

double NNfunction_sb_uRcR::synapse0x1d7af50() {
   return (neuron0x1d5bd30()*-0.217762);
}

double NNfunction_sb_uRcR::synapse0x1d7af90() {
   return (neuron0x1d5c070()*0.112261);
}

double NNfunction_sb_uRcR::synapse0x1d7afd0() {
   return (neuron0x1d5c3b0()*0.00055993);
}

double NNfunction_sb_uRcR::synapse0x1d7b010() {
   return (neuron0x1d5c6f0()*0.054676);
}

double NNfunction_sb_uRcR::synapse0x1d7b050() {
   return (neuron0x1d5ca30()*0.0434791);
}

double NNfunction_sb_uRcR::synapse0x1d7b3d0() {
   return (neuron0x1d57de0()*-0.251702);
}

double NNfunction_sb_uRcR::synapse0x1d7b410() {
   return (neuron0x1d58090()*-0.0720757);
}

double NNfunction_sb_uRcR::synapse0x1d7b450() {
   return (neuron0x1d583d0()*0.286435);
}

double NNfunction_sb_uRcR::synapse0x1d7b490() {
   return (neuron0x1d58710()*-0.948843);
}

double NNfunction_sb_uRcR::synapse0x1d7b4d0() {
   return (neuron0x1d58a50()*-0.70653);
}

double NNfunction_sb_uRcR::synapse0x1d7b510() {
   return (neuron0x1d58d90()*0.116648);
}

double NNfunction_sb_uRcR::synapse0x1d7b550() {
   return (neuron0x1d590d0()*-0.172344);
}

double NNfunction_sb_uRcR::synapse0x1d7b590() {
   return (neuron0x1d59410()*-0.358411);
}

double NNfunction_sb_uRcR::synapse0x1d7b5d0() {
   return (neuron0x1d59750()*0.40735);
}

double NNfunction_sb_uRcR::synapse0x1d7b610() {
   return (neuron0x1d59a90()*-0.213427);
}

double NNfunction_sb_uRcR::synapse0x1d7b650() {
   return (neuron0x1d59dd0()*0.234008);
}

double NNfunction_sb_uRcR::synapse0x1d7b690() {
   return (neuron0x1d5a110()*0.266382);
}

double NNfunction_sb_uRcR::synapse0x1d7b6d0() {
   return (neuron0x1d5a450()*0.844206);
}

double NNfunction_sb_uRcR::synapse0x1d7b710() {
   return (neuron0x1d5a790()*-0.138762);
}

double NNfunction_sb_uRcR::synapse0x1d7b750() {
   return (neuron0x1d5aad0()*-0.0591459);
}

double NNfunction_sb_uRcR::synapse0x1d7b790() {
   return (neuron0x1d5ae10()*-0.406255);
}

double NNfunction_sb_uRcR::synapse0x1d7b220() {
   return (neuron0x1d5b150()*-1.093);
}

double NNfunction_sb_uRcR::synapse0x1d7b260() {
   return (neuron0x1d5b6b0()*0.265294);
}

double NNfunction_sb_uRcR::synapse0x1d7b8e0() {
   return (neuron0x1d5b9f0()*-0.187209);
}

double NNfunction_sb_uRcR::synapse0x1d7b920() {
   return (neuron0x1d5bd30()*-0.387386);
}

double NNfunction_sb_uRcR::synapse0x1d7b960() {
   return (neuron0x1d5c070()*0.42504);
}

double NNfunction_sb_uRcR::synapse0x1d7b9a0() {
   return (neuron0x1d5c3b0()*0.0595399);
}

double NNfunction_sb_uRcR::synapse0x1d7b9e0() {
   return (neuron0x1d5c6f0()*-0.130646);
}

double NNfunction_sb_uRcR::synapse0x1d7ba20() {
   return (neuron0x1d5ca30()*0.590315);
}

double NNfunction_sb_uRcR::synapse0x1d7bda0() {
   return (neuron0x1d57de0()*-0.0701412);
}

double NNfunction_sb_uRcR::synapse0x1d7bde0() {
   return (neuron0x1d58090()*0.236548);
}

double NNfunction_sb_uRcR::synapse0x1d7be20() {
   return (neuron0x1d583d0()*-0.0738375);
}

double NNfunction_sb_uRcR::synapse0x1d7be60() {
   return (neuron0x1d58710()*2.65489);
}

double NNfunction_sb_uRcR::synapse0x1d7bea0() {
   return (neuron0x1d58a50()*0.0773495);
}

double NNfunction_sb_uRcR::synapse0x1d7bee0() {
   return (neuron0x1d58d90()*-0.0199116);
}

double NNfunction_sb_uRcR::synapse0x1d7bf20() {
   return (neuron0x1d590d0()*-0.0288167);
}

double NNfunction_sb_uRcR::synapse0x1d7bf60() {
   return (neuron0x1d59410()*0.265818);
}

double NNfunction_sb_uRcR::synapse0x1d7bfa0() {
   return (neuron0x1d59750()*0.0648981);
}

double NNfunction_sb_uRcR::synapse0x1d7bfe0() {
   return (neuron0x1d59a90()*0.17729);
}

double NNfunction_sb_uRcR::synapse0x1d7c020() {
   return (neuron0x1d59dd0()*0.152403);
}

double NNfunction_sb_uRcR::synapse0x1d7c060() {
   return (neuron0x1d5a110()*0.346242);
}

double NNfunction_sb_uRcR::synapse0x1d7c0a0() {
   return (neuron0x1d5a450()*0.377964);
}

double NNfunction_sb_uRcR::synapse0x1d7c0e0() {
   return (neuron0x1d5a790()*0.145315);
}

double NNfunction_sb_uRcR::synapse0x1d7c120() {
   return (neuron0x1d5aad0()*0.379843);
}

double NNfunction_sb_uRcR::synapse0x1d7c160() {
   return (neuron0x1d5ae10()*0.620882);
}

double NNfunction_sb_uRcR::synapse0x1d7bbf0() {
   return (neuron0x1d5b150()*0.0790631);
}

double NNfunction_sb_uRcR::synapse0x1d7bc30() {
   return (neuron0x1d5b6b0()*0.0736992);
}

double NNfunction_sb_uRcR::synapse0x1d6c760() {
   return (neuron0x1d5b9f0()*0.415355);
}

double NNfunction_sb_uRcR::synapse0x1d6c7a0() {
   return (neuron0x1d5bd30()*-0.101767);
}

double NNfunction_sb_uRcR::synapse0x1d6c7e0() {
   return (neuron0x1d5c070()*-0.299187);
}

double NNfunction_sb_uRcR::synapse0x1d6c820() {
   return (neuron0x1d5c3b0()*-0.0991294);
}

double NNfunction_sb_uRcR::synapse0x1d6c860() {
   return (neuron0x1d5c6f0()*0.0591578);
}

double NNfunction_sb_uRcR::synapse0x1d6c8a0() {
   return (neuron0x1d5ca30()*0.048675);
}

double NNfunction_sb_uRcR::synapse0x1d6cc20() {
   return (neuron0x1d57de0()*0.462159);
}

double NNfunction_sb_uRcR::synapse0x1d6cc60() {
   return (neuron0x1d58090()*-0.141103);
}

double NNfunction_sb_uRcR::synapse0x1d6cca0() {
   return (neuron0x1d583d0()*-0.0894399);
}

double NNfunction_sb_uRcR::synapse0x1d6cce0() {
   return (neuron0x1d58710()*0.585163);
}

double NNfunction_sb_uRcR::synapse0x1d6cd20() {
   return (neuron0x1d58a50()*0.0713842);
}

double NNfunction_sb_uRcR::synapse0x1d6cd60() {
   return (neuron0x1d58d90()*-0.17201);
}

double NNfunction_sb_uRcR::synapse0x1d6cda0() {
   return (neuron0x1d590d0()*-0.0492094);
}

double NNfunction_sb_uRcR::synapse0x1d6cde0() {
   return (neuron0x1d59410()*-1.00649);
}

double NNfunction_sb_uRcR::synapse0x1d6ce20() {
   return (neuron0x1d59750()*0.252774);
}

double NNfunction_sb_uRcR::synapse0x1d6ce60() {
   return (neuron0x1d59a90()*0.00360171);
}

double NNfunction_sb_uRcR::synapse0x1d6cea0() {
   return (neuron0x1d59dd0()*0.0579862);
}

double NNfunction_sb_uRcR::synapse0x1d6cee0() {
   return (neuron0x1d5a110()*-0.131979);
}

double NNfunction_sb_uRcR::synapse0x1d6cf20() {
   return (neuron0x1d5a450()*-0.27737);
}

double NNfunction_sb_uRcR::synapse0x1d6cf60() {
   return (neuron0x1d5a790()*-0.108858);
}

double NNfunction_sb_uRcR::synapse0x1d6cfa0() {
   return (neuron0x1d5aad0()*-0.053208);
}

double NNfunction_sb_uRcR::synapse0x1d6cfe0() {
   return (neuron0x1d5ae10()*0.239895);
}

double NNfunction_sb_uRcR::synapse0x1d6ca70() {
   return (neuron0x1d5b150()*0.167635);
}

double NNfunction_sb_uRcR::synapse0x1d6cab0() {
   return (neuron0x1d5b6b0()*-0.111961);
}

double NNfunction_sb_uRcR::synapse0x1d6d130() {
   return (neuron0x1d5b9f0()*-0.288643);
}

double NNfunction_sb_uRcR::synapse0x1d6d170() {
   return (neuron0x1d5bd30()*-0.176816);
}

double NNfunction_sb_uRcR::synapse0x1d6d1b0() {
   return (neuron0x1d5c070()*0.368706);
}

double NNfunction_sb_uRcR::synapse0x1d6d1f0() {
   return (neuron0x1d5c3b0()*-0.204592);
}

double NNfunction_sb_uRcR::synapse0x1d6d230() {
   return (neuron0x1d5c6f0()*0.0218856);
}

double NNfunction_sb_uRcR::synapse0x1d6d270() {
   return (neuron0x1d5ca30()*0.0165137);
}

double NNfunction_sb_uRcR::synapse0x1d6d5f0() {
   return (neuron0x1d57de0()*-0.00835694);
}

double NNfunction_sb_uRcR::synapse0x1d6d630() {
   return (neuron0x1d58090()*0.00629829);
}

double NNfunction_sb_uRcR::synapse0x1d6d670() {
   return (neuron0x1d583d0()*0.0249354);
}

double NNfunction_sb_uRcR::synapse0x1d6d6b0() {
   return (neuron0x1d58710()*-2.36837);
}

double NNfunction_sb_uRcR::synapse0x1d6d6f0() {
   return (neuron0x1d58a50()*0.019676);
}

double NNfunction_sb_uRcR::synapse0x1d6d730() {
   return (neuron0x1d58d90()*-0.0139872);
}

double NNfunction_sb_uRcR::synapse0x1d6d770() {
   return (neuron0x1d590d0()*0.0155601);
}

double NNfunction_sb_uRcR::synapse0x1d6d7b0() {
   return (neuron0x1d59410()*0.00828444);
}

double NNfunction_sb_uRcR::synapse0x1d6d7f0() {
   return (neuron0x1d59750()*-0.0370343);
}

double NNfunction_sb_uRcR::synapse0x1d6d830() {
   return (neuron0x1d59a90()*-0.0194766);
}

double NNfunction_sb_uRcR::synapse0x1d6d870() {
   return (neuron0x1d59dd0()*-0.0398578);
}

double NNfunction_sb_uRcR::synapse0x1d6d8b0() {
   return (neuron0x1d5a110()*0.00284198);
}

double NNfunction_sb_uRcR::synapse0x1d6d8f0() {
   return (neuron0x1d5a450()*-0.0239738);
}

double NNfunction_sb_uRcR::synapse0x1d6d930() {
   return (neuron0x1d5a790()*0.000267716);
}

double NNfunction_sb_uRcR::synapse0x1d6d970() {
   return (neuron0x1d5aad0()*0.33784);
}

double NNfunction_sb_uRcR::synapse0x1d6d9b0() {
   return (neuron0x1d5ae10()*0.352249);
}

double NNfunction_sb_uRcR::synapse0x1d6d440() {
   return (neuron0x1d5b150()*-0.011264);
}

double NNfunction_sb_uRcR::synapse0x1d6d480() {
   return (neuron0x1d5b6b0()*-0.0187258);
}

double NNfunction_sb_uRcR::synapse0x1d6db00() {
   return (neuron0x1d5b9f0()*-0.0522016);
}

double NNfunction_sb_uRcR::synapse0x1d6db40() {
   return (neuron0x1d5bd30()*-0.0255278);
}

double NNfunction_sb_uRcR::synapse0x1d6db80() {
   return (neuron0x1d5c070()*-0.00473676);
}

double NNfunction_sb_uRcR::synapse0x1d6dbc0() {
   return (neuron0x1d5c3b0()*0.00982104);
}

double NNfunction_sb_uRcR::synapse0x1d6dc00() {
   return (neuron0x1d5c6f0()*0.0212743);
}

double NNfunction_sb_uRcR::synapse0x1d6dc40() {
   return (neuron0x1d5ca30()*0.00513142);
}

double NNfunction_sb_uRcR::synapse0x1d6dfc0() {
   return (neuron0x1d57de0()*-0.156275);
}

double NNfunction_sb_uRcR::synapse0x1d6e000() {
   return (neuron0x1d58090()*-0.145693);
}

double NNfunction_sb_uRcR::synapse0x1d6e040() {
   return (neuron0x1d583d0()*0.0323924);
}

double NNfunction_sb_uRcR::synapse0x1d6e080() {
   return (neuron0x1d58710()*1.08988);
}

double NNfunction_sb_uRcR::synapse0x1d6e0c0() {
   return (neuron0x1d58a50()*0.0500758);
}

double NNfunction_sb_uRcR::synapse0x1d6e100() {
   return (neuron0x1d58d90()*0.0229507);
}

double NNfunction_sb_uRcR::synapse0x1d6e140() {
   return (neuron0x1d590d0()*0.0359586);
}

double NNfunction_sb_uRcR::synapse0x1d6e180() {
   return (neuron0x1d59410()*0.0931373);
}

double NNfunction_sb_uRcR::synapse0x1d6e1c0() {
   return (neuron0x1d59750()*-0.230669);
}

double NNfunction_sb_uRcR::synapse0x1d6e200() {
   return (neuron0x1d59a90()*0.000530935);
}

double NNfunction_sb_uRcR::synapse0x1d6e240() {
   return (neuron0x1d59dd0()*-0.067609);
}

double NNfunction_sb_uRcR::synapse0x1d6e280() {
   return (neuron0x1d5a110()*0.164179);
}

double NNfunction_sb_uRcR::synapse0x1d6e2c0() {
   return (neuron0x1d5a450()*0.0300077);
}

double NNfunction_sb_uRcR::synapse0x1d6e300() {
   return (neuron0x1d5a790()*0.0304726);
}

double NNfunction_sb_uRcR::synapse0x1d6e340() {
   return (neuron0x1d5aad0()*-0.80928);
}

double NNfunction_sb_uRcR::synapse0x1d6e380() {
   return (neuron0x1d5ae10()*0.104003);
}

double NNfunction_sb_uRcR::synapse0x1d6de10() {
   return (neuron0x1d5b150()*0.0575995);
}

double NNfunction_sb_uRcR::synapse0x1d6de50() {
   return (neuron0x1d5b6b0()*0.012775);
}

double NNfunction_sb_uRcR::synapse0x1d6e4d0() {
   return (neuron0x1d5b9f0()*-0.111657);
}

double NNfunction_sb_uRcR::synapse0x1d6e510() {
   return (neuron0x1d5bd30()*-0.044129);
}

double NNfunction_sb_uRcR::synapse0x1d6e550() {
   return (neuron0x1d5c070()*0.115083);
}

double NNfunction_sb_uRcR::synapse0x1d6e590() {
   return (neuron0x1d5c3b0()*0.0765028);
}

double NNfunction_sb_uRcR::synapse0x1d6e5d0() {
   return (neuron0x1d5c6f0()*0.00231677);
}

double NNfunction_sb_uRcR::synapse0x1d6e610() {
   return (neuron0x1d5ca30()*-0.0162455);
}

double NNfunction_sb_uRcR::synapse0x1d804e0() {
   return (neuron0x1d57de0()*0.0273462);
}

double NNfunction_sb_uRcR::synapse0x1d80520() {
   return (neuron0x1d58090()*0.00518574);
}

double NNfunction_sb_uRcR::synapse0x1d80560() {
   return (neuron0x1d583d0()*0.0165507);
}

double NNfunction_sb_uRcR::synapse0x1d805a0() {
   return (neuron0x1d58710()*-0.112043);
}

double NNfunction_sb_uRcR::synapse0x1d805e0() {
   return (neuron0x1d58a50()*0.0178796);
}

double NNfunction_sb_uRcR::synapse0x1d80620() {
   return (neuron0x1d58d90()*0.013102);
}

double NNfunction_sb_uRcR::synapse0x1d80660() {
   return (neuron0x1d590d0()*0.0161481);
}

double NNfunction_sb_uRcR::synapse0x1d806a0() {
   return (neuron0x1d59410()*0.00152856);
}

double NNfunction_sb_uRcR::synapse0x1d806e0() {
   return (neuron0x1d59750()*0.00277887);
}

double NNfunction_sb_uRcR::synapse0x1d80720() {
   return (neuron0x1d59a90()*-0.00785887);
}

double NNfunction_sb_uRcR::synapse0x1d80760() {
   return (neuron0x1d59dd0()*-0.00514412);
}

double NNfunction_sb_uRcR::synapse0x1d807a0() {
   return (neuron0x1d5a110()*0.0105244);
}

double NNfunction_sb_uRcR::synapse0x1d807e0() {
   return (neuron0x1d5a450()*0.0140763);
}

double NNfunction_sb_uRcR::synapse0x1d80820() {
   return (neuron0x1d5a790()*-0.0198187);
}

double NNfunction_sb_uRcR::synapse0x1d80860() {
   return (neuron0x1d5aad0()*0.148823);
}

double NNfunction_sb_uRcR::synapse0x1d808a0() {
   return (neuron0x1d5ae10()*-0.677467);
}

double NNfunction_sb_uRcR::synapse0x1d6e650() {
   return (neuron0x1d5b150()*-0.00776739);
}

double NNfunction_sb_uRcR::synapse0x1d6e690() {
   return (neuron0x1d5b6b0()*-0.0128896);
}

double NNfunction_sb_uRcR::synapse0x1d809f0() {
   return (neuron0x1d5b9f0()*-0.00146927);
}

double NNfunction_sb_uRcR::synapse0x1d80a30() {
   return (neuron0x1d5bd30()*0.00269292);
}

double NNfunction_sb_uRcR::synapse0x1d80a70() {
   return (neuron0x1d5c070()*0.00825087);
}

double NNfunction_sb_uRcR::synapse0x1d80ab0() {
   return (neuron0x1d5c3b0()*0.00142908);
}

double NNfunction_sb_uRcR::synapse0x1d80af0() {
   return (neuron0x1d5c6f0()*0.00454443);
}

double NNfunction_sb_uRcR::synapse0x1d80b30() {
   return (neuron0x1d5ca30()*-0.00453004);
}

double NNfunction_sb_uRcR::synapse0x1d80eb0() {
   return (neuron0x1d57de0()*0.0268004);
}

double NNfunction_sb_uRcR::synapse0x1d80ef0() {
   return (neuron0x1d58090()*0.0258034);
}

double NNfunction_sb_uRcR::synapse0x1d80f30() {
   return (neuron0x1d583d0()*0.0198812);
}

double NNfunction_sb_uRcR::synapse0x1d80f70() {
   return (neuron0x1d58710()*7.36121);
}

double NNfunction_sb_uRcR::synapse0x1d80fb0() {
   return (neuron0x1d58a50()*0.00466077);
}

double NNfunction_sb_uRcR::synapse0x1d80ff0() {
   return (neuron0x1d58d90()*0.00244723);
}

double NNfunction_sb_uRcR::synapse0x1d81030() {
   return (neuron0x1d590d0()*0.0152702);
}

double NNfunction_sb_uRcR::synapse0x1d81070() {
   return (neuron0x1d59410()*-6.56941e-05);
}

double NNfunction_sb_uRcR::synapse0x1d810b0() {
   return (neuron0x1d59750()*0.0327266);
}

double NNfunction_sb_uRcR::synapse0x1d810f0() {
   return (neuron0x1d59a90()*-0.0124406);
}

double NNfunction_sb_uRcR::synapse0x1d81130() {
   return (neuron0x1d59dd0()*-0.027297);
}

double NNfunction_sb_uRcR::synapse0x1d81170() {
   return (neuron0x1d5a110()*-0.043092);
}

double NNfunction_sb_uRcR::synapse0x1d811b0() {
   return (neuron0x1d5a450()*-0.0402662);
}

double NNfunction_sb_uRcR::synapse0x1d811f0() {
   return (neuron0x1d5a790()*0.00664061);
}

double NNfunction_sb_uRcR::synapse0x1d81230() {
   return (neuron0x1d5aad0()*0.349663);
}

double NNfunction_sb_uRcR::synapse0x1d81270() {
   return (neuron0x1d5ae10()*0.263496);
}

double NNfunction_sb_uRcR::synapse0x1d80d00() {
   return (neuron0x1d5b150()*0.0475441);
}

double NNfunction_sb_uRcR::synapse0x1d80d40() {
   return (neuron0x1d5b6b0()*-0.00191343);
}

double NNfunction_sb_uRcR::synapse0x1d813c0() {
   return (neuron0x1d5b9f0()*-0.0309674);
}

double NNfunction_sb_uRcR::synapse0x1d81400() {
   return (neuron0x1d5bd30()*-0.041863);
}

double NNfunction_sb_uRcR::synapse0x1d81440() {
   return (neuron0x1d5c070()*-0.01488);
}

double NNfunction_sb_uRcR::synapse0x1d81480() {
   return (neuron0x1d5c3b0()*-0.0114536);
}

double NNfunction_sb_uRcR::synapse0x1d814c0() {
   return (neuron0x1d5c6f0()*0.00734078);
}

double NNfunction_sb_uRcR::synapse0x1d81500() {
   return (neuron0x1d5ca30()*0.0349382);
}

double NNfunction_sb_uRcR::synapse0x1d81880() {
   return (neuron0x1d57de0()*-0.849757);
}

double NNfunction_sb_uRcR::synapse0x1d818c0() {
   return (neuron0x1d58090()*0.186536);
}

double NNfunction_sb_uRcR::synapse0x1d81900() {
   return (neuron0x1d583d0()*0.355645);
}

double NNfunction_sb_uRcR::synapse0x1d81940() {
   return (neuron0x1d58710()*0.298391);
}

double NNfunction_sb_uRcR::synapse0x1d81980() {
   return (neuron0x1d58a50()*-0.15546);
}

double NNfunction_sb_uRcR::synapse0x1d819c0() {
   return (neuron0x1d58d90()*0.460622);
}

double NNfunction_sb_uRcR::synapse0x1d81a00() {
   return (neuron0x1d590d0()*1.01299);
}

double NNfunction_sb_uRcR::synapse0x1d81a40() {
   return (neuron0x1d59410()*0.320532);
}

double NNfunction_sb_uRcR::synapse0x1d81a80() {
   return (neuron0x1d59750()*0.146234);
}

double NNfunction_sb_uRcR::synapse0x1d81ac0() {
   return (neuron0x1d59a90()*0.180104);
}

double NNfunction_sb_uRcR::synapse0x1d81b00() {
   return (neuron0x1d59dd0()*-0.0794896);
}

double NNfunction_sb_uRcR::synapse0x1d81b40() {
   return (neuron0x1d5a110()*0.695163);
}

double NNfunction_sb_uRcR::synapse0x1d81b80() {
   return (neuron0x1d5a450()*0.775713);
}

double NNfunction_sb_uRcR::synapse0x1d81bc0() {
   return (neuron0x1d5a790()*0.063463);
}

double NNfunction_sb_uRcR::synapse0x1d81c00() {
   return (neuron0x1d5aad0()*-0.107127);
}

double NNfunction_sb_uRcR::synapse0x1d81c40() {
   return (neuron0x1d5ae10()*-0.595568);
}

double NNfunction_sb_uRcR::synapse0x1d816d0() {
   return (neuron0x1d5b150()*-0.155707);
}

double NNfunction_sb_uRcR::synapse0x1d81710() {
   return (neuron0x1d5b6b0()*-0.0141915);
}

double NNfunction_sb_uRcR::synapse0x1d81d90() {
   return (neuron0x1d5b9f0()*0.488853);
}

double NNfunction_sb_uRcR::synapse0x1d81dd0() {
   return (neuron0x1d5bd30()*-0.434863);
}

double NNfunction_sb_uRcR::synapse0x1d81e10() {
   return (neuron0x1d5c070()*0.911814);
}

double NNfunction_sb_uRcR::synapse0x1d81e50() {
   return (neuron0x1d5c3b0()*0.0997898);
}

double NNfunction_sb_uRcR::synapse0x1d81e90() {
   return (neuron0x1d5c6f0()*-0.462611);
}

double NNfunction_sb_uRcR::synapse0x1d81ed0() {
   return (neuron0x1d5ca30()*0.776413);
}

double NNfunction_sb_uRcR::synapse0x1d82250() {
   return (neuron0x1d57de0()*-0.211506);
}

double NNfunction_sb_uRcR::synapse0x1d82290() {
   return (neuron0x1d58090()*0.43984);
}

double NNfunction_sb_uRcR::synapse0x1d822d0() {
   return (neuron0x1d583d0()*0.0957114);
}

double NNfunction_sb_uRcR::synapse0x1d82310() {
   return (neuron0x1d58710()*-1.08938);
}

double NNfunction_sb_uRcR::synapse0x1d82350() {
   return (neuron0x1d58a50()*-0.125144);
}

double NNfunction_sb_uRcR::synapse0x1d82390() {
   return (neuron0x1d58d90()*0.252145);
}

double NNfunction_sb_uRcR::synapse0x1d823d0() {
   return (neuron0x1d590d0()*-0.0687337);
}

double NNfunction_sb_uRcR::synapse0x1d82410() {
   return (neuron0x1d59410()*0.630836);
}

double NNfunction_sb_uRcR::synapse0x1d82450() {
   return (neuron0x1d59750()*-0.219328);
}

double NNfunction_sb_uRcR::synapse0x1d82490() {
   return (neuron0x1d59a90()*0.0176064);
}

double NNfunction_sb_uRcR::synapse0x1d824d0() {
   return (neuron0x1d59dd0()*0.461274);
}

double NNfunction_sb_uRcR::synapse0x1d82510() {
   return (neuron0x1d5a110()*0.191922);
}

double NNfunction_sb_uRcR::synapse0x1d82550() {
   return (neuron0x1d5a450()*0.392048);
}

double NNfunction_sb_uRcR::synapse0x1d82590() {
   return (neuron0x1d5a790()*0.446794);
}

double NNfunction_sb_uRcR::synapse0x1d825d0() {
   return (neuron0x1d5aad0()*0.372127);
}

double NNfunction_sb_uRcR::synapse0x1d82610() {
   return (neuron0x1d5ae10()*0.323195);
}

double NNfunction_sb_uRcR::synapse0x1d820a0() {
   return (neuron0x1d5b150()*-0.365155);
}

double NNfunction_sb_uRcR::synapse0x1d820e0() {
   return (neuron0x1d5b6b0()*-0.0506562);
}

double NNfunction_sb_uRcR::synapse0x1d82760() {
   return (neuron0x1d5b9f0()*0.581111);
}

double NNfunction_sb_uRcR::synapse0x1d827a0() {
   return (neuron0x1d5bd30()*0.236151);
}

double NNfunction_sb_uRcR::synapse0x1d827e0() {
   return (neuron0x1d5c070()*-0.658063);
}

double NNfunction_sb_uRcR::synapse0x1d82820() {
   return (neuron0x1d5c3b0()*0.143913);
}

double NNfunction_sb_uRcR::synapse0x1d82860() {
   return (neuron0x1d5c6f0()*-0.231328);
}

double NNfunction_sb_uRcR::synapse0x1d828a0() {
   return (neuron0x1d5ca30()*0.194689);
}

double NNfunction_sb_uRcR::synapse0x1b22710() {
   return (neuron0x1d5cea0()*-0.100272);
}

double NNfunction_sb_uRcR::synapse0x1b22750() {
   return (neuron0x1d5d6e0()*-0.0274601);
}

double NNfunction_sb_uRcR::synapse0x1d5f250() {
   return (neuron0x1d5e1c0()*-1.03531);
}

double NNfunction_sb_uRcR::synapse0x1d5f290() {
   return (neuron0x1d5dc60()*-0.0434244);
}

double NNfunction_sb_uRcR::synapse0x1d60d20() {
   return (neuron0x1d5efa0()*-0.407048);
}

double NNfunction_sb_uRcR::synapse0x1d60d60() {
   return (neuron0x1d60a70()*-0.0259722);
}

double NNfunction_sb_uRcR::synapse0x1d61af0() {
   return (neuron0x1d61840()*-0.774026);
}

double NNfunction_sb_uRcR::synapse0x1d61b30() {
   return (neuron0x1d62210()*0.0739153);
}

double NNfunction_sb_uRcR::synapse0x1d624c0() {
   return (neuron0x1d62be0()*0.00642952);
}

double NNfunction_sb_uRcR::synapse0x1d62500() {
   return (neuron0x1d636c0()*0.614129);
}

double NNfunction_sb_uRcR::synapse0x1d62e90() {
   return (neuron0x1d64090()*0.0166949);
}

double NNfunction_sb_uRcR::synapse0x1d62ed0() {
   return (neuron0x1d61170()*0.0458377);
}

double NNfunction_sb_uRcR::synapse0x1d63970() {
   return (neuron0x1d65c40()*-0.0168584);
}

double NNfunction_sb_uRcR::synapse0x1d639b0() {
   return (neuron0x1d66610()*0.0233203);
}

double NNfunction_sb_uRcR::synapse0x1d64340() {
   return (neuron0x1d66fe0()*-0.0619114);
}

double NNfunction_sb_uRcR::synapse0x1d64380() {
   return (neuron0x1d679b0()*0.0383356);
}

double NNfunction_sb_uRcR::synapse0x1d61420() {
   return (neuron0x1d697c0()*0.73598);
}

double NNfunction_sb_uRcR::synapse0x1d61460() {
   return (neuron0x1d69aa0()*0.872846);
}

double NNfunction_sb_uRcR::synapse0x1d65ef0() {
   return (neuron0x1d6a470()*-0.0579362);
}

double NNfunction_sb_uRcR::synapse0x1d65f30() {
   return (neuron0x1d6ae40()*0.0222787);
}

double NNfunction_sb_uRcR::synapse0x1d668c0() {
   return (neuron0x1d6b810()*0.0127499);
}

double NNfunction_sb_uRcR::synapse0x1d66900() {
   return (neuron0x1d6c1e0()*0.213136);
}

double NNfunction_sb_uRcR::synapse0x1d67290() {
   return (neuron0x1d64d30()*0.0855687);
}

double NNfunction_sb_uRcR::synapse0x1d672d0() {
   return (neuron0x1d65700()*0.0820448);
}

double NNfunction_sb_uRcR::synapse0x1d67c60() {
   return (neuron0x1d6ef70()*-0.696148);
}

double NNfunction_sb_uRcR::synapse0x1d67ca0() {
   return (neuron0x1d6f940()*0.349952);
}

double NNfunction_sb_uRcR::synapse0x1d5acf0() {
   return (neuron0x1d70310()*0.0161722);
}

double NNfunction_sb_uRcR::synapse0x1d5ad30() {
   return (neuron0x1d70ce0()*0.0211425);
}

double NNfunction_sb_uRcR::synapse0x1d69d50() {
   return (neuron0x1d716b0()*0.45569);
}

double NNfunction_sb_uRcR::synapse0x1d69d90() {
   return (neuron0x1d72080()*-0.317714);
}

double NNfunction_sb_uRcR::synapse0x1d6a720() {
   return (neuron0x1d72a50()*-0.0935122);
}

double NNfunction_sb_uRcR::synapse0x1d6a760() {
   return (neuron0x1d73420()*0.0959736);
}

double NNfunction_sb_uRcR::synapse0x1d6b0f0() {
   return (neuron0x1d694b0()*-0.0480585);
}

double NNfunction_sb_uRcR::synapse0x1d6b130() {
   return (neuron0x1d76000()*-0.00286273);
}

double NNfunction_sb_uRcR::synapse0x1d6bac0() {
   return (neuron0x1d769d0()*-0.0770525);
}

double NNfunction_sb_uRcR::synapse0x1d6bb00() {
   return (neuron0x1d773a0()*0.0664641);
}

double NNfunction_sb_uRcR::synapse0x1d6c490() {
   return (neuron0x1d77d70()*0.0888479);
}

double NNfunction_sb_uRcR::synapse0x1d6c4d0() {
   return (neuron0x1d78740()*-0.0521161);
}

double NNfunction_sb_uRcR::synapse0x1d64fe0() {
   return (neuron0x1d79110()*0.0565692);
}

double NNfunction_sb_uRcR::synapse0x1d65020() {
   return (neuron0x1d79ae0()*-0.034376);
}

double NNfunction_sb_uRcR::synapse0x1d6e890() {
   return (neuron0x1d7a4b0()*-0.396614);
}

double NNfunction_sb_uRcR::synapse0x1d6e8d0() {
   return (neuron0x1d7b090()*0.0699414);
}

double NNfunction_sb_uRcR::synapse0x1d6f220() {
   return (neuron0x1d7ba60()*-0.102785);
}

double NNfunction_sb_uRcR::synapse0x1d6f260() {
   return (neuron0x1d6c8e0()*-0.0121821);
}

double NNfunction_sb_uRcR::synapse0x1d6fbf0() {
   return (neuron0x1d6d2b0()*1.18687);
}

double NNfunction_sb_uRcR::synapse0x1d6fc30() {
   return (neuron0x1d6dc80()*0.278337);
}

double NNfunction_sb_uRcR::synapse0x1d705c0() {
   return (neuron0x1d802c0()*-1.29211);
}

double NNfunction_sb_uRcR::synapse0x1d70600() {
   return (neuron0x1d80b70()*0.378697);
}

double NNfunction_sb_uRcR::synapse0x1d70f90() {
   return (neuron0x1d81540()*0.0785393);
}

double NNfunction_sb_uRcR::synapse0x1d70fd0() {
   return (neuron0x1d81f10()*0.033399);
}

double NNfunction_sb_uRcR::synapse0x1d736d0() {
   return (neuron0x1d5cea0()*-0.675969);
}

double NNfunction_sb_uRcR::synapse0x1d73710() {
   return (neuron0x1d5d6e0()*0.793057);
}

double NNfunction_sb_uRcR::synapse0x1d68c90() {
   return (neuron0x1d5e1c0()*-5.38201);
}

double NNfunction_sb_uRcR::synapse0x1d68cd0() {
   return (neuron0x1d5dc60()*0.74126);
}

double NNfunction_sb_uRcR::synapse0x1d762b0() {
   return (neuron0x1d5efa0()*-1.80193);
}

double NNfunction_sb_uRcR::synapse0x1d762f0() {
   return (neuron0x1d60a70()*-0.279564);
}

double NNfunction_sb_uRcR::synapse0x1d76c80() {
   return (neuron0x1d61840()*-2.69398);
}

double NNfunction_sb_uRcR::synapse0x1d76cc0() {
   return (neuron0x1d62210()*-0.973461);
}

double NNfunction_sb_uRcR::synapse0x1d77650() {
   return (neuron0x1d62be0()*0.647919);
}

double NNfunction_sb_uRcR::synapse0x1d77690() {
   return (neuron0x1d636c0()*0.846989);
}

double NNfunction_sb_uRcR::synapse0x1d78020() {
   return (neuron0x1d64090()*-0.483487);
}

double NNfunction_sb_uRcR::synapse0x1d78060() {
   return (neuron0x1d61170()*-0.670996);
}

double NNfunction_sb_uRcR::synapse0x1d789f0() {
   return (neuron0x1d65c40()*0.50047);
}

double NNfunction_sb_uRcR::synapse0x1d78a30() {
   return (neuron0x1d66610()*-1.39873);
}

double NNfunction_sb_uRcR::synapse0x1d793c0() {
   return (neuron0x1d66fe0()*-0.197541);
}

double NNfunction_sb_uRcR::synapse0x1d79400() {
   return (neuron0x1d679b0()*-0.666635);
}

double NNfunction_sb_uRcR::synapse0x1d79d90() {
   return (neuron0x1d697c0()*1.80087);
}

double NNfunction_sb_uRcR::synapse0x1d79dd0() {
   return (neuron0x1d69aa0()*-2.31032);
}

double NNfunction_sb_uRcR::synapse0x1d7a760() {
   return (neuron0x1d6a470()*0.645196);
}

double NNfunction_sb_uRcR::synapse0x1d7a7a0() {
   return (neuron0x1d6ae40()*0.48456);
}

double NNfunction_sb_uRcR::synapse0x1d7b340() {
   return (neuron0x1d6b810()*0.947949);
}

double NNfunction_sb_uRcR::synapse0x1d7b380() {
   return (neuron0x1d6c1e0()*-0.109116);
}

double NNfunction_sb_uRcR::synapse0x1d7bd10() {
   return (neuron0x1d64d30()*-0.428471);
}

double NNfunction_sb_uRcR::synapse0x1d7bd50() {
   return (neuron0x1d65700()*0.228048);
}

double NNfunction_sb_uRcR::synapse0x1d6cb90() {
   return (neuron0x1d6ef70()*0.156146);
}

double NNfunction_sb_uRcR::synapse0x1d6cbd0() {
   return (neuron0x1d6f940()*-0.682436);
}

double NNfunction_sb_uRcR::synapse0x1d6d560() {
   return (neuron0x1d70310()*0.485994);
}

double NNfunction_sb_uRcR::synapse0x1d6d5a0() {
   return (neuron0x1d70ce0()*0.012616);
}

double NNfunction_sb_uRcR::synapse0x1d6df30() {
   return (neuron0x1d716b0()*2.72938);
}

double NNfunction_sb_uRcR::synapse0x1d6df70() {
   return (neuron0x1d72080()*-1.83767);
}

double NNfunction_sb_uRcR::synapse0x1d80450() {
   return (neuron0x1d72a50()*-0.169619);
}

double NNfunction_sb_uRcR::synapse0x1d80490() {
   return (neuron0x1d73420()*0.68693);
}

double NNfunction_sb_uRcR::synapse0x1d80e20() {
   return (neuron0x1d694b0()*0.215548);
}

double NNfunction_sb_uRcR::synapse0x1d80e60() {
   return (neuron0x1d76000()*-0.0390956);
}

double NNfunction_sb_uRcR::synapse0x1d817f0() {
   return (neuron0x1d769d0()*0.746117);
}

double NNfunction_sb_uRcR::synapse0x1d81830() {
   return (neuron0x1d773a0()*-1.0394);
}

double NNfunction_sb_uRcR::synapse0x1d821c0() {
   return (neuron0x1d77d70()*-0.77523);
}

double NNfunction_sb_uRcR::synapse0x1d82200() {
   return (neuron0x1d78740()*0.677593);
}

double NNfunction_sb_uRcR::synapse0x1d5d150() {
   return (neuron0x1d79110()*1.38168);
}

double NNfunction_sb_uRcR::synapse0x1d5d190() {
   return (neuron0x1d79ae0()*0.0217272);
}

double NNfunction_sb_uRcR::synapse0x1d71960() {
   return (neuron0x1d7a4b0()*2.00029);
}

double NNfunction_sb_uRcR::synapse0x1d719a0() {
   return (neuron0x1d7b090()*-0.348535);
}

double NNfunction_sb_uRcR::synapse0x1d828e0() {
   return (neuron0x1d7ba60()*0.21278);
}

double NNfunction_sb_uRcR::synapse0x1d82920() {
   return (neuron0x1d6c8e0()*1.19466);
}

double NNfunction_sb_uRcR::synapse0x1d82960() {
   return (neuron0x1d6d2b0()*3.32438);
}

double NNfunction_sb_uRcR::synapse0x1d829a0() {
   return (neuron0x1d6dc80()*2.03881);
}

double NNfunction_sb_uRcR::synapse0x1d89850() {
   return (neuron0x1d802c0()*-1.29049);
}

double NNfunction_sb_uRcR::synapse0x1d89890() {
   return (neuron0x1d80b70()*2.00466);
}

double NNfunction_sb_uRcR::synapse0x1d898d0() {
   return (neuron0x1d81540()*-0.253006);
}

double NNfunction_sb_uRcR::synapse0x1d89910() {
   return (neuron0x1d81f10()*0.615275);
}

double NNfunction_sb_uRcR::synapse0x1d89c90() {
   return (neuron0x1d5cea0()*-0.352818);
}

double NNfunction_sb_uRcR::synapse0x1d89cd0() {
   return (neuron0x1d5d6e0()*-0.046211);
}

double NNfunction_sb_uRcR::synapse0x1d89d10() {
   return (neuron0x1d5e1c0()*-0.280593);
}

double NNfunction_sb_uRcR::synapse0x1d89d50() {
   return (neuron0x1d5dc60()*0.0114062);
}

double NNfunction_sb_uRcR::synapse0x1d89d90() {
   return (neuron0x1d5efa0()*0.462056);
}

double NNfunction_sb_uRcR::synapse0x1d89dd0() {
   return (neuron0x1d60a70()*0.0592143);
}

double NNfunction_sb_uRcR::synapse0x1d89e10() {
   return (neuron0x1d61840()*0.0860824);
}

double NNfunction_sb_uRcR::synapse0x1d89e50() {
   return (neuron0x1d62210()*-0.021556);
}

double NNfunction_sb_uRcR::synapse0x1d89e90() {
   return (neuron0x1d62be0()*-0.0751562);
}

double NNfunction_sb_uRcR::synapse0x1d89ed0() {
   return (neuron0x1d636c0()*0.163623);
}

double NNfunction_sb_uRcR::synapse0x1d89f10() {
   return (neuron0x1d64090()*0.0185113);
}

double NNfunction_sb_uRcR::synapse0x1d89f50() {
   return (neuron0x1d61170()*-0.0046981);
}

double NNfunction_sb_uRcR::synapse0x1d89f90() {
   return (neuron0x1d65c40()*-0.00222087);
}

double NNfunction_sb_uRcR::synapse0x1d89fd0() {
   return (neuron0x1d66610()*-0.112199);
}

double NNfunction_sb_uRcR::synapse0x1d8a010() {
   return (neuron0x1d66fe0()*0.0753333);
}

double NNfunction_sb_uRcR::synapse0x1d8a050() {
   return (neuron0x1d679b0()*-0.0149511);
}

double NNfunction_sb_uRcR::synapse0x1d89ae0() {
   return (neuron0x1d697c0()*2.27432);
}

double NNfunction_sb_uRcR::synapse0x1d89b20() {
   return (neuron0x1d69aa0()*-0.911055);
}

double NNfunction_sb_uRcR::synapse0x1d8a1a0() {
   return (neuron0x1d6a470()*0.0379432);
}

double NNfunction_sb_uRcR::synapse0x1d8a1e0() {
   return (neuron0x1d6ae40()*-0.0672572);
}

double NNfunction_sb_uRcR::synapse0x1d8a220() {
   return (neuron0x1d6b810()*-0.037767);
}

double NNfunction_sb_uRcR::synapse0x1d8a260() {
   return (neuron0x1d6c1e0()*-2.99123);
}

double NNfunction_sb_uRcR::synapse0x1d8a2a0() {
   return (neuron0x1d64d30()*-0.0777696);
}

double NNfunction_sb_uRcR::synapse0x1d8a2e0() {
   return (neuron0x1d65700()*-0.0371105);
}

double NNfunction_sb_uRcR::synapse0x1d8a320() {
   return (neuron0x1d6ef70()*-1.47645);
}

double NNfunction_sb_uRcR::synapse0x1d8a360() {
   return (neuron0x1d6f940()*-0.457752);
}

double NNfunction_sb_uRcR::synapse0x1d8a3a0() {
   return (neuron0x1d70310()*-0.0403545);
}

double NNfunction_sb_uRcR::synapse0x1d8a3e0() {
   return (neuron0x1d70ce0()*-0.0379843);
}

double NNfunction_sb_uRcR::synapse0x1d8a420() {
   return (neuron0x1d716b0()*1.66886);
}

double NNfunction_sb_uRcR::synapse0x1d8a460() {
   return (neuron0x1d72080()*0.457935);
}

double NNfunction_sb_uRcR::synapse0x1d8a4a0() {
   return (neuron0x1d72a50()*0.84716);
}

double NNfunction_sb_uRcR::synapse0x1d8a4e0() {
   return (neuron0x1d73420()*-0.0485938);
}

double NNfunction_sb_uRcR::synapse0x1d8a090() {
   return (neuron0x1d694b0()*0.0718943);
}

double NNfunction_sb_uRcR::synapse0x1d8a0d0() {
   return (neuron0x1d76000()*0.0305465);
}

double NNfunction_sb_uRcR::synapse0x1d8a110() {
   return (neuron0x1d769d0()*0.0585664);
}

double NNfunction_sb_uRcR::synapse0x1d8a150() {
   return (neuron0x1d773a0()*-0.0311256);
}

double NNfunction_sb_uRcR::synapse0x1d8a730() {
   return (neuron0x1d77d70()*-0.0344639);
}

double NNfunction_sb_uRcR::synapse0x1d8a770() {
   return (neuron0x1d78740()*0.0120256);
}

double NNfunction_sb_uRcR::synapse0x1d8a7b0() {
   return (neuron0x1d79110()*-0.00051613);
}

double NNfunction_sb_uRcR::synapse0x1d8a7f0() {
   return (neuron0x1d79ae0()*0.0329667);
}

double NNfunction_sb_uRcR::synapse0x1d8a830() {
   return (neuron0x1d7a4b0()*0.527924);
}

double NNfunction_sb_uRcR::synapse0x1d8a870() {
   return (neuron0x1d7b090()*-0.0350231);
}

double NNfunction_sb_uRcR::synapse0x1d8a8b0() {
   return (neuron0x1d7ba60()*0.242476);
}

double NNfunction_sb_uRcR::synapse0x1d8a8f0() {
   return (neuron0x1d6c8e0()*0.107112);
}

double NNfunction_sb_uRcR::synapse0x1d8a930() {
   return (neuron0x1d6d2b0()*1.02075);
}

double NNfunction_sb_uRcR::synapse0x1d8a970() {
   return (neuron0x1d6dc80()*-0.337514);
}

double NNfunction_sb_uRcR::synapse0x1d8a9b0() {
   return (neuron0x1d802c0()*-1.4657);
}

double NNfunction_sb_uRcR::synapse0x1d8a9f0() {
   return (neuron0x1d80b70()*0.645901);
}

double NNfunction_sb_uRcR::synapse0x1d8aa30() {
   return (neuron0x1d81540()*-0.0664657);
}

double NNfunction_sb_uRcR::synapse0x1d8aa70() {
   return (neuron0x1d81f10()*0.0701281);
}

double NNfunction_sb_uRcR::synapse0x1d8adf0() {
   return (neuron0x1d5cea0()*1.19949);
}

double NNfunction_sb_uRcR::synapse0x1d8ae30() {
   return (neuron0x1d5d6e0()*0.03461);
}

double NNfunction_sb_uRcR::synapse0x1d8ae70() {
   return (neuron0x1d5e1c0()*-0.732507);
}

double NNfunction_sb_uRcR::synapse0x1d8aeb0() {
   return (neuron0x1d5dc60()*0.111632);
}

double NNfunction_sb_uRcR::synapse0x1d8aef0() {
   return (neuron0x1d5efa0()*1.1771);
}

double NNfunction_sb_uRcR::synapse0x1d8af30() {
   return (neuron0x1d60a70()*-0.04065);
}

double NNfunction_sb_uRcR::synapse0x1d8af70() {
   return (neuron0x1d61840()*0.515889);
}

double NNfunction_sb_uRcR::synapse0x1d8afb0() {
   return (neuron0x1d62210()*-0.0401321);
}

double NNfunction_sb_uRcR::synapse0x1d8aff0() {
   return (neuron0x1d62be0()*0.044276);
}

double NNfunction_sb_uRcR::synapse0x1d8b030() {
   return (neuron0x1d636c0()*0.0229831);
}

double NNfunction_sb_uRcR::synapse0x1d8b070() {
   return (neuron0x1d64090()*-0.102071);
}

double NNfunction_sb_uRcR::synapse0x1d8b0b0() {
   return (neuron0x1d61170()*-0.0903159);
}

double NNfunction_sb_uRcR::synapse0x1d8b0f0() {
   return (neuron0x1d65c40()*0.070439);
}

double NNfunction_sb_uRcR::synapse0x1d8b130() {
   return (neuron0x1d66610()*-0.0220725);
}

double NNfunction_sb_uRcR::synapse0x1d8b170() {
   return (neuron0x1d66fe0()*-0.0328918);
}

double NNfunction_sb_uRcR::synapse0x1d8b1b0() {
   return (neuron0x1d679b0()*-0.0112602);
}

double NNfunction_sb_uRcR::synapse0x1d8ac40() {
   return (neuron0x1d697c0()*1.54259);
}

double NNfunction_sb_uRcR::synapse0x1d8ac80() {
   return (neuron0x1d69aa0()*-0.359548);
}

double NNfunction_sb_uRcR::synapse0x1d8b300() {
   return (neuron0x1d6a470()*0.0973893);
}

double NNfunction_sb_uRcR::synapse0x1d8b340() {
   return (neuron0x1d6ae40()*0.0782432);
}

double NNfunction_sb_uRcR::synapse0x1d8b380() {
   return (neuron0x1d6b810()*0.0434038);
}

double NNfunction_sb_uRcR::synapse0x1d8b3c0() {
   return (neuron0x1d6c1e0()*-0.224899);
}

double NNfunction_sb_uRcR::synapse0x1d8b400() {
   return (neuron0x1d64d30()*0.0216863);
}

double NNfunction_sb_uRcR::synapse0x1d8b440() {
   return (neuron0x1d65700()*-0.120291);
}

double NNfunction_sb_uRcR::synapse0x1d8b480() {
   return (neuron0x1d6ef70()*-1.23664);
}

double NNfunction_sb_uRcR::synapse0x1d8b4c0() {
   return (neuron0x1d6f940()*0.321947);
}

double NNfunction_sb_uRcR::synapse0x1d8b500() {
   return (neuron0x1d70310()*0.0330492);
}

double NNfunction_sb_uRcR::synapse0x1d8b540() {
   return (neuron0x1d70ce0()*0.010379);
}

double NNfunction_sb_uRcR::synapse0x1d8b580() {
   return (neuron0x1d716b0()*-1.14647);
}

double NNfunction_sb_uRcR::synapse0x1d8b5c0() {
   return (neuron0x1d72080()*0.878222);
}

double NNfunction_sb_uRcR::synapse0x1d8b600() {
   return (neuron0x1d72a50()*-1.49504);
}

double NNfunction_sb_uRcR::synapse0x1d8b640() {
   return (neuron0x1d73420()*-0.236224);
}

double NNfunction_sb_uRcR::synapse0x1d8b1f0() {
   return (neuron0x1d694b0()*0.0322273);
}

double NNfunction_sb_uRcR::synapse0x1d8b230() {
   return (neuron0x1d76000()*-0.104828);
}

double NNfunction_sb_uRcR::synapse0x1d8b270() {
   return (neuron0x1d769d0()*0.10184);
}

double NNfunction_sb_uRcR::synapse0x1d8b2b0() {
   return (neuron0x1d773a0()*-0.0762523);
}

double NNfunction_sb_uRcR::synapse0x1d8b890() {
   return (neuron0x1d77d70()*-0.123782);
}

double NNfunction_sb_uRcR::synapse0x1d8b8d0() {
   return (neuron0x1d78740()*0.0730498);
}

double NNfunction_sb_uRcR::synapse0x1d8b910() {
   return (neuron0x1d79110()*-0.3527);
}

double NNfunction_sb_uRcR::synapse0x1d8b950() {
   return (neuron0x1d79ae0()*-0.0899657);
}

double NNfunction_sb_uRcR::synapse0x1d8b990() {
   return (neuron0x1d7a4b0()*0.193326);
}

double NNfunction_sb_uRcR::synapse0x1d8b9d0() {
   return (neuron0x1d7b090()*-0.177892);
}

double NNfunction_sb_uRcR::synapse0x1d8ba10() {
   return (neuron0x1d7ba60()*0.222347);
}

double NNfunction_sb_uRcR::synapse0x1d8ba50() {
   return (neuron0x1d6c8e0()*0.0719444);
}

double NNfunction_sb_uRcR::synapse0x1d8ba90() {
   return (neuron0x1d6d2b0()*-0.985838);
}

double NNfunction_sb_uRcR::synapse0x1d8bad0() {
   return (neuron0x1d6dc80()*-1.32423);
}

double NNfunction_sb_uRcR::synapse0x1d8bb10() {
   return (neuron0x1d802c0()*-2.2487);
}

double NNfunction_sb_uRcR::synapse0x1d8bb50() {
   return (neuron0x1d80b70()*1.5078);
}

double NNfunction_sb_uRcR::synapse0x1d8bb90() {
   return (neuron0x1d81540()*-0.0226208);
}

double NNfunction_sb_uRcR::synapse0x1d8bbd0() {
   return (neuron0x1d81f10()*-0.229129);
}

double NNfunction_sb_uRcR::synapse0x1d8bf50() {
   return (neuron0x1d5cea0()*-3.38434);
}

double NNfunction_sb_uRcR::synapse0x1d8bf90() {
   return (neuron0x1d5d6e0()*-2.53078);
}

double NNfunction_sb_uRcR::synapse0x1d8bfd0() {
   return (neuron0x1d5e1c0()*0.686762);
}

double NNfunction_sb_uRcR::synapse0x1d8c010() {
   return (neuron0x1d5dc60()*-1.78309);
}

double NNfunction_sb_uRcR::synapse0x1d8c050() {
   return (neuron0x1d5efa0()*-1.4109);
}

double NNfunction_sb_uRcR::synapse0x1d8c090() {
   return (neuron0x1d60a70()*2.01857);
}

double NNfunction_sb_uRcR::synapse0x1d8c0d0() {
   return (neuron0x1d61840()*-0.975211);
}

double NNfunction_sb_uRcR::synapse0x1d8c110() {
   return (neuron0x1d62210()*-0.0818189);
}

double NNfunction_sb_uRcR::synapse0x1d8c150() {
   return (neuron0x1d62be0()*-1.94799);
}

double NNfunction_sb_uRcR::synapse0x1d8c190() {
   return (neuron0x1d636c0()*0.696986);
}

double NNfunction_sb_uRcR::synapse0x1d8c1d0() {
   return (neuron0x1d64090()*1.97913);
}

double NNfunction_sb_uRcR::synapse0x1d8c210() {
   return (neuron0x1d61170()*1.37203);
}

double NNfunction_sb_uRcR::synapse0x1d8c250() {
   return (neuron0x1d65c40()*-1.84315);
}

double NNfunction_sb_uRcR::synapse0x1d8c290() {
   return (neuron0x1d66610()*0.107639);
}

double NNfunction_sb_uRcR::synapse0x1d8c2d0() {
   return (neuron0x1d66fe0()*2.36956);
}

double NNfunction_sb_uRcR::synapse0x1d8c310() {
   return (neuron0x1d679b0()*0.889561);
}

double NNfunction_sb_uRcR::synapse0x1d8bda0() {
   return (neuron0x1d697c0()*3.59756);
}

double NNfunction_sb_uRcR::synapse0x1d8bde0() {
   return (neuron0x1d69aa0()*1.05736);
}

double NNfunction_sb_uRcR::synapse0x1d8c460() {
   return (neuron0x1d6a470()*-0.64108);
}

double NNfunction_sb_uRcR::synapse0x1d8c4a0() {
   return (neuron0x1d6ae40()*-1.81016);
}

double NNfunction_sb_uRcR::synapse0x1d8c4e0() {
   return (neuron0x1d6b810()*-0.241698);
}

double NNfunction_sb_uRcR::synapse0x1d8c520() {
   return (neuron0x1d6c1e0()*-3.02128);
}

double NNfunction_sb_uRcR::synapse0x1d8c560() {
   return (neuron0x1d64d30()*-1.71089);
}

double NNfunction_sb_uRcR::synapse0x1d8c5a0() {
   return (neuron0x1d65700()*1.33712);
}

double NNfunction_sb_uRcR::synapse0x1d8c5e0() {
   return (neuron0x1d6ef70()*2.284);
}

double NNfunction_sb_uRcR::synapse0x1d8c620() {
   return (neuron0x1d6f940()*1.3517);
}

double NNfunction_sb_uRcR::synapse0x1d8c660() {
   return (neuron0x1d70310()*-1.80982);
}

double NNfunction_sb_uRcR::synapse0x1d8c6a0() {
   return (neuron0x1d70ce0()*-2.03462);
}

double NNfunction_sb_uRcR::synapse0x1d8c6e0() {
   return (neuron0x1d716b0()*3.39171);
}

double NNfunction_sb_uRcR::synapse0x1d8c720() {
   return (neuron0x1d72080()*-1.9403);
}

double NNfunction_sb_uRcR::synapse0x1d8c760() {
   return (neuron0x1d72a50()*0.0853168);
}

double NNfunction_sb_uRcR::synapse0x1d8c7a0() {
   return (neuron0x1d73420()*1.55041);
}

double NNfunction_sb_uRcR::synapse0x1d8c350() {
   return (neuron0x1d694b0()*-1.9768);
}

double NNfunction_sb_uRcR::synapse0x1d8c390() {
   return (neuron0x1d76000()*1.78265);
}

double NNfunction_sb_uRcR::synapse0x1d8c3d0() {
   return (neuron0x1d769d0()*-1.65875);
}

double NNfunction_sb_uRcR::synapse0x1d8c410() {
   return (neuron0x1d773a0()*1.46005);
}

double NNfunction_sb_uRcR::synapse0x1d8c9f0() {
   return (neuron0x1d77d70()*1.1462);
}

double NNfunction_sb_uRcR::synapse0x1d8ca30() {
   return (neuron0x1d78740()*-1.57464);
}

double NNfunction_sb_uRcR::synapse0x1d8ca70() {
   return (neuron0x1d79110()*2.17055);
}

double NNfunction_sb_uRcR::synapse0x1d8cab0() {
   return (neuron0x1d79ae0()*2.11386);
}

double NNfunction_sb_uRcR::synapse0x1d8caf0() {
   return (neuron0x1d7a4b0()*1.67474);
}

double NNfunction_sb_uRcR::synapse0x1d8cb30() {
   return (neuron0x1d7b090()*2.02805);
}

double NNfunction_sb_uRcR::synapse0x1d8cb70() {
   return (neuron0x1d7ba60()*2.25344);
}

double NNfunction_sb_uRcR::synapse0x1d8cbb0() {
   return (neuron0x1d6c8e0()*-2.06869);
}

double NNfunction_sb_uRcR::synapse0x1d8cbf0() {
   return (neuron0x1d6d2b0()*3.5103);
}

double NNfunction_sb_uRcR::synapse0x1d8cc30() {
   return (neuron0x1d6dc80()*-0.28257);
}

double NNfunction_sb_uRcR::synapse0x1d8cc70() {
   return (neuron0x1d802c0()*-0.800199);
}

double NNfunction_sb_uRcR::synapse0x1d8ccb0() {
   return (neuron0x1d80b70()*5.05921);
}

double NNfunction_sb_uRcR::synapse0x1d8ccf0() {
   return (neuron0x1d81540()*-1.75122);
}

double NNfunction_sb_uRcR::synapse0x1d8cd30() {
   return (neuron0x1d81f10()*0.1134);
}

double NNfunction_sb_uRcR::synapse0x1d8cf90() {
   return (neuron0x1d89110()*-4.6352);
}

double NNfunction_sb_uRcR::synapse0x1d8cfd0() {
   return (neuron0x1d894b0()*-5.84592);
}

double NNfunction_sb_uRcR::synapse0x1d8d010() {
   return (neuron0x1d89950()*-5.29222);
}

double NNfunction_sb_uRcR::synapse0x1d8d050() {
   return (neuron0x1d8aab0()*-2.57128);
}

double NNfunction_sb_uRcR::synapse0x1d8d090() {
   return (neuron0x1d8bc10()*-4.90438);
}

