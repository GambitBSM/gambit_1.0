#include "NNfunction_ns_chi02_cL.h"
#include <cmath>

double NNfunction_ns_chi02_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2632)/15.1629;
   input1 = (in1 - 20.9523)/873.307;
   input2 = (in2 - 386.111)/459.429;
   input3 = (in3 - 129.293)/716.451;
   input4 = (in4 - 853.941)/823.173;
   input5 = (in5 - 747.461)/820.288;
   input6 = (in6 - 743.928)/813.713;
   input7 = (in7 - 748.057)/799.079;
   input8 = (in8 - 751.783)/842.537;
   input9 = (in9 - 744.907)/834.354;
   input10 = (in10 - 773.088)/842.5;
   input11 = (in11 - 681.22)/720.804;
   input12 = (in12 - 316.894)/252.388;
   input13 = (in13 - 488.043)/417.622;
   input14 = (in14 - 671.912)/668.18;
   input15 = (in15 - 672.368)/670.646;
   input16 = (in16 - 478.47)/457.401;
   input17 = (in17 - 702.988)/753.771;
   input18 = (in18 - 705.12)/756.058;
   input19 = (in19 - 705.508)/724.862;
   input20 = (in20 - -105.743)/440.41;
   input21 = (in21 - -140.696)/995.468;
   input22 = (in22 - 9.87936)/1013.89;
   input23 = (in23 - -44.2585)/451.919;
   switch(index) {
     case 0:
         return neuron0x1fb6bb0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.2632)/15.1629;
   input1 = (input[1] - 20.9523)/873.307;
   input2 = (input[2] - 386.111)/459.429;
   input3 = (input[3] - 129.293)/716.451;
   input4 = (input[4] - 853.941)/823.173;
   input5 = (input[5] - 747.461)/820.288;
   input6 = (input[6] - 743.928)/813.713;
   input7 = (input[7] - 748.057)/799.079;
   input8 = (input[8] - 751.783)/842.537;
   input9 = (input[9] - 744.907)/834.354;
   input10 = (input[10] - 773.088)/842.5;
   input11 = (input[11] - 681.22)/720.804;
   input12 = (input[12] - 316.894)/252.388;
   input13 = (input[13] - 488.043)/417.622;
   input14 = (input[14] - 671.912)/668.18;
   input15 = (input[15] - 672.368)/670.646;
   input16 = (input[16] - 478.47)/457.401;
   input17 = (input[17] - 702.988)/753.771;
   input18 = (input[18] - 705.12)/756.058;
   input19 = (input[19] - 705.508)/724.862;
   input20 = (input[20] - -105.743)/440.41;
   input21 = (input[21] - -140.696)/995.468;
   input22 = (input[22] - 9.87936)/1013.89;
   input23 = (input[23] - -44.2585)/451.919;
   switch(index) {
     case 0:
         return neuron0x1fb6bb0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_cL::neuron0x1f81c20() {
   return input0;
}

double NNfunction_ns_chi02_cL::neuron0x1f81ed0() {
   return input1;
}

double NNfunction_ns_chi02_cL::neuron0x1f82210() {
   return input2;
}

double NNfunction_ns_chi02_cL::neuron0x1f82550() {
   return input3;
}

double NNfunction_ns_chi02_cL::neuron0x1f82890() {
   return input4;
}

double NNfunction_ns_chi02_cL::neuron0x1f82bd0() {
   return input5;
}

double NNfunction_ns_chi02_cL::neuron0x1f82f10() {
   return input6;
}

double NNfunction_ns_chi02_cL::neuron0x1f83250() {
   return input7;
}

double NNfunction_ns_chi02_cL::neuron0x1f83590() {
   return input8;
}

double NNfunction_ns_chi02_cL::neuron0x1f838d0() {
   return input9;
}

double NNfunction_ns_chi02_cL::neuron0x1f83c10() {
   return input10;
}

double NNfunction_ns_chi02_cL::neuron0x1f83f50() {
   return input11;
}

double NNfunction_ns_chi02_cL::neuron0x1f84290() {
   return input12;
}

double NNfunction_ns_chi02_cL::neuron0x1f845d0() {
   return input13;
}

double NNfunction_ns_chi02_cL::neuron0x1f84910() {
   return input14;
}

double NNfunction_ns_chi02_cL::neuron0x1f84c50() {
   return input15;
}

double NNfunction_ns_chi02_cL::neuron0x1f84f90() {
   return input16;
}

double NNfunction_ns_chi02_cL::neuron0x1f854f0() {
   return input17;
}

double NNfunction_ns_chi02_cL::neuron0x1f85830() {
   return input18;
}

double NNfunction_ns_chi02_cL::neuron0x1f85b70() {
   return input19;
}

double NNfunction_ns_chi02_cL::neuron0x1f85eb0() {
   return input20;
}

double NNfunction_ns_chi02_cL::neuron0x1f861f0() {
   return input21;
}

double NNfunction_ns_chi02_cL::neuron0x1f86530() {
   return input22;
}

double NNfunction_ns_chi02_cL::neuron0x1f86870() {
   return input23;
}

double NNfunction_ns_chi02_cL::input0x1f86ce0() {
   double input = 0.0769194;
   input += synapse0x1f87020();
   input += synapse0x1f87060();
   input += synapse0x1f870a0();
   input += synapse0x1f870e0();
   input += synapse0x1f87120();
   input += synapse0x1f87160();
   input += synapse0x1f871a0();
   input += synapse0x1f871e0();
   input += synapse0x1f87220();
   input += synapse0x1f87260();
   input += synapse0x1f872a0();
   input += synapse0x1f872e0();
   input += synapse0x1f87320();
   input += synapse0x1f87360();
   input += synapse0x1f873a0();
   input += synapse0x1f873e0();
   input += synapse0x1f86e70();
   input += synapse0x1f86eb0();
   input += synapse0x1d3dda0();
   input += synapse0x1d3dde0();
   input += synapse0x1f87420();
   input += synapse0x1f87460();
   input += synapse0x1f874a0();
   input += synapse0x1f874e0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f86ce0() {
   double input = input0x1f86ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f87520() {
   double input = 0.461788;
   input += synapse0x1f87860();
   input += synapse0x1f878a0();
   input += synapse0x1f878e0();
   input += synapse0x1f87920();
   input += synapse0x1f87960();
   input += synapse0x1f879a0();
   input += synapse0x1f879e0();
   input += synapse0x1f87a20();
   input += synapse0x1f87a60();
   input += synapse0x1d3dbf0();
   input += synapse0x1d3dc30();
   input += synapse0x1d3dc70();
   input += synapse0x1d3dcb0();
   input += synapse0x1f87cb0();
   input += synapse0x1f87cf0();
   input += synapse0x1f87d30();
   input += synapse0x1f876b0();
   input += synapse0x1f876f0();
   input += synapse0x1f87e80();
   input += synapse0x1f87ec0();
   input += synapse0x1f87f00();
   input += synapse0x1f87f40();
   input += synapse0x1f87f80();
   input += synapse0x1f87fc0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f87520() {
   double input = input0x1f87520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f88000() {
   double input = -6.18309;
   input += synapse0x1f88340();
   input += synapse0x1f88380();
   input += synapse0x1f883c0();
   input += synapse0x1f88400();
   input += synapse0x1f88440();
   input += synapse0x1f88480();
   input += synapse0x1f884c0();
   input += synapse0x1f88500();
   input += synapse0x1f88540();
   input += synapse0x1f88580();
   input += synapse0x1f885c0();
   input += synapse0x1f88600();
   input += synapse0x1f88640();
   input += synapse0x1f88680();
   input += synapse0x1f886c0();
   input += synapse0x1f88700();
   input += synapse0x1f88190();
   input += synapse0x1f881d0();
   input += synapse0x1d3e490();
   input += synapse0x1d4bd60();
   input += synapse0x1d4bda0();
   input += synapse0x1f8a630();
   input += synapse0x1f8a670();
   input += synapse0x1f81960();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f88000() {
   double input = input0x1f88000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f87aa0() {
   double input = 0.21415;
   input += synapse0x1f81a30();
   input += synapse0x1d4c5e0();
   input += synapse0x1f87c30();
   input += synapse0x1f87c70();
   input += synapse0x1f88850();
   input += synapse0x1f88890();
   input += synapse0x1f888d0();
   input += synapse0x1f88910();
   input += synapse0x1f88950();
   input += synapse0x1f88990();
   input += synapse0x1f889d0();
   input += synapse0x1f88a10();
   input += synapse0x1f88a50();
   input += synapse0x1f88a90();
   input += synapse0x1f88ad0();
   input += synapse0x1f88b10();
   input += synapse0x1f819a0();
   input += synapse0x1f819e0();
   input += synapse0x1f88c60();
   input += synapse0x1f88ca0();
   input += synapse0x1f88ce0();
   input += synapse0x1f88d20();
   input += synapse0x1f88d60();
   input += synapse0x1f88da0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f87aa0() {
   double input = input0x1f87aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f88de0() {
   double input = 0.048928;
   input += synapse0x1f89120();
   input += synapse0x1f89160();
   input += synapse0x1f891a0();
   input += synapse0x1f891e0();
   input += synapse0x1f89220();
   input += synapse0x1f89260();
   input += synapse0x1f892a0();
   input += synapse0x1f892e0();
   input += synapse0x1f89320();
   input += synapse0x1f89360();
   input += synapse0x1f893a0();
   input += synapse0x1f893e0();
   input += synapse0x1f89420();
   input += synapse0x1f89460();
   input += synapse0x1f894a0();
   input += synapse0x1f894e0();
   input += synapse0x1f89630();
   input += synapse0x1f88f70();
   input += synapse0x1f88fb0();
   input += synapse0x1f8a770();
   input += synapse0x1f8a7b0();
   input += synapse0x1f8a7f0();
   input += synapse0x1f8a830();
   input += synapse0x1f8a870();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f88de0() {
   double input = input0x1f88de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8a8b0() {
   double input = -3.92689;
   input += synapse0x1f8abf0();
   input += synapse0x1f8ac30();
   input += synapse0x1f8ac70();
   input += synapse0x1f8acb0();
   input += synapse0x1f8acf0();
   input += synapse0x1f8ad30();
   input += synapse0x1f8ad70();
   input += synapse0x1f8adb0();
   input += synapse0x1f8adf0();
   input += synapse0x1d4c0b0();
   input += synapse0x1d4c0f0();
   input += synapse0x1d4c130();
   input += synapse0x1d4c170();
   input += synapse0x1d4c1b0();
   input += synapse0x1d4c1f0();
   input += synapse0x1d4c230();
   input += synapse0x1f8aa40();
   input += synapse0x1f8aa80();
   input += synapse0x1d4c380();
   input += synapse0x1d4c3c0();
   input += synapse0x1d4c400();
   input += synapse0x1d4c440();
   input += synapse0x1d4c480();
   input += synapse0x1f8b640();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8a8b0() {
   double input = input0x1f8a8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8b680() {
   double input = -3.47315;
   input += synapse0x1f8b9c0();
   input += synapse0x1f8ba00();
   input += synapse0x1f8ba40();
   input += synapse0x1f8ba80();
   input += synapse0x1f8bac0();
   input += synapse0x1f8bb00();
   input += synapse0x1f8bb40();
   input += synapse0x1f8bb80();
   input += synapse0x1f8bbc0();
   input += synapse0x1f8bc00();
   input += synapse0x1f8bc40();
   input += synapse0x1f8bc80();
   input += synapse0x1f8bcc0();
   input += synapse0x1f8bd00();
   input += synapse0x1f8bd40();
   input += synapse0x1f8bd80();
   input += synapse0x1f8b810();
   input += synapse0x1f8b850();
   input += synapse0x1f8bed0();
   input += synapse0x1f8bf10();
   input += synapse0x1f8bf50();
   input += synapse0x1f8bf90();
   input += synapse0x1f8bfd0();
   input += synapse0x1f8c010();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8b680() {
   double input = input0x1f8b680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8c050() {
   double input = 2.32243;
   input += synapse0x1f8c390();
   input += synapse0x1f8c3d0();
   input += synapse0x1f8c410();
   input += synapse0x1f8c450();
   input += synapse0x1f8c490();
   input += synapse0x1f8c4d0();
   input += synapse0x1f8c510();
   input += synapse0x1f8c550();
   input += synapse0x1f8c590();
   input += synapse0x1f8c5d0();
   input += synapse0x1f8c610();
   input += synapse0x1f8c650();
   input += synapse0x1f8c690();
   input += synapse0x1f8c6d0();
   input += synapse0x1f8c710();
   input += synapse0x1f8c750();
   input += synapse0x1f8c1e0();
   input += synapse0x1f8c220();
   input += synapse0x1f8c8a0();
   input += synapse0x1f8c8e0();
   input += synapse0x1f8c920();
   input += synapse0x1f8c960();
   input += synapse0x1f8c9a0();
   input += synapse0x1f8c9e0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8c050() {
   double input = input0x1f8c050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8ca20() {
   double input = -0.920198;
   input += synapse0x1f853e0();
   input += synapse0x1f85420();
   input += synapse0x1f85460();
   input += synapse0x1f854a0();
   input += synapse0x1f8cf70();
   input += synapse0x1f8cfb0();
   input += synapse0x1f8cff0();
   input += synapse0x1f8d030();
   input += synapse0x1f8d070();
   input += synapse0x1f8d0b0();
   input += synapse0x1f8d0f0();
   input += synapse0x1f8d130();
   input += synapse0x1f8d170();
   input += synapse0x1f8d1b0();
   input += synapse0x1f8d1f0();
   input += synapse0x1f8d230();
   input += synapse0x1f8cbb0();
   input += synapse0x1f8cbf0();
   input += synapse0x1f8d380();
   input += synapse0x1f8d3c0();
   input += synapse0x1f8d400();
   input += synapse0x1f8d440();
   input += synapse0x1f8d480();
   input += synapse0x1f8d4c0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8ca20() {
   double input = input0x1f8ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8d500() {
   double input = 0.912033;
   input += synapse0x1f8d840();
   input += synapse0x1f8d880();
   input += synapse0x1f8d8c0();
   input += synapse0x1f8d900();
   input += synapse0x1f8d940();
   input += synapse0x1f8d980();
   input += synapse0x1f8d9c0();
   input += synapse0x1f8da00();
   input += synapse0x1f8da40();
   input += synapse0x1f8da80();
   input += synapse0x1f8dac0();
   input += synapse0x1f8db00();
   input += synapse0x1f8db40();
   input += synapse0x1f8db80();
   input += synapse0x1f8dbc0();
   input += synapse0x1f8dc00();
   input += synapse0x1f8d690();
   input += synapse0x1f8d6d0();
   input += synapse0x1f8dd50();
   input += synapse0x1f8dd90();
   input += synapse0x1f8ddd0();
   input += synapse0x1f8de10();
   input += synapse0x1f8de50();
   input += synapse0x1f8de90();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8d500() {
   double input = input0x1f8d500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8ded0() {
   double input = 4.306;
   input += synapse0x1f8e210();
   input += synapse0x1f8e250();
   input += synapse0x1f8e290();
   input += synapse0x1f8e2d0();
   input += synapse0x1f8e310();
   input += synapse0x1f8e350();
   input += synapse0x1f8e390();
   input += synapse0x1f8e3d0();
   input += synapse0x1f8e410();
   input += synapse0x1f8e450();
   input += synapse0x1f8e490();
   input += synapse0x1f8e4d0();
   input += synapse0x1f8e510();
   input += synapse0x1f8e550();
   input += synapse0x1f8e590();
   input += synapse0x1f8e5d0();
   input += synapse0x1f8e060();
   input += synapse0x1f8e0a0();
   input += synapse0x1f8ae30();
   input += synapse0x1f8ae70();
   input += synapse0x1f8aeb0();
   input += synapse0x1f8aef0();
   input += synapse0x1f8af30();
   input += synapse0x1f8af70();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8ded0() {
   double input = input0x1f8ded0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8afb0() {
   double input = -0.256219;
   input += synapse0x1f8b2f0();
   input += synapse0x1f8b330();
   input += synapse0x1f8b370();
   input += synapse0x1f8b3b0();
   input += synapse0x1f8b3f0();
   input += synapse0x1f8b430();
   input += synapse0x1f8b470();
   input += synapse0x1f8b4b0();
   input += synapse0x1f8b4f0();
   input += synapse0x1f8b530();
   input += synapse0x1f8b570();
   input += synapse0x1f8b5b0();
   input += synapse0x1f8b5f0();
   input += synapse0x1f8f730();
   input += synapse0x1f8f770();
   input += synapse0x1f8f7b0();
   input += synapse0x1f8b140();
   input += synapse0x1f8b180();
   input += synapse0x1f8f900();
   input += synapse0x1f8f940();
   input += synapse0x1f8f980();
   input += synapse0x1f8f9c0();
   input += synapse0x1f8fa00();
   input += synapse0x1f8fa40();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8afb0() {
   double input = input0x1f8afb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8fa80() {
   double input = -0.296115;
   input += synapse0x1f8fdc0();
   input += synapse0x1f8fe00();
   input += synapse0x1f8fe40();
   input += synapse0x1f8fe80();
   input += synapse0x1f8fec0();
   input += synapse0x1f8ff00();
   input += synapse0x1f8ff40();
   input += synapse0x1f8ff80();
   input += synapse0x1f8ffc0();
   input += synapse0x1f90000();
   input += synapse0x1f90040();
   input += synapse0x1f90080();
   input += synapse0x1f900c0();
   input += synapse0x1f90100();
   input += synapse0x1f90140();
   input += synapse0x1f90180();
   input += synapse0x1f8fc10();
   input += synapse0x1f8fc50();
   input += synapse0x1f902d0();
   input += synapse0x1f90310();
   input += synapse0x1f90350();
   input += synapse0x1f90390();
   input += synapse0x1f903d0();
   input += synapse0x1f90410();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8fa80() {
   double input = input0x1f8fa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f90450() {
   double input = -0.244766;
   input += synapse0x1f90790();
   input += synapse0x1f907d0();
   input += synapse0x1f90810();
   input += synapse0x1f90850();
   input += synapse0x1f90890();
   input += synapse0x1f908d0();
   input += synapse0x1f90910();
   input += synapse0x1f90950();
   input += synapse0x1f90990();
   input += synapse0x1f909d0();
   input += synapse0x1f90a10();
   input += synapse0x1f90a50();
   input += synapse0x1f90a90();
   input += synapse0x1f90ad0();
   input += synapse0x1f90b10();
   input += synapse0x1f90b50();
   input += synapse0x1f905e0();
   input += synapse0x1f90620();
   input += synapse0x1f90ca0();
   input += synapse0x1f90ce0();
   input += synapse0x1f90d20();
   input += synapse0x1f90d60();
   input += synapse0x1f90da0();
   input += synapse0x1f90de0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f90450() {
   double input = input0x1f90450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f90e20() {
   double input = 1.53789;
   input += synapse0x1f91160();
   input += synapse0x1f911a0();
   input += synapse0x1f911e0();
   input += synapse0x1f91220();
   input += synapse0x1f91260();
   input += synapse0x1f912a0();
   input += synapse0x1f912e0();
   input += synapse0x1f91320();
   input += synapse0x1f91360();
   input += synapse0x1f913a0();
   input += synapse0x1f913e0();
   input += synapse0x1f91420();
   input += synapse0x1f91460();
   input += synapse0x1f914a0();
   input += synapse0x1f914e0();
   input += synapse0x1f91520();
   input += synapse0x1f90fb0();
   input += synapse0x1f90ff0();
   input += synapse0x1f91670();
   input += synapse0x1f916b0();
   input += synapse0x1f916f0();
   input += synapse0x1f91730();
   input += synapse0x1f91770();
   input += synapse0x1f917b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f90e20() {
   double input = input0x1f90e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f917f0() {
   double input = -0.567772;
   input += synapse0x1f91b30();
   input += synapse0x1f81db0();
   input += synapse0x1f81df0();
   input += synapse0x1f820f0();
   input += synapse0x1f82130();
   input += synapse0x1f82430();
   input += synapse0x1f82470();
   input += synapse0x1f82770();
   input += synapse0x1f827b0();
   input += synapse0x1f82ab0();
   input += synapse0x1f82af0();
   input += synapse0x1f82df0();
   input += synapse0x1f82e30();
   input += synapse0x1f83130();
   input += synapse0x1f83170();
   input += synapse0x1f83470();
   input += synapse0x1f834b0();
   input += synapse0x1f837b0();
   input += synapse0x1f837f0();
   input += synapse0x1f83af0();
   input += synapse0x1f83b30();
   input += synapse0x1f83e30();
   input += synapse0x1f83e70();
   input += synapse0x1f84170();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f917f0() {
   double input = input0x1f917f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f93600() {
   double input = -0.273698;
   input += synapse0x1f841b0();
   input += synapse0x1f84e70();
   input += synapse0x1f84eb0();
   input += synapse0x1f91980();
   input += synapse0x1f919c0();
   input += synapse0x1f851b0();
   input += synapse0x1f851f0();
   input += synapse0x1f85710();
   input += synapse0x1f85750();
   input += synapse0x1f85a50();
   input += synapse0x1f85a90();
   input += synapse0x1f85d90();
   input += synapse0x1f85dd0();
   input += synapse0x1f860d0();
   input += synapse0x1f86110();
   input += synapse0x1f86410();
   input += synapse0x1f86450();
   input += synapse0x1f86750();
   input += synapse0x1f86790();
   input += synapse0x1f86a90();
   input += synapse0x1f86ad0();
   input += synapse0x1f844b0();
   input += synapse0x1f844f0();
   input += synapse0x1f938a0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f93600() {
   double input = input0x1f93600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f938e0() {
   double input = -0.207894;
   input += synapse0x1f93c20();
   input += synapse0x1f93c60();
   input += synapse0x1f93ca0();
   input += synapse0x1f93ce0();
   input += synapse0x1f93d20();
   input += synapse0x1f93d60();
   input += synapse0x1f93da0();
   input += synapse0x1f93de0();
   input += synapse0x1f93e20();
   input += synapse0x1f93e60();
   input += synapse0x1f93ea0();
   input += synapse0x1f93ee0();
   input += synapse0x1f93f20();
   input += synapse0x1f93f60();
   input += synapse0x1f93fa0();
   input += synapse0x1f93fe0();
   input += synapse0x1f93a70();
   input += synapse0x1f93ab0();
   input += synapse0x1f94130();
   input += synapse0x1f94170();
   input += synapse0x1f941b0();
   input += synapse0x1f941f0();
   input += synapse0x1f94230();
   input += synapse0x1f94270();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f938e0() {
   double input = input0x1f938e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f942b0() {
   double input = -2.06803;
   input += synapse0x1f945f0();
   input += synapse0x1f94630();
   input += synapse0x1f94670();
   input += synapse0x1f946b0();
   input += synapse0x1f946f0();
   input += synapse0x1f94730();
   input += synapse0x1f94770();
   input += synapse0x1f947b0();
   input += synapse0x1f947f0();
   input += synapse0x1f94830();
   input += synapse0x1f94870();
   input += synapse0x1f948b0();
   input += synapse0x1f948f0();
   input += synapse0x1f94930();
   input += synapse0x1f94970();
   input += synapse0x1f949b0();
   input += synapse0x1f94440();
   input += synapse0x1f94480();
   input += synapse0x1f94b00();
   input += synapse0x1f94b40();
   input += synapse0x1f94b80();
   input += synapse0x1f94bc0();
   input += synapse0x1f94c00();
   input += synapse0x1f94c40();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f942b0() {
   double input = input0x1f942b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f94c80() {
   double input = -0.92531;
   input += synapse0x1f94fc0();
   input += synapse0x1f95000();
   input += synapse0x1f95040();
   input += synapse0x1f95080();
   input += synapse0x1f950c0();
   input += synapse0x1f95100();
   input += synapse0x1f95140();
   input += synapse0x1f95180();
   input += synapse0x1f951c0();
   input += synapse0x1f95200();
   input += synapse0x1f95240();
   input += synapse0x1f95280();
   input += synapse0x1f952c0();
   input += synapse0x1f95300();
   input += synapse0x1f95340();
   input += synapse0x1f95380();
   input += synapse0x1f94e10();
   input += synapse0x1f94e50();
   input += synapse0x1f954d0();
   input += synapse0x1f95510();
   input += synapse0x1f95550();
   input += synapse0x1f95590();
   input += synapse0x1f955d0();
   input += synapse0x1f95610();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f94c80() {
   double input = input0x1f94c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f95650() {
   double input = 0.665281;
   input += synapse0x1f95990();
   input += synapse0x1f959d0();
   input += synapse0x1f95a10();
   input += synapse0x1f95a50();
   input += synapse0x1f95a90();
   input += synapse0x1f95ad0();
   input += synapse0x1f95b10();
   input += synapse0x1f95b50();
   input += synapse0x1f95b90();
   input += synapse0x1f95bd0();
   input += synapse0x1f95c10();
   input += synapse0x1f95c50();
   input += synapse0x1f95c90();
   input += synapse0x1f95cd0();
   input += synapse0x1f95d10();
   input += synapse0x1f95d50();
   input += synapse0x1f957e0();
   input += synapse0x1f95820();
   input += synapse0x1f95ea0();
   input += synapse0x1f95ee0();
   input += synapse0x1f95f20();
   input += synapse0x1f95f60();
   input += synapse0x1f95fa0();
   input += synapse0x1f95fe0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f95650() {
   double input = input0x1f95650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f96020() {
   double input = -2.75923;
   input += synapse0x1f96360();
   input += synapse0x1f963a0();
   input += synapse0x1f963e0();
   input += synapse0x1f96420();
   input += synapse0x1f96460();
   input += synapse0x1f964a0();
   input += synapse0x1f964e0();
   input += synapse0x1f96520();
   input += synapse0x1f96560();
   input += synapse0x1f8e720();
   input += synapse0x1f8e760();
   input += synapse0x1f8e7a0();
   input += synapse0x1f8e7e0();
   input += synapse0x1f8e820();
   input += synapse0x1f8e860();
   input += synapse0x1f8e8a0();
   input += synapse0x1f961b0();
   input += synapse0x1f961f0();
   input += synapse0x1f8e9f0();
   input += synapse0x1f8ea30();
   input += synapse0x1f8ea70();
   input += synapse0x1f8eab0();
   input += synapse0x1f8eaf0();
   input += synapse0x1f8eb30();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f96020() {
   double input = input0x1f96020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8eb70() {
   double input = 2.38293;
   input += synapse0x1f8eeb0();
   input += synapse0x1f8eef0();
   input += synapse0x1f8ef30();
   input += synapse0x1f8ef70();
   input += synapse0x1f8efb0();
   input += synapse0x1f8eff0();
   input += synapse0x1f8f030();
   input += synapse0x1f8f070();
   input += synapse0x1f8f0b0();
   input += synapse0x1f8f0f0();
   input += synapse0x1f8f130();
   input += synapse0x1f8f170();
   input += synapse0x1f8f1b0();
   input += synapse0x1f8f1f0();
   input += synapse0x1f8f230();
   input += synapse0x1f8f270();
   input += synapse0x1f8ed00();
   input += synapse0x1f8ed40();
   input += synapse0x1f8f3c0();
   input += synapse0x1f8f400();
   input += synapse0x1f8f440();
   input += synapse0x1f8f480();
   input += synapse0x1f8f4c0();
   input += synapse0x1f8f500();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8eb70() {
   double input = input0x1f8eb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f8f540() {
   double input = -0.677585;
   input += synapse0x1f8f6d0();
   input += synapse0x1f98760();
   input += synapse0x1f987a0();
   input += synapse0x1f987e0();
   input += synapse0x1f98820();
   input += synapse0x1f98860();
   input += synapse0x1f988a0();
   input += synapse0x1f988e0();
   input += synapse0x1f98920();
   input += synapse0x1f98960();
   input += synapse0x1f989a0();
   input += synapse0x1f989e0();
   input += synapse0x1f98a20();
   input += synapse0x1f98a60();
   input += synapse0x1f98aa0();
   input += synapse0x1f98ae0();
   input += synapse0x1f985b0();
   input += synapse0x1f985f0();
   input += synapse0x1f98c30();
   input += synapse0x1f98c70();
   input += synapse0x1f98cb0();
   input += synapse0x1f98cf0();
   input += synapse0x1f98d30();
   input += synapse0x1f98d70();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f8f540() {
   double input = input0x1f8f540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f98db0() {
   double input = -0.248103;
   input += synapse0x1f990f0();
   input += synapse0x1f99130();
   input += synapse0x1f99170();
   input += synapse0x1f991b0();
   input += synapse0x1f991f0();
   input += synapse0x1f99230();
   input += synapse0x1f99270();
   input += synapse0x1f992b0();
   input += synapse0x1f992f0();
   input += synapse0x1f99330();
   input += synapse0x1f99370();
   input += synapse0x1f993b0();
   input += synapse0x1f993f0();
   input += synapse0x1f99430();
   input += synapse0x1f99470();
   input += synapse0x1f994b0();
   input += synapse0x1f98f40();
   input += synapse0x1f98f80();
   input += synapse0x1f99600();
   input += synapse0x1f99640();
   input += synapse0x1f99680();
   input += synapse0x1f996c0();
   input += synapse0x1f99700();
   input += synapse0x1f99740();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f98db0() {
   double input = input0x1f98db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f99780() {
   double input = 1.18224;
   input += synapse0x1f99ac0();
   input += synapse0x1f99b00();
   input += synapse0x1f99b40();
   input += synapse0x1f99b80();
   input += synapse0x1f99bc0();
   input += synapse0x1f99c00();
   input += synapse0x1f99c40();
   input += synapse0x1f99c80();
   input += synapse0x1f99cc0();
   input += synapse0x1f99d00();
   input += synapse0x1f99d40();
   input += synapse0x1f99d80();
   input += synapse0x1f99dc0();
   input += synapse0x1f99e00();
   input += synapse0x1f99e40();
   input += synapse0x1f99e80();
   input += synapse0x1f99910();
   input += synapse0x1f99950();
   input += synapse0x1f99fd0();
   input += synapse0x1f9a010();
   input += synapse0x1f9a050();
   input += synapse0x1f9a090();
   input += synapse0x1f9a0d0();
   input += synapse0x1f9a110();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f99780() {
   double input = input0x1f99780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9a150() {
   double input = -0.890892;
   input += synapse0x1f9a490();
   input += synapse0x1f9a4d0();
   input += synapse0x1f9a510();
   input += synapse0x1f9a550();
   input += synapse0x1f9a590();
   input += synapse0x1f9a5d0();
   input += synapse0x1f9a610();
   input += synapse0x1f9a650();
   input += synapse0x1f9a690();
   input += synapse0x1f9a6d0();
   input += synapse0x1f9a710();
   input += synapse0x1f9a750();
   input += synapse0x1f9a790();
   input += synapse0x1f9a7d0();
   input += synapse0x1f9a810();
   input += synapse0x1f9a850();
   input += synapse0x1f9a2e0();
   input += synapse0x1f9a320();
   input += synapse0x1f9a9a0();
   input += synapse0x1f9a9e0();
   input += synapse0x1f9aa20();
   input += synapse0x1f9aa60();
   input += synapse0x1f9aaa0();
   input += synapse0x1f9aae0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9a150() {
   double input = input0x1f9a150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9ab20() {
   double input = -0.271704;
   input += synapse0x1f9ae60();
   input += synapse0x1f9aea0();
   input += synapse0x1f9aee0();
   input += synapse0x1f9af20();
   input += synapse0x1f9af60();
   input += synapse0x1f9afa0();
   input += synapse0x1f9afe0();
   input += synapse0x1f9b020();
   input += synapse0x1f9b060();
   input += synapse0x1f9b0a0();
   input += synapse0x1f9b0e0();
   input += synapse0x1f9b120();
   input += synapse0x1f9b160();
   input += synapse0x1f9b1a0();
   input += synapse0x1f9b1e0();
   input += synapse0x1f9b220();
   input += synapse0x1f9acb0();
   input += synapse0x1f9acf0();
   input += synapse0x1f9b370();
   input += synapse0x1f9b3b0();
   input += synapse0x1f9b3f0();
   input += synapse0x1f9b430();
   input += synapse0x1f9b470();
   input += synapse0x1f9b4b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9ab20() {
   double input = input0x1f9ab20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9b4f0() {
   double input = 3.20192;
   input += synapse0x1f9b830();
   input += synapse0x1f9b870();
   input += synapse0x1f9b8b0();
   input += synapse0x1f9b8f0();
   input += synapse0x1f9b930();
   input += synapse0x1f9b970();
   input += synapse0x1f9b9b0();
   input += synapse0x1f9b9f0();
   input += synapse0x1f9ba30();
   input += synapse0x1f9ba70();
   input += synapse0x1f9bab0();
   input += synapse0x1f9baf0();
   input += synapse0x1f9bb30();
   input += synapse0x1f9bb70();
   input += synapse0x1f9bbb0();
   input += synapse0x1f9bbf0();
   input += synapse0x1f9b680();
   input += synapse0x1f9b6c0();
   input += synapse0x1f9bd40();
   input += synapse0x1f9bd80();
   input += synapse0x1f9bdc0();
   input += synapse0x1f9be00();
   input += synapse0x1f9be40();
   input += synapse0x1f9be80();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9b4f0() {
   double input = input0x1f9b4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9bec0() {
   double input = -0.138382;
   input += synapse0x1f9c200();
   input += synapse0x1f9c240();
   input += synapse0x1f9c280();
   input += synapse0x1f9c2c0();
   input += synapse0x1f9c300();
   input += synapse0x1f9c340();
   input += synapse0x1f9c380();
   input += synapse0x1f9c3c0();
   input += synapse0x1f9c400();
   input += synapse0x1f9c440();
   input += synapse0x1f9c480();
   input += synapse0x1f9c4c0();
   input += synapse0x1f9c500();
   input += synapse0x1f9c540();
   input += synapse0x1f9c580();
   input += synapse0x1f9c5c0();
   input += synapse0x1f9c050();
   input += synapse0x1f9c090();
   input += synapse0x1f9c710();
   input += synapse0x1f9c750();
   input += synapse0x1f9c790();
   input += synapse0x1f9c7d0();
   input += synapse0x1f9c810();
   input += synapse0x1f9c850();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9bec0() {
   double input = input0x1f9bec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9c890() {
   double input = 0.224324;
   input += synapse0x1f9cbd0();
   input += synapse0x1f9cc10();
   input += synapse0x1f9cc50();
   input += synapse0x1f9cc90();
   input += synapse0x1f9ccd0();
   input += synapse0x1f9cd10();
   input += synapse0x1f9cd50();
   input += synapse0x1f9cd90();
   input += synapse0x1f9cdd0();
   input += synapse0x1f9ce10();
   input += synapse0x1f9ce50();
   input += synapse0x1f9ce90();
   input += synapse0x1f9ced0();
   input += synapse0x1f9cf10();
   input += synapse0x1f9cf50();
   input += synapse0x1f9cf90();
   input += synapse0x1f9ca20();
   input += synapse0x1f9ca60();
   input += synapse0x1f9d0e0();
   input += synapse0x1f9d120();
   input += synapse0x1f9d160();
   input += synapse0x1f9d1a0();
   input += synapse0x1f9d1e0();
   input += synapse0x1f9d220();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9c890() {
   double input = input0x1f9c890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9d260() {
   double input = 0.100081;
   input += synapse0x1f9d5a0();
   input += synapse0x1f91b70();
   input += synapse0x1f91bb0();
   input += synapse0x1f91bf0();
   input += synapse0x1f91e40();
   input += synapse0x1f91e80();
   input += synapse0x1f91ec0();
   input += synapse0x1f92110();
   input += synapse0x1f92150();
   input += synapse0x1f923a0();
   input += synapse0x1f923e0();
   input += synapse0x1f92420();
   input += synapse0x1f92670();
   input += synapse0x1f926b0();
   input += synapse0x1f92900();
   input += synapse0x1f92940();
   input += synapse0x1f9d3f0();
   input += synapse0x1f9d430();
   input += synapse0x1f92a90();
   input += synapse0x1f92fa0();
   input += synapse0x1f92fe0();
   input += synapse0x1f93020();
   input += synapse0x1f93270();
   input += synapse0x1f932b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9d260() {
   double input = input0x1f9d260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f932f0() {
   double input = 1.64758;
   input += synapse0x1f92b60();
   input += synapse0x1f92ba0();
   input += synapse0x1f92be0();
   input += synapse0x1f92c20();
   input += synapse0x1f935a0();
   input += synapse0x1f9f8f0();
   input += synapse0x1f9f930();
   input += synapse0x1f9f970();
   input += synapse0x1f9f9b0();
   input += synapse0x1f9f9f0();
   input += synapse0x1f9fa30();
   input += synapse0x1f9fa70();
   input += synapse0x1f9fab0();
   input += synapse0x1f9faf0();
   input += synapse0x1f9fb30();
   input += synapse0x1f9fb70();
   input += synapse0x1f93480();
   input += synapse0x1f934c0();
   input += synapse0x1f9fcc0();
   input += synapse0x1f9fd00();
   input += synapse0x1f9fd40();
   input += synapse0x1f9fd80();
   input += synapse0x1f9fdc0();
   input += synapse0x1f9fe00();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f932f0() {
   double input = input0x1f932f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f9fe40() {
   double input = -1.43605;
   input += synapse0x1fa0180();
   input += synapse0x1fa01c0();
   input += synapse0x1fa0200();
   input += synapse0x1fa0240();
   input += synapse0x1fa0280();
   input += synapse0x1fa02c0();
   input += synapse0x1fa0300();
   input += synapse0x1fa0340();
   input += synapse0x1fa0380();
   input += synapse0x1fa03c0();
   input += synapse0x1fa0400();
   input += synapse0x1fa0440();
   input += synapse0x1fa0480();
   input += synapse0x1fa04c0();
   input += synapse0x1fa0500();
   input += synapse0x1fa0540();
   input += synapse0x1f9ffd0();
   input += synapse0x1fa0010();
   input += synapse0x1fa0690();
   input += synapse0x1fa06d0();
   input += synapse0x1fa0710();
   input += synapse0x1fa0750();
   input += synapse0x1fa0790();
   input += synapse0x1fa07d0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f9fe40() {
   double input = input0x1f9fe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa0810() {
   double input = -1.48609;
   input += synapse0x1fa0b50();
   input += synapse0x1fa0b90();
   input += synapse0x1fa0bd0();
   input += synapse0x1fa0c10();
   input += synapse0x1fa0c50();
   input += synapse0x1fa0c90();
   input += synapse0x1fa0cd0();
   input += synapse0x1fa0d10();
   input += synapse0x1fa0d50();
   input += synapse0x1fa0d90();
   input += synapse0x1fa0dd0();
   input += synapse0x1fa0e10();
   input += synapse0x1fa0e50();
   input += synapse0x1fa0e90();
   input += synapse0x1fa0ed0();
   input += synapse0x1fa0f10();
   input += synapse0x1fa09a0();
   input += synapse0x1fa09e0();
   input += synapse0x1fa1060();
   input += synapse0x1fa10a0();
   input += synapse0x1fa10e0();
   input += synapse0x1fa1120();
   input += synapse0x1fa1160();
   input += synapse0x1fa11a0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa0810() {
   double input = input0x1fa0810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa11e0() {
   double input = 2.88737;
   input += synapse0x1fa1520();
   input += synapse0x1fa1560();
   input += synapse0x1fa15a0();
   input += synapse0x1fa15e0();
   input += synapse0x1fa1620();
   input += synapse0x1fa1660();
   input += synapse0x1fa16a0();
   input += synapse0x1fa16e0();
   input += synapse0x1fa1720();
   input += synapse0x1fa1760();
   input += synapse0x1fa17a0();
   input += synapse0x1fa17e0();
   input += synapse0x1fa1820();
   input += synapse0x1fa1860();
   input += synapse0x1fa18a0();
   input += synapse0x1fa18e0();
   input += synapse0x1fa1370();
   input += synapse0x1fa13b0();
   input += synapse0x1fa1a30();
   input += synapse0x1fa1a70();
   input += synapse0x1fa1ab0();
   input += synapse0x1fa1af0();
   input += synapse0x1fa1b30();
   input += synapse0x1fa1b70();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa11e0() {
   double input = input0x1fa11e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa1bb0() {
   double input = 1.1582;
   input += synapse0x1fa1ef0();
   input += synapse0x1fa1f30();
   input += synapse0x1fa1f70();
   input += synapse0x1fa1fb0();
   input += synapse0x1fa1ff0();
   input += synapse0x1fa2030();
   input += synapse0x1fa2070();
   input += synapse0x1fa20b0();
   input += synapse0x1fa20f0();
   input += synapse0x1fa2130();
   input += synapse0x1fa2170();
   input += synapse0x1fa21b0();
   input += synapse0x1fa21f0();
   input += synapse0x1fa2230();
   input += synapse0x1fa2270();
   input += synapse0x1fa22b0();
   input += synapse0x1fa1d40();
   input += synapse0x1fa1d80();
   input += synapse0x1fa2400();
   input += synapse0x1fa2440();
   input += synapse0x1fa2480();
   input += synapse0x1fa24c0();
   input += synapse0x1fa2500();
   input += synapse0x1fa2540();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa1bb0() {
   double input = input0x1fa1bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa2580() {
   double input = -1.16111;
   input += synapse0x1fa28c0();
   input += synapse0x1fa2900();
   input += synapse0x1fa2940();
   input += synapse0x1fa2980();
   input += synapse0x1fa29c0();
   input += synapse0x1fa2a00();
   input += synapse0x1fa2a40();
   input += synapse0x1fa2a80();
   input += synapse0x1fa2ac0();
   input += synapse0x1fa2b00();
   input += synapse0x1fa2b40();
   input += synapse0x1fa2b80();
   input += synapse0x1fa2bc0();
   input += synapse0x1fa2c00();
   input += synapse0x1fa2c40();
   input += synapse0x1fa2c80();
   input += synapse0x1fa2710();
   input += synapse0x1fa2750();
   input += synapse0x1fa2dd0();
   input += synapse0x1fa2e10();
   input += synapse0x1fa2e50();
   input += synapse0x1fa2e90();
   input += synapse0x1fa2ed0();
   input += synapse0x1fa2f10();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa2580() {
   double input = input0x1fa2580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa2f50() {
   double input = -2.81422;
   input += synapse0x1fa3290();
   input += synapse0x1fa32d0();
   input += synapse0x1fa3310();
   input += synapse0x1fa3350();
   input += synapse0x1fa3390();
   input += synapse0x1fa33d0();
   input += synapse0x1fa3410();
   input += synapse0x1fa3450();
   input += synapse0x1fa3490();
   input += synapse0x1fa34d0();
   input += synapse0x1fa3510();
   input += synapse0x1fa3550();
   input += synapse0x1fa3590();
   input += synapse0x1fa35d0();
   input += synapse0x1fa3610();
   input += synapse0x1fa3650();
   input += synapse0x1fa30e0();
   input += synapse0x1fa3120();
   input += synapse0x1fa37a0();
   input += synapse0x1fa37e0();
   input += synapse0x1fa3820();
   input += synapse0x1fa3860();
   input += synapse0x1fa38a0();
   input += synapse0x1fa38e0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa2f50() {
   double input = input0x1fa2f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa3920() {
   double input = 0.685322;
   input += synapse0x1fa3c60();
   input += synapse0x1fa3ca0();
   input += synapse0x1fa3ce0();
   input += synapse0x1fa3d20();
   input += synapse0x1fa3d60();
   input += synapse0x1fa3da0();
   input += synapse0x1fa3de0();
   input += synapse0x1fa3e20();
   input += synapse0x1fa3e60();
   input += synapse0x1fa3ea0();
   input += synapse0x1fa3ee0();
   input += synapse0x1fa3f20();
   input += synapse0x1fa3f60();
   input += synapse0x1fa3fa0();
   input += synapse0x1fa3fe0();
   input += synapse0x1fa4020();
   input += synapse0x1fa3ab0();
   input += synapse0x1fa3af0();
   input += synapse0x1fa4170();
   input += synapse0x1fa41b0();
   input += synapse0x1fa41f0();
   input += synapse0x1fa4230();
   input += synapse0x1fa4270();
   input += synapse0x1fa42b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa3920() {
   double input = input0x1fa3920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa42f0() {
   double input = -2.7051;
   input += synapse0x1f8cd60();
   input += synapse0x1f8cda0();
   input += synapse0x1f8cde0();
   input += synapse0x1f8ce20();
   input += synapse0x1f8ce60();
   input += synapse0x1f8cea0();
   input += synapse0x1f8cee0();
   input += synapse0x1f8cf20();
   input += synapse0x1fa4a40();
   input += synapse0x1fa4a80();
   input += synapse0x1fa4ac0();
   input += synapse0x1fa4b00();
   input += synapse0x1fa4b40();
   input += synapse0x1fa4b80();
   input += synapse0x1fa4bc0();
   input += synapse0x1fa4c00();
   input += synapse0x1fa4480();
   input += synapse0x1fa44c0();
   input += synapse0x1fa4d50();
   input += synapse0x1fa4d90();
   input += synapse0x1fa4dd0();
   input += synapse0x1fa4e10();
   input += synapse0x1fa4e50();
   input += synapse0x1fa4e90();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa42f0() {
   double input = input0x1fa42f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa4ed0() {
   double input = 0.927772;
   input += synapse0x1fa5210();
   input += synapse0x1fa5250();
   input += synapse0x1fa5290();
   input += synapse0x1fa52d0();
   input += synapse0x1fa5310();
   input += synapse0x1fa5350();
   input += synapse0x1fa5390();
   input += synapse0x1fa53d0();
   input += synapse0x1fa5410();
   input += synapse0x1fa5450();
   input += synapse0x1fa5490();
   input += synapse0x1fa54d0();
   input += synapse0x1fa5510();
   input += synapse0x1fa5550();
   input += synapse0x1fa5590();
   input += synapse0x1fa55d0();
   input += synapse0x1fa5060();
   input += synapse0x1fa50a0();
   input += synapse0x1fa5720();
   input += synapse0x1fa5760();
   input += synapse0x1fa57a0();
   input += synapse0x1fa57e0();
   input += synapse0x1fa5820();
   input += synapse0x1fa5860();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa4ed0() {
   double input = input0x1fa4ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fa58a0() {
   double input = 2.7648;
   input += synapse0x1fa5be0();
   input += synapse0x1fa5c20();
   input += synapse0x1fa5c60();
   input += synapse0x1fa5ca0();
   input += synapse0x1fa5ce0();
   input += synapse0x1fa5d20();
   input += synapse0x1fa5d60();
   input += synapse0x1fa5da0();
   input += synapse0x1fa5de0();
   input += synapse0x1fa5e20();
   input += synapse0x1fa5e60();
   input += synapse0x1fa5ea0();
   input += synapse0x1fa5ee0();
   input += synapse0x1fa5f20();
   input += synapse0x1fa5f60();
   input += synapse0x1fa5fa0();
   input += synapse0x1fa5a30();
   input += synapse0x1fa5a70();
   input += synapse0x1f965a0();
   input += synapse0x1f965e0();
   input += synapse0x1f96620();
   input += synapse0x1f96660();
   input += synapse0x1f966a0();
   input += synapse0x1f966e0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fa58a0() {
   double input = input0x1fa58a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f96720() {
   double input = 0.650744;
   input += synapse0x1f96a60();
   input += synapse0x1f96aa0();
   input += synapse0x1f96ae0();
   input += synapse0x1f96b20();
   input += synapse0x1f96b60();
   input += synapse0x1f96ba0();
   input += synapse0x1f96be0();
   input += synapse0x1f96c20();
   input += synapse0x1f96c60();
   input += synapse0x1f96ca0();
   input += synapse0x1f96ce0();
   input += synapse0x1f96d20();
   input += synapse0x1f96d60();
   input += synapse0x1f96da0();
   input += synapse0x1f96de0();
   input += synapse0x1f96e20();
   input += synapse0x1f968b0();
   input += synapse0x1f968f0();
   input += synapse0x1f96f70();
   input += synapse0x1f96fb0();
   input += synapse0x1f96ff0();
   input += synapse0x1f97030();
   input += synapse0x1f97070();
   input += synapse0x1f970b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f96720() {
   double input = input0x1f96720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f970f0() {
   double input = -0.797733;
   input += synapse0x1f97430();
   input += synapse0x1f97470();
   input += synapse0x1f974b0();
   input += synapse0x1f974f0();
   input += synapse0x1f97530();
   input += synapse0x1f97570();
   input += synapse0x1f975b0();
   input += synapse0x1f975f0();
   input += synapse0x1f97630();
   input += synapse0x1f97670();
   input += synapse0x1f976b0();
   input += synapse0x1f976f0();
   input += synapse0x1f97730();
   input += synapse0x1f97770();
   input += synapse0x1f977b0();
   input += synapse0x1f977f0();
   input += synapse0x1f97280();
   input += synapse0x1f972c0();
   input += synapse0x1f97940();
   input += synapse0x1f97980();
   input += synapse0x1f979c0();
   input += synapse0x1f97a00();
   input += synapse0x1f97a40();
   input += synapse0x1f97a80();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f970f0() {
   double input = input0x1f970f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1f97ac0() {
   double input = -1.10491;
   input += synapse0x1f97e00();
   input += synapse0x1f97e40();
   input += synapse0x1f97e80();
   input += synapse0x1f97ec0();
   input += synapse0x1f97f00();
   input += synapse0x1f97f40();
   input += synapse0x1f97f80();
   input += synapse0x1f97fc0();
   input += synapse0x1f98000();
   input += synapse0x1f98040();
   input += synapse0x1f98080();
   input += synapse0x1f980c0();
   input += synapse0x1f98100();
   input += synapse0x1f98140();
   input += synapse0x1f98180();
   input += synapse0x1f981c0();
   input += synapse0x1f97c50();
   input += synapse0x1f97c90();
   input += synapse0x1f98310();
   input += synapse0x1f98350();
   input += synapse0x1f98390();
   input += synapse0x1f983d0();
   input += synapse0x1f98410();
   input += synapse0x1f98450();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1f97ac0() {
   double input = input0x1f97ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1faa100() {
   double input = 0.275142;
   input += synapse0x1faa320();
   input += synapse0x1faa360();
   input += synapse0x1faa3a0();
   input += synapse0x1faa3e0();
   input += synapse0x1faa420();
   input += synapse0x1faa460();
   input += synapse0x1faa4a0();
   input += synapse0x1faa4e0();
   input += synapse0x1faa520();
   input += synapse0x1faa560();
   input += synapse0x1faa5a0();
   input += synapse0x1faa5e0();
   input += synapse0x1faa620();
   input += synapse0x1faa660();
   input += synapse0x1faa6a0();
   input += synapse0x1faa6e0();
   input += synapse0x1f98490();
   input += synapse0x1f984d0();
   input += synapse0x1faa830();
   input += synapse0x1faa870();
   input += synapse0x1faa8b0();
   input += synapse0x1faa8f0();
   input += synapse0x1faa930();
   input += synapse0x1faa970();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1faa100() {
   double input = input0x1faa100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1faa9b0() {
   double input = -1.19753;
   input += synapse0x1faacf0();
   input += synapse0x1faad30();
   input += synapse0x1faad70();
   input += synapse0x1faadb0();
   input += synapse0x1faadf0();
   input += synapse0x1faae30();
   input += synapse0x1faae70();
   input += synapse0x1faaeb0();
   input += synapse0x1faaef0();
   input += synapse0x1faaf30();
   input += synapse0x1faaf70();
   input += synapse0x1faafb0();
   input += synapse0x1faaff0();
   input += synapse0x1fab030();
   input += synapse0x1fab070();
   input += synapse0x1fab0b0();
   input += synapse0x1faab40();
   input += synapse0x1faab80();
   input += synapse0x1fab200();
   input += synapse0x1fab240();
   input += synapse0x1fab280();
   input += synapse0x1fab2c0();
   input += synapse0x1fab300();
   input += synapse0x1fab340();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1faa9b0() {
   double input = input0x1faa9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fab380() {
   double input = -1.22569;
   input += synapse0x1fab6c0();
   input += synapse0x1fab700();
   input += synapse0x1fab740();
   input += synapse0x1fab780();
   input += synapse0x1fab7c0();
   input += synapse0x1fab800();
   input += synapse0x1fab840();
   input += synapse0x1fab880();
   input += synapse0x1fab8c0();
   input += synapse0x1fab900();
   input += synapse0x1fab940();
   input += synapse0x1fab980();
   input += synapse0x1fab9c0();
   input += synapse0x1faba00();
   input += synapse0x1faba40();
   input += synapse0x1faba80();
   input += synapse0x1fab510();
   input += synapse0x1fab550();
   input += synapse0x1fabbd0();
   input += synapse0x1fabc10();
   input += synapse0x1fabc50();
   input += synapse0x1fabc90();
   input += synapse0x1fabcd0();
   input += synapse0x1fabd10();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fab380() {
   double input = input0x1fab380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fabd50() {
   double input = -1.14454;
   input += synapse0x1fac090();
   input += synapse0x1fac0d0();
   input += synapse0x1fac110();
   input += synapse0x1fac150();
   input += synapse0x1fac190();
   input += synapse0x1fac1d0();
   input += synapse0x1fac210();
   input += synapse0x1fac250();
   input += synapse0x1fac290();
   input += synapse0x1fac2d0();
   input += synapse0x1fac310();
   input += synapse0x1fac350();
   input += synapse0x1fac390();
   input += synapse0x1fac3d0();
   input += synapse0x1fac410();
   input += synapse0x1fac450();
   input += synapse0x1fabee0();
   input += synapse0x1fabf20();
   input += synapse0x1fac5a0();
   input += synapse0x1fac5e0();
   input += synapse0x1fac620();
   input += synapse0x1fac660();
   input += synapse0x1fac6a0();
   input += synapse0x1fac6e0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fabd50() {
   double input = input0x1fabd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb2f50() {
   double input = -0.764979;
   input += synapse0x1d4c550();
   input += synapse0x1d4c590();
   input += synapse0x1f89090();
   input += synapse0x1f890d0();
   input += synapse0x1f8ab60();
   input += synapse0x1f8aba0();
   input += synapse0x1f8b930();
   input += synapse0x1f8b970();
   input += synapse0x1f8c300();
   input += synapse0x1f8c340();
   input += synapse0x1f8ccd0();
   input += synapse0x1f8cd10();
   input += synapse0x1f8d7b0();
   input += synapse0x1f8d7f0();
   input += synapse0x1f8e180();
   input += synapse0x1f8e1c0();
   input += synapse0x1f8b260();
   input += synapse0x1f8b2a0();
   input += synapse0x1f8fd30();
   input += synapse0x1f8fd70();
   input += synapse0x1f90700();
   input += synapse0x1f90740();
   input += synapse0x1f910d0();
   input += synapse0x1f91110();
   input += synapse0x1f91aa0();
   input += synapse0x1f91ae0();
   input += synapse0x1f84b30();
   input += synapse0x1f84b70();
   input += synapse0x1f93b90();
   input += synapse0x1f93bd0();
   input += synapse0x1f94560();
   input += synapse0x1f945a0();
   input += synapse0x1f94f30();
   input += synapse0x1f94f70();
   input += synapse0x1f95900();
   input += synapse0x1f95940();
   input += synapse0x1f962d0();
   input += synapse0x1f96310();
   input += synapse0x1f8ee20();
   input += synapse0x1f8ee60();
   input += synapse0x1f986d0();
   input += synapse0x1f98710();
   input += synapse0x1f99060();
   input += synapse0x1f990a0();
   input += synapse0x1f99a30();
   input += synapse0x1f99a70();
   input += synapse0x1f9a400();
   input += synapse0x1f9a440();
   input += synapse0x1f9add0();
   input += synapse0x1f9ae10();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb2f50() {
   double input = input0x1fb2f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb32f0() {
   double input = 1.35097;
   input += synapse0x1f9d510();
   input += synapse0x1f9d550();
   input += synapse0x1f92ad0();
   input += synapse0x1f92b10();
   input += synapse0x1fa00f0();
   input += synapse0x1fa0130();
   input += synapse0x1fa0ac0();
   input += synapse0x1fa0b00();
   input += synapse0x1fa1490();
   input += synapse0x1fa14d0();
   input += synapse0x1fa1e60();
   input += synapse0x1fa1ea0();
   input += synapse0x1fa2830();
   input += synapse0x1fa2870();
   input += synapse0x1fa3200();
   input += synapse0x1fa3240();
   input += synapse0x1fa3bd0();
   input += synapse0x1fa3c10();
   input += synapse0x1fa45a0();
   input += synapse0x1fa45e0();
   input += synapse0x1fa5180();
   input += synapse0x1fa51c0();
   input += synapse0x1fa5b50();
   input += synapse0x1fa5b90();
   input += synapse0x1f969d0();
   input += synapse0x1f96a10();
   input += synapse0x1f973a0();
   input += synapse0x1f973e0();
   input += synapse0x1f97d70();
   input += synapse0x1f97db0();
   input += synapse0x1faa290();
   input += synapse0x1faa2d0();
   input += synapse0x1faac60();
   input += synapse0x1faaca0();
   input += synapse0x1fab630();
   input += synapse0x1fab670();
   input += synapse0x1fac000();
   input += synapse0x1fac040();
   input += synapse0x1f86f90();
   input += synapse0x1f86fd0();
   input += synapse0x1f9b7a0();
   input += synapse0x1f9b7e0();
   input += synapse0x1fac720();
   input += synapse0x1fac760();
   input += synapse0x1fac7a0();
   input += synapse0x1fac7e0();
   input += synapse0x1fb3690();
   input += synapse0x1fb36d0();
   input += synapse0x1fb3710();
   input += synapse0x1fb3750();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb32f0() {
   double input = input0x1fb32f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb3790() {
   double input = 2.6434;
   input += synapse0x1fb3ad0();
   input += synapse0x1fb3b10();
   input += synapse0x1fb3b50();
   input += synapse0x1fb3b90();
   input += synapse0x1fb3bd0();
   input += synapse0x1fb3c10();
   input += synapse0x1fb3c50();
   input += synapse0x1fb3c90();
   input += synapse0x1fb3cd0();
   input += synapse0x1fb3d10();
   input += synapse0x1fb3d50();
   input += synapse0x1fb3d90();
   input += synapse0x1fb3dd0();
   input += synapse0x1fb3e10();
   input += synapse0x1fb3e50();
   input += synapse0x1fb3e90();
   input += synapse0x1fb3920();
   input += synapse0x1fb3960();
   input += synapse0x1fb3fe0();
   input += synapse0x1fb4020();
   input += synapse0x1fb4060();
   input += synapse0x1fb40a0();
   input += synapse0x1fb40e0();
   input += synapse0x1fb4120();
   input += synapse0x1fb4160();
   input += synapse0x1fb41a0();
   input += synapse0x1fb41e0();
   input += synapse0x1fb4220();
   input += synapse0x1fb4260();
   input += synapse0x1fb42a0();
   input += synapse0x1fb42e0();
   input += synapse0x1fb4320();
   input += synapse0x1fb3ed0();
   input += synapse0x1fb3f10();
   input += synapse0x1fb3f50();
   input += synapse0x1fb3f90();
   input += synapse0x1fb4570();
   input += synapse0x1fb45b0();
   input += synapse0x1fb45f0();
   input += synapse0x1fb4630();
   input += synapse0x1fb4670();
   input += synapse0x1fb46b0();
   input += synapse0x1fb46f0();
   input += synapse0x1fb4730();
   input += synapse0x1fb4770();
   input += synapse0x1fb47b0();
   input += synapse0x1fb47f0();
   input += synapse0x1fb4830();
   input += synapse0x1fb4870();
   input += synapse0x1fb48b0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb3790() {
   double input = input0x1fb3790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb48f0() {
   double input = 0.258582;
   input += synapse0x1fb4c30();
   input += synapse0x1fb4c70();
   input += synapse0x1fb4cb0();
   input += synapse0x1fb4cf0();
   input += synapse0x1fb4d30();
   input += synapse0x1fb4d70();
   input += synapse0x1fb4db0();
   input += synapse0x1fb4df0();
   input += synapse0x1fb4e30();
   input += synapse0x1fb4e70();
   input += synapse0x1fb4eb0();
   input += synapse0x1fb4ef0();
   input += synapse0x1fb4f30();
   input += synapse0x1fb4f70();
   input += synapse0x1fb4fb0();
   input += synapse0x1fb4ff0();
   input += synapse0x1fb4a80();
   input += synapse0x1fb4ac0();
   input += synapse0x1fb5140();
   input += synapse0x1fb5180();
   input += synapse0x1fb51c0();
   input += synapse0x1fb5200();
   input += synapse0x1fb5240();
   input += synapse0x1fb5280();
   input += synapse0x1fb52c0();
   input += synapse0x1fb5300();
   input += synapse0x1fb5340();
   input += synapse0x1fb5380();
   input += synapse0x1fb53c0();
   input += synapse0x1fb5400();
   input += synapse0x1fb5440();
   input += synapse0x1fb5480();
   input += synapse0x1fb5030();
   input += synapse0x1fb5070();
   input += synapse0x1fb50b0();
   input += synapse0x1fb50f0();
   input += synapse0x1fb56d0();
   input += synapse0x1fb5710();
   input += synapse0x1fb5750();
   input += synapse0x1fb5790();
   input += synapse0x1fb57d0();
   input += synapse0x1fb5810();
   input += synapse0x1fb5850();
   input += synapse0x1fb5890();
   input += synapse0x1fb58d0();
   input += synapse0x1fb5910();
   input += synapse0x1fb5950();
   input += synapse0x1fb5990();
   input += synapse0x1fb59d0();
   input += synapse0x1fb5a10();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb48f0() {
   double input = input0x1fb48f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb5a50() {
   double input = 0.348713;
   input += synapse0x1fb5d90();
   input += synapse0x1fb5dd0();
   input += synapse0x1fb5e10();
   input += synapse0x1fb5e50();
   input += synapse0x1fb5e90();
   input += synapse0x1fb5ed0();
   input += synapse0x1fb5f10();
   input += synapse0x1fb5f50();
   input += synapse0x1fb5f90();
   input += synapse0x1fb5fd0();
   input += synapse0x1fb6010();
   input += synapse0x1fb6050();
   input += synapse0x1fb6090();
   input += synapse0x1fb60d0();
   input += synapse0x1fb6110();
   input += synapse0x1fb6150();
   input += synapse0x1fb5be0();
   input += synapse0x1fb5c20();
   input += synapse0x1fb62a0();
   input += synapse0x1fb62e0();
   input += synapse0x1fb6320();
   input += synapse0x1fb6360();
   input += synapse0x1fb63a0();
   input += synapse0x1fb63e0();
   input += synapse0x1fb6420();
   input += synapse0x1fb6460();
   input += synapse0x1fb64a0();
   input += synapse0x1fb64e0();
   input += synapse0x1fb6520();
   input += synapse0x1fb6560();
   input += synapse0x1fb65a0();
   input += synapse0x1fb65e0();
   input += synapse0x1fb6190();
   input += synapse0x1fb61d0();
   input += synapse0x1fb6210();
   input += synapse0x1fb6250();
   input += synapse0x1fb6830();
   input += synapse0x1fb6870();
   input += synapse0x1fb68b0();
   input += synapse0x1fb68f0();
   input += synapse0x1fb6930();
   input += synapse0x1fb6970();
   input += synapse0x1fb69b0();
   input += synapse0x1fb69f0();
   input += synapse0x1fb6a30();
   input += synapse0x1fb6a70();
   input += synapse0x1fb6ab0();
   input += synapse0x1fb6af0();
   input += synapse0x1fb6b30();
   input += synapse0x1fb6b70();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb5a50() {
   double input = input0x1fb5a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_cL::input0x1fb6bb0() {
   double input = 7.98106;
   input += synapse0x1fb6dd0();
   input += synapse0x1fb6e10();
   input += synapse0x1fb6e50();
   input += synapse0x1fb6e90();
   input += synapse0x1fb6ed0();
   return input;
}

double NNfunction_ns_chi02_cL::neuron0x1fb6bb0() {
   double input = input0x1fb6bb0();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_cL::synapse0x1f87020() {
   return (neuron0x1f81c20()*-0.0777649);
}

double NNfunction_ns_chi02_cL::synapse0x1f87060() {
   return (neuron0x1f81ed0()*0.370444);
}

double NNfunction_ns_chi02_cL::synapse0x1f870a0() {
   return (neuron0x1f82210()*2.31366);
}

double NNfunction_ns_chi02_cL::synapse0x1f870e0() {
   return (neuron0x1f82550()*0.0233594);
}

double NNfunction_ns_chi02_cL::synapse0x1f87120() {
   return (neuron0x1f82890()*-0.00761716);
}

double NNfunction_ns_chi02_cL::synapse0x1f87160() {
   return (neuron0x1f82bd0()*0.00829031);
}

double NNfunction_ns_chi02_cL::synapse0x1f871a0() {
   return (neuron0x1f82f10()*-0.00594788);
}

double NNfunction_ns_chi02_cL::synapse0x1f871e0() {
   return (neuron0x1f83250()*-0.00351487);
}

double NNfunction_ns_chi02_cL::synapse0x1f87220() {
   return (neuron0x1f83590()*-0.0217733);
}

double NNfunction_ns_chi02_cL::synapse0x1f87260() {
   return (neuron0x1f838d0()*0.0248629);
}

double NNfunction_ns_chi02_cL::synapse0x1f872a0() {
   return (neuron0x1f83c10()*0.0182996);
}

double NNfunction_ns_chi02_cL::synapse0x1f872e0() {
   return (neuron0x1f83f50()*0.0191146);
}

double NNfunction_ns_chi02_cL::synapse0x1f87320() {
   return (neuron0x1f84290()*-0.0566982);
}

double NNfunction_ns_chi02_cL::synapse0x1f87360() {
   return (neuron0x1f845d0()*0.0265187);
}

double NNfunction_ns_chi02_cL::synapse0x1f873a0() {
   return (neuron0x1f84910()*-0.0179625);
}

double NNfunction_ns_chi02_cL::synapse0x1f873e0() {
   return (neuron0x1f84c50()*0.010414);
}

double NNfunction_ns_chi02_cL::synapse0x1f86e70() {
   return (neuron0x1f84f90()*-0.00668219);
}

double NNfunction_ns_chi02_cL::synapse0x1f86eb0() {
   return (neuron0x1f854f0()*0.0186424);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dda0() {
   return (neuron0x1f85830()*-0.0322094);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dde0() {
   return (neuron0x1f85b70()*-0.00524515);
}

double NNfunction_ns_chi02_cL::synapse0x1f87420() {
   return (neuron0x1f85eb0()*-0.0288302);
}

double NNfunction_ns_chi02_cL::synapse0x1f87460() {
   return (neuron0x1f861f0()*-0.0285744);
}

double NNfunction_ns_chi02_cL::synapse0x1f874a0() {
   return (neuron0x1f86530()*-0.0205553);
}

double NNfunction_ns_chi02_cL::synapse0x1f874e0() {
   return (neuron0x1f86870()*1.80863);
}

double NNfunction_ns_chi02_cL::synapse0x1f87860() {
   return (neuron0x1f81c20()*-0.256703);
}

double NNfunction_ns_chi02_cL::synapse0x1f878a0() {
   return (neuron0x1f81ed0()*0.283877);
}

double NNfunction_ns_chi02_cL::synapse0x1f878e0() {
   return (neuron0x1f82210()*-0.322028);
}

double NNfunction_ns_chi02_cL::synapse0x1f87920() {
   return (neuron0x1f82550()*-0.417795);
}

double NNfunction_ns_chi02_cL::synapse0x1f87960() {
   return (neuron0x1f82890()*0.303046);
}

double NNfunction_ns_chi02_cL::synapse0x1f879a0() {
   return (neuron0x1f82bd0()*0.525984);
}

double NNfunction_ns_chi02_cL::synapse0x1f879e0() {
   return (neuron0x1f82f10()*-0.179429);
}

double NNfunction_ns_chi02_cL::synapse0x1f87a20() {
   return (neuron0x1f83250()*0.000980686);
}

double NNfunction_ns_chi02_cL::synapse0x1f87a60() {
   return (neuron0x1f83590()*-0.112738);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dbf0() {
   return (neuron0x1f838d0()*0.0599627);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dc30() {
   return (neuron0x1f83c10()*0.146349);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dc70() {
   return (neuron0x1f83f50()*-0.197307);
}

double NNfunction_ns_chi02_cL::synapse0x1d3dcb0() {
   return (neuron0x1f84290()*0.253382);
}

double NNfunction_ns_chi02_cL::synapse0x1f87cb0() {
   return (neuron0x1f845d0()*0.587622);
}

double NNfunction_ns_chi02_cL::synapse0x1f87cf0() {
   return (neuron0x1f84910()*0.161137);
}

double NNfunction_ns_chi02_cL::synapse0x1f87d30() {
   return (neuron0x1f84c50()*-0.921317);
}

double NNfunction_ns_chi02_cL::synapse0x1f876b0() {
   return (neuron0x1f84f90()*0.15522);
}

double NNfunction_ns_chi02_cL::synapse0x1f876f0() {
   return (neuron0x1f854f0()*0.105956);
}

double NNfunction_ns_chi02_cL::synapse0x1f87e80() {
   return (neuron0x1f85830()*-0.203205);
}

double NNfunction_ns_chi02_cL::synapse0x1f87ec0() {
   return (neuron0x1f85b70()*-0.821325);
}

double NNfunction_ns_chi02_cL::synapse0x1f87f00() {
   return (neuron0x1f85eb0()*0.0803623);
}

double NNfunction_ns_chi02_cL::synapse0x1f87f40() {
   return (neuron0x1f861f0()*-0.498317);
}

double NNfunction_ns_chi02_cL::synapse0x1f87f80() {
   return (neuron0x1f86530()*-0.146175);
}

double NNfunction_ns_chi02_cL::synapse0x1f87fc0() {
   return (neuron0x1f86870()*-0.353115);
}

double NNfunction_ns_chi02_cL::synapse0x1f88340() {
   return (neuron0x1f81c20()*-0.0134692);
}

double NNfunction_ns_chi02_cL::synapse0x1f88380() {
   return (neuron0x1f81ed0()*0.0309103);
}

double NNfunction_ns_chi02_cL::synapse0x1f883c0() {
   return (neuron0x1f82210()*-0.303593);
}

double NNfunction_ns_chi02_cL::synapse0x1f88400() {
   return (neuron0x1f82550()*-2.2463);
}

double NNfunction_ns_chi02_cL::synapse0x1f88440() {
   return (neuron0x1f82890()*-0.00472029);
}

double NNfunction_ns_chi02_cL::synapse0x1f88480() {
   return (neuron0x1f82bd0()*-0.0104408);
}

double NNfunction_ns_chi02_cL::synapse0x1f884c0() {
   return (neuron0x1f82f10()*-0.0428404);
}

double NNfunction_ns_chi02_cL::synapse0x1f88500() {
   return (neuron0x1f83250()*0.0237373);
}

double NNfunction_ns_chi02_cL::synapse0x1f88540() {
   return (neuron0x1f83590()*-0.00501201);
}

double NNfunction_ns_chi02_cL::synapse0x1f88580() {
   return (neuron0x1f838d0()*0.0170909);
}

double NNfunction_ns_chi02_cL::synapse0x1f885c0() {
   return (neuron0x1f83c10()*0.0339017);
}

double NNfunction_ns_chi02_cL::synapse0x1f88600() {
   return (neuron0x1f83f50()*-0.00806756);
}

double NNfunction_ns_chi02_cL::synapse0x1f88640() {
   return (neuron0x1f84290()*-0.197759);
}

double NNfunction_ns_chi02_cL::synapse0x1f88680() {
   return (neuron0x1f845d0()*0.011613);
}

double NNfunction_ns_chi02_cL::synapse0x1f886c0() {
   return (neuron0x1f84910()*-0.0922502);
}

double NNfunction_ns_chi02_cL::synapse0x1f88700() {
   return (neuron0x1f84c50()*0.0259579);
}

double NNfunction_ns_chi02_cL::synapse0x1f88190() {
   return (neuron0x1f84f90()*-0.0554061);
}

double NNfunction_ns_chi02_cL::synapse0x1f881d0() {
   return (neuron0x1f854f0()*0.0160358);
}

double NNfunction_ns_chi02_cL::synapse0x1d3e490() {
   return (neuron0x1f85830()*-0.023874);
}

double NNfunction_ns_chi02_cL::synapse0x1d4bd60() {
   return (neuron0x1f85b70()*0.0106544);
}

double NNfunction_ns_chi02_cL::synapse0x1d4bda0() {
   return (neuron0x1f85eb0()*-0.0234734);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a630() {
   return (neuron0x1f861f0()*-0.0396119);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a670() {
   return (neuron0x1f86530()*-0.0352201);
}

double NNfunction_ns_chi02_cL::synapse0x1f81960() {
   return (neuron0x1f86870()*-0.0894437);
}

double NNfunction_ns_chi02_cL::synapse0x1f81a30() {
   return (neuron0x1f81c20()*0.0157321);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c5e0() {
   return (neuron0x1f81ed0()*3.76849);
}

double NNfunction_ns_chi02_cL::synapse0x1f87c30() {
   return (neuron0x1f82210()*0.491784);
}

double NNfunction_ns_chi02_cL::synapse0x1f87c70() {
   return (neuron0x1f82550()*0.0508077);
}

double NNfunction_ns_chi02_cL::synapse0x1f88850() {
   return (neuron0x1f82890()*-0.0081205);
}

double NNfunction_ns_chi02_cL::synapse0x1f88890() {
   return (neuron0x1f82bd0()*0.0505226);
}

double NNfunction_ns_chi02_cL::synapse0x1f888d0() {
   return (neuron0x1f82f10()*0.0234935);
}

double NNfunction_ns_chi02_cL::synapse0x1f88910() {
   return (neuron0x1f83250()*-0.0112872);
}

double NNfunction_ns_chi02_cL::synapse0x1f88950() {
   return (neuron0x1f83590()*0.0382959);
}

double NNfunction_ns_chi02_cL::synapse0x1f88990() {
   return (neuron0x1f838d0()*-0.020456);
}

double NNfunction_ns_chi02_cL::synapse0x1f889d0() {
   return (neuron0x1f83c10()*0.00273213);
}

double NNfunction_ns_chi02_cL::synapse0x1f88a10() {
   return (neuron0x1f83f50()*-0.0351932);
}

double NNfunction_ns_chi02_cL::synapse0x1f88a50() {
   return (neuron0x1f84290()*-0.0444579);
}

double NNfunction_ns_chi02_cL::synapse0x1f88a90() {
   return (neuron0x1f845d0()*0.0430275);
}

double NNfunction_ns_chi02_cL::synapse0x1f88ad0() {
   return (neuron0x1f84910()*0.0261342);
}

double NNfunction_ns_chi02_cL::synapse0x1f88b10() {
   return (neuron0x1f84c50()*-0.0333089);
}

double NNfunction_ns_chi02_cL::synapse0x1f819a0() {
   return (neuron0x1f84f90()*0.0331248);
}

double NNfunction_ns_chi02_cL::synapse0x1f819e0() {
   return (neuron0x1f854f0()*0.0213603);
}

double NNfunction_ns_chi02_cL::synapse0x1f88c60() {
   return (neuron0x1f85830()*-0.00583007);
}

double NNfunction_ns_chi02_cL::synapse0x1f88ca0() {
   return (neuron0x1f85b70()*-0.0242162);
}

double NNfunction_ns_chi02_cL::synapse0x1f88ce0() {
   return (neuron0x1f85eb0()*0.00523265);
}

double NNfunction_ns_chi02_cL::synapse0x1f88d20() {
   return (neuron0x1f861f0()*-0.00283642);
}

double NNfunction_ns_chi02_cL::synapse0x1f88d60() {
   return (neuron0x1f86530()*-0.0452529);
}

double NNfunction_ns_chi02_cL::synapse0x1f88da0() {
   return (neuron0x1f86870()*-2.75851);
}

double NNfunction_ns_chi02_cL::synapse0x1f89120() {
   return (neuron0x1f81c20()*0.0383571);
}

double NNfunction_ns_chi02_cL::synapse0x1f89160() {
   return (neuron0x1f81ed0()*-0.363167);
}

double NNfunction_ns_chi02_cL::synapse0x1f891a0() {
   return (neuron0x1f82210()*-1.02063);
}

double NNfunction_ns_chi02_cL::synapse0x1f891e0() {
   return (neuron0x1f82550()*0.00613087);
}

double NNfunction_ns_chi02_cL::synapse0x1f89220() {
   return (neuron0x1f82890()*-0.00884863);
}

double NNfunction_ns_chi02_cL::synapse0x1f89260() {
   return (neuron0x1f82bd0()*0.00132958);
}

double NNfunction_ns_chi02_cL::synapse0x1f892a0() {
   return (neuron0x1f82f10()*-0.0146727);
}

double NNfunction_ns_chi02_cL::synapse0x1f892e0() {
   return (neuron0x1f83250()*-0.0361931);
}

double NNfunction_ns_chi02_cL::synapse0x1f89320() {
   return (neuron0x1f83590()*0.00273105);
}

double NNfunction_ns_chi02_cL::synapse0x1f89360() {
   return (neuron0x1f838d0()*-0.0207314);
}

double NNfunction_ns_chi02_cL::synapse0x1f893a0() {
   return (neuron0x1f83c10()*-0.0166093);
}

double NNfunction_ns_chi02_cL::synapse0x1f893e0() {
   return (neuron0x1f83f50()*-0.0556427);
}

double NNfunction_ns_chi02_cL::synapse0x1f89420() {
   return (neuron0x1f84290()*0.204448);
}

double NNfunction_ns_chi02_cL::synapse0x1f89460() {
   return (neuron0x1f845d0()*0.00489801);
}

double NNfunction_ns_chi02_cL::synapse0x1f894a0() {
   return (neuron0x1f84910()*-0.0418053);
}

double NNfunction_ns_chi02_cL::synapse0x1f894e0() {
   return (neuron0x1f84c50()*-0.0151512);
}

double NNfunction_ns_chi02_cL::synapse0x1f89630() {
   return (neuron0x1f84f90()*0.0265694);
}

double NNfunction_ns_chi02_cL::synapse0x1f88f70() {
   return (neuron0x1f854f0()*-0.00811985);
}

double NNfunction_ns_chi02_cL::synapse0x1f88fb0() {
   return (neuron0x1f85830()*0.00830592);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a770() {
   return (neuron0x1f85b70()*0.021362);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a7b0() {
   return (neuron0x1f85eb0()*0.0366643);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a7f0() {
   return (neuron0x1f861f0()*0.00842501);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a830() {
   return (neuron0x1f86530()*0.00183535);
}

double NNfunction_ns_chi02_cL::synapse0x1f8a870() {
   return (neuron0x1f86870()*-2.35871);
}

double NNfunction_ns_chi02_cL::synapse0x1f8abf0() {
   return (neuron0x1f81c20()*-0.00102392);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ac30() {
   return (neuron0x1f81ed0()*0.0683224);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ac70() {
   return (neuron0x1f82210()*0.0538072);
}

double NNfunction_ns_chi02_cL::synapse0x1f8acb0() {
   return (neuron0x1f82550()*-1.45904);
}

double NNfunction_ns_chi02_cL::synapse0x1f8acf0() {
   return (neuron0x1f82890()*-0.0178366);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ad30() {
   return (neuron0x1f82bd0()*0.119878);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ad70() {
   return (neuron0x1f82f10()*0.0632267);
}

double NNfunction_ns_chi02_cL::synapse0x1f8adb0() {
   return (neuron0x1f83250()*-0.0250313);
}

double NNfunction_ns_chi02_cL::synapse0x1f8adf0() {
   return (neuron0x1f83590()*0.0274648);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c0b0() {
   return (neuron0x1f838d0()*-0.0893578);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c0f0() {
   return (neuron0x1f83c10()*0.0201989);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c130() {
   return (neuron0x1f83f50()*-0.0255718);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c170() {
   return (neuron0x1f84290()*0.157682);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c1b0() {
   return (neuron0x1f845d0()*-0.122589);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c1f0() {
   return (neuron0x1f84910()*0.242216);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c230() {
   return (neuron0x1f84c50()*0.0694304);
}

double NNfunction_ns_chi02_cL::synapse0x1f8aa40() {
   return (neuron0x1f84f90()*0.00414145);
}

double NNfunction_ns_chi02_cL::synapse0x1f8aa80() {
   return (neuron0x1f854f0()*-0.0899732);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c380() {
   return (neuron0x1f85830()*0.00590987);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c3c0() {
   return (neuron0x1f85b70()*-0.0502144);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c400() {
   return (neuron0x1f85eb0()*0.00111797);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c440() {
   return (neuron0x1f861f0()*-0.0715429);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c480() {
   return (neuron0x1f86530()*0.0250531);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b640() {
   return (neuron0x1f86870()*0.444736);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b9c0() {
   return (neuron0x1f81c20()*-0.0337978);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ba00() {
   return (neuron0x1f81ed0()*-7.56551);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ba40() {
   return (neuron0x1f82210()*-3.95594);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ba80() {
   return (neuron0x1f82550()*0.0175182);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bac0() {
   return (neuron0x1f82890()*-0.00781565);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bb00() {
   return (neuron0x1f82bd0()*-0.00075124);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bb40() {
   return (neuron0x1f82f10()*-0.00271322);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bb80() {
   return (neuron0x1f83250()*-0.00210976);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bbc0() {
   return (neuron0x1f83590()*-0.00433605);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bc00() {
   return (neuron0x1f838d0()*0.00788391);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bc40() {
   return (neuron0x1f83c10()*0.0156797);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bc80() {
   return (neuron0x1f83f50()*-0.0268732);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bcc0() {
   return (neuron0x1f84290()*-0.0125876);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bd00() {
   return (neuron0x1f845d0()*-0.00268587);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bd40() {
   return (neuron0x1f84910()*0.0231702);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bd80() {
   return (neuron0x1f84c50()*0.00363578);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b810() {
   return (neuron0x1f84f90()*0.0232667);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b850() {
   return (neuron0x1f854f0()*-0.00261804);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bed0() {
   return (neuron0x1f85830()*0.0234121);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bf10() {
   return (neuron0x1f85b70()*-0.00859183);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bf50() {
   return (neuron0x1f85eb0()*0.0192986);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bf90() {
   return (neuron0x1f861f0()*-0.0100318);
}

double NNfunction_ns_chi02_cL::synapse0x1f8bfd0() {
   return (neuron0x1f86530()*0.00507373);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c010() {
   return (neuron0x1f86870()*0.0896653);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c390() {
   return (neuron0x1f81c20()*0.0071264);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c3d0() {
   return (neuron0x1f81ed0()*-0.0295436);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c410() {
   return (neuron0x1f82210()*-0.133861);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c450() {
   return (neuron0x1f82550()*0.0116123);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c490() {
   return (neuron0x1f82890()*0.0134883);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c4d0() {
   return (neuron0x1f82bd0()*0.00836478);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c510() {
   return (neuron0x1f82f10()*-0.00607169);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c550() {
   return (neuron0x1f83250()*0.00299969);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c590() {
   return (neuron0x1f83590()*-0.00245033);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c5d0() {
   return (neuron0x1f838d0()*0.0177455);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c610() {
   return (neuron0x1f83c10()*-0.0065862);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c650() {
   return (neuron0x1f83f50()*-0.0108599);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c690() {
   return (neuron0x1f84290()*-0.848061);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c6d0() {
   return (neuron0x1f845d0()*0.00990602);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c710() {
   return (neuron0x1f84910()*0.00816195);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c750() {
   return (neuron0x1f84c50()*0.00160325);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c1e0() {
   return (neuron0x1f84f90()*0.0236622);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c220() {
   return (neuron0x1f854f0()*-0.0120054);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c8a0() {
   return (neuron0x1f85830()*0.00580608);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c8e0() {
   return (neuron0x1f85b70()*0.0067374);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c920() {
   return (neuron0x1f85eb0()*0.000807801);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c960() {
   return (neuron0x1f861f0()*0.00282665);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c9a0() {
   return (neuron0x1f86530()*0.0126739);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c9e0() {
   return (neuron0x1f86870()*-2.75855);
}

double NNfunction_ns_chi02_cL::synapse0x1f853e0() {
   return (neuron0x1f81c20()*0.200553);
}

double NNfunction_ns_chi02_cL::synapse0x1f85420() {
   return (neuron0x1f81ed0()*0.049294);
}

double NNfunction_ns_chi02_cL::synapse0x1f85460() {
   return (neuron0x1f82210()*0.270471);
}

double NNfunction_ns_chi02_cL::synapse0x1f854a0() {
   return (neuron0x1f82550()*-0.104987);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cf70() {
   return (neuron0x1f82890()*0.115652);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cfb0() {
   return (neuron0x1f82bd0()*-0.607311);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cff0() {
   return (neuron0x1f82f10()*0.312185);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d030() {
   return (neuron0x1f83250()*0.0235732);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d070() {
   return (neuron0x1f83590()*-0.0410479);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d0b0() {
   return (neuron0x1f838d0()*-0.369018);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d0f0() {
   return (neuron0x1f83c10()*-0.354109);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d130() {
   return (neuron0x1f83f50()*0.254455);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d170() {
   return (neuron0x1f84290()*0.0100614);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d1b0() {
   return (neuron0x1f845d0()*0.0283189);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d1f0() {
   return (neuron0x1f84910()*0.251409);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d230() {
   return (neuron0x1f84c50()*-0.570511);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cbb0() {
   return (neuron0x1f84f90()*0.182832);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cbf0() {
   return (neuron0x1f854f0()*0.00601392);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d380() {
   return (neuron0x1f85830()*0.397716);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d3c0() {
   return (neuron0x1f85b70()*0.27549);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d400() {
   return (neuron0x1f85eb0()*0.409129);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d440() {
   return (neuron0x1f861f0()*0.236263);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d480() {
   return (neuron0x1f86530()*-0.138261);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d4c0() {
   return (neuron0x1f86870()*0.212372);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d840() {
   return (neuron0x1f81c20()*-0.0330561);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d880() {
   return (neuron0x1f81ed0()*-10.6814);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d8c0() {
   return (neuron0x1f82210()*-0.678286);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d900() {
   return (neuron0x1f82550()*-0.0189278);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d940() {
   return (neuron0x1f82890()*0.0332361);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d980() {
   return (neuron0x1f82bd0()*0.0263961);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d9c0() {
   return (neuron0x1f82f10()*-0.0107842);
}

double NNfunction_ns_chi02_cL::synapse0x1f8da00() {
   return (neuron0x1f83250()*0.0282758);
}

double NNfunction_ns_chi02_cL::synapse0x1f8da40() {
   return (neuron0x1f83590()*-0.0125784);
}

double NNfunction_ns_chi02_cL::synapse0x1f8da80() {
   return (neuron0x1f838d0()*-0.00371949);
}

double NNfunction_ns_chi02_cL::synapse0x1f8dac0() {
   return (neuron0x1f83c10()*0.0255418);
}

double NNfunction_ns_chi02_cL::synapse0x1f8db00() {
   return (neuron0x1f83f50()*0.00246428);
}

double NNfunction_ns_chi02_cL::synapse0x1f8db40() {
   return (neuron0x1f84290()*0.174101);
}

double NNfunction_ns_chi02_cL::synapse0x1f8db80() {
   return (neuron0x1f845d0()*0.00542944);
}

double NNfunction_ns_chi02_cL::synapse0x1f8dbc0() {
   return (neuron0x1f84910()*0.0269607);
}

double NNfunction_ns_chi02_cL::synapse0x1f8dc00() {
   return (neuron0x1f84c50()*-0.00312413);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d690() {
   return (neuron0x1f84f90()*0.0157981);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d6d0() {
   return (neuron0x1f854f0()*-0.0317391);
}

double NNfunction_ns_chi02_cL::synapse0x1f8dd50() {
   return (neuron0x1f85830()*0.0248715);
}

double NNfunction_ns_chi02_cL::synapse0x1f8dd90() {
   return (neuron0x1f85b70()*0.0250644);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ddd0() {
   return (neuron0x1f85eb0()*-0.00192545);
}

double NNfunction_ns_chi02_cL::synapse0x1f8de10() {
   return (neuron0x1f861f0()*-0.0316162);
}

double NNfunction_ns_chi02_cL::synapse0x1f8de50() {
   return (neuron0x1f86530()*0.00739425);
}

double NNfunction_ns_chi02_cL::synapse0x1f8de90() {
   return (neuron0x1f86870()*-7.73819);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e210() {
   return (neuron0x1f81c20()*-0.0339789);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e250() {
   return (neuron0x1f81ed0()*-0.0546909);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e290() {
   return (neuron0x1f82210()*0.54342);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e2d0() {
   return (neuron0x1f82550()*-2.34589);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e310() {
   return (neuron0x1f82890()*0.0453859);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e350() {
   return (neuron0x1f82bd0()*0.107948);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e390() {
   return (neuron0x1f82f10()*0.0971849);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e3d0() {
   return (neuron0x1f83250()*-0.0483442);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e410() {
   return (neuron0x1f83590()*0.00702556);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e450() {
   return (neuron0x1f838d0()*-0.0238403);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e490() {
   return (neuron0x1f83c10()*0.0285757);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e4d0() {
   return (neuron0x1f83f50()*0.0542949);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e510() {
   return (neuron0x1f84290()*-0.239046);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e550() {
   return (neuron0x1f845d0()*-0.0380927);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e590() {
   return (neuron0x1f84910()*0.0329189);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e5d0() {
   return (neuron0x1f84c50()*0.061542);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e060() {
   return (neuron0x1f84f90()*-0.0551424);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e0a0() {
   return (neuron0x1f854f0()*-0.0100059);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ae30() {
   return (neuron0x1f85830()*0.066553);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ae70() {
   return (neuron0x1f85b70()*0.0317317);
}

double NNfunction_ns_chi02_cL::synapse0x1f8aeb0() {
   return (neuron0x1f85eb0()*-0.0675565);
}

double NNfunction_ns_chi02_cL::synapse0x1f8aef0() {
   return (neuron0x1f861f0()*-0.0113857);
}

double NNfunction_ns_chi02_cL::synapse0x1f8af30() {
   return (neuron0x1f86530()*-0.00326579);
}

double NNfunction_ns_chi02_cL::synapse0x1f8af70() {
   return (neuron0x1f86870()*0.466164);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b2f0() {
   return (neuron0x1f81c20()*-0.00574713);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b330() {
   return (neuron0x1f81ed0()*-0.0337764);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b370() {
   return (neuron0x1f82210()*-0.0631071);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b3b0() {
   return (neuron0x1f82550()*0.00423801);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b3f0() {
   return (neuron0x1f82890()*0.00365173);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b430() {
   return (neuron0x1f82bd0()*-0.00420007);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b470() {
   return (neuron0x1f82f10()*0.00176955);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b4b0() {
   return (neuron0x1f83250()*-0.0188919);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b4f0() {
   return (neuron0x1f83590()*0.023991);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b530() {
   return (neuron0x1f838d0()*0.0109167);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b570() {
   return (neuron0x1f83c10()*0.00839916);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b5b0() {
   return (neuron0x1f83f50()*0.00702735);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b5f0() {
   return (neuron0x1f84290()*0.110287);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f730() {
   return (neuron0x1f845d0()*0.000798773);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f770() {
   return (neuron0x1f84910()*0.0148362);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f7b0() {
   return (neuron0x1f84c50()*0.00154923);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b140() {
   return (neuron0x1f84f90()*-0.00383799);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b180() {
   return (neuron0x1f854f0()*0.00887636);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f900() {
   return (neuron0x1f85830()*-0.000861212);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f940() {
   return (neuron0x1f85b70()*-0.00535865);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f980() {
   return (neuron0x1f85eb0()*0.000625418);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f9c0() {
   return (neuron0x1f861f0()*0.0136907);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fa00() {
   return (neuron0x1f86530()*-0.00552837);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fa40() {
   return (neuron0x1f86870()*5.73287);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fdc0() {
   return (neuron0x1f81c20()*-0.846581);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fe00() {
   return (neuron0x1f81ed0()*-0.0730718);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fe40() {
   return (neuron0x1f82210()*0.338116);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fe80() {
   return (neuron0x1f82550()*0.600322);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fec0() {
   return (neuron0x1f82890()*1.10987);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ff00() {
   return (neuron0x1f82bd0()*1.0935);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ff40() {
   return (neuron0x1f82f10()*0.855065);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ff80() {
   return (neuron0x1f83250()*-1.20096);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ffc0() {
   return (neuron0x1f83590()*0.0973782);
}

double NNfunction_ns_chi02_cL::synapse0x1f90000() {
   return (neuron0x1f838d0()*-0.62769);
}

double NNfunction_ns_chi02_cL::synapse0x1f90040() {
   return (neuron0x1f83c10()*-0.369701);
}

double NNfunction_ns_chi02_cL::synapse0x1f90080() {
   return (neuron0x1f83f50()*-0.100358);
}

double NNfunction_ns_chi02_cL::synapse0x1f900c0() {
   return (neuron0x1f84290()*-0.108776);
}

double NNfunction_ns_chi02_cL::synapse0x1f90100() {
   return (neuron0x1f845d0()*-0.337198);
}

double NNfunction_ns_chi02_cL::synapse0x1f90140() {
   return (neuron0x1f84910()*-0.14448);
}

double NNfunction_ns_chi02_cL::synapse0x1f90180() {
   return (neuron0x1f84c50()*-0.724594);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fc10() {
   return (neuron0x1f84f90()*-0.269861);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fc50() {
   return (neuron0x1f854f0()*-0.27806);
}

double NNfunction_ns_chi02_cL::synapse0x1f902d0() {
   return (neuron0x1f85830()*-0.853555);
}

double NNfunction_ns_chi02_cL::synapse0x1f90310() {
   return (neuron0x1f85b70()*-0.0121828);
}

double NNfunction_ns_chi02_cL::synapse0x1f90350() {
   return (neuron0x1f85eb0()*-0.278866);
}

double NNfunction_ns_chi02_cL::synapse0x1f90390() {
   return (neuron0x1f861f0()*-0.946343);
}

double NNfunction_ns_chi02_cL::synapse0x1f903d0() {
   return (neuron0x1f86530()*0.0604067);
}

double NNfunction_ns_chi02_cL::synapse0x1f90410() {
   return (neuron0x1f86870()*0.944326);
}

double NNfunction_ns_chi02_cL::synapse0x1f90790() {
   return (neuron0x1f81c20()*-0.0310028);
}

double NNfunction_ns_chi02_cL::synapse0x1f907d0() {
   return (neuron0x1f81ed0()*0.161624);
}

double NNfunction_ns_chi02_cL::synapse0x1f90810() {
   return (neuron0x1f82210()*0.12747);
}

double NNfunction_ns_chi02_cL::synapse0x1f90850() {
   return (neuron0x1f82550()*-0.33259);
}

double NNfunction_ns_chi02_cL::synapse0x1f90890() {
   return (neuron0x1f82890()*-0.0403104);
}

double NNfunction_ns_chi02_cL::synapse0x1f908d0() {
   return (neuron0x1f82bd0()*-0.00377707);
}

double NNfunction_ns_chi02_cL::synapse0x1f90910() {
   return (neuron0x1f82f10()*0.0770129);
}

double NNfunction_ns_chi02_cL::synapse0x1f90950() {
   return (neuron0x1f83250()*-0.259987);
}

double NNfunction_ns_chi02_cL::synapse0x1f90990() {
   return (neuron0x1f83590()*-0.0133559);
}

double NNfunction_ns_chi02_cL::synapse0x1f909d0() {
   return (neuron0x1f838d0()*-0.278351);
}

double NNfunction_ns_chi02_cL::synapse0x1f90a10() {
   return (neuron0x1f83c10()*0.115136);
}

double NNfunction_ns_chi02_cL::synapse0x1f90a50() {
   return (neuron0x1f83f50()*-0.409886);
}

double NNfunction_ns_chi02_cL::synapse0x1f90a90() {
   return (neuron0x1f84290()*0.647481);
}

double NNfunction_ns_chi02_cL::synapse0x1f90ad0() {
   return (neuron0x1f845d0()*0.666529);
}

double NNfunction_ns_chi02_cL::synapse0x1f90b10() {
   return (neuron0x1f84910()*-0.991389);
}

double NNfunction_ns_chi02_cL::synapse0x1f90b50() {
   return (neuron0x1f84c50()*0.18987);
}

double NNfunction_ns_chi02_cL::synapse0x1f905e0() {
   return (neuron0x1f84f90()*0.702892);
}

double NNfunction_ns_chi02_cL::synapse0x1f90620() {
   return (neuron0x1f854f0()*-0.0644579);
}

double NNfunction_ns_chi02_cL::synapse0x1f90ca0() {
   return (neuron0x1f85830()*0.193494);
}

double NNfunction_ns_chi02_cL::synapse0x1f90ce0() {
   return (neuron0x1f85b70()*-0.310784);
}

double NNfunction_ns_chi02_cL::synapse0x1f90d20() {
   return (neuron0x1f85eb0()*-0.290789);
}

double NNfunction_ns_chi02_cL::synapse0x1f90d60() {
   return (neuron0x1f861f0()*-0.118018);
}

double NNfunction_ns_chi02_cL::synapse0x1f90da0() {
   return (neuron0x1f86530()*0.0591523);
}

double NNfunction_ns_chi02_cL::synapse0x1f90de0() {
   return (neuron0x1f86870()*0.496822);
}

double NNfunction_ns_chi02_cL::synapse0x1f91160() {
   return (neuron0x1f81c20()*0.0206607);
}

double NNfunction_ns_chi02_cL::synapse0x1f911a0() {
   return (neuron0x1f81ed0()*9.11178);
}

double NNfunction_ns_chi02_cL::synapse0x1f911e0() {
   return (neuron0x1f82210()*-0.263287);
}

double NNfunction_ns_chi02_cL::synapse0x1f91220() {
   return (neuron0x1f82550()*-0.0156728);
}

double NNfunction_ns_chi02_cL::synapse0x1f91260() {
   return (neuron0x1f82890()*0.0505049);
}

double NNfunction_ns_chi02_cL::synapse0x1f912a0() {
   return (neuron0x1f82bd0()*-0.0070543);
}

double NNfunction_ns_chi02_cL::synapse0x1f912e0() {
   return (neuron0x1f82f10()*0.115564);
}

double NNfunction_ns_chi02_cL::synapse0x1f91320() {
   return (neuron0x1f83250()*0.0445899);
}

double NNfunction_ns_chi02_cL::synapse0x1f91360() {
   return (neuron0x1f83590()*0.0194524);
}

double NNfunction_ns_chi02_cL::synapse0x1f913a0() {
   return (neuron0x1f838d0()*-0.0107917);
}

double NNfunction_ns_chi02_cL::synapse0x1f913e0() {
   return (neuron0x1f83c10()*0.00493154);
}

double NNfunction_ns_chi02_cL::synapse0x1f91420() {
   return (neuron0x1f83f50()*0.0444562);
}

double NNfunction_ns_chi02_cL::synapse0x1f91460() {
   return (neuron0x1f84290()*-0.477371);
}

double NNfunction_ns_chi02_cL::synapse0x1f914a0() {
   return (neuron0x1f845d0()*0.0466204);
}

double NNfunction_ns_chi02_cL::synapse0x1f914e0() {
   return (neuron0x1f84910()*-0.00103692);
}

double NNfunction_ns_chi02_cL::synapse0x1f91520() {
   return (neuron0x1f84c50()*0.0167072);
}

double NNfunction_ns_chi02_cL::synapse0x1f90fb0() {
   return (neuron0x1f84f90()*0.038629);
}

double NNfunction_ns_chi02_cL::synapse0x1f90ff0() {
   return (neuron0x1f854f0()*-0.0119633);
}

double NNfunction_ns_chi02_cL::synapse0x1f91670() {
   return (neuron0x1f85830()*0.0254443);
}

double NNfunction_ns_chi02_cL::synapse0x1f916b0() {
   return (neuron0x1f85b70()*-0.0984047);
}

double NNfunction_ns_chi02_cL::synapse0x1f916f0() {
   return (neuron0x1f85eb0()*-0.03939);
}

double NNfunction_ns_chi02_cL::synapse0x1f91730() {
   return (neuron0x1f861f0()*-0.0154284);
}

double NNfunction_ns_chi02_cL::synapse0x1f91770() {
   return (neuron0x1f86530()*-0.00634414);
}

double NNfunction_ns_chi02_cL::synapse0x1f917b0() {
   return (neuron0x1f86870()*-8.23728);
}

double NNfunction_ns_chi02_cL::synapse0x1f91b30() {
   return (neuron0x1f81c20()*-0.0207771);
}

double NNfunction_ns_chi02_cL::synapse0x1f81db0() {
   return (neuron0x1f81ed0()*-0.0159814);
}

double NNfunction_ns_chi02_cL::synapse0x1f81df0() {
   return (neuron0x1f82210()*0.114425);
}

double NNfunction_ns_chi02_cL::synapse0x1f820f0() {
   return (neuron0x1f82550()*2.95974);
}

double NNfunction_ns_chi02_cL::synapse0x1f82130() {
   return (neuron0x1f82890()*0.00976413);
}

double NNfunction_ns_chi02_cL::synapse0x1f82430() {
   return (neuron0x1f82bd0()*-0.00105931);
}

double NNfunction_ns_chi02_cL::synapse0x1f82470() {
   return (neuron0x1f82f10()*0.0141714);
}

double NNfunction_ns_chi02_cL::synapse0x1f82770() {
   return (neuron0x1f83250()*-0.0097568);
}

double NNfunction_ns_chi02_cL::synapse0x1f827b0() {
   return (neuron0x1f83590()*0.00223051);
}

double NNfunction_ns_chi02_cL::synapse0x1f82ab0() {
   return (neuron0x1f838d0()*-0.00315318);
}

double NNfunction_ns_chi02_cL::synapse0x1f82af0() {
   return (neuron0x1f83c10()*-0.0059109);
}

double NNfunction_ns_chi02_cL::synapse0x1f82df0() {
   return (neuron0x1f83f50()*-0.00959603);
}

double NNfunction_ns_chi02_cL::synapse0x1f82e30() {
   return (neuron0x1f84290()*0.340568);
}

double NNfunction_ns_chi02_cL::synapse0x1f83130() {
   return (neuron0x1f845d0()*0.0434488);
}

double NNfunction_ns_chi02_cL::synapse0x1f83170() {
   return (neuron0x1f84910()*-0.0048985);
}

double NNfunction_ns_chi02_cL::synapse0x1f83470() {
   return (neuron0x1f84c50()*-0.0107457);
}

double NNfunction_ns_chi02_cL::synapse0x1f834b0() {
   return (neuron0x1f84f90()*0.0320593);
}

double NNfunction_ns_chi02_cL::synapse0x1f837b0() {
   return (neuron0x1f854f0()*-0.00462916);
}

double NNfunction_ns_chi02_cL::synapse0x1f837f0() {
   return (neuron0x1f85830()*0.0066245);
}

double NNfunction_ns_chi02_cL::synapse0x1f83af0() {
   return (neuron0x1f85b70()*0.0140189);
}

double NNfunction_ns_chi02_cL::synapse0x1f83b30() {
   return (neuron0x1f85eb0()*-0.00785987);
}

double NNfunction_ns_chi02_cL::synapse0x1f83e30() {
   return (neuron0x1f861f0()*0.00722278);
}

double NNfunction_ns_chi02_cL::synapse0x1f83e70() {
   return (neuron0x1f86530()*-0.00701366);
}

double NNfunction_ns_chi02_cL::synapse0x1f84170() {
   return (neuron0x1f86870()*0.0113224);
}

double NNfunction_ns_chi02_cL::synapse0x1f841b0() {
   return (neuron0x1f81c20()*0.209141);
}

double NNfunction_ns_chi02_cL::synapse0x1f84e70() {
   return (neuron0x1f81ed0()*-0.2393);
}

double NNfunction_ns_chi02_cL::synapse0x1f84eb0() {
   return (neuron0x1f82210()*0.227507);
}

double NNfunction_ns_chi02_cL::synapse0x1f91980() {
   return (neuron0x1f82550()*0.225162);
}

double NNfunction_ns_chi02_cL::synapse0x1f919c0() {
   return (neuron0x1f82890()*-0.394125);
}

double NNfunction_ns_chi02_cL::synapse0x1f851b0() {
   return (neuron0x1f82bd0()*-0.636221);
}

double NNfunction_ns_chi02_cL::synapse0x1f851f0() {
   return (neuron0x1f82f10()*-0.180966);
}

double NNfunction_ns_chi02_cL::synapse0x1f85710() {
   return (neuron0x1f83250()*-0.028017);
}

double NNfunction_ns_chi02_cL::synapse0x1f85750() {
   return (neuron0x1f83590()*0.0168392);
}

double NNfunction_ns_chi02_cL::synapse0x1f85a50() {
   return (neuron0x1f838d0()*0.0328128);
}

double NNfunction_ns_chi02_cL::synapse0x1f85a90() {
   return (neuron0x1f83c10()*-0.0392009);
}

double NNfunction_ns_chi02_cL::synapse0x1f85d90() {
   return (neuron0x1f83f50()*0.0214354);
}

double NNfunction_ns_chi02_cL::synapse0x1f85dd0() {
   return (neuron0x1f84290()*-0.143065);
}

double NNfunction_ns_chi02_cL::synapse0x1f860d0() {
   return (neuron0x1f845d0()*-0.64309);
}

double NNfunction_ns_chi02_cL::synapse0x1f86110() {
   return (neuron0x1f84910()*-0.037669);
}

double NNfunction_ns_chi02_cL::synapse0x1f86410() {
   return (neuron0x1f84c50()*0.587995);
}

double NNfunction_ns_chi02_cL::synapse0x1f86450() {
   return (neuron0x1f84f90()*-0.0755535);
}

double NNfunction_ns_chi02_cL::synapse0x1f86750() {
   return (neuron0x1f854f0()*-0.03417);
}

double NNfunction_ns_chi02_cL::synapse0x1f86790() {
   return (neuron0x1f85830()*0.154776);
}

double NNfunction_ns_chi02_cL::synapse0x1f86a90() {
   return (neuron0x1f85b70()*1.00184);
}

double NNfunction_ns_chi02_cL::synapse0x1f86ad0() {
   return (neuron0x1f85eb0()*-0.135059);
}

double NNfunction_ns_chi02_cL::synapse0x1f844b0() {
   return (neuron0x1f861f0()*0.407624);
}

double NNfunction_ns_chi02_cL::synapse0x1f844f0() {
   return (neuron0x1f86530()*0.077355);
}

double NNfunction_ns_chi02_cL::synapse0x1f938a0() {
   return (neuron0x1f86870()*0.412365);
}

double NNfunction_ns_chi02_cL::synapse0x1f93c20() {
   return (neuron0x1f81c20()*-0.473204);
}

double NNfunction_ns_chi02_cL::synapse0x1f93c60() {
   return (neuron0x1f81ed0()*-0.184998);
}

double NNfunction_ns_chi02_cL::synapse0x1f93ca0() {
   return (neuron0x1f82210()*0.829021);
}

double NNfunction_ns_chi02_cL::synapse0x1f93ce0() {
   return (neuron0x1f82550()*0.70672);
}

double NNfunction_ns_chi02_cL::synapse0x1f93d20() {
   return (neuron0x1f82890()*0.761667);
}

double NNfunction_ns_chi02_cL::synapse0x1f93d60() {
   return (neuron0x1f82bd0()*-0.485758);
}

double NNfunction_ns_chi02_cL::synapse0x1f93da0() {
   return (neuron0x1f82f10()*0.0570624);
}

double NNfunction_ns_chi02_cL::synapse0x1f93de0() {
   return (neuron0x1f83250()*-0.32405);
}

double NNfunction_ns_chi02_cL::synapse0x1f93e20() {
   return (neuron0x1f83590()*0.441132);
}

double NNfunction_ns_chi02_cL::synapse0x1f93e60() {
   return (neuron0x1f838d0()*0.401444);
}

double NNfunction_ns_chi02_cL::synapse0x1f93ea0() {
   return (neuron0x1f83c10()*-0.433118);
}

double NNfunction_ns_chi02_cL::synapse0x1f93ee0() {
   return (neuron0x1f83f50()*-0.350916);
}

double NNfunction_ns_chi02_cL::synapse0x1f93f20() {
   return (neuron0x1f84290()*0.499551);
}

double NNfunction_ns_chi02_cL::synapse0x1f93f60() {
   return (neuron0x1f845d0()*-0.306033);
}

double NNfunction_ns_chi02_cL::synapse0x1f93fa0() {
   return (neuron0x1f84910()*-0.171425);
}

double NNfunction_ns_chi02_cL::synapse0x1f93fe0() {
   return (neuron0x1f84c50()*0.417384);
}

double NNfunction_ns_chi02_cL::synapse0x1f93a70() {
   return (neuron0x1f84f90()*0.0336729);
}

double NNfunction_ns_chi02_cL::synapse0x1f93ab0() {
   return (neuron0x1f854f0()*-1.35326);
}

double NNfunction_ns_chi02_cL::synapse0x1f94130() {
   return (neuron0x1f85830()*-1.02705);
}

double NNfunction_ns_chi02_cL::synapse0x1f94170() {
   return (neuron0x1f85b70()*0.322861);
}

double NNfunction_ns_chi02_cL::synapse0x1f941b0() {
   return (neuron0x1f85eb0()*0.278927);
}

double NNfunction_ns_chi02_cL::synapse0x1f941f0() {
   return (neuron0x1f861f0()*-0.324775);
}

double NNfunction_ns_chi02_cL::synapse0x1f94230() {
   return (neuron0x1f86530()*0.154626);
}

double NNfunction_ns_chi02_cL::synapse0x1f94270() {
   return (neuron0x1f86870()*1.07998);
}

double NNfunction_ns_chi02_cL::synapse0x1f945f0() {
   return (neuron0x1f81c20()*-0.0312052);
}

double NNfunction_ns_chi02_cL::synapse0x1f94630() {
   return (neuron0x1f81ed0()*-0.0242335);
}

double NNfunction_ns_chi02_cL::synapse0x1f94670() {
   return (neuron0x1f82210()*0.624102);
}

double NNfunction_ns_chi02_cL::synapse0x1f946b0() {
   return (neuron0x1f82550()*0.627282);
}

double NNfunction_ns_chi02_cL::synapse0x1f946f0() {
   return (neuron0x1f82890()*0.057401);
}

double NNfunction_ns_chi02_cL::synapse0x1f94730() {
   return (neuron0x1f82bd0()*0.0138323);
}

double NNfunction_ns_chi02_cL::synapse0x1f94770() {
   return (neuron0x1f82f10()*0.138907);
}

double NNfunction_ns_chi02_cL::synapse0x1f947b0() {
   return (neuron0x1f83250()*0.0176509);
}

double NNfunction_ns_chi02_cL::synapse0x1f947f0() {
   return (neuron0x1f83590()*-0.0344209);
}

double NNfunction_ns_chi02_cL::synapse0x1f94830() {
   return (neuron0x1f838d0()*0.0102856);
}

double NNfunction_ns_chi02_cL::synapse0x1f94870() {
   return (neuron0x1f83c10()*-0.0100141);
}

double NNfunction_ns_chi02_cL::synapse0x1f948b0() {
   return (neuron0x1f83f50()*-0.00252006);
}

double NNfunction_ns_chi02_cL::synapse0x1f948f0() {
   return (neuron0x1f84290()*0.375178);
}

double NNfunction_ns_chi02_cL::synapse0x1f94930() {
   return (neuron0x1f845d0()*-0.0717806);
}

double NNfunction_ns_chi02_cL::synapse0x1f94970() {
   return (neuron0x1f84910()*-0.0361373);
}

double NNfunction_ns_chi02_cL::synapse0x1f949b0() {
   return (neuron0x1f84c50()*0.089587);
}

double NNfunction_ns_chi02_cL::synapse0x1f94440() {
   return (neuron0x1f84f90()*-0.0327942);
}

double NNfunction_ns_chi02_cL::synapse0x1f94480() {
   return (neuron0x1f854f0()*-0.0188656);
}

double NNfunction_ns_chi02_cL::synapse0x1f94b00() {
   return (neuron0x1f85830()*0.0169607);
}

double NNfunction_ns_chi02_cL::synapse0x1f94b40() {
   return (neuron0x1f85b70()*-0.0449195);
}

double NNfunction_ns_chi02_cL::synapse0x1f94b80() {
   return (neuron0x1f85eb0()*-0.000949603);
}

double NNfunction_ns_chi02_cL::synapse0x1f94bc0() {
   return (neuron0x1f861f0()*0.0903281);
}

double NNfunction_ns_chi02_cL::synapse0x1f94c00() {
   return (neuron0x1f86530()*-0.0338646);
}

double NNfunction_ns_chi02_cL::synapse0x1f94c40() {
   return (neuron0x1f86870()*0.216926);
}

double NNfunction_ns_chi02_cL::synapse0x1f94fc0() {
   return (neuron0x1f81c20()*0.101084);
}

double NNfunction_ns_chi02_cL::synapse0x1f95000() {
   return (neuron0x1f81ed0()*0.0788583);
}

double NNfunction_ns_chi02_cL::synapse0x1f95040() {
   return (neuron0x1f82210()*-1.51638);
}

double NNfunction_ns_chi02_cL::synapse0x1f95080() {
   return (neuron0x1f82550()*0.00822109);
}

double NNfunction_ns_chi02_cL::synapse0x1f950c0() {
   return (neuron0x1f82890()*0.0480609);
}

double NNfunction_ns_chi02_cL::synapse0x1f95100() {
   return (neuron0x1f82bd0()*0.0658012);
}

double NNfunction_ns_chi02_cL::synapse0x1f95140() {
   return (neuron0x1f82f10()*0.139497);
}

double NNfunction_ns_chi02_cL::synapse0x1f95180() {
   return (neuron0x1f83250()*-0.0474208);
}

double NNfunction_ns_chi02_cL::synapse0x1f951c0() {
   return (neuron0x1f83590()*0.027276);
}

double NNfunction_ns_chi02_cL::synapse0x1f95200() {
   return (neuron0x1f838d0()*0.0660852);
}

double NNfunction_ns_chi02_cL::synapse0x1f95240() {
   return (neuron0x1f83c10()*-0.132279);
}

double NNfunction_ns_chi02_cL::synapse0x1f95280() {
   return (neuron0x1f83f50()*-0.24781);
}

double NNfunction_ns_chi02_cL::synapse0x1f952c0() {
   return (neuron0x1f84290()*0.121182);
}

double NNfunction_ns_chi02_cL::synapse0x1f95300() {
   return (neuron0x1f845d0()*0.0943045);
}

double NNfunction_ns_chi02_cL::synapse0x1f95340() {
   return (neuron0x1f84910()*-0.173584);
}

double NNfunction_ns_chi02_cL::synapse0x1f95380() {
   return (neuron0x1f84c50()*-0.0784239);
}

double NNfunction_ns_chi02_cL::synapse0x1f94e10() {
   return (neuron0x1f84f90()*0.182505);
}

double NNfunction_ns_chi02_cL::synapse0x1f94e50() {
   return (neuron0x1f854f0()*-0.370539);
}

double NNfunction_ns_chi02_cL::synapse0x1f954d0() {
   return (neuron0x1f85830()*-0.285122);
}

double NNfunction_ns_chi02_cL::synapse0x1f95510() {
   return (neuron0x1f85b70()*0.105388);
}

double NNfunction_ns_chi02_cL::synapse0x1f95550() {
   return (neuron0x1f85eb0()*-0.0528924);
}

double NNfunction_ns_chi02_cL::synapse0x1f95590() {
   return (neuron0x1f861f0()*0.102856);
}

double NNfunction_ns_chi02_cL::synapse0x1f955d0() {
   return (neuron0x1f86530()*-0.0987052);
}

double NNfunction_ns_chi02_cL::synapse0x1f95610() {
   return (neuron0x1f86870()*-0.169566);
}

double NNfunction_ns_chi02_cL::synapse0x1f95990() {
   return (neuron0x1f81c20()*-0.0320896);
}

double NNfunction_ns_chi02_cL::synapse0x1f959d0() {
   return (neuron0x1f81ed0()*0.0126542);
}

double NNfunction_ns_chi02_cL::synapse0x1f95a10() {
   return (neuron0x1f82210()*0.0959818);
}

double NNfunction_ns_chi02_cL::synapse0x1f95a50() {
   return (neuron0x1f82550()*0.163402);
}

double NNfunction_ns_chi02_cL::synapse0x1f95a90() {
   return (neuron0x1f82890()*-0.0104537);
}

double NNfunction_ns_chi02_cL::synapse0x1f95ad0() {
   return (neuron0x1f82bd0()*0.0332115);
}

double NNfunction_ns_chi02_cL::synapse0x1f95b10() {
   return (neuron0x1f82f10()*-0.00161967);
}

double NNfunction_ns_chi02_cL::synapse0x1f95b50() {
   return (neuron0x1f83250()*-0.0162587);
}

double NNfunction_ns_chi02_cL::synapse0x1f95b90() {
   return (neuron0x1f83590()*-0.036227);
}

double NNfunction_ns_chi02_cL::synapse0x1f95bd0() {
   return (neuron0x1f838d0()*-0.0211314);
}

double NNfunction_ns_chi02_cL::synapse0x1f95c10() {
   return (neuron0x1f83c10()*-0.000496464);
}

double NNfunction_ns_chi02_cL::synapse0x1f95c50() {
   return (neuron0x1f83f50()*0.00482509);
}

double NNfunction_ns_chi02_cL::synapse0x1f95c90() {
   return (neuron0x1f84290()*3.47342);
}

double NNfunction_ns_chi02_cL::synapse0x1f95cd0() {
   return (neuron0x1f845d0()*-0.000139199);
}

double NNfunction_ns_chi02_cL::synapse0x1f95d10() {
   return (neuron0x1f84910()*0.0202726);
}

double NNfunction_ns_chi02_cL::synapse0x1f95d50() {
   return (neuron0x1f84c50()*0.0623214);
}

double NNfunction_ns_chi02_cL::synapse0x1f957e0() {
   return (neuron0x1f84f90()*0.0356218);
}

double NNfunction_ns_chi02_cL::synapse0x1f95820() {
   return (neuron0x1f854f0()*0.0081629);
}

double NNfunction_ns_chi02_cL::synapse0x1f95ea0() {
   return (neuron0x1f85830()*0.00946327);
}

double NNfunction_ns_chi02_cL::synapse0x1f95ee0() {
   return (neuron0x1f85b70()*-0.00637205);
}

double NNfunction_ns_chi02_cL::synapse0x1f95f20() {
   return (neuron0x1f85eb0()*-0.0271968);
}

double NNfunction_ns_chi02_cL::synapse0x1f95f60() {
   return (neuron0x1f861f0()*-0.0582167);
}

double NNfunction_ns_chi02_cL::synapse0x1f95fa0() {
   return (neuron0x1f86530()*-0.00702272);
}

double NNfunction_ns_chi02_cL::synapse0x1f95fe0() {
   return (neuron0x1f86870()*0.0204867);
}

double NNfunction_ns_chi02_cL::synapse0x1f96360() {
   return (neuron0x1f81c20()*-0.0760982);
}

double NNfunction_ns_chi02_cL::synapse0x1f963a0() {
   return (neuron0x1f81ed0()*0.0545813);
}

double NNfunction_ns_chi02_cL::synapse0x1f963e0() {
   return (neuron0x1f82210()*0.566589);
}

double NNfunction_ns_chi02_cL::synapse0x1f96420() {
   return (neuron0x1f82550()*1.31789);
}

double NNfunction_ns_chi02_cL::synapse0x1f96460() {
   return (neuron0x1f82890()*-0.0935129);
}

double NNfunction_ns_chi02_cL::synapse0x1f964a0() {
   return (neuron0x1f82bd0()*0.216893);
}

double NNfunction_ns_chi02_cL::synapse0x1f964e0() {
   return (neuron0x1f82f10()*-0.077758);
}

double NNfunction_ns_chi02_cL::synapse0x1f96520() {
   return (neuron0x1f83250()*-0.125192);
}

double NNfunction_ns_chi02_cL::synapse0x1f96560() {
   return (neuron0x1f83590()*0.0167044);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e720() {
   return (neuron0x1f838d0()*-0.114863);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e760() {
   return (neuron0x1f83c10()*0.0277909);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e7a0() {
   return (neuron0x1f83f50()*-0.0406401);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e7e0() {
   return (neuron0x1f84290()*0.278809);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e820() {
   return (neuron0x1f845d0()*0.0110775);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e860() {
   return (neuron0x1f84910()*0.161691);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e8a0() {
   return (neuron0x1f84c50()*0.0748443);
}

double NNfunction_ns_chi02_cL::synapse0x1f961b0() {
   return (neuron0x1f84f90()*0.0298011);
}

double NNfunction_ns_chi02_cL::synapse0x1f961f0() {
   return (neuron0x1f854f0()*-0.0979182);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e9f0() {
   return (neuron0x1f85830()*0.00372859);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ea30() {
   return (neuron0x1f85b70()*0.075944);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ea70() {
   return (neuron0x1f85eb0()*-0.129569);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eab0() {
   return (neuron0x1f861f0()*-0.22305);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eaf0() {
   return (neuron0x1f86530()*-0.0384788);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eb30() {
   return (neuron0x1f86870()*0.307064);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eeb0() {
   return (neuron0x1f81c20()*-0.0156226);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eef0() {
   return (neuron0x1f81ed0()*-7.15427);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ef30() {
   return (neuron0x1f82210()*4.36321);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ef70() {
   return (neuron0x1f82550()*-0.0135718);
}

double NNfunction_ns_chi02_cL::synapse0x1f8efb0() {
   return (neuron0x1f82890()*0.0237832);
}

double NNfunction_ns_chi02_cL::synapse0x1f8eff0() {
   return (neuron0x1f82bd0()*0.0137238);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f030() {
   return (neuron0x1f82f10()*-0.00683696);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f070() {
   return (neuron0x1f83250()*0.0434217);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f0b0() {
   return (neuron0x1f83590()*0.0158599);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f0f0() {
   return (neuron0x1f838d0()*0.0370166);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f130() {
   return (neuron0x1f83c10()*0.0257085);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f170() {
   return (neuron0x1f83f50()*0.00739761);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f1b0() {
   return (neuron0x1f84290()*0.0469578);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f1f0() {
   return (neuron0x1f845d0()*-0.00255347);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f230() {
   return (neuron0x1f84910()*-0.0307357);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f270() {
   return (neuron0x1f84c50()*-0.00962289);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ed00() {
   return (neuron0x1f84f90()*-0.0357933);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ed40() {
   return (neuron0x1f854f0()*0.00148103);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f3c0() {
   return (neuron0x1f85830()*0.0282456);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f400() {
   return (neuron0x1f85b70()*0.0353781);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f440() {
   return (neuron0x1f85eb0()*0.00906963);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f480() {
   return (neuron0x1f861f0()*0.0062918);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f4c0() {
   return (neuron0x1f86530()*0.0152555);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f500() {
   return (neuron0x1f86870()*-0.0669496);
}

double NNfunction_ns_chi02_cL::synapse0x1f8f6d0() {
   return (neuron0x1f81c20()*-0.245666);
}

double NNfunction_ns_chi02_cL::synapse0x1f98760() {
   return (neuron0x1f81ed0()*0.0382076);
}

double NNfunction_ns_chi02_cL::synapse0x1f987a0() {
   return (neuron0x1f82210()*0.0102306);
}

double NNfunction_ns_chi02_cL::synapse0x1f987e0() {
   return (neuron0x1f82550()*-0.0166673);
}

double NNfunction_ns_chi02_cL::synapse0x1f98820() {
   return (neuron0x1f82890()*0.0125332);
}

double NNfunction_ns_chi02_cL::synapse0x1f98860() {
   return (neuron0x1f82bd0()*-0.0283229);
}

double NNfunction_ns_chi02_cL::synapse0x1f988a0() {
   return (neuron0x1f82f10()*0.0335242);
}

double NNfunction_ns_chi02_cL::synapse0x1f988e0() {
   return (neuron0x1f83250()*-0.114779);
}

double NNfunction_ns_chi02_cL::synapse0x1f98920() {
   return (neuron0x1f83590()*-0.126021);
}

double NNfunction_ns_chi02_cL::synapse0x1f98960() {
   return (neuron0x1f838d0()*-0.192375);
}

double NNfunction_ns_chi02_cL::synapse0x1f989a0() {
   return (neuron0x1f83c10()*-0.021265);
}

double NNfunction_ns_chi02_cL::synapse0x1f989e0() {
   return (neuron0x1f83f50()*-0.227803);
}

double NNfunction_ns_chi02_cL::synapse0x1f98a20() {
   return (neuron0x1f84290()*-0.250993);
}

double NNfunction_ns_chi02_cL::synapse0x1f98a60() {
   return (neuron0x1f845d0()*-0.216289);
}

double NNfunction_ns_chi02_cL::synapse0x1f98aa0() {
   return (neuron0x1f84910()*-0.102514);
}

double NNfunction_ns_chi02_cL::synapse0x1f98ae0() {
   return (neuron0x1f84c50()*-0.0349627);
}

double NNfunction_ns_chi02_cL::synapse0x1f985b0() {
   return (neuron0x1f84f90()*-0.231593);
}

double NNfunction_ns_chi02_cL::synapse0x1f985f0() {
   return (neuron0x1f854f0()*-0.167562);
}

double NNfunction_ns_chi02_cL::synapse0x1f98c30() {
   return (neuron0x1f85830()*0.0800943);
}

double NNfunction_ns_chi02_cL::synapse0x1f98c70() {
   return (neuron0x1f85b70()*-0.104754);
}

double NNfunction_ns_chi02_cL::synapse0x1f98cb0() {
   return (neuron0x1f85eb0()*-0.0293029);
}

double NNfunction_ns_chi02_cL::synapse0x1f98cf0() {
   return (neuron0x1f861f0()*-0.0235514);
}

double NNfunction_ns_chi02_cL::synapse0x1f98d30() {
   return (neuron0x1f86530()*-0.106632);
}

double NNfunction_ns_chi02_cL::synapse0x1f98d70() {
   return (neuron0x1f86870()*-0.323255);
}

double NNfunction_ns_chi02_cL::synapse0x1f990f0() {
   return (neuron0x1f81c20()*-0.397154);
}

double NNfunction_ns_chi02_cL::synapse0x1f99130() {
   return (neuron0x1f81ed0()*-0.413643);
}

double NNfunction_ns_chi02_cL::synapse0x1f99170() {
   return (neuron0x1f82210()*0.329162);
}

double NNfunction_ns_chi02_cL::synapse0x1f991b0() {
   return (neuron0x1f82550()*0.738508);
}

double NNfunction_ns_chi02_cL::synapse0x1f991f0() {
   return (neuron0x1f82890()*-0.374609);
}

double NNfunction_ns_chi02_cL::synapse0x1f99230() {
   return (neuron0x1f82bd0()*0.187402);
}

double NNfunction_ns_chi02_cL::synapse0x1f99270() {
   return (neuron0x1f82f10()*0.201043);
}

double NNfunction_ns_chi02_cL::synapse0x1f992b0() {
   return (neuron0x1f83250()*0.943736);
}

double NNfunction_ns_chi02_cL::synapse0x1f992f0() {
   return (neuron0x1f83590()*0.400347);
}

double NNfunction_ns_chi02_cL::synapse0x1f99330() {
   return (neuron0x1f838d0()*-0.503981);
}

double NNfunction_ns_chi02_cL::synapse0x1f99370() {
   return (neuron0x1f83c10()*-0.456224);
}

double NNfunction_ns_chi02_cL::synapse0x1f993b0() {
   return (neuron0x1f83f50()*0.603524);
}

double NNfunction_ns_chi02_cL::synapse0x1f993f0() {
   return (neuron0x1f84290()*-0.123549);
}

double NNfunction_ns_chi02_cL::synapse0x1f99430() {
   return (neuron0x1f845d0()*-0.036216);
}

double NNfunction_ns_chi02_cL::synapse0x1f99470() {
   return (neuron0x1f84910()*0.784381);
}

double NNfunction_ns_chi02_cL::synapse0x1f994b0() {
   return (neuron0x1f84c50()*0.790947);
}

double NNfunction_ns_chi02_cL::synapse0x1f98f40() {
   return (neuron0x1f84f90()*-0.622821);
}

double NNfunction_ns_chi02_cL::synapse0x1f98f80() {
   return (neuron0x1f854f0()*0.238639);
}

double NNfunction_ns_chi02_cL::synapse0x1f99600() {
   return (neuron0x1f85830()*-0.491176);
}

double NNfunction_ns_chi02_cL::synapse0x1f99640() {
   return (neuron0x1f85b70()*0.824793);
}

double NNfunction_ns_chi02_cL::synapse0x1f99680() {
   return (neuron0x1f85eb0()*-0.255405);
}

double NNfunction_ns_chi02_cL::synapse0x1f996c0() {
   return (neuron0x1f861f0()*0.347115);
}

double NNfunction_ns_chi02_cL::synapse0x1f99700() {
   return (neuron0x1f86530()*0.211863);
}

double NNfunction_ns_chi02_cL::synapse0x1f99740() {
   return (neuron0x1f86870()*0.298711);
}

double NNfunction_ns_chi02_cL::synapse0x1f99ac0() {
   return (neuron0x1f81c20()*0.078081);
}

double NNfunction_ns_chi02_cL::synapse0x1f99b00() {
   return (neuron0x1f81ed0()*-0.0642059);
}

double NNfunction_ns_chi02_cL::synapse0x1f99b40() {
   return (neuron0x1f82210()*0.590941);
}

double NNfunction_ns_chi02_cL::synapse0x1f99b80() {
   return (neuron0x1f82550()*-0.39089);
}

double NNfunction_ns_chi02_cL::synapse0x1f99bc0() {
   return (neuron0x1f82890()*-0.110573);
}

double NNfunction_ns_chi02_cL::synapse0x1f99c00() {
   return (neuron0x1f82bd0()*-0.0240297);
}

double NNfunction_ns_chi02_cL::synapse0x1f99c40() {
   return (neuron0x1f82f10()*-0.111231);
}

double NNfunction_ns_chi02_cL::synapse0x1f99c80() {
   return (neuron0x1f83250()*0.0179266);
}

double NNfunction_ns_chi02_cL::synapse0x1f99cc0() {
   return (neuron0x1f83590()*0.0430159);
}

double NNfunction_ns_chi02_cL::synapse0x1f99d00() {
   return (neuron0x1f838d0()*0.0690936);
}

double NNfunction_ns_chi02_cL::synapse0x1f99d40() {
   return (neuron0x1f83c10()*-0.0444823);
}

double NNfunction_ns_chi02_cL::synapse0x1f99d80() {
   return (neuron0x1f83f50()*-0.135191);
}

double NNfunction_ns_chi02_cL::synapse0x1f99dc0() {
   return (neuron0x1f84290()*-0.121461);
}

double NNfunction_ns_chi02_cL::synapse0x1f99e00() {
   return (neuron0x1f845d0()*0.200473);
}

double NNfunction_ns_chi02_cL::synapse0x1f99e40() {
   return (neuron0x1f84910()*0.00257545);
}

double NNfunction_ns_chi02_cL::synapse0x1f99e80() {
   return (neuron0x1f84c50()*-0.203176);
}

double NNfunction_ns_chi02_cL::synapse0x1f99910() {
   return (neuron0x1f84f90()*0.329061);
}

double NNfunction_ns_chi02_cL::synapse0x1f99950() {
   return (neuron0x1f854f0()*-0.0865824);
}

double NNfunction_ns_chi02_cL::synapse0x1f99fd0() {
   return (neuron0x1f85830()*-0.120254);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a010() {
   return (neuron0x1f85b70()*-0.00871868);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a050() {
   return (neuron0x1f85eb0()*-0.00354122);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a090() {
   return (neuron0x1f861f0()*0.0252337);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a0d0() {
   return (neuron0x1f86530()*0.0603032);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a110() {
   return (neuron0x1f86870()*0.00659362);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a490() {
   return (neuron0x1f81c20()*-0.30611);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a4d0() {
   return (neuron0x1f81ed0()*0.511175);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a510() {
   return (neuron0x1f82210()*0.404043);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a550() {
   return (neuron0x1f82550()*-0.737339);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a590() {
   return (neuron0x1f82890()*-0.718608);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a5d0() {
   return (neuron0x1f82bd0()*-0.753538);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a610() {
   return (neuron0x1f82f10()*-0.561632);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a650() {
   return (neuron0x1f83250()*-0.467877);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a690() {
   return (neuron0x1f83590()*-0.333648);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a6d0() {
   return (neuron0x1f838d0()*-0.57259);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a710() {
   return (neuron0x1f83c10()*0.207842);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a750() {
   return (neuron0x1f83f50()*0.323212);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a790() {
   return (neuron0x1f84290()*0.891818);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a7d0() {
   return (neuron0x1f845d0()*-0.0405445);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a810() {
   return (neuron0x1f84910()*-0.351653);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a850() {
   return (neuron0x1f84c50()*-0.915233);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a2e0() {
   return (neuron0x1f84f90()*-1.89731);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a320() {
   return (neuron0x1f854f0()*0.0687452);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a9a0() {
   return (neuron0x1f85830()*0.563974);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a9e0() {
   return (neuron0x1f85b70()*0.461723);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aa20() {
   return (neuron0x1f85eb0()*-0.395165);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aa60() {
   return (neuron0x1f861f0()*0.0549672);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aaa0() {
   return (neuron0x1f86530()*-0.371496);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aae0() {
   return (neuron0x1f86870()*-0.661347);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ae60() {
   return (neuron0x1f81c20()*0.272977);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aea0() {
   return (neuron0x1f81ed0()*-0.403894);
}

double NNfunction_ns_chi02_cL::synapse0x1f9aee0() {
   return (neuron0x1f82210()*0.489782);
}

double NNfunction_ns_chi02_cL::synapse0x1f9af20() {
   return (neuron0x1f82550()*-0.519825);
}

double NNfunction_ns_chi02_cL::synapse0x1f9af60() {
   return (neuron0x1f82890()*-0.00838381);
}

double NNfunction_ns_chi02_cL::synapse0x1f9afa0() {
   return (neuron0x1f82bd0()*-0.428929);
}

double NNfunction_ns_chi02_cL::synapse0x1f9afe0() {
   return (neuron0x1f82f10()*-0.189309);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b020() {
   return (neuron0x1f83250()*0.642804);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b060() {
   return (neuron0x1f83590()*0.322974);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b0a0() {
   return (neuron0x1f838d0()*0.274931);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b0e0() {
   return (neuron0x1f83c10()*0.472435);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b120() {
   return (neuron0x1f83f50()*-0.835358);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b160() {
   return (neuron0x1f84290()*-0.656922);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b1a0() {
   return (neuron0x1f845d0()*-0.160519);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b1e0() {
   return (neuron0x1f84910()*0.812701);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b220() {
   return (neuron0x1f84c50()*2.0632);
}

double NNfunction_ns_chi02_cL::synapse0x1f9acb0() {
   return (neuron0x1f84f90()*0.127221);
}

double NNfunction_ns_chi02_cL::synapse0x1f9acf0() {
   return (neuron0x1f854f0()*-1.09633);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b370() {
   return (neuron0x1f85830()*-0.00965976);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b3b0() {
   return (neuron0x1f85b70()*0.394366);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b3f0() {
   return (neuron0x1f85eb0()*-0.19927);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b430() {
   return (neuron0x1f861f0()*-0.744946);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b470() {
   return (neuron0x1f86530()*0.367466);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b4b0() {
   return (neuron0x1f86870()*-0.290292);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b830() {
   return (neuron0x1f81c20()*-0.00492594);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b870() {
   return (neuron0x1f81ed0()*0.147027);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b8b0() {
   return (neuron0x1f82210()*-0.647527);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b8f0() {
   return (neuron0x1f82550()*0.639872);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b930() {
   return (neuron0x1f82890()*-0.0193607);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b970() {
   return (neuron0x1f82bd0()*0.0365209);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b9b0() {
   return (neuron0x1f82f10()*0.0628959);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b9f0() {
   return (neuron0x1f83250()*-0.0322412);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ba30() {
   return (neuron0x1f83590()*0.00272623);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ba70() {
   return (neuron0x1f838d0()*-0.0827657);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bab0() {
   return (neuron0x1f83c10()*0.0385693);
}

double NNfunction_ns_chi02_cL::synapse0x1f9baf0() {
   return (neuron0x1f83f50()*-0.0252584);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bb30() {
   return (neuron0x1f84290()*0.252419);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bb70() {
   return (neuron0x1f845d0()*-0.130373);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bbb0() {
   return (neuron0x1f84910()*0.220022);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bbf0() {
   return (neuron0x1f84c50()*0.0460993);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b680() {
   return (neuron0x1f84f90()*-0.05155);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b6c0() {
   return (neuron0x1f854f0()*-0.0113172);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bd40() {
   return (neuron0x1f85830()*0.0488429);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bd80() {
   return (neuron0x1f85b70()*0.0216734);
}

double NNfunction_ns_chi02_cL::synapse0x1f9bdc0() {
   return (neuron0x1f85eb0()*0.0280908);
}

double NNfunction_ns_chi02_cL::synapse0x1f9be00() {
   return (neuron0x1f861f0()*-0.0461479);
}

double NNfunction_ns_chi02_cL::synapse0x1f9be40() {
   return (neuron0x1f86530()*-0.0173105);
}

double NNfunction_ns_chi02_cL::synapse0x1f9be80() {
   return (neuron0x1f86870()*0.127817);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c200() {
   return (neuron0x1f81c20()*-0.157071);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c240() {
   return (neuron0x1f81ed0()*-0.0142496);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c280() {
   return (neuron0x1f82210()*-2.00736);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c2c0() {
   return (neuron0x1f82550()*-0.115051);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c300() {
   return (neuron0x1f82890()*-0.00095509);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c340() {
   return (neuron0x1f82bd0()*0.00387892);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c380() {
   return (neuron0x1f82f10()*0.0598471);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c3c0() {
   return (neuron0x1f83250()*0.0730148);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c400() {
   return (neuron0x1f83590()*0.0180222);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c440() {
   return (neuron0x1f838d0()*0.00661323);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c480() {
   return (neuron0x1f83c10()*0.0866881);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c4c0() {
   return (neuron0x1f83f50()*-0.00737856);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c500() {
   return (neuron0x1f84290()*2.3253);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c540() {
   return (neuron0x1f845d0()*-0.015742);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c580() {
   return (neuron0x1f84910()*-0.0149666);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c5c0() {
   return (neuron0x1f84c50()*-0.0149811);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c050() {
   return (neuron0x1f84f90()*-0.1032);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c090() {
   return (neuron0x1f854f0()*-0.00778768);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c710() {
   return (neuron0x1f85830()*-0.00685489);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c750() {
   return (neuron0x1f85b70()*0.0364546);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c790() {
   return (neuron0x1f85eb0()*0.0135983);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c7d0() {
   return (neuron0x1f861f0()*0.0651802);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c810() {
   return (neuron0x1f86530()*-0.0589885);
}

double NNfunction_ns_chi02_cL::synapse0x1f9c850() {
   return (neuron0x1f86870()*1.97115);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cbd0() {
   return (neuron0x1f81c20()*-0.0819128);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cc10() {
   return (neuron0x1f81ed0()*-0.0266827);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cc50() {
   return (neuron0x1f82210()*-0.168008);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cc90() {
   return (neuron0x1f82550()*-0.0649865);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ccd0() {
   return (neuron0x1f82890()*0.0582152);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cd10() {
   return (neuron0x1f82bd0()*0.552443);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cd50() {
   return (neuron0x1f82f10()*-0.242229);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cd90() {
   return (neuron0x1f83250()*0.243084);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cdd0() {
   return (neuron0x1f83590()*0.268955);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ce10() {
   return (neuron0x1f838d0()*0.856049);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ce50() {
   return (neuron0x1f83c10()*0.486531);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ce90() {
   return (neuron0x1f83f50()*-0.42483);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ced0() {
   return (neuron0x1f84290()*-0.797072);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cf10() {
   return (neuron0x1f845d0()*-0.158354);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cf50() {
   return (neuron0x1f84910()*-0.120623);
}

double NNfunction_ns_chi02_cL::synapse0x1f9cf90() {
   return (neuron0x1f84c50()*0.7586);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ca20() {
   return (neuron0x1f84f90()*-0.0570399);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ca60() {
   return (neuron0x1f854f0()*-0.19005);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d0e0() {
   return (neuron0x1f85830()*-0.1948);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d120() {
   return (neuron0x1f85b70()*-0.654551);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d160() {
   return (neuron0x1f85eb0()*-0.276317);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d1a0() {
   return (neuron0x1f861f0()*-0.236678);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d1e0() {
   return (neuron0x1f86530()*0.362954);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d220() {
   return (neuron0x1f86870()*0.580056);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d5a0() {
   return (neuron0x1f81c20()*-0.220358);
}

double NNfunction_ns_chi02_cL::synapse0x1f91b70() {
   return (neuron0x1f81ed0()*-0.336127);
}

double NNfunction_ns_chi02_cL::synapse0x1f91bb0() {
   return (neuron0x1f82210()*-0.53747);
}

double NNfunction_ns_chi02_cL::synapse0x1f91bf0() {
   return (neuron0x1f82550()*0.528756);
}

double NNfunction_ns_chi02_cL::synapse0x1f91e40() {
   return (neuron0x1f82890()*-0.104297);
}

double NNfunction_ns_chi02_cL::synapse0x1f91e80() {
   return (neuron0x1f82bd0()*0.481145);
}

double NNfunction_ns_chi02_cL::synapse0x1f91ec0() {
   return (neuron0x1f82f10()*0.210918);
}

double NNfunction_ns_chi02_cL::synapse0x1f92110() {
   return (neuron0x1f83250()*0.461252);
}

double NNfunction_ns_chi02_cL::synapse0x1f92150() {
   return (neuron0x1f83590()*-0.223819);
}

double NNfunction_ns_chi02_cL::synapse0x1f923a0() {
   return (neuron0x1f838d0()*0.2655);
}

double NNfunction_ns_chi02_cL::synapse0x1f923e0() {
   return (neuron0x1f83c10()*-0.0382558);
}

double NNfunction_ns_chi02_cL::synapse0x1f92420() {
   return (neuron0x1f83f50()*0.276134);
}

double NNfunction_ns_chi02_cL::synapse0x1f92670() {
   return (neuron0x1f84290()*-1.4293);
}

double NNfunction_ns_chi02_cL::synapse0x1f926b0() {
   return (neuron0x1f845d0()*-0.232811);
}

double NNfunction_ns_chi02_cL::synapse0x1f92900() {
   return (neuron0x1f84910()*-0.554617);
}

double NNfunction_ns_chi02_cL::synapse0x1f92940() {
   return (neuron0x1f84c50()*-0.289543);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d3f0() {
   return (neuron0x1f84f90()*-0.0833325);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d430() {
   return (neuron0x1f854f0()*0.407353);
}

double NNfunction_ns_chi02_cL::synapse0x1f92a90() {
   return (neuron0x1f85830()*0.156609);
}

double NNfunction_ns_chi02_cL::synapse0x1f92fa0() {
   return (neuron0x1f85b70()*0.439495);
}

double NNfunction_ns_chi02_cL::synapse0x1f92fe0() {
   return (neuron0x1f85eb0()*0.0511398);
}

double NNfunction_ns_chi02_cL::synapse0x1f93020() {
   return (neuron0x1f861f0()*-0.000977521);
}

double NNfunction_ns_chi02_cL::synapse0x1f93270() {
   return (neuron0x1f86530()*0.029214);
}

double NNfunction_ns_chi02_cL::synapse0x1f932b0() {
   return (neuron0x1f86870()*0.237023);
}

double NNfunction_ns_chi02_cL::synapse0x1f92b60() {
   return (neuron0x1f81c20()*0.0457545);
}

double NNfunction_ns_chi02_cL::synapse0x1f92ba0() {
   return (neuron0x1f81ed0()*-0.156176);
}

double NNfunction_ns_chi02_cL::synapse0x1f92be0() {
   return (neuron0x1f82210()*-1.46126);
}

double NNfunction_ns_chi02_cL::synapse0x1f92c20() {
   return (neuron0x1f82550()*0.00458892);
}

double NNfunction_ns_chi02_cL::synapse0x1f935a0() {
   return (neuron0x1f82890()*-0.00972757);
}

double NNfunction_ns_chi02_cL::synapse0x1f9f8f0() {
   return (neuron0x1f82bd0()*0.0219381);
}

double NNfunction_ns_chi02_cL::synapse0x1f9f930() {
   return (neuron0x1f82f10()*0.0213027);
}

double NNfunction_ns_chi02_cL::synapse0x1f9f970() {
   return (neuron0x1f83250()*0.00984992);
}

double NNfunction_ns_chi02_cL::synapse0x1f9f9b0() {
   return (neuron0x1f83590()*0.00131155);
}

double NNfunction_ns_chi02_cL::synapse0x1f9f9f0() {
   return (neuron0x1f838d0()*-0.0016133);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fa30() {
   return (neuron0x1f83c10()*-0.0563781);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fa70() {
   return (neuron0x1f83f50()*-0.047089);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fab0() {
   return (neuron0x1f84290()*-0.683764);
}

double NNfunction_ns_chi02_cL::synapse0x1f9faf0() {
   return (neuron0x1f845d0()*-0.0638603);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fb30() {
   return (neuron0x1f84910()*-0.0588281);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fb70() {
   return (neuron0x1f84c50()*-0.0308204);
}

double NNfunction_ns_chi02_cL::synapse0x1f93480() {
   return (neuron0x1f84f90()*-0.00772465);
}

double NNfunction_ns_chi02_cL::synapse0x1f934c0() {
   return (neuron0x1f854f0()*-0.0410509);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fcc0() {
   return (neuron0x1f85830()*-0.0567773);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fd00() {
   return (neuron0x1f85b70()*0.0268964);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fd40() {
   return (neuron0x1f85eb0()*-0.0193937);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fd80() {
   return (neuron0x1f861f0()*0.0476604);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fdc0() {
   return (neuron0x1f86530()*-0.00327839);
}

double NNfunction_ns_chi02_cL::synapse0x1f9fe00() {
   return (neuron0x1f86870()*0.0145306);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0180() {
   return (neuron0x1f81c20()*0.00134061);
}

double NNfunction_ns_chi02_cL::synapse0x1fa01c0() {
   return (neuron0x1f81ed0()*-0.030215);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0200() {
   return (neuron0x1f82210()*0.111006);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0240() {
   return (neuron0x1f82550()*-2.95366);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0280() {
   return (neuron0x1f82890()*0.017046);
}

double NNfunction_ns_chi02_cL::synapse0x1fa02c0() {
   return (neuron0x1f82bd0()*-0.00681621);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0300() {
   return (neuron0x1f82f10()*0.0187527);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0340() {
   return (neuron0x1f83250()*-0.0157915);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0380() {
   return (neuron0x1f83590()*0.0111424);
}

double NNfunction_ns_chi02_cL::synapse0x1fa03c0() {
   return (neuron0x1f838d0()*0.0126716);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0400() {
   return (neuron0x1f83c10()*-0.0121721);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0440() {
   return (neuron0x1f83f50()*-0.00354417);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0480() {
   return (neuron0x1f84290()*0.331225);
}

double NNfunction_ns_chi02_cL::synapse0x1fa04c0() {
   return (neuron0x1f845d0()*0.0448648);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0500() {
   return (neuron0x1f84910()*0.00422337);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0540() {
   return (neuron0x1f84c50()*-0.0340515);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ffd0() {
   return (neuron0x1f84f90()*0.0382652);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0010() {
   return (neuron0x1f854f0()*0.00490929);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0690() {
   return (neuron0x1f85830()*0.00400155);
}

double NNfunction_ns_chi02_cL::synapse0x1fa06d0() {
   return (neuron0x1f85b70()*0.00115366);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0710() {
   return (neuron0x1f85eb0()*-0.00379514);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0750() {
   return (neuron0x1f861f0()*0.0293264);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0790() {
   return (neuron0x1f86530()*0.0092598);
}

double NNfunction_ns_chi02_cL::synapse0x1fa07d0() {
   return (neuron0x1f86870()*0.00174032);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0b50() {
   return (neuron0x1f81c20()*0.574715);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0b90() {
   return (neuron0x1f81ed0()*0.217548);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0bd0() {
   return (neuron0x1f82210()*0.835113);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0c10() {
   return (neuron0x1f82550()*-0.604092);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0c50() {
   return (neuron0x1f82890()*0.56182);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0c90() {
   return (neuron0x1f82bd0()*0.294509);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0cd0() {
   return (neuron0x1f82f10()*0.239157);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0d10() {
   return (neuron0x1f83250()*-0.295973);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0d50() {
   return (neuron0x1f83590()*-0.625149);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0d90() {
   return (neuron0x1f838d0()*0.0396874);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0dd0() {
   return (neuron0x1f83c10()*0.461761);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0e10() {
   return (neuron0x1f83f50()*-0.234844);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0e50() {
   return (neuron0x1f84290()*-0.419284);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0e90() {
   return (neuron0x1f845d0()*0.50108);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0ed0() {
   return (neuron0x1f84910()*0.370344);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0f10() {
   return (neuron0x1f84c50()*-0.465183);
}

double NNfunction_ns_chi02_cL::synapse0x1fa09a0() {
   return (neuron0x1f84f90()*0.294068);
}

double NNfunction_ns_chi02_cL::synapse0x1fa09e0() {
   return (neuron0x1f854f0()*-0.296297);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1060() {
   return (neuron0x1f85830()*0.410633);
}

double NNfunction_ns_chi02_cL::synapse0x1fa10a0() {
   return (neuron0x1f85b70()*-0.429661);
}

double NNfunction_ns_chi02_cL::synapse0x1fa10e0() {
   return (neuron0x1f85eb0()*0.276042);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1120() {
   return (neuron0x1f861f0()*-0.168917);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1160() {
   return (neuron0x1f86530()*0.135335);
}

double NNfunction_ns_chi02_cL::synapse0x1fa11a0() {
   return (neuron0x1f86870()*-0.577724);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1520() {
   return (neuron0x1f81c20()*0.00905159);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1560() {
   return (neuron0x1f81ed0()*-6.70906);
}

double NNfunction_ns_chi02_cL::synapse0x1fa15a0() {
   return (neuron0x1f82210()*3.64354);
}

double NNfunction_ns_chi02_cL::synapse0x1fa15e0() {
   return (neuron0x1f82550()*-0.0268954);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1620() {
   return (neuron0x1f82890()*-0.00996676);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1660() {
   return (neuron0x1f82bd0()*0.0037865);
}

double NNfunction_ns_chi02_cL::synapse0x1fa16a0() {
   return (neuron0x1f82f10()*0.00278209);
}

double NNfunction_ns_chi02_cL::synapse0x1fa16e0() {
   return (neuron0x1f83250()*0.021866);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1720() {
   return (neuron0x1f83590()*0.0022212);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1760() {
   return (neuron0x1f838d0()*0.0248596);
}

double NNfunction_ns_chi02_cL::synapse0x1fa17a0() {
   return (neuron0x1f83c10()*0.0391295);
}

double NNfunction_ns_chi02_cL::synapse0x1fa17e0() {
   return (neuron0x1f83f50()*0.00181689);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1820() {
   return (neuron0x1f84290()*-0.0428526);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1860() {
   return (neuron0x1f845d0()*-0.00201765);
}

double NNfunction_ns_chi02_cL::synapse0x1fa18a0() {
   return (neuron0x1f84910()*-0.00305785);
}

double NNfunction_ns_chi02_cL::synapse0x1fa18e0() {
   return (neuron0x1f84c50()*0.000882255);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1370() {
   return (neuron0x1f84f90()*-0.0137515);
}

double NNfunction_ns_chi02_cL::synapse0x1fa13b0() {
   return (neuron0x1f854f0()*-0.00170747);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1a30() {
   return (neuron0x1f85830()*-0.0122717);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1a70() {
   return (neuron0x1f85b70()*-0.00257625);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1ab0() {
   return (neuron0x1f85eb0()*-0.0114599);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1af0() {
   return (neuron0x1f861f0()*-0.0069312);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1b30() {
   return (neuron0x1f86530()*0.014923);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1b70() {
   return (neuron0x1f86870()*-0.0285671);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1ef0() {
   return (neuron0x1f81c20()*-0.0166003);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1f30() {
   return (neuron0x1f81ed0()*-18.0257);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1f70() {
   return (neuron0x1f82210()*0.622784);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1fb0() {
   return (neuron0x1f82550()*-0.0597969);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1ff0() {
   return (neuron0x1f82890()*0.0541295);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2030() {
   return (neuron0x1f82bd0()*0.0272005);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2070() {
   return (neuron0x1f82f10()*-0.0216127);
}

double NNfunction_ns_chi02_cL::synapse0x1fa20b0() {
   return (neuron0x1f83250()*-0.00381075);
}

double NNfunction_ns_chi02_cL::synapse0x1fa20f0() {
   return (neuron0x1f83590()*-0.0279616);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2130() {
   return (neuron0x1f838d0()*-0.0597477);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2170() {
   return (neuron0x1f83c10()*-0.0324061);
}

double NNfunction_ns_chi02_cL::synapse0x1fa21b0() {
   return (neuron0x1f83f50()*-0.0331909);
}

double NNfunction_ns_chi02_cL::synapse0x1fa21f0() {
   return (neuron0x1f84290()*0.276667);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2230() {
   return (neuron0x1f845d0()*0.122221);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2270() {
   return (neuron0x1f84910()*-0.0924363);
}

double NNfunction_ns_chi02_cL::synapse0x1fa22b0() {
   return (neuron0x1f84c50()*0.00353921);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1d40() {
   return (neuron0x1f84f90()*-0.0151434);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1d80() {
   return (neuron0x1f854f0()*0.0313922);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2400() {
   return (neuron0x1f85830()*0.0349214);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2440() {
   return (neuron0x1f85b70()*-0.0350955);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2480() {
   return (neuron0x1f85eb0()*-0.0529268);
}

double NNfunction_ns_chi02_cL::synapse0x1fa24c0() {
   return (neuron0x1f861f0()*-0.0393439);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2500() {
   return (neuron0x1f86530()*0.0249458);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2540() {
   return (neuron0x1f86870()*0.0616591);
}

double NNfunction_ns_chi02_cL::synapse0x1fa28c0() {
   return (neuron0x1f81c20()*0.0266605);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2900() {
   return (neuron0x1f81ed0()*16.29);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2940() {
   return (neuron0x1f82210()*-0.839849);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2980() {
   return (neuron0x1f82550()*0.0623697);
}

double NNfunction_ns_chi02_cL::synapse0x1fa29c0() {
   return (neuron0x1f82890()*-0.0409807);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2a00() {
   return (neuron0x1f82bd0()*-0.0330807);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2a40() {
   return (neuron0x1f82f10()*0.0162213);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2a80() {
   return (neuron0x1f83250()*0.0225354);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2ac0() {
   return (neuron0x1f83590()*0.0249521);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2b00() {
   return (neuron0x1f838d0()*0.0456261);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2b40() {
   return (neuron0x1f83c10()*0.032369);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2b80() {
   return (neuron0x1f83f50()*0.023909);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2bc0() {
   return (neuron0x1f84290()*-0.327582);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2c00() {
   return (neuron0x1f845d0()*-0.111163);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2c40() {
   return (neuron0x1f84910()*0.0694126);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2c80() {
   return (neuron0x1f84c50()*-0.00484326);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2710() {
   return (neuron0x1f84f90()*0.0307529);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2750() {
   return (neuron0x1f854f0()*-0.0409224);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2dd0() {
   return (neuron0x1f85830()*-0.0223036);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2e10() {
   return (neuron0x1f85b70()*0.0329446);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2e50() {
   return (neuron0x1f85eb0()*0.0485332);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2e90() {
   return (neuron0x1f861f0()*0.0392617);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2ed0() {
   return (neuron0x1f86530()*-0.0159373);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2f10() {
   return (neuron0x1f86870()*-0.0713167);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3290() {
   return (neuron0x1f81c20()*0.0693501);
}

double NNfunction_ns_chi02_cL::synapse0x1fa32d0() {
   return (neuron0x1f81ed0()*-0.630696);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3310() {
   return (neuron0x1f82210()*-3.64484);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3350() {
   return (neuron0x1f82550()*-0.0391889);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3390() {
   return (neuron0x1f82890()*0.0261114);
}

double NNfunction_ns_chi02_cL::synapse0x1fa33d0() {
   return (neuron0x1f82bd0()*0.00418452);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3410() {
   return (neuron0x1f82f10()*-0.010064);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3450() {
   return (neuron0x1f83250()*-0.036873);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3490() {
   return (neuron0x1f83590()*-0.00161829);
}

double NNfunction_ns_chi02_cL::synapse0x1fa34d0() {
   return (neuron0x1f838d0()*-0.0204449);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3510() {
   return (neuron0x1f83c10()*-0.0295505);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3550() {
   return (neuron0x1f83f50()*-0.0386023);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3590() {
   return (neuron0x1f84290()*0.251443);
}

double NNfunction_ns_chi02_cL::synapse0x1fa35d0() {
   return (neuron0x1f845d0()*-0.018666);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3610() {
   return (neuron0x1f84910()*0.00922726);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3650() {
   return (neuron0x1f84c50()*-0.012306);
}

double NNfunction_ns_chi02_cL::synapse0x1fa30e0() {
   return (neuron0x1f84f90()*-0.0206335);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3120() {
   return (neuron0x1f854f0()*-0.0030789);
}

double NNfunction_ns_chi02_cL::synapse0x1fa37a0() {
   return (neuron0x1f85830()*0.000170547);
}

double NNfunction_ns_chi02_cL::synapse0x1fa37e0() {
   return (neuron0x1f85b70()*0.0110733);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3820() {
   return (neuron0x1f85eb0()*0.00910185);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3860() {
   return (neuron0x1f861f0()*-0.0298088);
}

double NNfunction_ns_chi02_cL::synapse0x1fa38a0() {
   return (neuron0x1f86530()*0.0246104);
}

double NNfunction_ns_chi02_cL::synapse0x1fa38e0() {
   return (neuron0x1f86870()*-5.47376);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3c60() {
   return (neuron0x1f81c20()*-0.234652);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3ca0() {
   return (neuron0x1f81ed0()*-0.0376502);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3ce0() {
   return (neuron0x1f82210()*0.645733);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3d20() {
   return (neuron0x1f82550()*0.0302861);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3d60() {
   return (neuron0x1f82890()*-0.0072807);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3da0() {
   return (neuron0x1f82bd0()*-0.0222034);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3de0() {
   return (neuron0x1f82f10()*-0.0625656);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3e20() {
   return (neuron0x1f83250()*0.0828068);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3e60() {
   return (neuron0x1f83590()*-0.0725828);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3ea0() {
   return (neuron0x1f838d0()*-0.0633176);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3ee0() {
   return (neuron0x1f83c10()*0.123312);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3f20() {
   return (neuron0x1f83f50()*0.186505);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3f60() {
   return (neuron0x1f84290()*-0.636637);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3fa0() {
   return (neuron0x1f845d0()*-0.0222873);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3fe0() {
   return (neuron0x1f84910()*0.0865168);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4020() {
   return (neuron0x1f84c50()*0.0128527);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3ab0() {
   return (neuron0x1f84f90()*-0.091104);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3af0() {
   return (neuron0x1f854f0()*0.259969);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4170() {
   return (neuron0x1f85830()*0.155632);
}

double NNfunction_ns_chi02_cL::synapse0x1fa41b0() {
   return (neuron0x1f85b70()*-0.0634133);
}

double NNfunction_ns_chi02_cL::synapse0x1fa41f0() {
   return (neuron0x1f85eb0()*0.0205744);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4230() {
   return (neuron0x1f861f0()*-0.0843138);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4270() {
   return (neuron0x1f86530()*0.00901837);
}

double NNfunction_ns_chi02_cL::synapse0x1fa42b0() {
   return (neuron0x1f86870()*0.0400715);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cd60() {
   return (neuron0x1f81c20()*-0.00348628);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cda0() {
   return (neuron0x1f81ed0()*0.103853);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cde0() {
   return (neuron0x1f82210()*-2.13229);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ce20() {
   return (neuron0x1f82550()*-0.0360855);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ce60() {
   return (neuron0x1f82890()*-0.0647699);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cea0() {
   return (neuron0x1f82bd0()*-0.000692998);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cee0() {
   return (neuron0x1f82f10()*0.0164277);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cf20() {
   return (neuron0x1f83250()*0.0219855);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4a40() {
   return (neuron0x1f83590()*0.0103736);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4a80() {
   return (neuron0x1f838d0()*0.0051506);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4ac0() {
   return (neuron0x1f83c10()*-0.00175215);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4b00() {
   return (neuron0x1f83f50()*0.00589812);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4b40() {
   return (neuron0x1f84290()*0.255552);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4b80() {
   return (neuron0x1f845d0()*2.19052e-05);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4bc0() {
   return (neuron0x1f84910()*0.0331692);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4c00() {
   return (neuron0x1f84c50()*-0.0175643);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4480() {
   return (neuron0x1f84f90()*0.0109435);
}

double NNfunction_ns_chi02_cL::synapse0x1fa44c0() {
   return (neuron0x1f854f0()*0.0143949);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4d50() {
   return (neuron0x1f85830()*-0.0032434);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4d90() {
   return (neuron0x1f85b70()*-0.0109547);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4dd0() {
   return (neuron0x1f85eb0()*-0.0030025);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4e10() {
   return (neuron0x1f861f0()*0.0472063);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4e50() {
   return (neuron0x1f86530()*-0.0192331);
}

double NNfunction_ns_chi02_cL::synapse0x1fa4e90() {
   return (neuron0x1f86870()*-0.0665066);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5210() {
   return (neuron0x1f81c20()*-0.042633);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5250() {
   return (neuron0x1f81ed0()*-0.0381665);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5290() {
   return (neuron0x1f82210()*0.0252553);
}

double NNfunction_ns_chi02_cL::synapse0x1fa52d0() {
   return (neuron0x1f82550()*0.0137208);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5310() {
   return (neuron0x1f82890()*-0.00228484);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5350() {
   return (neuron0x1f82bd0()*-0.0107634);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5390() {
   return (neuron0x1f82f10()*-0.0142436);
}

double NNfunction_ns_chi02_cL::synapse0x1fa53d0() {
   return (neuron0x1f83250()*-0.00343822);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5410() {
   return (neuron0x1f83590()*0.00933259);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5450() {
   return (neuron0x1f838d0()*0.00811475);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5490() {
   return (neuron0x1f83c10()*-0.00185845);
}

double NNfunction_ns_chi02_cL::synapse0x1fa54d0() {
   return (neuron0x1f83f50()*0.00169347);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5510() {
   return (neuron0x1f84290()*0.00963946);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5550() {
   return (neuron0x1f845d0()*0.0024145);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5590() {
   return (neuron0x1f84910()*-0.00463003);
}

double NNfunction_ns_chi02_cL::synapse0x1fa55d0() {
   return (neuron0x1f84c50()*0.0115645);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5060() {
   return (neuron0x1f84f90()*0.000938516);
}

double NNfunction_ns_chi02_cL::synapse0x1fa50a0() {
   return (neuron0x1f854f0()*-0.00219432);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5720() {
   return (neuron0x1f85830()*0.000643094);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5760() {
   return (neuron0x1f85b70()*-0.00439256);
}

double NNfunction_ns_chi02_cL::synapse0x1fa57a0() {
   return (neuron0x1f85eb0()*0.0102364);
}

double NNfunction_ns_chi02_cL::synapse0x1fa57e0() {
   return (neuron0x1f861f0()*0.0348494);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5820() {
   return (neuron0x1f86530()*-0.00855229);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5860() {
   return (neuron0x1f86870()*4.92577);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5be0() {
   return (neuron0x1f81c20()*0.0384037);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5c20() {
   return (neuron0x1f81ed0()*7.56785);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5c60() {
   return (neuron0x1f82210()*4.18133);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5ca0() {
   return (neuron0x1f82550()*-0.00204733);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5ce0() {
   return (neuron0x1f82890()*0.0116845);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5d20() {
   return (neuron0x1f82bd0()*-0.00664341);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5d60() {
   return (neuron0x1f82f10()*-0.0206883);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5da0() {
   return (neuron0x1f83250()*-0.000372091);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5de0() {
   return (neuron0x1f83590()*-0.00544897);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5e20() {
   return (neuron0x1f838d0()*-0.0178818);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5e60() {
   return (neuron0x1f83c10()*0.00190374);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5ea0() {
   return (neuron0x1f83f50()*0.0266804);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5ee0() {
   return (neuron0x1f84290()*0.0898499);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5f20() {
   return (neuron0x1f845d0()*-0.0133084);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5f60() {
   return (neuron0x1f84910()*-0.0266617);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5fa0() {
   return (neuron0x1f84c50()*-0.0180469);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5a30() {
   return (neuron0x1f84f90()*-0.0344614);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5a70() {
   return (neuron0x1f854f0()*0.000952789);
}

double NNfunction_ns_chi02_cL::synapse0x1f965a0() {
   return (neuron0x1f85830()*-0.0294021);
}

double NNfunction_ns_chi02_cL::synapse0x1f965e0() {
   return (neuron0x1f85b70()*0.0152682);
}

double NNfunction_ns_chi02_cL::synapse0x1f96620() {
   return (neuron0x1f85eb0()*-0.0308718);
}

double NNfunction_ns_chi02_cL::synapse0x1f96660() {
   return (neuron0x1f861f0()*-0.00831549);
}

double NNfunction_ns_chi02_cL::synapse0x1f966a0() {
   return (neuron0x1f86530()*-0.0097164);
}

double NNfunction_ns_chi02_cL::synapse0x1f966e0() {
   return (neuron0x1f86870()*-0.0512541);
}

double NNfunction_ns_chi02_cL::synapse0x1f96a60() {
   return (neuron0x1f81c20()*-0.398661);
}

double NNfunction_ns_chi02_cL::synapse0x1f96aa0() {
   return (neuron0x1f81ed0()*-0.121935);
}

double NNfunction_ns_chi02_cL::synapse0x1f96ae0() {
   return (neuron0x1f82210()*0.24714);
}

double NNfunction_ns_chi02_cL::synapse0x1f96b20() {
   return (neuron0x1f82550()*0.114169);
}

double NNfunction_ns_chi02_cL::synapse0x1f96b60() {
   return (neuron0x1f82890()*-0.0476586);
}

double NNfunction_ns_chi02_cL::synapse0x1f96ba0() {
   return (neuron0x1f82bd0()*0.0766719);
}

double NNfunction_ns_chi02_cL::synapse0x1f96be0() {
   return (neuron0x1f82f10()*0.039219);
}

double NNfunction_ns_chi02_cL::synapse0x1f96c20() {
   return (neuron0x1f83250()*0.212328);
}

double NNfunction_ns_chi02_cL::synapse0x1f96c60() {
   return (neuron0x1f83590()*-0.121445);
}

double NNfunction_ns_chi02_cL::synapse0x1f96ca0() {
   return (neuron0x1f838d0()*0.817361);
}

double NNfunction_ns_chi02_cL::synapse0x1f96ce0() {
   return (neuron0x1f83c10()*-0.605678);
}

double NNfunction_ns_chi02_cL::synapse0x1f96d20() {
   return (neuron0x1f83f50()*-0.0994973);
}

double NNfunction_ns_chi02_cL::synapse0x1f96d60() {
   return (neuron0x1f84290()*-0.491049);
}

double NNfunction_ns_chi02_cL::synapse0x1f96da0() {
   return (neuron0x1f845d0()*-0.274888);
}

double NNfunction_ns_chi02_cL::synapse0x1f96de0() {
   return (neuron0x1f84910()*0.107506);
}

double NNfunction_ns_chi02_cL::synapse0x1f96e20() {
   return (neuron0x1f84c50()*-0.243441);
}

double NNfunction_ns_chi02_cL::synapse0x1f968b0() {
   return (neuron0x1f84f90()*-0.230017);
}

double NNfunction_ns_chi02_cL::synapse0x1f968f0() {
   return (neuron0x1f854f0()*-0.0110165);
}

double NNfunction_ns_chi02_cL::synapse0x1f96f70() {
   return (neuron0x1f85830()*-0.11471);
}

double NNfunction_ns_chi02_cL::synapse0x1f96fb0() {
   return (neuron0x1f85b70()*0.0375482);
}

double NNfunction_ns_chi02_cL::synapse0x1f96ff0() {
   return (neuron0x1f85eb0()*0.69675);
}

double NNfunction_ns_chi02_cL::synapse0x1f97030() {
   return (neuron0x1f861f0()*0.453064);
}

double NNfunction_ns_chi02_cL::synapse0x1f97070() {
   return (neuron0x1f86530()*0.119152);
}

double NNfunction_ns_chi02_cL::synapse0x1f970b0() {
   return (neuron0x1f86870()*0.550024);
}

double NNfunction_ns_chi02_cL::synapse0x1f97430() {
   return (neuron0x1f81c20()*0.443642);
}

double NNfunction_ns_chi02_cL::synapse0x1f97470() {
   return (neuron0x1f81ed0()*-0.197729);
}

double NNfunction_ns_chi02_cL::synapse0x1f974b0() {
   return (neuron0x1f82210()*-0.272049);
}

double NNfunction_ns_chi02_cL::synapse0x1f974f0() {
   return (neuron0x1f82550()*-1.32662);
}

double NNfunction_ns_chi02_cL::synapse0x1f97530() {
   return (neuron0x1f82890()*-0.26863);
}

double NNfunction_ns_chi02_cL::synapse0x1f97570() {
   return (neuron0x1f82bd0()*0.29665);
}

double NNfunction_ns_chi02_cL::synapse0x1f975b0() {
   return (neuron0x1f82f10()*-0.149087);
}

double NNfunction_ns_chi02_cL::synapse0x1f975f0() {
   return (neuron0x1f83250()*0.204156);
}

double NNfunction_ns_chi02_cL::synapse0x1f97630() {
   return (neuron0x1f83590()*0.0979669);
}

double NNfunction_ns_chi02_cL::synapse0x1f97670() {
   return (neuron0x1f838d0()*0.503746);
}

double NNfunction_ns_chi02_cL::synapse0x1f976b0() {
   return (neuron0x1f83c10()*0.0781969);
}

double NNfunction_ns_chi02_cL::synapse0x1f976f0() {
   return (neuron0x1f83f50()*0.286485);
}

double NNfunction_ns_chi02_cL::synapse0x1f97730() {
   return (neuron0x1f84290()*-1.09884);
}

double NNfunction_ns_chi02_cL::synapse0x1f97770() {
   return (neuron0x1f845d0()*-0.265168);
}

double NNfunction_ns_chi02_cL::synapse0x1f977b0() {
   return (neuron0x1f84910()*-0.0907475);
}

double NNfunction_ns_chi02_cL::synapse0x1f977f0() {
   return (neuron0x1f84c50()*-0.0822862);
}

double NNfunction_ns_chi02_cL::synapse0x1f97280() {
   return (neuron0x1f84f90()*-0.443507);
}

double NNfunction_ns_chi02_cL::synapse0x1f972c0() {
   return (neuron0x1f854f0()*0.173518);
}

double NNfunction_ns_chi02_cL::synapse0x1f97940() {
   return (neuron0x1f85830()*0.426038);
}

double NNfunction_ns_chi02_cL::synapse0x1f97980() {
   return (neuron0x1f85b70()*-0.388507);
}

double NNfunction_ns_chi02_cL::synapse0x1f979c0() {
   return (neuron0x1f85eb0()*0.665989);
}

double NNfunction_ns_chi02_cL::synapse0x1f97a00() {
   return (neuron0x1f861f0()*0.542114);
}

double NNfunction_ns_chi02_cL::synapse0x1f97a40() {
   return (neuron0x1f86530()*-0.197394);
}

double NNfunction_ns_chi02_cL::synapse0x1f97a80() {
   return (neuron0x1f86870()*-0.874434);
}

double NNfunction_ns_chi02_cL::synapse0x1f97e00() {
   return (neuron0x1f81c20()*-0.00333808);
}

double NNfunction_ns_chi02_cL::synapse0x1f97e40() {
   return (neuron0x1f81ed0()*-0.0760317);
}

double NNfunction_ns_chi02_cL::synapse0x1f97e80() {
   return (neuron0x1f82210()*-0.194513);
}

double NNfunction_ns_chi02_cL::synapse0x1f97ec0() {
   return (neuron0x1f82550()*0.0180269);
}

double NNfunction_ns_chi02_cL::synapse0x1f97f00() {
   return (neuron0x1f82890()*0.0102692);
}

double NNfunction_ns_chi02_cL::synapse0x1f97f40() {
   return (neuron0x1f82bd0()*-0.0143078);
}

double NNfunction_ns_chi02_cL::synapse0x1f97f80() {
   return (neuron0x1f82f10()*-0.000862708);
}

double NNfunction_ns_chi02_cL::synapse0x1f97fc0() {
   return (neuron0x1f83250()*0.0292902);
}

double NNfunction_ns_chi02_cL::synapse0x1f98000() {
   return (neuron0x1f83590()*0.00279292);
}

double NNfunction_ns_chi02_cL::synapse0x1f98040() {
   return (neuron0x1f838d0()*-0.00867189);
}

double NNfunction_ns_chi02_cL::synapse0x1f98080() {
   return (neuron0x1f83c10()*0.00438106);
}

double NNfunction_ns_chi02_cL::synapse0x1f980c0() {
   return (neuron0x1f83f50()*0.0119058);
}

double NNfunction_ns_chi02_cL::synapse0x1f98100() {
   return (neuron0x1f84290()*0.932998);
}

double NNfunction_ns_chi02_cL::synapse0x1f98140() {
   return (neuron0x1f845d0()*0.00458781);
}

double NNfunction_ns_chi02_cL::synapse0x1f98180() {
   return (neuron0x1f84910()*-0.00351626);
}

double NNfunction_ns_chi02_cL::synapse0x1f981c0() {
   return (neuron0x1f84c50()*-0.0124636);
}

double NNfunction_ns_chi02_cL::synapse0x1f97c50() {
   return (neuron0x1f84f90()*0.0112075);
}

double NNfunction_ns_chi02_cL::synapse0x1f97c90() {
   return (neuron0x1f854f0()*0.0201872);
}

double NNfunction_ns_chi02_cL::synapse0x1f98310() {
   return (neuron0x1f85830()*0.00828503);
}

double NNfunction_ns_chi02_cL::synapse0x1f98350() {
   return (neuron0x1f85b70()*0.00228469);
}

double NNfunction_ns_chi02_cL::synapse0x1f98390() {
   return (neuron0x1f85eb0()*0.0043063);
}

double NNfunction_ns_chi02_cL::synapse0x1f983d0() {
   return (neuron0x1f861f0()*0.0172313);
}

double NNfunction_ns_chi02_cL::synapse0x1f98410() {
   return (neuron0x1f86530()*-0.00755592);
}

double NNfunction_ns_chi02_cL::synapse0x1f98450() {
   return (neuron0x1f86870()*-2.10977);
}

double NNfunction_ns_chi02_cL::synapse0x1faa320() {
   return (neuron0x1f81c20()*0.0526235);
}

double NNfunction_ns_chi02_cL::synapse0x1faa360() {
   return (neuron0x1f81ed0()*-0.00533596);
}

double NNfunction_ns_chi02_cL::synapse0x1faa3a0() {
   return (neuron0x1f82210()*-0.0356635);
}

double NNfunction_ns_chi02_cL::synapse0x1faa3e0() {
   return (neuron0x1f82550()*-0.00673003);
}

double NNfunction_ns_chi02_cL::synapse0x1faa420() {
   return (neuron0x1f82890()*0.00574889);
}

double NNfunction_ns_chi02_cL::synapse0x1faa460() {
   return (neuron0x1f82bd0()*0.0028211);
}

double NNfunction_ns_chi02_cL::synapse0x1faa4a0() {
   return (neuron0x1f82f10()*-0.0132989);
}

double NNfunction_ns_chi02_cL::synapse0x1faa4e0() {
   return (neuron0x1f83250()*0.0237299);
}

double NNfunction_ns_chi02_cL::synapse0x1faa520() {
   return (neuron0x1f83590()*-0.0235389);
}

double NNfunction_ns_chi02_cL::synapse0x1faa560() {
   return (neuron0x1f838d0()*-0.00614226);
}

double NNfunction_ns_chi02_cL::synapse0x1faa5a0() {
   return (neuron0x1f83c10()*-0.0190572);
}

double NNfunction_ns_chi02_cL::synapse0x1faa5e0() {
   return (neuron0x1f83f50()*-0.00754038);
}

double NNfunction_ns_chi02_cL::synapse0x1faa620() {
   return (neuron0x1f84290()*0.142251);
}

double NNfunction_ns_chi02_cL::synapse0x1faa660() {
   return (neuron0x1f845d0()*-0.00666364);
}

double NNfunction_ns_chi02_cL::synapse0x1faa6a0() {
   return (neuron0x1f84910()*-0.0260748);
}

double NNfunction_ns_chi02_cL::synapse0x1faa6e0() {
   return (neuron0x1f84c50()*0.0053029);
}

double NNfunction_ns_chi02_cL::synapse0x1f98490() {
   return (neuron0x1f84f90()*-0.00791981);
}

double NNfunction_ns_chi02_cL::synapse0x1f984d0() {
   return (neuron0x1f854f0()*-0.00681686);
}

double NNfunction_ns_chi02_cL::synapse0x1faa830() {
   return (neuron0x1f85830()*-0.00509717);
}

double NNfunction_ns_chi02_cL::synapse0x1faa870() {
   return (neuron0x1f85b70()*-0.00782981);
}

double NNfunction_ns_chi02_cL::synapse0x1faa8b0() {
   return (neuron0x1f85eb0()*0.00302848);
}

double NNfunction_ns_chi02_cL::synapse0x1faa8f0() {
   return (neuron0x1f861f0()*-0.00563708);
}

double NNfunction_ns_chi02_cL::synapse0x1faa930() {
   return (neuron0x1f86530()*0.0122439);
}

double NNfunction_ns_chi02_cL::synapse0x1faa970() {
   return (neuron0x1f86870()*-12.4436);
}

double NNfunction_ns_chi02_cL::synapse0x1faacf0() {
   return (neuron0x1f81c20()*0.643954);
}

double NNfunction_ns_chi02_cL::synapse0x1faad30() {
   return (neuron0x1f81ed0()*0.246046);
}

double NNfunction_ns_chi02_cL::synapse0x1faad70() {
   return (neuron0x1f82210()*0.64312);
}

double NNfunction_ns_chi02_cL::synapse0x1faadb0() {
   return (neuron0x1f82550()*-1.30583);
}

double NNfunction_ns_chi02_cL::synapse0x1faadf0() {
   return (neuron0x1f82890()*0.881215);
}

double NNfunction_ns_chi02_cL::synapse0x1faae30() {
   return (neuron0x1f82bd0()*-0.302556);
}

double NNfunction_ns_chi02_cL::synapse0x1faae70() {
   return (neuron0x1f82f10()*0.211834);
}

double NNfunction_ns_chi02_cL::synapse0x1faaeb0() {
   return (neuron0x1f83250()*-0.728933);
}

double NNfunction_ns_chi02_cL::synapse0x1faaef0() {
   return (neuron0x1f83590()*-0.887095);
}

double NNfunction_ns_chi02_cL::synapse0x1faaf30() {
   return (neuron0x1f838d0()*0.156719);
}

double NNfunction_ns_chi02_cL::synapse0x1faaf70() {
   return (neuron0x1f83c10()*0.738792);
}

double NNfunction_ns_chi02_cL::synapse0x1faafb0() {
   return (neuron0x1f83f50()*-0.077405);
}

double NNfunction_ns_chi02_cL::synapse0x1faaff0() {
   return (neuron0x1f84290()*0.287818);
}

double NNfunction_ns_chi02_cL::synapse0x1fab030() {
   return (neuron0x1f845d0()*0.532436);
}

double NNfunction_ns_chi02_cL::synapse0x1fab070() {
   return (neuron0x1f84910()*0.0274746);
}

double NNfunction_ns_chi02_cL::synapse0x1fab0b0() {
   return (neuron0x1f84c50()*-0.409489);
}

double NNfunction_ns_chi02_cL::synapse0x1faab40() {
   return (neuron0x1f84f90()*0.522648);
}

double NNfunction_ns_chi02_cL::synapse0x1faab80() {
   return (neuron0x1f854f0()*-0.601874);
}

double NNfunction_ns_chi02_cL::synapse0x1fab200() {
   return (neuron0x1f85830()*0.440664);
}

double NNfunction_ns_chi02_cL::synapse0x1fab240() {
   return (neuron0x1f85b70()*-0.935437);
}

double NNfunction_ns_chi02_cL::synapse0x1fab280() {
   return (neuron0x1f85eb0()*0.300589);
}

double NNfunction_ns_chi02_cL::synapse0x1fab2c0() {
   return (neuron0x1f861f0()*0.237665);
}

double NNfunction_ns_chi02_cL::synapse0x1fab300() {
   return (neuron0x1f86530()*0.236319);
}

double NNfunction_ns_chi02_cL::synapse0x1fab340() {
   return (neuron0x1f86870()*-0.665442);
}

double NNfunction_ns_chi02_cL::synapse0x1fab6c0() {
   return (neuron0x1f81c20()*0.0486903);
}

double NNfunction_ns_chi02_cL::synapse0x1fab700() {
   return (neuron0x1f81ed0()*13.9592);
}

double NNfunction_ns_chi02_cL::synapse0x1fab740() {
   return (neuron0x1f82210()*0.00624814);
}

double NNfunction_ns_chi02_cL::synapse0x1fab780() {
   return (neuron0x1f82550()*0.0315378);
}

double NNfunction_ns_chi02_cL::synapse0x1fab7c0() {
   return (neuron0x1f82890()*-0.0403503);
}

double NNfunction_ns_chi02_cL::synapse0x1fab800() {
   return (neuron0x1f82bd0()*-0.0224557);
}

double NNfunction_ns_chi02_cL::synapse0x1fab840() {
   return (neuron0x1f82f10()*0.00272609);
}

double NNfunction_ns_chi02_cL::synapse0x1fab880() {
   return (neuron0x1f83250()*-0.0187628);
}

double NNfunction_ns_chi02_cL::synapse0x1fab8c0() {
   return (neuron0x1f83590()*0.0202517);
}

double NNfunction_ns_chi02_cL::synapse0x1fab900() {
   return (neuron0x1f838d0()*0.00212841);
}

double NNfunction_ns_chi02_cL::synapse0x1fab940() {
   return (neuron0x1f83c10()*-0.0163708);
}

double NNfunction_ns_chi02_cL::synapse0x1fab980() {
   return (neuron0x1f83f50()*-0.00116502);
}

double NNfunction_ns_chi02_cL::synapse0x1fab9c0() {
   return (neuron0x1f84290()*-0.426338);
}

double NNfunction_ns_chi02_cL::synapse0x1faba00() {
   return (neuron0x1f845d0()*-0.0152775);
}

double NNfunction_ns_chi02_cL::synapse0x1faba40() {
   return (neuron0x1f84910()*-0.0154625);
}

double NNfunction_ns_chi02_cL::synapse0x1faba80() {
   return (neuron0x1f84c50()*0.00555993);
}

double NNfunction_ns_chi02_cL::synapse0x1fab510() {
   return (neuron0x1f84f90()*-0.0134063);
}

double NNfunction_ns_chi02_cL::synapse0x1fab550() {
   return (neuron0x1f854f0()*0.00735356);
}

double NNfunction_ns_chi02_cL::synapse0x1fabbd0() {
   return (neuron0x1f85830()*-0.0262055);
}

double NNfunction_ns_chi02_cL::synapse0x1fabc10() {
   return (neuron0x1f85b70()*0.000850858);
}

double NNfunction_ns_chi02_cL::synapse0x1fabc50() {
   return (neuron0x1f85eb0()*0.0276837);
}

double NNfunction_ns_chi02_cL::synapse0x1fabc90() {
   return (neuron0x1f861f0()*0.0565701);
}

double NNfunction_ns_chi02_cL::synapse0x1fabcd0() {
   return (neuron0x1f86530()*-0.00993961);
}

double NNfunction_ns_chi02_cL::synapse0x1fabd10() {
   return (neuron0x1f86870()*6.74432);
}

double NNfunction_ns_chi02_cL::synapse0x1fac090() {
   return (neuron0x1f81c20()*0.0615392);
}

double NNfunction_ns_chi02_cL::synapse0x1fac0d0() {
   return (neuron0x1f81ed0()*-0.59068);
}

double NNfunction_ns_chi02_cL::synapse0x1fac110() {
   return (neuron0x1f82210()*-1.72161);
}

double NNfunction_ns_chi02_cL::synapse0x1fac150() {
   return (neuron0x1f82550()*0.0380081);
}

double NNfunction_ns_chi02_cL::synapse0x1fac190() {
   return (neuron0x1f82890()*-0.0352227);
}

double NNfunction_ns_chi02_cL::synapse0x1fac1d0() {
   return (neuron0x1f82bd0()*-0.00381399);
}

double NNfunction_ns_chi02_cL::synapse0x1fac210() {
   return (neuron0x1f82f10()*-0.0304867);
}

double NNfunction_ns_chi02_cL::synapse0x1fac250() {
   return (neuron0x1f83250()*0.0133771);
}

double NNfunction_ns_chi02_cL::synapse0x1fac290() {
   return (neuron0x1f83590()*0.0442381);
}

double NNfunction_ns_chi02_cL::synapse0x1fac2d0() {
   return (neuron0x1f838d0()*-0.0337272);
}

double NNfunction_ns_chi02_cL::synapse0x1fac310() {
   return (neuron0x1f83c10()*-0.0540378);
}

double NNfunction_ns_chi02_cL::synapse0x1fac350() {
   return (neuron0x1f83f50()*-0.0174829);
}

double NNfunction_ns_chi02_cL::synapse0x1fac390() {
   return (neuron0x1f84290()*-0.350026);
}

double NNfunction_ns_chi02_cL::synapse0x1fac3d0() {
   return (neuron0x1f845d0()*-0.102755);
}

double NNfunction_ns_chi02_cL::synapse0x1fac410() {
   return (neuron0x1f84910()*0.0365677);
}

double NNfunction_ns_chi02_cL::synapse0x1fac450() {
   return (neuron0x1f84c50()*-0.0335557);
}

double NNfunction_ns_chi02_cL::synapse0x1fabee0() {
   return (neuron0x1f84f90()*-0.0183573);
}

double NNfunction_ns_chi02_cL::synapse0x1fabf20() {
   return (neuron0x1f854f0()*-0.0196335);
}

double NNfunction_ns_chi02_cL::synapse0x1fac5a0() {
   return (neuron0x1f85830()*0.109565);
}

double NNfunction_ns_chi02_cL::synapse0x1fac5e0() {
   return (neuron0x1f85b70()*0.0112151);
}

double NNfunction_ns_chi02_cL::synapse0x1fac620() {
   return (neuron0x1f85eb0()*0.0420837);
}

double NNfunction_ns_chi02_cL::synapse0x1fac660() {
   return (neuron0x1f861f0()*0.0184147);
}

double NNfunction_ns_chi02_cL::synapse0x1fac6a0() {
   return (neuron0x1f86530()*0.0565452);
}

double NNfunction_ns_chi02_cL::synapse0x1fac6e0() {
   return (neuron0x1f86870()*0.120137);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c550() {
   return (neuron0x1f86ce0()*-1.14781);
}

double NNfunction_ns_chi02_cL::synapse0x1d4c590() {
   return (neuron0x1f87520()*-1.12089);
}

double NNfunction_ns_chi02_cL::synapse0x1f89090() {
   return (neuron0x1f88000()*-5.53154);
}

double NNfunction_ns_chi02_cL::synapse0x1f890d0() {
   return (neuron0x1f87aa0()*-0.361584);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ab60() {
   return (neuron0x1f88de0()*-0.834993);
}

double NNfunction_ns_chi02_cL::synapse0x1f8aba0() {
   return (neuron0x1f8a8b0()*-4.16696);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b930() {
   return (neuron0x1f8b680()*0.254026);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b970() {
   return (neuron0x1f8c050()*-2.32569);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c300() {
   return (neuron0x1f8ca20()*-1.07027);
}

double NNfunction_ns_chi02_cL::synapse0x1f8c340() {
   return (neuron0x1f8d500()*-0.333908);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ccd0() {
   return (neuron0x1f8ded0()*5.30044);
}

double NNfunction_ns_chi02_cL::synapse0x1f8cd10() {
   return (neuron0x1f8afb0()*2.41899);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d7b0() {
   return (neuron0x1f8fa80()*-0.371481);
}

double NNfunction_ns_chi02_cL::synapse0x1f8d7f0() {
   return (neuron0x1f90450()*-0.556922);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e180() {
   return (neuron0x1f90e20()*0.250018);
}

double NNfunction_ns_chi02_cL::synapse0x1f8e1c0() {
   return (neuron0x1f917f0()*8.67337);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b260() {
   return (neuron0x1f93600()*-1.24715);
}

double NNfunction_ns_chi02_cL::synapse0x1f8b2a0() {
   return (neuron0x1f938e0()*0.347419);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fd30() {
   return (neuron0x1f942b0()*-5.07205);
}

double NNfunction_ns_chi02_cL::synapse0x1f8fd70() {
   return (neuron0x1f94c80()*-1.33924);
}

double NNfunction_ns_chi02_cL::synapse0x1f90700() {
   return (neuron0x1f95650()*4.63548);
}

double NNfunction_ns_chi02_cL::synapse0x1f90740() {
   return (neuron0x1f96020()*-2.87372);
}

double NNfunction_ns_chi02_cL::synapse0x1f910d0() {
   return (neuron0x1f8eb70()*-0.0845427);
}

double NNfunction_ns_chi02_cL::synapse0x1f91110() {
   return (neuron0x1f8f540()*1.5467);
}

double NNfunction_ns_chi02_cL::synapse0x1f91aa0() {
   return (neuron0x1f98db0()*-0.375038);
}

double NNfunction_ns_chi02_cL::synapse0x1f91ae0() {
   return (neuron0x1f99780()*2.55849);
}

double NNfunction_ns_chi02_cL::synapse0x1f84b30() {
   return (neuron0x1f9a150()*-0.247681);
}

double NNfunction_ns_chi02_cL::synapse0x1f84b70() {
   return (neuron0x1f9ab20()*0.116313);
}

double NNfunction_ns_chi02_cL::synapse0x1f93b90() {
   return (neuron0x1f9b4f0()*3.07772);
}

double NNfunction_ns_chi02_cL::synapse0x1f93bd0() {
   return (neuron0x1f9bec0()*0.669978);
}

double NNfunction_ns_chi02_cL::synapse0x1f94560() {
   return (neuron0x1f9c890()*-0.724126);
}

double NNfunction_ns_chi02_cL::synapse0x1f945a0() {
   return (neuron0x1f9d260()*0.345936);
}

double NNfunction_ns_chi02_cL::synapse0x1f94f30() {
   return (neuron0x1f932f0()*-0.649406);
}

double NNfunction_ns_chi02_cL::synapse0x1f94f70() {
   return (neuron0x1f9fe40()*7.13778);
}

double NNfunction_ns_chi02_cL::synapse0x1f95900() {
   return (neuron0x1fa0810()*-0.143635);
}

double NNfunction_ns_chi02_cL::synapse0x1f95940() {
   return (neuron0x1fa11e0()*-0.0922024);
}

double NNfunction_ns_chi02_cL::synapse0x1f962d0() {
   return (neuron0x1fa1bb0()*-3.27939);
}

double NNfunction_ns_chi02_cL::synapse0x1f96310() {
   return (neuron0x1fa2580()*-3.32117);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ee20() {
   return (neuron0x1fa2f50()*0.0897035);
}

double NNfunction_ns_chi02_cL::synapse0x1f8ee60() {
   return (neuron0x1fa3920()*-1.19968);
}

double NNfunction_ns_chi02_cL::synapse0x1f986d0() {
   return (neuron0x1fa42f0()*0.15612);
}

double NNfunction_ns_chi02_cL::synapse0x1f98710() {
   return (neuron0x1fa4ed0()*-1.86925);
}

double NNfunction_ns_chi02_cL::synapse0x1f99060() {
   return (neuron0x1fa58a0()*0.345767);
}

double NNfunction_ns_chi02_cL::synapse0x1f990a0() {
   return (neuron0x1f96720()*-0.617968);
}

double NNfunction_ns_chi02_cL::synapse0x1f99a30() {
   return (neuron0x1f970f0()*0.264947);
}

double NNfunction_ns_chi02_cL::synapse0x1f99a70() {
   return (neuron0x1f97ac0()*0.58715);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a400() {
   return (neuron0x1faa100()*0.951097);
}

double NNfunction_ns_chi02_cL::synapse0x1f9a440() {
   return (neuron0x1faa9b0()*-0.154031);
}

double NNfunction_ns_chi02_cL::synapse0x1f9add0() {
   return (neuron0x1fab380()*-0.290196);
}

double NNfunction_ns_chi02_cL::synapse0x1f9ae10() {
   return (neuron0x1fabd50()*-0.934524);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d510() {
   return (neuron0x1f86ce0()*0.993542);
}

double NNfunction_ns_chi02_cL::synapse0x1f9d550() {
   return (neuron0x1f87520()*-0.0226789);
}

double NNfunction_ns_chi02_cL::synapse0x1f92ad0() {
   return (neuron0x1f88000()*-0.596583);
}

double NNfunction_ns_chi02_cL::synapse0x1f92b10() {
   return (neuron0x1f87aa0()*0.284677);
}

double NNfunction_ns_chi02_cL::synapse0x1fa00f0() {
   return (neuron0x1f88de0()*0.202243);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0130() {
   return (neuron0x1f8a8b0()*0.17005);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0ac0() {
   return (neuron0x1f8b680()*-1.03786);
}

double NNfunction_ns_chi02_cL::synapse0x1fa0b00() {
   return (neuron0x1f8c050()*-2.8178);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1490() {
   return (neuron0x1f8ca20()*-0.0116753);
}

double NNfunction_ns_chi02_cL::synapse0x1fa14d0() {
   return (neuron0x1f8d500()*1.02673);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1e60() {
   return (neuron0x1f8ded0()*0.253862);
}

double NNfunction_ns_chi02_cL::synapse0x1fa1ea0() {
   return (neuron0x1f8afb0()*2.86021);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2830() {
   return (neuron0x1f8fa80()*-0.00177361);
}

double NNfunction_ns_chi02_cL::synapse0x1fa2870() {
   return (neuron0x1f90450()*0.00484856);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3200() {
   return (neuron0x1f90e20()*-0.359466);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3240() {
   return (neuron0x1f917f0()*0.611792);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3bd0() {
   return (neuron0x1f93600()*0.0115431);
}

double NNfunction_ns_chi02_cL::synapse0x1fa3c10() {
   return (neuron0x1f938e0()*0.0309921);
}

double NNfunction_ns_chi02_cL::synapse0x1fa45a0() {
   return (neuron0x1f942b0()*0.358254);
}

double NNfunction_ns_chi02_cL::synapse0x1fa45e0() {
   return (neuron0x1f94c80()*-0.0395616);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5180() {
   return (neuron0x1f95650()*0.364796);
}

double NNfunction_ns_chi02_cL::synapse0x1fa51c0() {
   return (neuron0x1f96020()*0.075616);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5b50() {
   return (neuron0x1f8eb70()*-0.845287);
}

double NNfunction_ns_chi02_cL::synapse0x1fa5b90() {
   return (neuron0x1f8f540()*0.208309);
}

double NNfunction_ns_chi02_cL::synapse0x1f969d0() {
   return (neuron0x1f98db0()*0.0423685);
}

double NNfunction_ns_chi02_cL::synapse0x1f96a10() {
   return (neuron0x1f99780()*0.41219);
}

double NNfunction_ns_chi02_cL::synapse0x1f973a0() {
   return (neuron0x1f9a150()*0.023971);
}

double NNfunction_ns_chi02_cL::synapse0x1f973e0() {
   return (neuron0x1f9ab20()*0.00779027);
}

double NNfunction_ns_chi02_cL::synapse0x1f97d70() {
   return (neuron0x1f9b4f0()*-0.632234);
}

double NNfunction_ns_chi02_cL::synapse0x1f97db0() {
   return (neuron0x1f9bec0()*0.290626);
}

double NNfunction_ns_chi02_cL::synapse0x1faa290() {
   return (neuron0x1f9c890()*0.0133444);
}

double NNfunction_ns_chi02_cL::synapse0x1faa2d0() {
   return (neuron0x1f9d260()*0.0033277);
}

double NNfunction_ns_chi02_cL::synapse0x1faac60() {
   return (neuron0x1f932f0()*-0.330583);
}

double NNfunction_ns_chi02_cL::synapse0x1faaca0() {
   return (neuron0x1f9fe40()*0.603224);
}

double NNfunction_ns_chi02_cL::synapse0x1fab630() {
   return (neuron0x1fa0810()*0.0653618);
}

double NNfunction_ns_chi02_cL::synapse0x1fab670() {
   return (neuron0x1fa11e0()*1.49322);
}

double NNfunction_ns_chi02_cL::synapse0x1fac000() {
   return (neuron0x1fa1bb0()*-1.48242);
}

double NNfunction_ns_chi02_cL::synapse0x1fac040() {
   return (neuron0x1fa2580()*-1.9522);
}

double NNfunction_ns_chi02_cL::synapse0x1f86f90() {
   return (neuron0x1fa2f50()*-0.132645);
}

double NNfunction_ns_chi02_cL::synapse0x1f86fd0() {
   return (neuron0x1fa3920()*0.100763);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b7a0() {
   return (neuron0x1fa42f0()*-1.95204);
}

double NNfunction_ns_chi02_cL::synapse0x1f9b7e0() {
   return (neuron0x1fa4ed0()*-1.46197);
}

double NNfunction_ns_chi02_cL::synapse0x1fac720() {
   return (neuron0x1fa58a0()*-0.943875);
}

double NNfunction_ns_chi02_cL::synapse0x1fac760() {
   return (neuron0x1f96720()*0.0849098);
}

double NNfunction_ns_chi02_cL::synapse0x1fac7a0() {
   return (neuron0x1f970f0()*-0.0123759);
}

double NNfunction_ns_chi02_cL::synapse0x1fac7e0() {
   return (neuron0x1f97ac0()*1.72569);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3690() {
   return (neuron0x1faa100()*1.22751);
}

double NNfunction_ns_chi02_cL::synapse0x1fb36d0() {
   return (neuron0x1faa9b0()*-0.0193515);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3710() {
   return (neuron0x1fab380()*2.38625);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3750() {
   return (neuron0x1fabd50()*0.284715);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3ad0() {
   return (neuron0x1f86ce0()*0.615192);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3b10() {
   return (neuron0x1f87520()*0.292744);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3b50() {
   return (neuron0x1f88000()*-1.00316);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3b90() {
   return (neuron0x1f87aa0()*-1.24708);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3bd0() {
   return (neuron0x1f88de0()*2.22702);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3c10() {
   return (neuron0x1f8a8b0()*0.132517);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3c50() {
   return (neuron0x1f8b680()*5.84164);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3c90() {
   return (neuron0x1f8c050()*0.182673);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3cd0() {
   return (neuron0x1f8ca20()*0.300542);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3d10() {
   return (neuron0x1f8d500()*2.16949);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3d50() {
   return (neuron0x1f8ded0()*0.0949388);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3d90() {
   return (neuron0x1f8afb0()*1.71048);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3dd0() {
   return (neuron0x1f8fa80()*0.117804);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3e10() {
   return (neuron0x1f90450()*-0.126338);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3e50() {
   return (neuron0x1f90e20()*1.92335);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3e90() {
   return (neuron0x1f917f0()*0.603968);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3920() {
   return (neuron0x1f93600()*0.140374);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3960() {
   return (neuron0x1f938e0()*-0.109431);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3fe0() {
   return (neuron0x1f942b0()*0.46462);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4020() {
   return (neuron0x1f94c80()*-1.26032);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4060() {
   return (neuron0x1f95650()*0.26459);
}

double NNfunction_ns_chi02_cL::synapse0x1fb40a0() {
   return (neuron0x1f96020()*-0.296205);
}

double NNfunction_ns_chi02_cL::synapse0x1fb40e0() {
   return (neuron0x1f8eb70()*2.87137);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4120() {
   return (neuron0x1f8f540()*0.627643);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4160() {
   return (neuron0x1f98db0()*0.16365);
}

double NNfunction_ns_chi02_cL::synapse0x1fb41a0() {
   return (neuron0x1f99780()*0.577087);
}

double NNfunction_ns_chi02_cL::synapse0x1fb41e0() {
   return (neuron0x1f9a150()*-0.133869);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4220() {
   return (neuron0x1f9ab20()*0.142031);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4260() {
   return (neuron0x1f9b4f0()*-0.657401);
}

double NNfunction_ns_chi02_cL::synapse0x1fb42a0() {
   return (neuron0x1f9bec0()*-0.341458);
}

double NNfunction_ns_chi02_cL::synapse0x1fb42e0() {
   return (neuron0x1f9c890()*0.120652);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4320() {
   return (neuron0x1f9d260()*0.414016);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3ed0() {
   return (neuron0x1f932f0()*-1.95164);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3f10() {
   return (neuron0x1f9fe40()*0.448727);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3f50() {
   return (neuron0x1fa0810()*-0.429675);
}

double NNfunction_ns_chi02_cL::synapse0x1fb3f90() {
   return (neuron0x1fa11e0()*-4.50217);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4570() {
   return (neuron0x1fa1bb0()*-3.00411);
}

double NNfunction_ns_chi02_cL::synapse0x1fb45b0() {
   return (neuron0x1fa2580()*-3.01975);
}

double NNfunction_ns_chi02_cL::synapse0x1fb45f0() {
   return (neuron0x1fa2f50()*-3.40915);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4630() {
   return (neuron0x1fa3920()*-1.96796);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4670() {
   return (neuron0x1fa42f0()*2.98402);
}

double NNfunction_ns_chi02_cL::synapse0x1fb46b0() {
   return (neuron0x1fa4ed0()*-1.22341);
}

double NNfunction_ns_chi02_cL::synapse0x1fb46f0() {
   return (neuron0x1fa58a0()*4.24397);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4730() {
   return (neuron0x1f96720()*-0.230328);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4770() {
   return (neuron0x1f970f0()*0.0823443);
}

double NNfunction_ns_chi02_cL::synapse0x1fb47b0() {
   return (neuron0x1f97ac0()*-1.21745);
}

double NNfunction_ns_chi02_cL::synapse0x1fb47f0() {
   return (neuron0x1faa100()*0.356234);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4830() {
   return (neuron0x1faa9b0()*0.32871);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4870() {
   return (neuron0x1fab380()*-0.274693);
}

double NNfunction_ns_chi02_cL::synapse0x1fb48b0() {
   return (neuron0x1fabd50()*-1.05363);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4c30() {
   return (neuron0x1f86ce0()*-1.07103);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4c70() {
   return (neuron0x1f87520()*-0.309947);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4cb0() {
   return (neuron0x1f88000()*-0.223362);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4cf0() {
   return (neuron0x1f87aa0()*-1.12169);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4d30() {
   return (neuron0x1f88de0()*0.5606);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4d70() {
   return (neuron0x1f8a8b0()*0.350512);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4db0() {
   return (neuron0x1f8b680()*0.421756);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4df0() {
   return (neuron0x1f8c050()*0.605008);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4e30() {
   return (neuron0x1f8ca20()*-0.373291);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4e70() {
   return (neuron0x1f8d500()*-0.78044);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4eb0() {
   return (neuron0x1f8ded0()*-0.333962);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4ef0() {
   return (neuron0x1f8afb0()*-0.621289);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4f30() {
   return (neuron0x1f8fa80()*0.0195736);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4f70() {
   return (neuron0x1f90450()*-0.424567);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4fb0() {
   return (neuron0x1f90e20()*0.444144);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4ff0() {
   return (neuron0x1f917f0()*0.229038);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4a80() {
   return (neuron0x1f93600()*-0.0694403);
}

double NNfunction_ns_chi02_cL::synapse0x1fb4ac0() {
   return (neuron0x1f938e0()*-0.185425);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5140() {
   return (neuron0x1f942b0()*0.182757);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5180() {
   return (neuron0x1f94c80()*0.142426);
}

double NNfunction_ns_chi02_cL::synapse0x1fb51c0() {
   return (neuron0x1f95650()*-0.593618);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5200() {
   return (neuron0x1f96020()*-0.572882);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5240() {
   return (neuron0x1f8eb70()*0.426857);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5280() {
   return (neuron0x1f8f540()*-0.422624);
}

double NNfunction_ns_chi02_cL::synapse0x1fb52c0() {
   return (neuron0x1f98db0()*-0.211564);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5300() {
   return (neuron0x1f99780()*-0.24221);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5340() {
   return (neuron0x1f9a150()*-0.0910384);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5380() {
   return (neuron0x1f9ab20()*-0.169851);
}

double NNfunction_ns_chi02_cL::synapse0x1fb53c0() {
   return (neuron0x1f9b4f0()*0.163487);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5400() {
   return (neuron0x1f9bec0()*0.153744);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5440() {
   return (neuron0x1f9c890()*-0.225079);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5480() {
   return (neuron0x1f9d260()*-0.393523);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5030() {
   return (neuron0x1f932f0()*0.00512768);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5070() {
   return (neuron0x1f9fe40()*-0.118793);
}

double NNfunction_ns_chi02_cL::synapse0x1fb50b0() {
   return (neuron0x1fa0810()*0.067042);
}

double NNfunction_ns_chi02_cL::synapse0x1fb50f0() {
   return (neuron0x1fa11e0()*-0.30293);
}

double NNfunction_ns_chi02_cL::synapse0x1fb56d0() {
   return (neuron0x1fa1bb0()*-0.0849764);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5710() {
   return (neuron0x1fa2580()*-0.0622921);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5750() {
   return (neuron0x1fa2f50()*-0.6841);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5790() {
   return (neuron0x1fa3920()*-0.813457);
}

double NNfunction_ns_chi02_cL::synapse0x1fb57d0() {
   return (neuron0x1fa42f0()*-0.361673);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5810() {
   return (neuron0x1fa4ed0()*-1.32023);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5850() {
   return (neuron0x1fa58a0()*-0.761851);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5890() {
   return (neuron0x1f96720()*-0.333137);
}

double NNfunction_ns_chi02_cL::synapse0x1fb58d0() {
   return (neuron0x1f970f0()*0.254307);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5910() {
   return (neuron0x1f97ac0()*0.72344);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5950() {
   return (neuron0x1faa100()*1.45798);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5990() {
   return (neuron0x1faa9b0()*-0.162804);
}

double NNfunction_ns_chi02_cL::synapse0x1fb59d0() {
   return (neuron0x1fab380()*0.770546);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5a10() {
   return (neuron0x1fabd50()*-0.130126);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5d90() {
   return (neuron0x1f86ce0()*2.17267);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5dd0() {
   return (neuron0x1f87520()*-0.127878);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5e10() {
   return (neuron0x1f88000()*-0.628923);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5e50() {
   return (neuron0x1f87aa0()*1.45728);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5e90() {
   return (neuron0x1f88de0()*-0.404377);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5ed0() {
   return (neuron0x1f8a8b0()*0.375531);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5f10() {
   return (neuron0x1f8b680()*-1.02797);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5f50() {
   return (neuron0x1f8c050()*-1.17488);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5f90() {
   return (neuron0x1f8ca20()*-0.0452278);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5fd0() {
   return (neuron0x1f8d500()*2.70776);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6010() {
   return (neuron0x1f8ded0()*0.0920317);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6050() {
   return (neuron0x1f8afb0()*1.19896);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6090() {
   return (neuron0x1f8fa80()*0.0316296);
}

double NNfunction_ns_chi02_cL::synapse0x1fb60d0() {
   return (neuron0x1f90450()*-0.127021);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6110() {
   return (neuron0x1f90e20()*-0.126007);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6150() {
   return (neuron0x1f917f0()*0.344236);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5be0() {
   return (neuron0x1f93600()*-0.0191796);
}

double NNfunction_ns_chi02_cL::synapse0x1fb5c20() {
   return (neuron0x1f938e0()*-0.0586899);
}

double NNfunction_ns_chi02_cL::synapse0x1fb62a0() {
   return (neuron0x1f942b0()*0.336809);
}

double NNfunction_ns_chi02_cL::synapse0x1fb62e0() {
   return (neuron0x1f94c80()*-0.194743);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6320() {
   return (neuron0x1f95650()*-0.114449);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6360() {
   return (neuron0x1f96020()*-0.219949);
}

double NNfunction_ns_chi02_cL::synapse0x1fb63a0() {
   return (neuron0x1f8eb70()*0.863342);
}

double NNfunction_ns_chi02_cL::synapse0x1fb63e0() {
   return (neuron0x1f8f540()*0.123092);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6420() {
   return (neuron0x1f98db0()*-0.0781513);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6460() {
   return (neuron0x1f99780()*0.369812);
}

double NNfunction_ns_chi02_cL::synapse0x1fb64a0() {
   return (neuron0x1f9a150()*-0.0907894);
}

double NNfunction_ns_chi02_cL::synapse0x1fb64e0() {
   return (neuron0x1f9ab20()*-0.0216677);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6520() {
   return (neuron0x1f9b4f0()*-0.0739215);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6560() {
   return (neuron0x1f9bec0()*-0.0472918);
}

double NNfunction_ns_chi02_cL::synapse0x1fb65a0() {
   return (neuron0x1f9c890()*-0.0450895);
}

double NNfunction_ns_chi02_cL::synapse0x1fb65e0() {
   return (neuron0x1f9d260()*0.012769);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6190() {
   return (neuron0x1f932f0()*0.836423);
}

double NNfunction_ns_chi02_cL::synapse0x1fb61d0() {
   return (neuron0x1f9fe40()*0.309986);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6210() {
   return (neuron0x1fa0810()*-0.00900292);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6250() {
   return (neuron0x1fa11e0()*1.92241);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6830() {
   return (neuron0x1fa1bb0()*0.52208);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6870() {
   return (neuron0x1fa2580()*-0.519039);
}

double NNfunction_ns_chi02_cL::synapse0x1fb68b0() {
   return (neuron0x1fa2f50()*-2.13258);
}

double NNfunction_ns_chi02_cL::synapse0x1fb68f0() {
   return (neuron0x1fa3920()*-0.422278);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6930() {
   return (neuron0x1fa42f0()*0.44106);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6970() {
   return (neuron0x1fa4ed0()*0.126596);
}

double NNfunction_ns_chi02_cL::synapse0x1fb69b0() {
   return (neuron0x1fa58a0()*0.498539);
}

double NNfunction_ns_chi02_cL::synapse0x1fb69f0() {
   return (neuron0x1f96720()*-0.123257);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6a30() {
   return (neuron0x1f970f0()*-0.04472);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6a70() {
   return (neuron0x1f97ac0()*1.25838);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6ab0() {
   return (neuron0x1faa100()*-2.0172);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6af0() {
   return (neuron0x1faa9b0()*0.00914844);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6b30() {
   return (neuron0x1fab380()*2.75254);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6b70() {
   return (neuron0x1fabd50()*0.784613);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6dd0() {
   return (neuron0x1fb2f50()*-8.83714);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6e10() {
   return (neuron0x1fb32f0()*-6.26946);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6e50() {
   return (neuron0x1fb3790()*-6.80145);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6e90() {
   return (neuron0x1fb48f0()*-2.16886);
}

double NNfunction_ns_chi02_cL::synapse0x1fb6ed0() {
   return (neuron0x1fb5a50()*8.93362);
}

