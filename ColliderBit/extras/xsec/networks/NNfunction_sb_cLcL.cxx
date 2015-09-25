#include "NNfunction_sb_cLcL.h"
#include <cmath>

double NNfunction_sb_cLcL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.375)/15.3662;
   input1 = (in1 - 200.195)/616.114;
   input2 = (in2 - 529.894)/482.74;
   input3 = (in3 - 1001.2)/1208.21;
   input4 = (in4 - 1314.88)/1013.94;
   input5 = (in5 - 1284.27)/1038.31;
   input6 = (in6 - 1285.6)/1038.15;
   input7 = (in7 - 1236.09)/987.723;
   input8 = (in8 - 1245.43)/1034.75;
   input9 = (in9 - 1238.26)/1032.5;
   input10 = (in10 - 1129.76)/943.355;
   input11 = (in11 - 1607.3)/1272.31;
   input12 = (in12 - 1507.36)/1287.98;
   input13 = (in13 - 1297.1)/1042.76;
   input14 = (in14 - 1582.85)/1242.05;
   input15 = (in15 - 1581.44)/1242.5;
   input16 = (in16 - 1065.62)/856.339;
   input17 = (in17 - 1591.19)/1246.55;
   input18 = (in18 - 1588.46)/1248.72;
   input19 = (in19 - 1504.28)/1155.43;
   input20 = (in20 - -779.191)/1020.41;
   input21 = (in21 - -1060.81)/1741.79;
   input22 = (in22 - -190.896)/1429.67;
   input23 = (in23 - 511.751)/825.966;
   switch(index) {
     case 0:
         return neuron0x33ebf60();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcL::Value(int index, double* input) {
   input0 = (input[0] - 24.375)/15.3662;
   input1 = (input[1] - 200.195)/616.114;
   input2 = (input[2] - 529.894)/482.74;
   input3 = (input[3] - 1001.2)/1208.21;
   input4 = (input[4] - 1314.88)/1013.94;
   input5 = (input[5] - 1284.27)/1038.31;
   input6 = (input[6] - 1285.6)/1038.15;
   input7 = (input[7] - 1236.09)/987.723;
   input8 = (input[8] - 1245.43)/1034.75;
   input9 = (input[9] - 1238.26)/1032.5;
   input10 = (input[10] - 1129.76)/943.355;
   input11 = (input[11] - 1607.3)/1272.31;
   input12 = (input[12] - 1507.36)/1287.98;
   input13 = (input[13] - 1297.1)/1042.76;
   input14 = (input[14] - 1582.85)/1242.05;
   input15 = (input[15] - 1581.44)/1242.5;
   input16 = (input[16] - 1065.62)/856.339;
   input17 = (input[17] - 1591.19)/1246.55;
   input18 = (input[18] - 1588.46)/1248.72;
   input19 = (input[19] - 1504.28)/1155.43;
   input20 = (input[20] - -779.191)/1020.41;
   input21 = (input[21] - -1060.81)/1741.79;
   input22 = (input[22] - -190.896)/1429.67;
   input23 = (input[23] - 511.751)/825.966;
   switch(index) {
     case 0:
         return neuron0x33ebf60();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcL::neuron0x33b6fd0() {
   return input0;
}

double NNfunction_sb_cLcL::neuron0x33b7280() {
   return input1;
}

double NNfunction_sb_cLcL::neuron0x33b75c0() {
   return input2;
}

double NNfunction_sb_cLcL::neuron0x33b7900() {
   return input3;
}

double NNfunction_sb_cLcL::neuron0x33b7c40() {
   return input4;
}

double NNfunction_sb_cLcL::neuron0x33b7f80() {
   return input5;
}

double NNfunction_sb_cLcL::neuron0x33b82c0() {
   return input6;
}

double NNfunction_sb_cLcL::neuron0x33b8600() {
   return input7;
}

double NNfunction_sb_cLcL::neuron0x33b8940() {
   return input8;
}

double NNfunction_sb_cLcL::neuron0x33b8c80() {
   return input9;
}

double NNfunction_sb_cLcL::neuron0x33b8fc0() {
   return input10;
}

double NNfunction_sb_cLcL::neuron0x33b9300() {
   return input11;
}

double NNfunction_sb_cLcL::neuron0x33b9640() {
   return input12;
}

double NNfunction_sb_cLcL::neuron0x33b9980() {
   return input13;
}

double NNfunction_sb_cLcL::neuron0x33b9cc0() {
   return input14;
}

double NNfunction_sb_cLcL::neuron0x33ba000() {
   return input15;
}

double NNfunction_sb_cLcL::neuron0x33ba340() {
   return input16;
}

double NNfunction_sb_cLcL::neuron0x33ba8a0() {
   return input17;
}

double NNfunction_sb_cLcL::neuron0x33baac0() {
   return input18;
}

double NNfunction_sb_cLcL::neuron0x33bae00() {
   return input19;
}

double NNfunction_sb_cLcL::neuron0x33bb140() {
   return input20;
}

double NNfunction_sb_cLcL::neuron0x33bb480() {
   return input21;
}

double NNfunction_sb_cLcL::neuron0x33bb7c0() {
   return input22;
}

double NNfunction_sb_cLcL::neuron0x33bbb00() {
   return input23;
}

double NNfunction_sb_cLcL::input0x33bbf70() {
   double input = -0.625052;
   input += synapse0x33bc2b0();
   input += synapse0x33bc2f0();
   input += synapse0x33bc330();
   input += synapse0x33bc370();
   input += synapse0x33bc3b0();
   input += synapse0x33bc3f0();
   input += synapse0x33bc430();
   input += synapse0x33bc470();
   input += synapse0x33bc4b0();
   input += synapse0x33bc4f0();
   input += synapse0x33bc530();
   input += synapse0x33bc570();
   input += synapse0x33bc5b0();
   input += synapse0x33bc5f0();
   input += synapse0x33bc630();
   input += synapse0x33bc670();
   input += synapse0x33bc100();
   input += synapse0x33bc140();
   input += synapse0x3173330();
   input += synapse0x3173370();
   input += synapse0x33bc7c0();
   input += synapse0x33bc800();
   input += synapse0x33bc840();
   input += synapse0x33bc880();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33bbf70() {
   double input = input0x33bbf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33bc8c0() {
   double input = 2.42589;
   input += synapse0x33bcc00();
   input += synapse0x33bcc40();
   input += synapse0x33bcc80();
   input += synapse0x33bccc0();
   input += synapse0x33bcd00();
   input += synapse0x33bcd40();
   input += synapse0x33bcd80();
   input += synapse0x33bcdc0();
   input += synapse0x33bce00();
   input += synapse0x33bc6b0();
   input += synapse0x33bc6f0();
   input += synapse0x33bc730();
   input += synapse0x33bc770();
   input += synapse0x33bd050();
   input += synapse0x33bd090();
   input += synapse0x33bd0d0();
   input += synapse0x33bca50();
   input += synapse0x33bca90();
   input += synapse0x33bd220();
   input += synapse0x33bd260();
   input += synapse0x33bd2a0();
   input += synapse0x33bd2e0();
   input += synapse0x33bd320();
   input += synapse0x33bd360();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33bc8c0() {
   double input = input0x33bc8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33bd3a0() {
   double input = -0.223702;
   input += synapse0x33bd6e0();
   input += synapse0x33bd720();
   input += synapse0x33bd760();
   input += synapse0x33bd7a0();
   input += synapse0x33bd7e0();
   input += synapse0x33bd820();
   input += synapse0x33bd860();
   input += synapse0x33bd8a0();
   input += synapse0x33bd8e0();
   input += synapse0x33bd920();
   input += synapse0x33bd960();
   input += synapse0x33bd9a0();
   input += synapse0x33bd9e0();
   input += synapse0x33bda20();
   input += synapse0x33bda60();
   input += synapse0x33bdaa0();
   input += synapse0x33bd530();
   input += synapse0x33bd570();
   input += synapse0x3173840();
   input += synapse0x3181110();
   input += synapse0x3181150();
   input += synapse0x33bf9e0();
   input += synapse0x33bfa20();
   input += synapse0x33b6d10();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33bd3a0() {
   double input = input0x33bd3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33bce40() {
   double input = 1.08116;
   input += synapse0x33b6de0();
   input += synapse0x3181990();
   input += synapse0x33bcfd0();
   input += synapse0x33bd010();
   input += synapse0x33bdbf0();
   input += synapse0x33bdc30();
   input += synapse0x33bdc70();
   input += synapse0x33bdcb0();
   input += synapse0x33bdcf0();
   input += synapse0x33bdd30();
   input += synapse0x33bdd70();
   input += synapse0x33bddb0();
   input += synapse0x33bddf0();
   input += synapse0x33bde30();
   input += synapse0x33bde70();
   input += synapse0x33bdeb0();
   input += synapse0x33b6d50();
   input += synapse0x33b6d90();
   input += synapse0x33be000();
   input += synapse0x33be040();
   input += synapse0x33be080();
   input += synapse0x33be0c0();
   input += synapse0x33be100();
   input += synapse0x33be140();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33bce40() {
   double input = input0x33bce40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33be180() {
   double input = 0.742212;
   input += synapse0x33be4c0();
   input += synapse0x33be500();
   input += synapse0x33be540();
   input += synapse0x33be580();
   input += synapse0x33be5c0();
   input += synapse0x33be600();
   input += synapse0x33be640();
   input += synapse0x33be680();
   input += synapse0x33be6c0();
   input += synapse0x33be700();
   input += synapse0x33be740();
   input += synapse0x33be780();
   input += synapse0x33be7c0();
   input += synapse0x33be800();
   input += synapse0x33be840();
   input += synapse0x33be880();
   input += synapse0x33be9d0();
   input += synapse0x33be310();
   input += synapse0x33be350();
   input += synapse0x33bfb20();
   input += synapse0x33bfb60();
   input += synapse0x33bfba0();
   input += synapse0x33bfbe0();
   input += synapse0x33bfc20();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33be180() {
   double input = input0x33be180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33bfc60() {
   double input = 8.06676;
   input += synapse0x33bffa0();
   input += synapse0x33bffe0();
   input += synapse0x33c0020();
   input += synapse0x33c0060();
   input += synapse0x33c00a0();
   input += synapse0x33c00e0();
   input += synapse0x33c0120();
   input += synapse0x33c0160();
   input += synapse0x33c01a0();
   input += synapse0x3181460();
   input += synapse0x31814a0();
   input += synapse0x31814e0();
   input += synapse0x3181520();
   input += synapse0x3181560();
   input += synapse0x31815a0();
   input += synapse0x31815e0();
   input += synapse0x33bfdf0();
   input += synapse0x33bfe30();
   input += synapse0x3181730();
   input += synapse0x3181770();
   input += synapse0x31817b0();
   input += synapse0x31817f0();
   input += synapse0x3181830();
   input += synapse0x33c09f0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33bfc60() {
   double input = input0x33bfc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c0a30() {
   double input = -0.374124;
   input += synapse0x33c0d70();
   input += synapse0x33c0db0();
   input += synapse0x33c0df0();
   input += synapse0x33c0e30();
   input += synapse0x33c0e70();
   input += synapse0x33c0eb0();
   input += synapse0x33c0ef0();
   input += synapse0x33c0f30();
   input += synapse0x33c0f70();
   input += synapse0x33c0fb0();
   input += synapse0x33c0ff0();
   input += synapse0x33c1030();
   input += synapse0x33c1070();
   input += synapse0x33c10b0();
   input += synapse0x33c10f0();
   input += synapse0x33c1130();
   input += synapse0x33c0bc0();
   input += synapse0x33c0c00();
   input += synapse0x33c1280();
   input += synapse0x33c12c0();
   input += synapse0x33c1300();
   input += synapse0x33c1340();
   input += synapse0x33c1380();
   input += synapse0x33c13c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c0a30() {
   double input = input0x33c0a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c1400() {
   double input = -1.27095;
   input += synapse0x33c1740();
   input += synapse0x33c1780();
   input += synapse0x33c17c0();
   input += synapse0x33c1800();
   input += synapse0x33c1840();
   input += synapse0x33c1880();
   input += synapse0x33c18c0();
   input += synapse0x33c1900();
   input += synapse0x33c1940();
   input += synapse0x33c1980();
   input += synapse0x33c19c0();
   input += synapse0x33c1a00();
   input += synapse0x33c1a40();
   input += synapse0x33c1a80();
   input += synapse0x33c1ac0();
   input += synapse0x33c1b00();
   input += synapse0x33c1590();
   input += synapse0x33c15d0();
   input += synapse0x33c1c50();
   input += synapse0x33c1c90();
   input += synapse0x33c1cd0();
   input += synapse0x33c1d10();
   input += synapse0x33c1d50();
   input += synapse0x33c1d90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c1400() {
   double input = input0x33c1400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c1dd0() {
   double input = -0.379928;
   input += synapse0x33ba790();
   input += synapse0x33ba7d0();
   input += synapse0x33ba810();
   input += synapse0x33ba850();
   input += synapse0x33c2320();
   input += synapse0x33c2360();
   input += synapse0x33c23a0();
   input += synapse0x33c23e0();
   input += synapse0x33c2420();
   input += synapse0x33c2460();
   input += synapse0x33c24a0();
   input += synapse0x33c24e0();
   input += synapse0x33c2520();
   input += synapse0x33c2560();
   input += synapse0x33c25a0();
   input += synapse0x33c25e0();
   input += synapse0x33c1f60();
   input += synapse0x33c1fa0();
   input += synapse0x33c2730();
   input += synapse0x33c2770();
   input += synapse0x33c27b0();
   input += synapse0x33c27f0();
   input += synapse0x33c2830();
   input += synapse0x33c2870();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c1dd0() {
   double input = input0x33c1dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c28b0() {
   double input = -1.08653;
   input += synapse0x33c2bf0();
   input += synapse0x33c2c30();
   input += synapse0x33c2c70();
   input += synapse0x33c2cb0();
   input += synapse0x33c2cf0();
   input += synapse0x33c2d30();
   input += synapse0x33c2d70();
   input += synapse0x33c2db0();
   input += synapse0x33c2df0();
   input += synapse0x33c2e30();
   input += synapse0x33c2e70();
   input += synapse0x33c2eb0();
   input += synapse0x33c2ef0();
   input += synapse0x33c2f30();
   input += synapse0x33c2f70();
   input += synapse0x33c2fb0();
   input += synapse0x33c2a40();
   input += synapse0x33c2a80();
   input += synapse0x33c3100();
   input += synapse0x33c3140();
   input += synapse0x33c3180();
   input += synapse0x33c31c0();
   input += synapse0x33c3200();
   input += synapse0x33c3240();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c28b0() {
   double input = input0x33c28b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c3280() {
   double input = 4.28129;
   input += synapse0x33c35c0();
   input += synapse0x33c3600();
   input += synapse0x33c3640();
   input += synapse0x33c3680();
   input += synapse0x33c36c0();
   input += synapse0x33c3700();
   input += synapse0x33c3740();
   input += synapse0x33c3780();
   input += synapse0x33c37c0();
   input += synapse0x33c3800();
   input += synapse0x33c3840();
   input += synapse0x33c3880();
   input += synapse0x33c38c0();
   input += synapse0x33c3900();
   input += synapse0x33c3940();
   input += synapse0x33c3980();
   input += synapse0x33c3410();
   input += synapse0x33c3450();
   input += synapse0x33c01e0();
   input += synapse0x33c0220();
   input += synapse0x33c0260();
   input += synapse0x33c02a0();
   input += synapse0x33c02e0();
   input += synapse0x33c0320();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c3280() {
   double input = input0x33c3280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c0360() {
   double input = -1.32849;
   input += synapse0x33c06a0();
   input += synapse0x33c06e0();
   input += synapse0x33c0720();
   input += synapse0x33c0760();
   input += synapse0x33c07a0();
   input += synapse0x33c07e0();
   input += synapse0x33c0820();
   input += synapse0x33c0860();
   input += synapse0x33c08a0();
   input += synapse0x33c08e0();
   input += synapse0x33c0920();
   input += synapse0x33c0960();
   input += synapse0x33c09a0();
   input += synapse0x33c4ae0();
   input += synapse0x33c4b20();
   input += synapse0x33c4b60();
   input += synapse0x33c04f0();
   input += synapse0x33c0530();
   input += synapse0x33c4cb0();
   input += synapse0x33c4cf0();
   input += synapse0x33c4d30();
   input += synapse0x33c4d70();
   input += synapse0x33c4db0();
   input += synapse0x33c4df0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c0360() {
   double input = input0x33c0360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c4e30() {
   double input = -0.724196;
   input += synapse0x33c5170();
   input += synapse0x33c51b0();
   input += synapse0x33c51f0();
   input += synapse0x33c5230();
   input += synapse0x33c5270();
   input += synapse0x33c52b0();
   input += synapse0x33c52f0();
   input += synapse0x33c5330();
   input += synapse0x33c5370();
   input += synapse0x33c53b0();
   input += synapse0x33c53f0();
   input += synapse0x33c5430();
   input += synapse0x33c5470();
   input += synapse0x33c54b0();
   input += synapse0x33c54f0();
   input += synapse0x33c5530();
   input += synapse0x33c4fc0();
   input += synapse0x33c5000();
   input += synapse0x33c5680();
   input += synapse0x33c56c0();
   input += synapse0x33c5700();
   input += synapse0x33c5740();
   input += synapse0x33c5780();
   input += synapse0x33c57c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c4e30() {
   double input = input0x33c4e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c5800() {
   double input = -0.50409;
   input += synapse0x33c5b40();
   input += synapse0x33c5b80();
   input += synapse0x33c5bc0();
   input += synapse0x33c5c00();
   input += synapse0x33c5c40();
   input += synapse0x33c5c80();
   input += synapse0x33c5cc0();
   input += synapse0x33c5d00();
   input += synapse0x33c5d40();
   input += synapse0x33c5d80();
   input += synapse0x33c5dc0();
   input += synapse0x33c5e00();
   input += synapse0x33c5e40();
   input += synapse0x33c5e80();
   input += synapse0x33c5ec0();
   input += synapse0x33c5f00();
   input += synapse0x33c5990();
   input += synapse0x33c59d0();
   input += synapse0x33c6050();
   input += synapse0x33c6090();
   input += synapse0x33c60d0();
   input += synapse0x33c6110();
   input += synapse0x33c6150();
   input += synapse0x33c6190();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c5800() {
   double input = input0x33c5800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c61d0() {
   double input = -0.00120979;
   input += synapse0x33c6510();
   input += synapse0x33c6550();
   input += synapse0x33c6590();
   input += synapse0x33c65d0();
   input += synapse0x33c6610();
   input += synapse0x33c6650();
   input += synapse0x33c6690();
   input += synapse0x33c66d0();
   input += synapse0x33c6710();
   input += synapse0x33c6750();
   input += synapse0x33c6790();
   input += synapse0x33c67d0();
   input += synapse0x33c6810();
   input += synapse0x33c6850();
   input += synapse0x33c6890();
   input += synapse0x33c68d0();
   input += synapse0x33c6360();
   input += synapse0x33c63a0();
   input += synapse0x33c6a20();
   input += synapse0x33c6a60();
   input += synapse0x33c6aa0();
   input += synapse0x33c6ae0();
   input += synapse0x33c6b20();
   input += synapse0x33c6b60();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c61d0() {
   double input = input0x33c61d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c6ba0() {
   double input = -0.182858;
   input += synapse0x33c6ee0();
   input += synapse0x33b7160();
   input += synapse0x33b71a0();
   input += synapse0x33b74a0();
   input += synapse0x33b74e0();
   input += synapse0x33b77e0();
   input += synapse0x33b7820();
   input += synapse0x33b7b20();
   input += synapse0x33b7b60();
   input += synapse0x33b7e60();
   input += synapse0x33b7ea0();
   input += synapse0x33b81a0();
   input += synapse0x33b81e0();
   input += synapse0x33b84e0();
   input += synapse0x33b8520();
   input += synapse0x33b8820();
   input += synapse0x33b8860();
   input += synapse0x33b8b60();
   input += synapse0x33b8ba0();
   input += synapse0x33b8ea0();
   input += synapse0x33b8ee0();
   input += synapse0x33b91e0();
   input += synapse0x33b9220();
   input += synapse0x33b9520();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c6ba0() {
   double input = input0x33c6ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c89b0() {
   double input = 2.14237;
   input += synapse0x33b9560();
   input += synapse0x33ba220();
   input += synapse0x33ba260();
   input += synapse0x33c6d30();
   input += synapse0x33c6d70();
   input += synapse0x33ba560();
   input += synapse0x33ba5a0();
   input += synapse0x2628080();
   input += synapse0x26280c0();
   input += synapse0x33bace0();
   input += synapse0x33bad20();
   input += synapse0x33bb020();
   input += synapse0x33bb060();
   input += synapse0x33bb360();
   input += synapse0x33bb3a0();
   input += synapse0x33bb6a0();
   input += synapse0x33bb6e0();
   input += synapse0x33bb9e0();
   input += synapse0x33bba20();
   input += synapse0x33bbd20();
   input += synapse0x33bbd60();
   input += synapse0x33b9860();
   input += synapse0x33b98a0();
   input += synapse0x33c8c50();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c89b0() {
   double input = input0x33c89b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c8c90() {
   double input = -1.3071;
   input += synapse0x33c8fd0();
   input += synapse0x33c9010();
   input += synapse0x33c9050();
   input += synapse0x33c9090();
   input += synapse0x33c90d0();
   input += synapse0x33c9110();
   input += synapse0x33c9150();
   input += synapse0x33c9190();
   input += synapse0x33c91d0();
   input += synapse0x33c9210();
   input += synapse0x33c9250();
   input += synapse0x33c9290();
   input += synapse0x33c92d0();
   input += synapse0x33c9310();
   input += synapse0x33c9350();
   input += synapse0x33c9390();
   input += synapse0x33c8e20();
   input += synapse0x33c8e60();
   input += synapse0x33c94e0();
   input += synapse0x33c9520();
   input += synapse0x33c9560();
   input += synapse0x33c95a0();
   input += synapse0x33c95e0();
   input += synapse0x33c9620();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c8c90() {
   double input = input0x33c8c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c9660() {
   double input = -10.1528;
   input += synapse0x33c99a0();
   input += synapse0x33c99e0();
   input += synapse0x33c9a20();
   input += synapse0x33c9a60();
   input += synapse0x33c9aa0();
   input += synapse0x33c9ae0();
   input += synapse0x33c9b20();
   input += synapse0x33c9b60();
   input += synapse0x33c9ba0();
   input += synapse0x33c9be0();
   input += synapse0x33c9c20();
   input += synapse0x33c9c60();
   input += synapse0x33c9ca0();
   input += synapse0x33c9ce0();
   input += synapse0x33c9d20();
   input += synapse0x33c9d60();
   input += synapse0x33c97f0();
   input += synapse0x33c9830();
   input += synapse0x33c9eb0();
   input += synapse0x33c9ef0();
   input += synapse0x33c9f30();
   input += synapse0x33c9f70();
   input += synapse0x33c9fb0();
   input += synapse0x33c9ff0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c9660() {
   double input = input0x33c9660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33ca030() {
   double input = -0.59463;
   input += synapse0x33ca370();
   input += synapse0x33ca3b0();
   input += synapse0x33ca3f0();
   input += synapse0x33ca430();
   input += synapse0x33ca470();
   input += synapse0x33ca4b0();
   input += synapse0x33ca4f0();
   input += synapse0x33ca530();
   input += synapse0x33ca570();
   input += synapse0x33ca5b0();
   input += synapse0x33ca5f0();
   input += synapse0x33ca630();
   input += synapse0x33ca670();
   input += synapse0x33ca6b0();
   input += synapse0x33ca6f0();
   input += synapse0x33ca730();
   input += synapse0x33ca1c0();
   input += synapse0x33ca200();
   input += synapse0x33ca880();
   input += synapse0x33ca8c0();
   input += synapse0x33ca900();
   input += synapse0x33ca940();
   input += synapse0x33ca980();
   input += synapse0x33ca9c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33ca030() {
   double input = input0x33ca030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33caa00() {
   double input = -1.93785;
   input += synapse0x33cad40();
   input += synapse0x33cad80();
   input += synapse0x33cadc0();
   input += synapse0x33cae00();
   input += synapse0x33cae40();
   input += synapse0x33cae80();
   input += synapse0x33caec0();
   input += synapse0x33caf00();
   input += synapse0x33caf40();
   input += synapse0x33caf80();
   input += synapse0x33cafc0();
   input += synapse0x33cb000();
   input += synapse0x33cb040();
   input += synapse0x33cb080();
   input += synapse0x33cb0c0();
   input += synapse0x33cb100();
   input += synapse0x33cab90();
   input += synapse0x33cabd0();
   input += synapse0x33cb250();
   input += synapse0x33cb290();
   input += synapse0x33cb2d0();
   input += synapse0x33cb310();
   input += synapse0x33cb350();
   input += synapse0x33cb390();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33caa00() {
   double input = input0x33caa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cb3d0() {
   double input = 0.634552;
   input += synapse0x33cb710();
   input += synapse0x33cb750();
   input += synapse0x33cb790();
   input += synapse0x33cb7d0();
   input += synapse0x33cb810();
   input += synapse0x33cb850();
   input += synapse0x33cb890();
   input += synapse0x33cb8d0();
   input += synapse0x33cb910();
   input += synapse0x33c3ad0();
   input += synapse0x33c3b10();
   input += synapse0x33c3b50();
   input += synapse0x33c3b90();
   input += synapse0x33c3bd0();
   input += synapse0x33c3c10();
   input += synapse0x33c3c50();
   input += synapse0x33cb560();
   input += synapse0x33cb5a0();
   input += synapse0x33c3da0();
   input += synapse0x33c3de0();
   input += synapse0x33c3e20();
   input += synapse0x33c3e60();
   input += synapse0x33c3ea0();
   input += synapse0x33c3ee0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cb3d0() {
   double input = input0x33cb3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c3f20() {
   double input = -3.7857;
   input += synapse0x33c4260();
   input += synapse0x33c42a0();
   input += synapse0x33c42e0();
   input += synapse0x33c4320();
   input += synapse0x33c4360();
   input += synapse0x33c43a0();
   input += synapse0x33c43e0();
   input += synapse0x33c4420();
   input += synapse0x33c4460();
   input += synapse0x33c44a0();
   input += synapse0x33c44e0();
   input += synapse0x33c4520();
   input += synapse0x33c4560();
   input += synapse0x33c45a0();
   input += synapse0x33c45e0();
   input += synapse0x33c4620();
   input += synapse0x33c40b0();
   input += synapse0x33c40f0();
   input += synapse0x33c4770();
   input += synapse0x33c47b0();
   input += synapse0x33c47f0();
   input += synapse0x33c4830();
   input += synapse0x33c4870();
   input += synapse0x33c48b0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c3f20() {
   double input = input0x33c3f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c48f0() {
   double input = -1.01838;
   input += synapse0x33c4a80();
   input += synapse0x33cdb10();
   input += synapse0x33cdb50();
   input += synapse0x33cdb90();
   input += synapse0x33cdbd0();
   input += synapse0x33cdc10();
   input += synapse0x33cdc50();
   input += synapse0x33cdc90();
   input += synapse0x33cdcd0();
   input += synapse0x33cdd10();
   input += synapse0x33cdd50();
   input += synapse0x33cdd90();
   input += synapse0x33cddd0();
   input += synapse0x33cde10();
   input += synapse0x33cde50();
   input += synapse0x33cde90();
   input += synapse0x33cd960();
   input += synapse0x33cd9a0();
   input += synapse0x33cdfe0();
   input += synapse0x33ce020();
   input += synapse0x33ce060();
   input += synapse0x33ce0a0();
   input += synapse0x33ce0e0();
   input += synapse0x33ce120();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c48f0() {
   double input = input0x33c48f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33ce160() {
   double input = 0.382846;
   input += synapse0x33ce4a0();
   input += synapse0x33ce4e0();
   input += synapse0x33ce520();
   input += synapse0x33ce560();
   input += synapse0x33ce5a0();
   input += synapse0x33ce5e0();
   input += synapse0x33ce620();
   input += synapse0x33ce660();
   input += synapse0x33ce6a0();
   input += synapse0x33ce6e0();
   input += synapse0x33ce720();
   input += synapse0x33ce760();
   input += synapse0x33ce7a0();
   input += synapse0x33ce7e0();
   input += synapse0x33ce820();
   input += synapse0x33ce860();
   input += synapse0x33ce2f0();
   input += synapse0x33ce330();
   input += synapse0x33ce9b0();
   input += synapse0x33ce9f0();
   input += synapse0x33cea30();
   input += synapse0x33cea70();
   input += synapse0x33ceab0();
   input += synapse0x33ceaf0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33ce160() {
   double input = input0x33ce160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33ceb30() {
   double input = -0.913036;
   input += synapse0x33cee70();
   input += synapse0x33ceeb0();
   input += synapse0x33ceef0();
   input += synapse0x33cef30();
   input += synapse0x33cef70();
   input += synapse0x33cefb0();
   input += synapse0x33ceff0();
   input += synapse0x33cf030();
   input += synapse0x33cf070();
   input += synapse0x33cf0b0();
   input += synapse0x33cf0f0();
   input += synapse0x33cf130();
   input += synapse0x33cf170();
   input += synapse0x33cf1b0();
   input += synapse0x33cf1f0();
   input += synapse0x33cf230();
   input += synapse0x33cecc0();
   input += synapse0x33ced00();
   input += synapse0x33cf380();
   input += synapse0x33cf3c0();
   input += synapse0x33cf400();
   input += synapse0x33cf440();
   input += synapse0x33cf480();
   input += synapse0x33cf4c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33ceb30() {
   double input = input0x33ceb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cf500() {
   double input = -7.96483;
   input += synapse0x33cf840();
   input += synapse0x33cf880();
   input += synapse0x33cf8c0();
   input += synapse0x33cf900();
   input += synapse0x33cf940();
   input += synapse0x33cf980();
   input += synapse0x33cf9c0();
   input += synapse0x33cfa00();
   input += synapse0x33cfa40();
   input += synapse0x33cfa80();
   input += synapse0x33cfac0();
   input += synapse0x33cfb00();
   input += synapse0x33cfb40();
   input += synapse0x33cfb80();
   input += synapse0x33cfbc0();
   input += synapse0x33cfc00();
   input += synapse0x33cf690();
   input += synapse0x33cf6d0();
   input += synapse0x33cfd50();
   input += synapse0x33cfd90();
   input += synapse0x33cfdd0();
   input += synapse0x33cfe10();
   input += synapse0x33cfe50();
   input += synapse0x33cfe90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cf500() {
   double input = input0x33cf500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cfed0() {
   double input = 10.3407;
   input += synapse0x33d0210();
   input += synapse0x33d0250();
   input += synapse0x33d0290();
   input += synapse0x33d02d0();
   input += synapse0x33d0310();
   input += synapse0x33d0350();
   input += synapse0x33d0390();
   input += synapse0x33d03d0();
   input += synapse0x33d0410();
   input += synapse0x33d0450();
   input += synapse0x33d0490();
   input += synapse0x33d04d0();
   input += synapse0x33d0510();
   input += synapse0x33d0550();
   input += synapse0x33d0590();
   input += synapse0x33d05d0();
   input += synapse0x33d0060();
   input += synapse0x33d00a0();
   input += synapse0x33d0720();
   input += synapse0x33d0760();
   input += synapse0x33d07a0();
   input += synapse0x33d07e0();
   input += synapse0x33d0820();
   input += synapse0x33d0860();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cfed0() {
   double input = input0x33cfed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d08a0() {
   double input = -1.23701;
   input += synapse0x33d0be0();
   input += synapse0x33d0c20();
   input += synapse0x33d0c60();
   input += synapse0x33d0ca0();
   input += synapse0x33d0ce0();
   input += synapse0x33d0d20();
   input += synapse0x33d0d60();
   input += synapse0x33d0da0();
   input += synapse0x33d0de0();
   input += synapse0x33d0e20();
   input += synapse0x33d0e60();
   input += synapse0x33d0ea0();
   input += synapse0x33d0ee0();
   input += synapse0x33d0f20();
   input += synapse0x33d0f60();
   input += synapse0x33d0fa0();
   input += synapse0x33d0a30();
   input += synapse0x33d0a70();
   input += synapse0x33d10f0();
   input += synapse0x33d1130();
   input += synapse0x33d1170();
   input += synapse0x33d11b0();
   input += synapse0x33d11f0();
   input += synapse0x33d1230();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d08a0() {
   double input = input0x33d08a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d1270() {
   double input = 0.777042;
   input += synapse0x33d15b0();
   input += synapse0x33d15f0();
   input += synapse0x33d1630();
   input += synapse0x33d1670();
   input += synapse0x33d16b0();
   input += synapse0x33d16f0();
   input += synapse0x33d1730();
   input += synapse0x33d1770();
   input += synapse0x33d17b0();
   input += synapse0x33d17f0();
   input += synapse0x33d1830();
   input += synapse0x33d1870();
   input += synapse0x33d18b0();
   input += synapse0x33d18f0();
   input += synapse0x33d1930();
   input += synapse0x33d1970();
   input += synapse0x33d1400();
   input += synapse0x33d1440();
   input += synapse0x33d1ac0();
   input += synapse0x33d1b00();
   input += synapse0x33d1b40();
   input += synapse0x33d1b80();
   input += synapse0x33d1bc0();
   input += synapse0x33d1c00();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d1270() {
   double input = input0x33d1270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d1c40() {
   double input = -0.570458;
   input += synapse0x33d1f80();
   input += synapse0x33d1fc0();
   input += synapse0x33d2000();
   input += synapse0x33d2040();
   input += synapse0x33d2080();
   input += synapse0x33d20c0();
   input += synapse0x33d2100();
   input += synapse0x33d2140();
   input += synapse0x33d2180();
   input += synapse0x33d21c0();
   input += synapse0x33d2200();
   input += synapse0x33d2240();
   input += synapse0x33d2280();
   input += synapse0x33d22c0();
   input += synapse0x33d2300();
   input += synapse0x33d2340();
   input += synapse0x33d1dd0();
   input += synapse0x33d1e10();
   input += synapse0x33d2490();
   input += synapse0x33d24d0();
   input += synapse0x33d2510();
   input += synapse0x33d2550();
   input += synapse0x33d2590();
   input += synapse0x33d25d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d1c40() {
   double input = input0x33d1c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d2610() {
   double input = 0.424467;
   input += synapse0x33d2950();
   input += synapse0x33c6f20();
   input += synapse0x33c6f60();
   input += synapse0x33c6fa0();
   input += synapse0x33c71f0();
   input += synapse0x33c7230();
   input += synapse0x33c7270();
   input += synapse0x33c74c0();
   input += synapse0x33c7500();
   input += synapse0x33c7750();
   input += synapse0x33c7790();
   input += synapse0x33c77d0();
   input += synapse0x33c7a20();
   input += synapse0x33c7a60();
   input += synapse0x33c7cb0();
   input += synapse0x33c7cf0();
   input += synapse0x33d27a0();
   input += synapse0x33d27e0();
   input += synapse0x33c7e40();
   input += synapse0x33c8350();
   input += synapse0x33c8390();
   input += synapse0x33c83d0();
   input += synapse0x33c8620();
   input += synapse0x33c8660();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d2610() {
   double input = input0x33d2610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33c86a0() {
   double input = 6.22183;
   input += synapse0x33c7f10();
   input += synapse0x33c7f50();
   input += synapse0x33c7f90();
   input += synapse0x33c7fd0();
   input += synapse0x33c8950();
   input += synapse0x33d4ca0();
   input += synapse0x33d4ce0();
   input += synapse0x33d4d20();
   input += synapse0x33d4d60();
   input += synapse0x33d4da0();
   input += synapse0x33d4de0();
   input += synapse0x33d4e20();
   input += synapse0x33d4e60();
   input += synapse0x33d4ea0();
   input += synapse0x33d4ee0();
   input += synapse0x33d4f20();
   input += synapse0x33c8830();
   input += synapse0x33c8870();
   input += synapse0x33d5070();
   input += synapse0x33d50b0();
   input += synapse0x33d50f0();
   input += synapse0x33d5130();
   input += synapse0x33d5170();
   input += synapse0x33d51b0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33c86a0() {
   double input = input0x33c86a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d51f0() {
   double input = 0.268395;
   input += synapse0x33d5530();
   input += synapse0x33d5570();
   input += synapse0x33d55b0();
   input += synapse0x33d55f0();
   input += synapse0x33d5630();
   input += synapse0x33d5670();
   input += synapse0x33d56b0();
   input += synapse0x33d56f0();
   input += synapse0x33d5730();
   input += synapse0x33d5770();
   input += synapse0x33d57b0();
   input += synapse0x33d57f0();
   input += synapse0x33d5830();
   input += synapse0x33d5870();
   input += synapse0x33d58b0();
   input += synapse0x33d58f0();
   input += synapse0x33d5380();
   input += synapse0x33d53c0();
   input += synapse0x33d5a40();
   input += synapse0x33d5a80();
   input += synapse0x33d5ac0();
   input += synapse0x33d5b00();
   input += synapse0x33d5b40();
   input += synapse0x33d5b80();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d51f0() {
   double input = input0x33d51f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d5bc0() {
   double input = 0.605566;
   input += synapse0x33d5f00();
   input += synapse0x33d5f40();
   input += synapse0x33d5f80();
   input += synapse0x33d5fc0();
   input += synapse0x33d6000();
   input += synapse0x33d6040();
   input += synapse0x33d6080();
   input += synapse0x33d60c0();
   input += synapse0x33d6100();
   input += synapse0x33d6140();
   input += synapse0x33d6180();
   input += synapse0x33d61c0();
   input += synapse0x33d6200();
   input += synapse0x33d6240();
   input += synapse0x33d6280();
   input += synapse0x33d62c0();
   input += synapse0x33d5d50();
   input += synapse0x33d5d90();
   input += synapse0x33d6410();
   input += synapse0x33d6450();
   input += synapse0x33d6490();
   input += synapse0x33d64d0();
   input += synapse0x33d6510();
   input += synapse0x33d6550();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d5bc0() {
   double input = input0x33d5bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d6590() {
   double input = -0.513971;
   input += synapse0x33d68d0();
   input += synapse0x33d6910();
   input += synapse0x33d6950();
   input += synapse0x33d6990();
   input += synapse0x33d69d0();
   input += synapse0x33d6a10();
   input += synapse0x33d6a50();
   input += synapse0x33d6a90();
   input += synapse0x33d6ad0();
   input += synapse0x33d6b10();
   input += synapse0x33d6b50();
   input += synapse0x33d6b90();
   input += synapse0x33d6bd0();
   input += synapse0x33d6c10();
   input += synapse0x33d6c50();
   input += synapse0x33d6c90();
   input += synapse0x33d6720();
   input += synapse0x33d6760();
   input += synapse0x33d6de0();
   input += synapse0x33d6e20();
   input += synapse0x33d6e60();
   input += synapse0x33d6ea0();
   input += synapse0x33d6ee0();
   input += synapse0x33d6f20();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d6590() {
   double input = input0x33d6590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d6f60() {
   double input = -1.49669;
   input += synapse0x33d72a0();
   input += synapse0x33d72e0();
   input += synapse0x33d7320();
   input += synapse0x33d7360();
   input += synapse0x33d73a0();
   input += synapse0x33d73e0();
   input += synapse0x33d7420();
   input += synapse0x33d7460();
   input += synapse0x33d74a0();
   input += synapse0x33d74e0();
   input += synapse0x33d7520();
   input += synapse0x33d7560();
   input += synapse0x33d75a0();
   input += synapse0x33d75e0();
   input += synapse0x33d7620();
   input += synapse0x33d7660();
   input += synapse0x33d70f0();
   input += synapse0x33d7130();
   input += synapse0x33d77b0();
   input += synapse0x33d77f0();
   input += synapse0x33d7830();
   input += synapse0x33d7870();
   input += synapse0x33d78b0();
   input += synapse0x33d78f0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d6f60() {
   double input = input0x33d6f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d7930() {
   double input = -0.647697;
   input += synapse0x33d7c70();
   input += synapse0x33d7cb0();
   input += synapse0x33d7cf0();
   input += synapse0x33d7d30();
   input += synapse0x33d7d70();
   input += synapse0x33d7db0();
   input += synapse0x33d7df0();
   input += synapse0x33d7e30();
   input += synapse0x33d7e70();
   input += synapse0x33d7eb0();
   input += synapse0x33d7ef0();
   input += synapse0x33d7f30();
   input += synapse0x33d7f70();
   input += synapse0x33d7fb0();
   input += synapse0x33d7ff0();
   input += synapse0x33d8030();
   input += synapse0x33d7ac0();
   input += synapse0x33d7b00();
   input += synapse0x33d8180();
   input += synapse0x33d81c0();
   input += synapse0x33d8200();
   input += synapse0x33d8240();
   input += synapse0x33d8280();
   input += synapse0x33d82c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d7930() {
   double input = input0x33d7930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d8300() {
   double input = -1.06775;
   input += synapse0x33d8640();
   input += synapse0x33d8680();
   input += synapse0x33d86c0();
   input += synapse0x33d8700();
   input += synapse0x33d8740();
   input += synapse0x33d8780();
   input += synapse0x33d87c0();
   input += synapse0x33d8800();
   input += synapse0x33d8840();
   input += synapse0x33d8880();
   input += synapse0x33d88c0();
   input += synapse0x33d8900();
   input += synapse0x33d8940();
   input += synapse0x33d8980();
   input += synapse0x33d89c0();
   input += synapse0x33d8a00();
   input += synapse0x33d8490();
   input += synapse0x33d84d0();
   input += synapse0x33d8b50();
   input += synapse0x33d8b90();
   input += synapse0x33d8bd0();
   input += synapse0x33d8c10();
   input += synapse0x33d8c50();
   input += synapse0x33d8c90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d8300() {
   double input = input0x33d8300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d8cd0() {
   double input = -1.24457;
   input += synapse0x33d9010();
   input += synapse0x33d9050();
   input += synapse0x33d9090();
   input += synapse0x33d90d0();
   input += synapse0x33d9110();
   input += synapse0x33d9150();
   input += synapse0x33d9190();
   input += synapse0x33d91d0();
   input += synapse0x33d9210();
   input += synapse0x33d9250();
   input += synapse0x33d9290();
   input += synapse0x33d92d0();
   input += synapse0x33d9310();
   input += synapse0x33d9350();
   input += synapse0x33d9390();
   input += synapse0x33d93d0();
   input += synapse0x33d8e60();
   input += synapse0x33d8ea0();
   input += synapse0x33d9520();
   input += synapse0x33d9560();
   input += synapse0x33d95a0();
   input += synapse0x33d95e0();
   input += synapse0x33d9620();
   input += synapse0x33d9660();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d8cd0() {
   double input = input0x33d8cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33d96a0() {
   double input = -1.08113;
   input += synapse0x33c2110();
   input += synapse0x33c2150();
   input += synapse0x33c2190();
   input += synapse0x33c21d0();
   input += synapse0x33c2210();
   input += synapse0x33c2250();
   input += synapse0x33c2290();
   input += synapse0x33c22d0();
   input += synapse0x33d9df0();
   input += synapse0x33d9e30();
   input += synapse0x33d9e70();
   input += synapse0x33d9eb0();
   input += synapse0x33d9ef0();
   input += synapse0x33d9f30();
   input += synapse0x33d9f70();
   input += synapse0x33d9fb0();
   input += synapse0x33d9830();
   input += synapse0x33d9870();
   input += synapse0x33da100();
   input += synapse0x33da140();
   input += synapse0x33da180();
   input += synapse0x33da1c0();
   input += synapse0x33da200();
   input += synapse0x33da240();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33d96a0() {
   double input = input0x33d96a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33da280() {
   double input = -0.774981;
   input += synapse0x33da5c0();
   input += synapse0x33da600();
   input += synapse0x33da640();
   input += synapse0x33da680();
   input += synapse0x33da6c0();
   input += synapse0x33da700();
   input += synapse0x33da740();
   input += synapse0x33da780();
   input += synapse0x33da7c0();
   input += synapse0x33da800();
   input += synapse0x33da840();
   input += synapse0x33da880();
   input += synapse0x33da8c0();
   input += synapse0x33da900();
   input += synapse0x33da940();
   input += synapse0x33da980();
   input += synapse0x33da410();
   input += synapse0x33da450();
   input += synapse0x33daad0();
   input += synapse0x33dab10();
   input += synapse0x33dab50();
   input += synapse0x33dab90();
   input += synapse0x33dabd0();
   input += synapse0x33dac10();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33da280() {
   double input = input0x33da280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33dac50() {
   double input = -1.68131;
   input += synapse0x33daf90();
   input += synapse0x33dafd0();
   input += synapse0x33db010();
   input += synapse0x33db050();
   input += synapse0x33db090();
   input += synapse0x33db0d0();
   input += synapse0x33db110();
   input += synapse0x33db150();
   input += synapse0x33db190();
   input += synapse0x33db1d0();
   input += synapse0x33db210();
   input += synapse0x33db250();
   input += synapse0x33db290();
   input += synapse0x33db2d0();
   input += synapse0x33db310();
   input += synapse0x33db350();
   input += synapse0x33dade0();
   input += synapse0x33dae20();
   input += synapse0x33cb950();
   input += synapse0x33cb990();
   input += synapse0x33cb9d0();
   input += synapse0x33cba10();
   input += synapse0x33cba50();
   input += synapse0x33cba90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33dac50() {
   double input = input0x33dac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cbad0() {
   double input = -0.0325891;
   input += synapse0x33cbe10();
   input += synapse0x33cbe50();
   input += synapse0x33cbe90();
   input += synapse0x33cbed0();
   input += synapse0x33cbf10();
   input += synapse0x33cbf50();
   input += synapse0x33cbf90();
   input += synapse0x33cbfd0();
   input += synapse0x33cc010();
   input += synapse0x33cc050();
   input += synapse0x33cc090();
   input += synapse0x33cc0d0();
   input += synapse0x33cc110();
   input += synapse0x33cc150();
   input += synapse0x33cc190();
   input += synapse0x33cc1d0();
   input += synapse0x33cbc60();
   input += synapse0x33cbca0();
   input += synapse0x33cc320();
   input += synapse0x33cc360();
   input += synapse0x33cc3a0();
   input += synapse0x33cc3e0();
   input += synapse0x33cc420();
   input += synapse0x33cc460();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cbad0() {
   double input = input0x33cbad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cc4a0() {
   double input = 1.32822;
   input += synapse0x33cc7e0();
   input += synapse0x33cc820();
   input += synapse0x33cc860();
   input += synapse0x33cc8a0();
   input += synapse0x33cc8e0();
   input += synapse0x33cc920();
   input += synapse0x33cc960();
   input += synapse0x33cc9a0();
   input += synapse0x33cc9e0();
   input += synapse0x33cca20();
   input += synapse0x33cca60();
   input += synapse0x33ccaa0();
   input += synapse0x33ccae0();
   input += synapse0x33ccb20();
   input += synapse0x33ccb60();
   input += synapse0x33ccba0();
   input += synapse0x33cc630();
   input += synapse0x33cc670();
   input += synapse0x33cccf0();
   input += synapse0x33ccd30();
   input += synapse0x33ccd70();
   input += synapse0x33ccdb0();
   input += synapse0x33ccdf0();
   input += synapse0x33cce30();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cc4a0() {
   double input = input0x33cc4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33cce70() {
   double input = 0.498087;
   input += synapse0x33cd1b0();
   input += synapse0x33cd1f0();
   input += synapse0x33cd230();
   input += synapse0x33cd270();
   input += synapse0x33cd2b0();
   input += synapse0x33cd2f0();
   input += synapse0x33cd330();
   input += synapse0x33cd370();
   input += synapse0x33cd3b0();
   input += synapse0x33cd3f0();
   input += synapse0x33cd430();
   input += synapse0x33cd470();
   input += synapse0x33cd4b0();
   input += synapse0x33cd4f0();
   input += synapse0x33cd530();
   input += synapse0x33cd570();
   input += synapse0x33cd000();
   input += synapse0x33cd040();
   input += synapse0x33cd6c0();
   input += synapse0x33cd700();
   input += synapse0x33cd740();
   input += synapse0x33cd780();
   input += synapse0x33cd7c0();
   input += synapse0x33cd800();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33cce70() {
   double input = input0x33cce70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33df4b0() {
   double input = -1.82552;
   input += synapse0x33df6d0();
   input += synapse0x33df710();
   input += synapse0x33df750();
   input += synapse0x33df790();
   input += synapse0x33df7d0();
   input += synapse0x33df810();
   input += synapse0x33df850();
   input += synapse0x33df890();
   input += synapse0x33df8d0();
   input += synapse0x33df910();
   input += synapse0x33df950();
   input += synapse0x33df990();
   input += synapse0x33df9d0();
   input += synapse0x33dfa10();
   input += synapse0x33dfa50();
   input += synapse0x33dfa90();
   input += synapse0x33cd840();
   input += synapse0x33cd880();
   input += synapse0x33dfbe0();
   input += synapse0x33dfc20();
   input += synapse0x33dfc60();
   input += synapse0x33dfca0();
   input += synapse0x33dfce0();
   input += synapse0x33dfd20();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33df4b0() {
   double input = input0x33df4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33dfd60() {
   double input = 0.89876;
   input += synapse0x33e00a0();
   input += synapse0x33e00e0();
   input += synapse0x33e0120();
   input += synapse0x33e0160();
   input += synapse0x33e01a0();
   input += synapse0x33e01e0();
   input += synapse0x33e0220();
   input += synapse0x33e0260();
   input += synapse0x33e02a0();
   input += synapse0x33e02e0();
   input += synapse0x33e0320();
   input += synapse0x33e0360();
   input += synapse0x33e03a0();
   input += synapse0x33e03e0();
   input += synapse0x33e0420();
   input += synapse0x33e0460();
   input += synapse0x33dfef0();
   input += synapse0x33dff30();
   input += synapse0x33e05b0();
   input += synapse0x33e05f0();
   input += synapse0x33e0630();
   input += synapse0x33e0670();
   input += synapse0x33e06b0();
   input += synapse0x33e06f0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33dfd60() {
   double input = input0x33dfd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e0730() {
   double input = 0.0039756;
   input += synapse0x33e0a70();
   input += synapse0x33e0ab0();
   input += synapse0x33e0af0();
   input += synapse0x33e0b30();
   input += synapse0x33e0b70();
   input += synapse0x33e0bb0();
   input += synapse0x33e0bf0();
   input += synapse0x33e0c30();
   input += synapse0x33e0c70();
   input += synapse0x33e0cb0();
   input += synapse0x33e0cf0();
   input += synapse0x33e0d30();
   input += synapse0x33e0d70();
   input += synapse0x33e0db0();
   input += synapse0x33e0df0();
   input += synapse0x33e0e30();
   input += synapse0x33e08c0();
   input += synapse0x33e0900();
   input += synapse0x33e0f80();
   input += synapse0x33e0fc0();
   input += synapse0x33e1000();
   input += synapse0x33e1040();
   input += synapse0x33e1080();
   input += synapse0x33e10c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e0730() {
   double input = input0x33e0730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e1100() {
   double input = 2.55815;
   input += synapse0x33e1440();
   input += synapse0x33e1480();
   input += synapse0x33e14c0();
   input += synapse0x33e1500();
   input += synapse0x33e1540();
   input += synapse0x33e1580();
   input += synapse0x33e15c0();
   input += synapse0x33e1600();
   input += synapse0x33e1640();
   input += synapse0x33e1680();
   input += synapse0x33e16c0();
   input += synapse0x33e1700();
   input += synapse0x33e1740();
   input += synapse0x33e1780();
   input += synapse0x33e17c0();
   input += synapse0x33e1800();
   input += synapse0x33e1290();
   input += synapse0x33e12d0();
   input += synapse0x33e1950();
   input += synapse0x33e1990();
   input += synapse0x33e19d0();
   input += synapse0x33e1a10();
   input += synapse0x33e1a50();
   input += synapse0x33e1a90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e1100() {
   double input = input0x33e1100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e8300() {
   double input = 0.523986;
   input += synapse0x3181900();
   input += synapse0x3181940();
   input += synapse0x33be430();
   input += synapse0x33be470();
   input += synapse0x33bff10();
   input += synapse0x33bff50();
   input += synapse0x33c0ce0();
   input += synapse0x33c0d20();
   input += synapse0x33c16b0();
   input += synapse0x33c16f0();
   input += synapse0x33c2080();
   input += synapse0x33c20c0();
   input += synapse0x33c2b60();
   input += synapse0x33c2ba0();
   input += synapse0x33c3530();
   input += synapse0x33c3570();
   input += synapse0x33c0610();
   input += synapse0x33c0650();
   input += synapse0x33c50e0();
   input += synapse0x33c5120();
   input += synapse0x33c5ab0();
   input += synapse0x33c5af0();
   input += synapse0x33c6480();
   input += synapse0x33c64c0();
   input += synapse0x33c6e50();
   input += synapse0x33c6e90();
   input += synapse0x33b9ee0();
   input += synapse0x33b9f20();
   input += synapse0x33c8f40();
   input += synapse0x33c8f80();
   input += synapse0x33c9910();
   input += synapse0x33c9950();
   input += synapse0x33ca2e0();
   input += synapse0x33ca320();
   input += synapse0x33cacb0();
   input += synapse0x33cacf0();
   input += synapse0x33cb680();
   input += synapse0x33cb6c0();
   input += synapse0x33c41d0();
   input += synapse0x33c4210();
   input += synapse0x33cda80();
   input += synapse0x33cdac0();
   input += synapse0x33ce410();
   input += synapse0x33ce450();
   input += synapse0x33cede0();
   input += synapse0x33cee20();
   input += synapse0x33cf7b0();
   input += synapse0x33cf7f0();
   input += synapse0x33d0180();
   input += synapse0x33d01c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e8300() {
   double input = input0x33e8300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e86a0() {
   double input = 0.347069;
   input += synapse0x33d28c0();
   input += synapse0x33d2900();
   input += synapse0x33c7e80();
   input += synapse0x33c7ec0();
   input += synapse0x33d54a0();
   input += synapse0x33d54e0();
   input += synapse0x33d5e70();
   input += synapse0x33d5eb0();
   input += synapse0x33d6840();
   input += synapse0x33d6880();
   input += synapse0x33d7210();
   input += synapse0x33d7250();
   input += synapse0x33d7be0();
   input += synapse0x33d7c20();
   input += synapse0x33d85b0();
   input += synapse0x33d85f0();
   input += synapse0x33d8f80();
   input += synapse0x33d8fc0();
   input += synapse0x33d9950();
   input += synapse0x33d9990();
   input += synapse0x33da530();
   input += synapse0x33da570();
   input += synapse0x33daf00();
   input += synapse0x33daf40();
   input += synapse0x33cbd80();
   input += synapse0x33cbdc0();
   input += synapse0x33cc750();
   input += synapse0x33cc790();
   input += synapse0x33cd120();
   input += synapse0x33cd160();
   input += synapse0x33df640();
   input += synapse0x33df680();
   input += synapse0x33e0010();
   input += synapse0x33e0050();
   input += synapse0x33e09e0();
   input += synapse0x33e0a20();
   input += synapse0x33e13b0();
   input += synapse0x33e13f0();
   input += synapse0x33bc220();
   input += synapse0x33bc260();
   input += synapse0x33d0b50();
   input += synapse0x33d0b90();
   input += synapse0x33e1ad0();
   input += synapse0x33e1b10();
   input += synapse0x33e1b50();
   input += synapse0x33e1b90();
   input += synapse0x33e8a40();
   input += synapse0x33e8a80();
   input += synapse0x33e8ac0();
   input += synapse0x33e8b00();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e86a0() {
   double input = input0x33e86a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e8b40() {
   double input = 0.553341;
   input += synapse0x33e8e80();
   input += synapse0x33e8ec0();
   input += synapse0x33e8f00();
   input += synapse0x33e8f40();
   input += synapse0x33e8f80();
   input += synapse0x33e8fc0();
   input += synapse0x33e9000();
   input += synapse0x33e9040();
   input += synapse0x33e9080();
   input += synapse0x33e90c0();
   input += synapse0x33e9100();
   input += synapse0x33e9140();
   input += synapse0x33e9180();
   input += synapse0x33e91c0();
   input += synapse0x33e9200();
   input += synapse0x33e9240();
   input += synapse0x33e8cd0();
   input += synapse0x33e8d10();
   input += synapse0x33e9390();
   input += synapse0x33e93d0();
   input += synapse0x33e9410();
   input += synapse0x33e9450();
   input += synapse0x33e9490();
   input += synapse0x33e94d0();
   input += synapse0x33e9510();
   input += synapse0x33e9550();
   input += synapse0x33e9590();
   input += synapse0x33e95d0();
   input += synapse0x33e9610();
   input += synapse0x33e9650();
   input += synapse0x33e9690();
   input += synapse0x33e96d0();
   input += synapse0x33e9280();
   input += synapse0x33e92c0();
   input += synapse0x33e9300();
   input += synapse0x33e9340();
   input += synapse0x33e9920();
   input += synapse0x33e9960();
   input += synapse0x33e99a0();
   input += synapse0x33e99e0();
   input += synapse0x33e9a20();
   input += synapse0x33e9a60();
   input += synapse0x33e9aa0();
   input += synapse0x33e9ae0();
   input += synapse0x33e9b20();
   input += synapse0x33e9b60();
   input += synapse0x33e9ba0();
   input += synapse0x33e9be0();
   input += synapse0x33e9c20();
   input += synapse0x33e9c60();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e8b40() {
   double input = input0x33e8b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33e9ca0() {
   double input = -0.100029;
   input += synapse0x33e9fe0();
   input += synapse0x33ea020();
   input += synapse0x33ea060();
   input += synapse0x33ea0a0();
   input += synapse0x33ea0e0();
   input += synapse0x33ea120();
   input += synapse0x33ea160();
   input += synapse0x33ea1a0();
   input += synapse0x33ea1e0();
   input += synapse0x33ea220();
   input += synapse0x33ea260();
   input += synapse0x33ea2a0();
   input += synapse0x33ea2e0();
   input += synapse0x33ea320();
   input += synapse0x33ea360();
   input += synapse0x33ea3a0();
   input += synapse0x33e9e30();
   input += synapse0x33e9e70();
   input += synapse0x33ea4f0();
   input += synapse0x33ea530();
   input += synapse0x33ea570();
   input += synapse0x33ea5b0();
   input += synapse0x33ea5f0();
   input += synapse0x33ea630();
   input += synapse0x33ea670();
   input += synapse0x33ea6b0();
   input += synapse0x33ea6f0();
   input += synapse0x33ea730();
   input += synapse0x33ea770();
   input += synapse0x33ea7b0();
   input += synapse0x33ea7f0();
   input += synapse0x33ea830();
   input += synapse0x33ea3e0();
   input += synapse0x33ea420();
   input += synapse0x33ea460();
   input += synapse0x33ea4a0();
   input += synapse0x33eaa80();
   input += synapse0x33eaac0();
   input += synapse0x33eab00();
   input += synapse0x33eab40();
   input += synapse0x33eab80();
   input += synapse0x33eabc0();
   input += synapse0x33eac00();
   input += synapse0x33eac40();
   input += synapse0x33eac80();
   input += synapse0x33eacc0();
   input += synapse0x33ead00();
   input += synapse0x33ead40();
   input += synapse0x33ead80();
   input += synapse0x33eadc0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33e9ca0() {
   double input = input0x33e9ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33eae00() {
   double input = -0.999992;
   input += synapse0x33eb140();
   input += synapse0x33eb180();
   input += synapse0x33eb1c0();
   input += synapse0x33eb200();
   input += synapse0x33eb240();
   input += synapse0x33eb280();
   input += synapse0x33eb2c0();
   input += synapse0x33eb300();
   input += synapse0x33eb340();
   input += synapse0x33eb380();
   input += synapse0x33eb3c0();
   input += synapse0x33eb400();
   input += synapse0x33eb440();
   input += synapse0x33eb480();
   input += synapse0x33eb4c0();
   input += synapse0x33eb500();
   input += synapse0x33eaf90();
   input += synapse0x33eafd0();
   input += synapse0x33eb650();
   input += synapse0x33eb690();
   input += synapse0x33eb6d0();
   input += synapse0x33eb710();
   input += synapse0x33eb750();
   input += synapse0x33eb790();
   input += synapse0x33eb7d0();
   input += synapse0x33eb810();
   input += synapse0x33eb850();
   input += synapse0x33eb890();
   input += synapse0x33eb8d0();
   input += synapse0x33eb910();
   input += synapse0x33eb950();
   input += synapse0x33eb990();
   input += synapse0x33eb540();
   input += synapse0x33eb580();
   input += synapse0x33eb5c0();
   input += synapse0x33eb600();
   input += synapse0x33ebbe0();
   input += synapse0x33ebc20();
   input += synapse0x33ebc60();
   input += synapse0x33ebca0();
   input += synapse0x33ebce0();
   input += synapse0x33ebd20();
   input += synapse0x33ebd60();
   input += synapse0x33ebda0();
   input += synapse0x33ebde0();
   input += synapse0x33ebe20();
   input += synapse0x33ebe60();
   input += synapse0x33ebea0();
   input += synapse0x33ebee0();
   input += synapse0x33ebf20();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33eae00() {
   double input = input0x33eae00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x33ebf60() {
   double input = 1.5097;
   input += synapse0x33ec180();
   input += synapse0x33ec1c0();
   input += synapse0x33ec200();
   input += synapse0x33ec240();
   input += synapse0x33ec280();
   return input;
}

double NNfunction_sb_cLcL::neuron0x33ebf60() {
   double input = input0x33ebf60();
   return (input * 1)+0;
}

double NNfunction_sb_cLcL::synapse0x33bc2b0() {
   return (neuron0x33b6fd0()*-0.0377366);
}

double NNfunction_sb_cLcL::synapse0x33bc2f0() {
   return (neuron0x33b7280()*-0.00256209);
}

double NNfunction_sb_cLcL::synapse0x33bc330() {
   return (neuron0x33b75c0()*0.258555);
}

double NNfunction_sb_cLcL::synapse0x33bc370() {
   return (neuron0x33b7900()*-0.792459);
}

double NNfunction_sb_cLcL::synapse0x33bc3b0() {
   return (neuron0x33b7c40()*0.0881018);
}

double NNfunction_sb_cLcL::synapse0x33bc3f0() {
   return (neuron0x33b7f80()*0.0156083);
}

double NNfunction_sb_cLcL::synapse0x33bc430() {
   return (neuron0x33b82c0()*-0.0434841);
}

double NNfunction_sb_cLcL::synapse0x33bc470() {
   return (neuron0x33b8600()*-0.029166);
}

double NNfunction_sb_cLcL::synapse0x33bc4b0() {
   return (neuron0x33b8940()*0.00619104);
}

double NNfunction_sb_cLcL::synapse0x33bc4f0() {
   return (neuron0x33b8c80()*-0.0520813);
}

double NNfunction_sb_cLcL::synapse0x33bc530() {
   return (neuron0x33b8fc0()*0.0386954);
}

double NNfunction_sb_cLcL::synapse0x33bc570() {
   return (neuron0x33b9300()*0.478265);
}

double NNfunction_sb_cLcL::synapse0x33bc5b0() {
   return (neuron0x33b9640()*-1.43819);
}

double NNfunction_sb_cLcL::synapse0x33bc5f0() {
   return (neuron0x33b9980()*-0.62334);
}

double NNfunction_sb_cLcL::synapse0x33bc630() {
   return (neuron0x33b9cc0()*0.407221);
}

double NNfunction_sb_cLcL::synapse0x33bc670() {
   return (neuron0x33ba000()*0.246539);
}

double NNfunction_sb_cLcL::synapse0x33bc100() {
   return (neuron0x33ba340()*-0.46198);
}

double NNfunction_sb_cLcL::synapse0x33bc140() {
   return (neuron0x33ba8a0()*0.210566);
}

double NNfunction_sb_cLcL::synapse0x3173330() {
   return (neuron0x33baac0()*0.1958);
}

double NNfunction_sb_cLcL::synapse0x3173370() {
   return (neuron0x33bae00()*0.151508);
}

double NNfunction_sb_cLcL::synapse0x33bc7c0() {
   return (neuron0x33bb140()*0.252224);
}

double NNfunction_sb_cLcL::synapse0x33bc800() {
   return (neuron0x33bb480()*-0.0101048);
}

double NNfunction_sb_cLcL::synapse0x33bc840() {
   return (neuron0x33bb7c0()*-0.0946617);
}

double NNfunction_sb_cLcL::synapse0x33bc880() {
   return (neuron0x33bbb00()*-0.25477);
}

double NNfunction_sb_cLcL::synapse0x33bcc00() {
   return (neuron0x33b6fd0()*0.103043);
}

double NNfunction_sb_cLcL::synapse0x33bcc40() {
   return (neuron0x33b7280()*-0.0269221);
}

double NNfunction_sb_cLcL::synapse0x33bcc80() {
   return (neuron0x33b75c0()*-0.662192);
}

double NNfunction_sb_cLcL::synapse0x33bccc0() {
   return (neuron0x33b7900()*1.84297);
}

double NNfunction_sb_cLcL::synapse0x33bcd00() {
   return (neuron0x33b7c40()*-0.0607331);
}

double NNfunction_sb_cLcL::synapse0x33bcd40() {
   return (neuron0x33b7f80()*-0.205795);
}

double NNfunction_sb_cLcL::synapse0x33bcd80() {
   return (neuron0x33b82c0()*-0.0236213);
}

double NNfunction_sb_cLcL::synapse0x33bcdc0() {
   return (neuron0x33b8600()*-0.051109);
}

double NNfunction_sb_cLcL::synapse0x33bce00() {
   return (neuron0x33b8940()*0.0899173);
}

double NNfunction_sb_cLcL::synapse0x33bc6b0() {
   return (neuron0x33b8c80()*0.169167);
}

double NNfunction_sb_cLcL::synapse0x33bc6f0() {
   return (neuron0x33b8fc0()*-0.0914);
}

double NNfunction_sb_cLcL::synapse0x33bc730() {
   return (neuron0x33b9300()*0.717753);
}

double NNfunction_sb_cLcL::synapse0x33bc770() {
   return (neuron0x33b9640()*1.92898);
}

double NNfunction_sb_cLcL::synapse0x33bd050() {
   return (neuron0x33b9980()*-0.106864);
}

double NNfunction_sb_cLcL::synapse0x33bd090() {
   return (neuron0x33b9cc0()*0.192771);
}

double NNfunction_sb_cLcL::synapse0x33bd0d0() {
   return (neuron0x33ba000()*0.10332);
}

double NNfunction_sb_cLcL::synapse0x33bca50() {
   return (neuron0x33ba340()*-0.244297);
}

double NNfunction_sb_cLcL::synapse0x33bca90() {
   return (neuron0x33ba8a0()*0.344147);
}

double NNfunction_sb_cLcL::synapse0x33bd220() {
   return (neuron0x33baac0()*0.106963);
}

double NNfunction_sb_cLcL::synapse0x33bd260() {
   return (neuron0x33bae00()*0.0660362);
}

double NNfunction_sb_cLcL::synapse0x33bd2a0() {
   return (neuron0x33bb140()*-0.209644);
}

double NNfunction_sb_cLcL::synapse0x33bd2e0() {
   return (neuron0x33bb480()*0.0604451);
}

double NNfunction_sb_cLcL::synapse0x33bd320() {
   return (neuron0x33bb7c0()*0.041877);
}

double NNfunction_sb_cLcL::synapse0x33bd360() {
   return (neuron0x33bbb00()*0.408684);
}

double NNfunction_sb_cLcL::synapse0x33bd6e0() {
   return (neuron0x33b6fd0()*-0.0195013);
}

double NNfunction_sb_cLcL::synapse0x33bd720() {
   return (neuron0x33b7280()*0.0891525);
}

double NNfunction_sb_cLcL::synapse0x33bd760() {
   return (neuron0x33b75c0()*-1.55674);
}

double NNfunction_sb_cLcL::synapse0x33bd7a0() {
   return (neuron0x33b7900()*0.484404);
}

double NNfunction_sb_cLcL::synapse0x33bd7e0() {
   return (neuron0x33b7c40()*-0.161448);
}

double NNfunction_sb_cLcL::synapse0x33bd820() {
   return (neuron0x33b7f80()*-0.0834121);
}

double NNfunction_sb_cLcL::synapse0x33bd860() {
   return (neuron0x33b82c0()*-0.0629797);
}

double NNfunction_sb_cLcL::synapse0x33bd8a0() {
   return (neuron0x33b8600()*-0.0324021);
}

double NNfunction_sb_cLcL::synapse0x33bd8e0() {
   return (neuron0x33b8940()*0.195135);
}

double NNfunction_sb_cLcL::synapse0x33bd920() {
   return (neuron0x33b8c80()*0.0521075);
}

double NNfunction_sb_cLcL::synapse0x33bd960() {
   return (neuron0x33b8fc0()*-0.221479);
}

double NNfunction_sb_cLcL::synapse0x33bd9a0() {
   return (neuron0x33b9300()*-0.166389);
}

double NNfunction_sb_cLcL::synapse0x33bd9e0() {
   return (neuron0x33b9640()*-0.246694);
}

double NNfunction_sb_cLcL::synapse0x33bda20() {
   return (neuron0x33b9980()*-0.425259);
}

double NNfunction_sb_cLcL::synapse0x33bda60() {
   return (neuron0x33b9cc0()*-0.570994);
}

double NNfunction_sb_cLcL::synapse0x33bdaa0() {
   return (neuron0x33ba000()*0.0983943);
}

double NNfunction_sb_cLcL::synapse0x33bd530() {
   return (neuron0x33ba340()*-0.150038);
}

double NNfunction_sb_cLcL::synapse0x33bd570() {
   return (neuron0x33ba8a0()*0.0910805);
}

double NNfunction_sb_cLcL::synapse0x3173840() {
   return (neuron0x33baac0()*-0.51281);
}

double NNfunction_sb_cLcL::synapse0x3181110() {
   return (neuron0x33bae00()*-0.205882);
}

double NNfunction_sb_cLcL::synapse0x3181150() {
   return (neuron0x33bb140()*-0.137159);
}

double NNfunction_sb_cLcL::synapse0x33bf9e0() {
   return (neuron0x33bb480()*-0.0648045);
}

double NNfunction_sb_cLcL::synapse0x33bfa20() {
   return (neuron0x33bb7c0()*-0.15526);
}

double NNfunction_sb_cLcL::synapse0x33b6d10() {
   return (neuron0x33bbb00()*0.0957223);
}

double NNfunction_sb_cLcL::synapse0x33b6de0() {
   return (neuron0x33b6fd0()*-1.25659);
}

double NNfunction_sb_cLcL::synapse0x3181990() {
   return (neuron0x33b7280()*0.0849214);
}

double NNfunction_sb_cLcL::synapse0x33bcfd0() {
   return (neuron0x33b75c0()*1.94386);
}

double NNfunction_sb_cLcL::synapse0x33bd010() {
   return (neuron0x33b7900()*-0.346032);
}

double NNfunction_sb_cLcL::synapse0x33bdbf0() {
   return (neuron0x33b7c40()*0.725846);
}

double NNfunction_sb_cLcL::synapse0x33bdc30() {
   return (neuron0x33b7f80()*-0.150753);
}

double NNfunction_sb_cLcL::synapse0x33bdc70() {
   return (neuron0x33b82c0()*0.315619);
}

double NNfunction_sb_cLcL::synapse0x33bdcb0() {
   return (neuron0x33b8600()*-0.270236);
}

double NNfunction_sb_cLcL::synapse0x33bdcf0() {
   return (neuron0x33b8940()*0.309164);
}

double NNfunction_sb_cLcL::synapse0x33bdd30() {
   return (neuron0x33b8c80()*0.0209312);
}

double NNfunction_sb_cLcL::synapse0x33bdd70() {
   return (neuron0x33b8fc0()*-0.211068);
}

double NNfunction_sb_cLcL::synapse0x33bddb0() {
   return (neuron0x33b9300()*-1.37389);
}

double NNfunction_sb_cLcL::synapse0x33bddf0() {
   return (neuron0x33b9640()*-1.01956);
}

double NNfunction_sb_cLcL::synapse0x33bde30() {
   return (neuron0x33b9980()*-1.33762);
}

double NNfunction_sb_cLcL::synapse0x33bde70() {
   return (neuron0x33b9cc0()*-1.216);
}

double NNfunction_sb_cLcL::synapse0x33bdeb0() {
   return (neuron0x33ba000()*-0.400616);
}

double NNfunction_sb_cLcL::synapse0x33b6d50() {
   return (neuron0x33ba340()*-0.652167);
}

double NNfunction_sb_cLcL::synapse0x33b6d90() {
   return (neuron0x33ba8a0()*-1.41358);
}

double NNfunction_sb_cLcL::synapse0x33be000() {
   return (neuron0x33baac0()*0.606384);
}

double NNfunction_sb_cLcL::synapse0x33be040() {
   return (neuron0x33bae00()*-0.421692);
}

double NNfunction_sb_cLcL::synapse0x33be080() {
   return (neuron0x33bb140()*0.066429);
}

double NNfunction_sb_cLcL::synapse0x33be0c0() {
   return (neuron0x33bb480()*0.513823);
}

double NNfunction_sb_cLcL::synapse0x33be100() {
   return (neuron0x33bb7c0()*-0.278362);
}

double NNfunction_sb_cLcL::synapse0x33be140() {
   return (neuron0x33bbb00()*-0.782037);
}

double NNfunction_sb_cLcL::synapse0x33be4c0() {
   return (neuron0x33b6fd0()*0.0596486);
}

double NNfunction_sb_cLcL::synapse0x33be500() {
   return (neuron0x33b7280()*-0.0600548);
}

double NNfunction_sb_cLcL::synapse0x33be540() {
   return (neuron0x33b75c0()*0.678789);
}

double NNfunction_sb_cLcL::synapse0x33be580() {
   return (neuron0x33b7900()*-0.374288);
}

double NNfunction_sb_cLcL::synapse0x33be5c0() {
   return (neuron0x33b7c40()*0.589198);
}

double NNfunction_sb_cLcL::synapse0x33be600() {
   return (neuron0x33b7f80()*1.42191);
}

double NNfunction_sb_cLcL::synapse0x33be640() {
   return (neuron0x33b82c0()*-0.490038);
}

double NNfunction_sb_cLcL::synapse0x33be680() {
   return (neuron0x33b8600()*-0.0427812);
}

double NNfunction_sb_cLcL::synapse0x33be6c0() {
   return (neuron0x33b8940()*-0.191636);
}

double NNfunction_sb_cLcL::synapse0x33be700() {
   return (neuron0x33b8c80()*-0.00417406);
}

double NNfunction_sb_cLcL::synapse0x33be740() {
   return (neuron0x33b8fc0()*-0.123188);
}

double NNfunction_sb_cLcL::synapse0x33be780() {
   return (neuron0x33b9300()*-0.762918);
}

double NNfunction_sb_cLcL::synapse0x33be7c0() {
   return (neuron0x33b9640()*-2.19963);
}

double NNfunction_sb_cLcL::synapse0x33be800() {
   return (neuron0x33b9980()*-0.477036);
}

double NNfunction_sb_cLcL::synapse0x33be840() {
   return (neuron0x33b9cc0()*-1.58667);
}

double NNfunction_sb_cLcL::synapse0x33be880() {
   return (neuron0x33ba000()*-0.747432);
}

double NNfunction_sb_cLcL::synapse0x33be9d0() {
   return (neuron0x33ba340()*-0.538969);
}

double NNfunction_sb_cLcL::synapse0x33be310() {
   return (neuron0x33ba8a0()*0.0525101);
}

double NNfunction_sb_cLcL::synapse0x33be350() {
   return (neuron0x33baac0()*-0.601686);
}

double NNfunction_sb_cLcL::synapse0x33bfb20() {
   return (neuron0x33bae00()*-0.397353);
}

double NNfunction_sb_cLcL::synapse0x33bfb60() {
   return (neuron0x33bb140()*0.960127);
}

double NNfunction_sb_cLcL::synapse0x33bfba0() {
   return (neuron0x33bb480()*0.278293);
}

double NNfunction_sb_cLcL::synapse0x33bfbe0() {
   return (neuron0x33bb7c0()*-0.501195);
}

double NNfunction_sb_cLcL::synapse0x33bfc20() {
   return (neuron0x33bbb00()*-0.324398);
}

double NNfunction_sb_cLcL::synapse0x33bffa0() {
   return (neuron0x33b6fd0()*0.00587681);
}

double NNfunction_sb_cLcL::synapse0x33bffe0() {
   return (neuron0x33b7280()*-0.00918861);
}

double NNfunction_sb_cLcL::synapse0x33c0020() {
   return (neuron0x33b75c0()*0.025962);
}

double NNfunction_sb_cLcL::synapse0x33c0060() {
   return (neuron0x33b7900()*11.4532);
}

double NNfunction_sb_cLcL::synapse0x33c00a0() {
   return (neuron0x33b7c40()*-0.0516423);
}

double NNfunction_sb_cLcL::synapse0x33c00e0() {
   return (neuron0x33b7f80()*-5.11838e-05);
}

double NNfunction_sb_cLcL::synapse0x33c0120() {
   return (neuron0x33b82c0()*0.00983133);
}

double NNfunction_sb_cLcL::synapse0x33c0160() {
   return (neuron0x33b8600()*-0.081084);
}

double NNfunction_sb_cLcL::synapse0x33c01a0() {
   return (neuron0x33b8940()*-0.0194922);
}

double NNfunction_sb_cLcL::synapse0x3181460() {
   return (neuron0x33b8c80()*0.0217564);
}

double NNfunction_sb_cLcL::synapse0x31814a0() {
   return (neuron0x33b8fc0()*-0.0247163);
}

double NNfunction_sb_cLcL::synapse0x31814e0() {
   return (neuron0x33b9300()*0.0911614);
}

double NNfunction_sb_cLcL::synapse0x3181520() {
   return (neuron0x33b9640()*-0.119347);
}

double NNfunction_sb_cLcL::synapse0x3181560() {
   return (neuron0x33b9980()*0.0675834);
}

double NNfunction_sb_cLcL::synapse0x31815a0() {
   return (neuron0x33b9cc0()*-0.0281465);
}

double NNfunction_sb_cLcL::synapse0x31815e0() {
   return (neuron0x33ba000()*0.117297);
}

double NNfunction_sb_cLcL::synapse0x33bfdf0() {
   return (neuron0x33ba340()*0.0197268);
}

double NNfunction_sb_cLcL::synapse0x33bfe30() {
   return (neuron0x33ba8a0()*0.0101629);
}

double NNfunction_sb_cLcL::synapse0x3181730() {
   return (neuron0x33baac0()*0.0415466);
}

double NNfunction_sb_cLcL::synapse0x3181770() {
   return (neuron0x33bae00()*-0.0734345);
}

double NNfunction_sb_cLcL::synapse0x31817b0() {
   return (neuron0x33bb140()*-0.083712);
}

double NNfunction_sb_cLcL::synapse0x31817f0() {
   return (neuron0x33bb480()*0.0203002);
}

double NNfunction_sb_cLcL::synapse0x3181830() {
   return (neuron0x33bb7c0()*-0.0432263);
}

double NNfunction_sb_cLcL::synapse0x33c09f0() {
   return (neuron0x33bbb00()*0.0642922);
}

double NNfunction_sb_cLcL::synapse0x33c0d70() {
   return (neuron0x33b6fd0()*-0.160934);
}

double NNfunction_sb_cLcL::synapse0x33c0db0() {
   return (neuron0x33b7280()*-0.0321789);
}

double NNfunction_sb_cLcL::synapse0x33c0df0() {
   return (neuron0x33b75c0()*-0.97931);
}

double NNfunction_sb_cLcL::synapse0x33c0e30() {
   return (neuron0x33b7900()*1.08316);
}

double NNfunction_sb_cLcL::synapse0x33c0e70() {
   return (neuron0x33b7c40()*-0.565982);
}

double NNfunction_sb_cLcL::synapse0x33c0eb0() {
   return (neuron0x33b7f80()*0.0980403);
}

double NNfunction_sb_cLcL::synapse0x33c0ef0() {
   return (neuron0x33b82c0()*-0.370756);
}

double NNfunction_sb_cLcL::synapse0x33c0f30() {
   return (neuron0x33b8600()*-0.155988);
}

double NNfunction_sb_cLcL::synapse0x33c0f70() {
   return (neuron0x33b8940()*-0.0721554);
}

double NNfunction_sb_cLcL::synapse0x33c0fb0() {
   return (neuron0x33b8c80()*0.0741668);
}

double NNfunction_sb_cLcL::synapse0x33c0ff0() {
   return (neuron0x33b8fc0()*-0.326296);
}

double NNfunction_sb_cLcL::synapse0x33c1030() {
   return (neuron0x33b9300()*0.288633);
}

double NNfunction_sb_cLcL::synapse0x33c1070() {
   return (neuron0x33b9640()*2.8806);
}

double NNfunction_sb_cLcL::synapse0x33c10b0() {
   return (neuron0x33b9980()*1.01773);
}

double NNfunction_sb_cLcL::synapse0x33c10f0() {
   return (neuron0x33b9cc0()*0.343843);
}

double NNfunction_sb_cLcL::synapse0x33c1130() {
   return (neuron0x33ba000()*0.204822);
}

double NNfunction_sb_cLcL::synapse0x33c0bc0() {
   return (neuron0x33ba340()*0.542198);
}

double NNfunction_sb_cLcL::synapse0x33c0c00() {
   return (neuron0x33ba8a0()*0.281296);
}

double NNfunction_sb_cLcL::synapse0x33c1280() {
   return (neuron0x33baac0()*0.306679);
}

double NNfunction_sb_cLcL::synapse0x33c12c0() {
   return (neuron0x33bae00()*-0.417724);
}

double NNfunction_sb_cLcL::synapse0x33c1300() {
   return (neuron0x33bb140()*-0.681888);
}

double NNfunction_sb_cLcL::synapse0x33c1340() {
   return (neuron0x33bb480()*0.371099);
}

double NNfunction_sb_cLcL::synapse0x33c1380() {
   return (neuron0x33bb7c0()*0.472903);
}

double NNfunction_sb_cLcL::synapse0x33c13c0() {
   return (neuron0x33bbb00()*1.15158);
}

double NNfunction_sb_cLcL::synapse0x33c1740() {
   return (neuron0x33b6fd0()*0.219389);
}

double NNfunction_sb_cLcL::synapse0x33c1780() {
   return (neuron0x33b7280()*-0.129316);
}

double NNfunction_sb_cLcL::synapse0x33c17c0() {
   return (neuron0x33b75c0()*0.51284);
}

double NNfunction_sb_cLcL::synapse0x33c1800() {
   return (neuron0x33b7900()*1.05391);
}

double NNfunction_sb_cLcL::synapse0x33c1840() {
   return (neuron0x33b7c40()*0.19041);
}

double NNfunction_sb_cLcL::synapse0x33c1880() {
   return (neuron0x33b7f80()*0.746746);
}

double NNfunction_sb_cLcL::synapse0x33c18c0() {
   return (neuron0x33b82c0()*-0.133491);
}

double NNfunction_sb_cLcL::synapse0x33c1900() {
   return (neuron0x33b8600()*-0.0679232);
}

double NNfunction_sb_cLcL::synapse0x33c1940() {
   return (neuron0x33b8940()*-0.0764482);
}

double NNfunction_sb_cLcL::synapse0x33c1980() {
   return (neuron0x33b8c80()*0.120015);
}

double NNfunction_sb_cLcL::synapse0x33c19c0() {
   return (neuron0x33b8fc0()*-0.140639);
}

double NNfunction_sb_cLcL::synapse0x33c1a00() {
   return (neuron0x33b9300()*0.191738);
}

double NNfunction_sb_cLcL::synapse0x33c1a40() {
   return (neuron0x33b9640()*-0.100098);
}

double NNfunction_sb_cLcL::synapse0x33c1a80() {
   return (neuron0x33b9980()*0.40534);
}

double NNfunction_sb_cLcL::synapse0x33c1ac0() {
   return (neuron0x33b9cc0()*0.813535);
}

double NNfunction_sb_cLcL::synapse0x33c1b00() {
   return (neuron0x33ba000()*1.56272);
}

double NNfunction_sb_cLcL::synapse0x33c1590() {
   return (neuron0x33ba340()*0.474023);
}

double NNfunction_sb_cLcL::synapse0x33c15d0() {
   return (neuron0x33ba8a0()*0.286061);
}

double NNfunction_sb_cLcL::synapse0x33c1c50() {
   return (neuron0x33baac0()*-0.152345);
}

double NNfunction_sb_cLcL::synapse0x33c1c90() {
   return (neuron0x33bae00()*-0.30261);
}

double NNfunction_sb_cLcL::synapse0x33c1cd0() {
   return (neuron0x33bb140()*0.0044697);
}

double NNfunction_sb_cLcL::synapse0x33c1d10() {
   return (neuron0x33bb480()*0.479443);
}

double NNfunction_sb_cLcL::synapse0x33c1d50() {
   return (neuron0x33bb7c0()*0.541934);
}

double NNfunction_sb_cLcL::synapse0x33c1d90() {
   return (neuron0x33bbb00()*0.463673);
}

double NNfunction_sb_cLcL::synapse0x33ba790() {
   return (neuron0x33b6fd0()*-1.60039);
}

double NNfunction_sb_cLcL::synapse0x33ba7d0() {
   return (neuron0x33b7280()*0.16206);
}

double NNfunction_sb_cLcL::synapse0x33ba810() {
   return (neuron0x33b75c0()*-1.5192);
}

double NNfunction_sb_cLcL::synapse0x33ba850() {
   return (neuron0x33b7900()*0.85829);
}

double NNfunction_sb_cLcL::synapse0x33c2320() {
   return (neuron0x33b7c40()*-0.690451);
}

double NNfunction_sb_cLcL::synapse0x33c2360() {
   return (neuron0x33b7f80()*0.098589);
}

double NNfunction_sb_cLcL::synapse0x33c23a0() {
   return (neuron0x33b82c0()*-0.0879807);
}

double NNfunction_sb_cLcL::synapse0x33c23e0() {
   return (neuron0x33b8600()*0.999944);
}

double NNfunction_sb_cLcL::synapse0x33c2420() {
   return (neuron0x33b8940()*0.0930584);
}

double NNfunction_sb_cLcL::synapse0x33c2460() {
   return (neuron0x33b8c80()*0.450136);
}

double NNfunction_sb_cLcL::synapse0x33c24a0() {
   return (neuron0x33b8fc0()*0.312959);
}

double NNfunction_sb_cLcL::synapse0x33c24e0() {
   return (neuron0x33b9300()*1.65462);
}

double NNfunction_sb_cLcL::synapse0x33c2520() {
   return (neuron0x33b9640()*2.32849);
}

double NNfunction_sb_cLcL::synapse0x33c2560() {
   return (neuron0x33b9980()*0.380523);
}

double NNfunction_sb_cLcL::synapse0x33c25a0() {
   return (neuron0x33b9cc0()*0.610048);
}

double NNfunction_sb_cLcL::synapse0x33c25e0() {
   return (neuron0x33ba000()*1.13577);
}

double NNfunction_sb_cLcL::synapse0x33c1f60() {
   return (neuron0x33ba340()*0.994359);
}

double NNfunction_sb_cLcL::synapse0x33c1fa0() {
   return (neuron0x33ba8a0()*-0.0941951);
}

double NNfunction_sb_cLcL::synapse0x33c2730() {
   return (neuron0x33baac0()*0.607944);
}

double NNfunction_sb_cLcL::synapse0x33c2770() {
   return (neuron0x33bae00()*0.236152);
}

double NNfunction_sb_cLcL::synapse0x33c27b0() {
   return (neuron0x33bb140()*-0.181977);
}

double NNfunction_sb_cLcL::synapse0x33c27f0() {
   return (neuron0x33bb480()*0.0965805);
}

double NNfunction_sb_cLcL::synapse0x33c2830() {
   return (neuron0x33bb7c0()*-0.165525);
}

double NNfunction_sb_cLcL::synapse0x33c2870() {
   return (neuron0x33bbb00()*2.76232);
}

double NNfunction_sb_cLcL::synapse0x33c2bf0() {
   return (neuron0x33b6fd0()*-0.00442174);
}

double NNfunction_sb_cLcL::synapse0x33c2c30() {
   return (neuron0x33b7280()*0.0430962);
}

double NNfunction_sb_cLcL::synapse0x33c2c70() {
   return (neuron0x33b75c0()*0.614017);
}

double NNfunction_sb_cLcL::synapse0x33c2cb0() {
   return (neuron0x33b7900()*0.589931);
}

double NNfunction_sb_cLcL::synapse0x33c2cf0() {
   return (neuron0x33b7c40()*0.593239);
}

double NNfunction_sb_cLcL::synapse0x33c2d30() {
   return (neuron0x33b7f80()*-0.557781);
}

double NNfunction_sb_cLcL::synapse0x33c2d70() {
   return (neuron0x33b82c0()*-0.00446569);
}

double NNfunction_sb_cLcL::synapse0x33c2db0() {
   return (neuron0x33b8600()*0.079207);
}

double NNfunction_sb_cLcL::synapse0x33c2df0() {
   return (neuron0x33b8940()*-0.26501);
}

double NNfunction_sb_cLcL::synapse0x33c2e30() {
   return (neuron0x33b8c80()*-0.937392);
}

double NNfunction_sb_cLcL::synapse0x33c2e70() {
   return (neuron0x33b8fc0()*-0.625318);
}

double NNfunction_sb_cLcL::synapse0x33c2eb0() {
   return (neuron0x33b9300()*0.114881);
}

double NNfunction_sb_cLcL::synapse0x33c2ef0() {
   return (neuron0x33b9640()*-2.2274);
}

double NNfunction_sb_cLcL::synapse0x33c2f30() {
   return (neuron0x33b9980()*0.199425);
}

double NNfunction_sb_cLcL::synapse0x33c2f70() {
   return (neuron0x33b9cc0()*-0.155266);
}

double NNfunction_sb_cLcL::synapse0x33c2fb0() {
   return (neuron0x33ba000()*0.0426323);
}

double NNfunction_sb_cLcL::synapse0x33c2a40() {
   return (neuron0x33ba340()*0.086731);
}

double NNfunction_sb_cLcL::synapse0x33c2a80() {
   return (neuron0x33ba8a0()*0.0310847);
}

double NNfunction_sb_cLcL::synapse0x33c3100() {
   return (neuron0x33baac0()*-0.165288);
}

double NNfunction_sb_cLcL::synapse0x33c3140() {
   return (neuron0x33bae00()*0.480842);
}

double NNfunction_sb_cLcL::synapse0x33c3180() {
   return (neuron0x33bb140()*0.139411);
}

double NNfunction_sb_cLcL::synapse0x33c31c0() {
   return (neuron0x33bb480()*0.743441);
}

double NNfunction_sb_cLcL::synapse0x33c3200() {
   return (neuron0x33bb7c0()*0.792661);
}

double NNfunction_sb_cLcL::synapse0x33c3240() {
   return (neuron0x33bbb00()*1.03256);
}

double NNfunction_sb_cLcL::synapse0x33c35c0() {
   return (neuron0x33b6fd0()*0.07185);
}

double NNfunction_sb_cLcL::synapse0x33c3600() {
   return (neuron0x33b7280()*-0.0201091);
}

double NNfunction_sb_cLcL::synapse0x33c3640() {
   return (neuron0x33b75c0()*-0.342588);
}

double NNfunction_sb_cLcL::synapse0x33c3680() {
   return (neuron0x33b7900()*-1.11836);
}

double NNfunction_sb_cLcL::synapse0x33c36c0() {
   return (neuron0x33b7c40()*-0.112121);
}

double NNfunction_sb_cLcL::synapse0x33c3700() {
   return (neuron0x33b7f80()*-0.0816792);
}

double NNfunction_sb_cLcL::synapse0x33c3740() {
   return (neuron0x33b82c0()*-0.0471698);
}

double NNfunction_sb_cLcL::synapse0x33c3780() {
   return (neuron0x33b8600()*-0.0367194);
}

double NNfunction_sb_cLcL::synapse0x33c37c0() {
   return (neuron0x33b8940()*0.00399245);
}

double NNfunction_sb_cLcL::synapse0x33c3800() {
   return (neuron0x33b8c80()*0.0198352);
}

double NNfunction_sb_cLcL::synapse0x33c3840() {
   return (neuron0x33b8fc0()*-0.084679);
}

double NNfunction_sb_cLcL::synapse0x33c3880() {
   return (neuron0x33b9300()*0.102769);
}

double NNfunction_sb_cLcL::synapse0x33c38c0() {
   return (neuron0x33b9640()*2.76216);
}

double NNfunction_sb_cLcL::synapse0x33c3900() {
   return (neuron0x33b9980()*-0.0702409);
}

double NNfunction_sb_cLcL::synapse0x33c3940() {
   return (neuron0x33b9cc0()*0.000775168);
}

double NNfunction_sb_cLcL::synapse0x33c3980() {
   return (neuron0x33ba000()*0.0349445);
}

double NNfunction_sb_cLcL::synapse0x33c3410() {
   return (neuron0x33ba340()*0.0743801);
}

double NNfunction_sb_cLcL::synapse0x33c3450() {
   return (neuron0x33ba8a0()*0.0141807);
}

double NNfunction_sb_cLcL::synapse0x33c01e0() {
   return (neuron0x33baac0()*0.0112498);
}

double NNfunction_sb_cLcL::synapse0x33c0220() {
   return (neuron0x33bae00()*-0.0619612);
}

double NNfunction_sb_cLcL::synapse0x33c0260() {
   return (neuron0x33bb140()*-0.0112206);
}

double NNfunction_sb_cLcL::synapse0x33c02a0() {
   return (neuron0x33bb480()*-0.0107006);
}

double NNfunction_sb_cLcL::synapse0x33c02e0() {
   return (neuron0x33bb7c0()*-0.00879991);
}

double NNfunction_sb_cLcL::synapse0x33c0320() {
   return (neuron0x33bbb00()*0.356263);
}

double NNfunction_sb_cLcL::synapse0x33c06a0() {
   return (neuron0x33b6fd0()*0.0923147);
}

double NNfunction_sb_cLcL::synapse0x33c06e0() {
   return (neuron0x33b7280()*0.443743);
}

double NNfunction_sb_cLcL::synapse0x33c0720() {
   return (neuron0x33b75c0()*5.49254);
}

double NNfunction_sb_cLcL::synapse0x33c0760() {
   return (neuron0x33b7900()*-2.05151);
}

double NNfunction_sb_cLcL::synapse0x33c07a0() {
   return (neuron0x33b7c40()*0.0132486);
}

double NNfunction_sb_cLcL::synapse0x33c07e0() {
   return (neuron0x33b7f80()*0.409789);
}

double NNfunction_sb_cLcL::synapse0x33c0820() {
   return (neuron0x33b82c0()*-0.301712);
}

double NNfunction_sb_cLcL::synapse0x33c0860() {
   return (neuron0x33b8600()*0.203162);
}

double NNfunction_sb_cLcL::synapse0x33c08a0() {
   return (neuron0x33b8940()*0.177433);
}

double NNfunction_sb_cLcL::synapse0x33c08e0() {
   return (neuron0x33b8c80()*0.00486337);
}

double NNfunction_sb_cLcL::synapse0x33c0920() {
   return (neuron0x33b8fc0()*1.56985);
}

double NNfunction_sb_cLcL::synapse0x33c0960() {
   return (neuron0x33b9300()*-0.798144);
}

double NNfunction_sb_cLcL::synapse0x33c09a0() {
   return (neuron0x33b9640()*-5.83758);
}

double NNfunction_sb_cLcL::synapse0x33c4ae0() {
   return (neuron0x33b9980()*-1.92115);
}

double NNfunction_sb_cLcL::synapse0x33c4b20() {
   return (neuron0x33b9cc0()*-0.0914055);
}

double NNfunction_sb_cLcL::synapse0x33c4b60() {
   return (neuron0x33ba000()*-0.214716);
}

double NNfunction_sb_cLcL::synapse0x33c04f0() {
   return (neuron0x33ba340()*-0.862589);
}

double NNfunction_sb_cLcL::synapse0x33c0530() {
   return (neuron0x33ba8a0()*-0.563807);
}

double NNfunction_sb_cLcL::synapse0x33c4cb0() {
   return (neuron0x33baac0()*-0.852401);
}

double NNfunction_sb_cLcL::synapse0x33c4cf0() {
   return (neuron0x33bae00()*-0.62827);
}

double NNfunction_sb_cLcL::synapse0x33c4d30() {
   return (neuron0x33bb140()*3.35974);
}

double NNfunction_sb_cLcL::synapse0x33c4d70() {
   return (neuron0x33bb480()*1.63717);
}

double NNfunction_sb_cLcL::synapse0x33c4db0() {
   return (neuron0x33bb7c0()*-2.3998);
}

double NNfunction_sb_cLcL::synapse0x33c4df0() {
   return (neuron0x33bbb00()*0.189709);
}

double NNfunction_sb_cLcL::synapse0x33c5170() {
   return (neuron0x33b6fd0()*0.0543721);
}

double NNfunction_sb_cLcL::synapse0x33c51b0() {
   return (neuron0x33b7280()*0.0375422);
}

double NNfunction_sb_cLcL::synapse0x33c51f0() {
   return (neuron0x33b75c0()*-0.192845);
}

double NNfunction_sb_cLcL::synapse0x33c5230() {
   return (neuron0x33b7900()*0.292072);
}

double NNfunction_sb_cLcL::synapse0x33c5270() {
   return (neuron0x33b7c40()*-0.195919);
}

double NNfunction_sb_cLcL::synapse0x33c52b0() {
   return (neuron0x33b7f80()*-0.0107157);
}

double NNfunction_sb_cLcL::synapse0x33c52f0() {
   return (neuron0x33b82c0()*-0.0942851);
}

double NNfunction_sb_cLcL::synapse0x33c5330() {
   return (neuron0x33b8600()*-0.0285794);
}

double NNfunction_sb_cLcL::synapse0x33c5370() {
   return (neuron0x33b8940()*-0.0896601);
}

double NNfunction_sb_cLcL::synapse0x33c53b0() {
   return (neuron0x33b8c80()*0.0602863);
}

double NNfunction_sb_cLcL::synapse0x33c53f0() {
   return (neuron0x33b8fc0()*-0.0919139);
}

double NNfunction_sb_cLcL::synapse0x33c5430() {
   return (neuron0x33b9300()*0.125751);
}

double NNfunction_sb_cLcL::synapse0x33c5470() {
   return (neuron0x33b9640()*-4.22298);
}

double NNfunction_sb_cLcL::synapse0x33c54b0() {
   return (neuron0x33b9980()*0.276761);
}

double NNfunction_sb_cLcL::synapse0x33c54f0() {
   return (neuron0x33b9cc0()*0.0442817);
}

double NNfunction_sb_cLcL::synapse0x33c5530() {
   return (neuron0x33ba000()*0.0308161);
}

double NNfunction_sb_cLcL::synapse0x33c4fc0() {
   return (neuron0x33ba340()*0.167087);
}

double NNfunction_sb_cLcL::synapse0x33c5000() {
   return (neuron0x33ba8a0()*0.0781202);
}

double NNfunction_sb_cLcL::synapse0x33c5680() {
   return (neuron0x33baac0()*0.0357116);
}

double NNfunction_sb_cLcL::synapse0x33c56c0() {
   return (neuron0x33bae00()*0.0215024);
}

double NNfunction_sb_cLcL::synapse0x33c5700() {
   return (neuron0x33bb140()*-0.0441593);
}

double NNfunction_sb_cLcL::synapse0x33c5740() {
   return (neuron0x33bb480()*0.0508629);
}

double NNfunction_sb_cLcL::synapse0x33c5780() {
   return (neuron0x33bb7c0()*0.0795461);
}

double NNfunction_sb_cLcL::synapse0x33c57c0() {
   return (neuron0x33bbb00()*0.597444);
}

double NNfunction_sb_cLcL::synapse0x33c5b40() {
   return (neuron0x33b6fd0()*0.0266894);
}

double NNfunction_sb_cLcL::synapse0x33c5b80() {
   return (neuron0x33b7280()*-0.00466148);
}

double NNfunction_sb_cLcL::synapse0x33c5bc0() {
   return (neuron0x33b75c0()*-1.18244);
}

double NNfunction_sb_cLcL::synapse0x33c5c00() {
   return (neuron0x33b7900()*-0.637885);
}

double NNfunction_sb_cLcL::synapse0x33c5c40() {
   return (neuron0x33b7c40()*-0.0154473);
}

double NNfunction_sb_cLcL::synapse0x33c5c80() {
   return (neuron0x33b7f80()*-0.525276);
}

double NNfunction_sb_cLcL::synapse0x33c5cc0() {
   return (neuron0x33b82c0()*-0.206446);
}

double NNfunction_sb_cLcL::synapse0x33c5d00() {
   return (neuron0x33b8600()*0.482752);
}

double NNfunction_sb_cLcL::synapse0x33c5d40() {
   return (neuron0x33b8940()*0.253963);
}

double NNfunction_sb_cLcL::synapse0x33c5d80() {
   return (neuron0x33b8c80()*0.32427);
}

double NNfunction_sb_cLcL::synapse0x33c5dc0() {
   return (neuron0x33b8fc0()*-0.275465);
}

double NNfunction_sb_cLcL::synapse0x33c5e00() {
   return (neuron0x33b9300()*0.395187);
}

double NNfunction_sb_cLcL::synapse0x33c5e40() {
   return (neuron0x33b9640()*0.270146);
}

double NNfunction_sb_cLcL::synapse0x33c5e80() {
   return (neuron0x33b9980()*0.993114);
}

double NNfunction_sb_cLcL::synapse0x33c5ec0() {
   return (neuron0x33b9cc0()*-0.332836);
}

double NNfunction_sb_cLcL::synapse0x33c5f00() {
   return (neuron0x33ba000()*0.568723);
}

double NNfunction_sb_cLcL::synapse0x33c5990() {
   return (neuron0x33ba340()*0.692022);
}

double NNfunction_sb_cLcL::synapse0x33c59d0() {
   return (neuron0x33ba8a0()*-0.229224);
}

double NNfunction_sb_cLcL::synapse0x33c6050() {
   return (neuron0x33baac0()*0.0989507);
}

double NNfunction_sb_cLcL::synapse0x33c6090() {
   return (neuron0x33bae00()*0.583636);
}

double NNfunction_sb_cLcL::synapse0x33c60d0() {
   return (neuron0x33bb140()*-0.340992);
}

double NNfunction_sb_cLcL::synapse0x33c6110() {
   return (neuron0x33bb480()*-0.408655);
}

double NNfunction_sb_cLcL::synapse0x33c6150() {
   return (neuron0x33bb7c0()*-0.844577);
}

double NNfunction_sb_cLcL::synapse0x33c6190() {
   return (neuron0x33bbb00()*1.90627);
}

double NNfunction_sb_cLcL::synapse0x33c6510() {
   return (neuron0x33b6fd0()*0.127783);
}

double NNfunction_sb_cLcL::synapse0x33c6550() {
   return (neuron0x33b7280()*0.641003);
}

double NNfunction_sb_cLcL::synapse0x33c6590() {
   return (neuron0x33b75c0()*-0.520054);
}

double NNfunction_sb_cLcL::synapse0x33c65d0() {
   return (neuron0x33b7900()*0.794241);
}

double NNfunction_sb_cLcL::synapse0x33c6610() {
   return (neuron0x33b7c40()*-0.957106);
}

double NNfunction_sb_cLcL::synapse0x33c6650() {
   return (neuron0x33b7f80()*-0.348803);
}

double NNfunction_sb_cLcL::synapse0x33c6690() {
   return (neuron0x33b82c0()*0.298601);
}

double NNfunction_sb_cLcL::synapse0x33c66d0() {
   return (neuron0x33b8600()*0.258461);
}

double NNfunction_sb_cLcL::synapse0x33c6710() {
   return (neuron0x33b8940()*0.0481941);
}

double NNfunction_sb_cLcL::synapse0x33c6750() {
   return (neuron0x33b8c80()*0.108494);
}

double NNfunction_sb_cLcL::synapse0x33c6790() {
   return (neuron0x33b8fc0()*0.905609);
}

double NNfunction_sb_cLcL::synapse0x33c67d0() {
   return (neuron0x33b9300()*1.151);
}

double NNfunction_sb_cLcL::synapse0x33c6810() {
   return (neuron0x33b9640()*1.70765);
}

double NNfunction_sb_cLcL::synapse0x33c6850() {
   return (neuron0x33b9980()*0.845393);
}

double NNfunction_sb_cLcL::synapse0x33c6890() {
   return (neuron0x33b9cc0()*0.672974);
}

double NNfunction_sb_cLcL::synapse0x33c68d0() {
   return (neuron0x33ba000()*0.774972);
}

double NNfunction_sb_cLcL::synapse0x33c6360() {
   return (neuron0x33ba340()*1.06855);
}

double NNfunction_sb_cLcL::synapse0x33c63a0() {
   return (neuron0x33ba8a0()*-0.0342718);
}

double NNfunction_sb_cLcL::synapse0x33c6a20() {
   return (neuron0x33baac0()*0.7283);
}

double NNfunction_sb_cLcL::synapse0x33c6a60() {
   return (neuron0x33bae00()*0.774894);
}

double NNfunction_sb_cLcL::synapse0x33c6aa0() {
   return (neuron0x33bb140()*-0.0104176);
}

double NNfunction_sb_cLcL::synapse0x33c6ae0() {
   return (neuron0x33bb480()*0.333252);
}

double NNfunction_sb_cLcL::synapse0x33c6b20() {
   return (neuron0x33bb7c0()*1.26292);
}

double NNfunction_sb_cLcL::synapse0x33c6b60() {
   return (neuron0x33bbb00()*1.38265);
}

double NNfunction_sb_cLcL::synapse0x33c6ee0() {
   return (neuron0x33b6fd0()*0.565691);
}

double NNfunction_sb_cLcL::synapse0x33b7160() {
   return (neuron0x33b7280()*0.758908);
}

double NNfunction_sb_cLcL::synapse0x33b71a0() {
   return (neuron0x33b75c0()*-0.500112);
}

double NNfunction_sb_cLcL::synapse0x33b74a0() {
   return (neuron0x33b7900()*2.31004);
}

double NNfunction_sb_cLcL::synapse0x33b74e0() {
   return (neuron0x33b7c40()*-1.02154);
}

double NNfunction_sb_cLcL::synapse0x33b77e0() {
   return (neuron0x33b7f80()*-0.176512);
}

double NNfunction_sb_cLcL::synapse0x33b7820() {
   return (neuron0x33b82c0()*0.659058);
}

double NNfunction_sb_cLcL::synapse0x33b7b20() {
   return (neuron0x33b8600()*-0.327584);
}

double NNfunction_sb_cLcL::synapse0x33b7b60() {
   return (neuron0x33b8940()*0.429626);
}

double NNfunction_sb_cLcL::synapse0x33b7e60() {
   return (neuron0x33b8c80()*0.707443);
}

double NNfunction_sb_cLcL::synapse0x33b7ea0() {
   return (neuron0x33b8fc0()*0.518299);
}

double NNfunction_sb_cLcL::synapse0x33b81a0() {
   return (neuron0x33b9300()*0.534709);
}

double NNfunction_sb_cLcL::synapse0x33b81e0() {
   return (neuron0x33b9640()*0.599632);
}

double NNfunction_sb_cLcL::synapse0x33b84e0() {
   return (neuron0x33b9980()*1.05145);
}

double NNfunction_sb_cLcL::synapse0x33b8520() {
   return (neuron0x33b9cc0()*0.84875);
}

double NNfunction_sb_cLcL::synapse0x33b8820() {
   return (neuron0x33ba000()*1.12119);
}

double NNfunction_sb_cLcL::synapse0x33b8860() {
   return (neuron0x33ba340()*0.755365);
}

double NNfunction_sb_cLcL::synapse0x33b8b60() {
   return (neuron0x33ba8a0()*0.872887);
}

double NNfunction_sb_cLcL::synapse0x33b8ba0() {
   return (neuron0x33baac0()*1.91308);
}

double NNfunction_sb_cLcL::synapse0x33b8ea0() {
   return (neuron0x33bae00()*0.597986);
}

double NNfunction_sb_cLcL::synapse0x33b8ee0() {
   return (neuron0x33bb140()*-0.0623262);
}

double NNfunction_sb_cLcL::synapse0x33b91e0() {
   return (neuron0x33bb480()*1.16812);
}

double NNfunction_sb_cLcL::synapse0x33b9220() {
   return (neuron0x33bb7c0()*1.38172);
}

double NNfunction_sb_cLcL::synapse0x33b9520() {
   return (neuron0x33bbb00()*2.2525);
}

double NNfunction_sb_cLcL::synapse0x33b9560() {
   return (neuron0x33b6fd0()*-0.095456);
}

double NNfunction_sb_cLcL::synapse0x33ba220() {
   return (neuron0x33b7280()*0.0398055);
}

double NNfunction_sb_cLcL::synapse0x33ba260() {
   return (neuron0x33b75c0()*-0.108207);
}

double NNfunction_sb_cLcL::synapse0x33c6d30() {
   return (neuron0x33b7900()*0.229413);
}

double NNfunction_sb_cLcL::synapse0x33c6d70() {
   return (neuron0x33b7c40()*-0.0213007);
}

double NNfunction_sb_cLcL::synapse0x33ba560() {
   return (neuron0x33b7f80()*0.0249008);
}

double NNfunction_sb_cLcL::synapse0x33ba5a0() {
   return (neuron0x33b82c0()*0.0421462);
}

double NNfunction_sb_cLcL::synapse0x2628080() {
   return (neuron0x33b8600()*0.0156348);
}

double NNfunction_sb_cLcL::synapse0x26280c0() {
   return (neuron0x33b8940()*0.0817081);
}

double NNfunction_sb_cLcL::synapse0x33bace0() {
   return (neuron0x33b8c80()*0.026323);
}

double NNfunction_sb_cLcL::synapse0x33bad20() {
   return (neuron0x33b8fc0()*-0.0125166);
}

double NNfunction_sb_cLcL::synapse0x33bb020() {
   return (neuron0x33b9300()*0.00752576);
}

double NNfunction_sb_cLcL::synapse0x33bb060() {
   return (neuron0x33b9640()*2.60458);
}

double NNfunction_sb_cLcL::synapse0x33bb360() {
   return (neuron0x33b9980()*0.427761);
}

double NNfunction_sb_cLcL::synapse0x33bb3a0() {
   return (neuron0x33b9cc0()*-0.113481);
}

double NNfunction_sb_cLcL::synapse0x33bb6a0() {
   return (neuron0x33ba000()*0.055421);
}

double NNfunction_sb_cLcL::synapse0x33bb6e0() {
   return (neuron0x33ba340()*0.10645);
}

double NNfunction_sb_cLcL::synapse0x33bb9e0() {
   return (neuron0x33ba8a0()*0.0807178);
}

double NNfunction_sb_cLcL::synapse0x33bba20() {
   return (neuron0x33baac0()*0.0533297);
}

double NNfunction_sb_cLcL::synapse0x33bbd20() {
   return (neuron0x33bae00()*-0.00198152);
}

double NNfunction_sb_cLcL::synapse0x33bbd60() {
   return (neuron0x33bb140()*-0.0871265);
}

double NNfunction_sb_cLcL::synapse0x33b9860() {
   return (neuron0x33bb480()*-0.0403795);
}

double NNfunction_sb_cLcL::synapse0x33b98a0() {
   return (neuron0x33bb7c0()*0.0385641);
}

double NNfunction_sb_cLcL::synapse0x33c8c50() {
   return (neuron0x33bbb00()*0.0749576);
}

double NNfunction_sb_cLcL::synapse0x33c8fd0() {
   return (neuron0x33b6fd0()*0.398539);
}

double NNfunction_sb_cLcL::synapse0x33c9010() {
   return (neuron0x33b7280()*0.0874148);
}

double NNfunction_sb_cLcL::synapse0x33c9050() {
   return (neuron0x33b75c0()*-0.861467);
}

double NNfunction_sb_cLcL::synapse0x33c9090() {
   return (neuron0x33b7900()*1.29066);
}

double NNfunction_sb_cLcL::synapse0x33c90d0() {
   return (neuron0x33b7c40()*-0.573293);
}

double NNfunction_sb_cLcL::synapse0x33c9110() {
   return (neuron0x33b7f80()*1.10251);
}

double NNfunction_sb_cLcL::synapse0x33c9150() {
   return (neuron0x33b82c0()*0.502234);
}

double NNfunction_sb_cLcL::synapse0x33c9190() {
   return (neuron0x33b8600()*0.330963);
}

double NNfunction_sb_cLcL::synapse0x33c91d0() {
   return (neuron0x33b8940()*-0.0307252);
}

double NNfunction_sb_cLcL::synapse0x33c9210() {
   return (neuron0x33b8c80()*0.808698);
}

double NNfunction_sb_cLcL::synapse0x33c9250() {
   return (neuron0x33b8fc0()*-0.29037);
}

double NNfunction_sb_cLcL::synapse0x33c9290() {
   return (neuron0x33b9300()*2.40705);
}

double NNfunction_sb_cLcL::synapse0x33c92d0() {
   return (neuron0x33b9640()*1.01173);
}

double NNfunction_sb_cLcL::synapse0x33c9310() {
   return (neuron0x33b9980()*0.286748);
}

double NNfunction_sb_cLcL::synapse0x33c9350() {
   return (neuron0x33b9cc0()*0.0603404);
}

double NNfunction_sb_cLcL::synapse0x33c9390() {
   return (neuron0x33ba000()*0.328867);
}

double NNfunction_sb_cLcL::synapse0x33c8e20() {
   return (neuron0x33ba340()*0.00465533);
}

double NNfunction_sb_cLcL::synapse0x33c8e60() {
   return (neuron0x33ba8a0()*0.690761);
}

double NNfunction_sb_cLcL::synapse0x33c94e0() {
   return (neuron0x33baac0()*0.64093);
}

double NNfunction_sb_cLcL::synapse0x33c9520() {
   return (neuron0x33bae00()*0.0295358);
}

double NNfunction_sb_cLcL::synapse0x33c9560() {
   return (neuron0x33bb140()*-1.35011);
}

double NNfunction_sb_cLcL::synapse0x33c95a0() {
   return (neuron0x33bb480()*-0.133598);
}

double NNfunction_sb_cLcL::synapse0x33c95e0() {
   return (neuron0x33bb7c0()*-0.529843);
}

double NNfunction_sb_cLcL::synapse0x33c9620() {
   return (neuron0x33bbb00()*1.37745);
}

double NNfunction_sb_cLcL::synapse0x33c99a0() {
   return (neuron0x33b6fd0()*-0.00144205);
}

double NNfunction_sb_cLcL::synapse0x33c99e0() {
   return (neuron0x33b7280()*0.0132967);
}

double NNfunction_sb_cLcL::synapse0x33c9a20() {
   return (neuron0x33b75c0()*-0.0909644);
}

double NNfunction_sb_cLcL::synapse0x33c9a60() {
   return (neuron0x33b7900()*-4.72084);
}

double NNfunction_sb_cLcL::synapse0x33c9aa0() {
   return (neuron0x33b7c40()*0.00103865);
}

double NNfunction_sb_cLcL::synapse0x33c9ae0() {
   return (neuron0x33b7f80()*0.0258184);
}

double NNfunction_sb_cLcL::synapse0x33c9b20() {
   return (neuron0x33b82c0()*0.0452319);
}

double NNfunction_sb_cLcL::synapse0x33c9b60() {
   return (neuron0x33b8600()*-0.0204504);
}

double NNfunction_sb_cLcL::synapse0x33c9ba0() {
   return (neuron0x33b8940()*0.0273797);
}

double NNfunction_sb_cLcL::synapse0x33c9be0() {
   return (neuron0x33b8c80()*0.0560126);
}

double NNfunction_sb_cLcL::synapse0x33c9c20() {
   return (neuron0x33b8fc0()*0.0318206);
}

double NNfunction_sb_cLcL::synapse0x33c9c60() {
   return (neuron0x33b9300()*0.023321);
}

double NNfunction_sb_cLcL::synapse0x33c9ca0() {
   return (neuron0x33b9640()*-0.234106);
}

double NNfunction_sb_cLcL::synapse0x33c9ce0() {
   return (neuron0x33b9980()*0.146382);
}

double NNfunction_sb_cLcL::synapse0x33c9d20() {
   return (neuron0x33b9cc0()*0.0229124);
}

double NNfunction_sb_cLcL::synapse0x33c9d60() {
   return (neuron0x33ba000()*0.0650566);
}

double NNfunction_sb_cLcL::synapse0x33c97f0() {
   return (neuron0x33ba340()*-0.0183823);
}

double NNfunction_sb_cLcL::synapse0x33c9830() {
   return (neuron0x33ba8a0()*0.0822819);
}

double NNfunction_sb_cLcL::synapse0x33c9eb0() {
   return (neuron0x33baac0()*0.00625769);
}

double NNfunction_sb_cLcL::synapse0x33c9ef0() {
   return (neuron0x33bae00()*0.0129759);
}

double NNfunction_sb_cLcL::synapse0x33c9f30() {
   return (neuron0x33bb140()*-0.0727965);
}

double NNfunction_sb_cLcL::synapse0x33c9f70() {
   return (neuron0x33bb480()*0.0565279);
}

double NNfunction_sb_cLcL::synapse0x33c9fb0() {
   return (neuron0x33bb7c0()*-0.0168229);
}

double NNfunction_sb_cLcL::synapse0x33c9ff0() {
   return (neuron0x33bbb00()*-0.0413376);
}

double NNfunction_sb_cLcL::synapse0x33ca370() {
   return (neuron0x33b6fd0()*0.387592);
}

double NNfunction_sb_cLcL::synapse0x33ca3b0() {
   return (neuron0x33b7280()*0.0294322);
}

double NNfunction_sb_cLcL::synapse0x33ca3f0() {
   return (neuron0x33b75c0()*-0.659605);
}

double NNfunction_sb_cLcL::synapse0x33ca430() {
   return (neuron0x33b7900()*0.0110415);
}

double NNfunction_sb_cLcL::synapse0x33ca470() {
   return (neuron0x33b7c40()*0.483954);
}

double NNfunction_sb_cLcL::synapse0x33ca4b0() {
   return (neuron0x33b7f80()*-0.00989047);
}

double NNfunction_sb_cLcL::synapse0x33ca4f0() {
   return (neuron0x33b82c0()*0.0859074);
}

double NNfunction_sb_cLcL::synapse0x33ca530() {
   return (neuron0x33b8600()*-0.384438);
}

double NNfunction_sb_cLcL::synapse0x33ca570() {
   return (neuron0x33b8940()*-0.139406);
}

double NNfunction_sb_cLcL::synapse0x33ca5b0() {
   return (neuron0x33b8c80()*-0.359664);
}

double NNfunction_sb_cLcL::synapse0x33ca5f0() {
   return (neuron0x33b8fc0()*-0.461398);
}

double NNfunction_sb_cLcL::synapse0x33ca630() {
   return (neuron0x33b9300()*0.733092);
}

double NNfunction_sb_cLcL::synapse0x33ca670() {
   return (neuron0x33b9640()*1.88119);
}

double NNfunction_sb_cLcL::synapse0x33ca6b0() {
   return (neuron0x33b9980()*0.263893);
}

double NNfunction_sb_cLcL::synapse0x33ca6f0() {
   return (neuron0x33b9cc0()*0.590598);
}

double NNfunction_sb_cLcL::synapse0x33ca730() {
   return (neuron0x33ba000()*0.0153532);
}

double NNfunction_sb_cLcL::synapse0x33ca1c0() {
   return (neuron0x33ba340()*0.0164396);
}

double NNfunction_sb_cLcL::synapse0x33ca200() {
   return (neuron0x33ba8a0()*-1.04594);
}

double NNfunction_sb_cLcL::synapse0x33ca880() {
   return (neuron0x33baac0()*0.726021);
}

double NNfunction_sb_cLcL::synapse0x33ca8c0() {
   return (neuron0x33bae00()*-0.838186);
}

double NNfunction_sb_cLcL::synapse0x33ca900() {
   return (neuron0x33bb140()*0.417568);
}

double NNfunction_sb_cLcL::synapse0x33ca940() {
   return (neuron0x33bb480()*0.381167);
}

double NNfunction_sb_cLcL::synapse0x33ca980() {
   return (neuron0x33bb7c0()*-0.30978);
}

double NNfunction_sb_cLcL::synapse0x33ca9c0() {
   return (neuron0x33bbb00()*-0.0813625);
}

double NNfunction_sb_cLcL::synapse0x33cad40() {
   return (neuron0x33b6fd0()*0.147854);
}

double NNfunction_sb_cLcL::synapse0x33cad80() {
   return (neuron0x33b7280()*-0.157089);
}

double NNfunction_sb_cLcL::synapse0x33cadc0() {
   return (neuron0x33b75c0()*-0.148166);
}

double NNfunction_sb_cLcL::synapse0x33cae00() {
   return (neuron0x33b7900()*-0.313369);
}

double NNfunction_sb_cLcL::synapse0x33cae40() {
   return (neuron0x33b7c40()*-0.270118);
}

double NNfunction_sb_cLcL::synapse0x33cae80() {
   return (neuron0x33b7f80()*-0.245736);
}

double NNfunction_sb_cLcL::synapse0x33caec0() {
   return (neuron0x33b82c0()*-0.205982);
}

double NNfunction_sb_cLcL::synapse0x33caf00() {
   return (neuron0x33b8600()*0.162965);
}

double NNfunction_sb_cLcL::synapse0x33caf40() {
   return (neuron0x33b8940()*-0.231195);
}

double NNfunction_sb_cLcL::synapse0x33caf80() {
   return (neuron0x33b8c80()*0.10826);
}

double NNfunction_sb_cLcL::synapse0x33cafc0() {
   return (neuron0x33b8fc0()*-0.397955);
}

double NNfunction_sb_cLcL::synapse0x33cb000() {
   return (neuron0x33b9300()*0.0393233);
}

double NNfunction_sb_cLcL::synapse0x33cb040() {
   return (neuron0x33b9640()*-4.11751);
}

double NNfunction_sb_cLcL::synapse0x33cb080() {
   return (neuron0x33b9980()*-1.0804);
}

double NNfunction_sb_cLcL::synapse0x33cb0c0() {
   return (neuron0x33b9cc0()*0.0440104);
}

double NNfunction_sb_cLcL::synapse0x33cb100() {
   return (neuron0x33ba000()*-0.153029);
}

double NNfunction_sb_cLcL::synapse0x33cab90() {
   return (neuron0x33ba340()*-0.235772);
}

double NNfunction_sb_cLcL::synapse0x33cabd0() {
   return (neuron0x33ba8a0()*0.119761);
}

double NNfunction_sb_cLcL::synapse0x33cb250() {
   return (neuron0x33baac0()*-0.445146);
}

double NNfunction_sb_cLcL::synapse0x33cb290() {
   return (neuron0x33bae00()*-0.474859);
}

double NNfunction_sb_cLcL::synapse0x33cb2d0() {
   return (neuron0x33bb140()*-0.0339573);
}

double NNfunction_sb_cLcL::synapse0x33cb310() {
   return (neuron0x33bb480()*-0.306677);
}

double NNfunction_sb_cLcL::synapse0x33cb350() {
   return (neuron0x33bb7c0()*-0.190847);
}

double NNfunction_sb_cLcL::synapse0x33cb390() {
   return (neuron0x33bbb00()*0.53974);
}

double NNfunction_sb_cLcL::synapse0x33cb710() {
   return (neuron0x33b6fd0()*-0.0188753);
}

double NNfunction_sb_cLcL::synapse0x33cb750() {
   return (neuron0x33b7280()*0.00968825);
}

double NNfunction_sb_cLcL::synapse0x33cb790() {
   return (neuron0x33b75c0()*-0.0755564);
}

double NNfunction_sb_cLcL::synapse0x33cb7d0() {
   return (neuron0x33b7900()*4.71592);
}

double NNfunction_sb_cLcL::synapse0x33cb810() {
   return (neuron0x33b7c40()*-0.0182055);
}

double NNfunction_sb_cLcL::synapse0x33cb850() {
   return (neuron0x33b7f80()*0.0159286);
}

double NNfunction_sb_cLcL::synapse0x33cb890() {
   return (neuron0x33b82c0()*0.0392345);
}

double NNfunction_sb_cLcL::synapse0x33cb8d0() {
   return (neuron0x33b8600()*-0.0157579);
}

double NNfunction_sb_cLcL::synapse0x33cb910() {
   return (neuron0x33b8940()*-0.00250966);
}

double NNfunction_sb_cLcL::synapse0x33c3ad0() {
   return (neuron0x33b8c80()*0.067663);
}

double NNfunction_sb_cLcL::synapse0x33c3b10() {
   return (neuron0x33b8fc0()*-0.00298034);
}

double NNfunction_sb_cLcL::synapse0x33c3b50() {
   return (neuron0x33b9300()*0.125756);
}

double NNfunction_sb_cLcL::synapse0x33c3b90() {
   return (neuron0x33b9640()*-3.20543);
}

double NNfunction_sb_cLcL::synapse0x33c3bd0() {
   return (neuron0x33b9980()*-0.0723533);
}

double NNfunction_sb_cLcL::synapse0x33c3c10() {
   return (neuron0x33b9cc0()*0.0471402);
}

double NNfunction_sb_cLcL::synapse0x33c3c50() {
   return (neuron0x33ba000()*0.098334);
}

double NNfunction_sb_cLcL::synapse0x33cb560() {
   return (neuron0x33ba340()*-0.17678);
}

double NNfunction_sb_cLcL::synapse0x33cb5a0() {
   return (neuron0x33ba8a0()*0.0964193);
}

double NNfunction_sb_cLcL::synapse0x33c3da0() {
   return (neuron0x33baac0()*0.0562273);
}

double NNfunction_sb_cLcL::synapse0x33c3de0() {
   return (neuron0x33bae00()*-0.0416473);
}

double NNfunction_sb_cLcL::synapse0x33c3e20() {
   return (neuron0x33bb140()*-0.0504197);
}

double NNfunction_sb_cLcL::synapse0x33c3e60() {
   return (neuron0x33bb480()*0.0782018);
}

double NNfunction_sb_cLcL::synapse0x33c3ea0() {
   return (neuron0x33bb7c0()*-0.011377);
}

double NNfunction_sb_cLcL::synapse0x33c3ee0() {
   return (neuron0x33bbb00()*0.0773404);
}

double NNfunction_sb_cLcL::synapse0x33c4260() {
   return (neuron0x33b6fd0()*0.221518);
}

double NNfunction_sb_cLcL::synapse0x33c42a0() {
   return (neuron0x33b7280()*-0.130783);
}

double NNfunction_sb_cLcL::synapse0x33c42e0() {
   return (neuron0x33b75c0()*3.40717);
}

double NNfunction_sb_cLcL::synapse0x33c4320() {
   return (neuron0x33b7900()*-1.23192);
}

double NNfunction_sb_cLcL::synapse0x33c4360() {
   return (neuron0x33b7c40()*0.571185);
}

double NNfunction_sb_cLcL::synapse0x33c43a0() {
   return (neuron0x33b7f80()*0.255235);
}

double NNfunction_sb_cLcL::synapse0x33c43e0() {
   return (neuron0x33b82c0()*0.413032);
}

double NNfunction_sb_cLcL::synapse0x33c4420() {
   return (neuron0x33b8600()*0.270718);
}

double NNfunction_sb_cLcL::synapse0x33c4460() {
   return (neuron0x33b8940()*0.348123);
}

double NNfunction_sb_cLcL::synapse0x33c44a0() {
   return (neuron0x33b8c80()*-0.127887);
}

double NNfunction_sb_cLcL::synapse0x33c44e0() {
   return (neuron0x33b8fc0()*0.397898);
}

double NNfunction_sb_cLcL::synapse0x33c4520() {
   return (neuron0x33b9300()*-0.452106);
}

double NNfunction_sb_cLcL::synapse0x33c4560() {
   return (neuron0x33b9640()*-7.95425);
}

double NNfunction_sb_cLcL::synapse0x33c45a0() {
   return (neuron0x33b9980()*-0.829279);
}

double NNfunction_sb_cLcL::synapse0x33c45e0() {
   return (neuron0x33b9cc0()*-0.459437);
}

double NNfunction_sb_cLcL::synapse0x33c4620() {
   return (neuron0x33ba000()*-0.388843);
}

double NNfunction_sb_cLcL::synapse0x33c40b0() {
   return (neuron0x33ba340()*-0.39872);
}

double NNfunction_sb_cLcL::synapse0x33c40f0() {
   return (neuron0x33ba8a0()*-0.0280623);
}

double NNfunction_sb_cLcL::synapse0x33c4770() {
   return (neuron0x33baac0()*-0.593925);
}

double NNfunction_sb_cLcL::synapse0x33c47b0() {
   return (neuron0x33bae00()*-0.233527);
}

double NNfunction_sb_cLcL::synapse0x33c47f0() {
   return (neuron0x33bb140()*0.285501);
}

double NNfunction_sb_cLcL::synapse0x33c4830() {
   return (neuron0x33bb480()*-0.225557);
}

double NNfunction_sb_cLcL::synapse0x33c4870() {
   return (neuron0x33bb7c0()*-0.360586);
}

double NNfunction_sb_cLcL::synapse0x33c48b0() {
   return (neuron0x33bbb00()*-1.52967);
}

double NNfunction_sb_cLcL::synapse0x33c4a80() {
   return (neuron0x33b6fd0()*-0.136201);
}

double NNfunction_sb_cLcL::synapse0x33cdb10() {
   return (neuron0x33b7280()*0.000215866);
}

double NNfunction_sb_cLcL::synapse0x33cdb50() {
   return (neuron0x33b75c0()*-0.273941);
}

double NNfunction_sb_cLcL::synapse0x33cdb90() {
   return (neuron0x33b7900()*-0.267376);
}

double NNfunction_sb_cLcL::synapse0x33cdbd0() {
   return (neuron0x33b7c40()*-0.0710067);
}

double NNfunction_sb_cLcL::synapse0x33cdc10() {
   return (neuron0x33b7f80()*0.0472511);
}

double NNfunction_sb_cLcL::synapse0x33cdc50() {
   return (neuron0x33b82c0()*0.175306);
}

double NNfunction_sb_cLcL::synapse0x33cdc90() {
   return (neuron0x33b8600()*-0.0277132);
}

double NNfunction_sb_cLcL::synapse0x33cdcd0() {
   return (neuron0x33b8940()*-0.533696);
}

double NNfunction_sb_cLcL::synapse0x33cdd10() {
   return (neuron0x33b8c80()*-0.0580148);
}

double NNfunction_sb_cLcL::synapse0x33cdd50() {
   return (neuron0x33b8fc0()*0.51173);
}

double NNfunction_sb_cLcL::synapse0x33cdd90() {
   return (neuron0x33b9300()*-0.345664);
}

double NNfunction_sb_cLcL::synapse0x33cddd0() {
   return (neuron0x33b9640()*2.40217);
}

double NNfunction_sb_cLcL::synapse0x33cde10() {
   return (neuron0x33b9980()*-0.560407);
}

double NNfunction_sb_cLcL::synapse0x33cde50() {
   return (neuron0x33b9cc0()*0.14702);
}

double NNfunction_sb_cLcL::synapse0x33cde90() {
   return (neuron0x33ba000()*-0.0403979);
}

double NNfunction_sb_cLcL::synapse0x33cd960() {
   return (neuron0x33ba340()*-0.0543944);
}

double NNfunction_sb_cLcL::synapse0x33cd9a0() {
   return (neuron0x33ba8a0()*-0.287997);
}

double NNfunction_sb_cLcL::synapse0x33cdfe0() {
   return (neuron0x33baac0()*-0.217136);
}

double NNfunction_sb_cLcL::synapse0x33ce020() {
   return (neuron0x33bae00()*0.0337011);
}

double NNfunction_sb_cLcL::synapse0x33ce060() {
   return (neuron0x33bb140()*0.527906);
}

double NNfunction_sb_cLcL::synapse0x33ce0a0() {
   return (neuron0x33bb480()*0.0828977);
}

double NNfunction_sb_cLcL::synapse0x33ce0e0() {
   return (neuron0x33bb7c0()*0.0999417);
}

double NNfunction_sb_cLcL::synapse0x33ce120() {
   return (neuron0x33bbb00()*-0.509982);
}

double NNfunction_sb_cLcL::synapse0x33ce4a0() {
   return (neuron0x33b6fd0()*-0.524118);
}

double NNfunction_sb_cLcL::synapse0x33ce4e0() {
   return (neuron0x33b7280()*0.344774);
}

double NNfunction_sb_cLcL::synapse0x33ce520() {
   return (neuron0x33b75c0()*-0.0164316);
}

double NNfunction_sb_cLcL::synapse0x33ce560() {
   return (neuron0x33b7900()*1.18659);
}

double NNfunction_sb_cLcL::synapse0x33ce5a0() {
   return (neuron0x33b7c40()*-0.0221325);
}

double NNfunction_sb_cLcL::synapse0x33ce5e0() {
   return (neuron0x33b7f80()*0.108068);
}

double NNfunction_sb_cLcL::synapse0x33ce620() {
   return (neuron0x33b82c0()*0.0990268);
}

double NNfunction_sb_cLcL::synapse0x33ce660() {
   return (neuron0x33b8600()*0.418222);
}

double NNfunction_sb_cLcL::synapse0x33ce6a0() {
   return (neuron0x33b8940()*-0.169616);
}

double NNfunction_sb_cLcL::synapse0x33ce6e0() {
   return (neuron0x33b8c80()*-0.0737896);
}

double NNfunction_sb_cLcL::synapse0x33ce720() {
   return (neuron0x33b8fc0()*0.305532);
}

double NNfunction_sb_cLcL::synapse0x33ce760() {
   return (neuron0x33b9300()*0.812435);
}

double NNfunction_sb_cLcL::synapse0x33ce7a0() {
   return (neuron0x33b9640()*2.15475);
}

double NNfunction_sb_cLcL::synapse0x33ce7e0() {
   return (neuron0x33b9980()*1.02142);
}

double NNfunction_sb_cLcL::synapse0x33ce820() {
   return (neuron0x33b9cc0()*0.567923);
}

double NNfunction_sb_cLcL::synapse0x33ce860() {
   return (neuron0x33ba000()*0.343488);
}

double NNfunction_sb_cLcL::synapse0x33ce2f0() {
   return (neuron0x33ba340()*0.790648);
}

double NNfunction_sb_cLcL::synapse0x33ce330() {
   return (neuron0x33ba8a0()*1.14986);
}

double NNfunction_sb_cLcL::synapse0x33ce9b0() {
   return (neuron0x33baac0()*0.510271);
}

double NNfunction_sb_cLcL::synapse0x33ce9f0() {
   return (neuron0x33bae00()*0.502927);
}

double NNfunction_sb_cLcL::synapse0x33cea30() {
   return (neuron0x33bb140()*-0.660381);
}

double NNfunction_sb_cLcL::synapse0x33cea70() {
   return (neuron0x33bb480()*-1.30407);
}

double NNfunction_sb_cLcL::synapse0x33ceab0() {
   return (neuron0x33bb7c0()*-0.825364);
}

double NNfunction_sb_cLcL::synapse0x33ceaf0() {
   return (neuron0x33bbb00()*1.38544);
}

double NNfunction_sb_cLcL::synapse0x33cee70() {
   return (neuron0x33b6fd0()*-0.622332);
}

double NNfunction_sb_cLcL::synapse0x33ceeb0() {
   return (neuron0x33b7280()*0.38236);
}

double NNfunction_sb_cLcL::synapse0x33ceef0() {
   return (neuron0x33b75c0()*0.489829);
}

double NNfunction_sb_cLcL::synapse0x33cef30() {
   return (neuron0x33b7900()*1.81786);
}

double NNfunction_sb_cLcL::synapse0x33cef70() {
   return (neuron0x33b7c40()*-0.251431);
}

double NNfunction_sb_cLcL::synapse0x33cefb0() {
   return (neuron0x33b7f80()*-0.124267);
}

double NNfunction_sb_cLcL::synapse0x33ceff0() {
   return (neuron0x33b82c0()*0.955926);
}

double NNfunction_sb_cLcL::synapse0x33cf030() {
   return (neuron0x33b8600()*0.137652);
}

double NNfunction_sb_cLcL::synapse0x33cf070() {
   return (neuron0x33b8940()*0.481051);
}

double NNfunction_sb_cLcL::synapse0x33cf0b0() {
   return (neuron0x33b8c80()*0.0826962);
}

double NNfunction_sb_cLcL::synapse0x33cf0f0() {
   return (neuron0x33b8fc0()*0.431729);
}

double NNfunction_sb_cLcL::synapse0x33cf130() {
   return (neuron0x33b9300()*2.1441);
}

double NNfunction_sb_cLcL::synapse0x33cf170() {
   return (neuron0x33b9640()*-0.718356);
}

double NNfunction_sb_cLcL::synapse0x33cf1b0() {
   return (neuron0x33b9980()*1.24441);
}

double NNfunction_sb_cLcL::synapse0x33cf1f0() {
   return (neuron0x33b9cc0()*0.844831);
}

double NNfunction_sb_cLcL::synapse0x33cf230() {
   return (neuron0x33ba000()*1.22932);
}

double NNfunction_sb_cLcL::synapse0x33cecc0() {
   return (neuron0x33ba340()*0.77401);
}

double NNfunction_sb_cLcL::synapse0x33ced00() {
   return (neuron0x33ba8a0()*1.24545);
}

double NNfunction_sb_cLcL::synapse0x33cf380() {
   return (neuron0x33baac0()*0.697799);
}

double NNfunction_sb_cLcL::synapse0x33cf3c0() {
   return (neuron0x33bae00()*1.09624);
}

double NNfunction_sb_cLcL::synapse0x33cf400() {
   return (neuron0x33bb140()*-1.54309);
}

double NNfunction_sb_cLcL::synapse0x33cf440() {
   return (neuron0x33bb480()*-0.390178);
}

double NNfunction_sb_cLcL::synapse0x33cf480() {
   return (neuron0x33bb7c0()*-0.0597097);
}

double NNfunction_sb_cLcL::synapse0x33cf4c0() {
   return (neuron0x33bbb00()*2.43892);
}

double NNfunction_sb_cLcL::synapse0x33cf840() {
   return (neuron0x33b6fd0()*-0.0422873);
}

double NNfunction_sb_cLcL::synapse0x33cf880() {
   return (neuron0x33b7280()*-0.0078554);
}

double NNfunction_sb_cLcL::synapse0x33cf8c0() {
   return (neuron0x33b75c0()*0.229544);
}

double NNfunction_sb_cLcL::synapse0x33cf900() {
   return (neuron0x33b7900()*0.0753605);
}

double NNfunction_sb_cLcL::synapse0x33cf940() {
   return (neuron0x33b7c40()*0.0834738);
}

double NNfunction_sb_cLcL::synapse0x33cf980() {
   return (neuron0x33b7f80()*0.0112424);
}

double NNfunction_sb_cLcL::synapse0x33cf9c0() {
   return (neuron0x33b82c0()*0.00927966);
}

double NNfunction_sb_cLcL::synapse0x33cfa00() {
   return (neuron0x33b8600()*0.0463645);
}

double NNfunction_sb_cLcL::synapse0x33cfa40() {
   return (neuron0x33b8940()*0.06427);
}

double NNfunction_sb_cLcL::synapse0x33cfa80() {
   return (neuron0x33b8c80()*-0.062889);
}

double NNfunction_sb_cLcL::synapse0x33cfac0() {
   return (neuron0x33b8fc0()*0.036032);
}

double NNfunction_sb_cLcL::synapse0x33cfb00() {
   return (neuron0x33b9300()*-0.0706517);
}

double NNfunction_sb_cLcL::synapse0x33cfb40() {
   return (neuron0x33b9640()*-7.68594);
}

double NNfunction_sb_cLcL::synapse0x33cfb80() {
   return (neuron0x33b9980()*-0.0863549);
}

double NNfunction_sb_cLcL::synapse0x33cfbc0() {
   return (neuron0x33b9cc0()*-0.0329968);
}

double NNfunction_sb_cLcL::synapse0x33cfc00() {
   return (neuron0x33ba000()*-0.0305954);
}

double NNfunction_sb_cLcL::synapse0x33cf690() {
   return (neuron0x33ba340()*-0.0710095);
}

double NNfunction_sb_cLcL::synapse0x33cf6d0() {
   return (neuron0x33ba8a0()*-0.0462531);
}

double NNfunction_sb_cLcL::synapse0x33cfd50() {
   return (neuron0x33baac0()*-0.0480894);
}

double NNfunction_sb_cLcL::synapse0x33cfd90() {
   return (neuron0x33bae00()*0.0410239);
}

double NNfunction_sb_cLcL::synapse0x33cfdd0() {
   return (neuron0x33bb140()*0.0776418);
}

double NNfunction_sb_cLcL::synapse0x33cfe10() {
   return (neuron0x33bb480()*-0.0600834);
}

double NNfunction_sb_cLcL::synapse0x33cfe50() {
   return (neuron0x33bb7c0()*-0.0243759);
}

double NNfunction_sb_cLcL::synapse0x33cfe90() {
   return (neuron0x33bbb00()*-0.32045);
}

double NNfunction_sb_cLcL::synapse0x33d0210() {
   return (neuron0x33b6fd0()*0.0202955);
}

double NNfunction_sb_cLcL::synapse0x33d0250() {
   return (neuron0x33b7280()*-0.0292508);
}

double NNfunction_sb_cLcL::synapse0x33d0290() {
   return (neuron0x33b75c0()*-3.609);
}

double NNfunction_sb_cLcL::synapse0x33d02d0() {
   return (neuron0x33b7900()*2.89063);
}

double NNfunction_sb_cLcL::synapse0x33d0310() {
   return (neuron0x33b7c40()*-0.939108);
}

double NNfunction_sb_cLcL::synapse0x33d0350() {
   return (neuron0x33b7f80()*0.390101);
}

double NNfunction_sb_cLcL::synapse0x33d0390() {
   return (neuron0x33b82c0()*0.932128);
}

double NNfunction_sb_cLcL::synapse0x33d03d0() {
   return (neuron0x33b8600()*0.605007);
}

double NNfunction_sb_cLcL::synapse0x33d0410() {
   return (neuron0x33b8940()*-0.392258);
}

double NNfunction_sb_cLcL::synapse0x33d0450() {
   return (neuron0x33b8c80()*1.35479);
}

double NNfunction_sb_cLcL::synapse0x33d0490() {
   return (neuron0x33b8fc0()*0.809157);
}

double NNfunction_sb_cLcL::synapse0x33d04d0() {
   return (neuron0x33b9300()*2.8476);
}

double NNfunction_sb_cLcL::synapse0x33d0510() {
   return (neuron0x33b9640()*15.558);
}

double NNfunction_sb_cLcL::synapse0x33d0550() {
   return (neuron0x33b9980()*2.73299);
}

double NNfunction_sb_cLcL::synapse0x33d0590() {
   return (neuron0x33b9cc0()*1.80091);
}

double NNfunction_sb_cLcL::synapse0x33d05d0() {
   return (neuron0x33ba000()*1.61195);
}

double NNfunction_sb_cLcL::synapse0x33d0060() {
   return (neuron0x33ba340()*1.38556);
}

double NNfunction_sb_cLcL::synapse0x33d00a0() {
   return (neuron0x33ba8a0()*1.19192);
}

double NNfunction_sb_cLcL::synapse0x33d0720() {
   return (neuron0x33baac0()*1.64157);
}

double NNfunction_sb_cLcL::synapse0x33d0760() {
   return (neuron0x33bae00()*1.77144);
}

double NNfunction_sb_cLcL::synapse0x33d07a0() {
   return (neuron0x33bb140()*-1.88169);
}

double NNfunction_sb_cLcL::synapse0x33d07e0() {
   return (neuron0x33bb480()*0.364055);
}

double NNfunction_sb_cLcL::synapse0x33d0820() {
   return (neuron0x33bb7c0()*0.805578);
}

double NNfunction_sb_cLcL::synapse0x33d0860() {
   return (neuron0x33bbb00()*1.5553);
}

double NNfunction_sb_cLcL::synapse0x33d0be0() {
   return (neuron0x33b6fd0()*0.071357);
}

double NNfunction_sb_cLcL::synapse0x33d0c20() {
   return (neuron0x33b7280()*0.144541);
}

double NNfunction_sb_cLcL::synapse0x33d0c60() {
   return (neuron0x33b75c0()*-3.82282);
}

double NNfunction_sb_cLcL::synapse0x33d0ca0() {
   return (neuron0x33b7900()*-0.00994183);
}

double NNfunction_sb_cLcL::synapse0x33d0ce0() {
   return (neuron0x33b7c40()*-0.28289);
}

double NNfunction_sb_cLcL::synapse0x33d0d20() {
   return (neuron0x33b7f80()*-0.132139);
}

double NNfunction_sb_cLcL::synapse0x33d0d60() {
   return (neuron0x33b82c0()*-0.141335);
}

double NNfunction_sb_cLcL::synapse0x33d0da0() {
   return (neuron0x33b8600()*-0.263045);
}

double NNfunction_sb_cLcL::synapse0x33d0de0() {
   return (neuron0x33b8940()*-0.436894);
}

double NNfunction_sb_cLcL::synapse0x33d0e20() {
   return (neuron0x33b8c80()*0.466582);
}

double NNfunction_sb_cLcL::synapse0x33d0e60() {
   return (neuron0x33b8fc0()*-0.187419);
}

double NNfunction_sb_cLcL::synapse0x33d0ea0() {
   return (neuron0x33b9300()*0.253784);
}

double NNfunction_sb_cLcL::synapse0x33d0ee0() {
   return (neuron0x33b9640()*6.0293);
}

double NNfunction_sb_cLcL::synapse0x33d0f20() {
   return (neuron0x33b9980()*-0.379668);
}

double NNfunction_sb_cLcL::synapse0x33d0f60() {
   return (neuron0x33b9cc0()*-0.231359);
}

double NNfunction_sb_cLcL::synapse0x33d0fa0() {
   return (neuron0x33ba000()*-0.352529);
}

double NNfunction_sb_cLcL::synapse0x33d0a30() {
   return (neuron0x33ba340()*-0.970083);
}

double NNfunction_sb_cLcL::synapse0x33d0a70() {
   return (neuron0x33ba8a0()*0.389351);
}

double NNfunction_sb_cLcL::synapse0x33d10f0() {
   return (neuron0x33baac0()*0.69835);
}

double NNfunction_sb_cLcL::synapse0x33d1130() {
   return (neuron0x33bae00()*0.182797);
}

double NNfunction_sb_cLcL::synapse0x33d1170() {
   return (neuron0x33bb140()*-1.53202);
}

double NNfunction_sb_cLcL::synapse0x33d11b0() {
   return (neuron0x33bb480()*-1.84771);
}

double NNfunction_sb_cLcL::synapse0x33d11f0() {
   return (neuron0x33bb7c0()*-1.7785);
}

double NNfunction_sb_cLcL::synapse0x33d1230() {
   return (neuron0x33bbb00()*1.7902);
}

double NNfunction_sb_cLcL::synapse0x33d15b0() {
   return (neuron0x33b6fd0()*0.556346);
}

double NNfunction_sb_cLcL::synapse0x33d15f0() {
   return (neuron0x33b7280()*0.568342);
}

double NNfunction_sb_cLcL::synapse0x33d1630() {
   return (neuron0x33b75c0()*1.15829);
}

double NNfunction_sb_cLcL::synapse0x33d1670() {
   return (neuron0x33b7900()*-0.80751);
}

double NNfunction_sb_cLcL::synapse0x33d16b0() {
   return (neuron0x33b7c40()*-0.149219);
}

double NNfunction_sb_cLcL::synapse0x33d16f0() {
   return (neuron0x33b7f80()*0.0106603);
}

double NNfunction_sb_cLcL::synapse0x33d1730() {
   return (neuron0x33b82c0()*-0.145985);
}

double NNfunction_sb_cLcL::synapse0x33d1770() {
   return (neuron0x33b8600()*0.534826);
}

double NNfunction_sb_cLcL::synapse0x33d17b0() {
   return (neuron0x33b8940()*-0.299572);
}

double NNfunction_sb_cLcL::synapse0x33d17f0() {
   return (neuron0x33b8c80()*-0.29493);
}

double NNfunction_sb_cLcL::synapse0x33d1830() {
   return (neuron0x33b8fc0()*0.389349);
}

double NNfunction_sb_cLcL::synapse0x33d1870() {
   return (neuron0x33b9300()*-1.59032);
}

double NNfunction_sb_cLcL::synapse0x33d18b0() {
   return (neuron0x33b9640()*0.51054);
}

double NNfunction_sb_cLcL::synapse0x33d18f0() {
   return (neuron0x33b9980()*-0.300183);
}

double NNfunction_sb_cLcL::synapse0x33d1930() {
   return (neuron0x33b9cc0()*-1.11453);
}

double NNfunction_sb_cLcL::synapse0x33d1970() {
   return (neuron0x33ba000()*-1.10672);
}

double NNfunction_sb_cLcL::synapse0x33d1400() {
   return (neuron0x33ba340()*-0.148957);
}

double NNfunction_sb_cLcL::synapse0x33d1440() {
   return (neuron0x33ba8a0()*-0.882238);
}

double NNfunction_sb_cLcL::synapse0x33d1ac0() {
   return (neuron0x33baac0()*-1.55616);
}

double NNfunction_sb_cLcL::synapse0x33d1b00() {
   return (neuron0x33bae00()*-1.21694);
}

double NNfunction_sb_cLcL::synapse0x33d1b40() {
   return (neuron0x33bb140()*-1.74686);
}

double NNfunction_sb_cLcL::synapse0x33d1b80() {
   return (neuron0x33bb480()*-1.65041);
}

double NNfunction_sb_cLcL::synapse0x33d1bc0() {
   return (neuron0x33bb7c0()*-1.28649);
}

double NNfunction_sb_cLcL::synapse0x33d1c00() {
   return (neuron0x33bbb00()*-2.75139);
}

double NNfunction_sb_cLcL::synapse0x33d1f80() {
   return (neuron0x33b6fd0()*-0.18132);
}

double NNfunction_sb_cLcL::synapse0x33d1fc0() {
   return (neuron0x33b7280()*-0.536469);
}

double NNfunction_sb_cLcL::synapse0x33d2000() {
   return (neuron0x33b75c0()*1.208);
}

double NNfunction_sb_cLcL::synapse0x33d2040() {
   return (neuron0x33b7900()*0.436316);
}

double NNfunction_sb_cLcL::synapse0x33d2080() {
   return (neuron0x33b7c40()*0.379726);
}

double NNfunction_sb_cLcL::synapse0x33d20c0() {
   return (neuron0x33b7f80()*-0.591676);
}

double NNfunction_sb_cLcL::synapse0x33d2100() {
   return (neuron0x33b82c0()*1.58966);
}

double NNfunction_sb_cLcL::synapse0x33d2140() {
   return (neuron0x33b8600()*0.812727);
}

double NNfunction_sb_cLcL::synapse0x33d2180() {
   return (neuron0x33b8940()*1.30116);
}

double NNfunction_sb_cLcL::synapse0x33d21c0() {
   return (neuron0x33b8c80()*-0.830952);
}

double NNfunction_sb_cLcL::synapse0x33d2200() {
   return (neuron0x33b8fc0()*0.389658);
}

double NNfunction_sb_cLcL::synapse0x33d2240() {
   return (neuron0x33b9300()*-0.386763);
}

double NNfunction_sb_cLcL::synapse0x33d2280() {
   return (neuron0x33b9640()*-0.582211);
}

double NNfunction_sb_cLcL::synapse0x33d22c0() {
   return (neuron0x33b9980()*-0.0185191);
}

double NNfunction_sb_cLcL::synapse0x33d2300() {
   return (neuron0x33b9cc0()*-0.172783);
}

double NNfunction_sb_cLcL::synapse0x33d2340() {
   return (neuron0x33ba000()*-0.307408);
}

double NNfunction_sb_cLcL::synapse0x33d1dd0() {
   return (neuron0x33ba340()*-0.495269);
}

double NNfunction_sb_cLcL::synapse0x33d1e10() {
   return (neuron0x33ba8a0()*-1.17733);
}

double NNfunction_sb_cLcL::synapse0x33d2490() {
   return (neuron0x33baac0()*0.743911);
}

double NNfunction_sb_cLcL::synapse0x33d24d0() {
   return (neuron0x33bae00()*-1.4803);
}

double NNfunction_sb_cLcL::synapse0x33d2510() {
   return (neuron0x33bb140()*0.41443);
}

double NNfunction_sb_cLcL::synapse0x33d2550() {
   return (neuron0x33bb480()*0.173847);
}

double NNfunction_sb_cLcL::synapse0x33d2590() {
   return (neuron0x33bb7c0()*0.668633);
}

double NNfunction_sb_cLcL::synapse0x33d25d0() {
   return (neuron0x33bbb00()*-0.561069);
}

double NNfunction_sb_cLcL::synapse0x33d2950() {
   return (neuron0x33b6fd0()*0.0654163);
}

double NNfunction_sb_cLcL::synapse0x33c6f20() {
   return (neuron0x33b7280()*0.00447276);
}

double NNfunction_sb_cLcL::synapse0x33c6f60() {
   return (neuron0x33b75c0()*0.0349679);
}

double NNfunction_sb_cLcL::synapse0x33c6fa0() {
   return (neuron0x33b7900()*-0.408938);
}

double NNfunction_sb_cLcL::synapse0x33c71f0() {
   return (neuron0x33b7c40()*-0.0696224);
}

double NNfunction_sb_cLcL::synapse0x33c7230() {
   return (neuron0x33b7f80()*0.0109179);
}

double NNfunction_sb_cLcL::synapse0x33c7270() {
   return (neuron0x33b82c0()*-0.0720482);
}

double NNfunction_sb_cLcL::synapse0x33c74c0() {
   return (neuron0x33b8600()*-0.0347669);
}

double NNfunction_sb_cLcL::synapse0x33c7500() {
   return (neuron0x33b8940()*-0.0350841);
}

double NNfunction_sb_cLcL::synapse0x33c7750() {
   return (neuron0x33b8c80()*-0.0205334);
}

double NNfunction_sb_cLcL::synapse0x33c7790() {
   return (neuron0x33b8fc0()*-0.0447909);
}

double NNfunction_sb_cLcL::synapse0x33c77d0() {
   return (neuron0x33b9300()*0.0277233);
}

double NNfunction_sb_cLcL::synapse0x33c7a20() {
   return (neuron0x33b9640()*3.74398);
}

double NNfunction_sb_cLcL::synapse0x33c7a60() {
   return (neuron0x33b9980()*-0.28298);
}

double NNfunction_sb_cLcL::synapse0x33c7cb0() {
   return (neuron0x33b9cc0()*0.0924279);
}

double NNfunction_sb_cLcL::synapse0x33c7cf0() {
   return (neuron0x33ba000()*-0.00034821);
}

double NNfunction_sb_cLcL::synapse0x33d27a0() {
   return (neuron0x33ba340()*-0.0658784);
}

double NNfunction_sb_cLcL::synapse0x33d27e0() {
   return (neuron0x33ba8a0()*-0.016878);
}

double NNfunction_sb_cLcL::synapse0x33c7e40() {
   return (neuron0x33baac0()*-0.0412923);
}

double NNfunction_sb_cLcL::synapse0x33c8350() {
   return (neuron0x33bae00()*-0.00752865);
}

double NNfunction_sb_cLcL::synapse0x33c8390() {
   return (neuron0x33bb140()*0.0694574);
}

double NNfunction_sb_cLcL::synapse0x33c83d0() {
   return (neuron0x33bb480()*0.082645);
}

double NNfunction_sb_cLcL::synapse0x33c8620() {
   return (neuron0x33bb7c0()*-0.0350354);
}

double NNfunction_sb_cLcL::synapse0x33c8660() {
   return (neuron0x33bbb00()*-0.0100901);
}

double NNfunction_sb_cLcL::synapse0x33c7f10() {
   return (neuron0x33b6fd0()*-0.197628);
}

double NNfunction_sb_cLcL::synapse0x33c7f50() {
   return (neuron0x33b7280()*0.563645);
}

double NNfunction_sb_cLcL::synapse0x33c7f90() {
   return (neuron0x33b75c0()*-1.50577);
}

double NNfunction_sb_cLcL::synapse0x33c7fd0() {
   return (neuron0x33b7900()*3.47809);
}

double NNfunction_sb_cLcL::synapse0x33c8950() {
   return (neuron0x33b7c40()*-1.89942);
}

double NNfunction_sb_cLcL::synapse0x33d4ca0() {
   return (neuron0x33b7f80()*0.430075);
}

double NNfunction_sb_cLcL::synapse0x33d4ce0() {
   return (neuron0x33b82c0()*0.187858);
}

double NNfunction_sb_cLcL::synapse0x33d4d20() {
   return (neuron0x33b8600()*0.386893);
}

double NNfunction_sb_cLcL::synapse0x33d4d60() {
   return (neuron0x33b8940()*-0.278066);
}

double NNfunction_sb_cLcL::synapse0x33d4da0() {
   return (neuron0x33b8c80()*1.27173);
}

double NNfunction_sb_cLcL::synapse0x33d4de0() {
   return (neuron0x33b8fc0()*0.0299731);
}

double NNfunction_sb_cLcL::synapse0x33d4e20() {
   return (neuron0x33b9300()*1.7433);
}

double NNfunction_sb_cLcL::synapse0x33d4e60() {
   return (neuron0x33b9640()*7.28191);
}

double NNfunction_sb_cLcL::synapse0x33d4ea0() {
   return (neuron0x33b9980()*2.92045);
}

double NNfunction_sb_cLcL::synapse0x33d4ee0() {
   return (neuron0x33b9cc0()*0.630135);
}

double NNfunction_sb_cLcL::synapse0x33d4f20() {
   return (neuron0x33ba000()*1.55185);
}

double NNfunction_sb_cLcL::synapse0x33c8830() {
   return (neuron0x33ba340()*1.58845);
}

double NNfunction_sb_cLcL::synapse0x33c8870() {
   return (neuron0x33ba8a0()*1.58475);
}

double NNfunction_sb_cLcL::synapse0x33d5070() {
   return (neuron0x33baac0()*1.40656);
}

double NNfunction_sb_cLcL::synapse0x33d50b0() {
   return (neuron0x33bae00()*1.83817);
}

double NNfunction_sb_cLcL::synapse0x33d50f0() {
   return (neuron0x33bb140()*-1.12427);
}

double NNfunction_sb_cLcL::synapse0x33d5130() {
   return (neuron0x33bb480()*-0.0607501);
}

double NNfunction_sb_cLcL::synapse0x33d5170() {
   return (neuron0x33bb7c0()*0.72597);
}

double NNfunction_sb_cLcL::synapse0x33d51b0() {
   return (neuron0x33bbb00()*3.2162);
}

double NNfunction_sb_cLcL::synapse0x33d5530() {
   return (neuron0x33b6fd0()*-0.386052);
}

double NNfunction_sb_cLcL::synapse0x33d5570() {
   return (neuron0x33b7280()*-0.0691222);
}

double NNfunction_sb_cLcL::synapse0x33d55b0() {
   return (neuron0x33b75c0()*-0.119576);
}

double NNfunction_sb_cLcL::synapse0x33d55f0() {
   return (neuron0x33b7900()*-0.998833);
}

double NNfunction_sb_cLcL::synapse0x33d5630() {
   return (neuron0x33b7c40()*0.368279);
}

double NNfunction_sb_cLcL::synapse0x33d5670() {
   return (neuron0x33b7f80()*-0.531962);
}

double NNfunction_sb_cLcL::synapse0x33d56b0() {
   return (neuron0x33b82c0()*-0.587542);
}

double NNfunction_sb_cLcL::synapse0x33d56f0() {
   return (neuron0x33b8600()*-0.199613);
}

double NNfunction_sb_cLcL::synapse0x33d5730() {
   return (neuron0x33b8940()*0.389969);
}

double NNfunction_sb_cLcL::synapse0x33d5770() {
   return (neuron0x33b8c80()*-0.114523);
}

double NNfunction_sb_cLcL::synapse0x33d57b0() {
   return (neuron0x33b8fc0()*-0.4202);
}

double NNfunction_sb_cLcL::synapse0x33d57f0() {
   return (neuron0x33b9300()*-0.671146);
}

double NNfunction_sb_cLcL::synapse0x33d5830() {
   return (neuron0x33b9640()*-0.148829);
}

double NNfunction_sb_cLcL::synapse0x33d5870() {
   return (neuron0x33b9980()*-1.01744);
}

double NNfunction_sb_cLcL::synapse0x33d58b0() {
   return (neuron0x33b9cc0()*-0.735619);
}

double NNfunction_sb_cLcL::synapse0x33d58f0() {
   return (neuron0x33ba000()*-0.253104);
}

double NNfunction_sb_cLcL::synapse0x33d5380() {
   return (neuron0x33ba340()*-0.657208);
}

double NNfunction_sb_cLcL::synapse0x33d53c0() {
   return (neuron0x33ba8a0()*-1.15182);
}

double NNfunction_sb_cLcL::synapse0x33d5a40() {
   return (neuron0x33baac0()*-0.966414);
}

double NNfunction_sb_cLcL::synapse0x33d5a80() {
   return (neuron0x33bae00()*-1.14867);
}

double NNfunction_sb_cLcL::synapse0x33d5ac0() {
   return (neuron0x33bb140()*1.1981);
}

double NNfunction_sb_cLcL::synapse0x33d5b00() {
   return (neuron0x33bb480()*0.460935);
}

double NNfunction_sb_cLcL::synapse0x33d5b40() {
   return (neuron0x33bb7c0()*0.716459);
}

double NNfunction_sb_cLcL::synapse0x33d5b80() {
   return (neuron0x33bbb00()*-0.369004);
}

double NNfunction_sb_cLcL::synapse0x33d5f00() {
   return (neuron0x33b6fd0()*0.701391);
}

double NNfunction_sb_cLcL::synapse0x33d5f40() {
   return (neuron0x33b7280()*-0.00289673);
}

double NNfunction_sb_cLcL::synapse0x33d5f80() {
   return (neuron0x33b75c0()*1.68217);
}

double NNfunction_sb_cLcL::synapse0x33d5fc0() {
   return (neuron0x33b7900()*0.103744);
}

double NNfunction_sb_cLcL::synapse0x33d6000() {
   return (neuron0x33b7c40()*-0.701783);
}

double NNfunction_sb_cLcL::synapse0x33d6040() {
   return (neuron0x33b7f80()*0.543502);
}

double NNfunction_sb_cLcL::synapse0x33d6080() {
   return (neuron0x33b82c0()*0.834923);
}

double NNfunction_sb_cLcL::synapse0x33d60c0() {
   return (neuron0x33b8600()*-0.172377);
}

double NNfunction_sb_cLcL::synapse0x33d6100() {
   return (neuron0x33b8940()*0.355464);
}

double NNfunction_sb_cLcL::synapse0x33d6140() {
   return (neuron0x33b8c80()*-0.25646);
}

double NNfunction_sb_cLcL::synapse0x33d6180() {
   return (neuron0x33b8fc0()*-0.400731);
}

double NNfunction_sb_cLcL::synapse0x33d61c0() {
   return (neuron0x33b9300()*0.895108);
}

double NNfunction_sb_cLcL::synapse0x33d6200() {
   return (neuron0x33b9640()*-0.867095);
}

double NNfunction_sb_cLcL::synapse0x33d6240() {
   return (neuron0x33b9980()*0.354231);
}

double NNfunction_sb_cLcL::synapse0x33d6280() {
   return (neuron0x33b9cc0()*1.23757);
}

double NNfunction_sb_cLcL::synapse0x33d62c0() {
   return (neuron0x33ba000()*1.42065);
}

double NNfunction_sb_cLcL::synapse0x33d5d50() {
   return (neuron0x33ba340()*-0.414791);
}

double NNfunction_sb_cLcL::synapse0x33d5d90() {
   return (neuron0x33ba8a0()*0.524669);
}

double NNfunction_sb_cLcL::synapse0x33d6410() {
   return (neuron0x33baac0()*0.912413);
}

double NNfunction_sb_cLcL::synapse0x33d6450() {
   return (neuron0x33bae00()*-0.826226);
}

double NNfunction_sb_cLcL::synapse0x33d6490() {
   return (neuron0x33bb140()*-0.32124);
}

double NNfunction_sb_cLcL::synapse0x33d64d0() {
   return (neuron0x33bb480()*0.383199);
}

double NNfunction_sb_cLcL::synapse0x33d6510() {
   return (neuron0x33bb7c0()*-0.164062);
}

double NNfunction_sb_cLcL::synapse0x33d6550() {
   return (neuron0x33bbb00()*1.90467);
}

double NNfunction_sb_cLcL::synapse0x33d68d0() {
   return (neuron0x33b6fd0()*-0.586006);
}

double NNfunction_sb_cLcL::synapse0x33d6910() {
   return (neuron0x33b7280()*-0.101326);
}

double NNfunction_sb_cLcL::synapse0x33d6950() {
   return (neuron0x33b75c0()*-1.61514);
}

double NNfunction_sb_cLcL::synapse0x33d6990() {
   return (neuron0x33b7900()*1.25115);
}

double NNfunction_sb_cLcL::synapse0x33d69d0() {
   return (neuron0x33b7c40()*-0.0518276);
}

double NNfunction_sb_cLcL::synapse0x33d6a10() {
   return (neuron0x33b7f80()*0.423868);
}

double NNfunction_sb_cLcL::synapse0x33d6a50() {
   return (neuron0x33b82c0()*0.0764752);
}

double NNfunction_sb_cLcL::synapse0x33d6a90() {
   return (neuron0x33b8600()*0.313706);
}

double NNfunction_sb_cLcL::synapse0x33d6ad0() {
   return (neuron0x33b8940()*0.360436);
}

double NNfunction_sb_cLcL::synapse0x33d6b10() {
   return (neuron0x33b8c80()*0.859784);
}

double NNfunction_sb_cLcL::synapse0x33d6b50() {
   return (neuron0x33b8fc0()*-0.170245);
}

double NNfunction_sb_cLcL::synapse0x33d6b90() {
   return (neuron0x33b9300()*1.47615);
}

double NNfunction_sb_cLcL::synapse0x33d6bd0() {
   return (neuron0x33b9640()*1.3263);
}

double NNfunction_sb_cLcL::synapse0x33d6c10() {
   return (neuron0x33b9980()*1.70377);
}

double NNfunction_sb_cLcL::synapse0x33d6c50() {
   return (neuron0x33b9cc0()*0.893078);
}

double NNfunction_sb_cLcL::synapse0x33d6c90() {
   return (neuron0x33ba000()*0.184194);
}

double NNfunction_sb_cLcL::synapse0x33d6720() {
   return (neuron0x33ba340()*1.86442);
}

double NNfunction_sb_cLcL::synapse0x33d6760() {
   return (neuron0x33ba8a0()*1.48609);
}

double NNfunction_sb_cLcL::synapse0x33d6de0() {
   return (neuron0x33baac0()*0.977439);
}

double NNfunction_sb_cLcL::synapse0x33d6e20() {
   return (neuron0x33bae00()*1.02439);
}

double NNfunction_sb_cLcL::synapse0x33d6e60() {
   return (neuron0x33bb140()*-1.79116);
}

double NNfunction_sb_cLcL::synapse0x33d6ea0() {
   return (neuron0x33bb480()*-0.915521);
}

double NNfunction_sb_cLcL::synapse0x33d6ee0() {
   return (neuron0x33bb7c0()*0.418315);
}

double NNfunction_sb_cLcL::synapse0x33d6f20() {
   return (neuron0x33bbb00()*2.25347);
}

double NNfunction_sb_cLcL::synapse0x33d72a0() {
   return (neuron0x33b6fd0()*-1.07713);
}

double NNfunction_sb_cLcL::synapse0x33d72e0() {
   return (neuron0x33b7280()*0.291548);
}

double NNfunction_sb_cLcL::synapse0x33d7320() {
   return (neuron0x33b75c0()*-0.94947);
}

double NNfunction_sb_cLcL::synapse0x33d7360() {
   return (neuron0x33b7900()*0.592243);
}

double NNfunction_sb_cLcL::synapse0x33d73a0() {
   return (neuron0x33b7c40()*-0.702904);
}

double NNfunction_sb_cLcL::synapse0x33d73e0() {
   return (neuron0x33b7f80()*0.0567717);
}

double NNfunction_sb_cLcL::synapse0x33d7420() {
   return (neuron0x33b82c0()*-0.424062);
}

double NNfunction_sb_cLcL::synapse0x33d7460() {
   return (neuron0x33b8600()*-0.511726);
}

double NNfunction_sb_cLcL::synapse0x33d74a0() {
   return (neuron0x33b8940()*0.442362);
}

double NNfunction_sb_cLcL::synapse0x33d74e0() {
   return (neuron0x33b8c80()*-1.01927);
}

double NNfunction_sb_cLcL::synapse0x33d7520() {
   return (neuron0x33b8fc0()*-0.915902);
}

double NNfunction_sb_cLcL::synapse0x33d7560() {
   return (neuron0x33b9300()*-1.24906);
}

double NNfunction_sb_cLcL::synapse0x33d75a0() {
   return (neuron0x33b9640()*2.52123);
}

double NNfunction_sb_cLcL::synapse0x33d75e0() {
   return (neuron0x33b9980()*-0.112201);
}

double NNfunction_sb_cLcL::synapse0x33d7620() {
   return (neuron0x33b9cc0()*-0.904894);
}

double NNfunction_sb_cLcL::synapse0x33d7660() {
   return (neuron0x33ba000()*-0.554584);
}

double NNfunction_sb_cLcL::synapse0x33d70f0() {
   return (neuron0x33ba340()*-0.171825);
}

double NNfunction_sb_cLcL::synapse0x33d7130() {
   return (neuron0x33ba8a0()*-0.480735);
}

double NNfunction_sb_cLcL::synapse0x33d77b0() {
   return (neuron0x33baac0()*-0.878105);
}

double NNfunction_sb_cLcL::synapse0x33d77f0() {
   return (neuron0x33bae00()*-0.214464);
}

double NNfunction_sb_cLcL::synapse0x33d7830() {
   return (neuron0x33bb140()*-0.529089);
}

double NNfunction_sb_cLcL::synapse0x33d7870() {
   return (neuron0x33bb480()*-0.402583);
}

double NNfunction_sb_cLcL::synapse0x33d78b0() {
   return (neuron0x33bb7c0()*-0.336367);
}

double NNfunction_sb_cLcL::synapse0x33d78f0() {
   return (neuron0x33bbb00()*-1.40472);
}

double NNfunction_sb_cLcL::synapse0x33d7c70() {
   return (neuron0x33b6fd0()*2.05177);
}

double NNfunction_sb_cLcL::synapse0x33d7cb0() {
   return (neuron0x33b7280()*-1.64159);
}

double NNfunction_sb_cLcL::synapse0x33d7cf0() {
   return (neuron0x33b75c0()*-2.29397);
}

double NNfunction_sb_cLcL::synapse0x33d7d30() {
   return (neuron0x33b7900()*-0.110421);
}

double NNfunction_sb_cLcL::synapse0x33d7d70() {
   return (neuron0x33b7c40()*-0.857916);
}

double NNfunction_sb_cLcL::synapse0x33d7db0() {
   return (neuron0x33b7f80()*0.327206);
}

double NNfunction_sb_cLcL::synapse0x33d7df0() {
   return (neuron0x33b82c0()*0.889969);
}

double NNfunction_sb_cLcL::synapse0x33d7e30() {
   return (neuron0x33b8600()*0.140578);
}

double NNfunction_sb_cLcL::synapse0x33d7e70() {
   return (neuron0x33b8940()*-0.393243);
}

double NNfunction_sb_cLcL::synapse0x33d7eb0() {
   return (neuron0x33b8c80()*-0.199925);
}

double NNfunction_sb_cLcL::synapse0x33d7ef0() {
   return (neuron0x33b8fc0()*-0.159286);
}

double NNfunction_sb_cLcL::synapse0x33d7f30() {
   return (neuron0x33b9300()*-0.83299);
}

double NNfunction_sb_cLcL::synapse0x33d7f70() {
   return (neuron0x33b9640()*0.401524);
}

double NNfunction_sb_cLcL::synapse0x33d7fb0() {
   return (neuron0x33b9980()*0.0815179);
}

double NNfunction_sb_cLcL::synapse0x33d7ff0() {
   return (neuron0x33b9cc0()*-0.556068);
}

double NNfunction_sb_cLcL::synapse0x33d8030() {
   return (neuron0x33ba000()*-0.377225);
}

double NNfunction_sb_cLcL::synapse0x33d7ac0() {
   return (neuron0x33ba340()*-0.694872);
}

double NNfunction_sb_cLcL::synapse0x33d7b00() {
   return (neuron0x33ba8a0()*-0.116215);
}

double NNfunction_sb_cLcL::synapse0x33d8180() {
   return (neuron0x33baac0()*0.160621);
}

double NNfunction_sb_cLcL::synapse0x33d81c0() {
   return (neuron0x33bae00()*-0.69886);
}

double NNfunction_sb_cLcL::synapse0x33d8200() {
   return (neuron0x33bb140()*-1.69662);
}

double NNfunction_sb_cLcL::synapse0x33d8240() {
   return (neuron0x33bb480()*0.462598);
}

double NNfunction_sb_cLcL::synapse0x33d8280() {
   return (neuron0x33bb7c0()*0.943435);
}

double NNfunction_sb_cLcL::synapse0x33d82c0() {
   return (neuron0x33bbb00()*-0.455716);
}

double NNfunction_sb_cLcL::synapse0x33d8640() {
   return (neuron0x33b6fd0()*0.528263);
}

double NNfunction_sb_cLcL::synapse0x33d8680() {
   return (neuron0x33b7280()*-0.255361);
}

double NNfunction_sb_cLcL::synapse0x33d86c0() {
   return (neuron0x33b75c0()*2.41728);
}

double NNfunction_sb_cLcL::synapse0x33d8700() {
   return (neuron0x33b7900()*-1.96874);
}

double NNfunction_sb_cLcL::synapse0x33d8740() {
   return (neuron0x33b7c40()*1.14956);
}

double NNfunction_sb_cLcL::synapse0x33d8780() {
   return (neuron0x33b7f80()*0.138574);
}

double NNfunction_sb_cLcL::synapse0x33d87c0() {
   return (neuron0x33b82c0()*-0.0283889);
}

double NNfunction_sb_cLcL::synapse0x33d8800() {
   return (neuron0x33b8600()*-0.090304);
}

double NNfunction_sb_cLcL::synapse0x33d8840() {
   return (neuron0x33b8940()*0.177164);
}

double NNfunction_sb_cLcL::synapse0x33d8880() {
   return (neuron0x33b8c80()*-0.110678);
}

double NNfunction_sb_cLcL::synapse0x33d88c0() {
   return (neuron0x33b8fc0()*-0.0377644);
}

double NNfunction_sb_cLcL::synapse0x33d8900() {
   return (neuron0x33b9300()*-0.878719);
}

double NNfunction_sb_cLcL::synapse0x33d8940() {
   return (neuron0x33b9640()*-2.13055);
}

double NNfunction_sb_cLcL::synapse0x33d8980() {
   return (neuron0x33b9980()*-1.48577);
}

double NNfunction_sb_cLcL::synapse0x33d89c0() {
   return (neuron0x33b9cc0()*-0.621493);
}

double NNfunction_sb_cLcL::synapse0x33d8a00() {
   return (neuron0x33ba000()*-0.65262);
}

double NNfunction_sb_cLcL::synapse0x33d8490() {
   return (neuron0x33ba340()*-1.03812);
}

double NNfunction_sb_cLcL::synapse0x33d84d0() {
   return (neuron0x33ba8a0()*-0.362081);
}

double NNfunction_sb_cLcL::synapse0x33d8b50() {
   return (neuron0x33baac0()*-0.744227);
}

double NNfunction_sb_cLcL::synapse0x33d8b90() {
   return (neuron0x33bae00()*-0.752449);
}

double NNfunction_sb_cLcL::synapse0x33d8bd0() {
   return (neuron0x33bb140()*0.591776);
}

double NNfunction_sb_cLcL::synapse0x33d8c10() {
   return (neuron0x33bb480()*-0.553471);
}

double NNfunction_sb_cLcL::synapse0x33d8c50() {
   return (neuron0x33bb7c0()*-0.552942);
}

double NNfunction_sb_cLcL::synapse0x33d8c90() {
   return (neuron0x33bbb00()*-0.889126);
}

double NNfunction_sb_cLcL::synapse0x33d9010() {
   return (neuron0x33b6fd0()*0.262039);
}

double NNfunction_sb_cLcL::synapse0x33d9050() {
   return (neuron0x33b7280()*0.0763553);
}

double NNfunction_sb_cLcL::synapse0x33d9090() {
   return (neuron0x33b75c0()*-2.65464);
}

double NNfunction_sb_cLcL::synapse0x33d90d0() {
   return (neuron0x33b7900()*-0.435377);
}

double NNfunction_sb_cLcL::synapse0x33d9110() {
   return (neuron0x33b7c40()*-0.206375);
}

double NNfunction_sb_cLcL::synapse0x33d9150() {
   return (neuron0x33b7f80()*-0.394597);
}

double NNfunction_sb_cLcL::synapse0x33d9190() {
   return (neuron0x33b82c0()*-0.167968);
}

double NNfunction_sb_cLcL::synapse0x33d91d0() {
   return (neuron0x33b8600()*-0.488078);
}

double NNfunction_sb_cLcL::synapse0x33d9210() {
   return (neuron0x33b8940()*0.0471912);
}

double NNfunction_sb_cLcL::synapse0x33d9250() {
   return (neuron0x33b8c80()*-0.0436335);
}

double NNfunction_sb_cLcL::synapse0x33d9290() {
   return (neuron0x33b8fc0()*-1.08852);
}

double NNfunction_sb_cLcL::synapse0x33d92d0() {
   return (neuron0x33b9300()*0.154012);
}

double NNfunction_sb_cLcL::synapse0x33d9310() {
   return (neuron0x33b9640()*3.09642);
}

double NNfunction_sb_cLcL::synapse0x33d9350() {
   return (neuron0x33b9980()*0.876499);
}

double NNfunction_sb_cLcL::synapse0x33d9390() {
   return (neuron0x33b9cc0()*0.234673);
}

double NNfunction_sb_cLcL::synapse0x33d93d0() {
   return (neuron0x33ba000()*0.205776);
}

double NNfunction_sb_cLcL::synapse0x33d8e60() {
   return (neuron0x33ba340()*-0.0743695);
}

double NNfunction_sb_cLcL::synapse0x33d8ea0() {
   return (neuron0x33ba8a0()*0.38189);
}

double NNfunction_sb_cLcL::synapse0x33d9520() {
   return (neuron0x33baac0()*0.60989);
}

double NNfunction_sb_cLcL::synapse0x33d9560() {
   return (neuron0x33bae00()*0.125371);
}

double NNfunction_sb_cLcL::synapse0x33d95a0() {
   return (neuron0x33bb140()*-0.554126);
}

double NNfunction_sb_cLcL::synapse0x33d95e0() {
   return (neuron0x33bb480()*-1.14548);
}

double NNfunction_sb_cLcL::synapse0x33d9620() {
   return (neuron0x33bb7c0()*-0.0321425);
}

double NNfunction_sb_cLcL::synapse0x33d9660() {
   return (neuron0x33bbb00()*1.69172);
}

double NNfunction_sb_cLcL::synapse0x33c2110() {
   return (neuron0x33b6fd0()*0.287603);
}

double NNfunction_sb_cLcL::synapse0x33c2150() {
   return (neuron0x33b7280()*0.94959);
}

double NNfunction_sb_cLcL::synapse0x33c2190() {
   return (neuron0x33b75c0()*0.753596);
}

double NNfunction_sb_cLcL::synapse0x33c21d0() {
   return (neuron0x33b7900()*0.713737);
}

double NNfunction_sb_cLcL::synapse0x33c2210() {
   return (neuron0x33b7c40()*-0.896475);
}

double NNfunction_sb_cLcL::synapse0x33c2250() {
   return (neuron0x33b7f80()*0.644884);
}

double NNfunction_sb_cLcL::synapse0x33c2290() {
   return (neuron0x33b82c0()*0.855092);
}

double NNfunction_sb_cLcL::synapse0x33c22d0() {
   return (neuron0x33b8600()*0.522889);
}

double NNfunction_sb_cLcL::synapse0x33d9df0() {
   return (neuron0x33b8940()*0.809738);
}

double NNfunction_sb_cLcL::synapse0x33d9e30() {
   return (neuron0x33b8c80()*1.05195);
}

double NNfunction_sb_cLcL::synapse0x33d9e70() {
   return (neuron0x33b8fc0()*-0.430557);
}

double NNfunction_sb_cLcL::synapse0x33d9eb0() {
   return (neuron0x33b9300()*0.509729);
}

double NNfunction_sb_cLcL::synapse0x33d9ef0() {
   return (neuron0x33b9640()*0.902208);
}

double NNfunction_sb_cLcL::synapse0x33d9f30() {
   return (neuron0x33b9980()*1.36144);
}

double NNfunction_sb_cLcL::synapse0x33d9f70() {
   return (neuron0x33b9cc0()*0.555804);
}

double NNfunction_sb_cLcL::synapse0x33d9fb0() {
   return (neuron0x33ba000()*0.650457);
}

double NNfunction_sb_cLcL::synapse0x33d9830() {
   return (neuron0x33ba340()*0.460715);
}

double NNfunction_sb_cLcL::synapse0x33d9870() {
   return (neuron0x33ba8a0()*1.30198);
}

double NNfunction_sb_cLcL::synapse0x33da100() {
   return (neuron0x33baac0()*0.571322);
}

double NNfunction_sb_cLcL::synapse0x33da140() {
   return (neuron0x33bae00()*1.0727);
}

double NNfunction_sb_cLcL::synapse0x33da180() {
   return (neuron0x33bb140()*-0.604717);
}

double NNfunction_sb_cLcL::synapse0x33da1c0() {
   return (neuron0x33bb480()*-0.245039);
}

double NNfunction_sb_cLcL::synapse0x33da200() {
   return (neuron0x33bb7c0()*-1.01967);
}

double NNfunction_sb_cLcL::synapse0x33da240() {
   return (neuron0x33bbb00()*0.0777739);
}

double NNfunction_sb_cLcL::synapse0x33da5c0() {
   return (neuron0x33b6fd0()*0.475976);
}

double NNfunction_sb_cLcL::synapse0x33da600() {
   return (neuron0x33b7280()*-0.40287);
}

double NNfunction_sb_cLcL::synapse0x33da640() {
   return (neuron0x33b75c0()*-1.79156);
}

double NNfunction_sb_cLcL::synapse0x33da680() {
   return (neuron0x33b7900()*-0.66714);
}

double NNfunction_sb_cLcL::synapse0x33da6c0() {
   return (neuron0x33b7c40()*0.281891);
}

double NNfunction_sb_cLcL::synapse0x33da700() {
   return (neuron0x33b7f80()*-1.08177);
}

double NNfunction_sb_cLcL::synapse0x33da740() {
   return (neuron0x33b82c0()*0.581367);
}

double NNfunction_sb_cLcL::synapse0x33da780() {
   return (neuron0x33b8600()*-0.841525);
}

double NNfunction_sb_cLcL::synapse0x33da7c0() {
   return (neuron0x33b8940()*0.401329);
}

double NNfunction_sb_cLcL::synapse0x33da800() {
   return (neuron0x33b8c80()*-0.749837);
}

double NNfunction_sb_cLcL::synapse0x33da840() {
   return (neuron0x33b8fc0()*-1.03661);
}

double NNfunction_sb_cLcL::synapse0x33da880() {
   return (neuron0x33b9300()*1.26348);
}

double NNfunction_sb_cLcL::synapse0x33da8c0() {
   return (neuron0x33b9640()*1.52674);
}

double NNfunction_sb_cLcL::synapse0x33da900() {
   return (neuron0x33b9980()*1.16219);
}

double NNfunction_sb_cLcL::synapse0x33da940() {
   return (neuron0x33b9cc0()*0.255691);
}

double NNfunction_sb_cLcL::synapse0x33da980() {
   return (neuron0x33ba000()*0.566735);
}

double NNfunction_sb_cLcL::synapse0x33da410() {
   return (neuron0x33ba340()*0.0769809);
}

double NNfunction_sb_cLcL::synapse0x33da450() {
   return (neuron0x33ba8a0()*-0.48887);
}

double NNfunction_sb_cLcL::synapse0x33daad0() {
   return (neuron0x33baac0()*-0.62476);
}

double NNfunction_sb_cLcL::synapse0x33dab10() {
   return (neuron0x33bae00()*0.558786);
}

double NNfunction_sb_cLcL::synapse0x33dab50() {
   return (neuron0x33bb140()*0.565033);
}

double NNfunction_sb_cLcL::synapse0x33dab90() {
   return (neuron0x33bb480()*0.169404);
}

double NNfunction_sb_cLcL::synapse0x33dabd0() {
   return (neuron0x33bb7c0()*0.53511);
}

double NNfunction_sb_cLcL::synapse0x33dac10() {
   return (neuron0x33bbb00()*1.58262);
}

double NNfunction_sb_cLcL::synapse0x33daf90() {
   return (neuron0x33b6fd0()*-0.153102);
}

double NNfunction_sb_cLcL::synapse0x33dafd0() {
   return (neuron0x33b7280()*0.275323);
}

double NNfunction_sb_cLcL::synapse0x33db010() {
   return (neuron0x33b75c0()*-0.53375);
}

double NNfunction_sb_cLcL::synapse0x33db050() {
   return (neuron0x33b7900()*0.3523);
}

double NNfunction_sb_cLcL::synapse0x33db090() {
   return (neuron0x33b7c40()*-0.0372802);
}

double NNfunction_sb_cLcL::synapse0x33db0d0() {
   return (neuron0x33b7f80()*0.0731196);
}

double NNfunction_sb_cLcL::synapse0x33db110() {
   return (neuron0x33b82c0()*-0.0252901);
}

double NNfunction_sb_cLcL::synapse0x33db150() {
   return (neuron0x33b8600()*0.044739);
}

double NNfunction_sb_cLcL::synapse0x33db190() {
   return (neuron0x33b8940()*0.429145);
}

double NNfunction_sb_cLcL::synapse0x33db1d0() {
   return (neuron0x33b8c80()*0.200958);
}

double NNfunction_sb_cLcL::synapse0x33db210() {
   return (neuron0x33b8fc0()*-0.366795);
}

double NNfunction_sb_cLcL::synapse0x33db250() {
   return (neuron0x33b9300()*-0.35276);
}

double NNfunction_sb_cLcL::synapse0x33db290() {
   return (neuron0x33b9640()*-1.78681);
}

double NNfunction_sb_cLcL::synapse0x33db2d0() {
   return (neuron0x33b9980()*0.385864);
}

double NNfunction_sb_cLcL::synapse0x33db310() {
   return (neuron0x33b9cc0()*-0.568793);
}

double NNfunction_sb_cLcL::synapse0x33db350() {
   return (neuron0x33ba000()*-0.0540519);
}

double NNfunction_sb_cLcL::synapse0x33dade0() {
   return (neuron0x33ba340()*-0.0793705);
}

double NNfunction_sb_cLcL::synapse0x33dae20() {
   return (neuron0x33ba8a0()*0.282612);
}

double NNfunction_sb_cLcL::synapse0x33cb950() {
   return (neuron0x33baac0()*-0.359898);
}

double NNfunction_sb_cLcL::synapse0x33cb990() {
   return (neuron0x33bae00()*-0.161689);
}

double NNfunction_sb_cLcL::synapse0x33cb9d0() {
   return (neuron0x33bb140()*-0.253389);
}

double NNfunction_sb_cLcL::synapse0x33cba10() {
   return (neuron0x33bb480()*0.0695603);
}

double NNfunction_sb_cLcL::synapse0x33cba50() {
   return (neuron0x33bb7c0()*-0.200524);
}

double NNfunction_sb_cLcL::synapse0x33cba90() {
   return (neuron0x33bbb00()*-0.273761);
}

double NNfunction_sb_cLcL::synapse0x33cbe10() {
   return (neuron0x33b6fd0()*-0.225029);
}

double NNfunction_sb_cLcL::synapse0x33cbe50() {
   return (neuron0x33b7280()*-0.269835);
}

double NNfunction_sb_cLcL::synapse0x33cbe90() {
   return (neuron0x33b75c0()*-1.83276);
}

double NNfunction_sb_cLcL::synapse0x33cbed0() {
   return (neuron0x33b7900()*-1.42596);
}

double NNfunction_sb_cLcL::synapse0x33cbf10() {
   return (neuron0x33b7c40()*0.130451);
}

double NNfunction_sb_cLcL::synapse0x33cbf50() {
   return (neuron0x33b7f80()*0.194418);
}

double NNfunction_sb_cLcL::synapse0x33cbf90() {
   return (neuron0x33b82c0()*0.0969777);
}

double NNfunction_sb_cLcL::synapse0x33cbfd0() {
   return (neuron0x33b8600()*0.316538);
}

double NNfunction_sb_cLcL::synapse0x33cc010() {
   return (neuron0x33b8940()*-0.456776);
}

double NNfunction_sb_cLcL::synapse0x33cc050() {
   return (neuron0x33b8c80()*-0.394821);
}

double NNfunction_sb_cLcL::synapse0x33cc090() {
   return (neuron0x33b8fc0()*0.8612);
}

double NNfunction_sb_cLcL::synapse0x33cc0d0() {
   return (neuron0x33b9300()*-0.177522);
}

double NNfunction_sb_cLcL::synapse0x33cc110() {
   return (neuron0x33b9640()*-0.647026);
}

double NNfunction_sb_cLcL::synapse0x33cc150() {
   return (neuron0x33b9980()*-0.845836);
}

double NNfunction_sb_cLcL::synapse0x33cc190() {
   return (neuron0x33b9cc0()*0.148126);
}

double NNfunction_sb_cLcL::synapse0x33cc1d0() {
   return (neuron0x33ba000()*0.361033);
}

double NNfunction_sb_cLcL::synapse0x33cbc60() {
   return (neuron0x33ba340()*-0.627919);
}

double NNfunction_sb_cLcL::synapse0x33cbca0() {
   return (neuron0x33ba8a0()*-0.0432724);
}

double NNfunction_sb_cLcL::synapse0x33cc320() {
   return (neuron0x33baac0()*-0.0600691);
}

double NNfunction_sb_cLcL::synapse0x33cc360() {
   return (neuron0x33bae00()*0.170607);
}

double NNfunction_sb_cLcL::synapse0x33cc3a0() {
   return (neuron0x33bb140()*0.11674);
}

double NNfunction_sb_cLcL::synapse0x33cc3e0() {
   return (neuron0x33bb480()*-0.297787);
}

double NNfunction_sb_cLcL::synapse0x33cc420() {
   return (neuron0x33bb7c0()*0.420283);
}

double NNfunction_sb_cLcL::synapse0x33cc460() {
   return (neuron0x33bbb00()*-1.88828);
}

double NNfunction_sb_cLcL::synapse0x33cc7e0() {
   return (neuron0x33b6fd0()*-0.304241);
}

double NNfunction_sb_cLcL::synapse0x33cc820() {
   return (neuron0x33b7280()*0.722181);
}

double NNfunction_sb_cLcL::synapse0x33cc860() {
   return (neuron0x33b75c0()*-0.613363);
}

double NNfunction_sb_cLcL::synapse0x33cc8a0() {
   return (neuron0x33b7900()*0.412818);
}

double NNfunction_sb_cLcL::synapse0x33cc8e0() {
   return (neuron0x33b7c40()*0.948814);
}

double NNfunction_sb_cLcL::synapse0x33cc920() {
   return (neuron0x33b7f80()*-0.165302);
}

double NNfunction_sb_cLcL::synapse0x33cc960() {
   return (neuron0x33b82c0()*0.145568);
}

double NNfunction_sb_cLcL::synapse0x33cc9a0() {
   return (neuron0x33b8600()*0.205785);
}

double NNfunction_sb_cLcL::synapse0x33cc9e0() {
   return (neuron0x33b8940()*0.452359);
}

double NNfunction_sb_cLcL::synapse0x33cca20() {
   return (neuron0x33b8c80()*1.67271);
}

double NNfunction_sb_cLcL::synapse0x33cca60() {
   return (neuron0x33b8fc0()*0.570083);
}

double NNfunction_sb_cLcL::synapse0x33ccaa0() {
   return (neuron0x33b9300()*-0.599923);
}

double NNfunction_sb_cLcL::synapse0x33ccae0() {
   return (neuron0x33b9640()*0.901912);
}

double NNfunction_sb_cLcL::synapse0x33ccb20() {
   return (neuron0x33b9980()*0.217459);
}

double NNfunction_sb_cLcL::synapse0x33ccb60() {
   return (neuron0x33b9cc0()*0.329917);
}

double NNfunction_sb_cLcL::synapse0x33ccba0() {
   return (neuron0x33ba000()*-0.851944);
}

double NNfunction_sb_cLcL::synapse0x33cc630() {
   return (neuron0x33ba340()*0.276995);
}

double NNfunction_sb_cLcL::synapse0x33cc670() {
   return (neuron0x33ba8a0()*0.345516);
}

double NNfunction_sb_cLcL::synapse0x33cccf0() {
   return (neuron0x33baac0()*-1.24308);
}

double NNfunction_sb_cLcL::synapse0x33ccd30() {
   return (neuron0x33bae00()*0.541732);
}

double NNfunction_sb_cLcL::synapse0x33ccd70() {
   return (neuron0x33bb140()*-2.20711);
}

double NNfunction_sb_cLcL::synapse0x33ccdb0() {
   return (neuron0x33bb480()*-0.709175);
}

double NNfunction_sb_cLcL::synapse0x33ccdf0() {
   return (neuron0x33bb7c0()*-0.600018);
}

double NNfunction_sb_cLcL::synapse0x33cce30() {
   return (neuron0x33bbb00()*0.706647);
}

double NNfunction_sb_cLcL::synapse0x33cd1b0() {
   return (neuron0x33b6fd0()*0.139128);
}

double NNfunction_sb_cLcL::synapse0x33cd1f0() {
   return (neuron0x33b7280()*0.0419301);
}

double NNfunction_sb_cLcL::synapse0x33cd230() {
   return (neuron0x33b75c0()*1.20291);
}

double NNfunction_sb_cLcL::synapse0x33cd270() {
   return (neuron0x33b7900()*-0.673205);
}

double NNfunction_sb_cLcL::synapse0x33cd2b0() {
   return (neuron0x33b7c40()*1.09086);
}

double NNfunction_sb_cLcL::synapse0x33cd2f0() {
   return (neuron0x33b7f80()*0.0662542);
}

double NNfunction_sb_cLcL::synapse0x33cd330() {
   return (neuron0x33b82c0()*-0.377512);
}

double NNfunction_sb_cLcL::synapse0x33cd370() {
   return (neuron0x33b8600()*-0.331494);
}

double NNfunction_sb_cLcL::synapse0x33cd3b0() {
   return (neuron0x33b8940()*-0.504561);
}

double NNfunction_sb_cLcL::synapse0x33cd3f0() {
   return (neuron0x33b8c80()*-0.579339);
}

double NNfunction_sb_cLcL::synapse0x33cd430() {
   return (neuron0x33b8fc0()*0.321096);
}

double NNfunction_sb_cLcL::synapse0x33cd470() {
   return (neuron0x33b9300()*-1.13578);
}

double NNfunction_sb_cLcL::synapse0x33cd4b0() {
   return (neuron0x33b9640()*-2.27943);
}

double NNfunction_sb_cLcL::synapse0x33cd4f0() {
   return (neuron0x33b9980()*-0.462751);
}

double NNfunction_sb_cLcL::synapse0x33cd530() {
   return (neuron0x33b9cc0()*-1.97378);
}

double NNfunction_sb_cLcL::synapse0x33cd570() {
   return (neuron0x33ba000()*-0.837624);
}

double NNfunction_sb_cLcL::synapse0x33cd000() {
   return (neuron0x33ba340()*0.847925);
}

double NNfunction_sb_cLcL::synapse0x33cd040() {
   return (neuron0x33ba8a0()*-1.55781);
}

double NNfunction_sb_cLcL::synapse0x33cd6c0() {
   return (neuron0x33baac0()*-0.940058);
}

double NNfunction_sb_cLcL::synapse0x33cd700() {
   return (neuron0x33bae00()*0.327867);
}

double NNfunction_sb_cLcL::synapse0x33cd740() {
   return (neuron0x33bb140()*1.87847);
}

double NNfunction_sb_cLcL::synapse0x33cd780() {
   return (neuron0x33bb480()*1.67148);
}

double NNfunction_sb_cLcL::synapse0x33cd7c0() {
   return (neuron0x33bb7c0()*0.644665);
}

double NNfunction_sb_cLcL::synapse0x33cd800() {
   return (neuron0x33bbb00()*-2.34164);
}

double NNfunction_sb_cLcL::synapse0x33df6d0() {
   return (neuron0x33b6fd0()*0.00280429);
}

double NNfunction_sb_cLcL::synapse0x33df710() {
   return (neuron0x33b7280()*0.0223565);
}

double NNfunction_sb_cLcL::synapse0x33df750() {
   return (neuron0x33b75c0()*0.0299719);
}

double NNfunction_sb_cLcL::synapse0x33df790() {
   return (neuron0x33b7900()*-7.82542);
}

double NNfunction_sb_cLcL::synapse0x33df7d0() {
   return (neuron0x33b7c40()*-0.0283025);
}

double NNfunction_sb_cLcL::synapse0x33df810() {
   return (neuron0x33b7f80()*-0.0184552);
}

double NNfunction_sb_cLcL::synapse0x33df850() {
   return (neuron0x33b82c0()*0.0153081);
}

double NNfunction_sb_cLcL::synapse0x33df890() {
   return (neuron0x33b8600()*-0.020915);
}

double NNfunction_sb_cLcL::synapse0x33df8d0() {
   return (neuron0x33b8940()*-0.016401);
}

double NNfunction_sb_cLcL::synapse0x33df910() {
   return (neuron0x33b8c80()*-0.00767655);
}

double NNfunction_sb_cLcL::synapse0x33df950() {
   return (neuron0x33b8fc0()*-0.015224);
}

double NNfunction_sb_cLcL::synapse0x33df990() {
   return (neuron0x33b9300()*0.00941994);
}

double NNfunction_sb_cLcL::synapse0x33df9d0() {
   return (neuron0x33b9640()*0.665205);
}

double NNfunction_sb_cLcL::synapse0x33dfa10() {
   return (neuron0x33b9980()*-0.118664);
}

double NNfunction_sb_cLcL::synapse0x33dfa50() {
   return (neuron0x33b9cc0()*-0.070259);
}

double NNfunction_sb_cLcL::synapse0x33dfa90() {
   return (neuron0x33ba000()*0.0422809);
}

double NNfunction_sb_cLcL::synapse0x33cd840() {
   return (neuron0x33ba340()*0.0215371);
}

double NNfunction_sb_cLcL::synapse0x33cd880() {
   return (neuron0x33ba8a0()*0.000808027);
}

double NNfunction_sb_cLcL::synapse0x33dfbe0() {
   return (neuron0x33baac0()*0.0720809);
}

double NNfunction_sb_cLcL::synapse0x33dfc20() {
   return (neuron0x33bae00()*-0.00835271);
}

double NNfunction_sb_cLcL::synapse0x33dfc60() {
   return (neuron0x33bb140()*-0.00522582);
}

double NNfunction_sb_cLcL::synapse0x33dfca0() {
   return (neuron0x33bb480()*-0.00830929);
}

double NNfunction_sb_cLcL::synapse0x33dfce0() {
   return (neuron0x33bb7c0()*-0.0640643);
}

double NNfunction_sb_cLcL::synapse0x33dfd20() {
   return (neuron0x33bbb00()*0.0796485);
}

double NNfunction_sb_cLcL::synapse0x33e00a0() {
   return (neuron0x33b6fd0()*-0.0332808);
}

double NNfunction_sb_cLcL::synapse0x33e00e0() {
   return (neuron0x33b7280()*-0.0701281);
}

double NNfunction_sb_cLcL::synapse0x33e0120() {
   return (neuron0x33b75c0()*1.31028);
}

double NNfunction_sb_cLcL::synapse0x33e0160() {
   return (neuron0x33b7900()*-0.429354);
}

double NNfunction_sb_cLcL::synapse0x33e01a0() {
   return (neuron0x33b7c40()*0.25191);
}

double NNfunction_sb_cLcL::synapse0x33e01e0() {
   return (neuron0x33b7f80()*-0.221892);
}

double NNfunction_sb_cLcL::synapse0x33e0220() {
   return (neuron0x33b82c0()*-0.074893);
}

double NNfunction_sb_cLcL::synapse0x33e0260() {
   return (neuron0x33b8600()*0.198745);
}

double NNfunction_sb_cLcL::synapse0x33e02a0() {
   return (neuron0x33b8940()*0.383831);
}

double NNfunction_sb_cLcL::synapse0x33e02e0() {
   return (neuron0x33b8c80()*-0.120997);
}

double NNfunction_sb_cLcL::synapse0x33e0320() {
   return (neuron0x33b8fc0()*-0.0084439);
}

double NNfunction_sb_cLcL::synapse0x33e0360() {
   return (neuron0x33b9300()*-0.303369);
}

double NNfunction_sb_cLcL::synapse0x33e03a0() {
   return (neuron0x33b9640()*2.23736);
}

double NNfunction_sb_cLcL::synapse0x33e03e0() {
   return (neuron0x33b9980()*-0.165343);
}

double NNfunction_sb_cLcL::synapse0x33e0420() {
   return (neuron0x33b9cc0()*-0.463027);
}

double NNfunction_sb_cLcL::synapse0x33e0460() {
   return (neuron0x33ba000()*-0.249125);
}

double NNfunction_sb_cLcL::synapse0x33dfef0() {
   return (neuron0x33ba340()*-0.0135977);
}

double NNfunction_sb_cLcL::synapse0x33dff30() {
   return (neuron0x33ba8a0()*0.0356132);
}

double NNfunction_sb_cLcL::synapse0x33e05b0() {
   return (neuron0x33baac0()*-0.509954);
}

double NNfunction_sb_cLcL::synapse0x33e05f0() {
   return (neuron0x33bae00()*0.0774606);
}

double NNfunction_sb_cLcL::synapse0x33e0630() {
   return (neuron0x33bb140()*-0.344745);
}

double NNfunction_sb_cLcL::synapse0x33e0670() {
   return (neuron0x33bb480()*0.0649582);
}

double NNfunction_sb_cLcL::synapse0x33e06b0() {
   return (neuron0x33bb7c0()*0.058291);
}

double NNfunction_sb_cLcL::synapse0x33e06f0() {
   return (neuron0x33bbb00()*-0.799426);
}

double NNfunction_sb_cLcL::synapse0x33e0a70() {
   return (neuron0x33b6fd0()*-0.356145);
}

double NNfunction_sb_cLcL::synapse0x33e0ab0() {
   return (neuron0x33b7280()*-0.369342);
}

double NNfunction_sb_cLcL::synapse0x33e0af0() {
   return (neuron0x33b75c0()*-0.442605);
}

double NNfunction_sb_cLcL::synapse0x33e0b30() {
   return (neuron0x33b7900()*0.609381);
}

double NNfunction_sb_cLcL::synapse0x33e0b70() {
   return (neuron0x33b7c40()*1.50241);
}

double NNfunction_sb_cLcL::synapse0x33e0bb0() {
   return (neuron0x33b7f80()*-0.0202016);
}

double NNfunction_sb_cLcL::synapse0x33e0bf0() {
   return (neuron0x33b82c0()*-0.142866);
}

double NNfunction_sb_cLcL::synapse0x33e0c30() {
   return (neuron0x33b8600()*-0.200576);
}

double NNfunction_sb_cLcL::synapse0x33e0c70() {
   return (neuron0x33b8940()*0.138104);
}

double NNfunction_sb_cLcL::synapse0x33e0cb0() {
   return (neuron0x33b8c80()*-0.546298);
}

double NNfunction_sb_cLcL::synapse0x33e0cf0() {
   return (neuron0x33b8fc0()*-0.676292);
}

double NNfunction_sb_cLcL::synapse0x33e0d30() {
   return (neuron0x33b9300()*0.089693);
}

double NNfunction_sb_cLcL::synapse0x33e0d70() {
   return (neuron0x33b9640()*-3.26737);
}

double NNfunction_sb_cLcL::synapse0x33e0db0() {
   return (neuron0x33b9980()*0.274579);
}

double NNfunction_sb_cLcL::synapse0x33e0df0() {
   return (neuron0x33b9cc0()*0.322773);
}

double NNfunction_sb_cLcL::synapse0x33e0e30() {
   return (neuron0x33ba000()*0.0500825);
}

double NNfunction_sb_cLcL::synapse0x33e08c0() {
   return (neuron0x33ba340()*-0.0643228);
}

double NNfunction_sb_cLcL::synapse0x33e0900() {
   return (neuron0x33ba8a0()*-0.257824);
}

double NNfunction_sb_cLcL::synapse0x33e0f80() {
   return (neuron0x33baac0()*0.726825);
}

double NNfunction_sb_cLcL::synapse0x33e0fc0() {
   return (neuron0x33bae00()*0.0623162);
}

double NNfunction_sb_cLcL::synapse0x33e1000() {
   return (neuron0x33bb140()*0.245916);
}

double NNfunction_sb_cLcL::synapse0x33e1040() {
   return (neuron0x33bb480()*1.04323);
}

double NNfunction_sb_cLcL::synapse0x33e1080() {
   return (neuron0x33bb7c0()*0.65106);
}

double NNfunction_sb_cLcL::synapse0x33e10c0() {
   return (neuron0x33bbb00()*0.763565);
}

double NNfunction_sb_cLcL::synapse0x33e1440() {
   return (neuron0x33b6fd0()*-0.0391981);
}

double NNfunction_sb_cLcL::synapse0x33e1480() {
   return (neuron0x33b7280()*0.508457);
}

double NNfunction_sb_cLcL::synapse0x33e14c0() {
   return (neuron0x33b75c0()*-1.34971);
}

double NNfunction_sb_cLcL::synapse0x33e1500() {
   return (neuron0x33b7900()*0.840484);
}

double NNfunction_sb_cLcL::synapse0x33e1540() {
   return (neuron0x33b7c40()*0.700786);
}

double NNfunction_sb_cLcL::synapse0x33e1580() {
   return (neuron0x33b7f80()*0.267844);
}

double NNfunction_sb_cLcL::synapse0x33e15c0() {
   return (neuron0x33b82c0()*-0.0953519);
}

double NNfunction_sb_cLcL::synapse0x33e1600() {
   return (neuron0x33b8600()*0.259108);
}

double NNfunction_sb_cLcL::synapse0x33e1640() {
   return (neuron0x33b8940()*0.278485);
}

double NNfunction_sb_cLcL::synapse0x33e1680() {
   return (neuron0x33b8c80()*0.567439);
}

double NNfunction_sb_cLcL::synapse0x33e16c0() {
   return (neuron0x33b8fc0()*-0.121051);
}

double NNfunction_sb_cLcL::synapse0x33e1700() {
   return (neuron0x33b9300()*-0.969992);
}

double NNfunction_sb_cLcL::synapse0x33e1740() {
   return (neuron0x33b9640()*2.48252);
}

double NNfunction_sb_cLcL::synapse0x33e1780() {
   return (neuron0x33b9980()*0.0583354);
}

double NNfunction_sb_cLcL::synapse0x33e17c0() {
   return (neuron0x33b9cc0()*-0.145951);
}

double NNfunction_sb_cLcL::synapse0x33e1800() {
   return (neuron0x33ba000()*-0.0542689);
}

double NNfunction_sb_cLcL::synapse0x33e1290() {
   return (neuron0x33ba340()*0.678437);
}

double NNfunction_sb_cLcL::synapse0x33e12d0() {
   return (neuron0x33ba8a0()*0.165169);
}

double NNfunction_sb_cLcL::synapse0x33e1950() {
   return (neuron0x33baac0()*-0.0474748);
}

double NNfunction_sb_cLcL::synapse0x33e1990() {
   return (neuron0x33bae00()*0.288018);
}

double NNfunction_sb_cLcL::synapse0x33e19d0() {
   return (neuron0x33bb140()*0.17966);
}

double NNfunction_sb_cLcL::synapse0x33e1a10() {
   return (neuron0x33bb480()*0.130746);
}

double NNfunction_sb_cLcL::synapse0x33e1a50() {
   return (neuron0x33bb7c0()*-0.711173);
}

double NNfunction_sb_cLcL::synapse0x33e1a90() {
   return (neuron0x33bbb00()*-0.802504);
}

double NNfunction_sb_cLcL::synapse0x3181900() {
   return (neuron0x33bbf70()*-1.32665);
}

double NNfunction_sb_cLcL::synapse0x3181940() {
   return (neuron0x33bc8c0()*0.216266);
}

double NNfunction_sb_cLcL::synapse0x33be430() {
   return (neuron0x33bd3a0()*0.106147);
}

double NNfunction_sb_cLcL::synapse0x33be470() {
   return (neuron0x33bce40()*-0.787398);
}

double NNfunction_sb_cLcL::synapse0x33bff10() {
   return (neuron0x33be180()*-0.224693);
}

double NNfunction_sb_cLcL::synapse0x33bff50() {
   return (neuron0x33bfc60()*-1.20301);
}

double NNfunction_sb_cLcL::synapse0x33c0ce0() {
   return (neuron0x33c0a30()*1.03851);
}

double NNfunction_sb_cLcL::synapse0x33c0d20() {
   return (neuron0x33c1400()*-0.128082);
}

double NNfunction_sb_cLcL::synapse0x33c16b0() {
   return (neuron0x33c1dd0()*1.33582);
}

double NNfunction_sb_cLcL::synapse0x33c16f0() {
   return (neuron0x33c28b0()*-0.0462386);
}

double NNfunction_sb_cLcL::synapse0x33c2080() {
   return (neuron0x33c3280()*-0.872081);
}

double NNfunction_sb_cLcL::synapse0x33c20c0() {
   return (neuron0x33c0360()*-0.262627);
}

double NNfunction_sb_cLcL::synapse0x33c2b60() {
   return (neuron0x33c4e30()*1.95482);
}

double NNfunction_sb_cLcL::synapse0x33c2ba0() {
   return (neuron0x33c5800()*0.154392);
}

double NNfunction_sb_cLcL::synapse0x33c3530() {
   return (neuron0x33c61d0()*0.0554913);
}

double NNfunction_sb_cLcL::synapse0x33c3570() {
   return (neuron0x33c6ba0()*0.446221);
}

double NNfunction_sb_cLcL::synapse0x33c0610() {
   return (neuron0x33c89b0()*-1.22239);
}

double NNfunction_sb_cLcL::synapse0x33c0650() {
   return (neuron0x33c8c90()*-0.0570064);
}

double NNfunction_sb_cLcL::synapse0x33c50e0() {
   return (neuron0x33c9660()*0.696888);
}

double NNfunction_sb_cLcL::synapse0x33c5120() {
   return (neuron0x33ca030()*0.197268);
}

double NNfunction_sb_cLcL::synapse0x33c5ab0() {
   return (neuron0x33caa00()*0.0259027);
}

double NNfunction_sb_cLcL::synapse0x33c5af0() {
   return (neuron0x33cb3d0()*1.80024);
}

double NNfunction_sb_cLcL::synapse0x33c6480() {
   return (neuron0x33c3f20()*-1.74238);
}

double NNfunction_sb_cLcL::synapse0x33c64c0() {
   return (neuron0x33c48f0()*0.30035);
}

double NNfunction_sb_cLcL::synapse0x33c6e50() {
   return (neuron0x33ce160()*1.01087);
}

double NNfunction_sb_cLcL::synapse0x33c6e90() {
   return (neuron0x33ceb30()*0.809225);
}

double NNfunction_sb_cLcL::synapse0x33b9ee0() {
   return (neuron0x33cf500()*2.45135);
}

double NNfunction_sb_cLcL::synapse0x33b9f20() {
   return (neuron0x33cfed0()*5.25472);
}

double NNfunction_sb_cLcL::synapse0x33c8f40() {
   return (neuron0x33d08a0()*0.495158);
}

double NNfunction_sb_cLcL::synapse0x33c8f80() {
   return (neuron0x33d1270()*-0.283704);
}

double NNfunction_sb_cLcL::synapse0x33c9910() {
   return (neuron0x33d1c40()*-0.0552212);
}

double NNfunction_sb_cLcL::synapse0x33c9950() {
   return (neuron0x33d2610()*-0.563636);
}

double NNfunction_sb_cLcL::synapse0x33ca2e0() {
   return (neuron0x33c86a0()*3.72318);
}

double NNfunction_sb_cLcL::synapse0x33ca320() {
   return (neuron0x33d51f0()*-0.0827506);
}

double NNfunction_sb_cLcL::synapse0x33cacb0() {
   return (neuron0x33d5bc0()*0.104449);
}

double NNfunction_sb_cLcL::synapse0x33cacf0() {
   return (neuron0x33d6590()*0.930526);
}

double NNfunction_sb_cLcL::synapse0x33cb680() {
   return (neuron0x33d6f60()*-0.0961221);
}

double NNfunction_sb_cLcL::synapse0x33cb6c0() {
   return (neuron0x33d7930()*0.0287499);
}

double NNfunction_sb_cLcL::synapse0x33c41d0() {
   return (neuron0x33d8300()*0.338142);
}

double NNfunction_sb_cLcL::synapse0x33c4210() {
   return (neuron0x33d8cd0()*0.323821);
}

double NNfunction_sb_cLcL::synapse0x33cda80() {
   return (neuron0x33d96a0()*-0.0157923);
}

double NNfunction_sb_cLcL::synapse0x33cdac0() {
   return (neuron0x33da280()*-0.00552562);
}

double NNfunction_sb_cLcL::synapse0x33ce410() {
   return (neuron0x33dac50()*0.294266);
}

double NNfunction_sb_cLcL::synapse0x33ce450() {
   return (neuron0x33cbad0()*0.050708);
}

double NNfunction_sb_cLcL::synapse0x33cede0() {
   return (neuron0x33cc4a0()*0.112737);
}

double NNfunction_sb_cLcL::synapse0x33cee20() {
   return (neuron0x33cce70()*-0.199076);
}

double NNfunction_sb_cLcL::synapse0x33cf7b0() {
   return (neuron0x33df4b0()*1.16273);
}

double NNfunction_sb_cLcL::synapse0x33cf7f0() {
   return (neuron0x33dfd60()*-0.204959);
}

double NNfunction_sb_cLcL::synapse0x33d0180() {
   return (neuron0x33e0730()*0.170222);
}

double NNfunction_sb_cLcL::synapse0x33d01c0() {
   return (neuron0x33e1100()*-0.0975425);
}

double NNfunction_sb_cLcL::synapse0x33d28c0() {
   return (neuron0x33bbf70()*1.10904);
}

double NNfunction_sb_cLcL::synapse0x33d2900() {
   return (neuron0x33bc8c0()*-1.39452);
}

double NNfunction_sb_cLcL::synapse0x33c7e80() {
   return (neuron0x33bd3a0()*-0.264639);
}

double NNfunction_sb_cLcL::synapse0x33c7ec0() {
   return (neuron0x33bce40()*1.97847);
}

double NNfunction_sb_cLcL::synapse0x33d54a0() {
   return (neuron0x33be180()*1.77037);
}

double NNfunction_sb_cLcL::synapse0x33d54e0() {
   return (neuron0x33bfc60()*-0.0653297);
}

double NNfunction_sb_cLcL::synapse0x33d5e70() {
   return (neuron0x33c0a30()*-0.802643);
}

double NNfunction_sb_cLcL::synapse0x33d5eb0() {
   return (neuron0x33c1400()*-0.47115);
}

double NNfunction_sb_cLcL::synapse0x33d6840() {
   return (neuron0x33c1dd0()*-1.92841);
}

double NNfunction_sb_cLcL::synapse0x33d6880() {
   return (neuron0x33c28b0()*2.26191);
}

double NNfunction_sb_cLcL::synapse0x33d7210() {
   return (neuron0x33c3280()*-0.625976);
}

double NNfunction_sb_cLcL::synapse0x33d7250() {
   return (neuron0x33c0360()*1.17005);
}

double NNfunction_sb_cLcL::synapse0x33d7be0() {
   return (neuron0x33c4e30()*-0.794684);
}

double NNfunction_sb_cLcL::synapse0x33d7c20() {
   return (neuron0x33c5800()*-1.17313);
}

double NNfunction_sb_cLcL::synapse0x33d85b0() {
   return (neuron0x33c61d0()*-0.82522);
}

double NNfunction_sb_cLcL::synapse0x33d85f0() {
   return (neuron0x33c6ba0()*-1.63965);
}

double NNfunction_sb_cLcL::synapse0x33d8f80() {
   return (neuron0x33c89b0()*-1.26285);
}

double NNfunction_sb_cLcL::synapse0x33d8fc0() {
   return (neuron0x33c8c90()*-1.57809);
}

double NNfunction_sb_cLcL::synapse0x33d9950() {
   return (neuron0x33c9660()*0.711356);
}

double NNfunction_sb_cLcL::synapse0x33d9990() {
   return (neuron0x33ca030()*-0.691636);
}

double NNfunction_sb_cLcL::synapse0x33da530() {
   return (neuron0x33caa00()*1.86236);
}

double NNfunction_sb_cLcL::synapse0x33da570() {
   return (neuron0x33cb3d0()*2.26133);
}

double NNfunction_sb_cLcL::synapse0x33daf00() {
   return (neuron0x33c3f20()*3.55273);
}

double NNfunction_sb_cLcL::synapse0x33daf40() {
   return (neuron0x33c48f0()*-0.429253);
}

double NNfunction_sb_cLcL::synapse0x33cbd80() {
   return (neuron0x33ce160()*-0.346525);
}

double NNfunction_sb_cLcL::synapse0x33cbdc0() {
   return (neuron0x33ceb30()*-2.57112);
}

double NNfunction_sb_cLcL::synapse0x33cc750() {
   return (neuron0x33cf500()*2.18979);
}

double NNfunction_sb_cLcL::synapse0x33cc790() {
   return (neuron0x33cfed0()*-7.71613);
}

double NNfunction_sb_cLcL::synapse0x33cd120() {
   return (neuron0x33d08a0()*1.08541);
}

double NNfunction_sb_cLcL::synapse0x33cd160() {
   return (neuron0x33d1270()*0.741882);
}

double NNfunction_sb_cLcL::synapse0x33df640() {
   return (neuron0x33d1c40()*2.34428);
}

double NNfunction_sb_cLcL::synapse0x33df680() {
   return (neuron0x33d2610()*-1.85762);
}

double NNfunction_sb_cLcL::synapse0x33e0010() {
   return (neuron0x33c86a0()*-4.41829);
}

double NNfunction_sb_cLcL::synapse0x33e0050() {
   return (neuron0x33d51f0()*2.3919);
}

double NNfunction_sb_cLcL::synapse0x33e09e0() {
   return (neuron0x33d5bc0()*2.67323);
}

double NNfunction_sb_cLcL::synapse0x33e0a20() {
   return (neuron0x33d6590()*-1.96736);
}

double NNfunction_sb_cLcL::synapse0x33e13b0() {
   return (neuron0x33d6f60()*0.357933);
}

double NNfunction_sb_cLcL::synapse0x33e13f0() {
   return (neuron0x33d7930()*-2.30621);
}

double NNfunction_sb_cLcL::synapse0x33bc220() {
   return (neuron0x33d8300()*3.35571);
}

double NNfunction_sb_cLcL::synapse0x33bc260() {
   return (neuron0x33d8cd0()*-2.70841);
}

double NNfunction_sb_cLcL::synapse0x33d0b50() {
   return (neuron0x33d96a0()*-1.84485);
}

double NNfunction_sb_cLcL::synapse0x33d0b90() {
   return (neuron0x33da280()*-2.61321);
}

double NNfunction_sb_cLcL::synapse0x33e1ad0() {
   return (neuron0x33dac50()*-0.111973);
}

double NNfunction_sb_cLcL::synapse0x33e1b10() {
   return (neuron0x33cbad0()*-2.43432);
}

double NNfunction_sb_cLcL::synapse0x33e1b50() {
   return (neuron0x33cc4a0()*-1.98452);
}

double NNfunction_sb_cLcL::synapse0x33e1b90() {
   return (neuron0x33cce70()*0.282614);
}

double NNfunction_sb_cLcL::synapse0x33e8a40() {
   return (neuron0x33df4b0()*1.64721);
}

double NNfunction_sb_cLcL::synapse0x33e8a80() {
   return (neuron0x33dfd60()*0.269834);
}

double NNfunction_sb_cLcL::synapse0x33e8ac0() {
   return (neuron0x33e0730()*-1.9763);
}

double NNfunction_sb_cLcL::synapse0x33e8b00() {
   return (neuron0x33e1100()*-2.5992);
}

double NNfunction_sb_cLcL::synapse0x33e8e80() {
   return (neuron0x33bbf70()*2.36296);
}

double NNfunction_sb_cLcL::synapse0x33e8ec0() {
   return (neuron0x33bc8c0()*-4.09721);
}

double NNfunction_sb_cLcL::synapse0x33e8f00() {
   return (neuron0x33bd3a0()*-1.8142);
}

double NNfunction_sb_cLcL::synapse0x33e8f40() {
   return (neuron0x33bce40()*-1.53306);
}

double NNfunction_sb_cLcL::synapse0x33e8f80() {
   return (neuron0x33be180()*1.29085);
}

double NNfunction_sb_cLcL::synapse0x33e8fc0() {
   return (neuron0x33bfc60()*4.91384);
}

double NNfunction_sb_cLcL::synapse0x33e9000() {
   return (neuron0x33c0a30()*-1.00111);
}

double NNfunction_sb_cLcL::synapse0x33e9040() {
   return (neuron0x33c1400()*-1.31492);
}

double NNfunction_sb_cLcL::synapse0x33e9080() {
   return (neuron0x33c1dd0()*2.54079);
}

double NNfunction_sb_cLcL::synapse0x33e90c0() {
   return (neuron0x33c28b0()*-0.579661);
}

double NNfunction_sb_cLcL::synapse0x33e9100() {
   return (neuron0x33c3280()*8.274);
}

double NNfunction_sb_cLcL::synapse0x33e9140() {
   return (neuron0x33c0360()*-5.53846);
}

double NNfunction_sb_cLcL::synapse0x33e9180() {
   return (neuron0x33c4e30()*-0.199817);
}

double NNfunction_sb_cLcL::synapse0x33e91c0() {
   return (neuron0x33c5800()*0.870953);
}

double NNfunction_sb_cLcL::synapse0x33e9200() {
   return (neuron0x33c61d0()*-0.0859286);
}

double NNfunction_sb_cLcL::synapse0x33e9240() {
   return (neuron0x33c6ba0()*0.967877);
}

double NNfunction_sb_cLcL::synapse0x33e8cd0() {
   return (neuron0x33c89b0()*-0.804471);
}

double NNfunction_sb_cLcL::synapse0x33e8d10() {
   return (neuron0x33c8c90()*-0.848268);
}

double NNfunction_sb_cLcL::synapse0x33e9390() {
   return (neuron0x33c9660()*-7.30791);
}

double NNfunction_sb_cLcL::synapse0x33e93d0() {
   return (neuron0x33ca030()*0.802084);
}

double NNfunction_sb_cLcL::synapse0x33e9410() {
   return (neuron0x33caa00()*-2.36218);
}

double NNfunction_sb_cLcL::synapse0x33e9450() {
   return (neuron0x33cb3d0()*-5.87075);
}

double NNfunction_sb_cLcL::synapse0x33e9490() {
   return (neuron0x33c3f20()*7.09441);
}

double NNfunction_sb_cLcL::synapse0x33e94d0() {
   return (neuron0x33c48f0()*2.21898);
}

double NNfunction_sb_cLcL::synapse0x33e9510() {
   return (neuron0x33ce160()*0.980419);
}

double NNfunction_sb_cLcL::synapse0x33e9550() {
   return (neuron0x33ceb30()*-0.672789);
}

double NNfunction_sb_cLcL::synapse0x33e9590() {
   return (neuron0x33cf500()*-4.90928);
}

double NNfunction_sb_cLcL::synapse0x33e95d0() {
   return (neuron0x33cfed0()*-11.382);
}

double NNfunction_sb_cLcL::synapse0x33e9610() {
   return (neuron0x33d08a0()*-1.10935);
}

double NNfunction_sb_cLcL::synapse0x33e9650() {
   return (neuron0x33d1270()*-0.893268);
}

double NNfunction_sb_cLcL::synapse0x33e9690() {
   return (neuron0x33d1c40()*-0.111783);
}

double NNfunction_sb_cLcL::synapse0x33e96d0() {
   return (neuron0x33d2610()*0.684405);
}

double NNfunction_sb_cLcL::synapse0x33e9280() {
   return (neuron0x33c86a0()*-7.16137);
}

double NNfunction_sb_cLcL::synapse0x33e92c0() {
   return (neuron0x33d51f0()*-1.07412);
}

double NNfunction_sb_cLcL::synapse0x33e9300() {
   return (neuron0x33d5bc0()*0.161951);
}

double NNfunction_sb_cLcL::synapse0x33e9340() {
   return (neuron0x33d6590()*-3.65959);
}

double NNfunction_sb_cLcL::synapse0x33e9920() {
   return (neuron0x33d6f60()*-0.544786);
}

double NNfunction_sb_cLcL::synapse0x33e9960() {
   return (neuron0x33d7930()*-0.0432273);
}

double NNfunction_sb_cLcL::synapse0x33e99a0() {
   return (neuron0x33d8300()*0.373709);
}

double NNfunction_sb_cLcL::synapse0x33e99e0() {
   return (neuron0x33d8cd0()*2.04672);
}

double NNfunction_sb_cLcL::synapse0x33e9a20() {
   return (neuron0x33d96a0()*-0.210801);
}

double NNfunction_sb_cLcL::synapse0x33e9a60() {
   return (neuron0x33da280()*-0.143546);
}

double NNfunction_sb_cLcL::synapse0x33e9aa0() {
   return (neuron0x33dac50()*3.43935);
}

double NNfunction_sb_cLcL::synapse0x33e9ae0() {
   return (neuron0x33cbad0()*1.34839);
}

double NNfunction_sb_cLcL::synapse0x33e9b20() {
   return (neuron0x33cc4a0()*0.618815);
}

double NNfunction_sb_cLcL::synapse0x33e9b60() {
   return (neuron0x33cce70()*2.89805);
}

double NNfunction_sb_cLcL::synapse0x33e9ba0() {
   return (neuron0x33df4b0()*-4.5999);
}

double NNfunction_sb_cLcL::synapse0x33e9be0() {
   return (neuron0x33dfd60()*1.5778);
}

double NNfunction_sb_cLcL::synapse0x33e9c20() {
   return (neuron0x33e0730()*0.767896);
}

double NNfunction_sb_cLcL::synapse0x33e9c60() {
   return (neuron0x33e1100()*-1.08601);
}

double NNfunction_sb_cLcL::synapse0x33e9fe0() {
   return (neuron0x33bbf70()*-0.890554);
}

double NNfunction_sb_cLcL::synapse0x33ea020() {
   return (neuron0x33bc8c0()*-0.11994);
}

double NNfunction_sb_cLcL::synapse0x33ea060() {
   return (neuron0x33bd3a0()*0.68165);
}

double NNfunction_sb_cLcL::synapse0x33ea0a0() {
   return (neuron0x33bce40()*-0.318828);
}

double NNfunction_sb_cLcL::synapse0x33ea0e0() {
   return (neuron0x33be180()*-2.77926);
}

double NNfunction_sb_cLcL::synapse0x33ea120() {
   return (neuron0x33bfc60()*0.478519);
}

double NNfunction_sb_cLcL::synapse0x33ea160() {
   return (neuron0x33c0a30()*-3.11079);
}

double NNfunction_sb_cLcL::synapse0x33ea1a0() {
   return (neuron0x33c1400()*0.87789);
}

double NNfunction_sb_cLcL::synapse0x33ea1e0() {
   return (neuron0x33c1dd0()*0.154175);
}

double NNfunction_sb_cLcL::synapse0x33ea220() {
   return (neuron0x33c28b0()*-0.00622355);
}

double NNfunction_sb_cLcL::synapse0x33ea260() {
   return (neuron0x33c3280()*2.56414);
}

double NNfunction_sb_cLcL::synapse0x33ea2a0() {
   return (neuron0x33c0360()*-0.142019);
}

double NNfunction_sb_cLcL::synapse0x33ea2e0() {
   return (neuron0x33c4e30()*1.89964);
}

double NNfunction_sb_cLcL::synapse0x33ea320() {
   return (neuron0x33c5800()*1.3033);
}

double NNfunction_sb_cLcL::synapse0x33ea360() {
   return (neuron0x33c61d0()*-2.69097);
}

double NNfunction_sb_cLcL::synapse0x33ea3a0() {
   return (neuron0x33c6ba0()*1.79848);
}

double NNfunction_sb_cLcL::synapse0x33e9e30() {
   return (neuron0x33c89b0()*1.04359);
}

double NNfunction_sb_cLcL::synapse0x33e9e70() {
   return (neuron0x33c8c90()*-2.90422);
}

double NNfunction_sb_cLcL::synapse0x33ea4f0() {
   return (neuron0x33c9660()*-0.799212);
}

double NNfunction_sb_cLcL::synapse0x33ea530() {
   return (neuron0x33ca030()*1.34719);
}

double NNfunction_sb_cLcL::synapse0x33ea570() {
   return (neuron0x33caa00()*2.11491);
}

double NNfunction_sb_cLcL::synapse0x33ea5b0() {
   return (neuron0x33cb3d0()*0.223574);
}

double NNfunction_sb_cLcL::synapse0x33ea5f0() {
   return (neuron0x33c3f20()*-2.28721);
}

double NNfunction_sb_cLcL::synapse0x33ea630() {
   return (neuron0x33c48f0()*0.407473);
}

double NNfunction_sb_cLcL::synapse0x33ea670() {
   return (neuron0x33ce160()*-2.36335);
}

double NNfunction_sb_cLcL::synapse0x33ea6b0() {
   return (neuron0x33ceb30()*0.78608);
}

double NNfunction_sb_cLcL::synapse0x33ea6f0() {
   return (neuron0x33cf500()*-3.85016);
}

double NNfunction_sb_cLcL::synapse0x33ea730() {
   return (neuron0x33cfed0()*-0.46176);
}

double NNfunction_sb_cLcL::synapse0x33ea770() {
   return (neuron0x33d08a0()*-1.32032);
}

double NNfunction_sb_cLcL::synapse0x33ea7b0() {
   return (neuron0x33d1270()*-0.394115);
}

double NNfunction_sb_cLcL::synapse0x33ea7f0() {
   return (neuron0x33d1c40()*-0.400885);
}

double NNfunction_sb_cLcL::synapse0x33ea830() {
   return (neuron0x33d2610()*-0.752858);
}

double NNfunction_sb_cLcL::synapse0x33ea3e0() {
   return (neuron0x33c86a0()*-1.00159);
}

double NNfunction_sb_cLcL::synapse0x33ea420() {
   return (neuron0x33d51f0()*0.528258);
}

double NNfunction_sb_cLcL::synapse0x33ea460() {
   return (neuron0x33d5bc0()*-1.12302);
}

double NNfunction_sb_cLcL::synapse0x33ea4a0() {
   return (neuron0x33d6590()*-0.54603);
}

double NNfunction_sb_cLcL::synapse0x33eaa80() {
   return (neuron0x33d6f60()*-0.0254484);
}

double NNfunction_sb_cLcL::synapse0x33eaac0() {
   return (neuron0x33d7930()*0.338794);
}

double NNfunction_sb_cLcL::synapse0x33eab00() {
   return (neuron0x33d8300()*-2.56078);
}

double NNfunction_sb_cLcL::synapse0x33eab40() {
   return (neuron0x33d8cd0()*0.24743);
}

double NNfunction_sb_cLcL::synapse0x33eab80() {
   return (neuron0x33d96a0()*2.03828);
}

double NNfunction_sb_cLcL::synapse0x33eabc0() {
   return (neuron0x33da280()*-1.03684);
}

double NNfunction_sb_cLcL::synapse0x33eac00() {
   return (neuron0x33dac50()*-0.373876);
}

double NNfunction_sb_cLcL::synapse0x33eac40() {
   return (neuron0x33cbad0()*-0.382478);
}

double NNfunction_sb_cLcL::synapse0x33eac80() {
   return (neuron0x33cc4a0()*0.589918);
}

double NNfunction_sb_cLcL::synapse0x33eacc0() {
   return (neuron0x33cce70()*-1.49956);
}

double NNfunction_sb_cLcL::synapse0x33ead00() {
   return (neuron0x33df4b0()*0.605113);
}

double NNfunction_sb_cLcL::synapse0x33ead40() {
   return (neuron0x33dfd60()*-1.09659);
}

double NNfunction_sb_cLcL::synapse0x33ead80() {
   return (neuron0x33e0730()*0.119613);
}

double NNfunction_sb_cLcL::synapse0x33eadc0() {
   return (neuron0x33e1100()*-0.960857);
}

double NNfunction_sb_cLcL::synapse0x33eb140() {
   return (neuron0x33bbf70()*0.0412499);
}

double NNfunction_sb_cLcL::synapse0x33eb180() {
   return (neuron0x33bc8c0()*-0.107413);
}

double NNfunction_sb_cLcL::synapse0x33eb1c0() {
   return (neuron0x33bd3a0()*-0.0656476);
}

double NNfunction_sb_cLcL::synapse0x33eb200() {
   return (neuron0x33bce40()*-0.602217);
}

double NNfunction_sb_cLcL::synapse0x33eb240() {
   return (neuron0x33be180()*0.220472);
}

double NNfunction_sb_cLcL::synapse0x33eb280() {
   return (neuron0x33bfc60()*-0.0199824);
}

double NNfunction_sb_cLcL::synapse0x33eb2c0() {
   return (neuron0x33c0a30()*-0.298412);
}

double NNfunction_sb_cLcL::synapse0x33eb300() {
   return (neuron0x33c1400()*-0.178784);
}

double NNfunction_sb_cLcL::synapse0x33eb340() {
   return (neuron0x33c1dd0()*1.01333);
}

double NNfunction_sb_cLcL::synapse0x33eb380() {
   return (neuron0x33c28b0()*0.00192771);
}

double NNfunction_sb_cLcL::synapse0x33eb3c0() {
   return (neuron0x33c3280()*-0.0326501);
}

double NNfunction_sb_cLcL::synapse0x33eb400() {
   return (neuron0x33c0360()*0.0171723);
}

double NNfunction_sb_cLcL::synapse0x33eb440() {
   return (neuron0x33c4e30()*-0.481836);
}

double NNfunction_sb_cLcL::synapse0x33eb480() {
   return (neuron0x33c5800()*-0.039793);
}

double NNfunction_sb_cLcL::synapse0x33eb4c0() {
   return (neuron0x33c61d0()*0.276786);
}

double NNfunction_sb_cLcL::synapse0x33eb500() {
   return (neuron0x33c6ba0()*0.0966893);
}

double NNfunction_sb_cLcL::synapse0x33eaf90() {
   return (neuron0x33c89b0()*2.00332);
}

double NNfunction_sb_cLcL::synapse0x33eafd0() {
   return (neuron0x33c8c90()*0.123546);
}

double NNfunction_sb_cLcL::synapse0x33eb650() {
   return (neuron0x33c9660()*-0.260406);
}

double NNfunction_sb_cLcL::synapse0x33eb690() {
   return (neuron0x33ca030()*0.0167073);
}

double NNfunction_sb_cLcL::synapse0x33eb6d0() {
   return (neuron0x33caa00()*0.153915);
}

double NNfunction_sb_cLcL::synapse0x33eb710() {
   return (neuron0x33cb3d0()*0.0214798);
}

double NNfunction_sb_cLcL::synapse0x33eb750() {
   return (neuron0x33c3f20()*-0.322399);
}

double NNfunction_sb_cLcL::synapse0x33eb790() {
   return (neuron0x33c48f0()*0.150312);
}

double NNfunction_sb_cLcL::synapse0x33eb7d0() {
   return (neuron0x33ce160()*-0.109607);
}

double NNfunction_sb_cLcL::synapse0x33eb810() {
   return (neuron0x33ceb30()*1.12821);
}

double NNfunction_sb_cLcL::synapse0x33eb850() {
   return (neuron0x33cf500()*-1.76897);
}

double NNfunction_sb_cLcL::synapse0x33eb890() {
   return (neuron0x33cfed0()*0.831719);
}

double NNfunction_sb_cLcL::synapse0x33eb8d0() {
   return (neuron0x33d08a0()*0.202698);
}

double NNfunction_sb_cLcL::synapse0x33eb910() {
   return (neuron0x33d1270()*-0.0814318);
}

double NNfunction_sb_cLcL::synapse0x33eb950() {
   return (neuron0x33d1c40()*0.00597731);
}

double NNfunction_sb_cLcL::synapse0x33eb990() {
   return (neuron0x33d2610()*2.16724);
}

double NNfunction_sb_cLcL::synapse0x33eb540() {
   return (neuron0x33c86a0()*1.12607);
}

double NNfunction_sb_cLcL::synapse0x33eb580() {
   return (neuron0x33d51f0()*-0.511003);
}

double NNfunction_sb_cLcL::synapse0x33eb5c0() {
   return (neuron0x33d5bc0()*0.01812);
}

double NNfunction_sb_cLcL::synapse0x33eb600() {
   return (neuron0x33d6590()*0.179425);
}

double NNfunction_sb_cLcL::synapse0x33ebbe0() {
   return (neuron0x33d6f60()*-0.152228);
}

double NNfunction_sb_cLcL::synapse0x33ebc20() {
   return (neuron0x33d7930()*-0.0094347);
}

double NNfunction_sb_cLcL::synapse0x33ebc60() {
   return (neuron0x33d8300()*0.249495);
}

double NNfunction_sb_cLcL::synapse0x33ebca0() {
   return (neuron0x33d8cd0()*0.637089);
}

double NNfunction_sb_cLcL::synapse0x33ebce0() {
   return (neuron0x33d96a0()*-0.230203);
}

double NNfunction_sb_cLcL::synapse0x33ebd20() {
   return (neuron0x33da280()*0.0731762);
}

double NNfunction_sb_cLcL::synapse0x33ebd60() {
   return (neuron0x33dac50()*0.0341794);
}

double NNfunction_sb_cLcL::synapse0x33ebda0() {
   return (neuron0x33cbad0()*0.0340611);
}

double NNfunction_sb_cLcL::synapse0x33ebde0() {
   return (neuron0x33cc4a0()*0.0374234);
}

double NNfunction_sb_cLcL::synapse0x33ebe20() {
   return (neuron0x33cce70()*0.284842);
}

double NNfunction_sb_cLcL::synapse0x33ebe60() {
   return (neuron0x33df4b0()*-0.307028);
}

double NNfunction_sb_cLcL::synapse0x33ebea0() {
   return (neuron0x33dfd60()*0.145345);
}

double NNfunction_sb_cLcL::synapse0x33ebee0() {
   return (neuron0x33e0730()*0.0856896);
}

double NNfunction_sb_cLcL::synapse0x33ebf20() {
   return (neuron0x33e1100()*-0.0330909);
}

double NNfunction_sb_cLcL::synapse0x33ec180() {
   return (neuron0x33e8300()*3.60794);
}

double NNfunction_sb_cLcL::synapse0x33ec1c0() {
   return (neuron0x33e86a0()*13.4368);
}

double NNfunction_sb_cLcL::synapse0x33ec200() {
   return (neuron0x33e8b40()*-16);
}

double NNfunction_sb_cLcL::synapse0x33ec240() {
   return (neuron0x33e9ca0()*-8.55363);
}

double NNfunction_sb_cLcL::synapse0x33ec280() {
   return (neuron0x33eae00()*-5.0992);
}

