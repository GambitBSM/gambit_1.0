#include "NNfunction_ns_chi02_dR.h"
#include <cmath>

double NNfunction_ns_chi02_dR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.0059)/15.2497;
   input1 = (in1 - -12.719)/669.335;
   input2 = (in2 - 506.759)/579.384;
   input3 = (in3 - 43.3996)/761.51;
   input4 = (in4 - 914.28)/901.949;
   input5 = (in5 - 804.946)/901.412;
   input6 = (in6 - 801.875)/893.431;
   input7 = (in7 - 801.999)/868.88;
   input8 = (in8 - 803.34)/914.276;
   input9 = (in9 - 789.709)/898.765;
   input10 = (in10 - 837.701)/908.902;
   input11 = (in11 - 661.766)/785.331;
   input12 = (in12 - 662.371)/786.571;
   input13 = (in13 - 467.017)/467.215;
   input14 = (in14 - 662.467)/740.049;
   input15 = (in15 - 673.467)/752.622;
   input16 = (in16 - 487.623)/512.212;
   input17 = (in17 - 220.79)/185.322;
   input18 = (in18 - 689.303)/824.74;
   input19 = (in19 - 706.125)/796.528;
   input20 = (in20 - -39.1219)/452.47;
   input21 = (in21 - -58.4601)/1047.34;
   input22 = (in22 - 9.23904)/1080;
   input23 = (in23 - -45.1978)/431.076;
   switch(index) {
     case 0:
         return neuron0x2014850();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_dR::Value(int index, double* input) {
   input0 = (input[0] - 24.0059)/15.2497;
   input1 = (input[1] - -12.719)/669.335;
   input2 = (input[2] - 506.759)/579.384;
   input3 = (input[3] - 43.3996)/761.51;
   input4 = (input[4] - 914.28)/901.949;
   input5 = (input[5] - 804.946)/901.412;
   input6 = (input[6] - 801.875)/893.431;
   input7 = (input[7] - 801.999)/868.88;
   input8 = (input[8] - 803.34)/914.276;
   input9 = (input[9] - 789.709)/898.765;
   input10 = (input[10] - 837.701)/908.902;
   input11 = (input[11] - 661.766)/785.331;
   input12 = (input[12] - 662.371)/786.571;
   input13 = (input[13] - 467.017)/467.215;
   input14 = (input[14] - 662.467)/740.049;
   input15 = (input[15] - 673.467)/752.622;
   input16 = (input[16] - 487.623)/512.212;
   input17 = (input[17] - 220.79)/185.322;
   input18 = (input[18] - 689.303)/824.74;
   input19 = (input[19] - 706.125)/796.528;
   input20 = (input[20] - -39.1219)/452.47;
   input21 = (input[21] - -58.4601)/1047.34;
   input22 = (input[22] - 9.23904)/1080;
   input23 = (input[23] - -45.1978)/431.076;
   switch(index) {
     case 0:
         return neuron0x2014850();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_dR::neuron0x1fe0940() {
   return input0;
}

double NNfunction_ns_chi02_dR::neuron0x1fe0c80() {
   return input1;
}

double NNfunction_ns_chi02_dR::neuron0x1fe0fc0() {
   return input2;
}

double NNfunction_ns_chi02_dR::neuron0x1fe1300() {
   return input3;
}

double NNfunction_ns_chi02_dR::neuron0x1fe1640() {
   return input4;
}

double NNfunction_ns_chi02_dR::neuron0x1fe1980() {
   return input5;
}

double NNfunction_ns_chi02_dR::neuron0x1fe1cc0() {
   return input6;
}

double NNfunction_ns_chi02_dR::neuron0x1fe2000() {
   return input7;
}

double NNfunction_ns_chi02_dR::neuron0x1fe2340() {
   return input8;
}

double NNfunction_ns_chi02_dR::neuron0x1fe2680() {
   return input9;
}

double NNfunction_ns_chi02_dR::neuron0x1fe29c0() {
   return input10;
}

double NNfunction_ns_chi02_dR::neuron0x1fe2d00() {
   return input11;
}

double NNfunction_ns_chi02_dR::neuron0x1fe3040() {
   return input12;
}

double NNfunction_ns_chi02_dR::neuron0x1fe3380() {
   return input13;
}

double NNfunction_ns_chi02_dR::neuron0x1fe36c0() {
   return input14;
}

double NNfunction_ns_chi02_dR::neuron0x1fe3a00() {
   return input15;
}

double NNfunction_ns_chi02_dR::neuron0x1fe3d40() {
   return input16;
}

double NNfunction_ns_chi02_dR::neuron0x1fe42a0() {
   return input17;
}

double NNfunction_ns_chi02_dR::neuron0x1fe44c0() {
   return input18;
}

double NNfunction_ns_chi02_dR::neuron0x1fe4800() {
   return input19;
}

double NNfunction_ns_chi02_dR::neuron0x1fe4b40() {
   return input20;
}

double NNfunction_ns_chi02_dR::neuron0x1fe4e80() {
   return input21;
}

double NNfunction_ns_chi02_dR::neuron0x1fe51c0() {
   return input22;
}

double NNfunction_ns_chi02_dR::neuron0x1fe5500() {
   return input23;
}

double NNfunction_ns_chi02_dR::input0x1fe5970() {
   double input = -0.328973;
   input += synapse0x1fe0800();
   input += synapse0x1fe0840();
   input += synapse0x1fe5c20();
   input += synapse0x1fe5c60();
   input += synapse0x1fe5ca0();
   input += synapse0x1fe5ce0();
   input += synapse0x1fe5d20();
   input += synapse0x1fe5d60();
   input += synapse0x1fe5da0();
   input += synapse0x1fe5de0();
   input += synapse0x1fe5e20();
   input += synapse0x1fe5e60();
   input += synapse0x1fe5ea0();
   input += synapse0x1fe5ee0();
   input += synapse0x1fe5f20();
   input += synapse0x1fe5f60();
   input += synapse0x1fe0770();
   input += synapse0x1fe07b0();
   input += synapse0x1d9bae0();
   input += synapse0x1d9bb20();
   input += synapse0x1fe61c0();
   input += synapse0x1fe6200();
   input += synapse0x1fe6240();
   input += synapse0x1fe6280();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe5970() {
   double input = input0x1fe5970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe62c0() {
   double input = 0.847513;
   input += synapse0x1fe6600();
   input += synapse0x1fe6640();
   input += synapse0x1fe6680();
   input += synapse0x1fe66c0();
   input += synapse0x1fe6700();
   input += synapse0x1fe6740();
   input += synapse0x1fe6780();
   input += synapse0x1fe67c0();
   input += synapse0x1fe6800();
   input += synapse0x1fe60b0();
   input += synapse0x1fe60f0();
   input += synapse0x1fe6130();
   input += synapse0x1fe6170();
   input += synapse0x1fe6a50();
   input += synapse0x1fe6a90();
   input += synapse0x1fe6ad0();
   input += synapse0x1fe6450();
   input += synapse0x1fe6490();
   input += synapse0x1fe6c20();
   input += synapse0x1fe6c60();
   input += synapse0x1fe6ca0();
   input += synapse0x1fe6ce0();
   input += synapse0x1fe6d20();
   input += synapse0x1fe6d60();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe62c0() {
   double input = input0x1fe62c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe6da0() {
   double input = 0.664442;
   input += synapse0x1fe70e0();
   input += synapse0x1fe7120();
   input += synapse0x1fe7160();
   input += synapse0x1fe71a0();
   input += synapse0x1fe71e0();
   input += synapse0x1fe7220();
   input += synapse0x1fe7260();
   input += synapse0x1fe72a0();
   input += synapse0x1fe72e0();
   input += synapse0x1fe7320();
   input += synapse0x1fe7360();
   input += synapse0x1fe73a0();
   input += synapse0x1fe73e0();
   input += synapse0x1fe7420();
   input += synapse0x1fe7460();
   input += synapse0x1fe74a0();
   input += synapse0x1fe6f30();
   input += synapse0x1fe6f70();
   input += synapse0x1d9c1d0();
   input += synapse0x1da9aa0();
   input += synapse0x1da9ae0();
   input += synapse0x1fcf9d0();
   input += synapse0x1fcfa10();
   input += synapse0x1fcfa50();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe6da0() {
   double input = input0x1fe6da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe6840() {
   double input = 2.06254;
   input += synapse0x1daa320();
   input += synapse0x1fe69d0();
   input += synapse0x1fe6a10();
   input += synapse0x1fe75f0();
   input += synapse0x1fe7630();
   input += synapse0x1fe7670();
   input += synapse0x1fe76b0();
   input += synapse0x1fe76f0();
   input += synapse0x1fe7730();
   input += synapse0x1fe7770();
   input += synapse0x1fe77b0();
   input += synapse0x1fe77f0();
   input += synapse0x1fe7830();
   input += synapse0x1fe7870();
   input += synapse0x1fe78b0();
   input += synapse0x1fe78f0();
   input += synapse0x1fe0880();
   input += synapse0x1fe08c0();
   input += synapse0x1fe0900();
   input += synapse0x1fe7a40();
   input += synapse0x1fe7a80();
   input += synapse0x1fe7ac0();
   input += synapse0x1fe7b00();
   input += synapse0x1fe7b40();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe6840() {
   double input = input0x1fe6840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe7b80() {
   double input = 0.122263;
   input += synapse0x1fe7ec0();
   input += synapse0x1fe7f00();
   input += synapse0x1fe7f40();
   input += synapse0x1fe7f80();
   input += synapse0x1fe7fc0();
   input += synapse0x1fe8000();
   input += synapse0x1fe8040();
   input += synapse0x1fe8080();
   input += synapse0x1fe80c0();
   input += synapse0x1fe8100();
   input += synapse0x1fe8140();
   input += synapse0x1fe8180();
   input += synapse0x1fe81c0();
   input += synapse0x1fe8200();
   input += synapse0x1fe8240();
   input += synapse0x1fe8280();
   input += synapse0x1fe7d10();
   input += synapse0x1fe7d50();
   input += synapse0x1fe83d0();
   input += synapse0x1fe8410();
   input += synapse0x1fe8450();
   input += synapse0x1fe8490();
   input += synapse0x1fe84d0();
   input += synapse0x1fe8510();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe7b80() {
   double input = input0x1fe7b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe8550() {
   double input = 6.54178;
   input += synapse0x1fe8890();
   input += synapse0x1fe88d0();
   input += synapse0x1fe8910();
   input += synapse0x1fe8950();
   input += synapse0x1fe8990();
   input += synapse0x1fe89d0();
   input += synapse0x1fe8a10();
   input += synapse0x1fe8a50();
   input += synapse0x1fe8a90();
   input += synapse0x1da9df0();
   input += synapse0x1da9e30();
   input += synapse0x1da9e70();
   input += synapse0x1da9eb0();
   input += synapse0x1da9ef0();
   input += synapse0x1da9f30();
   input += synapse0x1da9f70();
   input += synapse0x1fe86e0();
   input += synapse0x1fe8720();
   input += synapse0x1daa0c0();
   input += synapse0x1daa100();
   input += synapse0x1daa140();
   input += synapse0x1daa180();
   input += synapse0x1daa1c0();
   input += synapse0x1fe92e0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe8550() {
   double input = input0x1fe8550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe9320() {
   double input = -0.331506;
   input += synapse0x1fe9660();
   input += synapse0x1fe96a0();
   input += synapse0x1fe96e0();
   input += synapse0x1fe9720();
   input += synapse0x1fe9760();
   input += synapse0x1fe97a0();
   input += synapse0x1fe97e0();
   input += synapse0x1fe9820();
   input += synapse0x1fe9860();
   input += synapse0x1fe98a0();
   input += synapse0x1fe98e0();
   input += synapse0x1fe9920();
   input += synapse0x1fe9960();
   input += synapse0x1fe99a0();
   input += synapse0x1fe99e0();
   input += synapse0x1fe9a20();
   input += synapse0x1fe94b0();
   input += synapse0x1fe94f0();
   input += synapse0x1fe9b70();
   input += synapse0x1fe9bb0();
   input += synapse0x1fe9bf0();
   input += synapse0x1fe9c30();
   input += synapse0x1fe9c70();
   input += synapse0x1fe9cb0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe9320() {
   double input = input0x1fe9320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe9cf0() {
   double input = 1.66342;
   input += synapse0x1fea030();
   input += synapse0x1fea070();
   input += synapse0x1fea0b0();
   input += synapse0x1fea0f0();
   input += synapse0x1fea130();
   input += synapse0x1fea170();
   input += synapse0x1fea1b0();
   input += synapse0x1fea1f0();
   input += synapse0x1fea230();
   input += synapse0x1fea270();
   input += synapse0x1fea2b0();
   input += synapse0x1fea2f0();
   input += synapse0x1fea330();
   input += synapse0x1fea370();
   input += synapse0x1fea3b0();
   input += synapse0x1fea3f0();
   input += synapse0x1fe9e80();
   input += synapse0x1fe9ec0();
   input += synapse0x1fea540();
   input += synapse0x1fea580();
   input += synapse0x1fea5c0();
   input += synapse0x1fea600();
   input += synapse0x1fea640();
   input += synapse0x1fea680();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe9cf0() {
   double input = input0x1fe9cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fea6c0() {
   double input = -0.993605;
   input += synapse0x1fe4190();
   input += synapse0x1fe41d0();
   input += synapse0x1fe4210();
   input += synapse0x1fe4250();
   input += synapse0x1feac10();
   input += synapse0x1feac50();
   input += synapse0x1feac90();
   input += synapse0x1feacd0();
   input += synapse0x1fead10();
   input += synapse0x1fead50();
   input += synapse0x1fead90();
   input += synapse0x1feadd0();
   input += synapse0x1feae10();
   input += synapse0x1feae50();
   input += synapse0x1feae90();
   input += synapse0x1feaed0();
   input += synapse0x1fea850();
   input += synapse0x1fea890();
   input += synapse0x1feb020();
   input += synapse0x1feb060();
   input += synapse0x1feb0a0();
   input += synapse0x1feb0e0();
   input += synapse0x1feb120();
   input += synapse0x1feb160();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fea6c0() {
   double input = input0x1fea6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1feb1a0() {
   double input = -0.474897;
   input += synapse0x1feb4e0();
   input += synapse0x1feb520();
   input += synapse0x1feb560();
   input += synapse0x1feb5a0();
   input += synapse0x1feb5e0();
   input += synapse0x1feb620();
   input += synapse0x1feb660();
   input += synapse0x1feb6a0();
   input += synapse0x1feb6e0();
   input += synapse0x1feb720();
   input += synapse0x1feb760();
   input += synapse0x1feb7a0();
   input += synapse0x1feb7e0();
   input += synapse0x1feb820();
   input += synapse0x1feb860();
   input += synapse0x1feb8a0();
   input += synapse0x1feb330();
   input += synapse0x1feb370();
   input += synapse0x1feb9f0();
   input += synapse0x1feba30();
   input += synapse0x1feba70();
   input += synapse0x1febab0();
   input += synapse0x1febaf0();
   input += synapse0x1febb30();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1feb1a0() {
   double input = input0x1feb1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1febb70() {
   double input = 7.81999;
   input += synapse0x1febeb0();
   input += synapse0x1febef0();
   input += synapse0x1febf30();
   input += synapse0x1febf70();
   input += synapse0x1febfb0();
   input += synapse0x1febff0();
   input += synapse0x1fec030();
   input += synapse0x1fec070();
   input += synapse0x1fec0b0();
   input += synapse0x1fec0f0();
   input += synapse0x1fec130();
   input += synapse0x1fec170();
   input += synapse0x1fec1b0();
   input += synapse0x1fec1f0();
   input += synapse0x1fec230();
   input += synapse0x1fec270();
   input += synapse0x1febd00();
   input += synapse0x1febd40();
   input += synapse0x1fe8ad0();
   input += synapse0x1fe8b10();
   input += synapse0x1fe8b50();
   input += synapse0x1fe8b90();
   input += synapse0x1fe8bd0();
   input += synapse0x1fe8c10();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1febb70() {
   double input = input0x1febb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fe8c50() {
   double input = 1.20449;
   input += synapse0x1fe8f90();
   input += synapse0x1fe8fd0();
   input += synapse0x1fe9010();
   input += synapse0x1fe9050();
   input += synapse0x1fe9090();
   input += synapse0x1fe90d0();
   input += synapse0x1fe9110();
   input += synapse0x1fe9150();
   input += synapse0x1fe9190();
   input += synapse0x1fe91d0();
   input += synapse0x1fe9210();
   input += synapse0x1fe9250();
   input += synapse0x1fe9290();
   input += synapse0x1fed3d0();
   input += synapse0x1fed410();
   input += synapse0x1fed450();
   input += synapse0x1fe8de0();
   input += synapse0x1fe8e20();
   input += synapse0x1fed5a0();
   input += synapse0x1fed5e0();
   input += synapse0x1fed620();
   input += synapse0x1fed660();
   input += synapse0x1fed6a0();
   input += synapse0x1fed6e0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fe8c50() {
   double input = input0x1fe8c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fed720() {
   double input = 0.627124;
   input += synapse0x1feda60();
   input += synapse0x1fedaa0();
   input += synapse0x1fedae0();
   input += synapse0x1fedb20();
   input += synapse0x1fedb60();
   input += synapse0x1fedba0();
   input += synapse0x1fedbe0();
   input += synapse0x1fedc20();
   input += synapse0x1fedc60();
   input += synapse0x1fedca0();
   input += synapse0x1fedce0();
   input += synapse0x1fedd20();
   input += synapse0x1fedd60();
   input += synapse0x1fedda0();
   input += synapse0x1fedde0();
   input += synapse0x1fede20();
   input += synapse0x1fed8b0();
   input += synapse0x1fed8f0();
   input += synapse0x1fedf70();
   input += synapse0x1fedfb0();
   input += synapse0x1fedff0();
   input += synapse0x1fee030();
   input += synapse0x1fee070();
   input += synapse0x1fee0b0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fed720() {
   double input = input0x1fed720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fee0f0() {
   double input = -1.60373;
   input += synapse0x1fee430();
   input += synapse0x1fee470();
   input += synapse0x1fee4b0();
   input += synapse0x1fee4f0();
   input += synapse0x1fee530();
   input += synapse0x1fee570();
   input += synapse0x1fee5b0();
   input += synapse0x1fee5f0();
   input += synapse0x1fee630();
   input += synapse0x1fee670();
   input += synapse0x1fee6b0();
   input += synapse0x1fee6f0();
   input += synapse0x1fee730();
   input += synapse0x1fee770();
   input += synapse0x1fee7b0();
   input += synapse0x1fee7f0();
   input += synapse0x1fee280();
   input += synapse0x1fee2c0();
   input += synapse0x1fee940();
   input += synapse0x1fee980();
   input += synapse0x1fee9c0();
   input += synapse0x1feea00();
   input += synapse0x1feea40();
   input += synapse0x1feea80();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fee0f0() {
   double input = input0x1fee0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1feeac0() {
   double input = 0.0125069;
   input += synapse0x1feee00();
   input += synapse0x1feee40();
   input += synapse0x1feee80();
   input += synapse0x1feeec0();
   input += synapse0x1feef00();
   input += synapse0x1feef40();
   input += synapse0x1feef80();
   input += synapse0x1feefc0();
   input += synapse0x1fef000();
   input += synapse0x1fef040();
   input += synapse0x1fef080();
   input += synapse0x1fef0c0();
   input += synapse0x1fef100();
   input += synapse0x1fef140();
   input += synapse0x1fef180();
   input += synapse0x1fef1c0();
   input += synapse0x1feec50();
   input += synapse0x1feec90();
   input += synapse0x1fef310();
   input += synapse0x1fef350();
   input += synapse0x1fef390();
   input += synapse0x1fef3d0();
   input += synapse0x1fef410();
   input += synapse0x1fef450();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1feeac0() {
   double input = input0x1feeac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fef490() {
   double input = -6.25441;
   input += synapse0x1fef7d0();
   input += synapse0x1fe0b60();
   input += synapse0x1fe0ba0();
   input += synapse0x1fe0ea0();
   input += synapse0x1fe0ee0();
   input += synapse0x1fe11e0();
   input += synapse0x1fe1220();
   input += synapse0x1fe1520();
   input += synapse0x1fe1560();
   input += synapse0x1fe1860();
   input += synapse0x1fe18a0();
   input += synapse0x1fe1ba0();
   input += synapse0x1fe1be0();
   input += synapse0x1fe1ee0();
   input += synapse0x1fe1f20();
   input += synapse0x1fe2220();
   input += synapse0x1fe2260();
   input += synapse0x1fe2560();
   input += synapse0x1fe25a0();
   input += synapse0x1fe28a0();
   input += synapse0x1fe28e0();
   input += synapse0x1fe2be0();
   input += synapse0x1fe2c20();
   input += synapse0x1fe2f20();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fef490() {
   double input = input0x1fef490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff12a0() {
   double input = -0.673158;
   input += synapse0x1fe2f60();
   input += synapse0x1fe3c20();
   input += synapse0x1fe3c60();
   input += synapse0x1fef620();
   input += synapse0x1fef660();
   input += synapse0x1fe3f60();
   input += synapse0x1fe3fa0();
   input += synapse0x1d9b9c0();
   input += synapse0x1d9ba00();
   input += synapse0x1fe46e0();
   input += synapse0x1fe4720();
   input += synapse0x1fe4a20();
   input += synapse0x1fe4a60();
   input += synapse0x1fe4d60();
   input += synapse0x1fe4da0();
   input += synapse0x1fe50a0();
   input += synapse0x1fe50e0();
   input += synapse0x1fe53e0();
   input += synapse0x1fe5420();
   input += synapse0x1fe5720();
   input += synapse0x1fe5760();
   input += synapse0x1fe3260();
   input += synapse0x1fe32a0();
   input += synapse0x1ff1540();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff12a0() {
   double input = input0x1ff12a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff1580() {
   double input = 0.310421;
   input += synapse0x1ff18c0();
   input += synapse0x1ff1900();
   input += synapse0x1ff1940();
   input += synapse0x1ff1980();
   input += synapse0x1ff19c0();
   input += synapse0x1ff1a00();
   input += synapse0x1ff1a40();
   input += synapse0x1ff1a80();
   input += synapse0x1ff1ac0();
   input += synapse0x1ff1b00();
   input += synapse0x1ff1b40();
   input += synapse0x1ff1b80();
   input += synapse0x1ff1bc0();
   input += synapse0x1ff1c00();
   input += synapse0x1ff1c40();
   input += synapse0x1ff1c80();
   input += synapse0x1ff1710();
   input += synapse0x1ff1750();
   input += synapse0x1ff1dd0();
   input += synapse0x1ff1e10();
   input += synapse0x1ff1e50();
   input += synapse0x1ff1e90();
   input += synapse0x1ff1ed0();
   input += synapse0x1ff1f10();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff1580() {
   double input = input0x1ff1580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff1f50() {
   double input = -0.246602;
   input += synapse0x1ff2290();
   input += synapse0x1ff22d0();
   input += synapse0x1ff2310();
   input += synapse0x1ff2350();
   input += synapse0x1ff2390();
   input += synapse0x1ff23d0();
   input += synapse0x1ff2410();
   input += synapse0x1ff2450();
   input += synapse0x1ff2490();
   input += synapse0x1ff24d0();
   input += synapse0x1ff2510();
   input += synapse0x1ff2550();
   input += synapse0x1ff2590();
   input += synapse0x1ff25d0();
   input += synapse0x1ff2610();
   input += synapse0x1ff2650();
   input += synapse0x1ff20e0();
   input += synapse0x1ff2120();
   input += synapse0x1ff27a0();
   input += synapse0x1ff27e0();
   input += synapse0x1ff2820();
   input += synapse0x1ff2860();
   input += synapse0x1ff28a0();
   input += synapse0x1ff28e0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff1f50() {
   double input = input0x1ff1f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff2920() {
   double input = 4.1393;
   input += synapse0x1ff2c60();
   input += synapse0x1ff2ca0();
   input += synapse0x1ff2ce0();
   input += synapse0x1ff2d20();
   input += synapse0x1ff2d60();
   input += synapse0x1ff2da0();
   input += synapse0x1ff2de0();
   input += synapse0x1ff2e20();
   input += synapse0x1ff2e60();
   input += synapse0x1ff2ea0();
   input += synapse0x1ff2ee0();
   input += synapse0x1ff2f20();
   input += synapse0x1ff2f60();
   input += synapse0x1ff2fa0();
   input += synapse0x1ff2fe0();
   input += synapse0x1ff3020();
   input += synapse0x1ff2ab0();
   input += synapse0x1ff2af0();
   input += synapse0x1ff3170();
   input += synapse0x1ff31b0();
   input += synapse0x1ff31f0();
   input += synapse0x1ff3230();
   input += synapse0x1ff3270();
   input += synapse0x1ff32b0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff2920() {
   double input = input0x1ff2920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff32f0() {
   double input = -1.22915;
   input += synapse0x1ff3630();
   input += synapse0x1ff3670();
   input += synapse0x1ff36b0();
   input += synapse0x1ff36f0();
   input += synapse0x1ff3730();
   input += synapse0x1ff3770();
   input += synapse0x1ff37b0();
   input += synapse0x1ff37f0();
   input += synapse0x1ff3830();
   input += synapse0x1ff3870();
   input += synapse0x1ff38b0();
   input += synapse0x1ff38f0();
   input += synapse0x1ff3930();
   input += synapse0x1ff3970();
   input += synapse0x1ff39b0();
   input += synapse0x1ff39f0();
   input += synapse0x1ff3480();
   input += synapse0x1ff34c0();
   input += synapse0x1ff3b40();
   input += synapse0x1ff3b80();
   input += synapse0x1ff3bc0();
   input += synapse0x1ff3c00();
   input += synapse0x1ff3c40();
   input += synapse0x1ff3c80();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff32f0() {
   double input = input0x1ff32f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff3cc0() {
   double input = 1.42536;
   input += synapse0x1ff4000();
   input += synapse0x1ff4040();
   input += synapse0x1ff4080();
   input += synapse0x1ff40c0();
   input += synapse0x1ff4100();
   input += synapse0x1ff4140();
   input += synapse0x1ff4180();
   input += synapse0x1ff41c0();
   input += synapse0x1ff4200();
   input += synapse0x1fec3c0();
   input += synapse0x1fec400();
   input += synapse0x1fec440();
   input += synapse0x1fec480();
   input += synapse0x1fec4c0();
   input += synapse0x1fec500();
   input += synapse0x1fec540();
   input += synapse0x1ff3e50();
   input += synapse0x1ff3e90();
   input += synapse0x1fec690();
   input += synapse0x1fec6d0();
   input += synapse0x1fec710();
   input += synapse0x1fec750();
   input += synapse0x1fec790();
   input += synapse0x1fec7d0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff3cc0() {
   double input = input0x1ff3cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fec810() {
   double input = -6.79927;
   input += synapse0x1fecb50();
   input += synapse0x1fecb90();
   input += synapse0x1fecbd0();
   input += synapse0x1fecc10();
   input += synapse0x1fecc50();
   input += synapse0x1fecc90();
   input += synapse0x1feccd0();
   input += synapse0x1fecd10();
   input += synapse0x1fecd50();
   input += synapse0x1fecd90();
   input += synapse0x1fecdd0();
   input += synapse0x1fece10();
   input += synapse0x1fece50();
   input += synapse0x1fece90();
   input += synapse0x1feced0();
   input += synapse0x1fecf10();
   input += synapse0x1fec9a0();
   input += synapse0x1fec9e0();
   input += synapse0x1fed060();
   input += synapse0x1fed0a0();
   input += synapse0x1fed0e0();
   input += synapse0x1fed120();
   input += synapse0x1fed160();
   input += synapse0x1fed1a0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fec810() {
   double input = input0x1fec810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fed1e0() {
   double input = 0.400091;
   input += synapse0x1fed370();
   input += synapse0x1ff6400();
   input += synapse0x1ff6440();
   input += synapse0x1ff6480();
   input += synapse0x1ff64c0();
   input += synapse0x1ff6500();
   input += synapse0x1ff6540();
   input += synapse0x1ff6580();
   input += synapse0x1ff65c0();
   input += synapse0x1ff6600();
   input += synapse0x1ff6640();
   input += synapse0x1ff6680();
   input += synapse0x1ff66c0();
   input += synapse0x1ff6700();
   input += synapse0x1ff6740();
   input += synapse0x1ff6780();
   input += synapse0x1ff6250();
   input += synapse0x1ff6290();
   input += synapse0x1ff68d0();
   input += synapse0x1ff6910();
   input += synapse0x1ff6950();
   input += synapse0x1ff6990();
   input += synapse0x1ff69d0();
   input += synapse0x1ff6a10();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fed1e0() {
   double input = input0x1fed1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff6a50() {
   double input = -0.753803;
   input += synapse0x1ff6d90();
   input += synapse0x1ff6dd0();
   input += synapse0x1ff6e10();
   input += synapse0x1ff6e50();
   input += synapse0x1ff6e90();
   input += synapse0x1ff6ed0();
   input += synapse0x1ff6f10();
   input += synapse0x1ff6f50();
   input += synapse0x1ff6f90();
   input += synapse0x1ff6fd0();
   input += synapse0x1ff7010();
   input += synapse0x1ff7050();
   input += synapse0x1ff7090();
   input += synapse0x1ff70d0();
   input += synapse0x1ff7110();
   input += synapse0x1ff7150();
   input += synapse0x1ff6be0();
   input += synapse0x1ff6c20();
   input += synapse0x1ff72a0();
   input += synapse0x1ff72e0();
   input += synapse0x1ff7320();
   input += synapse0x1ff7360();
   input += synapse0x1ff73a0();
   input += synapse0x1ff73e0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff6a50() {
   double input = input0x1ff6a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff7420() {
   double input = 0.00675878;
   input += synapse0x1ff7760();
   input += synapse0x1ff77a0();
   input += synapse0x1ff77e0();
   input += synapse0x1ff7820();
   input += synapse0x1ff7860();
   input += synapse0x1ff78a0();
   input += synapse0x1ff78e0();
   input += synapse0x1ff7920();
   input += synapse0x1ff7960();
   input += synapse0x1ff79a0();
   input += synapse0x1ff79e0();
   input += synapse0x1ff7a20();
   input += synapse0x1ff7a60();
   input += synapse0x1ff7aa0();
   input += synapse0x1ff7ae0();
   input += synapse0x1ff7b20();
   input += synapse0x1ff75b0();
   input += synapse0x1ff75f0();
   input += synapse0x1ff7c70();
   input += synapse0x1ff7cb0();
   input += synapse0x1ff7cf0();
   input += synapse0x1ff7d30();
   input += synapse0x1ff7d70();
   input += synapse0x1ff7db0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff7420() {
   double input = input0x1ff7420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff7df0() {
   double input = -0.126026;
   input += synapse0x1ff8130();
   input += synapse0x1ff8170();
   input += synapse0x1ff81b0();
   input += synapse0x1ff81f0();
   input += synapse0x1ff8230();
   input += synapse0x1ff8270();
   input += synapse0x1ff82b0();
   input += synapse0x1ff82f0();
   input += synapse0x1ff8330();
   input += synapse0x1ff8370();
   input += synapse0x1ff83b0();
   input += synapse0x1ff83f0();
   input += synapse0x1ff8430();
   input += synapse0x1ff8470();
   input += synapse0x1ff84b0();
   input += synapse0x1ff84f0();
   input += synapse0x1ff7f80();
   input += synapse0x1ff7fc0();
   input += synapse0x1ff8640();
   input += synapse0x1ff8680();
   input += synapse0x1ff86c0();
   input += synapse0x1ff8700();
   input += synapse0x1ff8740();
   input += synapse0x1ff8780();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff7df0() {
   double input = input0x1ff7df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff87c0() {
   double input = 2.50636;
   input += synapse0x1ff8b00();
   input += synapse0x1ff8b40();
   input += synapse0x1ff8b80();
   input += synapse0x1ff8bc0();
   input += synapse0x1ff8c00();
   input += synapse0x1ff8c40();
   input += synapse0x1ff8c80();
   input += synapse0x1ff8cc0();
   input += synapse0x1ff8d00();
   input += synapse0x1ff8d40();
   input += synapse0x1ff8d80();
   input += synapse0x1ff8dc0();
   input += synapse0x1ff8e00();
   input += synapse0x1ff8e40();
   input += synapse0x1ff8e80();
   input += synapse0x1ff8ec0();
   input += synapse0x1ff8950();
   input += synapse0x1ff8990();
   input += synapse0x1ff9010();
   input += synapse0x1ff9050();
   input += synapse0x1ff9090();
   input += synapse0x1ff90d0();
   input += synapse0x1ff9110();
   input += synapse0x1ff9150();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff87c0() {
   double input = input0x1ff87c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff9190() {
   double input = -1.05691;
   input += synapse0x1ff94d0();
   input += synapse0x1ff9510();
   input += synapse0x1ff9550();
   input += synapse0x1ff9590();
   input += synapse0x1ff95d0();
   input += synapse0x1ff9610();
   input += synapse0x1ff9650();
   input += synapse0x1ff9690();
   input += synapse0x1ff96d0();
   input += synapse0x1ff9710();
   input += synapse0x1ff9750();
   input += synapse0x1ff9790();
   input += synapse0x1ff97d0();
   input += synapse0x1ff9810();
   input += synapse0x1ff9850();
   input += synapse0x1ff9890();
   input += synapse0x1ff9320();
   input += synapse0x1ff9360();
   input += synapse0x1ff99e0();
   input += synapse0x1ff9a20();
   input += synapse0x1ff9a60();
   input += synapse0x1ff9aa0();
   input += synapse0x1ff9ae0();
   input += synapse0x1ff9b20();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff9190() {
   double input = input0x1ff9190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff9b60() {
   double input = 0.216475;
   input += synapse0x1ff9ea0();
   input += synapse0x1ff9ee0();
   input += synapse0x1ff9f20();
   input += synapse0x1ff9f60();
   input += synapse0x1ff9fa0();
   input += synapse0x1ff9fe0();
   input += synapse0x1ffa020();
   input += synapse0x1ffa060();
   input += synapse0x1ffa0a0();
   input += synapse0x1ffa0e0();
   input += synapse0x1ffa120();
   input += synapse0x1ffa160();
   input += synapse0x1ffa1a0();
   input += synapse0x1ffa1e0();
   input += synapse0x1ffa220();
   input += synapse0x1ffa260();
   input += synapse0x1ff9cf0();
   input += synapse0x1ff9d30();
   input += synapse0x1ffa3b0();
   input += synapse0x1ffa3f0();
   input += synapse0x1ffa430();
   input += synapse0x1ffa470();
   input += synapse0x1ffa4b0();
   input += synapse0x1ffa4f0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff9b60() {
   double input = input0x1ff9b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ffa530() {
   double input = -4.30084;
   input += synapse0x1ffa870();
   input += synapse0x1ffa8b0();
   input += synapse0x1ffa8f0();
   input += synapse0x1ffa930();
   input += synapse0x1ffa970();
   input += synapse0x1ffa9b0();
   input += synapse0x1ffa9f0();
   input += synapse0x1ffaa30();
   input += synapse0x1ffaa70();
   input += synapse0x1ffaab0();
   input += synapse0x1ffaaf0();
   input += synapse0x1ffab30();
   input += synapse0x1ffab70();
   input += synapse0x1ffabb0();
   input += synapse0x1ffabf0();
   input += synapse0x1ffac30();
   input += synapse0x1ffa6c0();
   input += synapse0x1ffa700();
   input += synapse0x1ffad80();
   input += synapse0x1ffadc0();
   input += synapse0x1ffae00();
   input += synapse0x1ffae40();
   input += synapse0x1ffae80();
   input += synapse0x1ffaec0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ffa530() {
   double input = input0x1ffa530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ffaf00() {
   double input = 1.13911;
   input += synapse0x1ffb240();
   input += synapse0x1fef810();
   input += synapse0x1fef850();
   input += synapse0x1fef890();
   input += synapse0x1fefae0();
   input += synapse0x1fefb20();
   input += synapse0x1fefb60();
   input += synapse0x1fefdb0();
   input += synapse0x1fefdf0();
   input += synapse0x1ff0040();
   input += synapse0x1ff0080();
   input += synapse0x1ff00c0();
   input += synapse0x1ff0310();
   input += synapse0x1ff0350();
   input += synapse0x1ff05a0();
   input += synapse0x1ff05e0();
   input += synapse0x1ffb090();
   input += synapse0x1ffb0d0();
   input += synapse0x1ff0730();
   input += synapse0x1ff0c40();
   input += synapse0x1ff0c80();
   input += synapse0x1ff0cc0();
   input += synapse0x1ff0f10();
   input += synapse0x1ff0f50();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ffaf00() {
   double input = input0x1ffaf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff0f90() {
   double input = 1.03331;
   input += synapse0x1ff0800();
   input += synapse0x1ff0840();
   input += synapse0x1ff0880();
   input += synapse0x1ff08c0();
   input += synapse0x1ff1240();
   input += synapse0x1ffd590();
   input += synapse0x1ffd5d0();
   input += synapse0x1ffd610();
   input += synapse0x1ffd650();
   input += synapse0x1ffd690();
   input += synapse0x1ffd6d0();
   input += synapse0x1ffd710();
   input += synapse0x1ffd750();
   input += synapse0x1ffd790();
   input += synapse0x1ffd7d0();
   input += synapse0x1ffd810();
   input += synapse0x1ff1120();
   input += synapse0x1ff1160();
   input += synapse0x1ffd960();
   input += synapse0x1ffd9a0();
   input += synapse0x1ffd9e0();
   input += synapse0x1ffda20();
   input += synapse0x1ffda60();
   input += synapse0x1ffdaa0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff0f90() {
   double input = input0x1ff0f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ffdae0() {
   double input = 0.00575502;
   input += synapse0x1ffde20();
   input += synapse0x1ffde60();
   input += synapse0x1ffdea0();
   input += synapse0x1ffdee0();
   input += synapse0x1ffdf20();
   input += synapse0x1ffdf60();
   input += synapse0x1ffdfa0();
   input += synapse0x1ffdfe0();
   input += synapse0x1ffe020();
   input += synapse0x1ffe060();
   input += synapse0x1ffe0a0();
   input += synapse0x1ffe0e0();
   input += synapse0x1ffe120();
   input += synapse0x1ffe160();
   input += synapse0x1ffe1a0();
   input += synapse0x1ffe1e0();
   input += synapse0x1ffdc70();
   input += synapse0x1ffdcb0();
   input += synapse0x1ffe330();
   input += synapse0x1ffe370();
   input += synapse0x1ffe3b0();
   input += synapse0x1ffe3f0();
   input += synapse0x1ffe430();
   input += synapse0x1ffe470();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ffdae0() {
   double input = input0x1ffdae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ffe4b0() {
   double input = 7.57782;
   input += synapse0x1ffe7f0();
   input += synapse0x1ffe830();
   input += synapse0x1ffe870();
   input += synapse0x1ffe8b0();
   input += synapse0x1ffe8f0();
   input += synapse0x1ffe930();
   input += synapse0x1ffe970();
   input += synapse0x1ffe9b0();
   input += synapse0x1ffe9f0();
   input += synapse0x1ffea30();
   input += synapse0x1ffea70();
   input += synapse0x1ffeab0();
   input += synapse0x1ffeaf0();
   input += synapse0x1ffeb30();
   input += synapse0x1ffeb70();
   input += synapse0x1ffebb0();
   input += synapse0x1ffe640();
   input += synapse0x1ffe680();
   input += synapse0x1ffed00();
   input += synapse0x1ffed40();
   input += synapse0x1ffed80();
   input += synapse0x1ffedc0();
   input += synapse0x1ffee00();
   input += synapse0x1ffee40();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ffe4b0() {
   double input = input0x1ffe4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ffee80() {
   double input = 6.17508;
   input += synapse0x1fff1c0();
   input += synapse0x1fff200();
   input += synapse0x1fff240();
   input += synapse0x1fff280();
   input += synapse0x1fff2c0();
   input += synapse0x1fff300();
   input += synapse0x1fff340();
   input += synapse0x1fff380();
   input += synapse0x1fff3c0();
   input += synapse0x1fff400();
   input += synapse0x1fff440();
   input += synapse0x1fff480();
   input += synapse0x1fff4c0();
   input += synapse0x1fff500();
   input += synapse0x1fff540();
   input += synapse0x1fff580();
   input += synapse0x1fff010();
   input += synapse0x1fff050();
   input += synapse0x1fff6d0();
   input += synapse0x1fff710();
   input += synapse0x1fff750();
   input += synapse0x1fff790();
   input += synapse0x1fff7d0();
   input += synapse0x1fff810();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ffee80() {
   double input = input0x1ffee80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1fff850() {
   double input = 0.130314;
   input += synapse0x1fffb90();
   input += synapse0x1fffbd0();
   input += synapse0x1fffc10();
   input += synapse0x1fffc50();
   input += synapse0x1fffc90();
   input += synapse0x1fffcd0();
   input += synapse0x1fffd10();
   input += synapse0x1fffd50();
   input += synapse0x1fffd90();
   input += synapse0x1fffdd0();
   input += synapse0x1fffe10();
   input += synapse0x1fffe50();
   input += synapse0x1fffe90();
   input += synapse0x1fffed0();
   input += synapse0x1ffff10();
   input += synapse0x1ffff50();
   input += synapse0x1fff9e0();
   input += synapse0x1fffa20();
   input += synapse0x20000a0();
   input += synapse0x20000e0();
   input += synapse0x2000120();
   input += synapse0x2000160();
   input += synapse0x20001a0();
   input += synapse0x20001e0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1fff850() {
   double input = input0x1fff850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2000220() {
   double input = -1.62093;
   input += synapse0x2000560();
   input += synapse0x20005a0();
   input += synapse0x20005e0();
   input += synapse0x2000620();
   input += synapse0x2000660();
   input += synapse0x20006a0();
   input += synapse0x20006e0();
   input += synapse0x2000720();
   input += synapse0x2000760();
   input += synapse0x20007a0();
   input += synapse0x20007e0();
   input += synapse0x2000820();
   input += synapse0x2000860();
   input += synapse0x20008a0();
   input += synapse0x20008e0();
   input += synapse0x2000920();
   input += synapse0x20003b0();
   input += synapse0x20003f0();
   input += synapse0x2000a70();
   input += synapse0x2000ab0();
   input += synapse0x2000af0();
   input += synapse0x2000b30();
   input += synapse0x2000b70();
   input += synapse0x2000bb0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2000220() {
   double input = input0x2000220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2000bf0() {
   double input = -0.872855;
   input += synapse0x2000f30();
   input += synapse0x2000f70();
   input += synapse0x2000fb0();
   input += synapse0x2000ff0();
   input += synapse0x2001030();
   input += synapse0x2001070();
   input += synapse0x20010b0();
   input += synapse0x20010f0();
   input += synapse0x2001130();
   input += synapse0x2001170();
   input += synapse0x20011b0();
   input += synapse0x20011f0();
   input += synapse0x2001230();
   input += synapse0x2001270();
   input += synapse0x20012b0();
   input += synapse0x20012f0();
   input += synapse0x2000d80();
   input += synapse0x2000dc0();
   input += synapse0x2001440();
   input += synapse0x2001480();
   input += synapse0x20014c0();
   input += synapse0x2001500();
   input += synapse0x2001540();
   input += synapse0x2001580();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2000bf0() {
   double input = input0x2000bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x20015c0() {
   double input = -0.385884;
   input += synapse0x2001900();
   input += synapse0x2001940();
   input += synapse0x2001980();
   input += synapse0x20019c0();
   input += synapse0x2001a00();
   input += synapse0x2001a40();
   input += synapse0x2001a80();
   input += synapse0x2001ac0();
   input += synapse0x2001b00();
   input += synapse0x2001b40();
   input += synapse0x2001b80();
   input += synapse0x2001bc0();
   input += synapse0x2001c00();
   input += synapse0x2001c40();
   input += synapse0x2001c80();
   input += synapse0x2001cc0();
   input += synapse0x2001750();
   input += synapse0x2001790();
   input += synapse0x2001e10();
   input += synapse0x2001e50();
   input += synapse0x2001e90();
   input += synapse0x2001ed0();
   input += synapse0x2001f10();
   input += synapse0x2001f50();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x20015c0() {
   double input = input0x20015c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2001f90() {
   double input = 0.0454435;
   input += synapse0x1feaa00();
   input += synapse0x1feaa40();
   input += synapse0x1feaa80();
   input += synapse0x1feaac0();
   input += synapse0x1feab00();
   input += synapse0x1feab40();
   input += synapse0x1feab80();
   input += synapse0x1feabc0();
   input += synapse0x20026e0();
   input += synapse0x2002720();
   input += synapse0x2002760();
   input += synapse0x20027a0();
   input += synapse0x20027e0();
   input += synapse0x2002820();
   input += synapse0x2002860();
   input += synapse0x20028a0();
   input += synapse0x2002120();
   input += synapse0x2002160();
   input += synapse0x20029f0();
   input += synapse0x2002a30();
   input += synapse0x2002a70();
   input += synapse0x2002ab0();
   input += synapse0x2002af0();
   input += synapse0x2002b30();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2001f90() {
   double input = input0x2001f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2002b70() {
   double input = 0.233196;
   input += synapse0x2002eb0();
   input += synapse0x2002ef0();
   input += synapse0x2002f30();
   input += synapse0x2002f70();
   input += synapse0x2002fb0();
   input += synapse0x2002ff0();
   input += synapse0x2003030();
   input += synapse0x2003070();
   input += synapse0x20030b0();
   input += synapse0x20030f0();
   input += synapse0x2003130();
   input += synapse0x2003170();
   input += synapse0x20031b0();
   input += synapse0x20031f0();
   input += synapse0x2003230();
   input += synapse0x2003270();
   input += synapse0x2002d00();
   input += synapse0x2002d40();
   input += synapse0x20033c0();
   input += synapse0x2003400();
   input += synapse0x2003440();
   input += synapse0x2003480();
   input += synapse0x20034c0();
   input += synapse0x2003500();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2002b70() {
   double input = input0x2002b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2003540() {
   double input = -10.1821;
   input += synapse0x2003880();
   input += synapse0x20038c0();
   input += synapse0x2003900();
   input += synapse0x2003940();
   input += synapse0x2003980();
   input += synapse0x20039c0();
   input += synapse0x2003a00();
   input += synapse0x2003a40();
   input += synapse0x2003a80();
   input += synapse0x2003ac0();
   input += synapse0x2003b00();
   input += synapse0x2003b40();
   input += synapse0x2003b80();
   input += synapse0x2003bc0();
   input += synapse0x2003c00();
   input += synapse0x2003c40();
   input += synapse0x20036d0();
   input += synapse0x2003710();
   input += synapse0x1ff4240();
   input += synapse0x1ff4280();
   input += synapse0x1ff42c0();
   input += synapse0x1ff4300();
   input += synapse0x1ff4340();
   input += synapse0x1ff4380();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2003540() {
   double input = input0x2003540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff43c0() {
   double input = 13.0294;
   input += synapse0x1ff4700();
   input += synapse0x1ff4740();
   input += synapse0x1ff4780();
   input += synapse0x1ff47c0();
   input += synapse0x1ff4800();
   input += synapse0x1ff4840();
   input += synapse0x1ff4880();
   input += synapse0x1ff48c0();
   input += synapse0x1ff4900();
   input += synapse0x1ff4940();
   input += synapse0x1ff4980();
   input += synapse0x1ff49c0();
   input += synapse0x1ff4a00();
   input += synapse0x1ff4a40();
   input += synapse0x1ff4a80();
   input += synapse0x1ff4ac0();
   input += synapse0x1ff4550();
   input += synapse0x1ff4590();
   input += synapse0x1ff4c10();
   input += synapse0x1ff4c50();
   input += synapse0x1ff4c90();
   input += synapse0x1ff4cd0();
   input += synapse0x1ff4d10();
   input += synapse0x1ff4d50();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff43c0() {
   double input = input0x1ff43c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff4d90() {
   double input = 10.2629;
   input += synapse0x1ff50d0();
   input += synapse0x1ff5110();
   input += synapse0x1ff5150();
   input += synapse0x1ff5190();
   input += synapse0x1ff51d0();
   input += synapse0x1ff5210();
   input += synapse0x1ff5250();
   input += synapse0x1ff5290();
   input += synapse0x1ff52d0();
   input += synapse0x1ff5310();
   input += synapse0x1ff5350();
   input += synapse0x1ff5390();
   input += synapse0x1ff53d0();
   input += synapse0x1ff5410();
   input += synapse0x1ff5450();
   input += synapse0x1ff5490();
   input += synapse0x1ff4f20();
   input += synapse0x1ff4f60();
   input += synapse0x1ff55e0();
   input += synapse0x1ff5620();
   input += synapse0x1ff5660();
   input += synapse0x1ff56a0();
   input += synapse0x1ff56e0();
   input += synapse0x1ff5720();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff4d90() {
   double input = input0x1ff4d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x1ff5760() {
   double input = 2.00672;
   input += synapse0x1ff5aa0();
   input += synapse0x1ff5ae0();
   input += synapse0x1ff5b20();
   input += synapse0x1ff5b60();
   input += synapse0x1ff5ba0();
   input += synapse0x1ff5be0();
   input += synapse0x1ff5c20();
   input += synapse0x1ff5c60();
   input += synapse0x1ff5ca0();
   input += synapse0x1ff5ce0();
   input += synapse0x1ff5d20();
   input += synapse0x1ff5d60();
   input += synapse0x1ff5da0();
   input += synapse0x1ff5de0();
   input += synapse0x1ff5e20();
   input += synapse0x1ff5e60();
   input += synapse0x1ff58f0();
   input += synapse0x1ff5930();
   input += synapse0x1ff5fb0();
   input += synapse0x1ff5ff0();
   input += synapse0x1ff6030();
   input += synapse0x1ff6070();
   input += synapse0x1ff60b0();
   input += synapse0x1ff60f0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x1ff5760() {
   double input = input0x1ff5760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2007da0() {
   double input = -2.64872;
   input += synapse0x2007fc0();
   input += synapse0x2008000();
   input += synapse0x2008040();
   input += synapse0x2008080();
   input += synapse0x20080c0();
   input += synapse0x2008100();
   input += synapse0x2008140();
   input += synapse0x2008180();
   input += synapse0x20081c0();
   input += synapse0x2008200();
   input += synapse0x2008240();
   input += synapse0x2008280();
   input += synapse0x20082c0();
   input += synapse0x2008300();
   input += synapse0x2008340();
   input += synapse0x2008380();
   input += synapse0x1ff6130();
   input += synapse0x1ff6170();
   input += synapse0x20084d0();
   input += synapse0x2008510();
   input += synapse0x2008550();
   input += synapse0x2008590();
   input += synapse0x20085d0();
   input += synapse0x2008610();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2007da0() {
   double input = input0x2007da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2008650() {
   double input = -1.1235;
   input += synapse0x2008990();
   input += synapse0x20089d0();
   input += synapse0x2008a10();
   input += synapse0x2008a50();
   input += synapse0x2008a90();
   input += synapse0x2008ad0();
   input += synapse0x2008b10();
   input += synapse0x2008b50();
   input += synapse0x2008b90();
   input += synapse0x2008bd0();
   input += synapse0x2008c10();
   input += synapse0x2008c50();
   input += synapse0x2008c90();
   input += synapse0x2008cd0();
   input += synapse0x2008d10();
   input += synapse0x2008d50();
   input += synapse0x20087e0();
   input += synapse0x2008820();
   input += synapse0x2008ea0();
   input += synapse0x2008ee0();
   input += synapse0x2008f20();
   input += synapse0x2008f60();
   input += synapse0x2008fa0();
   input += synapse0x2008fe0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2008650() {
   double input = input0x2008650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2009020() {
   double input = -0.968065;
   input += synapse0x2009360();
   input += synapse0x20093a0();
   input += synapse0x20093e0();
   input += synapse0x2009420();
   input += synapse0x2009460();
   input += synapse0x20094a0();
   input += synapse0x20094e0();
   input += synapse0x2009520();
   input += synapse0x2009560();
   input += synapse0x20095a0();
   input += synapse0x20095e0();
   input += synapse0x2009620();
   input += synapse0x2009660();
   input += synapse0x20096a0();
   input += synapse0x20096e0();
   input += synapse0x2009720();
   input += synapse0x20091b0();
   input += synapse0x20091f0();
   input += synapse0x2009870();
   input += synapse0x20098b0();
   input += synapse0x20098f0();
   input += synapse0x2009930();
   input += synapse0x2009970();
   input += synapse0x20099b0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2009020() {
   double input = input0x2009020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x20099f0() {
   double input = -0.18908;
   input += synapse0x2009d30();
   input += synapse0x2009d70();
   input += synapse0x2009db0();
   input += synapse0x2009df0();
   input += synapse0x2009e30();
   input += synapse0x2009e70();
   input += synapse0x2009eb0();
   input += synapse0x2009ef0();
   input += synapse0x2009f30();
   input += synapse0x2009f70();
   input += synapse0x2009fb0();
   input += synapse0x2009ff0();
   input += synapse0x200a030();
   input += synapse0x200a070();
   input += synapse0x200a0b0();
   input += synapse0x200a0f0();
   input += synapse0x2009b80();
   input += synapse0x2009bc0();
   input += synapse0x200a240();
   input += synapse0x200a280();
   input += synapse0x200a2c0();
   input += synapse0x200a300();
   input += synapse0x200a340();
   input += synapse0x200a380();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x20099f0() {
   double input = input0x20099f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2010bf0() {
   double input = -3.7008;
   input += synapse0x1daa290();
   input += synapse0x1daa2d0();
   input += synapse0x1fe7e30();
   input += synapse0x1fe7e70();
   input += synapse0x1fe8800();
   input += synapse0x1fe8840();
   input += synapse0x1fe95d0();
   input += synapse0x1fe9610();
   input += synapse0x1fe9fa0();
   input += synapse0x1fe9fe0();
   input += synapse0x1fea970();
   input += synapse0x1fea9b0();
   input += synapse0x1feb450();
   input += synapse0x1feb490();
   input += synapse0x1febe20();
   input += synapse0x1febe60();
   input += synapse0x1fe8f00();
   input += synapse0x1fe8f40();
   input += synapse0x1fed9d0();
   input += synapse0x1feda10();
   input += synapse0x1fee3a0();
   input += synapse0x1fee3e0();
   input += synapse0x1feed70();
   input += synapse0x1feedb0();
   input += synapse0x1fef740();
   input += synapse0x1fef780();
   input += synapse0x1fe38e0();
   input += synapse0x1fe3920();
   input += synapse0x1ff1830();
   input += synapse0x1ff1870();
   input += synapse0x1ff2200();
   input += synapse0x1ff2240();
   input += synapse0x1ff2bd0();
   input += synapse0x1ff2c10();
   input += synapse0x1ff35a0();
   input += synapse0x1ff35e0();
   input += synapse0x1ff3f70();
   input += synapse0x1ff3fb0();
   input += synapse0x1fecac0();
   input += synapse0x1fecb00();
   input += synapse0x1ff6370();
   input += synapse0x1ff63b0();
   input += synapse0x1ff6d00();
   input += synapse0x1ff6d40();
   input += synapse0x1ff76d0();
   input += synapse0x1ff7710();
   input += synapse0x1ff80a0();
   input += synapse0x1ff80e0();
   input += synapse0x1ff8a70();
   input += synapse0x1ff8ab0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2010bf0() {
   double input = input0x2010bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2010f90() {
   double input = -0.728598;
   input += synapse0x1ffb1b0();
   input += synapse0x1ffb1f0();
   input += synapse0x1ff0770();
   input += synapse0x1ff07b0();
   input += synapse0x1ffdd90();
   input += synapse0x1ffddd0();
   input += synapse0x1ffe760();
   input += synapse0x1ffe7a0();
   input += synapse0x1fff130();
   input += synapse0x1fff170();
   input += synapse0x1fffb00();
   input += synapse0x1fffb40();
   input += synapse0x20004d0();
   input += synapse0x2000510();
   input += synapse0x2000ea0();
   input += synapse0x2000ee0();
   input += synapse0x2001870();
   input += synapse0x20018b0();
   input += synapse0x2002240();
   input += synapse0x2002280();
   input += synapse0x2002e20();
   input += synapse0x2002e60();
   input += synapse0x20037f0();
   input += synapse0x2003830();
   input += synapse0x1ff4670();
   input += synapse0x1ff46b0();
   input += synapse0x1ff5040();
   input += synapse0x1ff5080();
   input += synapse0x1ff5a10();
   input += synapse0x1ff5a50();
   input += synapse0x2007f30();
   input += synapse0x2007f70();
   input += synapse0x2008900();
   input += synapse0x2008940();
   input += synapse0x20092d0();
   input += synapse0x2009310();
   input += synapse0x2009ca0();
   input += synapse0x2009ce0();
   input += synapse0x1fe5b90();
   input += synapse0x1fe5bd0();
   input += synapse0x1ff9440();
   input += synapse0x1ff9480();
   input += synapse0x200a3c0();
   input += synapse0x200a400();
   input += synapse0x200a440();
   input += synapse0x200a480();
   input += synapse0x2011330();
   input += synapse0x2011370();
   input += synapse0x20113b0();
   input += synapse0x20113f0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2010f90() {
   double input = input0x2010f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2011430() {
   double input = 0.358577;
   input += synapse0x2011770();
   input += synapse0x20117b0();
   input += synapse0x20117f0();
   input += synapse0x2011830();
   input += synapse0x2011870();
   input += synapse0x20118b0();
   input += synapse0x20118f0();
   input += synapse0x2011930();
   input += synapse0x2011970();
   input += synapse0x20119b0();
   input += synapse0x20119f0();
   input += synapse0x2011a30();
   input += synapse0x2011a70();
   input += synapse0x2011ab0();
   input += synapse0x2011af0();
   input += synapse0x2011b30();
   input += synapse0x20115c0();
   input += synapse0x2011600();
   input += synapse0x2011c80();
   input += synapse0x2011cc0();
   input += synapse0x2011d00();
   input += synapse0x2011d40();
   input += synapse0x2011d80();
   input += synapse0x2011dc0();
   input += synapse0x2011e00();
   input += synapse0x2011e40();
   input += synapse0x2011e80();
   input += synapse0x2011ec0();
   input += synapse0x2011f00();
   input += synapse0x2011f40();
   input += synapse0x2011f80();
   input += synapse0x2011fc0();
   input += synapse0x2011b70();
   input += synapse0x2011bb0();
   input += synapse0x2011bf0();
   input += synapse0x2011c30();
   input += synapse0x2012210();
   input += synapse0x2012250();
   input += synapse0x2012290();
   input += synapse0x20122d0();
   input += synapse0x2012310();
   input += synapse0x2012350();
   input += synapse0x2012390();
   input += synapse0x20123d0();
   input += synapse0x2012410();
   input += synapse0x2012450();
   input += synapse0x2012490();
   input += synapse0x20124d0();
   input += synapse0x2012510();
   input += synapse0x2012550();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2011430() {
   double input = input0x2011430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2012590() {
   double input = -1.00058;
   input += synapse0x20128d0();
   input += synapse0x2012910();
   input += synapse0x2012950();
   input += synapse0x2012990();
   input += synapse0x20129d0();
   input += synapse0x2012a10();
   input += synapse0x2012a50();
   input += synapse0x2012a90();
   input += synapse0x2012ad0();
   input += synapse0x2012b10();
   input += synapse0x2012b50();
   input += synapse0x2012b90();
   input += synapse0x2012bd0();
   input += synapse0x2012c10();
   input += synapse0x2012c50();
   input += synapse0x2012c90();
   input += synapse0x2012720();
   input += synapse0x2012760();
   input += synapse0x2012de0();
   input += synapse0x2012e20();
   input += synapse0x2012e60();
   input += synapse0x2012ea0();
   input += synapse0x2012ee0();
   input += synapse0x2012f20();
   input += synapse0x2012f60();
   input += synapse0x2012fa0();
   input += synapse0x2012fe0();
   input += synapse0x2013020();
   input += synapse0x2013060();
   input += synapse0x20130a0();
   input += synapse0x20130e0();
   input += synapse0x2013120();
   input += synapse0x2012cd0();
   input += synapse0x2012d10();
   input += synapse0x2012d50();
   input += synapse0x2012d90();
   input += synapse0x2013370();
   input += synapse0x20133b0();
   input += synapse0x20133f0();
   input += synapse0x2013430();
   input += synapse0x2013470();
   input += synapse0x20134b0();
   input += synapse0x20134f0();
   input += synapse0x2013530();
   input += synapse0x2013570();
   input += synapse0x20135b0();
   input += synapse0x20135f0();
   input += synapse0x2013630();
   input += synapse0x2013670();
   input += synapse0x20136b0();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2012590() {
   double input = input0x2012590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x20136f0() {
   double input = -4.1331;
   input += synapse0x2013a30();
   input += synapse0x2013a70();
   input += synapse0x2013ab0();
   input += synapse0x2013af0();
   input += synapse0x2013b30();
   input += synapse0x2013b70();
   input += synapse0x2013bb0();
   input += synapse0x2013bf0();
   input += synapse0x2013c30();
   input += synapse0x2013c70();
   input += synapse0x2013cb0();
   input += synapse0x2013cf0();
   input += synapse0x2013d30();
   input += synapse0x2013d70();
   input += synapse0x2013db0();
   input += synapse0x2013df0();
   input += synapse0x2013880();
   input += synapse0x20138c0();
   input += synapse0x2013f40();
   input += synapse0x2013f80();
   input += synapse0x2013fc0();
   input += synapse0x2014000();
   input += synapse0x2014040();
   input += synapse0x2014080();
   input += synapse0x20140c0();
   input += synapse0x2014100();
   input += synapse0x2014140();
   input += synapse0x2014180();
   input += synapse0x20141c0();
   input += synapse0x2014200();
   input += synapse0x2014240();
   input += synapse0x2014280();
   input += synapse0x2013e30();
   input += synapse0x2013e70();
   input += synapse0x2013eb0();
   input += synapse0x2013ef0();
   input += synapse0x20144d0();
   input += synapse0x2014510();
   input += synapse0x2014550();
   input += synapse0x2014590();
   input += synapse0x20145d0();
   input += synapse0x2014610();
   input += synapse0x2014650();
   input += synapse0x2014690();
   input += synapse0x20146d0();
   input += synapse0x2014710();
   input += synapse0x2014750();
   input += synapse0x2014790();
   input += synapse0x20147d0();
   input += synapse0x2014810();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x20136f0() {
   double input = input0x20136f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dR::input0x2014850() {
   double input = 13.6118;
   input += synapse0x2014a70();
   input += synapse0x2014ab0();
   input += synapse0x2014af0();
   input += synapse0x2014b30();
   input += synapse0x2014b70();
   return input;
}

double NNfunction_ns_chi02_dR::neuron0x2014850() {
   double input = input0x2014850();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_dR::synapse0x1fe0800() {
   return (neuron0x1fe0940()*-2.43653);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0840() {
   return (neuron0x1fe0c80()*-0.918001);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5c20() {
   return (neuron0x1fe0fc0()*1.32533);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5c60() {
   return (neuron0x1fe1300()*0.656202);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5ca0() {
   return (neuron0x1fe1640()*0.497731);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5ce0() {
   return (neuron0x1fe1980()*1.94774);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5d20() {
   return (neuron0x1fe1cc0()*0.841844);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5d60() {
   return (neuron0x1fe2000()*-0.0181161);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5da0() {
   return (neuron0x1fe2340()*0.935914);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5de0() {
   return (neuron0x1fe2680()*2.16004);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5e20() {
   return (neuron0x1fe29c0()*1.47186);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5e60() {
   return (neuron0x1fe2d00()*-1.53703);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5ea0() {
   return (neuron0x1fe3040()*0.090672);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5ee0() {
   return (neuron0x1fe3380()*-1.80851);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5f20() {
   return (neuron0x1fe36c0()*-0.635148);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5f60() {
   return (neuron0x1fe3a00()*-0.00606658);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0770() {
   return (neuron0x1fe3d40()*-0.0710295);
}

double NNfunction_ns_chi02_dR::synapse0x1fe07b0() {
   return (neuron0x1fe42a0()*-0.271534);
}

double NNfunction_ns_chi02_dR::synapse0x1d9bae0() {
   return (neuron0x1fe44c0()*-0.221675);
}

double NNfunction_ns_chi02_dR::synapse0x1d9bb20() {
   return (neuron0x1fe4800()*-0.578059);
}

double NNfunction_ns_chi02_dR::synapse0x1fe61c0() {
   return (neuron0x1fe4b40()*-0.29649);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6200() {
   return (neuron0x1fe4e80()*0.777853);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6240() {
   return (neuron0x1fe51c0()*-0.0232894);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6280() {
   return (neuron0x1fe5500()*2.86664);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6600() {
   return (neuron0x1fe0940()*1.34964);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6640() {
   return (neuron0x1fe0c80()*-1.05308);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6680() {
   return (neuron0x1fe0fc0()*-0.817151);
}

double NNfunction_ns_chi02_dR::synapse0x1fe66c0() {
   return (neuron0x1fe1300()*-0.75357);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6700() {
   return (neuron0x1fe1640()*-0.505632);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6740() {
   return (neuron0x1fe1980()*1.4794);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6780() {
   return (neuron0x1fe1cc0()*0.672898);
}

double NNfunction_ns_chi02_dR::synapse0x1fe67c0() {
   return (neuron0x1fe2000()*1.12796);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6800() {
   return (neuron0x1fe2340()*0.255857);
}

double NNfunction_ns_chi02_dR::synapse0x1fe60b0() {
   return (neuron0x1fe2680()*-0.230792);
}

double NNfunction_ns_chi02_dR::synapse0x1fe60f0() {
   return (neuron0x1fe29c0()*0.173382);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6130() {
   return (neuron0x1fe2d00()*-1.6157);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6170() {
   return (neuron0x1fe3040()*-0.629539);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6a50() {
   return (neuron0x1fe3380()*-0.548619);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6a90() {
   return (neuron0x1fe36c0()*-0.493526);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6ad0() {
   return (neuron0x1fe3a00()*-0.0202863);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6450() {
   return (neuron0x1fe3d40()*1.33138);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6490() {
   return (neuron0x1fe42a0()*0.473184);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6c20() {
   return (neuron0x1fe44c0()*-0.533715);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6c60() {
   return (neuron0x1fe4800()*0.170336);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6ca0() {
   return (neuron0x1fe4b40()*-0.215373);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6ce0() {
   return (neuron0x1fe4e80()*-1.09613);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6d20() {
   return (neuron0x1fe51c0()*-0.288119);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6d60() {
   return (neuron0x1fe5500()*0.522594);
}

double NNfunction_ns_chi02_dR::synapse0x1fe70e0() {
   return (neuron0x1fe0940()*0.363825);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7120() {
   return (neuron0x1fe0c80()*2.11911);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7160() {
   return (neuron0x1fe0fc0()*3.62547);
}

double NNfunction_ns_chi02_dR::synapse0x1fe71a0() {
   return (neuron0x1fe1300()*-0.0235276);
}

double NNfunction_ns_chi02_dR::synapse0x1fe71e0() {
   return (neuron0x1fe1640()*0.124287);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7220() {
   return (neuron0x1fe1980()*0.0248111);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7260() {
   return (neuron0x1fe1cc0()*0.110489);
}

double NNfunction_ns_chi02_dR::synapse0x1fe72a0() {
   return (neuron0x1fe2000()*-0.444559);
}

double NNfunction_ns_chi02_dR::synapse0x1fe72e0() {
   return (neuron0x1fe2340()*0.10102);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7320() {
   return (neuron0x1fe2680()*0.374547);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7360() {
   return (neuron0x1fe29c0()*0.823409);
}

double NNfunction_ns_chi02_dR::synapse0x1fe73a0() {
   return (neuron0x1fe2d00()*0.20131);
}

double NNfunction_ns_chi02_dR::synapse0x1fe73e0() {
   return (neuron0x1fe3040()*-0.325212);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7420() {
   return (neuron0x1fe3380()*0.419975);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7460() {
   return (neuron0x1fe36c0()*-0.446843);
}

double NNfunction_ns_chi02_dR::synapse0x1fe74a0() {
   return (neuron0x1fe3a00()*0.0866383);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6f30() {
   return (neuron0x1fe3d40()*0.0408461);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6f70() {
   return (neuron0x1fe42a0()*0.874768);
}

double NNfunction_ns_chi02_dR::synapse0x1d9c1d0() {
   return (neuron0x1fe44c0()*0.00268578);
}

double NNfunction_ns_chi02_dR::synapse0x1da9aa0() {
   return (neuron0x1fe4800()*1.05849);
}

double NNfunction_ns_chi02_dR::synapse0x1da9ae0() {
   return (neuron0x1fe4b40()*-0.187044);
}

double NNfunction_ns_chi02_dR::synapse0x1fcf9d0() {
   return (neuron0x1fe4e80()*-0.0863831);
}

double NNfunction_ns_chi02_dR::synapse0x1fcfa10() {
   return (neuron0x1fe51c0()*-0.785199);
}

double NNfunction_ns_chi02_dR::synapse0x1fcfa50() {
   return (neuron0x1fe5500()*-0.522473);
}

double NNfunction_ns_chi02_dR::synapse0x1daa320() {
   return (neuron0x1fe0940()*-0.0454857);
}

double NNfunction_ns_chi02_dR::synapse0x1fe69d0() {
   return (neuron0x1fe0c80()*-7.55385);
}

double NNfunction_ns_chi02_dR::synapse0x1fe6a10() {
   return (neuron0x1fe0fc0()*1.08037);
}

double NNfunction_ns_chi02_dR::synapse0x1fe75f0() {
   return (neuron0x1fe1300()*-0.0169885);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7630() {
   return (neuron0x1fe1640()*0.0230897);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7670() {
   return (neuron0x1fe1980()*-0.031653);
}

double NNfunction_ns_chi02_dR::synapse0x1fe76b0() {
   return (neuron0x1fe1cc0()*-0.0150077);
}

double NNfunction_ns_chi02_dR::synapse0x1fe76f0() {
   return (neuron0x1fe2000()*0.041833);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7730() {
   return (neuron0x1fe2340()*-0.00640944);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7770() {
   return (neuron0x1fe2680()*0.0133281);
}

double NNfunction_ns_chi02_dR::synapse0x1fe77b0() {
   return (neuron0x1fe29c0()*-0.00255168);
}

double NNfunction_ns_chi02_dR::synapse0x1fe77f0() {
   return (neuron0x1fe2d00()*-0.0105047);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7830() {
   return (neuron0x1fe3040()*-0.0175032);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7870() {
   return (neuron0x1fe3380()*-0.00935253);
}

double NNfunction_ns_chi02_dR::synapse0x1fe78b0() {
   return (neuron0x1fe36c0()*0.00206554);
}

double NNfunction_ns_chi02_dR::synapse0x1fe78f0() {
   return (neuron0x1fe3a00()*-0.0182584);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0880() {
   return (neuron0x1fe3d40()*0.0543573);
}

double NNfunction_ns_chi02_dR::synapse0x1fe08c0() {
   return (neuron0x1fe42a0()*-0.060012);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0900() {
   return (neuron0x1fe44c0()*0.0105034);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7a40() {
   return (neuron0x1fe4800()*-0.00905502);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7a80() {
   return (neuron0x1fe4b40()*0.0316582);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7ac0() {
   return (neuron0x1fe4e80()*-0.00238559);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7b00() {
   return (neuron0x1fe51c0()*0.073453);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7b40() {
   return (neuron0x1fe5500()*-6.3103);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7ec0() {
   return (neuron0x1fe0940()*0.476863);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7f00() {
   return (neuron0x1fe0c80()*-0.329319);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7f40() {
   return (neuron0x1fe0fc0()*-0.676894);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7f80() {
   return (neuron0x1fe1300()*-0.299797);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7fc0() {
   return (neuron0x1fe1640()*-0.264933);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8000() {
   return (neuron0x1fe1980()*-1.71528);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8040() {
   return (neuron0x1fe1cc0()*0.163034);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8080() {
   return (neuron0x1fe2000()*-0.233153);
}

double NNfunction_ns_chi02_dR::synapse0x1fe80c0() {
   return (neuron0x1fe2340()*0.828813);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8100() {
   return (neuron0x1fe2680()*0.495841);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8140() {
   return (neuron0x1fe29c0()*0.314843);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8180() {
   return (neuron0x1fe2d00()*-0.896343);
}

double NNfunction_ns_chi02_dR::synapse0x1fe81c0() {
   return (neuron0x1fe3040()*-0.681004);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8200() {
   return (neuron0x1fe3380()*-0.315241);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8240() {
   return (neuron0x1fe36c0()*-0.45815);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8280() {
   return (neuron0x1fe3a00()*0.24638);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7d10() {
   return (neuron0x1fe3d40()*0.306207);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7d50() {
   return (neuron0x1fe42a0()*1.36525);
}

double NNfunction_ns_chi02_dR::synapse0x1fe83d0() {
   return (neuron0x1fe44c0()*-0.220952);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8410() {
   return (neuron0x1fe4800()*-0.970773);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8450() {
   return (neuron0x1fe4b40()*0.0590746);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8490() {
   return (neuron0x1fe4e80()*0.209822);
}

double NNfunction_ns_chi02_dR::synapse0x1fe84d0() {
   return (neuron0x1fe51c0()*-0.0567042);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8510() {
   return (neuron0x1fe5500()*-1.63964);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8890() {
   return (neuron0x1fe0940()*0.019124);
}

double NNfunction_ns_chi02_dR::synapse0x1fe88d0() {
   return (neuron0x1fe0c80()*-6.60741);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8910() {
   return (neuron0x1fe0fc0()*5.97865);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8950() {
   return (neuron0x1fe1300()*-0.0221539);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8990() {
   return (neuron0x1fe1640()*-0.0523491);
}

double NNfunction_ns_chi02_dR::synapse0x1fe89d0() {
   return (neuron0x1fe1980()*0.0283127);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8a10() {
   return (neuron0x1fe1cc0()*0.0407621);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8a50() {
   return (neuron0x1fe2000()*-0.0237774);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8a90() {
   return (neuron0x1fe2340()*0.00369588);
}

double NNfunction_ns_chi02_dR::synapse0x1da9df0() {
   return (neuron0x1fe2680()*-0.0157029);
}

double NNfunction_ns_chi02_dR::synapse0x1da9e30() {
   return (neuron0x1fe29c0()*0.014716);
}

double NNfunction_ns_chi02_dR::synapse0x1da9e70() {
   return (neuron0x1fe2d00()*-0.025044);
}

double NNfunction_ns_chi02_dR::synapse0x1da9eb0() {
   return (neuron0x1fe3040()*0.0272821);
}

double NNfunction_ns_chi02_dR::synapse0x1da9ef0() {
   return (neuron0x1fe3380()*0.0236468);
}

double NNfunction_ns_chi02_dR::synapse0x1da9f30() {
   return (neuron0x1fe36c0()*-0.139269);
}

double NNfunction_ns_chi02_dR::synapse0x1da9f70() {
   return (neuron0x1fe3a00()*0.03512);
}

double NNfunction_ns_chi02_dR::synapse0x1fe86e0() {
   return (neuron0x1fe3d40()*0.00908994);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8720() {
   return (neuron0x1fe42a0()*0.282668);
}

double NNfunction_ns_chi02_dR::synapse0x1daa0c0() {
   return (neuron0x1fe44c0()*0.0321786);
}

double NNfunction_ns_chi02_dR::synapse0x1daa100() {
   return (neuron0x1fe4800()*0.0679618);
}

double NNfunction_ns_chi02_dR::synapse0x1daa140() {
   return (neuron0x1fe4b40()*-0.0124682);
}

double NNfunction_ns_chi02_dR::synapse0x1daa180() {
   return (neuron0x1fe4e80()*-0.0403491);
}

double NNfunction_ns_chi02_dR::synapse0x1daa1c0() {
   return (neuron0x1fe51c0()*-0.109239);
}

double NNfunction_ns_chi02_dR::synapse0x1fe92e0() {
   return (neuron0x1fe5500()*-0.222807);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9660() {
   return (neuron0x1fe0940()*-0.123613);
}

double NNfunction_ns_chi02_dR::synapse0x1fe96a0() {
   return (neuron0x1fe0c80()*-0.0713404);
}

double NNfunction_ns_chi02_dR::synapse0x1fe96e0() {
   return (neuron0x1fe0fc0()*-0.393736);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9720() {
   return (neuron0x1fe1300()*0.153307);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9760() {
   return (neuron0x1fe1640()*-0.0795224);
}

double NNfunction_ns_chi02_dR::synapse0x1fe97a0() {
   return (neuron0x1fe1980()*-0.00694258);
}

double NNfunction_ns_chi02_dR::synapse0x1fe97e0() {
   return (neuron0x1fe1cc0()*-0.222301);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9820() {
   return (neuron0x1fe2000()*0.101348);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9860() {
   return (neuron0x1fe2340()*-0.0719032);
}

double NNfunction_ns_chi02_dR::synapse0x1fe98a0() {
   return (neuron0x1fe2680()*0.116311);
}

double NNfunction_ns_chi02_dR::synapse0x1fe98e0() {
   return (neuron0x1fe29c0()*0.177425);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9920() {
   return (neuron0x1fe2d00()*-0.10764);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9960() {
   return (neuron0x1fe3040()*-0.0808468);
}

double NNfunction_ns_chi02_dR::synapse0x1fe99a0() {
   return (neuron0x1fe3380()*0.11367);
}

double NNfunction_ns_chi02_dR::synapse0x1fe99e0() {
   return (neuron0x1fe36c0()*0.281164);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9a20() {
   return (neuron0x1fe3a00()*-0.953375);
}

double NNfunction_ns_chi02_dR::synapse0x1fe94b0() {
   return (neuron0x1fe3d40()*0.0632095);
}

double NNfunction_ns_chi02_dR::synapse0x1fe94f0() {
   return (neuron0x1fe42a0()*0.378276);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9b70() {
   return (neuron0x1fe44c0()*0.0419951);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9bb0() {
   return (neuron0x1fe4800()*0.0061688);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9bf0() {
   return (neuron0x1fe4b40()*0.0110081);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9c30() {
   return (neuron0x1fe4e80()*-0.0240801);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9c70() {
   return (neuron0x1fe51c0()*0.0921348);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9cb0() {
   return (neuron0x1fe5500()*0.196133);
}

double NNfunction_ns_chi02_dR::synapse0x1fea030() {
   return (neuron0x1fe0940()*0.00261426);
}

double NNfunction_ns_chi02_dR::synapse0x1fea070() {
   return (neuron0x1fe0c80()*1.68547);
}

double NNfunction_ns_chi02_dR::synapse0x1fea0b0() {
   return (neuron0x1fe0fc0()*0.0526686);
}

double NNfunction_ns_chi02_dR::synapse0x1fea0f0() {
   return (neuron0x1fe1300()*-0.0076848);
}

double NNfunction_ns_chi02_dR::synapse0x1fea130() {
   return (neuron0x1fe1640()*0.00104546);
}

double NNfunction_ns_chi02_dR::synapse0x1fea170() {
   return (neuron0x1fe1980()*-0.0109431);
}

double NNfunction_ns_chi02_dR::synapse0x1fea1b0() {
   return (neuron0x1fe1cc0()*-0.0085452);
}

double NNfunction_ns_chi02_dR::synapse0x1fea1f0() {
   return (neuron0x1fe2000()*-0.0053766);
}

double NNfunction_ns_chi02_dR::synapse0x1fea230() {
   return (neuron0x1fe2340()*-0.00298018);
}

double NNfunction_ns_chi02_dR::synapse0x1fea270() {
   return (neuron0x1fe2680()*-0.00408643);
}

double NNfunction_ns_chi02_dR::synapse0x1fea2b0() {
   return (neuron0x1fe29c0()*0.0106383);
}

double NNfunction_ns_chi02_dR::synapse0x1fea2f0() {
   return (neuron0x1fe2d00()*-0.000535647);
}

double NNfunction_ns_chi02_dR::synapse0x1fea330() {
   return (neuron0x1fe3040()*0.00108151);
}

double NNfunction_ns_chi02_dR::synapse0x1fea370() {
   return (neuron0x1fe3380()*-0.00252308);
}

double NNfunction_ns_chi02_dR::synapse0x1fea3b0() {
   return (neuron0x1fe36c0()*0.00372714);
}

double NNfunction_ns_chi02_dR::synapse0x1fea3f0() {
   return (neuron0x1fe3a00()*0.0108191);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9e80() {
   return (neuron0x1fe3d40()*-0.0104898);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9ec0() {
   return (neuron0x1fe42a0()*-0.294703);
}

double NNfunction_ns_chi02_dR::synapse0x1fea540() {
   return (neuron0x1fe44c0()*0.00314128);
}

double NNfunction_ns_chi02_dR::synapse0x1fea580() {
   return (neuron0x1fe4800()*0.00290168);
}

double NNfunction_ns_chi02_dR::synapse0x1fea5c0() {
   return (neuron0x1fe4b40()*-0.00894874);
}

double NNfunction_ns_chi02_dR::synapse0x1fea600() {
   return (neuron0x1fe4e80()*0.00699285);
}

double NNfunction_ns_chi02_dR::synapse0x1fea640() {
   return (neuron0x1fe51c0()*-0.0077617);
}

double NNfunction_ns_chi02_dR::synapse0x1fea680() {
   return (neuron0x1fe5500()*-0.0301438);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4190() {
   return (neuron0x1fe0940()*0.0204917);
}

double NNfunction_ns_chi02_dR::synapse0x1fe41d0() {
   return (neuron0x1fe0c80()*-6.28742);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4210() {
   return (neuron0x1fe0fc0()*-0.19136);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4250() {
   return (neuron0x1fe1300()*0.0135352);
}

double NNfunction_ns_chi02_dR::synapse0x1feac10() {
   return (neuron0x1fe1640()*-0.000503286);
}

double NNfunction_ns_chi02_dR::synapse0x1feac50() {
   return (neuron0x1fe1980()*-0.0240143);
}

double NNfunction_ns_chi02_dR::synapse0x1feac90() {
   return (neuron0x1fe1cc0()*0.00902243);
}

double NNfunction_ns_chi02_dR::synapse0x1feacd0() {
   return (neuron0x1fe2000()*-0.0106093);
}

double NNfunction_ns_chi02_dR::synapse0x1fead10() {
   return (neuron0x1fe2340()*0.00385686);
}

double NNfunction_ns_chi02_dR::synapse0x1fead50() {
   return (neuron0x1fe2680()*0.00632836);
}

double NNfunction_ns_chi02_dR::synapse0x1fead90() {
   return (neuron0x1fe29c0()*-0.0315789);
}

double NNfunction_ns_chi02_dR::synapse0x1feadd0() {
   return (neuron0x1fe2d00()*0.00620718);
}

double NNfunction_ns_chi02_dR::synapse0x1feae10() {
   return (neuron0x1fe3040()*0.000169599);
}

double NNfunction_ns_chi02_dR::synapse0x1feae50() {
   return (neuron0x1fe3380()*-0.0257004);
}

double NNfunction_ns_chi02_dR::synapse0x1feae90() {
   return (neuron0x1fe36c0()*-0.0352853);
}

double NNfunction_ns_chi02_dR::synapse0x1feaed0() {
   return (neuron0x1fe3a00()*-0.0218356);
}

double NNfunction_ns_chi02_dR::synapse0x1fea850() {
   return (neuron0x1fe3d40()*-0.00284175);
}

double NNfunction_ns_chi02_dR::synapse0x1fea890() {
   return (neuron0x1fe42a0()*0.0816793);
}

double NNfunction_ns_chi02_dR::synapse0x1feb020() {
   return (neuron0x1fe44c0()*-0.00661701);
}

double NNfunction_ns_chi02_dR::synapse0x1feb060() {
   return (neuron0x1fe4800()*-0.0224449);
}

double NNfunction_ns_chi02_dR::synapse0x1feb0a0() {
   return (neuron0x1fe4b40()*-0.0653578);
}

double NNfunction_ns_chi02_dR::synapse0x1feb0e0() {
   return (neuron0x1fe4e80()*0.026621);
}

double NNfunction_ns_chi02_dR::synapse0x1feb120() {
   return (neuron0x1fe51c0()*-0.0231152);
}

double NNfunction_ns_chi02_dR::synapse0x1feb160() {
   return (neuron0x1fe5500()*0.0275523);
}

double NNfunction_ns_chi02_dR::synapse0x1feb4e0() {
   return (neuron0x1fe0940()*-0.00762567);
}

double NNfunction_ns_chi02_dR::synapse0x1feb520() {
   return (neuron0x1fe0c80()*0.00975103);
}

double NNfunction_ns_chi02_dR::synapse0x1feb560() {
   return (neuron0x1fe0fc0()*-0.00381466);
}

double NNfunction_ns_chi02_dR::synapse0x1feb5a0() {
   return (neuron0x1fe1300()*-3.60557);
}

double NNfunction_ns_chi02_dR::synapse0x1feb5e0() {
   return (neuron0x1fe1640()*-0.00158347);
}

double NNfunction_ns_chi02_dR::synapse0x1feb620() {
   return (neuron0x1fe1980()*-0.0186895);
}

double NNfunction_ns_chi02_dR::synapse0x1feb660() {
   return (neuron0x1fe1cc0()*-0.00377074);
}

double NNfunction_ns_chi02_dR::synapse0x1feb6a0() {
   return (neuron0x1fe2000()*-0.0102937);
}

double NNfunction_ns_chi02_dR::synapse0x1feb6e0() {
   return (neuron0x1fe2340()*-0.000561949);
}

double NNfunction_ns_chi02_dR::synapse0x1feb720() {
   return (neuron0x1fe2680()*0.00211015);
}

double NNfunction_ns_chi02_dR::synapse0x1feb760() {
   return (neuron0x1fe29c0()*-0.0116288);
}

double NNfunction_ns_chi02_dR::synapse0x1feb7a0() {
   return (neuron0x1fe2d00()*-0.0135511);
}

double NNfunction_ns_chi02_dR::synapse0x1feb7e0() {
   return (neuron0x1fe3040()*-0.00739034);
}

double NNfunction_ns_chi02_dR::synapse0x1feb820() {
   return (neuron0x1fe3380()*0.0197584);
}

double NNfunction_ns_chi02_dR::synapse0x1feb860() {
   return (neuron0x1fe36c0()*0.0038407);
}

double NNfunction_ns_chi02_dR::synapse0x1feb8a0() {
   return (neuron0x1fe3a00()*0.00297599);
}

double NNfunction_ns_chi02_dR::synapse0x1feb330() {
   return (neuron0x1fe3d40()*0.00296252);
}

double NNfunction_ns_chi02_dR::synapse0x1feb370() {
   return (neuron0x1fe42a0()*0.171781);
}

double NNfunction_ns_chi02_dR::synapse0x1feb9f0() {
   return (neuron0x1fe44c0()*-0.00700386);
}

double NNfunction_ns_chi02_dR::synapse0x1feba30() {
   return (neuron0x1fe4800()*0.00929608);
}

double NNfunction_ns_chi02_dR::synapse0x1feba70() {
   return (neuron0x1fe4b40()*-0.00186297);
}

double NNfunction_ns_chi02_dR::synapse0x1febab0() {
   return (neuron0x1fe4e80()*0.00420553);
}

double NNfunction_ns_chi02_dR::synapse0x1febaf0() {
   return (neuron0x1fe51c0()*-0.00603675);
}

double NNfunction_ns_chi02_dR::synapse0x1febb30() {
   return (neuron0x1fe5500()*-0.00759104);
}

double NNfunction_ns_chi02_dR::synapse0x1febeb0() {
   return (neuron0x1fe0940()*-0.0551351);
}

double NNfunction_ns_chi02_dR::synapse0x1febef0() {
   return (neuron0x1fe0c80()*0.142319);
}

double NNfunction_ns_chi02_dR::synapse0x1febf30() {
   return (neuron0x1fe0fc0()*8.44207);
}

double NNfunction_ns_chi02_dR::synapse0x1febf70() {
   return (neuron0x1fe1300()*-0.0955896);
}

double NNfunction_ns_chi02_dR::synapse0x1febfb0() {
   return (neuron0x1fe1640()*-0.0194602);
}

double NNfunction_ns_chi02_dR::synapse0x1febff0() {
   return (neuron0x1fe1980()*0.0161337);
}

double NNfunction_ns_chi02_dR::synapse0x1fec030() {
   return (neuron0x1fe1cc0()*-0.0266103);
}

double NNfunction_ns_chi02_dR::synapse0x1fec070() {
   return (neuron0x1fe2000()*-0.0340721);
}

double NNfunction_ns_chi02_dR::synapse0x1fec0b0() {
   return (neuron0x1fe2340()*-0.0136447);
}

double NNfunction_ns_chi02_dR::synapse0x1fec0f0() {
   return (neuron0x1fe2680()*0.0344177);
}

double NNfunction_ns_chi02_dR::synapse0x1fec130() {
   return (neuron0x1fe29c0()*0.00468848);
}

double NNfunction_ns_chi02_dR::synapse0x1fec170() {
   return (neuron0x1fe2d00()*-0.0177963);
}

double NNfunction_ns_chi02_dR::synapse0x1fec1b0() {
   return (neuron0x1fe3040()*0.0854089);
}

double NNfunction_ns_chi02_dR::synapse0x1fec1f0() {
   return (neuron0x1fe3380()*-0.0342365);
}

double NNfunction_ns_chi02_dR::synapse0x1fec230() {
   return (neuron0x1fe36c0()*-0.0862546);
}

double NNfunction_ns_chi02_dR::synapse0x1fec270() {
   return (neuron0x1fe3a00()*0.0580901);
}

double NNfunction_ns_chi02_dR::synapse0x1febd00() {
   return (neuron0x1fe3d40()*-0.00554923);
}

double NNfunction_ns_chi02_dR::synapse0x1febd40() {
   return (neuron0x1fe42a0()*-0.256241);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8ad0() {
   return (neuron0x1fe44c0()*-0.0900109);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8b10() {
   return (neuron0x1fe4800()*-0.00523291);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8b50() {
   return (neuron0x1fe4b40()*0.0120177);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8b90() {
   return (neuron0x1fe4e80()*0.0286148);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8bd0() {
   return (neuron0x1fe51c0()*-0.0987982);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8c10() {
   return (neuron0x1fe5500()*-5.80021);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8f90() {
   return (neuron0x1fe0940()*-0.567074);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8fd0() {
   return (neuron0x1fe0c80()*0.143962);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9010() {
   return (neuron0x1fe0fc0()*0.110788);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9050() {
   return (neuron0x1fe1300()*0.442785);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9090() {
   return (neuron0x1fe1640()*0.413704);
}

double NNfunction_ns_chi02_dR::synapse0x1fe90d0() {
   return (neuron0x1fe1980()*-0.10337);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9110() {
   return (neuron0x1fe1cc0()*0.457155);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9150() {
   return (neuron0x1fe2000()*0.251305);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9190() {
   return (neuron0x1fe2340()*-0.979715);
}

double NNfunction_ns_chi02_dR::synapse0x1fe91d0() {
   return (neuron0x1fe2680()*0.00583681);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9210() {
   return (neuron0x1fe29c0()*1.09679);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9250() {
   return (neuron0x1fe2d00()*0.492748);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9290() {
   return (neuron0x1fe3040()*-0.348676);
}

double NNfunction_ns_chi02_dR::synapse0x1fed3d0() {
   return (neuron0x1fe3380()*0.204998);
}

double NNfunction_ns_chi02_dR::synapse0x1fed410() {
   return (neuron0x1fe36c0()*-1.95315);
}

double NNfunction_ns_chi02_dR::synapse0x1fed450() {
   return (neuron0x1fe3a00()*-0.663931);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8de0() {
   return (neuron0x1fe3d40()*0.287855);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8e20() {
   return (neuron0x1fe42a0()*-0.893838);
}

double NNfunction_ns_chi02_dR::synapse0x1fed5a0() {
   return (neuron0x1fe44c0()*0.375974);
}

double NNfunction_ns_chi02_dR::synapse0x1fed5e0() {
   return (neuron0x1fe4800()*0.467589);
}

double NNfunction_ns_chi02_dR::synapse0x1fed620() {
   return (neuron0x1fe4b40()*0.625701);
}

double NNfunction_ns_chi02_dR::synapse0x1fed660() {
   return (neuron0x1fe4e80()*-1.14618);
}

double NNfunction_ns_chi02_dR::synapse0x1fed6a0() {
   return (neuron0x1fe51c0()*1.97391);
}

double NNfunction_ns_chi02_dR::synapse0x1fed6e0() {
   return (neuron0x1fe5500()*0.940481);
}

double NNfunction_ns_chi02_dR::synapse0x1feda60() {
   return (neuron0x1fe0940()*0.324649);
}

double NNfunction_ns_chi02_dR::synapse0x1fedaa0() {
   return (neuron0x1fe0c80()*7.67334);
}

double NNfunction_ns_chi02_dR::synapse0x1fedae0() {
   return (neuron0x1fe0fc0()*-0.343378);
}

double NNfunction_ns_chi02_dR::synapse0x1fedb20() {
   return (neuron0x1fe1300()*0.0110495);
}

double NNfunction_ns_chi02_dR::synapse0x1fedb60() {
   return (neuron0x1fe1640()*-0.127816);
}

double NNfunction_ns_chi02_dR::synapse0x1fedba0() {
   return (neuron0x1fe1980()*-0.0196274);
}

double NNfunction_ns_chi02_dR::synapse0x1fedbe0() {
   return (neuron0x1fe1cc0()*0.0799811);
}

double NNfunction_ns_chi02_dR::synapse0x1fedc20() {
   return (neuron0x1fe2000()*-0.0446156);
}

double NNfunction_ns_chi02_dR::synapse0x1fedc60() {
   return (neuron0x1fe2340()*0.0680543);
}

double NNfunction_ns_chi02_dR::synapse0x1fedca0() {
   return (neuron0x1fe2680()*0.0273359);
}

double NNfunction_ns_chi02_dR::synapse0x1fedce0() {
   return (neuron0x1fe29c0()*0.0704172);
}

double NNfunction_ns_chi02_dR::synapse0x1fedd20() {
   return (neuron0x1fe2d00()*-1.56837e-06);
}

double NNfunction_ns_chi02_dR::synapse0x1fedd60() {
   return (neuron0x1fe3040()*0.103944);
}

double NNfunction_ns_chi02_dR::synapse0x1fedda0() {
   return (neuron0x1fe3380()*0.0990877);
}

double NNfunction_ns_chi02_dR::synapse0x1fedde0() {
   return (neuron0x1fe36c0()*-0.0352487);
}

double NNfunction_ns_chi02_dR::synapse0x1fede20() {
   return (neuron0x1fe3a00()*-0.0261341);
}

double NNfunction_ns_chi02_dR::synapse0x1fed8b0() {
   return (neuron0x1fe3d40()*-0.135705);
}

double NNfunction_ns_chi02_dR::synapse0x1fed8f0() {
   return (neuron0x1fe42a0()*-0.0315384);
}

double NNfunction_ns_chi02_dR::synapse0x1fedf70() {
   return (neuron0x1fe44c0()*-0.0516366);
}

double NNfunction_ns_chi02_dR::synapse0x1fedfb0() {
   return (neuron0x1fe4800()*-0.114536);
}

double NNfunction_ns_chi02_dR::synapse0x1fedff0() {
   return (neuron0x1fe4b40()*-0.00228817);
}

double NNfunction_ns_chi02_dR::synapse0x1fee030() {
   return (neuron0x1fe4e80()*0.0188579);
}

double NNfunction_ns_chi02_dR::synapse0x1fee070() {
   return (neuron0x1fe51c0()*0.0722377);
}

double NNfunction_ns_chi02_dR::synapse0x1fee0b0() {
   return (neuron0x1fe5500()*5.51529);
}

double NNfunction_ns_chi02_dR::synapse0x1fee430() {
   return (neuron0x1fe0940()*0.0308109);
}

double NNfunction_ns_chi02_dR::synapse0x1fee470() {
   return (neuron0x1fe0c80()*-13.0874);
}

double NNfunction_ns_chi02_dR::synapse0x1fee4b0() {
   return (neuron0x1fe0fc0()*-0.860361);
}

double NNfunction_ns_chi02_dR::synapse0x1fee4f0() {
   return (neuron0x1fe1300()*0.0155862);
}

double NNfunction_ns_chi02_dR::synapse0x1fee530() {
   return (neuron0x1fe1640()*-0.0260849);
}

double NNfunction_ns_chi02_dR::synapse0x1fee570() {
   return (neuron0x1fe1980()*0.0300958);
}

double NNfunction_ns_chi02_dR::synapse0x1fee5b0() {
   return (neuron0x1fe1cc0()*0.00090182);
}

double NNfunction_ns_chi02_dR::synapse0x1fee5f0() {
   return (neuron0x1fe2000()*-0.066657);
}

double NNfunction_ns_chi02_dR::synapse0x1fee630() {
   return (neuron0x1fe2340()*-0.0363621);
}

double NNfunction_ns_chi02_dR::synapse0x1fee670() {
   return (neuron0x1fe2680()*0.0143973);
}

double NNfunction_ns_chi02_dR::synapse0x1fee6b0() {
   return (neuron0x1fe29c0()*0.0233742);
}

double NNfunction_ns_chi02_dR::synapse0x1fee6f0() {
   return (neuron0x1fe2d00()*-0.0130922);
}

double NNfunction_ns_chi02_dR::synapse0x1fee730() {
   return (neuron0x1fe3040()*-0.0325286);
}

double NNfunction_ns_chi02_dR::synapse0x1fee770() {
   return (neuron0x1fe3380()*-0.00674437);
}

double NNfunction_ns_chi02_dR::synapse0x1fee7b0() {
   return (neuron0x1fe36c0()*0.0247736);
}

double NNfunction_ns_chi02_dR::synapse0x1fee7f0() {
   return (neuron0x1fe3a00()*0.0535684);
}

double NNfunction_ns_chi02_dR::synapse0x1fee280() {
   return (neuron0x1fe3d40()*0.0273855);
}

double NNfunction_ns_chi02_dR::synapse0x1fee2c0() {
   return (neuron0x1fe42a0()*-0.0198467);
}

double NNfunction_ns_chi02_dR::synapse0x1fee940() {
   return (neuron0x1fe44c0()*-0.0140897);
}

double NNfunction_ns_chi02_dR::synapse0x1fee980() {
   return (neuron0x1fe4800()*0.0281152);
}

double NNfunction_ns_chi02_dR::synapse0x1fee9c0() {
   return (neuron0x1fe4b40()*-0.0260965);
}

double NNfunction_ns_chi02_dR::synapse0x1feea00() {
   return (neuron0x1fe4e80()*-0.0656983);
}

double NNfunction_ns_chi02_dR::synapse0x1feea40() {
   return (neuron0x1fe51c0()*0.0516449);
}

double NNfunction_ns_chi02_dR::synapse0x1feea80() {
   return (neuron0x1fe5500()*10.1535);
}

double NNfunction_ns_chi02_dR::synapse0x1feee00() {
   return (neuron0x1fe0940()*0.798241);
}

double NNfunction_ns_chi02_dR::synapse0x1feee40() {
   return (neuron0x1fe0c80()*0.0561032);
}

double NNfunction_ns_chi02_dR::synapse0x1feee80() {
   return (neuron0x1fe0fc0()*0.248036);
}

double NNfunction_ns_chi02_dR::synapse0x1feeec0() {
   return (neuron0x1fe1300()*1.71349);
}

double NNfunction_ns_chi02_dR::synapse0x1feef00() {
   return (neuron0x1fe1640()*-1.27359);
}

double NNfunction_ns_chi02_dR::synapse0x1feef40() {
   return (neuron0x1fe1980()*0.2601);
}

double NNfunction_ns_chi02_dR::synapse0x1feef80() {
   return (neuron0x1fe1cc0()*0.205034);
}

double NNfunction_ns_chi02_dR::synapse0x1feefc0() {
   return (neuron0x1fe2000()*-0.541475);
}

double NNfunction_ns_chi02_dR::synapse0x1fef000() {
   return (neuron0x1fe2340()*0.449202);
}

double NNfunction_ns_chi02_dR::synapse0x1fef040() {
   return (neuron0x1fe2680()*0.1564);
}

double NNfunction_ns_chi02_dR::synapse0x1fef080() {
   return (neuron0x1fe29c0()*-0.0288413);
}

double NNfunction_ns_chi02_dR::synapse0x1fef0c0() {
   return (neuron0x1fe2d00()*-0.22341);
}

double NNfunction_ns_chi02_dR::synapse0x1fef100() {
   return (neuron0x1fe3040()*0.47049);
}

double NNfunction_ns_chi02_dR::synapse0x1fef140() {
   return (neuron0x1fe3380()*-0.170093);
}

double NNfunction_ns_chi02_dR::synapse0x1fef180() {
   return (neuron0x1fe36c0()*0.814914);
}

double NNfunction_ns_chi02_dR::synapse0x1fef1c0() {
   return (neuron0x1fe3a00()*-1.13277);
}

double NNfunction_ns_chi02_dR::synapse0x1feec50() {
   return (neuron0x1fe3d40()*-0.406738);
}

double NNfunction_ns_chi02_dR::synapse0x1feec90() {
   return (neuron0x1fe42a0()*0.862635);
}

double NNfunction_ns_chi02_dR::synapse0x1fef310() {
   return (neuron0x1fe44c0()*0.702643);
}

double NNfunction_ns_chi02_dR::synapse0x1fef350() {
   return (neuron0x1fe4800()*-0.370802);
}

double NNfunction_ns_chi02_dR::synapse0x1fef390() {
   return (neuron0x1fe4b40()*-0.788322);
}

double NNfunction_ns_chi02_dR::synapse0x1fef3d0() {
   return (neuron0x1fe4e80()*0.987996);
}

double NNfunction_ns_chi02_dR::synapse0x1fef410() {
   return (neuron0x1fe51c0()*-1.67649);
}

double NNfunction_ns_chi02_dR::synapse0x1fef450() {
   return (neuron0x1fe5500()*-0.438429);
}

double NNfunction_ns_chi02_dR::synapse0x1fef7d0() {
   return (neuron0x1fe0940()*-0.112601);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0b60() {
   return (neuron0x1fe0c80()*-4.39297);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0ba0() {
   return (neuron0x1fe0fc0()*-2.35144);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0ea0() {
   return (neuron0x1fe1300()*-0.00282249);
}

double NNfunction_ns_chi02_dR::synapse0x1fe0ee0() {
   return (neuron0x1fe1640()*-0.0590661);
}

double NNfunction_ns_chi02_dR::synapse0x1fe11e0() {
   return (neuron0x1fe1980()*-0.247262);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1220() {
   return (neuron0x1fe1cc0()*-0.454913);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1520() {
   return (neuron0x1fe2000()*-0.158398);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1560() {
   return (neuron0x1fe2340()*-0.108251);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1860() {
   return (neuron0x1fe2680()*-0.35275);
}

double NNfunction_ns_chi02_dR::synapse0x1fe18a0() {
   return (neuron0x1fe29c0()*0.423284);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1ba0() {
   return (neuron0x1fe2d00()*0.149302);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1be0() {
   return (neuron0x1fe3040()*-0.0097968);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1ee0() {
   return (neuron0x1fe3380()*-0.311577);
}

double NNfunction_ns_chi02_dR::synapse0x1fe1f20() {
   return (neuron0x1fe36c0()*0.262446);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2220() {
   return (neuron0x1fe3a00()*-0.20022);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2260() {
   return (neuron0x1fe3d40()*-0.0747613);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2560() {
   return (neuron0x1fe42a0()*0.0928286);
}

double NNfunction_ns_chi02_dR::synapse0x1fe25a0() {
   return (neuron0x1fe44c0()*0.203285);
}

double NNfunction_ns_chi02_dR::synapse0x1fe28a0() {
   return (neuron0x1fe4800()*0.542801);
}

double NNfunction_ns_chi02_dR::synapse0x1fe28e0() {
   return (neuron0x1fe4b40()*-0.238069);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2be0() {
   return (neuron0x1fe4e80()*-0.447702);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2c20() {
   return (neuron0x1fe51c0()*-0.444677);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2f20() {
   return (neuron0x1fe5500()*2.73335);
}

double NNfunction_ns_chi02_dR::synapse0x1fe2f60() {
   return (neuron0x1fe0940()*0.0608391);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3c20() {
   return (neuron0x1fe0c80()*-0.132733);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3c60() {
   return (neuron0x1fe0fc0()*-0.0181847);
}

double NNfunction_ns_chi02_dR::synapse0x1fef620() {
   return (neuron0x1fe1300()*-0.0179769);
}

double NNfunction_ns_chi02_dR::synapse0x1fef660() {
   return (neuron0x1fe1640()*0.00555674);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3f60() {
   return (neuron0x1fe1980()*-0.0412386);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3fa0() {
   return (neuron0x1fe1cc0()*-0.071804);
}

double NNfunction_ns_chi02_dR::synapse0x1d9b9c0() {
   return (neuron0x1fe2000()*-0.029685);
}

double NNfunction_ns_chi02_dR::synapse0x1d9ba00() {
   return (neuron0x1fe2340()*-0.123661);
}

double NNfunction_ns_chi02_dR::synapse0x1fe46e0() {
   return (neuron0x1fe2680()*0.347992);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4720() {
   return (neuron0x1fe29c0()*0.537937);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4a20() {
   return (neuron0x1fe2d00()*-0.191697);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4a60() {
   return (neuron0x1fe3040()*-0.111575);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4d60() {
   return (neuron0x1fe3380()*-0.134499);
}

double NNfunction_ns_chi02_dR::synapse0x1fe4da0() {
   return (neuron0x1fe36c0()*-0.0459964);
}

double NNfunction_ns_chi02_dR::synapse0x1fe50a0() {
   return (neuron0x1fe3a00()*-0.103108);
}

double NNfunction_ns_chi02_dR::synapse0x1fe50e0() {
   return (neuron0x1fe3d40()*-0.0947499);
}

double NNfunction_ns_chi02_dR::synapse0x1fe53e0() {
   return (neuron0x1fe42a0()*0.947403);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5420() {
   return (neuron0x1fe44c0()*-0.13729);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5720() {
   return (neuron0x1fe4800()*-0.148158);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5760() {
   return (neuron0x1fe4b40()*0.0104058);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3260() {
   return (neuron0x1fe4e80()*0.0700793);
}

double NNfunction_ns_chi02_dR::synapse0x1fe32a0() {
   return (neuron0x1fe51c0()*-0.0158898);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1540() {
   return (neuron0x1fe5500()*0.107827);
}

double NNfunction_ns_chi02_dR::synapse0x1ff18c0() {
   return (neuron0x1fe0940()*0.0469288);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1900() {
   return (neuron0x1fe0c80()*0.000428479);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1940() {
   return (neuron0x1fe0fc0()*0.216235);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1980() {
   return (neuron0x1fe1300()*0.00263774);
}

double NNfunction_ns_chi02_dR::synapse0x1ff19c0() {
   return (neuron0x1fe1640()*-0.0193583);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1a00() {
   return (neuron0x1fe1980()*-0.0419128);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1a40() {
   return (neuron0x1fe1cc0()*-0.272215);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1a80() {
   return (neuron0x1fe2000()*0.036943);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1ac0() {
   return (neuron0x1fe2340()*0.0486888);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1b00() {
   return (neuron0x1fe2680()*0.0985653);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1b40() {
   return (neuron0x1fe29c0()*0.0230184);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1b80() {
   return (neuron0x1fe2d00()*-0.0547077);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1bc0() {
   return (neuron0x1fe3040()*-0.00846182);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1c00() {
   return (neuron0x1fe3380()*0.03609);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1c40() {
   return (neuron0x1fe36c0()*-0.166435);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1c80() {
   return (neuron0x1fe3a00()*-0.168162);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1710() {
   return (neuron0x1fe3d40()*0.00135877);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1750() {
   return (neuron0x1fe42a0()*-0.974914);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1dd0() {
   return (neuron0x1fe44c0()*0.074008);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1e10() {
   return (neuron0x1fe4800()*-0.00744573);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1e50() {
   return (neuron0x1fe4b40()*-0.00700051);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1e90() {
   return (neuron0x1fe4e80()*0.0136901);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1ed0() {
   return (neuron0x1fe51c0()*-0.0446763);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1f10() {
   return (neuron0x1fe5500()*-0.169849);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2290() {
   return (neuron0x1fe0940()*0.871827);
}

double NNfunction_ns_chi02_dR::synapse0x1ff22d0() {
   return (neuron0x1fe0c80()*2.25388);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2310() {
   return (neuron0x1fe0fc0()*-0.665257);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2350() {
   return (neuron0x1fe1300()*-0.415794);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2390() {
   return (neuron0x1fe1640()*-0.452873);
}

double NNfunction_ns_chi02_dR::synapse0x1ff23d0() {
   return (neuron0x1fe1980()*-1.56817);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2410() {
   return (neuron0x1fe1cc0()*0.00195408);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2450() {
   return (neuron0x1fe2000()*-0.30704);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2490() {
   return (neuron0x1fe2340()*0.998177);
}

double NNfunction_ns_chi02_dR::synapse0x1ff24d0() {
   return (neuron0x1fe2680()*0.43048);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2510() {
   return (neuron0x1fe29c0()*0.3254);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2550() {
   return (neuron0x1fe2d00()*-0.763278);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2590() {
   return (neuron0x1fe3040()*-0.959949);
}

double NNfunction_ns_chi02_dR::synapse0x1ff25d0() {
   return (neuron0x1fe3380()*-0.805506);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2610() {
   return (neuron0x1fe36c0()*-0.435323);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2650() {
   return (neuron0x1fe3a00()*0.253005);
}

double NNfunction_ns_chi02_dR::synapse0x1ff20e0() {
   return (neuron0x1fe3d40()*0.238731);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2120() {
   return (neuron0x1fe42a0()*1.36423);
}

double NNfunction_ns_chi02_dR::synapse0x1ff27a0() {
   return (neuron0x1fe44c0()*0.0344197);
}

double NNfunction_ns_chi02_dR::synapse0x1ff27e0() {
   return (neuron0x1fe4800()*-0.909562);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2820() {
   return (neuron0x1fe4b40()*0.200667);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2860() {
   return (neuron0x1fe4e80()*0.162496);
}

double NNfunction_ns_chi02_dR::synapse0x1ff28a0() {
   return (neuron0x1fe51c0()*-0.134459);
}

double NNfunction_ns_chi02_dR::synapse0x1ff28e0() {
   return (neuron0x1fe5500()*-0.200579);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2c60() {
   return (neuron0x1fe0940()*3.88795);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2ca0() {
   return (neuron0x1fe0c80()*2.63156);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2ce0() {
   return (neuron0x1fe0fc0()*0.200597);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2d20() {
   return (neuron0x1fe1300()*-0.137482);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2d60() {
   return (neuron0x1fe1640()*0.127877);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2da0() {
   return (neuron0x1fe1980()*-0.0481366);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2de0() {
   return (neuron0x1fe1cc0()*0.193754);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2e20() {
   return (neuron0x1fe2000()*-0.0135242);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2e60() {
   return (neuron0x1fe2340()*0.240027);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2ea0() {
   return (neuron0x1fe2680()*0.492805);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2ee0() {
   return (neuron0x1fe29c0()*0.374388);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2f20() {
   return (neuron0x1fe2d00()*-0.17044);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2f60() {
   return (neuron0x1fe3040()*-0.117571);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2fa0() {
   return (neuron0x1fe3380()*0.00839744);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2fe0() {
   return (neuron0x1fe36c0()*-0.168934);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3020() {
   return (neuron0x1fe3a00()*0.494442);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2ab0() {
   return (neuron0x1fe3d40()*0.425856);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2af0() {
   return (neuron0x1fe42a0()*0.639564);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3170() {
   return (neuron0x1fe44c0()*0.366407);
}

double NNfunction_ns_chi02_dR::synapse0x1ff31b0() {
   return (neuron0x1fe4800()*0.429563);
}

double NNfunction_ns_chi02_dR::synapse0x1ff31f0() {
   return (neuron0x1fe4b40()*0.104382);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3230() {
   return (neuron0x1fe4e80()*-0.263027);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3270() {
   return (neuron0x1fe51c0()*-0.0416575);
}

double NNfunction_ns_chi02_dR::synapse0x1ff32b0() {
   return (neuron0x1fe5500()*-3.83917);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3630() {
   return (neuron0x1fe0940()*0.00929593);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3670() {
   return (neuron0x1fe0c80()*0.0034994);
}

double NNfunction_ns_chi02_dR::synapse0x1ff36b0() {
   return (neuron0x1fe0fc0()*-0.187748);
}

double NNfunction_ns_chi02_dR::synapse0x1ff36f0() {
   return (neuron0x1fe1300()*-0.135827);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3730() {
   return (neuron0x1fe1640()*0.0651406);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3770() {
   return (neuron0x1fe1980()*0.0978063);
}

double NNfunction_ns_chi02_dR::synapse0x1ff37b0() {
   return (neuron0x1fe1cc0()*0.0786289);
}

double NNfunction_ns_chi02_dR::synapse0x1ff37f0() {
   return (neuron0x1fe2000()*0.0276054);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3830() {
   return (neuron0x1fe2340()*0.143977);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3870() {
   return (neuron0x1fe2680()*0.632439);
}

double NNfunction_ns_chi02_dR::synapse0x1ff38b0() {
   return (neuron0x1fe29c0()*-0.0427248);
}

double NNfunction_ns_chi02_dR::synapse0x1ff38f0() {
   return (neuron0x1fe2d00()*0.128095);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3930() {
   return (neuron0x1fe3040()*0.206677);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3970() {
   return (neuron0x1fe3380()*0.162627);
}

double NNfunction_ns_chi02_dR::synapse0x1ff39b0() {
   return (neuron0x1fe36c0()*-0.139282);
}

double NNfunction_ns_chi02_dR::synapse0x1ff39f0() {
   return (neuron0x1fe3a00()*-0.0810243);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3480() {
   return (neuron0x1fe3d40()*-1.06092);
}

double NNfunction_ns_chi02_dR::synapse0x1ff34c0() {
   return (neuron0x1fe42a0()*-1.35325);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3b40() {
   return (neuron0x1fe44c0()*0.291391);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3b80() {
   return (neuron0x1fe4800()*0.201603);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3bc0() {
   return (neuron0x1fe4b40()*0.042045);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3c00() {
   return (neuron0x1fe4e80()*-0.0725305);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3c40() {
   return (neuron0x1fe51c0()*-0.353789);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3c80() {
   return (neuron0x1fe5500()*-0.755955);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4000() {
   return (neuron0x1fe0940()*-0.0908421);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4040() {
   return (neuron0x1fe0c80()*0.0281007);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4080() {
   return (neuron0x1fe0fc0()*-0.102928);
}

double NNfunction_ns_chi02_dR::synapse0x1ff40c0() {
   return (neuron0x1fe1300()*0.180229);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4100() {
   return (neuron0x1fe1640()*-0.113186);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4140() {
   return (neuron0x1fe1980()*0.0272755);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4180() {
   return (neuron0x1fe1cc0()*-0.0681385);
}

double NNfunction_ns_chi02_dR::synapse0x1ff41c0() {
   return (neuron0x1fe2000()*0.0106574);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4200() {
   return (neuron0x1fe2340()*-0.0506006);
}

double NNfunction_ns_chi02_dR::synapse0x1fec3c0() {
   return (neuron0x1fe2680()*0.0550795);
}

double NNfunction_ns_chi02_dR::synapse0x1fec400() {
   return (neuron0x1fe29c0()*-0.144581);
}

double NNfunction_ns_chi02_dR::synapse0x1fec440() {
   return (neuron0x1fe2d00()*0.00474477);
}

double NNfunction_ns_chi02_dR::synapse0x1fec480() {
   return (neuron0x1fe3040()*-0.0369406);
}

double NNfunction_ns_chi02_dR::synapse0x1fec4c0() {
   return (neuron0x1fe3380()*0.0751839);
}

double NNfunction_ns_chi02_dR::synapse0x1fec500() {
   return (neuron0x1fe36c0()*-0.0448058);
}

double NNfunction_ns_chi02_dR::synapse0x1fec540() {
   return (neuron0x1fe3a00()*0.0829689);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3e50() {
   return (neuron0x1fe3d40()*0.0230157);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3e90() {
   return (neuron0x1fe42a0()*3.17508);
}

double NNfunction_ns_chi02_dR::synapse0x1fec690() {
   return (neuron0x1fe44c0()*0.0366835);
}

double NNfunction_ns_chi02_dR::synapse0x1fec6d0() {
   return (neuron0x1fe4800()*0.168991);
}

double NNfunction_ns_chi02_dR::synapse0x1fec710() {
   return (neuron0x1fe4b40()*0.0395002);
}

double NNfunction_ns_chi02_dR::synapse0x1fec750() {
   return (neuron0x1fe4e80()*0.0481591);
}

double NNfunction_ns_chi02_dR::synapse0x1fec790() {
   return (neuron0x1fe51c0()*-0.0314679);
}

double NNfunction_ns_chi02_dR::synapse0x1fec7d0() {
   return (neuron0x1fe5500()*0.658699);
}

double NNfunction_ns_chi02_dR::synapse0x1fecb50() {
   return (neuron0x1fe0940()*0.0345196);
}

double NNfunction_ns_chi02_dR::synapse0x1fecb90() {
   return (neuron0x1fe0c80()*-1.38921);
}

double NNfunction_ns_chi02_dR::synapse0x1fecbd0() {
   return (neuron0x1fe0fc0()*-6.00599);
}

double NNfunction_ns_chi02_dR::synapse0x1fecc10() {
   return (neuron0x1fe1300()*-0.0375932);
}

double NNfunction_ns_chi02_dR::synapse0x1fecc50() {
   return (neuron0x1fe1640()*0.0210814);
}

double NNfunction_ns_chi02_dR::synapse0x1fecc90() {
   return (neuron0x1fe1980()*0.0118164);
}

double NNfunction_ns_chi02_dR::synapse0x1feccd0() {
   return (neuron0x1fe1cc0()*0.0322957);
}

double NNfunction_ns_chi02_dR::synapse0x1fecd10() {
   return (neuron0x1fe2000()*0.0462849);
}

double NNfunction_ns_chi02_dR::synapse0x1fecd50() {
   return (neuron0x1fe2340()*0.0812383);
}

double NNfunction_ns_chi02_dR::synapse0x1fecd90() {
   return (neuron0x1fe2680()*-0.0216115);
}

double NNfunction_ns_chi02_dR::synapse0x1fecdd0() {
   return (neuron0x1fe29c0()*-0.0748892);
}

double NNfunction_ns_chi02_dR::synapse0x1fece10() {
   return (neuron0x1fe2d00()*0.0355375);
}

double NNfunction_ns_chi02_dR::synapse0x1fece50() {
   return (neuron0x1fe3040()*-0.129209);
}

double NNfunction_ns_chi02_dR::synapse0x1fece90() {
   return (neuron0x1fe3380()*0.0849155);
}

double NNfunction_ns_chi02_dR::synapse0x1feced0() {
   return (neuron0x1fe36c0()*0.00693967);
}

double NNfunction_ns_chi02_dR::synapse0x1fecf10() {
   return (neuron0x1fe3a00()*0.131456);
}

double NNfunction_ns_chi02_dR::synapse0x1fec9a0() {
   return (neuron0x1fe3d40()*0.0271307);
}

double NNfunction_ns_chi02_dR::synapse0x1fec9e0() {
   return (neuron0x1fe42a0()*0.192368);
}

double NNfunction_ns_chi02_dR::synapse0x1fed060() {
   return (neuron0x1fe44c0()*-0.00441793);
}

double NNfunction_ns_chi02_dR::synapse0x1fed0a0() {
   return (neuron0x1fe4800()*-0.0145195);
}

double NNfunction_ns_chi02_dR::synapse0x1fed0e0() {
   return (neuron0x1fe4b40()*-0.0109912);
}

double NNfunction_ns_chi02_dR::synapse0x1fed120() {
   return (neuron0x1fe4e80()*0.0130652);
}

double NNfunction_ns_chi02_dR::synapse0x1fed160() {
   return (neuron0x1fe51c0()*0.0157134);
}

double NNfunction_ns_chi02_dR::synapse0x1fed1a0() {
   return (neuron0x1fe5500()*-5.0316);
}

double NNfunction_ns_chi02_dR::synapse0x1fed370() {
   return (neuron0x1fe0940()*-2.02493);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6400() {
   return (neuron0x1fe0c80()*-1.8834);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6440() {
   return (neuron0x1fe0fc0()*1.05621);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6480() {
   return (neuron0x1fe1300()*0.410074);
}

double NNfunction_ns_chi02_dR::synapse0x1ff64c0() {
   return (neuron0x1fe1640()*0.0263071);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6500() {
   return (neuron0x1fe1980()*0.402779);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6540() {
   return (neuron0x1fe1cc0()*-0.77951);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6580() {
   return (neuron0x1fe2000()*-0.0296348);
}

double NNfunction_ns_chi02_dR::synapse0x1ff65c0() {
   return (neuron0x1fe2340()*0.187829);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6600() {
   return (neuron0x1fe2680()*0.22864);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6640() {
   return (neuron0x1fe29c0()*0.248521);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6680() {
   return (neuron0x1fe2d00()*0.0346598);
}

double NNfunction_ns_chi02_dR::synapse0x1ff66c0() {
   return (neuron0x1fe3040()*-0.538438);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6700() {
   return (neuron0x1fe3380()*-0.7663);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6740() {
   return (neuron0x1fe36c0()*-1.01664);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6780() {
   return (neuron0x1fe3a00()*0.031183);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6250() {
   return (neuron0x1fe3d40()*1.31203);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6290() {
   return (neuron0x1fe42a0()*-0.258698);
}

double NNfunction_ns_chi02_dR::synapse0x1ff68d0() {
   return (neuron0x1fe44c0()*-0.810429);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6910() {
   return (neuron0x1fe4800()*0.625296);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6950() {
   return (neuron0x1fe4b40()*-1.12253);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6990() {
   return (neuron0x1fe4e80()*-0.379557);
}

double NNfunction_ns_chi02_dR::synapse0x1ff69d0() {
   return (neuron0x1fe51c0()*-0.143355);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6a10() {
   return (neuron0x1fe5500()*-2.26042);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6d90() {
   return (neuron0x1fe0940()*0.0683912);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6dd0() {
   return (neuron0x1fe0c80()*-2.06327);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6e10() {
   return (neuron0x1fe0fc0()*-0.283124);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6e50() {
   return (neuron0x1fe1300()*0.017718);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6e90() {
   return (neuron0x1fe1640()*-0.0128417);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6ed0() {
   return (neuron0x1fe1980()*0.00789281);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6f10() {
   return (neuron0x1fe1cc0()*0.00509774);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6f50() {
   return (neuron0x1fe2000()*0.00347316);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6f90() {
   return (neuron0x1fe2340()*0.010255);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6fd0() {
   return (neuron0x1fe2680()*0.0232093);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7010() {
   return (neuron0x1fe29c0()*-0.00481362);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7050() {
   return (neuron0x1fe2d00()*-0.0063845);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7090() {
   return (neuron0x1fe3040()*-0.00273209);
}

double NNfunction_ns_chi02_dR::synapse0x1ff70d0() {
   return (neuron0x1fe3380()*-0.0147975);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7110() {
   return (neuron0x1fe36c0()*-0.0169944);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7150() {
   return (neuron0x1fe3a00()*-0.0258175);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6be0() {
   return (neuron0x1fe3d40()*-0.00565464);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6c20() {
   return (neuron0x1fe42a0()*0.16626);
}

double NNfunction_ns_chi02_dR::synapse0x1ff72a0() {
   return (neuron0x1fe44c0()*-0.0107474);
}

double NNfunction_ns_chi02_dR::synapse0x1ff72e0() {
   return (neuron0x1fe4800()*-0.02329);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7320() {
   return (neuron0x1fe4b40()*-0.0268125);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7360() {
   return (neuron0x1fe4e80()*0.010847);
}

double NNfunction_ns_chi02_dR::synapse0x1ff73a0() {
   return (neuron0x1fe51c0()*-0.00996014);
}

double NNfunction_ns_chi02_dR::synapse0x1ff73e0() {
   return (neuron0x1fe5500()*-0.213097);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7760() {
   return (neuron0x1fe0940()*-0.00207147);
}

double NNfunction_ns_chi02_dR::synapse0x1ff77a0() {
   return (neuron0x1fe0c80()*-0.0571794);
}

double NNfunction_ns_chi02_dR::synapse0x1ff77e0() {
   return (neuron0x1fe0fc0()*0.139469);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7820() {
   return (neuron0x1fe1300()*-0.115693);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7860() {
   return (neuron0x1fe1640()*0.145337);
}

double NNfunction_ns_chi02_dR::synapse0x1ff78a0() {
   return (neuron0x1fe1980()*-0.0602114);
}

double NNfunction_ns_chi02_dR::synapse0x1ff78e0() {
   return (neuron0x1fe1cc0()*0.409722);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7920() {
   return (neuron0x1fe2000()*-0.0596174);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7960() {
   return (neuron0x1fe2340()*0.0373775);
}

double NNfunction_ns_chi02_dR::synapse0x1ff79a0() {
   return (neuron0x1fe2680()*-0.0203622);
}

double NNfunction_ns_chi02_dR::synapse0x1ff79e0() {
   return (neuron0x1fe29c0()*0.0101307);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7a20() {
   return (neuron0x1fe2d00()*0.00944601);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7a60() {
   return (neuron0x1fe3040()*0.0233207);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7aa0() {
   return (neuron0x1fe3380()*0.0752394);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7ae0() {
   return (neuron0x1fe36c0()*-0.189117);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7b20() {
   return (neuron0x1fe3a00()*-0.274215);
}

double NNfunction_ns_chi02_dR::synapse0x1ff75b0() {
   return (neuron0x1fe3d40()*-0.0774179);
}

double NNfunction_ns_chi02_dR::synapse0x1ff75f0() {
   return (neuron0x1fe42a0()*-1.04428);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7c70() {
   return (neuron0x1fe44c0()*0.0695716);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7cb0() {
   return (neuron0x1fe4800()*0.029797);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7cf0() {
   return (neuron0x1fe4b40()*-0.0265437);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7d30() {
   return (neuron0x1fe4e80()*-0.0523284);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7d70() {
   return (neuron0x1fe51c0()*-0.0196746);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7db0() {
   return (neuron0x1fe5500()*0.237164);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8130() {
   return (neuron0x1fe0940()*-0.0888746);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8170() {
   return (neuron0x1fe0c80()*-0.019757);
}

double NNfunction_ns_chi02_dR::synapse0x1ff81b0() {
   return (neuron0x1fe0fc0()*-0.200323);
}

double NNfunction_ns_chi02_dR::synapse0x1ff81f0() {
   return (neuron0x1fe1300()*0.0825779);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8230() {
   return (neuron0x1fe1640()*0.0681643);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8270() {
   return (neuron0x1fe1980()*0.0280379);
}

double NNfunction_ns_chi02_dR::synapse0x1ff82b0() {
   return (neuron0x1fe1cc0()*-0.0567586);
}

double NNfunction_ns_chi02_dR::synapse0x1ff82f0() {
   return (neuron0x1fe2000()*0.0147776);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8330() {
   return (neuron0x1fe2340()*-0.0486768);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8370() {
   return (neuron0x1fe2680()*0.0164797);
}

double NNfunction_ns_chi02_dR::synapse0x1ff83b0() {
   return (neuron0x1fe29c0()*0.0547228);
}

double NNfunction_ns_chi02_dR::synapse0x1ff83f0() {
   return (neuron0x1fe2d00()*0.00051921);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8430() {
   return (neuron0x1fe3040()*-0.0226422);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8470() {
   return (neuron0x1fe3380()*0.0700168);
}

double NNfunction_ns_chi02_dR::synapse0x1ff84b0() {
   return (neuron0x1fe36c0()*-0.547783);
}

double NNfunction_ns_chi02_dR::synapse0x1ff84f0() {
   return (neuron0x1fe3a00()*-0.0316573);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7f80() {
   return (neuron0x1fe3d40()*0.119754);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7fc0() {
   return (neuron0x1fe42a0()*0.75791);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8640() {
   return (neuron0x1fe44c0()*-0.0191703);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8680() {
   return (neuron0x1fe4800()*-0.0299487);
}

double NNfunction_ns_chi02_dR::synapse0x1ff86c0() {
   return (neuron0x1fe4b40()*-0.0192615);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8700() {
   return (neuron0x1fe4e80()*0.0633422);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8740() {
   return (neuron0x1fe51c0()*-0.0298209);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8780() {
   return (neuron0x1fe5500()*0.14797);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8b00() {
   return (neuron0x1fe0940()*0.00154354);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8b40() {
   return (neuron0x1fe0c80()*-0.022244);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8b80() {
   return (neuron0x1fe0fc0()*0.537353);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8bc0() {
   return (neuron0x1fe1300()*-0.0105115);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8c00() {
   return (neuron0x1fe1640()*0.00931884);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8c40() {
   return (neuron0x1fe1980()*-0.0101221);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8c80() {
   return (neuron0x1fe1cc0()*-0.0272838);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8cc0() {
   return (neuron0x1fe2000()*0.0130119);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8d00() {
   return (neuron0x1fe2340()*0.0286249);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8d40() {
   return (neuron0x1fe2680()*-0.0314504);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8d80() {
   return (neuron0x1fe29c0()*0.0275886);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8dc0() {
   return (neuron0x1fe2d00()*-0.0132612);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8e00() {
   return (neuron0x1fe3040()*0.0143969);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8e40() {
   return (neuron0x1fe3380()*-0.013608);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8e80() {
   return (neuron0x1fe36c0()*0.0248845);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8ec0() {
   return (neuron0x1fe3a00()*-0.0195389);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8950() {
   return (neuron0x1fe3d40()*0.0274563);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8990() {
   return (neuron0x1fe42a0()*-0.132778);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9010() {
   return (neuron0x1fe44c0()*0.01636);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9050() {
   return (neuron0x1fe4800()*0.0383932);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9090() {
   return (neuron0x1fe4b40()*0.0274463);
}

double NNfunction_ns_chi02_dR::synapse0x1ff90d0() {
   return (neuron0x1fe4e80()*-0.0171338);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9110() {
   return (neuron0x1fe51c0()*-0.000261609);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9150() {
   return (neuron0x1fe5500()*4.27744);
}

double NNfunction_ns_chi02_dR::synapse0x1ff94d0() {
   return (neuron0x1fe0940()*0.00552844);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9510() {
   return (neuron0x1fe0c80()*-1.06188);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9550() {
   return (neuron0x1fe0fc0()*-0.637462);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9590() {
   return (neuron0x1fe1300()*-0.349698);
}

double NNfunction_ns_chi02_dR::synapse0x1ff95d0() {
   return (neuron0x1fe1640()*0.174908);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9610() {
   return (neuron0x1fe1980()*0.230062);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9650() {
   return (neuron0x1fe1cc0()*-0.216727);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9690() {
   return (neuron0x1fe2000()*-0.656504);
}

double NNfunction_ns_chi02_dR::synapse0x1ff96d0() {
   return (neuron0x1fe2340()*0.786668);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9710() {
   return (neuron0x1fe2680()*-0.111224);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9750() {
   return (neuron0x1fe29c0()*-0.462102);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9790() {
   return (neuron0x1fe2d00()*0.317108);
}

double NNfunction_ns_chi02_dR::synapse0x1ff97d0() {
   return (neuron0x1fe3040()*0.651789);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9810() {
   return (neuron0x1fe3380()*-0.00474045);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9850() {
   return (neuron0x1fe36c0()*-0.196933);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9890() {
   return (neuron0x1fe3a00()*0.93638);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9320() {
   return (neuron0x1fe3d40()*-0.106826);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9360() {
   return (neuron0x1fe42a0()*2.17549);
}

double NNfunction_ns_chi02_dR::synapse0x1ff99e0() {
   return (neuron0x1fe44c0()*0.529829);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9a20() {
   return (neuron0x1fe4800()*-0.611206);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9a60() {
   return (neuron0x1fe4b40()*-0.155046);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9aa0() {
   return (neuron0x1fe4e80()*0.467704);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9ae0() {
   return (neuron0x1fe51c0()*-0.058002);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9b20() {
   return (neuron0x1fe5500()*-0.0505107);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9ea0() {
   return (neuron0x1fe0940()*1.34011);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9ee0() {
   return (neuron0x1fe0c80()*0.475276);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9f20() {
   return (neuron0x1fe0fc0()*-0.419611);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9f60() {
   return (neuron0x1fe1300()*0.406203);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9fa0() {
   return (neuron0x1fe1640()*0.107306);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9fe0() {
   return (neuron0x1fe1980()*-1.10212);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa020() {
   return (neuron0x1fe1cc0()*-1.34946);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa060() {
   return (neuron0x1fe2000()*-0.0584919);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa0a0() {
   return (neuron0x1fe2340()*0.771958);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa0e0() {
   return (neuron0x1fe2680()*1.2827);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa120() {
   return (neuron0x1fe29c0()*-0.635347);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa160() {
   return (neuron0x1fe2d00()*0.615371);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa1a0() {
   return (neuron0x1fe3040()*-1.28285);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa1e0() {
   return (neuron0x1fe3380()*-1.57059);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa220() {
   return (neuron0x1fe36c0()*0.959947);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa260() {
   return (neuron0x1fe3a00()*0.284219);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9cf0() {
   return (neuron0x1fe3d40()*0.133195);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9d30() {
   return (neuron0x1fe42a0()*1.05357);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa3b0() {
   return (neuron0x1fe44c0()*-0.357854);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa3f0() {
   return (neuron0x1fe4800()*-0.840732);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa430() {
   return (neuron0x1fe4b40()*-0.305461);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa470() {
   return (neuron0x1fe4e80()*0.30582);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa4b0() {
   return (neuron0x1fe51c0()*0.182881);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa4f0() {
   return (neuron0x1fe5500()*-1.6803);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa870() {
   return (neuron0x1fe0940()*-0.399729);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa8b0() {
   return (neuron0x1fe0c80()*0.108218);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa8f0() {
   return (neuron0x1fe0fc0()*-2.2777);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa930() {
   return (neuron0x1fe1300()*0.0931508);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa970() {
   return (neuron0x1fe1640()*-0.0136412);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa9b0() {
   return (neuron0x1fe1980()*0.0765185);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa9f0() {
   return (neuron0x1fe1cc0()*0.111763);
}

double NNfunction_ns_chi02_dR::synapse0x1ffaa30() {
   return (neuron0x1fe2000()*-0.101711);
}

double NNfunction_ns_chi02_dR::synapse0x1ffaa70() {
   return (neuron0x1fe2340()*0.0702108);
}

double NNfunction_ns_chi02_dR::synapse0x1ffaab0() {
   return (neuron0x1fe2680()*-0.148564);
}

double NNfunction_ns_chi02_dR::synapse0x1ffaaf0() {
   return (neuron0x1fe29c0()*0.017601);
}

double NNfunction_ns_chi02_dR::synapse0x1ffab30() {
   return (neuron0x1fe2d00()*-0.00397982);
}

double NNfunction_ns_chi02_dR::synapse0x1ffab70() {
   return (neuron0x1fe3040()*0.00528059);
}

double NNfunction_ns_chi02_dR::synapse0x1ffabb0() {
   return (neuron0x1fe3380()*0.0573004);
}

double NNfunction_ns_chi02_dR::synapse0x1ffabf0() {
   return (neuron0x1fe36c0()*-0.0371897);
}

double NNfunction_ns_chi02_dR::synapse0x1ffac30() {
   return (neuron0x1fe3a00()*-0.0595535);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa6c0() {
   return (neuron0x1fe3d40()*-0.191268);
}

double NNfunction_ns_chi02_dR::synapse0x1ffa700() {
   return (neuron0x1fe42a0()*0.259078);
}

double NNfunction_ns_chi02_dR::synapse0x1ffad80() {
   return (neuron0x1fe44c0()*0.028352);
}

double NNfunction_ns_chi02_dR::synapse0x1ffadc0() {
   return (neuron0x1fe4800()*-0.0233898);
}

double NNfunction_ns_chi02_dR::synapse0x1ffae00() {
   return (neuron0x1fe4b40()*-0.0809044);
}

double NNfunction_ns_chi02_dR::synapse0x1ffae40() {
   return (neuron0x1fe4e80()*0.0295041);
}

double NNfunction_ns_chi02_dR::synapse0x1ffae80() {
   return (neuron0x1fe51c0()*-0.0640588);
}

double NNfunction_ns_chi02_dR::synapse0x1ffaec0() {
   return (neuron0x1fe5500()*4.16819);
}

double NNfunction_ns_chi02_dR::synapse0x1ffb240() {
   return (neuron0x1fe0940()*0.0360821);
}

double NNfunction_ns_chi02_dR::synapse0x1fef810() {
   return (neuron0x1fe0c80()*-1.86023);
}

double NNfunction_ns_chi02_dR::synapse0x1fef850() {
   return (neuron0x1fe0fc0()*-0.267846);
}

double NNfunction_ns_chi02_dR::synapse0x1fef890() {
   return (neuron0x1fe1300()*0.00643276);
}

double NNfunction_ns_chi02_dR::synapse0x1fefae0() {
   return (neuron0x1fe1640()*0.0128048);
}

double NNfunction_ns_chi02_dR::synapse0x1fefb20() {
   return (neuron0x1fe1980()*0.00525441);
}

double NNfunction_ns_chi02_dR::synapse0x1fefb60() {
   return (neuron0x1fe1cc0()*-0.0373107);
}

double NNfunction_ns_chi02_dR::synapse0x1fefdb0() {
   return (neuron0x1fe2000()*-0.0129562);
}

double NNfunction_ns_chi02_dR::synapse0x1fefdf0() {
   return (neuron0x1fe2340()*0.0225);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0040() {
   return (neuron0x1fe2680()*0.0300345);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0080() {
   return (neuron0x1fe29c0()*0.0224397);
}

double NNfunction_ns_chi02_dR::synapse0x1ff00c0() {
   return (neuron0x1fe2d00()*-0.00922024);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0310() {
   return (neuron0x1fe3040()*0.0078127);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0350() {
   return (neuron0x1fe3380()*0.00924161);
}

double NNfunction_ns_chi02_dR::synapse0x1ff05a0() {
   return (neuron0x1fe36c0()*-0.0400796);
}

double NNfunction_ns_chi02_dR::synapse0x1ff05e0() {
   return (neuron0x1fe3a00()*-0.00614784);
}

double NNfunction_ns_chi02_dR::synapse0x1ffb090() {
   return (neuron0x1fe3d40()*-0.00923275);
}

double NNfunction_ns_chi02_dR::synapse0x1ffb0d0() {
   return (neuron0x1fe42a0()*-0.0677757);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0730() {
   return (neuron0x1fe44c0()*0.0670449);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0c40() {
   return (neuron0x1fe4800()*-0.00544671);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0c80() {
   return (neuron0x1fe4b40()*-0.00982243);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0cc0() {
   return (neuron0x1fe4e80()*0.0110602);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0f10() {
   return (neuron0x1fe51c0()*-0.0154353);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0f50() {
   return (neuron0x1fe5500()*-10.6297);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0800() {
   return (neuron0x1fe0940()*-0.34509);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0840() {
   return (neuron0x1fe0c80()*1.57179);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0880() {
   return (neuron0x1fe0fc0()*1.715);
}

double NNfunction_ns_chi02_dR::synapse0x1ff08c0() {
   return (neuron0x1fe1300()*0.296031);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1240() {
   return (neuron0x1fe1640()*-0.599136);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd590() {
   return (neuron0x1fe1980()*-0.30536);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd5d0() {
   return (neuron0x1fe1cc0()*0.164216);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd610() {
   return (neuron0x1fe2000()*0.553479);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd650() {
   return (neuron0x1fe2340()*-0.724787);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd690() {
   return (neuron0x1fe2680()*0.0171577);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd6d0() {
   return (neuron0x1fe29c0()*0.511069);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd710() {
   return (neuron0x1fe2d00()*-0.129026);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd750() {
   return (neuron0x1fe3040()*-0.562353);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd790() {
   return (neuron0x1fe3380()*0.286461);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd7d0() {
   return (neuron0x1fe36c0()*-0.335435);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd810() {
   return (neuron0x1fe3a00()*-1.08663);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1120() {
   return (neuron0x1fe3d40()*0.452862);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1160() {
   return (neuron0x1fe42a0()*-2.13997);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd960() {
   return (neuron0x1fe44c0()*-0.182858);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd9a0() {
   return (neuron0x1fe4800()*-0.0100288);
}

double NNfunction_ns_chi02_dR::synapse0x1ffd9e0() {
   return (neuron0x1fe4b40()*0.137602);
}

double NNfunction_ns_chi02_dR::synapse0x1ffda20() {
   return (neuron0x1fe4e80()*0.16168);
}

double NNfunction_ns_chi02_dR::synapse0x1ffda60() {
   return (neuron0x1fe51c0()*0.152602);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdaa0() {
   return (neuron0x1fe5500()*0.274193);
}

double NNfunction_ns_chi02_dR::synapse0x1ffde20() {
   return (neuron0x1fe0940()*-0.0755095);
}

double NNfunction_ns_chi02_dR::synapse0x1ffde60() {
   return (neuron0x1fe0c80()*0.0573141);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdea0() {
   return (neuron0x1fe0fc0()*0.700292);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdee0() {
   return (neuron0x1fe1300()*-0.0225935);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdf20() {
   return (neuron0x1fe1640()*0.00835454);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdf60() {
   return (neuron0x1fe1980()*0.00117507);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdfa0() {
   return (neuron0x1fe1cc0()*0.0357377);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdfe0() {
   return (neuron0x1fe2000()*0.00653799);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe020() {
   return (neuron0x1fe2340()*-0.0231428);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe060() {
   return (neuron0x1fe2680()*-0.0124083);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe0a0() {
   return (neuron0x1fe29c0()*0.0503728);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe0e0() {
   return (neuron0x1fe2d00()*-0.0247012);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe120() {
   return (neuron0x1fe3040()*0.00727306);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe160() {
   return (neuron0x1fe3380()*0.0447719);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe1a0() {
   return (neuron0x1fe36c0()*-0.0418441);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe1e0() {
   return (neuron0x1fe3a00()*-0.0170306);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdc70() {
   return (neuron0x1fe3d40()*0.0178218);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdcb0() {
   return (neuron0x1fe42a0()*-0.0471999);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe330() {
   return (neuron0x1fe44c0()*0.0416672);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe370() {
   return (neuron0x1fe4800()*0.0285098);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe3b0() {
   return (neuron0x1fe4b40()*-0.0216273);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe3f0() {
   return (neuron0x1fe4e80()*-0.0131587);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe430() {
   return (neuron0x1fe51c0()*0.041999);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe470() {
   return (neuron0x1fe5500()*8.59939);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe7f0() {
   return (neuron0x1fe0940()*0.124466);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe830() {
   return (neuron0x1fe0c80()*1.29558);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe870() {
   return (neuron0x1fe0fc0()*9.56955);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe8b0() {
   return (neuron0x1fe1300()*0.0146544);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe8f0() {
   return (neuron0x1fe1640()*-0.0360443);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe930() {
   return (neuron0x1fe1980()*-0.0402812);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe970() {
   return (neuron0x1fe1cc0()*0.0257318);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe9b0() {
   return (neuron0x1fe2000()*-0.0640239);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe9f0() {
   return (neuron0x1fe2340()*-0.0476538);
}

double NNfunction_ns_chi02_dR::synapse0x1ffea30() {
   return (neuron0x1fe2680()*-0.00334862);
}

double NNfunction_ns_chi02_dR::synapse0x1ffea70() {
   return (neuron0x1fe29c0()*0.0524838);
}

double NNfunction_ns_chi02_dR::synapse0x1ffeab0() {
   return (neuron0x1fe2d00()*0.00627759);
}

double NNfunction_ns_chi02_dR::synapse0x1ffeaf0() {
   return (neuron0x1fe3040()*0.0809837);
}

double NNfunction_ns_chi02_dR::synapse0x1ffeb30() {
   return (neuron0x1fe3380()*-0.0412415);
}

double NNfunction_ns_chi02_dR::synapse0x1ffeb70() {
   return (neuron0x1fe36c0()*-0.0896994);
}

double NNfunction_ns_chi02_dR::synapse0x1ffebb0() {
   return (neuron0x1fe3a00()*0.00604232);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe640() {
   return (neuron0x1fe3d40()*-0.0643016);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe680() {
   return (neuron0x1fe42a0()*-0.0902563);
}

double NNfunction_ns_chi02_dR::synapse0x1ffed00() {
   return (neuron0x1fe44c0()*0.068002);
}

double NNfunction_ns_chi02_dR::synapse0x1ffed40() {
   return (neuron0x1fe4800()*0.0530669);
}

double NNfunction_ns_chi02_dR::synapse0x1ffed80() {
   return (neuron0x1fe4b40()*-0.0115344);
}

double NNfunction_ns_chi02_dR::synapse0x1ffedc0() {
   return (neuron0x1fe4e80()*-0.01133);
}

double NNfunction_ns_chi02_dR::synapse0x1ffee00() {
   return (neuron0x1fe51c0()*-0.0555241);
}

double NNfunction_ns_chi02_dR::synapse0x1ffee40() {
   return (neuron0x1fe5500()*6.42752);
}

double NNfunction_ns_chi02_dR::synapse0x1fff1c0() {
   return (neuron0x1fe0940()*0.0351548);
}

double NNfunction_ns_chi02_dR::synapse0x1fff200() {
   return (neuron0x1fe0c80()*-7.08357);
}

double NNfunction_ns_chi02_dR::synapse0x1fff240() {
   return (neuron0x1fe0fc0()*6.19887);
}

double NNfunction_ns_chi02_dR::synapse0x1fff280() {
   return (neuron0x1fe1300()*-0.0425609);
}

double NNfunction_ns_chi02_dR::synapse0x1fff2c0() {
   return (neuron0x1fe1640()*0.0428614);
}

double NNfunction_ns_chi02_dR::synapse0x1fff300() {
   return (neuron0x1fe1980()*-0.00922517);
}

double NNfunction_ns_chi02_dR::synapse0x1fff340() {
   return (neuron0x1fe1cc0()*0.0145231);
}

double NNfunction_ns_chi02_dR::synapse0x1fff380() {
   return (neuron0x1fe2000()*-0.00712411);
}

double NNfunction_ns_chi02_dR::synapse0x1fff3c0() {
   return (neuron0x1fe2340()*-0.0203577);
}

double NNfunction_ns_chi02_dR::synapse0x1fff400() {
   return (neuron0x1fe2680()*0.0280877);
}

double NNfunction_ns_chi02_dR::synapse0x1fff440() {
   return (neuron0x1fe29c0()*-0.0182596);
}

double NNfunction_ns_chi02_dR::synapse0x1fff480() {
   return (neuron0x1fe2d00()*0.00730756);
}

double NNfunction_ns_chi02_dR::synapse0x1fff4c0() {
   return (neuron0x1fe3040()*-0.00282456);
}

double NNfunction_ns_chi02_dR::synapse0x1fff500() {
   return (neuron0x1fe3380()*-0.0198131);
}

double NNfunction_ns_chi02_dR::synapse0x1fff540() {
   return (neuron0x1fe36c0()*0.120094);
}

double NNfunction_ns_chi02_dR::synapse0x1fff580() {
   return (neuron0x1fe3a00()*-0.0342759);
}

double NNfunction_ns_chi02_dR::synapse0x1fff010() {
   return (neuron0x1fe3d40()*-0.0230288);
}

double NNfunction_ns_chi02_dR::synapse0x1fff050() {
   return (neuron0x1fe42a0()*-0.3257);
}

double NNfunction_ns_chi02_dR::synapse0x1fff6d0() {
   return (neuron0x1fe44c0()*-0.0597167);
}

double NNfunction_ns_chi02_dR::synapse0x1fff710() {
   return (neuron0x1fe4800()*-0.0562462);
}

double NNfunction_ns_chi02_dR::synapse0x1fff750() {
   return (neuron0x1fe4b40()*-0.0178781);
}

double NNfunction_ns_chi02_dR::synapse0x1fff790() {
   return (neuron0x1fe4e80()*0.0308704);
}

double NNfunction_ns_chi02_dR::synapse0x1fff7d0() {
   return (neuron0x1fe51c0()*0.104533);
}

double NNfunction_ns_chi02_dR::synapse0x1fff810() {
   return (neuron0x1fe5500()*0.119553);
}

double NNfunction_ns_chi02_dR::synapse0x1fffb90() {
   return (neuron0x1fe0940()*-0.00309852);
}

double NNfunction_ns_chi02_dR::synapse0x1fffbd0() {
   return (neuron0x1fe0c80()*-0.00523351);
}

double NNfunction_ns_chi02_dR::synapse0x1fffc10() {
   return (neuron0x1fe0fc0()*0.0120193);
}

double NNfunction_ns_chi02_dR::synapse0x1fffc50() {
   return (neuron0x1fe1300()*-3.59111);
}

double NNfunction_ns_chi02_dR::synapse0x1fffc90() {
   return (neuron0x1fe1640()*0.0119522);
}

double NNfunction_ns_chi02_dR::synapse0x1fffcd0() {
   return (neuron0x1fe1980()*0.000646857);
}

double NNfunction_ns_chi02_dR::synapse0x1fffd10() {
   return (neuron0x1fe1cc0()*0.0145245);
}

double NNfunction_ns_chi02_dR::synapse0x1fffd50() {
   return (neuron0x1fe2000()*-0.0106604);
}

double NNfunction_ns_chi02_dR::synapse0x1fffd90() {
   return (neuron0x1fe2340()*-0.00896411);
}

double NNfunction_ns_chi02_dR::synapse0x1fffdd0() {
   return (neuron0x1fe2680()*-0.00846237);
}

double NNfunction_ns_chi02_dR::synapse0x1fffe10() {
   return (neuron0x1fe29c0()*-0.0156001);
}

double NNfunction_ns_chi02_dR::synapse0x1fffe50() {
   return (neuron0x1fe2d00()*0.00375569);
}

double NNfunction_ns_chi02_dR::synapse0x1fffe90() {
   return (neuron0x1fe3040()*0.00409211);
}

double NNfunction_ns_chi02_dR::synapse0x1fffed0() {
   return (neuron0x1fe3380()*-9.82558e-05);
}

double NNfunction_ns_chi02_dR::synapse0x1ffff10() {
   return (neuron0x1fe36c0()*0.0123423);
}

double NNfunction_ns_chi02_dR::synapse0x1ffff50() {
   return (neuron0x1fe3a00()*0.00811652);
}

double NNfunction_ns_chi02_dR::synapse0x1fff9e0() {
   return (neuron0x1fe3d40()*-0.00919168);
}

double NNfunction_ns_chi02_dR::synapse0x1fffa20() {
   return (neuron0x1fe42a0()*-0.0845789);
}

double NNfunction_ns_chi02_dR::synapse0x20000a0() {
   return (neuron0x1fe44c0()*-0.00248089);
}

double NNfunction_ns_chi02_dR::synapse0x20000e0() {
   return (neuron0x1fe4800()*0.0140448);
}

double NNfunction_ns_chi02_dR::synapse0x2000120() {
   return (neuron0x1fe4b40()*-0.00247342);
}

double NNfunction_ns_chi02_dR::synapse0x2000160() {
   return (neuron0x1fe4e80()*0.00607492);
}

double NNfunction_ns_chi02_dR::synapse0x20001a0() {
   return (neuron0x1fe51c0()*-0.000402475);
}

double NNfunction_ns_chi02_dR::synapse0x20001e0() {
   return (neuron0x1fe5500()*0.0524505);
}

double NNfunction_ns_chi02_dR::synapse0x2000560() {
   return (neuron0x1fe0940()*-1.12734);
}

double NNfunction_ns_chi02_dR::synapse0x20005a0() {
   return (neuron0x1fe0c80()*-4.66428);
}

double NNfunction_ns_chi02_dR::synapse0x20005e0() {
   return (neuron0x1fe0fc0()*1.74863);
}

double NNfunction_ns_chi02_dR::synapse0x2000620() {
   return (neuron0x1fe1300()*0.550157);
}

double NNfunction_ns_chi02_dR::synapse0x2000660() {
   return (neuron0x1fe1640()*0.184449);
}

double NNfunction_ns_chi02_dR::synapse0x20006a0() {
   return (neuron0x1fe1980()*0.447493);
}

double NNfunction_ns_chi02_dR::synapse0x20006e0() {
   return (neuron0x1fe1cc0()*-0.422689);
}

double NNfunction_ns_chi02_dR::synapse0x2000720() {
   return (neuron0x1fe2000()*-0.0878763);
}

double NNfunction_ns_chi02_dR::synapse0x2000760() {
   return (neuron0x1fe2340()*1.10711);
}

double NNfunction_ns_chi02_dR::synapse0x20007a0() {
   return (neuron0x1fe2680()*-0.290574);
}

double NNfunction_ns_chi02_dR::synapse0x20007e0() {
   return (neuron0x1fe29c0()*0.530408);
}

double NNfunction_ns_chi02_dR::synapse0x2000820() {
   return (neuron0x1fe2d00()*-0.466503);
}

double NNfunction_ns_chi02_dR::synapse0x2000860() {
   return (neuron0x1fe3040()*0.308598);
}

double NNfunction_ns_chi02_dR::synapse0x20008a0() {
   return (neuron0x1fe3380()*-0.167986);
}

double NNfunction_ns_chi02_dR::synapse0x20008e0() {
   return (neuron0x1fe36c0()*-0.102891);
}

double NNfunction_ns_chi02_dR::synapse0x2000920() {
   return (neuron0x1fe3a00()*-0.483927);
}

double NNfunction_ns_chi02_dR::synapse0x20003b0() {
   return (neuron0x1fe3d40()*0.444047);
}

double NNfunction_ns_chi02_dR::synapse0x20003f0() {
   return (neuron0x1fe42a0()*0.384488);
}

double NNfunction_ns_chi02_dR::synapse0x2000a70() {
   return (neuron0x1fe44c0()*-0.652752);
}

double NNfunction_ns_chi02_dR::synapse0x2000ab0() {
   return (neuron0x1fe4800()*-0.074339);
}

double NNfunction_ns_chi02_dR::synapse0x2000af0() {
   return (neuron0x1fe4b40()*0.5002);
}

double NNfunction_ns_chi02_dR::synapse0x2000b30() {
   return (neuron0x1fe4e80()*0.314945);
}

double NNfunction_ns_chi02_dR::synapse0x2000b70() {
   return (neuron0x1fe51c0()*0.665081);
}

double NNfunction_ns_chi02_dR::synapse0x2000bb0() {
   return (neuron0x1fe5500()*-0.589687);
}

double NNfunction_ns_chi02_dR::synapse0x2000f30() {
   return (neuron0x1fe0940()*-0.0733027);
}

double NNfunction_ns_chi02_dR::synapse0x2000f70() {
   return (neuron0x1fe0c80()*0.173634);
}

double NNfunction_ns_chi02_dR::synapse0x2000fb0() {
   return (neuron0x1fe0fc0()*-0.0326521);
}

double NNfunction_ns_chi02_dR::synapse0x2000ff0() {
   return (neuron0x1fe1300()*0.00108803);
}

double NNfunction_ns_chi02_dR::synapse0x2001030() {
   return (neuron0x1fe1640()*-0.00416365);
}

double NNfunction_ns_chi02_dR::synapse0x2001070() {
   return (neuron0x1fe1980()*0.0360186);
}

double NNfunction_ns_chi02_dR::synapse0x20010b0() {
   return (neuron0x1fe1cc0()*0.00361247);
}

double NNfunction_ns_chi02_dR::synapse0x20010f0() {
   return (neuron0x1fe2000()*0.0178226);
}

double NNfunction_ns_chi02_dR::synapse0x2001130() {
   return (neuron0x1fe2340()*0.0113812);
}

double NNfunction_ns_chi02_dR::synapse0x2001170() {
   return (neuron0x1fe2680()*-0.0688055);
}

double NNfunction_ns_chi02_dR::synapse0x20011b0() {
   return (neuron0x1fe29c0()*-0.0142693);
}

double NNfunction_ns_chi02_dR::synapse0x20011f0() {
   return (neuron0x1fe2d00()*0.0173115);
}

double NNfunction_ns_chi02_dR::synapse0x2001230() {
   return (neuron0x1fe3040()*0.0144421);
}

double NNfunction_ns_chi02_dR::synapse0x2001270() {
   return (neuron0x1fe3380()*-0.0229231);
}

double NNfunction_ns_chi02_dR::synapse0x20012b0() {
   return (neuron0x1fe36c0()*0.0239373);
}

double NNfunction_ns_chi02_dR::synapse0x20012f0() {
   return (neuron0x1fe3a00()*0.0604033);
}

double NNfunction_ns_chi02_dR::synapse0x2000d80() {
   return (neuron0x1fe3d40()*0.0739683);
}

double NNfunction_ns_chi02_dR::synapse0x2000dc0() {
   return (neuron0x1fe42a0()*1.69072);
}

double NNfunction_ns_chi02_dR::synapse0x2001440() {
   return (neuron0x1fe44c0()*-0.0468411);
}

double NNfunction_ns_chi02_dR::synapse0x2001480() {
   return (neuron0x1fe4800()*-0.0495686);
}

double NNfunction_ns_chi02_dR::synapse0x20014c0() {
   return (neuron0x1fe4b40()*0.0390114);
}

double NNfunction_ns_chi02_dR::synapse0x2001500() {
   return (neuron0x1fe4e80()*0.0231313);
}

double NNfunction_ns_chi02_dR::synapse0x2001540() {
   return (neuron0x1fe51c0()*0.0498286);
}

double NNfunction_ns_chi02_dR::synapse0x2001580() {
   return (neuron0x1fe5500()*-0.133509);
}

double NNfunction_ns_chi02_dR::synapse0x2001900() {
   return (neuron0x1fe0940()*1.37184);
}

double NNfunction_ns_chi02_dR::synapse0x2001940() {
   return (neuron0x1fe0c80()*0.300634);
}

double NNfunction_ns_chi02_dR::synapse0x2001980() {
   return (neuron0x1fe0fc0()*1.0643);
}

double NNfunction_ns_chi02_dR::synapse0x20019c0() {
   return (neuron0x1fe1300()*1.40748);
}

double NNfunction_ns_chi02_dR::synapse0x2001a00() {
   return (neuron0x1fe1640()*-0.590307);
}

double NNfunction_ns_chi02_dR::synapse0x2001a40() {
   return (neuron0x1fe1980()*1.24758);
}

double NNfunction_ns_chi02_dR::synapse0x2001a80() {
   return (neuron0x1fe1cc0()*0.232952);
}

double NNfunction_ns_chi02_dR::synapse0x2001ac0() {
   return (neuron0x1fe2000()*-0.607717);
}

double NNfunction_ns_chi02_dR::synapse0x2001b00() {
   return (neuron0x1fe2340()*-0.341666);
}

double NNfunction_ns_chi02_dR::synapse0x2001b40() {
   return (neuron0x1fe2680()*0.246542);
}

double NNfunction_ns_chi02_dR::synapse0x2001b80() {
   return (neuron0x1fe29c0()*0.637035);
}

double NNfunction_ns_chi02_dR::synapse0x2001bc0() {
   return (neuron0x1fe2d00()*0.434924);
}

double NNfunction_ns_chi02_dR::synapse0x2001c00() {
   return (neuron0x1fe3040()*-0.578422);
}

double NNfunction_ns_chi02_dR::synapse0x2001c40() {
   return (neuron0x1fe3380()*0.757041);
}

double NNfunction_ns_chi02_dR::synapse0x2001c80() {
   return (neuron0x1fe36c0()*-1.30854);
}

double NNfunction_ns_chi02_dR::synapse0x2001cc0() {
   return (neuron0x1fe3a00()*-0.137801);
}

double NNfunction_ns_chi02_dR::synapse0x2001750() {
   return (neuron0x1fe3d40()*0.568661);
}

double NNfunction_ns_chi02_dR::synapse0x2001790() {
   return (neuron0x1fe42a0()*-0.653859);
}

double NNfunction_ns_chi02_dR::synapse0x2001e10() {
   return (neuron0x1fe44c0()*-0.0916342);
}

double NNfunction_ns_chi02_dR::synapse0x2001e50() {
   return (neuron0x1fe4800()*0.189376);
}

double NNfunction_ns_chi02_dR::synapse0x2001e90() {
   return (neuron0x1fe4b40()*0.0268044);
}

double NNfunction_ns_chi02_dR::synapse0x2001ed0() {
   return (neuron0x1fe4e80()*0.324513);
}

double NNfunction_ns_chi02_dR::synapse0x2001f10() {
   return (neuron0x1fe51c0()*-0.0726073);
}

double NNfunction_ns_chi02_dR::synapse0x2001f50() {
   return (neuron0x1fe5500()*-1.09183);
}

double NNfunction_ns_chi02_dR::synapse0x1feaa00() {
   return (neuron0x1fe0940()*-0.0527806);
}

double NNfunction_ns_chi02_dR::synapse0x1feaa40() {
   return (neuron0x1fe0c80()*-6.87779);
}

double NNfunction_ns_chi02_dR::synapse0x1feaa80() {
   return (neuron0x1fe0fc0()*-1.87164);
}

double NNfunction_ns_chi02_dR::synapse0x1feaac0() {
   return (neuron0x1fe1300()*-0.022346);
}

double NNfunction_ns_chi02_dR::synapse0x1feab00() {
   return (neuron0x1fe1640()*-0.0836585);
}

double NNfunction_ns_chi02_dR::synapse0x1feab40() {
   return (neuron0x1fe1980()*0.0135216);
}

double NNfunction_ns_chi02_dR::synapse0x1feab80() {
   return (neuron0x1fe1cc0()*0.0139207);
}

double NNfunction_ns_chi02_dR::synapse0x1feabc0() {
   return (neuron0x1fe2000()*-0.0648901);
}

double NNfunction_ns_chi02_dR::synapse0x20026e0() {
   return (neuron0x1fe2340()*-0.033023);
}

double NNfunction_ns_chi02_dR::synapse0x2002720() {
   return (neuron0x1fe2680()*-0.00304669);
}

double NNfunction_ns_chi02_dR::synapse0x2002760() {
   return (neuron0x1fe29c0()*0.0126072);
}

double NNfunction_ns_chi02_dR::synapse0x20027a0() {
   return (neuron0x1fe2d00()*-0.00915453);
}

double NNfunction_ns_chi02_dR::synapse0x20027e0() {
   return (neuron0x1fe3040()*-0.0685864);
}

double NNfunction_ns_chi02_dR::synapse0x2002820() {
   return (neuron0x1fe3380()*0.0427024);
}

double NNfunction_ns_chi02_dR::synapse0x2002860() {
   return (neuron0x1fe36c0()*-0.00465402);
}

double NNfunction_ns_chi02_dR::synapse0x20028a0() {
   return (neuron0x1fe3a00()*-0.00832061);
}

double NNfunction_ns_chi02_dR::synapse0x2002120() {
   return (neuron0x1fe3d40()*0.0711764);
}

double NNfunction_ns_chi02_dR::synapse0x2002160() {
   return (neuron0x1fe42a0()*0.137946);
}

double NNfunction_ns_chi02_dR::synapse0x20029f0() {
   return (neuron0x1fe44c0()*-0.0417155);
}

double NNfunction_ns_chi02_dR::synapse0x2002a30() {
   return (neuron0x1fe4800()*-0.0171106);
}

double NNfunction_ns_chi02_dR::synapse0x2002a70() {
   return (neuron0x1fe4b40()*0.0582153);
}

double NNfunction_ns_chi02_dR::synapse0x2002ab0() {
   return (neuron0x1fe4e80()*-0.0929299);
}

double NNfunction_ns_chi02_dR::synapse0x2002af0() {
   return (neuron0x1fe51c0()*-0.0431606);
}

double NNfunction_ns_chi02_dR::synapse0x2002b30() {
   return (neuron0x1fe5500()*-7.06729);
}

double NNfunction_ns_chi02_dR::synapse0x2002eb0() {
   return (neuron0x1fe0940()*-0.172325);
}

double NNfunction_ns_chi02_dR::synapse0x2002ef0() {
   return (neuron0x1fe0c80()*2.05323);
}

double NNfunction_ns_chi02_dR::synapse0x2002f30() {
   return (neuron0x1fe0fc0()*-1.11146);
}

double NNfunction_ns_chi02_dR::synapse0x2002f70() {
   return (neuron0x1fe1300()*-0.010279);
}

double NNfunction_ns_chi02_dR::synapse0x2002fb0() {
   return (neuron0x1fe1640()*-0.0153403);
}

double NNfunction_ns_chi02_dR::synapse0x2002ff0() {
   return (neuron0x1fe1980()*-0.0294456);
}

double NNfunction_ns_chi02_dR::synapse0x2003030() {
   return (neuron0x1fe1cc0()*0.0267054);
}

double NNfunction_ns_chi02_dR::synapse0x2003070() {
   return (neuron0x1fe2000()*-0.139137);
}

double NNfunction_ns_chi02_dR::synapse0x20030b0() {
   return (neuron0x1fe2340()*-0.0386462);
}

double NNfunction_ns_chi02_dR::synapse0x20030f0() {
   return (neuron0x1fe2680()*-0.0121751);
}

double NNfunction_ns_chi02_dR::synapse0x2003130() {
   return (neuron0x1fe29c0()*-0.000833861);
}

double NNfunction_ns_chi02_dR::synapse0x2003170() {
   return (neuron0x1fe2d00()*0.0489175);
}

double NNfunction_ns_chi02_dR::synapse0x20031b0() {
   return (neuron0x1fe3040()*0.00997545);
}

double NNfunction_ns_chi02_dR::synapse0x20031f0() {
   return (neuron0x1fe3380()*0.0487054);
}

double NNfunction_ns_chi02_dR::synapse0x2003230() {
   return (neuron0x1fe36c0()*-0.0456654);
}

double NNfunction_ns_chi02_dR::synapse0x2003270() {
   return (neuron0x1fe3a00()*0.0504388);
}

double NNfunction_ns_chi02_dR::synapse0x2002d00() {
   return (neuron0x1fe3d40()*-0.014425);
}

double NNfunction_ns_chi02_dR::synapse0x2002d40() {
   return (neuron0x1fe42a0()*0.150373);
}

double NNfunction_ns_chi02_dR::synapse0x20033c0() {
   return (neuron0x1fe44c0()*0.0235994);
}

double NNfunction_ns_chi02_dR::synapse0x2003400() {
   return (neuron0x1fe4800()*-0.0188738);
}

double NNfunction_ns_chi02_dR::synapse0x2003440() {
   return (neuron0x1fe4b40()*0.00555584);
}

double NNfunction_ns_chi02_dR::synapse0x2003480() {
   return (neuron0x1fe4e80()*-0.0268948);
}

double NNfunction_ns_chi02_dR::synapse0x20034c0() {
   return (neuron0x1fe51c0()*-0.0030173);
}

double NNfunction_ns_chi02_dR::synapse0x2003500() {
   return (neuron0x1fe5500()*-1.45962);
}

double NNfunction_ns_chi02_dR::synapse0x2003880() {
   return (neuron0x1fe0940()*0.0200222);
}

double NNfunction_ns_chi02_dR::synapse0x20038c0() {
   return (neuron0x1fe0c80()*-0.0322881);
}

double NNfunction_ns_chi02_dR::synapse0x2003900() {
   return (neuron0x1fe0fc0()*0.0263344);
}

double NNfunction_ns_chi02_dR::synapse0x2003940() {
   return (neuron0x1fe1300()*3.89132);
}

double NNfunction_ns_chi02_dR::synapse0x2003980() {
   return (neuron0x1fe1640()*0.0593865);
}

double NNfunction_ns_chi02_dR::synapse0x20039c0() {
   return (neuron0x1fe1980()*0.0158266);
}

double NNfunction_ns_chi02_dR::synapse0x2003a00() {
   return (neuron0x1fe1cc0()*0.0232595);
}

double NNfunction_ns_chi02_dR::synapse0x2003a40() {
   return (neuron0x1fe2000()*0.025606);
}

double NNfunction_ns_chi02_dR::synapse0x2003a80() {
   return (neuron0x1fe2340()*0.00808085);
}

double NNfunction_ns_chi02_dR::synapse0x2003ac0() {
   return (neuron0x1fe2680()*-0.0357539);
}

double NNfunction_ns_chi02_dR::synapse0x2003b00() {
   return (neuron0x1fe29c0()*-0.00871939);
}

double NNfunction_ns_chi02_dR::synapse0x2003b40() {
   return (neuron0x1fe2d00()*-0.00970828);
}

double NNfunction_ns_chi02_dR::synapse0x2003b80() {
   return (neuron0x1fe3040()*-0.0224244);
}

double NNfunction_ns_chi02_dR::synapse0x2003bc0() {
   return (neuron0x1fe3380()*-0.00866076);
}

double NNfunction_ns_chi02_dR::synapse0x2003c00() {
   return (neuron0x1fe36c0()*0.0395182);
}

double NNfunction_ns_chi02_dR::synapse0x2003c40() {
   return (neuron0x1fe3a00()*0.0248973);
}

double NNfunction_ns_chi02_dR::synapse0x20036d0() {
   return (neuron0x1fe3d40()*0.0103453);
}

double NNfunction_ns_chi02_dR::synapse0x2003710() {
   return (neuron0x1fe42a0()*-0.521802);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4240() {
   return (neuron0x1fe44c0()*-0.0126051);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4280() {
   return (neuron0x1fe4800()*-0.000893498);
}

double NNfunction_ns_chi02_dR::synapse0x1ff42c0() {
   return (neuron0x1fe4b40()*0.020956);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4300() {
   return (neuron0x1fe4e80()*-0.00824948);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4340() {
   return (neuron0x1fe51c0()*0.0237563);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4380() {
   return (neuron0x1fe5500()*0.144174);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4700() {
   return (neuron0x1fe0940()*-0.0457556);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4740() {
   return (neuron0x1fe0c80()*20.5183);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4780() {
   return (neuron0x1fe0fc0()*13.8284);
}

double NNfunction_ns_chi02_dR::synapse0x1ff47c0() {
   return (neuron0x1fe1300()*0.0375435);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4800() {
   return (neuron0x1fe1640()*-0.0484928);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4840() {
   return (neuron0x1fe1980()*-0.0258358);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4880() {
   return (neuron0x1fe1cc0()*-0.0477841);
}

double NNfunction_ns_chi02_dR::synapse0x1ff48c0() {
   return (neuron0x1fe2000()*-0.084693);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4900() {
   return (neuron0x1fe2340()*-0.0100283);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4940() {
   return (neuron0x1fe2680()*-0.0494336);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4980() {
   return (neuron0x1fe29c0()*0.0790259);
}

double NNfunction_ns_chi02_dR::synapse0x1ff49c0() {
   return (neuron0x1fe2d00()*0.0858414);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4a00() {
   return (neuron0x1fe3040()*0.0558562);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4a40() {
   return (neuron0x1fe3380()*0.024243);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4a80() {
   return (neuron0x1fe36c0()*0.0145124);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4ac0() {
   return (neuron0x1fe3a00()*-0.000385829);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4550() {
   return (neuron0x1fe3d40()*-0.110853);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4590() {
   return (neuron0x1fe42a0()*-0.0778681);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4c10() {
   return (neuron0x1fe44c0()*0.0118731);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4c50() {
   return (neuron0x1fe4800()*0.0601252);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4c90() {
   return (neuron0x1fe4b40()*-0.055566);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4cd0() {
   return (neuron0x1fe4e80()*-0.013901);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4d10() {
   return (neuron0x1fe51c0()*-0.112066);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4d50() {
   return (neuron0x1fe5500()*-0.0641282);
}

double NNfunction_ns_chi02_dR::synapse0x1ff50d0() {
   return (neuron0x1fe0940()*-0.019658);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5110() {
   return (neuron0x1fe0c80()*0.0175079);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5150() {
   return (neuron0x1fe0fc0()*-0.043015);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5190() {
   return (neuron0x1fe1300()*3.80059);
}

double NNfunction_ns_chi02_dR::synapse0x1ff51d0() {
   return (neuron0x1fe1640()*-0.0199224);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5210() {
   return (neuron0x1fe1980()*-0.010906);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5250() {
   return (neuron0x1fe1cc0()*0.0253354);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5290() {
   return (neuron0x1fe2000()*-0.00831003);
}

double NNfunction_ns_chi02_dR::synapse0x1ff52d0() {
   return (neuron0x1fe2340()*0.0163636);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5310() {
   return (neuron0x1fe2680()*-0.00521244);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5350() {
   return (neuron0x1fe29c0()*0.00685115);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5390() {
   return (neuron0x1fe2d00()*-0.00548908);
}

double NNfunction_ns_chi02_dR::synapse0x1ff53d0() {
   return (neuron0x1fe3040()*-0.0209821);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5410() {
   return (neuron0x1fe3380()*0.0170553);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5450() {
   return (neuron0x1fe36c0()*-0.00250281);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5490() {
   return (neuron0x1fe3a00()*0.0387974);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4f20() {
   return (neuron0x1fe3d40()*-0.0148276);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4f60() {
   return (neuron0x1fe42a0()*0.536901);
}

double NNfunction_ns_chi02_dR::synapse0x1ff55e0() {
   return (neuron0x1fe44c0()*0.0187617);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5620() {
   return (neuron0x1fe4800()*0.01166);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5660() {
   return (neuron0x1fe4b40()*-0.00506243);
}

double NNfunction_ns_chi02_dR::synapse0x1ff56a0() {
   return (neuron0x1fe4e80()*-0.0221191);
}

double NNfunction_ns_chi02_dR::synapse0x1ff56e0() {
   return (neuron0x1fe51c0()*-0.0240993);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5720() {
   return (neuron0x1fe5500()*-0.0476459);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5aa0() {
   return (neuron0x1fe0940()*-0.00491474);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5ae0() {
   return (neuron0x1fe0c80()*0.289806);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5b20() {
   return (neuron0x1fe0fc0()*0.0329449);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5b60() {
   return (neuron0x1fe1300()*-0.0894138);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5ba0() {
   return (neuron0x1fe1640()*-0.0594911);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5be0() {
   return (neuron0x1fe1980()*-0.0268302);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5c20() {
   return (neuron0x1fe1cc0()*-0.0795257);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5c60() {
   return (neuron0x1fe2000()*-0.00341126);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5ca0() {
   return (neuron0x1fe2340()*0.137708);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5ce0() {
   return (neuron0x1fe2680()*0.132584);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5d20() {
   return (neuron0x1fe29c0()*0.0396233);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5d60() {
   return (neuron0x1fe2d00()*-0.103591);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5da0() {
   return (neuron0x1fe3040()*0.00164568);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5de0() {
   return (neuron0x1fe3380()*-0.00935747);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5e20() {
   return (neuron0x1fe36c0()*0.0245716);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5e60() {
   return (neuron0x1fe3a00()*-0.0635386);
}

double NNfunction_ns_chi02_dR::synapse0x1ff58f0() {
   return (neuron0x1fe3d40()*-0.0660005);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5930() {
   return (neuron0x1fe42a0()*-2.1644);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5fb0() {
   return (neuron0x1fe44c0()*0.0456455);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5ff0() {
   return (neuron0x1fe4800()*-0.0901007);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6030() {
   return (neuron0x1fe4b40()*0.11523);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6070() {
   return (neuron0x1fe4e80()*0.0168819);
}

double NNfunction_ns_chi02_dR::synapse0x1ff60b0() {
   return (neuron0x1fe51c0()*0.0303417);
}

double NNfunction_ns_chi02_dR::synapse0x1ff60f0() {
   return (neuron0x1fe5500()*-0.676227);
}

double NNfunction_ns_chi02_dR::synapse0x2007fc0() {
   return (neuron0x1fe0940()*-0.029478);
}

double NNfunction_ns_chi02_dR::synapse0x2008000() {
   return (neuron0x1fe0c80()*-0.0739912);
}

double NNfunction_ns_chi02_dR::synapse0x2008040() {
   return (neuron0x1fe0fc0()*-0.454992);
}

double NNfunction_ns_chi02_dR::synapse0x2008080() {
   return (neuron0x1fe1300()*-0.00959184);
}

double NNfunction_ns_chi02_dR::synapse0x20080c0() {
   return (neuron0x1fe1640()*-0.00193032);
}

double NNfunction_ns_chi02_dR::synapse0x2008100() {
   return (neuron0x1fe1980()*-0.0056234);
}

double NNfunction_ns_chi02_dR::synapse0x2008140() {
   return (neuron0x1fe1cc0()*0.0239697);
}

double NNfunction_ns_chi02_dR::synapse0x2008180() {
   return (neuron0x1fe2000()*0.00980372);
}

double NNfunction_ns_chi02_dR::synapse0x20081c0() {
   return (neuron0x1fe2340()*0.0222251);
}

double NNfunction_ns_chi02_dR::synapse0x2008200() {
   return (neuron0x1fe2680()*0.042971);
}

double NNfunction_ns_chi02_dR::synapse0x2008240() {
   return (neuron0x1fe29c0()*-0.00667609);
}

double NNfunction_ns_chi02_dR::synapse0x2008280() {
   return (neuron0x1fe2d00()*0.00425112);
}

double NNfunction_ns_chi02_dR::synapse0x20082c0() {
   return (neuron0x1fe3040()*-0.030874);
}

double NNfunction_ns_chi02_dR::synapse0x2008300() {
   return (neuron0x1fe3380()*0.0256634);
}

double NNfunction_ns_chi02_dR::synapse0x2008340() {
   return (neuron0x1fe36c0()*-0.00226594);
}

double NNfunction_ns_chi02_dR::synapse0x2008380() {
   return (neuron0x1fe3a00()*0.0105609);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6130() {
   return (neuron0x1fe3d40()*-0.00976435);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6170() {
   return (neuron0x1fe42a0()*0.203525);
}

double NNfunction_ns_chi02_dR::synapse0x20084d0() {
   return (neuron0x1fe44c0()*-0.0209897);
}

double NNfunction_ns_chi02_dR::synapse0x2008510() {
   return (neuron0x1fe4800()*-0.0305502);
}

double NNfunction_ns_chi02_dR::synapse0x2008550() {
   return (neuron0x1fe4b40()*-0.0243209);
}

double NNfunction_ns_chi02_dR::synapse0x2008590() {
   return (neuron0x1fe4e80()*-0.0163702);
}

double NNfunction_ns_chi02_dR::synapse0x20085d0() {
   return (neuron0x1fe51c0()*0.0136179);
}

double NNfunction_ns_chi02_dR::synapse0x2008610() {
   return (neuron0x1fe5500()*11.6831);
}

double NNfunction_ns_chi02_dR::synapse0x2008990() {
   return (neuron0x1fe0940()*-0.0017842);
}

double NNfunction_ns_chi02_dR::synapse0x20089d0() {
   return (neuron0x1fe0c80()*1.83909);
}

double NNfunction_ns_chi02_dR::synapse0x2008a10() {
   return (neuron0x1fe0fc0()*-0.0581848);
}

double NNfunction_ns_chi02_dR::synapse0x2008a50() {
   return (neuron0x1fe1300()*-0.0108192);
}

double NNfunction_ns_chi02_dR::synapse0x2008a90() {
   return (neuron0x1fe1640()*0.00670512);
}

double NNfunction_ns_chi02_dR::synapse0x2008ad0() {
   return (neuron0x1fe1980()*-0.00475428);
}

double NNfunction_ns_chi02_dR::synapse0x2008b10() {
   return (neuron0x1fe1cc0()*-0.00373859);
}

double NNfunction_ns_chi02_dR::synapse0x2008b50() {
   return (neuron0x1fe2000()*-0.0075897);
}

double NNfunction_ns_chi02_dR::synapse0x2008b90() {
   return (neuron0x1fe2340()*-0.00690902);
}

double NNfunction_ns_chi02_dR::synapse0x2008bd0() {
   return (neuron0x1fe2680()*-0.00146573);
}

double NNfunction_ns_chi02_dR::synapse0x2008c10() {
   return (neuron0x1fe29c0()*0.00615507);
}

double NNfunction_ns_chi02_dR::synapse0x2008c50() {
   return (neuron0x1fe2d00()*0.00279812);
}

double NNfunction_ns_chi02_dR::synapse0x2008c90() {
   return (neuron0x1fe3040()*0.00374077);
}

double NNfunction_ns_chi02_dR::synapse0x2008cd0() {
   return (neuron0x1fe3380()*0.000957302);
}

double NNfunction_ns_chi02_dR::synapse0x2008d10() {
   return (neuron0x1fe36c0()*-0.0126218);
}

double NNfunction_ns_chi02_dR::synapse0x2008d50() {
   return (neuron0x1fe3a00()*-0.0257906);
}

double NNfunction_ns_chi02_dR::synapse0x20087e0() {
   return (neuron0x1fe3d40()*0.00827023);
}

double NNfunction_ns_chi02_dR::synapse0x2008820() {
   return (neuron0x1fe42a0()*0.338411);
}

double NNfunction_ns_chi02_dR::synapse0x2008ea0() {
   return (neuron0x1fe44c0()*0.0104208);
}

double NNfunction_ns_chi02_dR::synapse0x2008ee0() {
   return (neuron0x1fe4800()*0.00490869);
}

double NNfunction_ns_chi02_dR::synapse0x2008f20() {
   return (neuron0x1fe4b40()*0.000170602);
}

double NNfunction_ns_chi02_dR::synapse0x2008f60() {
   return (neuron0x1fe4e80()*-0.00900773);
}

double NNfunction_ns_chi02_dR::synapse0x2008fa0() {
   return (neuron0x1fe51c0()*0.0056335);
}

double NNfunction_ns_chi02_dR::synapse0x2008fe0() {
   return (neuron0x1fe5500()*0.0291747);
}

double NNfunction_ns_chi02_dR::synapse0x2009360() {
   return (neuron0x1fe0940()*1.30969);
}

double NNfunction_ns_chi02_dR::synapse0x20093a0() {
   return (neuron0x1fe0c80()*2.16261);
}

double NNfunction_ns_chi02_dR::synapse0x20093e0() {
   return (neuron0x1fe0fc0()*-0.854559);
}

double NNfunction_ns_chi02_dR::synapse0x2009420() {
   return (neuron0x1fe1300()*0.0399278);
}

double NNfunction_ns_chi02_dR::synapse0x2009460() {
   return (neuron0x1fe1640()*0.538323);
}

double NNfunction_ns_chi02_dR::synapse0x20094a0() {
   return (neuron0x1fe1980()*-0.0290334);
}

double NNfunction_ns_chi02_dR::synapse0x20094e0() {
   return (neuron0x1fe1cc0()*0.0780111);
}

double NNfunction_ns_chi02_dR::synapse0x2009520() {
   return (neuron0x1fe2000()*0.635534);
}

double NNfunction_ns_chi02_dR::synapse0x2009560() {
   return (neuron0x1fe2340()*0.279562);
}

double NNfunction_ns_chi02_dR::synapse0x20095a0() {
   return (neuron0x1fe2680()*0.289416);
}

double NNfunction_ns_chi02_dR::synapse0x20095e0() {
   return (neuron0x1fe29c0()*-0.550111);
}

double NNfunction_ns_chi02_dR::synapse0x2009620() {
   return (neuron0x1fe2d00()*-0.193751);
}

double NNfunction_ns_chi02_dR::synapse0x2009660() {
   return (neuron0x1fe3040()*-0.0189428);
}

double NNfunction_ns_chi02_dR::synapse0x20096a0() {
   return (neuron0x1fe3380()*-0.575735);
}

double NNfunction_ns_chi02_dR::synapse0x20096e0() {
   return (neuron0x1fe36c0()*-0.214578);
}

double NNfunction_ns_chi02_dR::synapse0x2009720() {
   return (neuron0x1fe3a00()*0.549238);
}

double NNfunction_ns_chi02_dR::synapse0x20091b0() {
   return (neuron0x1fe3d40()*0.233296);
}

double NNfunction_ns_chi02_dR::synapse0x20091f0() {
   return (neuron0x1fe42a0()*0.159546);
}

double NNfunction_ns_chi02_dR::synapse0x2009870() {
   return (neuron0x1fe44c0()*-0.277728);
}

double NNfunction_ns_chi02_dR::synapse0x20098b0() {
   return (neuron0x1fe4800()*-0.520556);
}

double NNfunction_ns_chi02_dR::synapse0x20098f0() {
   return (neuron0x1fe4b40()*-0.408533);
}

double NNfunction_ns_chi02_dR::synapse0x2009930() {
   return (neuron0x1fe4e80()*0.103869);
}

double NNfunction_ns_chi02_dR::synapse0x2009970() {
   return (neuron0x1fe51c0()*-0.0301514);
}

double NNfunction_ns_chi02_dR::synapse0x20099b0() {
   return (neuron0x1fe5500()*-1.62302);
}

double NNfunction_ns_chi02_dR::synapse0x2009d30() {
   return (neuron0x1fe0940()*2.40309);
}

double NNfunction_ns_chi02_dR::synapse0x2009d70() {
   return (neuron0x1fe0c80()*1.64472);
}

double NNfunction_ns_chi02_dR::synapse0x2009db0() {
   return (neuron0x1fe0fc0()*-0.556416);
}

double NNfunction_ns_chi02_dR::synapse0x2009df0() {
   return (neuron0x1fe1300()*0.409796);
}

double NNfunction_ns_chi02_dR::synapse0x2009e30() {
   return (neuron0x1fe1640()*-0.558355);
}

double NNfunction_ns_chi02_dR::synapse0x2009e70() {
   return (neuron0x1fe1980()*-1.98568);
}

double NNfunction_ns_chi02_dR::synapse0x2009eb0() {
   return (neuron0x1fe1cc0()*-0.930037);
}

double NNfunction_ns_chi02_dR::synapse0x2009ef0() {
   return (neuron0x1fe2000()*0.901313);
}

double NNfunction_ns_chi02_dR::synapse0x2009f30() {
   return (neuron0x1fe2340()*-0.372498);
}

double NNfunction_ns_chi02_dR::synapse0x2009f70() {
   return (neuron0x1fe2680()*-1.14327);
}

double NNfunction_ns_chi02_dR::synapse0x2009fb0() {
   return (neuron0x1fe29c0()*-0.402619);
}

double NNfunction_ns_chi02_dR::synapse0x2009ff0() {
   return (neuron0x1fe2d00()*0.540067);
}

double NNfunction_ns_chi02_dR::synapse0x200a030() {
   return (neuron0x1fe3040()*-0.336814);
}

double NNfunction_ns_chi02_dR::synapse0x200a070() {
   return (neuron0x1fe3380()*0.619094);
}

double NNfunction_ns_chi02_dR::synapse0x200a0b0() {
   return (neuron0x1fe36c0()*1.10558);
}

double NNfunction_ns_chi02_dR::synapse0x200a0f0() {
   return (neuron0x1fe3a00()*-0.244566);
}

double NNfunction_ns_chi02_dR::synapse0x2009b80() {
   return (neuron0x1fe3d40()*0.714143);
}

double NNfunction_ns_chi02_dR::synapse0x2009bc0() {
   return (neuron0x1fe42a0()*-0.321812);
}

double NNfunction_ns_chi02_dR::synapse0x200a240() {
   return (neuron0x1fe44c0()*0.20774);
}

double NNfunction_ns_chi02_dR::synapse0x200a280() {
   return (neuron0x1fe4800()*-0.938324);
}

double NNfunction_ns_chi02_dR::synapse0x200a2c0() {
   return (neuron0x1fe4b40()*0.780657);
}

double NNfunction_ns_chi02_dR::synapse0x200a300() {
   return (neuron0x1fe4e80()*-0.00497347);
}

double NNfunction_ns_chi02_dR::synapse0x200a340() {
   return (neuron0x1fe51c0()*0.109613);
}

double NNfunction_ns_chi02_dR::synapse0x200a380() {
   return (neuron0x1fe5500()*-1.21032);
}

double NNfunction_ns_chi02_dR::synapse0x1daa290() {
   return (neuron0x1fe5970()*-0.22764);
}

double NNfunction_ns_chi02_dR::synapse0x1daa2d0() {
   return (neuron0x1fe62c0()*0.0582252);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7e30() {
   return (neuron0x1fe6da0()*0.184972);
}

double NNfunction_ns_chi02_dR::synapse0x1fe7e70() {
   return (neuron0x1fe6840()*-1.41569);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8800() {
   return (neuron0x1fe7b80()*0.169012);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8840() {
   return (neuron0x1fe8550()*0.456259);
}

double NNfunction_ns_chi02_dR::synapse0x1fe95d0() {
   return (neuron0x1fe9320()*0.130489);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9610() {
   return (neuron0x1fe9cf0()*1.96712);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9fa0() {
   return (neuron0x1fea6c0()*2.30138);
}

double NNfunction_ns_chi02_dR::synapse0x1fe9fe0() {
   return (neuron0x1feb1a0()*-0.825666);
}

double NNfunction_ns_chi02_dR::synapse0x1fea970() {
   return (neuron0x1febb70()*2.07532);
}

double NNfunction_ns_chi02_dR::synapse0x1fea9b0() {
   return (neuron0x1fe8c50()*0.207583);
}

double NNfunction_ns_chi02_dR::synapse0x1feb450() {
   return (neuron0x1fed720()*-0.731499);
}

double NNfunction_ns_chi02_dR::synapse0x1feb490() {
   return (neuron0x1fee0f0()*-2.84758);
}

double NNfunction_ns_chi02_dR::synapse0x1febe20() {
   return (neuron0x1feeac0()*0.224584);
}

double NNfunction_ns_chi02_dR::synapse0x1febe60() {
   return (neuron0x1fef490()*-0.414697);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8f00() {
   return (neuron0x1ff12a0()*-0.11687);
}

double NNfunction_ns_chi02_dR::synapse0x1fe8f40() {
   return (neuron0x1ff1580()*-0.485859);
}

double NNfunction_ns_chi02_dR::synapse0x1fed9d0() {
   return (neuron0x1ff1f50()*-0.054399);
}

double NNfunction_ns_chi02_dR::synapse0x1feda10() {
   return (neuron0x1ff2920()*-0.294579);
}

double NNfunction_ns_chi02_dR::synapse0x1fee3a0() {
   return (neuron0x1ff32f0()*0.313072);
}

double NNfunction_ns_chi02_dR::synapse0x1fee3e0() {
   return (neuron0x1ff3cc0()*-0.409012);
}

double NNfunction_ns_chi02_dR::synapse0x1feed70() {
   return (neuron0x1fec810()*-7.1159);
}

double NNfunction_ns_chi02_dR::synapse0x1feedb0() {
   return (neuron0x1fed1e0()*-0.189053);
}

double NNfunction_ns_chi02_dR::synapse0x1fef740() {
   return (neuron0x1ff6a50()*-6.24899);
}

double NNfunction_ns_chi02_dR::synapse0x1fef780() {
   return (neuron0x1ff7420()*-0.713478);
}

double NNfunction_ns_chi02_dR::synapse0x1fe38e0() {
   return (neuron0x1ff7df0()*-0.218487);
}

double NNfunction_ns_chi02_dR::synapse0x1fe3920() {
   return (neuron0x1ff87c0()*-2.8632);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1830() {
   return (neuron0x1ff9190()*-0.0714766);
}

double NNfunction_ns_chi02_dR::synapse0x1ff1870() {
   return (neuron0x1ff9b60()*0.0186186);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2200() {
   return (neuron0x1ffa530()*-1.42363);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2240() {
   return (neuron0x1ffaf00()*1.42259);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2bd0() {
   return (neuron0x1ff0f90()*0.17067);
}

double NNfunction_ns_chi02_dR::synapse0x1ff2c10() {
   return (neuron0x1ffdae0()*0.806305);
}

double NNfunction_ns_chi02_dR::synapse0x1ff35a0() {
   return (neuron0x1ffe4b0()*-4.61759);
}

double NNfunction_ns_chi02_dR::synapse0x1ff35e0() {
   return (neuron0x1ffee80()*-1.05766);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3f70() {
   return (neuron0x1fff850()*0.862961);
}

double NNfunction_ns_chi02_dR::synapse0x1ff3fb0() {
   return (neuron0x2000220()*0.314514);
}

double NNfunction_ns_chi02_dR::synapse0x1fecac0() {
   return (neuron0x2000bf0()*0.748084);
}

double NNfunction_ns_chi02_dR::synapse0x1fecb00() {
   return (neuron0x20015c0()*0.120671);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6370() {
   return (neuron0x2001f90()*0.824444);
}

double NNfunction_ns_chi02_dR::synapse0x1ff63b0() {
   return (neuron0x2002b70()*0.720104);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6d00() {
   return (neuron0x2003540()*0.774111);
}

double NNfunction_ns_chi02_dR::synapse0x1ff6d40() {
   return (neuron0x1ff43c0()*8.75867);
}

double NNfunction_ns_chi02_dR::synapse0x1ff76d0() {
   return (neuron0x1ff4d90()*-0.423214);
}

double NNfunction_ns_chi02_dR::synapse0x1ff7710() {
   return (neuron0x1ff5760()*0.686105);
}

double NNfunction_ns_chi02_dR::synapse0x1ff80a0() {
   return (neuron0x2007da0()*2.15652);
}

double NNfunction_ns_chi02_dR::synapse0x1ff80e0() {
   return (neuron0x2008650()*1.97377);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8a70() {
   return (neuron0x2009020()*0.541096);
}

double NNfunction_ns_chi02_dR::synapse0x1ff8ab0() {
   return (neuron0x20099f0()*-0.222468);
}

double NNfunction_ns_chi02_dR::synapse0x1ffb1b0() {
   return (neuron0x1fe5970()*-0.0106672);
}

double NNfunction_ns_chi02_dR::synapse0x1ffb1f0() {
   return (neuron0x1fe62c0()*-0.0169595);
}

double NNfunction_ns_chi02_dR::synapse0x1ff0770() {
   return (neuron0x1fe6da0()*0.00970373);
}

double NNfunction_ns_chi02_dR::synapse0x1ff07b0() {
   return (neuron0x1fe6840()*1.3521);
}

double NNfunction_ns_chi02_dR::synapse0x1ffdd90() {
   return (neuron0x1fe7b80()*0.0586876);
}

double NNfunction_ns_chi02_dR::synapse0x1ffddd0() {
   return (neuron0x1fe8550()*0.134533);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe760() {
   return (neuron0x1fe9320()*-0.241213);
}

double NNfunction_ns_chi02_dR::synapse0x1ffe7a0() {
   return (neuron0x1fe9cf0()*-3.83511);
}

double NNfunction_ns_chi02_dR::synapse0x1fff130() {
   return (neuron0x1fea6c0()*0.518599);
}

double NNfunction_ns_chi02_dR::synapse0x1fff170() {
   return (neuron0x1feb1a0()*1.34291);
}

double NNfunction_ns_chi02_dR::synapse0x1fffb00() {
   return (neuron0x1febb70()*0.084736);
}

double NNfunction_ns_chi02_dR::synapse0x1fffb40() {
   return (neuron0x1fe8c50()*-0.051137);
}

double NNfunction_ns_chi02_dR::synapse0x20004d0() {
   return (neuron0x1fed720()*-0.0024962);
}

double NNfunction_ns_chi02_dR::synapse0x2000510() {
   return (neuron0x1fee0f0()*1.26799);
}

double NNfunction_ns_chi02_dR::synapse0x2000ea0() {
   return (neuron0x1feeac0()*-0.0176758);
}

double NNfunction_ns_chi02_dR::synapse0x2000ee0() {
   return (neuron0x1fef490()*0.0170686);
}

double NNfunction_ns_chi02_dR::synapse0x2001870() {
   return (neuron0x1ff12a0()*0.125596);
}

double NNfunction_ns_chi02_dR::synapse0x20018b0() {
   return (neuron0x1ff1580()*0.515022);
}

double NNfunction_ns_chi02_dR::synapse0x2002240() {
   return (neuron0x1ff1f50()*-0.0398363);
}

double NNfunction_ns_chi02_dR::synapse0x2002280() {
   return (neuron0x1ff2920()*0.0188837);
}

double NNfunction_ns_chi02_dR::synapse0x2002e20() {
   return (neuron0x1ff32f0()*0.0494772);
}

double NNfunction_ns_chi02_dR::synapse0x2002e60() {
   return (neuron0x1ff3cc0()*-0.0182894);
}

double NNfunction_ns_chi02_dR::synapse0x20037f0() {
   return (neuron0x1fec810()*0.109129);
}

double NNfunction_ns_chi02_dR::synapse0x2003830() {
   return (neuron0x1fed1e0()*0.00263058);
}

double NNfunction_ns_chi02_dR::synapse0x1ff4670() {
   return (neuron0x1ff6a50()*0.448269);
}

double NNfunction_ns_chi02_dR::synapse0x1ff46b0() {
   return (neuron0x1ff7420()*0.0120217);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5040() {
   return (neuron0x1ff7df0()*-0.464028);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5080() {
   return (neuron0x1ff87c0()*-0.306547);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5a10() {
   return (neuron0x1ff9190()*0.0127087);
}

double NNfunction_ns_chi02_dR::synapse0x1ff5a50() {
   return (neuron0x1ff9b60()*-0.0209355);
}

double NNfunction_ns_chi02_dR::synapse0x2007f30() {
   return (neuron0x1ffa530()*0.378556);
}

double NNfunction_ns_chi02_dR::synapse0x2007f70() {
   return (neuron0x1ffaf00()*0.329778);
}

double NNfunction_ns_chi02_dR::synapse0x2008900() {
   return (neuron0x1ff0f90()*0.0530555);
}

double NNfunction_ns_chi02_dR::synapse0x2008940() {
   return (neuron0x1ffdae0()*0.284109);
}

double NNfunction_ns_chi02_dR::synapse0x20092d0() {
   return (neuron0x1ffe4b0()*-0.0349601);
}

double NNfunction_ns_chi02_dR::synapse0x2009310() {
   return (neuron0x1ffee80()*-0.41434);
}

double NNfunction_ns_chi02_dR::synapse0x2009ca0() {
   return (neuron0x1fff850()*-1.36927);
}

double NNfunction_ns_chi02_dR::synapse0x2009ce0() {
   return (neuron0x2000220()*0.0236166);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5b90() {
   return (neuron0x2000bf0()*0.459007);
}

double NNfunction_ns_chi02_dR::synapse0x1fe5bd0() {
   return (neuron0x20015c0()*0.0237023);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9440() {
   return (neuron0x2001f90()*0.104902);
}

double NNfunction_ns_chi02_dR::synapse0x1ff9480() {
   return (neuron0x2002b70()*-0.42548);
}

double NNfunction_ns_chi02_dR::synapse0x200a3c0() {
   return (neuron0x2003540()*-0.749123);
}

double NNfunction_ns_chi02_dR::synapse0x200a400() {
   return (neuron0x1ff43c0()*-0.16456);
}

double NNfunction_ns_chi02_dR::synapse0x200a440() {
   return (neuron0x1ff4d90()*0.835519);
}

double NNfunction_ns_chi02_dR::synapse0x200a480() {
   return (neuron0x1ff5760()*-0.20668);
}

double NNfunction_ns_chi02_dR::synapse0x2011330() {
   return (neuron0x2007da0()*0.06383);
}

double NNfunction_ns_chi02_dR::synapse0x2011370() {
   return (neuron0x2008650()*3.23694);
}

double NNfunction_ns_chi02_dR::synapse0x20113b0() {
   return (neuron0x2009020()*-0.0477278);
}

double NNfunction_ns_chi02_dR::synapse0x20113f0() {
   return (neuron0x20099f0()*-0.00154279);
}

double NNfunction_ns_chi02_dR::synapse0x2011770() {
   return (neuron0x1fe5970()*0.0105651);
}

double NNfunction_ns_chi02_dR::synapse0x20117b0() {
   return (neuron0x1fe62c0()*0.0667129);
}

double NNfunction_ns_chi02_dR::synapse0x20117f0() {
   return (neuron0x1fe6da0()*-0.0138524);
}

double NNfunction_ns_chi02_dR::synapse0x2011830() {
   return (neuron0x1fe6840()*0.265047);
}

double NNfunction_ns_chi02_dR::synapse0x2011870() {
   return (neuron0x1fe7b80()*-0.168604);
}

double NNfunction_ns_chi02_dR::synapse0x20118b0() {
   return (neuron0x1fe8550()*-0.12067);
}

double NNfunction_ns_chi02_dR::synapse0x20118f0() {
   return (neuron0x1fe9320()*-0.526207);
}

double NNfunction_ns_chi02_dR::synapse0x2011930() {
   return (neuron0x1fe9cf0()*-1.66711);
}

double NNfunction_ns_chi02_dR::synapse0x2011970() {
   return (neuron0x1fea6c0()*1.14561);
}

double NNfunction_ns_chi02_dR::synapse0x20119b0() {
   return (neuron0x1feb1a0()*6.39015);
}

double NNfunction_ns_chi02_dR::synapse0x20119f0() {
   return (neuron0x1febb70()*-0.133999);
}

double NNfunction_ns_chi02_dR::synapse0x2011a30() {
   return (neuron0x1fe8c50()*0.00532653);
}

double NNfunction_ns_chi02_dR::synapse0x2011a70() {
   return (neuron0x1fed720()*0.288548);
}

double NNfunction_ns_chi02_dR::synapse0x2011ab0() {
   return (neuron0x1fee0f0()*0.0952652);
}

double NNfunction_ns_chi02_dR::synapse0x2011af0() {
   return (neuron0x1feeac0()*-0.00472682);
}

double NNfunction_ns_chi02_dR::synapse0x2011b30() {
   return (neuron0x1fef490()*-0.0380672);
}

double NNfunction_ns_chi02_dR::synapse0x20115c0() {
   return (neuron0x1ff12a0()*0.921986);
}

double NNfunction_ns_chi02_dR::synapse0x2011600() {
   return (neuron0x1ff1580()*2.21538);
}

double NNfunction_ns_chi02_dR::synapse0x2011c80() {
   return (neuron0x1ff1f50()*-0.0168766);
}

double NNfunction_ns_chi02_dR::synapse0x2011cc0() {
   return (neuron0x1ff2920()*-0.0398439);
}

double NNfunction_ns_chi02_dR::synapse0x2011d00() {
   return (neuron0x1ff32f0()*-0.475045);
}

double NNfunction_ns_chi02_dR::synapse0x2011d40() {
   return (neuron0x1ff3cc0()*1.17647);
}

double NNfunction_ns_chi02_dR::synapse0x2011d80() {
   return (neuron0x1fec810()*-0.00324267);
}

double NNfunction_ns_chi02_dR::synapse0x2011dc0() {
   return (neuron0x1fed1e0()*-0.0200146);
}

double NNfunction_ns_chi02_dR::synapse0x2011e00() {
   return (neuron0x1ff6a50()*-2.93445);
}

double NNfunction_ns_chi02_dR::synapse0x2011e40() {
   return (neuron0x1ff7420()*1.50301);
}

double NNfunction_ns_chi02_dR::synapse0x2011e80() {
   return (neuron0x1ff7df0()*-1.23853);
}

double NNfunction_ns_chi02_dR::synapse0x2011ec0() {
   return (neuron0x1ff87c0()*-1.28736);
}

double NNfunction_ns_chi02_dR::synapse0x2011f00() {
   return (neuron0x1ff9190()*0.11507);
}

double NNfunction_ns_chi02_dR::synapse0x2011f40() {
   return (neuron0x1ff9b60()*0.0858304);
}

double NNfunction_ns_chi02_dR::synapse0x2011f80() {
   return (neuron0x1ffa530()*0.621444);
}

double NNfunction_ns_chi02_dR::synapse0x2011fc0() {
   return (neuron0x1ffaf00()*-0.146176);
}

double NNfunction_ns_chi02_dR::synapse0x2011b70() {
   return (neuron0x1ff0f90()*0.0891792);
}

double NNfunction_ns_chi02_dR::synapse0x2011bb0() {
   return (neuron0x1ffdae0()*-1.13572);
}

double NNfunction_ns_chi02_dR::synapse0x2011bf0() {
   return (neuron0x1ffe4b0()*0.0227032);
}

double NNfunction_ns_chi02_dR::synapse0x2011c30() {
   return (neuron0x1ffee80()*0.255502);
}

double NNfunction_ns_chi02_dR::synapse0x2012210() {
   return (neuron0x1fff850()*-6.41328);
}

double NNfunction_ns_chi02_dR::synapse0x2012250() {
   return (neuron0x2000220()*0.034763);
}

double NNfunction_ns_chi02_dR::synapse0x2012290() {
   return (neuron0x2000bf0()*2.55716);
}

double NNfunction_ns_chi02_dR::synapse0x20122d0() {
   return (neuron0x20015c0()*-0.0156034);
}

double NNfunction_ns_chi02_dR::synapse0x2012310() {
   return (neuron0x2001f90()*0.181573);
}

double NNfunction_ns_chi02_dR::synapse0x2012350() {
   return (neuron0x2002b70()*0.246021);
}

double NNfunction_ns_chi02_dR::synapse0x2012390() {
   return (neuron0x2003540()*-5.65085);
}

double NNfunction_ns_chi02_dR::synapse0x20123d0() {
   return (neuron0x1ff43c0()*-0.124964);
}

double NNfunction_ns_chi02_dR::synapse0x2012410() {
   return (neuron0x1ff4d90()*5.1237);
}

double NNfunction_ns_chi02_dR::synapse0x2012450() {
   return (neuron0x1ff5760()*-2.45644);
}

double NNfunction_ns_chi02_dR::synapse0x2012490() {
   return (neuron0x2007da0()*1.0896);
}

double NNfunction_ns_chi02_dR::synapse0x20124d0() {
   return (neuron0x2008650()*-0.183416);
}

double NNfunction_ns_chi02_dR::synapse0x2012510() {
   return (neuron0x2009020()*0.000180317);
}

double NNfunction_ns_chi02_dR::synapse0x2012550() {
   return (neuron0x20099f0()*-0.0140955);
}

double NNfunction_ns_chi02_dR::synapse0x20128d0() {
   return (neuron0x1fe5970()*-0.80935);
}

double NNfunction_ns_chi02_dR::synapse0x2012910() {
   return (neuron0x1fe62c0()*0.8162);
}

double NNfunction_ns_chi02_dR::synapse0x2012950() {
   return (neuron0x1fe6da0()*0.900797);
}

double NNfunction_ns_chi02_dR::synapse0x2012990() {
   return (neuron0x1fe6840()*-4.27486);
}

double NNfunction_ns_chi02_dR::synapse0x20129d0() {
   return (neuron0x1fe7b80()*1.82686);
}

double NNfunction_ns_chi02_dR::synapse0x2012a10() {
   return (neuron0x1fe8550()*10.8346);
}

double NNfunction_ns_chi02_dR::synapse0x2012a50() {
   return (neuron0x1fe9320()*-1.09798);
}

double NNfunction_ns_chi02_dR::synapse0x2012a90() {
   return (neuron0x1fe9cf0()*-2.27085);
}

double NNfunction_ns_chi02_dR::synapse0x2012ad0() {
   return (neuron0x1fea6c0()*1.78459);
}

double NNfunction_ns_chi02_dR::synapse0x2012b10() {
   return (neuron0x1feb1a0()*0.461075);
}

double NNfunction_ns_chi02_dR::synapse0x2012b50() {
   return (neuron0x1febb70()*-5.61582);
}

double NNfunction_ns_chi02_dR::synapse0x2012b90() {
   return (neuron0x1fe8c50()*0.844552);
}

double NNfunction_ns_chi02_dR::synapse0x2012bd0() {
   return (neuron0x1fed720()*-3.83594);
}

double NNfunction_ns_chi02_dR::synapse0x2012c10() {
   return (neuron0x1fee0f0()*4.80144);
}

double NNfunction_ns_chi02_dR::synapse0x2012c50() {
   return (neuron0x1feeac0()*0.691002);
}

double NNfunction_ns_chi02_dR::synapse0x2012c90() {
   return (neuron0x1fef490()*0.292624);
}

double NNfunction_ns_chi02_dR::synapse0x2012720() {
   return (neuron0x1ff12a0()*0.745833);
}

double NNfunction_ns_chi02_dR::synapse0x2012760() {
   return (neuron0x1ff1580()*0.555432);
}

double NNfunction_ns_chi02_dR::synapse0x2012de0() {
   return (neuron0x1ff1f50()*-2.19021);
}

double NNfunction_ns_chi02_dR::synapse0x2012e20() {
   return (neuron0x1ff2920()*-0.860775);
}

double NNfunction_ns_chi02_dR::synapse0x2012e60() {
   return (neuron0x1ff32f0()*-0.0943767);
}

double NNfunction_ns_chi02_dR::synapse0x2012ea0() {
   return (neuron0x1ff3cc0()*0.182734);
}

double NNfunction_ns_chi02_dR::synapse0x2012ee0() {
   return (neuron0x1fec810()*-4.48384);
}

double NNfunction_ns_chi02_dR::synapse0x2012f20() {
   return (neuron0x1fed1e0()*-1.01354);
}

double NNfunction_ns_chi02_dR::synapse0x2012f60() {
   return (neuron0x1ff6a50()*0.503447);
}

double NNfunction_ns_chi02_dR::synapse0x2012fa0() {
   return (neuron0x1ff7420()*-0.341955);
}

double NNfunction_ns_chi02_dR::synapse0x2012fe0() {
   return (neuron0x1ff7df0()*-0.127003);
}

double NNfunction_ns_chi02_dR::synapse0x2013020() {
   return (neuron0x1ff87c0()*-1.8755);
}

double NNfunction_ns_chi02_dR::synapse0x2013060() {
   return (neuron0x1ff9190()*1.49546);
}

double NNfunction_ns_chi02_dR::synapse0x20130a0() {
   return (neuron0x1ff9b60()*0.946433);
}

double NNfunction_ns_chi02_dR::synapse0x20130e0() {
   return (neuron0x1ffa530()*-0.0217906);
}

double NNfunction_ns_chi02_dR::synapse0x2013120() {
   return (neuron0x1ffaf00()*2.29326);
}

double NNfunction_ns_chi02_dR::synapse0x2012cd0() {
   return (neuron0x1ff0f90()*1.1996);
}

double NNfunction_ns_chi02_dR::synapse0x2012d10() {
   return (neuron0x1ffdae0()*3.24994);
}

double NNfunction_ns_chi02_dR::synapse0x2012d50() {
   return (neuron0x1ffe4b0()*-6.26124);
}

double NNfunction_ns_chi02_dR::synapse0x2012d90() {
   return (neuron0x1ffee80()*8.65798);
}

double NNfunction_ns_chi02_dR::synapse0x2013370() {
   return (neuron0x1fff850()*-0.68441);
}

double NNfunction_ns_chi02_dR::synapse0x20133b0() {
   return (neuron0x2000220()*1.00316);
}

double NNfunction_ns_chi02_dR::synapse0x20133f0() {
   return (neuron0x2000bf0()*-1.22344);
}

double NNfunction_ns_chi02_dR::synapse0x2013430() {
   return (neuron0x20015c0()*-0.939594);
}

double NNfunction_ns_chi02_dR::synapse0x2013470() {
   return (neuron0x2001f90()*4.96464);
}

double NNfunction_ns_chi02_dR::synapse0x20134b0() {
   return (neuron0x2002b70()*-2.33636);
}

double NNfunction_ns_chi02_dR::synapse0x20134f0() {
   return (neuron0x2003540()*-0.401593);
}

double NNfunction_ns_chi02_dR::synapse0x2013530() {
   return (neuron0x1ff43c0()*-3.71384);
}

double NNfunction_ns_chi02_dR::synapse0x2013570() {
   return (neuron0x1ff4d90()*1.16212);
}

double NNfunction_ns_chi02_dR::synapse0x20135b0() {
   return (neuron0x1ff5760()*-0.185921);
}

double NNfunction_ns_chi02_dR::synapse0x20135f0() {
   return (neuron0x2007da0()*-4.5171);
}

double NNfunction_ns_chi02_dR::synapse0x2013630() {
   return (neuron0x2008650()*-2.23562);
}

double NNfunction_ns_chi02_dR::synapse0x2013670() {
   return (neuron0x2009020()*-0.134968);
}

double NNfunction_ns_chi02_dR::synapse0x20136b0() {
   return (neuron0x20099f0()*-0.667167);
}

double NNfunction_ns_chi02_dR::synapse0x2013a30() {
   return (neuron0x1fe5970()*0.954924);
}

double NNfunction_ns_chi02_dR::synapse0x2013a70() {
   return (neuron0x1fe62c0()*-0.594142);
}

double NNfunction_ns_chi02_dR::synapse0x2013ab0() {
   return (neuron0x1fe6da0()*-0.940911);
}

double NNfunction_ns_chi02_dR::synapse0x2013af0() {
   return (neuron0x1fe6840()*-0.267236);
}

double NNfunction_ns_chi02_dR::synapse0x2013b30() {
   return (neuron0x1fe7b80()*-1.70297);
}

double NNfunction_ns_chi02_dR::synapse0x2013b70() {
   return (neuron0x1fe8550()*0.857027);
}

double NNfunction_ns_chi02_dR::synapse0x2013bb0() {
   return (neuron0x1fe9320()*0.739692);
}

double NNfunction_ns_chi02_dR::synapse0x2013bf0() {
   return (neuron0x1fe9cf0()*-1.2978);
}

double NNfunction_ns_chi02_dR::synapse0x2013c30() {
   return (neuron0x1fea6c0()*-0.459768);
}

double NNfunction_ns_chi02_dR::synapse0x2013c70() {
   return (neuron0x1feb1a0()*-0.201429);
}

double NNfunction_ns_chi02_dR::synapse0x2013cb0() {
   return (neuron0x1febb70()*-1.55996);
}

double NNfunction_ns_chi02_dR::synapse0x2013cf0() {
   return (neuron0x1fe8c50()*-0.917788);
}

double NNfunction_ns_chi02_dR::synapse0x2013d30() {
   return (neuron0x1fed720()*4.65604);
}

double NNfunction_ns_chi02_dR::synapse0x2013d70() {
   return (neuron0x1fee0f0()*-1.65265);
}

double NNfunction_ns_chi02_dR::synapse0x2013db0() {
   return (neuron0x1feeac0()*-0.889018);
}

double NNfunction_ns_chi02_dR::synapse0x2013df0() {
   return (neuron0x1fef490()*-2.62868);
}

double NNfunction_ns_chi02_dR::synapse0x2013880() {
   return (neuron0x1ff12a0()*-0.614164);
}

double NNfunction_ns_chi02_dR::synapse0x20138c0() {
   return (neuron0x1ff1580()*-0.421413);
}

double NNfunction_ns_chi02_dR::synapse0x2013f40() {
   return (neuron0x1ff1f50()*1.91631);
}

double NNfunction_ns_chi02_dR::synapse0x2013f80() {
   return (neuron0x1ff2920()*0.87884);
}

double NNfunction_ns_chi02_dR::synapse0x2013fc0() {
   return (neuron0x1ff32f0()*-0.268495);
}

double NNfunction_ns_chi02_dR::synapse0x2014000() {
   return (neuron0x1ff3cc0()*0.192865);
}

double NNfunction_ns_chi02_dR::synapse0x2014040() {
   return (neuron0x1fec810()*2.21698);
}

double NNfunction_ns_chi02_dR::synapse0x2014080() {
   return (neuron0x1fed1e0()*0.953712);
}

double NNfunction_ns_chi02_dR::synapse0x20140c0() {
   return (neuron0x1ff6a50()*-2.6756);
}

double NNfunction_ns_chi02_dR::synapse0x2014100() {
   return (neuron0x1ff7420()*0.831564);
}

double NNfunction_ns_chi02_dR::synapse0x2014140() {
   return (neuron0x1ff7df0()*0.894043);
}

double NNfunction_ns_chi02_dR::synapse0x2014180() {
   return (neuron0x1ff87c0()*-0.091935);
}

double NNfunction_ns_chi02_dR::synapse0x20141c0() {
   return (neuron0x1ff9190()*-1.04981);
}

double NNfunction_ns_chi02_dR::synapse0x2014200() {
   return (neuron0x1ff9b60()*-0.666471);
}

double NNfunction_ns_chi02_dR::synapse0x2014240() {
   return (neuron0x1ffa530()*-1.77294);
}

double NNfunction_ns_chi02_dR::synapse0x2014280() {
   return (neuron0x1ffaf00()*-1.13165);
}

double NNfunction_ns_chi02_dR::synapse0x2013e30() {
   return (neuron0x1ff0f90()*-1.1106);
}

double NNfunction_ns_chi02_dR::synapse0x2013e70() {
   return (neuron0x1ffdae0()*-4.49215);
}

double NNfunction_ns_chi02_dR::synapse0x2013eb0() {
   return (neuron0x1ffe4b0()*3.55231);
}

double NNfunction_ns_chi02_dR::synapse0x2013ef0() {
   return (neuron0x1ffee80()*-0.826514);
}

double NNfunction_ns_chi02_dR::synapse0x20144d0() {
   return (neuron0x1fff850()*0.218509);
}

double NNfunction_ns_chi02_dR::synapse0x2014510() {
   return (neuron0x2000220()*-1.18903);
}

double NNfunction_ns_chi02_dR::synapse0x2014550() {
   return (neuron0x2000bf0()*-0.525917);
}

double NNfunction_ns_chi02_dR::synapse0x2014590() {
   return (neuron0x20015c0()*0.564071);
}

double NNfunction_ns_chi02_dR::synapse0x20145d0() {
   return (neuron0x2001f90()*-4.27234);
}

double NNfunction_ns_chi02_dR::synapse0x2014610() {
   return (neuron0x2002b70()*-1.27607);
}

double NNfunction_ns_chi02_dR::synapse0x2014650() {
   return (neuron0x2003540()*0.795637);
}

double NNfunction_ns_chi02_dR::synapse0x2014690() {
   return (neuron0x1ff43c0()*10.4507);
}

double NNfunction_ns_chi02_dR::synapse0x20146d0() {
   return (neuron0x1ff4d90()*-1.85758);
}

double NNfunction_ns_chi02_dR::synapse0x2014710() {
   return (neuron0x1ff5760()*-1.00346);
}

double NNfunction_ns_chi02_dR::synapse0x2014750() {
   return (neuron0x2007da0()*2.09477);
}

double NNfunction_ns_chi02_dR::synapse0x2014790() {
   return (neuron0x2008650()*0.60882);
}

double NNfunction_ns_chi02_dR::synapse0x20147d0() {
   return (neuron0x2009020()*-0.863896);
}

double NNfunction_ns_chi02_dR::synapse0x2014810() {
   return (neuron0x20099f0()*0.712731);
}

double NNfunction_ns_chi02_dR::synapse0x2014a70() {
   return (neuron0x2010bf0()*-3.68831);
}

double NNfunction_ns_chi02_dR::synapse0x2014ab0() {
   return (neuron0x2010f90()*-5.30523);
}

double NNfunction_ns_chi02_dR::synapse0x2014af0() {
   return (neuron0x2011430()*-9.95059);
}

double NNfunction_ns_chi02_dR::synapse0x2014b30() {
   return (neuron0x2012590()*-3.0494);
}

double NNfunction_ns_chi02_dR::synapse0x2014b70() {
   return (neuron0x20136f0()*-3.60574);
}

