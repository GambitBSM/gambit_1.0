#include "NNfunction_ns_chi01_dR.h"
#include <cmath>

double NNfunction_ns_chi01_dR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2137)/15.1774;
   input1 = (in1 - 51.8499)/445.153;
   input2 = (in2 - 529.527)/575.237;
   input3 = (in3 - 204.131)/695.748;
   input4 = (in4 - 821.8)/774.9;
   input5 = (in5 - 723.224)/762.992;
   input6 = (in6 - 721.074)/760.461;
   input7 = (in7 - 721.251)/746.356;
   input8 = (in8 - 721.139)/783.123;
   input9 = (in9 - 709.374)/765.108;
   input10 = (in10 - 728.847)/781.544;
   input11 = (in11 - 702.528)/658.494;
   input12 = (in12 - 698.886)/657.064;
   input13 = (in13 - 523.78)/397.605;
   input14 = (in14 - 709.566)/637.2;
   input15 = (in15 - 716.323)/644.621;
   input16 = (in16 - 501.801)/437.536;
   input17 = (in17 - 419.91)/315.617;
   input18 = (in18 - 713.554)/684.891;
   input19 = (in19 - 722.51)/667.602;
   input20 = (in20 - -161.786)/442.264;
   input21 = (in21 - -213.995)/968.087;
   input22 = (in22 - 0.69456)/967.952;
   input23 = (in23 - -75.3796)/528.688;
   switch(index) {
     case 0:
         return neuron0x2a8cb20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_dR::Value(int index, double* input) {
   input0 = (input[0] - 23.2137)/15.1774;
   input1 = (input[1] - 51.8499)/445.153;
   input2 = (input[2] - 529.527)/575.237;
   input3 = (input[3] - 204.131)/695.748;
   input4 = (input[4] - 821.8)/774.9;
   input5 = (input[5] - 723.224)/762.992;
   input6 = (input[6] - 721.074)/760.461;
   input7 = (input[7] - 721.251)/746.356;
   input8 = (input[8] - 721.139)/783.123;
   input9 = (input[9] - 709.374)/765.108;
   input10 = (input[10] - 728.847)/781.544;
   input11 = (input[11] - 702.528)/658.494;
   input12 = (input[12] - 698.886)/657.064;
   input13 = (input[13] - 523.78)/397.605;
   input14 = (input[14] - 709.566)/637.2;
   input15 = (input[15] - 716.323)/644.621;
   input16 = (input[16] - 501.801)/437.536;
   input17 = (input[17] - 419.91)/315.617;
   input18 = (input[18] - 713.554)/684.891;
   input19 = (input[19] - 722.51)/667.602;
   input20 = (input[20] - -161.786)/442.264;
   input21 = (input[21] - -213.995)/968.087;
   input22 = (input[22] - 0.69456)/967.952;
   input23 = (input[23] - -75.3796)/528.688;
   switch(index) {
     case 0:
         return neuron0x2a8cb20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_dR::neuron0x2a57b90() {
   return input0;
}

double NNfunction_ns_chi01_dR::neuron0x2a57e40() {
   return input1;
}

double NNfunction_ns_chi01_dR::neuron0x2a58180() {
   return input2;
}

double NNfunction_ns_chi01_dR::neuron0x2a584c0() {
   return input3;
}

double NNfunction_ns_chi01_dR::neuron0x2a58800() {
   return input4;
}

double NNfunction_ns_chi01_dR::neuron0x2a58b40() {
   return input5;
}

double NNfunction_ns_chi01_dR::neuron0x2a58e80() {
   return input6;
}

double NNfunction_ns_chi01_dR::neuron0x2a591c0() {
   return input7;
}

double NNfunction_ns_chi01_dR::neuron0x2a59500() {
   return input8;
}

double NNfunction_ns_chi01_dR::neuron0x2a59840() {
   return input9;
}

double NNfunction_ns_chi01_dR::neuron0x2a59b80() {
   return input10;
}

double NNfunction_ns_chi01_dR::neuron0x2a59ec0() {
   return input11;
}

double NNfunction_ns_chi01_dR::neuron0x2a5a200() {
   return input12;
}

double NNfunction_ns_chi01_dR::neuron0x2a5a540() {
   return input13;
}

double NNfunction_ns_chi01_dR::neuron0x2a5a880() {
   return input14;
}

double NNfunction_ns_chi01_dR::neuron0x2a5abc0() {
   return input15;
}

double NNfunction_ns_chi01_dR::neuron0x2a5af00() {
   return input16;
}

double NNfunction_ns_chi01_dR::neuron0x2a5b460() {
   return input17;
}

double NNfunction_ns_chi01_dR::neuron0x2a5b7a0() {
   return input18;
}

double NNfunction_ns_chi01_dR::neuron0x2a5bae0() {
   return input19;
}

double NNfunction_ns_chi01_dR::neuron0x2a5be20() {
   return input20;
}

double NNfunction_ns_chi01_dR::neuron0x2a5c160() {
   return input21;
}

double NNfunction_ns_chi01_dR::neuron0x2a5c4a0() {
   return input22;
}

double NNfunction_ns_chi01_dR::neuron0x2a5c7e0() {
   return input23;
}

double NNfunction_ns_chi01_dR::input0x2a5cc50() {
   double input = 0.470687;
   input += synapse0x2a5cf90();
   input += synapse0x2a5cfd0();
   input += synapse0x2a5d010();
   input += synapse0x2a5d050();
   input += synapse0x2a5d090();
   input += synapse0x2a5d0d0();
   input += synapse0x2a5d110();
   input += synapse0x2a5d150();
   input += synapse0x2a5d190();
   input += synapse0x2a5d1d0();
   input += synapse0x2a5d210();
   input += synapse0x2a5d250();
   input += synapse0x2a5d290();
   input += synapse0x2a5d2d0();
   input += synapse0x2a5d310();
   input += synapse0x2a5d350();
   input += synapse0x2a5cde0();
   input += synapse0x2a5ce20();
   input += synapse0x2813d10();
   input += synapse0x2813d50();
   input += synapse0x2a5d390();
   input += synapse0x2a5d3d0();
   input += synapse0x2a5d410();
   input += synapse0x2a5d450();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a5cc50() {
   double input = input0x2a5cc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a5d490() {
   double input = -1.5767;
   input += synapse0x2a5d7d0();
   input += synapse0x2a5d810();
   input += synapse0x2a5d850();
   input += synapse0x2a5d890();
   input += synapse0x2a5d8d0();
   input += synapse0x2a5d910();
   input += synapse0x2a5d950();
   input += synapse0x2a5d990();
   input += synapse0x2a5d9d0();
   input += synapse0x2813b60();
   input += synapse0x2813ba0();
   input += synapse0x2813be0();
   input += synapse0x2813c20();
   input += synapse0x2a5dc20();
   input += synapse0x2a5dc60();
   input += synapse0x2a5dca0();
   input += synapse0x2a5d620();
   input += synapse0x2a5d660();
   input += synapse0x2a5ddf0();
   input += synapse0x2a5de30();
   input += synapse0x2a5de70();
   input += synapse0x2a5deb0();
   input += synapse0x2a5def0();
   input += synapse0x2a5df30();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a5d490() {
   double input = input0x2a5d490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a5df70() {
   double input = 0.227314;
   input += synapse0x2a5e2b0();
   input += synapse0x2a5e2f0();
   input += synapse0x2a5e330();
   input += synapse0x2a5e370();
   input += synapse0x2a5e3b0();
   input += synapse0x2a5e3f0();
   input += synapse0x2a5e430();
   input += synapse0x2a5e470();
   input += synapse0x2a5e4b0();
   input += synapse0x2a5e4f0();
   input += synapse0x2a5e530();
   input += synapse0x2a5e570();
   input += synapse0x2a5e5b0();
   input += synapse0x2a5e5f0();
   input += synapse0x2a5e630();
   input += synapse0x2a5e670();
   input += synapse0x2a5e100();
   input += synapse0x2a5e140();
   input += synapse0x2814400();
   input += synapse0x2821cd0();
   input += synapse0x2821d10();
   input += synapse0x2a605a0();
   input += synapse0x2a605e0();
   input += synapse0x2a578d0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a5df70() {
   double input = input0x2a5df70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a5da10() {
   double input = -0.664867;
   input += synapse0x2a579a0();
   input += synapse0x2822550();
   input += synapse0x2a5dba0();
   input += synapse0x2a5dbe0();
   input += synapse0x2a5e7c0();
   input += synapse0x2a5e800();
   input += synapse0x2a5e840();
   input += synapse0x2a5e880();
   input += synapse0x2a5e8c0();
   input += synapse0x2a5e900();
   input += synapse0x2a5e940();
   input += synapse0x2a5e980();
   input += synapse0x2a5e9c0();
   input += synapse0x2a5ea00();
   input += synapse0x2a5ea40();
   input += synapse0x2a5ea80();
   input += synapse0x2a57910();
   input += synapse0x2a57950();
   input += synapse0x2a5ebd0();
   input += synapse0x2a5ec10();
   input += synapse0x2a5ec50();
   input += synapse0x2a5ec90();
   input += synapse0x2a5ecd0();
   input += synapse0x2a5ed10();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a5da10() {
   double input = input0x2a5da10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a5ed50() {
   double input = 5.71918;
   input += synapse0x2a5f090();
   input += synapse0x2a5f0d0();
   input += synapse0x2a5f110();
   input += synapse0x2a5f150();
   input += synapse0x2a5f190();
   input += synapse0x2a5f1d0();
   input += synapse0x2a5f210();
   input += synapse0x2a5f250();
   input += synapse0x2a5f290();
   input += synapse0x2a5f2d0();
   input += synapse0x2a5f310();
   input += synapse0x2a5f350();
   input += synapse0x2a5f390();
   input += synapse0x2a5f3d0();
   input += synapse0x2a5f410();
   input += synapse0x2a5f450();
   input += synapse0x2a5f5a0();
   input += synapse0x2a5eee0();
   input += synapse0x2a5ef20();
   input += synapse0x2a606e0();
   input += synapse0x2a60720();
   input += synapse0x2a60760();
   input += synapse0x2a607a0();
   input += synapse0x2a607e0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a5ed50() {
   double input = input0x2a5ed50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a60820() {
   double input = -0.902985;
   input += synapse0x2a60b60();
   input += synapse0x2a60ba0();
   input += synapse0x2a60be0();
   input += synapse0x2a60c20();
   input += synapse0x2a60c60();
   input += synapse0x2a60ca0();
   input += synapse0x2a60ce0();
   input += synapse0x2a60d20();
   input += synapse0x2a60d60();
   input += synapse0x2822020();
   input += synapse0x2822060();
   input += synapse0x28220a0();
   input += synapse0x28220e0();
   input += synapse0x2822120();
   input += synapse0x2822160();
   input += synapse0x28221a0();
   input += synapse0x2a609b0();
   input += synapse0x2a609f0();
   input += synapse0x28222f0();
   input += synapse0x2822330();
   input += synapse0x2822370();
   input += synapse0x28223b0();
   input += synapse0x28223f0();
   input += synapse0x2a615b0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a60820() {
   double input = input0x2a60820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a615f0() {
   double input = 1.37766;
   input += synapse0x2a61930();
   input += synapse0x2a61970();
   input += synapse0x2a619b0();
   input += synapse0x2a619f0();
   input += synapse0x2a61a30();
   input += synapse0x2a61a70();
   input += synapse0x2a61ab0();
   input += synapse0x2a61af0();
   input += synapse0x2a61b30();
   input += synapse0x2a61b70();
   input += synapse0x2a61bb0();
   input += synapse0x2a61bf0();
   input += synapse0x2a61c30();
   input += synapse0x2a61c70();
   input += synapse0x2a61cb0();
   input += synapse0x2a61cf0();
   input += synapse0x2a61780();
   input += synapse0x2a617c0();
   input += synapse0x2a61e40();
   input += synapse0x2a61e80();
   input += synapse0x2a61ec0();
   input += synapse0x2a61f00();
   input += synapse0x2a61f40();
   input += synapse0x2a61f80();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a615f0() {
   double input = input0x2a615f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a61fc0() {
   double input = 2.01434;
   input += synapse0x2a62300();
   input += synapse0x2a62340();
   input += synapse0x2a62380();
   input += synapse0x2a623c0();
   input += synapse0x2a62400();
   input += synapse0x2a62440();
   input += synapse0x2a62480();
   input += synapse0x2a624c0();
   input += synapse0x2a62500();
   input += synapse0x2a62540();
   input += synapse0x2a62580();
   input += synapse0x2a625c0();
   input += synapse0x2a62600();
   input += synapse0x2a62640();
   input += synapse0x2a62680();
   input += synapse0x2a626c0();
   input += synapse0x2a62150();
   input += synapse0x2a62190();
   input += synapse0x2a62810();
   input += synapse0x2a62850();
   input += synapse0x2a62890();
   input += synapse0x2a628d0();
   input += synapse0x2a62910();
   input += synapse0x2a62950();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a61fc0() {
   double input = input0x2a61fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a62990() {
   double input = -3.93731;
   input += synapse0x2a5b350();
   input += synapse0x2a5b390();
   input += synapse0x2a5b3d0();
   input += synapse0x2a5b410();
   input += synapse0x2a62ee0();
   input += synapse0x2a62f20();
   input += synapse0x2a62f60();
   input += synapse0x2a62fa0();
   input += synapse0x2a62fe0();
   input += synapse0x2a63020();
   input += synapse0x2a63060();
   input += synapse0x2a630a0();
   input += synapse0x2a630e0();
   input += synapse0x2a63120();
   input += synapse0x2a63160();
   input += synapse0x2a631a0();
   input += synapse0x2a62b20();
   input += synapse0x2a62b60();
   input += synapse0x2a632f0();
   input += synapse0x2a63330();
   input += synapse0x2a63370();
   input += synapse0x2a633b0();
   input += synapse0x2a633f0();
   input += synapse0x2a63430();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a62990() {
   double input = input0x2a62990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a63470() {
   double input = 0.588021;
   input += synapse0x2a637b0();
   input += synapse0x2a637f0();
   input += synapse0x2a63830();
   input += synapse0x2a63870();
   input += synapse0x2a638b0();
   input += synapse0x2a638f0();
   input += synapse0x2a63930();
   input += synapse0x2a63970();
   input += synapse0x2a639b0();
   input += synapse0x2a639f0();
   input += synapse0x2a63a30();
   input += synapse0x2a63a70();
   input += synapse0x2a63ab0();
   input += synapse0x2a63af0();
   input += synapse0x2a63b30();
   input += synapse0x2a63b70();
   input += synapse0x2a63600();
   input += synapse0x2a63640();
   input += synapse0x2a63cc0();
   input += synapse0x2a63d00();
   input += synapse0x2a63d40();
   input += synapse0x2a63d80();
   input += synapse0x2a63dc0();
   input += synapse0x2a63e00();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a63470() {
   double input = input0x2a63470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a63e40() {
   double input = -1.79115;
   input += synapse0x2a64180();
   input += synapse0x2a641c0();
   input += synapse0x2a64200();
   input += synapse0x2a64240();
   input += synapse0x2a64280();
   input += synapse0x2a642c0();
   input += synapse0x2a64300();
   input += synapse0x2a64340();
   input += synapse0x2a64380();
   input += synapse0x2a643c0();
   input += synapse0x2a64400();
   input += synapse0x2a64440();
   input += synapse0x2a64480();
   input += synapse0x2a644c0();
   input += synapse0x2a64500();
   input += synapse0x2a64540();
   input += synapse0x2a63fd0();
   input += synapse0x2a64010();
   input += synapse0x2a60da0();
   input += synapse0x2a60de0();
   input += synapse0x2a60e20();
   input += synapse0x2a60e60();
   input += synapse0x2a60ea0();
   input += synapse0x2a60ee0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a63e40() {
   double input = input0x2a63e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a60f20() {
   double input = 0.0772853;
   input += synapse0x2a61260();
   input += synapse0x2a612a0();
   input += synapse0x2a612e0();
   input += synapse0x2a61320();
   input += synapse0x2a61360();
   input += synapse0x2a613a0();
   input += synapse0x2a613e0();
   input += synapse0x2a61420();
   input += synapse0x2a61460();
   input += synapse0x2a614a0();
   input += synapse0x2a614e0();
   input += synapse0x2a61520();
   input += synapse0x2a61560();
   input += synapse0x2a656a0();
   input += synapse0x2a656e0();
   input += synapse0x2a65720();
   input += synapse0x2a610b0();
   input += synapse0x2a610f0();
   input += synapse0x2a65870();
   input += synapse0x2a658b0();
   input += synapse0x2a658f0();
   input += synapse0x2a65930();
   input += synapse0x2a65970();
   input += synapse0x2a659b0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a60f20() {
   double input = input0x2a60f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a659f0() {
   double input = -1.13465;
   input += synapse0x2a65d30();
   input += synapse0x2a65d70();
   input += synapse0x2a65db0();
   input += synapse0x2a65df0();
   input += synapse0x2a65e30();
   input += synapse0x2a65e70();
   input += synapse0x2a65eb0();
   input += synapse0x2a65ef0();
   input += synapse0x2a65f30();
   input += synapse0x2a65f70();
   input += synapse0x2a65fb0();
   input += synapse0x2a65ff0();
   input += synapse0x2a66030();
   input += synapse0x2a66070();
   input += synapse0x2a660b0();
   input += synapse0x2a660f0();
   input += synapse0x2a65b80();
   input += synapse0x2a65bc0();
   input += synapse0x2a66240();
   input += synapse0x2a66280();
   input += synapse0x2a662c0();
   input += synapse0x2a66300();
   input += synapse0x2a66340();
   input += synapse0x2a66380();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a659f0() {
   double input = input0x2a659f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a663c0() {
   double input = -0.860514;
   input += synapse0x2a66700();
   input += synapse0x2a66740();
   input += synapse0x2a66780();
   input += synapse0x2a667c0();
   input += synapse0x2a66800();
   input += synapse0x2a66840();
   input += synapse0x2a66880();
   input += synapse0x2a668c0();
   input += synapse0x2a66900();
   input += synapse0x2a66940();
   input += synapse0x2a66980();
   input += synapse0x2a669c0();
   input += synapse0x2a66a00();
   input += synapse0x2a66a40();
   input += synapse0x2a66a80();
   input += synapse0x2a66ac0();
   input += synapse0x2a66550();
   input += synapse0x2a66590();
   input += synapse0x2a66c10();
   input += synapse0x2a66c50();
   input += synapse0x2a66c90();
   input += synapse0x2a66cd0();
   input += synapse0x2a66d10();
   input += synapse0x2a66d50();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a663c0() {
   double input = input0x2a663c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a66d90() {
   double input = -0.447948;
   input += synapse0x2a670d0();
   input += synapse0x2a67110();
   input += synapse0x2a67150();
   input += synapse0x2a67190();
   input += synapse0x2a671d0();
   input += synapse0x2a67210();
   input += synapse0x2a67250();
   input += synapse0x2a67290();
   input += synapse0x2a672d0();
   input += synapse0x2a67310();
   input += synapse0x2a67350();
   input += synapse0x2a67390();
   input += synapse0x2a673d0();
   input += synapse0x2a67410();
   input += synapse0x2a67450();
   input += synapse0x2a67490();
   input += synapse0x2a66f20();
   input += synapse0x2a66f60();
   input += synapse0x2a675e0();
   input += synapse0x2a67620();
   input += synapse0x2a67660();
   input += synapse0x2a676a0();
   input += synapse0x2a676e0();
   input += synapse0x2a67720();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a66d90() {
   double input = input0x2a66d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a67760() {
   double input = 0.429297;
   input += synapse0x2a67aa0();
   input += synapse0x2a57d20();
   input += synapse0x2a57d60();
   input += synapse0x2a58060();
   input += synapse0x2a580a0();
   input += synapse0x2a583a0();
   input += synapse0x2a583e0();
   input += synapse0x2a586e0();
   input += synapse0x2a58720();
   input += synapse0x2a58a20();
   input += synapse0x2a58a60();
   input += synapse0x2a58d60();
   input += synapse0x2a58da0();
   input += synapse0x2a590a0();
   input += synapse0x2a590e0();
   input += synapse0x2a593e0();
   input += synapse0x2a59420();
   input += synapse0x2a59720();
   input += synapse0x2a59760();
   input += synapse0x2a59a60();
   input += synapse0x2a59aa0();
   input += synapse0x2a59da0();
   input += synapse0x2a59de0();
   input += synapse0x2a5a0e0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a67760() {
   double input = input0x2a67760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a69570() {
   double input = -1.30141;
   input += synapse0x2a5a120();
   input += synapse0x2a5ade0();
   input += synapse0x2a5ae20();
   input += synapse0x2a678f0();
   input += synapse0x2a67930();
   input += synapse0x2a5b120();
   input += synapse0x2a5b160();
   input += synapse0x2a5b680();
   input += synapse0x2a5b6c0();
   input += synapse0x2a5b9c0();
   input += synapse0x2a5ba00();
   input += synapse0x2a5bd00();
   input += synapse0x2a5bd40();
   input += synapse0x2a5c040();
   input += synapse0x2a5c080();
   input += synapse0x2a5c380();
   input += synapse0x2a5c3c0();
   input += synapse0x2a5c6c0();
   input += synapse0x2a5c700();
   input += synapse0x2a5ca00();
   input += synapse0x2a5ca40();
   input += synapse0x2a5a420();
   input += synapse0x2a5a460();
   input += synapse0x2a69810();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a69570() {
   double input = input0x2a69570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a69850() {
   double input = 0.071603;
   input += synapse0x2a69b90();
   input += synapse0x2a69bd0();
   input += synapse0x2a69c10();
   input += synapse0x2a69c50();
   input += synapse0x2a69c90();
   input += synapse0x2a69cd0();
   input += synapse0x2a69d10();
   input += synapse0x2a69d50();
   input += synapse0x2a69d90();
   input += synapse0x2a69dd0();
   input += synapse0x2a69e10();
   input += synapse0x2a69e50();
   input += synapse0x2a69e90();
   input += synapse0x2a69ed0();
   input += synapse0x2a69f10();
   input += synapse0x2a69f50();
   input += synapse0x2a699e0();
   input += synapse0x2a69a20();
   input += synapse0x2a6a0a0();
   input += synapse0x2a6a0e0();
   input += synapse0x2a6a120();
   input += synapse0x2a6a160();
   input += synapse0x2a6a1a0();
   input += synapse0x2a6a1e0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a69850() {
   double input = input0x2a69850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6a220() {
   double input = 0.278534;
   input += synapse0x2a6a560();
   input += synapse0x2a6a5a0();
   input += synapse0x2a6a5e0();
   input += synapse0x2a6a620();
   input += synapse0x2a6a660();
   input += synapse0x2a6a6a0();
   input += synapse0x2a6a6e0();
   input += synapse0x2a6a720();
   input += synapse0x2a6a760();
   input += synapse0x2a6a7a0();
   input += synapse0x2a6a7e0();
   input += synapse0x2a6a820();
   input += synapse0x2a6a860();
   input += synapse0x2a6a8a0();
   input += synapse0x2a6a8e0();
   input += synapse0x2a6a920();
   input += synapse0x2a6a3b0();
   input += synapse0x2a6a3f0();
   input += synapse0x2a6aa70();
   input += synapse0x2a6aab0();
   input += synapse0x2a6aaf0();
   input += synapse0x2a6ab30();
   input += synapse0x2a6ab70();
   input += synapse0x2a6abb0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6a220() {
   double input = input0x2a6a220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6abf0() {
   double input = 0.909737;
   input += synapse0x2a6af30();
   input += synapse0x2a6af70();
   input += synapse0x2a6afb0();
   input += synapse0x2a6aff0();
   input += synapse0x2a6b030();
   input += synapse0x2a6b070();
   input += synapse0x2a6b0b0();
   input += synapse0x2a6b0f0();
   input += synapse0x2a6b130();
   input += synapse0x2a6b170();
   input += synapse0x2a6b1b0();
   input += synapse0x2a6b1f0();
   input += synapse0x2a6b230();
   input += synapse0x2a6b270();
   input += synapse0x2a6b2b0();
   input += synapse0x2a6b2f0();
   input += synapse0x2a6ad80();
   input += synapse0x2a6adc0();
   input += synapse0x2a6b440();
   input += synapse0x2a6b480();
   input += synapse0x2a6b4c0();
   input += synapse0x2a6b500();
   input += synapse0x2a6b540();
   input += synapse0x2a6b580();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6abf0() {
   double input = input0x2a6abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6b5c0() {
   double input = -0.794933;
   input += synapse0x2a6b900();
   input += synapse0x2a6b940();
   input += synapse0x2a6b980();
   input += synapse0x2a6b9c0();
   input += synapse0x2a6ba00();
   input += synapse0x2a6ba40();
   input += synapse0x2a6ba80();
   input += synapse0x2a6bac0();
   input += synapse0x2a6bb00();
   input += synapse0x2a6bb40();
   input += synapse0x2a6bb80();
   input += synapse0x2a6bbc0();
   input += synapse0x2a6bc00();
   input += synapse0x2a6bc40();
   input += synapse0x2a6bc80();
   input += synapse0x2a6bcc0();
   input += synapse0x2a6b750();
   input += synapse0x2a6b790();
   input += synapse0x2a6be10();
   input += synapse0x2a6be50();
   input += synapse0x2a6be90();
   input += synapse0x2a6bed0();
   input += synapse0x2a6bf10();
   input += synapse0x2a6bf50();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6b5c0() {
   double input = input0x2a6b5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6bf90() {
   double input = -2.60226;
   input += synapse0x2a6c2d0();
   input += synapse0x2a6c310();
   input += synapse0x2a6c350();
   input += synapse0x2a6c390();
   input += synapse0x2a6c3d0();
   input += synapse0x2a6c410();
   input += synapse0x2a6c450();
   input += synapse0x2a6c490();
   input += synapse0x2a6c4d0();
   input += synapse0x2a64690();
   input += synapse0x2a646d0();
   input += synapse0x2a64710();
   input += synapse0x2a64750();
   input += synapse0x2a64790();
   input += synapse0x2a647d0();
   input += synapse0x2a64810();
   input += synapse0x2a6c120();
   input += synapse0x2a6c160();
   input += synapse0x2a64960();
   input += synapse0x2a649a0();
   input += synapse0x2a649e0();
   input += synapse0x2a64a20();
   input += synapse0x2a64a60();
   input += synapse0x2a64aa0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6bf90() {
   double input = input0x2a6bf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a64ae0() {
   double input = -1.81246;
   input += synapse0x2a64e20();
   input += synapse0x2a64e60();
   input += synapse0x2a64ea0();
   input += synapse0x2a64ee0();
   input += synapse0x2a64f20();
   input += synapse0x2a64f60();
   input += synapse0x2a64fa0();
   input += synapse0x2a64fe0();
   input += synapse0x2a65020();
   input += synapse0x2a65060();
   input += synapse0x2a650a0();
   input += synapse0x2a650e0();
   input += synapse0x2a65120();
   input += synapse0x2a65160();
   input += synapse0x2a651a0();
   input += synapse0x2a651e0();
   input += synapse0x2a64c70();
   input += synapse0x2a64cb0();
   input += synapse0x2a65330();
   input += synapse0x2a65370();
   input += synapse0x2a653b0();
   input += synapse0x2a653f0();
   input += synapse0x2a65430();
   input += synapse0x2a65470();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a64ae0() {
   double input = input0x2a64ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a654b0() {
   double input = 1.23304;
   input += synapse0x2a65640();
   input += synapse0x2a6e6d0();
   input += synapse0x2a6e710();
   input += synapse0x2a6e750();
   input += synapse0x2a6e790();
   input += synapse0x2a6e7d0();
   input += synapse0x2a6e810();
   input += synapse0x2a6e850();
   input += synapse0x2a6e890();
   input += synapse0x2a6e8d0();
   input += synapse0x2a6e910();
   input += synapse0x2a6e950();
   input += synapse0x2a6e990();
   input += synapse0x2a6e9d0();
   input += synapse0x2a6ea10();
   input += synapse0x2a6ea50();
   input += synapse0x2a6e520();
   input += synapse0x2a6e560();
   input += synapse0x2a6eba0();
   input += synapse0x2a6ebe0();
   input += synapse0x2a6ec20();
   input += synapse0x2a6ec60();
   input += synapse0x2a6eca0();
   input += synapse0x2a6ece0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a654b0() {
   double input = input0x2a654b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6ed20() {
   double input = 0.29183;
   input += synapse0x2a6f060();
   input += synapse0x2a6f0a0();
   input += synapse0x2a6f0e0();
   input += synapse0x2a6f120();
   input += synapse0x2a6f160();
   input += synapse0x2a6f1a0();
   input += synapse0x2a6f1e0();
   input += synapse0x2a6f220();
   input += synapse0x2a6f260();
   input += synapse0x2a6f2a0();
   input += synapse0x2a6f2e0();
   input += synapse0x2a6f320();
   input += synapse0x2a6f360();
   input += synapse0x2a6f3a0();
   input += synapse0x2a6f3e0();
   input += synapse0x2a6f420();
   input += synapse0x2a6eeb0();
   input += synapse0x2a6eef0();
   input += synapse0x2a6f570();
   input += synapse0x2a6f5b0();
   input += synapse0x2a6f5f0();
   input += synapse0x2a6f630();
   input += synapse0x2a6f670();
   input += synapse0x2a6f6b0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6ed20() {
   double input = input0x2a6ed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6f6f0() {
   double input = 2.29065;
   input += synapse0x2a6fa30();
   input += synapse0x2a6fa70();
   input += synapse0x2a6fab0();
   input += synapse0x2a6faf0();
   input += synapse0x2a6fb30();
   input += synapse0x2a6fb70();
   input += synapse0x2a6fbb0();
   input += synapse0x2a6fbf0();
   input += synapse0x2a6fc30();
   input += synapse0x2a6fc70();
   input += synapse0x2a6fcb0();
   input += synapse0x2a6fcf0();
   input += synapse0x2a6fd30();
   input += synapse0x2a6fd70();
   input += synapse0x2a6fdb0();
   input += synapse0x2a6fdf0();
   input += synapse0x2a6f880();
   input += synapse0x2a6f8c0();
   input += synapse0x2a6ff40();
   input += synapse0x2a6ff80();
   input += synapse0x2a6ffc0();
   input += synapse0x2a70000();
   input += synapse0x2a70040();
   input += synapse0x2a70080();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6f6f0() {
   double input = input0x2a6f6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a700c0() {
   double input = 0.849756;
   input += synapse0x2a70400();
   input += synapse0x2a70440();
   input += synapse0x2a70480();
   input += synapse0x2a704c0();
   input += synapse0x2a70500();
   input += synapse0x2a70540();
   input += synapse0x2a70580();
   input += synapse0x2a705c0();
   input += synapse0x2a70600();
   input += synapse0x2a70640();
   input += synapse0x2a70680();
   input += synapse0x2a706c0();
   input += synapse0x2a70700();
   input += synapse0x2a70740();
   input += synapse0x2a70780();
   input += synapse0x2a707c0();
   input += synapse0x2a70250();
   input += synapse0x2a70290();
   input += synapse0x2a70910();
   input += synapse0x2a70950();
   input += synapse0x2a70990();
   input += synapse0x2a709d0();
   input += synapse0x2a70a10();
   input += synapse0x2a70a50();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a700c0() {
   double input = input0x2a700c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a70a90() {
   double input = 10.5188;
   input += synapse0x2a70dd0();
   input += synapse0x2a70e10();
   input += synapse0x2a70e50();
   input += synapse0x2a70e90();
   input += synapse0x2a70ed0();
   input += synapse0x2a70f10();
   input += synapse0x2a70f50();
   input += synapse0x2a70f90();
   input += synapse0x2a70fd0();
   input += synapse0x2a71010();
   input += synapse0x2a71050();
   input += synapse0x2a71090();
   input += synapse0x2a710d0();
   input += synapse0x2a71110();
   input += synapse0x2a71150();
   input += synapse0x2a71190();
   input += synapse0x2a70c20();
   input += synapse0x2a70c60();
   input += synapse0x2a712e0();
   input += synapse0x2a71320();
   input += synapse0x2a71360();
   input += synapse0x2a713a0();
   input += synapse0x2a713e0();
   input += synapse0x2a71420();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a70a90() {
   double input = input0x2a70a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a71460() {
   double input = 0.685109;
   input += synapse0x2a717a0();
   input += synapse0x2a717e0();
   input += synapse0x2a71820();
   input += synapse0x2a71860();
   input += synapse0x2a718a0();
   input += synapse0x2a718e0();
   input += synapse0x2a71920();
   input += synapse0x2a71960();
   input += synapse0x2a719a0();
   input += synapse0x2a719e0();
   input += synapse0x2a71a20();
   input += synapse0x2a71a60();
   input += synapse0x2a71aa0();
   input += synapse0x2a71ae0();
   input += synapse0x2a71b20();
   input += synapse0x2a71b60();
   input += synapse0x2a715f0();
   input += synapse0x2a71630();
   input += synapse0x2a71cb0();
   input += synapse0x2a71cf0();
   input += synapse0x2a71d30();
   input += synapse0x2a71d70();
   input += synapse0x2a71db0();
   input += synapse0x2a71df0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a71460() {
   double input = input0x2a71460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a71e30() {
   double input = 1.5589;
   input += synapse0x2a72170();
   input += synapse0x2a721b0();
   input += synapse0x2a721f0();
   input += synapse0x2a72230();
   input += synapse0x2a72270();
   input += synapse0x2a722b0();
   input += synapse0x2a722f0();
   input += synapse0x2a72330();
   input += synapse0x2a72370();
   input += synapse0x2a723b0();
   input += synapse0x2a723f0();
   input += synapse0x2a72430();
   input += synapse0x2a72470();
   input += synapse0x2a724b0();
   input += synapse0x2a724f0();
   input += synapse0x2a72530();
   input += synapse0x2a71fc0();
   input += synapse0x2a72000();
   input += synapse0x2a72680();
   input += synapse0x2a726c0();
   input += synapse0x2a72700();
   input += synapse0x2a72740();
   input += synapse0x2a72780();
   input += synapse0x2a727c0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a71e30() {
   double input = input0x2a71e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a72800() {
   double input = 0.240876;
   input += synapse0x2a72b40();
   input += synapse0x2a72b80();
   input += synapse0x2a72bc0();
   input += synapse0x2a72c00();
   input += synapse0x2a72c40();
   input += synapse0x2a72c80();
   input += synapse0x2a72cc0();
   input += synapse0x2a72d00();
   input += synapse0x2a72d40();
   input += synapse0x2a72d80();
   input += synapse0x2a72dc0();
   input += synapse0x2a72e00();
   input += synapse0x2a72e40();
   input += synapse0x2a72e80();
   input += synapse0x2a72ec0();
   input += synapse0x2a72f00();
   input += synapse0x2a72990();
   input += synapse0x2a729d0();
   input += synapse0x2a73050();
   input += synapse0x2a73090();
   input += synapse0x2a730d0();
   input += synapse0x2a73110();
   input += synapse0x2a73150();
   input += synapse0x2a73190();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a72800() {
   double input = input0x2a72800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a731d0() {
   double input = -0.582788;
   input += synapse0x2a73510();
   input += synapse0x2a67ae0();
   input += synapse0x2a67b20();
   input += synapse0x2a67b60();
   input += synapse0x2a67db0();
   input += synapse0x2a67df0();
   input += synapse0x2a67e30();
   input += synapse0x2a68080();
   input += synapse0x2a680c0();
   input += synapse0x2a68310();
   input += synapse0x2a68350();
   input += synapse0x2a68390();
   input += synapse0x2a685e0();
   input += synapse0x2a68620();
   input += synapse0x2a68870();
   input += synapse0x2a688b0();
   input += synapse0x2a73360();
   input += synapse0x2a733a0();
   input += synapse0x2a68a00();
   input += synapse0x2a68f10();
   input += synapse0x2a68f50();
   input += synapse0x2a68f90();
   input += synapse0x2a691e0();
   input += synapse0x2a69220();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a731d0() {
   double input = input0x2a731d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a69260() {
   double input = -2.55606;
   input += synapse0x2a68ad0();
   input += synapse0x2a68b10();
   input += synapse0x2a68b50();
   input += synapse0x2a68b90();
   input += synapse0x2a69510();
   input += synapse0x2a75860();
   input += synapse0x2a758a0();
   input += synapse0x2a758e0();
   input += synapse0x2a75920();
   input += synapse0x2a75960();
   input += synapse0x2a759a0();
   input += synapse0x2a759e0();
   input += synapse0x2a75a20();
   input += synapse0x2a75a60();
   input += synapse0x2a75aa0();
   input += synapse0x2a75ae0();
   input += synapse0x2a693f0();
   input += synapse0x2a69430();
   input += synapse0x2a75c30();
   input += synapse0x2a75c70();
   input += synapse0x2a75cb0();
   input += synapse0x2a75cf0();
   input += synapse0x2a75d30();
   input += synapse0x2a75d70();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a69260() {
   double input = input0x2a69260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a75db0() {
   double input = -1.49169;
   input += synapse0x2a760f0();
   input += synapse0x2a76130();
   input += synapse0x2a76170();
   input += synapse0x2a761b0();
   input += synapse0x2a761f0();
   input += synapse0x2a76230();
   input += synapse0x2a76270();
   input += synapse0x2a762b0();
   input += synapse0x2a762f0();
   input += synapse0x2a76330();
   input += synapse0x2a76370();
   input += synapse0x2a763b0();
   input += synapse0x2a763f0();
   input += synapse0x2a76430();
   input += synapse0x2a76470();
   input += synapse0x2a764b0();
   input += synapse0x2a75f40();
   input += synapse0x2a75f80();
   input += synapse0x2a76600();
   input += synapse0x2a76640();
   input += synapse0x2a76680();
   input += synapse0x2a766c0();
   input += synapse0x2a76700();
   input += synapse0x2a76740();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a75db0() {
   double input = input0x2a75db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a76780() {
   double input = -1.45725;
   input += synapse0x2a76ac0();
   input += synapse0x2a76b00();
   input += synapse0x2a76b40();
   input += synapse0x2a76b80();
   input += synapse0x2a76bc0();
   input += synapse0x2a76c00();
   input += synapse0x2a76c40();
   input += synapse0x2a76c80();
   input += synapse0x2a76cc0();
   input += synapse0x2a76d00();
   input += synapse0x2a76d40();
   input += synapse0x2a76d80();
   input += synapse0x2a76dc0();
   input += synapse0x2a76e00();
   input += synapse0x2a76e40();
   input += synapse0x2a76e80();
   input += synapse0x2a76910();
   input += synapse0x2a76950();
   input += synapse0x2a76fd0();
   input += synapse0x2a77010();
   input += synapse0x2a77050();
   input += synapse0x2a77090();
   input += synapse0x2a770d0();
   input += synapse0x2a77110();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a76780() {
   double input = input0x2a76780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a77150() {
   double input = 1.47204;
   input += synapse0x2a77490();
   input += synapse0x2a774d0();
   input += synapse0x2a77510();
   input += synapse0x2a77550();
   input += synapse0x2a77590();
   input += synapse0x2a775d0();
   input += synapse0x2a77610();
   input += synapse0x2a77650();
   input += synapse0x2a77690();
   input += synapse0x2a776d0();
   input += synapse0x2a77710();
   input += synapse0x2a77750();
   input += synapse0x2a77790();
   input += synapse0x2a777d0();
   input += synapse0x2a77810();
   input += synapse0x2a77850();
   input += synapse0x2a772e0();
   input += synapse0x2a77320();
   input += synapse0x2a779a0();
   input += synapse0x2a779e0();
   input += synapse0x2a77a20();
   input += synapse0x2a77a60();
   input += synapse0x2a77aa0();
   input += synapse0x2a77ae0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a77150() {
   double input = input0x2a77150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a77b20() {
   double input = 1.12166;
   input += synapse0x2a77e60();
   input += synapse0x2a77ea0();
   input += synapse0x2a77ee0();
   input += synapse0x2a77f20();
   input += synapse0x2a77f60();
   input += synapse0x2a77fa0();
   input += synapse0x2a77fe0();
   input += synapse0x2a78020();
   input += synapse0x2a78060();
   input += synapse0x2a780a0();
   input += synapse0x2a780e0();
   input += synapse0x2a78120();
   input += synapse0x2a78160();
   input += synapse0x2a781a0();
   input += synapse0x2a781e0();
   input += synapse0x2a78220();
   input += synapse0x2a77cb0();
   input += synapse0x2a77cf0();
   input += synapse0x2a78370();
   input += synapse0x2a783b0();
   input += synapse0x2a783f0();
   input += synapse0x2a78430();
   input += synapse0x2a78470();
   input += synapse0x2a784b0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a77b20() {
   double input = input0x2a77b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a784f0() {
   double input = -1.12941;
   input += synapse0x2a78830();
   input += synapse0x2a78870();
   input += synapse0x2a788b0();
   input += synapse0x2a788f0();
   input += synapse0x2a78930();
   input += synapse0x2a78970();
   input += synapse0x2a789b0();
   input += synapse0x2a789f0();
   input += synapse0x2a78a30();
   input += synapse0x2a78a70();
   input += synapse0x2a78ab0();
   input += synapse0x2a78af0();
   input += synapse0x2a78b30();
   input += synapse0x2a78b70();
   input += synapse0x2a78bb0();
   input += synapse0x2a78bf0();
   input += synapse0x2a78680();
   input += synapse0x2a786c0();
   input += synapse0x2a78d40();
   input += synapse0x2a78d80();
   input += synapse0x2a78dc0();
   input += synapse0x2a78e00();
   input += synapse0x2a78e40();
   input += synapse0x2a78e80();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a784f0() {
   double input = input0x2a784f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a78ec0() {
   double input = -0.402716;
   input += synapse0x2a79200();
   input += synapse0x2a79240();
   input += synapse0x2a79280();
   input += synapse0x2a792c0();
   input += synapse0x2a79300();
   input += synapse0x2a79340();
   input += synapse0x2a79380();
   input += synapse0x2a793c0();
   input += synapse0x2a79400();
   input += synapse0x2a79440();
   input += synapse0x2a79480();
   input += synapse0x2a794c0();
   input += synapse0x2a79500();
   input += synapse0x2a79540();
   input += synapse0x2a79580();
   input += synapse0x2a795c0();
   input += synapse0x2a79050();
   input += synapse0x2a79090();
   input += synapse0x2a79710();
   input += synapse0x2a79750();
   input += synapse0x2a79790();
   input += synapse0x2a797d0();
   input += synapse0x2a79810();
   input += synapse0x2a79850();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a78ec0() {
   double input = input0x2a78ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a79890() {
   double input = 0.554173;
   input += synapse0x2a79bd0();
   input += synapse0x2a79c10();
   input += synapse0x2a79c50();
   input += synapse0x2a79c90();
   input += synapse0x2a79cd0();
   input += synapse0x2a79d10();
   input += synapse0x2a79d50();
   input += synapse0x2a79d90();
   input += synapse0x2a79dd0();
   input += synapse0x2a79e10();
   input += synapse0x2a79e50();
   input += synapse0x2a79e90();
   input += synapse0x2a79ed0();
   input += synapse0x2a79f10();
   input += synapse0x2a79f50();
   input += synapse0x2a79f90();
   input += synapse0x2a79a20();
   input += synapse0x2a79a60();
   input += synapse0x2a7a0e0();
   input += synapse0x2a7a120();
   input += synapse0x2a7a160();
   input += synapse0x2a7a1a0();
   input += synapse0x2a7a1e0();
   input += synapse0x2a7a220();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a79890() {
   double input = input0x2a79890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a7a260() {
   double input = -1.19182;
   input += synapse0x2a62cd0();
   input += synapse0x2a62d10();
   input += synapse0x2a62d50();
   input += synapse0x2a62d90();
   input += synapse0x2a62dd0();
   input += synapse0x2a62e10();
   input += synapse0x2a62e50();
   input += synapse0x2a62e90();
   input += synapse0x2a7a9b0();
   input += synapse0x2a7a9f0();
   input += synapse0x2a7aa30();
   input += synapse0x2a7aa70();
   input += synapse0x2a7aab0();
   input += synapse0x2a7aaf0();
   input += synapse0x2a7ab30();
   input += synapse0x2a7ab70();
   input += synapse0x2a7a3f0();
   input += synapse0x2a7a430();
   input += synapse0x2a7acc0();
   input += synapse0x2a7ad00();
   input += synapse0x2a7ad40();
   input += synapse0x2a7ad80();
   input += synapse0x2a7adc0();
   input += synapse0x2a7ae00();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a7a260() {
   double input = input0x2a7a260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a7ae40() {
   double input = -0.048301;
   input += synapse0x2a7b180();
   input += synapse0x2a7b1c0();
   input += synapse0x2a7b200();
   input += synapse0x2a7b240();
   input += synapse0x2a7b280();
   input += synapse0x2a7b2c0();
   input += synapse0x2a7b300();
   input += synapse0x2a7b340();
   input += synapse0x2a7b380();
   input += synapse0x2a7b3c0();
   input += synapse0x2a7b400();
   input += synapse0x2a7b440();
   input += synapse0x2a7b480();
   input += synapse0x2a7b4c0();
   input += synapse0x2a7b500();
   input += synapse0x2a7b540();
   input += synapse0x2a7afd0();
   input += synapse0x2a7b010();
   input += synapse0x2a7b690();
   input += synapse0x2a7b6d0();
   input += synapse0x2a7b710();
   input += synapse0x2a7b750();
   input += synapse0x2a7b790();
   input += synapse0x2a7b7d0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a7ae40() {
   double input = input0x2a7ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a7b810() {
   double input = -0.412156;
   input += synapse0x2a7bb50();
   input += synapse0x2a7bb90();
   input += synapse0x2a7bbd0();
   input += synapse0x2a7bc10();
   input += synapse0x2a7bc50();
   input += synapse0x2a7bc90();
   input += synapse0x2a7bcd0();
   input += synapse0x2a7bd10();
   input += synapse0x2a7bd50();
   input += synapse0x2a7bd90();
   input += synapse0x2a7bdd0();
   input += synapse0x2a7be10();
   input += synapse0x2a7be50();
   input += synapse0x2a7be90();
   input += synapse0x2a7bed0();
   input += synapse0x2a7bf10();
   input += synapse0x2a7b9a0();
   input += synapse0x2a7b9e0();
   input += synapse0x2a6c510();
   input += synapse0x2a6c550();
   input += synapse0x2a6c590();
   input += synapse0x2a6c5d0();
   input += synapse0x2a6c610();
   input += synapse0x2a6c650();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a7b810() {
   double input = input0x2a7b810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6c690() {
   double input = -0.482967;
   input += synapse0x2a6c9d0();
   input += synapse0x2a6ca10();
   input += synapse0x2a6ca50();
   input += synapse0x2a6ca90();
   input += synapse0x2a6cad0();
   input += synapse0x2a6cb10();
   input += synapse0x2a6cb50();
   input += synapse0x2a6cb90();
   input += synapse0x2a6cbd0();
   input += synapse0x2a6cc10();
   input += synapse0x2a6cc50();
   input += synapse0x2a6cc90();
   input += synapse0x2a6ccd0();
   input += synapse0x2a6cd10();
   input += synapse0x2a6cd50();
   input += synapse0x2a6cd90();
   input += synapse0x2a6c820();
   input += synapse0x2a6c860();
   input += synapse0x2a6cee0();
   input += synapse0x2a6cf20();
   input += synapse0x2a6cf60();
   input += synapse0x2a6cfa0();
   input += synapse0x2a6cfe0();
   input += synapse0x2a6d020();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6c690() {
   double input = input0x2a6c690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6d060() {
   double input = 8.78683;
   input += synapse0x2a6d3a0();
   input += synapse0x2a6d3e0();
   input += synapse0x2a6d420();
   input += synapse0x2a6d460();
   input += synapse0x2a6d4a0();
   input += synapse0x2a6d4e0();
   input += synapse0x2a6d520();
   input += synapse0x2a6d560();
   input += synapse0x2a6d5a0();
   input += synapse0x2a6d5e0();
   input += synapse0x2a6d620();
   input += synapse0x2a6d660();
   input += synapse0x2a6d6a0();
   input += synapse0x2a6d6e0();
   input += synapse0x2a6d720();
   input += synapse0x2a6d760();
   input += synapse0x2a6d1f0();
   input += synapse0x2a6d230();
   input += synapse0x2a6d8b0();
   input += synapse0x2a6d8f0();
   input += synapse0x2a6d930();
   input += synapse0x2a6d970();
   input += synapse0x2a6d9b0();
   input += synapse0x2a6d9f0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6d060() {
   double input = input0x2a6d060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a6da30() {
   double input = -0.9219;
   input += synapse0x2a6dd70();
   input += synapse0x2a6ddb0();
   input += synapse0x2a6ddf0();
   input += synapse0x2a6de30();
   input += synapse0x2a6de70();
   input += synapse0x2a6deb0();
   input += synapse0x2a6def0();
   input += synapse0x2a6df30();
   input += synapse0x2a6df70();
   input += synapse0x2a6dfb0();
   input += synapse0x2a6dff0();
   input += synapse0x2a6e030();
   input += synapse0x2a6e070();
   input += synapse0x2a6e0b0();
   input += synapse0x2a6e0f0();
   input += synapse0x2a6e130();
   input += synapse0x2a6dbc0();
   input += synapse0x2a6dc00();
   input += synapse0x2a6e280();
   input += synapse0x2a6e2c0();
   input += synapse0x2a6e300();
   input += synapse0x2a6e340();
   input += synapse0x2a6e380();
   input += synapse0x2a6e3c0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a6da30() {
   double input = input0x2a6da30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a80070() {
   double input = -8.78917;
   input += synapse0x2a80290();
   input += synapse0x2a802d0();
   input += synapse0x2a80310();
   input += synapse0x2a80350();
   input += synapse0x2a80390();
   input += synapse0x2a803d0();
   input += synapse0x2a80410();
   input += synapse0x2a80450();
   input += synapse0x2a80490();
   input += synapse0x2a804d0();
   input += synapse0x2a80510();
   input += synapse0x2a80550();
   input += synapse0x2a80590();
   input += synapse0x2a805d0();
   input += synapse0x2a80610();
   input += synapse0x2a80650();
   input += synapse0x2a6e400();
   input += synapse0x2a6e440();
   input += synapse0x2a807a0();
   input += synapse0x2a807e0();
   input += synapse0x2a80820();
   input += synapse0x2a80860();
   input += synapse0x2a808a0();
   input += synapse0x2a808e0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a80070() {
   double input = input0x2a80070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a80920() {
   double input = -0.810676;
   input += synapse0x2a80c60();
   input += synapse0x2a80ca0();
   input += synapse0x2a80ce0();
   input += synapse0x2a80d20();
   input += synapse0x2a80d60();
   input += synapse0x2a80da0();
   input += synapse0x2a80de0();
   input += synapse0x2a80e20();
   input += synapse0x2a80e60();
   input += synapse0x2a80ea0();
   input += synapse0x2a80ee0();
   input += synapse0x2a80f20();
   input += synapse0x2a80f60();
   input += synapse0x2a80fa0();
   input += synapse0x2a80fe0();
   input += synapse0x2a81020();
   input += synapse0x2a80ab0();
   input += synapse0x2a80af0();
   input += synapse0x2a81170();
   input += synapse0x2a811b0();
   input += synapse0x2a811f0();
   input += synapse0x2a81230();
   input += synapse0x2a81270();
   input += synapse0x2a812b0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a80920() {
   double input = input0x2a80920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a812f0() {
   double input = 0.958877;
   input += synapse0x2a81630();
   input += synapse0x2a81670();
   input += synapse0x2a816b0();
   input += synapse0x2a816f0();
   input += synapse0x2a81730();
   input += synapse0x2a81770();
   input += synapse0x2a817b0();
   input += synapse0x2a817f0();
   input += synapse0x2a81830();
   input += synapse0x2a81870();
   input += synapse0x2a818b0();
   input += synapse0x2a818f0();
   input += synapse0x2a81930();
   input += synapse0x2a81970();
   input += synapse0x2a819b0();
   input += synapse0x2a819f0();
   input += synapse0x2a81480();
   input += synapse0x2a814c0();
   input += synapse0x2a81b40();
   input += synapse0x2a81b80();
   input += synapse0x2a81bc0();
   input += synapse0x2a81c00();
   input += synapse0x2a81c40();
   input += synapse0x2a81c80();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a812f0() {
   double input = input0x2a812f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a81cc0() {
   double input = -0.76459;
   input += synapse0x2a82000();
   input += synapse0x2a82040();
   input += synapse0x2a82080();
   input += synapse0x2a820c0();
   input += synapse0x2a82100();
   input += synapse0x2a82140();
   input += synapse0x2a82180();
   input += synapse0x2a821c0();
   input += synapse0x2a82200();
   input += synapse0x2a82240();
   input += synapse0x2a82280();
   input += synapse0x2a822c0();
   input += synapse0x2a82300();
   input += synapse0x2a82340();
   input += synapse0x2a82380();
   input += synapse0x2a823c0();
   input += synapse0x2a81e50();
   input += synapse0x2a81e90();
   input += synapse0x2a82510();
   input += synapse0x2a82550();
   input += synapse0x2a82590();
   input += synapse0x2a825d0();
   input += synapse0x2a82610();
   input += synapse0x2a82650();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a81cc0() {
   double input = input0x2a81cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a88ec0() {
   double input = -0.830474;
   input += synapse0x28224c0();
   input += synapse0x2822500();
   input += synapse0x2a5f000();
   input += synapse0x2a5f040();
   input += synapse0x2a60ad0();
   input += synapse0x2a60b10();
   input += synapse0x2a618a0();
   input += synapse0x2a618e0();
   input += synapse0x2a62270();
   input += synapse0x2a622b0();
   input += synapse0x2a62c40();
   input += synapse0x2a62c80();
   input += synapse0x2a63720();
   input += synapse0x2a63760();
   input += synapse0x2a640f0();
   input += synapse0x2a64130();
   input += synapse0x2a611d0();
   input += synapse0x2a61210();
   input += synapse0x2a65ca0();
   input += synapse0x2a65ce0();
   input += synapse0x2a66670();
   input += synapse0x2a666b0();
   input += synapse0x2a67040();
   input += synapse0x2a67080();
   input += synapse0x2a67a10();
   input += synapse0x2a67a50();
   input += synapse0x2a5aaa0();
   input += synapse0x2a5aae0();
   input += synapse0x2a69b00();
   input += synapse0x2a69b40();
   input += synapse0x2a6a4d0();
   input += synapse0x2a6a510();
   input += synapse0x2a6aea0();
   input += synapse0x2a6aee0();
   input += synapse0x2a6b870();
   input += synapse0x2a6b8b0();
   input += synapse0x2a6c240();
   input += synapse0x2a6c280();
   input += synapse0x2a64d90();
   input += synapse0x2a64dd0();
   input += synapse0x2a6e640();
   input += synapse0x2a6e680();
   input += synapse0x2a6efd0();
   input += synapse0x2a6f010();
   input += synapse0x2a6f9a0();
   input += synapse0x2a6f9e0();
   input += synapse0x2a70370();
   input += synapse0x2a703b0();
   input += synapse0x2a70d40();
   input += synapse0x2a70d80();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a88ec0() {
   double input = input0x2a88ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a89260() {
   double input = -0.334344;
   input += synapse0x2a73480();
   input += synapse0x2a734c0();
   input += synapse0x2a68a40();
   input += synapse0x2a68a80();
   input += synapse0x2a76060();
   input += synapse0x2a760a0();
   input += synapse0x2a76a30();
   input += synapse0x2a76a70();
   input += synapse0x2a77400();
   input += synapse0x2a77440();
   input += synapse0x2a77dd0();
   input += synapse0x2a77e10();
   input += synapse0x2a787a0();
   input += synapse0x2a787e0();
   input += synapse0x2a79170();
   input += synapse0x2a791b0();
   input += synapse0x2a79b40();
   input += synapse0x2a79b80();
   input += synapse0x2a7a510();
   input += synapse0x2a7a550();
   input += synapse0x2a7b0f0();
   input += synapse0x2a7b130();
   input += synapse0x2a7bac0();
   input += synapse0x2a7bb00();
   input += synapse0x2a6c940();
   input += synapse0x2a6c980();
   input += synapse0x2a6d310();
   input += synapse0x2a6d350();
   input += synapse0x2a6dce0();
   input += synapse0x2a6dd20();
   input += synapse0x2a80200();
   input += synapse0x2a80240();
   input += synapse0x2a80bd0();
   input += synapse0x2a80c10();
   input += synapse0x2a815a0();
   input += synapse0x2a815e0();
   input += synapse0x2a81f70();
   input += synapse0x2a81fb0();
   input += synapse0x2a5cf00();
   input += synapse0x2a5cf40();
   input += synapse0x2a71710();
   input += synapse0x2a71750();
   input += synapse0x2a82690();
   input += synapse0x2a826d0();
   input += synapse0x2a82710();
   input += synapse0x2a82750();
   input += synapse0x2a89600();
   input += synapse0x2a89640();
   input += synapse0x2a89680();
   input += synapse0x2a896c0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a89260() {
   double input = input0x2a89260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a89700() {
   double input = -1.76932;
   input += synapse0x2a89a40();
   input += synapse0x2a89a80();
   input += synapse0x2a89ac0();
   input += synapse0x2a89b00();
   input += synapse0x2a89b40();
   input += synapse0x2a89b80();
   input += synapse0x2a89bc0();
   input += synapse0x2a89c00();
   input += synapse0x2a89c40();
   input += synapse0x2a89c80();
   input += synapse0x2a89cc0();
   input += synapse0x2a89d00();
   input += synapse0x2a89d40();
   input += synapse0x2a89d80();
   input += synapse0x2a89dc0();
   input += synapse0x2a89e00();
   input += synapse0x2a89890();
   input += synapse0x2a898d0();
   input += synapse0x2a89f50();
   input += synapse0x2a89f90();
   input += synapse0x2a89fd0();
   input += synapse0x2a8a010();
   input += synapse0x2a8a050();
   input += synapse0x2a8a090();
   input += synapse0x2a8a0d0();
   input += synapse0x2a8a110();
   input += synapse0x2a8a150();
   input += synapse0x2a8a190();
   input += synapse0x2a8a1d0();
   input += synapse0x2a8a210();
   input += synapse0x2a8a250();
   input += synapse0x2a8a290();
   input += synapse0x2a89e40();
   input += synapse0x2a89e80();
   input += synapse0x2a89ec0();
   input += synapse0x2a89f00();
   input += synapse0x2a8a4e0();
   input += synapse0x2a8a520();
   input += synapse0x2a8a560();
   input += synapse0x2a8a5a0();
   input += synapse0x2a8a5e0();
   input += synapse0x2a8a620();
   input += synapse0x2a8a660();
   input += synapse0x2a8a6a0();
   input += synapse0x2a8a6e0();
   input += synapse0x2a8a720();
   input += synapse0x2a8a760();
   input += synapse0x2a8a7a0();
   input += synapse0x2a8a7e0();
   input += synapse0x2a8a820();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a89700() {
   double input = input0x2a89700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a8a860() {
   double input = -1.55972;
   input += synapse0x2a8aba0();
   input += synapse0x2a8abe0();
   input += synapse0x2a8ac20();
   input += synapse0x2a8ac60();
   input += synapse0x2a8aca0();
   input += synapse0x2a8ace0();
   input += synapse0x2a8ad20();
   input += synapse0x2a8ad60();
   input += synapse0x2a8ada0();
   input += synapse0x2a8ade0();
   input += synapse0x2a8ae20();
   input += synapse0x2a8ae60();
   input += synapse0x2a8aea0();
   input += synapse0x2a8aee0();
   input += synapse0x2a8af20();
   input += synapse0x2a8af60();
   input += synapse0x2a8a9f0();
   input += synapse0x2a8aa30();
   input += synapse0x2a8b0b0();
   input += synapse0x2a8b0f0();
   input += synapse0x2a8b130();
   input += synapse0x2a8b170();
   input += synapse0x2a8b1b0();
   input += synapse0x2a8b1f0();
   input += synapse0x2a8b230();
   input += synapse0x2a8b270();
   input += synapse0x2a8b2b0();
   input += synapse0x2a8b2f0();
   input += synapse0x2a8b330();
   input += synapse0x2a8b370();
   input += synapse0x2a8b3b0();
   input += synapse0x2a8b3f0();
   input += synapse0x2a8afa0();
   input += synapse0x2a8afe0();
   input += synapse0x2a8b020();
   input += synapse0x2a8b060();
   input += synapse0x2a8b640();
   input += synapse0x2a8b680();
   input += synapse0x2a8b6c0();
   input += synapse0x2a8b700();
   input += synapse0x2a8b740();
   input += synapse0x2a8b780();
   input += synapse0x2a8b7c0();
   input += synapse0x2a8b800();
   input += synapse0x2a8b840();
   input += synapse0x2a8b880();
   input += synapse0x2a8b8c0();
   input += synapse0x2a8b900();
   input += synapse0x2a8b940();
   input += synapse0x2a8b980();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a8a860() {
   double input = input0x2a8a860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a8b9c0() {
   double input = 1.36589;
   input += synapse0x2a8bd00();
   input += synapse0x2a8bd40();
   input += synapse0x2a8bd80();
   input += synapse0x2a8bdc0();
   input += synapse0x2a8be00();
   input += synapse0x2a8be40();
   input += synapse0x2a8be80();
   input += synapse0x2a8bec0();
   input += synapse0x2a8bf00();
   input += synapse0x2a8bf40();
   input += synapse0x2a8bf80();
   input += synapse0x2a8bfc0();
   input += synapse0x2a8c000();
   input += synapse0x2a8c040();
   input += synapse0x2a8c080();
   input += synapse0x2a8c0c0();
   input += synapse0x2a8bb50();
   input += synapse0x2a8bb90();
   input += synapse0x2a8c210();
   input += synapse0x2a8c250();
   input += synapse0x2a8c290();
   input += synapse0x2a8c2d0();
   input += synapse0x2a8c310();
   input += synapse0x2a8c350();
   input += synapse0x2a8c390();
   input += synapse0x2a8c3d0();
   input += synapse0x2a8c410();
   input += synapse0x2a8c450();
   input += synapse0x2a8c490();
   input += synapse0x2a8c4d0();
   input += synapse0x2a8c510();
   input += synapse0x2a8c550();
   input += synapse0x2a8c100();
   input += synapse0x2a8c140();
   input += synapse0x2a8c180();
   input += synapse0x2a8c1c0();
   input += synapse0x2a8c7a0();
   input += synapse0x2a8c7e0();
   input += synapse0x2a8c820();
   input += synapse0x2a8c860();
   input += synapse0x2a8c8a0();
   input += synapse0x2a8c8e0();
   input += synapse0x2a8c920();
   input += synapse0x2a8c960();
   input += synapse0x2a8c9a0();
   input += synapse0x2a8c9e0();
   input += synapse0x2a8ca20();
   input += synapse0x2a8ca60();
   input += synapse0x2a8caa0();
   input += synapse0x2a8cae0();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a8b9c0() {
   double input = input0x2a8b9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_dR::input0x2a8cb20() {
   double input = 7.07574;
   input += synapse0x2a8cd40();
   input += synapse0x2a8cd80();
   input += synapse0x2a8cdc0();
   input += synapse0x2a8ce00();
   input += synapse0x2a8ce40();
   return input;
}

double NNfunction_ns_chi01_dR::neuron0x2a8cb20() {
   double input = input0x2a8cb20();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_dR::synapse0x2a5cf90() {
   return (neuron0x2a57b90()*-0.731222);
}

double NNfunction_ns_chi01_dR::synapse0x2a5cfd0() {
   return (neuron0x2a57e40()*-0.711866);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d010() {
   return (neuron0x2a58180()*-0.403014);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d050() {
   return (neuron0x2a584c0()*-0.147073);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d090() {
   return (neuron0x2a58800()*-0.429352);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d0d0() {
   return (neuron0x2a58b40()*-0.0788842);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d110() {
   return (neuron0x2a58e80()*1.01885);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d150() {
   return (neuron0x2a591c0()*-0.0929855);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d190() {
   return (neuron0x2a59500()*0.213674);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d1d0() {
   return (neuron0x2a59840()*-0.62809);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d210() {
   return (neuron0x2a59b80()*-0.469887);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d250() {
   return (neuron0x2a59ec0()*-0.607311);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d290() {
   return (neuron0x2a5a200()*-0.445781);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d2d0() {
   return (neuron0x2a5a540()*-0.0126628);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d310() {
   return (neuron0x2a5a880()*-0.0624519);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d350() {
   return (neuron0x2a5abc0()*-0.519893);
}

double NNfunction_ns_chi01_dR::synapse0x2a5cde0() {
   return (neuron0x2a5af00()*-0.332998);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ce20() {
   return (neuron0x2a5b460()*1.99283);
}

double NNfunction_ns_chi01_dR::synapse0x2813d10() {
   return (neuron0x2a5b7a0()*-0.09572);
}

double NNfunction_ns_chi01_dR::synapse0x2813d50() {
   return (neuron0x2a5bae0()*0.152838);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d390() {
   return (neuron0x2a5be20()*-0.452499);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d3d0() {
   return (neuron0x2a5c160()*0.69872);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d410() {
   return (neuron0x2a5c4a0()*-0.811971);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d450() {
   return (neuron0x2a5c7e0()*1.42026);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d7d0() {
   return (neuron0x2a57b90()*0.0318861);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d810() {
   return (neuron0x2a57e40()*-0.06991);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d850() {
   return (neuron0x2a58180()*-0.0209888);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d890() {
   return (neuron0x2a584c0()*0.0203055);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d8d0() {
   return (neuron0x2a58800()*-0.00182513);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d910() {
   return (neuron0x2a58b40()*-0.00570876);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d950() {
   return (neuron0x2a58e80()*0.00385052);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d990() {
   return (neuron0x2a591c0()*0.00703639);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d9d0() {
   return (neuron0x2a59500()*0.0203938);
}

double NNfunction_ns_chi01_dR::synapse0x2813b60() {
   return (neuron0x2a59840()*0.087361);
}

double NNfunction_ns_chi01_dR::synapse0x2813ba0() {
   return (neuron0x2a59b80()*0.0216467);
}

double NNfunction_ns_chi01_dR::synapse0x2813be0() {
   return (neuron0x2a59ec0()*-0.0271045);
}

double NNfunction_ns_chi01_dR::synapse0x2813c20() {
   return (neuron0x2a5a200()*0.00188922);
}

double NNfunction_ns_chi01_dR::synapse0x2a5dc20() {
   return (neuron0x2a5a540()*-0.041408);
}

double NNfunction_ns_chi01_dR::synapse0x2a5dc60() {
   return (neuron0x2a5a880()*-0.011888);
}

double NNfunction_ns_chi01_dR::synapse0x2a5dca0() {
   return (neuron0x2a5abc0()*0.00540476);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d620() {
   return (neuron0x2a5af00()*-0.00587343);
}

double NNfunction_ns_chi01_dR::synapse0x2a5d660() {
   return (neuron0x2a5b460()*-2.39987);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ddf0() {
   return (neuron0x2a5b7a0()*0.0119753);
}

double NNfunction_ns_chi01_dR::synapse0x2a5de30() {
   return (neuron0x2a5bae0()*-0.00373061);
}

double NNfunction_ns_chi01_dR::synapse0x2a5de70() {
   return (neuron0x2a5be20()*-0.00282149);
}

double NNfunction_ns_chi01_dR::synapse0x2a5deb0() {
   return (neuron0x2a5c160()*-0.0069508);
}

double NNfunction_ns_chi01_dR::synapse0x2a5def0() {
   return (neuron0x2a5c4a0()*-0.00452024);
}

double NNfunction_ns_chi01_dR::synapse0x2a5df30() {
   return (neuron0x2a5c7e0()*-0.0192698);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e2b0() {
   return (neuron0x2a57b90()*-0.280903);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e2f0() {
   return (neuron0x2a57e40()*-0.487735);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e330() {
   return (neuron0x2a58180()*-0.138102);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e370() {
   return (neuron0x2a584c0()*-0.314051);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e3b0() {
   return (neuron0x2a58800()*-0.29131);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e3f0() {
   return (neuron0x2a58b40()*-0.00346769);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e430() {
   return (neuron0x2a58e80()*0.0881862);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e470() {
   return (neuron0x2a591c0()*-0.14507);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e4b0() {
   return (neuron0x2a59500()*0.231754);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e4f0() {
   return (neuron0x2a59840()*0.451676);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e530() {
   return (neuron0x2a59b80()*-0.395439);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e570() {
   return (neuron0x2a59ec0()*-0.306525);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e5b0() {
   return (neuron0x2a5a200()*0.362561);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e5f0() {
   return (neuron0x2a5a540()*0.257003);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e630() {
   return (neuron0x2a5a880()*-0.238661);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e670() {
   return (neuron0x2a5abc0()*-1.80374);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e100() {
   return (neuron0x2a5af00()*-0.161812);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e140() {
   return (neuron0x2a5b460()*-0.258832);
}

double NNfunction_ns_chi01_dR::synapse0x2814400() {
   return (neuron0x2a5b7a0()*0.108596);
}

double NNfunction_ns_chi01_dR::synapse0x2821cd0() {
   return (neuron0x2a5bae0()*0.268963);
}

double NNfunction_ns_chi01_dR::synapse0x2821d10() {
   return (neuron0x2a5be20()*-0.145958);
}

double NNfunction_ns_chi01_dR::synapse0x2a605a0() {
   return (neuron0x2a5c160()*0.608801);
}

double NNfunction_ns_chi01_dR::synapse0x2a605e0() {
   return (neuron0x2a5c4a0()*-0.0976642);
}

double NNfunction_ns_chi01_dR::synapse0x2a578d0() {
   return (neuron0x2a5c7e0()*-0.35108);
}

double NNfunction_ns_chi01_dR::synapse0x2a579a0() {
   return (neuron0x2a57b90()*-0.0313456);
}

double NNfunction_ns_chi01_dR::synapse0x2822550() {
   return (neuron0x2a57e40()*-1.38968);
}

double NNfunction_ns_chi01_dR::synapse0x2a5dba0() {
   return (neuron0x2a58180()*0.221532);
}

double NNfunction_ns_chi01_dR::synapse0x2a5dbe0() {
   return (neuron0x2a584c0()*0.251986);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e7c0() {
   return (neuron0x2a58800()*-0.635868);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e800() {
   return (neuron0x2a58b40()*-0.0759934);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e840() {
   return (neuron0x2a58e80()*-0.702556);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e880() {
   return (neuron0x2a591c0()*0.260292);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e8c0() {
   return (neuron0x2a59500()*-0.120588);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e900() {
   return (neuron0x2a59840()*0.156839);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e940() {
   return (neuron0x2a59b80()*0.101417);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e980() {
   return (neuron0x2a59ec0()*0.00722962);
}

double NNfunction_ns_chi01_dR::synapse0x2a5e9c0() {
   return (neuron0x2a5a200()*-0.109621);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ea00() {
   return (neuron0x2a5a540()*0.0309407);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ea40() {
   return (neuron0x2a5a880()*-1.08519);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ea80() {
   return (neuron0x2a5abc0()*0.348822);
}

double NNfunction_ns_chi01_dR::synapse0x2a57910() {
   return (neuron0x2a5af00()*-0.0783782);
}

double NNfunction_ns_chi01_dR::synapse0x2a57950() {
   return (neuron0x2a5b460()*-0.151488);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ebd0() {
   return (neuron0x2a5b7a0()*-0.177585);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ec10() {
   return (neuron0x2a5bae0()*-0.131612);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ec50() {
   return (neuron0x2a5be20()*0.219012);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ec90() {
   return (neuron0x2a5c160()*0.144503);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ecd0() {
   return (neuron0x2a5c4a0()*-0.12242);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ed10() {
   return (neuron0x2a5c7e0()*0.743442);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f090() {
   return (neuron0x2a57b90()*0.220397);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f0d0() {
   return (neuron0x2a57e40()*2.17151);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f110() {
   return (neuron0x2a58180()*3.60361);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f150() {
   return (neuron0x2a584c0()*0.147609);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f190() {
   return (neuron0x2a58800()*0.15199);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f1d0() {
   return (neuron0x2a58b40()*-0.0811451);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f210() {
   return (neuron0x2a58e80()*0.189123);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f250() {
   return (neuron0x2a591c0()*-0.0629126);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f290() {
   return (neuron0x2a59500()*-0.161944);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f2d0() {
   return (neuron0x2a59840()*0.0746838);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f310() {
   return (neuron0x2a59b80()*0.0826403);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f350() {
   return (neuron0x2a59ec0()*-0.106783);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f390() {
   return (neuron0x2a5a200()*0.151376);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f3d0() {
   return (neuron0x2a5a540()*-0.0145344);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f410() {
   return (neuron0x2a5a880()*-0.0733719);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f450() {
   return (neuron0x2a5abc0()*-0.228771);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f5a0() {
   return (neuron0x2a5af00()*-0.249277);
}

double NNfunction_ns_chi01_dR::synapse0x2a5eee0() {
   return (neuron0x2a5b460()*1.72947);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ef20() {
   return (neuron0x2a5b7a0()*-0.0638152);
}

double NNfunction_ns_chi01_dR::synapse0x2a606e0() {
   return (neuron0x2a5bae0()*0.0814577);
}

double NNfunction_ns_chi01_dR::synapse0x2a60720() {
   return (neuron0x2a5be20()*-0.122649);
}

double NNfunction_ns_chi01_dR::synapse0x2a60760() {
   return (neuron0x2a5c160()*0.288762);
}

double NNfunction_ns_chi01_dR::synapse0x2a607a0() {
   return (neuron0x2a5c4a0()*-0.0760419);
}

double NNfunction_ns_chi01_dR::synapse0x2a607e0() {
   return (neuron0x2a5c7e0()*-0.515847);
}

double NNfunction_ns_chi01_dR::synapse0x2a60b60() {
   return (neuron0x2a57b90()*-0.00769708);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ba0() {
   return (neuron0x2a57e40()*0.00608139);
}

double NNfunction_ns_chi01_dR::synapse0x2a60be0() {
   return (neuron0x2a58180()*0.00101713);
}

double NNfunction_ns_chi01_dR::synapse0x2a60c20() {
   return (neuron0x2a584c0()*-1.99685);
}

double NNfunction_ns_chi01_dR::synapse0x2a60c60() {
   return (neuron0x2a58800()*-0.00906217);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ca0() {
   return (neuron0x2a58b40()*-0.00727029);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ce0() {
   return (neuron0x2a58e80()*0.00917366);
}

double NNfunction_ns_chi01_dR::synapse0x2a60d20() {
   return (neuron0x2a591c0()*-0.000836204);
}

double NNfunction_ns_chi01_dR::synapse0x2a60d60() {
   return (neuron0x2a59500()*0.00213598);
}

double NNfunction_ns_chi01_dR::synapse0x2822020() {
   return (neuron0x2a59840()*0.00615591);
}

double NNfunction_ns_chi01_dR::synapse0x2822060() {
   return (neuron0x2a59b80()*-0.00280517);
}

double NNfunction_ns_chi01_dR::synapse0x28220a0() {
   return (neuron0x2a59ec0()*-0.0094929);
}

double NNfunction_ns_chi01_dR::synapse0x28220e0() {
   return (neuron0x2a5a200()*-0.00106629);
}

double NNfunction_ns_chi01_dR::synapse0x2822120() {
   return (neuron0x2a5a540()*0.00671408);
}

double NNfunction_ns_chi01_dR::synapse0x2822160() {
   return (neuron0x2a5a880()*-0.0016586);
}

double NNfunction_ns_chi01_dR::synapse0x28221a0() {
   return (neuron0x2a5abc0()*-0.0155374);
}

double NNfunction_ns_chi01_dR::synapse0x2a609b0() {
   return (neuron0x2a5af00()*0.0142894);
}

double NNfunction_ns_chi01_dR::synapse0x2a609f0() {
   return (neuron0x2a5b460()*0.188325);
}

double NNfunction_ns_chi01_dR::synapse0x28222f0() {
   return (neuron0x2a5b7a0()*-0.00180156);
}

double NNfunction_ns_chi01_dR::synapse0x2822330() {
   return (neuron0x2a5bae0()*-0.00684335);
}

double NNfunction_ns_chi01_dR::synapse0x2822370() {
   return (neuron0x2a5be20()*0.0145966);
}

double NNfunction_ns_chi01_dR::synapse0x28223b0() {
   return (neuron0x2a5c160()*0.0142023);
}

double NNfunction_ns_chi01_dR::synapse0x28223f0() {
   return (neuron0x2a5c4a0()*0.001845);
}

double NNfunction_ns_chi01_dR::synapse0x2a615b0() {
   return (neuron0x2a5c7e0()*-0.0183174);
}

double NNfunction_ns_chi01_dR::synapse0x2a61930() {
   return (neuron0x2a57b90()*0.352054);
}

double NNfunction_ns_chi01_dR::synapse0x2a61970() {
   return (neuron0x2a57e40()*-4.54008);
}

double NNfunction_ns_chi01_dR::synapse0x2a619b0() {
   return (neuron0x2a58180()*3.86436);
}

double NNfunction_ns_chi01_dR::synapse0x2a619f0() {
   return (neuron0x2a584c0()*-0.00287634);
}

double NNfunction_ns_chi01_dR::synapse0x2a61a30() {
   return (neuron0x2a58800()*0.154733);
}

double NNfunction_ns_chi01_dR::synapse0x2a61a70() {
   return (neuron0x2a58b40()*-0.16929);
}

double NNfunction_ns_chi01_dR::synapse0x2a61ab0() {
   return (neuron0x2a58e80()*-0.0302143);
}

double NNfunction_ns_chi01_dR::synapse0x2a61af0() {
   return (neuron0x2a591c0()*-0.0337636);
}

double NNfunction_ns_chi01_dR::synapse0x2a61b30() {
   return (neuron0x2a59500()*-0.0906635);
}

double NNfunction_ns_chi01_dR::synapse0x2a61b70() {
   return (neuron0x2a59840()*0.120942);
}

double NNfunction_ns_chi01_dR::synapse0x2a61bb0() {
   return (neuron0x2a59b80()*0.0796734);
}

double NNfunction_ns_chi01_dR::synapse0x2a61bf0() {
   return (neuron0x2a59ec0()*-0.0291512);
}

double NNfunction_ns_chi01_dR::synapse0x2a61c30() {
   return (neuron0x2a5a200()*-8.42251e-05);
}

double NNfunction_ns_chi01_dR::synapse0x2a61c70() {
   return (neuron0x2a5a540()*-0.200378);
}

double NNfunction_ns_chi01_dR::synapse0x2a61cb0() {
   return (neuron0x2a5a880()*0.0967416);
}

double NNfunction_ns_chi01_dR::synapse0x2a61cf0() {
   return (neuron0x2a5abc0()*-0.0615306);
}

double NNfunction_ns_chi01_dR::synapse0x2a61780() {
   return (neuron0x2a5af00()*-0.0686266);
}

double NNfunction_ns_chi01_dR::synapse0x2a617c0() {
   return (neuron0x2a5b460()*0.796761);
}

double NNfunction_ns_chi01_dR::synapse0x2a61e40() {
   return (neuron0x2a5b7a0()*0.0208336);
}

double NNfunction_ns_chi01_dR::synapse0x2a61e80() {
   return (neuron0x2a5bae0()*0.066717);
}

double NNfunction_ns_chi01_dR::synapse0x2a61ec0() {
   return (neuron0x2a5be20()*0.133888);
}

double NNfunction_ns_chi01_dR::synapse0x2a61f00() {
   return (neuron0x2a5c160()*0.0123467);
}

double NNfunction_ns_chi01_dR::synapse0x2a61f40() {
   return (neuron0x2a5c4a0()*-0.0246413);
}

double NNfunction_ns_chi01_dR::synapse0x2a61f80() {
   return (neuron0x2a5c7e0()*-1.148);
}

double NNfunction_ns_chi01_dR::synapse0x2a62300() {
   return (neuron0x2a57b90()*-0.0122174);
}

double NNfunction_ns_chi01_dR::synapse0x2a62340() {
   return (neuron0x2a57e40()*0.685008);
}

double NNfunction_ns_chi01_dR::synapse0x2a62380() {
   return (neuron0x2a58180()*0.1695);
}

double NNfunction_ns_chi01_dR::synapse0x2a623c0() {
   return (neuron0x2a584c0()*-0.0193197);
}

double NNfunction_ns_chi01_dR::synapse0x2a62400() {
   return (neuron0x2a58800()*-0.0840626);
}

double NNfunction_ns_chi01_dR::synapse0x2a62440() {
   return (neuron0x2a58b40()*0.0220812);
}

double NNfunction_ns_chi01_dR::synapse0x2a62480() {
   return (neuron0x2a58e80()*-0.0018801);
}

double NNfunction_ns_chi01_dR::synapse0x2a624c0() {
   return (neuron0x2a591c0()*0.00890355);
}

double NNfunction_ns_chi01_dR::synapse0x2a62500() {
   return (neuron0x2a59500()*0.0208019);
}

double NNfunction_ns_chi01_dR::synapse0x2a62540() {
   return (neuron0x2a59840()*-0.00385676);
}

double NNfunction_ns_chi01_dR::synapse0x2a62580() {
   return (neuron0x2a59b80()*-0.0149649);
}

double NNfunction_ns_chi01_dR::synapse0x2a625c0() {
   return (neuron0x2a59ec0()*0.00409974);
}

double NNfunction_ns_chi01_dR::synapse0x2a62600() {
   return (neuron0x2a5a200()*0.00489929);
}

double NNfunction_ns_chi01_dR::synapse0x2a62640() {
   return (neuron0x2a5a540()*-0.0185007);
}

double NNfunction_ns_chi01_dR::synapse0x2a62680() {
   return (neuron0x2a5a880()*0.0370142);
}

double NNfunction_ns_chi01_dR::synapse0x2a626c0() {
   return (neuron0x2a5abc0()*0.0215704);
}

double NNfunction_ns_chi01_dR::synapse0x2a62150() {
   return (neuron0x2a5af00()*-0.0205917);
}

double NNfunction_ns_chi01_dR::synapse0x2a62190() {
   return (neuron0x2a5b460()*-0.268801);
}

double NNfunction_ns_chi01_dR::synapse0x2a62810() {
   return (neuron0x2a5b7a0()*-0.00244031);
}

double NNfunction_ns_chi01_dR::synapse0x2a62850() {
   return (neuron0x2a5bae0()*-0.000610362);
}

double NNfunction_ns_chi01_dR::synapse0x2a62890() {
   return (neuron0x2a5be20()*0.0118178);
}

double NNfunction_ns_chi01_dR::synapse0x2a628d0() {
   return (neuron0x2a5c160()*-0.00517232);
}

double NNfunction_ns_chi01_dR::synapse0x2a62910() {
   return (neuron0x2a5c4a0()*0.0139883);
}

double NNfunction_ns_chi01_dR::synapse0x2a62950() {
   return (neuron0x2a5c7e0()*-22.6313);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b350() {
   return (neuron0x2a57b90()*0.00526798);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b390() {
   return (neuron0x2a57e40()*4.97274);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b3d0() {
   return (neuron0x2a58180()*-6.31772);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b410() {
   return (neuron0x2a584c0()*0.201834);
}

double NNfunction_ns_chi01_dR::synapse0x2a62ee0() {
   return (neuron0x2a58800()*0.0719068);
}

double NNfunction_ns_chi01_dR::synapse0x2a62f20() {
   return (neuron0x2a58b40()*0.0687394);
}

double NNfunction_ns_chi01_dR::synapse0x2a62f60() {
   return (neuron0x2a58e80()*0.0523196);
}

double NNfunction_ns_chi01_dR::synapse0x2a62fa0() {
   return (neuron0x2a591c0()*0.10444);
}

double NNfunction_ns_chi01_dR::synapse0x2a62fe0() {
   return (neuron0x2a59500()*-0.0380076);
}

double NNfunction_ns_chi01_dR::synapse0x2a63020() {
   return (neuron0x2a59840()*-0.105176);
}

double NNfunction_ns_chi01_dR::synapse0x2a63060() {
   return (neuron0x2a59b80()*-0.0085794);
}

double NNfunction_ns_chi01_dR::synapse0x2a630a0() {
   return (neuron0x2a59ec0()*-0.0285606);
}

double NNfunction_ns_chi01_dR::synapse0x2a630e0() {
   return (neuron0x2a5a200()*-0.0907332);
}

double NNfunction_ns_chi01_dR::synapse0x2a63120() {
   return (neuron0x2a5a540()*-0.130302);
}

double NNfunction_ns_chi01_dR::synapse0x2a63160() {
   return (neuron0x2a5a880()*-0.042949);
}

double NNfunction_ns_chi01_dR::synapse0x2a631a0() {
   return (neuron0x2a5abc0()*0.0603285);
}

double NNfunction_ns_chi01_dR::synapse0x2a62b20() {
   return (neuron0x2a5af00()*-0.0595565);
}

double NNfunction_ns_chi01_dR::synapse0x2a62b60() {
   return (neuron0x2a5b460()*0.161164);
}

double NNfunction_ns_chi01_dR::synapse0x2a632f0() {
   return (neuron0x2a5b7a0()*-0.0288402);
}

double NNfunction_ns_chi01_dR::synapse0x2a63330() {
   return (neuron0x2a5bae0()*-0.113034);
}

double NNfunction_ns_chi01_dR::synapse0x2a63370() {
   return (neuron0x2a5be20()*-0.00172921);
}

double NNfunction_ns_chi01_dR::synapse0x2a633b0() {
   return (neuron0x2a5c160()*0.146496);
}

double NNfunction_ns_chi01_dR::synapse0x2a633f0() {
   return (neuron0x2a5c4a0()*0.0119165);
}

double NNfunction_ns_chi01_dR::synapse0x2a63430() {
   return (neuron0x2a5c7e0()*-1.16147);
}

double NNfunction_ns_chi01_dR::synapse0x2a637b0() {
   return (neuron0x2a57b90()*-0.09845);
}

double NNfunction_ns_chi01_dR::synapse0x2a637f0() {
   return (neuron0x2a57e40()*1.15417);
}

double NNfunction_ns_chi01_dR::synapse0x2a63830() {
   return (neuron0x2a58180()*0.257537);
}

double NNfunction_ns_chi01_dR::synapse0x2a63870() {
   return (neuron0x2a584c0()*-0.769121);
}

double NNfunction_ns_chi01_dR::synapse0x2a638b0() {
   return (neuron0x2a58800()*-0.0711082);
}

double NNfunction_ns_chi01_dR::synapse0x2a638f0() {
   return (neuron0x2a58b40()*-0.313317);
}

double NNfunction_ns_chi01_dR::synapse0x2a63930() {
   return (neuron0x2a58e80()*-0.585842);
}

double NNfunction_ns_chi01_dR::synapse0x2a63970() {
   return (neuron0x2a591c0()*-0.316801);
}

double NNfunction_ns_chi01_dR::synapse0x2a639b0() {
   return (neuron0x2a59500()*-0.429495);
}

double NNfunction_ns_chi01_dR::synapse0x2a639f0() {
   return (neuron0x2a59840()*-0.115533);
}

double NNfunction_ns_chi01_dR::synapse0x2a63a30() {
   return (neuron0x2a59b80()*0.183562);
}

double NNfunction_ns_chi01_dR::synapse0x2a63a70() {
   return (neuron0x2a59ec0()*0.129145);
}

double NNfunction_ns_chi01_dR::synapse0x2a63ab0() {
   return (neuron0x2a5a200()*-0.0723854);
}

double NNfunction_ns_chi01_dR::synapse0x2a63af0() {
   return (neuron0x2a5a540()*-0.133433);
}

double NNfunction_ns_chi01_dR::synapse0x2a63b30() {
   return (neuron0x2a5a880()*0.099022);
}

double NNfunction_ns_chi01_dR::synapse0x2a63b70() {
   return (neuron0x2a5abc0()*-0.208782);
}

double NNfunction_ns_chi01_dR::synapse0x2a63600() {
   return (neuron0x2a5af00()*-0.634273);
}

double NNfunction_ns_chi01_dR::synapse0x2a63640() {
   return (neuron0x2a5b460()*-0.517251);
}

double NNfunction_ns_chi01_dR::synapse0x2a63cc0() {
   return (neuron0x2a5b7a0()*0.393402);
}

double NNfunction_ns_chi01_dR::synapse0x2a63d00() {
   return (neuron0x2a5bae0()*-0.267199);
}

double NNfunction_ns_chi01_dR::synapse0x2a63d40() {
   return (neuron0x2a5be20()*0.316304);
}

double NNfunction_ns_chi01_dR::synapse0x2a63d80() {
   return (neuron0x2a5c160()*-0.276305);
}

double NNfunction_ns_chi01_dR::synapse0x2a63dc0() {
   return (neuron0x2a5c4a0()*-0.345257);
}

double NNfunction_ns_chi01_dR::synapse0x2a63e00() {
   return (neuron0x2a5c7e0()*0.393314);
}

double NNfunction_ns_chi01_dR::synapse0x2a64180() {
   return (neuron0x2a57b90()*-0.168273);
}

double NNfunction_ns_chi01_dR::synapse0x2a641c0() {
   return (neuron0x2a57e40()*2.81407);
}

double NNfunction_ns_chi01_dR::synapse0x2a64200() {
   return (neuron0x2a58180()*-0.196493);
}

double NNfunction_ns_chi01_dR::synapse0x2a64240() {
   return (neuron0x2a584c0()*0.0681248);
}

double NNfunction_ns_chi01_dR::synapse0x2a64280() {
   return (neuron0x2a58800()*-0.0817547);
}

double NNfunction_ns_chi01_dR::synapse0x2a642c0() {
   return (neuron0x2a58b40()*0.145316);
}

double NNfunction_ns_chi01_dR::synapse0x2a64300() {
   return (neuron0x2a58e80()*0.0285213);
}

double NNfunction_ns_chi01_dR::synapse0x2a64340() {
   return (neuron0x2a591c0()*0.0615266);
}

double NNfunction_ns_chi01_dR::synapse0x2a64380() {
   return (neuron0x2a59500()*0.0825409);
}

double NNfunction_ns_chi01_dR::synapse0x2a643c0() {
   return (neuron0x2a59840()*-0.0379316);
}

double NNfunction_ns_chi01_dR::synapse0x2a64400() {
   return (neuron0x2a59b80()*0.0152495);
}

double NNfunction_ns_chi01_dR::synapse0x2a64440() {
   return (neuron0x2a59ec0()*-0.129379);
}

double NNfunction_ns_chi01_dR::synapse0x2a64480() {
   return (neuron0x2a5a200()*-0.0701998);
}

double NNfunction_ns_chi01_dR::synapse0x2a644c0() {
   return (neuron0x2a5a540()*-0.126784);
}

double NNfunction_ns_chi01_dR::synapse0x2a64500() {
   return (neuron0x2a5a880()*-0.109674);
}

double NNfunction_ns_chi01_dR::synapse0x2a64540() {
   return (neuron0x2a5abc0()*0.0380259);
}

double NNfunction_ns_chi01_dR::synapse0x2a63fd0() {
   return (neuron0x2a5af00()*-0.128029);
}

double NNfunction_ns_chi01_dR::synapse0x2a64010() {
   return (neuron0x2a5b460()*-1.29091);
}

double NNfunction_ns_chi01_dR::synapse0x2a60da0() {
   return (neuron0x2a5b7a0()*-0.193952);
}

double NNfunction_ns_chi01_dR::synapse0x2a60de0() {
   return (neuron0x2a5bae0()*0.0772381);
}

double NNfunction_ns_chi01_dR::synapse0x2a60e20() {
   return (neuron0x2a5be20()*-0.0355832);
}

double NNfunction_ns_chi01_dR::synapse0x2a60e60() {
   return (neuron0x2a5c160()*0.036141);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ea0() {
   return (neuron0x2a5c4a0()*0.0669388);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ee0() {
   return (neuron0x2a5c7e0()*0.0598803);
}

double NNfunction_ns_chi01_dR::synapse0x2a61260() {
   return (neuron0x2a57b90()*-0.362105);
}

double NNfunction_ns_chi01_dR::synapse0x2a612a0() {
   return (neuron0x2a57e40()*1.61167);
}

double NNfunction_ns_chi01_dR::synapse0x2a612e0() {
   return (neuron0x2a58180()*1.26026);
}

double NNfunction_ns_chi01_dR::synapse0x2a61320() {
   return (neuron0x2a584c0()*-0.41692);
}

double NNfunction_ns_chi01_dR::synapse0x2a61360() {
   return (neuron0x2a58800()*-0.679095);
}

double NNfunction_ns_chi01_dR::synapse0x2a613a0() {
   return (neuron0x2a58b40()*-0.0722144);
}

double NNfunction_ns_chi01_dR::synapse0x2a613e0() {
   return (neuron0x2a58e80()*0.456289);
}

double NNfunction_ns_chi01_dR::synapse0x2a61420() {
   return (neuron0x2a591c0()*-0.59639);
}

double NNfunction_ns_chi01_dR::synapse0x2a61460() {
   return (neuron0x2a59500()*-0.101606);
}

double NNfunction_ns_chi01_dR::synapse0x2a614a0() {
   return (neuron0x2a59840()*0.211892);
}

double NNfunction_ns_chi01_dR::synapse0x2a614e0() {
   return (neuron0x2a59b80()*0.0261617);
}

double NNfunction_ns_chi01_dR::synapse0x2a61520() {
   return (neuron0x2a59ec0()*0.488618);
}

double NNfunction_ns_chi01_dR::synapse0x2a61560() {
   return (neuron0x2a5a200()*0.450039);
}

double NNfunction_ns_chi01_dR::synapse0x2a656a0() {
   return (neuron0x2a5a540()*-0.696108);
}

double NNfunction_ns_chi01_dR::synapse0x2a656e0() {
   return (neuron0x2a5a880()*0.295107);
}

double NNfunction_ns_chi01_dR::synapse0x2a65720() {
   return (neuron0x2a5abc0()*0.215319);
}

double NNfunction_ns_chi01_dR::synapse0x2a610b0() {
   return (neuron0x2a5af00()*-1.7767);
}

double NNfunction_ns_chi01_dR::synapse0x2a610f0() {
   return (neuron0x2a5b460()*0.0762011);
}

double NNfunction_ns_chi01_dR::synapse0x2a65870() {
   return (neuron0x2a5b7a0()*-0.390284);
}

double NNfunction_ns_chi01_dR::synapse0x2a658b0() {
   return (neuron0x2a5bae0()*0.675676);
}

double NNfunction_ns_chi01_dR::synapse0x2a658f0() {
   return (neuron0x2a5be20()*-0.343395);
}

double NNfunction_ns_chi01_dR::synapse0x2a65930() {
   return (neuron0x2a5c160()*1.02721);
}

double NNfunction_ns_chi01_dR::synapse0x2a65970() {
   return (neuron0x2a5c4a0()*-0.5959);
}

double NNfunction_ns_chi01_dR::synapse0x2a659b0() {
   return (neuron0x2a5c7e0()*-1.14988);
}

double NNfunction_ns_chi01_dR::synapse0x2a65d30() {
   return (neuron0x2a57b90()*0.175442);
}

double NNfunction_ns_chi01_dR::synapse0x2a65d70() {
   return (neuron0x2a57e40()*-5.58464);
}

double NNfunction_ns_chi01_dR::synapse0x2a65db0() {
   return (neuron0x2a58180()*0.0689793);
}

double NNfunction_ns_chi01_dR::synapse0x2a65df0() {
   return (neuron0x2a584c0()*0.0719207);
}

double NNfunction_ns_chi01_dR::synapse0x2a65e30() {
   return (neuron0x2a58800()*-0.0841832);
}

double NNfunction_ns_chi01_dR::synapse0x2a65e70() {
   return (neuron0x2a58b40()*0.0532662);
}

double NNfunction_ns_chi01_dR::synapse0x2a65eb0() {
   return (neuron0x2a58e80()*-0.161146);
}

double NNfunction_ns_chi01_dR::synapse0x2a65ef0() {
   return (neuron0x2a591c0()*0.0488675);
}

double NNfunction_ns_chi01_dR::synapse0x2a65f30() {
   return (neuron0x2a59500()*0.0177082);
}

double NNfunction_ns_chi01_dR::synapse0x2a65f70() {
   return (neuron0x2a59840()*0.0505881);
}

double NNfunction_ns_chi01_dR::synapse0x2a65fb0() {
   return (neuron0x2a59b80()*-0.0176027);
}

double NNfunction_ns_chi01_dR::synapse0x2a65ff0() {
   return (neuron0x2a59ec0()*0.0207992);
}

double NNfunction_ns_chi01_dR::synapse0x2a66030() {
   return (neuron0x2a5a200()*-0.0375857);
}

double NNfunction_ns_chi01_dR::synapse0x2a66070() {
   return (neuron0x2a5a540()*0.0222133);
}

double NNfunction_ns_chi01_dR::synapse0x2a660b0() {
   return (neuron0x2a5a880()*-0.0866428);
}

double NNfunction_ns_chi01_dR::synapse0x2a660f0() {
   return (neuron0x2a5abc0()*0.103029);
}

double NNfunction_ns_chi01_dR::synapse0x2a65b80() {
   return (neuron0x2a5af00()*0.0105848);
}

double NNfunction_ns_chi01_dR::synapse0x2a65bc0() {
   return (neuron0x2a5b460()*0.141942);
}

double NNfunction_ns_chi01_dR::synapse0x2a66240() {
   return (neuron0x2a5b7a0()*0.0921418);
}

double NNfunction_ns_chi01_dR::synapse0x2a66280() {
   return (neuron0x2a5bae0()*-0.0428966);
}

double NNfunction_ns_chi01_dR::synapse0x2a662c0() {
   return (neuron0x2a5be20()*0.109863);
}

double NNfunction_ns_chi01_dR::synapse0x2a66300() {
   return (neuron0x2a5c160()*0.0113016);
}

double NNfunction_ns_chi01_dR::synapse0x2a66340() {
   return (neuron0x2a5c4a0()*-0.010419);
}

double NNfunction_ns_chi01_dR::synapse0x2a66380() {
   return (neuron0x2a5c7e0()*0.568569);
}

double NNfunction_ns_chi01_dR::synapse0x2a66700() {
   return (neuron0x2a57b90()*0.121511);
}

double NNfunction_ns_chi01_dR::synapse0x2a66740() {
   return (neuron0x2a57e40()*-0.363775);
}

double NNfunction_ns_chi01_dR::synapse0x2a66780() {
   return (neuron0x2a58180()*0.0494756);
}

double NNfunction_ns_chi01_dR::synapse0x2a667c0() {
   return (neuron0x2a584c0()*0.0452607);
}

double NNfunction_ns_chi01_dR::synapse0x2a66800() {
   return (neuron0x2a58800()*0.0590086);
}

double NNfunction_ns_chi01_dR::synapse0x2a66840() {
   return (neuron0x2a58b40()*-0.00492621);
}

double NNfunction_ns_chi01_dR::synapse0x2a66880() {
   return (neuron0x2a58e80()*-0.0181736);
}

double NNfunction_ns_chi01_dR::synapse0x2a668c0() {
   return (neuron0x2a591c0()*-0.0354822);
}

double NNfunction_ns_chi01_dR::synapse0x2a66900() {
   return (neuron0x2a59500()*0.00943111);
}

double NNfunction_ns_chi01_dR::synapse0x2a66940() {
   return (neuron0x2a59840()*0.0203382);
}

double NNfunction_ns_chi01_dR::synapse0x2a66980() {
   return (neuron0x2a59b80()*0.00160981);
}

double NNfunction_ns_chi01_dR::synapse0x2a669c0() {
   return (neuron0x2a59ec0()*0.00123343);
}

double NNfunction_ns_chi01_dR::synapse0x2a66a00() {
   return (neuron0x2a5a200()*0.0599924);
}

double NNfunction_ns_chi01_dR::synapse0x2a66a40() {
   return (neuron0x2a5a540()*0.0239236);
}

double NNfunction_ns_chi01_dR::synapse0x2a66a80() {
   return (neuron0x2a5a880()*-0.0415983);
}

double NNfunction_ns_chi01_dR::synapse0x2a66ac0() {
   return (neuron0x2a5abc0()*-0.0151145);
}

double NNfunction_ns_chi01_dR::synapse0x2a66550() {
   return (neuron0x2a5af00()*-0.00838121);
}

double NNfunction_ns_chi01_dR::synapse0x2a66590() {
   return (neuron0x2a5b460()*0.96879);
}

double NNfunction_ns_chi01_dR::synapse0x2a66c10() {
   return (neuron0x2a5b7a0()*-0.00460761);
}

double NNfunction_ns_chi01_dR::synapse0x2a66c50() {
   return (neuron0x2a5bae0()*0.025562);
}

double NNfunction_ns_chi01_dR::synapse0x2a66c90() {
   return (neuron0x2a5be20()*-0.0224407);
}

double NNfunction_ns_chi01_dR::synapse0x2a66cd0() {
   return (neuron0x2a5c160()*0.0155768);
}

double NNfunction_ns_chi01_dR::synapse0x2a66d10() {
   return (neuron0x2a5c4a0()*-0.0594896);
}

double NNfunction_ns_chi01_dR::synapse0x2a66d50() {
   return (neuron0x2a5c7e0()*5.46563);
}

double NNfunction_ns_chi01_dR::synapse0x2a670d0() {
   return (neuron0x2a57b90()*-0.0342595);
}

double NNfunction_ns_chi01_dR::synapse0x2a67110() {
   return (neuron0x2a57e40()*0.385822);
}

double NNfunction_ns_chi01_dR::synapse0x2a67150() {
   return (neuron0x2a58180()*-0.258249);
}

double NNfunction_ns_chi01_dR::synapse0x2a67190() {
   return (neuron0x2a584c0()*-1.74023);
}

double NNfunction_ns_chi01_dR::synapse0x2a671d0() {
   return (neuron0x2a58800()*-0.898066);
}

double NNfunction_ns_chi01_dR::synapse0x2a67210() {
   return (neuron0x2a58b40()*-0.77952);
}

double NNfunction_ns_chi01_dR::synapse0x2a67250() {
   return (neuron0x2a58e80()*-0.175765);
}

double NNfunction_ns_chi01_dR::synapse0x2a67290() {
   return (neuron0x2a591c0()*0.420199);
}

double NNfunction_ns_chi01_dR::synapse0x2a672d0() {
   return (neuron0x2a59500()*0.0128952);
}

double NNfunction_ns_chi01_dR::synapse0x2a67310() {
   return (neuron0x2a59840()*-0.21575);
}

double NNfunction_ns_chi01_dR::synapse0x2a67350() {
   return (neuron0x2a59b80()*-0.0221096);
}

double NNfunction_ns_chi01_dR::synapse0x2a67390() {
   return (neuron0x2a59ec0()*-0.0347528);
}

double NNfunction_ns_chi01_dR::synapse0x2a673d0() {
   return (neuron0x2a5a200()*-0.693125);
}

double NNfunction_ns_chi01_dR::synapse0x2a67410() {
   return (neuron0x2a5a540()*-0.231483);
}

double NNfunction_ns_chi01_dR::synapse0x2a67450() {
   return (neuron0x2a5a880()*-0.0851654);
}

double NNfunction_ns_chi01_dR::synapse0x2a67490() {
   return (neuron0x2a5abc0()*-0.70638);
}

double NNfunction_ns_chi01_dR::synapse0x2a66f20() {
   return (neuron0x2a5af00()*-0.535939);
}

double NNfunction_ns_chi01_dR::synapse0x2a66f60() {
   return (neuron0x2a5b460()*-2.61289);
}

double NNfunction_ns_chi01_dR::synapse0x2a675e0() {
   return (neuron0x2a5b7a0()*0.249953);
}

double NNfunction_ns_chi01_dR::synapse0x2a67620() {
   return (neuron0x2a5bae0()*-0.576262);
}

double NNfunction_ns_chi01_dR::synapse0x2a67660() {
   return (neuron0x2a5be20()*0.300951);
}

double NNfunction_ns_chi01_dR::synapse0x2a676a0() {
   return (neuron0x2a5c160()*-0.437051);
}

double NNfunction_ns_chi01_dR::synapse0x2a676e0() {
   return (neuron0x2a5c4a0()*0.196369);
}

double NNfunction_ns_chi01_dR::synapse0x2a67720() {
   return (neuron0x2a5c7e0()*0.102534);
}

double NNfunction_ns_chi01_dR::synapse0x2a67aa0() {
   return (neuron0x2a57b90()*-0.120357);
}

double NNfunction_ns_chi01_dR::synapse0x2a57d20() {
   return (neuron0x2a57e40()*0.534189);
}

double NNfunction_ns_chi01_dR::synapse0x2a57d60() {
   return (neuron0x2a58180()*-0.919744);
}

double NNfunction_ns_chi01_dR::synapse0x2a58060() {
   return (neuron0x2a584c0()*-0.445353);
}

double NNfunction_ns_chi01_dR::synapse0x2a580a0() {
   return (neuron0x2a58800()*-1.01144);
}

double NNfunction_ns_chi01_dR::synapse0x2a583a0() {
   return (neuron0x2a58b40()*0.13371);
}

double NNfunction_ns_chi01_dR::synapse0x2a583e0() {
   return (neuron0x2a58e80()*-0.038623);
}

double NNfunction_ns_chi01_dR::synapse0x2a586e0() {
   return (neuron0x2a591c0()*0.88267);
}

double NNfunction_ns_chi01_dR::synapse0x2a58720() {
   return (neuron0x2a59500()*0.55367);
}

double NNfunction_ns_chi01_dR::synapse0x2a58a20() {
   return (neuron0x2a59840()*0.218733);
}

double NNfunction_ns_chi01_dR::synapse0x2a58a60() {
   return (neuron0x2a59b80()*-0.0530549);
}

double NNfunction_ns_chi01_dR::synapse0x2a58d60() {
   return (neuron0x2a59ec0()*0.33338);
}

double NNfunction_ns_chi01_dR::synapse0x2a58da0() {
   return (neuron0x2a5a200()*0.540051);
}

double NNfunction_ns_chi01_dR::synapse0x2a590a0() {
   return (neuron0x2a5a540()*-0.482902);
}

double NNfunction_ns_chi01_dR::synapse0x2a590e0() {
   return (neuron0x2a5a880()*-0.756769);
}

double NNfunction_ns_chi01_dR::synapse0x2a593e0() {
   return (neuron0x2a5abc0()*0.976805);
}

double NNfunction_ns_chi01_dR::synapse0x2a59420() {
   return (neuron0x2a5af00()*-0.667945);
}

double NNfunction_ns_chi01_dR::synapse0x2a59720() {
   return (neuron0x2a5b460()*-1.38219);
}

double NNfunction_ns_chi01_dR::synapse0x2a59760() {
   return (neuron0x2a5b7a0()*-0.349189);
}

double NNfunction_ns_chi01_dR::synapse0x2a59a60() {
   return (neuron0x2a5bae0()*0.304249);
}

double NNfunction_ns_chi01_dR::synapse0x2a59aa0() {
   return (neuron0x2a5be20()*0.734622);
}

double NNfunction_ns_chi01_dR::synapse0x2a59da0() {
   return (neuron0x2a5c160()*-0.417817);
}

double NNfunction_ns_chi01_dR::synapse0x2a59de0() {
   return (neuron0x2a5c4a0()*-0.458108);
}

double NNfunction_ns_chi01_dR::synapse0x2a5a0e0() {
   return (neuron0x2a5c7e0()*1.14373);
}

double NNfunction_ns_chi01_dR::synapse0x2a5a120() {
   return (neuron0x2a57b90()*0.143034);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ade0() {
   return (neuron0x2a57e40()*-1.03605);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ae20() {
   return (neuron0x2a58180()*0.248085);
}

double NNfunction_ns_chi01_dR::synapse0x2a678f0() {
   return (neuron0x2a584c0()*0.194824);
}

double NNfunction_ns_chi01_dR::synapse0x2a67930() {
   return (neuron0x2a58800()*-0.0427778);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b120() {
   return (neuron0x2a58b40()*0.123329);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b160() {
   return (neuron0x2a58e80()*-0.256374);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b680() {
   return (neuron0x2a591c0()*-0.179232);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b6c0() {
   return (neuron0x2a59500()*-0.200201);
}

double NNfunction_ns_chi01_dR::synapse0x2a5b9c0() {
   return (neuron0x2a59840()*0.0218648);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ba00() {
   return (neuron0x2a59b80()*0.224229);
}

double NNfunction_ns_chi01_dR::synapse0x2a5bd00() {
   return (neuron0x2a59ec0()*0.0268712);
}

double NNfunction_ns_chi01_dR::synapse0x2a5bd40() {
   return (neuron0x2a5a200()*-0.020974);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c040() {
   return (neuron0x2a5a540()*0.107925);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c080() {
   return (neuron0x2a5a880()*-0.0762316);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c380() {
   return (neuron0x2a5abc0()*0.0431958);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c3c0() {
   return (neuron0x2a5af00()*0.264696);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c6c0() {
   return (neuron0x2a5b460()*-0.386702);
}

double NNfunction_ns_chi01_dR::synapse0x2a5c700() {
   return (neuron0x2a5b7a0()*0.0927064);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ca00() {
   return (neuron0x2a5bae0()*-0.102429);
}

double NNfunction_ns_chi01_dR::synapse0x2a5ca40() {
   return (neuron0x2a5be20()*0.317094);
}

double NNfunction_ns_chi01_dR::synapse0x2a5a420() {
   return (neuron0x2a5c160()*0.136083);
}

double NNfunction_ns_chi01_dR::synapse0x2a5a460() {
   return (neuron0x2a5c4a0()*0.122964);
}

double NNfunction_ns_chi01_dR::synapse0x2a69810() {
   return (neuron0x2a5c7e0()*-0.0736911);
}

double NNfunction_ns_chi01_dR::synapse0x2a69b90() {
   return (neuron0x2a57b90()*-0.6223);
}

double NNfunction_ns_chi01_dR::synapse0x2a69bd0() {
   return (neuron0x2a57e40()*-0.385233);
}

double NNfunction_ns_chi01_dR::synapse0x2a69c10() {
   return (neuron0x2a58180()*-0.12055);
}

double NNfunction_ns_chi01_dR::synapse0x2a69c50() {
   return (neuron0x2a584c0()*0.907476);
}

double NNfunction_ns_chi01_dR::synapse0x2a69c90() {
   return (neuron0x2a58800()*0.337322);
}

double NNfunction_ns_chi01_dR::synapse0x2a69cd0() {
   return (neuron0x2a58b40()*0.0186792);
}

double NNfunction_ns_chi01_dR::synapse0x2a69d10() {
   return (neuron0x2a58e80()*-0.461622);
}

double NNfunction_ns_chi01_dR::synapse0x2a69d50() {
   return (neuron0x2a591c0()*-0.0964157);
}

double NNfunction_ns_chi01_dR::synapse0x2a69d90() {
   return (neuron0x2a59500()*-0.049568);
}

double NNfunction_ns_chi01_dR::synapse0x2a69dd0() {
   return (neuron0x2a59840()*0.0547737);
}

double NNfunction_ns_chi01_dR::synapse0x2a69e10() {
   return (neuron0x2a59b80()*-0.119149);
}

double NNfunction_ns_chi01_dR::synapse0x2a69e50() {
   return (neuron0x2a59ec0()*0.0722346);
}

double NNfunction_ns_chi01_dR::synapse0x2a69e90() {
   return (neuron0x2a5a200()*-0.242656);
}

double NNfunction_ns_chi01_dR::synapse0x2a69ed0() {
   return (neuron0x2a5a540()*-0.150975);
}

double NNfunction_ns_chi01_dR::synapse0x2a69f10() {
   return (neuron0x2a5a880()*-0.0717453);
}

double NNfunction_ns_chi01_dR::synapse0x2a69f50() {
   return (neuron0x2a5abc0()*-0.343393);
}

double NNfunction_ns_chi01_dR::synapse0x2a699e0() {
   return (neuron0x2a5af00()*0.279941);
}

double NNfunction_ns_chi01_dR::synapse0x2a69a20() {
   return (neuron0x2a5b460()*0.580816);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a0a0() {
   return (neuron0x2a5b7a0()*-0.286053);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a0e0() {
   return (neuron0x2a5bae0()*0.0362334);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a120() {
   return (neuron0x2a5be20()*0.0213751);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a160() {
   return (neuron0x2a5c160()*0.163358);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a1a0() {
   return (neuron0x2a5c4a0()*-0.224324);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a1e0() {
   return (neuron0x2a5c7e0()*0.811287);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a560() {
   return (neuron0x2a57b90()*0.420338);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a5a0() {
   return (neuron0x2a57e40()*1.77735);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a5e0() {
   return (neuron0x2a58180()*0.731506);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a620() {
   return (neuron0x2a584c0()*1.16909);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a660() {
   return (neuron0x2a58800()*-0.45345);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a6a0() {
   return (neuron0x2a58b40()*0.599321);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a6e0() {
   return (neuron0x2a58e80()*-0.0645801);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a720() {
   return (neuron0x2a591c0()*-1.35022);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a760() {
   return (neuron0x2a59500()*0.606193);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a7a0() {
   return (neuron0x2a59840()*-0.731155);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a7e0() {
   return (neuron0x2a59b80()*0.244497);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a820() {
   return (neuron0x2a59ec0()*0.0248006);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a860() {
   return (neuron0x2a5a200()*0.502871);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a8a0() {
   return (neuron0x2a5a540()*0.685029);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a8e0() {
   return (neuron0x2a5a880()*0.00538186);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a920() {
   return (neuron0x2a5abc0()*-0.820278);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a3b0() {
   return (neuron0x2a5af00()*0.583179);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a3f0() {
   return (neuron0x2a5b460()*-1.1404);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aa70() {
   return (neuron0x2a5b7a0()*-0.836944);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aab0() {
   return (neuron0x2a5bae0()*-0.85446);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aaf0() {
   return (neuron0x2a5be20()*-0.136545);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ab30() {
   return (neuron0x2a5c160()*0.0011741);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ab70() {
   return (neuron0x2a5c4a0()*0.567553);
}

double NNfunction_ns_chi01_dR::synapse0x2a6abb0() {
   return (neuron0x2a5c7e0()*1.06687);
}

double NNfunction_ns_chi01_dR::synapse0x2a6af30() {
   return (neuron0x2a57b90()*-0.0138139);
}

double NNfunction_ns_chi01_dR::synapse0x2a6af70() {
   return (neuron0x2a57e40()*-0.381534);
}

double NNfunction_ns_chi01_dR::synapse0x2a6afb0() {
   return (neuron0x2a58180()*0.924013);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aff0() {
   return (neuron0x2a584c0()*-0.240615);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b030() {
   return (neuron0x2a58800()*0.0954502);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b070() {
   return (neuron0x2a58b40()*0.0483481);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b0b0() {
   return (neuron0x2a58e80()*-0.0999175);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b0f0() {
   return (neuron0x2a591c0()*-1.57376);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b130() {
   return (neuron0x2a59500()*-0.519705);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b170() {
   return (neuron0x2a59840()*0.1413);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b1b0() {
   return (neuron0x2a59b80()*0.643287);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b1f0() {
   return (neuron0x2a59ec0()*0.128276);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b230() {
   return (neuron0x2a5a200()*0.256324);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b270() {
   return (neuron0x2a5a540()*0.711863);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b2b0() {
   return (neuron0x2a5a880()*0.262027);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b2f0() {
   return (neuron0x2a5abc0()*-0.241404);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ad80() {
   return (neuron0x2a5af00()*-1.53953);
}

double NNfunction_ns_chi01_dR::synapse0x2a6adc0() {
   return (neuron0x2a5b460()*-0.67465);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b440() {
   return (neuron0x2a5b7a0()*-0.0691165);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b480() {
   return (neuron0x2a5bae0()*0.386182);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b4c0() {
   return (neuron0x2a5be20()*-1.20587);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b500() {
   return (neuron0x2a5c160()*1.43549);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b540() {
   return (neuron0x2a5c4a0()*-0.0479221);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b580() {
   return (neuron0x2a5c7e0()*0.936152);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b900() {
   return (neuron0x2a57b90()*-0.250335);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b940() {
   return (neuron0x2a57e40()*-0.224573);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b980() {
   return (neuron0x2a58180()*0.0598021);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b9c0() {
   return (neuron0x2a584c0()*0.512413);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ba00() {
   return (neuron0x2a58800()*0.168397);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ba40() {
   return (neuron0x2a58b40()*-0.168588);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ba80() {
   return (neuron0x2a58e80()*-0.509923);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bac0() {
   return (neuron0x2a591c0()*-0.171835);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bb00() {
   return (neuron0x2a59500()*0.0393312);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bb40() {
   return (neuron0x2a59840()*0.492431);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bb80() {
   return (neuron0x2a59b80()*0.273111);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bbc0() {
   return (neuron0x2a59ec0()*0.297974);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bc00() {
   return (neuron0x2a5a200()*-1.52675);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bc40() {
   return (neuron0x2a5a540()*-0.581898);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bc80() {
   return (neuron0x2a5a880()*0.191942);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bcc0() {
   return (neuron0x2a5abc0()*-0.46177);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b750() {
   return (neuron0x2a5af00()*-0.202652);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b790() {
   return (neuron0x2a5b460()*-0.241209);
}

double NNfunction_ns_chi01_dR::synapse0x2a6be10() {
   return (neuron0x2a5b7a0()*-1.12657);
}

double NNfunction_ns_chi01_dR::synapse0x2a6be50() {
   return (neuron0x2a5bae0()*0.846228);
}

double NNfunction_ns_chi01_dR::synapse0x2a6be90() {
   return (neuron0x2a5be20()*-0.239139);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bed0() {
   return (neuron0x2a5c160()*0.591988);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bf10() {
   return (neuron0x2a5c4a0()*0.698318);
}

double NNfunction_ns_chi01_dR::synapse0x2a6bf50() {
   return (neuron0x2a5c7e0()*-0.448931);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c2d0() {
   return (neuron0x2a57b90()*-0.070219);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c310() {
   return (neuron0x2a57e40()*0.0427882);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c350() {
   return (neuron0x2a58180()*0.0391313);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c390() {
   return (neuron0x2a584c0()*-0.117485);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c3d0() {
   return (neuron0x2a58800()*-0.0211388);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c410() {
   return (neuron0x2a58b40()*0.104306);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c450() {
   return (neuron0x2a58e80()*0.111632);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c490() {
   return (neuron0x2a591c0()*-0.00797272);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c4d0() {
   return (neuron0x2a59500()*-0.0937448);
}

double NNfunction_ns_chi01_dR::synapse0x2a64690() {
   return (neuron0x2a59840()*-0.00023509);
}

double NNfunction_ns_chi01_dR::synapse0x2a646d0() {
   return (neuron0x2a59b80()*-0.0470754);
}

double NNfunction_ns_chi01_dR::synapse0x2a64710() {
   return (neuron0x2a59ec0()*0.0239806);
}

double NNfunction_ns_chi01_dR::synapse0x2a64750() {
   return (neuron0x2a5a200()*0.0209123);
}

double NNfunction_ns_chi01_dR::synapse0x2a64790() {
   return (neuron0x2a5a540()*-0.0447853);
}

double NNfunction_ns_chi01_dR::synapse0x2a647d0() {
   return (neuron0x2a5a880()*0.132272);
}

double NNfunction_ns_chi01_dR::synapse0x2a64810() {
   return (neuron0x2a5abc0()*0.194568);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c120() {
   return (neuron0x2a5af00()*-0.220474);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c160() {
   return (neuron0x2a5b460()*-1.11588);
}

double NNfunction_ns_chi01_dR::synapse0x2a64960() {
   return (neuron0x2a5b7a0()*-0.00146564);
}

double NNfunction_ns_chi01_dR::synapse0x2a649a0() {
   return (neuron0x2a5bae0()*0.0723771);
}

double NNfunction_ns_chi01_dR::synapse0x2a649e0() {
   return (neuron0x2a5be20()*0.0580268);
}

double NNfunction_ns_chi01_dR::synapse0x2a64a20() {
   return (neuron0x2a5c160()*-0.0154464);
}

double NNfunction_ns_chi01_dR::synapse0x2a64a60() {
   return (neuron0x2a5c4a0()*-0.0202035);
}

double NNfunction_ns_chi01_dR::synapse0x2a64aa0() {
   return (neuron0x2a5c7e0()*0.608736);
}

double NNfunction_ns_chi01_dR::synapse0x2a64e20() {
   return (neuron0x2a57b90()*0.220899);
}

double NNfunction_ns_chi01_dR::synapse0x2a64e60() {
   return (neuron0x2a57e40()*0.997893);
}

double NNfunction_ns_chi01_dR::synapse0x2a64ea0() {
   return (neuron0x2a58180()*-0.314733);
}

double NNfunction_ns_chi01_dR::synapse0x2a64ee0() {
   return (neuron0x2a584c0()*-0.770761);
}

double NNfunction_ns_chi01_dR::synapse0x2a64f20() {
   return (neuron0x2a58800()*-0.139153);
}

double NNfunction_ns_chi01_dR::synapse0x2a64f60() {
   return (neuron0x2a58b40()*-0.437225);
}

double NNfunction_ns_chi01_dR::synapse0x2a64fa0() {
   return (neuron0x2a58e80()*0.713011);
}

double NNfunction_ns_chi01_dR::synapse0x2a64fe0() {
   return (neuron0x2a591c0()*-0.446763);
}

double NNfunction_ns_chi01_dR::synapse0x2a65020() {
   return (neuron0x2a59500()*-0.0257563);
}

double NNfunction_ns_chi01_dR::synapse0x2a65060() {
   return (neuron0x2a59840()*0.769124);
}

double NNfunction_ns_chi01_dR::synapse0x2a650a0() {
   return (neuron0x2a59b80()*-0.081339);
}

double NNfunction_ns_chi01_dR::synapse0x2a650e0() {
   return (neuron0x2a59ec0()*-0.25863);
}

double NNfunction_ns_chi01_dR::synapse0x2a65120() {
   return (neuron0x2a5a200()*-0.127891);
}

double NNfunction_ns_chi01_dR::synapse0x2a65160() {
   return (neuron0x2a5a540()*-0.0861106);
}

double NNfunction_ns_chi01_dR::synapse0x2a651a0() {
   return (neuron0x2a5a880()*0.20223);
}

double NNfunction_ns_chi01_dR::synapse0x2a651e0() {
   return (neuron0x2a5abc0()*-0.947996);
}

double NNfunction_ns_chi01_dR::synapse0x2a64c70() {
   return (neuron0x2a5af00()*0.140976);
}

double NNfunction_ns_chi01_dR::synapse0x2a64cb0() {
   return (neuron0x2a5b460()*0.348311);
}

double NNfunction_ns_chi01_dR::synapse0x2a65330() {
   return (neuron0x2a5b7a0()*0.449553);
}

double NNfunction_ns_chi01_dR::synapse0x2a65370() {
   return (neuron0x2a5bae0()*0.452593);
}

double NNfunction_ns_chi01_dR::synapse0x2a653b0() {
   return (neuron0x2a5be20()*-0.041876);
}

double NNfunction_ns_chi01_dR::synapse0x2a653f0() {
   return (neuron0x2a5c160()*1.32746);
}

double NNfunction_ns_chi01_dR::synapse0x2a65430() {
   return (neuron0x2a5c4a0()*-0.332276);
}

double NNfunction_ns_chi01_dR::synapse0x2a65470() {
   return (neuron0x2a5c7e0()*-0.109583);
}

double NNfunction_ns_chi01_dR::synapse0x2a65640() {
   return (neuron0x2a57b90()*0.0208061);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e6d0() {
   return (neuron0x2a57e40()*-0.0458573);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e710() {
   return (neuron0x2a58180()*0.00458405);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e750() {
   return (neuron0x2a584c0()*1.32572);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e790() {
   return (neuron0x2a58800()*0.00397376);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e7d0() {
   return (neuron0x2a58b40()*0.0310043);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e810() {
   return (neuron0x2a58e80()*0.0157232);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e850() {
   return (neuron0x2a591c0()*-0.0024338);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e890() {
   return (neuron0x2a59500()*-0.0267804);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e8d0() {
   return (neuron0x2a59840()*-0.0439086);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e910() {
   return (neuron0x2a59b80()*-0.0257022);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e950() {
   return (neuron0x2a59ec0()*0.0105955);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e990() {
   return (neuron0x2a5a200()*0.0145701);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e9d0() {
   return (neuron0x2a5a540()*-0.0112207);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ea10() {
   return (neuron0x2a5a880()*0.0208728);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ea50() {
   return (neuron0x2a5abc0()*0.0338042);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e520() {
   return (neuron0x2a5af00()*-0.046571);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e560() {
   return (neuron0x2a5b460()*-0.952508);
}

double NNfunction_ns_chi01_dR::synapse0x2a6eba0() {
   return (neuron0x2a5b7a0()*-0.0111198);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ebe0() {
   return (neuron0x2a5bae0()*-0.00327739);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ec20() {
   return (neuron0x2a5be20()*-0.0159287);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ec60() {
   return (neuron0x2a5c160()*-0.0203931);
}

double NNfunction_ns_chi01_dR::synapse0x2a6eca0() {
   return (neuron0x2a5c4a0()*-0.0133177);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ece0() {
   return (neuron0x2a5c7e0()*0.0504226);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f060() {
   return (neuron0x2a57b90()*0.00764418);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f0a0() {
   return (neuron0x2a57e40()*-0.0532763);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f0e0() {
   return (neuron0x2a58180()*-0.000752032);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f120() {
   return (neuron0x2a584c0()*-1.2894);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f160() {
   return (neuron0x2a58800()*-0.0138362);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f1a0() {
   return (neuron0x2a58b40()*0.0184717);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f1e0() {
   return (neuron0x2a58e80()*0.0252528);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f220() {
   return (neuron0x2a591c0()*-0.00396734);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f260() {
   return (neuron0x2a59500()*-0.0237989);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f2a0() {
   return (neuron0x2a59840()*-0.0339515);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f2e0() {
   return (neuron0x2a59b80()*-0.0340605);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f320() {
   return (neuron0x2a59ec0()*-0.0069674);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f360() {
   return (neuron0x2a5a200()*0.012999);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f3a0() {
   return (neuron0x2a5a540()*-0.000811343);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f3e0() {
   return (neuron0x2a5a880()*0.0225138);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f420() {
   return (neuron0x2a5abc0()*0.00550231);
}

double NNfunction_ns_chi01_dR::synapse0x2a6eeb0() {
   return (neuron0x2a5af00()*-0.0153751);
}

double NNfunction_ns_chi01_dR::synapse0x2a6eef0() {
   return (neuron0x2a5b460()*-0.888524);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f570() {
   return (neuron0x2a5b7a0()*-0.0194721);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f5b0() {
   return (neuron0x2a5bae0()*-0.0213618);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f5f0() {
   return (neuron0x2a5be20()*0.00580768);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f630() {
   return (neuron0x2a5c160()*0.0156923);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f670() {
   return (neuron0x2a5c4a0()*-0.0144729);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f6b0() {
   return (neuron0x2a5c7e0()*0.0255378);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fa30() {
   return (neuron0x2a57b90()*-0.0454792);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fa70() {
   return (neuron0x2a57e40()*1.74979);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fab0() {
   return (neuron0x2a58180()*0.151033);
}

double NNfunction_ns_chi01_dR::synapse0x2a6faf0() {
   return (neuron0x2a584c0()*-0.0240565);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fb30() {
   return (neuron0x2a58800()*-0.113581);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fb70() {
   return (neuron0x2a58b40()*0.0216868);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fbb0() {
   return (neuron0x2a58e80()*-0.000887343);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fbf0() {
   return (neuron0x2a591c0()*0.0278071);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fc30() {
   return (neuron0x2a59500()*0.0138338);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fc70() {
   return (neuron0x2a59840()*0.00500431);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fcb0() {
   return (neuron0x2a59b80()*-0.00941401);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fcf0() {
   return (neuron0x2a59ec0()*0.00849781);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fd30() {
   return (neuron0x2a5a200()*-0.0170572);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fd70() {
   return (neuron0x2a5a540()*-0.0134057);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fdb0() {
   return (neuron0x2a5a880()*0.049681);
}

double NNfunction_ns_chi01_dR::synapse0x2a6fdf0() {
   return (neuron0x2a5abc0()*0.00731121);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f880() {
   return (neuron0x2a5af00()*-0.0199688);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f8c0() {
   return (neuron0x2a5b460()*-0.269538);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ff40() {
   return (neuron0x2a5b7a0()*0.00145543);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ff80() {
   return (neuron0x2a5bae0()*-0.00584129);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ffc0() {
   return (neuron0x2a5be20()*-0.000117216);
}

double NNfunction_ns_chi01_dR::synapse0x2a70000() {
   return (neuron0x2a5c160()*0.00342152);
}

double NNfunction_ns_chi01_dR::synapse0x2a70040() {
   return (neuron0x2a5c4a0()*0.0106261);
}

double NNfunction_ns_chi01_dR::synapse0x2a70080() {
   return (neuron0x2a5c7e0()*-15.5322);
}

double NNfunction_ns_chi01_dR::synapse0x2a70400() {
   return (neuron0x2a57b90()*-0.101248);
}

double NNfunction_ns_chi01_dR::synapse0x2a70440() {
   return (neuron0x2a57e40()*-6.59834);
}

double NNfunction_ns_chi01_dR::synapse0x2a70480() {
   return (neuron0x2a58180()*-0.0833116);
}

double NNfunction_ns_chi01_dR::synapse0x2a704c0() {
   return (neuron0x2a584c0()*0.0084809);
}

double NNfunction_ns_chi01_dR::synapse0x2a70500() {
   return (neuron0x2a58800()*0.0498286);
}

double NNfunction_ns_chi01_dR::synapse0x2a70540() {
   return (neuron0x2a58b40()*0.0467821);
}

double NNfunction_ns_chi01_dR::synapse0x2a70580() {
   return (neuron0x2a58e80()*0.00533219);
}

double NNfunction_ns_chi01_dR::synapse0x2a705c0() {
   return (neuron0x2a591c0()*-0.0216262);
}

double NNfunction_ns_chi01_dR::synapse0x2a70600() {
   return (neuron0x2a59500()*0.0341664);
}

double NNfunction_ns_chi01_dR::synapse0x2a70640() {
   return (neuron0x2a59840()*-0.00656796);
}

double NNfunction_ns_chi01_dR::synapse0x2a70680() {
   return (neuron0x2a59b80()*-0.0179548);
}

double NNfunction_ns_chi01_dR::synapse0x2a706c0() {
   return (neuron0x2a59ec0()*0.000286971);
}

double NNfunction_ns_chi01_dR::synapse0x2a70700() {
   return (neuron0x2a5a200()*0.0141899);
}

double NNfunction_ns_chi01_dR::synapse0x2a70740() {
   return (neuron0x2a5a540()*0.0710294);
}

double NNfunction_ns_chi01_dR::synapse0x2a70780() {
   return (neuron0x2a5a880()*-0.027348);
}

double NNfunction_ns_chi01_dR::synapse0x2a707c0() {
   return (neuron0x2a5abc0()*-0.0520839);
}

double NNfunction_ns_chi01_dR::synapse0x2a70250() {
   return (neuron0x2a5af00()*-0.00514955);
}

double NNfunction_ns_chi01_dR::synapse0x2a70290() {
   return (neuron0x2a5b460()*0.275195);
}

double NNfunction_ns_chi01_dR::synapse0x2a70910() {
   return (neuron0x2a5b7a0()*0.0159287);
}

double NNfunction_ns_chi01_dR::synapse0x2a70950() {
   return (neuron0x2a5bae0()*0.0161969);
}

double NNfunction_ns_chi01_dR::synapse0x2a70990() {
   return (neuron0x2a5be20()*-0.0220491);
}

double NNfunction_ns_chi01_dR::synapse0x2a709d0() {
   return (neuron0x2a5c160()*0.048793);
}

double NNfunction_ns_chi01_dR::synapse0x2a70a10() {
   return (neuron0x2a5c4a0()*-0.0129747);
}

double NNfunction_ns_chi01_dR::synapse0x2a70a50() {
   return (neuron0x2a5c7e0()*-8.84794);
}

double NNfunction_ns_chi01_dR::synapse0x2a70dd0() {
   return (neuron0x2a57b90()*-0.0596728);
}

double NNfunction_ns_chi01_dR::synapse0x2a70e10() {
   return (neuron0x2a57e40()*6.23141);
}

double NNfunction_ns_chi01_dR::synapse0x2a70e50() {
   return (neuron0x2a58180()*9.74956);
}

double NNfunction_ns_chi01_dR::synapse0x2a70e90() {
   return (neuron0x2a584c0()*-0.0206946);
}

double NNfunction_ns_chi01_dR::synapse0x2a70ed0() {
   return (neuron0x2a58800()*0.00688169);
}

double NNfunction_ns_chi01_dR::synapse0x2a70f10() {
   return (neuron0x2a58b40()*0.0500266);
}

double NNfunction_ns_chi01_dR::synapse0x2a70f50() {
   return (neuron0x2a58e80()*0.0328805);
}

double NNfunction_ns_chi01_dR::synapse0x2a70f90() {
   return (neuron0x2a591c0()*0.00679846);
}

double NNfunction_ns_chi01_dR::synapse0x2a70fd0() {
   return (neuron0x2a59500()*0.00551639);
}

double NNfunction_ns_chi01_dR::synapse0x2a71010() {
   return (neuron0x2a59840()*0.00395151);
}

double NNfunction_ns_chi01_dR::synapse0x2a71050() {
   return (neuron0x2a59b80()*-0.00864467);
}

double NNfunction_ns_chi01_dR::synapse0x2a71090() {
   return (neuron0x2a59ec0()*0.00224272);
}

double NNfunction_ns_chi01_dR::synapse0x2a710d0() {
   return (neuron0x2a5a200()*0.0368494);
}

double NNfunction_ns_chi01_dR::synapse0x2a71110() {
   return (neuron0x2a5a540()*0.0186675);
}

double NNfunction_ns_chi01_dR::synapse0x2a71150() {
   return (neuron0x2a5a880()*0.00189477);
}

double NNfunction_ns_chi01_dR::synapse0x2a71190() {
   return (neuron0x2a5abc0()*-0.0425003);
}

double NNfunction_ns_chi01_dR::synapse0x2a70c20() {
   return (neuron0x2a5af00()*-0.0371193);
}

double NNfunction_ns_chi01_dR::synapse0x2a70c60() {
   return (neuron0x2a5b460()*0.419038);
}

double NNfunction_ns_chi01_dR::synapse0x2a712e0() {
   return (neuron0x2a5b7a0()*-0.00957068);
}

double NNfunction_ns_chi01_dR::synapse0x2a71320() {
   return (neuron0x2a5bae0()*-0.0160169);
}

double NNfunction_ns_chi01_dR::synapse0x2a71360() {
   return (neuron0x2a5be20()*-0.0664937);
}

double NNfunction_ns_chi01_dR::synapse0x2a713a0() {
   return (neuron0x2a5c160()*0.0111962);
}

double NNfunction_ns_chi01_dR::synapse0x2a713e0() {
   return (neuron0x2a5c4a0()*-0.0362701);
}

double NNfunction_ns_chi01_dR::synapse0x2a71420() {
   return (neuron0x2a5c7e0()*-0.10023);
}

double NNfunction_ns_chi01_dR::synapse0x2a717a0() {
   return (neuron0x2a57b90()*-0.368165);
}

double NNfunction_ns_chi01_dR::synapse0x2a717e0() {
   return (neuron0x2a57e40()*1.24857);
}

double NNfunction_ns_chi01_dR::synapse0x2a71820() {
   return (neuron0x2a58180()*1.23988);
}

double NNfunction_ns_chi01_dR::synapse0x2a71860() {
   return (neuron0x2a584c0()*-0.625236);
}

double NNfunction_ns_chi01_dR::synapse0x2a718a0() {
   return (neuron0x2a58800()*0.0380131);
}

double NNfunction_ns_chi01_dR::synapse0x2a718e0() {
   return (neuron0x2a58b40()*0.0331388);
}

double NNfunction_ns_chi01_dR::synapse0x2a71920() {
   return (neuron0x2a58e80()*0.868713);
}

double NNfunction_ns_chi01_dR::synapse0x2a71960() {
   return (neuron0x2a591c0()*-1.11922);
}

double NNfunction_ns_chi01_dR::synapse0x2a719a0() {
   return (neuron0x2a59500()*-0.483197);
}

double NNfunction_ns_chi01_dR::synapse0x2a719e0() {
   return (neuron0x2a59840()*-0.492512);
}

double NNfunction_ns_chi01_dR::synapse0x2a71a20() {
   return (neuron0x2a59b80()*0.717293);
}

double NNfunction_ns_chi01_dR::synapse0x2a71a60() {
   return (neuron0x2a59ec0()*-0.410555);
}

double NNfunction_ns_chi01_dR::synapse0x2a71aa0() {
   return (neuron0x2a5a200()*0.182411);
}

double NNfunction_ns_chi01_dR::synapse0x2a71ae0() {
   return (neuron0x2a5a540()*0.453745);
}

double NNfunction_ns_chi01_dR::synapse0x2a71b20() {
   return (neuron0x2a5a880()*0.348135);
}

double NNfunction_ns_chi01_dR::synapse0x2a71b60() {
   return (neuron0x2a5abc0()*0.757172);
}

double NNfunction_ns_chi01_dR::synapse0x2a715f0() {
   return (neuron0x2a5af00()*-0.474723);
}

double NNfunction_ns_chi01_dR::synapse0x2a71630() {
   return (neuron0x2a5b460()*-1.34562);
}

double NNfunction_ns_chi01_dR::synapse0x2a71cb0() {
   return (neuron0x2a5b7a0()*0.356385);
}

double NNfunction_ns_chi01_dR::synapse0x2a71cf0() {
   return (neuron0x2a5bae0()*-0.141058);
}

double NNfunction_ns_chi01_dR::synapse0x2a71d30() {
   return (neuron0x2a5be20()*0.271404);
}

double NNfunction_ns_chi01_dR::synapse0x2a71d70() {
   return (neuron0x2a5c160()*0.309952);
}

double NNfunction_ns_chi01_dR::synapse0x2a71db0() {
   return (neuron0x2a5c4a0()*-0.261248);
}

double NNfunction_ns_chi01_dR::synapse0x2a71df0() {
   return (neuron0x2a5c7e0()*0.0248087);
}

double NNfunction_ns_chi01_dR::synapse0x2a72170() {
   return (neuron0x2a57b90()*-0.179621);
}

double NNfunction_ns_chi01_dR::synapse0x2a721b0() {
   return (neuron0x2a57e40()*0.103744);
}

double NNfunction_ns_chi01_dR::synapse0x2a721f0() {
   return (neuron0x2a58180()*1.28798);
}

double NNfunction_ns_chi01_dR::synapse0x2a72230() {
   return (neuron0x2a584c0()*-0.064187);
}

double NNfunction_ns_chi01_dR::synapse0x2a72270() {
   return (neuron0x2a58800()*-0.0141433);
}

double NNfunction_ns_chi01_dR::synapse0x2a722b0() {
   return (neuron0x2a58b40()*-0.00160567);
}

double NNfunction_ns_chi01_dR::synapse0x2a722f0() {
   return (neuron0x2a58e80()*-0.0691);
}

double NNfunction_ns_chi01_dR::synapse0x2a72330() {
   return (neuron0x2a591c0()*0.00826141);
}

double NNfunction_ns_chi01_dR::synapse0x2a72370() {
   return (neuron0x2a59500()*0.0591707);
}

double NNfunction_ns_chi01_dR::synapse0x2a723b0() {
   return (neuron0x2a59840()*0.115561);
}

double NNfunction_ns_chi01_dR::synapse0x2a723f0() {
   return (neuron0x2a59b80()*-0.0153578);
}

double NNfunction_ns_chi01_dR::synapse0x2a72430() {
   return (neuron0x2a59ec0()*0.0026686);
}

double NNfunction_ns_chi01_dR::synapse0x2a72470() {
   return (neuron0x2a5a200()*-0.0743524);
}

double NNfunction_ns_chi01_dR::synapse0x2a724b0() {
   return (neuron0x2a5a540()*-0.0246676);
}

double NNfunction_ns_chi01_dR::synapse0x2a724f0() {
   return (neuron0x2a5a880()*0.0555399);
}

double NNfunction_ns_chi01_dR::synapse0x2a72530() {
   return (neuron0x2a5abc0()*0.0836162);
}

double NNfunction_ns_chi01_dR::synapse0x2a71fc0() {
   return (neuron0x2a5af00()*0.0830653);
}

double NNfunction_ns_chi01_dR::synapse0x2a72000() {
   return (neuron0x2a5b460()*-0.787498);
}

double NNfunction_ns_chi01_dR::synapse0x2a72680() {
   return (neuron0x2a5b7a0()*0.00524324);
}

double NNfunction_ns_chi01_dR::synapse0x2a726c0() {
   return (neuron0x2a5bae0()*-0.108266);
}

double NNfunction_ns_chi01_dR::synapse0x2a72700() {
   return (neuron0x2a5be20()*0.0105275);
}

double NNfunction_ns_chi01_dR::synapse0x2a72740() {
   return (neuron0x2a5c160()*0.0171257);
}

double NNfunction_ns_chi01_dR::synapse0x2a72780() {
   return (neuron0x2a5c4a0()*0.0426475);
}

double NNfunction_ns_chi01_dR::synapse0x2a727c0() {
   return (neuron0x2a5c7e0()*-6.25174);
}

double NNfunction_ns_chi01_dR::synapse0x2a72b40() {
   return (neuron0x2a57b90()*-0.019351);
}

double NNfunction_ns_chi01_dR::synapse0x2a72b80() {
   return (neuron0x2a57e40()*-0.47206);
}

double NNfunction_ns_chi01_dR::synapse0x2a72bc0() {
   return (neuron0x2a58180()*0.831331);
}

double NNfunction_ns_chi01_dR::synapse0x2a72c00() {
   return (neuron0x2a584c0()*0.391583);
}

double NNfunction_ns_chi01_dR::synapse0x2a72c40() {
   return (neuron0x2a58800()*-0.129887);
}

double NNfunction_ns_chi01_dR::synapse0x2a72c80() {
   return (neuron0x2a58b40()*0.173246);
}

double NNfunction_ns_chi01_dR::synapse0x2a72cc0() {
   return (neuron0x2a58e80()*-0.917094);
}

double NNfunction_ns_chi01_dR::synapse0x2a72d00() {
   return (neuron0x2a591c0()*0.201316);
}

double NNfunction_ns_chi01_dR::synapse0x2a72d40() {
   return (neuron0x2a59500()*0.326446);
}

double NNfunction_ns_chi01_dR::synapse0x2a72d80() {
   return (neuron0x2a59840()*-0.0957344);
}

double NNfunction_ns_chi01_dR::synapse0x2a72dc0() {
   return (neuron0x2a59b80()*-0.0712171);
}

double NNfunction_ns_chi01_dR::synapse0x2a72e00() {
   return (neuron0x2a59ec0()*0.661578);
}

double NNfunction_ns_chi01_dR::synapse0x2a72e40() {
   return (neuron0x2a5a200()*-1.74938);
}

double NNfunction_ns_chi01_dR::synapse0x2a72e80() {
   return (neuron0x2a5a540()*-0.431039);
}

double NNfunction_ns_chi01_dR::synapse0x2a72ec0() {
   return (neuron0x2a5a880()*0.0283778);
}

double NNfunction_ns_chi01_dR::synapse0x2a72f00() {
   return (neuron0x2a5abc0()*-0.800095);
}

double NNfunction_ns_chi01_dR::synapse0x2a72990() {
   return (neuron0x2a5af00()*-0.161431);
}

double NNfunction_ns_chi01_dR::synapse0x2a729d0() {
   return (neuron0x2a5b460()*1.35162);
}

double NNfunction_ns_chi01_dR::synapse0x2a73050() {
   return (neuron0x2a5b7a0()*-0.396032);
}

double NNfunction_ns_chi01_dR::synapse0x2a73090() {
   return (neuron0x2a5bae0()*0.722377);
}

double NNfunction_ns_chi01_dR::synapse0x2a730d0() {
   return (neuron0x2a5be20()*0.416589);
}

double NNfunction_ns_chi01_dR::synapse0x2a73110() {
   return (neuron0x2a5c160()*-0.790026);
}

double NNfunction_ns_chi01_dR::synapse0x2a73150() {
   return (neuron0x2a5c4a0()*0.64801);
}

double NNfunction_ns_chi01_dR::synapse0x2a73190() {
   return (neuron0x2a5c7e0()*0.116051);
}

double NNfunction_ns_chi01_dR::synapse0x2a73510() {
   return (neuron0x2a57b90()*0.0644182);
}

double NNfunction_ns_chi01_dR::synapse0x2a67ae0() {
   return (neuron0x2a57e40()*-1.37181);
}

double NNfunction_ns_chi01_dR::synapse0x2a67b20() {
   return (neuron0x2a58180()*-0.0659343);
}

double NNfunction_ns_chi01_dR::synapse0x2a67b60() {
   return (neuron0x2a584c0()*-0.0131989);
}

double NNfunction_ns_chi01_dR::synapse0x2a67db0() {
   return (neuron0x2a58800()*0.00575078);
}

double NNfunction_ns_chi01_dR::synapse0x2a67df0() {
   return (neuron0x2a58b40()*0.00163512);
}

double NNfunction_ns_chi01_dR::synapse0x2a67e30() {
   return (neuron0x2a58e80()*-0.001198);
}

double NNfunction_ns_chi01_dR::synapse0x2a68080() {
   return (neuron0x2a591c0()*0.0152463);
}

double NNfunction_ns_chi01_dR::synapse0x2a680c0() {
   return (neuron0x2a59500()*0.00851288);
}

double NNfunction_ns_chi01_dR::synapse0x2a68310() {
   return (neuron0x2a59840()*-0.106791);
}

double NNfunction_ns_chi01_dR::synapse0x2a68350() {
   return (neuron0x2a59b80()*-0.0585327);
}

double NNfunction_ns_chi01_dR::synapse0x2a68390() {
   return (neuron0x2a59ec0()*0.00989215);
}

double NNfunction_ns_chi01_dR::synapse0x2a685e0() {
   return (neuron0x2a5a200()*-0.0433118);
}

double NNfunction_ns_chi01_dR::synapse0x2a68620() {
   return (neuron0x2a5a540()*-0.0448828);
}

double NNfunction_ns_chi01_dR::synapse0x2a68870() {
   return (neuron0x2a5a880()*0.00148907);
}

double NNfunction_ns_chi01_dR::synapse0x2a688b0() {
   return (neuron0x2a5abc0()*0.0024871);
}

double NNfunction_ns_chi01_dR::synapse0x2a73360() {
   return (neuron0x2a5af00()*0.016069);
}

double NNfunction_ns_chi01_dR::synapse0x2a733a0() {
   return (neuron0x2a5b460()*0.763935);
}

double NNfunction_ns_chi01_dR::synapse0x2a68a00() {
   return (neuron0x2a5b7a0()*-0.017615);
}

double NNfunction_ns_chi01_dR::synapse0x2a68f10() {
   return (neuron0x2a5bae0()*0.0274384);
}

double NNfunction_ns_chi01_dR::synapse0x2a68f50() {
   return (neuron0x2a5be20()*-0.0142025);
}

double NNfunction_ns_chi01_dR::synapse0x2a68f90() {
   return (neuron0x2a5c160()*0.0138749);
}

double NNfunction_ns_chi01_dR::synapse0x2a691e0() {
   return (neuron0x2a5c4a0()*0.036445);
}

double NNfunction_ns_chi01_dR::synapse0x2a69220() {
   return (neuron0x2a5c7e0()*-0.0737354);
}

double NNfunction_ns_chi01_dR::synapse0x2a68ad0() {
   return (neuron0x2a57b90()*-0.0398296);
}

double NNfunction_ns_chi01_dR::synapse0x2a68b10() {
   return (neuron0x2a57e40()*-3.25751);
}

double NNfunction_ns_chi01_dR::synapse0x2a68b50() {
   return (neuron0x2a58180()*-0.254293);
}

double NNfunction_ns_chi01_dR::synapse0x2a68b90() {
   return (neuron0x2a584c0()*-0.00735595);
}

double NNfunction_ns_chi01_dR::synapse0x2a69510() {
   return (neuron0x2a58800()*-0.0800019);
}

double NNfunction_ns_chi01_dR::synapse0x2a75860() {
   return (neuron0x2a58b40()*0.0566832);
}

double NNfunction_ns_chi01_dR::synapse0x2a758a0() {
   return (neuron0x2a58e80()*0.0086729);
}

double NNfunction_ns_chi01_dR::synapse0x2a758e0() {
   return (neuron0x2a591c0()*-0.097967);
}

double NNfunction_ns_chi01_dR::synapse0x2a75920() {
   return (neuron0x2a59500()*-0.0658931);
}

double NNfunction_ns_chi01_dR::synapse0x2a75960() {
   return (neuron0x2a59840()*0.100098);
}

double NNfunction_ns_chi01_dR::synapse0x2a759a0() {
   return (neuron0x2a59b80()*0.124719);
}

double NNfunction_ns_chi01_dR::synapse0x2a759e0() {
   return (neuron0x2a59ec0()*-0.0166334);
}

double NNfunction_ns_chi01_dR::synapse0x2a75a20() {
   return (neuron0x2a5a200()*0.0244124);
}

double NNfunction_ns_chi01_dR::synapse0x2a75a60() {
   return (neuron0x2a5a540()*-0.101034);
}

double NNfunction_ns_chi01_dR::synapse0x2a75aa0() {
   return (neuron0x2a5a880()*0.0189358);
}

double NNfunction_ns_chi01_dR::synapse0x2a75ae0() {
   return (neuron0x2a5abc0()*-0.0641008);
}

double NNfunction_ns_chi01_dR::synapse0x2a693f0() {
   return (neuron0x2a5af00()*-0.147909);
}

double NNfunction_ns_chi01_dR::synapse0x2a69430() {
   return (neuron0x2a5b460()*-0.437579);
}

double NNfunction_ns_chi01_dR::synapse0x2a75c30() {
   return (neuron0x2a5b7a0()*0.0967802);
}

double NNfunction_ns_chi01_dR::synapse0x2a75c70() {
   return (neuron0x2a5bae0()*0.0371665);
}

double NNfunction_ns_chi01_dR::synapse0x2a75cb0() {
   return (neuron0x2a5be20()*0.00187925);
}

double NNfunction_ns_chi01_dR::synapse0x2a75cf0() {
   return (neuron0x2a5c160()*0.0870184);
}

double NNfunction_ns_chi01_dR::synapse0x2a75d30() {
   return (neuron0x2a5c4a0()*-0.0436422);
}

double NNfunction_ns_chi01_dR::synapse0x2a75d70() {
   return (neuron0x2a5c7e0()*0.821022);
}

double NNfunction_ns_chi01_dR::synapse0x2a760f0() {
   return (neuron0x2a57b90()*0.193509);
}

double NNfunction_ns_chi01_dR::synapse0x2a76130() {
   return (neuron0x2a57e40()*1.84235);
}

double NNfunction_ns_chi01_dR::synapse0x2a76170() {
   return (neuron0x2a58180()*-0.0461986);
}

double NNfunction_ns_chi01_dR::synapse0x2a761b0() {
   return (neuron0x2a584c0()*-0.0299865);
}

double NNfunction_ns_chi01_dR::synapse0x2a761f0() {
   return (neuron0x2a58800()*0.0780808);
}

double NNfunction_ns_chi01_dR::synapse0x2a76230() {
   return (neuron0x2a58b40()*-0.0107961);
}

double NNfunction_ns_chi01_dR::synapse0x2a76270() {
   return (neuron0x2a58e80()*0.0511269);
}

double NNfunction_ns_chi01_dR::synapse0x2a762b0() {
   return (neuron0x2a591c0()*0.0355635);
}

double NNfunction_ns_chi01_dR::synapse0x2a762f0() {
   return (neuron0x2a59500()*0.015625);
}

double NNfunction_ns_chi01_dR::synapse0x2a76330() {
   return (neuron0x2a59840()*0.0391248);
}

double NNfunction_ns_chi01_dR::synapse0x2a76370() {
   return (neuron0x2a59b80()*0.010514);
}

double NNfunction_ns_chi01_dR::synapse0x2a763b0() {
   return (neuron0x2a59ec0()*-0.00734368);
}

double NNfunction_ns_chi01_dR::synapse0x2a763f0() {
   return (neuron0x2a5a200()*0.0532336);
}

double NNfunction_ns_chi01_dR::synapse0x2a76430() {
   return (neuron0x2a5a540()*0.0160977);
}

double NNfunction_ns_chi01_dR::synapse0x2a76470() {
   return (neuron0x2a5a880()*-0.0161548);
}

double NNfunction_ns_chi01_dR::synapse0x2a764b0() {
   return (neuron0x2a5abc0()*-0.076382);
}

double NNfunction_ns_chi01_dR::synapse0x2a75f40() {
   return (neuron0x2a5af00()*-0.0233469);
}

double NNfunction_ns_chi01_dR::synapse0x2a75f80() {
   return (neuron0x2a5b460()*0.634421);
}

double NNfunction_ns_chi01_dR::synapse0x2a76600() {
   return (neuron0x2a5b7a0()*0.0551527);
}

double NNfunction_ns_chi01_dR::synapse0x2a76640() {
   return (neuron0x2a5bae0()*0.0157342);
}

double NNfunction_ns_chi01_dR::synapse0x2a76680() {
   return (neuron0x2a5be20()*-0.0240489);
}

double NNfunction_ns_chi01_dR::synapse0x2a766c0() {
   return (neuron0x2a5c160()*0.00432355);
}

double NNfunction_ns_chi01_dR::synapse0x2a76700() {
   return (neuron0x2a5c4a0()*0.0246382);
}

double NNfunction_ns_chi01_dR::synapse0x2a76740() {
   return (neuron0x2a5c7e0()*5.46519);
}

double NNfunction_ns_chi01_dR::synapse0x2a76ac0() {
   return (neuron0x2a57b90()*-0.219231);
}

double NNfunction_ns_chi01_dR::synapse0x2a76b00() {
   return (neuron0x2a57e40()*-0.135124);
}

double NNfunction_ns_chi01_dR::synapse0x2a76b40() {
   return (neuron0x2a58180()*-0.296544);
}

double NNfunction_ns_chi01_dR::synapse0x2a76b80() {
   return (neuron0x2a584c0()*-0.589301);
}

double NNfunction_ns_chi01_dR::synapse0x2a76bc0() {
   return (neuron0x2a58800()*-0.608114);
}

double NNfunction_ns_chi01_dR::synapse0x2a76c00() {
   return (neuron0x2a58b40()*-0.440427);
}

double NNfunction_ns_chi01_dR::synapse0x2a76c40() {
   return (neuron0x2a58e80()*-0.643318);
}

double NNfunction_ns_chi01_dR::synapse0x2a76c80() {
   return (neuron0x2a591c0()*-0.198829);
}

double NNfunction_ns_chi01_dR::synapse0x2a76cc0() {
   return (neuron0x2a59500()*-1.21677);
}

double NNfunction_ns_chi01_dR::synapse0x2a76d00() {
   return (neuron0x2a59840()*0.692575);
}

double NNfunction_ns_chi01_dR::synapse0x2a76d40() {
   return (neuron0x2a59b80()*0.554884);
}

double NNfunction_ns_chi01_dR::synapse0x2a76d80() {
   return (neuron0x2a59ec0()*-0.1697);
}

double NNfunction_ns_chi01_dR::synapse0x2a76dc0() {
   return (neuron0x2a5a200()*-0.695934);
}

double NNfunction_ns_chi01_dR::synapse0x2a76e00() {
   return (neuron0x2a5a540()*-1.71706);
}

double NNfunction_ns_chi01_dR::synapse0x2a76e40() {
   return (neuron0x2a5a880()*0.267832);
}

double NNfunction_ns_chi01_dR::synapse0x2a76e80() {
   return (neuron0x2a5abc0()*-0.0720927);
}

double NNfunction_ns_chi01_dR::synapse0x2a76910() {
   return (neuron0x2a5af00()*-0.129504);
}

double NNfunction_ns_chi01_dR::synapse0x2a76950() {
   return (neuron0x2a5b460()*-1.23871);
}

double NNfunction_ns_chi01_dR::synapse0x2a76fd0() {
   return (neuron0x2a5b7a0()*0.993445);
}

double NNfunction_ns_chi01_dR::synapse0x2a77010() {
   return (neuron0x2a5bae0()*0.271932);
}

double NNfunction_ns_chi01_dR::synapse0x2a77050() {
   return (neuron0x2a5be20()*0.975924);
}

double NNfunction_ns_chi01_dR::synapse0x2a77090() {
   return (neuron0x2a5c160()*0.0367565);
}

double NNfunction_ns_chi01_dR::synapse0x2a770d0() {
   return (neuron0x2a5c4a0()*-1.01394);
}

double NNfunction_ns_chi01_dR::synapse0x2a77110() {
   return (neuron0x2a5c7e0()*-0.661002);
}

double NNfunction_ns_chi01_dR::synapse0x2a77490() {
   return (neuron0x2a57b90()*-0.0968208);
}

double NNfunction_ns_chi01_dR::synapse0x2a774d0() {
   return (neuron0x2a57e40()*-7.22822);
}

double NNfunction_ns_chi01_dR::synapse0x2a77510() {
   return (neuron0x2a58180()*0.613416);
}

double NNfunction_ns_chi01_dR::synapse0x2a77550() {
   return (neuron0x2a584c0()*-0.0287399);
}

double NNfunction_ns_chi01_dR::synapse0x2a77590() {
   return (neuron0x2a58800()*-0.0921503);
}

double NNfunction_ns_chi01_dR::synapse0x2a775d0() {
   return (neuron0x2a58b40()*-0.0300827);
}

double NNfunction_ns_chi01_dR::synapse0x2a77610() {
   return (neuron0x2a58e80()*0.2084);
}

double NNfunction_ns_chi01_dR::synapse0x2a77650() {
   return (neuron0x2a591c0()*-0.134325);
}

double NNfunction_ns_chi01_dR::synapse0x2a77690() {
   return (neuron0x2a59500()*-0.0329647);
}

double NNfunction_ns_chi01_dR::synapse0x2a776d0() {
   return (neuron0x2a59840()*0.0311882);
}

double NNfunction_ns_chi01_dR::synapse0x2a77710() {
   return (neuron0x2a59b80()*-0.0455293);
}

double NNfunction_ns_chi01_dR::synapse0x2a77750() {
   return (neuron0x2a59ec0()*0.0365464);
}

double NNfunction_ns_chi01_dR::synapse0x2a77790() {
   return (neuron0x2a5a200()*0.0738011);
}

double NNfunction_ns_chi01_dR::synapse0x2a777d0() {
   return (neuron0x2a5a540()*0.058438);
}

double NNfunction_ns_chi01_dR::synapse0x2a77810() {
   return (neuron0x2a5a880()*0.00837585);
}

double NNfunction_ns_chi01_dR::synapse0x2a77850() {
   return (neuron0x2a5abc0()*-0.0734008);
}

double NNfunction_ns_chi01_dR::synapse0x2a772e0() {
   return (neuron0x2a5af00()*-0.125772);
}

double NNfunction_ns_chi01_dR::synapse0x2a77320() {
   return (neuron0x2a5b460()*1.238);
}

double NNfunction_ns_chi01_dR::synapse0x2a779a0() {
   return (neuron0x2a5b7a0()*-0.0115856);
}

double NNfunction_ns_chi01_dR::synapse0x2a779e0() {
   return (neuron0x2a5bae0()*-0.0232568);
}

double NNfunction_ns_chi01_dR::synapse0x2a77a20() {
   return (neuron0x2a5be20()*-0.118575);
}

double NNfunction_ns_chi01_dR::synapse0x2a77a60() {
   return (neuron0x2a5c160()*0.00648801);
}

double NNfunction_ns_chi01_dR::synapse0x2a77aa0() {
   return (neuron0x2a5c4a0()*-0.105468);
}

double NNfunction_ns_chi01_dR::synapse0x2a77ae0() {
   return (neuron0x2a5c7e0()*0.102819);
}

double NNfunction_ns_chi01_dR::synapse0x2a77e60() {
   return (neuron0x2a57b90()*0.0221329);
}

double NNfunction_ns_chi01_dR::synapse0x2a77ea0() {
   return (neuron0x2a57e40()*-1.25279);
}

double NNfunction_ns_chi01_dR::synapse0x2a77ee0() {
   return (neuron0x2a58180()*0.00405506);
}

double NNfunction_ns_chi01_dR::synapse0x2a77f20() {
   return (neuron0x2a584c0()*-0.0296397);
}

double NNfunction_ns_chi01_dR::synapse0x2a77f60() {
   return (neuron0x2a58800()*-0.000203909);
}

double NNfunction_ns_chi01_dR::synapse0x2a77fa0() {
   return (neuron0x2a58b40()*-0.0133879);
}

double NNfunction_ns_chi01_dR::synapse0x2a77fe0() {
   return (neuron0x2a58e80()*0.00255493);
}

double NNfunction_ns_chi01_dR::synapse0x2a78020() {
   return (neuron0x2a591c0()*-0.0130369);
}

double NNfunction_ns_chi01_dR::synapse0x2a78060() {
   return (neuron0x2a59500()*0.00335731);
}

double NNfunction_ns_chi01_dR::synapse0x2a780a0() {
   return (neuron0x2a59840()*0.0161128);
}

double NNfunction_ns_chi01_dR::synapse0x2a780e0() {
   return (neuron0x2a59b80()*0.0137056);
}

double NNfunction_ns_chi01_dR::synapse0x2a78120() {
   return (neuron0x2a59ec0()*0.0123931);
}

double NNfunction_ns_chi01_dR::synapse0x2a78160() {
   return (neuron0x2a5a200()*-0.00683111);
}

double NNfunction_ns_chi01_dR::synapse0x2a781a0() {
   return (neuron0x2a5a540()*-0.0196177);
}

double NNfunction_ns_chi01_dR::synapse0x2a781e0() {
   return (neuron0x2a5a880()*0.019438);
}

double NNfunction_ns_chi01_dR::synapse0x2a78220() {
   return (neuron0x2a5abc0()*-0.00251345);
}

double NNfunction_ns_chi01_dR::synapse0x2a77cb0() {
   return (neuron0x2a5af00()*0.0131538);
}

double NNfunction_ns_chi01_dR::synapse0x2a77cf0() {
   return (neuron0x2a5b460()*0.0522482);
}

double NNfunction_ns_chi01_dR::synapse0x2a78370() {
   return (neuron0x2a5b7a0()*0.00141235);
}

double NNfunction_ns_chi01_dR::synapse0x2a783b0() {
   return (neuron0x2a5bae0()*-0.0319898);
}

double NNfunction_ns_chi01_dR::synapse0x2a783f0() {
   return (neuron0x2a5be20()*0.0152015);
}

double NNfunction_ns_chi01_dR::synapse0x2a78430() {
   return (neuron0x2a5c160()*-0.00459346);
}

double NNfunction_ns_chi01_dR::synapse0x2a78470() {
   return (neuron0x2a5c4a0()*0.00340022);
}

double NNfunction_ns_chi01_dR::synapse0x2a784b0() {
   return (neuron0x2a5c7e0()*-0.098952);
}

double NNfunction_ns_chi01_dR::synapse0x2a78830() {
   return (neuron0x2a57b90()*-0.259433);
}

double NNfunction_ns_chi01_dR::synapse0x2a78870() {
   return (neuron0x2a57e40()*0.664976);
}

double NNfunction_ns_chi01_dR::synapse0x2a788b0() {
   return (neuron0x2a58180()*-1.27095);
}

double NNfunction_ns_chi01_dR::synapse0x2a788f0() {
   return (neuron0x2a584c0()*-0.61474);
}

double NNfunction_ns_chi01_dR::synapse0x2a78930() {
   return (neuron0x2a58800()*0.0244655);
}

double NNfunction_ns_chi01_dR::synapse0x2a78970() {
   return (neuron0x2a58b40()*0.757912);
}

double NNfunction_ns_chi01_dR::synapse0x2a789b0() {
   return (neuron0x2a58e80()*0.702186);
}

double NNfunction_ns_chi01_dR::synapse0x2a789f0() {
   return (neuron0x2a591c0()*0.626312);
}

double NNfunction_ns_chi01_dR::synapse0x2a78a30() {
   return (neuron0x2a59500()*0.0216065);
}

double NNfunction_ns_chi01_dR::synapse0x2a78a70() {
   return (neuron0x2a59840()*-0.189664);
}

double NNfunction_ns_chi01_dR::synapse0x2a78ab0() {
   return (neuron0x2a59b80()*-0.123149);
}

double NNfunction_ns_chi01_dR::synapse0x2a78af0() {
   return (neuron0x2a59ec0()*0.122146);
}

double NNfunction_ns_chi01_dR::synapse0x2a78b30() {
   return (neuron0x2a5a200()*-0.0309903);
}

double NNfunction_ns_chi01_dR::synapse0x2a78b70() {
   return (neuron0x2a5a540()*-0.369504);
}

double NNfunction_ns_chi01_dR::synapse0x2a78bb0() {
   return (neuron0x2a5a880()*0.372955);
}

double NNfunction_ns_chi01_dR::synapse0x2a78bf0() {
   return (neuron0x2a5abc0()*0.328869);
}

double NNfunction_ns_chi01_dR::synapse0x2a78680() {
   return (neuron0x2a5af00()*-0.336562);
}

double NNfunction_ns_chi01_dR::synapse0x2a786c0() {
   return (neuron0x2a5b460()*1.08602);
}

double NNfunction_ns_chi01_dR::synapse0x2a78d40() {
   return (neuron0x2a5b7a0()*-0.357244);
}

double NNfunction_ns_chi01_dR::synapse0x2a78d80() {
   return (neuron0x2a5bae0()*0.145245);
}

double NNfunction_ns_chi01_dR::synapse0x2a78dc0() {
   return (neuron0x2a5be20()*0.114693);
}

double NNfunction_ns_chi01_dR::synapse0x2a78e00() {
   return (neuron0x2a5c160()*0.0892261);
}

double NNfunction_ns_chi01_dR::synapse0x2a78e40() {
   return (neuron0x2a5c4a0()*0.349538);
}

double NNfunction_ns_chi01_dR::synapse0x2a78e80() {
   return (neuron0x2a5c7e0()*0.156068);
}

double NNfunction_ns_chi01_dR::synapse0x2a79200() {
   return (neuron0x2a57b90()*-0.000649793);
}

double NNfunction_ns_chi01_dR::synapse0x2a79240() {
   return (neuron0x2a57e40()*-0.0041794);
}

double NNfunction_ns_chi01_dR::synapse0x2a79280() {
   return (neuron0x2a58180()*-0.00200169);
}

double NNfunction_ns_chi01_dR::synapse0x2a792c0() {
   return (neuron0x2a584c0()*-1.96758);
}

double NNfunction_ns_chi01_dR::synapse0x2a79300() {
   return (neuron0x2a58800()*-0.0129615);
}

double NNfunction_ns_chi01_dR::synapse0x2a79340() {
   return (neuron0x2a58b40()*0.00126814);
}

double NNfunction_ns_chi01_dR::synapse0x2a79380() {
   return (neuron0x2a58e80()*0.0164185);
}

double NNfunction_ns_chi01_dR::synapse0x2a793c0() {
   return (neuron0x2a591c0()*0.000207594);
}

double NNfunction_ns_chi01_dR::synapse0x2a79400() {
   return (neuron0x2a59500()*-0.00684543);
}

double NNfunction_ns_chi01_dR::synapse0x2a79440() {
   return (neuron0x2a59840()*-0.0034915);
}

double NNfunction_ns_chi01_dR::synapse0x2a79480() {
   return (neuron0x2a59b80()*-0.00875637);
}

double NNfunction_ns_chi01_dR::synapse0x2a794c0() {
   return (neuron0x2a59ec0()*-0.00990018);
}

double NNfunction_ns_chi01_dR::synapse0x2a79500() {
   return (neuron0x2a5a200()*-0.00178899);
}

double NNfunction_ns_chi01_dR::synapse0x2a79540() {
   return (neuron0x2a5a540()*-0.00423923);
}

double NNfunction_ns_chi01_dR::synapse0x2a79580() {
   return (neuron0x2a5a880()*0.00704213);
}

double NNfunction_ns_chi01_dR::synapse0x2a795c0() {
   return (neuron0x2a5abc0()*-0.0031754);
}

double NNfunction_ns_chi01_dR::synapse0x2a79050() {
   return (neuron0x2a5af00()*0.000971703);
}

double NNfunction_ns_chi01_dR::synapse0x2a79090() {
   return (neuron0x2a5b460()*-0.278388);
}

double NNfunction_ns_chi01_dR::synapse0x2a79710() {
   return (neuron0x2a5b7a0()*-0.00163155);
}

double NNfunction_ns_chi01_dR::synapse0x2a79750() {
   return (neuron0x2a5bae0()*-0.00926331);
}

double NNfunction_ns_chi01_dR::synapse0x2a79790() {
   return (neuron0x2a5be20()*0.0120849);
}

double NNfunction_ns_chi01_dR::synapse0x2a797d0() {
   return (neuron0x2a5c160()*0.0123156);
}

double NNfunction_ns_chi01_dR::synapse0x2a79810() {
   return (neuron0x2a5c4a0()*-0.00306318);
}

double NNfunction_ns_chi01_dR::synapse0x2a79850() {
   return (neuron0x2a5c7e0()*0.00861154);
}

double NNfunction_ns_chi01_dR::synapse0x2a79bd0() {
   return (neuron0x2a57b90()*0.535334);
}

double NNfunction_ns_chi01_dR::synapse0x2a79c10() {
   return (neuron0x2a57e40()*-1.03035);
}

double NNfunction_ns_chi01_dR::synapse0x2a79c50() {
   return (neuron0x2a58180()*1.6656);
}

double NNfunction_ns_chi01_dR::synapse0x2a79c90() {
   return (neuron0x2a584c0()*0.648467);
}

double NNfunction_ns_chi01_dR::synapse0x2a79cd0() {
   return (neuron0x2a58800()*0.0417756);
}

double NNfunction_ns_chi01_dR::synapse0x2a79d10() {
   return (neuron0x2a58b40()*-0.158446);
}

double NNfunction_ns_chi01_dR::synapse0x2a79d50() {
   return (neuron0x2a58e80()*-0.267577);
}

double NNfunction_ns_chi01_dR::synapse0x2a79d90() {
   return (neuron0x2a591c0()*-0.35513);
}

double NNfunction_ns_chi01_dR::synapse0x2a79dd0() {
   return (neuron0x2a59500()*0.132779);
}

double NNfunction_ns_chi01_dR::synapse0x2a79e10() {
   return (neuron0x2a59840()*-0.151425);
}

double NNfunction_ns_chi01_dR::synapse0x2a79e50() {
   return (neuron0x2a59b80()*-0.0108113);
}

double NNfunction_ns_chi01_dR::synapse0x2a79e90() {
   return (neuron0x2a59ec0()*0.0803865);
}

double NNfunction_ns_chi01_dR::synapse0x2a79ed0() {
   return (neuron0x2a5a200()*-0.0202006);
}

double NNfunction_ns_chi01_dR::synapse0x2a79f10() {
   return (neuron0x2a5a540()*-0.0582663);
}

double NNfunction_ns_chi01_dR::synapse0x2a79f50() {
   return (neuron0x2a5a880()*-0.0679352);
}

double NNfunction_ns_chi01_dR::synapse0x2a79f90() {
   return (neuron0x2a5abc0()*-0.176703);
}

double NNfunction_ns_chi01_dR::synapse0x2a79a20() {
   return (neuron0x2a5af00()*-0.363863);
}

double NNfunction_ns_chi01_dR::synapse0x2a79a60() {
   return (neuron0x2a5b460()*-1.34764);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a0e0() {
   return (neuron0x2a5b7a0()*-0.414956);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a120() {
   return (neuron0x2a5bae0()*-0.0971942);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a160() {
   return (neuron0x2a5be20()*-0.256161);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a1a0() {
   return (neuron0x2a5c160()*-0.372822);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a1e0() {
   return (neuron0x2a5c4a0()*-0.282191);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a220() {
   return (neuron0x2a5c7e0()*-1.72484);
}

double NNfunction_ns_chi01_dR::synapse0x2a62cd0() {
   return (neuron0x2a57b90()*0.0181928);
}

double NNfunction_ns_chi01_dR::synapse0x2a62d10() {
   return (neuron0x2a57e40()*-4.61607);
}

double NNfunction_ns_chi01_dR::synapse0x2a62d50() {
   return (neuron0x2a58180()*0.213743);
}

double NNfunction_ns_chi01_dR::synapse0x2a62d90() {
   return (neuron0x2a584c0()*0.0648988);
}

double NNfunction_ns_chi01_dR::synapse0x2a62dd0() {
   return (neuron0x2a58800()*-0.0804917);
}

double NNfunction_ns_chi01_dR::synapse0x2a62e10() {
   return (neuron0x2a58b40()*0.0108764);
}

double NNfunction_ns_chi01_dR::synapse0x2a62e50() {
   return (neuron0x2a58e80()*-0.0188936);
}

double NNfunction_ns_chi01_dR::synapse0x2a62e90() {
   return (neuron0x2a591c0()*0.00925467);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a9b0() {
   return (neuron0x2a59500()*0.00923039);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a9f0() {
   return (neuron0x2a59840()*-0.00209464);
}

double NNfunction_ns_chi01_dR::synapse0x2a7aa30() {
   return (neuron0x2a59b80()*-0.012996);
}

double NNfunction_ns_chi01_dR::synapse0x2a7aa70() {
   return (neuron0x2a59ec0()*0.0379497);
}

double NNfunction_ns_chi01_dR::synapse0x2a7aab0() {
   return (neuron0x2a5a200()*-0.0208454);
}

double NNfunction_ns_chi01_dR::synapse0x2a7aaf0() {
   return (neuron0x2a5a540()*-0.0175752);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ab30() {
   return (neuron0x2a5a880()*0.0195938);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ab70() {
   return (neuron0x2a5abc0()*0.03311);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a3f0() {
   return (neuron0x2a5af00()*0.00302027);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a430() {
   return (neuron0x2a5b460()*-0.0167919);
}

double NNfunction_ns_chi01_dR::synapse0x2a7acc0() {
   return (neuron0x2a5b7a0()*-0.0143452);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ad00() {
   return (neuron0x2a5bae0()*-0.0142158);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ad40() {
   return (neuron0x2a5be20()*-0.0608107);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ad80() {
   return (neuron0x2a5c160()*-0.00746031);
}

double NNfunction_ns_chi01_dR::synapse0x2a7adc0() {
   return (neuron0x2a5c4a0()*-0.0280978);
}

double NNfunction_ns_chi01_dR::synapse0x2a7ae00() {
   return (neuron0x2a5c7e0()*6.9384);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b180() {
   return (neuron0x2a57b90()*-0.641592);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b1c0() {
   return (neuron0x2a57e40()*-0.665788);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b200() {
   return (neuron0x2a58180()*-0.324516);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b240() {
   return (neuron0x2a584c0()*1.01);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b280() {
   return (neuron0x2a58800()*0.408456);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b2c0() {
   return (neuron0x2a58b40()*-0.0261039);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b300() {
   return (neuron0x2a58e80()*-0.61763);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b340() {
   return (neuron0x2a591c0()*-0.543131);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b380() {
   return (neuron0x2a59500()*0.0977962);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b3c0() {
   return (neuron0x2a59840()*-0.685472);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b400() {
   return (neuron0x2a59b80()*-0.406103);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b440() {
   return (neuron0x2a59ec0()*-0.860792);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b480() {
   return (neuron0x2a5a200()*0.306005);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b4c0() {
   return (neuron0x2a5a540()*-0.156042);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b500() {
   return (neuron0x2a5a880()*-0.426401);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b540() {
   return (neuron0x2a5abc0()*0.0394465);
}

double NNfunction_ns_chi01_dR::synapse0x2a7afd0() {
   return (neuron0x2a5af00()*-0.309592);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b010() {
   return (neuron0x2a5b460()*-1.38629);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b690() {
   return (neuron0x2a5b7a0()*0.40632);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b6d0() {
   return (neuron0x2a5bae0()*0.388736);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b710() {
   return (neuron0x2a5be20()*-0.225701);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b750() {
   return (neuron0x2a5c160()*-0.731162);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b790() {
   return (neuron0x2a5c4a0()*0.328135);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b7d0() {
   return (neuron0x2a5c7e0()*-0.191884);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bb50() {
   return (neuron0x2a57b90()*-0.0542005);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bb90() {
   return (neuron0x2a57e40()*2.94786);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bbd0() {
   return (neuron0x2a58180()*-0.268799);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bc10() {
   return (neuron0x2a584c0()*0.445042);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bc50() {
   return (neuron0x2a58800()*1.43237);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bc90() {
   return (neuron0x2a58b40()*-0.0560896);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bcd0() {
   return (neuron0x2a58e80()*0.163075);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bd10() {
   return (neuron0x2a591c0()*-0.390931);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bd50() {
   return (neuron0x2a59500()*-0.0776585);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bd90() {
   return (neuron0x2a59840()*0.254008);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bdd0() {
   return (neuron0x2a59b80()*-0.158001);
}

double NNfunction_ns_chi01_dR::synapse0x2a7be10() {
   return (neuron0x2a59ec0()*0.0193597);
}

double NNfunction_ns_chi01_dR::synapse0x2a7be50() {
   return (neuron0x2a5a200()*-1.04106);
}

double NNfunction_ns_chi01_dR::synapse0x2a7be90() {
   return (neuron0x2a5a540()*-0.129754);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bed0() {
   return (neuron0x2a5a880()*0.218744);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bf10() {
   return (neuron0x2a5abc0()*0.286082);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b9a0() {
   return (neuron0x2a5af00()*-0.497357);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b9e0() {
   return (neuron0x2a5b460()*0.15679);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c510() {
   return (neuron0x2a5b7a0()*-0.231131);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c550() {
   return (neuron0x2a5bae0()*-0.183956);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c590() {
   return (neuron0x2a5be20()*0.0825156);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c5d0() {
   return (neuron0x2a5c160()*0.0262351);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c610() {
   return (neuron0x2a5c4a0()*0.336441);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c650() {
   return (neuron0x2a5c7e0()*1.28092);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c9d0() {
   return (neuron0x2a57b90()*-0.0211644);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ca10() {
   return (neuron0x2a57e40()*0.0630504);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ca50() {
   return (neuron0x2a58180()*0.0269914);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ca90() {
   return (neuron0x2a584c0()*-0.0100223);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cad0() {
   return (neuron0x2a58800()*-0.0198491);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cb10() {
   return (neuron0x2a58b40()*-0.0295447);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cb50() {
   return (neuron0x2a58e80()*-0.0197702);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cb90() {
   return (neuron0x2a591c0()*-0.0253347);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cbd0() {
   return (neuron0x2a59500()*0.042002);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cc10() {
   return (neuron0x2a59840()*0.150444);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cc50() {
   return (neuron0x2a59b80()*0.0781608);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cc90() {
   return (neuron0x2a59ec0()*-0.0130971);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ccd0() {
   return (neuron0x2a5a200()*-0.00532786);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cd10() {
   return (neuron0x2a5a540()*-0.012382);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cd50() {
   return (neuron0x2a5a880()*-0.0292124);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cd90() {
   return (neuron0x2a5abc0()*-0.0261591);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c820() {
   return (neuron0x2a5af00()*0.0220821);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c860() {
   return (neuron0x2a5b460()*0.683977);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cee0() {
   return (neuron0x2a5b7a0()*0.0322542);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cf20() {
   return (neuron0x2a5bae0()*-0.0291227);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cf60() {
   return (neuron0x2a5be20()*0.00720339);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cfa0() {
   return (neuron0x2a5c160()*-0.000753242);
}

double NNfunction_ns_chi01_dR::synapse0x2a6cfe0() {
   return (neuron0x2a5c4a0()*-0.00312264);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d020() {
   return (neuron0x2a5c7e0()*-0.102568);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d3a0() {
   return (neuron0x2a57b90()*-0.0472572);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d3e0() {
   return (neuron0x2a57e40()*0.0714049);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d420() {
   return (neuron0x2a58180()*9.54527);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d460() {
   return (neuron0x2a584c0()*-0.0216758);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d4a0() {
   return (neuron0x2a58800()*-0.00421072);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d4e0() {
   return (neuron0x2a58b40()*-0.0108622);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d520() {
   return (neuron0x2a58e80()*0.0134608);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d560() {
   return (neuron0x2a591c0()*-0.0231212);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d5a0() {
   return (neuron0x2a59500()*-0.0199249);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d5e0() {
   return (neuron0x2a59840()*0.024652);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d620() {
   return (neuron0x2a59b80()*-0.0160869);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d660() {
   return (neuron0x2a59ec0()*-0.0120952);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d6a0() {
   return (neuron0x2a5a200()*-0.00639886);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d6e0() {
   return (neuron0x2a5a540()*0.00848162);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d720() {
   return (neuron0x2a5a880()*0.0408161);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d760() {
   return (neuron0x2a5abc0()*-0.0156639);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d1f0() {
   return (neuron0x2a5af00()*-0.00558477);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d230() {
   return (neuron0x2a5b460()*-0.138258);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d8b0() {
   return (neuron0x2a5b7a0()*0.0266665);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d8f0() {
   return (neuron0x2a5bae0()*0.0363623);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d930() {
   return (neuron0x2a5be20()*-0.0196158);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d970() {
   return (neuron0x2a5c160()*0.00741518);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d9b0() {
   return (neuron0x2a5c4a0()*-0.00564909);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d9f0() {
   return (neuron0x2a5c7e0()*0.0106619);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dd70() {
   return (neuron0x2a57b90()*-0.200423);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ddb0() {
   return (neuron0x2a57e40()*-1.72988);
}

double NNfunction_ns_chi01_dR::synapse0x2a6ddf0() {
   return (neuron0x2a58180()*0.0708593);
}

double NNfunction_ns_chi01_dR::synapse0x2a6de30() {
   return (neuron0x2a584c0()*-0.0866301);
}

double NNfunction_ns_chi01_dR::synapse0x2a6de70() {
   return (neuron0x2a58800()*-0.0150762);
}

double NNfunction_ns_chi01_dR::synapse0x2a6deb0() {
   return (neuron0x2a58b40()*-0.188974);
}

double NNfunction_ns_chi01_dR::synapse0x2a6def0() {
   return (neuron0x2a58e80()*0.114809);
}

double NNfunction_ns_chi01_dR::synapse0x2a6df30() {
   return (neuron0x2a591c0()*0.0567771);
}

double NNfunction_ns_chi01_dR::synapse0x2a6df70() {
   return (neuron0x2a59500()*-0.019757);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dfb0() {
   return (neuron0x2a59840()*-0.0306294);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dff0() {
   return (neuron0x2a59b80()*0.0251066);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e030() {
   return (neuron0x2a59ec0()*0.0158235);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e070() {
   return (neuron0x2a5a200()*0.132781);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e0b0() {
   return (neuron0x2a5a540()*0.0813031);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e0f0() {
   return (neuron0x2a5a880()*0.145569);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e130() {
   return (neuron0x2a5abc0()*-0.137221);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dbc0() {
   return (neuron0x2a5af00()*-0.188322);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dc00() {
   return (neuron0x2a5b460()*-0.0861975);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e280() {
   return (neuron0x2a5b7a0()*-0.0720594);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e2c0() {
   return (neuron0x2a5bae0()*0.0612477);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e300() {
   return (neuron0x2a5be20()*-0.0484903);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e340() {
   return (neuron0x2a5c160()*-0.0842184);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e380() {
   return (neuron0x2a5c4a0()*-0.107717);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e3c0() {
   return (neuron0x2a5c7e0()*0.237193);
}

double NNfunction_ns_chi01_dR::synapse0x2a80290() {
   return (neuron0x2a57b90()*-0.0265807);
}

double NNfunction_ns_chi01_dR::synapse0x2a802d0() {
   return (neuron0x2a57e40()*8.46629);
}

double NNfunction_ns_chi01_dR::synapse0x2a80310() {
   return (neuron0x2a58180()*-10.968);
}

double NNfunction_ns_chi01_dR::synapse0x2a80350() {
   return (neuron0x2a584c0()*0.0545642);
}

double NNfunction_ns_chi01_dR::synapse0x2a80390() {
   return (neuron0x2a58800()*-0.0252034);
}

double NNfunction_ns_chi01_dR::synapse0x2a803d0() {
   return (neuron0x2a58b40()*-0.00574901);
}

double NNfunction_ns_chi01_dR::synapse0x2a80410() {
   return (neuron0x2a58e80()*0.026162);
}

double NNfunction_ns_chi01_dR::synapse0x2a80450() {
   return (neuron0x2a591c0()*0.0199159);
}

double NNfunction_ns_chi01_dR::synapse0x2a80490() {
   return (neuron0x2a59500()*0.0215441);
}

double NNfunction_ns_chi01_dR::synapse0x2a804d0() {
   return (neuron0x2a59840()*0.0177609);
}

double NNfunction_ns_chi01_dR::synapse0x2a80510() {
   return (neuron0x2a59b80()*0.00565338);
}

double NNfunction_ns_chi01_dR::synapse0x2a80550() {
   return (neuron0x2a59ec0()*-0.033688);
}

double NNfunction_ns_chi01_dR::synapse0x2a80590() {
   return (neuron0x2a5a200()*-0.0507152);
}

double NNfunction_ns_chi01_dR::synapse0x2a805d0() {
   return (neuron0x2a5a540()*-0.0668072);
}

double NNfunction_ns_chi01_dR::synapse0x2a80610() {
   return (neuron0x2a5a880()*0.0109989);
}

double NNfunction_ns_chi01_dR::synapse0x2a80650() {
   return (neuron0x2a5abc0()*0.0105216);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e400() {
   return (neuron0x2a5af00()*0.0212859);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e440() {
   return (neuron0x2a5b460()*0.0489708);
}

double NNfunction_ns_chi01_dR::synapse0x2a807a0() {
   return (neuron0x2a5b7a0()*-0.00334206);
}

double NNfunction_ns_chi01_dR::synapse0x2a807e0() {
   return (neuron0x2a5bae0()*-0.0861569);
}

double NNfunction_ns_chi01_dR::synapse0x2a80820() {
   return (neuron0x2a5be20()*-0.0559907);
}

double NNfunction_ns_chi01_dR::synapse0x2a80860() {
   return (neuron0x2a5c160()*-0.0384943);
}

double NNfunction_ns_chi01_dR::synapse0x2a808a0() {
   return (neuron0x2a5c4a0()*0.0101045);
}

double NNfunction_ns_chi01_dR::synapse0x2a808e0() {
   return (neuron0x2a5c7e0()*-0.197338);
}

double NNfunction_ns_chi01_dR::synapse0x2a80c60() {
   return (neuron0x2a57b90()*-0.327303);
}

double NNfunction_ns_chi01_dR::synapse0x2a80ca0() {
   return (neuron0x2a57e40()*-1.43225);
}

double NNfunction_ns_chi01_dR::synapse0x2a80ce0() {
   return (neuron0x2a58180()*0.738938);
}

double NNfunction_ns_chi01_dR::synapse0x2a80d20() {
   return (neuron0x2a584c0()*0.161979);
}

double NNfunction_ns_chi01_dR::synapse0x2a80d60() {
   return (neuron0x2a58800()*-0.433943);
}

double NNfunction_ns_chi01_dR::synapse0x2a80da0() {
   return (neuron0x2a58b40()*-0.489135);
}

double NNfunction_ns_chi01_dR::synapse0x2a80de0() {
   return (neuron0x2a58e80()*-0.683367);
}

double NNfunction_ns_chi01_dR::synapse0x2a80e20() {
   return (neuron0x2a591c0()*-0.166223);
}

double NNfunction_ns_chi01_dR::synapse0x2a80e60() {
   return (neuron0x2a59500()*-0.24591);
}

double NNfunction_ns_chi01_dR::synapse0x2a80ea0() {
   return (neuron0x2a59840()*0.126755);
}

double NNfunction_ns_chi01_dR::synapse0x2a80ee0() {
   return (neuron0x2a59b80()*0.257131);
}

double NNfunction_ns_chi01_dR::synapse0x2a80f20() {
   return (neuron0x2a59ec0()*0.117303);
}

double NNfunction_ns_chi01_dR::synapse0x2a80f60() {
   return (neuron0x2a5a200()*0.154699);
}

double NNfunction_ns_chi01_dR::synapse0x2a80fa0() {
   return (neuron0x2a5a540()*0.671138);
}

double NNfunction_ns_chi01_dR::synapse0x2a80fe0() {
   return (neuron0x2a5a880()*-0.245899);
}

double NNfunction_ns_chi01_dR::synapse0x2a81020() {
   return (neuron0x2a5abc0()*-0.102188);
}

double NNfunction_ns_chi01_dR::synapse0x2a80ab0() {
   return (neuron0x2a5af00()*0.29046);
}

double NNfunction_ns_chi01_dR::synapse0x2a80af0() {
   return (neuron0x2a5b460()*-2.05385);
}

double NNfunction_ns_chi01_dR::synapse0x2a81170() {
   return (neuron0x2a5b7a0()*0.236839);
}

double NNfunction_ns_chi01_dR::synapse0x2a811b0() {
   return (neuron0x2a5bae0()*0.299492);
}

double NNfunction_ns_chi01_dR::synapse0x2a811f0() {
   return (neuron0x2a5be20()*0.159791);
}

double NNfunction_ns_chi01_dR::synapse0x2a81230() {
   return (neuron0x2a5c160()*0.180826);
}

double NNfunction_ns_chi01_dR::synapse0x2a81270() {
   return (neuron0x2a5c4a0()*-0.508574);
}

double NNfunction_ns_chi01_dR::synapse0x2a812b0() {
   return (neuron0x2a5c7e0()*-0.179593);
}

double NNfunction_ns_chi01_dR::synapse0x2a81630() {
   return (neuron0x2a57b90()*0.166301);
}

double NNfunction_ns_chi01_dR::synapse0x2a81670() {
   return (neuron0x2a57e40()*0.733109);
}

double NNfunction_ns_chi01_dR::synapse0x2a816b0() {
   return (neuron0x2a58180()*0.357377);
}

double NNfunction_ns_chi01_dR::synapse0x2a816f0() {
   return (neuron0x2a584c0()*0.333313);
}

double NNfunction_ns_chi01_dR::synapse0x2a81730() {
   return (neuron0x2a58800()*-0.254773);
}

double NNfunction_ns_chi01_dR::synapse0x2a81770() {
   return (neuron0x2a58b40()*-0.207336);
}

double NNfunction_ns_chi01_dR::synapse0x2a817b0() {
   return (neuron0x2a58e80()*-0.0396502);
}

double NNfunction_ns_chi01_dR::synapse0x2a817f0() {
   return (neuron0x2a591c0()*-0.103741);
}

double NNfunction_ns_chi01_dR::synapse0x2a81830() {
   return (neuron0x2a59500()*0.115147);
}

double NNfunction_ns_chi01_dR::synapse0x2a81870() {
   return (neuron0x2a59840()*-0.13085);
}

double NNfunction_ns_chi01_dR::synapse0x2a818b0() {
   return (neuron0x2a59b80()*0.248602);
}

double NNfunction_ns_chi01_dR::synapse0x2a818f0() {
   return (neuron0x2a59ec0()*-0.0508091);
}

double NNfunction_ns_chi01_dR::synapse0x2a81930() {
   return (neuron0x2a5a200()*-0.0417623);
}

double NNfunction_ns_chi01_dR::synapse0x2a81970() {
   return (neuron0x2a5a540()*0.344638);
}

double NNfunction_ns_chi01_dR::synapse0x2a819b0() {
   return (neuron0x2a5a880()*-0.00503974);
}

double NNfunction_ns_chi01_dR::synapse0x2a819f0() {
   return (neuron0x2a5abc0()*-0.312901);
}

double NNfunction_ns_chi01_dR::synapse0x2a81480() {
   return (neuron0x2a5af00()*0.298657);
}

double NNfunction_ns_chi01_dR::synapse0x2a814c0() {
   return (neuron0x2a5b460()*0.21148);
}

double NNfunction_ns_chi01_dR::synapse0x2a81b40() {
   return (neuron0x2a5b7a0()*0.15556);
}

double NNfunction_ns_chi01_dR::synapse0x2a81b80() {
   return (neuron0x2a5bae0()*-0.269699);
}

double NNfunction_ns_chi01_dR::synapse0x2a81bc0() {
   return (neuron0x2a5be20()*0.180805);
}

double NNfunction_ns_chi01_dR::synapse0x2a81c00() {
   return (neuron0x2a5c160()*-0.0883115);
}

double NNfunction_ns_chi01_dR::synapse0x2a81c40() {
   return (neuron0x2a5c4a0()*0.239208);
}

double NNfunction_ns_chi01_dR::synapse0x2a81c80() {
   return (neuron0x2a5c7e0()*0.302269);
}

double NNfunction_ns_chi01_dR::synapse0x2a82000() {
   return (neuron0x2a57b90()*0.0656817);
}

double NNfunction_ns_chi01_dR::synapse0x2a82040() {
   return (neuron0x2a57e40()*-0.549748);
}

double NNfunction_ns_chi01_dR::synapse0x2a82080() {
   return (neuron0x2a58180()*1.06267);
}

double NNfunction_ns_chi01_dR::synapse0x2a820c0() {
   return (neuron0x2a584c0()*0.225015);
}

double NNfunction_ns_chi01_dR::synapse0x2a82100() {
   return (neuron0x2a58800()*0.290234);
}

double NNfunction_ns_chi01_dR::synapse0x2a82140() {
   return (neuron0x2a58b40()*1.02307);
}

double NNfunction_ns_chi01_dR::synapse0x2a82180() {
   return (neuron0x2a58e80()*-0.490666);
}

double NNfunction_ns_chi01_dR::synapse0x2a821c0() {
   return (neuron0x2a591c0()*0.0620497);
}

double NNfunction_ns_chi01_dR::synapse0x2a82200() {
   return (neuron0x2a59500()*0.284425);
}

double NNfunction_ns_chi01_dR::synapse0x2a82240() {
   return (neuron0x2a59840()*-0.235381);
}

double NNfunction_ns_chi01_dR::synapse0x2a82280() {
   return (neuron0x2a59b80()*-0.560701);
}

double NNfunction_ns_chi01_dR::synapse0x2a822c0() {
   return (neuron0x2a59ec0()*0.405145);
}

double NNfunction_ns_chi01_dR::synapse0x2a82300() {
   return (neuron0x2a5a200()*-0.143666);
}

double NNfunction_ns_chi01_dR::synapse0x2a82340() {
   return (neuron0x2a5a540()*0.133379);
}

double NNfunction_ns_chi01_dR::synapse0x2a82380() {
   return (neuron0x2a5a880()*-0.283493);
}

double NNfunction_ns_chi01_dR::synapse0x2a823c0() {
   return (neuron0x2a5abc0()*-1.19056);
}

double NNfunction_ns_chi01_dR::synapse0x2a81e50() {
   return (neuron0x2a5af00()*0.31986);
}

double NNfunction_ns_chi01_dR::synapse0x2a81e90() {
   return (neuron0x2a5b460()*0.279844);
}

double NNfunction_ns_chi01_dR::synapse0x2a82510() {
   return (neuron0x2a5b7a0()*-0.562621);
}

double NNfunction_ns_chi01_dR::synapse0x2a82550() {
   return (neuron0x2a5bae0()*-0.730088);
}

double NNfunction_ns_chi01_dR::synapse0x2a82590() {
   return (neuron0x2a5be20()*0.420117);
}

double NNfunction_ns_chi01_dR::synapse0x2a825d0() {
   return (neuron0x2a5c160()*-0.285452);
}

double NNfunction_ns_chi01_dR::synapse0x2a82610() {
   return (neuron0x2a5c4a0()*0.368882);
}

double NNfunction_ns_chi01_dR::synapse0x2a82650() {
   return (neuron0x2a5c7e0()*0.853852);
}

double NNfunction_ns_chi01_dR::synapse0x28224c0() {
   return (neuron0x2a5cc50()*-0.0444056);
}

double NNfunction_ns_chi01_dR::synapse0x2822500() {
   return (neuron0x2a5d490()*-1.04873);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f000() {
   return (neuron0x2a5df70()*0.107248);
}

double NNfunction_ns_chi01_dR::synapse0x2a5f040() {
   return (neuron0x2a5da10()*0.0147727);
}

double NNfunction_ns_chi01_dR::synapse0x2a60ad0() {
   return (neuron0x2a5ed50()*-0.449328);
}

double NNfunction_ns_chi01_dR::synapse0x2a60b10() {
   return (neuron0x2a60820()*6.75153);
}

double NNfunction_ns_chi01_dR::synapse0x2a618a0() {
   return (neuron0x2a615f0()*0.312767);
}

double NNfunction_ns_chi01_dR::synapse0x2a618e0() {
   return (neuron0x2a61fc0()*-0.035026);
}

double NNfunction_ns_chi01_dR::synapse0x2a62270() {
   return (neuron0x2a62990()*0.695743);
}

double NNfunction_ns_chi01_dR::synapse0x2a622b0() {
   return (neuron0x2a63470()*-0.247509);
}

double NNfunction_ns_chi01_dR::synapse0x2a62c40() {
   return (neuron0x2a63e40()*0.0144377);
}

double NNfunction_ns_chi01_dR::synapse0x2a62c80() {
   return (neuron0x2a60f20()*-0.135581);
}

double NNfunction_ns_chi01_dR::synapse0x2a63720() {
   return (neuron0x2a659f0()*1.27314);
}

double NNfunction_ns_chi01_dR::synapse0x2a63760() {
   return (neuron0x2a663c0()*0.322231);
}

double NNfunction_ns_chi01_dR::synapse0x2a640f0() {
   return (neuron0x2a66d90()*0.196647);
}

double NNfunction_ns_chi01_dR::synapse0x2a64130() {
   return (neuron0x2a67760()*-0.0345459);
}

double NNfunction_ns_chi01_dR::synapse0x2a611d0() {
   return (neuron0x2a69570()*0.259823);
}

double NNfunction_ns_chi01_dR::synapse0x2a61210() {
   return (neuron0x2a69850()*0.114024);
}

double NNfunction_ns_chi01_dR::synapse0x2a65ca0() {
   return (neuron0x2a6a220()*0.1488);
}

double NNfunction_ns_chi01_dR::synapse0x2a65ce0() {
   return (neuron0x2a6abf0()*0.098426);
}

double NNfunction_ns_chi01_dR::synapse0x2a66670() {
   return (neuron0x2a6b5c0()*-0.129902);
}

double NNfunction_ns_chi01_dR::synapse0x2a666b0() {
   return (neuron0x2a6bf90()*-0.870158);
}

double NNfunction_ns_chi01_dR::synapse0x2a67040() {
   return (neuron0x2a64ae0()*-0.119006);
}

double NNfunction_ns_chi01_dR::synapse0x2a67080() {
   return (neuron0x2a654b0()*2.65987);
}

double NNfunction_ns_chi01_dR::synapse0x2a67a10() {
   return (neuron0x2a6ed20()*2.76265);
}

double NNfunction_ns_chi01_dR::synapse0x2a67a50() {
   return (neuron0x2a6f6f0()*0.86586);
}

double NNfunction_ns_chi01_dR::synapse0x2a5aaa0() {
   return (neuron0x2a700c0()*-1.28109);
}

double NNfunction_ns_chi01_dR::synapse0x2a5aae0() {
   return (neuron0x2a70a90()*0.512294);
}

double NNfunction_ns_chi01_dR::synapse0x2a69b00() {
   return (neuron0x2a71460()*0.0977288);
}

double NNfunction_ns_chi01_dR::synapse0x2a69b40() {
   return (neuron0x2a71e30()*-0.620788);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a4d0() {
   return (neuron0x2a72800()*0.257087);
}

double NNfunction_ns_chi01_dR::synapse0x2a6a510() {
   return (neuron0x2a731d0()*0.42184);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aea0() {
   return (neuron0x2a69260()*0.455993);
}

double NNfunction_ns_chi01_dR::synapse0x2a6aee0() {
   return (neuron0x2a75db0()*-0.66425);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b870() {
   return (neuron0x2a76780()*0.0174652);
}

double NNfunction_ns_chi01_dR::synapse0x2a6b8b0() {
   return (neuron0x2a77150()*0.735064);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c240() {
   return (neuron0x2a77b20()*-1.87272);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c280() {
   return (neuron0x2a784f0()*-0.252241);
}

double NNfunction_ns_chi01_dR::synapse0x2a64d90() {
   return (neuron0x2a78ec0()*-6.94918);
}

double NNfunction_ns_chi01_dR::synapse0x2a64dd0() {
   return (neuron0x2a79890()*-0.279508);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e640() {
   return (neuron0x2a7a260()*-0.911133);
}

double NNfunction_ns_chi01_dR::synapse0x2a6e680() {
   return (neuron0x2a7ae40()*-0.10854);
}

double NNfunction_ns_chi01_dR::synapse0x2a6efd0() {
   return (neuron0x2a7b810()*-0.0858865);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f010() {
   return (neuron0x2a6c690()*2.22542);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f9a0() {
   return (neuron0x2a6d060()*0.118469);
}

double NNfunction_ns_chi01_dR::synapse0x2a6f9e0() {
   return (neuron0x2a6da30()*0.64089);
}

double NNfunction_ns_chi01_dR::synapse0x2a70370() {
   return (neuron0x2a80070()*-0.896211);
}

double NNfunction_ns_chi01_dR::synapse0x2a703b0() {
   return (neuron0x2a80920()*-0.344452);
}

double NNfunction_ns_chi01_dR::synapse0x2a70d40() {
   return (neuron0x2a812f0()*-0.533538);
}

double NNfunction_ns_chi01_dR::synapse0x2a70d80() {
   return (neuron0x2a81cc0()*-0.274426);
}

double NNfunction_ns_chi01_dR::synapse0x2a73480() {
   return (neuron0x2a5cc50()*0.139213);
}

double NNfunction_ns_chi01_dR::synapse0x2a734c0() {
   return (neuron0x2a5d490()*-1.29469);
}

double NNfunction_ns_chi01_dR::synapse0x2a68a40() {
   return (neuron0x2a5df70()*-0.0025403);
}

double NNfunction_ns_chi01_dR::synapse0x2a68a80() {
   return (neuron0x2a5da10()*0.309765);
}

double NNfunction_ns_chi01_dR::synapse0x2a76060() {
   return (neuron0x2a5ed50()*-0.0957106);
}

double NNfunction_ns_chi01_dR::synapse0x2a760a0() {
   return (neuron0x2a60820()*-0.939662);
}

double NNfunction_ns_chi01_dR::synapse0x2a76a30() {
   return (neuron0x2a615f0()*-0.0801597);
}

double NNfunction_ns_chi01_dR::synapse0x2a76a70() {
   return (neuron0x2a61fc0()*2.00415);
}

double NNfunction_ns_chi01_dR::synapse0x2a77400() {
   return (neuron0x2a62990()*0.32603);
}

double NNfunction_ns_chi01_dR::synapse0x2a77440() {
   return (neuron0x2a63470()*-0.0761116);
}

double NNfunction_ns_chi01_dR::synapse0x2a77dd0() {
   return (neuron0x2a63e40()*-1.56581);
}

double NNfunction_ns_chi01_dR::synapse0x2a77e10() {
   return (neuron0x2a60f20()*0.0593473);
}

double NNfunction_ns_chi01_dR::synapse0x2a787a0() {
   return (neuron0x2a659f0()*0.289688);
}

double NNfunction_ns_chi01_dR::synapse0x2a787e0() {
   return (neuron0x2a663c0()*-0.501719);
}

double NNfunction_ns_chi01_dR::synapse0x2a79170() {
   return (neuron0x2a66d90()*-0.0809935);
}

double NNfunction_ns_chi01_dR::synapse0x2a791b0() {
   return (neuron0x2a67760()*-0.182509);
}

double NNfunction_ns_chi01_dR::synapse0x2a79b40() {
   return (neuron0x2a69570()*0.0608116);
}

double NNfunction_ns_chi01_dR::synapse0x2a79b80() {
   return (neuron0x2a69850()*0.174227);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a510() {
   return (neuron0x2a6a220()*0.00226414);
}

double NNfunction_ns_chi01_dR::synapse0x2a7a550() {
   return (neuron0x2a6abf0()*-0.0537561);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b0f0() {
   return (neuron0x2a6b5c0()*-0.0581147);
}

double NNfunction_ns_chi01_dR::synapse0x2a7b130() {
   return (neuron0x2a6bf90()*0.367489);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bac0() {
   return (neuron0x2a64ae0()*-0.125203);
}

double NNfunction_ns_chi01_dR::synapse0x2a7bb00() {
   return (neuron0x2a654b0()*-1.0618);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c940() {
   return (neuron0x2a6ed20()*-1.0881);
}

double NNfunction_ns_chi01_dR::synapse0x2a6c980() {
   return (neuron0x2a6f6f0()*-2.06673);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d310() {
   return (neuron0x2a700c0()*-0.991808);
}

double NNfunction_ns_chi01_dR::synapse0x2a6d350() {
   return (neuron0x2a70a90()*-0.0244885);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dce0() {
   return (neuron0x2a71460()*0.138833);
}

double NNfunction_ns_chi01_dR::synapse0x2a6dd20() {
   return (neuron0x2a71e30()*0.232794);
}

double NNfunction_ns_chi01_dR::synapse0x2a80200() {
   return (neuron0x2a72800()*0.0881416);
}

double NNfunction_ns_chi01_dR::synapse0x2a80240() {
   return (neuron0x2a731d0()*1.11072);
}

double NNfunction_ns_chi01_dR::synapse0x2a80bd0() {
   return (neuron0x2a69260()*0.294515);
}

double NNfunction_ns_chi01_dR::synapse0x2a80c10() {
   return (neuron0x2a75db0()*0.763425);
}

double NNfunction_ns_chi01_dR::synapse0x2a815a0() {
   return (neuron0x2a76780()*-0.152834);
}

double NNfunction_ns_chi01_dR::synapse0x2a815e0() {
   return (neuron0x2a77150()*-0.177152);
}

double NNfunction_ns_chi01_dR::synapse0x2a81f70() {
   return (neuron0x2a77b20()*-1.22203);
}

double NNfunction_ns_chi01_dR::synapse0x2a81fb0() {
   return (neuron0x2a784f0()*0.135158);
}

double NNfunction_ns_chi01_dR::synapse0x2a5cf00() {
   return (neuron0x2a78ec0()*0.982106);
}

double NNfunction_ns_chi01_dR::synapse0x2a5cf40() {
   return (neuron0x2a79890()*0.014313);
}

double NNfunction_ns_chi01_dR::synapse0x2a71710() {
   return (neuron0x2a7a260()*-1.2802);
}

double NNfunction_ns_chi01_dR::synapse0x2a71750() {
   return (neuron0x2a7ae40()*-0.0318067);
}

double NNfunction_ns_chi01_dR::synapse0x2a82690() {
   return (neuron0x2a7b810()*-0.186787);
}

double NNfunction_ns_chi01_dR::synapse0x2a826d0() {
   return (neuron0x2a6c690()*0.875258);
}

double NNfunction_ns_chi01_dR::synapse0x2a82710() {
   return (neuron0x2a6d060()*1.59211);
}

double NNfunction_ns_chi01_dR::synapse0x2a82750() {
   return (neuron0x2a6da30()*0.585697);
}

double NNfunction_ns_chi01_dR::synapse0x2a89600() {
   return (neuron0x2a80070()*-0.808527);
}

double NNfunction_ns_chi01_dR::synapse0x2a89640() {
   return (neuron0x2a80920()*-0.210223);
}

double NNfunction_ns_chi01_dR::synapse0x2a89680() {
   return (neuron0x2a812f0()*-0.185028);
}

double NNfunction_ns_chi01_dR::synapse0x2a896c0() {
   return (neuron0x2a81cc0()*0.0122324);
}

double NNfunction_ns_chi01_dR::synapse0x2a89a40() {
   return (neuron0x2a5cc50()*-0.171789);
}

double NNfunction_ns_chi01_dR::synapse0x2a89a80() {
   return (neuron0x2a5d490()*-0.0356158);
}

double NNfunction_ns_chi01_dR::synapse0x2a89ac0() {
   return (neuron0x2a5df70()*-0.205402);
}

double NNfunction_ns_chi01_dR::synapse0x2a89b00() {
   return (neuron0x2a5da10()*-0.255991);
}

double NNfunction_ns_chi01_dR::synapse0x2a89b40() {
   return (neuron0x2a5ed50()*0.72649);
}

double NNfunction_ns_chi01_dR::synapse0x2a89b80() {
   return (neuron0x2a60820()*0.548701);
}

double NNfunction_ns_chi01_dR::synapse0x2a89bc0() {
   return (neuron0x2a615f0()*-0.371225);
}

double NNfunction_ns_chi01_dR::synapse0x2a89c00() {
   return (neuron0x2a61fc0()*-4.95614);
}

double NNfunction_ns_chi01_dR::synapse0x2a89c40() {
   return (neuron0x2a62990()*-0.990911);
}

double NNfunction_ns_chi01_dR::synapse0x2a89c80() {
   return (neuron0x2a63470()*0.511629);
}

double NNfunction_ns_chi01_dR::synapse0x2a89cc0() {
   return (neuron0x2a63e40()*0.890442);
}

double NNfunction_ns_chi01_dR::synapse0x2a89d00() {
   return (neuron0x2a60f20()*0.189774);
}

double NNfunction_ns_chi01_dR::synapse0x2a89d40() {
   return (neuron0x2a659f0()*-1.19183);
}

double NNfunction_ns_chi01_dR::synapse0x2a89d80() {
   return (neuron0x2a663c0()*-0.0290969);
}

double NNfunction_ns_chi01_dR::synapse0x2a89dc0() {
   return (neuron0x2a66d90()*-0.321629);
}

double NNfunction_ns_chi01_dR::synapse0x2a89e00() {
   return (neuron0x2a67760()*0.0455732);
}

double NNfunction_ns_chi01_dR::synapse0x2a89890() {
   return (neuron0x2a69570()*-0.637599);
}

double NNfunction_ns_chi01_dR::synapse0x2a898d0() {
   return (neuron0x2a69850()*-0.101226);
}

double NNfunction_ns_chi01_dR::synapse0x2a89f50() {
   return (neuron0x2a6a220()*-0.182933);
}

double NNfunction_ns_chi01_dR::synapse0x2a89f90() {
   return (neuron0x2a6abf0()*-0.17129);
}

double NNfunction_ns_chi01_dR::synapse0x2a89fd0() {
   return (neuron0x2a6b5c0()*0.176028);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a010() {
   return (neuron0x2a6bf90()*0.240624);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a050() {
   return (neuron0x2a64ae0()*0.230109);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a090() {
   return (neuron0x2a654b0()*0.0115829);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a0d0() {
   return (neuron0x2a6ed20()*0.278786);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a110() {
   return (neuron0x2a6f6f0()*4.49613);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a150() {
   return (neuron0x2a700c0()*1.09109);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a190() {
   return (neuron0x2a70a90()*4.36875);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a1d0() {
   return (neuron0x2a71460()*-0.0603927);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a210() {
   return (neuron0x2a71e30()*0.239193);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a250() {
   return (neuron0x2a72800()*-0.39714);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a290() {
   return (neuron0x2a731d0()*1.3969);
}

double NNfunction_ns_chi01_dR::synapse0x2a89e40() {
   return (neuron0x2a69260()*-1.22666);
}

double NNfunction_ns_chi01_dR::synapse0x2a89e80() {
   return (neuron0x2a75db0()*0.262852);
}

double NNfunction_ns_chi01_dR::synapse0x2a89ec0() {
   return (neuron0x2a76780()*0.0620187);
}

double NNfunction_ns_chi01_dR::synapse0x2a89f00() {
   return (neuron0x2a77150()*-1.1465);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a4e0() {
   return (neuron0x2a77b20()*-3.40175);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a520() {
   return (neuron0x2a784f0()*0.326416);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a560() {
   return (neuron0x2a78ec0()*-0.601822);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a5a0() {
   return (neuron0x2a79890()*0.307107);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a5e0() {
   return (neuron0x2a7a260()*0.996887);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a620() {
   return (neuron0x2a7ae40()*0.0408362);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a660() {
   return (neuron0x2a7b810()*0.183753);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a6a0() {
   return (neuron0x2a6c690()*0.647209);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a6e0() {
   return (neuron0x2a6d060()*-2.04547);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a720() {
   return (neuron0x2a6da30()*-0.870545);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a760() {
   return (neuron0x2a80070()*1.47692);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a7a0() {
   return (neuron0x2a80920()*0.542793);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a7e0() {
   return (neuron0x2a812f0()*0.928127);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a820() {
   return (neuron0x2a81cc0()*0.355422);
}

double NNfunction_ns_chi01_dR::synapse0x2a8aba0() {
   return (neuron0x2a5cc50()*0.286522);
}

double NNfunction_ns_chi01_dR::synapse0x2a8abe0() {
   return (neuron0x2a5d490()*-0.0250623);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ac20() {
   return (neuron0x2a5df70()*-0.625962);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ac60() {
   return (neuron0x2a5da10()*-0.366992);
}

double NNfunction_ns_chi01_dR::synapse0x2a8aca0() {
   return (neuron0x2a5ed50()*1.67942);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ace0() {
   return (neuron0x2a60820()*0.180577);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ad20() {
   return (neuron0x2a615f0()*-1.35004);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ad60() {
   return (neuron0x2a61fc0()*0.197169);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ada0() {
   return (neuron0x2a62990()*-2.82031);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ade0() {
   return (neuron0x2a63470()*0.636538);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ae20() {
   return (neuron0x2a63e40()*-0.427615);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ae60() {
   return (neuron0x2a60f20()*0.473933);
}

double NNfunction_ns_chi01_dR::synapse0x2a8aea0() {
   return (neuron0x2a659f0()*-2.57307);
}

double NNfunction_ns_chi01_dR::synapse0x2a8aee0() {
   return (neuron0x2a663c0()*2.25586);
}

double NNfunction_ns_chi01_dR::synapse0x2a8af20() {
   return (neuron0x2a66d90()*-0.482168);
}

double NNfunction_ns_chi01_dR::synapse0x2a8af60() {
   return (neuron0x2a67760()*0.309942);
}

double NNfunction_ns_chi01_dR::synapse0x2a8a9f0() {
   return (neuron0x2a69570()*-0.435501);
}

double NNfunction_ns_chi01_dR::synapse0x2a8aa30() {
   return (neuron0x2a69850()*-0.809278);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b0b0() {
   return (neuron0x2a6a220()*-0.434781);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b0f0() {
   return (neuron0x2a6abf0()*-0.364084);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b130() {
   return (neuron0x2a6b5c0()*0.558159);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b170() {
   return (neuron0x2a6bf90()*0.105184);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b1b0() {
   return (neuron0x2a64ae0()*0.558323);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b1f0() {
   return (neuron0x2a654b0()*0.0809875);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b230() {
   return (neuron0x2a6ed20()*0.769218);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b270() {
   return (neuron0x2a6f6f0()*-1.59389);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b2b0() {
   return (neuron0x2a700c0()*2.21183);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b2f0() {
   return (neuron0x2a70a90()*-2.84446);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b330() {
   return (neuron0x2a71460()*-0.595533);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b370() {
   return (neuron0x2a71e30()*2.4365);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b3b0() {
   return (neuron0x2a72800()*-0.706994);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b3f0() {
   return (neuron0x2a731d0()*-0.113601);
}

double NNfunction_ns_chi01_dR::synapse0x2a8afa0() {
   return (neuron0x2a69260()*0.79317);
}

double NNfunction_ns_chi01_dR::synapse0x2a8afe0() {
   return (neuron0x2a75db0()*0.182282);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b020() {
   return (neuron0x2a76780()*0.164413);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b060() {
   return (neuron0x2a77150()*-1.46482);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b640() {
   return (neuron0x2a77b20()*1.24229);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b680() {
   return (neuron0x2a784f0()*0.858698);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b6c0() {
   return (neuron0x2a78ec0()*-0.568586);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b700() {
   return (neuron0x2a79890()*0.634539);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b740() {
   return (neuron0x2a7a260()*0.933261);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b780() {
   return (neuron0x2a7ae40()*0.612928);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b7c0() {
   return (neuron0x2a7b810()*0.442781);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b800() {
   return (neuron0x2a6c690()*-2.36911);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b840() {
   return (neuron0x2a6d060()*-3.64974);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b880() {
   return (neuron0x2a6da30()*-1.65164);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b8c0() {
   return (neuron0x2a80070()*3.6791);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b900() {
   return (neuron0x2a80920()*0.945854);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b940() {
   return (neuron0x2a812f0()*1.64787);
}

double NNfunction_ns_chi01_dR::synapse0x2a8b980() {
   return (neuron0x2a81cc0()*0.73372);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bd00() {
   return (neuron0x2a5cc50()*0.470775);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bd40() {
   return (neuron0x2a5d490()*0.791463);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bd80() {
   return (neuron0x2a5df70()*-0.15698);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bdc0() {
   return (neuron0x2a5da10()*-0.326827);
}

double NNfunction_ns_chi01_dR::synapse0x2a8be00() {
   return (neuron0x2a5ed50()*-1.10137);
}

double NNfunction_ns_chi01_dR::synapse0x2a8be40() {
   return (neuron0x2a60820()*1.08408);
}

double NNfunction_ns_chi01_dR::synapse0x2a8be80() {
   return (neuron0x2a615f0()*1.14588);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bec0() {
   return (neuron0x2a61fc0()*0.491562);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bf00() {
   return (neuron0x2a62990()*-0.428322);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bf40() {
   return (neuron0x2a63470()*-0.428688);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bf80() {
   return (neuron0x2a63e40()*1.68545);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bfc0() {
   return (neuron0x2a60f20()*-0.23016);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c000() {
   return (neuron0x2a659f0()*-1.21057);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c040() {
   return (neuron0x2a663c0()*1.62451);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c080() {
   return (neuron0x2a66d90()*0.251167);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c0c0() {
   return (neuron0x2a67760()*0.407952);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bb50() {
   return (neuron0x2a69570()*2.18816);
}

double NNfunction_ns_chi01_dR::synapse0x2a8bb90() {
   return (neuron0x2a69850()*-0.617077);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c210() {
   return (neuron0x2a6a220()*-0.259136);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c250() {
   return (neuron0x2a6abf0()*0.348228);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c290() {
   return (neuron0x2a6b5c0()*-0.182002);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c2d0() {
   return (neuron0x2a6bf90()*-1.22353);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c310() {
   return (neuron0x2a64ae0()*0.0158039);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c350() {
   return (neuron0x2a654b0()*0.300102);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c390() {
   return (neuron0x2a6ed20()*0.25352);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c3d0() {
   return (neuron0x2a6f6f0()*-0.835821);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c410() {
   return (neuron0x2a700c0()*3.18621);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c450() {
   return (neuron0x2a70a90()*-7.08455);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c490() {
   return (neuron0x2a71460()*-0.497188);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c4d0() {
   return (neuron0x2a71e30()*0.0631351);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c510() {
   return (neuron0x2a72800()*-0.0389058);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c550() {
   return (neuron0x2a731d0()*1.38306);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c100() {
   return (neuron0x2a69260()*-0.150127);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c140() {
   return (neuron0x2a75db0()*-2.49643);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c180() {
   return (neuron0x2a76780()*0.117222);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c1c0() {
   return (neuron0x2a77150()*3.39114);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c7a0() {
   return (neuron0x2a77b20()*2.20688);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c7e0() {
   return (neuron0x2a784f0()*-0.476664);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c820() {
   return (neuron0x2a78ec0()*-1.19579);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c860() {
   return (neuron0x2a79890()*-0.230998);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c8a0() {
   return (neuron0x2a7a260()*4.04051);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c8e0() {
   return (neuron0x2a7ae40()*0.299498);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c920() {
   return (neuron0x2a7b810()*0.429728);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c960() {
   return (neuron0x2a6c690()*0.365743);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c9a0() {
   return (neuron0x2a6d060()*-6.54762);
}

double NNfunction_ns_chi01_dR::synapse0x2a8c9e0() {
   return (neuron0x2a6da30()*1.31385);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ca20() {
   return (neuron0x2a80070()*-5.98108);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ca60() {
   return (neuron0x2a80920()*-0.241475);
}

double NNfunction_ns_chi01_dR::synapse0x2a8caa0() {
   return (neuron0x2a812f0()*-0.655941);
}

double NNfunction_ns_chi01_dR::synapse0x2a8cae0() {
   return (neuron0x2a81cc0()*0.156302);
}

double NNfunction_ns_chi01_dR::synapse0x2a8cd40() {
   return (neuron0x2a88ec0()*-8.54293);
}

double NNfunction_ns_chi01_dR::synapse0x2a8cd80() {
   return (neuron0x2a89260()*-3.55319);
}

double NNfunction_ns_chi01_dR::synapse0x2a8cdc0() {
   return (neuron0x2a89700()*-4.01662);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ce00() {
   return (neuron0x2a8a860()*-7.71663);
}

double NNfunction_ns_chi01_dR::synapse0x2a8ce40() {
   return (neuron0x2a8b9c0()*-3.5256);
}

