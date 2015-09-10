#include "NNfunction_ns_chiPlus2_uL.h"
#include <cmath>

double NNfunction_ns_chiPlus2_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8245)/15.1503;
   input1 = (in1 - 5.2397)/1048.57;
   input2 = (in2 - 432.145)/412.19;
   input3 = (in3 - 51.0598)/758.543;
   input4 = (in4 - 895.815)/876.069;
   input5 = (in5 - 777.754)/881.692;
   input6 = (in6 - 774.843)/874.973;
   input7 = (in7 - 781.12)/858.904;
   input8 = (in8 - 803.807)/911.228;
   input9 = (in9 - 796.332)/899.152;
   input10 = (in10 - 826.807)/901.141;
   input11 = (in11 - 277.968)/217.856;
   input12 = (in12 - 672.905)/790.991;
   input13 = (in13 - 463.829)/456.47;
   input14 = (in14 - 655.787)/723.896;
   input15 = (in15 - 662.634)/731.57;
   input16 = (in16 - 481.613)/499.613;
   input17 = (in17 - 702.183)/824.879;
   input18 = (in18 - 706.025)/828.678;
   input19 = (in19 - 706.935)/787.604;
   input20 = (in20 - -48.014)/445.613;
   input21 = (in21 - -65.6329)/1042.56;
   input22 = (in22 - 7.3873)/1075.59;
   input23 = (in23 - -43.2018)/252.691;
   switch(index) {
     case 0:
         return neuron0x1bcb7f0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.8245)/15.1503;
   input1 = (input[1] - 5.2397)/1048.57;
   input2 = (input[2] - 432.145)/412.19;
   input3 = (input[3] - 51.0598)/758.543;
   input4 = (input[4] - 895.815)/876.069;
   input5 = (input[5] - 777.754)/881.692;
   input6 = (input[6] - 774.843)/874.973;
   input7 = (input[7] - 781.12)/858.904;
   input8 = (input[8] - 803.807)/911.228;
   input9 = (input[9] - 796.332)/899.152;
   input10 = (input[10] - 826.807)/901.141;
   input11 = (input[11] - 277.968)/217.856;
   input12 = (input[12] - 672.905)/790.991;
   input13 = (input[13] - 463.829)/456.47;
   input14 = (input[14] - 655.787)/723.896;
   input15 = (input[15] - 662.634)/731.57;
   input16 = (input[16] - 481.613)/499.613;
   input17 = (input[17] - 702.183)/824.879;
   input18 = (input[18] - 706.025)/828.678;
   input19 = (input[19] - 706.935)/787.604;
   input20 = (input[20] - -48.014)/445.613;
   input21 = (input[21] - -65.6329)/1042.56;
   input22 = (input[22] - 7.3873)/1075.59;
   input23 = (input[23] - -43.2018)/252.691;
   switch(index) {
     case 0:
         return neuron0x1bcb7f0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b96860() {
   return input0;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b96b10() {
   return input1;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b96e50() {
   return input2;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b97190() {
   return input3;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b974d0() {
   return input4;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b97810() {
   return input5;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b97b50() {
   return input6;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b97e90() {
   return input7;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b981d0() {
   return input8;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b98510() {
   return input9;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b98850() {
   return input10;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b98b90() {
   return input11;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b98ed0() {
   return input12;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b99210() {
   return input13;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b99550() {
   return input14;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b99890() {
   return input15;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b99bd0() {
   return input16;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9a130() {
   return input17;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9a470() {
   return input18;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9a7b0() {
   return input19;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9aaf0() {
   return input20;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9ae30() {
   return input21;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9b170() {
   return input22;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9b4b0() {
   return input23;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9b920() {
   double input = 1.78505;
   input += synapse0x1b9bc60();
   input += synapse0x1b9bca0();
   input += synapse0x1b9bce0();
   input += synapse0x1b9bd20();
   input += synapse0x1b9bd60();
   input += synapse0x1b9bda0();
   input += synapse0x1b9bde0();
   input += synapse0x1b9be20();
   input += synapse0x1b9be60();
   input += synapse0x1b9bea0();
   input += synapse0x1b9bee0();
   input += synapse0x1b9bf20();
   input += synapse0x1b9bf60();
   input += synapse0x1b9bfa0();
   input += synapse0x1b9bfe0();
   input += synapse0x1b9c020();
   input += synapse0x1b9bab0();
   input += synapse0x1b9baf0();
   input += synapse0x19529c0();
   input += synapse0x1952a00();
   input += synapse0x1b9c060();
   input += synapse0x1b9c0a0();
   input += synapse0x1b9c0e0();
   input += synapse0x1b9c120();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9b920() {
   double input = input0x1b9b920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9c160() {
   double input = -0.643628;
   input += synapse0x1b9c4a0();
   input += synapse0x1b9c4e0();
   input += synapse0x1b9c520();
   input += synapse0x1b9c560();
   input += synapse0x1b9c5a0();
   input += synapse0x1b9c5e0();
   input += synapse0x1b9c620();
   input += synapse0x1b9c660();
   input += synapse0x1b9c6a0();
   input += synapse0x1952810();
   input += synapse0x1952850();
   input += synapse0x1952890();
   input += synapse0x19528d0();
   input += synapse0x1b9c8f0();
   input += synapse0x1b9c930();
   input += synapse0x1b9c970();
   input += synapse0x1b9c2f0();
   input += synapse0x1b9c330();
   input += synapse0x1b9cac0();
   input += synapse0x1b9cb00();
   input += synapse0x1b9cb40();
   input += synapse0x1b9cb80();
   input += synapse0x1b9cbc0();
   input += synapse0x1b9cc00();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9c160() {
   double input = input0x1b9c160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9cc40() {
   double input = -0.0357007;
   input += synapse0x1b9cf80();
   input += synapse0x1b9cfc0();
   input += synapse0x1b9d000();
   input += synapse0x1b9d040();
   input += synapse0x1b9d080();
   input += synapse0x1b9d0c0();
   input += synapse0x1b9d100();
   input += synapse0x1b9d140();
   input += synapse0x1b9d180();
   input += synapse0x1b9d1c0();
   input += synapse0x1b9d200();
   input += synapse0x1b9d240();
   input += synapse0x1b9d280();
   input += synapse0x1b9d2c0();
   input += synapse0x1b9d300();
   input += synapse0x1b9d340();
   input += synapse0x1b9cdd0();
   input += synapse0x1b9ce10();
   input += synapse0x1960900();
   input += synapse0x1960940();
   input += synapse0x1b9f270();
   input += synapse0x1b9f2b0();
   input += synapse0x1b965a0();
   input += synapse0x1b965e0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9cc40() {
   double input = input0x1b9cc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1961060() {
   double input = 0.490401;
   input += synapse0x19611f0();
   input += synapse0x1b9c800();
   input += synapse0x1b9c840();
   input += synapse0x1b9c880();
   input += synapse0x1b9d490();
   input += synapse0x1b9d4d0();
   input += synapse0x1b9d510();
   input += synapse0x1b9d550();
   input += synapse0x1b9d590();
   input += synapse0x1b9d5d0();
   input += synapse0x1b9d610();
   input += synapse0x1b9d650();
   input += synapse0x1b9d690();
   input += synapse0x1b9d6d0();
   input += synapse0x1b9d710();
   input += synapse0x1b9d750();
   input += synapse0x1b96620();
   input += synapse0x1b96660();
   input += synapse0x1b9d8a0();
   input += synapse0x1b9d8e0();
   input += synapse0x1b9d920();
   input += synapse0x1b9d960();
   input += synapse0x1b9d9a0();
   input += synapse0x1b9d9e0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1961060() {
   double input = input0x1961060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9da20() {
   double input = -0.329982;
   input += synapse0x1b9dd60();
   input += synapse0x1b9dda0();
   input += synapse0x1b9dde0();
   input += synapse0x1b9de20();
   input += synapse0x1b9de60();
   input += synapse0x1b9dea0();
   input += synapse0x1b9dee0();
   input += synapse0x1b9df20();
   input += synapse0x1b9df60();
   input += synapse0x1b9dfa0();
   input += synapse0x1b9dfe0();
   input += synapse0x1b9e020();
   input += synapse0x1b9e060();
   input += synapse0x1b9e0a0();
   input += synapse0x1b9e0e0();
   input += synapse0x1b9e120();
   input += synapse0x1b9e270();
   input += synapse0x1b9dbb0();
   input += synapse0x1b9dbf0();
   input += synapse0x1b9f3b0();
   input += synapse0x1b9f3f0();
   input += synapse0x1b9f430();
   input += synapse0x1b9f470();
   input += synapse0x1b9f4b0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9da20() {
   double input = input0x1b9da20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9f4f0() {
   double input = -5.50119;
   input += synapse0x1b9f830();
   input += synapse0x1b9f870();
   input += synapse0x1b9f8b0();
   input += synapse0x1b9f8f0();
   input += synapse0x1b9f930();
   input += synapse0x1b9f970();
   input += synapse0x1b9f9b0();
   input += synapse0x1b9f9f0();
   input += synapse0x1b9fa30();
   input += synapse0x1960c50();
   input += synapse0x1960c90();
   input += synapse0x1960cd0();
   input += synapse0x1960d10();
   input += synapse0x1960d50();
   input += synapse0x1960d90();
   input += synapse0x1960dd0();
   input += synapse0x1b9f680();
   input += synapse0x1b9f6c0();
   input += synapse0x1960f20();
   input += synapse0x1960f60();
   input += synapse0x1960fa0();
   input += synapse0x1960fe0();
   input += synapse0x1961020();
   input += synapse0x1ba0280();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9f4f0() {
   double input = input0x1b9f4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba02c0() {
   double input = 4.00344;
   input += synapse0x1ba0600();
   input += synapse0x1ba0640();
   input += synapse0x1ba0680();
   input += synapse0x1ba06c0();
   input += synapse0x1ba0700();
   input += synapse0x1ba0740();
   input += synapse0x1ba0780();
   input += synapse0x1ba07c0();
   input += synapse0x1ba0800();
   input += synapse0x1ba0840();
   input += synapse0x1ba0880();
   input += synapse0x1ba08c0();
   input += synapse0x1ba0900();
   input += synapse0x1ba0940();
   input += synapse0x1ba0980();
   input += synapse0x1ba09c0();
   input += synapse0x1ba0450();
   input += synapse0x1ba0490();
   input += synapse0x1ba0b10();
   input += synapse0x1ba0b50();
   input += synapse0x1ba0b90();
   input += synapse0x1ba0bd0();
   input += synapse0x1ba0c10();
   input += synapse0x1ba0c50();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba02c0() {
   double input = input0x1ba02c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba0c90() {
   double input = 3.54144;
   input += synapse0x1ba0fd0();
   input += synapse0x1ba1010();
   input += synapse0x1ba1050();
   input += synapse0x1ba1090();
   input += synapse0x1ba10d0();
   input += synapse0x1ba1110();
   input += synapse0x1ba1150();
   input += synapse0x1ba1190();
   input += synapse0x1ba11d0();
   input += synapse0x1ba1210();
   input += synapse0x1ba1250();
   input += synapse0x1ba1290();
   input += synapse0x1ba12d0();
   input += synapse0x1ba1310();
   input += synapse0x1ba1350();
   input += synapse0x1ba1390();
   input += synapse0x1ba0e20();
   input += synapse0x1ba0e60();
   input += synapse0x1ba14e0();
   input += synapse0x1ba1520();
   input += synapse0x1ba1560();
   input += synapse0x1ba15a0();
   input += synapse0x1ba15e0();
   input += synapse0x1ba1620();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba0c90() {
   double input = input0x1ba0c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba1660() {
   double input = 1.83213;
   input += synapse0x1b9a020();
   input += synapse0x1b9a060();
   input += synapse0x1b9a0a0();
   input += synapse0x1b9a0e0();
   input += synapse0x1ba1bb0();
   input += synapse0x1ba1bf0();
   input += synapse0x1ba1c30();
   input += synapse0x1ba1c70();
   input += synapse0x1ba1cb0();
   input += synapse0x1ba1cf0();
   input += synapse0x1ba1d30();
   input += synapse0x1ba1d70();
   input += synapse0x1ba1db0();
   input += synapse0x1ba1df0();
   input += synapse0x1ba1e30();
   input += synapse0x1ba1e70();
   input += synapse0x1ba17f0();
   input += synapse0x1ba1830();
   input += synapse0x1ba1fc0();
   input += synapse0x1ba2000();
   input += synapse0x1ba2040();
   input += synapse0x1ba2080();
   input += synapse0x1ba20c0();
   input += synapse0x1ba2100();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba1660() {
   double input = input0x1ba1660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba2140() {
   double input = -0.218917;
   input += synapse0x1ba2480();
   input += synapse0x1ba24c0();
   input += synapse0x1ba2500();
   input += synapse0x1ba2540();
   input += synapse0x1ba2580();
   input += synapse0x1ba25c0();
   input += synapse0x1ba2600();
   input += synapse0x1ba2640();
   input += synapse0x1ba2680();
   input += synapse0x1ba26c0();
   input += synapse0x1ba2700();
   input += synapse0x1ba2740();
   input += synapse0x1ba2780();
   input += synapse0x1ba27c0();
   input += synapse0x1ba2800();
   input += synapse0x1ba2840();
   input += synapse0x1ba22d0();
   input += synapse0x1ba2310();
   input += synapse0x1ba2990();
   input += synapse0x1ba29d0();
   input += synapse0x1ba2a10();
   input += synapse0x1ba2a50();
   input += synapse0x1ba2a90();
   input += synapse0x1ba2ad0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba2140() {
   double input = input0x1ba2140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba2b10() {
   double input = -0.596036;
   input += synapse0x1ba2e50();
   input += synapse0x1ba2e90();
   input += synapse0x1ba2ed0();
   input += synapse0x1ba2f10();
   input += synapse0x1ba2f50();
   input += synapse0x1ba2f90();
   input += synapse0x1ba2fd0();
   input += synapse0x1ba3010();
   input += synapse0x1ba3050();
   input += synapse0x1ba3090();
   input += synapse0x1ba30d0();
   input += synapse0x1ba3110();
   input += synapse0x1ba3150();
   input += synapse0x1ba3190();
   input += synapse0x1ba31d0();
   input += synapse0x1ba3210();
   input += synapse0x1ba2ca0();
   input += synapse0x1ba2ce0();
   input += synapse0x1b9fa70();
   input += synapse0x1b9fab0();
   input += synapse0x1b9faf0();
   input += synapse0x1b9fb30();
   input += synapse0x1b9fb70();
   input += synapse0x1b9fbb0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba2b10() {
   double input = input0x1ba2b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1b9fbf0() {
   double input = 0.938294;
   input += synapse0x1b9ff30();
   input += synapse0x1b9ff70();
   input += synapse0x1b9ffb0();
   input += synapse0x1b9fff0();
   input += synapse0x1ba0030();
   input += synapse0x1ba0070();
   input += synapse0x1ba00b0();
   input += synapse0x1ba00f0();
   input += synapse0x1ba0130();
   input += synapse0x1ba0170();
   input += synapse0x1ba01b0();
   input += synapse0x1ba01f0();
   input += synapse0x1ba0230();
   input += synapse0x1ba4370();
   input += synapse0x1ba43b0();
   input += synapse0x1ba43f0();
   input += synapse0x1b9fd80();
   input += synapse0x1b9fdc0();
   input += synapse0x1ba4540();
   input += synapse0x1ba4580();
   input += synapse0x1ba45c0();
   input += synapse0x1ba4600();
   input += synapse0x1ba4640();
   input += synapse0x1ba4680();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1b9fbf0() {
   double input = input0x1b9fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba46c0() {
   double input = 0.0500242;
   input += synapse0x1ba4a00();
   input += synapse0x1ba4a40();
   input += synapse0x1ba4a80();
   input += synapse0x1ba4ac0();
   input += synapse0x1ba4b00();
   input += synapse0x1ba4b40();
   input += synapse0x1ba4b80();
   input += synapse0x1ba4bc0();
   input += synapse0x1ba4c00();
   input += synapse0x1ba4c40();
   input += synapse0x1ba4c80();
   input += synapse0x1ba4cc0();
   input += synapse0x1ba4d00();
   input += synapse0x1ba4d40();
   input += synapse0x1ba4d80();
   input += synapse0x1ba4dc0();
   input += synapse0x1ba4850();
   input += synapse0x1ba4890();
   input += synapse0x1ba4f10();
   input += synapse0x1ba4f50();
   input += synapse0x1ba4f90();
   input += synapse0x1ba4fd0();
   input += synapse0x1ba5010();
   input += synapse0x1ba5050();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba46c0() {
   double input = input0x1ba46c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba5090() {
   double input = 0.140787;
   input += synapse0x1ba53d0();
   input += synapse0x1ba5410();
   input += synapse0x1ba5450();
   input += synapse0x1ba5490();
   input += synapse0x1ba54d0();
   input += synapse0x1ba5510();
   input += synapse0x1ba5550();
   input += synapse0x1ba5590();
   input += synapse0x1ba55d0();
   input += synapse0x1ba5610();
   input += synapse0x1ba5650();
   input += synapse0x1ba5690();
   input += synapse0x1ba56d0();
   input += synapse0x1ba5710();
   input += synapse0x1ba5750();
   input += synapse0x1ba5790();
   input += synapse0x1ba5220();
   input += synapse0x1ba5260();
   input += synapse0x1ba58e0();
   input += synapse0x1ba5920();
   input += synapse0x1ba5960();
   input += synapse0x1ba59a0();
   input += synapse0x1ba59e0();
   input += synapse0x1ba5a20();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba5090() {
   double input = input0x1ba5090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba5a60() {
   double input = 0.547258;
   input += synapse0x1ba5da0();
   input += synapse0x1ba5de0();
   input += synapse0x1ba5e20();
   input += synapse0x1ba5e60();
   input += synapse0x1ba5ea0();
   input += synapse0x1ba5ee0();
   input += synapse0x1ba5f20();
   input += synapse0x1ba5f60();
   input += synapse0x1ba5fa0();
   input += synapse0x1ba5fe0();
   input += synapse0x1ba6020();
   input += synapse0x1ba6060();
   input += synapse0x1ba60a0();
   input += synapse0x1ba60e0();
   input += synapse0x1ba6120();
   input += synapse0x1ba6160();
   input += synapse0x1ba5bf0();
   input += synapse0x1ba5c30();
   input += synapse0x1ba62b0();
   input += synapse0x1ba62f0();
   input += synapse0x1ba6330();
   input += synapse0x1ba6370();
   input += synapse0x1ba63b0();
   input += synapse0x1ba63f0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba5a60() {
   double input = input0x1ba5a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba6430() {
   double input = 0.691695;
   input += synapse0x1ba6770();
   input += synapse0x1b969f0();
   input += synapse0x1b96a30();
   input += synapse0x1b96d30();
   input += synapse0x1b96d70();
   input += synapse0x1b97070();
   input += synapse0x1b970b0();
   input += synapse0x1b973b0();
   input += synapse0x1b973f0();
   input += synapse0x1b976f0();
   input += synapse0x1b97730();
   input += synapse0x1b97a30();
   input += synapse0x1b97a70();
   input += synapse0x1b97d70();
   input += synapse0x1b97db0();
   input += synapse0x1b980b0();
   input += synapse0x1b980f0();
   input += synapse0x1b983f0();
   input += synapse0x1b98430();
   input += synapse0x1b98730();
   input += synapse0x1b98770();
   input += synapse0x1b98a70();
   input += synapse0x1b98ab0();
   input += synapse0x1b98db0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba6430() {
   double input = input0x1ba6430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba8240() {
   double input = 1.57946;
   input += synapse0x1b98df0();
   input += synapse0x1b99ab0();
   input += synapse0x1b99af0();
   input += synapse0x1ba65c0();
   input += synapse0x1ba6600();
   input += synapse0x1b99df0();
   input += synapse0x1b99e30();
   input += synapse0x1b9a350();
   input += synapse0x1b9a390();
   input += synapse0x1b9a690();
   input += synapse0x1b9a6d0();
   input += synapse0x1b9a9d0();
   input += synapse0x1b9aa10();
   input += synapse0x1b9ad10();
   input += synapse0x1b9ad50();
   input += synapse0x1b9b050();
   input += synapse0x1b9b090();
   input += synapse0x1b9b390();
   input += synapse0x1b9b3d0();
   input += synapse0x1b9b6d0();
   input += synapse0x1b9b710();
   input += synapse0x1b990f0();
   input += synapse0x1b99130();
   input += synapse0x1ba84e0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba8240() {
   double input = input0x1ba8240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba8520() {
   double input = -0.659412;
   input += synapse0x1ba8860();
   input += synapse0x1ba88a0();
   input += synapse0x1ba88e0();
   input += synapse0x1ba8920();
   input += synapse0x1ba8960();
   input += synapse0x1ba89a0();
   input += synapse0x1ba89e0();
   input += synapse0x1ba8a20();
   input += synapse0x1ba8a60();
   input += synapse0x1ba8aa0();
   input += synapse0x1ba8ae0();
   input += synapse0x1ba8b20();
   input += synapse0x1ba8b60();
   input += synapse0x1ba8ba0();
   input += synapse0x1ba8be0();
   input += synapse0x1ba8c20();
   input += synapse0x1ba86b0();
   input += synapse0x1ba86f0();
   input += synapse0x1ba8d70();
   input += synapse0x1ba8db0();
   input += synapse0x1ba8df0();
   input += synapse0x1ba8e30();
   input += synapse0x1ba8e70();
   input += synapse0x1ba8eb0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba8520() {
   double input = input0x1ba8520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba8ef0() {
   double input = 0.598664;
   input += synapse0x1ba9230();
   input += synapse0x1ba9270();
   input += synapse0x1ba92b0();
   input += synapse0x1ba92f0();
   input += synapse0x1ba9330();
   input += synapse0x1ba9370();
   input += synapse0x1ba93b0();
   input += synapse0x1ba93f0();
   input += synapse0x1ba9430();
   input += synapse0x1ba9470();
   input += synapse0x1ba94b0();
   input += synapse0x1ba94f0();
   input += synapse0x1ba9530();
   input += synapse0x1ba9570();
   input += synapse0x1ba95b0();
   input += synapse0x1ba95f0();
   input += synapse0x1ba9080();
   input += synapse0x1ba90c0();
   input += synapse0x1ba9740();
   input += synapse0x1ba9780();
   input += synapse0x1ba97c0();
   input += synapse0x1ba9800();
   input += synapse0x1ba9840();
   input += synapse0x1ba9880();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba8ef0() {
   double input = input0x1ba8ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba98c0() {
   double input = 1.00775;
   input += synapse0x1ba9c00();
   input += synapse0x1ba9c40();
   input += synapse0x1ba9c80();
   input += synapse0x1ba9cc0();
   input += synapse0x1ba9d00();
   input += synapse0x1ba9d40();
   input += synapse0x1ba9d80();
   input += synapse0x1ba9dc0();
   input += synapse0x1ba9e00();
   input += synapse0x1ba9e40();
   input += synapse0x1ba9e80();
   input += synapse0x1ba9ec0();
   input += synapse0x1ba9f00();
   input += synapse0x1ba9f40();
   input += synapse0x1ba9f80();
   input += synapse0x1ba9fc0();
   input += synapse0x1ba9a50();
   input += synapse0x1ba9a90();
   input += synapse0x1baa110();
   input += synapse0x1baa150();
   input += synapse0x1baa190();
   input += synapse0x1baa1d0();
   input += synapse0x1baa210();
   input += synapse0x1baa250();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba98c0() {
   double input = input0x1ba98c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1baa290() {
   double input = 0.731764;
   input += synapse0x1baa5d0();
   input += synapse0x1baa610();
   input += synapse0x1baa650();
   input += synapse0x1baa690();
   input += synapse0x1baa6d0();
   input += synapse0x1baa710();
   input += synapse0x1baa750();
   input += synapse0x1baa790();
   input += synapse0x1baa7d0();
   input += synapse0x1baa810();
   input += synapse0x1baa850();
   input += synapse0x1baa890();
   input += synapse0x1baa8d0();
   input += synapse0x1baa910();
   input += synapse0x1baa950();
   input += synapse0x1baa990();
   input += synapse0x1baa420();
   input += synapse0x1baa460();
   input += synapse0x1baaae0();
   input += synapse0x1baab20();
   input += synapse0x1baab60();
   input += synapse0x1baaba0();
   input += synapse0x1baabe0();
   input += synapse0x1baac20();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1baa290() {
   double input = input0x1baa290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1baac60() {
   double input = -0.438129;
   input += synapse0x1baafa0();
   input += synapse0x1baafe0();
   input += synapse0x1bab020();
   input += synapse0x1bab060();
   input += synapse0x1bab0a0();
   input += synapse0x1bab0e0();
   input += synapse0x1bab120();
   input += synapse0x1bab160();
   input += synapse0x1bab1a0();
   input += synapse0x1ba3360();
   input += synapse0x1ba33a0();
   input += synapse0x1ba33e0();
   input += synapse0x1ba3420();
   input += synapse0x1ba3460();
   input += synapse0x1ba34a0();
   input += synapse0x1ba34e0();
   input += synapse0x1baadf0();
   input += synapse0x1baae30();
   input += synapse0x1ba3630();
   input += synapse0x1ba3670();
   input += synapse0x1ba36b0();
   input += synapse0x1ba36f0();
   input += synapse0x1ba3730();
   input += synapse0x1ba3770();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1baac60() {
   double input = input0x1baac60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba37b0() {
   double input = 0.453766;
   input += synapse0x1ba3af0();
   input += synapse0x1ba3b30();
   input += synapse0x1ba3b70();
   input += synapse0x1ba3bb0();
   input += synapse0x1ba3bf0();
   input += synapse0x1ba3c30();
   input += synapse0x1ba3c70();
   input += synapse0x1ba3cb0();
   input += synapse0x1ba3cf0();
   input += synapse0x1ba3d30();
   input += synapse0x1ba3d70();
   input += synapse0x1ba3db0();
   input += synapse0x1ba3df0();
   input += synapse0x1ba3e30();
   input += synapse0x1ba3e70();
   input += synapse0x1ba3eb0();
   input += synapse0x1ba3940();
   input += synapse0x1ba3980();
   input += synapse0x1ba4000();
   input += synapse0x1ba4040();
   input += synapse0x1ba4080();
   input += synapse0x1ba40c0();
   input += synapse0x1ba4100();
   input += synapse0x1ba4140();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba37b0() {
   double input = input0x1ba37b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba4180() {
   double input = -2.97974;
   input += synapse0x1ba4310();
   input += synapse0x1bad3a0();
   input += synapse0x1bad3e0();
   input += synapse0x1bad420();
   input += synapse0x1bad460();
   input += synapse0x1bad4a0();
   input += synapse0x1bad4e0();
   input += synapse0x1bad520();
   input += synapse0x1bad560();
   input += synapse0x1bad5a0();
   input += synapse0x1bad5e0();
   input += synapse0x1bad620();
   input += synapse0x1bad660();
   input += synapse0x1bad6a0();
   input += synapse0x1bad6e0();
   input += synapse0x1bad720();
   input += synapse0x1bad1f0();
   input += synapse0x1bad230();
   input += synapse0x1bad870();
   input += synapse0x1bad8b0();
   input += synapse0x1bad8f0();
   input += synapse0x1bad930();
   input += synapse0x1bad970();
   input += synapse0x1bad9b0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba4180() {
   double input = input0x1ba4180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bad9f0() {
   double input = 0.687571;
   input += synapse0x1badd30();
   input += synapse0x1badd70();
   input += synapse0x1baddb0();
   input += synapse0x1baddf0();
   input += synapse0x1bade30();
   input += synapse0x1bade70();
   input += synapse0x1badeb0();
   input += synapse0x1badef0();
   input += synapse0x1badf30();
   input += synapse0x1badf70();
   input += synapse0x1badfb0();
   input += synapse0x1badff0();
   input += synapse0x1bae030();
   input += synapse0x1bae070();
   input += synapse0x1bae0b0();
   input += synapse0x1bae0f0();
   input += synapse0x1badb80();
   input += synapse0x1badbc0();
   input += synapse0x1bae240();
   input += synapse0x1bae280();
   input += synapse0x1bae2c0();
   input += synapse0x1bae300();
   input += synapse0x1bae340();
   input += synapse0x1bae380();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bad9f0() {
   double input = input0x1bad9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bae3c0() {
   double input = 2.4823;
   input += synapse0x1bae700();
   input += synapse0x1bae740();
   input += synapse0x1bae780();
   input += synapse0x1bae7c0();
   input += synapse0x1bae800();
   input += synapse0x1bae840();
   input += synapse0x1bae880();
   input += synapse0x1bae8c0();
   input += synapse0x1bae900();
   input += synapse0x1bae940();
   input += synapse0x1bae980();
   input += synapse0x1bae9c0();
   input += synapse0x1baea00();
   input += synapse0x1baea40();
   input += synapse0x1baea80();
   input += synapse0x1baeac0();
   input += synapse0x1bae550();
   input += synapse0x1bae590();
   input += synapse0x1baec10();
   input += synapse0x1baec50();
   input += synapse0x1baec90();
   input += synapse0x1baecd0();
   input += synapse0x1baed10();
   input += synapse0x1baed50();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bae3c0() {
   double input = input0x1bae3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1baed90() {
   double input = -15.1662;
   input += synapse0x1baf0d0();
   input += synapse0x1baf110();
   input += synapse0x1baf150();
   input += synapse0x1baf190();
   input += synapse0x1baf1d0();
   input += synapse0x1baf210();
   input += synapse0x1baf250();
   input += synapse0x1baf290();
   input += synapse0x1baf2d0();
   input += synapse0x1baf310();
   input += synapse0x1baf350();
   input += synapse0x1baf390();
   input += synapse0x1baf3d0();
   input += synapse0x1baf410();
   input += synapse0x1baf450();
   input += synapse0x1baf490();
   input += synapse0x1baef20();
   input += synapse0x1baef60();
   input += synapse0x1baf5e0();
   input += synapse0x1baf620();
   input += synapse0x1baf660();
   input += synapse0x1baf6a0();
   input += synapse0x1baf6e0();
   input += synapse0x1baf720();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1baed90() {
   double input = input0x1baed90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1baf760() {
   double input = -0.847613;
   input += synapse0x1bafaa0();
   input += synapse0x1bafae0();
   input += synapse0x1bafb20();
   input += synapse0x1bafb60();
   input += synapse0x1bafba0();
   input += synapse0x1bafbe0();
   input += synapse0x1bafc20();
   input += synapse0x1bafc60();
   input += synapse0x1bafca0();
   input += synapse0x1bafce0();
   input += synapse0x1bafd20();
   input += synapse0x1bafd60();
   input += synapse0x1bafda0();
   input += synapse0x1bafde0();
   input += synapse0x1bafe20();
   input += synapse0x1bafe60();
   input += synapse0x1baf8f0();
   input += synapse0x1baf930();
   input += synapse0x1baffb0();
   input += synapse0x1bafff0();
   input += synapse0x1bb0030();
   input += synapse0x1bb0070();
   input += synapse0x1bb00b0();
   input += synapse0x1bb00f0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1baf760() {
   double input = input0x1baf760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb0130() {
   double input = 0.441523;
   input += synapse0x1bb0470();
   input += synapse0x1bb04b0();
   input += synapse0x1bb04f0();
   input += synapse0x1bb0530();
   input += synapse0x1bb0570();
   input += synapse0x1bb05b0();
   input += synapse0x1bb05f0();
   input += synapse0x1bb0630();
   input += synapse0x1bb0670();
   input += synapse0x1bb06b0();
   input += synapse0x1bb06f0();
   input += synapse0x1bb0730();
   input += synapse0x1bb0770();
   input += synapse0x1bb07b0();
   input += synapse0x1bb07f0();
   input += synapse0x1bb0830();
   input += synapse0x1bb02c0();
   input += synapse0x1bb0300();
   input += synapse0x1bb0980();
   input += synapse0x1bb09c0();
   input += synapse0x1bb0a00();
   input += synapse0x1bb0a40();
   input += synapse0x1bb0a80();
   input += synapse0x1bb0ac0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb0130() {
   double input = input0x1bb0130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb0b00() {
   double input = 0.189757;
   input += synapse0x1bb0e40();
   input += synapse0x1bb0e80();
   input += synapse0x1bb0ec0();
   input += synapse0x1bb0f00();
   input += synapse0x1bb0f40();
   input += synapse0x1bb0f80();
   input += synapse0x1bb0fc0();
   input += synapse0x1bb1000();
   input += synapse0x1bb1040();
   input += synapse0x1bb1080();
   input += synapse0x1bb10c0();
   input += synapse0x1bb1100();
   input += synapse0x1bb1140();
   input += synapse0x1bb1180();
   input += synapse0x1bb11c0();
   input += synapse0x1bb1200();
   input += synapse0x1bb0c90();
   input += synapse0x1bb0cd0();
   input += synapse0x1bb1350();
   input += synapse0x1bb1390();
   input += synapse0x1bb13d0();
   input += synapse0x1bb1410();
   input += synapse0x1bb1450();
   input += synapse0x1bb1490();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb0b00() {
   double input = input0x1bb0b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb14d0() {
   double input = 0.286519;
   input += synapse0x1bb1810();
   input += synapse0x1bb1850();
   input += synapse0x1bb1890();
   input += synapse0x1bb18d0();
   input += synapse0x1bb1910();
   input += synapse0x1bb1950();
   input += synapse0x1bb1990();
   input += synapse0x1bb19d0();
   input += synapse0x1bb1a10();
   input += synapse0x1bb1a50();
   input += synapse0x1bb1a90();
   input += synapse0x1bb1ad0();
   input += synapse0x1bb1b10();
   input += synapse0x1bb1b50();
   input += synapse0x1bb1b90();
   input += synapse0x1bb1bd0();
   input += synapse0x1bb1660();
   input += synapse0x1bb16a0();
   input += synapse0x1bb1d20();
   input += synapse0x1bb1d60();
   input += synapse0x1bb1da0();
   input += synapse0x1bb1de0();
   input += synapse0x1bb1e20();
   input += synapse0x1bb1e60();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb14d0() {
   double input = input0x1bb14d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb1ea0() {
   double input = 1.6639;
   input += synapse0x1bb21e0();
   input += synapse0x1ba67b0();
   input += synapse0x1ba67f0();
   input += synapse0x1ba6830();
   input += synapse0x1ba6a80();
   input += synapse0x1ba6ac0();
   input += synapse0x1ba6b00();
   input += synapse0x1ba6d50();
   input += synapse0x1ba6d90();
   input += synapse0x1ba6fe0();
   input += synapse0x1ba7020();
   input += synapse0x1ba7060();
   input += synapse0x1ba72b0();
   input += synapse0x1ba72f0();
   input += synapse0x1ba7540();
   input += synapse0x1ba7580();
   input += synapse0x1bb2030();
   input += synapse0x1bb2070();
   input += synapse0x1ba76d0();
   input += synapse0x1ba7be0();
   input += synapse0x1ba7c20();
   input += synapse0x1ba7c60();
   input += synapse0x1ba7eb0();
   input += synapse0x1ba7ef0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb1ea0() {
   double input = input0x1bb1ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1ba7f30() {
   double input = 0.81381;
   input += synapse0x1ba77a0();
   input += synapse0x1ba77e0();
   input += synapse0x1ba7820();
   input += synapse0x1ba7860();
   input += synapse0x1ba81e0();
   input += synapse0x1bb4530();
   input += synapse0x1bb4570();
   input += synapse0x1bb45b0();
   input += synapse0x1bb45f0();
   input += synapse0x1bb4630();
   input += synapse0x1bb4670();
   input += synapse0x1bb46b0();
   input += synapse0x1bb46f0();
   input += synapse0x1bb4730();
   input += synapse0x1bb4770();
   input += synapse0x1bb47b0();
   input += synapse0x1ba80c0();
   input += synapse0x1ba8100();
   input += synapse0x1bb4900();
   input += synapse0x1bb4940();
   input += synapse0x1bb4980();
   input += synapse0x1bb49c0();
   input += synapse0x1bb4a00();
   input += synapse0x1bb4a40();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1ba7f30() {
   double input = input0x1ba7f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb4a80() {
   double input = 0.0618255;
   input += synapse0x1bb4dc0();
   input += synapse0x1bb4e00();
   input += synapse0x1bb4e40();
   input += synapse0x1bb4e80();
   input += synapse0x1bb4ec0();
   input += synapse0x1bb4f00();
   input += synapse0x1bb4f40();
   input += synapse0x1bb4f80();
   input += synapse0x1bb4fc0();
   input += synapse0x1bb5000();
   input += synapse0x1bb5040();
   input += synapse0x1bb5080();
   input += synapse0x1bb50c0();
   input += synapse0x1bb5100();
   input += synapse0x1bb5140();
   input += synapse0x1bb5180();
   input += synapse0x1bb4c10();
   input += synapse0x1bb4c50();
   input += synapse0x1bb52d0();
   input += synapse0x1bb5310();
   input += synapse0x1bb5350();
   input += synapse0x1bb5390();
   input += synapse0x1bb53d0();
   input += synapse0x1bb5410();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb4a80() {
   double input = input0x1bb4a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb5450() {
   double input = 0.507574;
   input += synapse0x1bb5790();
   input += synapse0x1bb57d0();
   input += synapse0x1bb5810();
   input += synapse0x1bb5850();
   input += synapse0x1bb5890();
   input += synapse0x1bb58d0();
   input += synapse0x1bb5910();
   input += synapse0x1bb5950();
   input += synapse0x1bb5990();
   input += synapse0x1bb59d0();
   input += synapse0x1bb5a10();
   input += synapse0x1bb5a50();
   input += synapse0x1bb5a90();
   input += synapse0x1bb5ad0();
   input += synapse0x1bb5b10();
   input += synapse0x1bb5b50();
   input += synapse0x1bb55e0();
   input += synapse0x1bb5620();
   input += synapse0x1bb5ca0();
   input += synapse0x1bb5ce0();
   input += synapse0x1bb5d20();
   input += synapse0x1bb5d60();
   input += synapse0x1bb5da0();
   input += synapse0x1bb5de0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb5450() {
   double input = input0x1bb5450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb5e20() {
   double input = 0.55342;
   input += synapse0x1bb6160();
   input += synapse0x1bb61a0();
   input += synapse0x1bb61e0();
   input += synapse0x1bb6220();
   input += synapse0x1bb6260();
   input += synapse0x1bb62a0();
   input += synapse0x1bb62e0();
   input += synapse0x1bb6320();
   input += synapse0x1bb6360();
   input += synapse0x1bb63a0();
   input += synapse0x1bb63e0();
   input += synapse0x1bb6420();
   input += synapse0x1bb6460();
   input += synapse0x1bb64a0();
   input += synapse0x1bb64e0();
   input += synapse0x1bb6520();
   input += synapse0x1bb5fb0();
   input += synapse0x1bb5ff0();
   input += synapse0x1bb6670();
   input += synapse0x1bb66b0();
   input += synapse0x1bb66f0();
   input += synapse0x1bb6730();
   input += synapse0x1bb6770();
   input += synapse0x1bb67b0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb5e20() {
   double input = input0x1bb5e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb67f0() {
   double input = -0.638193;
   input += synapse0x1bb6b30();
   input += synapse0x1bb6b70();
   input += synapse0x1bb6bb0();
   input += synapse0x1bb6bf0();
   input += synapse0x1bb6c30();
   input += synapse0x1bb6c70();
   input += synapse0x1bb6cb0();
   input += synapse0x1bb6cf0();
   input += synapse0x1bb6d30();
   input += synapse0x1bb6d70();
   input += synapse0x1bb6db0();
   input += synapse0x1bb6df0();
   input += synapse0x1bb6e30();
   input += synapse0x1bb6e70();
   input += synapse0x1bb6eb0();
   input += synapse0x1bb6ef0();
   input += synapse0x1bb6980();
   input += synapse0x1bb69c0();
   input += synapse0x1bb7040();
   input += synapse0x1bb7080();
   input += synapse0x1bb70c0();
   input += synapse0x1bb7100();
   input += synapse0x1bb7140();
   input += synapse0x1bb7180();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb67f0() {
   double input = input0x1bb67f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb71c0() {
   double input = -2.45116;
   input += synapse0x1bb7500();
   input += synapse0x1bb7540();
   input += synapse0x1bb7580();
   input += synapse0x1bb75c0();
   input += synapse0x1bb7600();
   input += synapse0x1bb7640();
   input += synapse0x1bb7680();
   input += synapse0x1bb76c0();
   input += synapse0x1bb7700();
   input += synapse0x1bb7740();
   input += synapse0x1bb7780();
   input += synapse0x1bb77c0();
   input += synapse0x1bb7800();
   input += synapse0x1bb7840();
   input += synapse0x1bb7880();
   input += synapse0x1bb78c0();
   input += synapse0x1bb7350();
   input += synapse0x1bb7390();
   input += synapse0x1bb7a10();
   input += synapse0x1bb7a50();
   input += synapse0x1bb7a90();
   input += synapse0x1bb7ad0();
   input += synapse0x1bb7b10();
   input += synapse0x1bb7b50();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb71c0() {
   double input = input0x1bb71c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb7b90() {
   double input = -0.874028;
   input += synapse0x1bb7ed0();
   input += synapse0x1bb7f10();
   input += synapse0x1bb7f50();
   input += synapse0x1bb7f90();
   input += synapse0x1bb7fd0();
   input += synapse0x1bb8010();
   input += synapse0x1bb8050();
   input += synapse0x1bb8090();
   input += synapse0x1bb80d0();
   input += synapse0x1bb8110();
   input += synapse0x1bb8150();
   input += synapse0x1bb8190();
   input += synapse0x1bb81d0();
   input += synapse0x1bb8210();
   input += synapse0x1bb8250();
   input += synapse0x1bb8290();
   input += synapse0x1bb7d20();
   input += synapse0x1bb7d60();
   input += synapse0x1bb83e0();
   input += synapse0x1bb8420();
   input += synapse0x1bb8460();
   input += synapse0x1bb84a0();
   input += synapse0x1bb84e0();
   input += synapse0x1bb8520();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb7b90() {
   double input = input0x1bb7b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb8560() {
   double input = -2.45537;
   input += synapse0x1bb88a0();
   input += synapse0x1bb88e0();
   input += synapse0x1bb8920();
   input += synapse0x1bb8960();
   input += synapse0x1bb89a0();
   input += synapse0x1bb89e0();
   input += synapse0x1bb8a20();
   input += synapse0x1bb8a60();
   input += synapse0x1bb8aa0();
   input += synapse0x1bb8ae0();
   input += synapse0x1bb8b20();
   input += synapse0x1bb8b60();
   input += synapse0x1bb8ba0();
   input += synapse0x1bb8be0();
   input += synapse0x1bb8c20();
   input += synapse0x1bb8c60();
   input += synapse0x1bb86f0();
   input += synapse0x1bb8730();
   input += synapse0x1bb8db0();
   input += synapse0x1bb8df0();
   input += synapse0x1bb8e30();
   input += synapse0x1bb8e70();
   input += synapse0x1bb8eb0();
   input += synapse0x1bb8ef0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb8560() {
   double input = input0x1bb8560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb8f30() {
   double input = 0.264442;
   input += synapse0x1ba19a0();
   input += synapse0x1ba19e0();
   input += synapse0x1ba1a20();
   input += synapse0x1ba1a60();
   input += synapse0x1ba1aa0();
   input += synapse0x1ba1ae0();
   input += synapse0x1ba1b20();
   input += synapse0x1ba1b60();
   input += synapse0x1bb9680();
   input += synapse0x1bb96c0();
   input += synapse0x1bb9700();
   input += synapse0x1bb9740();
   input += synapse0x1bb9780();
   input += synapse0x1bb97c0();
   input += synapse0x1bb9800();
   input += synapse0x1bb9840();
   input += synapse0x1bb90c0();
   input += synapse0x1bb9100();
   input += synapse0x1bb9990();
   input += synapse0x1bb99d0();
   input += synapse0x1bb9a10();
   input += synapse0x1bb9a50();
   input += synapse0x1bb9a90();
   input += synapse0x1bb9ad0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb8f30() {
   double input = input0x1bb8f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bb9b10() {
   double input = 0.395072;
   input += synapse0x1bb9e50();
   input += synapse0x1bb9e90();
   input += synapse0x1bb9ed0();
   input += synapse0x1bb9f10();
   input += synapse0x1bb9f50();
   input += synapse0x1bb9f90();
   input += synapse0x1bb9fd0();
   input += synapse0x1bba010();
   input += synapse0x1bba050();
   input += synapse0x1bba090();
   input += synapse0x1bba0d0();
   input += synapse0x1bba110();
   input += synapse0x1bba150();
   input += synapse0x1bba190();
   input += synapse0x1bba1d0();
   input += synapse0x1bba210();
   input += synapse0x1bb9ca0();
   input += synapse0x1bb9ce0();
   input += synapse0x1bba360();
   input += synapse0x1bba3a0();
   input += synapse0x1bba3e0();
   input += synapse0x1bba420();
   input += synapse0x1bba460();
   input += synapse0x1bba4a0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bb9b10() {
   double input = input0x1bb9b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bba4e0() {
   double input = 0.0716713;
   input += synapse0x1bba820();
   input += synapse0x1bba860();
   input += synapse0x1bba8a0();
   input += synapse0x1bba8e0();
   input += synapse0x1bba920();
   input += synapse0x1bba960();
   input += synapse0x1bba9a0();
   input += synapse0x1bba9e0();
   input += synapse0x1bbaa20();
   input += synapse0x1bbaa60();
   input += synapse0x1bbaaa0();
   input += synapse0x1bbaae0();
   input += synapse0x1bbab20();
   input += synapse0x1bbab60();
   input += synapse0x1bbaba0();
   input += synapse0x1bbabe0();
   input += synapse0x1bba670();
   input += synapse0x1bba6b0();
   input += synapse0x1bab1e0();
   input += synapse0x1bab220();
   input += synapse0x1bab260();
   input += synapse0x1bab2a0();
   input += synapse0x1bab2e0();
   input += synapse0x1bab320();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bba4e0() {
   double input = input0x1bba4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bab360() {
   double input = -5.64359;
   input += synapse0x1bab6a0();
   input += synapse0x1bab6e0();
   input += synapse0x1bab720();
   input += synapse0x1bab760();
   input += synapse0x1bab7a0();
   input += synapse0x1bab7e0();
   input += synapse0x1bab820();
   input += synapse0x1bab860();
   input += synapse0x1bab8a0();
   input += synapse0x1bab8e0();
   input += synapse0x1bab920();
   input += synapse0x1bab960();
   input += synapse0x1bab9a0();
   input += synapse0x1bab9e0();
   input += synapse0x1baba20();
   input += synapse0x1baba60();
   input += synapse0x1bab4f0();
   input += synapse0x1bab530();
   input += synapse0x1babbb0();
   input += synapse0x1babbf0();
   input += synapse0x1babc30();
   input += synapse0x1babc70();
   input += synapse0x1babcb0();
   input += synapse0x1babcf0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bab360() {
   double input = input0x1bab360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1babd30() {
   double input = 0.425374;
   input += synapse0x1bac070();
   input += synapse0x1bac0b0();
   input += synapse0x1bac0f0();
   input += synapse0x1bac130();
   input += synapse0x1bac170();
   input += synapse0x1bac1b0();
   input += synapse0x1bac1f0();
   input += synapse0x1bac230();
   input += synapse0x1bac270();
   input += synapse0x1bac2b0();
   input += synapse0x1bac2f0();
   input += synapse0x1bac330();
   input += synapse0x1bac370();
   input += synapse0x1bac3b0();
   input += synapse0x1bac3f0();
   input += synapse0x1bac430();
   input += synapse0x1babec0();
   input += synapse0x1babf00();
   input += synapse0x1bac580();
   input += synapse0x1bac5c0();
   input += synapse0x1bac600();
   input += synapse0x1bac640();
   input += synapse0x1bac680();
   input += synapse0x1bac6c0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1babd30() {
   double input = input0x1babd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bac700() {
   double input = -0.949282;
   input += synapse0x1baca40();
   input += synapse0x1baca80();
   input += synapse0x1bacac0();
   input += synapse0x1bacb00();
   input += synapse0x1bacb40();
   input += synapse0x1bacb80();
   input += synapse0x1bacbc0();
   input += synapse0x1bacc00();
   input += synapse0x1bacc40();
   input += synapse0x1bacc80();
   input += synapse0x1baccc0();
   input += synapse0x1bacd00();
   input += synapse0x1bacd40();
   input += synapse0x1bacd80();
   input += synapse0x1bacdc0();
   input += synapse0x1bace00();
   input += synapse0x1bac890();
   input += synapse0x1bac8d0();
   input += synapse0x1bacf50();
   input += synapse0x1bacf90();
   input += synapse0x1bacfd0();
   input += synapse0x1bad010();
   input += synapse0x1bad050();
   input += synapse0x1bad090();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bac700() {
   double input = input0x1bac700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bbed40() {
   double input = 0.737677;
   input += synapse0x1bbef60();
   input += synapse0x1bbefa0();
   input += synapse0x1bbefe0();
   input += synapse0x1bbf020();
   input += synapse0x1bbf060();
   input += synapse0x1bbf0a0();
   input += synapse0x1bbf0e0();
   input += synapse0x1bbf120();
   input += synapse0x1bbf160();
   input += synapse0x1bbf1a0();
   input += synapse0x1bbf1e0();
   input += synapse0x1bbf220();
   input += synapse0x1bbf260();
   input += synapse0x1bbf2a0();
   input += synapse0x1bbf2e0();
   input += synapse0x1bbf320();
   input += synapse0x1bad0d0();
   input += synapse0x1bad110();
   input += synapse0x1bbf470();
   input += synapse0x1bbf4b0();
   input += synapse0x1bbf4f0();
   input += synapse0x1bbf530();
   input += synapse0x1bbf570();
   input += synapse0x1bbf5b0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bbed40() {
   double input = input0x1bbed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bbf5f0() {
   double input = 0.109157;
   input += synapse0x1bbf930();
   input += synapse0x1bbf970();
   input += synapse0x1bbf9b0();
   input += synapse0x1bbf9f0();
   input += synapse0x1bbfa30();
   input += synapse0x1bbfa70();
   input += synapse0x1bbfab0();
   input += synapse0x1bbfaf0();
   input += synapse0x1bbfb30();
   input += synapse0x1bbfb70();
   input += synapse0x1bbfbb0();
   input += synapse0x1bbfbf0();
   input += synapse0x1bbfc30();
   input += synapse0x1bbfc70();
   input += synapse0x1bbfcb0();
   input += synapse0x1bbfcf0();
   input += synapse0x1bbf780();
   input += synapse0x1bbf7c0();
   input += synapse0x1bbfe40();
   input += synapse0x1bbfe80();
   input += synapse0x1bbfec0();
   input += synapse0x1bbff00();
   input += synapse0x1bbff40();
   input += synapse0x1bbff80();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bbf5f0() {
   double input = input0x1bbf5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bbffc0() {
   double input = -0.604165;
   input += synapse0x1bc0300();
   input += synapse0x1bc0340();
   input += synapse0x1bc0380();
   input += synapse0x1bc03c0();
   input += synapse0x1bc0400();
   input += synapse0x1bc0440();
   input += synapse0x1bc0480();
   input += synapse0x1bc04c0();
   input += synapse0x1bc0500();
   input += synapse0x1bc0540();
   input += synapse0x1bc0580();
   input += synapse0x1bc05c0();
   input += synapse0x1bc0600();
   input += synapse0x1bc0640();
   input += synapse0x1bc0680();
   input += synapse0x1bc06c0();
   input += synapse0x1bc0150();
   input += synapse0x1bc0190();
   input += synapse0x1bc0810();
   input += synapse0x1bc0850();
   input += synapse0x1bc0890();
   input += synapse0x1bc08d0();
   input += synapse0x1bc0910();
   input += synapse0x1bc0950();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bbffc0() {
   double input = input0x1bbffc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bc0990() {
   double input = 0.0434831;
   input += synapse0x1bc0cd0();
   input += synapse0x1bc0d10();
   input += synapse0x1bc0d50();
   input += synapse0x1bc0d90();
   input += synapse0x1bc0dd0();
   input += synapse0x1bc0e10();
   input += synapse0x1bc0e50();
   input += synapse0x1bc0e90();
   input += synapse0x1bc0ed0();
   input += synapse0x1bc0f10();
   input += synapse0x1bc0f50();
   input += synapse0x1bc0f90();
   input += synapse0x1bc0fd0();
   input += synapse0x1bc1010();
   input += synapse0x1bc1050();
   input += synapse0x1bc1090();
   input += synapse0x1bc0b20();
   input += synapse0x1bc0b60();
   input += synapse0x1bc11e0();
   input += synapse0x1bc1220();
   input += synapse0x1bc1260();
   input += synapse0x1bc12a0();
   input += synapse0x1bc12e0();
   input += synapse0x1bc1320();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bc0990() {
   double input = input0x1bc0990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bc7b90() {
   double input = 0.314133;
   input += synapse0x1b9c770();
   input += synapse0x1b9c7b0();
   input += synapse0x1b9dcd0();
   input += synapse0x1b9dd10();
   input += synapse0x1b9f7a0();
   input += synapse0x1b9f7e0();
   input += synapse0x1ba0570();
   input += synapse0x1ba05b0();
   input += synapse0x1ba0f40();
   input += synapse0x1ba0f80();
   input += synapse0x1ba1910();
   input += synapse0x1ba1950();
   input += synapse0x1ba23f0();
   input += synapse0x1ba2430();
   input += synapse0x1ba2dc0();
   input += synapse0x1ba2e00();
   input += synapse0x1b9fea0();
   input += synapse0x1b9fee0();
   input += synapse0x1ba4970();
   input += synapse0x1ba49b0();
   input += synapse0x1ba5340();
   input += synapse0x1ba5380();
   input += synapse0x1ba5d10();
   input += synapse0x1ba5d50();
   input += synapse0x1ba66e0();
   input += synapse0x1ba6720();
   input += synapse0x1b99770();
   input += synapse0x1b997b0();
   input += synapse0x1ba87d0();
   input += synapse0x1ba8810();
   input += synapse0x1ba91a0();
   input += synapse0x1ba91e0();
   input += synapse0x1ba9b70();
   input += synapse0x1ba9bb0();
   input += synapse0x1baa540();
   input += synapse0x1baa580();
   input += synapse0x1baaf10();
   input += synapse0x1baaf50();
   input += synapse0x1ba3a60();
   input += synapse0x1ba3aa0();
   input += synapse0x1bad310();
   input += synapse0x1bad350();
   input += synapse0x1badca0();
   input += synapse0x1badce0();
   input += synapse0x1bae670();
   input += synapse0x1bae6b0();
   input += synapse0x1baf040();
   input += synapse0x1baf080();
   input += synapse0x1bafa10();
   input += synapse0x1bafa50();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bc7b90() {
   double input = input0x1bc7b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bc7f30() {
   double input = 0.334361;
   input += synapse0x1bb2150();
   input += synapse0x1bb2190();
   input += synapse0x1ba7710();
   input += synapse0x1ba7750();
   input += synapse0x1bb4d30();
   input += synapse0x1bb4d70();
   input += synapse0x1bb5700();
   input += synapse0x1bb5740();
   input += synapse0x1bb60d0();
   input += synapse0x1bb6110();
   input += synapse0x1bb6aa0();
   input += synapse0x1bb6ae0();
   input += synapse0x1bb7470();
   input += synapse0x1bb74b0();
   input += synapse0x1bb7e40();
   input += synapse0x1bb7e80();
   input += synapse0x1bb8810();
   input += synapse0x1bb8850();
   input += synapse0x1bb91e0();
   input += synapse0x1bb9220();
   input += synapse0x1bb9dc0();
   input += synapse0x1bb9e00();
   input += synapse0x1bba790();
   input += synapse0x1bba7d0();
   input += synapse0x1bab610();
   input += synapse0x1bab650();
   input += synapse0x1babfe0();
   input += synapse0x1bac020();
   input += synapse0x1bac9b0();
   input += synapse0x1bac9f0();
   input += synapse0x1bbeed0();
   input += synapse0x1bbef10();
   input += synapse0x1bbf8a0();
   input += synapse0x1bbf8e0();
   input += synapse0x1bc0270();
   input += synapse0x1bc02b0();
   input += synapse0x1bc0c40();
   input += synapse0x1bc0c80();
   input += synapse0x1b9bbd0();
   input += synapse0x1b9bc10();
   input += synapse0x1bb03e0();
   input += synapse0x1bb0420();
   input += synapse0x1bc1360();
   input += synapse0x1bc13a0();
   input += synapse0x1bc13e0();
   input += synapse0x1bc1420();
   input += synapse0x1bc82d0();
   input += synapse0x1bc8310();
   input += synapse0x1bc8350();
   input += synapse0x1bc8390();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bc7f30() {
   double input = input0x1bc7f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bc83d0() {
   double input = -3.48226;
   input += synapse0x1bc8710();
   input += synapse0x1bc8750();
   input += synapse0x1bc8790();
   input += synapse0x1bc87d0();
   input += synapse0x1bc8810();
   input += synapse0x1bc8850();
   input += synapse0x1bc8890();
   input += synapse0x1bc88d0();
   input += synapse0x1bc8910();
   input += synapse0x1bc8950();
   input += synapse0x1bc8990();
   input += synapse0x1bc89d0();
   input += synapse0x1bc8a10();
   input += synapse0x1bc8a50();
   input += synapse0x1bc8a90();
   input += synapse0x1bc8ad0();
   input += synapse0x1bc8560();
   input += synapse0x1bc85a0();
   input += synapse0x1bc8c20();
   input += synapse0x1bc8c60();
   input += synapse0x1bc8ca0();
   input += synapse0x1bc8ce0();
   input += synapse0x1bc8d20();
   input += synapse0x1bc8d60();
   input += synapse0x1bc8da0();
   input += synapse0x1bc8de0();
   input += synapse0x1bc8e20();
   input += synapse0x1bc8e60();
   input += synapse0x1bc8ea0();
   input += synapse0x1bc8ee0();
   input += synapse0x1bc8f20();
   input += synapse0x1bc8f60();
   input += synapse0x1bc8b10();
   input += synapse0x1bc8b50();
   input += synapse0x1bc8b90();
   input += synapse0x1bc8bd0();
   input += synapse0x1bc91b0();
   input += synapse0x1bc91f0();
   input += synapse0x1bc9230();
   input += synapse0x1bc9270();
   input += synapse0x1bc92b0();
   input += synapse0x1bc92f0();
   input += synapse0x1bc9330();
   input += synapse0x1bc9370();
   input += synapse0x1bc93b0();
   input += synapse0x1bc93f0();
   input += synapse0x1bc9430();
   input += synapse0x1bc9470();
   input += synapse0x1bc94b0();
   input += synapse0x1bc94f0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bc83d0() {
   double input = input0x1bc83d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bc9530() {
   double input = 0.669029;
   input += synapse0x1bc9870();
   input += synapse0x1bc98b0();
   input += synapse0x1bc98f0();
   input += synapse0x1bc9930();
   input += synapse0x1bc9970();
   input += synapse0x1bc99b0();
   input += synapse0x1bc99f0();
   input += synapse0x1bc9a30();
   input += synapse0x1bc9a70();
   input += synapse0x1bc9ab0();
   input += synapse0x1bc9af0();
   input += synapse0x1bc9b30();
   input += synapse0x1bc9b70();
   input += synapse0x1bc9bb0();
   input += synapse0x1bc9bf0();
   input += synapse0x1bc9c30();
   input += synapse0x1bc96c0();
   input += synapse0x1bc9700();
   input += synapse0x1bc9d80();
   input += synapse0x1bc9dc0();
   input += synapse0x1bc9e00();
   input += synapse0x1bc9e40();
   input += synapse0x1bc9e80();
   input += synapse0x1bc9ec0();
   input += synapse0x1bc9f00();
   input += synapse0x1bc9f40();
   input += synapse0x1bc9f80();
   input += synapse0x1bc9fc0();
   input += synapse0x1bca000();
   input += synapse0x1bca040();
   input += synapse0x1bca080();
   input += synapse0x1bca0c0();
   input += synapse0x1bc9c70();
   input += synapse0x1bc9cb0();
   input += synapse0x1bc9cf0();
   input += synapse0x1bc9d30();
   input += synapse0x1bca310();
   input += synapse0x1bca350();
   input += synapse0x1bca390();
   input += synapse0x1bca3d0();
   input += synapse0x1bca410();
   input += synapse0x1bca450();
   input += synapse0x1bca490();
   input += synapse0x1bca4d0();
   input += synapse0x1bca510();
   input += synapse0x1bca550();
   input += synapse0x1bca590();
   input += synapse0x1bca5d0();
   input += synapse0x1bca610();
   input += synapse0x1bca650();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bc9530() {
   double input = input0x1bc9530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bca690() {
   double input = -0.154211;
   input += synapse0x1bca9d0();
   input += synapse0x1bcaa10();
   input += synapse0x1bcaa50();
   input += synapse0x1bcaa90();
   input += synapse0x1bcaad0();
   input += synapse0x1bcab10();
   input += synapse0x1bcab50();
   input += synapse0x1bcab90();
   input += synapse0x1bcabd0();
   input += synapse0x1bcac10();
   input += synapse0x1bcac50();
   input += synapse0x1bcac90();
   input += synapse0x1bcacd0();
   input += synapse0x1bcad10();
   input += synapse0x1bcad50();
   input += synapse0x1bcad90();
   input += synapse0x1bca820();
   input += synapse0x1bca860();
   input += synapse0x1bcaee0();
   input += synapse0x1bcaf20();
   input += synapse0x1bcaf60();
   input += synapse0x1bcafa0();
   input += synapse0x1bcafe0();
   input += synapse0x1bcb020();
   input += synapse0x1bcb060();
   input += synapse0x1bcb0a0();
   input += synapse0x1bcb0e0();
   input += synapse0x1bcb120();
   input += synapse0x1bcb160();
   input += synapse0x1bcb1a0();
   input += synapse0x1bcb1e0();
   input += synapse0x1bcb220();
   input += synapse0x1bcadd0();
   input += synapse0x1bcae10();
   input += synapse0x1bcae50();
   input += synapse0x1bcae90();
   input += synapse0x1bcb470();
   input += synapse0x1bcb4b0();
   input += synapse0x1bcb4f0();
   input += synapse0x1bcb530();
   input += synapse0x1bcb570();
   input += synapse0x1bcb5b0();
   input += synapse0x1bcb5f0();
   input += synapse0x1bcb630();
   input += synapse0x1bcb670();
   input += synapse0x1bcb6b0();
   input += synapse0x1bcb6f0();
   input += synapse0x1bcb730();
   input += synapse0x1bcb770();
   input += synapse0x1bcb7b0();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bca690() {
   double input = input0x1bca690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::input0x1bcb7f0() {
   double input = 2.12895;
   input += synapse0x1bcba10();
   input += synapse0x1bcba50();
   input += synapse0x1bcba90();
   input += synapse0x1bcbad0();
   input += synapse0x1bcbb10();
   return input;
}

double NNfunction_ns_chiPlus2_uL::neuron0x1bcb7f0() {
   double input = input0x1bcb7f0();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bc60() {
   return (neuron0x1b96860()*-0.00400245);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bca0() {
   return (neuron0x1b96b10()*-0.0345953);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bce0() {
   return (neuron0x1b96e50()*-0.418643);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bd20() {
   return (neuron0x1b97190()*3.69489);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bd60() {
   return (neuron0x1b974d0()*-0.0281462);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bda0() {
   return (neuron0x1b97810()*0.0433343);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bde0() {
   return (neuron0x1b97b50()*0.0229765);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9be20() {
   return (neuron0x1b97e90()*0.00429191);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9be60() {
   return (neuron0x1b981d0()*-0.0267465);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bea0() {
   return (neuron0x1b98510()*-0.0148662);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bee0() {
   return (neuron0x1b98850()*-0.0357592);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bf20() {
   return (neuron0x1b98b90()*-0.993113);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bf60() {
   return (neuron0x1b98ed0()*0.0147367);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bfa0() {
   return (neuron0x1b99210()*-0.034034);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bfe0() {
   return (neuron0x1b99550()*0.0463904);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c020() {
   return (neuron0x1b99890()*0.0207906);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bab0() {
   return (neuron0x1b99bd0()*-0.0552508);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9baf0() {
   return (neuron0x1b9a130()*-0.0409473);
}

double NNfunction_ns_chiPlus2_uL::synapse0x19529c0() {
   return (neuron0x1b9a470()*-0.0272388);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1952a00() {
   return (neuron0x1b9a7b0()*0.0076456);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c060() {
   return (neuron0x1b9aaf0()*-0.0164107);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c0a0() {
   return (neuron0x1b9ae30()*-0.000514773);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c0e0() {
   return (neuron0x1b9b170()*0.00670649);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c120() {
   return (neuron0x1b9b4b0()*-0.00707706);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c4a0() {
   return (neuron0x1b96860()*-0.390611);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c4e0() {
   return (neuron0x1b96b10()*-0.261354);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c520() {
   return (neuron0x1b96e50()*-1.70346);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c560() {
   return (neuron0x1b97190()*-0.32089);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c5a0() {
   return (neuron0x1b974d0()*0.168784);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c5e0() {
   return (neuron0x1b97810()*-0.574867);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c620() {
   return (neuron0x1b97b50()*-0.242808);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c660() {
   return (neuron0x1b97e90()*0.223595);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c6a0() {
   return (neuron0x1b981d0()*-0.0866028);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1952810() {
   return (neuron0x1b98510()*0.105504);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1952850() {
   return (neuron0x1b98850()*-0.0986686);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1952890() {
   return (neuron0x1b98b90()*0.261592);
}

double NNfunction_ns_chiPlus2_uL::synapse0x19528d0() {
   return (neuron0x1b98ed0()*-0.237767);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c8f0() {
   return (neuron0x1b99210()*0.204907);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c930() {
   return (neuron0x1b99550()*-0.657745);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c970() {
   return (neuron0x1b99890()*0.0759086);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c2f0() {
   return (neuron0x1b99bd0()*0.189412);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c330() {
   return (neuron0x1b9a130()*0.0528437);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cac0() {
   return (neuron0x1b9a470()*-0.225948);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cb00() {
   return (neuron0x1b9a7b0()*0.368933);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cb40() {
   return (neuron0x1b9aaf0()*-0.086418);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cb80() {
   return (neuron0x1b9ae30()*0.561692);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cbc0() {
   return (neuron0x1b9b170()*-0.586077);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cc00() {
   return (neuron0x1b9b4b0()*0.0755352);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cf80() {
   return (neuron0x1b96860()*0.0436388);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cfc0() {
   return (neuron0x1b96b10()*-0.0480671);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d000() {
   return (neuron0x1b96e50()*-0.273735);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d040() {
   return (neuron0x1b97190()*0.43264);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d080() {
   return (neuron0x1b974d0()*-0.382729);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d0c0() {
   return (neuron0x1b97810()*0.628571);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d100() {
   return (neuron0x1b97b50()*-0.0535122);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d140() {
   return (neuron0x1b97e90()*0.320999);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d180() {
   return (neuron0x1b981d0()*0.169723);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d1c0() {
   return (neuron0x1b98510()*0.123234);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d200() {
   return (neuron0x1b98850()*0.30829);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d240() {
   return (neuron0x1b98b90()*0.152922);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d280() {
   return (neuron0x1b98ed0()*0.0860485);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d2c0() {
   return (neuron0x1b99210()*-0.0991312);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d300() {
   return (neuron0x1b99550()*-0.116357);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d340() {
   return (neuron0x1b99890()*0.0647741);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9cdd0() {
   return (neuron0x1b99bd0()*0.358054);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ce10() {
   return (neuron0x1b9a130()*0.110063);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960900() {
   return (neuron0x1b9a470()*0.377639);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960940() {
   return (neuron0x1b9a7b0()*-0.345789);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f270() {
   return (neuron0x1b9aaf0()*-0.568814);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f2b0() {
   return (neuron0x1b9ae30()*-0.21356);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b965a0() {
   return (neuron0x1b9b170()*-0.39592);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b965e0() {
   return (neuron0x1b9b4b0()*-0.339338);
}

double NNfunction_ns_chiPlus2_uL::synapse0x19611f0() {
   return (neuron0x1b96860()*0.179696);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c800() {
   return (neuron0x1b96b10()*0.0623249);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c840() {
   return (neuron0x1b96e50()*1.21416);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c880() {
   return (neuron0x1b97190()*-1.39082);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d490() {
   return (neuron0x1b974d0()*-0.0532324);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d4d0() {
   return (neuron0x1b97810()*-0.0558407);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d510() {
   return (neuron0x1b97b50()*-0.0394969);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d550() {
   return (neuron0x1b97e90()*0.00170178);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d590() {
   return (neuron0x1b981d0()*-0.118142);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d5d0() {
   return (neuron0x1b98510()*0.0733731);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d610() {
   return (neuron0x1b98850()*-0.0541726);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d650() {
   return (neuron0x1b98b90()*-0.425477);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d690() {
   return (neuron0x1b98ed0()*-0.0244287);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d6d0() {
   return (neuron0x1b99210()*0.0886016);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d710() {
   return (neuron0x1b99550()*-0.106632);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d750() {
   return (neuron0x1b99890()*0.141614);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b96620() {
   return (neuron0x1b99bd0()*-0.0750578);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b96660() {
   return (neuron0x1b9a130()*0.0560289);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d8a0() {
   return (neuron0x1b9a470()*0.0600337);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d8e0() {
   return (neuron0x1b9a7b0()*0.0234501);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d920() {
   return (neuron0x1b9aaf0()*-0.0104053);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d960() {
   return (neuron0x1b9ae30()*-0.000146521);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d9a0() {
   return (neuron0x1b9b170()*-0.0246803);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9d9e0() {
   return (neuron0x1b9b4b0()*0.145019);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dd60() {
   return (neuron0x1b96860()*-0.248585);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dda0() {
   return (neuron0x1b96b10()*0.32551);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dde0() {
   return (neuron0x1b96e50()*-0.649656);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9de20() {
   return (neuron0x1b97190()*0.382062);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9de60() {
   return (neuron0x1b974d0()*-0.127087);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dea0() {
   return (neuron0x1b97810()*-0.372328);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dee0() {
   return (neuron0x1b97b50()*0.0307894);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9df20() {
   return (neuron0x1b97e90()*-0.28449);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9df60() {
   return (neuron0x1b981d0()*0.196948);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dfa0() {
   return (neuron0x1b98510()*-0.612819);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dfe0() {
   return (neuron0x1b98850()*-0.744221);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e020() {
   return (neuron0x1b98b90()*0.412421);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e060() {
   return (neuron0x1b98ed0()*-0.0736921);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e0a0() {
   return (neuron0x1b99210()*-0.0129971);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e0e0() {
   return (neuron0x1b99550()*0.567094);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e120() {
   return (neuron0x1b99890()*0.258634);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9e270() {
   return (neuron0x1b99bd0()*-0.111827);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dbb0() {
   return (neuron0x1b9a130()*0.140712);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dbf0() {
   return (neuron0x1b9a470()*-0.14524);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f3b0() {
   return (neuron0x1b9a7b0()*0.0350637);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f3f0() {
   return (neuron0x1b9aaf0()*0.145764);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f430() {
   return (neuron0x1b9ae30()*0.485838);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f470() {
   return (neuron0x1b9b170()*-0.0126714);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f4b0() {
   return (neuron0x1b9b4b0()*-0.663362);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f830() {
   return (neuron0x1b96860()*-0.419568);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f870() {
   return (neuron0x1b96b10()*0.0107133);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f8b0() {
   return (neuron0x1b96e50()*-5.59614);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f8f0() {
   return (neuron0x1b97190()*0.041643);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f930() {
   return (neuron0x1b974d0()*-0.020481);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f970() {
   return (neuron0x1b97810()*-0.0159843);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f9b0() {
   return (neuron0x1b97b50()*0.0129351);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f9f0() {
   return (neuron0x1b97e90()*0.0148082);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fa30() {
   return (neuron0x1b981d0()*-0.00383629);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960c50() {
   return (neuron0x1b98510()*0.0115428);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960c90() {
   return (neuron0x1b98850()*-0.0118095);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960cd0() {
   return (neuron0x1b98b90()*-0.135789);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960d10() {
   return (neuron0x1b98ed0()*-0.030713);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960d50() {
   return (neuron0x1b99210()*-0.000283235);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960d90() {
   return (neuron0x1b99550()*0.0285267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960dd0() {
   return (neuron0x1b99890()*0.0196476);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f680() {
   return (neuron0x1b99bd0()*0.0478187);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f6c0() {
   return (neuron0x1b9a130()*-0.0205961);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960f20() {
   return (neuron0x1b9a470()*-0.0419758);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960f60() {
   return (neuron0x1b9a7b0()*0.0043475);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960fa0() {
   return (neuron0x1b9aaf0()*0.0226629);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1960fe0() {
   return (neuron0x1b9ae30()*-0.00136725);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1961020() {
   return (neuron0x1b9b170()*-0.00120845);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0280() {
   return (neuron0x1b9b4b0()*-2.63862);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0600() {
   return (neuron0x1b96860()*-0.00981146);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0640() {
   return (neuron0x1b96b10()*-4.16666e-05);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0680() {
   return (neuron0x1b96e50()*2.93347);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba06c0() {
   return (neuron0x1b97190()*-0.00624296);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0700() {
   return (neuron0x1b974d0()*0.00171093);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0740() {
   return (neuron0x1b97810()*0.0046232);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0780() {
   return (neuron0x1b97b50()*0.00515641);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba07c0() {
   return (neuron0x1b97e90()*0.00110877);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0800() {
   return (neuron0x1b981d0()*0.00267473);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0840() {
   return (neuron0x1b98510()*0.00274782);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0880() {
   return (neuron0x1b98850()*0.00515518);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba08c0() {
   return (neuron0x1b98b90()*-0.0758887);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0900() {
   return (neuron0x1b98ed0()*0.0103376);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0940() {
   return (neuron0x1b99210()*-0.00234654);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0980() {
   return (neuron0x1b99550()*0.0024991);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba09c0() {
   return (neuron0x1b99890()*0.00700203);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0450() {
   return (neuron0x1b99bd0()*0.0037762);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0490() {
   return (neuron0x1b9a130()*0.00249979);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0b10() {
   return (neuron0x1b9a470()*0.00091434);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0b50() {
   return (neuron0x1b9a7b0()*-0.00756633);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0b90() {
   return (neuron0x1b9aaf0()*-0.00272023);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0bd0() {
   return (neuron0x1b9ae30()*-0.00611891);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0c10() {
   return (neuron0x1b9b170()*-0.000484137);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0c50() {
   return (neuron0x1b9b4b0()*-1.79427);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0fd0() {
   return (neuron0x1b96860()*-0.130937);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1010() {
   return (neuron0x1b96b10()*-0.00109601);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1050() {
   return (neuron0x1b96e50()*3.22989);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1090() {
   return (neuron0x1b97190()*-0.00821573);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba10d0() {
   return (neuron0x1b974d0()*-0.0070671);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1110() {
   return (neuron0x1b97810()*0.00107647);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1150() {
   return (neuron0x1b97b50()*0.00428502);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1190() {
   return (neuron0x1b97e90()*0.00265015);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba11d0() {
   return (neuron0x1b981d0()*0.0033576);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1210() {
   return (neuron0x1b98510()*0.00525926);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1250() {
   return (neuron0x1b98850()*0.00797604);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1290() {
   return (neuron0x1b98b90()*-0.0587084);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba12d0() {
   return (neuron0x1b98ed0()*0.00972056);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1310() {
   return (neuron0x1b99210()*-0.00675083);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1350() {
   return (neuron0x1b99550()*-0.00155443);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1390() {
   return (neuron0x1b99890()*0.00866408);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0e20() {
   return (neuron0x1b99bd0()*0.0113408);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0e60() {
   return (neuron0x1b9a130()*-0.00142692);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba14e0() {
   return (neuron0x1b9a470()*-0.00268868);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1520() {
   return (neuron0x1b9a7b0()*-0.0137769);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1560() {
   return (neuron0x1b9aaf0()*0.00696737);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba15a0() {
   return (neuron0x1b9ae30()*-0.00601935);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba15e0() {
   return (neuron0x1b9b170()*-0.000144019);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1620() {
   return (neuron0x1b9b4b0()*-1.90817);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a020() {
   return (neuron0x1b96860()*0.171062);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a060() {
   return (neuron0x1b96b10()*0.261877);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a0a0() {
   return (neuron0x1b96e50()*-0.674186);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a0e0() {
   return (neuron0x1b97190()*0.0148445);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1bb0() {
   return (neuron0x1b974d0()*0.147429);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1bf0() {
   return (neuron0x1b97810()*0.210002);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1c30() {
   return (neuron0x1b97b50()*-0.241237);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1c70() {
   return (neuron0x1b97e90()*0.0805621);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1cb0() {
   return (neuron0x1b981d0()*-0.0915486);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1cf0() {
   return (neuron0x1b98510()*-0.201715);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1d30() {
   return (neuron0x1b98850()*-0.348613);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1d70() {
   return (neuron0x1b98b90()*1.22531);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1db0() {
   return (neuron0x1b98ed0()*-0.0973362);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1df0() {
   return (neuron0x1b99210()*-0.367477);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1e30() {
   return (neuron0x1b99550()*0.267708);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1e70() {
   return (neuron0x1b99890()*0.0323104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba17f0() {
   return (neuron0x1b99bd0()*-0.677644);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1830() {
   return (neuron0x1b9a130()*-0.0730148);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1fc0() {
   return (neuron0x1b9a470()*-0.229728);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2000() {
   return (neuron0x1b9a7b0()*0.0855796);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2040() {
   return (neuron0x1b9aaf0()*-0.306387);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2080() {
   return (neuron0x1b9ae30()*-0.313184);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba20c0() {
   return (neuron0x1b9b170()*0.338853);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2100() {
   return (neuron0x1b9b4b0()*0.117262);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2480() {
   return (neuron0x1b96860()*0.101787);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba24c0() {
   return (neuron0x1b96b10()*0.558327);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2500() {
   return (neuron0x1b96e50()*-0.781673);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2540() {
   return (neuron0x1b97190()*-0.126243);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2580() {
   return (neuron0x1b974d0()*0.311819);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba25c0() {
   return (neuron0x1b97810()*-0.228183);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2600() {
   return (neuron0x1b97b50()*0.323478);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2640() {
   return (neuron0x1b97e90()*-0.242305);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2680() {
   return (neuron0x1b981d0()*0.338898);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba26c0() {
   return (neuron0x1b98510()*-0.339142);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2700() {
   return (neuron0x1b98850()*0.349736);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2740() {
   return (neuron0x1b98b90()*-0.329181);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2780() {
   return (neuron0x1b98ed0()*0.0741804);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba27c0() {
   return (neuron0x1b99210()*-0.334443);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2800() {
   return (neuron0x1b99550()*0.242509);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2840() {
   return (neuron0x1b99890()*-0.294918);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba22d0() {
   return (neuron0x1b99bd0()*0.0840245);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2310() {
   return (neuron0x1b9a130()*-0.00368279);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2990() {
   return (neuron0x1b9a470()*0.0773096);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba29d0() {
   return (neuron0x1b9a7b0()*0.509818);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2a10() {
   return (neuron0x1b9aaf0()*0.178986);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2a50() {
   return (neuron0x1b9ae30()*-0.117405);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2a90() {
   return (neuron0x1b9b170()*-0.336508);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2ad0() {
   return (neuron0x1b9b4b0()*-0.828235);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2e50() {
   return (neuron0x1b96860()*-0.00627977);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2e90() {
   return (neuron0x1b96b10()*-0.210291);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2ed0() {
   return (neuron0x1b96e50()*0.0319073);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2f10() {
   return (neuron0x1b97190()*-0.0952947);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2f50() {
   return (neuron0x1b974d0()*-0.139576);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2f90() {
   return (neuron0x1b97810()*-0.872323);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2fd0() {
   return (neuron0x1b97b50()*0.0505979);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3010() {
   return (neuron0x1b97e90()*-0.628534);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3050() {
   return (neuron0x1b981d0()*0.121014);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3090() {
   return (neuron0x1b98510()*0.166952);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba30d0() {
   return (neuron0x1b98850()*0.0068924);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3110() {
   return (neuron0x1b98b90()*0.414384);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3150() {
   return (neuron0x1b98ed0()*0.373896);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3190() {
   return (neuron0x1b99210()*-0.0240315);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba31d0() {
   return (neuron0x1b99550()*0.641223);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3210() {
   return (neuron0x1b99890()*0.369382);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2ca0() {
   return (neuron0x1b99bd0()*0.108584);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2ce0() {
   return (neuron0x1b9a130()*0.164896);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fa70() {
   return (neuron0x1b9a470()*-0.442299);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fab0() {
   return (neuron0x1b9a7b0()*-0.258315);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9faf0() {
   return (neuron0x1b9aaf0()*0.055809);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fb30() {
   return (neuron0x1b9ae30()*-0.019082);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fb70() {
   return (neuron0x1b9b170()*-0.0456707);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fbb0() {
   return (neuron0x1b9b4b0()*0.205261);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ff30() {
   return (neuron0x1b96860()*-0.739103);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ff70() {
   return (neuron0x1b96b10()*0.141246);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ffb0() {
   return (neuron0x1b96e50()*-0.0646925);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fff0() {
   return (neuron0x1b97190()*0.36603);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0030() {
   return (neuron0x1b974d0()*0.428337);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0070() {
   return (neuron0x1b97810()*-0.114472);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba00b0() {
   return (neuron0x1b97b50()*-0.163759);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba00f0() {
   return (neuron0x1b97e90()*0.177843);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0130() {
   return (neuron0x1b981d0()*-0.0041026);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0170() {
   return (neuron0x1b98510()*-0.0893721);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba01b0() {
   return (neuron0x1b98850()*-0.125382);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba01f0() {
   return (neuron0x1b98b90()*0.302847);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0230() {
   return (neuron0x1b98ed0()*0.0753277);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4370() {
   return (neuron0x1b99210()*0.343083);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba43b0() {
   return (neuron0x1b99550()*0.0645572);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba43f0() {
   return (neuron0x1b99890()*-0.390929);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fd80() {
   return (neuron0x1b99bd0()*1.41441);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fdc0() {
   return (neuron0x1b9a130()*0.0703819);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4540() {
   return (neuron0x1b9a470()*-0.00748565);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4580() {
   return (neuron0x1b9a7b0()*-0.122852);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba45c0() {
   return (neuron0x1b9aaf0()*0.151931);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4600() {
   return (neuron0x1b9ae30()*0.0317381);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4640() {
   return (neuron0x1b9b170()*-0.00803099);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4680() {
   return (neuron0x1b9b4b0()*0.614896);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4a00() {
   return (neuron0x1b96860()*-0.805122);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4a40() {
   return (neuron0x1b96b10()*0.290655);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4a80() {
   return (neuron0x1b96e50()*0.605464);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4ac0() {
   return (neuron0x1b97190()*0.361478);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4b00() {
   return (neuron0x1b974d0()*0.130986);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4b40() {
   return (neuron0x1b97810()*0.0954887);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4b80() {
   return (neuron0x1b97b50()*0.0584746);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4bc0() {
   return (neuron0x1b97e90()*-0.292419);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4c00() {
   return (neuron0x1b981d0()*0.00759988);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4c40() {
   return (neuron0x1b98510()*-0.194049);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4c80() {
   return (neuron0x1b98850()*0.172891);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4cc0() {
   return (neuron0x1b98b90()*0.03888);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4d00() {
   return (neuron0x1b98ed0()*0.195325);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4d40() {
   return (neuron0x1b99210()*0.116401);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4d80() {
   return (neuron0x1b99550()*0.0349717);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4dc0() {
   return (neuron0x1b99890()*-0.144879);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4850() {
   return (neuron0x1b99bd0()*-0.178206);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4890() {
   return (neuron0x1b9a130()*0.129515);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4f10() {
   return (neuron0x1b9a470()*0.136496);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4f50() {
   return (neuron0x1b9a7b0()*-0.106996);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4f90() {
   return (neuron0x1b9aaf0()*-0.0451535);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4fd0() {
   return (neuron0x1b9ae30()*-0.0101621);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5010() {
   return (neuron0x1b9b170()*0.310598);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5050() {
   return (neuron0x1b9b4b0()*-0.277985);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba53d0() {
   return (neuron0x1b96860()*-0.0309831);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5410() {
   return (neuron0x1b96b10()*-0.107999);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5450() {
   return (neuron0x1b96e50()*-0.563315);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5490() {
   return (neuron0x1b97190()*-0.418864);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba54d0() {
   return (neuron0x1b974d0()*-0.0707102);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5510() {
   return (neuron0x1b97810()*0.517466);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5550() {
   return (neuron0x1b97b50()*0.182112);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5590() {
   return (neuron0x1b97e90()*0.359277);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba55d0() {
   return (neuron0x1b981d0()*-0.332179);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5610() {
   return (neuron0x1b98510()*0.0913163);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5650() {
   return (neuron0x1b98850()*0.372846);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5690() {
   return (neuron0x1b98b90()*0.185777);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba56d0() {
   return (neuron0x1b98ed0()*1.28832);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5710() {
   return (neuron0x1b99210()*0.0809021);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5750() {
   return (neuron0x1b99550()*0.0854153);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5790() {
   return (neuron0x1b99890()*0.406124);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5220() {
   return (neuron0x1b99bd0()*0.420739);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5260() {
   return (neuron0x1b9a130()*-0.0853384);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba58e0() {
   return (neuron0x1b9a470()*-0.260576);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5920() {
   return (neuron0x1b9a7b0()*1.02492);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5960() {
   return (neuron0x1b9aaf0()*-0.341234);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba59a0() {
   return (neuron0x1b9ae30()*-0.145984);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba59e0() {
   return (neuron0x1b9b170()*0.0879073);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5a20() {
   return (neuron0x1b9b4b0()*-0.319349);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5da0() {
   return (neuron0x1b96860()*-0.224217);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5de0() {
   return (neuron0x1b96b10()*-0.517351);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5e20() {
   return (neuron0x1b96e50()*0.14962);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5e60() {
   return (neuron0x1b97190()*0.395618);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5ea0() {
   return (neuron0x1b974d0()*0.503302);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5ee0() {
   return (neuron0x1b97810()*0.295178);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5f20() {
   return (neuron0x1b97b50()*-0.144716);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5f60() {
   return (neuron0x1b97e90()*0.309569);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5fa0() {
   return (neuron0x1b981d0()*0.193053);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5fe0() {
   return (neuron0x1b98510()*-0.112001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6020() {
   return (neuron0x1b98850()*0.385146);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6060() {
   return (neuron0x1b98b90()*-0.468257);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba60a0() {
   return (neuron0x1b98ed0()*0.260612);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba60e0() {
   return (neuron0x1b99210()*-0.177287);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6120() {
   return (neuron0x1b99550()*1.40097);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6160() {
   return (neuron0x1b99890()*0.800753);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5bf0() {
   return (neuron0x1b99bd0()*-0.292404);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5c30() {
   return (neuron0x1b9a130()*0.55546);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba62b0() {
   return (neuron0x1b9a470()*0.299578);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba62f0() {
   return (neuron0x1b9a7b0()*0.375098);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6330() {
   return (neuron0x1b9aaf0()*-0.08779);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6370() {
   return (neuron0x1b9ae30()*0.152086);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba63b0() {
   return (neuron0x1b9b170()*-0.254389);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba63f0() {
   return (neuron0x1b9b4b0()*0.0811079);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6770() {
   return (neuron0x1b96860()*-0.111919);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b969f0() {
   return (neuron0x1b96b10()*0.0731924);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b96a30() {
   return (neuron0x1b96e50()*0.823826);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b96d30() {
   return (neuron0x1b97190()*0.695244);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b96d70() {
   return (neuron0x1b974d0()*0.230913);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97070() {
   return (neuron0x1b97810()*0.808905);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b970b0() {
   return (neuron0x1b97b50()*-0.547506);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b973b0() {
   return (neuron0x1b97e90()*0.1317);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b973f0() {
   return (neuron0x1b981d0()*-0.193438);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b976f0() {
   return (neuron0x1b98510()*-0.0267207);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97730() {
   return (neuron0x1b98850()*0.141907);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97a30() {
   return (neuron0x1b98b90()*-0.741971);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97a70() {
   return (neuron0x1b98ed0()*-0.340028);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97d70() {
   return (neuron0x1b99210()*0.126259);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b97db0() {
   return (neuron0x1b99550()*0.0533106);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b980b0() {
   return (neuron0x1b99890()*-0.299596);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b980f0() {
   return (neuron0x1b99bd0()*-0.227871);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b983f0() {
   return (neuron0x1b9a130()*0.216268);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98430() {
   return (neuron0x1b9a470()*-0.12234);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98730() {
   return (neuron0x1b9a7b0()*0.101994);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98770() {
   return (neuron0x1b9aaf0()*0.056561);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98a70() {
   return (neuron0x1b9ae30()*0.159184);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98ab0() {
   return (neuron0x1b9b170()*0.223958);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98db0() {
   return (neuron0x1b9b4b0()*0.0128392);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b98df0() {
   return (neuron0x1b96860()*-0.544288);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99ab0() {
   return (neuron0x1b96b10()*0.547904);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99af0() {
   return (neuron0x1b96e50()*-0.453315);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba65c0() {
   return (neuron0x1b97190()*-0.275773);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6600() {
   return (neuron0x1b974d0()*-0.0559811);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99df0() {
   return (neuron0x1b97810()*0.327476);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99e30() {
   return (neuron0x1b97b50()*0.105869);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a350() {
   return (neuron0x1b97e90()*-0.504309);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a390() {
   return (neuron0x1b981d0()*0.56417);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a690() {
   return (neuron0x1b98510()*-0.379707);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a6d0() {
   return (neuron0x1b98850()*0.245385);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9a9d0() {
   return (neuron0x1b98b90()*-0.525495);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9aa10() {
   return (neuron0x1b98ed0()*0.0678018);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ad10() {
   return (neuron0x1b99210()*0.364456);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9ad50() {
   return (neuron0x1b99550()*0.175425);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b050() {
   return (neuron0x1b99890()*0.121105);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b090() {
   return (neuron0x1b99bd0()*-0.165991);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b390() {
   return (neuron0x1b9a130()*-0.307916);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b3d0() {
   return (neuron0x1b9a470()*-0.973309);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b6d0() {
   return (neuron0x1b9a7b0()*0.304996);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9b710() {
   return (neuron0x1b9aaf0()*0.31382);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b990f0() {
   return (neuron0x1b9ae30()*-0.139091);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99130() {
   return (neuron0x1b9b170()*-0.288448);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba84e0() {
   return (neuron0x1b9b4b0()*-1.39664);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8860() {
   return (neuron0x1b96860()*0.211962);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba88a0() {
   return (neuron0x1b96b10()*0.38242);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba88e0() {
   return (neuron0x1b96e50()*0.10928);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8920() {
   return (neuron0x1b97190()*-0.186118);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8960() {
   return (neuron0x1b974d0()*0.542079);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba89a0() {
   return (neuron0x1b97810()*0.570701);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba89e0() {
   return (neuron0x1b97b50()*-0.217935);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8a20() {
   return (neuron0x1b97e90()*0.530256);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8a60() {
   return (neuron0x1b981d0()*0.291892);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8aa0() {
   return (neuron0x1b98510()*0.285394);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8ae0() {
   return (neuron0x1b98850()*1.01359);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8b20() {
   return (neuron0x1b98b90()*-1.0615);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8b60() {
   return (neuron0x1b98ed0()*-0.219302);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8ba0() {
   return (neuron0x1b99210()*-0.345707);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8be0() {
   return (neuron0x1b99550()*0.214467);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8c20() {
   return (neuron0x1b99890()*0.478806);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba86b0() {
   return (neuron0x1b99bd0()*0.354557);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba86f0() {
   return (neuron0x1b9a130()*0.891258);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8d70() {
   return (neuron0x1b9a470()*0.340376);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8db0() {
   return (neuron0x1b9a7b0()*0.0899262);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8df0() {
   return (neuron0x1b9aaf0()*0.0616719);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8e30() {
   return (neuron0x1b9ae30()*0.330964);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8e70() {
   return (neuron0x1b9b170()*0.115214);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8eb0() {
   return (neuron0x1b9b4b0()*-0.0676187);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9230() {
   return (neuron0x1b96860()*0.0149803);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9270() {
   return (neuron0x1b96b10()*-0.000251682);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba92b0() {
   return (neuron0x1b96e50()*-0.220137);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba92f0() {
   return (neuron0x1b97190()*-0.834261);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9330() {
   return (neuron0x1b974d0()*0.0235465);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9370() {
   return (neuron0x1b97810()*0.0214236);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba93b0() {
   return (neuron0x1b97b50()*0.00686624);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba93f0() {
   return (neuron0x1b97e90()*0.00985727);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9430() {
   return (neuron0x1b981d0()*-0.0004524);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9470() {
   return (neuron0x1b98510()*-0.0189319);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba94b0() {
   return (neuron0x1b98850()*-0.0182658);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba94f0() {
   return (neuron0x1b98b90()*-0.447072);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9530() {
   return (neuron0x1b98ed0()*-0.000463882);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9570() {
   return (neuron0x1b99210()*-0.019186);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba95b0() {
   return (neuron0x1b99550()*0.0281256);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba95f0() {
   return (neuron0x1b99890()*0.010295);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9080() {
   return (neuron0x1b99bd0()*-0.0202001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba90c0() {
   return (neuron0x1b9a130()*0.00535669);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9740() {
   return (neuron0x1b9a470()*0.00327342);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9780() {
   return (neuron0x1b9a7b0()*0.00882088);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba97c0() {
   return (neuron0x1b9aaf0()*-0.000530343);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9800() {
   return (neuron0x1b9ae30()*-0.000536631);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9840() {
   return (neuron0x1b9b170()*0.00609753);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9880() {
   return (neuron0x1b9b4b0()*-0.0218602);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9c00() {
   return (neuron0x1b96860()*-0.907012);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9c40() {
   return (neuron0x1b96b10()*0.0157289);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9c80() {
   return (neuron0x1b96e50()*0.354977);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9cc0() {
   return (neuron0x1b97190()*0.0559816);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9d00() {
   return (neuron0x1b974d0()*-0.0886349);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9d40() {
   return (neuron0x1b97810()*0.0508046);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9d80() {
   return (neuron0x1b97b50()*0.0121329);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9dc0() {
   return (neuron0x1b97e90()*-0.031377);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9e00() {
   return (neuron0x1b981d0()*0.00728845);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9e40() {
   return (neuron0x1b98510()*0.0613373);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9e80() {
   return (neuron0x1b98850()*0.115726);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9ec0() {
   return (neuron0x1b98b90()*-0.185283);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9f00() {
   return (neuron0x1b98ed0()*0.0354958);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9f40() {
   return (neuron0x1b99210()*0.133871);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9f80() {
   return (neuron0x1b99550()*-0.0773644);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9fc0() {
   return (neuron0x1b99890()*-0.0365575);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9a50() {
   return (neuron0x1b99bd0()*0.0507597);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9a90() {
   return (neuron0x1b9a130()*0.0289176);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa110() {
   return (neuron0x1b9a470()*-0.00550587);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa150() {
   return (neuron0x1b9a7b0()*0.027496);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa190() {
   return (neuron0x1b9aaf0()*0.0444714);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa1d0() {
   return (neuron0x1b9ae30()*0.00526041);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa210() {
   return (neuron0x1b9b170()*0.0143748);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa250() {
   return (neuron0x1b9b4b0()*1.44841);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa5d0() {
   return (neuron0x1b96860()*-0.405826);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa610() {
   return (neuron0x1b96b10()*-0.0601457);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa650() {
   return (neuron0x1b96e50()*-0.862084);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa690() {
   return (neuron0x1b97190()*0.332237);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa6d0() {
   return (neuron0x1b974d0()*-0.350472);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa710() {
   return (neuron0x1b97810()*-0.615471);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa750() {
   return (neuron0x1b97b50()*-0.117512);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa790() {
   return (neuron0x1b97e90()*-0.315325);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa7d0() {
   return (neuron0x1b981d0()*-0.272292);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa810() {
   return (neuron0x1b98510()*-0.190562);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa850() {
   return (neuron0x1b98850()*-0.0991737);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa890() {
   return (neuron0x1b98b90()*-0.0317112);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa8d0() {
   return (neuron0x1b98ed0()*-0.385795);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa910() {
   return (neuron0x1b99210()*-0.135518);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa950() {
   return (neuron0x1b99550()*-0.0973516);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa990() {
   return (neuron0x1b99890()*-0.370782);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa420() {
   return (neuron0x1b99bd0()*-0.579726);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa460() {
   return (neuron0x1b9a130()*-0.395358);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baaae0() {
   return (neuron0x1b9a470()*-0.420278);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baab20() {
   return (neuron0x1b9a7b0()*-0.15354);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baab60() {
   return (neuron0x1b9aaf0()*0.198498);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baaba0() {
   return (neuron0x1b9ae30()*-0.111672);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baabe0() {
   return (neuron0x1b9b170()*0.279154);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baac20() {
   return (neuron0x1b9b4b0()*-0.275937);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baafa0() {
   return (neuron0x1b96860()*0.0475925);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baafe0() {
   return (neuron0x1b96b10()*0.0416702);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab020() {
   return (neuron0x1b96e50()*0.216568);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab060() {
   return (neuron0x1b97190()*0.637299);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab0a0() {
   return (neuron0x1b974d0()*0.384501);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab0e0() {
   return (neuron0x1b97810()*0.374275);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab120() {
   return (neuron0x1b97b50()*-0.429311);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab160() {
   return (neuron0x1b97e90()*-0.824209);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab1a0() {
   return (neuron0x1b981d0()*0.373237);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3360() {
   return (neuron0x1b98510()*-0.358012);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba33a0() {
   return (neuron0x1b98850()*0.0732152);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba33e0() {
   return (neuron0x1b98b90()*-0.242934);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3420() {
   return (neuron0x1b98ed0()*-0.318849);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3460() {
   return (neuron0x1b99210()*0.527156);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba34a0() {
   return (neuron0x1b99550()*0.163366);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba34e0() {
   return (neuron0x1b99890()*0.115837);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baadf0() {
   return (neuron0x1b99bd0()*0.0993547);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baae30() {
   return (neuron0x1b9a130()*0.0724031);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3630() {
   return (neuron0x1b9a470()*0.176712);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3670() {
   return (neuron0x1b9a7b0()*-0.0748835);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba36b0() {
   return (neuron0x1b9aaf0()*-0.302162);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba36f0() {
   return (neuron0x1b9ae30()*0.395925);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3730() {
   return (neuron0x1b9b170()*-0.31881);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3770() {
   return (neuron0x1b9b4b0()*0.0609104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3af0() {
   return (neuron0x1b96860()*-0.262143);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3b30() {
   return (neuron0x1b96b10()*-0.124999);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3b70() {
   return (neuron0x1b96e50()*0.0238141);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3bb0() {
   return (neuron0x1b97190()*-0.494726);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3bf0() {
   return (neuron0x1b974d0()*-0.156931);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3c30() {
   return (neuron0x1b97810()*0.0906259);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3c70() {
   return (neuron0x1b97b50()*-0.202348);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3cb0() {
   return (neuron0x1b97e90()*-0.247721);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3cf0() {
   return (neuron0x1b981d0()*-0.439319);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3d30() {
   return (neuron0x1b98510()*0.243563);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3d70() {
   return (neuron0x1b98850()*0.0721383);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3db0() {
   return (neuron0x1b98b90()*-0.0216926);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3df0() {
   return (neuron0x1b98ed0()*0.715155);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3e30() {
   return (neuron0x1b99210()*-0.329757);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3e70() {
   return (neuron0x1b99550()*-0.235575);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3eb0() {
   return (neuron0x1b99890()*0.51302);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3940() {
   return (neuron0x1b99bd0()*0.401686);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3980() {
   return (neuron0x1b9a130()*-0.151922);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4000() {
   return (neuron0x1b9a470()*-0.192015);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4040() {
   return (neuron0x1b9a7b0()*0.494852);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4080() {
   return (neuron0x1b9aaf0()*-0.0785165);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba40c0() {
   return (neuron0x1b9ae30()*0.315641);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4100() {
   return (neuron0x1b9b170()*1.26781);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4140() {
   return (neuron0x1b9b4b0()*-0.564187);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4310() {
   return (neuron0x1b96860()*0.844382);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad3a0() {
   return (neuron0x1b96b10()*0.0101336);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad3e0() {
   return (neuron0x1b96e50()*-2.45901);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad420() {
   return (neuron0x1b97190()*0.0013933);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad460() {
   return (neuron0x1b974d0()*0.0281018);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad4a0() {
   return (neuron0x1b97810()*-0.0148446);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad4e0() {
   return (neuron0x1b97b50()*-0.029316);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad520() {
   return (neuron0x1b97e90()*-0.0453398);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad560() {
   return (neuron0x1b981d0()*-0.010115);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad5a0() {
   return (neuron0x1b98510()*0.00143424);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad5e0() {
   return (neuron0x1b98850()*0.0018589);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad620() {
   return (neuron0x1b98b90()*0.15226);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad660() {
   return (neuron0x1b98ed0()*-0.0670648);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad6a0() {
   return (neuron0x1b99210()*-0.00903811);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad6e0() {
   return (neuron0x1b99550()*0.00835152);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad720() {
   return (neuron0x1b99890()*-0.0149543);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad1f0() {
   return (neuron0x1b99bd0()*0.00386795);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad230() {
   return (neuron0x1b9a130()*-0.0050702);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad870() {
   return (neuron0x1b9a470()*-0.0236835);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad8b0() {
   return (neuron0x1b9a7b0()*0.0153727);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad8f0() {
   return (neuron0x1b9aaf0()*-0.0645004);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad930() {
   return (neuron0x1b9ae30()*-0.0210142);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad970() {
   return (neuron0x1b9b170()*-0.0120202);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad9b0() {
   return (neuron0x1b9b4b0()*1.10322);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badd30() {
   return (neuron0x1b96860()*0.228121);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badd70() {
   return (neuron0x1b96b10()*-0.127269);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baddb0() {
   return (neuron0x1b96e50()*-0.476735);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baddf0() {
   return (neuron0x1b97190()*-0.329806);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bade30() {
   return (neuron0x1b974d0()*-0.405114);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bade70() {
   return (neuron0x1b97810()*-0.416721);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badeb0() {
   return (neuron0x1b97b50()*-0.215033);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badef0() {
   return (neuron0x1b97e90()*-0.580553);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badf30() {
   return (neuron0x1b981d0()*0.0863547);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badf70() {
   return (neuron0x1b98510()*-0.87421);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badfb0() {
   return (neuron0x1b98850()*-0.163006);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badff0() {
   return (neuron0x1b98b90()*-0.0734632);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae030() {
   return (neuron0x1b98ed0()*0.524974);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae070() {
   return (neuron0x1b99210()*-0.339874);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae0b0() {
   return (neuron0x1b99550()*-0.605156);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae0f0() {
   return (neuron0x1b99890()*-0.494662);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badb80() {
   return (neuron0x1b99bd0()*0.0534597);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badbc0() {
   return (neuron0x1b9a130()*-1.1411);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae240() {
   return (neuron0x1b9a470()*-0.999442);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae280() {
   return (neuron0x1b9a7b0()*-0.347932);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae2c0() {
   return (neuron0x1b9aaf0()*-0.305562);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae300() {
   return (neuron0x1b9ae30()*-0.367001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae340() {
   return (neuron0x1b9b170()*-0.208816);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae380() {
   return (neuron0x1b9b4b0()*-0.37977);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae700() {
   return (neuron0x1b96860()*1.20537);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae740() {
   return (neuron0x1b96b10()*0.0217068);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae780() {
   return (neuron0x1b96e50()*0.514451);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae7c0() {
   return (neuron0x1b97190()*0.0373667);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae800() {
   return (neuron0x1b974d0()*-8.18391e-05);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae840() {
   return (neuron0x1b97810()*-0.00698589);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae880() {
   return (neuron0x1b97b50()*0.0516143);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae8c0() {
   return (neuron0x1b97e90()*0.0128962);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae900() {
   return (neuron0x1b981d0()*0.0063127);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae940() {
   return (neuron0x1b98510()*-0.00527725);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae980() {
   return (neuron0x1b98850()*-0.0303361);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae9c0() {
   return (neuron0x1b98b90()*-0.169873);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baea00() {
   return (neuron0x1b98ed0()*-0.0622596);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baea40() {
   return (neuron0x1b99210()*0.0296071);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baea80() {
   return (neuron0x1b99550()*0.00450638);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baeac0() {
   return (neuron0x1b99890()*0.0156828);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae550() {
   return (neuron0x1b99bd0()*0.0641931);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae590() {
   return (neuron0x1b9a130()*-0.0302655);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baec10() {
   return (neuron0x1b9a470()*-0.0568645);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baec50() {
   return (neuron0x1b9a7b0()*-0.0259326);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baec90() {
   return (neuron0x1b9aaf0()*-0.000879223);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baecd0() {
   return (neuron0x1b9ae30()*-0.0182554);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baed10() {
   return (neuron0x1b9b170()*-0.0120293);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baed50() {
   return (neuron0x1b9b4b0()*-0.44488);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf0d0() {
   return (neuron0x1b96860()*0.0471115);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf110() {
   return (neuron0x1b96b10()*-0.00434744);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf150() {
   return (neuron0x1b96e50()*-12.3414);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf190() {
   return (neuron0x1b97190()*0.00887745);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf1d0() {
   return (neuron0x1b974d0()*-0.00521715);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf210() {
   return (neuron0x1b97810()*-0.0234472);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf250() {
   return (neuron0x1b97b50()*0.0121124);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf290() {
   return (neuron0x1b97e90()*0.00998283);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf2d0() {
   return (neuron0x1b981d0()*0.0175935);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf310() {
   return (neuron0x1b98510()*0.00136257);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf350() {
   return (neuron0x1b98850()*0.0207938);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf390() {
   return (neuron0x1b98b90()*-0.0111303);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf3d0() {
   return (neuron0x1b98ed0()*-0.000348272);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf410() {
   return (neuron0x1b99210()*0.00316068);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf450() {
   return (neuron0x1b99550()*0.00135005);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf490() {
   return (neuron0x1b99890()*0.0175926);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baef20() {
   return (neuron0x1b99bd0()*-0.00752051);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baef60() {
   return (neuron0x1b9a130()*-0.00560372);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf5e0() {
   return (neuron0x1b9a470()*-0.00706154);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf620() {
   return (neuron0x1b9a7b0()*-0.00965593);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf660() {
   return (neuron0x1b9aaf0()*-0.00369394);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf6a0() {
   return (neuron0x1b9ae30()*-0.00872493);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf6e0() {
   return (neuron0x1b9b170()*-0.00337885);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf720() {
   return (neuron0x1b9b4b0()*-0.297352);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafaa0() {
   return (neuron0x1b96860()*0.00230232);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafae0() {
   return (neuron0x1b96b10()*0.0136282);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafb20() {
   return (neuron0x1b96e50()*0.146159);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafb60() {
   return (neuron0x1b97190()*-2.50276);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafba0() {
   return (neuron0x1b974d0()*0.00875477);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafbe0() {
   return (neuron0x1b97810()*-0.0123756);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafc20() {
   return (neuron0x1b97b50()*-0.00681069);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafc60() {
   return (neuron0x1b97e90()*-0.000363024);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafca0() {
   return (neuron0x1b981d0()*0.00698541);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafce0() {
   return (neuron0x1b98510()*0.00726591);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafd20() {
   return (neuron0x1b98850()*0.013828);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafd60() {
   return (neuron0x1b98b90()*0.358727);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafda0() {
   return (neuron0x1b98ed0()*-0.010707);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafde0() {
   return (neuron0x1b99210()*0.0111247);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafe20() {
   return (neuron0x1b99550()*-0.0116314);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafe60() {
   return (neuron0x1b99890()*-0.00768317);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf8f0() {
   return (neuron0x1b99bd0()*0.0206608);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf930() {
   return (neuron0x1b9a130()*0.0127278);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baffb0() {
   return (neuron0x1b9a470()*0.00899428);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafff0() {
   return (neuron0x1b9a7b0()*-0.0030607);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0030() {
   return (neuron0x1b9aaf0()*0.00591934);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0070() {
   return (neuron0x1b9ae30()*-0.00185153);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb00b0() {
   return (neuron0x1b9b170()*0.00173088);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb00f0() {
   return (neuron0x1b9b4b0()*-0.000754297);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0470() {
   return (neuron0x1b96860()*-0.193426);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb04b0() {
   return (neuron0x1b96b10()*0.424822);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb04f0() {
   return (neuron0x1b96e50()*0.190583);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0530() {
   return (neuron0x1b97190()*0.7744);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0570() {
   return (neuron0x1b974d0()*0.261811);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb05b0() {
   return (neuron0x1b97810()*-0.163882);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb05f0() {
   return (neuron0x1b97b50()*-0.236372);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0630() {
   return (neuron0x1b97e90()*-0.558982);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0670() {
   return (neuron0x1b981d0()*0.270071);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb06b0() {
   return (neuron0x1b98510()*0.244949);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb06f0() {
   return (neuron0x1b98850()*1.02409);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0730() {
   return (neuron0x1b98b90()*0.6202);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0770() {
   return (neuron0x1b98ed0()*-1.01721);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb07b0() {
   return (neuron0x1b99210()*-0.677152);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb07f0() {
   return (neuron0x1b99550()*1.0816);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0830() {
   return (neuron0x1b99890()*-0.508434);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb02c0() {
   return (neuron0x1b99bd0()*-0.0859425);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0300() {
   return (neuron0x1b9a130()*-0.252348);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0980() {
   return (neuron0x1b9a470()*-0.0704197);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb09c0() {
   return (neuron0x1b9a7b0()*0.135767);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0a00() {
   return (neuron0x1b9aaf0()*-1.02353);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0a40() {
   return (neuron0x1b9ae30()*0.265435);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0a80() {
   return (neuron0x1b9b170()*-0.671368);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0ac0() {
   return (neuron0x1b9b4b0()*-0.207962);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0e40() {
   return (neuron0x1b96860()*-0.608037);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0e80() {
   return (neuron0x1b96b10()*0.617331);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0ec0() {
   return (neuron0x1b96e50()*1.63086);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0f00() {
   return (neuron0x1b97190()*-0.00112873);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0f40() {
   return (neuron0x1b974d0()*0.0381759);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0f80() {
   return (neuron0x1b97810()*-0.366907);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0fc0() {
   return (neuron0x1b97b50()*-0.209986);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1000() {
   return (neuron0x1b97e90()*-0.591404);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1040() {
   return (neuron0x1b981d0()*0.000153882);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1080() {
   return (neuron0x1b98510()*0.256768);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb10c0() {
   return (neuron0x1b98850()*0.375907);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1100() {
   return (neuron0x1b98b90()*0.477114);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1140() {
   return (neuron0x1b98ed0()*0.0246811);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1180() {
   return (neuron0x1b99210()*-0.0658861);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb11c0() {
   return (neuron0x1b99550()*-0.61378);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1200() {
   return (neuron0x1b99890()*-0.0671252);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0c90() {
   return (neuron0x1b99bd0()*-0.0740396);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0cd0() {
   return (neuron0x1b9a130()*-0.292001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1350() {
   return (neuron0x1b9a470()*-0.253361);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1390() {
   return (neuron0x1b9a7b0()*0.0517266);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb13d0() {
   return (neuron0x1b9aaf0()*0.637006);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1410() {
   return (neuron0x1b9ae30()*-0.0250917);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1450() {
   return (neuron0x1b9b170()*-0.435303);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1490() {
   return (neuron0x1b9b4b0()*-0.309339);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1810() {
   return (neuron0x1b96860()*0.0366782);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1850() {
   return (neuron0x1b96b10()*0.760468);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1890() {
   return (neuron0x1b96e50()*-0.267789);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb18d0() {
   return (neuron0x1b97190()*0.205816);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1910() {
   return (neuron0x1b974d0()*0.296229);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1950() {
   return (neuron0x1b97810()*0.667994);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1990() {
   return (neuron0x1b97b50()*-0.161115);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb19d0() {
   return (neuron0x1b97e90()*-0.268481);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1a10() {
   return (neuron0x1b981d0()*-0.409818);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1a50() {
   return (neuron0x1b98510()*0.447552);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1a90() {
   return (neuron0x1b98850()*-0.0573532);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1ad0() {
   return (neuron0x1b98b90()*0.526078);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1b10() {
   return (neuron0x1b98ed0()*0.621513);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1b50() {
   return (neuron0x1b99210()*0.343404);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1b90() {
   return (neuron0x1b99550()*0.106229);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1bd0() {
   return (neuron0x1b99890()*0.257903);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1660() {
   return (neuron0x1b99bd0()*-0.745973);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb16a0() {
   return (neuron0x1b9a130()*0.594449);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1d20() {
   return (neuron0x1b9a470()*-0.93419);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1d60() {
   return (neuron0x1b9a7b0()*0.161539);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1da0() {
   return (neuron0x1b9aaf0()*0.0922077);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1de0() {
   return (neuron0x1b9ae30()*-0.0115499);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1e20() {
   return (neuron0x1b9b170()*-0.637062);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb1e60() {
   return (neuron0x1b9b4b0()*-0.49136);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb21e0() {
   return (neuron0x1b96860()*0.000498149);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba67b0() {
   return (neuron0x1b96b10()*0.00233069);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba67f0() {
   return (neuron0x1b96e50()*0.0169541);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6830() {
   return (neuron0x1b97190()*-0.0190048);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6a80() {
   return (neuron0x1b974d0()*-0.00782639);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6ac0() {
   return (neuron0x1b97810()*-0.00459966);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6b00() {
   return (neuron0x1b97b50()*0.00460653);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6d50() {
   return (neuron0x1b97e90()*-0.00646713);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6d90() {
   return (neuron0x1b981d0()*-0.00815731);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6fe0() {
   return (neuron0x1b98510()*0.00150925);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7020() {
   return (neuron0x1b98850()*-0.0169371);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7060() {
   return (neuron0x1b98b90()*2.27712);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba72b0() {
   return (neuron0x1b98ed0()*0.00628463);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba72f0() {
   return (neuron0x1b99210()*0.0205412);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7540() {
   return (neuron0x1b99550()*-0.0115642);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7580() {
   return (neuron0x1b99890()*0.00322813);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb2030() {
   return (neuron0x1b99bd0()*0.00371571);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb2070() {
   return (neuron0x1b9a130()*-0.000210589);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba76d0() {
   return (neuron0x1b9a470()*0.00693332);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7be0() {
   return (neuron0x1b9a7b0()*-0.0052754);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7c20() {
   return (neuron0x1b9aaf0()*-0.0124641);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7c60() {
   return (neuron0x1b9ae30()*-0.00677385);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7eb0() {
   return (neuron0x1b9b170()*0.00942978);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7ef0() {
   return (neuron0x1b9b4b0()*0.0509356);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba77a0() {
   return (neuron0x1b96860()*0.010549);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba77e0() {
   return (neuron0x1b96b10()*-0.00229289);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7820() {
   return (neuron0x1b96e50()*-0.118256);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7860() {
   return (neuron0x1b97190()*0.909236);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba81e0() {
   return (neuron0x1b974d0()*0.0113091);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4530() {
   return (neuron0x1b97810()*0.00962984);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4570() {
   return (neuron0x1b97b50()*0.00654044);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb45b0() {
   return (neuron0x1b97e90()*0.00679573);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb45f0() {
   return (neuron0x1b981d0()*-0.0055951);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4630() {
   return (neuron0x1b98510()*-0.0169655);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4670() {
   return (neuron0x1b98850()*-0.0190754);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb46b0() {
   return (neuron0x1b98b90()*-0.410611);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb46f0() {
   return (neuron0x1b98ed0()*0.0145147);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4730() {
   return (neuron0x1b99210()*-0.0138318);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4770() {
   return (neuron0x1b99550()*0.0113312);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb47b0() {
   return (neuron0x1b99890()*0.018408);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba80c0() {
   return (neuron0x1b99bd0()*-0.0270685);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8100() {
   return (neuron0x1b9a130()*0.0074201);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4900() {
   return (neuron0x1b9a470()*0.00637041);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4940() {
   return (neuron0x1b9a7b0()*0.00953518);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4980() {
   return (neuron0x1b9aaf0()*-0.00214362);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb49c0() {
   return (neuron0x1b9ae30()*0.00692981);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4a00() {
   return (neuron0x1b9b170()*-0.00272605);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4a40() {
   return (neuron0x1b9b4b0()*0.0065747);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4dc0() {
   return (neuron0x1b96860()*-0.00888763);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4e00() {
   return (neuron0x1b96b10()*-0.536496);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4e40() {
   return (neuron0x1b96e50()*0.0639568);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4e80() {
   return (neuron0x1b97190()*-0.0201436);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4ec0() {
   return (neuron0x1b974d0()*0.0266069);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4f00() {
   return (neuron0x1b97810()*0.177178);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4f40() {
   return (neuron0x1b97b50()*-0.0882899);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4f80() {
   return (neuron0x1b97e90()*0.144194);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4fc0() {
   return (neuron0x1b981d0()*0.296517);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5000() {
   return (neuron0x1b98510()*0.119094);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5040() {
   return (neuron0x1b98850()*-0.247853);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5080() {
   return (neuron0x1b98b90()*0.807803);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb50c0() {
   return (neuron0x1b98ed0()*0.0294316);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5100() {
   return (neuron0x1b99210()*0.059001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5140() {
   return (neuron0x1b99550()*-0.178785);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5180() {
   return (neuron0x1b99890()*0.342075);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4c10() {
   return (neuron0x1b99bd0()*-0.332182);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4c50() {
   return (neuron0x1b9a130()*0.0366398);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb52d0() {
   return (neuron0x1b9a470()*0.413767);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5310() {
   return (neuron0x1b9a7b0()*0.404604);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5350() {
   return (neuron0x1b9aaf0()*0.198251);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5390() {
   return (neuron0x1b9ae30()*-0.122823);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb53d0() {
   return (neuron0x1b9b170()*-0.0376361);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5410() {
   return (neuron0x1b9b4b0()*0.235215);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5790() {
   return (neuron0x1b96860()*-0.0820471);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb57d0() {
   return (neuron0x1b96b10()*0.00374705);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5810() {
   return (neuron0x1b96e50()*0.120086);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5850() {
   return (neuron0x1b97190()*0.0335132);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5890() {
   return (neuron0x1b974d0()*-0.0300326);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb58d0() {
   return (neuron0x1b97810()*-0.0169937);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5910() {
   return (neuron0x1b97b50()*0.0116124);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5950() {
   return (neuron0x1b97e90()*0.0521326);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5990() {
   return (neuron0x1b981d0()*0.0154593);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb59d0() {
   return (neuron0x1b98510()*0.0200463);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5a10() {
   return (neuron0x1b98850()*0.0566831);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5a50() {
   return (neuron0x1b98b90()*-0.431343);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5a90() {
   return (neuron0x1b98ed0()*0.223767);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5ad0() {
   return (neuron0x1b99210()*0.246966);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5b10() {
   return (neuron0x1b99550()*0.0224756);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5b50() {
   return (neuron0x1b99890()*0.0438896);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb55e0() {
   return (neuron0x1b99bd0()*0.22376);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5620() {
   return (neuron0x1b9a130()*0.252697);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5ca0() {
   return (neuron0x1b9a470()*0.141941);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5ce0() {
   return (neuron0x1b9a7b0()*0.173095);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5d20() {
   return (neuron0x1b9aaf0()*0.0138031);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5d60() {
   return (neuron0x1b9ae30()*0.0622593);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5da0() {
   return (neuron0x1b9b170()*0.00894203);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5de0() {
   return (neuron0x1b9b4b0()*0.790128);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6160() {
   return (neuron0x1b96860()*-0.37517);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb61a0() {
   return (neuron0x1b96b10()*0.137703);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb61e0() {
   return (neuron0x1b96e50()*-0.256195);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6220() {
   return (neuron0x1b97190()*-0.0551275);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6260() {
   return (neuron0x1b974d0()*0.255027);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb62a0() {
   return (neuron0x1b97810()*-0.338418);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb62e0() {
   return (neuron0x1b97b50()*-0.2552);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6320() {
   return (neuron0x1b97e90()*0.380593);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6360() {
   return (neuron0x1b981d0()*-0.875019);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb63a0() {
   return (neuron0x1b98510()*-0.472744);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb63e0() {
   return (neuron0x1b98850()*1.07612);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6420() {
   return (neuron0x1b98b90()*0.233219);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6460() {
   return (neuron0x1b98ed0()*-0.503796);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb64a0() {
   return (neuron0x1b99210()*0.27506);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb64e0() {
   return (neuron0x1b99550()*-0.988445);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6520() {
   return (neuron0x1b99890()*-0.444419);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5fb0() {
   return (neuron0x1b99bd0()*0.1522);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5ff0() {
   return (neuron0x1b9a130()*0.334796);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6670() {
   return (neuron0x1b9a470()*0.907654);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb66b0() {
   return (neuron0x1b9a7b0()*-0.146093);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb66f0() {
   return (neuron0x1b9aaf0()*0.168272);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6730() {
   return (neuron0x1b9ae30()*-0.439197);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6770() {
   return (neuron0x1b9b170()*-0.796479);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb67b0() {
   return (neuron0x1b9b4b0()*0.278305);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6b30() {
   return (neuron0x1b96860()*-0.151924);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6b70() {
   return (neuron0x1b96b10()*-0.124763);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6bb0() {
   return (neuron0x1b96e50()*-0.584999);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6bf0() {
   return (neuron0x1b97190()*0.150381);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6c30() {
   return (neuron0x1b974d0()*-0.161884);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6c70() {
   return (neuron0x1b97810()*-0.00800969);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6cb0() {
   return (neuron0x1b97b50()*0.426862);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6cf0() {
   return (neuron0x1b97e90()*-0.0262623);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6d30() {
   return (neuron0x1b981d0()*0.675696);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6d70() {
   return (neuron0x1b98510()*0.385522);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6db0() {
   return (neuron0x1b98850()*-0.8028);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6df0() {
   return (neuron0x1b98b90()*1.36727);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6e30() {
   return (neuron0x1b98ed0()*-0.241507);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6e70() {
   return (neuron0x1b99210()*-0.0930809);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6eb0() {
   return (neuron0x1b99550()*-0.060629);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6ef0() {
   return (neuron0x1b99890()*-0.0374962);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6980() {
   return (neuron0x1b99bd0()*-0.119452);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb69c0() {
   return (neuron0x1b9a130()*-0.489213);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7040() {
   return (neuron0x1b9a470()*-0.451643);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7080() {
   return (neuron0x1b9a7b0()*-0.272488);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb70c0() {
   return (neuron0x1b9aaf0()*-0.314952);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7100() {
   return (neuron0x1b9ae30()*-0.165496);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7140() {
   return (neuron0x1b9b170()*-0.264225);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7180() {
   return (neuron0x1b9b4b0()*0.0191179);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7500() {
   return (neuron0x1b96860()*-0.0201421);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7540() {
   return (neuron0x1b96b10()*7.79325e-05);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7580() {
   return (neuron0x1b96e50()*0.13442);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb75c0() {
   return (neuron0x1b97190()*-0.0130587);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7600() {
   return (neuron0x1b974d0()*-0.00678554);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7640() {
   return (neuron0x1b97810()*-0.00396787);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7680() {
   return (neuron0x1b97b50()*-0.00332906);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb76c0() {
   return (neuron0x1b97e90()*-0.00276244);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7700() {
   return (neuron0x1b981d0()*-0.00209884);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7740() {
   return (neuron0x1b98510()*0.00679824);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7780() {
   return (neuron0x1b98850()*0.00309529);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb77c0() {
   return (neuron0x1b98b90()*0.833677);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7800() {
   return (neuron0x1b98ed0()*0.0126595);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7840() {
   return (neuron0x1b99210()*0.0100679);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7880() {
   return (neuron0x1b99550()*-0.00679255);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb78c0() {
   return (neuron0x1b99890()*-0.00584085);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7350() {
   return (neuron0x1b99bd0()*0.00719966);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7390() {
   return (neuron0x1b9a130()*0.0079732);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7a10() {
   return (neuron0x1b9a470()*0.0102364);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7a50() {
   return (neuron0x1b9a7b0()*0.00134599);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7a90() {
   return (neuron0x1b9aaf0()*-0.00625474);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7ad0() {
   return (neuron0x1b9ae30()*-0.00407255);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7b10() {
   return (neuron0x1b9b170()*0.00395);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7b50() {
   return (neuron0x1b9b4b0()*0.00840679);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7ed0() {
   return (neuron0x1b96860()*0.275097);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7f10() {
   return (neuron0x1b96b10()*0.0879199);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7f50() {
   return (neuron0x1b96e50()*0.454393);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7f90() {
   return (neuron0x1b97190()*0.0285028);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7fd0() {
   return (neuron0x1b974d0()*0.0596874);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8010() {
   return (neuron0x1b97810()*-0.132267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8050() {
   return (neuron0x1b97b50()*0.0455665);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8090() {
   return (neuron0x1b97e90()*-0.181572);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb80d0() {
   return (neuron0x1b981d0()*0.572913);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8110() {
   return (neuron0x1b98510()*-0.060528);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8150() {
   return (neuron0x1b98850()*0.473538);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8190() {
   return (neuron0x1b98b90()*0.658499);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb81d0() {
   return (neuron0x1b98ed0()*0.462063);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8210() {
   return (neuron0x1b99210()*0.601653);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8250() {
   return (neuron0x1b99550()*-0.071509);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8290() {
   return (neuron0x1b99890()*-0.271574);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7d20() {
   return (neuron0x1b99bd0()*-0.0726484);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7d60() {
   return (neuron0x1b9a130()*0.61384);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb83e0() {
   return (neuron0x1b9a470()*0.552155);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8420() {
   return (neuron0x1b9a7b0()*0.537697);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8460() {
   return (neuron0x1b9aaf0()*0.0927536);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb84a0() {
   return (neuron0x1b9ae30()*-0.200263);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb84e0() {
   return (neuron0x1b9b170()*-0.413121);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8520() {
   return (neuron0x1b9b4b0()*0.43144);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb88a0() {
   return (neuron0x1b96860()*-1.8329);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb88e0() {
   return (neuron0x1b96b10()*-0.0116344);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8920() {
   return (neuron0x1b96e50()*-0.805299);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8960() {
   return (neuron0x1b97190()*-0.00527614);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb89a0() {
   return (neuron0x1b974d0()*-0.0132359);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb89e0() {
   return (neuron0x1b97810()*0.019954);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8a20() {
   return (neuron0x1b97b50()*-0.066342);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8a60() {
   return (neuron0x1b97e90()*-0.0254084);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8aa0() {
   return (neuron0x1b981d0()*-0.018591);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8ae0() {
   return (neuron0x1b98510()*0.018865);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8b20() {
   return (neuron0x1b98850()*0.0494207);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8b60() {
   return (neuron0x1b98b90()*0.0668218);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8ba0() {
   return (neuron0x1b98ed0()*0.0498129);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8be0() {
   return (neuron0x1b99210()*-0.0243214);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8c20() {
   return (neuron0x1b99550()*0.00160006);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8c60() {
   return (neuron0x1b99890()*-0.0297631);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb86f0() {
   return (neuron0x1b99bd0()*-0.0640376);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8730() {
   return (neuron0x1b9a130()*0.0176201);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8db0() {
   return (neuron0x1b9a470()*0.0531126);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8df0() {
   return (neuron0x1b9a7b0()*0.0219021);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8e30() {
   return (neuron0x1b9aaf0()*0.00959024);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8e70() {
   return (neuron0x1b9ae30()*0.0246074);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8eb0() {
   return (neuron0x1b9b170()*0.0232167);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8ef0() {
   return (neuron0x1b9b4b0()*0.743333);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba19a0() {
   return (neuron0x1b96860()*0.551069);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba19e0() {
   return (neuron0x1b96b10()*0.369541);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1a20() {
   return (neuron0x1b96e50()*-0.218993);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1a60() {
   return (neuron0x1b97190()*-0.203294);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1aa0() {
   return (neuron0x1b974d0()*0.0594743);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1ae0() {
   return (neuron0x1b97810()*0.162771);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1b20() {
   return (neuron0x1b97b50()*0.0289885);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1b60() {
   return (neuron0x1b97e90()*0.279288);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9680() {
   return (neuron0x1b981d0()*0.130227);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb96c0() {
   return (neuron0x1b98510()*-0.203666);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9700() {
   return (neuron0x1b98850()*0.15614);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9740() {
   return (neuron0x1b98b90()*-0.140265);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9780() {
   return (neuron0x1b98ed0()*0.741297);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb97c0() {
   return (neuron0x1b99210()*-0.315194);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9800() {
   return (neuron0x1b99550()*0.370778);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9840() {
   return (neuron0x1b99890()*0.269953);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb90c0() {
   return (neuron0x1b99bd0()*-0.431833);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9100() {
   return (neuron0x1b9a130()*0.387218);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9990() {
   return (neuron0x1b9a470()*0.167224);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb99d0() {
   return (neuron0x1b9a7b0()*-0.0441355);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9a10() {
   return (neuron0x1b9aaf0()*0.0583953);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9a50() {
   return (neuron0x1b9ae30()*0.319719);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9a90() {
   return (neuron0x1b9b170()*0.148716);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9ad0() {
   return (neuron0x1b9b4b0()*-0.155668);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9e50() {
   return (neuron0x1b96860()*0.00594384);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9e90() {
   return (neuron0x1b96b10()*0.00237826);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9ed0() {
   return (neuron0x1b96e50()*-0.434236);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9f10() {
   return (neuron0x1b97190()*0.00306288);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9f50() {
   return (neuron0x1b974d0()*0.0085468);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9f90() {
   return (neuron0x1b97810()*0.006345);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9fd0() {
   return (neuron0x1b97b50()*0.00367794);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba010() {
   return (neuron0x1b97e90()*0.00981918);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba050() {
   return (neuron0x1b981d0()*-0.00519077);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba090() {
   return (neuron0x1b98510()*-0.0076042);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba0d0() {
   return (neuron0x1b98850()*-0.0102491);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba110() {
   return (neuron0x1b98b90()*0.261425);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba150() {
   return (neuron0x1b98ed0()*0.00580126);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba190() {
   return (neuron0x1b99210()*-0.00570754);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba1d0() {
   return (neuron0x1b99550()*0.00962927);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba210() {
   return (neuron0x1b99890()*0.0102862);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9ca0() {
   return (neuron0x1b99bd0()*-0.0138001);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9ce0() {
   return (neuron0x1b9a130()*0.00719528);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba360() {
   return (neuron0x1b9a470()*0.00312063);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba3a0() {
   return (neuron0x1b9a7b0()*0.00288584);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba3e0() {
   return (neuron0x1b9aaf0()*-0.00023943);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba420() {
   return (neuron0x1b9ae30()*0.00286659);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba460() {
   return (neuron0x1b9b170()*0.00152343);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba4a0() {
   return (neuron0x1b9b4b0()*0.0214196);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba820() {
   return (neuron0x1b96860()*0.82684);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba860() {
   return (neuron0x1b96b10()*-0.220082);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba8a0() {
   return (neuron0x1b96e50()*-0.581766);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba8e0() {
   return (neuron0x1b97190()*-0.695181);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba920() {
   return (neuron0x1b974d0()*0.163991);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba960() {
   return (neuron0x1b97810()*0.218844);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba9a0() {
   return (neuron0x1b97b50()*0.58471);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba9e0() {
   return (neuron0x1b97e90()*0.27896);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbaa20() {
   return (neuron0x1b981d0()*0.373372);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbaa60() {
   return (neuron0x1b98510()*0.162995);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbaaa0() {
   return (neuron0x1b98850()*-0.0551111);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbaae0() {
   return (neuron0x1b98b90()*-0.75691);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbab20() {
   return (neuron0x1b98ed0()*0.504528);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbab60() {
   return (neuron0x1b99210()*-0.266841);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbaba0() {
   return (neuron0x1b99550()*-0.176064);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbabe0() {
   return (neuron0x1b99890()*1.05712);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba670() {
   return (neuron0x1b99bd0()*-0.120247);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba6b0() {
   return (neuron0x1b9a130()*0.561908);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab1e0() {
   return (neuron0x1b9a470()*0.635502);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab220() {
   return (neuron0x1b9a7b0()*0.394628);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab260() {
   return (neuron0x1b9aaf0()*0.0877848);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab2a0() {
   return (neuron0x1b9ae30()*0.0127038);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab2e0() {
   return (neuron0x1b9b170()*0.0547528);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab320() {
   return (neuron0x1b9b4b0()*0.631053);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab6a0() {
   return (neuron0x1b96860()*-0.314026);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab6e0() {
   return (neuron0x1b96b10()*0.00739493);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab720() {
   return (neuron0x1b96e50()*-5.16288);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab760() {
   return (neuron0x1b97190()*0.0265978);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab7a0() {
   return (neuron0x1b974d0()*-0.0136818);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab7e0() {
   return (neuron0x1b97810()*-0.0126429);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab820() {
   return (neuron0x1b97b50()*0.00764501);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab860() {
   return (neuron0x1b97e90()*0.00935254);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab8a0() {
   return (neuron0x1b981d0()*-0.001856);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab8e0() {
   return (neuron0x1b98510()*0.0106182);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab920() {
   return (neuron0x1b98850()*-0.0100914);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab960() {
   return (neuron0x1b98b90()*-0.0589922);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab9a0() {
   return (neuron0x1b98ed0()*-0.0283607);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab9e0() {
   return (neuron0x1b99210()*-0.00331584);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baba20() {
   return (neuron0x1b99550()*0.0205306);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baba60() {
   return (neuron0x1b99890()*0.0147648);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab4f0() {
   return (neuron0x1b99bd0()*0.0400106);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab530() {
   return (neuron0x1b9a130()*-0.0150235);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babbb0() {
   return (neuron0x1b9a470()*-0.0297831);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babbf0() {
   return (neuron0x1b9a7b0()*0.00530267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babc30() {
   return (neuron0x1b9aaf0()*0.0157441);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babc70() {
   return (neuron0x1b9ae30()*0.00159931);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babcb0() {
   return (neuron0x1b9b170()*-0.002105);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babcf0() {
   return (neuron0x1b9b4b0()*-2.63977);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac070() {
   return (neuron0x1b96860()*-0.0560823);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac0b0() {
   return (neuron0x1b96b10()*-0.667715);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac0f0() {
   return (neuron0x1b96e50()*-0.263604);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac130() {
   return (neuron0x1b97190()*0.22396);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac170() {
   return (neuron0x1b974d0()*0.260202);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac1b0() {
   return (neuron0x1b97810()*-0.344616);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac1f0() {
   return (neuron0x1b97b50()*-0.36716);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac230() {
   return (neuron0x1b97e90()*-0.309071);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac270() {
   return (neuron0x1b981d0()*0.10918);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac2b0() {
   return (neuron0x1b98510()*0.00742805);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac2f0() {
   return (neuron0x1b98850()*0.497267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac330() {
   return (neuron0x1b98b90()*0.464421);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac370() {
   return (neuron0x1b98ed0()*-0.478298);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac3b0() {
   return (neuron0x1b99210()*-0.337809);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac3f0() {
   return (neuron0x1b99550()*1.00262);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac430() {
   return (neuron0x1b99890()*-0.356401);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babec0() {
   return (neuron0x1b99bd0()*-0.675722);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babf00() {
   return (neuron0x1b9a130()*0.309361);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac580() {
   return (neuron0x1b9a470()*0.751932);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac5c0() {
   return (neuron0x1b9a7b0()*-0.730222);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac600() {
   return (neuron0x1b9aaf0()*-0.164405);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac640() {
   return (neuron0x1b9ae30()*0.754109);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac680() {
   return (neuron0x1b9b170()*0.410902);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac6c0() {
   return (neuron0x1b9b4b0()*-0.438613);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baca40() {
   return (neuron0x1b96860()*0.00972201);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baca80() {
   return (neuron0x1b96b10()*-0.00100826);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacac0() {
   return (neuron0x1b96e50()*-0.148401);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacb00() {
   return (neuron0x1b97190()*-0.000448707);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacb40() {
   return (neuron0x1b974d0()*0.00725444);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacb80() {
   return (neuron0x1b97810()*0.00613255);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacbc0() {
   return (neuron0x1b97b50()*0.00432024);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacc00() {
   return (neuron0x1b97e90()*0.00081648);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacc40() {
   return (neuron0x1b981d0()*-0.00437606);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacc80() {
   return (neuron0x1b98510()*-0.000644691);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baccc0() {
   return (neuron0x1b98850()*0.00206197);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacd00() {
   return (neuron0x1b98b90()*1.37006);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacd40() {
   return (neuron0x1b98ed0()*0.0164051);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacd80() {
   return (neuron0x1b99210()*0.0157093);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacdc0() {
   return (neuron0x1b99550()*0.00767201);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bace00() {
   return (neuron0x1b99890()*0.00848198);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac890() {
   return (neuron0x1b99bd0()*0.00434438);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac8d0() {
   return (neuron0x1b9a130()*0.0105996);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacf50() {
   return (neuron0x1b9a470()*0.018701);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacf90() {
   return (neuron0x1b9a7b0()*0.00127905);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bacfd0() {
   return (neuron0x1b9aaf0()*0.0102565);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad010() {
   return (neuron0x1b9ae30()*0.00182427);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad050() {
   return (neuron0x1b9b170()*0.00257052);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad090() {
   return (neuron0x1b9b4b0()*0.0302528);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbef60() {
   return (neuron0x1b96860()*-0.279089);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbefa0() {
   return (neuron0x1b96b10()*0.0642125);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbefe0() {
   return (neuron0x1b96e50()*-0.347101);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf020() {
   return (neuron0x1b97190()*0.0683741);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf060() {
   return (neuron0x1b974d0()*0.651779);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf0a0() {
   return (neuron0x1b97810()*-0.332111);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf0e0() {
   return (neuron0x1b97b50()*-0.190668);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf120() {
   return (neuron0x1b97e90()*0.527812);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf160() {
   return (neuron0x1b981d0()*-0.0776008);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf1a0() {
   return (neuron0x1b98510()*-0.0116642);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf1e0() {
   return (neuron0x1b98850()*0.14247);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf220() {
   return (neuron0x1b98b90()*0.428022);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf260() {
   return (neuron0x1b98ed0()*-0.0251565);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf2a0() {
   return (neuron0x1b99210()*-0.349172);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf2e0() {
   return (neuron0x1b99550()*-0.303499);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf320() {
   return (neuron0x1b99890()*-0.153762);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad0d0() {
   return (neuron0x1b99bd0()*-0.360182);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad110() {
   return (neuron0x1b9a130()*0.269167);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf470() {
   return (neuron0x1b9a470()*-0.0257713);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf4b0() {
   return (neuron0x1b9a7b0()*0.24514);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf4f0() {
   return (neuron0x1b9aaf0()*-0.107034);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf530() {
   return (neuron0x1b9ae30()*0.303562);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf570() {
   return (neuron0x1b9b170()*-0.160932);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf5b0() {
   return (neuron0x1b9b4b0()*0.0888548);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf930() {
   return (neuron0x1b96860()*-0.244051);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf970() {
   return (neuron0x1b96b10()*-0.0807874);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf9b0() {
   return (neuron0x1b96e50()*0.880866);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf9f0() {
   return (neuron0x1b97190()*0.0348761);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfa30() {
   return (neuron0x1b974d0()*0.105772);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfa70() {
   return (neuron0x1b97810()*0.486149);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfab0() {
   return (neuron0x1b97b50()*-0.0899892);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfaf0() {
   return (neuron0x1b97e90()*0.306807);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfb30() {
   return (neuron0x1b981d0()*0.0188675);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfb70() {
   return (neuron0x1b98510()*-0.047975);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfbb0() {
   return (neuron0x1b98850()*-0.315037);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfbf0() {
   return (neuron0x1b98b90()*-0.0311856);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfc30() {
   return (neuron0x1b98ed0()*-0.0611486);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfc70() {
   return (neuron0x1b99210()*-0.412425);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfcb0() {
   return (neuron0x1b99550()*0.177708);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfcf0() {
   return (neuron0x1b99890()*-0.176263);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf780() {
   return (neuron0x1b99bd0()*-0.113262);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf7c0() {
   return (neuron0x1b9a130()*-0.0496135);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfe40() {
   return (neuron0x1b9a470()*0.294556);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfe80() {
   return (neuron0x1b9a7b0()*0.00262463);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbfec0() {
   return (neuron0x1b9aaf0()*-0.262186);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbff00() {
   return (neuron0x1b9ae30()*-0.186506);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbff40() {
   return (neuron0x1b9b170()*-0.175191);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbff80() {
   return (neuron0x1b9b4b0()*0.0908034);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0300() {
   return (neuron0x1b96860()*-0.291073);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0340() {
   return (neuron0x1b96b10()*0.0812668);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0380() {
   return (neuron0x1b96e50()*-0.765342);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc03c0() {
   return (neuron0x1b97190()*0.279261);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0400() {
   return (neuron0x1b974d0()*-0.546855);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0440() {
   return (neuron0x1b97810()*-0.205145);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0480() {
   return (neuron0x1b97b50()*0.114976);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc04c0() {
   return (neuron0x1b97e90()*0.301505);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0500() {
   return (neuron0x1b981d0()*-0.179722);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0540() {
   return (neuron0x1b98510()*-0.26052);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0580() {
   return (neuron0x1b98850()*-0.103246);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc05c0() {
   return (neuron0x1b98b90()*1.18337);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0600() {
   return (neuron0x1b98ed0()*0.294374);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0640() {
   return (neuron0x1b99210()*0.490876);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0680() {
   return (neuron0x1b99550()*0.219093);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc06c0() {
   return (neuron0x1b99890()*-0.108473);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0150() {
   return (neuron0x1b99bd0()*0.54058);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0190() {
   return (neuron0x1b9a130()*0.379341);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0810() {
   return (neuron0x1b9a470()*-0.419452);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0850() {
   return (neuron0x1b9a7b0()*0.664118);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0890() {
   return (neuron0x1b9aaf0()*-0.431834);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc08d0() {
   return (neuron0x1b9ae30()*-0.12559);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0910() {
   return (neuron0x1b9b170()*0.404634);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0950() {
   return (neuron0x1b9b4b0()*-1.81664);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0cd0() {
   return (neuron0x1b96860()*-0.00896541);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0d10() {
   return (neuron0x1b96b10()*-0.0110959);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0d50() {
   return (neuron0x1b96e50()*0.00113546);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0d90() {
   return (neuron0x1b97190()*2.25511);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0dd0() {
   return (neuron0x1b974d0()*-0.0129833);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0e10() {
   return (neuron0x1b97810()*-0.00346109);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0e50() {
   return (neuron0x1b97b50()*-0.00229434);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0e90() {
   return (neuron0x1b97e90()*-0.00509814);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0ed0() {
   return (neuron0x1b981d0()*0.0025104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0f10() {
   return (neuron0x1b98510()*0.000523065);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0f50() {
   return (neuron0x1b98850()*9.62078e-05);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0f90() {
   return (neuron0x1b98b90()*0.10104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0fd0() {
   return (neuron0x1b98ed0()*0.00109852);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1010() {
   return (neuron0x1b99210()*0.00810181);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1050() {
   return (neuron0x1b99550()*-0.00820195);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1090() {
   return (neuron0x1b99890()*-0.00802951);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0b20() {
   return (neuron0x1b99bd0()*0.00878456);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0b60() {
   return (neuron0x1b9a130()*-0.015536);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc11e0() {
   return (neuron0x1b9a470()*-0.0119303);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1220() {
   return (neuron0x1b9a7b0()*-0.00503259);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1260() {
   return (neuron0x1b9aaf0()*-0.00174269);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc12a0() {
   return (neuron0x1b9ae30()*-0.000285051);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc12e0() {
   return (neuron0x1b9b170()*-0.00403862);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1320() {
   return (neuron0x1b9b4b0()*0.00373986);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c770() {
   return (neuron0x1b9b920()*0.167129);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9c7b0() {
   return (neuron0x1b9c160()*-0.0736708);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dcd0() {
   return (neuron0x1b9cc40()*-0.112311);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9dd10() {
   return (neuron0x1961060()*0.454994);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f7a0() {
   return (neuron0x1b9da20()*-0.0383744);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9f7e0() {
   return (neuron0x1b9f4f0()*0.631073);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0570() {
   return (neuron0x1ba02c0()*0.21104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba05b0() {
   return (neuron0x1ba0c90()*0.421168);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0f40() {
   return (neuron0x1ba1660()*0.2064);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba0f80() {
   return (neuron0x1ba2140()*-0.377893);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1910() {
   return (neuron0x1ba2b10()*0.0287732);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba1950() {
   return (neuron0x1b9fbf0()*0.0778411);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba23f0() {
   return (neuron0x1ba46c0()*0.00818826);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2430() {
   return (neuron0x1ba5090()*-0.204782);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2dc0() {
   return (neuron0x1ba5a60()*0.632532);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba2e00() {
   return (neuron0x1ba6430()*-0.00908898);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fea0() {
   return (neuron0x1ba8240()*0.484844);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9fee0() {
   return (neuron0x1ba8520()*0.41828);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba4970() {
   return (neuron0x1ba8ef0()*-0.125278);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba49b0() {
   return (neuron0x1ba98c0()*0.466388);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5340() {
   return (neuron0x1baa290()*-0.13722);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5380() {
   return (neuron0x1baac60()*0.639588);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5d10() {
   return (neuron0x1ba37b0()*0.0536779);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba5d50() {
   return (neuron0x1ba4180()*-0.00661876);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba66e0() {
   return (neuron0x1bad9f0()*0.123359);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba6720() {
   return (neuron0x1bae3c0()*-0.0589618);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b99770() {
   return (neuron0x1baed90()*-0.110254);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b997b0() {
   return (neuron0x1baf760()*0.128039);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba87d0() {
   return (neuron0x1bb0130()*0.160632);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba8810() {
   return (neuron0x1bb0b00()*0.29702);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba91a0() {
   return (neuron0x1bb14d0()*0.284802);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba91e0() {
   return (neuron0x1bb1ea0()*0.391112);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9b70() {
   return (neuron0x1ba7f30()*0.435476);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba9bb0() {
   return (neuron0x1bb4a80()*0.0692734);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa540() {
   return (neuron0x1bb5450()*0.488219);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baa580() {
   return (neuron0x1bb5e20()*0.52959);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baaf10() {
   return (neuron0x1bb67f0()*-0.411631);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baaf50() {
   return (neuron0x1bb71c0()*0.602211);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3a60() {
   return (neuron0x1bb7b90()*0.204173);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba3aa0() {
   return (neuron0x1bb8560()*0.676128);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad310() {
   return (neuron0x1bb8f30()*-0.0750416);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bad350() {
   return (neuron0x1bb9b10()*0.103863);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badca0() {
   return (neuron0x1bba4e0()*0.261145);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1badce0() {
   return (neuron0x1bab360()*0.273488);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae670() {
   return (neuron0x1babd30()*0.520446);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bae6b0() {
   return (neuron0x1bac700()*-0.286444);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf040() {
   return (neuron0x1bbed40()*0.507207);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1baf080() {
   return (neuron0x1bbf5f0()*0.344981);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafa10() {
   return (neuron0x1bbffc0()*0.466171);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bafa50() {
   return (neuron0x1bc0990()*0.428243);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb2150() {
   return (neuron0x1b9b920()*-0.0179267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb2190() {
   return (neuron0x1b9c160()*1.20772);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7710() {
   return (neuron0x1b9cc40()*0.384347);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1ba7750() {
   return (neuron0x1961060()*-0.696121);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4d30() {
   return (neuron0x1b9da20()*-0.492631);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb4d70() {
   return (neuron0x1b9f4f0()*1.35455);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5700() {
   return (neuron0x1ba02c0()*-0.152634);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb5740() {
   return (neuron0x1ba0c90()*-0.720298);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb60d0() {
   return (neuron0x1ba1660()*1.00009);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6110() {
   return (neuron0x1ba2140()*0.656046);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6aa0() {
   return (neuron0x1ba2b10()*0.919392);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb6ae0() {
   return (neuron0x1b9fbf0()*-1.25453);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7470() {
   return (neuron0x1ba46c0()*0.355971);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb74b0() {
   return (neuron0x1ba5090()*0.870554);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7e40() {
   return (neuron0x1ba5a60()*-0.63618);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb7e80() {
   return (neuron0x1ba6430()*-0.792576);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8810() {
   return (neuron0x1ba8240()*0.889656);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb8850() {
   return (neuron0x1ba8520()*0.274825);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb91e0() {
   return (neuron0x1ba8ef0()*-0.69604);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9220() {
   return (neuron0x1ba98c0()*-0.0989792);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9dc0() {
   return (neuron0x1baa290()*0.0882225);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb9e00() {
   return (neuron0x1baac60()*0.663599);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba790() {
   return (neuron0x1ba37b0()*-1.10745);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bba7d0() {
   return (neuron0x1ba4180()*-0.569106);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab610() {
   return (neuron0x1bad9f0()*-1.25779);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bab650() {
   return (neuron0x1bae3c0()*-1.06349);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1babfe0() {
   return (neuron0x1baed90()*0.200906);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac020() {
   return (neuron0x1baf760()*-0.265975);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac9b0() {
   return (neuron0x1bb0130()*-0.880764);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bac9f0() {
   return (neuron0x1bb0b00()*-0.601373);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbeed0() {
   return (neuron0x1bb14d0()*-0.994044);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbef10() {
   return (neuron0x1bb1ea0()*-0.0731344);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf8a0() {
   return (neuron0x1ba7f30()*-0.497154);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bbf8e0() {
   return (neuron0x1bb4a80()*-0.584342);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0270() {
   return (neuron0x1bb5450()*0.883679);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc02b0() {
   return (neuron0x1bb5e20()*-1.01547);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0c40() {
   return (neuron0x1bb67f0()*-1.06926);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc0c80() {
   return (neuron0x1bb71c0()*-0.763672);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bbd0() {
   return (neuron0x1bb7b90()*-1.34004);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1b9bc10() {
   return (neuron0x1bb8560()*0.584589);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb03e0() {
   return (neuron0x1bb8f30()*-0.408033);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bb0420() {
   return (neuron0x1bb9b10()*0.983054);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1360() {
   return (neuron0x1bba4e0()*-1.34268);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc13a0() {
   return (neuron0x1bab360()*1.94865);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc13e0() {
   return (neuron0x1babd30()*-0.66977);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc1420() {
   return (neuron0x1bac700()*-0.703948);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc82d0() {
   return (neuron0x1bbed40()*0.37328);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8310() {
   return (neuron0x1bbf5f0()*0.0950566);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8350() {
   return (neuron0x1bbffc0()*-0.990041);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8390() {
   return (neuron0x1bc0990()*-0.0123493);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8710() {
   return (neuron0x1b9b920()*0.822796);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8750() {
   return (neuron0x1b9c160()*-0.000745918);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8790() {
   return (neuron0x1b9cc40()*0.0179315);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc87d0() {
   return (neuron0x1961060()*0.134923);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8810() {
   return (neuron0x1b9da20()*0.0105982);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8850() {
   return (neuron0x1b9f4f0()*-2.64527);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8890() {
   return (neuron0x1ba02c0()*-3.519);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc88d0() {
   return (neuron0x1ba0c90()*2.12532);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8910() {
   return (neuron0x1ba1660()*0.0119423);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8950() {
   return (neuron0x1ba2140()*0.0147165);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8990() {
   return (neuron0x1ba2b10()*-0.00626181);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc89d0() {
   return (neuron0x1b9fbf0()*0.0148642);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8a10() {
   return (neuron0x1ba46c0()*-0.0442909);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8a50() {
   return (neuron0x1ba5090()*0.00970275);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8a90() {
   return (neuron0x1ba5a60()*0.0159269);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8ad0() {
   return (neuron0x1ba6430()*0.00687371);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8560() {
   return (neuron0x1ba8240()*0.00562143);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc85a0() {
   return (neuron0x1ba8520()*-0.00109159);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8c20() {
   return (neuron0x1ba8ef0()*1.96267);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8c60() {
   return (neuron0x1ba98c0()*0.158088);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8ca0() {
   return (neuron0x1baa290()*0.0056134);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8ce0() {
   return (neuron0x1baac60()*-0.0130108);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8d20() {
   return (neuron0x1ba37b0()*-0.00359383);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8d60() {
   return (neuron0x1ba4180()*0.244937);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8da0() {
   return (neuron0x1bad9f0()*-0.00606289);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8de0() {
   return (neuron0x1bae3c0()*0.835967);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8e20() {
   return (neuron0x1baed90()*7.08992);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8e60() {
   return (neuron0x1baf760()*3.63004);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8ea0() {
   return (neuron0x1bb0130()*-0.00988437);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8ee0() {
   return (neuron0x1bb0b00()*-0.0172835);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8f20() {
   return (neuron0x1bb14d0()*0.00660722);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8f60() {
   return (neuron0x1bb1ea0()*0.81192);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8b10() {
   return (neuron0x1ba7f30()*2.20523);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8b50() {
   return (neuron0x1bb4a80()*-0.0164595);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8b90() {
   return (neuron0x1bb5450()*-0.130758);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc8bd0() {
   return (neuron0x1bb5e20()*-0.00272604);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc91b0() {
   return (neuron0x1bb67f0()*0.0139807);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc91f0() {
   return (neuron0x1bb71c0()*3.17687);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9230() {
   return (neuron0x1bb7b90()*0.00567784);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9270() {
   return (neuron0x1bb8560()*0.461077);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc92b0() {
   return (neuron0x1bb8f30()*0.033601);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc92f0() {
   return (neuron0x1bb9b10()*-4.66456);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9330() {
   return (neuron0x1bba4e0()*-0.00531554);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9370() {
   return (neuron0x1bab360()*4.21207);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc93b0() {
   return (neuron0x1babd30()*0.00883464);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc93f0() {
   return (neuron0x1bac700()*1.29583);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9430() {
   return (neuron0x1bbed40()*0.0492509);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9470() {
   return (neuron0x1bbf5f0()*-0.037039);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc94b0() {
   return (neuron0x1bbffc0()*0.000613313);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc94f0() {
   return (neuron0x1bc0990()*2.73167);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9870() {
   return (neuron0x1b9b920()*-0.14708);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc98b0() {
   return (neuron0x1b9c160()*0.142763);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc98f0() {
   return (neuron0x1b9cc40()*0.308984);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9930() {
   return (neuron0x1961060()*-0.0934609);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9970() {
   return (neuron0x1b9da20()*0.0512863);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc99b0() {
   return (neuron0x1b9f4f0()*0.447091);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc99f0() {
   return (neuron0x1ba02c0()*0.475427);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9a30() {
   return (neuron0x1ba0c90()*0.460144);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9a70() {
   return (neuron0x1ba1660()*0.0257286);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9ab0() {
   return (neuron0x1ba2140()*0.543005);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9af0() {
   return (neuron0x1ba2b10()*0.0966095);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9b30() {
   return (neuron0x1b9fbf0()*0.689138);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9b70() {
   return (neuron0x1ba46c0()*0.381988);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9bb0() {
   return (neuron0x1ba5090()*0.529952);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9bf0() {
   return (neuron0x1ba5a60()*0.305327);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9c30() {
   return (neuron0x1ba6430()*0.195582);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc96c0() {
   return (neuron0x1ba8240()*-0.389289);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9700() {
   return (neuron0x1ba8520()*0.378893);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9d80() {
   return (neuron0x1ba8ef0()*-0.0277078);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9dc0() {
   return (neuron0x1ba98c0()*0.737596);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9e00() {
   return (neuron0x1baa290()*0.270116);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9e40() {
   return (neuron0x1baac60()*-0.15897);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9e80() {
   return (neuron0x1ba37b0()*0.460353);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9ec0() {
   return (neuron0x1ba4180()*0.697098);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9f00() {
   return (neuron0x1bad9f0()*0.287654);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9f40() {
   return (neuron0x1bae3c0()*0.00641874);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9f80() {
   return (neuron0x1baed90()*0.0268822);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9fc0() {
   return (neuron0x1baf760()*-0.0918321);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca000() {
   return (neuron0x1bb0130()*-0.104981);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca040() {
   return (neuron0x1bb0b00()*0.316827);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca080() {
   return (neuron0x1bb14d0()*-0.034454);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca0c0() {
   return (neuron0x1bb1ea0()*0.648302);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9c70() {
   return (neuron0x1ba7f30()*0.0541473);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9cb0() {
   return (neuron0x1bb4a80()*0.417985);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9cf0() {
   return (neuron0x1bb5450()*0.030976);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bc9d30() {
   return (neuron0x1bb5e20()*-0.12642);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca310() {
   return (neuron0x1bb67f0()*0.33112);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca350() {
   return (neuron0x1bb71c0()*0.621947);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca390() {
   return (neuron0x1bb7b90()*0.0856272);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca3d0() {
   return (neuron0x1bb8560()*0.459133);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca410() {
   return (neuron0x1bb8f30()*-0.0765574);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca450() {
   return (neuron0x1bb9b10()*0.224992);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca490() {
   return (neuron0x1bba4e0()*-0.389559);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca4d0() {
   return (neuron0x1bab360()*0.114439);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca510() {
   return (neuron0x1babd30()*-0.1389);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca550() {
   return (neuron0x1bac700()*0.0689642);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca590() {
   return (neuron0x1bbed40()*0.316082);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca5d0() {
   return (neuron0x1bbf5f0()*-0.0214153);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca610() {
   return (neuron0x1bbffc0()*0.122637);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca650() {
   return (neuron0x1bc0990()*0.211879);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca9d0() {
   return (neuron0x1b9b920()*-0.583372);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaa10() {
   return (neuron0x1b9c160()*-0.83997);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaa50() {
   return (neuron0x1b9cc40()*-0.300686);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaa90() {
   return (neuron0x1961060()*0.146354);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaad0() {
   return (neuron0x1b9da20()*-0.401664);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcab10() {
   return (neuron0x1b9f4f0()*-0.14737);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcab50() {
   return (neuron0x1ba02c0()*-0.184519);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcab90() {
   return (neuron0x1ba0c90()*-0.708361);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcabd0() {
   return (neuron0x1ba1660()*-0.798362);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcac10() {
   return (neuron0x1ba2140()*-0.474304);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcac50() {
   return (neuron0x1ba2b10()*0.17576);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcac90() {
   return (neuron0x1b9fbf0()*-0.316505);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcacd0() {
   return (neuron0x1ba46c0()*0.262547);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcad10() {
   return (neuron0x1ba5090()*0.143657);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcad50() {
   return (neuron0x1ba5a60()*-0.0912157);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcad90() {
   return (neuron0x1ba6430()*0.734633);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca820() {
   return (neuron0x1ba8240()*-0.338074);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bca860() {
   return (neuron0x1ba8520()*0.131093);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaee0() {
   return (neuron0x1ba8ef0()*-0.409104);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaf20() {
   return (neuron0x1ba98c0()*0.116456);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcaf60() {
   return (neuron0x1baa290()*-0.352128);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcafa0() {
   return (neuron0x1baac60()*-0.0572946);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcafe0() {
   return (neuron0x1ba37b0()*-0.021937);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb020() {
   return (neuron0x1ba4180()*-0.240537);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb060() {
   return (neuron0x1bad9f0()*-0.0338577);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb0a0() {
   return (neuron0x1bae3c0()*0.226871);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb0e0() {
   return (neuron0x1baed90()*-0.838203);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb120() {
   return (neuron0x1baf760()*0.20754);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb160() {
   return (neuron0x1bb0130()*0.000160899);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb1a0() {
   return (neuron0x1bb0b00()*0.671677);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb1e0() {
   return (neuron0x1bb14d0()*-0.277217);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb220() {
   return (neuron0x1bb1ea0()*-0.974351);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcadd0() {
   return (neuron0x1ba7f30()*-0.517819);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcae10() {
   return (neuron0x1bb4a80()*-0.228052);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcae50() {
   return (neuron0x1bb5450()*-0.141067);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcae90() {
   return (neuron0x1bb5e20()*-0.238617);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb470() {
   return (neuron0x1bb67f0()*-0.586588);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb4b0() {
   return (neuron0x1bb71c0()*-0.447467);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb4f0() {
   return (neuron0x1bb7b90()*0.355459);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb530() {
   return (neuron0x1bb8560()*-0.673535);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb570() {
   return (neuron0x1bb8f30()*-0.122265);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb5b0() {
   return (neuron0x1bb9b10()*-0.635759);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb5f0() {
   return (neuron0x1bba4e0()*-0.334776);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb630() {
   return (neuron0x1bab360()*0.351743);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb670() {
   return (neuron0x1babd30()*-0.317303);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb6b0() {
   return (neuron0x1bac700()*-0.408181);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb6f0() {
   return (neuron0x1bbed40()*-0.388607);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb730() {
   return (neuron0x1bbf5f0()*0.293009);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb770() {
   return (neuron0x1bbffc0()*-0.0830963);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcb7b0() {
   return (neuron0x1bc0990()*0.533115);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcba10() {
   return (neuron0x1bc7b90()*1.74308);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcba50() {
   return (neuron0x1bc7f30()*4.27086);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcba90() {
   return (neuron0x1bc83d0()*-13.2578);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcbad0() {
   return (neuron0x1bc9530()*3.1866);
}

double NNfunction_ns_chiPlus2_uL::synapse0x1bcbb10() {
   return (neuron0x1bca690()*-0.860751);
}

