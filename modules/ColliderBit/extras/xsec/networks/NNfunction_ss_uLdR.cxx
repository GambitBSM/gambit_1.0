#include "NNfunction_ss_uLdR.h"
#include <cmath>

double NNfunction_ss_uLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0484)/15.0398;
   input1 = (in1 - 77.1555)/657.679;
   input2 = (in2 - 359.554)/425.211;
   input3 = (in3 - 402.199)/628.698;
   input4 = (in4 - 819.816)/632.997;
   input5 = (in5 - 742.373)/622.513;
   input6 = (in6 - 747.166)/624.376;
   input7 = (in7 - 732.377)/616.8;
   input8 = (in8 - 737.401)/656.409;
   input9 = (in9 - 728.206)/642.645;
   input10 = (in10 - 711.124)/650.802;
   input11 = (in11 - 760.754)/458.343;
   input12 = (in12 - 847.132)/586.641;
   input13 = (in13 - 664.74)/395.976;
   input14 = (in14 - 829.546)/548.535;
   input15 = (in15 - 830.721)/548.131;
   input16 = (in16 - 566.47)/374.478;
   input17 = (in17 - 757.248)/459.192;
   input18 = (in18 - 844.09)/593.379;
   input19 = (in19 - 825.656)/572.709;
   input20 = (in20 - -304.694)/454.196;
   input21 = (in21 - -398.597)/934.557;
   input22 = (in22 - -13.6671)/920.714;
   input23 = (in23 - 49.068)/535.547;
   switch(index) {
     case 0:
         return neuron0x2a164c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.0484)/15.0398;
   input1 = (input[1] - 77.1555)/657.679;
   input2 = (input[2] - 359.554)/425.211;
   input3 = (input[3] - 402.199)/628.698;
   input4 = (input[4] - 819.816)/632.997;
   input5 = (input[5] - 742.373)/622.513;
   input6 = (input[6] - 747.166)/624.376;
   input7 = (input[7] - 732.377)/616.8;
   input8 = (input[8] - 737.401)/656.409;
   input9 = (input[9] - 728.206)/642.645;
   input10 = (input[10] - 711.124)/650.802;
   input11 = (input[11] - 760.754)/458.343;
   input12 = (input[12] - 847.132)/586.641;
   input13 = (input[13] - 664.74)/395.976;
   input14 = (input[14] - 829.546)/548.535;
   input15 = (input[15] - 830.721)/548.131;
   input16 = (input[16] - 566.47)/374.478;
   input17 = (input[17] - 757.248)/459.192;
   input18 = (input[18] - 844.09)/593.379;
   input19 = (input[19] - 825.656)/572.709;
   input20 = (input[20] - -304.694)/454.196;
   input21 = (input[21] - -398.597)/934.557;
   input22 = (input[22] - -13.6671)/920.714;
   input23 = (input[23] - 49.068)/535.547;
   switch(index) {
     case 0:
         return neuron0x2a164c0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLdR::neuron0x29e25b0() {
   return input0;
}

double NNfunction_ss_uLdR::neuron0x29e28f0() {
   return input1;
}

double NNfunction_ss_uLdR::neuron0x29e2c30() {
   return input2;
}

double NNfunction_ss_uLdR::neuron0x29e2f70() {
   return input3;
}

double NNfunction_ss_uLdR::neuron0x29e32b0() {
   return input4;
}

double NNfunction_ss_uLdR::neuron0x29e35f0() {
   return input5;
}

double NNfunction_ss_uLdR::neuron0x29e3930() {
   return input6;
}

double NNfunction_ss_uLdR::neuron0x29e3c70() {
   return input7;
}

double NNfunction_ss_uLdR::neuron0x29e3fb0() {
   return input8;
}

double NNfunction_ss_uLdR::neuron0x29e42f0() {
   return input9;
}

double NNfunction_ss_uLdR::neuron0x29e4630() {
   return input10;
}

double NNfunction_ss_uLdR::neuron0x29e4970() {
   return input11;
}

double NNfunction_ss_uLdR::neuron0x29e4cb0() {
   return input12;
}

double NNfunction_ss_uLdR::neuron0x29e4ff0() {
   return input13;
}

double NNfunction_ss_uLdR::neuron0x29e5330() {
   return input14;
}

double NNfunction_ss_uLdR::neuron0x29e5670() {
   return input15;
}

double NNfunction_ss_uLdR::neuron0x29e59b0() {
   return input16;
}

double NNfunction_ss_uLdR::neuron0x29e5f10() {
   return input17;
}

double NNfunction_ss_uLdR::neuron0x29e6130() {
   return input18;
}

double NNfunction_ss_uLdR::neuron0x29e6470() {
   return input19;
}

double NNfunction_ss_uLdR::neuron0x29e67b0() {
   return input20;
}

double NNfunction_ss_uLdR::neuron0x29e6af0() {
   return input21;
}

double NNfunction_ss_uLdR::neuron0x29e6e30() {
   return input22;
}

double NNfunction_ss_uLdR::neuron0x29e7170() {
   return input23;
}

double NNfunction_ss_uLdR::input0x29e75e0() {
   double input = 1.31539;
   input += synapse0x29e2470();
   input += synapse0x29e24b0();
   input += synapse0x29e7890();
   input += synapse0x29e78d0();
   input += synapse0x29e7910();
   input += synapse0x29e7950();
   input += synapse0x29e7990();
   input += synapse0x29e79d0();
   input += synapse0x29e7a10();
   input += synapse0x29e7a50();
   input += synapse0x29e7a90();
   input += synapse0x29e7ad0();
   input += synapse0x29e7b10();
   input += synapse0x29e7b50();
   input += synapse0x29e7b90();
   input += synapse0x29e7bd0();
   input += synapse0x29e23e0();
   input += synapse0x29e2420();
   input += synapse0x279d7a0();
   input += synapse0x279d7e0();
   input += synapse0x29e7e30();
   input += synapse0x29e7e70();
   input += synapse0x29e7eb0();
   input += synapse0x29e7ef0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29e75e0() {
   double input = input0x29e75e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29e7f30() {
   double input = 0.997895;
   input += synapse0x29e8270();
   input += synapse0x29e82b0();
   input += synapse0x29e82f0();
   input += synapse0x29e8330();
   input += synapse0x29e8370();
   input += synapse0x29e83b0();
   input += synapse0x29e83f0();
   input += synapse0x29e8430();
   input += synapse0x29e8470();
   input += synapse0x29e7d20();
   input += synapse0x29e7d60();
   input += synapse0x29e7da0();
   input += synapse0x29e7de0();
   input += synapse0x29e86c0();
   input += synapse0x29e8700();
   input += synapse0x29e8740();
   input += synapse0x29e80c0();
   input += synapse0x29e8100();
   input += synapse0x29e8890();
   input += synapse0x29e88d0();
   input += synapse0x29e8910();
   input += synapse0x29e8950();
   input += synapse0x29e8990();
   input += synapse0x29e89d0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29e7f30() {
   double input = input0x29e7f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29e8a10() {
   double input = 0.565943;
   input += synapse0x29e8d50();
   input += synapse0x29e8d90();
   input += synapse0x29e8dd0();
   input += synapse0x29e8e10();
   input += synapse0x29e8e50();
   input += synapse0x29e8e90();
   input += synapse0x29e8ed0();
   input += synapse0x29e8f10();
   input += synapse0x29e8f50();
   input += synapse0x29e8f90();
   input += synapse0x29e8fd0();
   input += synapse0x29e9010();
   input += synapse0x29e9050();
   input += synapse0x29e9090();
   input += synapse0x29e90d0();
   input += synapse0x29e9110();
   input += synapse0x29e8ba0();
   input += synapse0x29e8be0();
   input += synapse0x279de40();
   input += synapse0x27ab710();
   input += synapse0x27ab750();
   input += synapse0x29d1640();
   input += synapse0x29d1680();
   input += synapse0x29d16c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29e8a10() {
   double input = input0x29e8a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29e84b0() {
   double input = -1.5529;
   input += synapse0x27abf90();
   input += synapse0x29e8640();
   input += synapse0x29e8680();
   input += synapse0x29e9260();
   input += synapse0x29e92a0();
   input += synapse0x29e92e0();
   input += synapse0x29e9320();
   input += synapse0x29e9360();
   input += synapse0x29e93a0();
   input += synapse0x29e93e0();
   input += synapse0x29e9420();
   input += synapse0x29e9460();
   input += synapse0x29e94a0();
   input += synapse0x29e94e0();
   input += synapse0x29e9520();
   input += synapse0x29e9560();
   input += synapse0x29e24f0();
   input += synapse0x29e2530();
   input += synapse0x29e2570();
   input += synapse0x29e96b0();
   input += synapse0x29e96f0();
   input += synapse0x29e9730();
   input += synapse0x29e9770();
   input += synapse0x29e97b0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29e84b0() {
   double input = input0x29e84b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29e97f0() {
   double input = -1.29604;
   input += synapse0x29e9b30();
   input += synapse0x29e9b70();
   input += synapse0x29e9bb0();
   input += synapse0x29e9bf0();
   input += synapse0x29e9c30();
   input += synapse0x29e9c70();
   input += synapse0x29e9cb0();
   input += synapse0x29e9cf0();
   input += synapse0x29e9d30();
   input += synapse0x29e9d70();
   input += synapse0x29e9db0();
   input += synapse0x29e9df0();
   input += synapse0x29e9e30();
   input += synapse0x29e9e70();
   input += synapse0x29e9eb0();
   input += synapse0x29e9ef0();
   input += synapse0x29e9980();
   input += synapse0x29e99c0();
   input += synapse0x29ea040();
   input += synapse0x29ea080();
   input += synapse0x29ea0c0();
   input += synapse0x29ea100();
   input += synapse0x29ea140();
   input += synapse0x29ea180();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29e97f0() {
   double input = input0x29e97f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ea1c0() {
   double input = 1.5905;
   input += synapse0x29ea500();
   input += synapse0x29ea540();
   input += synapse0x29ea580();
   input += synapse0x29ea5c0();
   input += synapse0x29ea600();
   input += synapse0x29ea640();
   input += synapse0x29ea680();
   input += synapse0x29ea6c0();
   input += synapse0x29ea700();
   input += synapse0x27aba60();
   input += synapse0x27abaa0();
   input += synapse0x27abae0();
   input += synapse0x27abb20();
   input += synapse0x27abb60();
   input += synapse0x27abba0();
   input += synapse0x27abbe0();
   input += synapse0x29ea350();
   input += synapse0x29ea390();
   input += synapse0x27abd30();
   input += synapse0x27abd70();
   input += synapse0x27abdb0();
   input += synapse0x27abdf0();
   input += synapse0x27abe30();
   input += synapse0x29eaf50();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ea1c0() {
   double input = input0x29ea1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29eaf90() {
   double input = 1.2097;
   input += synapse0x29eb2d0();
   input += synapse0x29eb310();
   input += synapse0x29eb350();
   input += synapse0x29eb390();
   input += synapse0x29eb3d0();
   input += synapse0x29eb410();
   input += synapse0x29eb450();
   input += synapse0x29eb490();
   input += synapse0x29eb4d0();
   input += synapse0x29eb510();
   input += synapse0x29eb550();
   input += synapse0x29eb590();
   input += synapse0x29eb5d0();
   input += synapse0x29eb610();
   input += synapse0x29eb650();
   input += synapse0x29eb690();
   input += synapse0x29eb120();
   input += synapse0x29eb160();
   input += synapse0x29eb7e0();
   input += synapse0x29eb820();
   input += synapse0x29eb860();
   input += synapse0x29eb8a0();
   input += synapse0x29eb8e0();
   input += synapse0x29eb920();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29eaf90() {
   double input = input0x29eaf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29eb960() {
   double input = -1.02544;
   input += synapse0x29ebca0();
   input += synapse0x29ebce0();
   input += synapse0x29ebd20();
   input += synapse0x29ebd60();
   input += synapse0x29ebda0();
   input += synapse0x29ebde0();
   input += synapse0x29ebe20();
   input += synapse0x29ebe60();
   input += synapse0x29ebea0();
   input += synapse0x29ebee0();
   input += synapse0x29ebf20();
   input += synapse0x29ebf60();
   input += synapse0x29ebfa0();
   input += synapse0x29ebfe0();
   input += synapse0x29ec020();
   input += synapse0x29ec060();
   input += synapse0x29ebaf0();
   input += synapse0x29ebb30();
   input += synapse0x29ec1b0();
   input += synapse0x29ec1f0();
   input += synapse0x29ec230();
   input += synapse0x29ec270();
   input += synapse0x29ec2b0();
   input += synapse0x29ec2f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29eb960() {
   double input = input0x29eb960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ec330() {
   double input = 1.81231;
   input += synapse0x29e5e00();
   input += synapse0x29e5e40();
   input += synapse0x29e5e80();
   input += synapse0x29e5ec0();
   input += synapse0x29ec880();
   input += synapse0x29ec8c0();
   input += synapse0x29ec900();
   input += synapse0x29ec940();
   input += synapse0x29ec980();
   input += synapse0x29ec9c0();
   input += synapse0x29eca00();
   input += synapse0x29eca40();
   input += synapse0x29eca80();
   input += synapse0x29ecac0();
   input += synapse0x29ecb00();
   input += synapse0x29ecb40();
   input += synapse0x29ec4c0();
   input += synapse0x29ec500();
   input += synapse0x29ecc90();
   input += synapse0x29eccd0();
   input += synapse0x29ecd10();
   input += synapse0x29ecd50();
   input += synapse0x29ecd90();
   input += synapse0x29ecdd0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ec330() {
   double input = input0x29ec330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ece10() {
   double input = -0.0902143;
   input += synapse0x29ed150();
   input += synapse0x29ed190();
   input += synapse0x29ed1d0();
   input += synapse0x29ed210();
   input += synapse0x29ed250();
   input += synapse0x29ed290();
   input += synapse0x29ed2d0();
   input += synapse0x29ed310();
   input += synapse0x29ed350();
   input += synapse0x29ed390();
   input += synapse0x29ed3d0();
   input += synapse0x29ed410();
   input += synapse0x29ed450();
   input += synapse0x29ed490();
   input += synapse0x29ed4d0();
   input += synapse0x29ed510();
   input += synapse0x29ecfa0();
   input += synapse0x29ecfe0();
   input += synapse0x29ed660();
   input += synapse0x29ed6a0();
   input += synapse0x29ed6e0();
   input += synapse0x29ed720();
   input += synapse0x29ed760();
   input += synapse0x29ed7a0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ece10() {
   double input = input0x29ece10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ed7e0() {
   double input = -0.092924;
   input += synapse0x29edb20();
   input += synapse0x29edb60();
   input += synapse0x29edba0();
   input += synapse0x29edbe0();
   input += synapse0x29edc20();
   input += synapse0x29edc60();
   input += synapse0x29edca0();
   input += synapse0x29edce0();
   input += synapse0x29edd20();
   input += synapse0x29edd60();
   input += synapse0x29edda0();
   input += synapse0x29edde0();
   input += synapse0x29ede20();
   input += synapse0x29ede60();
   input += synapse0x29edea0();
   input += synapse0x29edee0();
   input += synapse0x29ed970();
   input += synapse0x29ed9b0();
   input += synapse0x29ea740();
   input += synapse0x29ea780();
   input += synapse0x29ea7c0();
   input += synapse0x29ea800();
   input += synapse0x29ea840();
   input += synapse0x29ea880();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ed7e0() {
   double input = input0x29ed7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ea8c0() {
   double input = 1.50576;
   input += synapse0x29eac00();
   input += synapse0x29eac40();
   input += synapse0x29eac80();
   input += synapse0x29eacc0();
   input += synapse0x29ead00();
   input += synapse0x29ead40();
   input += synapse0x29ead80();
   input += synapse0x29eadc0();
   input += synapse0x29eae00();
   input += synapse0x29eae40();
   input += synapse0x29eae80();
   input += synapse0x29eaec0();
   input += synapse0x29eaf00();
   input += synapse0x29ef040();
   input += synapse0x29ef080();
   input += synapse0x29ef0c0();
   input += synapse0x29eaa50();
   input += synapse0x29eaa90();
   input += synapse0x29ef210();
   input += synapse0x29ef250();
   input += synapse0x29ef290();
   input += synapse0x29ef2d0();
   input += synapse0x29ef310();
   input += synapse0x29ef350();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ea8c0() {
   double input = input0x29ea8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ef390() {
   double input = -0.97261;
   input += synapse0x29ef6d0();
   input += synapse0x29ef710();
   input += synapse0x29ef750();
   input += synapse0x29ef790();
   input += synapse0x29ef7d0();
   input += synapse0x29ef810();
   input += synapse0x29ef850();
   input += synapse0x29ef890();
   input += synapse0x29ef8d0();
   input += synapse0x29ef910();
   input += synapse0x29ef950();
   input += synapse0x29ef990();
   input += synapse0x29ef9d0();
   input += synapse0x29efa10();
   input += synapse0x29efa50();
   input += synapse0x29efa90();
   input += synapse0x29ef520();
   input += synapse0x29ef560();
   input += synapse0x29efbe0();
   input += synapse0x29efc20();
   input += synapse0x29efc60();
   input += synapse0x29efca0();
   input += synapse0x29efce0();
   input += synapse0x29efd20();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ef390() {
   double input = input0x29ef390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29efd60() {
   double input = -0.314436;
   input += synapse0x29f00a0();
   input += synapse0x29f00e0();
   input += synapse0x29f0120();
   input += synapse0x29f0160();
   input += synapse0x29f01a0();
   input += synapse0x29f01e0();
   input += synapse0x29f0220();
   input += synapse0x29f0260();
   input += synapse0x29f02a0();
   input += synapse0x29f02e0();
   input += synapse0x29f0320();
   input += synapse0x29f0360();
   input += synapse0x29f03a0();
   input += synapse0x29f03e0();
   input += synapse0x29f0420();
   input += synapse0x29f0460();
   input += synapse0x29efef0();
   input += synapse0x29eff30();
   input += synapse0x29f05b0();
   input += synapse0x29f05f0();
   input += synapse0x29f0630();
   input += synapse0x29f0670();
   input += synapse0x29f06b0();
   input += synapse0x29f06f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29efd60() {
   double input = input0x29efd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f0730() {
   double input = 2.49568;
   input += synapse0x29f0a70();
   input += synapse0x29f0ab0();
   input += synapse0x29f0af0();
   input += synapse0x29f0b30();
   input += synapse0x29f0b70();
   input += synapse0x29f0bb0();
   input += synapse0x29f0bf0();
   input += synapse0x29f0c30();
   input += synapse0x29f0c70();
   input += synapse0x29f0cb0();
   input += synapse0x29f0cf0();
   input += synapse0x29f0d30();
   input += synapse0x29f0d70();
   input += synapse0x29f0db0();
   input += synapse0x29f0df0();
   input += synapse0x29f0e30();
   input += synapse0x29f08c0();
   input += synapse0x29f0900();
   input += synapse0x29f0f80();
   input += synapse0x29f0fc0();
   input += synapse0x29f1000();
   input += synapse0x29f1040();
   input += synapse0x29f1080();
   input += synapse0x29f10c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f0730() {
   double input = input0x29f0730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f1100() {
   double input = 0.888615;
   input += synapse0x29f1440();
   input += synapse0x29e27d0();
   input += synapse0x29e2810();
   input += synapse0x29e2b10();
   input += synapse0x29e2b50();
   input += synapse0x29e2e50();
   input += synapse0x29e2e90();
   input += synapse0x29e3190();
   input += synapse0x29e31d0();
   input += synapse0x29e34d0();
   input += synapse0x29e3510();
   input += synapse0x29e3810();
   input += synapse0x29e3850();
   input += synapse0x29e3b50();
   input += synapse0x29e3b90();
   input += synapse0x29e3e90();
   input += synapse0x29e3ed0();
   input += synapse0x29e41d0();
   input += synapse0x29e4210();
   input += synapse0x29e4510();
   input += synapse0x29e4550();
   input += synapse0x29e4850();
   input += synapse0x29e4890();
   input += synapse0x29e4b90();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f1100() {
   double input = input0x29f1100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f2f10() {
   double input = 0.247355;
   input += synapse0x29e4bd0();
   input += synapse0x29e5890();
   input += synapse0x29e58d0();
   input += synapse0x29f1290();
   input += synapse0x29f12d0();
   input += synapse0x29e5bd0();
   input += synapse0x29e5c10();
   input += synapse0x279d680();
   input += synapse0x279d6c0();
   input += synapse0x29e6350();
   input += synapse0x29e6390();
   input += synapse0x29e6690();
   input += synapse0x29e66d0();
   input += synapse0x29e69d0();
   input += synapse0x29e6a10();
   input += synapse0x29e6d10();
   input += synapse0x29e6d50();
   input += synapse0x29e7050();
   input += synapse0x29e7090();
   input += synapse0x29e7390();
   input += synapse0x29e73d0();
   input += synapse0x29e4ed0();
   input += synapse0x29e4f10();
   input += synapse0x29f31b0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f2f10() {
   double input = input0x29f2f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f31f0() {
   double input = -0.690242;
   input += synapse0x29f3530();
   input += synapse0x29f3570();
   input += synapse0x29f35b0();
   input += synapse0x29f35f0();
   input += synapse0x29f3630();
   input += synapse0x29f3670();
   input += synapse0x29f36b0();
   input += synapse0x29f36f0();
   input += synapse0x29f3730();
   input += synapse0x29f3770();
   input += synapse0x29f37b0();
   input += synapse0x29f37f0();
   input += synapse0x29f3830();
   input += synapse0x29f3870();
   input += synapse0x29f38b0();
   input += synapse0x29f38f0();
   input += synapse0x29f3380();
   input += synapse0x29f33c0();
   input += synapse0x29f3a40();
   input += synapse0x29f3a80();
   input += synapse0x29f3ac0();
   input += synapse0x29f3b00();
   input += synapse0x29f3b40();
   input += synapse0x29f3b80();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f31f0() {
   double input = input0x29f31f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f3bc0() {
   double input = 0.163682;
   input += synapse0x29f3f00();
   input += synapse0x29f3f40();
   input += synapse0x29f3f80();
   input += synapse0x29f3fc0();
   input += synapse0x29f4000();
   input += synapse0x29f4040();
   input += synapse0x29f4080();
   input += synapse0x29f40c0();
   input += synapse0x29f4100();
   input += synapse0x29f4140();
   input += synapse0x29f4180();
   input += synapse0x29f41c0();
   input += synapse0x29f4200();
   input += synapse0x29f4240();
   input += synapse0x29f4280();
   input += synapse0x29f42c0();
   input += synapse0x29f3d50();
   input += synapse0x29f3d90();
   input += synapse0x29f4410();
   input += synapse0x29f4450();
   input += synapse0x29f4490();
   input += synapse0x29f44d0();
   input += synapse0x29f4510();
   input += synapse0x29f4550();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f3bc0() {
   double input = input0x29f3bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f4590() {
   double input = -2.53575;
   input += synapse0x29f48d0();
   input += synapse0x29f4910();
   input += synapse0x29f4950();
   input += synapse0x29f4990();
   input += synapse0x29f49d0();
   input += synapse0x29f4a10();
   input += synapse0x29f4a50();
   input += synapse0x29f4a90();
   input += synapse0x29f4ad0();
   input += synapse0x29f4b10();
   input += synapse0x29f4b50();
   input += synapse0x29f4b90();
   input += synapse0x29f4bd0();
   input += synapse0x29f4c10();
   input += synapse0x29f4c50();
   input += synapse0x29f4c90();
   input += synapse0x29f4720();
   input += synapse0x29f4760();
   input += synapse0x29f4de0();
   input += synapse0x29f4e20();
   input += synapse0x29f4e60();
   input += synapse0x29f4ea0();
   input += synapse0x29f4ee0();
   input += synapse0x29f4f20();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f4590() {
   double input = input0x29f4590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f4f60() {
   double input = -1.61098;
   input += synapse0x29f52a0();
   input += synapse0x29f52e0();
   input += synapse0x29f5320();
   input += synapse0x29f5360();
   input += synapse0x29f53a0();
   input += synapse0x29f53e0();
   input += synapse0x29f5420();
   input += synapse0x29f5460();
   input += synapse0x29f54a0();
   input += synapse0x29f54e0();
   input += synapse0x29f5520();
   input += synapse0x29f5560();
   input += synapse0x29f55a0();
   input += synapse0x29f55e0();
   input += synapse0x29f5620();
   input += synapse0x29f5660();
   input += synapse0x29f50f0();
   input += synapse0x29f5130();
   input += synapse0x29f57b0();
   input += synapse0x29f57f0();
   input += synapse0x29f5830();
   input += synapse0x29f5870();
   input += synapse0x29f58b0();
   input += synapse0x29f58f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f4f60() {
   double input = input0x29f4f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f5930() {
   double input = -2.17433;
   input += synapse0x29f5c70();
   input += synapse0x29f5cb0();
   input += synapse0x29f5cf0();
   input += synapse0x29f5d30();
   input += synapse0x29f5d70();
   input += synapse0x29f5db0();
   input += synapse0x29f5df0();
   input += synapse0x29f5e30();
   input += synapse0x29f5e70();
   input += synapse0x29ee030();
   input += synapse0x29ee070();
   input += synapse0x29ee0b0();
   input += synapse0x29ee0f0();
   input += synapse0x29ee130();
   input += synapse0x29ee170();
   input += synapse0x29ee1b0();
   input += synapse0x29f5ac0();
   input += synapse0x29f5b00();
   input += synapse0x29ee300();
   input += synapse0x29ee340();
   input += synapse0x29ee380();
   input += synapse0x29ee3c0();
   input += synapse0x29ee400();
   input += synapse0x29ee440();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f5930() {
   double input = input0x29f5930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ee480() {
   double input = 0.519814;
   input += synapse0x29ee7c0();
   input += synapse0x29ee800();
   input += synapse0x29ee840();
   input += synapse0x29ee880();
   input += synapse0x29ee8c0();
   input += synapse0x29ee900();
   input += synapse0x29ee940();
   input += synapse0x29ee980();
   input += synapse0x29ee9c0();
   input += synapse0x29eea00();
   input += synapse0x29eea40();
   input += synapse0x29eea80();
   input += synapse0x29eeac0();
   input += synapse0x29eeb00();
   input += synapse0x29eeb40();
   input += synapse0x29eeb80();
   input += synapse0x29ee610();
   input += synapse0x29ee650();
   input += synapse0x29eecd0();
   input += synapse0x29eed10();
   input += synapse0x29eed50();
   input += synapse0x29eed90();
   input += synapse0x29eedd0();
   input += synapse0x29eee10();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ee480() {
   double input = input0x29ee480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29eee50() {
   double input = 0.819588;
   input += synapse0x29eefe0();
   input += synapse0x29f8070();
   input += synapse0x29f80b0();
   input += synapse0x29f80f0();
   input += synapse0x29f8130();
   input += synapse0x29f8170();
   input += synapse0x29f81b0();
   input += synapse0x29f81f0();
   input += synapse0x29f8230();
   input += synapse0x29f8270();
   input += synapse0x29f82b0();
   input += synapse0x29f82f0();
   input += synapse0x29f8330();
   input += synapse0x29f8370();
   input += synapse0x29f83b0();
   input += synapse0x29f83f0();
   input += synapse0x29f7ec0();
   input += synapse0x29f7f00();
   input += synapse0x29f8540();
   input += synapse0x29f8580();
   input += synapse0x29f85c0();
   input += synapse0x29f8600();
   input += synapse0x29f8640();
   input += synapse0x29f8680();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29eee50() {
   double input = input0x29eee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f86c0() {
   double input = 0.374891;
   input += synapse0x29f8a00();
   input += synapse0x29f8a40();
   input += synapse0x29f8a80();
   input += synapse0x29f8ac0();
   input += synapse0x29f8b00();
   input += synapse0x29f8b40();
   input += synapse0x29f8b80();
   input += synapse0x29f8bc0();
   input += synapse0x29f8c00();
   input += synapse0x29f8c40();
   input += synapse0x29f8c80();
   input += synapse0x29f8cc0();
   input += synapse0x29f8d00();
   input += synapse0x29f8d40();
   input += synapse0x29f8d80();
   input += synapse0x29f8dc0();
   input += synapse0x29f8850();
   input += synapse0x29f8890();
   input += synapse0x29f8f10();
   input += synapse0x29f8f50();
   input += synapse0x29f8f90();
   input += synapse0x29f8fd0();
   input += synapse0x29f9010();
   input += synapse0x29f9050();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f86c0() {
   double input = input0x29f86c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f9090() {
   double input = -0.938012;
   input += synapse0x29f93d0();
   input += synapse0x29f9410();
   input += synapse0x29f9450();
   input += synapse0x29f9490();
   input += synapse0x29f94d0();
   input += synapse0x29f9510();
   input += synapse0x29f9550();
   input += synapse0x29f9590();
   input += synapse0x29f95d0();
   input += synapse0x29f9610();
   input += synapse0x29f9650();
   input += synapse0x29f9690();
   input += synapse0x29f96d0();
   input += synapse0x29f9710();
   input += synapse0x29f9750();
   input += synapse0x29f9790();
   input += synapse0x29f9220();
   input += synapse0x29f9260();
   input += synapse0x29f98e0();
   input += synapse0x29f9920();
   input += synapse0x29f9960();
   input += synapse0x29f99a0();
   input += synapse0x29f99e0();
   input += synapse0x29f9a20();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f9090() {
   double input = input0x29f9090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f9a60() {
   double input = 1.36051;
   input += synapse0x29f9da0();
   input += synapse0x29f9de0();
   input += synapse0x29f9e20();
   input += synapse0x29f9e60();
   input += synapse0x29f9ea0();
   input += synapse0x29f9ee0();
   input += synapse0x29f9f20();
   input += synapse0x29f9f60();
   input += synapse0x29f9fa0();
   input += synapse0x29f9fe0();
   input += synapse0x29fa020();
   input += synapse0x29fa060();
   input += synapse0x29fa0a0();
   input += synapse0x29fa0e0();
   input += synapse0x29fa120();
   input += synapse0x29fa160();
   input += synapse0x29f9bf0();
   input += synapse0x29f9c30();
   input += synapse0x29fa2b0();
   input += synapse0x29fa2f0();
   input += synapse0x29fa330();
   input += synapse0x29fa370();
   input += synapse0x29fa3b0();
   input += synapse0x29fa3f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f9a60() {
   double input = input0x29f9a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29fa430() {
   double input = 1.9951;
   input += synapse0x29fa770();
   input += synapse0x29fa7b0();
   input += synapse0x29fa7f0();
   input += synapse0x29fa830();
   input += synapse0x29fa870();
   input += synapse0x29fa8b0();
   input += synapse0x29fa8f0();
   input += synapse0x29fa930();
   input += synapse0x29fa970();
   input += synapse0x29fa9b0();
   input += synapse0x29fa9f0();
   input += synapse0x29faa30();
   input += synapse0x29faa70();
   input += synapse0x29faab0();
   input += synapse0x29faaf0();
   input += synapse0x29fab30();
   input += synapse0x29fa5c0();
   input += synapse0x29fa600();
   input += synapse0x29fac80();
   input += synapse0x29facc0();
   input += synapse0x29fad00();
   input += synapse0x29fad40();
   input += synapse0x29fad80();
   input += synapse0x29fadc0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29fa430() {
   double input = input0x29fa430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29fae00() {
   double input = 1.45226;
   input += synapse0x29fb140();
   input += synapse0x29fb180();
   input += synapse0x29fb1c0();
   input += synapse0x29fb200();
   input += synapse0x29fb240();
   input += synapse0x29fb280();
   input += synapse0x29fb2c0();
   input += synapse0x29fb300();
   input += synapse0x29fb340();
   input += synapse0x29fb380();
   input += synapse0x29fb3c0();
   input += synapse0x29fb400();
   input += synapse0x29fb440();
   input += synapse0x29fb480();
   input += synapse0x29fb4c0();
   input += synapse0x29fb500();
   input += synapse0x29faf90();
   input += synapse0x29fafd0();
   input += synapse0x29fb650();
   input += synapse0x29fb690();
   input += synapse0x29fb6d0();
   input += synapse0x29fb710();
   input += synapse0x29fb750();
   input += synapse0x29fb790();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29fae00() {
   double input = input0x29fae00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29fb7d0() {
   double input = -7.9952;
   input += synapse0x29fbb10();
   input += synapse0x29fbb50();
   input += synapse0x29fbb90();
   input += synapse0x29fbbd0();
   input += synapse0x29fbc10();
   input += synapse0x29fbc50();
   input += synapse0x29fbc90();
   input += synapse0x29fbcd0();
   input += synapse0x29fbd10();
   input += synapse0x29fbd50();
   input += synapse0x29fbd90();
   input += synapse0x29fbdd0();
   input += synapse0x29fbe10();
   input += synapse0x29fbe50();
   input += synapse0x29fbe90();
   input += synapse0x29fbed0();
   input += synapse0x29fb960();
   input += synapse0x29fb9a0();
   input += synapse0x29fc020();
   input += synapse0x29fc060();
   input += synapse0x29fc0a0();
   input += synapse0x29fc0e0();
   input += synapse0x29fc120();
   input += synapse0x29fc160();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29fb7d0() {
   double input = input0x29fb7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29fc1a0() {
   double input = 1.10529;
   input += synapse0x29fc4e0();
   input += synapse0x29fc520();
   input += synapse0x29fc560();
   input += synapse0x29fc5a0();
   input += synapse0x29fc5e0();
   input += synapse0x29fc620();
   input += synapse0x29fc660();
   input += synapse0x29fc6a0();
   input += synapse0x29fc6e0();
   input += synapse0x29fc720();
   input += synapse0x29fc760();
   input += synapse0x29fc7a0();
   input += synapse0x29fc7e0();
   input += synapse0x29fc820();
   input += synapse0x29fc860();
   input += synapse0x29fc8a0();
   input += synapse0x29fc330();
   input += synapse0x29fc370();
   input += synapse0x29fc9f0();
   input += synapse0x29fca30();
   input += synapse0x29fca70();
   input += synapse0x29fcab0();
   input += synapse0x29fcaf0();
   input += synapse0x29fcb30();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29fc1a0() {
   double input = input0x29fc1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29fcb70() {
   double input = -2.4106;
   input += synapse0x29fceb0();
   input += synapse0x29f1480();
   input += synapse0x29f14c0();
   input += synapse0x29f1500();
   input += synapse0x29f1750();
   input += synapse0x29f1790();
   input += synapse0x29f17d0();
   input += synapse0x29f1a20();
   input += synapse0x29f1a60();
   input += synapse0x29f1cb0();
   input += synapse0x29f1cf0();
   input += synapse0x29f1d30();
   input += synapse0x29f1f80();
   input += synapse0x29f1fc0();
   input += synapse0x29f2210();
   input += synapse0x29f2250();
   input += synapse0x29fcd00();
   input += synapse0x29fcd40();
   input += synapse0x29f23a0();
   input += synapse0x29f28b0();
   input += synapse0x29f28f0();
   input += synapse0x29f2930();
   input += synapse0x29f2b80();
   input += synapse0x29f2bc0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29fcb70() {
   double input = input0x29fcb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f2c00() {
   double input = -0.333071;
   input += synapse0x29f2470();
   input += synapse0x29f24b0();
   input += synapse0x29f24f0();
   input += synapse0x29f2530();
   input += synapse0x29f2eb0();
   input += synapse0x29ff200();
   input += synapse0x29ff240();
   input += synapse0x29ff280();
   input += synapse0x29ff2c0();
   input += synapse0x29ff300();
   input += synapse0x29ff340();
   input += synapse0x29ff380();
   input += synapse0x29ff3c0();
   input += synapse0x29ff400();
   input += synapse0x29ff440();
   input += synapse0x29ff480();
   input += synapse0x29f2d90();
   input += synapse0x29f2dd0();
   input += synapse0x29ff5d0();
   input += synapse0x29ff610();
   input += synapse0x29ff650();
   input += synapse0x29ff690();
   input += synapse0x29ff6d0();
   input += synapse0x29ff710();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f2c00() {
   double input = input0x29f2c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29ff750() {
   double input = -1.58999;
   input += synapse0x29ffa90();
   input += synapse0x29ffad0();
   input += synapse0x29ffb10();
   input += synapse0x29ffb50();
   input += synapse0x29ffb90();
   input += synapse0x29ffbd0();
   input += synapse0x29ffc10();
   input += synapse0x29ffc50();
   input += synapse0x29ffc90();
   input += synapse0x29ffcd0();
   input += synapse0x29ffd10();
   input += synapse0x29ffd50();
   input += synapse0x29ffd90();
   input += synapse0x29ffdd0();
   input += synapse0x29ffe10();
   input += synapse0x29ffe50();
   input += synapse0x29ff8e0();
   input += synapse0x29ff920();
   input += synapse0x29fffa0();
   input += synapse0x29fffe0();
   input += synapse0x2a00020();
   input += synapse0x2a00060();
   input += synapse0x2a000a0();
   input += synapse0x2a000e0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29ff750() {
   double input = input0x29ff750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a00120() {
   double input = -2.90841;
   input += synapse0x2a00460();
   input += synapse0x2a004a0();
   input += synapse0x2a004e0();
   input += synapse0x2a00520();
   input += synapse0x2a00560();
   input += synapse0x2a005a0();
   input += synapse0x2a005e0();
   input += synapse0x2a00620();
   input += synapse0x2a00660();
   input += synapse0x2a006a0();
   input += synapse0x2a006e0();
   input += synapse0x2a00720();
   input += synapse0x2a00760();
   input += synapse0x2a007a0();
   input += synapse0x2a007e0();
   input += synapse0x2a00820();
   input += synapse0x2a002b0();
   input += synapse0x2a002f0();
   input += synapse0x2a00970();
   input += synapse0x2a009b0();
   input += synapse0x2a009f0();
   input += synapse0x2a00a30();
   input += synapse0x2a00a70();
   input += synapse0x2a00ab0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a00120() {
   double input = input0x2a00120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a00af0() {
   double input = 0.694544;
   input += synapse0x2a00e30();
   input += synapse0x2a00e70();
   input += synapse0x2a00eb0();
   input += synapse0x2a00ef0();
   input += synapse0x2a00f30();
   input += synapse0x2a00f70();
   input += synapse0x2a00fb0();
   input += synapse0x2a00ff0();
   input += synapse0x2a01030();
   input += synapse0x2a01070();
   input += synapse0x2a010b0();
   input += synapse0x2a010f0();
   input += synapse0x2a01130();
   input += synapse0x2a01170();
   input += synapse0x2a011b0();
   input += synapse0x2a011f0();
   input += synapse0x2a00c80();
   input += synapse0x2a00cc0();
   input += synapse0x2a01340();
   input += synapse0x2a01380();
   input += synapse0x2a013c0();
   input += synapse0x2a01400();
   input += synapse0x2a01440();
   input += synapse0x2a01480();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a00af0() {
   double input = input0x2a00af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a014c0() {
   double input = 0.811323;
   input += synapse0x2a01800();
   input += synapse0x2a01840();
   input += synapse0x2a01880();
   input += synapse0x2a018c0();
   input += synapse0x2a01900();
   input += synapse0x2a01940();
   input += synapse0x2a01980();
   input += synapse0x2a019c0();
   input += synapse0x2a01a00();
   input += synapse0x2a01a40();
   input += synapse0x2a01a80();
   input += synapse0x2a01ac0();
   input += synapse0x2a01b00();
   input += synapse0x2a01b40();
   input += synapse0x2a01b80();
   input += synapse0x2a01bc0();
   input += synapse0x2a01650();
   input += synapse0x2a01690();
   input += synapse0x2a01d10();
   input += synapse0x2a01d50();
   input += synapse0x2a01d90();
   input += synapse0x2a01dd0();
   input += synapse0x2a01e10();
   input += synapse0x2a01e50();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a014c0() {
   double input = input0x2a014c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a01e90() {
   double input = 1.46468;
   input += synapse0x2a021d0();
   input += synapse0x2a02210();
   input += synapse0x2a02250();
   input += synapse0x2a02290();
   input += synapse0x2a022d0();
   input += synapse0x2a02310();
   input += synapse0x2a02350();
   input += synapse0x2a02390();
   input += synapse0x2a023d0();
   input += synapse0x2a02410();
   input += synapse0x2a02450();
   input += synapse0x2a02490();
   input += synapse0x2a024d0();
   input += synapse0x2a02510();
   input += synapse0x2a02550();
   input += synapse0x2a02590();
   input += synapse0x2a02020();
   input += synapse0x2a02060();
   input += synapse0x2a026e0();
   input += synapse0x2a02720();
   input += synapse0x2a02760();
   input += synapse0x2a027a0();
   input += synapse0x2a027e0();
   input += synapse0x2a02820();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a01e90() {
   double input = input0x2a01e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a02860() {
   double input = 1.71094;
   input += synapse0x2a02ba0();
   input += synapse0x2a02be0();
   input += synapse0x2a02c20();
   input += synapse0x2a02c60();
   input += synapse0x2a02ca0();
   input += synapse0x2a02ce0();
   input += synapse0x2a02d20();
   input += synapse0x2a02d60();
   input += synapse0x2a02da0();
   input += synapse0x2a02de0();
   input += synapse0x2a02e20();
   input += synapse0x2a02e60();
   input += synapse0x2a02ea0();
   input += synapse0x2a02ee0();
   input += synapse0x2a02f20();
   input += synapse0x2a02f60();
   input += synapse0x2a029f0();
   input += synapse0x2a02a30();
   input += synapse0x2a030b0();
   input += synapse0x2a030f0();
   input += synapse0x2a03130();
   input += synapse0x2a03170();
   input += synapse0x2a031b0();
   input += synapse0x2a031f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a02860() {
   double input = input0x2a02860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a03230() {
   double input = 0.591562;
   input += synapse0x2a03570();
   input += synapse0x2a035b0();
   input += synapse0x2a035f0();
   input += synapse0x2a03630();
   input += synapse0x2a03670();
   input += synapse0x2a036b0();
   input += synapse0x2a036f0();
   input += synapse0x2a03730();
   input += synapse0x2a03770();
   input += synapse0x2a037b0();
   input += synapse0x2a037f0();
   input += synapse0x2a03830();
   input += synapse0x2a03870();
   input += synapse0x2a038b0();
   input += synapse0x2a038f0();
   input += synapse0x2a03930();
   input += synapse0x2a033c0();
   input += synapse0x2a03400();
   input += synapse0x2a03a80();
   input += synapse0x2a03ac0();
   input += synapse0x2a03b00();
   input += synapse0x2a03b40();
   input += synapse0x2a03b80();
   input += synapse0x2a03bc0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a03230() {
   double input = input0x2a03230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a03c00() {
   double input = -1.47327;
   input += synapse0x29ec670();
   input += synapse0x29ec6b0();
   input += synapse0x29ec6f0();
   input += synapse0x29ec730();
   input += synapse0x29ec770();
   input += synapse0x29ec7b0();
   input += synapse0x29ec7f0();
   input += synapse0x29ec830();
   input += synapse0x2a04350();
   input += synapse0x2a04390();
   input += synapse0x2a043d0();
   input += synapse0x2a04410();
   input += synapse0x2a04450();
   input += synapse0x2a04490();
   input += synapse0x2a044d0();
   input += synapse0x2a04510();
   input += synapse0x2a03d90();
   input += synapse0x2a03dd0();
   input += synapse0x2a04660();
   input += synapse0x2a046a0();
   input += synapse0x2a046e0();
   input += synapse0x2a04720();
   input += synapse0x2a04760();
   input += synapse0x2a047a0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a03c00() {
   double input = input0x2a03c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a047e0() {
   double input = 0.254626;
   input += synapse0x2a04b20();
   input += synapse0x2a04b60();
   input += synapse0x2a04ba0();
   input += synapse0x2a04be0();
   input += synapse0x2a04c20();
   input += synapse0x2a04c60();
   input += synapse0x2a04ca0();
   input += synapse0x2a04ce0();
   input += synapse0x2a04d20();
   input += synapse0x2a04d60();
   input += synapse0x2a04da0();
   input += synapse0x2a04de0();
   input += synapse0x2a04e20();
   input += synapse0x2a04e60();
   input += synapse0x2a04ea0();
   input += synapse0x2a04ee0();
   input += synapse0x2a04970();
   input += synapse0x2a049b0();
   input += synapse0x2a05030();
   input += synapse0x2a05070();
   input += synapse0x2a050b0();
   input += synapse0x2a050f0();
   input += synapse0x2a05130();
   input += synapse0x2a05170();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a047e0() {
   double input = input0x2a047e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a051b0() {
   double input = -1.61567;
   input += synapse0x2a054f0();
   input += synapse0x2a05530();
   input += synapse0x2a05570();
   input += synapse0x2a055b0();
   input += synapse0x2a055f0();
   input += synapse0x2a05630();
   input += synapse0x2a05670();
   input += synapse0x2a056b0();
   input += synapse0x2a056f0();
   input += synapse0x2a05730();
   input += synapse0x2a05770();
   input += synapse0x2a057b0();
   input += synapse0x2a057f0();
   input += synapse0x2a05830();
   input += synapse0x2a05870();
   input += synapse0x2a058b0();
   input += synapse0x2a05340();
   input += synapse0x2a05380();
   input += synapse0x29f5eb0();
   input += synapse0x29f5ef0();
   input += synapse0x29f5f30();
   input += synapse0x29f5f70();
   input += synapse0x29f5fb0();
   input += synapse0x29f5ff0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a051b0() {
   double input = input0x2a051b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f6030() {
   double input = 1.28784;
   input += synapse0x29f6370();
   input += synapse0x29f63b0();
   input += synapse0x29f63f0();
   input += synapse0x29f6430();
   input += synapse0x29f6470();
   input += synapse0x29f64b0();
   input += synapse0x29f64f0();
   input += synapse0x29f6530();
   input += synapse0x29f6570();
   input += synapse0x29f65b0();
   input += synapse0x29f65f0();
   input += synapse0x29f6630();
   input += synapse0x29f6670();
   input += synapse0x29f66b0();
   input += synapse0x29f66f0();
   input += synapse0x29f6730();
   input += synapse0x29f61c0();
   input += synapse0x29f6200();
   input += synapse0x29f6880();
   input += synapse0x29f68c0();
   input += synapse0x29f6900();
   input += synapse0x29f6940();
   input += synapse0x29f6980();
   input += synapse0x29f69c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f6030() {
   double input = input0x29f6030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f6a00() {
   double input = 0.0359266;
   input += synapse0x29f6d40();
   input += synapse0x29f6d80();
   input += synapse0x29f6dc0();
   input += synapse0x29f6e00();
   input += synapse0x29f6e40();
   input += synapse0x29f6e80();
   input += synapse0x29f6ec0();
   input += synapse0x29f6f00();
   input += synapse0x29f6f40();
   input += synapse0x29f6f80();
   input += synapse0x29f6fc0();
   input += synapse0x29f7000();
   input += synapse0x29f7040();
   input += synapse0x29f7080();
   input += synapse0x29f70c0();
   input += synapse0x29f7100();
   input += synapse0x29f6b90();
   input += synapse0x29f6bd0();
   input += synapse0x29f7250();
   input += synapse0x29f7290();
   input += synapse0x29f72d0();
   input += synapse0x29f7310();
   input += synapse0x29f7350();
   input += synapse0x29f7390();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f6a00() {
   double input = input0x29f6a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x29f73d0() {
   double input = 0.285021;
   input += synapse0x29f7710();
   input += synapse0x29f7750();
   input += synapse0x29f7790();
   input += synapse0x29f77d0();
   input += synapse0x29f7810();
   input += synapse0x29f7850();
   input += synapse0x29f7890();
   input += synapse0x29f78d0();
   input += synapse0x29f7910();
   input += synapse0x29f7950();
   input += synapse0x29f7990();
   input += synapse0x29f79d0();
   input += synapse0x29f7a10();
   input += synapse0x29f7a50();
   input += synapse0x29f7a90();
   input += synapse0x29f7ad0();
   input += synapse0x29f7560();
   input += synapse0x29f75a0();
   input += synapse0x29f7c20();
   input += synapse0x29f7c60();
   input += synapse0x29f7ca0();
   input += synapse0x29f7ce0();
   input += synapse0x29f7d20();
   input += synapse0x29f7d60();
   return input;
}

double NNfunction_ss_uLdR::neuron0x29f73d0() {
   double input = input0x29f73d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a09a10() {
   double input = 1.82749;
   input += synapse0x2a09c30();
   input += synapse0x2a09c70();
   input += synapse0x2a09cb0();
   input += synapse0x2a09cf0();
   input += synapse0x2a09d30();
   input += synapse0x2a09d70();
   input += synapse0x2a09db0();
   input += synapse0x2a09df0();
   input += synapse0x2a09e30();
   input += synapse0x2a09e70();
   input += synapse0x2a09eb0();
   input += synapse0x2a09ef0();
   input += synapse0x2a09f30();
   input += synapse0x2a09f70();
   input += synapse0x2a09fb0();
   input += synapse0x2a09ff0();
   input += synapse0x29f7da0();
   input += synapse0x29f7de0();
   input += synapse0x2a0a140();
   input += synapse0x2a0a180();
   input += synapse0x2a0a1c0();
   input += synapse0x2a0a200();
   input += synapse0x2a0a240();
   input += synapse0x2a0a280();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a09a10() {
   double input = input0x2a09a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a0a2c0() {
   double input = -0.205181;
   input += synapse0x2a0a600();
   input += synapse0x2a0a640();
   input += synapse0x2a0a680();
   input += synapse0x2a0a6c0();
   input += synapse0x2a0a700();
   input += synapse0x2a0a740();
   input += synapse0x2a0a780();
   input += synapse0x2a0a7c0();
   input += synapse0x2a0a800();
   input += synapse0x2a0a840();
   input += synapse0x2a0a880();
   input += synapse0x2a0a8c0();
   input += synapse0x2a0a900();
   input += synapse0x2a0a940();
   input += synapse0x2a0a980();
   input += synapse0x2a0a9c0();
   input += synapse0x2a0a450();
   input += synapse0x2a0a490();
   input += synapse0x2a0ab10();
   input += synapse0x2a0ab50();
   input += synapse0x2a0ab90();
   input += synapse0x2a0abd0();
   input += synapse0x2a0ac10();
   input += synapse0x2a0ac50();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a0a2c0() {
   double input = input0x2a0a2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a0ac90() {
   double input = 0.890755;
   input += synapse0x2a0afd0();
   input += synapse0x2a0b010();
   input += synapse0x2a0b050();
   input += synapse0x2a0b090();
   input += synapse0x2a0b0d0();
   input += synapse0x2a0b110();
   input += synapse0x2a0b150();
   input += synapse0x2a0b190();
   input += synapse0x2a0b1d0();
   input += synapse0x2a0b210();
   input += synapse0x2a0b250();
   input += synapse0x2a0b290();
   input += synapse0x2a0b2d0();
   input += synapse0x2a0b310();
   input += synapse0x2a0b350();
   input += synapse0x2a0b390();
   input += synapse0x2a0ae20();
   input += synapse0x2a0ae60();
   input += synapse0x2a0b4e0();
   input += synapse0x2a0b520();
   input += synapse0x2a0b560();
   input += synapse0x2a0b5a0();
   input += synapse0x2a0b5e0();
   input += synapse0x2a0b620();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a0ac90() {
   double input = input0x2a0ac90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a0b660() {
   double input = 2.0331;
   input += synapse0x2a0b9a0();
   input += synapse0x2a0b9e0();
   input += synapse0x2a0ba20();
   input += synapse0x2a0ba60();
   input += synapse0x2a0baa0();
   input += synapse0x2a0bae0();
   input += synapse0x2a0bb20();
   input += synapse0x2a0bb60();
   input += synapse0x2a0bba0();
   input += synapse0x2a0bbe0();
   input += synapse0x2a0bc20();
   input += synapse0x2a0bc60();
   input += synapse0x2a0bca0();
   input += synapse0x2a0bce0();
   input += synapse0x2a0bd20();
   input += synapse0x2a0bd60();
   input += synapse0x2a0b7f0();
   input += synapse0x2a0b830();
   input += synapse0x2a0beb0();
   input += synapse0x2a0bef0();
   input += synapse0x2a0bf30();
   input += synapse0x2a0bf70();
   input += synapse0x2a0bfb0();
   input += synapse0x2a0bff0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a0b660() {
   double input = input0x2a0b660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a12860() {
   double input = 0.147672;
   input += synapse0x27abf00();
   input += synapse0x27abf40();
   input += synapse0x29e9aa0();
   input += synapse0x29e9ae0();
   input += synapse0x29ea470();
   input += synapse0x29ea4b0();
   input += synapse0x29eb240();
   input += synapse0x29eb280();
   input += synapse0x29ebc10();
   input += synapse0x29ebc50();
   input += synapse0x29ec5e0();
   input += synapse0x29ec620();
   input += synapse0x29ed0c0();
   input += synapse0x29ed100();
   input += synapse0x29eda90();
   input += synapse0x29edad0();
   input += synapse0x29eab70();
   input += synapse0x29eabb0();
   input += synapse0x29ef640();
   input += synapse0x29ef680();
   input += synapse0x29f0010();
   input += synapse0x29f0050();
   input += synapse0x29f09e0();
   input += synapse0x29f0a20();
   input += synapse0x29f13b0();
   input += synapse0x29f13f0();
   input += synapse0x29e5550();
   input += synapse0x29e5590();
   input += synapse0x29f34a0();
   input += synapse0x29f34e0();
   input += synapse0x29f3e70();
   input += synapse0x29f3eb0();
   input += synapse0x29f4840();
   input += synapse0x29f4880();
   input += synapse0x29f5210();
   input += synapse0x29f5250();
   input += synapse0x29f5be0();
   input += synapse0x29f5c20();
   input += synapse0x29ee730();
   input += synapse0x29ee770();
   input += synapse0x29f7fe0();
   input += synapse0x29f8020();
   input += synapse0x29f8970();
   input += synapse0x29f89b0();
   input += synapse0x29f9340();
   input += synapse0x29f9380();
   input += synapse0x29f9d10();
   input += synapse0x29f9d50();
   input += synapse0x29fa6e0();
   input += synapse0x29fa720();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a12860() {
   double input = input0x2a12860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a12c00() {
   double input = -0.849175;
   input += synapse0x29fce20();
   input += synapse0x29fce60();
   input += synapse0x29f23e0();
   input += synapse0x29f2420();
   input += synapse0x29ffa00();
   input += synapse0x29ffa40();
   input += synapse0x2a003d0();
   input += synapse0x2a00410();
   input += synapse0x2a00da0();
   input += synapse0x2a00de0();
   input += synapse0x2a01770();
   input += synapse0x2a017b0();
   input += synapse0x2a02140();
   input += synapse0x2a02180();
   input += synapse0x2a02b10();
   input += synapse0x2a02b50();
   input += synapse0x2a034e0();
   input += synapse0x2a03520();
   input += synapse0x2a03eb0();
   input += synapse0x2a03ef0();
   input += synapse0x2a04a90();
   input += synapse0x2a04ad0();
   input += synapse0x2a05460();
   input += synapse0x2a054a0();
   input += synapse0x29f62e0();
   input += synapse0x29f6320();
   input += synapse0x29f6cb0();
   input += synapse0x29f6cf0();
   input += synapse0x29f7680();
   input += synapse0x29f76c0();
   input += synapse0x2a09ba0();
   input += synapse0x2a09be0();
   input += synapse0x2a0a570();
   input += synapse0x2a0a5b0();
   input += synapse0x2a0af40();
   input += synapse0x2a0af80();
   input += synapse0x2a0b910();
   input += synapse0x2a0b950();
   input += synapse0x29e7800();
   input += synapse0x29e7840();
   input += synapse0x29fb0b0();
   input += synapse0x29fb0f0();
   input += synapse0x2a0c030();
   input += synapse0x2a0c070();
   input += synapse0x2a0c0b0();
   input += synapse0x2a0c0f0();
   input += synapse0x2a12fa0();
   input += synapse0x2a12fe0();
   input += synapse0x2a13020();
   input += synapse0x2a13060();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a12c00() {
   double input = input0x2a12c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a130a0() {
   double input = -0.197987;
   input += synapse0x2a133e0();
   input += synapse0x2a13420();
   input += synapse0x2a13460();
   input += synapse0x2a134a0();
   input += synapse0x2a134e0();
   input += synapse0x2a13520();
   input += synapse0x2a13560();
   input += synapse0x2a135a0();
   input += synapse0x2a135e0();
   input += synapse0x2a13620();
   input += synapse0x2a13660();
   input += synapse0x2a136a0();
   input += synapse0x2a136e0();
   input += synapse0x2a13720();
   input += synapse0x2a13760();
   input += synapse0x2a137a0();
   input += synapse0x2a13230();
   input += synapse0x2a13270();
   input += synapse0x2a138f0();
   input += synapse0x2a13930();
   input += synapse0x2a13970();
   input += synapse0x2a139b0();
   input += synapse0x2a139f0();
   input += synapse0x2a13a30();
   input += synapse0x2a13a70();
   input += synapse0x2a13ab0();
   input += synapse0x2a13af0();
   input += synapse0x2a13b30();
   input += synapse0x2a13b70();
   input += synapse0x2a13bb0();
   input += synapse0x2a13bf0();
   input += synapse0x2a13c30();
   input += synapse0x2a137e0();
   input += synapse0x2a13820();
   input += synapse0x2a13860();
   input += synapse0x2a138a0();
   input += synapse0x2a13e80();
   input += synapse0x2a13ec0();
   input += synapse0x2a13f00();
   input += synapse0x2a13f40();
   input += synapse0x2a13f80();
   input += synapse0x2a13fc0();
   input += synapse0x2a14000();
   input += synapse0x2a14040();
   input += synapse0x2a14080();
   input += synapse0x2a140c0();
   input += synapse0x2a14100();
   input += synapse0x2a14140();
   input += synapse0x2a14180();
   input += synapse0x2a141c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a130a0() {
   double input = input0x2a130a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a14200() {
   double input = -1.41776;
   input += synapse0x2a14540();
   input += synapse0x2a14580();
   input += synapse0x2a145c0();
   input += synapse0x2a14600();
   input += synapse0x2a14640();
   input += synapse0x2a14680();
   input += synapse0x2a146c0();
   input += synapse0x2a14700();
   input += synapse0x2a14740();
   input += synapse0x2a14780();
   input += synapse0x2a147c0();
   input += synapse0x2a14800();
   input += synapse0x2a14840();
   input += synapse0x2a14880();
   input += synapse0x2a148c0();
   input += synapse0x2a14900();
   input += synapse0x2a14390();
   input += synapse0x2a143d0();
   input += synapse0x2a14a50();
   input += synapse0x2a14a90();
   input += synapse0x2a14ad0();
   input += synapse0x2a14b10();
   input += synapse0x2a14b50();
   input += synapse0x2a14b90();
   input += synapse0x2a14bd0();
   input += synapse0x2a14c10();
   input += synapse0x2a14c50();
   input += synapse0x2a14c90();
   input += synapse0x2a14cd0();
   input += synapse0x2a14d10();
   input += synapse0x2a14d50();
   input += synapse0x2a14d90();
   input += synapse0x2a14940();
   input += synapse0x2a14980();
   input += synapse0x2a149c0();
   input += synapse0x2a14a00();
   input += synapse0x2a14fe0();
   input += synapse0x2a15020();
   input += synapse0x2a15060();
   input += synapse0x2a150a0();
   input += synapse0x2a150e0();
   input += synapse0x2a15120();
   input += synapse0x2a15160();
   input += synapse0x2a151a0();
   input += synapse0x2a151e0();
   input += synapse0x2a15220();
   input += synapse0x2a15260();
   input += synapse0x2a152a0();
   input += synapse0x2a152e0();
   input += synapse0x2a15320();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a14200() {
   double input = input0x2a14200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a15360() {
   double input = -0.00163699;
   input += synapse0x2a156a0();
   input += synapse0x2a156e0();
   input += synapse0x2a15720();
   input += synapse0x2a15760();
   input += synapse0x2a157a0();
   input += synapse0x2a157e0();
   input += synapse0x2a15820();
   input += synapse0x2a15860();
   input += synapse0x2a158a0();
   input += synapse0x2a158e0();
   input += synapse0x2a15920();
   input += synapse0x2a15960();
   input += synapse0x2a159a0();
   input += synapse0x2a159e0();
   input += synapse0x2a15a20();
   input += synapse0x2a15a60();
   input += synapse0x2a154f0();
   input += synapse0x2a15530();
   input += synapse0x2a15bb0();
   input += synapse0x2a15bf0();
   input += synapse0x2a15c30();
   input += synapse0x2a15c70();
   input += synapse0x2a15cb0();
   input += synapse0x2a15cf0();
   input += synapse0x2a15d30();
   input += synapse0x2a15d70();
   input += synapse0x2a15db0();
   input += synapse0x2a15df0();
   input += synapse0x2a15e30();
   input += synapse0x2a15e70();
   input += synapse0x2a15eb0();
   input += synapse0x2a15ef0();
   input += synapse0x2a15aa0();
   input += synapse0x2a15ae0();
   input += synapse0x2a15b20();
   input += synapse0x2a15b60();
   input += synapse0x2a16140();
   input += synapse0x2a16180();
   input += synapse0x2a161c0();
   input += synapse0x2a16200();
   input += synapse0x2a16240();
   input += synapse0x2a16280();
   input += synapse0x2a162c0();
   input += synapse0x2a16300();
   input += synapse0x2a16340();
   input += synapse0x2a16380();
   input += synapse0x2a163c0();
   input += synapse0x2a16400();
   input += synapse0x2a16440();
   input += synapse0x2a16480();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a15360() {
   double input = input0x2a15360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a164c0() {
   double input = 9.21745;
   input += synapse0x2a166e0();
   input += synapse0x2a16720();
   input += synapse0x2a16760();
   input += synapse0x2a167a0();
   input += synapse0x2a167e0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a164c0() {
   double input = input0x2a164c0();
   return (input * 1)+0;
}

double NNfunction_ss_uLdR::synapse0x29e2470() {
   return (neuron0x29e25b0()*0.0441832);
}

double NNfunction_ss_uLdR::synapse0x29e24b0() {
   return (neuron0x29e28f0()*-0.177527);
}

double NNfunction_ss_uLdR::synapse0x29e7890() {
   return (neuron0x29e2c30()*0.324717);
}

double NNfunction_ss_uLdR::synapse0x29e78d0() {
   return (neuron0x29e2f70()*0.500769);
}

double NNfunction_ss_uLdR::synapse0x29e7910() {
   return (neuron0x29e32b0()*-0.695065);
}

double NNfunction_ss_uLdR::synapse0x29e7950() {
   return (neuron0x29e35f0()*0.221159);
}

double NNfunction_ss_uLdR::synapse0x29e7990() {
   return (neuron0x29e3930()*0.0666448);
}

double NNfunction_ss_uLdR::synapse0x29e79d0() {
   return (neuron0x29e3c70()*0.489702);
}

double NNfunction_ss_uLdR::synapse0x29e7a10() {
   return (neuron0x29e3fb0()*0.4713);
}

double NNfunction_ss_uLdR::synapse0x29e7a50() {
   return (neuron0x29e42f0()*-0.126105);
}

double NNfunction_ss_uLdR::synapse0x29e7a90() {
   return (neuron0x29e4630()*0.300337);
}

double NNfunction_ss_uLdR::synapse0x29e7ad0() {
   return (neuron0x29e4970()*-0.993962);
}

double NNfunction_ss_uLdR::synapse0x29e7b10() {
   return (neuron0x29e4cb0()*0.513681);
}

double NNfunction_ss_uLdR::synapse0x29e7b50() {
   return (neuron0x29e4ff0()*0.969379);
}

double NNfunction_ss_uLdR::synapse0x29e7b90() {
   return (neuron0x29e5330()*-0.238187);
}

double NNfunction_ss_uLdR::synapse0x29e7bd0() {
   return (neuron0x29e5670()*-0.167304);
}

double NNfunction_ss_uLdR::synapse0x29e23e0() {
   return (neuron0x29e59b0()*0.298926);
}

double NNfunction_ss_uLdR::synapse0x29e2420() {
   return (neuron0x29e5f10()*-0.487455);
}

double NNfunction_ss_uLdR::synapse0x279d7a0() {
   return (neuron0x29e6130()*-0.201909);
}

double NNfunction_ss_uLdR::synapse0x279d7e0() {
   return (neuron0x29e6470()*-0.0931826);
}

double NNfunction_ss_uLdR::synapse0x29e7e30() {
   return (neuron0x29e67b0()*0.629318);
}

double NNfunction_ss_uLdR::synapse0x29e7e70() {
   return (neuron0x29e6af0()*-0.157574);
}

double NNfunction_ss_uLdR::synapse0x29e7eb0() {
   return (neuron0x29e6e30()*-0.201136);
}

double NNfunction_ss_uLdR::synapse0x29e7ef0() {
   return (neuron0x29e7170()*0.302535);
}

double NNfunction_ss_uLdR::synapse0x29e8270() {
   return (neuron0x29e25b0()*0.0453015);
}

double NNfunction_ss_uLdR::synapse0x29e82b0() {
   return (neuron0x29e28f0()*-0.558202);
}

double NNfunction_ss_uLdR::synapse0x29e82f0() {
   return (neuron0x29e2c30()*-0.974799);
}

double NNfunction_ss_uLdR::synapse0x29e8330() {
   return (neuron0x29e2f70()*0.184938);
}

double NNfunction_ss_uLdR::synapse0x29e8370() {
   return (neuron0x29e32b0()*-0.319322);
}

double NNfunction_ss_uLdR::synapse0x29e83b0() {
   return (neuron0x29e35f0()*-0.051719);
}

double NNfunction_ss_uLdR::synapse0x29e83f0() {
   return (neuron0x29e3930()*0.2103);
}

double NNfunction_ss_uLdR::synapse0x29e8430() {
   return (neuron0x29e3c70()*-0.551917);
}

double NNfunction_ss_uLdR::synapse0x29e8470() {
   return (neuron0x29e3fb0()*-0.0976081);
}

double NNfunction_ss_uLdR::synapse0x29e7d20() {
   return (neuron0x29e42f0()*0.255275);
}

double NNfunction_ss_uLdR::synapse0x29e7d60() {
   return (neuron0x29e4630()*-0.0325522);
}

double NNfunction_ss_uLdR::synapse0x29e7da0() {
   return (neuron0x29e4970()*1.37622);
}

double NNfunction_ss_uLdR::synapse0x29e7de0() {
   return (neuron0x29e4cb0()*-0.785817);
}

double NNfunction_ss_uLdR::synapse0x29e86c0() {
   return (neuron0x29e4ff0()*0.398497);
}

double NNfunction_ss_uLdR::synapse0x29e8700() {
   return (neuron0x29e5330()*-1.59247);
}

double NNfunction_ss_uLdR::synapse0x29e8740() {
   return (neuron0x29e5670()*0.235344);
}

double NNfunction_ss_uLdR::synapse0x29e80c0() {
   return (neuron0x29e59b0()*-0.155242);
}

double NNfunction_ss_uLdR::synapse0x29e8100() {
   return (neuron0x29e5f10()*1.03034);
}

double NNfunction_ss_uLdR::synapse0x29e8890() {
   return (neuron0x29e6130()*-0.171992);
}

double NNfunction_ss_uLdR::synapse0x29e88d0() {
   return (neuron0x29e6470()*0.406523);
}

double NNfunction_ss_uLdR::synapse0x29e8910() {
   return (neuron0x29e67b0()*-0.124361);
}

double NNfunction_ss_uLdR::synapse0x29e8950() {
   return (neuron0x29e6af0()*-0.314906);
}

double NNfunction_ss_uLdR::synapse0x29e8990() {
   return (neuron0x29e6e30()*0.466309);
}

double NNfunction_ss_uLdR::synapse0x29e89d0() {
   return (neuron0x29e7170()*0.367123);
}

double NNfunction_ss_uLdR::synapse0x29e8d50() {
   return (neuron0x29e25b0()*0.0790413);
}

double NNfunction_ss_uLdR::synapse0x29e8d90() {
   return (neuron0x29e28f0()*0.0680977);
}

double NNfunction_ss_uLdR::synapse0x29e8dd0() {
   return (neuron0x29e2c30()*0.581551);
}

double NNfunction_ss_uLdR::synapse0x29e8e10() {
   return (neuron0x29e2f70()*0.435906);
}

double NNfunction_ss_uLdR::synapse0x29e8e50() {
   return (neuron0x29e32b0()*0.250747);
}

double NNfunction_ss_uLdR::synapse0x29e8e90() {
   return (neuron0x29e35f0()*0.0727596);
}

double NNfunction_ss_uLdR::synapse0x29e8ed0() {
   return (neuron0x29e3930()*-0.130098);
}

double NNfunction_ss_uLdR::synapse0x29e8f10() {
   return (neuron0x29e3c70()*-0.149942);
}

double NNfunction_ss_uLdR::synapse0x29e8f50() {
   return (neuron0x29e3fb0()*-0.0981627);
}

double NNfunction_ss_uLdR::synapse0x29e8f90() {
   return (neuron0x29e42f0()*0.145038);
}

double NNfunction_ss_uLdR::synapse0x29e8fd0() {
   return (neuron0x29e4630()*-0.0467273);
}

double NNfunction_ss_uLdR::synapse0x29e9010() {
   return (neuron0x29e4970()*-0.371922);
}

double NNfunction_ss_uLdR::synapse0x29e9050() {
   return (neuron0x29e4cb0()*0.218658);
}

double NNfunction_ss_uLdR::synapse0x29e9090() {
   return (neuron0x29e4ff0()*-0.0374426);
}

double NNfunction_ss_uLdR::synapse0x29e90d0() {
   return (neuron0x29e5330()*-0.686759);
}

double NNfunction_ss_uLdR::synapse0x29e9110() {
   return (neuron0x29e5670()*-0.292235);
}

double NNfunction_ss_uLdR::synapse0x29e8ba0() {
   return (neuron0x29e59b0()*0.0400733);
}

double NNfunction_ss_uLdR::synapse0x29e8be0() {
   return (neuron0x29e5f10()*-0.60908);
}

double NNfunction_ss_uLdR::synapse0x279de40() {
   return (neuron0x29e6130()*-0.0853091);
}

double NNfunction_ss_uLdR::synapse0x27ab710() {
   return (neuron0x29e6470()*-0.0849431);
}

double NNfunction_ss_uLdR::synapse0x27ab750() {
   return (neuron0x29e67b0()*0.0744953);
}

double NNfunction_ss_uLdR::synapse0x29d1640() {
   return (neuron0x29e6af0()*-0.239646);
}

double NNfunction_ss_uLdR::synapse0x29d1680() {
   return (neuron0x29e6e30()*0.106529);
}

double NNfunction_ss_uLdR::synapse0x29d16c0() {
   return (neuron0x29e7170()*-0.133592);
}

double NNfunction_ss_uLdR::synapse0x27abf90() {
   return (neuron0x29e25b0()*-0.0833014);
}

double NNfunction_ss_uLdR::synapse0x29e8640() {
   return (neuron0x29e28f0()*-0.0909749);
}

double NNfunction_ss_uLdR::synapse0x29e8680() {
   return (neuron0x29e2c30()*-0.588481);
}

double NNfunction_ss_uLdR::synapse0x29e9260() {
   return (neuron0x29e2f70()*0.428463);
}

double NNfunction_ss_uLdR::synapse0x29e92a0() {
   return (neuron0x29e32b0()*-0.289546);
}

double NNfunction_ss_uLdR::synapse0x29e92e0() {
   return (neuron0x29e35f0()*-0.408854);
}

double NNfunction_ss_uLdR::synapse0x29e9320() {
   return (neuron0x29e3930()*-0.428601);
}

double NNfunction_ss_uLdR::synapse0x29e9360() {
   return (neuron0x29e3c70()*-0.137034);
}

double NNfunction_ss_uLdR::synapse0x29e93a0() {
   return (neuron0x29e3fb0()*0.143666);
}

double NNfunction_ss_uLdR::synapse0x29e93e0() {
   return (neuron0x29e42f0()*0.297341);
}

double NNfunction_ss_uLdR::synapse0x29e9420() {
   return (neuron0x29e4630()*0.315248);
}

double NNfunction_ss_uLdR::synapse0x29e9460() {
   return (neuron0x29e4970()*0.525555);
}

double NNfunction_ss_uLdR::synapse0x29e94a0() {
   return (neuron0x29e4cb0()*-0.00951226);
}

double NNfunction_ss_uLdR::synapse0x29e94e0() {
   return (neuron0x29e4ff0()*0.0821947);
}

double NNfunction_ss_uLdR::synapse0x29e9520() {
   return (neuron0x29e5330()*-0.373804);
}

double NNfunction_ss_uLdR::synapse0x29e9560() {
   return (neuron0x29e5670()*-0.18236);
}

double NNfunction_ss_uLdR::synapse0x29e24f0() {
   return (neuron0x29e59b0()*-0.182544);
}

double NNfunction_ss_uLdR::synapse0x29e2530() {
   return (neuron0x29e5f10()*0.363655);
}

double NNfunction_ss_uLdR::synapse0x29e2570() {
   return (neuron0x29e6130()*0.322056);
}

double NNfunction_ss_uLdR::synapse0x29e96b0() {
   return (neuron0x29e6470()*0.268971);
}

double NNfunction_ss_uLdR::synapse0x29e96f0() {
   return (neuron0x29e67b0()*-0.155997);
}

double NNfunction_ss_uLdR::synapse0x29e9730() {
   return (neuron0x29e6af0()*-0.120276);
}

double NNfunction_ss_uLdR::synapse0x29e9770() {
   return (neuron0x29e6e30()*0.253683);
}

double NNfunction_ss_uLdR::synapse0x29e97b0() {
   return (neuron0x29e7170()*0.00143974);
}

double NNfunction_ss_uLdR::synapse0x29e9b30() {
   return (neuron0x29e25b0()*-0.0532118);
}

double NNfunction_ss_uLdR::synapse0x29e9b70() {
   return (neuron0x29e28f0()*-0.109746);
}

double NNfunction_ss_uLdR::synapse0x29e9bb0() {
   return (neuron0x29e2c30()*0.15001);
}

double NNfunction_ss_uLdR::synapse0x29e9bf0() {
   return (neuron0x29e2f70()*-0.547973);
}

double NNfunction_ss_uLdR::synapse0x29e9c30() {
   return (neuron0x29e32b0()*-0.0917153);
}

double NNfunction_ss_uLdR::synapse0x29e9c70() {
   return (neuron0x29e35f0()*0.204633);
}

double NNfunction_ss_uLdR::synapse0x29e9cb0() {
   return (neuron0x29e3930()*0.237362);
}

double NNfunction_ss_uLdR::synapse0x29e9cf0() {
   return (neuron0x29e3c70()*-0.268604);
}

double NNfunction_ss_uLdR::synapse0x29e9d30() {
   return (neuron0x29e3fb0()*-0.182023);
}

double NNfunction_ss_uLdR::synapse0x29e9d70() {
   return (neuron0x29e42f0()*-0.356636);
}

double NNfunction_ss_uLdR::synapse0x29e9db0() {
   return (neuron0x29e4630()*-0.526009);
}

double NNfunction_ss_uLdR::synapse0x29e9df0() {
   return (neuron0x29e4970()*0.346179);
}

double NNfunction_ss_uLdR::synapse0x29e9e30() {
   return (neuron0x29e4cb0()*-0.786879);
}

double NNfunction_ss_uLdR::synapse0x29e9e70() {
   return (neuron0x29e4ff0()*0.52522);
}

double NNfunction_ss_uLdR::synapse0x29e9eb0() {
   return (neuron0x29e5330()*0.0704916);
}

double NNfunction_ss_uLdR::synapse0x29e9ef0() {
   return (neuron0x29e5670()*0.152419);
}

double NNfunction_ss_uLdR::synapse0x29e9980() {
   return (neuron0x29e59b0()*0.622191);
}

double NNfunction_ss_uLdR::synapse0x29e99c0() {
   return (neuron0x29e5f10()*-0.0882185);
}

double NNfunction_ss_uLdR::synapse0x29ea040() {
   return (neuron0x29e6130()*-0.0265712);
}

double NNfunction_ss_uLdR::synapse0x29ea080() {
   return (neuron0x29e6470()*0.0699001);
}

double NNfunction_ss_uLdR::synapse0x29ea0c0() {
   return (neuron0x29e67b0()*0.177892);
}

double NNfunction_ss_uLdR::synapse0x29ea100() {
   return (neuron0x29e6af0()*-0.0325766);
}

double NNfunction_ss_uLdR::synapse0x29ea140() {
   return (neuron0x29e6e30()*-0.206775);
}

double NNfunction_ss_uLdR::synapse0x29ea180() {
   return (neuron0x29e7170()*0.297002);
}

double NNfunction_ss_uLdR::synapse0x29ea500() {
   return (neuron0x29e25b0()*-0.0361684);
}

double NNfunction_ss_uLdR::synapse0x29ea540() {
   return (neuron0x29e28f0()*0.230402);
}

double NNfunction_ss_uLdR::synapse0x29ea580() {
   return (neuron0x29e2c30()*-1.5675);
}

double NNfunction_ss_uLdR::synapse0x29ea5c0() {
   return (neuron0x29e2f70()*0.200168);
}

double NNfunction_ss_uLdR::synapse0x29ea600() {
   return (neuron0x29e32b0()*-0.0978144);
}

double NNfunction_ss_uLdR::synapse0x29ea640() {
   return (neuron0x29e35f0()*0.12428);
}

double NNfunction_ss_uLdR::synapse0x29ea680() {
   return (neuron0x29e3930()*0.0013382);
}

double NNfunction_ss_uLdR::synapse0x29ea6c0() {
   return (neuron0x29e3c70()*-0.0434038);
}

double NNfunction_ss_uLdR::synapse0x29ea700() {
   return (neuron0x29e3fb0()*0.328692);
}

double NNfunction_ss_uLdR::synapse0x27aba60() {
   return (neuron0x29e42f0()*0.158699);
}

double NNfunction_ss_uLdR::synapse0x27abaa0() {
   return (neuron0x29e4630()*0.0653545);
}

double NNfunction_ss_uLdR::synapse0x27abae0() {
   return (neuron0x29e4970()*2.15133);
}

double NNfunction_ss_uLdR::synapse0x27abb20() {
   return (neuron0x29e4cb0()*0.285354);
}

double NNfunction_ss_uLdR::synapse0x27abb60() {
   return (neuron0x29e4ff0()*-0.102763);
}

double NNfunction_ss_uLdR::synapse0x27abba0() {
   return (neuron0x29e5330()*0.182322);
}

double NNfunction_ss_uLdR::synapse0x27abbe0() {
   return (neuron0x29e5670()*-0.0398484);
}

double NNfunction_ss_uLdR::synapse0x29ea350() {
   return (neuron0x29e59b0()*0.273924);
}

double NNfunction_ss_uLdR::synapse0x29ea390() {
   return (neuron0x29e5f10()*-2.23343);
}

double NNfunction_ss_uLdR::synapse0x27abd30() {
   return (neuron0x29e6130()*0.426046);
}

double NNfunction_ss_uLdR::synapse0x27abd70() {
   return (neuron0x29e6470()*0.107851);
}

double NNfunction_ss_uLdR::synapse0x27abdb0() {
   return (neuron0x29e67b0()*-0.0509549);
}

double NNfunction_ss_uLdR::synapse0x27abdf0() {
   return (neuron0x29e6af0()*0.0304019);
}

double NNfunction_ss_uLdR::synapse0x27abe30() {
   return (neuron0x29e6e30()*0.0125181);
}

double NNfunction_ss_uLdR::synapse0x29eaf50() {
   return (neuron0x29e7170()*0.141575);
}

double NNfunction_ss_uLdR::synapse0x29eb2d0() {
   return (neuron0x29e25b0()*0.121367);
}

double NNfunction_ss_uLdR::synapse0x29eb310() {
   return (neuron0x29e28f0()*-0.0300445);
}

double NNfunction_ss_uLdR::synapse0x29eb350() {
   return (neuron0x29e2c30()*-0.0680716);
}

double NNfunction_ss_uLdR::synapse0x29eb390() {
   return (neuron0x29e2f70()*-0.403548);
}

double NNfunction_ss_uLdR::synapse0x29eb3d0() {
   return (neuron0x29e32b0()*-0.0294046);
}

double NNfunction_ss_uLdR::synapse0x29eb410() {
   return (neuron0x29e35f0()*-0.00965936);
}

double NNfunction_ss_uLdR::synapse0x29eb450() {
   return (neuron0x29e3930()*-0.0825693);
}

double NNfunction_ss_uLdR::synapse0x29eb490() {
   return (neuron0x29e3c70()*-0.00848412);
}

double NNfunction_ss_uLdR::synapse0x29eb4d0() {
   return (neuron0x29e3fb0()*0.166104);
}

double NNfunction_ss_uLdR::synapse0x29eb510() {
   return (neuron0x29e42f0()*-0.145523);
}

double NNfunction_ss_uLdR::synapse0x29eb550() {
   return (neuron0x29e4630()*-0.0565862);
}

double NNfunction_ss_uLdR::synapse0x29eb590() {
   return (neuron0x29e4970()*-0.757067);
}

double NNfunction_ss_uLdR::synapse0x29eb5d0() {
   return (neuron0x29e4cb0()*-0.0367728);
}

double NNfunction_ss_uLdR::synapse0x29eb610() {
   return (neuron0x29e4ff0()*-0.104032);
}

double NNfunction_ss_uLdR::synapse0x29eb650() {
   return (neuron0x29e5330()*0.00620043);
}

double NNfunction_ss_uLdR::synapse0x29eb690() {
   return (neuron0x29e5670()*0.0278821);
}

double NNfunction_ss_uLdR::synapse0x29eb120() {
   return (neuron0x29e59b0()*0.0837747);
}

double NNfunction_ss_uLdR::synapse0x29eb160() {
   return (neuron0x29e5f10()*-0.565594);
}

double NNfunction_ss_uLdR::synapse0x29eb7e0() {
   return (neuron0x29e6130()*0.110974);
}

double NNfunction_ss_uLdR::synapse0x29eb820() {
   return (neuron0x29e6470()*-0.0273896);
}

double NNfunction_ss_uLdR::synapse0x29eb860() {
   return (neuron0x29e67b0()*-0.0234959);
}

double NNfunction_ss_uLdR::synapse0x29eb8a0() {
   return (neuron0x29e6af0()*-0.019408);
}

double NNfunction_ss_uLdR::synapse0x29eb8e0() {
   return (neuron0x29e6e30()*-0.0486941);
}

double NNfunction_ss_uLdR::synapse0x29eb920() {
   return (neuron0x29e7170()*-0.0400798);
}

double NNfunction_ss_uLdR::synapse0x29ebca0() {
   return (neuron0x29e25b0()*0.142488);
}

double NNfunction_ss_uLdR::synapse0x29ebce0() {
   return (neuron0x29e28f0()*0.00167265);
}

double NNfunction_ss_uLdR::synapse0x29ebd20() {
   return (neuron0x29e2c30()*0.45907);
}

double NNfunction_ss_uLdR::synapse0x29ebd60() {
   return (neuron0x29e2f70()*-0.651666);
}

double NNfunction_ss_uLdR::synapse0x29ebda0() {
   return (neuron0x29e32b0()*0.145207);
}

double NNfunction_ss_uLdR::synapse0x29ebde0() {
   return (neuron0x29e35f0()*-0.251014);
}

double NNfunction_ss_uLdR::synapse0x29ebe20() {
   return (neuron0x29e3930()*0.0519248);
}

double NNfunction_ss_uLdR::synapse0x29ebe60() {
   return (neuron0x29e3c70()*0.248676);
}

double NNfunction_ss_uLdR::synapse0x29ebea0() {
   return (neuron0x29e3fb0()*0.105034);
}

double NNfunction_ss_uLdR::synapse0x29ebee0() {
   return (neuron0x29e42f0()*0.0617295);
}

double NNfunction_ss_uLdR::synapse0x29ebf20() {
   return (neuron0x29e4630()*-0.050289);
}

double NNfunction_ss_uLdR::synapse0x29ebf60() {
   return (neuron0x29e4970()*0.281541);
}

double NNfunction_ss_uLdR::synapse0x29ebfa0() {
   return (neuron0x29e4cb0()*0.0541977);
}

double NNfunction_ss_uLdR::synapse0x29ebfe0() {
   return (neuron0x29e4ff0()*-0.0159641);
}

double NNfunction_ss_uLdR::synapse0x29ec020() {
   return (neuron0x29e5330()*-0.0701847);
}

double NNfunction_ss_uLdR::synapse0x29ec060() {
   return (neuron0x29e5670()*0.0275401);
}

double NNfunction_ss_uLdR::synapse0x29ebaf0() {
   return (neuron0x29e59b0()*-0.0318188);
}

double NNfunction_ss_uLdR::synapse0x29ebb30() {
   return (neuron0x29e5f10()*0.238091);
}

double NNfunction_ss_uLdR::synapse0x29ec1b0() {
   return (neuron0x29e6130()*-0.0146533);
}

double NNfunction_ss_uLdR::synapse0x29ec1f0() {
   return (neuron0x29e6470()*-0.100948);
}

double NNfunction_ss_uLdR::synapse0x29ec230() {
   return (neuron0x29e67b0()*-0.0143089);
}

double NNfunction_ss_uLdR::synapse0x29ec270() {
   return (neuron0x29e6af0()*-0.1248);
}

double NNfunction_ss_uLdR::synapse0x29ec2b0() {
   return (neuron0x29e6e30()*-0.0598736);
}

double NNfunction_ss_uLdR::synapse0x29ec2f0() {
   return (neuron0x29e7170()*-0.131284);
}

double NNfunction_ss_uLdR::synapse0x29e5e00() {
   return (neuron0x29e25b0()*0.0763552);
}

double NNfunction_ss_uLdR::synapse0x29e5e40() {
   return (neuron0x29e28f0()*-0.649093);
}

double NNfunction_ss_uLdR::synapse0x29e5e80() {
   return (neuron0x29e2c30()*0.275907);
}

double NNfunction_ss_uLdR::synapse0x29e5ec0() {
   return (neuron0x29e2f70()*0.265702);
}

double NNfunction_ss_uLdR::synapse0x29ec880() {
   return (neuron0x29e32b0()*0.498437);
}

double NNfunction_ss_uLdR::synapse0x29ec8c0() {
   return (neuron0x29e35f0()*-0.300779);
}

double NNfunction_ss_uLdR::synapse0x29ec900() {
   return (neuron0x29e3930()*0.269727);
}

double NNfunction_ss_uLdR::synapse0x29ec940() {
   return (neuron0x29e3c70()*-0.35148);
}

double NNfunction_ss_uLdR::synapse0x29ec980() {
   return (neuron0x29e3fb0()*-1.08257);
}

double NNfunction_ss_uLdR::synapse0x29ec9c0() {
   return (neuron0x29e42f0()*0.203756);
}

double NNfunction_ss_uLdR::synapse0x29eca00() {
   return (neuron0x29e4630()*-0.211331);
}

double NNfunction_ss_uLdR::synapse0x29eca40() {
   return (neuron0x29e4970()*0.526236);
}

double NNfunction_ss_uLdR::synapse0x29eca80() {
   return (neuron0x29e4cb0()*0.548685);
}

double NNfunction_ss_uLdR::synapse0x29ecac0() {
   return (neuron0x29e4ff0()*0.00932179);
}

double NNfunction_ss_uLdR::synapse0x29ecb00() {
   return (neuron0x29e5330()*0.835888);
}

double NNfunction_ss_uLdR::synapse0x29ecb40() {
   return (neuron0x29e5670()*-1.27592);
}

double NNfunction_ss_uLdR::synapse0x29ec4c0() {
   return (neuron0x29e59b0()*-0.337407);
}

double NNfunction_ss_uLdR::synapse0x29ec500() {
   return (neuron0x29e5f10()*0.187879);
}

double NNfunction_ss_uLdR::synapse0x29ecc90() {
   return (neuron0x29e6130()*-0.413345);
}

double NNfunction_ss_uLdR::synapse0x29eccd0() {
   return (neuron0x29e6470()*-0.198618);
}

double NNfunction_ss_uLdR::synapse0x29ecd10() {
   return (neuron0x29e67b0()*0.0850843);
}

double NNfunction_ss_uLdR::synapse0x29ecd50() {
   return (neuron0x29e6af0()*-0.279968);
}

double NNfunction_ss_uLdR::synapse0x29ecd90() {
   return (neuron0x29e6e30()*0.262694);
}

double NNfunction_ss_uLdR::synapse0x29ecdd0() {
   return (neuron0x29e7170()*0.297775);
}

double NNfunction_ss_uLdR::synapse0x29ed150() {
   return (neuron0x29e25b0()*-0.0516687);
}

double NNfunction_ss_uLdR::synapse0x29ed190() {
   return (neuron0x29e28f0()*-0.23037);
}

double NNfunction_ss_uLdR::synapse0x29ed1d0() {
   return (neuron0x29e2c30()*1.02653);
}

double NNfunction_ss_uLdR::synapse0x29ed210() {
   return (neuron0x29e2f70()*-0.16739);
}

double NNfunction_ss_uLdR::synapse0x29ed250() {
   return (neuron0x29e32b0()*-0.237123);
}

double NNfunction_ss_uLdR::synapse0x29ed290() {
   return (neuron0x29e35f0()*0.533809);
}

double NNfunction_ss_uLdR::synapse0x29ed2d0() {
   return (neuron0x29e3930()*0.304084);
}

double NNfunction_ss_uLdR::synapse0x29ed310() {
   return (neuron0x29e3c70()*-0.00282504);
}

double NNfunction_ss_uLdR::synapse0x29ed350() {
   return (neuron0x29e3fb0()*0.488005);
}

double NNfunction_ss_uLdR::synapse0x29ed390() {
   return (neuron0x29e42f0()*-0.0257104);
}

double NNfunction_ss_uLdR::synapse0x29ed3d0() {
   return (neuron0x29e4630()*-0.079799);
}

double NNfunction_ss_uLdR::synapse0x29ed410() {
   return (neuron0x29e4970()*-1.39752);
}

double NNfunction_ss_uLdR::synapse0x29ed450() {
   return (neuron0x29e4cb0()*-0.229672);
}

double NNfunction_ss_uLdR::synapse0x29ed490() {
   return (neuron0x29e4ff0()*0.0219768);
}

double NNfunction_ss_uLdR::synapse0x29ed4d0() {
   return (neuron0x29e5330()*0.269449);
}

double NNfunction_ss_uLdR::synapse0x29ed510() {
   return (neuron0x29e5670()*-0.185026);
}

double NNfunction_ss_uLdR::synapse0x29ecfa0() {
   return (neuron0x29e59b0()*0.552058);
}

double NNfunction_ss_uLdR::synapse0x29ecfe0() {
   return (neuron0x29e5f10()*-1.66609);
}

double NNfunction_ss_uLdR::synapse0x29ed660() {
   return (neuron0x29e6130()*0.212383);
}

double NNfunction_ss_uLdR::synapse0x29ed6a0() {
   return (neuron0x29e6470()*1.20281);
}

double NNfunction_ss_uLdR::synapse0x29ed6e0() {
   return (neuron0x29e67b0()*-0.860537);
}

double NNfunction_ss_uLdR::synapse0x29ed720() {
   return (neuron0x29e6af0()*-0.236121);
}

double NNfunction_ss_uLdR::synapse0x29ed760() {
   return (neuron0x29e6e30()*0.646107);
}

double NNfunction_ss_uLdR::synapse0x29ed7a0() {
   return (neuron0x29e7170()*0.0600835);
}

double NNfunction_ss_uLdR::synapse0x29edb20() {
   return (neuron0x29e25b0()*-0.00184073);
}

double NNfunction_ss_uLdR::synapse0x29edb60() {
   return (neuron0x29e28f0()*0.0234807);
}

double NNfunction_ss_uLdR::synapse0x29edba0() {
   return (neuron0x29e2c30()*0.0497165);
}

double NNfunction_ss_uLdR::synapse0x29edbe0() {
   return (neuron0x29e2f70()*4.31892);
}

double NNfunction_ss_uLdR::synapse0x29edc20() {
   return (neuron0x29e32b0()*-0.0703619);
}

double NNfunction_ss_uLdR::synapse0x29edc60() {
   return (neuron0x29e35f0()*0.0265428);
}

double NNfunction_ss_uLdR::synapse0x29edca0() {
   return (neuron0x29e3930()*0.0122636);
}

double NNfunction_ss_uLdR::synapse0x29edce0() {
   return (neuron0x29e3c70()*0.0133278);
}

double NNfunction_ss_uLdR::synapse0x29edd20() {
   return (neuron0x29e3fb0()*0.0410641);
}

double NNfunction_ss_uLdR::synapse0x29edd60() {
   return (neuron0x29e42f0()*0.0377123);
}

double NNfunction_ss_uLdR::synapse0x29edda0() {
   return (neuron0x29e4630()*0.0536527);
}

double NNfunction_ss_uLdR::synapse0x29edde0() {
   return (neuron0x29e4970()*-1.39708);
}

double NNfunction_ss_uLdR::synapse0x29ede20() {
   return (neuron0x29e4cb0()*0.0339049);
}

double NNfunction_ss_uLdR::synapse0x29ede60() {
   return (neuron0x29e4ff0()*0.00972547);
}

double NNfunction_ss_uLdR::synapse0x29edea0() {
   return (neuron0x29e5330()*0.00466287);
}

double NNfunction_ss_uLdR::synapse0x29edee0() {
   return (neuron0x29e5670()*0.000847205);
}

double NNfunction_ss_uLdR::synapse0x29ed970() {
   return (neuron0x29e59b0()*-0.0381759);
}

double NNfunction_ss_uLdR::synapse0x29ed9b0() {
   return (neuron0x29e5f10()*0.912122);
}

double NNfunction_ss_uLdR::synapse0x29ea740() {
   return (neuron0x29e6130()*-0.0229851);
}

double NNfunction_ss_uLdR::synapse0x29ea780() {
   return (neuron0x29e6470()*0.0148786);
}

double NNfunction_ss_uLdR::synapse0x29ea7c0() {
   return (neuron0x29e67b0()*0.0786548);
}

double NNfunction_ss_uLdR::synapse0x29ea800() {
   return (neuron0x29e6af0()*0.0295417);
}

double NNfunction_ss_uLdR::synapse0x29ea840() {
   return (neuron0x29e6e30()*-0.0505555);
}

double NNfunction_ss_uLdR::synapse0x29ea880() {
   return (neuron0x29e7170()*-0.0265838);
}

double NNfunction_ss_uLdR::synapse0x29eac00() {
   return (neuron0x29e25b0()*-0.00591628);
}

double NNfunction_ss_uLdR::synapse0x29eac40() {
   return (neuron0x29e28f0()*0.051422);
}

double NNfunction_ss_uLdR::synapse0x29eac80() {
   return (neuron0x29e2c30()*0.785324);
}

double NNfunction_ss_uLdR::synapse0x29eacc0() {
   return (neuron0x29e2f70()*0.593633);
}

double NNfunction_ss_uLdR::synapse0x29ead00() {
   return (neuron0x29e32b0()*-0.243119);
}

double NNfunction_ss_uLdR::synapse0x29ead40() {
   return (neuron0x29e35f0()*0.219007);
}

double NNfunction_ss_uLdR::synapse0x29ead80() {
   return (neuron0x29e3930()*0.229686);
}

double NNfunction_ss_uLdR::synapse0x29eadc0() {
   return (neuron0x29e3c70()*-0.290957);
}

double NNfunction_ss_uLdR::synapse0x29eae00() {
   return (neuron0x29e3fb0()*0.0356899);
}

double NNfunction_ss_uLdR::synapse0x29eae40() {
   return (neuron0x29e42f0()*0.0875903);
}

double NNfunction_ss_uLdR::synapse0x29eae80() {
   return (neuron0x29e4630()*-0.151764);
}

double NNfunction_ss_uLdR::synapse0x29eaec0() {
   return (neuron0x29e4970()*-0.29142);
}

double NNfunction_ss_uLdR::synapse0x29eaf00() {
   return (neuron0x29e4cb0()*-0.189161);
}

double NNfunction_ss_uLdR::synapse0x29ef040() {
   return (neuron0x29e4ff0()*-0.0590508);
}

double NNfunction_ss_uLdR::synapse0x29ef080() {
   return (neuron0x29e5330()*0.0179521);
}

double NNfunction_ss_uLdR::synapse0x29ef0c0() {
   return (neuron0x29e5670()*-0.0444602);
}

double NNfunction_ss_uLdR::synapse0x29eaa50() {
   return (neuron0x29e59b0()*0.118452);
}

double NNfunction_ss_uLdR::synapse0x29eaa90() {
   return (neuron0x29e5f10()*0.0450201);
}

double NNfunction_ss_uLdR::synapse0x29ef210() {
   return (neuron0x29e6130()*0.387035);
}

double NNfunction_ss_uLdR::synapse0x29ef250() {
   return (neuron0x29e6470()*0.54435);
}

double NNfunction_ss_uLdR::synapse0x29ef290() {
   return (neuron0x29e67b0()*-0.545684);
}

double NNfunction_ss_uLdR::synapse0x29ef2d0() {
   return (neuron0x29e6af0()*-0.140687);
}

double NNfunction_ss_uLdR::synapse0x29ef310() {
   return (neuron0x29e6e30()*0.268354);
}

double NNfunction_ss_uLdR::synapse0x29ef350() {
   return (neuron0x29e7170()*0.289794);
}

double NNfunction_ss_uLdR::synapse0x29ef6d0() {
   return (neuron0x29e25b0()*0.0460379);
}

double NNfunction_ss_uLdR::synapse0x29ef710() {
   return (neuron0x29e28f0()*-0.00362452);
}

double NNfunction_ss_uLdR::synapse0x29ef750() {
   return (neuron0x29e2c30()*-0.156516);
}

double NNfunction_ss_uLdR::synapse0x29ef790() {
   return (neuron0x29e2f70()*-0.522299);
}

double NNfunction_ss_uLdR::synapse0x29ef7d0() {
   return (neuron0x29e32b0()*0.198861);
}

double NNfunction_ss_uLdR::synapse0x29ef810() {
   return (neuron0x29e35f0()*0.389473);
}

double NNfunction_ss_uLdR::synapse0x29ef850() {
   return (neuron0x29e3930()*0.245783);
}

double NNfunction_ss_uLdR::synapse0x29ef890() {
   return (neuron0x29e3c70()*-0.129561);
}

double NNfunction_ss_uLdR::synapse0x29ef8d0() {
   return (neuron0x29e3fb0()*0.263388);
}

double NNfunction_ss_uLdR::synapse0x29ef910() {
   return (neuron0x29e42f0()*-0.00856699);
}

double NNfunction_ss_uLdR::synapse0x29ef950() {
   return (neuron0x29e4630()*-0.125196);
}

double NNfunction_ss_uLdR::synapse0x29ef990() {
   return (neuron0x29e4970()*0.0247581);
}

double NNfunction_ss_uLdR::synapse0x29ef9d0() {
   return (neuron0x29e4cb0()*0.1818);
}

double NNfunction_ss_uLdR::synapse0x29efa10() {
   return (neuron0x29e4ff0()*0.130093);
}

double NNfunction_ss_uLdR::synapse0x29efa50() {
   return (neuron0x29e5330()*0.251984);
}

double NNfunction_ss_uLdR::synapse0x29efa90() {
   return (neuron0x29e5670()*-0.284819);
}

double NNfunction_ss_uLdR::synapse0x29ef520() {
   return (neuron0x29e59b0()*-0.111693);
}

double NNfunction_ss_uLdR::synapse0x29ef560() {
   return (neuron0x29e5f10()*-0.170389);
}

double NNfunction_ss_uLdR::synapse0x29efbe0() {
   return (neuron0x29e6130()*-0.0858488);
}

double NNfunction_ss_uLdR::synapse0x29efc20() {
   return (neuron0x29e6470()*0.0702674);
}

double NNfunction_ss_uLdR::synapse0x29efc60() {
   return (neuron0x29e67b0()*-0.00893119);
}

double NNfunction_ss_uLdR::synapse0x29efca0() {
   return (neuron0x29e6af0()*-0.183045);
}

double NNfunction_ss_uLdR::synapse0x29efce0() {
   return (neuron0x29e6e30()*0.185239);
}

double NNfunction_ss_uLdR::synapse0x29efd20() {
   return (neuron0x29e7170()*0.19098);
}

double NNfunction_ss_uLdR::synapse0x29f00a0() {
   return (neuron0x29e25b0()*0.172643);
}

double NNfunction_ss_uLdR::synapse0x29f00e0() {
   return (neuron0x29e28f0()*-0.00624485);
}

double NNfunction_ss_uLdR::synapse0x29f0120() {
   return (neuron0x29e2c30()*-0.607713);
}

double NNfunction_ss_uLdR::synapse0x29f0160() {
   return (neuron0x29e2f70()*0.100629);
}

double NNfunction_ss_uLdR::synapse0x29f01a0() {
   return (neuron0x29e32b0()*0.00766918);
}

double NNfunction_ss_uLdR::synapse0x29f01e0() {
   return (neuron0x29e35f0()*-0.590094);
}

double NNfunction_ss_uLdR::synapse0x29f0220() {
   return (neuron0x29e3930()*-0.513328);
}

double NNfunction_ss_uLdR::synapse0x29f0260() {
   return (neuron0x29e3c70()*-0.271432);
}

double NNfunction_ss_uLdR::synapse0x29f02a0() {
   return (neuron0x29e3fb0()*0.912816);
}

double NNfunction_ss_uLdR::synapse0x29f02e0() {
   return (neuron0x29e42f0()*-0.0608615);
}

double NNfunction_ss_uLdR::synapse0x29f0320() {
   return (neuron0x29e4630()*-0.316525);
}

double NNfunction_ss_uLdR::synapse0x29f0360() {
   return (neuron0x29e4970()*0.998406);
}

double NNfunction_ss_uLdR::synapse0x29f03a0() {
   return (neuron0x29e4cb0()*0.333328);
}

double NNfunction_ss_uLdR::synapse0x29f03e0() {
   return (neuron0x29e4ff0()*0.0200592);
}

double NNfunction_ss_uLdR::synapse0x29f0420() {
   return (neuron0x29e5330()*-0.302195);
}

double NNfunction_ss_uLdR::synapse0x29f0460() {
   return (neuron0x29e5670()*0.039706);
}

double NNfunction_ss_uLdR::synapse0x29efef0() {
   return (neuron0x29e59b0()*0.373881);
}

double NNfunction_ss_uLdR::synapse0x29eff30() {
   return (neuron0x29e5f10()*-0.45676);
}

double NNfunction_ss_uLdR::synapse0x29f05b0() {
   return (neuron0x29e6130()*0.212113);
}

double NNfunction_ss_uLdR::synapse0x29f05f0() {
   return (neuron0x29e6470()*-0.0206668);
}

double NNfunction_ss_uLdR::synapse0x29f0630() {
   return (neuron0x29e67b0()*0.201182);
}

double NNfunction_ss_uLdR::synapse0x29f0670() {
   return (neuron0x29e6af0()*0.0786378);
}

double NNfunction_ss_uLdR::synapse0x29f06b0() {
   return (neuron0x29e6e30()*0.140967);
}

double NNfunction_ss_uLdR::synapse0x29f06f0() {
   return (neuron0x29e7170()*-0.244978);
}

double NNfunction_ss_uLdR::synapse0x29f0a70() {
   return (neuron0x29e25b0()*0.0134418);
}

double NNfunction_ss_uLdR::synapse0x29f0ab0() {
   return (neuron0x29e28f0()*-0.117646);
}

double NNfunction_ss_uLdR::synapse0x29f0af0() {
   return (neuron0x29e2c30()*0.594404);
}

double NNfunction_ss_uLdR::synapse0x29f0b30() {
   return (neuron0x29e2f70()*-0.591124);
}

double NNfunction_ss_uLdR::synapse0x29f0b70() {
   return (neuron0x29e32b0()*-0.36878);
}

double NNfunction_ss_uLdR::synapse0x29f0bb0() {
   return (neuron0x29e35f0()*0.862113);
}

double NNfunction_ss_uLdR::synapse0x29f0bf0() {
   return (neuron0x29e3930()*0.666574);
}

double NNfunction_ss_uLdR::synapse0x29f0c30() {
   return (neuron0x29e3c70()*-0.220613);
}

double NNfunction_ss_uLdR::synapse0x29f0c70() {
   return (neuron0x29e3fb0()*0.137124);
}

double NNfunction_ss_uLdR::synapse0x29f0cb0() {
   return (neuron0x29e42f0()*0.492193);
}

double NNfunction_ss_uLdR::synapse0x29f0cf0() {
   return (neuron0x29e4630()*0.219596);
}

double NNfunction_ss_uLdR::synapse0x29f0d30() {
   return (neuron0x29e4970()*-0.25944);
}

double NNfunction_ss_uLdR::synapse0x29f0d70() {
   return (neuron0x29e4cb0()*0.352142);
}

double NNfunction_ss_uLdR::synapse0x29f0db0() {
   return (neuron0x29e4ff0()*-0.362774);
}

double NNfunction_ss_uLdR::synapse0x29f0df0() {
   return (neuron0x29e5330()*0.121288);
}

double NNfunction_ss_uLdR::synapse0x29f0e30() {
   return (neuron0x29e5670()*-0.324488);
}

double NNfunction_ss_uLdR::synapse0x29f08c0() {
   return (neuron0x29e59b0()*-0.374235);
}

double NNfunction_ss_uLdR::synapse0x29f0900() {
   return (neuron0x29e5f10()*-0.610155);
}

double NNfunction_ss_uLdR::synapse0x29f0f80() {
   return (neuron0x29e6130()*-0.152616);
}

double NNfunction_ss_uLdR::synapse0x29f0fc0() {
   return (neuron0x29e6470()*-0.225174);
}

double NNfunction_ss_uLdR::synapse0x29f1000() {
   return (neuron0x29e67b0()*0.0115191);
}

double NNfunction_ss_uLdR::synapse0x29f1040() {
   return (neuron0x29e6af0()*0.077538);
}

double NNfunction_ss_uLdR::synapse0x29f1080() {
   return (neuron0x29e6e30()*-0.0856088);
}

double NNfunction_ss_uLdR::synapse0x29f10c0() {
   return (neuron0x29e7170()*-0.0751942);
}

double NNfunction_ss_uLdR::synapse0x29f1440() {
   return (neuron0x29e25b0()*-0.0688805);
}

double NNfunction_ss_uLdR::synapse0x29e27d0() {
   return (neuron0x29e28f0()*-0.549738);
}

double NNfunction_ss_uLdR::synapse0x29e2810() {
   return (neuron0x29e2c30()*-0.127949);
}

double NNfunction_ss_uLdR::synapse0x29e2b10() {
   return (neuron0x29e2f70()*2.24245);
}

double NNfunction_ss_uLdR::synapse0x29e2b50() {
   return (neuron0x29e32b0()*-0.0857151);
}

double NNfunction_ss_uLdR::synapse0x29e2e50() {
   return (neuron0x29e35f0()*0.621577);
}

double NNfunction_ss_uLdR::synapse0x29e2e90() {
   return (neuron0x29e3930()*-0.265521);
}

double NNfunction_ss_uLdR::synapse0x29e3190() {
   return (neuron0x29e3c70()*-0.0650901);
}

double NNfunction_ss_uLdR::synapse0x29e31d0() {
   return (neuron0x29e3fb0()*-1.73887);
}

double NNfunction_ss_uLdR::synapse0x29e34d0() {
   return (neuron0x29e42f0()*-1.13935);
}

double NNfunction_ss_uLdR::synapse0x29e3510() {
   return (neuron0x29e4630()*-0.418092);
}

double NNfunction_ss_uLdR::synapse0x29e3810() {
   return (neuron0x29e4970()*0.615747);
}

double NNfunction_ss_uLdR::synapse0x29e3850() {
   return (neuron0x29e4cb0()*0.343603);
}

double NNfunction_ss_uLdR::synapse0x29e3b50() {
   return (neuron0x29e4ff0()*0.598833);
}

double NNfunction_ss_uLdR::synapse0x29e3b90() {
   return (neuron0x29e5330()*0.124395);
}

double NNfunction_ss_uLdR::synapse0x29e3e90() {
   return (neuron0x29e5670()*-0.19013);
}

double NNfunction_ss_uLdR::synapse0x29e3ed0() {
   return (neuron0x29e59b0()*-0.221645);
}

double NNfunction_ss_uLdR::synapse0x29e41d0() {
   return (neuron0x29e5f10()*0.619665);
}

double NNfunction_ss_uLdR::synapse0x29e4210() {
   return (neuron0x29e6130()*0.582677);
}

double NNfunction_ss_uLdR::synapse0x29e4510() {
   return (neuron0x29e6470()*0.249766);
}

double NNfunction_ss_uLdR::synapse0x29e4550() {
   return (neuron0x29e67b0()*-0.452393);
}

double NNfunction_ss_uLdR::synapse0x29e4850() {
   return (neuron0x29e6af0()*0.0175543);
}

double NNfunction_ss_uLdR::synapse0x29e4890() {
   return (neuron0x29e6e30()*0.345794);
}

double NNfunction_ss_uLdR::synapse0x29e4b90() {
   return (neuron0x29e7170()*0.066814);
}

double NNfunction_ss_uLdR::synapse0x29e4bd0() {
   return (neuron0x29e25b0()*-0.0971589);
}

double NNfunction_ss_uLdR::synapse0x29e5890() {
   return (neuron0x29e28f0()*0.289273);
}

double NNfunction_ss_uLdR::synapse0x29e58d0() {
   return (neuron0x29e2c30()*-1.07255);
}

double NNfunction_ss_uLdR::synapse0x29f1290() {
   return (neuron0x29e2f70()*0.638466);
}

double NNfunction_ss_uLdR::synapse0x29f12d0() {
   return (neuron0x29e32b0()*-0.542803);
}

double NNfunction_ss_uLdR::synapse0x29e5bd0() {
   return (neuron0x29e35f0()*0.219177);
}

double NNfunction_ss_uLdR::synapse0x29e5c10() {
   return (neuron0x29e3930()*-0.517568);
}

double NNfunction_ss_uLdR::synapse0x279d680() {
   return (neuron0x29e3c70()*-0.959702);
}

double NNfunction_ss_uLdR::synapse0x279d6c0() {
   return (neuron0x29e3fb0()*0.395885);
}

double NNfunction_ss_uLdR::synapse0x29e6350() {
   return (neuron0x29e42f0()*-0.238215);
}

double NNfunction_ss_uLdR::synapse0x29e6390() {
   return (neuron0x29e4630()*0.0529609);
}

double NNfunction_ss_uLdR::synapse0x29e6690() {
   return (neuron0x29e4970()*0.239204);
}

double NNfunction_ss_uLdR::synapse0x29e66d0() {
   return (neuron0x29e4cb0()*-0.190854);
}

double NNfunction_ss_uLdR::synapse0x29e69d0() {
   return (neuron0x29e4ff0()*0.162071);
}

double NNfunction_ss_uLdR::synapse0x29e6a10() {
   return (neuron0x29e5330()*0.341187);
}

double NNfunction_ss_uLdR::synapse0x29e6d10() {
   return (neuron0x29e5670()*-0.648744);
}

double NNfunction_ss_uLdR::synapse0x29e6d50() {
   return (neuron0x29e59b0()*-0.0759385);
}

double NNfunction_ss_uLdR::synapse0x29e7050() {
   return (neuron0x29e5f10()*0.271031);
}

double NNfunction_ss_uLdR::synapse0x29e7090() {
   return (neuron0x29e6130()*0.358823);
}

double NNfunction_ss_uLdR::synapse0x29e7390() {
   return (neuron0x29e6470()*0.187887);
}

double NNfunction_ss_uLdR::synapse0x29e73d0() {
   return (neuron0x29e67b0()*-0.115238);
}

double NNfunction_ss_uLdR::synapse0x29e4ed0() {
   return (neuron0x29e6af0()*0.16136);
}

double NNfunction_ss_uLdR::synapse0x29e4f10() {
   return (neuron0x29e6e30()*-0.0253656);
}

double NNfunction_ss_uLdR::synapse0x29f31b0() {
   return (neuron0x29e7170()*-0.265198);
}

double NNfunction_ss_uLdR::synapse0x29f3530() {
   return (neuron0x29e25b0()*-0.141433);
}

double NNfunction_ss_uLdR::synapse0x29f3570() {
   return (neuron0x29e28f0()*-0.378106);
}

double NNfunction_ss_uLdR::synapse0x29f35b0() {
   return (neuron0x29e2c30()*0.0210027);
}

double NNfunction_ss_uLdR::synapse0x29f35f0() {
   return (neuron0x29e2f70()*0.111636);
}

double NNfunction_ss_uLdR::synapse0x29f3630() {
   return (neuron0x29e32b0()*-0.195469);
}

double NNfunction_ss_uLdR::synapse0x29f3670() {
   return (neuron0x29e35f0()*0.640921);
}

double NNfunction_ss_uLdR::synapse0x29f36b0() {
   return (neuron0x29e3930()*-0.442501);
}

double NNfunction_ss_uLdR::synapse0x29f36f0() {
   return (neuron0x29e3c70()*-0.774178);
}

double NNfunction_ss_uLdR::synapse0x29f3730() {
   return (neuron0x29e3fb0()*-0.296265);
}

double NNfunction_ss_uLdR::synapse0x29f3770() {
   return (neuron0x29e42f0()*0.616927);
}

double NNfunction_ss_uLdR::synapse0x29f37b0() {
   return (neuron0x29e4630()*0.300879);
}

double NNfunction_ss_uLdR::synapse0x29f37f0() {
   return (neuron0x29e4970()*-0.224957);
}

double NNfunction_ss_uLdR::synapse0x29f3830() {
   return (neuron0x29e4cb0()*0.850612);
}

double NNfunction_ss_uLdR::synapse0x29f3870() {
   return (neuron0x29e4ff0()*-0.743595);
}

double NNfunction_ss_uLdR::synapse0x29f38b0() {
   return (neuron0x29e5330()*-0.89381);
}

double NNfunction_ss_uLdR::synapse0x29f38f0() {
   return (neuron0x29e5670()*-0.242691);
}

double NNfunction_ss_uLdR::synapse0x29f3380() {
   return (neuron0x29e59b0()*0.860409);
}

double NNfunction_ss_uLdR::synapse0x29f33c0() {
   return (neuron0x29e5f10()*0.617173);
}

double NNfunction_ss_uLdR::synapse0x29f3a40() {
   return (neuron0x29e6130()*1.01064);
}

double NNfunction_ss_uLdR::synapse0x29f3a80() {
   return (neuron0x29e6470()*-0.0236419);
}

double NNfunction_ss_uLdR::synapse0x29f3ac0() {
   return (neuron0x29e67b0()*0.227925);
}

double NNfunction_ss_uLdR::synapse0x29f3b00() {
   return (neuron0x29e6af0()*0.399804);
}

double NNfunction_ss_uLdR::synapse0x29f3b40() {
   return (neuron0x29e6e30()*-0.437713);
}

double NNfunction_ss_uLdR::synapse0x29f3b80() {
   return (neuron0x29e7170()*-0.0825484);
}

double NNfunction_ss_uLdR::synapse0x29f3f00() {
   return (neuron0x29e25b0()*-0.0406839);
}

double NNfunction_ss_uLdR::synapse0x29f3f40() {
   return (neuron0x29e28f0()*0.0193774);
}

double NNfunction_ss_uLdR::synapse0x29f3f80() {
   return (neuron0x29e2c30()*0.0123244);
}

double NNfunction_ss_uLdR::synapse0x29f3fc0() {
   return (neuron0x29e2f70()*4.35704);
}

double NNfunction_ss_uLdR::synapse0x29f4000() {
   return (neuron0x29e32b0()*-0.00158156);
}

double NNfunction_ss_uLdR::synapse0x29f4040() {
   return (neuron0x29e35f0()*0.0173421);
}

double NNfunction_ss_uLdR::synapse0x29f4080() {
   return (neuron0x29e3930()*0.0424707);
}

double NNfunction_ss_uLdR::synapse0x29f40c0() {
   return (neuron0x29e3c70()*-0.0419411);
}

double NNfunction_ss_uLdR::synapse0x29f4100() {
   return (neuron0x29e3fb0()*-0.0457486);
}

double NNfunction_ss_uLdR::synapse0x29f4140() {
   return (neuron0x29e42f0()*-0.000895944);
}

double NNfunction_ss_uLdR::synapse0x29f4180() {
   return (neuron0x29e4630()*-0.00862288);
}

double NNfunction_ss_uLdR::synapse0x29f41c0() {
   return (neuron0x29e4970()*0.812853);
}

double NNfunction_ss_uLdR::synapse0x29f4200() {
   return (neuron0x29e4cb0()*-0.0270318);
}

double NNfunction_ss_uLdR::synapse0x29f4240() {
   return (neuron0x29e4ff0()*0.0108284);
}

double NNfunction_ss_uLdR::synapse0x29f4280() {
   return (neuron0x29e5330()*-0.0176832);
}

double NNfunction_ss_uLdR::synapse0x29f42c0() {
   return (neuron0x29e5670()*0.0278316);
}

double NNfunction_ss_uLdR::synapse0x29f3d50() {
   return (neuron0x29e59b0()*-0.00092428);
}

double NNfunction_ss_uLdR::synapse0x29f3d90() {
   return (neuron0x29e5f10()*-1.60754);
}

double NNfunction_ss_uLdR::synapse0x29f4410() {
   return (neuron0x29e6130()*-0.0698419);
}

double NNfunction_ss_uLdR::synapse0x29f4450() {
   return (neuron0x29e6470()*0.00778497);
}

double NNfunction_ss_uLdR::synapse0x29f4490() {
   return (neuron0x29e67b0()*0.0133899);
}

double NNfunction_ss_uLdR::synapse0x29f44d0() {
   return (neuron0x29e6af0()*0.0217357);
}

double NNfunction_ss_uLdR::synapse0x29f4510() {
   return (neuron0x29e6e30()*0.00426529);
}

double NNfunction_ss_uLdR::synapse0x29f4550() {
   return (neuron0x29e7170()*0.018031);
}

double NNfunction_ss_uLdR::synapse0x29f48d0() {
   return (neuron0x29e25b0()*-0.0880823);
}

double NNfunction_ss_uLdR::synapse0x29f4910() {
   return (neuron0x29e28f0()*0.436388);
}

double NNfunction_ss_uLdR::synapse0x29f4950() {
   return (neuron0x29e2c30()*0.0457624);
}

double NNfunction_ss_uLdR::synapse0x29f4990() {
   return (neuron0x29e2f70()*1.22497);
}

double NNfunction_ss_uLdR::synapse0x29f49d0() {
   return (neuron0x29e32b0()*0.105421);
}

double NNfunction_ss_uLdR::synapse0x29f4a10() {
   return (neuron0x29e35f0()*-0.184613);
}

double NNfunction_ss_uLdR::synapse0x29f4a50() {
   return (neuron0x29e3930()*-0.408549);
}

double NNfunction_ss_uLdR::synapse0x29f4a90() {
   return (neuron0x29e3c70()*-0.199414);
}

double NNfunction_ss_uLdR::synapse0x29f4ad0() {
   return (neuron0x29e3fb0()*-0.402982);
}

double NNfunction_ss_uLdR::synapse0x29f4b10() {
   return (neuron0x29e42f0()*1.05342);
}

double NNfunction_ss_uLdR::synapse0x29f4b50() {
   return (neuron0x29e4630()*-0.232572);
}

double NNfunction_ss_uLdR::synapse0x29f4b90() {
   return (neuron0x29e4970()*0.348768);
}

double NNfunction_ss_uLdR::synapse0x29f4bd0() {
   return (neuron0x29e4cb0()*-0.620172);
}

double NNfunction_ss_uLdR::synapse0x29f4c10() {
   return (neuron0x29e4ff0()*-1.2756);
}

double NNfunction_ss_uLdR::synapse0x29f4c50() {
   return (neuron0x29e5330()*-0.142184);
}

double NNfunction_ss_uLdR::synapse0x29f4c90() {
   return (neuron0x29e5670()*-0.112843);
}

double NNfunction_ss_uLdR::synapse0x29f4720() {
   return (neuron0x29e59b0()*0.181612);
}

double NNfunction_ss_uLdR::synapse0x29f4760() {
   return (neuron0x29e5f10()*1.49642);
}

double NNfunction_ss_uLdR::synapse0x29f4de0() {
   return (neuron0x29e6130()*0.204129);
}

double NNfunction_ss_uLdR::synapse0x29f4e20() {
   return (neuron0x29e6470()*-1.18221);
}

double NNfunction_ss_uLdR::synapse0x29f4e60() {
   return (neuron0x29e67b0()*0.529026);
}

double NNfunction_ss_uLdR::synapse0x29f4ea0() {
   return (neuron0x29e6af0()*0.0768681);
}

double NNfunction_ss_uLdR::synapse0x29f4ee0() {
   return (neuron0x29e6e30()*-0.490757);
}

double NNfunction_ss_uLdR::synapse0x29f4f20() {
   return (neuron0x29e7170()*-0.0126509);
}

double NNfunction_ss_uLdR::synapse0x29f52a0() {
   return (neuron0x29e25b0()*0.10913);
}

double NNfunction_ss_uLdR::synapse0x29f52e0() {
   return (neuron0x29e28f0()*0.273471);
}

double NNfunction_ss_uLdR::synapse0x29f5320() {
   return (neuron0x29e2c30()*0.000373377);
}

double NNfunction_ss_uLdR::synapse0x29f5360() {
   return (neuron0x29e2f70()*1.60995);
}

double NNfunction_ss_uLdR::synapse0x29f53a0() {
   return (neuron0x29e32b0()*0.197932);
}

double NNfunction_ss_uLdR::synapse0x29f53e0() {
   return (neuron0x29e35f0()*-0.22246);
}

double NNfunction_ss_uLdR::synapse0x29f5420() {
   return (neuron0x29e3930()*0.322266);
}

double NNfunction_ss_uLdR::synapse0x29f5460() {
   return (neuron0x29e3c70()*-0.150472);
}

double NNfunction_ss_uLdR::synapse0x29f54a0() {
   return (neuron0x29e3fb0()*0.528931);
}

double NNfunction_ss_uLdR::synapse0x29f54e0() {
   return (neuron0x29e42f0()*0.234541);
}

double NNfunction_ss_uLdR::synapse0x29f5520() {
   return (neuron0x29e4630()*0.399367);
}

double NNfunction_ss_uLdR::synapse0x29f5560() {
   return (neuron0x29e4970()*-0.580106);
}

double NNfunction_ss_uLdR::synapse0x29f55a0() {
   return (neuron0x29e4cb0()*0.729694);
}

double NNfunction_ss_uLdR::synapse0x29f55e0() {
   return (neuron0x29e4ff0()*-0.364078);
}

double NNfunction_ss_uLdR::synapse0x29f5620() {
   return (neuron0x29e5330()*-0.0426121);
}

double NNfunction_ss_uLdR::synapse0x29f5660() {
   return (neuron0x29e5670()*-0.297109);
}

double NNfunction_ss_uLdR::synapse0x29f50f0() {
   return (neuron0x29e59b0()*-0.189719);
}

double NNfunction_ss_uLdR::synapse0x29f5130() {
   return (neuron0x29e5f10()*-0.494136);
}

double NNfunction_ss_uLdR::synapse0x29f57b0() {
   return (neuron0x29e6130()*-0.939205);
}

double NNfunction_ss_uLdR::synapse0x29f57f0() {
   return (neuron0x29e6470()*0.186628);
}

double NNfunction_ss_uLdR::synapse0x29f5830() {
   return (neuron0x29e67b0()*0.635625);
}

double NNfunction_ss_uLdR::synapse0x29f5870() {
   return (neuron0x29e6af0()*-0.221837);
}

double NNfunction_ss_uLdR::synapse0x29f58b0() {
   return (neuron0x29e6e30()*0.0910951);
}

double NNfunction_ss_uLdR::synapse0x29f58f0() {
   return (neuron0x29e7170()*0.0845809);
}

double NNfunction_ss_uLdR::synapse0x29f5c70() {
   return (neuron0x29e25b0()*-0.0756748);
}

double NNfunction_ss_uLdR::synapse0x29f5cb0() {
   return (neuron0x29e28f0()*0.369699);
}

double NNfunction_ss_uLdR::synapse0x29f5cf0() {
   return (neuron0x29e2c30()*0.454692);
}

double NNfunction_ss_uLdR::synapse0x29f5d30() {
   return (neuron0x29e2f70()*-1.19828);
}

double NNfunction_ss_uLdR::synapse0x29f5d70() {
   return (neuron0x29e32b0()*-0.210534);
}

double NNfunction_ss_uLdR::synapse0x29f5db0() {
   return (neuron0x29e35f0()*0.320358);
}

double NNfunction_ss_uLdR::synapse0x29f5df0() {
   return (neuron0x29e3930()*0.193265);
}

double NNfunction_ss_uLdR::synapse0x29f5e30() {
   return (neuron0x29e3c70()*-0.162314);
}

double NNfunction_ss_uLdR::synapse0x29f5e70() {
   return (neuron0x29e3fb0()*-0.139547);
}

double NNfunction_ss_uLdR::synapse0x29ee030() {
   return (neuron0x29e42f0()*0.0626224);
}

double NNfunction_ss_uLdR::synapse0x29ee070() {
   return (neuron0x29e4630()*0.220512);
}

double NNfunction_ss_uLdR::synapse0x29ee0b0() {
   return (neuron0x29e4970()*0.932112);
}

double NNfunction_ss_uLdR::synapse0x29ee0f0() {
   return (neuron0x29e4cb0()*0.134375);
}

double NNfunction_ss_uLdR::synapse0x29ee130() {
   return (neuron0x29e4ff0()*0.45252);
}

double NNfunction_ss_uLdR::synapse0x29ee170() {
   return (neuron0x29e5330()*-0.0153329);
}

double NNfunction_ss_uLdR::synapse0x29ee1b0() {
   return (neuron0x29e5670()*-0.0447765);
}

double NNfunction_ss_uLdR::synapse0x29f5ac0() {
   return (neuron0x29e59b0()*-0.0977052);
}

double NNfunction_ss_uLdR::synapse0x29f5b00() {
   return (neuron0x29e5f10()*0.110563);
}

double NNfunction_ss_uLdR::synapse0x29ee300() {
   return (neuron0x29e6130()*-0.257946);
}

double NNfunction_ss_uLdR::synapse0x29ee340() {
   return (neuron0x29e6470()*0.0366042);
}

double NNfunction_ss_uLdR::synapse0x29ee380() {
   return (neuron0x29e67b0()*0.046338);
}

double NNfunction_ss_uLdR::synapse0x29ee3c0() {
   return (neuron0x29e6af0()*-0.133361);
}

double NNfunction_ss_uLdR::synapse0x29ee400() {
   return (neuron0x29e6e30()*0.174954);
}

double NNfunction_ss_uLdR::synapse0x29ee440() {
   return (neuron0x29e7170()*-0.0783589);
}

double NNfunction_ss_uLdR::synapse0x29ee7c0() {
   return (neuron0x29e25b0()*-0.0942556);
}

double NNfunction_ss_uLdR::synapse0x29ee800() {
   return (neuron0x29e28f0()*-0.180094);
}

double NNfunction_ss_uLdR::synapse0x29ee840() {
   return (neuron0x29e2c30()*-1.04757);
}

double NNfunction_ss_uLdR::synapse0x29ee880() {
   return (neuron0x29e2f70()*-0.00772727);
}

double NNfunction_ss_uLdR::synapse0x29ee8c0() {
   return (neuron0x29e32b0()*-0.12967);
}

double NNfunction_ss_uLdR::synapse0x29ee900() {
   return (neuron0x29e35f0()*-0.384419);
}

double NNfunction_ss_uLdR::synapse0x29ee940() {
   return (neuron0x29e3930()*-0.624957);
}

double NNfunction_ss_uLdR::synapse0x29ee980() {
   return (neuron0x29e3c70()*-0.389525);
}

double NNfunction_ss_uLdR::synapse0x29ee9c0() {
   return (neuron0x29e3fb0()*0.123091);
}

double NNfunction_ss_uLdR::synapse0x29eea00() {
   return (neuron0x29e42f0()*-0.144484);
}

double NNfunction_ss_uLdR::synapse0x29eea40() {
   return (neuron0x29e4630()*0.486084);
}

double NNfunction_ss_uLdR::synapse0x29eea80() {
   return (neuron0x29e4970()*-0.309443);
}

double NNfunction_ss_uLdR::synapse0x29eeac0() {
   return (neuron0x29e4cb0()*-0.487324);
}

double NNfunction_ss_uLdR::synapse0x29eeb00() {
   return (neuron0x29e4ff0()*0.701776);
}

double NNfunction_ss_uLdR::synapse0x29eeb40() {
   return (neuron0x29e5330()*0.898791);
}

double NNfunction_ss_uLdR::synapse0x29eeb80() {
   return (neuron0x29e5670()*0.58496);
}

double NNfunction_ss_uLdR::synapse0x29ee610() {
   return (neuron0x29e59b0()*-0.330889);
}

double NNfunction_ss_uLdR::synapse0x29ee650() {
   return (neuron0x29e5f10()*0.588621);
}

double NNfunction_ss_uLdR::synapse0x29eecd0() {
   return (neuron0x29e6130()*0.702771);
}

double NNfunction_ss_uLdR::synapse0x29eed10() {
   return (neuron0x29e6470()*0.0223168);
}

double NNfunction_ss_uLdR::synapse0x29eed50() {
   return (neuron0x29e67b0()*-0.76766);
}

double NNfunction_ss_uLdR::synapse0x29eed90() {
   return (neuron0x29e6af0()*0.599002);
}

double NNfunction_ss_uLdR::synapse0x29eedd0() {
   return (neuron0x29e6e30()*-0.0219797);
}

double NNfunction_ss_uLdR::synapse0x29eee10() {
   return (neuron0x29e7170()*-0.00237761);
}

double NNfunction_ss_uLdR::synapse0x29eefe0() {
   return (neuron0x29e25b0()*-0.061223);
}

double NNfunction_ss_uLdR::synapse0x29f8070() {
   return (neuron0x29e28f0()*0.0396901);
}

double NNfunction_ss_uLdR::synapse0x29f80b0() {
   return (neuron0x29e2c30()*-1.32479);
}

double NNfunction_ss_uLdR::synapse0x29f80f0() {
   return (neuron0x29e2f70()*0.160718);
}

double NNfunction_ss_uLdR::synapse0x29f8130() {
   return (neuron0x29e32b0()*-0.018615);
}

double NNfunction_ss_uLdR::synapse0x29f8170() {
   return (neuron0x29e35f0()*-0.0975238);
}

double NNfunction_ss_uLdR::synapse0x29f81b0() {
   return (neuron0x29e3930()*-0.0348106);
}

double NNfunction_ss_uLdR::synapse0x29f81f0() {
   return (neuron0x29e3c70()*-0.0938876);
}

double NNfunction_ss_uLdR::synapse0x29f8230() {
   return (neuron0x29e3fb0()*-0.180028);
}

double NNfunction_ss_uLdR::synapse0x29f8270() {
   return (neuron0x29e42f0()*0.0127595);
}

double NNfunction_ss_uLdR::synapse0x29f82b0() {
   return (neuron0x29e4630()*-0.17643);
}

double NNfunction_ss_uLdR::synapse0x29f82f0() {
   return (neuron0x29e4970()*0.270019);
}

double NNfunction_ss_uLdR::synapse0x29f8330() {
   return (neuron0x29e4cb0()*-0.0663773);
}

double NNfunction_ss_uLdR::synapse0x29f8370() {
   return (neuron0x29e4ff0()*-0.183701);
}

double NNfunction_ss_uLdR::synapse0x29f83b0() {
   return (neuron0x29e5330()*-0.37022);
}

double NNfunction_ss_uLdR::synapse0x29f83f0() {
   return (neuron0x29e5670()*-0.149718);
}

double NNfunction_ss_uLdR::synapse0x29f7ec0() {
   return (neuron0x29e59b0()*-0.137473);
}

double NNfunction_ss_uLdR::synapse0x29f7f00() {
   return (neuron0x29e5f10()*0.0562756);
}

double NNfunction_ss_uLdR::synapse0x29f8540() {
   return (neuron0x29e6130()*-0.125881);
}

double NNfunction_ss_uLdR::synapse0x29f8580() {
   return (neuron0x29e6470()*-0.144012);
}

double NNfunction_ss_uLdR::synapse0x29f85c0() {
   return (neuron0x29e67b0()*0.0876998);
}

double NNfunction_ss_uLdR::synapse0x29f8600() {
   return (neuron0x29e6af0()*-0.110198);
}

double NNfunction_ss_uLdR::synapse0x29f8640() {
   return (neuron0x29e6e30()*0.0190948);
}

double NNfunction_ss_uLdR::synapse0x29f8680() {
   return (neuron0x29e7170()*-0.125024);
}

double NNfunction_ss_uLdR::synapse0x29f8a00() {
   return (neuron0x29e25b0()*-0.1244);
}

double NNfunction_ss_uLdR::synapse0x29f8a40() {
   return (neuron0x29e28f0()*1.31977);
}

double NNfunction_ss_uLdR::synapse0x29f8a80() {
   return (neuron0x29e2c30()*0.314593);
}

double NNfunction_ss_uLdR::synapse0x29f8ac0() {
   return (neuron0x29e2f70()*0.229776);
}

double NNfunction_ss_uLdR::synapse0x29f8b00() {
   return (neuron0x29e32b0()*-0.670974);
}

double NNfunction_ss_uLdR::synapse0x29f8b40() {
   return (neuron0x29e35f0()*0.0505301);
}

double NNfunction_ss_uLdR::synapse0x29f8b80() {
   return (neuron0x29e3930()*0.296006);
}

double NNfunction_ss_uLdR::synapse0x29f8bc0() {
   return (neuron0x29e3c70()*-0.14527);
}

double NNfunction_ss_uLdR::synapse0x29f8c00() {
   return (neuron0x29e3fb0()*0.695095);
}

double NNfunction_ss_uLdR::synapse0x29f8c40() {
   return (neuron0x29e42f0()*-0.251748);
}

double NNfunction_ss_uLdR::synapse0x29f8c80() {
   return (neuron0x29e4630()*0.737633);
}

double NNfunction_ss_uLdR::synapse0x29f8cc0() {
   return (neuron0x29e4970()*0.417006);
}

double NNfunction_ss_uLdR::synapse0x29f8d00() {
   return (neuron0x29e4cb0()*0.407901);
}

double NNfunction_ss_uLdR::synapse0x29f8d40() {
   return (neuron0x29e4ff0()*0.660264);
}

double NNfunction_ss_uLdR::synapse0x29f8d80() {
   return (neuron0x29e5330()*0.143024);
}

double NNfunction_ss_uLdR::synapse0x29f8dc0() {
   return (neuron0x29e5670()*0.142993);
}

double NNfunction_ss_uLdR::synapse0x29f8850() {
   return (neuron0x29e59b0()*-0.231723);
}

double NNfunction_ss_uLdR::synapse0x29f8890() {
   return (neuron0x29e5f10()*-0.546754);
}

double NNfunction_ss_uLdR::synapse0x29f8f10() {
   return (neuron0x29e6130()*0.122134);
}

double NNfunction_ss_uLdR::synapse0x29f8f50() {
   return (neuron0x29e6470()*0.46089);
}

double NNfunction_ss_uLdR::synapse0x29f8f90() {
   return (neuron0x29e67b0()*0.243965);
}

double NNfunction_ss_uLdR::synapse0x29f8fd0() {
   return (neuron0x29e6af0()*0.653346);
}

double NNfunction_ss_uLdR::synapse0x29f9010() {
   return (neuron0x29e6e30()*-0.71937);
}

double NNfunction_ss_uLdR::synapse0x29f9050() {
   return (neuron0x29e7170()*0.242368);
}

double NNfunction_ss_uLdR::synapse0x29f93d0() {
   return (neuron0x29e25b0()*0.162952);
}

double NNfunction_ss_uLdR::synapse0x29f9410() {
   return (neuron0x29e28f0()*-0.350986);
}

double NNfunction_ss_uLdR::synapse0x29f9450() {
   return (neuron0x29e2c30()*0.411251);
}

double NNfunction_ss_uLdR::synapse0x29f9490() {
   return (neuron0x29e2f70()*-0.302643);
}

double NNfunction_ss_uLdR::synapse0x29f94d0() {
   return (neuron0x29e32b0()*-0.214983);
}

double NNfunction_ss_uLdR::synapse0x29f9510() {
   return (neuron0x29e35f0()*0.0206937);
}

double NNfunction_ss_uLdR::synapse0x29f9550() {
   return (neuron0x29e3930()*-0.382118);
}

double NNfunction_ss_uLdR::synapse0x29f9590() {
   return (neuron0x29e3c70()*0.0899372);
}

double NNfunction_ss_uLdR::synapse0x29f95d0() {
   return (neuron0x29e3fb0()*-0.0647144);
}

double NNfunction_ss_uLdR::synapse0x29f9610() {
   return (neuron0x29e42f0()*-0.341828);
}

double NNfunction_ss_uLdR::synapse0x29f9650() {
   return (neuron0x29e4630()*-0.00136066);
}

double NNfunction_ss_uLdR::synapse0x29f9690() {
   return (neuron0x29e4970()*-0.470155);
}

double NNfunction_ss_uLdR::synapse0x29f96d0() {
   return (neuron0x29e4cb0()*0.174362);
}

double NNfunction_ss_uLdR::synapse0x29f9710() {
   return (neuron0x29e4ff0()*-0.354856);
}

double NNfunction_ss_uLdR::synapse0x29f9750() {
   return (neuron0x29e5330()*-0.00560556);
}

double NNfunction_ss_uLdR::synapse0x29f9790() {
   return (neuron0x29e5670()*0.204577);
}

double NNfunction_ss_uLdR::synapse0x29f9220() {
   return (neuron0x29e59b0()*0.244131);
}

double NNfunction_ss_uLdR::synapse0x29f9260() {
   return (neuron0x29e5f10()*0.961599);
}

double NNfunction_ss_uLdR::synapse0x29f98e0() {
   return (neuron0x29e6130()*0.054569);
}

double NNfunction_ss_uLdR::synapse0x29f9920() {
   return (neuron0x29e6470()*0.597773);
}

double NNfunction_ss_uLdR::synapse0x29f9960() {
   return (neuron0x29e67b0()*-0.0569732);
}

double NNfunction_ss_uLdR::synapse0x29f99a0() {
   return (neuron0x29e6af0()*-0.017144);
}

double NNfunction_ss_uLdR::synapse0x29f99e0() {
   return (neuron0x29e6e30()*0.444595);
}

double NNfunction_ss_uLdR::synapse0x29f9a20() {
   return (neuron0x29e7170()*0.123852);
}

double NNfunction_ss_uLdR::synapse0x29f9da0() {
   return (neuron0x29e25b0()*-0.157645);
}

double NNfunction_ss_uLdR::synapse0x29f9de0() {
   return (neuron0x29e28f0()*-0.18195);
}

double NNfunction_ss_uLdR::synapse0x29f9e20() {
   return (neuron0x29e2c30()*0.284141);
}

double NNfunction_ss_uLdR::synapse0x29f9e60() {
   return (neuron0x29e2f70()*0.0130815);
}

double NNfunction_ss_uLdR::synapse0x29f9ea0() {
   return (neuron0x29e32b0()*-0.10831);
}

double NNfunction_ss_uLdR::synapse0x29f9ee0() {
   return (neuron0x29e35f0()*0.144352);
}

double NNfunction_ss_uLdR::synapse0x29f9f20() {
   return (neuron0x29e3930()*0.174106);
}

double NNfunction_ss_uLdR::synapse0x29f9f60() {
   return (neuron0x29e3c70()*-0.18785);
}

double NNfunction_ss_uLdR::synapse0x29f9fa0() {
   return (neuron0x29e3fb0()*-0.561667);
}

double NNfunction_ss_uLdR::synapse0x29f9fe0() {
   return (neuron0x29e42f0()*-0.0109627);
}

double NNfunction_ss_uLdR::synapse0x29fa020() {
   return (neuron0x29e4630()*-0.569464);
}

double NNfunction_ss_uLdR::synapse0x29fa060() {
   return (neuron0x29e4970()*0.328817);
}

double NNfunction_ss_uLdR::synapse0x29fa0a0() {
   return (neuron0x29e4cb0()*-0.160026);
}

double NNfunction_ss_uLdR::synapse0x29fa0e0() {
   return (neuron0x29e4ff0()*-0.24292);
}

double NNfunction_ss_uLdR::synapse0x29fa120() {
   return (neuron0x29e5330()*0.763833);
}

double NNfunction_ss_uLdR::synapse0x29fa160() {
   return (neuron0x29e5670()*-0.384563);
}

double NNfunction_ss_uLdR::synapse0x29f9bf0() {
   return (neuron0x29e59b0()*-0.0562878);
}

double NNfunction_ss_uLdR::synapse0x29f9c30() {
   return (neuron0x29e5f10()*0.0578082);
}

double NNfunction_ss_uLdR::synapse0x29fa2b0() {
   return (neuron0x29e6130()*-0.115246);
}

double NNfunction_ss_uLdR::synapse0x29fa2f0() {
   return (neuron0x29e6470()*0.209772);
}

double NNfunction_ss_uLdR::synapse0x29fa330() {
   return (neuron0x29e67b0()*0.151848);
}

double NNfunction_ss_uLdR::synapse0x29fa370() {
   return (neuron0x29e6af0()*-0.261565);
}

double NNfunction_ss_uLdR::synapse0x29fa3b0() {
   return (neuron0x29e6e30()*0.118776);
}

double NNfunction_ss_uLdR::synapse0x29fa3f0() {
   return (neuron0x29e7170()*0.0758331);
}

double NNfunction_ss_uLdR::synapse0x29fa770() {
   return (neuron0x29e25b0()*0.00760092);
}

double NNfunction_ss_uLdR::synapse0x29fa7b0() {
   return (neuron0x29e28f0()*0.0475353);
}

double NNfunction_ss_uLdR::synapse0x29fa7f0() {
   return (neuron0x29e2c30()*-0.0224453);
}

double NNfunction_ss_uLdR::synapse0x29fa830() {
   return (neuron0x29e2f70()*0.250243);
}

double NNfunction_ss_uLdR::synapse0x29fa870() {
   return (neuron0x29e32b0()*-0.00929523);
}

double NNfunction_ss_uLdR::synapse0x29fa8b0() {
   return (neuron0x29e35f0()*0.0359875);
}

double NNfunction_ss_uLdR::synapse0x29fa8f0() {
   return (neuron0x29e3930()*0.00347841);
}

double NNfunction_ss_uLdR::synapse0x29fa930() {
   return (neuron0x29e3c70()*-0.0330643);
}

double NNfunction_ss_uLdR::synapse0x29fa970() {
   return (neuron0x29e3fb0()*-0.0380678);
}

double NNfunction_ss_uLdR::synapse0x29fa9b0() {
   return (neuron0x29e42f0()*0.0464971);
}

double NNfunction_ss_uLdR::synapse0x29fa9f0() {
   return (neuron0x29e4630()*0.033126);
}

double NNfunction_ss_uLdR::synapse0x29faa30() {
   return (neuron0x29e4970()*1.24237);
}

double NNfunction_ss_uLdR::synapse0x29faa70() {
   return (neuron0x29e4cb0()*0.0327196);
}

double NNfunction_ss_uLdR::synapse0x29faab0() {
   return (neuron0x29e4ff0()*0.0403815);
}

double NNfunction_ss_uLdR::synapse0x29faaf0() {
   return (neuron0x29e5330()*-0.0138048);
}

double NNfunction_ss_uLdR::synapse0x29fab30() {
   return (neuron0x29e5670()*0.0256223);
}

double NNfunction_ss_uLdR::synapse0x29fa5c0() {
   return (neuron0x29e59b0()*-0.00659988);
}

double NNfunction_ss_uLdR::synapse0x29fa600() {
   return (neuron0x29e5f10()*1.19403);
}

double NNfunction_ss_uLdR::synapse0x29fac80() {
   return (neuron0x29e6130()*-0.0531213);
}

double NNfunction_ss_uLdR::synapse0x29facc0() {
   return (neuron0x29e6470()*-0.0226334);
}

double NNfunction_ss_uLdR::synapse0x29fad00() {
   return (neuron0x29e67b0()*-0.045037);
}

double NNfunction_ss_uLdR::synapse0x29fad40() {
   return (neuron0x29e6af0()*0.0183235);
}

double NNfunction_ss_uLdR::synapse0x29fad80() {
   return (neuron0x29e6e30()*0.00845337);
}

double NNfunction_ss_uLdR::synapse0x29fadc0() {
   return (neuron0x29e7170()*-0.00552203);
}

double NNfunction_ss_uLdR::synapse0x29fb140() {
   return (neuron0x29e25b0()*-0.017914);
}

double NNfunction_ss_uLdR::synapse0x29fb180() {
   return (neuron0x29e28f0()*0.0128737);
}

double NNfunction_ss_uLdR::synapse0x29fb1c0() {
   return (neuron0x29e2c30()*-0.0678148);
}

double NNfunction_ss_uLdR::synapse0x29fb200() {
   return (neuron0x29e2f70()*-0.154418);
}

double NNfunction_ss_uLdR::synapse0x29fb240() {
   return (neuron0x29e32b0()*0.031128);
}

double NNfunction_ss_uLdR::synapse0x29fb280() {
   return (neuron0x29e35f0()*0.0271912);
}

double NNfunction_ss_uLdR::synapse0x29fb2c0() {
   return (neuron0x29e3930()*-0.00862513);
}

double NNfunction_ss_uLdR::synapse0x29fb300() {
   return (neuron0x29e3c70()*-0.002651);
}

double NNfunction_ss_uLdR::synapse0x29fb340() {
   return (neuron0x29e3fb0()*-0.0583449);
}

double NNfunction_ss_uLdR::synapse0x29fb380() {
   return (neuron0x29e42f0()*-0.00897168);
}

double NNfunction_ss_uLdR::synapse0x29fb3c0() {
   return (neuron0x29e4630()*0.0301158);
}

double NNfunction_ss_uLdR::synapse0x29fb400() {
   return (neuron0x29e4970()*-0.86796);
}

double NNfunction_ss_uLdR::synapse0x29fb440() {
   return (neuron0x29e4cb0()*0.0274993);
}

double NNfunction_ss_uLdR::synapse0x29fb480() {
   return (neuron0x29e4ff0()*0.0216565);
}

double NNfunction_ss_uLdR::synapse0x29fb4c0() {
   return (neuron0x29e5330()*0.009117);
}

double NNfunction_ss_uLdR::synapse0x29fb500() {
   return (neuron0x29e5670()*-0.00318465);
}

double NNfunction_ss_uLdR::synapse0x29faf90() {
   return (neuron0x29e59b0()*0.0230395);
}

double NNfunction_ss_uLdR::synapse0x29fafd0() {
   return (neuron0x29e5f10()*0.237465);
}

double NNfunction_ss_uLdR::synapse0x29fb650() {
   return (neuron0x29e6130()*-0.0651503);
}

double NNfunction_ss_uLdR::synapse0x29fb690() {
   return (neuron0x29e6470()*-0.0271208);
}

double NNfunction_ss_uLdR::synapse0x29fb6d0() {
   return (neuron0x29e67b0()*-0.0347319);
}

double NNfunction_ss_uLdR::synapse0x29fb710() {
   return (neuron0x29e6af0()*0.0139272);
}

double NNfunction_ss_uLdR::synapse0x29fb750() {
   return (neuron0x29e6e30()*-0.00427341);
}

double NNfunction_ss_uLdR::synapse0x29fb790() {
   return (neuron0x29e7170()*-0.00769312);
}

double NNfunction_ss_uLdR::synapse0x29fbb10() {
   return (neuron0x29e25b0()*0.0471349);
}

double NNfunction_ss_uLdR::synapse0x29fbb50() {
   return (neuron0x29e28f0()*-0.00174998);
}

double NNfunction_ss_uLdR::synapse0x29fbb90() {
   return (neuron0x29e2c30()*-0.0110455);
}

double NNfunction_ss_uLdR::synapse0x29fbbd0() {
   return (neuron0x29e2f70()*-9.94473);
}

double NNfunction_ss_uLdR::synapse0x29fbc10() {
   return (neuron0x29e32b0()*0.0346206);
}

double NNfunction_ss_uLdR::synapse0x29fbc50() {
   return (neuron0x29e35f0()*0.0068167);
}

double NNfunction_ss_uLdR::synapse0x29fbc90() {
   return (neuron0x29e3930()*-0.0376286);
}

double NNfunction_ss_uLdR::synapse0x29fbcd0() {
   return (neuron0x29e3c70()*-0.0077412);
}

double NNfunction_ss_uLdR::synapse0x29fbd10() {
   return (neuron0x29e3fb0()*0.0116635);
}

double NNfunction_ss_uLdR::synapse0x29fbd50() {
   return (neuron0x29e42f0()*-0.0258871);
}

double NNfunction_ss_uLdR::synapse0x29fbd90() {
   return (neuron0x29e4630()*-0.0368556);
}

double NNfunction_ss_uLdR::synapse0x29fbdd0() {
   return (neuron0x29e4970()*-0.0159451);
}

double NNfunction_ss_uLdR::synapse0x29fbe10() {
   return (neuron0x29e4cb0()*-0.00263455);
}

double NNfunction_ss_uLdR::synapse0x29fbe50() {
   return (neuron0x29e4ff0()*0.0177975);
}

double NNfunction_ss_uLdR::synapse0x29fbe90() {
   return (neuron0x29e5330()*0.0111924);
}

double NNfunction_ss_uLdR::synapse0x29fbed0() {
   return (neuron0x29e5670()*0.0106086);
}

double NNfunction_ss_uLdR::synapse0x29fb960() {
   return (neuron0x29e59b0()*0.0179332);
}

double NNfunction_ss_uLdR::synapse0x29fb9a0() {
   return (neuron0x29e5f10()*-0.0685685);
}

double NNfunction_ss_uLdR::synapse0x29fc020() {
   return (neuron0x29e6130()*-0.021978);
}

double NNfunction_ss_uLdR::synapse0x29fc060() {
   return (neuron0x29e6470()*-0.0227225);
}

double NNfunction_ss_uLdR::synapse0x29fc0a0() {
   return (neuron0x29e67b0()*-0.0104542);
}

double NNfunction_ss_uLdR::synapse0x29fc0e0() {
   return (neuron0x29e6af0()*-0.0169319);
}

double NNfunction_ss_uLdR::synapse0x29fc120() {
   return (neuron0x29e6e30()*0.00695536);
}

double NNfunction_ss_uLdR::synapse0x29fc160() {
   return (neuron0x29e7170()*0.0103882);
}

double NNfunction_ss_uLdR::synapse0x29fc4e0() {
   return (neuron0x29e25b0()*-0.0162209);
}

double NNfunction_ss_uLdR::synapse0x29fc520() {
   return (neuron0x29e28f0()*0.0080139);
}

double NNfunction_ss_uLdR::synapse0x29fc560() {
   return (neuron0x29e2c30()*-0.0106215);
}

double NNfunction_ss_uLdR::synapse0x29fc5a0() {
   return (neuron0x29e2f70()*-0.32153);
}

double NNfunction_ss_uLdR::synapse0x29fc5e0() {
   return (neuron0x29e32b0()*-0.00756675);
}

double NNfunction_ss_uLdR::synapse0x29fc620() {
   return (neuron0x29e35f0()*-0.0544794);
}

double NNfunction_ss_uLdR::synapse0x29fc660() {
   return (neuron0x29e3930()*-0.0307639);
}

double NNfunction_ss_uLdR::synapse0x29fc6a0() {
   return (neuron0x29e3c70()*-0.0162513);
}

double NNfunction_ss_uLdR::synapse0x29fc6e0() {
   return (neuron0x29e3fb0()*0.0256572);
}

double NNfunction_ss_uLdR::synapse0x29fc720() {
   return (neuron0x29e42f0()*0.0500175);
}

double NNfunction_ss_uLdR::synapse0x29fc760() {
   return (neuron0x29e4630()*0.0398101);
}

double NNfunction_ss_uLdR::synapse0x29fc7a0() {
   return (neuron0x29e4970()*0.175578);
}

double NNfunction_ss_uLdR::synapse0x29fc7e0() {
   return (neuron0x29e4cb0()*0.211366);
}

double NNfunction_ss_uLdR::synapse0x29fc820() {
   return (neuron0x29e4ff0()*-0.0837011);
}

double NNfunction_ss_uLdR::synapse0x29fc860() {
   return (neuron0x29e5330()*0.0857528);
}

double NNfunction_ss_uLdR::synapse0x29fc8a0() {
   return (neuron0x29e5670()*0.140987);
}

double NNfunction_ss_uLdR::synapse0x29fc330() {
   return (neuron0x29e59b0()*-0.0591319);
}

double NNfunction_ss_uLdR::synapse0x29fc370() {
   return (neuron0x29e5f10()*-0.199565);
}

double NNfunction_ss_uLdR::synapse0x29fc9f0() {
   return (neuron0x29e6130()*0.0994866);
}

double NNfunction_ss_uLdR::synapse0x29fca30() {
   return (neuron0x29e6470()*-0.0144889);
}

double NNfunction_ss_uLdR::synapse0x29fca70() {
   return (neuron0x29e67b0()*-0.0345261);
}

double NNfunction_ss_uLdR::synapse0x29fcab0() {
   return (neuron0x29e6af0()*-0.0103065);
}

double NNfunction_ss_uLdR::synapse0x29fcaf0() {
   return (neuron0x29e6e30()*-0.0269282);
}

double NNfunction_ss_uLdR::synapse0x29fcb30() {
   return (neuron0x29e7170()*-0.0249064);
}

double NNfunction_ss_uLdR::synapse0x29fceb0() {
   return (neuron0x29e25b0()*0.0237425);
}

double NNfunction_ss_uLdR::synapse0x29f1480() {
   return (neuron0x29e28f0()*-0.00357753);
}

double NNfunction_ss_uLdR::synapse0x29f14c0() {
   return (neuron0x29e2c30()*-0.00819875);
}

double NNfunction_ss_uLdR::synapse0x29f1500() {
   return (neuron0x29e2f70()*-4.94883);
}

double NNfunction_ss_uLdR::synapse0x29f1750() {
   return (neuron0x29e32b0()*-0.00828215);
}

double NNfunction_ss_uLdR::synapse0x29f1790() {
   return (neuron0x29e35f0()*-0.0312957);
}

double NNfunction_ss_uLdR::synapse0x29f17d0() {
   return (neuron0x29e3930()*-0.0285502);
}

double NNfunction_ss_uLdR::synapse0x29f1a20() {
   return (neuron0x29e3c70()*0.00950889);
}

double NNfunction_ss_uLdR::synapse0x29f1a60() {
   return (neuron0x29e3fb0()*0.00836693);
}

double NNfunction_ss_uLdR::synapse0x29f1cb0() {
   return (neuron0x29e42f0()*-0.00174192);
}

double NNfunction_ss_uLdR::synapse0x29f1cf0() {
   return (neuron0x29e4630()*-0.000750917);
}

double NNfunction_ss_uLdR::synapse0x29f1d30() {
   return (neuron0x29e4970()*0.745075);
}

double NNfunction_ss_uLdR::synapse0x29f1f80() {
   return (neuron0x29e4cb0()*-0.0198122);
}

double NNfunction_ss_uLdR::synapse0x29f1fc0() {
   return (neuron0x29e4ff0()*0.0252851);
}

double NNfunction_ss_uLdR::synapse0x29f2210() {
   return (neuron0x29e5330()*-0.00978063);
}

double NNfunction_ss_uLdR::synapse0x29f2250() {
   return (neuron0x29e5670()*0.00855273);
}

double NNfunction_ss_uLdR::synapse0x29fcd00() {
   return (neuron0x29e59b0()*0.0260226);
}

double NNfunction_ss_uLdR::synapse0x29fcd40() {
   return (neuron0x29e5f10()*0.685735);
}

double NNfunction_ss_uLdR::synapse0x29f23a0() {
   return (neuron0x29e6130()*0.0270844);
}

double NNfunction_ss_uLdR::synapse0x29f28b0() {
   return (neuron0x29e6470()*-0.0169271);
}

double NNfunction_ss_uLdR::synapse0x29f28f0() {
   return (neuron0x29e67b0()*-0.0251701);
}

double NNfunction_ss_uLdR::synapse0x29f2930() {
   return (neuron0x29e6af0()*-0.000436648);
}

double NNfunction_ss_uLdR::synapse0x29f2b80() {
   return (neuron0x29e6e30()*0.00162387);
}

double NNfunction_ss_uLdR::synapse0x29f2bc0() {
   return (neuron0x29e7170()*-0.0162317);
}

double NNfunction_ss_uLdR::synapse0x29f2470() {
   return (neuron0x29e25b0()*-0.0155212);
}

double NNfunction_ss_uLdR::synapse0x29f24b0() {
   return (neuron0x29e28f0()*-0.0436132);
}

double NNfunction_ss_uLdR::synapse0x29f24f0() {
   return (neuron0x29e2c30()*-0.0983482);
}

double NNfunction_ss_uLdR::synapse0x29f2530() {
   return (neuron0x29e2f70()*0.349482);
}

double NNfunction_ss_uLdR::synapse0x29f2eb0() {
   return (neuron0x29e32b0()*-0.0206809);
}

double NNfunction_ss_uLdR::synapse0x29ff200() {
   return (neuron0x29e35f0()*0.0616009);
}

double NNfunction_ss_uLdR::synapse0x29ff240() {
   return (neuron0x29e3930()*0.0240617);
}

double NNfunction_ss_uLdR::synapse0x29ff280() {
   return (neuron0x29e3c70()*-0.14106);
}

double NNfunction_ss_uLdR::synapse0x29ff2c0() {
   return (neuron0x29e3fb0()*-0.171794);
}

double NNfunction_ss_uLdR::synapse0x29ff300() {
   return (neuron0x29e42f0()*-0.144095);
}

double NNfunction_ss_uLdR::synapse0x29ff340() {
   return (neuron0x29e4630()*-0.209388);
}

double NNfunction_ss_uLdR::synapse0x29ff380() {
   return (neuron0x29e4970()*0.308199);
}

double NNfunction_ss_uLdR::synapse0x29ff3c0() {
   return (neuron0x29e4cb0()*-0.245959);
}

double NNfunction_ss_uLdR::synapse0x29ff400() {
   return (neuron0x29e4ff0()*0.0885235);
}

double NNfunction_ss_uLdR::synapse0x29ff440() {
   return (neuron0x29e5330()*0.00256621);
}

double NNfunction_ss_uLdR::synapse0x29ff480() {
   return (neuron0x29e5670()*-0.0569462);
}

double NNfunction_ss_uLdR::synapse0x29f2d90() {
   return (neuron0x29e59b0()*0.0939702);
}

double NNfunction_ss_uLdR::synapse0x29f2dd0() {
   return (neuron0x29e5f10()*0.410896);
}

double NNfunction_ss_uLdR::synapse0x29ff5d0() {
   return (neuron0x29e6130()*-0.0514501);
}

double NNfunction_ss_uLdR::synapse0x29ff610() {
   return (neuron0x29e6470()*0.0621104);
}

double NNfunction_ss_uLdR::synapse0x29ff650() {
   return (neuron0x29e67b0()*0.0719187);
}

double NNfunction_ss_uLdR::synapse0x29ff690() {
   return (neuron0x29e6af0()*-0.00598377);
}

double NNfunction_ss_uLdR::synapse0x29ff6d0() {
   return (neuron0x29e6e30()*0.0278535);
}

double NNfunction_ss_uLdR::synapse0x29ff710() {
   return (neuron0x29e7170()*0.0907122);
}

double NNfunction_ss_uLdR::synapse0x29ffa90() {
   return (neuron0x29e25b0()*-0.220522);
}

double NNfunction_ss_uLdR::synapse0x29ffad0() {
   return (neuron0x29e28f0()*0.0573177);
}

double NNfunction_ss_uLdR::synapse0x29ffb10() {
   return (neuron0x29e2c30()*-0.322518);
}

double NNfunction_ss_uLdR::synapse0x29ffb50() {
   return (neuron0x29e2f70()*0.172505);
}

double NNfunction_ss_uLdR::synapse0x29ffb90() {
   return (neuron0x29e32b0()*-0.278048);
}

double NNfunction_ss_uLdR::synapse0x29ffbd0() {
   return (neuron0x29e35f0()*-0.0477708);
}

double NNfunction_ss_uLdR::synapse0x29ffc10() {
   return (neuron0x29e3930()*0.186125);
}

double NNfunction_ss_uLdR::synapse0x29ffc50() {
   return (neuron0x29e3c70()*-0.65445);
}

double NNfunction_ss_uLdR::synapse0x29ffc90() {
   return (neuron0x29e3fb0()*0.71797);
}

double NNfunction_ss_uLdR::synapse0x29ffcd0() {
   return (neuron0x29e42f0()*0.34679);
}

double NNfunction_ss_uLdR::synapse0x29ffd10() {
   return (neuron0x29e4630()*-0.175851);
}

double NNfunction_ss_uLdR::synapse0x29ffd50() {
   return (neuron0x29e4970()*-0.129419);
}

double NNfunction_ss_uLdR::synapse0x29ffd90() {
   return (neuron0x29e4cb0()*-1.17259);
}

double NNfunction_ss_uLdR::synapse0x29ffdd0() {
   return (neuron0x29e4ff0()*0.438783);
}

double NNfunction_ss_uLdR::synapse0x29ffe10() {
   return (neuron0x29e5330()*0.927702);
}

double NNfunction_ss_uLdR::synapse0x29ffe50() {
   return (neuron0x29e5670()*0.0154275);
}

double NNfunction_ss_uLdR::synapse0x29ff8e0() {
   return (neuron0x29e59b0()*-0.654413);
}

double NNfunction_ss_uLdR::synapse0x29ff920() {
   return (neuron0x29e5f10()*-0.246425);
}

double NNfunction_ss_uLdR::synapse0x29fffa0() {
   return (neuron0x29e6130()*0.77927);
}

double NNfunction_ss_uLdR::synapse0x29fffe0() {
   return (neuron0x29e6470()*-0.243121);
}

double NNfunction_ss_uLdR::synapse0x2a00020() {
   return (neuron0x29e67b0()*-0.578545);
}

double NNfunction_ss_uLdR::synapse0x2a00060() {
   return (neuron0x29e6af0()*0.244883);
}

double NNfunction_ss_uLdR::synapse0x2a000a0() {
   return (neuron0x29e6e30()*-0.211264);
}

double NNfunction_ss_uLdR::synapse0x2a000e0() {
   return (neuron0x29e7170()*0.186197);
}

double NNfunction_ss_uLdR::synapse0x2a00460() {
   return (neuron0x29e25b0()*-0.00305201);
}

double NNfunction_ss_uLdR::synapse0x2a004a0() {
   return (neuron0x29e28f0()*0.00139809);
}

double NNfunction_ss_uLdR::synapse0x2a004e0() {
   return (neuron0x29e2c30()*-0.0388013);
}

double NNfunction_ss_uLdR::synapse0x2a00520() {
   return (neuron0x29e2f70()*-2.26387);
}

double NNfunction_ss_uLdR::synapse0x2a00560() {
   return (neuron0x29e32b0()*0.0207834);
}

double NNfunction_ss_uLdR::synapse0x2a005a0() {
   return (neuron0x29e35f0()*-0.00508324);
}

double NNfunction_ss_uLdR::synapse0x2a005e0() {
   return (neuron0x29e3930()*0.0118383);
}

double NNfunction_ss_uLdR::synapse0x2a00620() {
   return (neuron0x29e3c70()*0.0337476);
}

double NNfunction_ss_uLdR::synapse0x2a00660() {
   return (neuron0x29e3fb0()*0.00557732);
}

double NNfunction_ss_uLdR::synapse0x2a006a0() {
   return (neuron0x29e42f0()*-0.0366341);
}

double NNfunction_ss_uLdR::synapse0x2a006e0() {
   return (neuron0x29e4630()*-0.00772147);
}

double NNfunction_ss_uLdR::synapse0x2a00720() {
   return (neuron0x29e4970()*0.590361);
}

double NNfunction_ss_uLdR::synapse0x2a00760() {
   return (neuron0x29e4cb0()*-0.0523462);
}

double NNfunction_ss_uLdR::synapse0x2a007a0() {
   return (neuron0x29e4ff0()*0.0116176);
}

double NNfunction_ss_uLdR::synapse0x2a007e0() {
   return (neuron0x29e5330()*-0.0275574);
}

double NNfunction_ss_uLdR::synapse0x2a00820() {
   return (neuron0x29e5670()*-0.0475597);
}

double NNfunction_ss_uLdR::synapse0x2a002b0() {
   return (neuron0x29e59b0()*0.0215395);
}

double NNfunction_ss_uLdR::synapse0x2a002f0() {
   return (neuron0x29e5f10()*0.489351);
}

double NNfunction_ss_uLdR::synapse0x2a00970() {
   return (neuron0x29e6130()*-0.0423949);
}

double NNfunction_ss_uLdR::synapse0x2a009b0() {
   return (neuron0x29e6470()*0.016167);
}

double NNfunction_ss_uLdR::synapse0x2a009f0() {
   return (neuron0x29e67b0()*0.00104632);
}

double NNfunction_ss_uLdR::synapse0x2a00a30() {
   return (neuron0x29e6af0()*-0.00126208);
}

double NNfunction_ss_uLdR::synapse0x2a00a70() {
   return (neuron0x29e6e30()*-0.0301378);
}

double NNfunction_ss_uLdR::synapse0x2a00ab0() {
   return (neuron0x29e7170()*0.019925);
}

double NNfunction_ss_uLdR::synapse0x2a00e30() {
   return (neuron0x29e25b0()*-0.0428244);
}

double NNfunction_ss_uLdR::synapse0x2a00e70() {
   return (neuron0x29e28f0()*-0.12903);
}

double NNfunction_ss_uLdR::synapse0x2a00eb0() {
   return (neuron0x29e2c30()*0.316006);
}

double NNfunction_ss_uLdR::synapse0x2a00ef0() {
   return (neuron0x29e2f70()*1.05793);
}

double NNfunction_ss_uLdR::synapse0x2a00f30() {
   return (neuron0x29e32b0()*0.450385);
}

double NNfunction_ss_uLdR::synapse0x2a00f70() {
   return (neuron0x29e35f0()*0.269647);
}

double NNfunction_ss_uLdR::synapse0x2a00fb0() {
   return (neuron0x29e3930()*0.18081);
}

double NNfunction_ss_uLdR::synapse0x2a00ff0() {
   return (neuron0x29e3c70()*0.22342);
}

double NNfunction_ss_uLdR::synapse0x2a01030() {
   return (neuron0x29e3fb0()*0.108069);
}

double NNfunction_ss_uLdR::synapse0x2a01070() {
   return (neuron0x29e42f0()*0.20144);
}

double NNfunction_ss_uLdR::synapse0x2a010b0() {
   return (neuron0x29e4630()*0.488122);
}

double NNfunction_ss_uLdR::synapse0x2a010f0() {
   return (neuron0x29e4970()*0.261277);
}

double NNfunction_ss_uLdR::synapse0x2a01130() {
   return (neuron0x29e4cb0()*-0.338858);
}

double NNfunction_ss_uLdR::synapse0x2a01170() {
   return (neuron0x29e4ff0()*0.505159);
}

double NNfunction_ss_uLdR::synapse0x2a011b0() {
   return (neuron0x29e5330()*-0.226699);
}

double NNfunction_ss_uLdR::synapse0x2a011f0() {
   return (neuron0x29e5670()*0.0136525);
}

double NNfunction_ss_uLdR::synapse0x2a00c80() {
   return (neuron0x29e59b0()*0.0287793);
}

double NNfunction_ss_uLdR::synapse0x2a00cc0() {
   return (neuron0x29e5f10()*0.328155);
}

double NNfunction_ss_uLdR::synapse0x2a01340() {
   return (neuron0x29e6130()*0.00988898);
}

double NNfunction_ss_uLdR::synapse0x2a01380() {
   return (neuron0x29e6470()*-0.411589);
}

double NNfunction_ss_uLdR::synapse0x2a013c0() {
   return (neuron0x29e67b0()*-0.146924);
}

double NNfunction_ss_uLdR::synapse0x2a01400() {
   return (neuron0x29e6af0()*0.0788176);
}

double NNfunction_ss_uLdR::synapse0x2a01440() {
   return (neuron0x29e6e30()*0.0284905);
}

double NNfunction_ss_uLdR::synapse0x2a01480() {
   return (neuron0x29e7170()*0.212115);
}

double NNfunction_ss_uLdR::synapse0x2a01800() {
   return (neuron0x29e25b0()*0.0518186);
}

double NNfunction_ss_uLdR::synapse0x2a01840() {
   return (neuron0x29e28f0()*-0.0232781);
}

double NNfunction_ss_uLdR::synapse0x2a01880() {
   return (neuron0x29e2c30()*-0.105613);
}

double NNfunction_ss_uLdR::synapse0x2a018c0() {
   return (neuron0x29e2f70()*-0.802138);
}

double NNfunction_ss_uLdR::synapse0x2a01900() {
   return (neuron0x29e32b0()*0.0259348);
}

double NNfunction_ss_uLdR::synapse0x2a01940() {
   return (neuron0x29e35f0()*0.0203816);
}

double NNfunction_ss_uLdR::synapse0x2a01980() {
   return (neuron0x29e3930()*-0.0349774);
}

double NNfunction_ss_uLdR::synapse0x2a019c0() {
   return (neuron0x29e3c70()*0.0215955);
}

double NNfunction_ss_uLdR::synapse0x2a01a00() {
   return (neuron0x29e3fb0()*0.0484045);
}

double NNfunction_ss_uLdR::synapse0x2a01a40() {
   return (neuron0x29e42f0()*-0.072152);
}

double NNfunction_ss_uLdR::synapse0x2a01a80() {
   return (neuron0x29e4630()*-0.0150601);
}

double NNfunction_ss_uLdR::synapse0x2a01ac0() {
   return (neuron0x29e4970()*-0.379561);
}

double NNfunction_ss_uLdR::synapse0x2a01b00() {
   return (neuron0x29e4cb0()*-0.0497091);
}

double NNfunction_ss_uLdR::synapse0x2a01b40() {
   return (neuron0x29e4ff0()*-0.00784279);
}

double NNfunction_ss_uLdR::synapse0x2a01b80() {
   return (neuron0x29e5330()*-0.0192682);
}

double NNfunction_ss_uLdR::synapse0x2a01bc0() {
   return (neuron0x29e5670()*-0.0574754);
}

double NNfunction_ss_uLdR::synapse0x2a01650() {
   return (neuron0x29e59b0()*0.0949124);
}

double NNfunction_ss_uLdR::synapse0x2a01690() {
   return (neuron0x29e5f10()*-0.0250889);
}

double NNfunction_ss_uLdR::synapse0x2a01d10() {
   return (neuron0x29e6130()*-0.00420323);
}

double NNfunction_ss_uLdR::synapse0x2a01d50() {
   return (neuron0x29e6470()*-0.0241042);
}

double NNfunction_ss_uLdR::synapse0x2a01d90() {
   return (neuron0x29e67b0()*0.0114251);
}

double NNfunction_ss_uLdR::synapse0x2a01dd0() {
   return (neuron0x29e6af0()*-0.00272841);
}

double NNfunction_ss_uLdR::synapse0x2a01e10() {
   return (neuron0x29e6e30()*-0.00655866);
}

double NNfunction_ss_uLdR::synapse0x2a01e50() {
   return (neuron0x29e7170()*0.0115927);
}

double NNfunction_ss_uLdR::synapse0x2a021d0() {
   return (neuron0x29e25b0()*-0.0166206);
}

double NNfunction_ss_uLdR::synapse0x2a02210() {
   return (neuron0x29e28f0()*-0.0132438);
}

double NNfunction_ss_uLdR::synapse0x2a02250() {
   return (neuron0x29e2c30()*0.0531299);
}

double NNfunction_ss_uLdR::synapse0x2a02290() {
   return (neuron0x29e2f70()*0.0492631);
}

double NNfunction_ss_uLdR::synapse0x2a022d0() {
   return (neuron0x29e32b0()*-0.000602457);
}

double NNfunction_ss_uLdR::synapse0x2a02310() {
   return (neuron0x29e35f0()*-0.0125084);
}

double NNfunction_ss_uLdR::synapse0x2a02350() {
   return (neuron0x29e3930()*0.0656842);
}

double NNfunction_ss_uLdR::synapse0x2a02390() {
   return (neuron0x29e3c70()*0.052066);
}

double NNfunction_ss_uLdR::synapse0x2a023d0() {
   return (neuron0x29e3fb0()*-0.0214223);
}

double NNfunction_ss_uLdR::synapse0x2a02410() {
   return (neuron0x29e42f0()*0.017249);
}

double NNfunction_ss_uLdR::synapse0x2a02450() {
   return (neuron0x29e4630()*-0.0255183);
}

double NNfunction_ss_uLdR::synapse0x2a02490() {
   return (neuron0x29e4970()*-0.909907);
}

double NNfunction_ss_uLdR::synapse0x2a024d0() {
   return (neuron0x29e4cb0()*0.0104782);
}

double NNfunction_ss_uLdR::synapse0x2a02510() {
   return (neuron0x29e4ff0()*0.0414467);
}

double NNfunction_ss_uLdR::synapse0x2a02550() {
   return (neuron0x29e5330()*0.0349104);
}

double NNfunction_ss_uLdR::synapse0x2a02590() {
   return (neuron0x29e5670()*0.0084871);
}

double NNfunction_ss_uLdR::synapse0x2a02020() {
   return (neuron0x29e59b0()*-0.0163099);
}

double NNfunction_ss_uLdR::synapse0x2a02060() {
   return (neuron0x29e5f10()*-0.663038);
}

double NNfunction_ss_uLdR::synapse0x2a026e0() {
   return (neuron0x29e6130()*0.00676267);
}

double NNfunction_ss_uLdR::synapse0x2a02720() {
   return (neuron0x29e6470()*0.0303438);
}

double NNfunction_ss_uLdR::synapse0x2a02760() {
   return (neuron0x29e67b0()*0.0348553);
}

double NNfunction_ss_uLdR::synapse0x2a027a0() {
   return (neuron0x29e6af0()*-0.0177725);
}

double NNfunction_ss_uLdR::synapse0x2a027e0() {
   return (neuron0x29e6e30()*0.0247727);
}

double NNfunction_ss_uLdR::synapse0x2a02820() {
   return (neuron0x29e7170()*0.0493995);
}

double NNfunction_ss_uLdR::synapse0x2a02ba0() {
   return (neuron0x29e25b0()*-0.00825093);
}

double NNfunction_ss_uLdR::synapse0x2a02be0() {
   return (neuron0x29e28f0()*-0.010624);
}

double NNfunction_ss_uLdR::synapse0x2a02c20() {
   return (neuron0x29e2c30()*-0.0277981);
}

double NNfunction_ss_uLdR::synapse0x2a02c60() {
   return (neuron0x29e2f70()*0.164524);
}

double NNfunction_ss_uLdR::synapse0x2a02ca0() {
   return (neuron0x29e32b0()*-0.019732);
}

double NNfunction_ss_uLdR::synapse0x2a02ce0() {
   return (neuron0x29e35f0()*-0.000858115);
}

double NNfunction_ss_uLdR::synapse0x2a02d20() {
   return (neuron0x29e3930()*0.0246979);
}

double NNfunction_ss_uLdR::synapse0x2a02d60() {
   return (neuron0x29e3c70()*-0.0464805);
}

double NNfunction_ss_uLdR::synapse0x2a02da0() {
   return (neuron0x29e3fb0()*-0.0467936);
}

double NNfunction_ss_uLdR::synapse0x2a02de0() {
   return (neuron0x29e42f0()*0.0361468);
}

double NNfunction_ss_uLdR::synapse0x2a02e20() {
   return (neuron0x29e4630()*0.0276512);
}

double NNfunction_ss_uLdR::synapse0x2a02e60() {
   return (neuron0x29e4970()*2.0068);
}

double NNfunction_ss_uLdR::synapse0x2a02ea0() {
   return (neuron0x29e4cb0()*0.0067718);
}

double NNfunction_ss_uLdR::synapse0x2a02ee0() {
   return (neuron0x29e4ff0()*0.0889263);
}

double NNfunction_ss_uLdR::synapse0x2a02f20() {
   return (neuron0x29e5330()*0.00946205);
}

double NNfunction_ss_uLdR::synapse0x2a02f60() {
   return (neuron0x29e5670()*0.00575359);
}

double NNfunction_ss_uLdR::synapse0x2a029f0() {
   return (neuron0x29e59b0()*0.0323698);
}

double NNfunction_ss_uLdR::synapse0x2a02a30() {
   return (neuron0x29e5f10()*-0.228897);
}

double NNfunction_ss_uLdR::synapse0x2a030b0() {
   return (neuron0x29e6130()*0.0248164);
}

double NNfunction_ss_uLdR::synapse0x2a030f0() {
   return (neuron0x29e6470()*-0.00205325);
}

double NNfunction_ss_uLdR::synapse0x2a03130() {
   return (neuron0x29e67b0()*0.018344);
}

double NNfunction_ss_uLdR::synapse0x2a03170() {
   return (neuron0x29e6af0()*-0.00857533);
}

double NNfunction_ss_uLdR::synapse0x2a031b0() {
   return (neuron0x29e6e30()*0.0286602);
}

double NNfunction_ss_uLdR::synapse0x2a031f0() {
   return (neuron0x29e7170()*-0.0250551);
}

double NNfunction_ss_uLdR::synapse0x2a03570() {
   return (neuron0x29e25b0()*-0.105708);
}

double NNfunction_ss_uLdR::synapse0x2a035b0() {
   return (neuron0x29e28f0()*-0.261732);
}

double NNfunction_ss_uLdR::synapse0x2a035f0() {
   return (neuron0x29e2c30()*-3.06841);
}

double NNfunction_ss_uLdR::synapse0x2a03630() {
   return (neuron0x29e2f70()*1.11632);
}

double NNfunction_ss_uLdR::synapse0x2a03670() {
   return (neuron0x29e32b0()*-0.239354);
}

double NNfunction_ss_uLdR::synapse0x2a036b0() {
   return (neuron0x29e35f0()*-0.170049);
}

double NNfunction_ss_uLdR::synapse0x2a036f0() {
   return (neuron0x29e3930()*-0.643417);
}

double NNfunction_ss_uLdR::synapse0x2a03730() {
   return (neuron0x29e3c70()*-0.531196);
}

double NNfunction_ss_uLdR::synapse0x2a03770() {
   return (neuron0x29e3fb0()*0.273886);
}

double NNfunction_ss_uLdR::synapse0x2a037b0() {
   return (neuron0x29e42f0()*-0.343445);
}

double NNfunction_ss_uLdR::synapse0x2a037f0() {
   return (neuron0x29e4630()*-0.622967);
}

double NNfunction_ss_uLdR::synapse0x2a03830() {
   return (neuron0x29e4970()*-1.29655);
}

double NNfunction_ss_uLdR::synapse0x2a03870() {
   return (neuron0x29e4cb0()*1.52506);
}

double NNfunction_ss_uLdR::synapse0x2a038b0() {
   return (neuron0x29e4ff0()*0.757189);
}

double NNfunction_ss_uLdR::synapse0x2a038f0() {
   return (neuron0x29e5330()*1.34714);
}

double NNfunction_ss_uLdR::synapse0x2a03930() {
   return (neuron0x29e5670()*0.716616);
}

double NNfunction_ss_uLdR::synapse0x2a033c0() {
   return (neuron0x29e59b0()*-0.153426);
}

double NNfunction_ss_uLdR::synapse0x2a03400() {
   return (neuron0x29e5f10()*-2.00278);
}

double NNfunction_ss_uLdR::synapse0x2a03a80() {
   return (neuron0x29e6130()*0.673096);
}

double NNfunction_ss_uLdR::synapse0x2a03ac0() {
   return (neuron0x29e6470()*0.340182);
}

double NNfunction_ss_uLdR::synapse0x2a03b00() {
   return (neuron0x29e67b0()*-0.515766);
}

double NNfunction_ss_uLdR::synapse0x2a03b40() {
   return (neuron0x29e6af0()*-0.69892);
}

double NNfunction_ss_uLdR::synapse0x2a03b80() {
   return (neuron0x29e6e30()*0.94933);
}

double NNfunction_ss_uLdR::synapse0x2a03bc0() {
   return (neuron0x29e7170()*0.0717461);
}

double NNfunction_ss_uLdR::synapse0x29ec670() {
   return (neuron0x29e25b0()*0.16991);
}

double NNfunction_ss_uLdR::synapse0x29ec6b0() {
   return (neuron0x29e28f0()*-0.00252927);
}

double NNfunction_ss_uLdR::synapse0x29ec6f0() {
   return (neuron0x29e2c30()*-0.139604);
}

double NNfunction_ss_uLdR::synapse0x29ec730() {
   return (neuron0x29e2f70()*0.234325);
}

double NNfunction_ss_uLdR::synapse0x29ec770() {
   return (neuron0x29e32b0()*-0.0639965);
}

double NNfunction_ss_uLdR::synapse0x29ec7b0() {
   return (neuron0x29e35f0()*-0.0370357);
}

double NNfunction_ss_uLdR::synapse0x29ec7f0() {
   return (neuron0x29e3930()*-0.0995439);
}

double NNfunction_ss_uLdR::synapse0x29ec830() {
   return (neuron0x29e3c70()*0.181453);
}

double NNfunction_ss_uLdR::synapse0x2a04350() {
   return (neuron0x29e3fb0()*0.317611);
}

double NNfunction_ss_uLdR::synapse0x2a04390() {
   return (neuron0x29e42f0()*-0.763202);
}

double NNfunction_ss_uLdR::synapse0x2a043d0() {
   return (neuron0x29e4630()*0.411066);
}

double NNfunction_ss_uLdR::synapse0x2a04410() {
   return (neuron0x29e4970()*0.259368);
}

double NNfunction_ss_uLdR::synapse0x2a04450() {
   return (neuron0x29e4cb0()*0.236869);
}

double NNfunction_ss_uLdR::synapse0x2a04490() {
   return (neuron0x29e4ff0()*0.329264);
}

double NNfunction_ss_uLdR::synapse0x2a044d0() {
   return (neuron0x29e5330()*-0.0422163);
}

double NNfunction_ss_uLdR::synapse0x2a04510() {
   return (neuron0x29e5670()*-0.114568);
}

double NNfunction_ss_uLdR::synapse0x2a03d90() {
   return (neuron0x29e59b0()*-0.172759);
}

double NNfunction_ss_uLdR::synapse0x2a03dd0() {
   return (neuron0x29e5f10()*0.336835);
}

double NNfunction_ss_uLdR::synapse0x2a04660() {
   return (neuron0x29e6130()*-0.248093);
}

double NNfunction_ss_uLdR::synapse0x2a046a0() {
   return (neuron0x29e6470()*-0.272633);
}

double NNfunction_ss_uLdR::synapse0x2a046e0() {
   return (neuron0x29e67b0()*0.284528);
}

double NNfunction_ss_uLdR::synapse0x2a04720() {
   return (neuron0x29e6af0()*-0.0940122);
}

double NNfunction_ss_uLdR::synapse0x2a04760() {
   return (neuron0x29e6e30()*0.034377);
}

double NNfunction_ss_uLdR::synapse0x2a047a0() {
   return (neuron0x29e7170()*-0.0290115);
}

double NNfunction_ss_uLdR::synapse0x2a04b20() {
   return (neuron0x29e25b0()*-0.010288);
}

double NNfunction_ss_uLdR::synapse0x2a04b60() {
   return (neuron0x29e28f0()*-0.000662168);
}

double NNfunction_ss_uLdR::synapse0x2a04ba0() {
   return (neuron0x29e2c30()*0.0233419);
}

double NNfunction_ss_uLdR::synapse0x2a04be0() {
   return (neuron0x29e2f70()*2.50705);
}

double NNfunction_ss_uLdR::synapse0x2a04c20() {
   return (neuron0x29e32b0()*-0.0120051);
}

double NNfunction_ss_uLdR::synapse0x2a04c60() {
   return (neuron0x29e35f0()*0.0142572);
}

double NNfunction_ss_uLdR::synapse0x2a04ca0() {
   return (neuron0x29e3930()*0.0209067);
}

double NNfunction_ss_uLdR::synapse0x2a04ce0() {
   return (neuron0x29e3c70()*-0.000199046);
}

double NNfunction_ss_uLdR::synapse0x2a04d20() {
   return (neuron0x29e3fb0()*0.000225437);
}

double NNfunction_ss_uLdR::synapse0x2a04d60() {
   return (neuron0x29e42f0()*0.00812176);
}

double NNfunction_ss_uLdR::synapse0x2a04da0() {
   return (neuron0x29e4630()*0.0101142);
}

double NNfunction_ss_uLdR::synapse0x2a04de0() {
   return (neuron0x29e4970()*-0.0902645);
}

double NNfunction_ss_uLdR::synapse0x2a04e20() {
   return (neuron0x29e4cb0()*-0.00199883);
}

double NNfunction_ss_uLdR::synapse0x2a04e60() {
   return (neuron0x29e4ff0()*0.0107473);
}

double NNfunction_ss_uLdR::synapse0x2a04ea0() {
   return (neuron0x29e5330()*-0.0011094);
}

double NNfunction_ss_uLdR::synapse0x2a04ee0() {
   return (neuron0x29e5670()*0.00250052);
}

double NNfunction_ss_uLdR::synapse0x2a04970() {
   return (neuron0x29e59b0()*-0.0129662);
}

double NNfunction_ss_uLdR::synapse0x2a049b0() {
   return (neuron0x29e5f10()*-0.0299211);
}

double NNfunction_ss_uLdR::synapse0x2a05030() {
   return (neuron0x29e6130()*-0.0162853);
}

double NNfunction_ss_uLdR::synapse0x2a05070() {
   return (neuron0x29e6470()*0.00462384);
}

double NNfunction_ss_uLdR::synapse0x2a050b0() {
   return (neuron0x29e67b0()*0.0106027);
}

double NNfunction_ss_uLdR::synapse0x2a050f0() {
   return (neuron0x29e6af0()*0.00673699);
}

double NNfunction_ss_uLdR::synapse0x2a05130() {
   return (neuron0x29e6e30()*-0.0119672);
}

double NNfunction_ss_uLdR::synapse0x2a05170() {
   return (neuron0x29e7170()*0.00124378);
}

double NNfunction_ss_uLdR::synapse0x2a054f0() {
   return (neuron0x29e25b0()*0.0619726);
}

double NNfunction_ss_uLdR::synapse0x2a05530() {
   return (neuron0x29e28f0()*-0.153997);
}

double NNfunction_ss_uLdR::synapse0x2a05570() {
   return (neuron0x29e2c30()*-0.220817);
}

double NNfunction_ss_uLdR::synapse0x2a055b0() {
   return (neuron0x29e2f70()*0.466534);
}

double NNfunction_ss_uLdR::synapse0x2a055f0() {
   return (neuron0x29e32b0()*0.0501512);
}

double NNfunction_ss_uLdR::synapse0x2a05630() {
   return (neuron0x29e35f0()*0.142983);
}

double NNfunction_ss_uLdR::synapse0x2a05670() {
   return (neuron0x29e3930()*0.0914288);
}

double NNfunction_ss_uLdR::synapse0x2a056b0() {
   return (neuron0x29e3c70()*-0.0442695);
}

double NNfunction_ss_uLdR::synapse0x2a056f0() {
   return (neuron0x29e3fb0()*-0.0789106);
}

double NNfunction_ss_uLdR::synapse0x2a05730() {
   return (neuron0x29e42f0()*-0.137927);
}

double NNfunction_ss_uLdR::synapse0x2a05770() {
   return (neuron0x29e4630()*-0.0387078);
}

double NNfunction_ss_uLdR::synapse0x2a057b0() {
   return (neuron0x29e4970()*-0.475782);
}

double NNfunction_ss_uLdR::synapse0x2a057f0() {
   return (neuron0x29e4cb0()*0.256506);
}

double NNfunction_ss_uLdR::synapse0x2a05830() {
   return (neuron0x29e4ff0()*0.0740737);
}

double NNfunction_ss_uLdR::synapse0x2a05870() {
   return (neuron0x29e5330()*0.252972);
}

double NNfunction_ss_uLdR::synapse0x2a058b0() {
   return (neuron0x29e5670()*0.13342);
}

double NNfunction_ss_uLdR::synapse0x2a05340() {
   return (neuron0x29e59b0()*0.0735227);
}

double NNfunction_ss_uLdR::synapse0x2a05380() {
   return (neuron0x29e5f10()*0.0718421);
}

double NNfunction_ss_uLdR::synapse0x29f5eb0() {
   return (neuron0x29e6130()*0.16713);
}

double NNfunction_ss_uLdR::synapse0x29f5ef0() {
   return (neuron0x29e6470()*-0.0238289);
}

double NNfunction_ss_uLdR::synapse0x29f5f30() {
   return (neuron0x29e67b0()*0.0504453);
}

double NNfunction_ss_uLdR::synapse0x29f5f70() {
   return (neuron0x29e6af0()*-0.0627717);
}

double NNfunction_ss_uLdR::synapse0x29f5fb0() {
   return (neuron0x29e6e30()*0.0336611);
}

double NNfunction_ss_uLdR::synapse0x29f5ff0() {
   return (neuron0x29e7170()*0.111784);
}

double NNfunction_ss_uLdR::synapse0x29f6370() {
   return (neuron0x29e25b0()*-0.0157609);
}

double NNfunction_ss_uLdR::synapse0x29f63b0() {
   return (neuron0x29e28f0()*0.0178711);
}

double NNfunction_ss_uLdR::synapse0x29f63f0() {
   return (neuron0x29e2c30()*0.0429729);
}

double NNfunction_ss_uLdR::synapse0x29f6430() {
   return (neuron0x29e2f70()*-0.130245);
}

double NNfunction_ss_uLdR::synapse0x29f6470() {
   return (neuron0x29e32b0()*0.0037571);
}

double NNfunction_ss_uLdR::synapse0x29f64b0() {
   return (neuron0x29e35f0()*-0.0198135);
}

double NNfunction_ss_uLdR::synapse0x29f64f0() {
   return (neuron0x29e3930()*-0.0237044);
}

double NNfunction_ss_uLdR::synapse0x29f6530() {
   return (neuron0x29e3c70()*-0.016584);
}

double NNfunction_ss_uLdR::synapse0x29f6570() {
   return (neuron0x29e3fb0()*-0.0190418);
}

double NNfunction_ss_uLdR::synapse0x29f65b0() {
   return (neuron0x29e42f0()*0.0517911);
}

double NNfunction_ss_uLdR::synapse0x29f65f0() {
   return (neuron0x29e4630()*0.0410722);
}

double NNfunction_ss_uLdR::synapse0x29f6630() {
   return (neuron0x29e4970()*-0.000805944);
}

double NNfunction_ss_uLdR::synapse0x29f6670() {
   return (neuron0x29e4cb0()*0.0286794);
}

double NNfunction_ss_uLdR::synapse0x29f66b0() {
   return (neuron0x29e4ff0()*-0.0231152);
}

double NNfunction_ss_uLdR::synapse0x29f66f0() {
   return (neuron0x29e5330()*-0.00548085);
}

double NNfunction_ss_uLdR::synapse0x29f6730() {
   return (neuron0x29e5670()*0.0179085);
}

double NNfunction_ss_uLdR::synapse0x29f61c0() {
   return (neuron0x29e59b0()*-0.0246033);
}

double NNfunction_ss_uLdR::synapse0x29f6200() {
   return (neuron0x29e5f10()*-0.65409);
}

double NNfunction_ss_uLdR::synapse0x29f6880() {
   return (neuron0x29e6130()*-0.0355228);
}

double NNfunction_ss_uLdR::synapse0x29f68c0() {
   return (neuron0x29e6470()*-0.0200289);
}

double NNfunction_ss_uLdR::synapse0x29f6900() {
   return (neuron0x29e67b0()*-0.0154532);
}

double NNfunction_ss_uLdR::synapse0x29f6940() {
   return (neuron0x29e6af0()*0.00520139);
}

double NNfunction_ss_uLdR::synapse0x29f6980() {
   return (neuron0x29e6e30()*-0.0181799);
}

double NNfunction_ss_uLdR::synapse0x29f69c0() {
   return (neuron0x29e7170()*-0.0263676);
}

double NNfunction_ss_uLdR::synapse0x29f6d40() {
   return (neuron0x29e25b0()*0.0921851);
}

double NNfunction_ss_uLdR::synapse0x29f6d80() {
   return (neuron0x29e28f0()*-0.595372);
}

double NNfunction_ss_uLdR::synapse0x29f6dc0() {
   return (neuron0x29e2c30()*-0.754902);
}

double NNfunction_ss_uLdR::synapse0x29f6e00() {
   return (neuron0x29e2f70()*0.26078);
}

double NNfunction_ss_uLdR::synapse0x29f6e40() {
   return (neuron0x29e32b0()*0.223063);
}

double NNfunction_ss_uLdR::synapse0x29f6e80() {
   return (neuron0x29e35f0()*0.291386);
}

double NNfunction_ss_uLdR::synapse0x29f6ec0() {
   return (neuron0x29e3930()*0.192765);
}

double NNfunction_ss_uLdR::synapse0x29f6f00() {
   return (neuron0x29e3c70()*0.942806);
}

double NNfunction_ss_uLdR::synapse0x29f6f40() {
   return (neuron0x29e3fb0()*0.395329);
}

double NNfunction_ss_uLdR::synapse0x29f6f80() {
   return (neuron0x29e42f0()*0.415556);
}

double NNfunction_ss_uLdR::synapse0x29f6fc0() {
   return (neuron0x29e4630()*0.592033);
}

double NNfunction_ss_uLdR::synapse0x29f7000() {
   return (neuron0x29e4970()*-0.351406);
}

double NNfunction_ss_uLdR::synapse0x29f7040() {
   return (neuron0x29e4cb0()*0.100393);
}

double NNfunction_ss_uLdR::synapse0x29f7080() {
   return (neuron0x29e4ff0()*-0.598287);
}

double NNfunction_ss_uLdR::synapse0x29f70c0() {
   return (neuron0x29e5330()*0.186525);
}

double NNfunction_ss_uLdR::synapse0x29f7100() {
   return (neuron0x29e5670()*1.23686);
}

double NNfunction_ss_uLdR::synapse0x29f6b90() {
   return (neuron0x29e59b0()*-0.012412);
}

double NNfunction_ss_uLdR::synapse0x29f6bd0() {
   return (neuron0x29e5f10()*0.601858);
}

double NNfunction_ss_uLdR::synapse0x29f7250() {
   return (neuron0x29e6130()*-0.0404163);
}

double NNfunction_ss_uLdR::synapse0x29f7290() {
   return (neuron0x29e6470()*-0.732564);
}

double NNfunction_ss_uLdR::synapse0x29f72d0() {
   return (neuron0x29e67b0()*-0.0665956);
}

double NNfunction_ss_uLdR::synapse0x29f7310() {
   return (neuron0x29e6af0()*0.146767);
}

double NNfunction_ss_uLdR::synapse0x29f7350() {
   return (neuron0x29e6e30()*-0.0714037);
}

double NNfunction_ss_uLdR::synapse0x29f7390() {
   return (neuron0x29e7170()*-0.225153);
}

double NNfunction_ss_uLdR::synapse0x29f7710() {
   return (neuron0x29e25b0()*0.286969);
}

double NNfunction_ss_uLdR::synapse0x29f7750() {
   return (neuron0x29e28f0()*-0.314861);
}

double NNfunction_ss_uLdR::synapse0x29f7790() {
   return (neuron0x29e2c30()*-0.765164);
}

double NNfunction_ss_uLdR::synapse0x29f77d0() {
   return (neuron0x29e2f70()*0.451864);
}

double NNfunction_ss_uLdR::synapse0x29f7810() {
   return (neuron0x29e32b0()*0.761726);
}

double NNfunction_ss_uLdR::synapse0x29f7850() {
   return (neuron0x29e35f0()*-0.463621);
}

double NNfunction_ss_uLdR::synapse0x29f7890() {
   return (neuron0x29e3930()*-0.318328);
}

double NNfunction_ss_uLdR::synapse0x29f78d0() {
   return (neuron0x29e3c70()*0.096295);
}

double NNfunction_ss_uLdR::synapse0x29f7910() {
   return (neuron0x29e3fb0()*0.0268414);
}

double NNfunction_ss_uLdR::synapse0x29f7950() {
   return (neuron0x29e42f0()*-0.460657);
}

double NNfunction_ss_uLdR::synapse0x29f7990() {
   return (neuron0x29e4630()*-0.478095);
}

double NNfunction_ss_uLdR::synapse0x29f79d0() {
   return (neuron0x29e4970()*0.702993);
}

double NNfunction_ss_uLdR::synapse0x29f7a10() {
   return (neuron0x29e4cb0()*-0.414039);
}

double NNfunction_ss_uLdR::synapse0x29f7a50() {
   return (neuron0x29e4ff0()*0.260238);
}

double NNfunction_ss_uLdR::synapse0x29f7a90() {
   return (neuron0x29e5330()*-0.374397);
}

double NNfunction_ss_uLdR::synapse0x29f7ad0() {
   return (neuron0x29e5670()*0.052092);
}

double NNfunction_ss_uLdR::synapse0x29f7560() {
   return (neuron0x29e59b0()*0.150198);
}

double NNfunction_ss_uLdR::synapse0x29f75a0() {
   return (neuron0x29e5f10()*0.434351);
}

double NNfunction_ss_uLdR::synapse0x29f7c20() {
   return (neuron0x29e6130()*0.141852);
}

double NNfunction_ss_uLdR::synapse0x29f7c60() {
   return (neuron0x29e6470()*-0.550515);
}

double NNfunction_ss_uLdR::synapse0x29f7ca0() {
   return (neuron0x29e67b0()*-0.283174);
}

double NNfunction_ss_uLdR::synapse0x29f7ce0() {
   return (neuron0x29e6af0()*0.598907);
}

double NNfunction_ss_uLdR::synapse0x29f7d20() {
   return (neuron0x29e6e30()*0.265049);
}

double NNfunction_ss_uLdR::synapse0x29f7d60() {
   return (neuron0x29e7170()*0.125356);
}

double NNfunction_ss_uLdR::synapse0x2a09c30() {
   return (neuron0x29e25b0()*-0.0203841);
}

double NNfunction_ss_uLdR::synapse0x2a09c70() {
   return (neuron0x29e28f0()*-0.00970567);
}

double NNfunction_ss_uLdR::synapse0x2a09cb0() {
   return (neuron0x29e2c30()*-0.0672247);
}

double NNfunction_ss_uLdR::synapse0x2a09cf0() {
   return (neuron0x29e2f70()*0.0997896);
}

double NNfunction_ss_uLdR::synapse0x2a09d30() {
   return (neuron0x29e32b0()*-0.0115726);
}

double NNfunction_ss_uLdR::synapse0x2a09d70() {
   return (neuron0x29e35f0()*0.0027301);
}

double NNfunction_ss_uLdR::synapse0x2a09db0() {
   return (neuron0x29e3930()*0.0324371);
}

double NNfunction_ss_uLdR::synapse0x2a09df0() {
   return (neuron0x29e3c70()*0.0208158);
}

double NNfunction_ss_uLdR::synapse0x2a09e30() {
   return (neuron0x29e3fb0()*-0.0127511);
}

double NNfunction_ss_uLdR::synapse0x2a09e70() {
   return (neuron0x29e42f0()*-0.0508607);
}

double NNfunction_ss_uLdR::synapse0x2a09eb0() {
   return (neuron0x29e4630()*-0.0288584);
}

double NNfunction_ss_uLdR::synapse0x2a09ef0() {
   return (neuron0x29e4970()*-0.236978);
}

double NNfunction_ss_uLdR::synapse0x2a09f30() {
   return (neuron0x29e4cb0()*0.00344534);
}

double NNfunction_ss_uLdR::synapse0x2a09f70() {
   return (neuron0x29e4ff0()*0.0529615);
}

double NNfunction_ss_uLdR::synapse0x2a09fb0() {
   return (neuron0x29e5330()*0.0229384);
}

double NNfunction_ss_uLdR::synapse0x2a09ff0() {
   return (neuron0x29e5670()*0.020839);
}

double NNfunction_ss_uLdR::synapse0x29f7da0() {
   return (neuron0x29e59b0()*0.029653);
}

double NNfunction_ss_uLdR::synapse0x29f7de0() {
   return (neuron0x29e5f10()*2.1307);
}

double NNfunction_ss_uLdR::synapse0x2a0a140() {
   return (neuron0x29e6130()*0.0127912);
}

double NNfunction_ss_uLdR::synapse0x2a0a180() {
   return (neuron0x29e6470()*0.00718804);
}

double NNfunction_ss_uLdR::synapse0x2a0a1c0() {
   return (neuron0x29e67b0()*0.00560349);
}

double NNfunction_ss_uLdR::synapse0x2a0a200() {
   return (neuron0x29e6af0()*-0.0293707);
}

double NNfunction_ss_uLdR::synapse0x2a0a240() {
   return (neuron0x29e6e30()*0.00862161);
}

double NNfunction_ss_uLdR::synapse0x2a0a280() {
   return (neuron0x29e7170()*0.0275694);
}

double NNfunction_ss_uLdR::synapse0x2a0a600() {
   return (neuron0x29e25b0()*-0.21635);
}

double NNfunction_ss_uLdR::synapse0x2a0a640() {
   return (neuron0x29e28f0()*-0.569698);
}

double NNfunction_ss_uLdR::synapse0x2a0a680() {
   return (neuron0x29e2c30()*0.302313);
}

double NNfunction_ss_uLdR::synapse0x2a0a6c0() {
   return (neuron0x29e2f70()*0.202037);
}

double NNfunction_ss_uLdR::synapse0x2a0a700() {
   return (neuron0x29e32b0()*-0.00769846);
}

double NNfunction_ss_uLdR::synapse0x2a0a740() {
   return (neuron0x29e35f0()*-0.867919);
}

double NNfunction_ss_uLdR::synapse0x2a0a780() {
   return (neuron0x29e3930()*0.157494);
}

double NNfunction_ss_uLdR::synapse0x2a0a7c0() {
   return (neuron0x29e3c70()*-0.261905);
}

double NNfunction_ss_uLdR::synapse0x2a0a800() {
   return (neuron0x29e3fb0()*0.0562497);
}

double NNfunction_ss_uLdR::synapse0x2a0a840() {
   return (neuron0x29e42f0()*0.247918);
}

double NNfunction_ss_uLdR::synapse0x2a0a880() {
   return (neuron0x29e4630()*0.761581);
}

double NNfunction_ss_uLdR::synapse0x2a0a8c0() {
   return (neuron0x29e4970()*-0.453049);
}

double NNfunction_ss_uLdR::synapse0x2a0a900() {
   return (neuron0x29e4cb0()*-0.499915);
}

double NNfunction_ss_uLdR::synapse0x2a0a940() {
   return (neuron0x29e4ff0()*0.0548262);
}

double NNfunction_ss_uLdR::synapse0x2a0a980() {
   return (neuron0x29e5330()*-0.639349);
}

double NNfunction_ss_uLdR::synapse0x2a0a9c0() {
   return (neuron0x29e5670()*-0.105739);
}

double NNfunction_ss_uLdR::synapse0x2a0a450() {
   return (neuron0x29e59b0()*-0.402359);
}

double NNfunction_ss_uLdR::synapse0x2a0a490() {
   return (neuron0x29e5f10()*-0.415644);
}

double NNfunction_ss_uLdR::synapse0x2a0ab10() {
   return (neuron0x29e6130()*0.361548);
}

double NNfunction_ss_uLdR::synapse0x2a0ab50() {
   return (neuron0x29e6470()*-0.134167);
}

double NNfunction_ss_uLdR::synapse0x2a0ab90() {
   return (neuron0x29e67b0()*-0.311369);
}

double NNfunction_ss_uLdR::synapse0x2a0abd0() {
   return (neuron0x29e6af0()*0.026382);
}

double NNfunction_ss_uLdR::synapse0x2a0ac10() {
   return (neuron0x29e6e30()*0.486015);
}

double NNfunction_ss_uLdR::synapse0x2a0ac50() {
   return (neuron0x29e7170()*0.518931);
}

double NNfunction_ss_uLdR::synapse0x2a0afd0() {
   return (neuron0x29e25b0()*-0.00813402);
}

double NNfunction_ss_uLdR::synapse0x2a0b010() {
   return (neuron0x29e28f0()*0.0353997);
}

double NNfunction_ss_uLdR::synapse0x2a0b050() {
   return (neuron0x29e2c30()*-0.0776136);
}

double NNfunction_ss_uLdR::synapse0x2a0b090() {
   return (neuron0x29e2f70()*-0.83132);
}

double NNfunction_ss_uLdR::synapse0x2a0b0d0() {
   return (neuron0x29e32b0()*-0.09099);
}

double NNfunction_ss_uLdR::synapse0x2a0b110() {
   return (neuron0x29e35f0()*-0.0618528);
}

double NNfunction_ss_uLdR::synapse0x2a0b150() {
   return (neuron0x29e3930()*0.470038);
}

double NNfunction_ss_uLdR::synapse0x2a0b190() {
   return (neuron0x29e3c70()*0.228491);
}

double NNfunction_ss_uLdR::synapse0x2a0b1d0() {
   return (neuron0x29e3fb0()*0.0893985);
}

double NNfunction_ss_uLdR::synapse0x2a0b210() {
   return (neuron0x29e42f0()*0.481966);
}

double NNfunction_ss_uLdR::synapse0x2a0b250() {
   return (neuron0x29e4630()*0.294819);
}

double NNfunction_ss_uLdR::synapse0x2a0b290() {
   return (neuron0x29e4970()*-0.826636);
}

double NNfunction_ss_uLdR::synapse0x2a0b2d0() {
   return (neuron0x29e4cb0()*0.460829);
}

double NNfunction_ss_uLdR::synapse0x2a0b310() {
   return (neuron0x29e4ff0()*0.892173);
}

double NNfunction_ss_uLdR::synapse0x2a0b350() {
   return (neuron0x29e5330()*0.249203);
}

double NNfunction_ss_uLdR::synapse0x2a0b390() {
   return (neuron0x29e5670()*0.0577727);
}

double NNfunction_ss_uLdR::synapse0x2a0ae20() {
   return (neuron0x29e59b0()*-0.422881);
}

double NNfunction_ss_uLdR::synapse0x2a0ae60() {
   return (neuron0x29e5f10()*-0.211505);
}

double NNfunction_ss_uLdR::synapse0x2a0b4e0() {
   return (neuron0x29e6130()*-0.205935);
}

double NNfunction_ss_uLdR::synapse0x2a0b520() {
   return (neuron0x29e6470()*-0.772493);
}

double NNfunction_ss_uLdR::synapse0x2a0b560() {
   return (neuron0x29e67b0()*0.0827222);
}

double NNfunction_ss_uLdR::synapse0x2a0b5a0() {
   return (neuron0x29e6af0()*-0.0224554);
}

double NNfunction_ss_uLdR::synapse0x2a0b5e0() {
   return (neuron0x29e6e30()*-0.210857);
}

double NNfunction_ss_uLdR::synapse0x2a0b620() {
   return (neuron0x29e7170()*-0.258505);
}

double NNfunction_ss_uLdR::synapse0x2a0b9a0() {
   return (neuron0x29e25b0()*0.0531257);
}

double NNfunction_ss_uLdR::synapse0x2a0b9e0() {
   return (neuron0x29e28f0()*-0.340973);
}

double NNfunction_ss_uLdR::synapse0x2a0ba20() {
   return (neuron0x29e2c30()*0.326425);
}

double NNfunction_ss_uLdR::synapse0x2a0ba60() {
   return (neuron0x29e2f70()*-1.00618);
}

double NNfunction_ss_uLdR::synapse0x2a0baa0() {
   return (neuron0x29e32b0()*0.0534506);
}

double NNfunction_ss_uLdR::synapse0x2a0bae0() {
   return (neuron0x29e35f0()*0.450535);
}

double NNfunction_ss_uLdR::synapse0x2a0bb20() {
   return (neuron0x29e3930()*0.186783);
}

double NNfunction_ss_uLdR::synapse0x2a0bb60() {
   return (neuron0x29e3c70()*-0.435766);
}

double NNfunction_ss_uLdR::synapse0x2a0bba0() {
   return (neuron0x29e3fb0()*0.0757359);
}

double NNfunction_ss_uLdR::synapse0x2a0bbe0() {
   return (neuron0x29e42f0()*0.52828);
}

double NNfunction_ss_uLdR::synapse0x2a0bc20() {
   return (neuron0x29e4630()*0.0877306);
}

double NNfunction_ss_uLdR::synapse0x2a0bc60() {
   return (neuron0x29e4970()*0.157856);
}

double NNfunction_ss_uLdR::synapse0x2a0bca0() {
   return (neuron0x29e4cb0()*0.0689758);
}

double NNfunction_ss_uLdR::synapse0x2a0bce0() {
   return (neuron0x29e4ff0()*-0.749469);
}

double NNfunction_ss_uLdR::synapse0x2a0bd20() {
   return (neuron0x29e5330()*-0.531387);
}

double NNfunction_ss_uLdR::synapse0x2a0bd60() {
   return (neuron0x29e5670()*-0.784197);
}

double NNfunction_ss_uLdR::synapse0x2a0b7f0() {
   return (neuron0x29e59b0()*-0.0378551);
}

double NNfunction_ss_uLdR::synapse0x2a0b830() {
   return (neuron0x29e5f10()*-0.127283);
}

double NNfunction_ss_uLdR::synapse0x2a0beb0() {
   return (neuron0x29e6130()*1.88402);
}

double NNfunction_ss_uLdR::synapse0x2a0bef0() {
   return (neuron0x29e6470()*0.371449);
}

double NNfunction_ss_uLdR::synapse0x2a0bf30() {
   return (neuron0x29e67b0()*-0.131187);
}

double NNfunction_ss_uLdR::synapse0x2a0bf70() {
   return (neuron0x29e6af0()*-0.489474);
}

double NNfunction_ss_uLdR::synapse0x2a0bfb0() {
   return (neuron0x29e6e30()*0.479036);
}

double NNfunction_ss_uLdR::synapse0x2a0bff0() {
   return (neuron0x29e7170()*0.0628467);
}

double NNfunction_ss_uLdR::synapse0x27abf00() {
   return (neuron0x29e75e0()*0.915261);
}

double NNfunction_ss_uLdR::synapse0x27abf40() {
   return (neuron0x29e7f30()*-0.406144);
}

double NNfunction_ss_uLdR::synapse0x29e9aa0() {
   return (neuron0x29e8a10()*0.589237);
}

double NNfunction_ss_uLdR::synapse0x29e9ae0() {
   return (neuron0x29e84b0()*0.525666);
}

double NNfunction_ss_uLdR::synapse0x29ea470() {
   return (neuron0x29e97f0()*-1.09416);
}

double NNfunction_ss_uLdR::synapse0x29ea4b0() {
   return (neuron0x29ea1c0()*-0.162299);
}

double NNfunction_ss_uLdR::synapse0x29eb240() {
   return (neuron0x29eaf90()*-1.29568);
}

double NNfunction_ss_uLdR::synapse0x29eb280() {
   return (neuron0x29eb960()*-2.08167);
}

double NNfunction_ss_uLdR::synapse0x29ebc10() {
   return (neuron0x29ec330()*0.298168);
}

double NNfunction_ss_uLdR::synapse0x29ebc50() {
   return (neuron0x29ece10()*-0.983369);
}

double NNfunction_ss_uLdR::synapse0x29ec5e0() {
   return (neuron0x29ed7e0()*1.34412);
}

double NNfunction_ss_uLdR::synapse0x29ec620() {
   return (neuron0x29ea8c0()*1.86706);
}

double NNfunction_ss_uLdR::synapse0x29ed0c0() {
   return (neuron0x29ef390()*-1.97908);
}

double NNfunction_ss_uLdR::synapse0x29ed100() {
   return (neuron0x29efd60()*1.14681);
}

double NNfunction_ss_uLdR::synapse0x29eda90() {
   return (neuron0x29f0730()*0.681781);
}

double NNfunction_ss_uLdR::synapse0x29edad0() {
   return (neuron0x29f1100()*-0.0910457);
}

double NNfunction_ss_uLdR::synapse0x29eab70() {
   return (neuron0x29f2f10()*-0.336408);
}

double NNfunction_ss_uLdR::synapse0x29eabb0() {
   return (neuron0x29f31f0()*-0.598691);
}

double NNfunction_ss_uLdR::synapse0x29ef640() {
   return (neuron0x29f3bc0()*1.79162);
}

double NNfunction_ss_uLdR::synapse0x29ef680() {
   return (neuron0x29f4590()*0.0147329);
}

double NNfunction_ss_uLdR::synapse0x29f0010() {
   return (neuron0x29f4f60()*0.297163);
}

double NNfunction_ss_uLdR::synapse0x29f0050() {
   return (neuron0x29f5930()*-1.12924);
}

double NNfunction_ss_uLdR::synapse0x29f09e0() {
   return (neuron0x29ee480()*0.142712);
}

double NNfunction_ss_uLdR::synapse0x29f0a20() {
   return (neuron0x29eee50()*-0.228778);
}

double NNfunction_ss_uLdR::synapse0x29f13b0() {
   return (neuron0x29f86c0()*-0.42865);
}

double NNfunction_ss_uLdR::synapse0x29f13f0() {
   return (neuron0x29f9090()*-1.24923);
}

double NNfunction_ss_uLdR::synapse0x29e5550() {
   return (neuron0x29f9a60()*0.596225);
}

double NNfunction_ss_uLdR::synapse0x29e5590() {
   return (neuron0x29fa430()*1.93033);
}

double NNfunction_ss_uLdR::synapse0x29f34a0() {
   return (neuron0x29fae00()*-1.33571);
}

double NNfunction_ss_uLdR::synapse0x29f34e0() {
   return (neuron0x29fb7d0()*-0.213468);
}

double NNfunction_ss_uLdR::synapse0x29f3e70() {
   return (neuron0x29fc1a0()*-0.0565969);
}

double NNfunction_ss_uLdR::synapse0x29f3eb0() {
   return (neuron0x29fcb70()*7.96426);
}

double NNfunction_ss_uLdR::synapse0x29f4840() {
   return (neuron0x29f2c00()*1.34031);
}

double NNfunction_ss_uLdR::synapse0x29f4880() {
   return (neuron0x29ff750()*0.103913);
}

double NNfunction_ss_uLdR::synapse0x29f5210() {
   return (neuron0x2a00120()*-0.393967);
}

double NNfunction_ss_uLdR::synapse0x29f5250() {
   return (neuron0x2a00af0()*1.38048);
}

double NNfunction_ss_uLdR::synapse0x29f5be0() {
   return (neuron0x2a014c0()*1.22652);
}

double NNfunction_ss_uLdR::synapse0x29f5c20() {
   return (neuron0x2a01e90()*-0.723268);
}

double NNfunction_ss_uLdR::synapse0x29ee730() {
   return (neuron0x2a02860()*1.85121);
}

double NNfunction_ss_uLdR::synapse0x29ee770() {
   return (neuron0x2a03230()*-0.0578065);
}

double NNfunction_ss_uLdR::synapse0x29f7fe0() {
   return (neuron0x2a03c00()*1.35058);
}

double NNfunction_ss_uLdR::synapse0x29f8020() {
   return (neuron0x2a047e0()*2.52257);
}

double NNfunction_ss_uLdR::synapse0x29f8970() {
   return (neuron0x2a051b0()*0.24189);
}

double NNfunction_ss_uLdR::synapse0x29f89b0() {
   return (neuron0x29f6030()*-1.10964);
}

double NNfunction_ss_uLdR::synapse0x29f9340() {
   return (neuron0x29f6a00()*0.219121);
}

double NNfunction_ss_uLdR::synapse0x29f9380() {
   return (neuron0x29f73d0()*-0.320552);
}

double NNfunction_ss_uLdR::synapse0x29f9d10() {
   return (neuron0x2a09a10()*1.9445);
}

double NNfunction_ss_uLdR::synapse0x29f9d50() {
   return (neuron0x2a0a2c0()*-0.961602);
}

double NNfunction_ss_uLdR::synapse0x29fa6e0() {
   return (neuron0x2a0ac90()*-1.29382);
}

double NNfunction_ss_uLdR::synapse0x29fa720() {
   return (neuron0x2a0b660()*0.250436);
}

double NNfunction_ss_uLdR::synapse0x29fce20() {
   return (neuron0x29e75e0()*-0.154557);
}

double NNfunction_ss_uLdR::synapse0x29fce60() {
   return (neuron0x29e7f30()*-0.0799015);
}

double NNfunction_ss_uLdR::synapse0x29f23e0() {
   return (neuron0x29e8a10()*0.181147);
}

double NNfunction_ss_uLdR::synapse0x29f2420() {
   return (neuron0x29e84b0()*0.358685);
}

double NNfunction_ss_uLdR::synapse0x29ffa00() {
   return (neuron0x29e97f0()*-0.0971636);
}

double NNfunction_ss_uLdR::synapse0x29ffa40() {
   return (neuron0x29ea1c0()*-0.290686);
}

double NNfunction_ss_uLdR::synapse0x2a003d0() {
   return (neuron0x29eaf90()*-0.858181);
}

double NNfunction_ss_uLdR::synapse0x2a00410() {
   return (neuron0x29eb960()*-0.563385);
}

double NNfunction_ss_uLdR::synapse0x2a00da0() {
   return (neuron0x29ec330()*-0.109778);
}

double NNfunction_ss_uLdR::synapse0x2a00de0() {
   return (neuron0x29ece10()*0.243609);
}

double NNfunction_ss_uLdR::synapse0x2a01770() {
   return (neuron0x29ed7e0()*-1.77001);
}

double NNfunction_ss_uLdR::synapse0x2a017b0() {
   return (neuron0x29ea8c0()*-0.308327);
}

double NNfunction_ss_uLdR::synapse0x2a02140() {
   return (neuron0x29ef390()*0.247529);
}

double NNfunction_ss_uLdR::synapse0x2a02180() {
   return (neuron0x29efd60()*-0.149516);
}

double NNfunction_ss_uLdR::synapse0x2a02b10() {
   return (neuron0x29f0730()*-0.254121);
}

double NNfunction_ss_uLdR::synapse0x2a02b50() {
   return (neuron0x29f1100()*0.0763541);
}

double NNfunction_ss_uLdR::synapse0x2a034e0() {
   return (neuron0x29f2f10()*-0.0713839);
}

double NNfunction_ss_uLdR::synapse0x2a03520() {
   return (neuron0x29f31f0()*0.101387);
}

double NNfunction_ss_uLdR::synapse0x2a03eb0() {
   return (neuron0x29f3bc0()*-1.29366);
}

double NNfunction_ss_uLdR::synapse0x2a03ef0() {
   return (neuron0x29f4590()*0.191124);
}

double NNfunction_ss_uLdR::synapse0x2a04a90() {
   return (neuron0x29f4f60()*0.0826066);
}

double NNfunction_ss_uLdR::synapse0x2a04ad0() {
   return (neuron0x29f5930()*-0.0886089);
}

double NNfunction_ss_uLdR::synapse0x2a05460() {
   return (neuron0x29ee480()*-0.246684);
}

double NNfunction_ss_uLdR::synapse0x2a054a0() {
   return (neuron0x29eee50()*-0.418489);
}

double NNfunction_ss_uLdR::synapse0x29f62e0() {
   return (neuron0x29f86c0()*-0.0369682);
}

double NNfunction_ss_uLdR::synapse0x29f6320() {
   return (neuron0x29f9090()*-0.0558813);
}

double NNfunction_ss_uLdR::synapse0x29f6cb0() {
   return (neuron0x29f9a60()*-0.0868497);
}

double NNfunction_ss_uLdR::synapse0x29f6cf0() {
   return (neuron0x29fa430()*0.613674);
}

double NNfunction_ss_uLdR::synapse0x29f7680() {
   return (neuron0x29fae00()*-0.698285);
}

double NNfunction_ss_uLdR::synapse0x29f76c0() {
   return (neuron0x29fb7d0()*0.0789846);
}

double NNfunction_ss_uLdR::synapse0x2a09ba0() {
   return (neuron0x29fc1a0()*1.27462);
}

double NNfunction_ss_uLdR::synapse0x2a09be0() {
   return (neuron0x29fcb70()*0.10594);
}

double NNfunction_ss_uLdR::synapse0x2a0a570() {
   return (neuron0x29f2c00()*0.581208);
}

double NNfunction_ss_uLdR::synapse0x2a0a5b0() {
   return (neuron0x29ff750()*0.218457);
}

double NNfunction_ss_uLdR::synapse0x2a0af40() {
   return (neuron0x2a00120()*1.64806);
}

double NNfunction_ss_uLdR::synapse0x2a0af80() {
   return (neuron0x2a00af0()*-0.377684);
}

double NNfunction_ss_uLdR::synapse0x2a0b910() {
   return (neuron0x2a014c0()*1.92484);
}

double NNfunction_ss_uLdR::synapse0x2a0b950() {
   return (neuron0x2a01e90()*-0.344113);
}

double NNfunction_ss_uLdR::synapse0x29e7800() {
   return (neuron0x2a02860()*0.77887);
}

double NNfunction_ss_uLdR::synapse0x29e7840() {
   return (neuron0x2a03230()*-0.0410216);
}

double NNfunction_ss_uLdR::synapse0x29fb0b0() {
   return (neuron0x2a03c00()*0.0903164);
}

double NNfunction_ss_uLdR::synapse0x29fb0f0() {
   return (neuron0x2a047e0()*4.87051);
}

double NNfunction_ss_uLdR::synapse0x2a0c030() {
   return (neuron0x2a051b0()*-0.260641);
}

double NNfunction_ss_uLdR::synapse0x2a0c070() {
   return (neuron0x29f6030()*-0.4142);
}

double NNfunction_ss_uLdR::synapse0x2a0c0b0() {
   return (neuron0x29f6a00()*0.0076059);
}

double NNfunction_ss_uLdR::synapse0x2a0c0f0() {
   return (neuron0x29f73d0()*0.115845);
}

double NNfunction_ss_uLdR::synapse0x2a12fa0() {
   return (neuron0x2a09a10()*0.960307);
}

double NNfunction_ss_uLdR::synapse0x2a12fe0() {
   return (neuron0x2a0a2c0()*0.116976);
}

double NNfunction_ss_uLdR::synapse0x2a13020() {
   return (neuron0x2a0ac90()*0.209869);
}

double NNfunction_ss_uLdR::synapse0x2a13060() {
   return (neuron0x2a0b660()*-0.0332777);
}

double NNfunction_ss_uLdR::synapse0x2a133e0() {
   return (neuron0x29e75e0()*0.143761);
}

double NNfunction_ss_uLdR::synapse0x2a13420() {
   return (neuron0x29e7f30()*0.0246171);
}

double NNfunction_ss_uLdR::synapse0x2a13460() {
   return (neuron0x29e8a10()*0.0554215);
}

double NNfunction_ss_uLdR::synapse0x2a134a0() {
   return (neuron0x29e84b0()*-0.205823);
}

double NNfunction_ss_uLdR::synapse0x2a134e0() {
   return (neuron0x29e97f0()*0.107475);
}

double NNfunction_ss_uLdR::synapse0x2a13520() {
   return (neuron0x29ea1c0()*0.255819);
}

double NNfunction_ss_uLdR::synapse0x2a13560() {
   return (neuron0x29eaf90()*-0.548217);
}

double NNfunction_ss_uLdR::synapse0x2a135a0() {
   return (neuron0x29eb960()*0.509109);
}

double NNfunction_ss_uLdR::synapse0x2a135e0() {
   return (neuron0x29ec330()*0.00353809);
}

double NNfunction_ss_uLdR::synapse0x2a13620() {
   return (neuron0x29ece10()*-0.245177);
}

double NNfunction_ss_uLdR::synapse0x2a13660() {
   return (neuron0x29ed7e0()*0.432101);
}

double NNfunction_ss_uLdR::synapse0x2a136a0() {
   return (neuron0x29ea8c0()*0.188732);
}

double NNfunction_ss_uLdR::synapse0x2a136e0() {
   return (neuron0x29ef390()*0.0221188);
}

double NNfunction_ss_uLdR::synapse0x2a13720() {
   return (neuron0x29efd60()*-0.0419231);
}

double NNfunction_ss_uLdR::synapse0x2a13760() {
   return (neuron0x29f0730()*0.465807);
}

double NNfunction_ss_uLdR::synapse0x2a137a0() {
   return (neuron0x29f1100()*-0.0239578);
}

double NNfunction_ss_uLdR::synapse0x2a13230() {
   return (neuron0x29f2f10()*0.00156217);
}

double NNfunction_ss_uLdR::synapse0x2a13270() {
   return (neuron0x29f31f0()*-0.0982885);
}

double NNfunction_ss_uLdR::synapse0x2a138f0() {
   return (neuron0x29f3bc0()*-0.562341);
}

double NNfunction_ss_uLdR::synapse0x2a13930() {
   return (neuron0x29f4590()*-0.172846);
}

double NNfunction_ss_uLdR::synapse0x2a13970() {
   return (neuron0x29f4f60()*-0.0120154);
}

double NNfunction_ss_uLdR::synapse0x2a139b0() {
   return (neuron0x29f5930()*0.0192805);
}

double NNfunction_ss_uLdR::synapse0x2a139f0() {
   return (neuron0x29ee480()*0.371206);
}

double NNfunction_ss_uLdR::synapse0x2a13a30() {
   return (neuron0x29eee50()*0.238433);
}

double NNfunction_ss_uLdR::synapse0x2a13a70() {
   return (neuron0x29f86c0()*0.157657);
}

double NNfunction_ss_uLdR::synapse0x2a13ab0() {
   return (neuron0x29f9090()*0.0884814);
}

double NNfunction_ss_uLdR::synapse0x2a13af0() {
   return (neuron0x29f9a60()*0.254554);
}

double NNfunction_ss_uLdR::synapse0x2a13b30() {
   return (neuron0x29fa430()*-0.0806525);
}

double NNfunction_ss_uLdR::synapse0x2a13b70() {
   return (neuron0x29fae00()*-0.75466);
}

double NNfunction_ss_uLdR::synapse0x2a13bb0() {
   return (neuron0x29fb7d0()*-3.09901);
}

double NNfunction_ss_uLdR::synapse0x2a13bf0() {
   return (neuron0x29fc1a0()*1.26993);
}

double NNfunction_ss_uLdR::synapse0x2a13c30() {
   return (neuron0x29fcb70()*3.42987);
}

double NNfunction_ss_uLdR::synapse0x2a137e0() {
   return (neuron0x29f2c00()*0.0341768);
}

double NNfunction_ss_uLdR::synapse0x2a13820() {
   return (neuron0x29ff750()*-0.32995);
}

double NNfunction_ss_uLdR::synapse0x2a13860() {
   return (neuron0x2a00120()*-0.688832);
}

double NNfunction_ss_uLdR::synapse0x2a138a0() {
   return (neuron0x2a00af0()*0.114615);
}

double NNfunction_ss_uLdR::synapse0x2a13e80() {
   return (neuron0x2a014c0()*0.827616);
}

double NNfunction_ss_uLdR::synapse0x2a13ec0() {
   return (neuron0x2a01e90()*-1.1033);
}

double NNfunction_ss_uLdR::synapse0x2a13f00() {
   return (neuron0x2a02860()*0.48296);
}

double NNfunction_ss_uLdR::synapse0x2a13f40() {
   return (neuron0x2a03230()*0.105336);
}

double NNfunction_ss_uLdR::synapse0x2a13f80() {
   return (neuron0x2a03c00()*-0.141823);
}

double NNfunction_ss_uLdR::synapse0x2a13fc0() {
   return (neuron0x2a047e0()*0.854894);
}

double NNfunction_ss_uLdR::synapse0x2a14000() {
   return (neuron0x2a051b0()*-0.787109);
}

double NNfunction_ss_uLdR::synapse0x2a14040() {
   return (neuron0x29f6030()*-1.69423);
}

double NNfunction_ss_uLdR::synapse0x2a14080() {
   return (neuron0x29f6a00()*0.0781375);
}

double NNfunction_ss_uLdR::synapse0x2a140c0() {
   return (neuron0x29f73d0()*0.0706597);
}

double NNfunction_ss_uLdR::synapse0x2a14100() {
   return (neuron0x2a09a10()*-0.174428);
}

double NNfunction_ss_uLdR::synapse0x2a14140() {
   return (neuron0x2a0a2c0()*-0.0493615);
}

double NNfunction_ss_uLdR::synapse0x2a14180() {
   return (neuron0x2a0ac90()*-0.120496);
}

double NNfunction_ss_uLdR::synapse0x2a141c0() {
   return (neuron0x2a0b660()*0.102203);
}

double NNfunction_ss_uLdR::synapse0x2a14540() {
   return (neuron0x29e75e0()*0.82907);
}

double NNfunction_ss_uLdR::synapse0x2a14580() {
   return (neuron0x29e7f30()*1.36282);
}

double NNfunction_ss_uLdR::synapse0x2a145c0() {
   return (neuron0x29e8a10()*-0.844288);
}

double NNfunction_ss_uLdR::synapse0x2a14600() {
   return (neuron0x29e84b0()*-0.466944);
}

double NNfunction_ss_uLdR::synapse0x2a14640() {
   return (neuron0x29e97f0()*-0.935687);
}

double NNfunction_ss_uLdR::synapse0x2a14680() {
   return (neuron0x29ea1c0()*1.82467);
}

double NNfunction_ss_uLdR::synapse0x2a146c0() {
   return (neuron0x29eaf90()*-0.694499);
}

double NNfunction_ss_uLdR::synapse0x2a14700() {
   return (neuron0x29eb960()*-1.26573);
}

double NNfunction_ss_uLdR::synapse0x2a14740() {
   return (neuron0x29ec330()*1.02226);
}

double NNfunction_ss_uLdR::synapse0x2a14780() {
   return (neuron0x29ece10()*-2.38829);
}

double NNfunction_ss_uLdR::synapse0x2a147c0() {
   return (neuron0x29ed7e0()*0.83398);
}

double NNfunction_ss_uLdR::synapse0x2a14800() {
   return (neuron0x29ea8c0()*-0.276468);
}

double NNfunction_ss_uLdR::synapse0x2a14840() {
   return (neuron0x29ef390()*-0.425401);
}

double NNfunction_ss_uLdR::synapse0x2a14880() {
   return (neuron0x29efd60()*-0.589628);
}

double NNfunction_ss_uLdR::synapse0x2a148c0() {
   return (neuron0x29f0730()*0.708472);
}

double NNfunction_ss_uLdR::synapse0x2a14900() {
   return (neuron0x29f1100()*-2.19558);
}

double NNfunction_ss_uLdR::synapse0x2a14390() {
   return (neuron0x29f2f10()*1.11246);
}

double NNfunction_ss_uLdR::synapse0x2a143d0() {
   return (neuron0x29f31f0()*-1.38699);
}

double NNfunction_ss_uLdR::synapse0x2a14a50() {
   return (neuron0x29f3bc0()*-1.24694);
}

double NNfunction_ss_uLdR::synapse0x2a14a90() {
   return (neuron0x29f4590()*-1.59072);
}

double NNfunction_ss_uLdR::synapse0x2a14ad0() {
   return (neuron0x29f4f60()*-2.00403);
}

double NNfunction_ss_uLdR::synapse0x2a14b10() {
   return (neuron0x29f5930()*-1.7288);
}

double NNfunction_ss_uLdR::synapse0x2a14b50() {
   return (neuron0x29ee480()*0.812589);
}

double NNfunction_ss_uLdR::synapse0x2a14b90() {
   return (neuron0x29eee50()*-0.0919387);
}

double NNfunction_ss_uLdR::synapse0x2a14bd0() {
   return (neuron0x29f86c0()*-0.397835);
}

double NNfunction_ss_uLdR::synapse0x2a14c10() {
   return (neuron0x29f9090()*-0.594738);
}

double NNfunction_ss_uLdR::synapse0x2a14c50() {
   return (neuron0x29f9a60()*0.17925);
}

double NNfunction_ss_uLdR::synapse0x2a14c90() {
   return (neuron0x29fa430()*0.00275708);
}

double NNfunction_ss_uLdR::synapse0x2a14cd0() {
   return (neuron0x29fae00()*0.0161059);
}

double NNfunction_ss_uLdR::synapse0x2a14d10() {
   return (neuron0x29fb7d0()*-1.69762);
}

double NNfunction_ss_uLdR::synapse0x2a14d50() {
   return (neuron0x29fc1a0()*-0.215237);
}

double NNfunction_ss_uLdR::synapse0x2a14d90() {
   return (neuron0x29fcb70()*-0.0460023);
}

double NNfunction_ss_uLdR::synapse0x2a14940() {
   return (neuron0x29f2c00()*-0.306331);
}

double NNfunction_ss_uLdR::synapse0x2a14980() {
   return (neuron0x29ff750()*-1.64335);
}

double NNfunction_ss_uLdR::synapse0x2a149c0() {
   return (neuron0x2a00120()*-1.17538);
}

double NNfunction_ss_uLdR::synapse0x2a14a00() {
   return (neuron0x2a00af0()*-0.0495883);
}

double NNfunction_ss_uLdR::synapse0x2a14fe0() {
   return (neuron0x2a014c0()*-0.21962);
}

double NNfunction_ss_uLdR::synapse0x2a15020() {
   return (neuron0x2a01e90()*-1.07046);
}

double NNfunction_ss_uLdR::synapse0x2a15060() {
   return (neuron0x2a02860()*-0.193358);
}

double NNfunction_ss_uLdR::synapse0x2a150a0() {
   return (neuron0x2a03230()*1.83541);
}

double NNfunction_ss_uLdR::synapse0x2a150e0() {
   return (neuron0x2a03c00()*-1.03298);
}

double NNfunction_ss_uLdR::synapse0x2a15120() {
   return (neuron0x2a047e0()*-0.475542);
}

double NNfunction_ss_uLdR::synapse0x2a15160() {
   return (neuron0x2a051b0()*-1.98593);
}

double NNfunction_ss_uLdR::synapse0x2a151a0() {
   return (neuron0x29f6030()*-0.817416);
}

double NNfunction_ss_uLdR::synapse0x2a151e0() {
   return (neuron0x29f6a00()*-0.588424);
}

double NNfunction_ss_uLdR::synapse0x2a15220() {
   return (neuron0x29f73d0()*-0.169671);
}

double NNfunction_ss_uLdR::synapse0x2a15260() {
   return (neuron0x2a09a10()*1.1349);
}

double NNfunction_ss_uLdR::synapse0x2a152a0() {
   return (neuron0x2a0a2c0()*-0.224198);
}

double NNfunction_ss_uLdR::synapse0x2a152e0() {
   return (neuron0x2a0ac90()*-0.318703);
}

double NNfunction_ss_uLdR::synapse0x2a15320() {
   return (neuron0x2a0b660()*1.60677);
}

double NNfunction_ss_uLdR::synapse0x2a156a0() {
   return (neuron0x29e75e0()*-0.123069);
}

double NNfunction_ss_uLdR::synapse0x2a156e0() {
   return (neuron0x29e7f30()*-0.00638042);
}

double NNfunction_ss_uLdR::synapse0x2a15720() {
   return (neuron0x29e8a10()*-0.234168);
}

double NNfunction_ss_uLdR::synapse0x2a15760() {
   return (neuron0x29e84b0()*0.164895);
}

double NNfunction_ss_uLdR::synapse0x2a157a0() {
   return (neuron0x29e97f0()*-0.259051);
}

double NNfunction_ss_uLdR::synapse0x2a157e0() {
   return (neuron0x29ea1c0()*-0.308959);
}

double NNfunction_ss_uLdR::synapse0x2a15820() {
   return (neuron0x29eaf90()*-0.385334);
}

double NNfunction_ss_uLdR::synapse0x2a15860() {
   return (neuron0x29eb960()*-0.285319);
}

double NNfunction_ss_uLdR::synapse0x2a158a0() {
   return (neuron0x29ec330()*0.0417455);
}

double NNfunction_ss_uLdR::synapse0x2a158e0() {
   return (neuron0x29ece10()*0.233018);
}

double NNfunction_ss_uLdR::synapse0x2a15920() {
   return (neuron0x29ed7e0()*-0.306393);
}

double NNfunction_ss_uLdR::synapse0x2a15960() {
   return (neuron0x29ea8c0()*-0.126061);
}

double NNfunction_ss_uLdR::synapse0x2a159a0() {
   return (neuron0x29ef390()*-0.171725);
}

double NNfunction_ss_uLdR::synapse0x2a159e0() {
   return (neuron0x29efd60()*0.108361);
}

double NNfunction_ss_uLdR::synapse0x2a15a20() {
   return (neuron0x29f0730()*-0.617538);
}

double NNfunction_ss_uLdR::synapse0x2a15a60() {
   return (neuron0x29f1100()*-0.0670684);
}

double NNfunction_ss_uLdR::synapse0x2a154f0() {
   return (neuron0x29f2f10()*-0.00166816);
}

double NNfunction_ss_uLdR::synapse0x2a15530() {
   return (neuron0x29f31f0()*0.109405);
}

double NNfunction_ss_uLdR::synapse0x2a15bb0() {
   return (neuron0x29f3bc0()*1.36524);
}

double NNfunction_ss_uLdR::synapse0x2a15bf0() {
   return (neuron0x29f4590()*0.18295);
}

double NNfunction_ss_uLdR::synapse0x2a15c30() {
   return (neuron0x29f4f60()*-0.0497438);
}

double NNfunction_ss_uLdR::synapse0x2a15c70() {
   return (neuron0x29f5930()*0.010337);
}

double NNfunction_ss_uLdR::synapse0x2a15cb0() {
   return (neuron0x29ee480()*-0.486509);
}

double NNfunction_ss_uLdR::synapse0x2a15cf0() {
   return (neuron0x29eee50()*-0.348315);
}

double NNfunction_ss_uLdR::synapse0x2a15d30() {
   return (neuron0x29f86c0()*-0.270177);
}

double NNfunction_ss_uLdR::synapse0x2a15d70() {
   return (neuron0x29f9090()*-0.00968816);
}

double NNfunction_ss_uLdR::synapse0x2a15db0() {
   return (neuron0x29f9a60()*-0.326515);
}

double NNfunction_ss_uLdR::synapse0x2a15df0() {
   return (neuron0x29fa430()*1.24501);
}

double NNfunction_ss_uLdR::synapse0x2a15e30() {
   return (neuron0x29fae00()*-0.425075);
}

double NNfunction_ss_uLdR::synapse0x2a15e70() {
   return (neuron0x29fb7d0()*2.15111);
}

double NNfunction_ss_uLdR::synapse0x2a15eb0() {
   return (neuron0x29fc1a0()*-0.155849);
}

double NNfunction_ss_uLdR::synapse0x2a15ef0() {
   return (neuron0x29fcb70()*-0.425109);
}

double NNfunction_ss_uLdR::synapse0x2a15aa0() {
   return (neuron0x29f2c00()*0.339681);
}

double NNfunction_ss_uLdR::synapse0x2a15ae0() {
   return (neuron0x29ff750()*0.474775);
}

double NNfunction_ss_uLdR::synapse0x2a15b20() {
   return (neuron0x2a00120()*0.890565);
}

double NNfunction_ss_uLdR::synapse0x2a15b60() {
   return (neuron0x2a00af0()*0.0529441);
}

double NNfunction_ss_uLdR::synapse0x2a16140() {
   return (neuron0x2a014c0()*-0.262805);
}

double NNfunction_ss_uLdR::synapse0x2a16180() {
   return (neuron0x2a01e90()*-1.02304);
}

double NNfunction_ss_uLdR::synapse0x2a161c0() {
   return (neuron0x2a02860()*-0.605354);
}

double NNfunction_ss_uLdR::synapse0x2a16200() {
   return (neuron0x2a03230()*-0.171884);
}

double NNfunction_ss_uLdR::synapse0x2a16240() {
   return (neuron0x2a03c00()*0.231485);
}

double NNfunction_ss_uLdR::synapse0x2a16280() {
   return (neuron0x2a047e0()*0.529998);
}

double NNfunction_ss_uLdR::synapse0x2a162c0() {
   return (neuron0x2a051b0()*0.914271);
}

double NNfunction_ss_uLdR::synapse0x2a16300() {
   return (neuron0x29f6030()*-1.1069);
}

double NNfunction_ss_uLdR::synapse0x2a16340() {
   return (neuron0x29f6a00()*-0.133517);
}

double NNfunction_ss_uLdR::synapse0x2a16380() {
   return (neuron0x29f73d0()*-0.220689);
}

double NNfunction_ss_uLdR::synapse0x2a163c0() {
   return (neuron0x2a09a10()*0.890167);
}

double NNfunction_ss_uLdR::synapse0x2a16400() {
   return (neuron0x2a0a2c0()*0.00541354);
}

double NNfunction_ss_uLdR::synapse0x2a16440() {
   return (neuron0x2a0ac90()*0.159976);
}

double NNfunction_ss_uLdR::synapse0x2a16480() {
   return (neuron0x2a0b660()*-0.167562);
}

double NNfunction_ss_uLdR::synapse0x2a166e0() {
   return (neuron0x2a12860()*-4.9355);
}

double NNfunction_ss_uLdR::synapse0x2a16720() {
   return (neuron0x2a12c00()*-4.31574);
}

double NNfunction_ss_uLdR::synapse0x2a16760() {
   return (neuron0x2a130a0()*-4.31597);
}

double NNfunction_ss_uLdR::synapse0x2a167a0() {
   return (neuron0x2a14200()*4.57723);
}

double NNfunction_ss_uLdR::synapse0x2a167e0() {
   return (neuron0x2a15360()*-2.62707);
}

