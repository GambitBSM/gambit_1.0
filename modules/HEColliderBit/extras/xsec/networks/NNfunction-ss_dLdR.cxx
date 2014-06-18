#include "NNfunction-ss_dLdR.h"
#include <cmath>

double NNfunction-ss_dLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9944)/15.0335;
   input1 = (in1 - 68.6064)/680.991;
   input2 = (in2 - 360.031)/439.657;
   input3 = (in3 - 354.486)/617.338;
   input4 = (in4 - 782.189)/640.569;
   input5 = (in5 - 700.151)/624.407;
   input6 = (in6 - 706.043)/627.812;
   input7 = (in7 - 695.081)/623.079;
   input8 = (in8 - 699.95)/662.451;
   input9 = (in9 - 688.854)/645.419;
   input10 = (in10 - 681.533)/661.923;
   input11 = (in11 - 684.255)/411.577;
   input12 = (in12 - 786.495)/578.294;
   input13 = (in13 - 613.227)/375.909;
   input14 = (in14 - 768.457)/535.887;
   input15 = (in15 - 769.169)/534.798;
   input16 = (in16 - 529.488)/368.487;
   input17 = (in17 - 678.717)/410.26;
   input18 = (in18 - 784.431)/586.779;
   input19 = (in19 - 772.91)/572.102;
   input20 = (in20 - -269.87)/430.606;
   input21 = (in21 - -351.01)/903.851;
   input22 = (in22 - -7.29794)/898.342;
   input23 = (in23 - 26.8892)/515.718;
   switch(index) {
     case 0:
         return neuron0x1f71400();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.9944)/15.0335;
   input1 = (input[1] - 68.6064)/680.991;
   input2 = (input[2] - 360.031)/439.657;
   input3 = (input[3] - 354.486)/617.338;
   input4 = (input[4] - 782.189)/640.569;
   input5 = (input[5] - 700.151)/624.407;
   input6 = (input[6] - 706.043)/627.812;
   input7 = (input[7] - 695.081)/623.079;
   input8 = (input[8] - 699.95)/662.451;
   input9 = (input[9] - 688.854)/645.419;
   input10 = (input[10] - 681.533)/661.923;
   input11 = (input[11] - 684.255)/411.577;
   input12 = (input[12] - 786.495)/578.294;
   input13 = (input[13] - 613.227)/375.909;
   input14 = (input[14] - 768.457)/535.887;
   input15 = (input[15] - 769.169)/534.798;
   input16 = (input[16] - 529.488)/368.487;
   input17 = (input[17] - 678.717)/410.26;
   input18 = (input[18] - 784.431)/586.779;
   input19 = (input[19] - 772.91)/572.102;
   input20 = (input[20] - -269.87)/430.606;
   input21 = (input[21] - -351.01)/903.851;
   input22 = (input[22] - -7.29794)/898.342;
   input23 = (input[23] - 26.8892)/515.718;
   switch(index) {
     case 0:
         return neuron0x1f71400();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLdR::neuron0x1f3d4f0() {
   return input0;
}

double NNfunction-ss_dLdR::neuron0x1f3d830() {
   return input1;
}

double NNfunction-ss_dLdR::neuron0x1f3db70() {
   return input2;
}

double NNfunction-ss_dLdR::neuron0x1f3deb0() {
   return input3;
}

double NNfunction-ss_dLdR::neuron0x1f3e1f0() {
   return input4;
}

double NNfunction-ss_dLdR::neuron0x1f3e530() {
   return input5;
}

double NNfunction-ss_dLdR::neuron0x1f3e870() {
   return input6;
}

double NNfunction-ss_dLdR::neuron0x1f3ebb0() {
   return input7;
}

double NNfunction-ss_dLdR::neuron0x1f3eef0() {
   return input8;
}

double NNfunction-ss_dLdR::neuron0x1f3f230() {
   return input9;
}

double NNfunction-ss_dLdR::neuron0x1f3f570() {
   return input10;
}

double NNfunction-ss_dLdR::neuron0x1f3f8b0() {
   return input11;
}

double NNfunction-ss_dLdR::neuron0x1f3fbf0() {
   return input12;
}

double NNfunction-ss_dLdR::neuron0x1f3ff30() {
   return input13;
}

double NNfunction-ss_dLdR::neuron0x1f40270() {
   return input14;
}

double NNfunction-ss_dLdR::neuron0x1f405b0() {
   return input15;
}

double NNfunction-ss_dLdR::neuron0x1f408f0() {
   return input16;
}

double NNfunction-ss_dLdR::neuron0x1f40e50() {
   return input17;
}

double NNfunction-ss_dLdR::neuron0x1f41070() {
   return input18;
}

double NNfunction-ss_dLdR::neuron0x1f413b0() {
   return input19;
}

double NNfunction-ss_dLdR::neuron0x1f416f0() {
   return input20;
}

double NNfunction-ss_dLdR::neuron0x1f41a30() {
   return input21;
}

double NNfunction-ss_dLdR::neuron0x1f41d70() {
   return input22;
}

double NNfunction-ss_dLdR::neuron0x1f420b0() {
   return input23;
}

double NNfunction-ss_dLdR::input0x1f42520() {
   double input = 0.915038;
   input += synapse0x1f3d3b0();
   input += synapse0x1f3d3f0();
   input += synapse0x1f427d0();
   input += synapse0x1f42810();
   input += synapse0x1f42850();
   input += synapse0x1f42890();
   input += synapse0x1f428d0();
   input += synapse0x1f42910();
   input += synapse0x1f42950();
   input += synapse0x1f42990();
   input += synapse0x1f429d0();
   input += synapse0x1f42a10();
   input += synapse0x1f42a50();
   input += synapse0x1f42a90();
   input += synapse0x1f42ad0();
   input += synapse0x1f42b10();
   input += synapse0x1f3d320();
   input += synapse0x1f3d360();
   input += synapse0x1cf86d0();
   input += synapse0x1cf8710();
   input += synapse0x1f42d70();
   input += synapse0x1f42db0();
   input += synapse0x1f42df0();
   input += synapse0x1f42e30();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f42520() {
   double input = input0x1f42520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f42e70() {
   double input = -0.612546;
   input += synapse0x1f431b0();
   input += synapse0x1f431f0();
   input += synapse0x1f43230();
   input += synapse0x1f43270();
   input += synapse0x1f432b0();
   input += synapse0x1f432f0();
   input += synapse0x1f43330();
   input += synapse0x1f43370();
   input += synapse0x1f433b0();
   input += synapse0x1f42c60();
   input += synapse0x1f42ca0();
   input += synapse0x1f42ce0();
   input += synapse0x1f42d20();
   input += synapse0x1f43600();
   input += synapse0x1f43640();
   input += synapse0x1f43680();
   input += synapse0x1f43000();
   input += synapse0x1f43040();
   input += synapse0x1f437d0();
   input += synapse0x1f43810();
   input += synapse0x1f43850();
   input += synapse0x1f43890();
   input += synapse0x1f438d0();
   input += synapse0x1f43910();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f42e70() {
   double input = input0x1f42e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f43950() {
   double input = -0.441396;
   input += synapse0x1f43c90();
   input += synapse0x1f43cd0();
   input += synapse0x1f43d10();
   input += synapse0x1f43d50();
   input += synapse0x1f43d90();
   input += synapse0x1f43dd0();
   input += synapse0x1f43e10();
   input += synapse0x1f43e50();
   input += synapse0x1f43e90();
   input += synapse0x1f43ed0();
   input += synapse0x1f43f10();
   input += synapse0x1f43f50();
   input += synapse0x1f43f90();
   input += synapse0x1f43fd0();
   input += synapse0x1f44010();
   input += synapse0x1f44050();
   input += synapse0x1f43ae0();
   input += synapse0x1f43b20();
   input += synapse0x1cf8d80();
   input += synapse0x1d06650();
   input += synapse0x1d06690();
   input += synapse0x1f2c580();
   input += synapse0x1f2c5c0();
   input += synapse0x1f2c600();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f43950() {
   double input = input0x1f43950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f433f0() {
   double input = -1.15423;
   input += synapse0x1d06ed0();
   input += synapse0x1f43580();
   input += synapse0x1f435c0();
   input += synapse0x1f441a0();
   input += synapse0x1f441e0();
   input += synapse0x1f44220();
   input += synapse0x1f44260();
   input += synapse0x1f442a0();
   input += synapse0x1f442e0();
   input += synapse0x1f44320();
   input += synapse0x1f44360();
   input += synapse0x1f443a0();
   input += synapse0x1f443e0();
   input += synapse0x1f44420();
   input += synapse0x1f44460();
   input += synapse0x1f444a0();
   input += synapse0x1f3d430();
   input += synapse0x1f3d470();
   input += synapse0x1f3d4b0();
   input += synapse0x1f445f0();
   input += synapse0x1f44630();
   input += synapse0x1f44670();
   input += synapse0x1f446b0();
   input += synapse0x1f446f0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f433f0() {
   double input = input0x1f433f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f44730() {
   double input = -1.1339;
   input += synapse0x1f44a70();
   input += synapse0x1f44ab0();
   input += synapse0x1f44af0();
   input += synapse0x1f44b30();
   input += synapse0x1f44b70();
   input += synapse0x1f44bb0();
   input += synapse0x1f44bf0();
   input += synapse0x1f44c30();
   input += synapse0x1f44c70();
   input += synapse0x1f44cb0();
   input += synapse0x1f44cf0();
   input += synapse0x1f44d30();
   input += synapse0x1f44d70();
   input += synapse0x1f44db0();
   input += synapse0x1f44df0();
   input += synapse0x1f44e30();
   input += synapse0x1f448c0();
   input += synapse0x1f44900();
   input += synapse0x1f44f80();
   input += synapse0x1f44fc0();
   input += synapse0x1f45000();
   input += synapse0x1f45040();
   input += synapse0x1f45080();
   input += synapse0x1f450c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f44730() {
   double input = input0x1f44730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f45100() {
   double input = -0.820762;
   input += synapse0x1f45440();
   input += synapse0x1f45480();
   input += synapse0x1f454c0();
   input += synapse0x1f45500();
   input += synapse0x1f45540();
   input += synapse0x1f45580();
   input += synapse0x1f455c0();
   input += synapse0x1f45600();
   input += synapse0x1f45640();
   input += synapse0x1d069a0();
   input += synapse0x1d069e0();
   input += synapse0x1d06a20();
   input += synapse0x1d06a60();
   input += synapse0x1d06aa0();
   input += synapse0x1d06ae0();
   input += synapse0x1d06b20();
   input += synapse0x1f45290();
   input += synapse0x1f452d0();
   input += synapse0x1d06c70();
   input += synapse0x1d06cb0();
   input += synapse0x1d06cf0();
   input += synapse0x1d06d30();
   input += synapse0x1d06d70();
   input += synapse0x1f45e90();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f45100() {
   double input = input0x1f45100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f45ed0() {
   double input = 1.55545;
   input += synapse0x1f46210();
   input += synapse0x1f46250();
   input += synapse0x1f46290();
   input += synapse0x1f462d0();
   input += synapse0x1f46310();
   input += synapse0x1f46350();
   input += synapse0x1f46390();
   input += synapse0x1f463d0();
   input += synapse0x1f46410();
   input += synapse0x1f46450();
   input += synapse0x1f46490();
   input += synapse0x1f464d0();
   input += synapse0x1f46510();
   input += synapse0x1f46550();
   input += synapse0x1f46590();
   input += synapse0x1f465d0();
   input += synapse0x1f46060();
   input += synapse0x1f460a0();
   input += synapse0x1f46720();
   input += synapse0x1f46760();
   input += synapse0x1f467a0();
   input += synapse0x1f467e0();
   input += synapse0x1f46820();
   input += synapse0x1f46860();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f45ed0() {
   double input = input0x1f45ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f468a0() {
   double input = 1.50201;
   input += synapse0x1f46be0();
   input += synapse0x1f46c20();
   input += synapse0x1f46c60();
   input += synapse0x1f46ca0();
   input += synapse0x1f46ce0();
   input += synapse0x1f46d20();
   input += synapse0x1f46d60();
   input += synapse0x1f46da0();
   input += synapse0x1f46de0();
   input += synapse0x1f46e20();
   input += synapse0x1f46e60();
   input += synapse0x1f46ea0();
   input += synapse0x1f46ee0();
   input += synapse0x1f46f20();
   input += synapse0x1f46f60();
   input += synapse0x1f46fa0();
   input += synapse0x1f46a30();
   input += synapse0x1f46a70();
   input += synapse0x1f470f0();
   input += synapse0x1f47130();
   input += synapse0x1f47170();
   input += synapse0x1f471b0();
   input += synapse0x1f471f0();
   input += synapse0x1f47230();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f468a0() {
   double input = input0x1f468a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f47270() {
   double input = -0.919791;
   input += synapse0x1f40d40();
   input += synapse0x1f40d80();
   input += synapse0x1f40dc0();
   input += synapse0x1f40e00();
   input += synapse0x1f477c0();
   input += synapse0x1f47800();
   input += synapse0x1f47840();
   input += synapse0x1f47880();
   input += synapse0x1f478c0();
   input += synapse0x1f47900();
   input += synapse0x1f47940();
   input += synapse0x1f47980();
   input += synapse0x1f479c0();
   input += synapse0x1f47a00();
   input += synapse0x1f47a40();
   input += synapse0x1f47a80();
   input += synapse0x1f47400();
   input += synapse0x1f47440();
   input += synapse0x1f47bd0();
   input += synapse0x1f47c10();
   input += synapse0x1f47c50();
   input += synapse0x1f47c90();
   input += synapse0x1f47cd0();
   input += synapse0x1f47d10();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f47270() {
   double input = input0x1f47270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f47d50() {
   double input = -3.83682;
   input += synapse0x1f48090();
   input += synapse0x1f480d0();
   input += synapse0x1f48110();
   input += synapse0x1f48150();
   input += synapse0x1f48190();
   input += synapse0x1f481d0();
   input += synapse0x1f48210();
   input += synapse0x1f48250();
   input += synapse0x1f48290();
   input += synapse0x1f482d0();
   input += synapse0x1f48310();
   input += synapse0x1f48350();
   input += synapse0x1f48390();
   input += synapse0x1f483d0();
   input += synapse0x1f48410();
   input += synapse0x1f48450();
   input += synapse0x1f47ee0();
   input += synapse0x1f47f20();
   input += synapse0x1f485a0();
   input += synapse0x1f485e0();
   input += synapse0x1f48620();
   input += synapse0x1f48660();
   input += synapse0x1f486a0();
   input += synapse0x1f486e0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f47d50() {
   double input = input0x1f47d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f48720() {
   double input = -0.503148;
   input += synapse0x1f48a60();
   input += synapse0x1f48aa0();
   input += synapse0x1f48ae0();
   input += synapse0x1f48b20();
   input += synapse0x1f48b60();
   input += synapse0x1f48ba0();
   input += synapse0x1f48be0();
   input += synapse0x1f48c20();
   input += synapse0x1f48c60();
   input += synapse0x1f48ca0();
   input += synapse0x1f48ce0();
   input += synapse0x1f48d20();
   input += synapse0x1f48d60();
   input += synapse0x1f48da0();
   input += synapse0x1f48de0();
   input += synapse0x1f48e20();
   input += synapse0x1f488b0();
   input += synapse0x1f488f0();
   input += synapse0x1f45680();
   input += synapse0x1f456c0();
   input += synapse0x1f45700();
   input += synapse0x1f45740();
   input += synapse0x1f45780();
   input += synapse0x1f457c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f48720() {
   double input = input0x1f48720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f45800() {
   double input = -1.00124;
   input += synapse0x1f45b40();
   input += synapse0x1f45b80();
   input += synapse0x1f45bc0();
   input += synapse0x1f45c00();
   input += synapse0x1f45c40();
   input += synapse0x1f45c80();
   input += synapse0x1f45cc0();
   input += synapse0x1f45d00();
   input += synapse0x1f45d40();
   input += synapse0x1f45d80();
   input += synapse0x1f45dc0();
   input += synapse0x1f45e00();
   input += synapse0x1f45e40();
   input += synapse0x1f49f80();
   input += synapse0x1f49fc0();
   input += synapse0x1f4a000();
   input += synapse0x1f45990();
   input += synapse0x1f459d0();
   input += synapse0x1f4a150();
   input += synapse0x1f4a190();
   input += synapse0x1f4a1d0();
   input += synapse0x1f4a210();
   input += synapse0x1f4a250();
   input += synapse0x1f4a290();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f45800() {
   double input = input0x1f45800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4a2d0() {
   double input = -3.00226;
   input += synapse0x1f4a610();
   input += synapse0x1f4a650();
   input += synapse0x1f4a690();
   input += synapse0x1f4a6d0();
   input += synapse0x1f4a710();
   input += synapse0x1f4a750();
   input += synapse0x1f4a790();
   input += synapse0x1f4a7d0();
   input += synapse0x1f4a810();
   input += synapse0x1f4a850();
   input += synapse0x1f4a890();
   input += synapse0x1f4a8d0();
   input += synapse0x1f4a910();
   input += synapse0x1f4a950();
   input += synapse0x1f4a990();
   input += synapse0x1f4a9d0();
   input += synapse0x1f4a460();
   input += synapse0x1f4a4a0();
   input += synapse0x1f4ab20();
   input += synapse0x1f4ab60();
   input += synapse0x1f4aba0();
   input += synapse0x1f4abe0();
   input += synapse0x1f4ac20();
   input += synapse0x1f4ac60();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4a2d0() {
   double input = input0x1f4a2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4aca0() {
   double input = -0.360826;
   input += synapse0x1f4afe0();
   input += synapse0x1f4b020();
   input += synapse0x1f4b060();
   input += synapse0x1f4b0a0();
   input += synapse0x1f4b0e0();
   input += synapse0x1f4b120();
   input += synapse0x1f4b160();
   input += synapse0x1f4b1a0();
   input += synapse0x1f4b1e0();
   input += synapse0x1f4b220();
   input += synapse0x1f4b260();
   input += synapse0x1f4b2a0();
   input += synapse0x1f4b2e0();
   input += synapse0x1f4b320();
   input += synapse0x1f4b360();
   input += synapse0x1f4b3a0();
   input += synapse0x1f4ae30();
   input += synapse0x1f4ae70();
   input += synapse0x1f4b4f0();
   input += synapse0x1f4b530();
   input += synapse0x1f4b570();
   input += synapse0x1f4b5b0();
   input += synapse0x1f4b5f0();
   input += synapse0x1f4b630();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4aca0() {
   double input = input0x1f4aca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4b670() {
   double input = -1.10063;
   input += synapse0x1f4b9b0();
   input += synapse0x1f4b9f0();
   input += synapse0x1f4ba30();
   input += synapse0x1f4ba70();
   input += synapse0x1f4bab0();
   input += synapse0x1f4baf0();
   input += synapse0x1f4bb30();
   input += synapse0x1f4bb70();
   input += synapse0x1f4bbb0();
   input += synapse0x1f4bbf0();
   input += synapse0x1f4bc30();
   input += synapse0x1f4bc70();
   input += synapse0x1f4bcb0();
   input += synapse0x1f4bcf0();
   input += synapse0x1f4bd30();
   input += synapse0x1f4bd70();
   input += synapse0x1f4b800();
   input += synapse0x1f4b840();
   input += synapse0x1f4bec0();
   input += synapse0x1f4bf00();
   input += synapse0x1f4bf40();
   input += synapse0x1f4bf80();
   input += synapse0x1f4bfc0();
   input += synapse0x1f4c000();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4b670() {
   double input = input0x1f4b670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4c040() {
   double input = 0.377394;
   input += synapse0x1f4c380();
   input += synapse0x1f3d710();
   input += synapse0x1f3d750();
   input += synapse0x1f3da50();
   input += synapse0x1f3da90();
   input += synapse0x1f3dd90();
   input += synapse0x1f3ddd0();
   input += synapse0x1f3e0d0();
   input += synapse0x1f3e110();
   input += synapse0x1f3e410();
   input += synapse0x1f3e450();
   input += synapse0x1f3e750();
   input += synapse0x1f3e790();
   input += synapse0x1f3ea90();
   input += synapse0x1f3ead0();
   input += synapse0x1f3edd0();
   input += synapse0x1f3ee10();
   input += synapse0x1f3f110();
   input += synapse0x1f3f150();
   input += synapse0x1f3f450();
   input += synapse0x1f3f490();
   input += synapse0x1f3f790();
   input += synapse0x1f3f7d0();
   input += synapse0x1f3fad0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4c040() {
   double input = input0x1f4c040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4de50() {
   double input = -0.967409;
   input += synapse0x1f3fb10();
   input += synapse0x1f407d0();
   input += synapse0x1f40810();
   input += synapse0x1f4c1d0();
   input += synapse0x1f4c210();
   input += synapse0x1f40b10();
   input += synapse0x1f40b50();
   input += synapse0x1cf85b0();
   input += synapse0x1cf85f0();
   input += synapse0x1f41290();
   input += synapse0x1f412d0();
   input += synapse0x1f415d0();
   input += synapse0x1f41610();
   input += synapse0x1f41910();
   input += synapse0x1f41950();
   input += synapse0x1f41c50();
   input += synapse0x1f41c90();
   input += synapse0x1f41f90();
   input += synapse0x1f41fd0();
   input += synapse0x1f422d0();
   input += synapse0x1f42310();
   input += synapse0x1f3fe10();
   input += synapse0x1f3fe50();
   input += synapse0x1f4e0f0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4de50() {
   double input = input0x1f4de50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4e130() {
   double input = 0.219677;
   input += synapse0x1f4e470();
   input += synapse0x1f4e4b0();
   input += synapse0x1f4e4f0();
   input += synapse0x1f4e530();
   input += synapse0x1f4e570();
   input += synapse0x1f4e5b0();
   input += synapse0x1f4e5f0();
   input += synapse0x1f4e630();
   input += synapse0x1f4e670();
   input += synapse0x1f4e6b0();
   input += synapse0x1f4e6f0();
   input += synapse0x1f4e730();
   input += synapse0x1f4e770();
   input += synapse0x1f4e7b0();
   input += synapse0x1f4e7f0();
   input += synapse0x1f4e830();
   input += synapse0x1f4e2c0();
   input += synapse0x1f4e300();
   input += synapse0x1f4e980();
   input += synapse0x1f4e9c0();
   input += synapse0x1f4ea00();
   input += synapse0x1f4ea40();
   input += synapse0x1f4ea80();
   input += synapse0x1f4eac0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4e130() {
   double input = input0x1f4e130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4eb00() {
   double input = 1.6448;
   input += synapse0x1f4ee40();
   input += synapse0x1f4ee80();
   input += synapse0x1f4eec0();
   input += synapse0x1f4ef00();
   input += synapse0x1f4ef40();
   input += synapse0x1f4ef80();
   input += synapse0x1f4efc0();
   input += synapse0x1f4f000();
   input += synapse0x1f4f040();
   input += synapse0x1f4f080();
   input += synapse0x1f4f0c0();
   input += synapse0x1f4f100();
   input += synapse0x1f4f140();
   input += synapse0x1f4f180();
   input += synapse0x1f4f1c0();
   input += synapse0x1f4f200();
   input += synapse0x1f4ec90();
   input += synapse0x1f4ecd0();
   input += synapse0x1f4f350();
   input += synapse0x1f4f390();
   input += synapse0x1f4f3d0();
   input += synapse0x1f4f410();
   input += synapse0x1f4f450();
   input += synapse0x1f4f490();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4eb00() {
   double input = input0x1f4eb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4f4d0() {
   double input = 2.19805;
   input += synapse0x1f4f810();
   input += synapse0x1f4f850();
   input += synapse0x1f4f890();
   input += synapse0x1f4f8d0();
   input += synapse0x1f4f910();
   input += synapse0x1f4f950();
   input += synapse0x1f4f990();
   input += synapse0x1f4f9d0();
   input += synapse0x1f4fa10();
   input += synapse0x1f4fa50();
   input += synapse0x1f4fa90();
   input += synapse0x1f4fad0();
   input += synapse0x1f4fb10();
   input += synapse0x1f4fb50();
   input += synapse0x1f4fb90();
   input += synapse0x1f4fbd0();
   input += synapse0x1f4f660();
   input += synapse0x1f4f6a0();
   input += synapse0x1f4fd20();
   input += synapse0x1f4fd60();
   input += synapse0x1f4fda0();
   input += synapse0x1f4fde0();
   input += synapse0x1f4fe20();
   input += synapse0x1f4fe60();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4f4d0() {
   double input = input0x1f4f4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4fea0() {
   double input = -1.16137;
   input += synapse0x1f501e0();
   input += synapse0x1f50220();
   input += synapse0x1f50260();
   input += synapse0x1f502a0();
   input += synapse0x1f502e0();
   input += synapse0x1f50320();
   input += synapse0x1f50360();
   input += synapse0x1f503a0();
   input += synapse0x1f503e0();
   input += synapse0x1f50420();
   input += synapse0x1f50460();
   input += synapse0x1f504a0();
   input += synapse0x1f504e0();
   input += synapse0x1f50520();
   input += synapse0x1f50560();
   input += synapse0x1f505a0();
   input += synapse0x1f50030();
   input += synapse0x1f50070();
   input += synapse0x1f506f0();
   input += synapse0x1f50730();
   input += synapse0x1f50770();
   input += synapse0x1f507b0();
   input += synapse0x1f507f0();
   input += synapse0x1f50830();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4fea0() {
   double input = input0x1f4fea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f50870() {
   double input = 0.927767;
   input += synapse0x1f50bb0();
   input += synapse0x1f50bf0();
   input += synapse0x1f50c30();
   input += synapse0x1f50c70();
   input += synapse0x1f50cb0();
   input += synapse0x1f50cf0();
   input += synapse0x1f50d30();
   input += synapse0x1f50d70();
   input += synapse0x1f50db0();
   input += synapse0x1f48f70();
   input += synapse0x1f48fb0();
   input += synapse0x1f48ff0();
   input += synapse0x1f49030();
   input += synapse0x1f49070();
   input += synapse0x1f490b0();
   input += synapse0x1f490f0();
   input += synapse0x1f50a00();
   input += synapse0x1f50a40();
   input += synapse0x1f49240();
   input += synapse0x1f49280();
   input += synapse0x1f492c0();
   input += synapse0x1f49300();
   input += synapse0x1f49340();
   input += synapse0x1f49380();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f50870() {
   double input = input0x1f50870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f493c0() {
   double input = -0.860946;
   input += synapse0x1f49700();
   input += synapse0x1f49740();
   input += synapse0x1f49780();
   input += synapse0x1f497c0();
   input += synapse0x1f49800();
   input += synapse0x1f49840();
   input += synapse0x1f49880();
   input += synapse0x1f498c0();
   input += synapse0x1f49900();
   input += synapse0x1f49940();
   input += synapse0x1f49980();
   input += synapse0x1f499c0();
   input += synapse0x1f49a00();
   input += synapse0x1f49a40();
   input += synapse0x1f49a80();
   input += synapse0x1f49ac0();
   input += synapse0x1f49550();
   input += synapse0x1f49590();
   input += synapse0x1f49c10();
   input += synapse0x1f49c50();
   input += synapse0x1f49c90();
   input += synapse0x1f49cd0();
   input += synapse0x1f49d10();
   input += synapse0x1f49d50();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f493c0() {
   double input = input0x1f493c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f49d90() {
   double input = -2.3527;
   input += synapse0x1f49f20();
   input += synapse0x1f52fb0();
   input += synapse0x1f52ff0();
   input += synapse0x1f53030();
   input += synapse0x1f53070();
   input += synapse0x1f530b0();
   input += synapse0x1f530f0();
   input += synapse0x1f53130();
   input += synapse0x1f53170();
   input += synapse0x1f531b0();
   input += synapse0x1f531f0();
   input += synapse0x1f53230();
   input += synapse0x1f53270();
   input += synapse0x1f532b0();
   input += synapse0x1f532f0();
   input += synapse0x1f53330();
   input += synapse0x1f52e00();
   input += synapse0x1f52e40();
   input += synapse0x1f53480();
   input += synapse0x1f534c0();
   input += synapse0x1f53500();
   input += synapse0x1f53540();
   input += synapse0x1f53580();
   input += synapse0x1f535c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f49d90() {
   double input = input0x1f49d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f53600() {
   double input = -1.72752;
   input += synapse0x1f53940();
   input += synapse0x1f53980();
   input += synapse0x1f539c0();
   input += synapse0x1f53a00();
   input += synapse0x1f53a40();
   input += synapse0x1f53a80();
   input += synapse0x1f53ac0();
   input += synapse0x1f53b00();
   input += synapse0x1f53b40();
   input += synapse0x1f53b80();
   input += synapse0x1f53bc0();
   input += synapse0x1f53c00();
   input += synapse0x1f53c40();
   input += synapse0x1f53c80();
   input += synapse0x1f53cc0();
   input += synapse0x1f53d00();
   input += synapse0x1f53790();
   input += synapse0x1f537d0();
   input += synapse0x1f53e50();
   input += synapse0x1f53e90();
   input += synapse0x1f53ed0();
   input += synapse0x1f53f10();
   input += synapse0x1f53f50();
   input += synapse0x1f53f90();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f53600() {
   double input = input0x1f53600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f53fd0() {
   double input = 2.29881;
   input += synapse0x1f54310();
   input += synapse0x1f54350();
   input += synapse0x1f54390();
   input += synapse0x1f543d0();
   input += synapse0x1f54410();
   input += synapse0x1f54450();
   input += synapse0x1f54490();
   input += synapse0x1f544d0();
   input += synapse0x1f54510();
   input += synapse0x1f54550();
   input += synapse0x1f54590();
   input += synapse0x1f545d0();
   input += synapse0x1f54610();
   input += synapse0x1f54650();
   input += synapse0x1f54690();
   input += synapse0x1f546d0();
   input += synapse0x1f54160();
   input += synapse0x1f541a0();
   input += synapse0x1f54820();
   input += synapse0x1f54860();
   input += synapse0x1f548a0();
   input += synapse0x1f548e0();
   input += synapse0x1f54920();
   input += synapse0x1f54960();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f53fd0() {
   double input = input0x1f53fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f549a0() {
   double input = -1.58471;
   input += synapse0x1f54ce0();
   input += synapse0x1f54d20();
   input += synapse0x1f54d60();
   input += synapse0x1f54da0();
   input += synapse0x1f54de0();
   input += synapse0x1f54e20();
   input += synapse0x1f54e60();
   input += synapse0x1f54ea0();
   input += synapse0x1f54ee0();
   input += synapse0x1f54f20();
   input += synapse0x1f54f60();
   input += synapse0x1f54fa0();
   input += synapse0x1f54fe0();
   input += synapse0x1f55020();
   input += synapse0x1f55060();
   input += synapse0x1f550a0();
   input += synapse0x1f54b30();
   input += synapse0x1f54b70();
   input += synapse0x1f551f0();
   input += synapse0x1f55230();
   input += synapse0x1f55270();
   input += synapse0x1f552b0();
   input += synapse0x1f552f0();
   input += synapse0x1f55330();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f549a0() {
   double input = input0x1f549a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f55370() {
   double input = 0.202383;
   input += synapse0x1f556b0();
   input += synapse0x1f556f0();
   input += synapse0x1f55730();
   input += synapse0x1f55770();
   input += synapse0x1f557b0();
   input += synapse0x1f557f0();
   input += synapse0x1f55830();
   input += synapse0x1f55870();
   input += synapse0x1f558b0();
   input += synapse0x1f558f0();
   input += synapse0x1f55930();
   input += synapse0x1f55970();
   input += synapse0x1f559b0();
   input += synapse0x1f559f0();
   input += synapse0x1f55a30();
   input += synapse0x1f55a70();
   input += synapse0x1f55500();
   input += synapse0x1f55540();
   input += synapse0x1f55bc0();
   input += synapse0x1f55c00();
   input += synapse0x1f55c40();
   input += synapse0x1f55c80();
   input += synapse0x1f55cc0();
   input += synapse0x1f55d00();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f55370() {
   double input = input0x1f55370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f55d40() {
   double input = 1.3042;
   input += synapse0x1f56080();
   input += synapse0x1f560c0();
   input += synapse0x1f56100();
   input += synapse0x1f56140();
   input += synapse0x1f56180();
   input += synapse0x1f561c0();
   input += synapse0x1f56200();
   input += synapse0x1f56240();
   input += synapse0x1f56280();
   input += synapse0x1f562c0();
   input += synapse0x1f56300();
   input += synapse0x1f56340();
   input += synapse0x1f56380();
   input += synapse0x1f563c0();
   input += synapse0x1f56400();
   input += synapse0x1f56440();
   input += synapse0x1f55ed0();
   input += synapse0x1f55f10();
   input += synapse0x1f56590();
   input += synapse0x1f565d0();
   input += synapse0x1f56610();
   input += synapse0x1f56650();
   input += synapse0x1f56690();
   input += synapse0x1f566d0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f55d40() {
   double input = input0x1f55d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f56710() {
   double input = -0.631029;
   input += synapse0x1f56a50();
   input += synapse0x1f56a90();
   input += synapse0x1f56ad0();
   input += synapse0x1f56b10();
   input += synapse0x1f56b50();
   input += synapse0x1f56b90();
   input += synapse0x1f56bd0();
   input += synapse0x1f56c10();
   input += synapse0x1f56c50();
   input += synapse0x1f56c90();
   input += synapse0x1f56cd0();
   input += synapse0x1f56d10();
   input += synapse0x1f56d50();
   input += synapse0x1f56d90();
   input += synapse0x1f56dd0();
   input += synapse0x1f56e10();
   input += synapse0x1f568a0();
   input += synapse0x1f568e0();
   input += synapse0x1f56f60();
   input += synapse0x1f56fa0();
   input += synapse0x1f56fe0();
   input += synapse0x1f57020();
   input += synapse0x1f57060();
   input += synapse0x1f570a0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f56710() {
   double input = input0x1f56710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f570e0() {
   double input = -1.28046;
   input += synapse0x1f57420();
   input += synapse0x1f57460();
   input += synapse0x1f574a0();
   input += synapse0x1f574e0();
   input += synapse0x1f57520();
   input += synapse0x1f57560();
   input += synapse0x1f575a0();
   input += synapse0x1f575e0();
   input += synapse0x1f57620();
   input += synapse0x1f57660();
   input += synapse0x1f576a0();
   input += synapse0x1f576e0();
   input += synapse0x1f57720();
   input += synapse0x1f57760();
   input += synapse0x1f577a0();
   input += synapse0x1f577e0();
   input += synapse0x1f57270();
   input += synapse0x1f572b0();
   input += synapse0x1f57930();
   input += synapse0x1f57970();
   input += synapse0x1f579b0();
   input += synapse0x1f579f0();
   input += synapse0x1f57a30();
   input += synapse0x1f57a70();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f570e0() {
   double input = input0x1f570e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f57ab0() {
   double input = 1.50499;
   input += synapse0x1f57df0();
   input += synapse0x1f4c3c0();
   input += synapse0x1f4c400();
   input += synapse0x1f4c440();
   input += synapse0x1f4c690();
   input += synapse0x1f4c6d0();
   input += synapse0x1f4c710();
   input += synapse0x1f4c960();
   input += synapse0x1f4c9a0();
   input += synapse0x1f4cbf0();
   input += synapse0x1f4cc30();
   input += synapse0x1f4cc70();
   input += synapse0x1f4cec0();
   input += synapse0x1f4cf00();
   input += synapse0x1f4d150();
   input += synapse0x1f4d190();
   input += synapse0x1f57c40();
   input += synapse0x1f57c80();
   input += synapse0x1f4d2e0();
   input += synapse0x1f4d7f0();
   input += synapse0x1f4d830();
   input += synapse0x1f4d870();
   input += synapse0x1f4dac0();
   input += synapse0x1f4db00();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f57ab0() {
   double input = input0x1f57ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f4db40() {
   double input = 0.803406;
   input += synapse0x1f4d3b0();
   input += synapse0x1f4d3f0();
   input += synapse0x1f4d430();
   input += synapse0x1f4d470();
   input += synapse0x1f4ddf0();
   input += synapse0x1f5a140();
   input += synapse0x1f5a180();
   input += synapse0x1f5a1c0();
   input += synapse0x1f5a200();
   input += synapse0x1f5a240();
   input += synapse0x1f5a280();
   input += synapse0x1f5a2c0();
   input += synapse0x1f5a300();
   input += synapse0x1f5a340();
   input += synapse0x1f5a380();
   input += synapse0x1f5a3c0();
   input += synapse0x1f4dcd0();
   input += synapse0x1f4dd10();
   input += synapse0x1f5a510();
   input += synapse0x1f5a550();
   input += synapse0x1f5a590();
   input += synapse0x1f5a5d0();
   input += synapse0x1f5a610();
   input += synapse0x1f5a650();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f4db40() {
   double input = input0x1f4db40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5a690() {
   double input = 1.08509;
   input += synapse0x1f5a9d0();
   input += synapse0x1f5aa10();
   input += synapse0x1f5aa50();
   input += synapse0x1f5aa90();
   input += synapse0x1f5aad0();
   input += synapse0x1f5ab10();
   input += synapse0x1f5ab50();
   input += synapse0x1f5ab90();
   input += synapse0x1f5abd0();
   input += synapse0x1f5ac10();
   input += synapse0x1f5ac50();
   input += synapse0x1f5ac90();
   input += synapse0x1f5acd0();
   input += synapse0x1f5ad10();
   input += synapse0x1f5ad50();
   input += synapse0x1f5ad90();
   input += synapse0x1f5a820();
   input += synapse0x1f5a860();
   input += synapse0x1f5aee0();
   input += synapse0x1f5af20();
   input += synapse0x1f5af60();
   input += synapse0x1f5afa0();
   input += synapse0x1f5afe0();
   input += synapse0x1f5b020();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5a690() {
   double input = input0x1f5a690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5b060() {
   double input = 0.351507;
   input += synapse0x1f5b3a0();
   input += synapse0x1f5b3e0();
   input += synapse0x1f5b420();
   input += synapse0x1f5b460();
   input += synapse0x1f5b4a0();
   input += synapse0x1f5b4e0();
   input += synapse0x1f5b520();
   input += synapse0x1f5b560();
   input += synapse0x1f5b5a0();
   input += synapse0x1f5b5e0();
   input += synapse0x1f5b620();
   input += synapse0x1f5b660();
   input += synapse0x1f5b6a0();
   input += synapse0x1f5b6e0();
   input += synapse0x1f5b720();
   input += synapse0x1f5b760();
   input += synapse0x1f5b1f0();
   input += synapse0x1f5b230();
   input += synapse0x1f5b8b0();
   input += synapse0x1f5b8f0();
   input += synapse0x1f5b930();
   input += synapse0x1f5b970();
   input += synapse0x1f5b9b0();
   input += synapse0x1f5b9f0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5b060() {
   double input = input0x1f5b060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5ba30() {
   double input = -1.2074;
   input += synapse0x1f5bd70();
   input += synapse0x1f5bdb0();
   input += synapse0x1f5bdf0();
   input += synapse0x1f5be30();
   input += synapse0x1f5be70();
   input += synapse0x1f5beb0();
   input += synapse0x1f5bef0();
   input += synapse0x1f5bf30();
   input += synapse0x1f5bf70();
   input += synapse0x1f5bfb0();
   input += synapse0x1f5bff0();
   input += synapse0x1f5c030();
   input += synapse0x1f5c070();
   input += synapse0x1f5c0b0();
   input += synapse0x1f5c0f0();
   input += synapse0x1f5c130();
   input += synapse0x1f5bbc0();
   input += synapse0x1f5bc00();
   input += synapse0x1f5c280();
   input += synapse0x1f5c2c0();
   input += synapse0x1f5c300();
   input += synapse0x1f5c340();
   input += synapse0x1f5c380();
   input += synapse0x1f5c3c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5ba30() {
   double input = input0x1f5ba30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5c400() {
   double input = -0.920396;
   input += synapse0x1f5c740();
   input += synapse0x1f5c780();
   input += synapse0x1f5c7c0();
   input += synapse0x1f5c800();
   input += synapse0x1f5c840();
   input += synapse0x1f5c880();
   input += synapse0x1f5c8c0();
   input += synapse0x1f5c900();
   input += synapse0x1f5c940();
   input += synapse0x1f5c980();
   input += synapse0x1f5c9c0();
   input += synapse0x1f5ca00();
   input += synapse0x1f5ca40();
   input += synapse0x1f5ca80();
   input += synapse0x1f5cac0();
   input += synapse0x1f5cb00();
   input += synapse0x1f5c590();
   input += synapse0x1f5c5d0();
   input += synapse0x1f5cc50();
   input += synapse0x1f5cc90();
   input += synapse0x1f5ccd0();
   input += synapse0x1f5cd10();
   input += synapse0x1f5cd50();
   input += synapse0x1f5cd90();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5c400() {
   double input = input0x1f5c400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5cdd0() {
   double input = 0.819477;
   input += synapse0x1f5d110();
   input += synapse0x1f5d150();
   input += synapse0x1f5d190();
   input += synapse0x1f5d1d0();
   input += synapse0x1f5d210();
   input += synapse0x1f5d250();
   input += synapse0x1f5d290();
   input += synapse0x1f5d2d0();
   input += synapse0x1f5d310();
   input += synapse0x1f5d350();
   input += synapse0x1f5d390();
   input += synapse0x1f5d3d0();
   input += synapse0x1f5d410();
   input += synapse0x1f5d450();
   input += synapse0x1f5d490();
   input += synapse0x1f5d4d0();
   input += synapse0x1f5cf60();
   input += synapse0x1f5cfa0();
   input += synapse0x1f5d620();
   input += synapse0x1f5d660();
   input += synapse0x1f5d6a0();
   input += synapse0x1f5d6e0();
   input += synapse0x1f5d720();
   input += synapse0x1f5d760();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5cdd0() {
   double input = input0x1f5cdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5d7a0() {
   double input = -0.704218;
   input += synapse0x1f5dae0();
   input += synapse0x1f5db20();
   input += synapse0x1f5db60();
   input += synapse0x1f5dba0();
   input += synapse0x1f5dbe0();
   input += synapse0x1f5dc20();
   input += synapse0x1f5dc60();
   input += synapse0x1f5dca0();
   input += synapse0x1f5dce0();
   input += synapse0x1f5dd20();
   input += synapse0x1f5dd60();
   input += synapse0x1f5dda0();
   input += synapse0x1f5dde0();
   input += synapse0x1f5de20();
   input += synapse0x1f5de60();
   input += synapse0x1f5dea0();
   input += synapse0x1f5d930();
   input += synapse0x1f5d970();
   input += synapse0x1f5dff0();
   input += synapse0x1f5e030();
   input += synapse0x1f5e070();
   input += synapse0x1f5e0b0();
   input += synapse0x1f5e0f0();
   input += synapse0x1f5e130();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5d7a0() {
   double input = input0x1f5d7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5e170() {
   double input = -0.736535;
   input += synapse0x1f5e4b0();
   input += synapse0x1f5e4f0();
   input += synapse0x1f5e530();
   input += synapse0x1f5e570();
   input += synapse0x1f5e5b0();
   input += synapse0x1f5e5f0();
   input += synapse0x1f5e630();
   input += synapse0x1f5e670();
   input += synapse0x1f5e6b0();
   input += synapse0x1f5e6f0();
   input += synapse0x1f5e730();
   input += synapse0x1f5e770();
   input += synapse0x1f5e7b0();
   input += synapse0x1f5e7f0();
   input += synapse0x1f5e830();
   input += synapse0x1f5e870();
   input += synapse0x1f5e300();
   input += synapse0x1f5e340();
   input += synapse0x1f5e9c0();
   input += synapse0x1f5ea00();
   input += synapse0x1f5ea40();
   input += synapse0x1f5ea80();
   input += synapse0x1f5eac0();
   input += synapse0x1f5eb00();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5e170() {
   double input = input0x1f5e170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5eb40() {
   double input = 0.814111;
   input += synapse0x1f475b0();
   input += synapse0x1f475f0();
   input += synapse0x1f47630();
   input += synapse0x1f47670();
   input += synapse0x1f476b0();
   input += synapse0x1f476f0();
   input += synapse0x1f47730();
   input += synapse0x1f47770();
   input += synapse0x1f5f290();
   input += synapse0x1f5f2d0();
   input += synapse0x1f5f310();
   input += synapse0x1f5f350();
   input += synapse0x1f5f390();
   input += synapse0x1f5f3d0();
   input += synapse0x1f5f410();
   input += synapse0x1f5f450();
   input += synapse0x1f5ecd0();
   input += synapse0x1f5ed10();
   input += synapse0x1f5f5a0();
   input += synapse0x1f5f5e0();
   input += synapse0x1f5f620();
   input += synapse0x1f5f660();
   input += synapse0x1f5f6a0();
   input += synapse0x1f5f6e0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5eb40() {
   double input = input0x1f5eb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f5f720() {
   double input = 6.90378;
   input += synapse0x1f5fa60();
   input += synapse0x1f5faa0();
   input += synapse0x1f5fae0();
   input += synapse0x1f5fb20();
   input += synapse0x1f5fb60();
   input += synapse0x1f5fba0();
   input += synapse0x1f5fbe0();
   input += synapse0x1f5fc20();
   input += synapse0x1f5fc60();
   input += synapse0x1f5fca0();
   input += synapse0x1f5fce0();
   input += synapse0x1f5fd20();
   input += synapse0x1f5fd60();
   input += synapse0x1f5fda0();
   input += synapse0x1f5fde0();
   input += synapse0x1f5fe20();
   input += synapse0x1f5f8b0();
   input += synapse0x1f5f8f0();
   input += synapse0x1f5ff70();
   input += synapse0x1f5ffb0();
   input += synapse0x1f5fff0();
   input += synapse0x1f60030();
   input += synapse0x1f60070();
   input += synapse0x1f600b0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f5f720() {
   double input = input0x1f5f720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f600f0() {
   double input = -0.923467;
   input += synapse0x1f60430();
   input += synapse0x1f60470();
   input += synapse0x1f604b0();
   input += synapse0x1f604f0();
   input += synapse0x1f60530();
   input += synapse0x1f60570();
   input += synapse0x1f605b0();
   input += synapse0x1f605f0();
   input += synapse0x1f60630();
   input += synapse0x1f60670();
   input += synapse0x1f606b0();
   input += synapse0x1f606f0();
   input += synapse0x1f60730();
   input += synapse0x1f60770();
   input += synapse0x1f607b0();
   input += synapse0x1f607f0();
   input += synapse0x1f60280();
   input += synapse0x1f602c0();
   input += synapse0x1f50df0();
   input += synapse0x1f50e30();
   input += synapse0x1f50e70();
   input += synapse0x1f50eb0();
   input += synapse0x1f50ef0();
   input += synapse0x1f50f30();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f600f0() {
   double input = input0x1f600f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f50f70() {
   double input = 1.41448;
   input += synapse0x1f512b0();
   input += synapse0x1f512f0();
   input += synapse0x1f51330();
   input += synapse0x1f51370();
   input += synapse0x1f513b0();
   input += synapse0x1f513f0();
   input += synapse0x1f51430();
   input += synapse0x1f51470();
   input += synapse0x1f514b0();
   input += synapse0x1f514f0();
   input += synapse0x1f51530();
   input += synapse0x1f51570();
   input += synapse0x1f515b0();
   input += synapse0x1f515f0();
   input += synapse0x1f51630();
   input += synapse0x1f51670();
   input += synapse0x1f51100();
   input += synapse0x1f51140();
   input += synapse0x1f517c0();
   input += synapse0x1f51800();
   input += synapse0x1f51840();
   input += synapse0x1f51880();
   input += synapse0x1f518c0();
   input += synapse0x1f51900();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f50f70() {
   double input = input0x1f50f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f51940() {
   double input = 0.901752;
   input += synapse0x1f51c80();
   input += synapse0x1f51cc0();
   input += synapse0x1f51d00();
   input += synapse0x1f51d40();
   input += synapse0x1f51d80();
   input += synapse0x1f51dc0();
   input += synapse0x1f51e00();
   input += synapse0x1f51e40();
   input += synapse0x1f51e80();
   input += synapse0x1f51ec0();
   input += synapse0x1f51f00();
   input += synapse0x1f51f40();
   input += synapse0x1f51f80();
   input += synapse0x1f51fc0();
   input += synapse0x1f52000();
   input += synapse0x1f52040();
   input += synapse0x1f51ad0();
   input += synapse0x1f51b10();
   input += synapse0x1f52190();
   input += synapse0x1f521d0();
   input += synapse0x1f52210();
   input += synapse0x1f52250();
   input += synapse0x1f52290();
   input += synapse0x1f522d0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f51940() {
   double input = input0x1f51940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f52310() {
   double input = 0.286139;
   input += synapse0x1f52650();
   input += synapse0x1f52690();
   input += synapse0x1f526d0();
   input += synapse0x1f52710();
   input += synapse0x1f52750();
   input += synapse0x1f52790();
   input += synapse0x1f527d0();
   input += synapse0x1f52810();
   input += synapse0x1f52850();
   input += synapse0x1f52890();
   input += synapse0x1f528d0();
   input += synapse0x1f52910();
   input += synapse0x1f52950();
   input += synapse0x1f52990();
   input += synapse0x1f529d0();
   input += synapse0x1f52a10();
   input += synapse0x1f524a0();
   input += synapse0x1f524e0();
   input += synapse0x1f52b60();
   input += synapse0x1f52ba0();
   input += synapse0x1f52be0();
   input += synapse0x1f52c20();
   input += synapse0x1f52c60();
   input += synapse0x1f52ca0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f52310() {
   double input = input0x1f52310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f64950() {
   double input = 0.896552;
   input += synapse0x1f64b70();
   input += synapse0x1f64bb0();
   input += synapse0x1f64bf0();
   input += synapse0x1f64c30();
   input += synapse0x1f64c70();
   input += synapse0x1f64cb0();
   input += synapse0x1f64cf0();
   input += synapse0x1f64d30();
   input += synapse0x1f64d70();
   input += synapse0x1f64db0();
   input += synapse0x1f64df0();
   input += synapse0x1f64e30();
   input += synapse0x1f64e70();
   input += synapse0x1f64eb0();
   input += synapse0x1f64ef0();
   input += synapse0x1f64f30();
   input += synapse0x1f52ce0();
   input += synapse0x1f52d20();
   input += synapse0x1f65080();
   input += synapse0x1f650c0();
   input += synapse0x1f65100();
   input += synapse0x1f65140();
   input += synapse0x1f65180();
   input += synapse0x1f651c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f64950() {
   double input = input0x1f64950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f65200() {
   double input = -0.829456;
   input += synapse0x1f65540();
   input += synapse0x1f65580();
   input += synapse0x1f655c0();
   input += synapse0x1f65600();
   input += synapse0x1f65640();
   input += synapse0x1f65680();
   input += synapse0x1f656c0();
   input += synapse0x1f65700();
   input += synapse0x1f65740();
   input += synapse0x1f65780();
   input += synapse0x1f657c0();
   input += synapse0x1f65800();
   input += synapse0x1f65840();
   input += synapse0x1f65880();
   input += synapse0x1f658c0();
   input += synapse0x1f65900();
   input += synapse0x1f65390();
   input += synapse0x1f653d0();
   input += synapse0x1f65a50();
   input += synapse0x1f65a90();
   input += synapse0x1f65ad0();
   input += synapse0x1f65b10();
   input += synapse0x1f65b50();
   input += synapse0x1f65b90();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f65200() {
   double input = input0x1f65200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f65bd0() {
   double input = -0.0621754;
   input += synapse0x1f65f10();
   input += synapse0x1f65f50();
   input += synapse0x1f65f90();
   input += synapse0x1f65fd0();
   input += synapse0x1f66010();
   input += synapse0x1f66050();
   input += synapse0x1f66090();
   input += synapse0x1f660d0();
   input += synapse0x1f66110();
   input += synapse0x1f66150();
   input += synapse0x1f66190();
   input += synapse0x1f661d0();
   input += synapse0x1f66210();
   input += synapse0x1f66250();
   input += synapse0x1f66290();
   input += synapse0x1f662d0();
   input += synapse0x1f65d60();
   input += synapse0x1f65da0();
   input += synapse0x1f66420();
   input += synapse0x1f66460();
   input += synapse0x1f664a0();
   input += synapse0x1f664e0();
   input += synapse0x1f66520();
   input += synapse0x1f66560();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f65bd0() {
   double input = input0x1f65bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f665a0() {
   double input = -0.397861;
   input += synapse0x1f668e0();
   input += synapse0x1f66920();
   input += synapse0x1f66960();
   input += synapse0x1f669a0();
   input += synapse0x1f669e0();
   input += synapse0x1f66a20();
   input += synapse0x1f66a60();
   input += synapse0x1f66aa0();
   input += synapse0x1f66ae0();
   input += synapse0x1f66b20();
   input += synapse0x1f66b60();
   input += synapse0x1f66ba0();
   input += synapse0x1f66be0();
   input += synapse0x1f66c20();
   input += synapse0x1f66c60();
   input += synapse0x1f66ca0();
   input += synapse0x1f66730();
   input += synapse0x1f66770();
   input += synapse0x1f66df0();
   input += synapse0x1f66e30();
   input += synapse0x1f66e70();
   input += synapse0x1f66eb0();
   input += synapse0x1f66ef0();
   input += synapse0x1f66f30();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f665a0() {
   double input = input0x1f665a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f6d7a0() {
   double input = 0.364424;
   input += synapse0x1d06e40();
   input += synapse0x1d06e80();
   input += synapse0x1f449e0();
   input += synapse0x1f44a20();
   input += synapse0x1f453b0();
   input += synapse0x1f453f0();
   input += synapse0x1f46180();
   input += synapse0x1f461c0();
   input += synapse0x1f46b50();
   input += synapse0x1f46b90();
   input += synapse0x1f47520();
   input += synapse0x1f47560();
   input += synapse0x1f48000();
   input += synapse0x1f48040();
   input += synapse0x1f489d0();
   input += synapse0x1f48a10();
   input += synapse0x1f45ab0();
   input += synapse0x1f45af0();
   input += synapse0x1f4a580();
   input += synapse0x1f4a5c0();
   input += synapse0x1f4af50();
   input += synapse0x1f4af90();
   input += synapse0x1f4b920();
   input += synapse0x1f4b960();
   input += synapse0x1f4c2f0();
   input += synapse0x1f4c330();
   input += synapse0x1f40490();
   input += synapse0x1f404d0();
   input += synapse0x1f4e3e0();
   input += synapse0x1f4e420();
   input += synapse0x1f4edb0();
   input += synapse0x1f4edf0();
   input += synapse0x1f4f780();
   input += synapse0x1f4f7c0();
   input += synapse0x1f50150();
   input += synapse0x1f50190();
   input += synapse0x1f50b20();
   input += synapse0x1f50b60();
   input += synapse0x1f49670();
   input += synapse0x1f496b0();
   input += synapse0x1f52f20();
   input += synapse0x1f52f60();
   input += synapse0x1f538b0();
   input += synapse0x1f538f0();
   input += synapse0x1f54280();
   input += synapse0x1f542c0();
   input += synapse0x1f54c50();
   input += synapse0x1f54c90();
   input += synapse0x1f55620();
   input += synapse0x1f55660();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f6d7a0() {
   double input = input0x1f6d7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f6db40() {
   double input = -0.140489;
   input += synapse0x1f57d60();
   input += synapse0x1f57da0();
   input += synapse0x1f4d320();
   input += synapse0x1f4d360();
   input += synapse0x1f5a940();
   input += synapse0x1f5a980();
   input += synapse0x1f5b310();
   input += synapse0x1f5b350();
   input += synapse0x1f5bce0();
   input += synapse0x1f5bd20();
   input += synapse0x1f5c6b0();
   input += synapse0x1f5c6f0();
   input += synapse0x1f5d080();
   input += synapse0x1f5d0c0();
   input += synapse0x1f5da50();
   input += synapse0x1f5da90();
   input += synapse0x1f5e420();
   input += synapse0x1f5e460();
   input += synapse0x1f5edf0();
   input += synapse0x1f5ee30();
   input += synapse0x1f5f9d0();
   input += synapse0x1f5fa10();
   input += synapse0x1f603a0();
   input += synapse0x1f603e0();
   input += synapse0x1f51220();
   input += synapse0x1f51260();
   input += synapse0x1f51bf0();
   input += synapse0x1f51c30();
   input += synapse0x1f525c0();
   input += synapse0x1f52600();
   input += synapse0x1f64ae0();
   input += synapse0x1f64b20();
   input += synapse0x1f654b0();
   input += synapse0x1f654f0();
   input += synapse0x1f65e80();
   input += synapse0x1f65ec0();
   input += synapse0x1f66850();
   input += synapse0x1f66890();
   input += synapse0x1f42740();
   input += synapse0x1f42780();
   input += synapse0x1f55ff0();
   input += synapse0x1f56030();
   input += synapse0x1f66f70();
   input += synapse0x1f66fb0();
   input += synapse0x1f66ff0();
   input += synapse0x1f67030();
   input += synapse0x1f6dee0();
   input += synapse0x1f6df20();
   input += synapse0x1f6df60();
   input += synapse0x1f6dfa0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f6db40() {
   double input = input0x1f6db40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f6dfe0() {
   double input = -0.121423;
   input += synapse0x1f6e320();
   input += synapse0x1f6e360();
   input += synapse0x1f6e3a0();
   input += synapse0x1f6e3e0();
   input += synapse0x1f6e420();
   input += synapse0x1f6e460();
   input += synapse0x1f6e4a0();
   input += synapse0x1f6e4e0();
   input += synapse0x1f6e520();
   input += synapse0x1f6e560();
   input += synapse0x1f6e5a0();
   input += synapse0x1f6e5e0();
   input += synapse0x1f6e620();
   input += synapse0x1f6e660();
   input += synapse0x1f6e6a0();
   input += synapse0x1f6e6e0();
   input += synapse0x1f6e170();
   input += synapse0x1f6e1b0();
   input += synapse0x1f6e830();
   input += synapse0x1f6e870();
   input += synapse0x1f6e8b0();
   input += synapse0x1f6e8f0();
   input += synapse0x1f6e930();
   input += synapse0x1f6e970();
   input += synapse0x1f6e9b0();
   input += synapse0x1f6e9f0();
   input += synapse0x1f6ea30();
   input += synapse0x1f6ea70();
   input += synapse0x1f6eab0();
   input += synapse0x1f6eaf0();
   input += synapse0x1f6eb30();
   input += synapse0x1f6eb70();
   input += synapse0x1f6e720();
   input += synapse0x1f6e760();
   input += synapse0x1f6e7a0();
   input += synapse0x1f6e7e0();
   input += synapse0x1f6edc0();
   input += synapse0x1f6ee00();
   input += synapse0x1f6ee40();
   input += synapse0x1f6ee80();
   input += synapse0x1f6eec0();
   input += synapse0x1f6ef00();
   input += synapse0x1f6ef40();
   input += synapse0x1f6ef80();
   input += synapse0x1f6efc0();
   input += synapse0x1f6f000();
   input += synapse0x1f6f040();
   input += synapse0x1f6f080();
   input += synapse0x1f6f0c0();
   input += synapse0x1f6f100();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f6dfe0() {
   double input = input0x1f6dfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f6f140() {
   double input = 0.517933;
   input += synapse0x1f6f480();
   input += synapse0x1f6f4c0();
   input += synapse0x1f6f500();
   input += synapse0x1f6f540();
   input += synapse0x1f6f580();
   input += synapse0x1f6f5c0();
   input += synapse0x1f6f600();
   input += synapse0x1f6f640();
   input += synapse0x1f6f680();
   input += synapse0x1f6f6c0();
   input += synapse0x1f6f700();
   input += synapse0x1f6f740();
   input += synapse0x1f6f780();
   input += synapse0x1f6f7c0();
   input += synapse0x1f6f800();
   input += synapse0x1f6f840();
   input += synapse0x1f6f2d0();
   input += synapse0x1f6f310();
   input += synapse0x1f6f990();
   input += synapse0x1f6f9d0();
   input += synapse0x1f6fa10();
   input += synapse0x1f6fa50();
   input += synapse0x1f6fa90();
   input += synapse0x1f6fad0();
   input += synapse0x1f6fb10();
   input += synapse0x1f6fb50();
   input += synapse0x1f6fb90();
   input += synapse0x1f6fbd0();
   input += synapse0x1f6fc10();
   input += synapse0x1f6fc50();
   input += synapse0x1f6fc90();
   input += synapse0x1f6fcd0();
   input += synapse0x1f6f880();
   input += synapse0x1f6f8c0();
   input += synapse0x1f6f900();
   input += synapse0x1f6f940();
   input += synapse0x1f6ff20();
   input += synapse0x1f6ff60();
   input += synapse0x1f6ffa0();
   input += synapse0x1f6ffe0();
   input += synapse0x1f70020();
   input += synapse0x1f70060();
   input += synapse0x1f700a0();
   input += synapse0x1f700e0();
   input += synapse0x1f70120();
   input += synapse0x1f70160();
   input += synapse0x1f701a0();
   input += synapse0x1f701e0();
   input += synapse0x1f70220();
   input += synapse0x1f70260();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f6f140() {
   double input = input0x1f6f140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f702a0() {
   double input = -0.227257;
   input += synapse0x1f705e0();
   input += synapse0x1f70620();
   input += synapse0x1f70660();
   input += synapse0x1f706a0();
   input += synapse0x1f706e0();
   input += synapse0x1f70720();
   input += synapse0x1f70760();
   input += synapse0x1f707a0();
   input += synapse0x1f707e0();
   input += synapse0x1f70820();
   input += synapse0x1f70860();
   input += synapse0x1f708a0();
   input += synapse0x1f708e0();
   input += synapse0x1f70920();
   input += synapse0x1f70960();
   input += synapse0x1f709a0();
   input += synapse0x1f70430();
   input += synapse0x1f70470();
   input += synapse0x1f70af0();
   input += synapse0x1f70b30();
   input += synapse0x1f70b70();
   input += synapse0x1f70bb0();
   input += synapse0x1f70bf0();
   input += synapse0x1f70c30();
   input += synapse0x1f70c70();
   input += synapse0x1f70cb0();
   input += synapse0x1f70cf0();
   input += synapse0x1f70d30();
   input += synapse0x1f70d70();
   input += synapse0x1f70db0();
   input += synapse0x1f70df0();
   input += synapse0x1f70e30();
   input += synapse0x1f709e0();
   input += synapse0x1f70a20();
   input += synapse0x1f70a60();
   input += synapse0x1f70aa0();
   input += synapse0x1f71080();
   input += synapse0x1f710c0();
   input += synapse0x1f71100();
   input += synapse0x1f71140();
   input += synapse0x1f71180();
   input += synapse0x1f711c0();
   input += synapse0x1f71200();
   input += synapse0x1f71240();
   input += synapse0x1f71280();
   input += synapse0x1f712c0();
   input += synapse0x1f71300();
   input += synapse0x1f71340();
   input += synapse0x1f71380();
   input += synapse0x1f713c0();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f702a0() {
   double input = input0x1f702a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdR::input0x1f71400() {
   double input = 2.8584;
   input += synapse0x1f71620();
   input += synapse0x1f71660();
   input += synapse0x1f716a0();
   input += synapse0x1f716e0();
   input += synapse0x1f71720();
   return input;
}

double NNfunction-ss_dLdR::neuron0x1f71400() {
   double input = input0x1f71400();
   return (input * 1)+0;
}

double NNfunction-ss_dLdR::synapse0x1f3d3b0() {
   return (neuron0x1f3d4f0()*-0.0413769);
}

double NNfunction-ss_dLdR::synapse0x1f3d3f0() {
   return (neuron0x1f3d830()*0.00774122);
}

double NNfunction-ss_dLdR::synapse0x1f427d0() {
   return (neuron0x1f3db70()*-0.272585);
}

double NNfunction-ss_dLdR::synapse0x1f42810() {
   return (neuron0x1f3deb0()*0.161998);
}

double NNfunction-ss_dLdR::synapse0x1f42850() {
   return (neuron0x1f3e1f0()*-0.0535031);
}

double NNfunction-ss_dLdR::synapse0x1f42890() {
   return (neuron0x1f3e530()*0.000754289);
}

double NNfunction-ss_dLdR::synapse0x1f428d0() {
   return (neuron0x1f3e870()*-0.164356);
}

double NNfunction-ss_dLdR::synapse0x1f42910() {
   return (neuron0x1f3ebb0()*0.00283675);
}

double NNfunction-ss_dLdR::synapse0x1f42950() {
   return (neuron0x1f3eef0()*-0.162092);
}

double NNfunction-ss_dLdR::synapse0x1f42990() {
   return (neuron0x1f3f230()*-0.171765);
}

double NNfunction-ss_dLdR::synapse0x1f429d0() {
   return (neuron0x1f3f570()*-0.0105878);
}

double NNfunction-ss_dLdR::synapse0x1f42a10() {
   return (neuron0x1f3f8b0()*0.943114);
}

double NNfunction-ss_dLdR::synapse0x1f42a50() {
   return (neuron0x1f3fbf0()*0.0369157);
}

double NNfunction-ss_dLdR::synapse0x1f42a90() {
   return (neuron0x1f3ff30()*0.143051);
}

double NNfunction-ss_dLdR::synapse0x1f42ad0() {
   return (neuron0x1f40270()*-0.00974507);
}

double NNfunction-ss_dLdR::synapse0x1f42b10() {
   return (neuron0x1f405b0()*0.0370719);
}

double NNfunction-ss_dLdR::synapse0x1f3d320() {
   return (neuron0x1f408f0()*0.0719802);
}

double NNfunction-ss_dLdR::synapse0x1f3d360() {
   return (neuron0x1f40e50()*1.07285);
}

double NNfunction-ss_dLdR::synapse0x1cf86d0() {
   return (neuron0x1f41070()*-0.0461288);
}

double NNfunction-ss_dLdR::synapse0x1cf8710() {
   return (neuron0x1f413b0()*-0.167858);
}

double NNfunction-ss_dLdR::synapse0x1f42d70() {
   return (neuron0x1f416f0()*-0.111121);
}

double NNfunction-ss_dLdR::synapse0x1f42db0() {
   return (neuron0x1f41a30()*0.00125578);
}

double NNfunction-ss_dLdR::synapse0x1f42df0() {
   return (neuron0x1f41d70()*0.00826504);
}

double NNfunction-ss_dLdR::synapse0x1f42e30() {
   return (neuron0x1f420b0()*0.0744661);
}

double NNfunction-ss_dLdR::synapse0x1f431b0() {
   return (neuron0x1f3d4f0()*0.100968);
}

double NNfunction-ss_dLdR::synapse0x1f431f0() {
   return (neuron0x1f3d830()*0.019738);
}

double NNfunction-ss_dLdR::synapse0x1f43230() {
   return (neuron0x1f3db70()*1.01896);
}

double NNfunction-ss_dLdR::synapse0x1f43270() {
   return (neuron0x1f3deb0()*-0.210329);
}

double NNfunction-ss_dLdR::synapse0x1f432b0() {
   return (neuron0x1f3e1f0()*0.0571211);
}

double NNfunction-ss_dLdR::synapse0x1f432f0() {
   return (neuron0x1f3e530()*0.0322682);
}

double NNfunction-ss_dLdR::synapse0x1f43330() {
   return (neuron0x1f3e870()*0.118961);
}

double NNfunction-ss_dLdR::synapse0x1f43370() {
   return (neuron0x1f3ebb0()*0.0345637);
}

double NNfunction-ss_dLdR::synapse0x1f433b0() {
   return (neuron0x1f3eef0()*0.0473671);
}

double NNfunction-ss_dLdR::synapse0x1f42c60() {
   return (neuron0x1f3f230()*-0.00570744);
}

double NNfunction-ss_dLdR::synapse0x1f42ca0() {
   return (neuron0x1f3f570()*0.105748);
}

double NNfunction-ss_dLdR::synapse0x1f42ce0() {
   return (neuron0x1f3f8b0()*-0.196142);
}

double NNfunction-ss_dLdR::synapse0x1f42d20() {
   return (neuron0x1f3fbf0()*0.011517);
}

double NNfunction-ss_dLdR::synapse0x1f43600() {
   return (neuron0x1f3ff30()*0.127688);
}

double NNfunction-ss_dLdR::synapse0x1f43640() {
   return (neuron0x1f40270()*0.0475388);
}

double NNfunction-ss_dLdR::synapse0x1f43680() {
   return (neuron0x1f405b0()*0.0788413);
}

double NNfunction-ss_dLdR::synapse0x1f43000() {
   return (neuron0x1f408f0()*0.0467378);
}

double NNfunction-ss_dLdR::synapse0x1f43040() {
   return (neuron0x1f40e50()*-0.0138289);
}

double NNfunction-ss_dLdR::synapse0x1f437d0() {
   return (neuron0x1f41070()*0.0405484);
}

double NNfunction-ss_dLdR::synapse0x1f43810() {
   return (neuron0x1f413b0()*0.0732541);
}

double NNfunction-ss_dLdR::synapse0x1f43850() {
   return (neuron0x1f416f0()*0.00694554);
}

double NNfunction-ss_dLdR::synapse0x1f43890() {
   return (neuron0x1f41a30()*-0.00455743);
}

double NNfunction-ss_dLdR::synapse0x1f438d0() {
   return (neuron0x1f41d70()*-0.0505117);
}

double NNfunction-ss_dLdR::synapse0x1f43910() {
   return (neuron0x1f420b0()*0.0483359);
}

double NNfunction-ss_dLdR::synapse0x1f43c90() {
   return (neuron0x1f3d4f0()*0.551006);
}

double NNfunction-ss_dLdR::synapse0x1f43cd0() {
   return (neuron0x1f3d830()*-0.612124);
}

double NNfunction-ss_dLdR::synapse0x1f43d10() {
   return (neuron0x1f3db70()*0.483171);
}

double NNfunction-ss_dLdR::synapse0x1f43d50() {
   return (neuron0x1f3deb0()*-0.168681);
}

double NNfunction-ss_dLdR::synapse0x1f43d90() {
   return (neuron0x1f3e1f0()*0.140676);
}

double NNfunction-ss_dLdR::synapse0x1f43dd0() {
   return (neuron0x1f3e530()*0.477845);
}

double NNfunction-ss_dLdR::synapse0x1f43e10() {
   return (neuron0x1f3e870()*-0.194358);
}

double NNfunction-ss_dLdR::synapse0x1f43e50() {
   return (neuron0x1f3ebb0()*0.00502796);
}

double NNfunction-ss_dLdR::synapse0x1f43e90() {
   return (neuron0x1f3eef0()*0.100655);
}

double NNfunction-ss_dLdR::synapse0x1f43ed0() {
   return (neuron0x1f3f230()*0.231149);
}

double NNfunction-ss_dLdR::synapse0x1f43f10() {
   return (neuron0x1f3f570()*-0.200616);
}

double NNfunction-ss_dLdR::synapse0x1f43f50() {
   return (neuron0x1f3f8b0()*0.545298);
}

double NNfunction-ss_dLdR::synapse0x1f43f90() {
   return (neuron0x1f3fbf0()*0.461669);
}

double NNfunction-ss_dLdR::synapse0x1f43fd0() {
   return (neuron0x1f3ff30()*1.28173);
}

double NNfunction-ss_dLdR::synapse0x1f44010() {
   return (neuron0x1f40270()*0.574119);
}

double NNfunction-ss_dLdR::synapse0x1f44050() {
   return (neuron0x1f405b0()*1.10858);
}

double NNfunction-ss_dLdR::synapse0x1f43ae0() {
   return (neuron0x1f408f0()*-0.0443345);
}

double NNfunction-ss_dLdR::synapse0x1f43b20() {
   return (neuron0x1f40e50()*-0.0603002);
}

double NNfunction-ss_dLdR::synapse0x1cf8d80() {
   return (neuron0x1f41070()*0.639992);
}

double NNfunction-ss_dLdR::synapse0x1d06650() {
   return (neuron0x1f413b0()*-0.44074);
}

double NNfunction-ss_dLdR::synapse0x1d06690() {
   return (neuron0x1f416f0()*0.022576);
}

double NNfunction-ss_dLdR::synapse0x1f2c580() {
   return (neuron0x1f41a30()*-0.221741);
}

double NNfunction-ss_dLdR::synapse0x1f2c5c0() {
   return (neuron0x1f41d70()*0.633004);
}

double NNfunction-ss_dLdR::synapse0x1f2c600() {
   return (neuron0x1f420b0()*-0.19972);
}

double NNfunction-ss_dLdR::synapse0x1d06ed0() {
   return (neuron0x1f3d4f0()*0.170335);
}

double NNfunction-ss_dLdR::synapse0x1f43580() {
   return (neuron0x1f3d830()*-0.580969);
}

double NNfunction-ss_dLdR::synapse0x1f435c0() {
   return (neuron0x1f3db70()*0.109527);
}

double NNfunction-ss_dLdR::synapse0x1f441a0() {
   return (neuron0x1f3deb0()*1.57641);
}

double NNfunction-ss_dLdR::synapse0x1f441e0() {
   return (neuron0x1f3e1f0()*0.287188);
}

double NNfunction-ss_dLdR::synapse0x1f44220() {
   return (neuron0x1f3e530()*-0.171512);
}

double NNfunction-ss_dLdR::synapse0x1f44260() {
   return (neuron0x1f3e870()*0.32829);
}

double NNfunction-ss_dLdR::synapse0x1f442a0() {
   return (neuron0x1f3ebb0()*0.556243);
}

double NNfunction-ss_dLdR::synapse0x1f442e0() {
   return (neuron0x1f3eef0()*0.0588556);
}

double NNfunction-ss_dLdR::synapse0x1f44320() {
   return (neuron0x1f3f230()*0.116094);
}

double NNfunction-ss_dLdR::synapse0x1f44360() {
   return (neuron0x1f3f570()*-0.140632);
}

double NNfunction-ss_dLdR::synapse0x1f443a0() {
   return (neuron0x1f3f8b0()*-1.34106);
}

double NNfunction-ss_dLdR::synapse0x1f443e0() {
   return (neuron0x1f3fbf0()*0.420517);
}

double NNfunction-ss_dLdR::synapse0x1f44420() {
   return (neuron0x1f3ff30()*-0.276498);
}

double NNfunction-ss_dLdR::synapse0x1f44460() {
   return (neuron0x1f40270()*0.404636);
}

double NNfunction-ss_dLdR::synapse0x1f444a0() {
   return (neuron0x1f405b0()*0.0587643);
}

double NNfunction-ss_dLdR::synapse0x1f3d430() {
   return (neuron0x1f408f0()*0.253206);
}

double NNfunction-ss_dLdR::synapse0x1f3d470() {
   return (neuron0x1f40e50()*-1.97151);
}

double NNfunction-ss_dLdR::synapse0x1f3d4b0() {
   return (neuron0x1f41070()*-0.0240772);
}

double NNfunction-ss_dLdR::synapse0x1f445f0() {
   return (neuron0x1f413b0()*0.243547);
}

double NNfunction-ss_dLdR::synapse0x1f44630() {
   return (neuron0x1f416f0()*0.196546);
}

double NNfunction-ss_dLdR::synapse0x1f44670() {
   return (neuron0x1f41a30()*-0.283053);
}

double NNfunction-ss_dLdR::synapse0x1f446b0() {
   return (neuron0x1f41d70()*0.106379);
}

double NNfunction-ss_dLdR::synapse0x1f446f0() {
   return (neuron0x1f420b0()*-0.0804153);
}

double NNfunction-ss_dLdR::synapse0x1f44a70() {
   return (neuron0x1f3d4f0()*0.0830634);
}

double NNfunction-ss_dLdR::synapse0x1f44ab0() {
   return (neuron0x1f3d830()*0.153913);
}

double NNfunction-ss_dLdR::synapse0x1f44af0() {
   return (neuron0x1f3db70()*0.243441);
}

double NNfunction-ss_dLdR::synapse0x1f44b30() {
   return (neuron0x1f3deb0()*0.488884);
}

double NNfunction-ss_dLdR::synapse0x1f44b70() {
   return (neuron0x1f3e1f0()*0.274217);
}

double NNfunction-ss_dLdR::synapse0x1f44bb0() {
   return (neuron0x1f3e530()*0.0495037);
}

double NNfunction-ss_dLdR::synapse0x1f44bf0() {
   return (neuron0x1f3e870()*0.459649);
}

double NNfunction-ss_dLdR::synapse0x1f44c30() {
   return (neuron0x1f3ebb0()*-0.517788);
}

double NNfunction-ss_dLdR::synapse0x1f44c70() {
   return (neuron0x1f3eef0()*-0.139982);
}

double NNfunction-ss_dLdR::synapse0x1f44cb0() {
   return (neuron0x1f3f230()*0.453805);
}

double NNfunction-ss_dLdR::synapse0x1f44cf0() {
   return (neuron0x1f3f570()*-0.0397685);
}

double NNfunction-ss_dLdR::synapse0x1f44d30() {
   return (neuron0x1f3f8b0()*-0.259777);
}

double NNfunction-ss_dLdR::synapse0x1f44d70() {
   return (neuron0x1f3fbf0()*0.314372);
}

double NNfunction-ss_dLdR::synapse0x1f44db0() {
   return (neuron0x1f3ff30()*-0.523326);
}

double NNfunction-ss_dLdR::synapse0x1f44df0() {
   return (neuron0x1f40270()*-0.573317);
}

double NNfunction-ss_dLdR::synapse0x1f44e30() {
   return (neuron0x1f405b0()*1.18248);
}

double NNfunction-ss_dLdR::synapse0x1f448c0() {
   return (neuron0x1f408f0()*-0.0935832);
}

double NNfunction-ss_dLdR::synapse0x1f44900() {
   return (neuron0x1f40e50()*0.0313489);
}

double NNfunction-ss_dLdR::synapse0x1f44f80() {
   return (neuron0x1f41070()*0.615036);
}

double NNfunction-ss_dLdR::synapse0x1f44fc0() {
   return (neuron0x1f413b0()*-0.493519);
}

double NNfunction-ss_dLdR::synapse0x1f45000() {
   return (neuron0x1f416f0()*-0.524495);
}

double NNfunction-ss_dLdR::synapse0x1f45040() {
   return (neuron0x1f41a30()*-0.244043);
}

double NNfunction-ss_dLdR::synapse0x1f45080() {
   return (neuron0x1f41d70()*0.478453);
}

double NNfunction-ss_dLdR::synapse0x1f450c0() {
   return (neuron0x1f420b0()*0.179489);
}

double NNfunction-ss_dLdR::synapse0x1f45440() {
   return (neuron0x1f3d4f0()*-0.240856);
}

double NNfunction-ss_dLdR::synapse0x1f45480() {
   return (neuron0x1f3d830()*-0.139114);
}

double NNfunction-ss_dLdR::synapse0x1f454c0() {
   return (neuron0x1f3db70()*-0.0591106);
}

double NNfunction-ss_dLdR::synapse0x1f45500() {
   return (neuron0x1f3deb0()*-1.7968);
}

double NNfunction-ss_dLdR::synapse0x1f45540() {
   return (neuron0x1f3e1f0()*0.269443);
}

double NNfunction-ss_dLdR::synapse0x1f45580() {
   return (neuron0x1f3e530()*-0.0891855);
}

double NNfunction-ss_dLdR::synapse0x1f455c0() {
   return (neuron0x1f3e870()*-0.141122);
}

double NNfunction-ss_dLdR::synapse0x1f45600() {
   return (neuron0x1f3ebb0()*-0.155185);
}

double NNfunction-ss_dLdR::synapse0x1f45640() {
   return (neuron0x1f3eef0()*-0.767372);
}

double NNfunction-ss_dLdR::synapse0x1d069a0() {
   return (neuron0x1f3f230()*-0.0687957);
}

double NNfunction-ss_dLdR::synapse0x1d069e0() {
   return (neuron0x1f3f570()*0.037605);
}

double NNfunction-ss_dLdR::synapse0x1d06a20() {
   return (neuron0x1f3f8b0()*-0.0432669);
}

double NNfunction-ss_dLdR::synapse0x1d06a60() {
   return (neuron0x1f3fbf0()*-0.595303);
}

double NNfunction-ss_dLdR::synapse0x1d06aa0() {
   return (neuron0x1f3ff30()*-0.0426023);
}

double NNfunction-ss_dLdR::synapse0x1d06ae0() {
   return (neuron0x1f40270()*-0.510371);
}

double NNfunction-ss_dLdR::synapse0x1d06b20() {
   return (neuron0x1f405b0()*-0.104916);
}

double NNfunction-ss_dLdR::synapse0x1f45290() {
   return (neuron0x1f408f0()*0.327024);
}

double NNfunction-ss_dLdR::synapse0x1f452d0() {
   return (neuron0x1f40e50()*0.614075);
}

double NNfunction-ss_dLdR::synapse0x1d06c70() {
   return (neuron0x1f41070()*-0.0684824);
}

double NNfunction-ss_dLdR::synapse0x1d06cb0() {
   return (neuron0x1f413b0()*-0.230506);
}

double NNfunction-ss_dLdR::synapse0x1d06cf0() {
   return (neuron0x1f416f0()*-0.159107);
}

double NNfunction-ss_dLdR::synapse0x1d06d30() {
   return (neuron0x1f41a30()*-0.0402946);
}

double NNfunction-ss_dLdR::synapse0x1d06d70() {
   return (neuron0x1f41d70()*-0.300757);
}

double NNfunction-ss_dLdR::synapse0x1f45e90() {
   return (neuron0x1f420b0()*0.287889);
}

double NNfunction-ss_dLdR::synapse0x1f46210() {
   return (neuron0x1f3d4f0()*-0.007754);
}

double NNfunction-ss_dLdR::synapse0x1f46250() {
   return (neuron0x1f3d830()*-0.013331);
}

double NNfunction-ss_dLdR::synapse0x1f46290() {
   return (neuron0x1f3db70()*-0.0147237);
}

double NNfunction-ss_dLdR::synapse0x1f462d0() {
   return (neuron0x1f3deb0()*0.03668);
}

double NNfunction-ss_dLdR::synapse0x1f46310() {
   return (neuron0x1f3e1f0()*-0.0162647);
}

double NNfunction-ss_dLdR::synapse0x1f46350() {
   return (neuron0x1f3e530()*-0.038161);
}

double NNfunction-ss_dLdR::synapse0x1f46390() {
   return (neuron0x1f3e870()*-0.0187015);
}

double NNfunction-ss_dLdR::synapse0x1f463d0() {
   return (neuron0x1f3ebb0()*0.00150764);
}

double NNfunction-ss_dLdR::synapse0x1f46410() {
   return (neuron0x1f3eef0()*0.00734895);
}

double NNfunction-ss_dLdR::synapse0x1f46450() {
   return (neuron0x1f3f230()*0.0048694);
}

double NNfunction-ss_dLdR::synapse0x1f46490() {
   return (neuron0x1f3f570()*-0.0538989);
}

double NNfunction-ss_dLdR::synapse0x1f464d0() {
   return (neuron0x1f3f8b0()*-0.464236);
}

double NNfunction-ss_dLdR::synapse0x1f46510() {
   return (neuron0x1f3fbf0()*-0.0116851);
}

double NNfunction-ss_dLdR::synapse0x1f46550() {
   return (neuron0x1f3ff30()*-0.0202938);
}

double NNfunction-ss_dLdR::synapse0x1f46590() {
   return (neuron0x1f40270()*0.00738357);
}

double NNfunction-ss_dLdR::synapse0x1f465d0() {
   return (neuron0x1f405b0()*0.0131523);
}

double NNfunction-ss_dLdR::synapse0x1f46060() {
   return (neuron0x1f408f0()*0.0116025);
}

double NNfunction-ss_dLdR::synapse0x1f460a0() {
   return (neuron0x1f40e50()*-0.635857);
}

double NNfunction-ss_dLdR::synapse0x1f46720() {
   return (neuron0x1f41070()*0.0248504);
}

double NNfunction-ss_dLdR::synapse0x1f46760() {
   return (neuron0x1f413b0()*0.0313296);
}

double NNfunction-ss_dLdR::synapse0x1f467a0() {
   return (neuron0x1f416f0()*-0.0204003);
}

double NNfunction-ss_dLdR::synapse0x1f467e0() {
   return (neuron0x1f41a30()*0.00567806);
}

double NNfunction-ss_dLdR::synapse0x1f46820() {
   return (neuron0x1f41d70()*0.00635342);
}

double NNfunction-ss_dLdR::synapse0x1f46860() {
   return (neuron0x1f420b0()*0.00447459);
}

double NNfunction-ss_dLdR::synapse0x1f46be0() {
   return (neuron0x1f3d4f0()*-0.101016);
}

double NNfunction-ss_dLdR::synapse0x1f46c20() {
   return (neuron0x1f3d830()*0.272732);
}

double NNfunction-ss_dLdR::synapse0x1f46c60() {
   return (neuron0x1f3db70()*0.0391884);
}

double NNfunction-ss_dLdR::synapse0x1f46ca0() {
   return (neuron0x1f3deb0()*1.20064);
}

double NNfunction-ss_dLdR::synapse0x1f46ce0() {
   return (neuron0x1f3e1f0()*0.128366);
}

double NNfunction-ss_dLdR::synapse0x1f46d20() {
   return (neuron0x1f3e530()*-0.114254);
}

double NNfunction-ss_dLdR::synapse0x1f46d60() {
   return (neuron0x1f3e870()*0.692053);
}

double NNfunction-ss_dLdR::synapse0x1f46da0() {
   return (neuron0x1f3ebb0()*-0.0157111);
}

double NNfunction-ss_dLdR::synapse0x1f46de0() {
   return (neuron0x1f3eef0()*-0.280416);
}

double NNfunction-ss_dLdR::synapse0x1f46e20() {
   return (neuron0x1f3f230()*0.494193);
}

double NNfunction-ss_dLdR::synapse0x1f46e60() {
   return (neuron0x1f3f570()*-0.419392);
}

double NNfunction-ss_dLdR::synapse0x1f46ea0() {
   return (neuron0x1f3f8b0()*1.0552);
}

double NNfunction-ss_dLdR::synapse0x1f46ee0() {
   return (neuron0x1f3fbf0()*-0.834854);
}

double NNfunction-ss_dLdR::synapse0x1f46f20() {
   return (neuron0x1f3ff30()*-0.194345);
}

double NNfunction-ss_dLdR::synapse0x1f46f60() {
   return (neuron0x1f40270()*0.468231);
}

double NNfunction-ss_dLdR::synapse0x1f46fa0() {
   return (neuron0x1f405b0()*-1.66577);
}

double NNfunction-ss_dLdR::synapse0x1f46a30() {
   return (neuron0x1f408f0()*-0.00299089);
}

double NNfunction-ss_dLdR::synapse0x1f46a70() {
   return (neuron0x1f40e50()*0.765031);
}

double NNfunction-ss_dLdR::synapse0x1f470f0() {
   return (neuron0x1f41070()*0.0197067);
}

double NNfunction-ss_dLdR::synapse0x1f47130() {
   return (neuron0x1f413b0()*0.0343263);
}

double NNfunction-ss_dLdR::synapse0x1f47170() {
   return (neuron0x1f416f0()*0.612414);
}

double NNfunction-ss_dLdR::synapse0x1f471b0() {
   return (neuron0x1f41a30()*-0.305198);
}

double NNfunction-ss_dLdR::synapse0x1f471f0() {
   return (neuron0x1f41d70()*0.0288267);
}

double NNfunction-ss_dLdR::synapse0x1f47230() {
   return (neuron0x1f420b0()*0.219619);
}

double NNfunction-ss_dLdR::synapse0x1f40d40() {
   return (neuron0x1f3d4f0()*-0.0432326);
}

double NNfunction-ss_dLdR::synapse0x1f40d80() {
   return (neuron0x1f3d830()*0.000435454);
}

double NNfunction-ss_dLdR::synapse0x1f40dc0() {
   return (neuron0x1f3db70()*-0.0661891);
}

double NNfunction-ss_dLdR::synapse0x1f40e00() {
   return (neuron0x1f3deb0()*0.0596296);
}

double NNfunction-ss_dLdR::synapse0x1f477c0() {
   return (neuron0x1f3e1f0()*-0.0274887);
}

double NNfunction-ss_dLdR::synapse0x1f47800() {
   return (neuron0x1f3e530()*-0.0169861);
}

double NNfunction-ss_dLdR::synapse0x1f47840() {
   return (neuron0x1f3e870()*-0.0376333);
}

double NNfunction-ss_dLdR::synapse0x1f47880() {
   return (neuron0x1f3ebb0()*-0.0129245);
}

double NNfunction-ss_dLdR::synapse0x1f478c0() {
   return (neuron0x1f3eef0()*-0.00488148);
}

double NNfunction-ss_dLdR::synapse0x1f47900() {
   return (neuron0x1f3f230()*-0.00600844);
}

double NNfunction-ss_dLdR::synapse0x1f47940() {
   return (neuron0x1f3f570()*-0.0477369);
}

double NNfunction-ss_dLdR::synapse0x1f47980() {
   return (neuron0x1f3f8b0()*-0.261961);
}

double NNfunction-ss_dLdR::synapse0x1f479c0() {
   return (neuron0x1f3fbf0()*-0.0248835);
}

double NNfunction-ss_dLdR::synapse0x1f47a00() {
   return (neuron0x1f3ff30()*-0.0335061);
}

double NNfunction-ss_dLdR::synapse0x1f47a40() {
   return (neuron0x1f40270()*-0.0240978);
}

double NNfunction-ss_dLdR::synapse0x1f47a80() {
   return (neuron0x1f405b0()*-0.018673);
}

double NNfunction-ss_dLdR::synapse0x1f47400() {
   return (neuron0x1f408f0()*0.00883743);
}

double NNfunction-ss_dLdR::synapse0x1f47440() {
   return (neuron0x1f40e50()*0.48415);
}

double NNfunction-ss_dLdR::synapse0x1f47bd0() {
   return (neuron0x1f41070()*-0.000686736);
}

double NNfunction-ss_dLdR::synapse0x1f47c10() {
   return (neuron0x1f413b0()*0.00617394);
}

double NNfunction-ss_dLdR::synapse0x1f47c50() {
   return (neuron0x1f416f0()*-0.00252564);
}

double NNfunction-ss_dLdR::synapse0x1f47c90() {
   return (neuron0x1f41a30()*0.00897915);
}

double NNfunction-ss_dLdR::synapse0x1f47cd0() {
   return (neuron0x1f41d70()*0.0283032);
}

double NNfunction-ss_dLdR::synapse0x1f47d10() {
   return (neuron0x1f420b0()*0.00121613);
}

double NNfunction-ss_dLdR::synapse0x1f48090() {
   return (neuron0x1f3d4f0()*0.0831606);
}

double NNfunction-ss_dLdR::synapse0x1f480d0() {
   return (neuron0x1f3d830()*-0.00872614);
}

double NNfunction-ss_dLdR::synapse0x1f48110() {
   return (neuron0x1f3db70()*-0.0323793);
}

double NNfunction-ss_dLdR::synapse0x1f48150() {
   return (neuron0x1f3deb0()*-8.10632);
}

double NNfunction-ss_dLdR::synapse0x1f48190() {
   return (neuron0x1f3e1f0()*0.00751063);
}

double NNfunction-ss_dLdR::synapse0x1f481d0() {
   return (neuron0x1f3e530()*0.0238924);
}

double NNfunction-ss_dLdR::synapse0x1f48210() {
   return (neuron0x1f3e870()*0.00929357);
}

double NNfunction-ss_dLdR::synapse0x1f48250() {
   return (neuron0x1f3ebb0()*0.000666449);
}

double NNfunction-ss_dLdR::synapse0x1f48290() {
   return (neuron0x1f3eef0()*0.00616614);
}

double NNfunction-ss_dLdR::synapse0x1f482d0() {
   return (neuron0x1f3f230()*0.0127796);
}

double NNfunction-ss_dLdR::synapse0x1f48310() {
   return (neuron0x1f3f570()*-0.0125815);
}

double NNfunction-ss_dLdR::synapse0x1f48350() {
   return (neuron0x1f3f8b0()*0.428725);
}

double NNfunction-ss_dLdR::synapse0x1f48390() {
   return (neuron0x1f3fbf0()*-0.0213108);
}

double NNfunction-ss_dLdR::synapse0x1f483d0() {
   return (neuron0x1f3ff30()*0.0423736);
}

double NNfunction-ss_dLdR::synapse0x1f48410() {
   return (neuron0x1f40270()*0.0048293);
}

double NNfunction-ss_dLdR::synapse0x1f48450() {
   return (neuron0x1f405b0()*0.0150932);
}

double NNfunction-ss_dLdR::synapse0x1f47ee0() {
   return (neuron0x1f408f0()*0.0109491);
}

double NNfunction-ss_dLdR::synapse0x1f47f20() {
   return (neuron0x1f40e50()*0.450959);
}

double NNfunction-ss_dLdR::synapse0x1f485a0() {
   return (neuron0x1f41070()*0.00767857);
}

double NNfunction-ss_dLdR::synapse0x1f485e0() {
   return (neuron0x1f413b0()*-0.012439);
}

double NNfunction-ss_dLdR::synapse0x1f48620() {
   return (neuron0x1f416f0()*-0.0611536);
}

double NNfunction-ss_dLdR::synapse0x1f48660() {
   return (neuron0x1f41a30()*-0.0372796);
}

double NNfunction-ss_dLdR::synapse0x1f486a0() {
   return (neuron0x1f41d70()*0.0384071);
}

double NNfunction-ss_dLdR::synapse0x1f486e0() {
   return (neuron0x1f420b0()*-0.0263334);
}

double NNfunction-ss_dLdR::synapse0x1f48a60() {
   return (neuron0x1f3d4f0()*0.437457);
}

double NNfunction-ss_dLdR::synapse0x1f48aa0() {
   return (neuron0x1f3d830()*-0.0367666);
}

double NNfunction-ss_dLdR::synapse0x1f48ae0() {
   return (neuron0x1f3db70()*0.38983);
}

double NNfunction-ss_dLdR::synapse0x1f48b20() {
   return (neuron0x1f3deb0()*0.689487);
}

double NNfunction-ss_dLdR::synapse0x1f48b60() {
   return (neuron0x1f3e1f0()*0.583848);
}

double NNfunction-ss_dLdR::synapse0x1f48ba0() {
   return (neuron0x1f3e530()*-0.726802);
}

double NNfunction-ss_dLdR::synapse0x1f48be0() {
   return (neuron0x1f3e870()*-0.275929);
}

double NNfunction-ss_dLdR::synapse0x1f48c20() {
   return (neuron0x1f3ebb0()*0.344076);
}

double NNfunction-ss_dLdR::synapse0x1f48c60() {
   return (neuron0x1f3eef0()*0.159144);
}

double NNfunction-ss_dLdR::synapse0x1f48ca0() {
   return (neuron0x1f3f230()*0.176364);
}

double NNfunction-ss_dLdR::synapse0x1f48ce0() {
   return (neuron0x1f3f570()*0.134888);
}

double NNfunction-ss_dLdR::synapse0x1f48d20() {
   return (neuron0x1f3f8b0()*0.62611);
}

double NNfunction-ss_dLdR::synapse0x1f48d60() {
   return (neuron0x1f3fbf0()*0.205122);
}

double NNfunction-ss_dLdR::synapse0x1f48da0() {
   return (neuron0x1f3ff30()*-0.345839);
}

double NNfunction-ss_dLdR::synapse0x1f48de0() {
   return (neuron0x1f40270()*-0.630871);
}

double NNfunction-ss_dLdR::synapse0x1f48e20() {
   return (neuron0x1f405b0()*-0.13209);
}

double NNfunction-ss_dLdR::synapse0x1f488b0() {
   return (neuron0x1f408f0()*-0.204071);
}

double NNfunction-ss_dLdR::synapse0x1f488f0() {
   return (neuron0x1f40e50()*0.520273);
}

double NNfunction-ss_dLdR::synapse0x1f45680() {
   return (neuron0x1f41070()*0.252296);
}

double NNfunction-ss_dLdR::synapse0x1f456c0() {
   return (neuron0x1f413b0()*0.0385713);
}

double NNfunction-ss_dLdR::synapse0x1f45700() {
   return (neuron0x1f416f0()*-0.172668);
}

double NNfunction-ss_dLdR::synapse0x1f45740() {
   return (neuron0x1f41a30()*-0.193217);
}

double NNfunction-ss_dLdR::synapse0x1f45780() {
   return (neuron0x1f41d70()*-0.0373229);
}

double NNfunction-ss_dLdR::synapse0x1f457c0() {
   return (neuron0x1f420b0()*-0.344851);
}

double NNfunction-ss_dLdR::synapse0x1f45b40() {
   return (neuron0x1f3d4f0()*-0.122126);
}

double NNfunction-ss_dLdR::synapse0x1f45b80() {
   return (neuron0x1f3d830()*-0.032618);
}

double NNfunction-ss_dLdR::synapse0x1f45bc0() {
   return (neuron0x1f3db70()*-0.042218);
}

double NNfunction-ss_dLdR::synapse0x1f45c00() {
   return (neuron0x1f3deb0()*-0.139557);
}

double NNfunction-ss_dLdR::synapse0x1f45c40() {
   return (neuron0x1f3e1f0()*-0.0320098);
}

double NNfunction-ss_dLdR::synapse0x1f45c80() {
   return (neuron0x1f3e530()*0.0244688);
}

double NNfunction-ss_dLdR::synapse0x1f45cc0() {
   return (neuron0x1f3e870()*-0.0323444);
}

double NNfunction-ss_dLdR::synapse0x1f45d00() {
   return (neuron0x1f3ebb0()*-0.096038);
}

double NNfunction-ss_dLdR::synapse0x1f45d40() {
   return (neuron0x1f3eef0()*0.00267894);
}

double NNfunction-ss_dLdR::synapse0x1f45d80() {
   return (neuron0x1f3f230()*-0.0360202);
}

double NNfunction-ss_dLdR::synapse0x1f45dc0() {
   return (neuron0x1f3f570()*-0.002404);
}

double NNfunction-ss_dLdR::synapse0x1f45e00() {
   return (neuron0x1f3f8b0()*1.6213);
}

double NNfunction-ss_dLdR::synapse0x1f45e40() {
   return (neuron0x1f3fbf0()*0.0367796);
}

double NNfunction-ss_dLdR::synapse0x1f49f80() {
   return (neuron0x1f3ff30()*0.0306798);
}

double NNfunction-ss_dLdR::synapse0x1f49fc0() {
   return (neuron0x1f40270()*-0.0397838);
}

double NNfunction-ss_dLdR::synapse0x1f4a000() {
   return (neuron0x1f405b0()*0.00245373);
}

double NNfunction-ss_dLdR::synapse0x1f45990() {
   return (neuron0x1f408f0()*0.0736689);
}

double NNfunction-ss_dLdR::synapse0x1f459d0() {
   return (neuron0x1f40e50()*-0.193237);
}

double NNfunction-ss_dLdR::synapse0x1f4a150() {
   return (neuron0x1f41070()*-0.0194603);
}

double NNfunction-ss_dLdR::synapse0x1f4a190() {
   return (neuron0x1f413b0()*-0.0110333);
}

double NNfunction-ss_dLdR::synapse0x1f4a1d0() {
   return (neuron0x1f416f0()*0.034733);
}

double NNfunction-ss_dLdR::synapse0x1f4a210() {
   return (neuron0x1f41a30()*0.0105158);
}

double NNfunction-ss_dLdR::synapse0x1f4a250() {
   return (neuron0x1f41d70()*-0.00751262);
}

double NNfunction-ss_dLdR::synapse0x1f4a290() {
   return (neuron0x1f420b0()*0.0207784);
}

double NNfunction-ss_dLdR::synapse0x1f4a610() {
   return (neuron0x1f3d4f0()*0.00492637);
}

double NNfunction-ss_dLdR::synapse0x1f4a650() {
   return (neuron0x1f3d830()*0.00217147);
}

double NNfunction-ss_dLdR::synapse0x1f4a690() {
   return (neuron0x1f3db70()*0.0144958);
}

double NNfunction-ss_dLdR::synapse0x1f4a6d0() {
   return (neuron0x1f3deb0()*-2.8127);
}

double NNfunction-ss_dLdR::synapse0x1f4a710() {
   return (neuron0x1f3e1f0()*0.00605479);
}

double NNfunction-ss_dLdR::synapse0x1f4a750() {
   return (neuron0x1f3e530()*0.0078129);
}

double NNfunction-ss_dLdR::synapse0x1f4a790() {
   return (neuron0x1f3e870()*0.00712014);
}

double NNfunction-ss_dLdR::synapse0x1f4a7d0() {
   return (neuron0x1f3ebb0()*0.00342141);
}

double NNfunction-ss_dLdR::synapse0x1f4a810() {
   return (neuron0x1f3eef0()*0.0191136);
}

double NNfunction-ss_dLdR::synapse0x1f4a850() {
   return (neuron0x1f3f230()*0.0271669);
}

double NNfunction-ss_dLdR::synapse0x1f4a890() {
   return (neuron0x1f3f570()*0.00553775);
}

double NNfunction-ss_dLdR::synapse0x1f4a8d0() {
   return (neuron0x1f3f8b0()*0.280312);
}

double NNfunction-ss_dLdR::synapse0x1f4a910() {
   return (neuron0x1f3fbf0()*-0.0103732);
}

double NNfunction-ss_dLdR::synapse0x1f4a950() {
   return (neuron0x1f3ff30()*-0.013599);
}

double NNfunction-ss_dLdR::synapse0x1f4a990() {
   return (neuron0x1f40270()*0.000728523);
}

double NNfunction-ss_dLdR::synapse0x1f4a9d0() {
   return (neuron0x1f405b0()*-0.0113727);
}

double NNfunction-ss_dLdR::synapse0x1f4a460() {
   return (neuron0x1f408f0()*-0.00400727);
}

double NNfunction-ss_dLdR::synapse0x1f4a4a0() {
   return (neuron0x1f40e50()*0.310434);
}

double NNfunction-ss_dLdR::synapse0x1f4ab20() {
   return (neuron0x1f41070()*-0.00962151);
}

double NNfunction-ss_dLdR::synapse0x1f4ab60() {
   return (neuron0x1f413b0()*0.0215182);
}

double NNfunction-ss_dLdR::synapse0x1f4aba0() {
   return (neuron0x1f416f0()*0.0105893);
}

double NNfunction-ss_dLdR::synapse0x1f4abe0() {
   return (neuron0x1f41a30()*0.0258672);
}

double NNfunction-ss_dLdR::synapse0x1f4ac20() {
   return (neuron0x1f41d70()*0.00978667);
}

double NNfunction-ss_dLdR::synapse0x1f4ac60() {
   return (neuron0x1f420b0()*-0.0152507);
}

double NNfunction-ss_dLdR::synapse0x1f4afe0() {
   return (neuron0x1f3d4f0()*-0.0784305);
}

double NNfunction-ss_dLdR::synapse0x1f4b020() {
   return (neuron0x1f3d830()*0.118379);
}

double NNfunction-ss_dLdR::synapse0x1f4b060() {
   return (neuron0x1f3db70()*-0.262281);
}

double NNfunction-ss_dLdR::synapse0x1f4b0a0() {
   return (neuron0x1f3deb0()*1.75044);
}

double NNfunction-ss_dLdR::synapse0x1f4b0e0() {
   return (neuron0x1f3e1f0()*-0.157314);
}

double NNfunction-ss_dLdR::synapse0x1f4b120() {
   return (neuron0x1f3e530()*-0.106823);
}

double NNfunction-ss_dLdR::synapse0x1f4b160() {
   return (neuron0x1f3e870()*-0.136631);
}

double NNfunction-ss_dLdR::synapse0x1f4b1a0() {
   return (neuron0x1f3ebb0()*-0.00599637);
}

double NNfunction-ss_dLdR::synapse0x1f4b1e0() {
   return (neuron0x1f3eef0()*-0.0648926);
}

double NNfunction-ss_dLdR::synapse0x1f4b220() {
   return (neuron0x1f3f230()*-0.0290693);
}

double NNfunction-ss_dLdR::synapse0x1f4b260() {
   return (neuron0x1f3f570()*-0.0040886);
}

double NNfunction-ss_dLdR::synapse0x1f4b2a0() {
   return (neuron0x1f3f8b0()*-0.570421);
}

double NNfunction-ss_dLdR::synapse0x1f4b2e0() {
   return (neuron0x1f3fbf0()*-0.100852);
}

double NNfunction-ss_dLdR::synapse0x1f4b320() {
   return (neuron0x1f3ff30()*0.0867347);
}

double NNfunction-ss_dLdR::synapse0x1f4b360() {
   return (neuron0x1f40270()*0.0552391);
}

double NNfunction-ss_dLdR::synapse0x1f4b3a0() {
   return (neuron0x1f405b0()*0.0390143);
}

double NNfunction-ss_dLdR::synapse0x1f4ae30() {
   return (neuron0x1f408f0()*-0.0723937);
}

double NNfunction-ss_dLdR::synapse0x1f4ae70() {
   return (neuron0x1f40e50()*1.86976);
}

double NNfunction-ss_dLdR::synapse0x1f4b4f0() {
   return (neuron0x1f41070()*0.0541318);
}

double NNfunction-ss_dLdR::synapse0x1f4b530() {
   return (neuron0x1f413b0()*0.0301832);
}

double NNfunction-ss_dLdR::synapse0x1f4b570() {
   return (neuron0x1f416f0()*-0.124527);
}

double NNfunction-ss_dLdR::synapse0x1f4b5b0() {
   return (neuron0x1f41a30()*-0.0862057);
}

double NNfunction-ss_dLdR::synapse0x1f4b5f0() {
   return (neuron0x1f41d70()*0.186459);
}

double NNfunction-ss_dLdR::synapse0x1f4b630() {
   return (neuron0x1f420b0()*0.0212863);
}

double NNfunction-ss_dLdR::synapse0x1f4b9b0() {
   return (neuron0x1f3d4f0()*-0.191195);
}

double NNfunction-ss_dLdR::synapse0x1f4b9f0() {
   return (neuron0x1f3d830()*-1.11048);
}

double NNfunction-ss_dLdR::synapse0x1f4ba30() {
   return (neuron0x1f3db70()*1.05844);
}

double NNfunction-ss_dLdR::synapse0x1f4ba70() {
   return (neuron0x1f3deb0()*-0.0930779);
}

double NNfunction-ss_dLdR::synapse0x1f4bab0() {
   return (neuron0x1f3e1f0()*-0.722709);
}

double NNfunction-ss_dLdR::synapse0x1f4baf0() {
   return (neuron0x1f3e530()*-0.0967224);
}

double NNfunction-ss_dLdR::synapse0x1f4bb30() {
   return (neuron0x1f3e870()*0.568008);
}

double NNfunction-ss_dLdR::synapse0x1f4bb70() {
   return (neuron0x1f3ebb0()*-0.684303);
}

double NNfunction-ss_dLdR::synapse0x1f4bbb0() {
   return (neuron0x1f3eef0()*0.520426);
}

double NNfunction-ss_dLdR::synapse0x1f4bbf0() {
   return (neuron0x1f3f230()*-1.04898);
}

double NNfunction-ss_dLdR::synapse0x1f4bc30() {
   return (neuron0x1f3f570()*-0.274014);
}

double NNfunction-ss_dLdR::synapse0x1f4bc70() {
   return (neuron0x1f3f8b0()*0.630878);
}

double NNfunction-ss_dLdR::synapse0x1f4bcb0() {
   return (neuron0x1f3fbf0()*-0.280692);
}

double NNfunction-ss_dLdR::synapse0x1f4bcf0() {
   return (neuron0x1f3ff30()*0.84163);
}

double NNfunction-ss_dLdR::synapse0x1f4bd30() {
   return (neuron0x1f40270()*-0.195043);
}

double NNfunction-ss_dLdR::synapse0x1f4bd70() {
   return (neuron0x1f405b0()*0.673316);
}

double NNfunction-ss_dLdR::synapse0x1f4b800() {
   return (neuron0x1f408f0()*-0.0835686);
}

double NNfunction-ss_dLdR::synapse0x1f4b840() {
   return (neuron0x1f40e50()*-0.359604);
}

double NNfunction-ss_dLdR::synapse0x1f4bec0() {
   return (neuron0x1f41070()*0.0971452);
}

double NNfunction-ss_dLdR::synapse0x1f4bf00() {
   return (neuron0x1f413b0()*-0.844621);
}

double NNfunction-ss_dLdR::synapse0x1f4bf40() {
   return (neuron0x1f416f0()*0.317418);
}

double NNfunction-ss_dLdR::synapse0x1f4bf80() {
   return (neuron0x1f41a30()*0.264623);
}

double NNfunction-ss_dLdR::synapse0x1f4bfc0() {
   return (neuron0x1f41d70()*-0.805184);
}

double NNfunction-ss_dLdR::synapse0x1f4c000() {
   return (neuron0x1f420b0()*0.215528);
}

double NNfunction-ss_dLdR::synapse0x1f4c380() {
   return (neuron0x1f3d4f0()*-0.0266849);
}

double NNfunction-ss_dLdR::synapse0x1f3d710() {
   return (neuron0x1f3d830()*0.443443);
}

double NNfunction-ss_dLdR::synapse0x1f3d750() {
   return (neuron0x1f3db70()*-2.59875);
}

double NNfunction-ss_dLdR::synapse0x1f3da50() {
   return (neuron0x1f3deb0()*0.0323969);
}

double NNfunction-ss_dLdR::synapse0x1f3da90() {
   return (neuron0x1f3e1f0()*0.0423399);
}

double NNfunction-ss_dLdR::synapse0x1f3dd90() {
   return (neuron0x1f3e530()*0.172004);
}

double NNfunction-ss_dLdR::synapse0x1f3ddd0() {
   return (neuron0x1f3e870()*-0.437498);
}

double NNfunction-ss_dLdR::synapse0x1f3e0d0() {
   return (neuron0x1f3ebb0()*0.0351842);
}

double NNfunction-ss_dLdR::synapse0x1f3e110() {
   return (neuron0x1f3eef0()*0.760081);
}

double NNfunction-ss_dLdR::synapse0x1f3e410() {
   return (neuron0x1f3f230()*-0.188874);
}

double NNfunction-ss_dLdR::synapse0x1f3e450() {
   return (neuron0x1f3f570()*-0.00275929);
}

double NNfunction-ss_dLdR::synapse0x1f3e750() {
   return (neuron0x1f3f8b0()*-0.359156);
}

double NNfunction-ss_dLdR::synapse0x1f3e790() {
   return (neuron0x1f3fbf0()*0.173876);
}

double NNfunction-ss_dLdR::synapse0x1f3ea90() {
   return (neuron0x1f3ff30()*0.285803);
}

double NNfunction-ss_dLdR::synapse0x1f3ead0() {
   return (neuron0x1f40270()*1.18123);
}

double NNfunction-ss_dLdR::synapse0x1f3edd0() {
   return (neuron0x1f405b0()*0.90352);
}

double NNfunction-ss_dLdR::synapse0x1f3ee10() {
   return (neuron0x1f408f0()*-0.00396306);
}

double NNfunction-ss_dLdR::synapse0x1f3f110() {
   return (neuron0x1f40e50()*-1.32763);
}

double NNfunction-ss_dLdR::synapse0x1f3f150() {
   return (neuron0x1f41070()*-0.143965);
}

double NNfunction-ss_dLdR::synapse0x1f3f450() {
   return (neuron0x1f413b0()*-0.0213551);
}

double NNfunction-ss_dLdR::synapse0x1f3f490() {
   return (neuron0x1f416f0()*-0.444162);
}

double NNfunction-ss_dLdR::synapse0x1f3f790() {
   return (neuron0x1f41a30()*0.59787);
}

double NNfunction-ss_dLdR::synapse0x1f3f7d0() {
   return (neuron0x1f41d70()*-0.609414);
}

double NNfunction-ss_dLdR::synapse0x1f3fad0() {
   return (neuron0x1f420b0()*0.196868);
}

double NNfunction-ss_dLdR::synapse0x1f3fb10() {
   return (neuron0x1f3d4f0()*-0.268296);
}

double NNfunction-ss_dLdR::synapse0x1f407d0() {
   return (neuron0x1f3d830()*-0.196772);
}

double NNfunction-ss_dLdR::synapse0x1f40810() {
   return (neuron0x1f3db70()*0.797896);
}

double NNfunction-ss_dLdR::synapse0x1f4c1d0() {
   return (neuron0x1f3deb0()*-0.87522);
}

double NNfunction-ss_dLdR::synapse0x1f4c210() {
   return (neuron0x1f3e1f0()*-0.145838);
}

double NNfunction-ss_dLdR::synapse0x1f40b10() {
   return (neuron0x1f3e530()*-0.125564);
}

double NNfunction-ss_dLdR::synapse0x1f40b50() {
   return (neuron0x1f3e870()*-0.142676);
}

double NNfunction-ss_dLdR::synapse0x1cf85b0() {
   return (neuron0x1f3ebb0()*-0.259133);
}

double NNfunction-ss_dLdR::synapse0x1cf85f0() {
   return (neuron0x1f3eef0()*0.313376);
}

double NNfunction-ss_dLdR::synapse0x1f41290() {
   return (neuron0x1f3f230()*-0.679617);
}

double NNfunction-ss_dLdR::synapse0x1f412d0() {
   return (neuron0x1f3f570()*0.253092);
}

double NNfunction-ss_dLdR::synapse0x1f415d0() {
   return (neuron0x1f3f8b0()*-0.946222);
}

double NNfunction-ss_dLdR::synapse0x1f41610() {
   return (neuron0x1f3fbf0()*-0.0549042);
}

double NNfunction-ss_dLdR::synapse0x1f41910() {
   return (neuron0x1f3ff30()*-0.25556);
}

double NNfunction-ss_dLdR::synapse0x1f41950() {
   return (neuron0x1f40270()*0.137885);
}

double NNfunction-ss_dLdR::synapse0x1f41c50() {
   return (neuron0x1f405b0()*-0.548733);
}

double NNfunction-ss_dLdR::synapse0x1f41c90() {
   return (neuron0x1f408f0()*0.268701);
}

double NNfunction-ss_dLdR::synapse0x1f41f90() {
   return (neuron0x1f40e50()*1.3259);
}

double NNfunction-ss_dLdR::synapse0x1f41fd0() {
   return (neuron0x1f41070()*-0.766602);
}

double NNfunction-ss_dLdR::synapse0x1f422d0() {
   return (neuron0x1f413b0()*-0.000752983);
}

double NNfunction-ss_dLdR::synapse0x1f42310() {
   return (neuron0x1f416f0()*0.506187);
}

double NNfunction-ss_dLdR::synapse0x1f3fe10() {
   return (neuron0x1f41a30()*0.577211);
}

double NNfunction-ss_dLdR::synapse0x1f3fe50() {
   return (neuron0x1f41d70()*-0.387543);
}

double NNfunction-ss_dLdR::synapse0x1f4e0f0() {
   return (neuron0x1f420b0()*0.105648);
}

double NNfunction-ss_dLdR::synapse0x1f4e470() {
   return (neuron0x1f3d4f0()*0.00305174);
}

double NNfunction-ss_dLdR::synapse0x1f4e4b0() {
   return (neuron0x1f3d830()*-0.0033491);
}

double NNfunction-ss_dLdR::synapse0x1f4e4f0() {
   return (neuron0x1f3db70()*0.0388622);
}

double NNfunction-ss_dLdR::synapse0x1f4e530() {
   return (neuron0x1f3deb0()*2.60078);
}

double NNfunction-ss_dLdR::synapse0x1f4e570() {
   return (neuron0x1f3e1f0()*-0.01101);
}

double NNfunction-ss_dLdR::synapse0x1f4e5b0() {
   return (neuron0x1f3e530()*0.00833414);
}

double NNfunction-ss_dLdR::synapse0x1f4e5f0() {
   return (neuron0x1f3e870()*0.00494555);
}

double NNfunction-ss_dLdR::synapse0x1f4e630() {
   return (neuron0x1f3ebb0()*0.0263457);
}

double NNfunction-ss_dLdR::synapse0x1f4e670() {
   return (neuron0x1f3eef0()*0.0225181);
}

double NNfunction-ss_dLdR::synapse0x1f4e6b0() {
   return (neuron0x1f3f230()*0.0243118);
}

double NNfunction-ss_dLdR::synapse0x1f4e6f0() {
   return (neuron0x1f3f570()*0.000381246);
}

double NNfunction-ss_dLdR::synapse0x1f4e730() {
   return (neuron0x1f3f8b0()*0.107513);
}

double NNfunction-ss_dLdR::synapse0x1f4e770() {
   return (neuron0x1f3fbf0()*-0.0110463);
}

double NNfunction-ss_dLdR::synapse0x1f4e7b0() {
   return (neuron0x1f3ff30()*-0.0115512);
}

double NNfunction-ss_dLdR::synapse0x1f4e7f0() {
   return (neuron0x1f40270()*-0.0018244);
}

double NNfunction-ss_dLdR::synapse0x1f4e830() {
   return (neuron0x1f405b0()*-0.0320252);
}

double NNfunction-ss_dLdR::synapse0x1f4e2c0() {
   return (neuron0x1f408f0()*-0.0067911);
}

double NNfunction-ss_dLdR::synapse0x1f4e300() {
   return (neuron0x1f40e50()*0.086861);
}

double NNfunction-ss_dLdR::synapse0x1f4e980() {
   return (neuron0x1f41070()*-0.00304754);
}

double NNfunction-ss_dLdR::synapse0x1f4e9c0() {
   return (neuron0x1f413b0()*0.0297511);
}

double NNfunction-ss_dLdR::synapse0x1f4ea00() {
   return (neuron0x1f416f0()*0.0267363);
}

double NNfunction-ss_dLdR::synapse0x1f4ea40() {
   return (neuron0x1f41a30()*0.0108724);
}

double NNfunction-ss_dLdR::synapse0x1f4ea80() {
   return (neuron0x1f41d70()*0.00559868);
}

double NNfunction-ss_dLdR::synapse0x1f4eac0() {
   return (neuron0x1f420b0()*0.00142823);
}

double NNfunction-ss_dLdR::synapse0x1f4ee40() {
   return (neuron0x1f3d4f0()*0.0201289);
}

double NNfunction-ss_dLdR::synapse0x1f4ee80() {
   return (neuron0x1f3d830()*-0.0375476);
}

double NNfunction-ss_dLdR::synapse0x1f4eec0() {
   return (neuron0x1f3db70()*-0.269402);
}

double NNfunction-ss_dLdR::synapse0x1f4ef00() {
   return (neuron0x1f3deb0()*-1.21715);
}

double NNfunction-ss_dLdR::synapse0x1f4ef40() {
   return (neuron0x1f3e1f0()*0.0468058);
}

double NNfunction-ss_dLdR::synapse0x1f4ef80() {
   return (neuron0x1f3e530()*0.00103613);
}

double NNfunction-ss_dLdR::synapse0x1f4efc0() {
   return (neuron0x1f3e870()*0.0105829);
}

double NNfunction-ss_dLdR::synapse0x1f4f000() {
   return (neuron0x1f3ebb0()*-0.0187051);
}

double NNfunction-ss_dLdR::synapse0x1f4f040() {
   return (neuron0x1f3eef0()*-0.00320413);
}

double NNfunction-ss_dLdR::synapse0x1f4f080() {
   return (neuron0x1f3f230()*-0.0110072);
}

double NNfunction-ss_dLdR::synapse0x1f4f0c0() {
   return (neuron0x1f3f570()*0.0561821);
}

double NNfunction-ss_dLdR::synapse0x1f4f100() {
   return (neuron0x1f3f8b0()*-0.95286);
}

double NNfunction-ss_dLdR::synapse0x1f4f140() {
   return (neuron0x1f3fbf0()*-0.0524656);
}

double NNfunction-ss_dLdR::synapse0x1f4f180() {
   return (neuron0x1f3ff30()*-0.0131599);
}

double NNfunction-ss_dLdR::synapse0x1f4f1c0() {
   return (neuron0x1f40270()*-0.0592898);
}

double NNfunction-ss_dLdR::synapse0x1f4f200() {
   return (neuron0x1f405b0()*-0.0068815);
}

double NNfunction-ss_dLdR::synapse0x1f4ec90() {
   return (neuron0x1f408f0()*-0.00251927);
}

double NNfunction-ss_dLdR::synapse0x1f4ecd0() {
   return (neuron0x1f40e50()*0.57863);
}

double NNfunction-ss_dLdR::synapse0x1f4f350() {
   return (neuron0x1f41070()*0.0643637);
}

double NNfunction-ss_dLdR::synapse0x1f4f390() {
   return (neuron0x1f413b0()*0.0586231);
}

double NNfunction-ss_dLdR::synapse0x1f4f3d0() {
   return (neuron0x1f416f0()*0.0548333);
}

double NNfunction-ss_dLdR::synapse0x1f4f410() {
   return (neuron0x1f41a30()*0.00591601);
}

double NNfunction-ss_dLdR::synapse0x1f4f450() {
   return (neuron0x1f41d70()*-0.0281803);
}

double NNfunction-ss_dLdR::synapse0x1f4f490() {
   return (neuron0x1f420b0()*-0.0534221);
}

double NNfunction-ss_dLdR::synapse0x1f4f810() {
   return (neuron0x1f3d4f0()*0.025076);
}

double NNfunction-ss_dLdR::synapse0x1f4f850() {
   return (neuron0x1f3d830()*-0.0858791);
}

double NNfunction-ss_dLdR::synapse0x1f4f890() {
   return (neuron0x1f3db70()*-0.232523);
}

double NNfunction-ss_dLdR::synapse0x1f4f8d0() {
   return (neuron0x1f3deb0()*0.702233);
}

double NNfunction-ss_dLdR::synapse0x1f4f910() {
   return (neuron0x1f3e1f0()*-0.0223988);
}

double NNfunction-ss_dLdR::synapse0x1f4f950() {
   return (neuron0x1f3e530()*-0.0653157);
}

double NNfunction-ss_dLdR::synapse0x1f4f990() {
   return (neuron0x1f3e870()*0.159708);
}

double NNfunction-ss_dLdR::synapse0x1f4f9d0() {
   return (neuron0x1f3ebb0()*0.0349924);
}

double NNfunction-ss_dLdR::synapse0x1f4fa10() {
   return (neuron0x1f3eef0()*-0.148825);
}

double NNfunction-ss_dLdR::synapse0x1f4fa50() {
   return (neuron0x1f3f230()*-0.0906153);
}

double NNfunction-ss_dLdR::synapse0x1f4fa90() {
   return (neuron0x1f3f570()*-0.110329);
}

double NNfunction-ss_dLdR::synapse0x1f4fad0() {
   return (neuron0x1f3f8b0()*0.409831);
}

double NNfunction-ss_dLdR::synapse0x1f4fb10() {
   return (neuron0x1f3fbf0()*0.059131);
}

double NNfunction-ss_dLdR::synapse0x1f4fb50() {
   return (neuron0x1f3ff30()*0.0431236);
}

double NNfunction-ss_dLdR::synapse0x1f4fb90() {
   return (neuron0x1f40270()*-0.123927);
}

double NNfunction-ss_dLdR::synapse0x1f4fbd0() {
   return (neuron0x1f405b0()*-0.0316422);
}

double NNfunction-ss_dLdR::synapse0x1f4f660() {
   return (neuron0x1f408f0()*-0.05562);
}

double NNfunction-ss_dLdR::synapse0x1f4f6a0() {
   return (neuron0x1f40e50()*0.260153);
}

double NNfunction-ss_dLdR::synapse0x1f4fd20() {
   return (neuron0x1f41070()*0.0742887);
}

double NNfunction-ss_dLdR::synapse0x1f4fd60() {
   return (neuron0x1f413b0()*0.0515546);
}

double NNfunction-ss_dLdR::synapse0x1f4fda0() {
   return (neuron0x1f416f0()*-0.0876732);
}

double NNfunction-ss_dLdR::synapse0x1f4fde0() {
   return (neuron0x1f41a30()*-0.142405);
}

double NNfunction-ss_dLdR::synapse0x1f4fe20() {
   return (neuron0x1f41d70()*0.00940256);
}

double NNfunction-ss_dLdR::synapse0x1f4fe60() {
   return (neuron0x1f420b0()*-0.0253171);
}

double NNfunction-ss_dLdR::synapse0x1f501e0() {
   return (neuron0x1f3d4f0()*0.0383198);
}

double NNfunction-ss_dLdR::synapse0x1f50220() {
   return (neuron0x1f3d830()*-0.648905);
}

double NNfunction-ss_dLdR::synapse0x1f50260() {
   return (neuron0x1f3db70()*0.423651);
}

double NNfunction-ss_dLdR::synapse0x1f502a0() {
   return (neuron0x1f3deb0()*0.44345);
}

double NNfunction-ss_dLdR::synapse0x1f502e0() {
   return (neuron0x1f3e1f0()*0.643482);
}

double NNfunction-ss_dLdR::synapse0x1f50320() {
   return (neuron0x1f3e530()*-1.30344);
}

double NNfunction-ss_dLdR::synapse0x1f50360() {
   return (neuron0x1f3e870()*-0.496309);
}

double NNfunction-ss_dLdR::synapse0x1f503a0() {
   return (neuron0x1f3ebb0()*0.0704999);
}

double NNfunction-ss_dLdR::synapse0x1f503e0() {
   return (neuron0x1f3eef0()*-0.4179);
}

double NNfunction-ss_dLdR::synapse0x1f50420() {
   return (neuron0x1f3f230()*-0.112825);
}

double NNfunction-ss_dLdR::synapse0x1f50460() {
   return (neuron0x1f3f570()*0.887596);
}

double NNfunction-ss_dLdR::synapse0x1f504a0() {
   return (neuron0x1f3f8b0()*1.22983);
}

double NNfunction-ss_dLdR::synapse0x1f504e0() {
   return (neuron0x1f3fbf0()*0.0421048);
}

double NNfunction-ss_dLdR::synapse0x1f50520() {
   return (neuron0x1f3ff30()*0.879146);
}

double NNfunction-ss_dLdR::synapse0x1f50560() {
   return (neuron0x1f40270()*-0.268962);
}

double NNfunction-ss_dLdR::synapse0x1f505a0() {
   return (neuron0x1f405b0()*-1.7251);
}

double NNfunction-ss_dLdR::synapse0x1f50030() {
   return (neuron0x1f408f0()*0.421055);
}

double NNfunction-ss_dLdR::synapse0x1f50070() {
   return (neuron0x1f40e50()*0.468581);
}

double NNfunction-ss_dLdR::synapse0x1f506f0() {
   return (neuron0x1f41070()*-0.751694);
}

double NNfunction-ss_dLdR::synapse0x1f50730() {
   return (neuron0x1f413b0()*-0.891002);
}

double NNfunction-ss_dLdR::synapse0x1f50770() {
   return (neuron0x1f416f0()*0.142608);
}

double NNfunction-ss_dLdR::synapse0x1f507b0() {
   return (neuron0x1f41a30()*-0.371379);
}

double NNfunction-ss_dLdR::synapse0x1f507f0() {
   return (neuron0x1f41d70()*0.119461);
}

double NNfunction-ss_dLdR::synapse0x1f50830() {
   return (neuron0x1f420b0()*-0.2001);
}

double NNfunction-ss_dLdR::synapse0x1f50bb0() {
   return (neuron0x1f3d4f0()*-0.260548);
}

double NNfunction-ss_dLdR::synapse0x1f50bf0() {
   return (neuron0x1f3d830()*0.0509696);
}

double NNfunction-ss_dLdR::synapse0x1f50c30() {
   return (neuron0x1f3db70()*-0.665413);
}

double NNfunction-ss_dLdR::synapse0x1f50c70() {
   return (neuron0x1f3deb0()*1.10311);
}

double NNfunction-ss_dLdR::synapse0x1f50cb0() {
   return (neuron0x1f3e1f0()*-0.306321);
}

double NNfunction-ss_dLdR::synapse0x1f50cf0() {
   return (neuron0x1f3e530()*0.00662963);
}

double NNfunction-ss_dLdR::synapse0x1f50d30() {
   return (neuron0x1f3e870()*-0.49534);
}

double NNfunction-ss_dLdR::synapse0x1f50d70() {
   return (neuron0x1f3ebb0()*-1.28595);
}

double NNfunction-ss_dLdR::synapse0x1f50db0() {
   return (neuron0x1f3eef0()*-0.629081);
}

double NNfunction-ss_dLdR::synapse0x1f48f70() {
   return (neuron0x1f3f230()*-0.0649834);
}

double NNfunction-ss_dLdR::synapse0x1f48fb0() {
   return (neuron0x1f3f570()*0.709879);
}

double NNfunction-ss_dLdR::synapse0x1f48ff0() {
   return (neuron0x1f3f8b0()*0.669307);
}

double NNfunction-ss_dLdR::synapse0x1f49030() {
   return (neuron0x1f3fbf0()*0.150134);
}

double NNfunction-ss_dLdR::synapse0x1f49070() {
   return (neuron0x1f3ff30()*-1.08381);
}

double NNfunction-ss_dLdR::synapse0x1f490b0() {
   return (neuron0x1f40270()*-0.336268);
}

double NNfunction-ss_dLdR::synapse0x1f490f0() {
   return (neuron0x1f405b0()*-0.019494);
}

double NNfunction-ss_dLdR::synapse0x1f50a00() {
   return (neuron0x1f408f0()*0.070821);
}

double NNfunction-ss_dLdR::synapse0x1f50a40() {
   return (neuron0x1f40e50()*0.358558);
}

double NNfunction-ss_dLdR::synapse0x1f49240() {
   return (neuron0x1f41070()*1.97789);
}

double NNfunction-ss_dLdR::synapse0x1f49280() {
   return (neuron0x1f413b0()*-0.0346675);
}

double NNfunction-ss_dLdR::synapse0x1f492c0() {
   return (neuron0x1f416f0()*-0.610439);
}

double NNfunction-ss_dLdR::synapse0x1f49300() {
   return (neuron0x1f41a30()*0.770773);
}

double NNfunction-ss_dLdR::synapse0x1f49340() {
   return (neuron0x1f41d70()*-0.271756);
}

double NNfunction-ss_dLdR::synapse0x1f49380() {
   return (neuron0x1f420b0()*0.0613751);
}

double NNfunction-ss_dLdR::synapse0x1f49700() {
   return (neuron0x1f3d4f0()*-0.299826);
}

double NNfunction-ss_dLdR::synapse0x1f49740() {
   return (neuron0x1f3d830()*0.465182);
}

double NNfunction-ss_dLdR::synapse0x1f49780() {
   return (neuron0x1f3db70()*0.0179124);
}

double NNfunction-ss_dLdR::synapse0x1f497c0() {
   return (neuron0x1f3deb0()*-0.0541037);
}

double NNfunction-ss_dLdR::synapse0x1f49800() {
   return (neuron0x1f3e1f0()*-0.0809132);
}

double NNfunction-ss_dLdR::synapse0x1f49840() {
   return (neuron0x1f3e530()*0.0019738);
}

double NNfunction-ss_dLdR::synapse0x1f49880() {
   return (neuron0x1f3e870()*1.34841);
}

double NNfunction-ss_dLdR::synapse0x1f498c0() {
   return (neuron0x1f3ebb0()*0.0825596);
}

double NNfunction-ss_dLdR::synapse0x1f49900() {
   return (neuron0x1f3eef0()*0.0285953);
}

double NNfunction-ss_dLdR::synapse0x1f49940() {
   return (neuron0x1f3f230()*0.357288);
}

double NNfunction-ss_dLdR::synapse0x1f49980() {
   return (neuron0x1f3f570()*-0.046233);
}

double NNfunction-ss_dLdR::synapse0x1f499c0() {
   return (neuron0x1f3f8b0()*-0.812572);
}

double NNfunction-ss_dLdR::synapse0x1f49a00() {
   return (neuron0x1f3fbf0()*0.679206);
}

double NNfunction-ss_dLdR::synapse0x1f49a40() {
   return (neuron0x1f3ff30()*0.750562);
}

double NNfunction-ss_dLdR::synapse0x1f49a80() {
   return (neuron0x1f40270()*-0.0678916);
}

double NNfunction-ss_dLdR::synapse0x1f49ac0() {
   return (neuron0x1f405b0()*-0.0109842);
}

double NNfunction-ss_dLdR::synapse0x1f49550() {
   return (neuron0x1f408f0()*0.898443);
}

double NNfunction-ss_dLdR::synapse0x1f49590() {
   return (neuron0x1f40e50()*-0.126223);
}

double NNfunction-ss_dLdR::synapse0x1f49c10() {
   return (neuron0x1f41070()*0.241651);
}

double NNfunction-ss_dLdR::synapse0x1f49c50() {
   return (neuron0x1f413b0()*-1.259);
}

double NNfunction-ss_dLdR::synapse0x1f49c90() {
   return (neuron0x1f416f0()*0.607901);
}

double NNfunction-ss_dLdR::synapse0x1f49cd0() {
   return (neuron0x1f41a30()*0.361886);
}

double NNfunction-ss_dLdR::synapse0x1f49d10() {
   return (neuron0x1f41d70()*-0.723511);
}

double NNfunction-ss_dLdR::synapse0x1f49d50() {
   return (neuron0x1f420b0()*-0.189424);
}

double NNfunction-ss_dLdR::synapse0x1f49f20() {
   return (neuron0x1f3d4f0()*0.0519598);
}

double NNfunction-ss_dLdR::synapse0x1f52fb0() {
   return (neuron0x1f3d830()*-0.0129417);
}

double NNfunction-ss_dLdR::synapse0x1f52ff0() {
   return (neuron0x1f3db70()*0.0697904);
}

double NNfunction-ss_dLdR::synapse0x1f53030() {
   return (neuron0x1f3deb0()*0.0958587);
}

double NNfunction-ss_dLdR::synapse0x1f53070() {
   return (neuron0x1f3e1f0()*0.0127281);
}

double NNfunction-ss_dLdR::synapse0x1f530b0() {
   return (neuron0x1f3e530()*-0.0363002);
}

double NNfunction-ss_dLdR::synapse0x1f530f0() {
   return (neuron0x1f3e870()*0.0178464);
}

double NNfunction-ss_dLdR::synapse0x1f53130() {
   return (neuron0x1f3ebb0()*0.0577578);
}

double NNfunction-ss_dLdR::synapse0x1f53170() {
   return (neuron0x1f3eef0()*-0.0173219);
}

double NNfunction-ss_dLdR::synapse0x1f531b0() {
   return (neuron0x1f3f230()*0.0417477);
}

double NNfunction-ss_dLdR::synapse0x1f531f0() {
   return (neuron0x1f3f570()*-0.0305978);
}

double NNfunction-ss_dLdR::synapse0x1f53230() {
   return (neuron0x1f3f8b0()*0.497593);
}

double NNfunction-ss_dLdR::synapse0x1f53270() {
   return (neuron0x1f3fbf0()*-0.0683776);
}

double NNfunction-ss_dLdR::synapse0x1f532b0() {
   return (neuron0x1f3ff30()*0.076692);
}

double NNfunction-ss_dLdR::synapse0x1f532f0() {
   return (neuron0x1f40270()*-0.0313216);
}

double NNfunction-ss_dLdR::synapse0x1f53330() {
   return (neuron0x1f405b0()*-0.00350023);
}

double NNfunction-ss_dLdR::synapse0x1f52e00() {
   return (neuron0x1f408f0()*0.00117021);
}

double NNfunction-ss_dLdR::synapse0x1f52e40() {
   return (neuron0x1f40e50()*0.309268);
}

double NNfunction-ss_dLdR::synapse0x1f53480() {
   return (neuron0x1f41070()*0.037468);
}

double NNfunction-ss_dLdR::synapse0x1f534c0() {
   return (neuron0x1f413b0()*0.183102);
}

double NNfunction-ss_dLdR::synapse0x1f53500() {
   return (neuron0x1f416f0()*-0.0175048);
}

double NNfunction-ss_dLdR::synapse0x1f53540() {
   return (neuron0x1f41a30()*-0.00273247);
}

double NNfunction-ss_dLdR::synapse0x1f53580() {
   return (neuron0x1f41d70()*-0.0375911);
}

double NNfunction-ss_dLdR::synapse0x1f535c0() {
   return (neuron0x1f420b0()*-0.0263834);
}

double NNfunction-ss_dLdR::synapse0x1f53940() {
   return (neuron0x1f3d4f0()*-0.00821452);
}

double NNfunction-ss_dLdR::synapse0x1f53980() {
   return (neuron0x1f3d830()*0.0104517);
}

double NNfunction-ss_dLdR::synapse0x1f539c0() {
   return (neuron0x1f3db70()*0.0184528);
}

double NNfunction-ss_dLdR::synapse0x1f53a00() {
   return (neuron0x1f3deb0()*-0.0105741);
}

double NNfunction-ss_dLdR::synapse0x1f53a40() {
   return (neuron0x1f3e1f0()*0.0289522);
}

double NNfunction-ss_dLdR::synapse0x1f53a80() {
   return (neuron0x1f3e530()*0.0195969);
}

double NNfunction-ss_dLdR::synapse0x1f53ac0() {
   return (neuron0x1f3e870()*0.010309);
}

double NNfunction-ss_dLdR::synapse0x1f53b00() {
   return (neuron0x1f3ebb0()*0.0269144);
}

double NNfunction-ss_dLdR::synapse0x1f53b40() {
   return (neuron0x1f3eef0()*0.0129596);
}

double NNfunction-ss_dLdR::synapse0x1f53b80() {
   return (neuron0x1f3f230()*0.00574209);
}

double NNfunction-ss_dLdR::synapse0x1f53bc0() {
   return (neuron0x1f3f570()*-0.00444741);
}

double NNfunction-ss_dLdR::synapse0x1f53c00() {
   return (neuron0x1f3f8b0()*-2.22753);
}

double NNfunction-ss_dLdR::synapse0x1f53c40() {
   return (neuron0x1f3fbf0()*-0.0159694);
}

double NNfunction-ss_dLdR::synapse0x1f53c80() {
   return (neuron0x1f3ff30()*-0.0606322);
}

double NNfunction-ss_dLdR::synapse0x1f53cc0() {
   return (neuron0x1f40270()*0.0142078);
}

double NNfunction-ss_dLdR::synapse0x1f53d00() {
   return (neuron0x1f405b0()*0.0275941);
}

double NNfunction-ss_dLdR::synapse0x1f53790() {
   return (neuron0x1f408f0()*-0.0126178);
}

double NNfunction-ss_dLdR::synapse0x1f537d0() {
   return (neuron0x1f40e50()*0.285454);
}

double NNfunction-ss_dLdR::synapse0x1f53e50() {
   return (neuron0x1f41070()*0.00810967);
}

double NNfunction-ss_dLdR::synapse0x1f53e90() {
   return (neuron0x1f413b0()*0.00733444);
}

double NNfunction-ss_dLdR::synapse0x1f53ed0() {
   return (neuron0x1f416f0()*0.00634229);
}

double NNfunction-ss_dLdR::synapse0x1f53f10() {
   return (neuron0x1f41a30()*0.0175505);
}

double NNfunction-ss_dLdR::synapse0x1f53f50() {
   return (neuron0x1f41d70()*-0.00780453);
}

double NNfunction-ss_dLdR::synapse0x1f53f90() {
   return (neuron0x1f420b0()*-0.00415516);
}

double NNfunction-ss_dLdR::synapse0x1f54310() {
   return (neuron0x1f3d4f0()*0.0662495);
}

double NNfunction-ss_dLdR::synapse0x1f54350() {
   return (neuron0x1f3d830()*-0.000132605);
}

double NNfunction-ss_dLdR::synapse0x1f54390() {
   return (neuron0x1f3db70()*0.072478);
}

double NNfunction-ss_dLdR::synapse0x1f543d0() {
   return (neuron0x1f3deb0()*0.0157712);
}

double NNfunction-ss_dLdR::synapse0x1f54410() {
   return (neuron0x1f3e1f0()*0.0375247);
}

double NNfunction-ss_dLdR::synapse0x1f54450() {
   return (neuron0x1f3e530()*0.0206091);
}

double NNfunction-ss_dLdR::synapse0x1f54490() {
   return (neuron0x1f3e870()*0.0665667);
}

double NNfunction-ss_dLdR::synapse0x1f544d0() {
   return (neuron0x1f3ebb0()*0.042575);
}

double NNfunction-ss_dLdR::synapse0x1f54510() {
   return (neuron0x1f3eef0()*0.0016586);
}

double NNfunction-ss_dLdR::synapse0x1f54550() {
   return (neuron0x1f3f230()*0.0509743);
}

double NNfunction-ss_dLdR::synapse0x1f54590() {
   return (neuron0x1f3f570()*0.03941);
}

double NNfunction-ss_dLdR::synapse0x1f545d0() {
   return (neuron0x1f3f8b0()*-0.911212);
}

double NNfunction-ss_dLdR::synapse0x1f54610() {
   return (neuron0x1f3fbf0()*0.0724881);
}

double NNfunction-ss_dLdR::synapse0x1f54650() {
   return (neuron0x1f3ff30()*0.0286514);
}

double NNfunction-ss_dLdR::synapse0x1f54690() {
   return (neuron0x1f40270()*0.0570088);
}

double NNfunction-ss_dLdR::synapse0x1f546d0() {
   return (neuron0x1f405b0()*0.057384);
}

double NNfunction-ss_dLdR::synapse0x1f54160() {
   return (neuron0x1f408f0()*-0.0307749);
}

double NNfunction-ss_dLdR::synapse0x1f541a0() {
   return (neuron0x1f40e50()*-0.584);
}

double NNfunction-ss_dLdR::synapse0x1f54820() {
   return (neuron0x1f41070()*0.0286802);
}

double NNfunction-ss_dLdR::synapse0x1f54860() {
   return (neuron0x1f413b0()*0.0422073);
}

double NNfunction-ss_dLdR::synapse0x1f548a0() {
   return (neuron0x1f416f0()*0.00488724);
}

double NNfunction-ss_dLdR::synapse0x1f548e0() {
   return (neuron0x1f41a30()*0.00537329);
}

double NNfunction-ss_dLdR::synapse0x1f54920() {
   return (neuron0x1f41d70()*-0.0354715);
}

double NNfunction-ss_dLdR::synapse0x1f54960() {
   return (neuron0x1f420b0()*-0.0108385);
}

double NNfunction-ss_dLdR::synapse0x1f54ce0() {
   return (neuron0x1f3d4f0()*0.0464451);
}

double NNfunction-ss_dLdR::synapse0x1f54d20() {
   return (neuron0x1f3d830()*0.835866);
}

double NNfunction-ss_dLdR::synapse0x1f54d60() {
   return (neuron0x1f3db70()*-0.843324);
}

double NNfunction-ss_dLdR::synapse0x1f54da0() {
   return (neuron0x1f3deb0()*-1.34257);
}

double NNfunction-ss_dLdR::synapse0x1f54de0() {
   return (neuron0x1f3e1f0()*0.758056);
}

double NNfunction-ss_dLdR::synapse0x1f54e20() {
   return (neuron0x1f3e530()*0.413084);
}

double NNfunction-ss_dLdR::synapse0x1f54e60() {
   return (neuron0x1f3e870()*-0.830768);
}

double NNfunction-ss_dLdR::synapse0x1f54ea0() {
   return (neuron0x1f3ebb0()*-1.19367);
}

double NNfunction-ss_dLdR::synapse0x1f54ee0() {
   return (neuron0x1f3eef0()*-0.199586);
}

double NNfunction-ss_dLdR::synapse0x1f54f20() {
   return (neuron0x1f3f230()*0.617275);
}

double NNfunction-ss_dLdR::synapse0x1f54f60() {
   return (neuron0x1f3f570()*0.421097);
}

double NNfunction-ss_dLdR::synapse0x1f54fa0() {
   return (neuron0x1f3f8b0()*-0.255211);
}

double NNfunction-ss_dLdR::synapse0x1f54fe0() {
   return (neuron0x1f3fbf0()*0.751563);
}

double NNfunction-ss_dLdR::synapse0x1f55020() {
   return (neuron0x1f3ff30()*-0.407562);
}

double NNfunction-ss_dLdR::synapse0x1f55060() {
   return (neuron0x1f40270()*0.596601);
}

double NNfunction-ss_dLdR::synapse0x1f550a0() {
   return (neuron0x1f405b0()*-1.04898);
}

double NNfunction-ss_dLdR::synapse0x1f54b30() {
   return (neuron0x1f408f0()*0.533515);
}

double NNfunction-ss_dLdR::synapse0x1f54b70() {
   return (neuron0x1f40e50()*-0.0655047);
}

double NNfunction-ss_dLdR::synapse0x1f551f0() {
   return (neuron0x1f41070()*0.0283109);
}

double NNfunction-ss_dLdR::synapse0x1f55230() {
   return (neuron0x1f413b0()*0.203722);
}

double NNfunction-ss_dLdR::synapse0x1f55270() {
   return (neuron0x1f416f0()*-0.0702787);
}

double NNfunction-ss_dLdR::synapse0x1f552b0() {
   return (neuron0x1f41a30()*0.355912);
}

double NNfunction-ss_dLdR::synapse0x1f552f0() {
   return (neuron0x1f41d70()*-0.335505);
}

double NNfunction-ss_dLdR::synapse0x1f55330() {
   return (neuron0x1f420b0()*-0.161784);
}

double NNfunction-ss_dLdR::synapse0x1f556b0() {
   return (neuron0x1f3d4f0()*-0.191597);
}

double NNfunction-ss_dLdR::synapse0x1f556f0() {
   return (neuron0x1f3d830()*-0.104679);
}

double NNfunction-ss_dLdR::synapse0x1f55730() {
   return (neuron0x1f3db70()*-0.891822);
}

double NNfunction-ss_dLdR::synapse0x1f55770() {
   return (neuron0x1f3deb0()*0.142447);
}

double NNfunction-ss_dLdR::synapse0x1f557b0() {
   return (neuron0x1f3e1f0()*-0.310023);
}

double NNfunction-ss_dLdR::synapse0x1f557f0() {
   return (neuron0x1f3e530()*-1.4332);
}

double NNfunction-ss_dLdR::synapse0x1f55830() {
   return (neuron0x1f3e870()*0.293487);
}

double NNfunction-ss_dLdR::synapse0x1f55870() {
   return (neuron0x1f3ebb0()*0.288298);
}

double NNfunction-ss_dLdR::synapse0x1f558b0() {
   return (neuron0x1f3eef0()*-0.112937);
}

double NNfunction-ss_dLdR::synapse0x1f558f0() {
   return (neuron0x1f3f230()*0.436517);
}

double NNfunction-ss_dLdR::synapse0x1f55930() {
   return (neuron0x1f3f570()*-0.226016);
}

double NNfunction-ss_dLdR::synapse0x1f55970() {
   return (neuron0x1f3f8b0()*0.955158);
}

double NNfunction-ss_dLdR::synapse0x1f559b0() {
   return (neuron0x1f3fbf0()*1.76557);
}

double NNfunction-ss_dLdR::synapse0x1f559f0() {
   return (neuron0x1f3ff30()*-1.15527);
}

double NNfunction-ss_dLdR::synapse0x1f55a30() {
   return (neuron0x1f40270()*0.663725);
}

double NNfunction-ss_dLdR::synapse0x1f55a70() {
   return (neuron0x1f405b0()*-0.569638);
}

double NNfunction-ss_dLdR::synapse0x1f55500() {
   return (neuron0x1f408f0()*-0.532897);
}

double NNfunction-ss_dLdR::synapse0x1f55540() {
   return (neuron0x1f40e50()*-0.0203445);
}

double NNfunction-ss_dLdR::synapse0x1f55bc0() {
   return (neuron0x1f41070()*0.476546);
}

double NNfunction-ss_dLdR::synapse0x1f55c00() {
   return (neuron0x1f413b0()*-0.7626);
}

double NNfunction-ss_dLdR::synapse0x1f55c40() {
   return (neuron0x1f416f0()*0.752312);
}

double NNfunction-ss_dLdR::synapse0x1f55c80() {
   return (neuron0x1f41a30()*0.513933);
}

double NNfunction-ss_dLdR::synapse0x1f55cc0() {
   return (neuron0x1f41d70()*-0.862318);
}

double NNfunction-ss_dLdR::synapse0x1f55d00() {
   return (neuron0x1f420b0()*-0.602527);
}

double NNfunction-ss_dLdR::synapse0x1f56080() {
   return (neuron0x1f3d4f0()*0.250904);
}

double NNfunction-ss_dLdR::synapse0x1f560c0() {
   return (neuron0x1f3d830()*-0.466498);
}

double NNfunction-ss_dLdR::synapse0x1f56100() {
   return (neuron0x1f3db70()*0.54805);
}

double NNfunction-ss_dLdR::synapse0x1f56140() {
   return (neuron0x1f3deb0()*-0.987662);
}

double NNfunction-ss_dLdR::synapse0x1f56180() {
   return (neuron0x1f3e1f0()*-0.270888);
}

double NNfunction-ss_dLdR::synapse0x1f561c0() {
   return (neuron0x1f3e530()*-1.42779);
}

double NNfunction-ss_dLdR::synapse0x1f56200() {
   return (neuron0x1f3e870()*-0.831158);
}

double NNfunction-ss_dLdR::synapse0x1f56240() {
   return (neuron0x1f3ebb0()*-0.203411);
}

double NNfunction-ss_dLdR::synapse0x1f56280() {
   return (neuron0x1f3eef0()*-0.829334);
}

double NNfunction-ss_dLdR::synapse0x1f562c0() {
   return (neuron0x1f3f230()*0.390475);
}

double NNfunction-ss_dLdR::synapse0x1f56300() {
   return (neuron0x1f3f570()*0.143068);
}

double NNfunction-ss_dLdR::synapse0x1f56340() {
   return (neuron0x1f3f8b0()*0.397245);
}

double NNfunction-ss_dLdR::synapse0x1f56380() {
   return (neuron0x1f3fbf0()*-0.354982);
}

double NNfunction-ss_dLdR::synapse0x1f563c0() {
   return (neuron0x1f3ff30()*0.42928);
}

double NNfunction-ss_dLdR::synapse0x1f56400() {
   return (neuron0x1f40270()*0.357176);
}

double NNfunction-ss_dLdR::synapse0x1f56440() {
   return (neuron0x1f405b0()*-0.827512);
}

double NNfunction-ss_dLdR::synapse0x1f55ed0() {
   return (neuron0x1f408f0()*-0.583258);
}

double NNfunction-ss_dLdR::synapse0x1f55f10() {
   return (neuron0x1f40e50()*1.30598);
}

double NNfunction-ss_dLdR::synapse0x1f56590() {
   return (neuron0x1f41070()*0.0850698);
}

double NNfunction-ss_dLdR::synapse0x1f565d0() {
   return (neuron0x1f413b0()*0.820586);
}

double NNfunction-ss_dLdR::synapse0x1f56610() {
   return (neuron0x1f416f0()*0.690723);
}

double NNfunction-ss_dLdR::synapse0x1f56650() {
   return (neuron0x1f41a30()*-0.94872);
}

double NNfunction-ss_dLdR::synapse0x1f56690() {
   return (neuron0x1f41d70()*0.160973);
}

double NNfunction-ss_dLdR::synapse0x1f566d0() {
   return (neuron0x1f420b0()*-0.781129);
}

double NNfunction-ss_dLdR::synapse0x1f56a50() {
   return (neuron0x1f3d4f0()*0.141578);
}

double NNfunction-ss_dLdR::synapse0x1f56a90() {
   return (neuron0x1f3d830()*0.0177823);
}

double NNfunction-ss_dLdR::synapse0x1f56ad0() {
   return (neuron0x1f3db70()*-0.04394);
}

double NNfunction-ss_dLdR::synapse0x1f56b10() {
   return (neuron0x1f3deb0()*0.116695);
}

double NNfunction-ss_dLdR::synapse0x1f56b50() {
   return (neuron0x1f3e1f0()*0.020338);
}

double NNfunction-ss_dLdR::synapse0x1f56b90() {
   return (neuron0x1f3e530()*-0.0903718);
}

double NNfunction-ss_dLdR::synapse0x1f56bd0() {
   return (neuron0x1f3e870()*0.0312676);
}

double NNfunction-ss_dLdR::synapse0x1f56c10() {
   return (neuron0x1f3ebb0()*0.113608);
}

double NNfunction-ss_dLdR::synapse0x1f56c50() {
   return (neuron0x1f3eef0()*0.0172009);
}

double NNfunction-ss_dLdR::synapse0x1f56c90() {
   return (neuron0x1f3f230()*0.0702843);
}

double NNfunction-ss_dLdR::synapse0x1f56cd0() {
   return (neuron0x1f3f570()*-0.0744119);
}

double NNfunction-ss_dLdR::synapse0x1f56d10() {
   return (neuron0x1f3f8b0()*0.730915);
}

double NNfunction-ss_dLdR::synapse0x1f56d50() {
   return (neuron0x1f3fbf0()*-0.0930516);
}

double NNfunction-ss_dLdR::synapse0x1f56d90() {
   return (neuron0x1f3ff30()*-0.0926855);
}

double NNfunction-ss_dLdR::synapse0x1f56dd0() {
   return (neuron0x1f40270()*0.0385209);
}

double NNfunction-ss_dLdR::synapse0x1f56e10() {
   return (neuron0x1f405b0()*-0.0241954);
}

double NNfunction-ss_dLdR::synapse0x1f568a0() {
   return (neuron0x1f408f0()*-0.0208631);
}

double NNfunction-ss_dLdR::synapse0x1f568e0() {
   return (neuron0x1f40e50()*0.201065);
}

double NNfunction-ss_dLdR::synapse0x1f56f60() {
   return (neuron0x1f41070()*-0.0392909);
}

double NNfunction-ss_dLdR::synapse0x1f56fa0() {
   return (neuron0x1f413b0()*-0.0814609);
}

double NNfunction-ss_dLdR::synapse0x1f56fe0() {
   return (neuron0x1f416f0()*-0.0117341);
}

double NNfunction-ss_dLdR::synapse0x1f57020() {
   return (neuron0x1f41a30()*-0.02519);
}

double NNfunction-ss_dLdR::synapse0x1f57060() {
   return (neuron0x1f41d70()*0.00232861);
}

double NNfunction-ss_dLdR::synapse0x1f570a0() {
   return (neuron0x1f420b0()*0.0133905);
}

double NNfunction-ss_dLdR::synapse0x1f57420() {
   return (neuron0x1f3d4f0()*0.190973);
}

double NNfunction-ss_dLdR::synapse0x1f57460() {
   return (neuron0x1f3d830()*-0.143553);
}

double NNfunction-ss_dLdR::synapse0x1f574a0() {
   return (neuron0x1f3db70()*0.16243);
}

double NNfunction-ss_dLdR::synapse0x1f574e0() {
   return (neuron0x1f3deb0()*-0.35345);
}

double NNfunction-ss_dLdR::synapse0x1f57520() {
   return (neuron0x1f3e1f0()*-0.0146829);
}

double NNfunction-ss_dLdR::synapse0x1f57560() {
   return (neuron0x1f3e530()*0.149277);
}

double NNfunction-ss_dLdR::synapse0x1f575a0() {
   return (neuron0x1f3e870()*-0.257408);
}

double NNfunction-ss_dLdR::synapse0x1f575e0() {
   return (neuron0x1f3ebb0()*0.0269337);
}

double NNfunction-ss_dLdR::synapse0x1f57620() {
   return (neuron0x1f3eef0()*-0.124657);
}

double NNfunction-ss_dLdR::synapse0x1f57660() {
   return (neuron0x1f3f230()*-0.196793);
}

double NNfunction-ss_dLdR::synapse0x1f576a0() {
   return (neuron0x1f3f570()*0.0531659);
}

double NNfunction-ss_dLdR::synapse0x1f576e0() {
   return (neuron0x1f3f8b0()*-0.52696);
}

double NNfunction-ss_dLdR::synapse0x1f57720() {
   return (neuron0x1f3fbf0()*0.131519);
}

double NNfunction-ss_dLdR::synapse0x1f57760() {
   return (neuron0x1f3ff30()*0.0358616);
}

double NNfunction-ss_dLdR::synapse0x1f577a0() {
   return (neuron0x1f40270()*0.0343833);
}

double NNfunction-ss_dLdR::synapse0x1f577e0() {
   return (neuron0x1f405b0()*0.120346);
}

double NNfunction-ss_dLdR::synapse0x1f57270() {
   return (neuron0x1f408f0()*0.105844);
}

double NNfunction-ss_dLdR::synapse0x1f572b0() {
   return (neuron0x1f40e50()*-0.717395);
}

double NNfunction-ss_dLdR::synapse0x1f57930() {
   return (neuron0x1f41070()*0.0643625);
}

double NNfunction-ss_dLdR::synapse0x1f57970() {
   return (neuron0x1f413b0()*0.270591);
}

double NNfunction-ss_dLdR::synapse0x1f579b0() {
   return (neuron0x1f416f0()*-0.186356);
}

double NNfunction-ss_dLdR::synapse0x1f579f0() {
   return (neuron0x1f41a30()*-0.0396224);
}

double NNfunction-ss_dLdR::synapse0x1f57a30() {
   return (neuron0x1f41d70()*-0.325174);
}

double NNfunction-ss_dLdR::synapse0x1f57a70() {
   return (neuron0x1f420b0()*-0.277989);
}

double NNfunction-ss_dLdR::synapse0x1f57df0() {
   return (neuron0x1f3d4f0()*-0.0514461);
}

double NNfunction-ss_dLdR::synapse0x1f4c3c0() {
   return (neuron0x1f3d830()*0.0315665);
}

double NNfunction-ss_dLdR::synapse0x1f4c400() {
   return (neuron0x1f3db70()*-0.276124);
}

double NNfunction-ss_dLdR::synapse0x1f4c440() {
   return (neuron0x1f3deb0()*2.32653);
}

double NNfunction-ss_dLdR::synapse0x1f4c690() {
   return (neuron0x1f3e1f0()*-0.18999);
}

double NNfunction-ss_dLdR::synapse0x1f4c6d0() {
   return (neuron0x1f3e530()*0.345458);
}

double NNfunction-ss_dLdR::synapse0x1f4c710() {
   return (neuron0x1f3e870()*-0.444078);
}

double NNfunction-ss_dLdR::synapse0x1f4c960() {
   return (neuron0x1f3ebb0()*-0.453083);
}

double NNfunction-ss_dLdR::synapse0x1f4c9a0() {
   return (neuron0x1f3eef0()*-0.559808);
}

double NNfunction-ss_dLdR::synapse0x1f4cbf0() {
   return (neuron0x1f3f230()*0.0462901);
}

double NNfunction-ss_dLdR::synapse0x1f4cc30() {
   return (neuron0x1f3f570()*0.443975);
}

double NNfunction-ss_dLdR::synapse0x1f4cc70() {
   return (neuron0x1f3f8b0()*1.27878);
}

double NNfunction-ss_dLdR::synapse0x1f4cec0() {
   return (neuron0x1f3fbf0()*-0.307498);
}

double NNfunction-ss_dLdR::synapse0x1f4cf00() {
   return (neuron0x1f3ff30()*0.0324543);
}

double NNfunction-ss_dLdR::synapse0x1f4d150() {
   return (neuron0x1f40270()*0.153251);
}

double NNfunction-ss_dLdR::synapse0x1f4d190() {
   return (neuron0x1f405b0()*0.417344);
}

double NNfunction-ss_dLdR::synapse0x1f57c40() {
   return (neuron0x1f408f0()*0.0211491);
}

double NNfunction-ss_dLdR::synapse0x1f57c80() {
   return (neuron0x1f40e50()*-0.260371);
}

double NNfunction-ss_dLdR::synapse0x1f4d2e0() {
   return (neuron0x1f41070()*-0.367423);
}

double NNfunction-ss_dLdR::synapse0x1f4d7f0() {
   return (neuron0x1f413b0()*-0.508762);
}

double NNfunction-ss_dLdR::synapse0x1f4d830() {
   return (neuron0x1f416f0()*-0.136886);
}

double NNfunction-ss_dLdR::synapse0x1f4d870() {
   return (neuron0x1f41a30()*-0.428214);
}

double NNfunction-ss_dLdR::synapse0x1f4dac0() {
   return (neuron0x1f41d70()*0.328666);
}

double NNfunction-ss_dLdR::synapse0x1f4db00() {
   return (neuron0x1f420b0()*0.00411053);
}

double NNfunction-ss_dLdR::synapse0x1f4d3b0() {
   return (neuron0x1f3d4f0()*0.569089);
}

double NNfunction-ss_dLdR::synapse0x1f4d3f0() {
   return (neuron0x1f3d830()*0.117684);
}

double NNfunction-ss_dLdR::synapse0x1f4d430() {
   return (neuron0x1f3db70()*-0.33725);
}

double NNfunction-ss_dLdR::synapse0x1f4d470() {
   return (neuron0x1f3deb0()*-0.188979);
}

double NNfunction-ss_dLdR::synapse0x1f4ddf0() {
   return (neuron0x1f3e1f0()*-0.170138);
}

double NNfunction-ss_dLdR::synapse0x1f5a140() {
   return (neuron0x1f3e530()*0.0646036);
}

double NNfunction-ss_dLdR::synapse0x1f5a180() {
   return (neuron0x1f3e870()*-0.087649);
}

double NNfunction-ss_dLdR::synapse0x1f5a1c0() {
   return (neuron0x1f3ebb0()*-0.170374);
}

double NNfunction-ss_dLdR::synapse0x1f5a200() {
   return (neuron0x1f3eef0()*0.0497067);
}

double NNfunction-ss_dLdR::synapse0x1f5a240() {
   return (neuron0x1f3f230()*-0.477051);
}

double NNfunction-ss_dLdR::synapse0x1f5a280() {
   return (neuron0x1f3f570()*0.0244563);
}

double NNfunction-ss_dLdR::synapse0x1f5a2c0() {
   return (neuron0x1f3f8b0()*1.23007);
}

double NNfunction-ss_dLdR::synapse0x1f5a300() {
   return (neuron0x1f3fbf0()*-0.295495);
}

double NNfunction-ss_dLdR::synapse0x1f5a340() {
   return (neuron0x1f3ff30()*-0.086994);
}

double NNfunction-ss_dLdR::synapse0x1f5a380() {
   return (neuron0x1f40270()*0.125663);
}

double NNfunction-ss_dLdR::synapse0x1f5a3c0() {
   return (neuron0x1f405b0()*0.120908);
}

double NNfunction-ss_dLdR::synapse0x1f4dcd0() {
   return (neuron0x1f408f0()*-0.0580292);
}

double NNfunction-ss_dLdR::synapse0x1f4dd10() {
   return (neuron0x1f40e50()*0.107836);
}

double NNfunction-ss_dLdR::synapse0x1f5a510() {
   return (neuron0x1f41070()*0.73269);
}

double NNfunction-ss_dLdR::synapse0x1f5a550() {
   return (neuron0x1f413b0()*0.162612);
}

double NNfunction-ss_dLdR::synapse0x1f5a590() {
   return (neuron0x1f416f0()*-0.298477);
}

double NNfunction-ss_dLdR::synapse0x1f5a5d0() {
   return (neuron0x1f41a30()*0.262377);
}

double NNfunction-ss_dLdR::synapse0x1f5a610() {
   return (neuron0x1f41d70()*0.0126271);
}

double NNfunction-ss_dLdR::synapse0x1f5a650() {
   return (neuron0x1f420b0()*-0.0216079);
}

double NNfunction-ss_dLdR::synapse0x1f5a9d0() {
   return (neuron0x1f3d4f0()*-0.00109148);
}

double NNfunction-ss_dLdR::synapse0x1f5aa10() {
   return (neuron0x1f3d830()*-0.0574201);
}

double NNfunction-ss_dLdR::synapse0x1f5aa50() {
   return (neuron0x1f3db70()*-0.0561751);
}

double NNfunction-ss_dLdR::synapse0x1f5aa90() {
   return (neuron0x1f3deb0()*-0.0117785);
}

double NNfunction-ss_dLdR::synapse0x1f5aad0() {
   return (neuron0x1f3e1f0()*0.0720477);
}

double NNfunction-ss_dLdR::synapse0x1f5ab10() {
   return (neuron0x1f3e530()*0.0446405);
}

double NNfunction-ss_dLdR::synapse0x1f5ab50() {
   return (neuron0x1f3e870()*0.0333148);
}

double NNfunction-ss_dLdR::synapse0x1f5ab90() {
   return (neuron0x1f3ebb0()*0.018021);
}

double NNfunction-ss_dLdR::synapse0x1f5abd0() {
   return (neuron0x1f3eef0()*0.0226842);
}

double NNfunction-ss_dLdR::synapse0x1f5ac10() {
   return (neuron0x1f3f230()*0.0133659);
}

double NNfunction-ss_dLdR::synapse0x1f5ac50() {
   return (neuron0x1f3f570()*0.0627805);
}

double NNfunction-ss_dLdR::synapse0x1f5ac90() {
   return (neuron0x1f3f8b0()*-0.282364);
}

double NNfunction-ss_dLdR::synapse0x1f5acd0() {
   return (neuron0x1f3fbf0()*0.387917);
}

double NNfunction-ss_dLdR::synapse0x1f5ad10() {
   return (neuron0x1f3ff30()*-0.0254204);
}

double NNfunction-ss_dLdR::synapse0x1f5ad50() {
   return (neuron0x1f40270()*0.237731);
}

double NNfunction-ss_dLdR::synapse0x1f5ad90() {
   return (neuron0x1f405b0()*0.297248);
}

double NNfunction-ss_dLdR::synapse0x1f5a820() {
   return (neuron0x1f408f0()*-0.0413946);
}

double NNfunction-ss_dLdR::synapse0x1f5a860() {
   return (neuron0x1f40e50()*-0.3059);
}

double NNfunction-ss_dLdR::synapse0x1f5aee0() {
   return (neuron0x1f41070()*0.184478);
}

double NNfunction-ss_dLdR::synapse0x1f5af20() {
   return (neuron0x1f413b0()*-0.00785829);
}

double NNfunction-ss_dLdR::synapse0x1f5af60() {
   return (neuron0x1f416f0()*-0.0450871);
}

double NNfunction-ss_dLdR::synapse0x1f5afa0() {
   return (neuron0x1f41a30()*0.0404566);
}

double NNfunction-ss_dLdR::synapse0x1f5afe0() {
   return (neuron0x1f41d70()*-0.0655753);
}

double NNfunction-ss_dLdR::synapse0x1f5b020() {
   return (neuron0x1f420b0()*0.0139774);
}

double NNfunction-ss_dLdR::synapse0x1f5b3a0() {
   return (neuron0x1f3d4f0()*0.165405);
}

double NNfunction-ss_dLdR::synapse0x1f5b3e0() {
   return (neuron0x1f3d830()*0.236668);
}

double NNfunction-ss_dLdR::synapse0x1f5b420() {
   return (neuron0x1f3db70()*0.114956);
}

double NNfunction-ss_dLdR::synapse0x1f5b460() {
   return (neuron0x1f3deb0()*0.955678);
}

double NNfunction-ss_dLdR::synapse0x1f5b4a0() {
   return (neuron0x1f3e1f0()*0.291719);
}

double NNfunction-ss_dLdR::synapse0x1f5b4e0() {
   return (neuron0x1f3e530()*0.520231);
}

double NNfunction-ss_dLdR::synapse0x1f5b520() {
   return (neuron0x1f3e870()*-0.206398);
}

double NNfunction-ss_dLdR::synapse0x1f5b560() {
   return (neuron0x1f3ebb0()*-0.410059);
}

double NNfunction-ss_dLdR::synapse0x1f5b5a0() {
   return (neuron0x1f3eef0()*0.287199);
}

double NNfunction-ss_dLdR::synapse0x1f5b5e0() {
   return (neuron0x1f3f230()*0.244626);
}

double NNfunction-ss_dLdR::synapse0x1f5b620() {
   return (neuron0x1f3f570()*0.127691);
}

double NNfunction-ss_dLdR::synapse0x1f5b660() {
   return (neuron0x1f3f8b0()*-0.472478);
}

double NNfunction-ss_dLdR::synapse0x1f5b6a0() {
   return (neuron0x1f3fbf0()*0.365268);
}

double NNfunction-ss_dLdR::synapse0x1f5b6e0() {
   return (neuron0x1f3ff30()*-0.024475);
}

double NNfunction-ss_dLdR::synapse0x1f5b720() {
   return (neuron0x1f40270()*0.0924888);
}

double NNfunction-ss_dLdR::synapse0x1f5b760() {
   return (neuron0x1f405b0()*0.0787432);
}

double NNfunction-ss_dLdR::synapse0x1f5b1f0() {
   return (neuron0x1f408f0()*-0.397687);
}

double NNfunction-ss_dLdR::synapse0x1f5b230() {
   return (neuron0x1f40e50()*-0.556954);
}

double NNfunction-ss_dLdR::synapse0x1f5b8b0() {
   return (neuron0x1f41070()*0.0879446);
}

double NNfunction-ss_dLdR::synapse0x1f5b8f0() {
   return (neuron0x1f413b0()*0.12078);
}

double NNfunction-ss_dLdR::synapse0x1f5b930() {
   return (neuron0x1f416f0()*0.193832);
}

double NNfunction-ss_dLdR::synapse0x1f5b970() {
   return (neuron0x1f41a30()*0.108956);
}

double NNfunction-ss_dLdR::synapse0x1f5b9b0() {
   return (neuron0x1f41d70()*-0.276079);
}

double NNfunction-ss_dLdR::synapse0x1f5b9f0() {
   return (neuron0x1f420b0()*-0.212356);
}

double NNfunction-ss_dLdR::synapse0x1f5bd70() {
   return (neuron0x1f3d4f0()*-0.113818);
}

double NNfunction-ss_dLdR::synapse0x1f5bdb0() {
   return (neuron0x1f3d830()*0.151428);
}

double NNfunction-ss_dLdR::synapse0x1f5bdf0() {
   return (neuron0x1f3db70()*0.261935);
}

double NNfunction-ss_dLdR::synapse0x1f5be30() {
   return (neuron0x1f3deb0()*0.52296);
}

double NNfunction-ss_dLdR::synapse0x1f5be70() {
   return (neuron0x1f3e1f0()*-0.276213);
}

double NNfunction-ss_dLdR::synapse0x1f5beb0() {
   return (neuron0x1f3e530()*0.486834);
}

double NNfunction-ss_dLdR::synapse0x1f5bef0() {
   return (neuron0x1f3e870()*0.571952);
}

double NNfunction-ss_dLdR::synapse0x1f5bf30() {
   return (neuron0x1f3ebb0()*-0.547516);
}

double NNfunction-ss_dLdR::synapse0x1f5bf70() {
   return (neuron0x1f3eef0()*-0.0416182);
}

double NNfunction-ss_dLdR::synapse0x1f5bfb0() {
   return (neuron0x1f3f230()*0.462887);
}

double NNfunction-ss_dLdR::synapse0x1f5bff0() {
   return (neuron0x1f3f570()*-0.0356984);
}

double NNfunction-ss_dLdR::synapse0x1f5c030() {
   return (neuron0x1f3f8b0()*-0.906831);
}

double NNfunction-ss_dLdR::synapse0x1f5c070() {
   return (neuron0x1f3fbf0()*0.163439);
}

double NNfunction-ss_dLdR::synapse0x1f5c0b0() {
   return (neuron0x1f3ff30()*0.50311);
}

double NNfunction-ss_dLdR::synapse0x1f5c0f0() {
   return (neuron0x1f40270()*-0.10654);
}

double NNfunction-ss_dLdR::synapse0x1f5c130() {
   return (neuron0x1f405b0()*-0.0882883);
}

double NNfunction-ss_dLdR::synapse0x1f5bbc0() {
   return (neuron0x1f408f0()*-0.292889);
}

double NNfunction-ss_dLdR::synapse0x1f5bc00() {
   return (neuron0x1f40e50()*-0.638445);
}

double NNfunction-ss_dLdR::synapse0x1f5c280() {
   return (neuron0x1f41070()*0.300489);
}

double NNfunction-ss_dLdR::synapse0x1f5c2c0() {
   return (neuron0x1f413b0()*1.169);
}

double NNfunction-ss_dLdR::synapse0x1f5c300() {
   return (neuron0x1f416f0()*-0.398274);
}

double NNfunction-ss_dLdR::synapse0x1f5c340() {
   return (neuron0x1f41a30()*-0.132615);
}

double NNfunction-ss_dLdR::synapse0x1f5c380() {
   return (neuron0x1f41d70()*0.348412);
}

double NNfunction-ss_dLdR::synapse0x1f5c3c0() {
   return (neuron0x1f420b0()*0.131292);
}

double NNfunction-ss_dLdR::synapse0x1f5c740() {
   return (neuron0x1f3d4f0()*0.221968);
}

double NNfunction-ss_dLdR::synapse0x1f5c780() {
   return (neuron0x1f3d830()*-0.603143);
}

double NNfunction-ss_dLdR::synapse0x1f5c7c0() {
   return (neuron0x1f3db70()*0.232959);
}

double NNfunction-ss_dLdR::synapse0x1f5c800() {
   return (neuron0x1f3deb0()*-0.948233);
}

double NNfunction-ss_dLdR::synapse0x1f5c840() {
   return (neuron0x1f3e1f0()*0.231464);
}

double NNfunction-ss_dLdR::synapse0x1f5c880() {
   return (neuron0x1f3e530()*-0.454328);
}

double NNfunction-ss_dLdR::synapse0x1f5c8c0() {
   return (neuron0x1f3e870()*-0.290843);
}

double NNfunction-ss_dLdR::synapse0x1f5c900() {
   return (neuron0x1f3ebb0()*0.869561);
}

double NNfunction-ss_dLdR::synapse0x1f5c940() {
   return (neuron0x1f3eef0()*-0.162575);
}

double NNfunction-ss_dLdR::synapse0x1f5c980() {
   return (neuron0x1f3f230()*0.149639);
}

double NNfunction-ss_dLdR::synapse0x1f5c9c0() {
   return (neuron0x1f3f570()*0.263404);
}

double NNfunction-ss_dLdR::synapse0x1f5ca00() {
   return (neuron0x1f3f8b0()*0.228679);
}

double NNfunction-ss_dLdR::synapse0x1f5ca40() {
   return (neuron0x1f3fbf0()*-1.18252);
}

double NNfunction-ss_dLdR::synapse0x1f5ca80() {
   return (neuron0x1f3ff30()*0.107999);
}

double NNfunction-ss_dLdR::synapse0x1f5cac0() {
   return (neuron0x1f40270()*0.568445);
}

double NNfunction-ss_dLdR::synapse0x1f5cb00() {
   return (neuron0x1f405b0()*-0.244986);
}

double NNfunction-ss_dLdR::synapse0x1f5c590() {
   return (neuron0x1f408f0()*-0.384873);
}

double NNfunction-ss_dLdR::synapse0x1f5c5d0() {
   return (neuron0x1f40e50()*-0.792952);
}

double NNfunction-ss_dLdR::synapse0x1f5cc50() {
   return (neuron0x1f41070()*-0.827434);
}

double NNfunction-ss_dLdR::synapse0x1f5cc90() {
   return (neuron0x1f413b0()*0.199704);
}

double NNfunction-ss_dLdR::synapse0x1f5ccd0() {
   return (neuron0x1f416f0()*0.784258);
}

double NNfunction-ss_dLdR::synapse0x1f5cd10() {
   return (neuron0x1f41a30()*-0.671492);
}

double NNfunction-ss_dLdR::synapse0x1f5cd50() {
   return (neuron0x1f41d70()*-0.148297);
}

double NNfunction-ss_dLdR::synapse0x1f5cd90() {
   return (neuron0x1f420b0()*-0.105081);
}

double NNfunction-ss_dLdR::synapse0x1f5d110() {
   return (neuron0x1f3d4f0()*-0.638255);
}

double NNfunction-ss_dLdR::synapse0x1f5d150() {
   return (neuron0x1f3d830()*0.418254);
}

double NNfunction-ss_dLdR::synapse0x1f5d190() {
   return (neuron0x1f3db70()*-0.484676);
}

double NNfunction-ss_dLdR::synapse0x1f5d1d0() {
   return (neuron0x1f3deb0()*0.133863);
}

double NNfunction-ss_dLdR::synapse0x1f5d210() {
   return (neuron0x1f3e1f0()*-0.996274);
}

double NNfunction-ss_dLdR::synapse0x1f5d250() {
   return (neuron0x1f3e530()*0.294444);
}

double NNfunction-ss_dLdR::synapse0x1f5d290() {
   return (neuron0x1f3e870()*0.941253);
}

double NNfunction-ss_dLdR::synapse0x1f5d2d0() {
   return (neuron0x1f3ebb0()*-0.195217);
}

double NNfunction-ss_dLdR::synapse0x1f5d310() {
   return (neuron0x1f3eef0()*-0.31956);
}

double NNfunction-ss_dLdR::synapse0x1f5d350() {
   return (neuron0x1f3f230()*-0.103896);
}

double NNfunction-ss_dLdR::synapse0x1f5d390() {
   return (neuron0x1f3f570()*0.43213);
}

double NNfunction-ss_dLdR::synapse0x1f5d3d0() {
   return (neuron0x1f3f8b0()*0.493148);
}

double NNfunction-ss_dLdR::synapse0x1f5d410() {
   return (neuron0x1f3fbf0()*0.64976);
}

double NNfunction-ss_dLdR::synapse0x1f5d450() {
   return (neuron0x1f3ff30()*-0.620011);
}

double NNfunction-ss_dLdR::synapse0x1f5d490() {
   return (neuron0x1f40270()*-1.97312);
}

double NNfunction-ss_dLdR::synapse0x1f5d4d0() {
   return (neuron0x1f405b0()*-0.0875453);
}

double NNfunction-ss_dLdR::synapse0x1f5cf60() {
   return (neuron0x1f408f0()*-0.460962);
}

double NNfunction-ss_dLdR::synapse0x1f5cfa0() {
   return (neuron0x1f40e50()*0.923419);
}

double NNfunction-ss_dLdR::synapse0x1f5d620() {
   return (neuron0x1f41070()*0.136182);
}

double NNfunction-ss_dLdR::synapse0x1f5d660() {
   return (neuron0x1f413b0()*-0.145355);
}

double NNfunction-ss_dLdR::synapse0x1f5d6a0() {
   return (neuron0x1f416f0()*0.563272);
}

double NNfunction-ss_dLdR::synapse0x1f5d6e0() {
   return (neuron0x1f41a30()*-0.32983);
}

double NNfunction-ss_dLdR::synapse0x1f5d720() {
   return (neuron0x1f41d70()*0.0574324);
}

double NNfunction-ss_dLdR::synapse0x1f5d760() {
   return (neuron0x1f420b0()*0.169175);
}

double NNfunction-ss_dLdR::synapse0x1f5dae0() {
   return (neuron0x1f3d4f0()*0.281252);
}

double NNfunction-ss_dLdR::synapse0x1f5db20() {
   return (neuron0x1f3d830()*-0.355791);
}

double NNfunction-ss_dLdR::synapse0x1f5db60() {
   return (neuron0x1f3db70()*-0.0765749);
}

double NNfunction-ss_dLdR::synapse0x1f5dba0() {
   return (neuron0x1f3deb0()*-2.41942);
}

double NNfunction-ss_dLdR::synapse0x1f5dbe0() {
   return (neuron0x1f3e1f0()*1.30293);
}

double NNfunction-ss_dLdR::synapse0x1f5dc20() {
   return (neuron0x1f3e530()*1.61837);
}

double NNfunction-ss_dLdR::synapse0x1f5dc60() {
   return (neuron0x1f3e870()*-0.213914);
}

double NNfunction-ss_dLdR::synapse0x1f5dca0() {
   return (neuron0x1f3ebb0()*0.304205);
}

double NNfunction-ss_dLdR::synapse0x1f5dce0() {
   return (neuron0x1f3eef0()*1.20724);
}

double NNfunction-ss_dLdR::synapse0x1f5dd20() {
   return (neuron0x1f3f230()*1.8752);
}

double NNfunction-ss_dLdR::synapse0x1f5dd60() {
   return (neuron0x1f3f570()*0.761281);
}

double NNfunction-ss_dLdR::synapse0x1f5dda0() {
   return (neuron0x1f3f8b0()*-1.82333);
}

double NNfunction-ss_dLdR::synapse0x1f5dde0() {
   return (neuron0x1f3fbf0()*0.215456);
}

double NNfunction-ss_dLdR::synapse0x1f5de20() {
   return (neuron0x1f3ff30()*-0.23563);
}

double NNfunction-ss_dLdR::synapse0x1f5de60() {
   return (neuron0x1f40270()*0.142106);
}

double NNfunction-ss_dLdR::synapse0x1f5dea0() {
   return (neuron0x1f405b0()*0.186645);
}

double NNfunction-ss_dLdR::synapse0x1f5d930() {
   return (neuron0x1f408f0()*0.183573);
}

double NNfunction-ss_dLdR::synapse0x1f5d970() {
   return (neuron0x1f40e50()*-2.40581);
}

double NNfunction-ss_dLdR::synapse0x1f5dff0() {
   return (neuron0x1f41070()*-0.328295);
}

double NNfunction-ss_dLdR::synapse0x1f5e030() {
   return (neuron0x1f413b0()*-0.586381);
}

double NNfunction-ss_dLdR::synapse0x1f5e070() {
   return (neuron0x1f416f0()*1.54607);
}

double NNfunction-ss_dLdR::synapse0x1f5e0b0() {
   return (neuron0x1f41a30()*0.571355);
}

double NNfunction-ss_dLdR::synapse0x1f5e0f0() {
   return (neuron0x1f41d70()*-1.58735);
}

double NNfunction-ss_dLdR::synapse0x1f5e130() {
   return (neuron0x1f420b0()*-0.445664);
}

double NNfunction-ss_dLdR::synapse0x1f5e4b0() {
   return (neuron0x1f3d4f0()*0.180004);
}

double NNfunction-ss_dLdR::synapse0x1f5e4f0() {
   return (neuron0x1f3d830()*-0.0792317);
}

double NNfunction-ss_dLdR::synapse0x1f5e530() {
   return (neuron0x1f3db70()*-0.242403);
}

double NNfunction-ss_dLdR::synapse0x1f5e570() {
   return (neuron0x1f3deb0()*0.222563);
}

double NNfunction-ss_dLdR::synapse0x1f5e5b0() {
   return (neuron0x1f3e1f0()*0.297123);
}

double NNfunction-ss_dLdR::synapse0x1f5e5f0() {
   return (neuron0x1f3e530()*0.0555717);
}

double NNfunction-ss_dLdR::synapse0x1f5e630() {
   return (neuron0x1f3e870()*0.203552);
}

double NNfunction-ss_dLdR::synapse0x1f5e670() {
   return (neuron0x1f3ebb0()*0.514219);
}

double NNfunction-ss_dLdR::synapse0x1f5e6b0() {
   return (neuron0x1f3eef0()*-0.0310671);
}

double NNfunction-ss_dLdR::synapse0x1f5e6f0() {
   return (neuron0x1f3f230()*-0.00130891);
}

double NNfunction-ss_dLdR::synapse0x1f5e730() {
   return (neuron0x1f3f570()*-0.0522177);
}

double NNfunction-ss_dLdR::synapse0x1f5e770() {
   return (neuron0x1f3f8b0()*0.496012);
}

double NNfunction-ss_dLdR::synapse0x1f5e7b0() {
   return (neuron0x1f3fbf0()*-0.610507);
}

double NNfunction-ss_dLdR::synapse0x1f5e7f0() {
   return (neuron0x1f3ff30()*0.299341);
}

double NNfunction-ss_dLdR::synapse0x1f5e830() {
   return (neuron0x1f40270()*-0.181454);
}

double NNfunction-ss_dLdR::synapse0x1f5e870() {
   return (neuron0x1f405b0()*0.0125626);
}

double NNfunction-ss_dLdR::synapse0x1f5e300() {
   return (neuron0x1f408f0()*0.131287);
}

double NNfunction-ss_dLdR::synapse0x1f5e340() {
   return (neuron0x1f40e50()*0.473498);
}

double NNfunction-ss_dLdR::synapse0x1f5e9c0() {
   return (neuron0x1f41070()*-0.249319);
}

double NNfunction-ss_dLdR::synapse0x1f5ea00() {
   return (neuron0x1f413b0()*-0.0871853);
}

double NNfunction-ss_dLdR::synapse0x1f5ea40() {
   return (neuron0x1f416f0()*-0.195697);
}

double NNfunction-ss_dLdR::synapse0x1f5ea80() {
   return (neuron0x1f41a30()*0.076788);
}

double NNfunction-ss_dLdR::synapse0x1f5eac0() {
   return (neuron0x1f41d70()*-0.186994);
}

double NNfunction-ss_dLdR::synapse0x1f5eb00() {
   return (neuron0x1f420b0()*0.289431);
}

double NNfunction-ss_dLdR::synapse0x1f475b0() {
   return (neuron0x1f3d4f0()*0.367466);
}

double NNfunction-ss_dLdR::synapse0x1f475f0() {
   return (neuron0x1f3d830()*-0.078533);
}

double NNfunction-ss_dLdR::synapse0x1f47630() {
   return (neuron0x1f3db70()*-0.213021);
}

double NNfunction-ss_dLdR::synapse0x1f47670() {
   return (neuron0x1f3deb0()*-0.310052);
}

double NNfunction-ss_dLdR::synapse0x1f476b0() {
   return (neuron0x1f3e1f0()*0.411957);
}

double NNfunction-ss_dLdR::synapse0x1f476f0() {
   return (neuron0x1f3e530()*0.227084);
}

double NNfunction-ss_dLdR::synapse0x1f47730() {
   return (neuron0x1f3e870()*0.422963);
}

double NNfunction-ss_dLdR::synapse0x1f47770() {
   return (neuron0x1f3ebb0()*-0.0411595);
}

double NNfunction-ss_dLdR::synapse0x1f5f290() {
   return (neuron0x1f3eef0()*0.265164);
}

double NNfunction-ss_dLdR::synapse0x1f5f2d0() {
   return (neuron0x1f3f230()*0.339925);
}

double NNfunction-ss_dLdR::synapse0x1f5f310() {
   return (neuron0x1f3f570()*-0.183563);
}

double NNfunction-ss_dLdR::synapse0x1f5f350() {
   return (neuron0x1f3f8b0()*-0.0084894);
}

double NNfunction-ss_dLdR::synapse0x1f5f390() {
   return (neuron0x1f3fbf0()*0.493861);
}

double NNfunction-ss_dLdR::synapse0x1f5f3d0() {
   return (neuron0x1f3ff30()*0.391113);
}

double NNfunction-ss_dLdR::synapse0x1f5f410() {
   return (neuron0x1f40270()*0.652957);
}

double NNfunction-ss_dLdR::synapse0x1f5f450() {
   return (neuron0x1f405b0()*-0.211787);
}

double NNfunction-ss_dLdR::synapse0x1f5ecd0() {
   return (neuron0x1f408f0()*-0.207322);
}

double NNfunction-ss_dLdR::synapse0x1f5ed10() {
   return (neuron0x1f40e50()*-0.0664916);
}

double NNfunction-ss_dLdR::synapse0x1f5f5a0() {
   return (neuron0x1f41070()*-0.151639);
}

double NNfunction-ss_dLdR::synapse0x1f5f5e0() {
   return (neuron0x1f413b0()*0.364694);
}

double NNfunction-ss_dLdR::synapse0x1f5f620() {
   return (neuron0x1f416f0()*-0.300858);
}

double NNfunction-ss_dLdR::synapse0x1f5f660() {
   return (neuron0x1f41a30()*0.166584);
}

double NNfunction-ss_dLdR::synapse0x1f5f6a0() {
   return (neuron0x1f41d70()*-0.0327731);
}

double NNfunction-ss_dLdR::synapse0x1f5f6e0() {
   return (neuron0x1f420b0()*0.172791);
}

double NNfunction-ss_dLdR::synapse0x1f5fa60() {
   return (neuron0x1f3d4f0()*-0.110429);
}

double NNfunction-ss_dLdR::synapse0x1f5faa0() {
   return (neuron0x1f3d830()*0.0112423);
}

double NNfunction-ss_dLdR::synapse0x1f5fae0() {
   return (neuron0x1f3db70()*0.0315594);
}

double NNfunction-ss_dLdR::synapse0x1f5fb20() {
   return (neuron0x1f3deb0()*10.1463);
}

double NNfunction-ss_dLdR::synapse0x1f5fb60() {
   return (neuron0x1f3e1f0()*-0.0399451);
}

double NNfunction-ss_dLdR::synapse0x1f5fba0() {
   return (neuron0x1f3e530()*-0.0401565);
}

double NNfunction-ss_dLdR::synapse0x1f5fbe0() {
   return (neuron0x1f3e870()*0.011769);
}

double NNfunction-ss_dLdR::synapse0x1f5fc20() {
   return (neuron0x1f3ebb0()*-0.000328856);
}

double NNfunction-ss_dLdR::synapse0x1f5fc60() {
   return (neuron0x1f3eef0()*-0.0209773);
}

double NNfunction-ss_dLdR::synapse0x1f5fca0() {
   return (neuron0x1f3f230()*0.0277317);
}

double NNfunction-ss_dLdR::synapse0x1f5fce0() {
   return (neuron0x1f3f570()*0.0215872);
}

double NNfunction-ss_dLdR::synapse0x1f5fd20() {
   return (neuron0x1f3f8b0()*0.207736);
}

double NNfunction-ss_dLdR::synapse0x1f5fd60() {
   return (neuron0x1f3fbf0()*-0.0123543);
}

double NNfunction-ss_dLdR::synapse0x1f5fda0() {
   return (neuron0x1f3ff30()*-0.0112834);
}

double NNfunction-ss_dLdR::synapse0x1f5fde0() {
   return (neuron0x1f40270()*0.0351659);
}

double NNfunction-ss_dLdR::synapse0x1f5fe20() {
   return (neuron0x1f405b0()*-0.0105702);
}

double NNfunction-ss_dLdR::synapse0x1f5f8b0() {
   return (neuron0x1f408f0()*0.00018631);
}

double NNfunction-ss_dLdR::synapse0x1f5f8f0() {
   return (neuron0x1f40e50()*0.168467);
}

double NNfunction-ss_dLdR::synapse0x1f5ff70() {
   return (neuron0x1f41070()*0.0247223);
}

double NNfunction-ss_dLdR::synapse0x1f5ffb0() {
   return (neuron0x1f413b0()*0.0215445);
}

double NNfunction-ss_dLdR::synapse0x1f5fff0() {
   return (neuron0x1f416f0()*0.00525241);
}

double NNfunction-ss_dLdR::synapse0x1f60030() {
   return (neuron0x1f41a30()*0.0431462);
}

double NNfunction-ss_dLdR::synapse0x1f60070() {
   return (neuron0x1f41d70()*-0.0439875);
}

double NNfunction-ss_dLdR::synapse0x1f600b0() {
   return (neuron0x1f420b0()*0.0151345);
}

double NNfunction-ss_dLdR::synapse0x1f60430() {
   return (neuron0x1f3d4f0()*0.125014);
}

double NNfunction-ss_dLdR::synapse0x1f60470() {
   return (neuron0x1f3d830()*-0.302168);
}

double NNfunction-ss_dLdR::synapse0x1f604b0() {
   return (neuron0x1f3db70()*0.632303);
}

double NNfunction-ss_dLdR::synapse0x1f604f0() {
   return (neuron0x1f3deb0()*1.61922);
}

double NNfunction-ss_dLdR::synapse0x1f60530() {
   return (neuron0x1f3e1f0()*-0.148797);
}

double NNfunction-ss_dLdR::synapse0x1f60570() {
   return (neuron0x1f3e530()*0.777217);
}

double NNfunction-ss_dLdR::synapse0x1f605b0() {
   return (neuron0x1f3e870()*-0.383334);
}

double NNfunction-ss_dLdR::synapse0x1f605f0() {
   return (neuron0x1f3ebb0()*-0.669547);
}

double NNfunction-ss_dLdR::synapse0x1f60630() {
   return (neuron0x1f3eef0()*-1.51906);
}

double NNfunction-ss_dLdR::synapse0x1f60670() {
   return (neuron0x1f3f230()*0.332633);
}

double NNfunction-ss_dLdR::synapse0x1f606b0() {
   return (neuron0x1f3f570()*0.587231);
}

double NNfunction-ss_dLdR::synapse0x1f606f0() {
   return (neuron0x1f3f8b0()*0.337987);
}

double NNfunction-ss_dLdR::synapse0x1f60730() {
   return (neuron0x1f3fbf0()*-0.128699);
}

double NNfunction-ss_dLdR::synapse0x1f60770() {
   return (neuron0x1f3ff30()*0.48283);
}

double NNfunction-ss_dLdR::synapse0x1f607b0() {
   return (neuron0x1f40270()*-0.333636);
}

double NNfunction-ss_dLdR::synapse0x1f607f0() {
   return (neuron0x1f405b0()*0.440136);
}

double NNfunction-ss_dLdR::synapse0x1f60280() {
   return (neuron0x1f408f0()*-0.262989);
}

double NNfunction-ss_dLdR::synapse0x1f602c0() {
   return (neuron0x1f40e50()*-0.540045);
}

double NNfunction-ss_dLdR::synapse0x1f50df0() {
   return (neuron0x1f41070()*-0.72446);
}

double NNfunction-ss_dLdR::synapse0x1f50e30() {
   return (neuron0x1f413b0()*0.0173205);
}

double NNfunction-ss_dLdR::synapse0x1f50e70() {
   return (neuron0x1f416f0()*0.245028);
}

double NNfunction-ss_dLdR::synapse0x1f50eb0() {
   return (neuron0x1f41a30()*-0.361457);
}

double NNfunction-ss_dLdR::synapse0x1f50ef0() {
   return (neuron0x1f41d70()*0.417501);
}

double NNfunction-ss_dLdR::synapse0x1f50f30() {
   return (neuron0x1f420b0()*0.250103);
}

double NNfunction-ss_dLdR::synapse0x1f512b0() {
   return (neuron0x1f3d4f0()*0.0662181);
}

double NNfunction-ss_dLdR::synapse0x1f512f0() {
   return (neuron0x1f3d830()*0.413378);
}

double NNfunction-ss_dLdR::synapse0x1f51330() {
   return (neuron0x1f3db70()*0.433153);
}

double NNfunction-ss_dLdR::synapse0x1f51370() {
   return (neuron0x1f3deb0()*0.0335085);
}

double NNfunction-ss_dLdR::synapse0x1f513b0() {
   return (neuron0x1f3e1f0()*-0.0276016);
}

double NNfunction-ss_dLdR::synapse0x1f513f0() {
   return (neuron0x1f3e530()*-0.723385);
}

double NNfunction-ss_dLdR::synapse0x1f51430() {
   return (neuron0x1f3e870()*-0.493051);
}

double NNfunction-ss_dLdR::synapse0x1f51470() {
   return (neuron0x1f3ebb0()*-0.333833);
}

double NNfunction-ss_dLdR::synapse0x1f514b0() {
   return (neuron0x1f3eef0()*1.09817);
}

double NNfunction-ss_dLdR::synapse0x1f514f0() {
   return (neuron0x1f3f230()*0.709557);
}

double NNfunction-ss_dLdR::synapse0x1f51530() {
   return (neuron0x1f3f570()*0.245723);
}

double NNfunction-ss_dLdR::synapse0x1f51570() {
   return (neuron0x1f3f8b0()*-0.174964);
}

double NNfunction-ss_dLdR::synapse0x1f515b0() {
   return (neuron0x1f3fbf0()*0.109991);
}

double NNfunction-ss_dLdR::synapse0x1f515f0() {
   return (neuron0x1f3ff30()*0.38569);
}

double NNfunction-ss_dLdR::synapse0x1f51630() {
   return (neuron0x1f40270()*-0.123973);
}

double NNfunction-ss_dLdR::synapse0x1f51670() {
   return (neuron0x1f405b0()*0.422124);
}

double NNfunction-ss_dLdR::synapse0x1f51100() {
   return (neuron0x1f408f0()*-0.739377);
}

double NNfunction-ss_dLdR::synapse0x1f51140() {
   return (neuron0x1f40e50()*-1.07531);
}

double NNfunction-ss_dLdR::synapse0x1f517c0() {
   return (neuron0x1f41070()*0.684075);
}

double NNfunction-ss_dLdR::synapse0x1f51800() {
   return (neuron0x1f413b0()*-0.126558);
}

double NNfunction-ss_dLdR::synapse0x1f51840() {
   return (neuron0x1f416f0()*-0.391481);
}

double NNfunction-ss_dLdR::synapse0x1f51880() {
   return (neuron0x1f41a30()*0.26038);
}

double NNfunction-ss_dLdR::synapse0x1f518c0() {
   return (neuron0x1f41d70()*0.128577);
}

double NNfunction-ss_dLdR::synapse0x1f51900() {
   return (neuron0x1f420b0()*-0.270342);
}

double NNfunction-ss_dLdR::synapse0x1f51c80() {
   return (neuron0x1f3d4f0()*0.301654);
}

double NNfunction-ss_dLdR::synapse0x1f51cc0() {
   return (neuron0x1f3d830()*-0.230934);
}

double NNfunction-ss_dLdR::synapse0x1f51d00() {
   return (neuron0x1f3db70()*-0.546153);
}

double NNfunction-ss_dLdR::synapse0x1f51d40() {
   return (neuron0x1f3deb0()*-0.172617);
}

double NNfunction-ss_dLdR::synapse0x1f51d80() {
   return (neuron0x1f3e1f0()*0.518898);
}

double NNfunction-ss_dLdR::synapse0x1f51dc0() {
   return (neuron0x1f3e530()*-0.209051);
}

double NNfunction-ss_dLdR::synapse0x1f51e00() {
   return (neuron0x1f3e870()*1.20599);
}

double NNfunction-ss_dLdR::synapse0x1f51e40() {
   return (neuron0x1f3ebb0()*-0.288683);
}

double NNfunction-ss_dLdR::synapse0x1f51e80() {
   return (neuron0x1f3eef0()*-0.32351);
}

double NNfunction-ss_dLdR::synapse0x1f51ec0() {
   return (neuron0x1f3f230()*-0.498569);
}

double NNfunction-ss_dLdR::synapse0x1f51f00() {
   return (neuron0x1f3f570()*0.0902428);
}

double NNfunction-ss_dLdR::synapse0x1f51f40() {
   return (neuron0x1f3f8b0()*0.135563);
}

double NNfunction-ss_dLdR::synapse0x1f51f80() {
   return (neuron0x1f3fbf0()*0.263048);
}

double NNfunction-ss_dLdR::synapse0x1f51fc0() {
   return (neuron0x1f3ff30()*0.395544);
}

double NNfunction-ss_dLdR::synapse0x1f52000() {
   return (neuron0x1f40270()*-0.192036);
}

double NNfunction-ss_dLdR::synapse0x1f52040() {
   return (neuron0x1f405b0()*-0.963803);
}

double NNfunction-ss_dLdR::synapse0x1f51ad0() {
   return (neuron0x1f408f0()*-0.306759);
}

double NNfunction-ss_dLdR::synapse0x1f51b10() {
   return (neuron0x1f40e50()*0.315834);
}

double NNfunction-ss_dLdR::synapse0x1f52190() {
   return (neuron0x1f41070()*-0.554624);
}

double NNfunction-ss_dLdR::synapse0x1f521d0() {
   return (neuron0x1f413b0()*0.192114);
}

double NNfunction-ss_dLdR::synapse0x1f52210() {
   return (neuron0x1f416f0()*0.114915);
}

double NNfunction-ss_dLdR::synapse0x1f52250() {
   return (neuron0x1f41a30()*-0.00891188);
}

double NNfunction-ss_dLdR::synapse0x1f52290() {
   return (neuron0x1f41d70()*0.380919);
}

double NNfunction-ss_dLdR::synapse0x1f522d0() {
   return (neuron0x1f420b0()*-0.261379);
}

double NNfunction-ss_dLdR::synapse0x1f52650() {
   return (neuron0x1f3d4f0()*0.192351);
}

double NNfunction-ss_dLdR::synapse0x1f52690() {
   return (neuron0x1f3d830()*0.219671);
}

double NNfunction-ss_dLdR::synapse0x1f526d0() {
   return (neuron0x1f3db70()*0.53485);
}

double NNfunction-ss_dLdR::synapse0x1f52710() {
   return (neuron0x1f3deb0()*-1.28859);
}

double NNfunction-ss_dLdR::synapse0x1f52750() {
   return (neuron0x1f3e1f0()*0.250615);
}

double NNfunction-ss_dLdR::synapse0x1f52790() {
   return (neuron0x1f3e530()*-0.0902716);
}

double NNfunction-ss_dLdR::synapse0x1f527d0() {
   return (neuron0x1f3e870()*0.527688);
}

double NNfunction-ss_dLdR::synapse0x1f52810() {
   return (neuron0x1f3ebb0()*-0.156946);
}

double NNfunction-ss_dLdR::synapse0x1f52850() {
   return (neuron0x1f3eef0()*0.376796);
}

double NNfunction-ss_dLdR::synapse0x1f52890() {
   return (neuron0x1f3f230()*0.297342);
}

double NNfunction-ss_dLdR::synapse0x1f528d0() {
   return (neuron0x1f3f570()*-0.0090625);
}

double NNfunction-ss_dLdR::synapse0x1f52910() {
   return (neuron0x1f3f8b0()*-0.121863);
}

double NNfunction-ss_dLdR::synapse0x1f52950() {
   return (neuron0x1f3fbf0()*0.30545);
}

double NNfunction-ss_dLdR::synapse0x1f52990() {
   return (neuron0x1f3ff30()*-0.00923574);
}

double NNfunction-ss_dLdR::synapse0x1f529d0() {
   return (neuron0x1f40270()*0.159178);
}

double NNfunction-ss_dLdR::synapse0x1f52a10() {
   return (neuron0x1f405b0()*0.153627);
}

double NNfunction-ss_dLdR::synapse0x1f524a0() {
   return (neuron0x1f408f0()*-0.543335);
}

double NNfunction-ss_dLdR::synapse0x1f524e0() {
   return (neuron0x1f40e50()*-0.704724);
}

double NNfunction-ss_dLdR::synapse0x1f52b60() {
   return (neuron0x1f41070()*0.183796);
}

double NNfunction-ss_dLdR::synapse0x1f52ba0() {
   return (neuron0x1f413b0()*0.390609);
}

double NNfunction-ss_dLdR::synapse0x1f52be0() {
   return (neuron0x1f416f0()*-0.171998);
}

double NNfunction-ss_dLdR::synapse0x1f52c20() {
   return (neuron0x1f41a30()*-0.0733469);
}

double NNfunction-ss_dLdR::synapse0x1f52c60() {
   return (neuron0x1f41d70()*0.0284823);
}

double NNfunction-ss_dLdR::synapse0x1f52ca0() {
   return (neuron0x1f420b0()*-0.0804204);
}

double NNfunction-ss_dLdR::synapse0x1f64b70() {
   return (neuron0x1f3d4f0()*0.116707);
}

double NNfunction-ss_dLdR::synapse0x1f64bb0() {
   return (neuron0x1f3d830()*0.35952);
}

double NNfunction-ss_dLdR::synapse0x1f64bf0() {
   return (neuron0x1f3db70()*-0.305978);
}

double NNfunction-ss_dLdR::synapse0x1f64c30() {
   return (neuron0x1f3deb0()*0.752369);
}

double NNfunction-ss_dLdR::synapse0x1f64c70() {
   return (neuron0x1f3e1f0()*-0.288569);
}

double NNfunction-ss_dLdR::synapse0x1f64cb0() {
   return (neuron0x1f3e530()*-0.0445882);
}

double NNfunction-ss_dLdR::synapse0x1f64cf0() {
   return (neuron0x1f3e870()*0.237961);
}

double NNfunction-ss_dLdR::synapse0x1f64d30() {
   return (neuron0x1f3ebb0()*0.0402244);
}

double NNfunction-ss_dLdR::synapse0x1f64d70() {
   return (neuron0x1f3eef0()*0.383891);
}

double NNfunction-ss_dLdR::synapse0x1f64db0() {
   return (neuron0x1f3f230()*0.169163);
}

double NNfunction-ss_dLdR::synapse0x1f64df0() {
   return (neuron0x1f3f570()*-0.0974907);
}

double NNfunction-ss_dLdR::synapse0x1f64e30() {
   return (neuron0x1f3f8b0()*-0.0770467);
}

double NNfunction-ss_dLdR::synapse0x1f64e70() {
   return (neuron0x1f3fbf0()*0.245185);
}

double NNfunction-ss_dLdR::synapse0x1f64eb0() {
   return (neuron0x1f3ff30()*-0.115167);
}

double NNfunction-ss_dLdR::synapse0x1f64ef0() {
   return (neuron0x1f40270()*0.425559);
}

double NNfunction-ss_dLdR::synapse0x1f64f30() {
   return (neuron0x1f405b0()*0.0996051);
}

double NNfunction-ss_dLdR::synapse0x1f52ce0() {
   return (neuron0x1f408f0()*-0.262852);
}

double NNfunction-ss_dLdR::synapse0x1f52d20() {
   return (neuron0x1f40e50()*-0.599806);
}

double NNfunction-ss_dLdR::synapse0x1f65080() {
   return (neuron0x1f41070()*0.265771);
}

double NNfunction-ss_dLdR::synapse0x1f650c0() {
   return (neuron0x1f413b0()*-0.0453912);
}

double NNfunction-ss_dLdR::synapse0x1f65100() {
   return (neuron0x1f416f0()*0.126298);
}

double NNfunction-ss_dLdR::synapse0x1f65140() {
   return (neuron0x1f41a30()*0.248829);
}

double NNfunction-ss_dLdR::synapse0x1f65180() {
   return (neuron0x1f41d70()*0.114232);
}

double NNfunction-ss_dLdR::synapse0x1f651c0() {
   return (neuron0x1f420b0()*-0.26171);
}

double NNfunction-ss_dLdR::synapse0x1f65540() {
   return (neuron0x1f3d4f0()*0.2114);
}

double NNfunction-ss_dLdR::synapse0x1f65580() {
   return (neuron0x1f3d830()*0.275084);
}

double NNfunction-ss_dLdR::synapse0x1f655c0() {
   return (neuron0x1f3db70()*0.252194);
}

double NNfunction-ss_dLdR::synapse0x1f65600() {
   return (neuron0x1f3deb0()*0.300184);
}

double NNfunction-ss_dLdR::synapse0x1f65640() {
   return (neuron0x1f3e1f0()*-0.0784141);
}

double NNfunction-ss_dLdR::synapse0x1f65680() {
   return (neuron0x1f3e530()*-0.783568);
}

double NNfunction-ss_dLdR::synapse0x1f656c0() {
   return (neuron0x1f3e870()*-0.592744);
}

double NNfunction-ss_dLdR::synapse0x1f65700() {
   return (neuron0x1f3ebb0()*0.443672);
}

double NNfunction-ss_dLdR::synapse0x1f65740() {
   return (neuron0x1f3eef0()*0.316641);
}

double NNfunction-ss_dLdR::synapse0x1f65780() {
   return (neuron0x1f3f230()*0.143423);
}

double NNfunction-ss_dLdR::synapse0x1f657c0() {
   return (neuron0x1f3f570()*0.566866);
}

double NNfunction-ss_dLdR::synapse0x1f65800() {
   return (neuron0x1f3f8b0()*0.154379);
}

double NNfunction-ss_dLdR::synapse0x1f65840() {
   return (neuron0x1f3fbf0()*-0.192898);
}

double NNfunction-ss_dLdR::synapse0x1f65880() {
   return (neuron0x1f3ff30()*-0.351623);
}

double NNfunction-ss_dLdR::synapse0x1f658c0() {
   return (neuron0x1f40270()*0.317235);
}

double NNfunction-ss_dLdR::synapse0x1f65900() {
   return (neuron0x1f405b0()*-0.808976);
}

double NNfunction-ss_dLdR::synapse0x1f65390() {
   return (neuron0x1f408f0()*-0.400346);
}

double NNfunction-ss_dLdR::synapse0x1f653d0() {
   return (neuron0x1f40e50()*-0.0457782);
}

double NNfunction-ss_dLdR::synapse0x1f65a50() {
   return (neuron0x1f41070()*0.224963);
}

double NNfunction-ss_dLdR::synapse0x1f65a90() {
   return (neuron0x1f413b0()*0.823605);
}

double NNfunction-ss_dLdR::synapse0x1f65ad0() {
   return (neuron0x1f416f0()*-0.105653);
}

double NNfunction-ss_dLdR::synapse0x1f65b10() {
   return (neuron0x1f41a30()*0.280562);
}

double NNfunction-ss_dLdR::synapse0x1f65b50() {
   return (neuron0x1f41d70()*-0.623886);
}

double NNfunction-ss_dLdR::synapse0x1f65b90() {
   return (neuron0x1f420b0()*-0.314936);
}

double NNfunction-ss_dLdR::synapse0x1f65f10() {
   return (neuron0x1f3d4f0()*0.00702161);
}

double NNfunction-ss_dLdR::synapse0x1f65f50() {
   return (neuron0x1f3d830()*-0.0296312);
}

double NNfunction-ss_dLdR::synapse0x1f65f90() {
   return (neuron0x1f3db70()*0.00674612);
}

double NNfunction-ss_dLdR::synapse0x1f65fd0() {
   return (neuron0x1f3deb0()*-0.0205181);
}

double NNfunction-ss_dLdR::synapse0x1f66010() {
   return (neuron0x1f3e1f0()*0.0494817);
}

double NNfunction-ss_dLdR::synapse0x1f66050() {
   return (neuron0x1f3e530()*0.000721423);
}

double NNfunction-ss_dLdR::synapse0x1f66090() {
   return (neuron0x1f3e870()*-0.0128373);
}

double NNfunction-ss_dLdR::synapse0x1f660d0() {
   return (neuron0x1f3ebb0()*0.0453994);
}

double NNfunction-ss_dLdR::synapse0x1f66110() {
   return (neuron0x1f3eef0()*0.0775317);
}

double NNfunction-ss_dLdR::synapse0x1f66150() {
   return (neuron0x1f3f230()*0.00788932);
}

double NNfunction-ss_dLdR::synapse0x1f66190() {
   return (neuron0x1f3f570()*0.03554);
}

double NNfunction-ss_dLdR::synapse0x1f661d0() {
   return (neuron0x1f3f8b0()*-0.660283);
}

double NNfunction-ss_dLdR::synapse0x1f66210() {
   return (neuron0x1f3fbf0()*-0.00935836);
}

double NNfunction-ss_dLdR::synapse0x1f66250() {
   return (neuron0x1f3ff30()*0.0235761);
}

double NNfunction-ss_dLdR::synapse0x1f66290() {
   return (neuron0x1f40270()*-0.0205435);
}

double NNfunction-ss_dLdR::synapse0x1f662d0() {
   return (neuron0x1f405b0()*0.00391339);
}

double NNfunction-ss_dLdR::synapse0x1f65d60() {
   return (neuron0x1f408f0()*0.0391999);
}

double NNfunction-ss_dLdR::synapse0x1f65da0() {
   return (neuron0x1f40e50()*1.64149);
}

double NNfunction-ss_dLdR::synapse0x1f66420() {
   return (neuron0x1f41070()*-0.0226232);
}

double NNfunction-ss_dLdR::synapse0x1f66460() {
   return (neuron0x1f413b0()*-0.0104039);
}

double NNfunction-ss_dLdR::synapse0x1f664a0() {
   return (neuron0x1f416f0()*-0.00643283);
}

double NNfunction-ss_dLdR::synapse0x1f664e0() {
   return (neuron0x1f41a30()*-0.043886);
}

double NNfunction-ss_dLdR::synapse0x1f66520() {
   return (neuron0x1f41d70()*-0.0650446);
}

double NNfunction-ss_dLdR::synapse0x1f66560() {
   return (neuron0x1f420b0()*0.0075544);
}

double NNfunction-ss_dLdR::synapse0x1f668e0() {
   return (neuron0x1f3d4f0()*-0.256479);
}

double NNfunction-ss_dLdR::synapse0x1f66920() {
   return (neuron0x1f3d830()*0.359721);
}

double NNfunction-ss_dLdR::synapse0x1f66960() {
   return (neuron0x1f3db70()*1.12725);
}

double NNfunction-ss_dLdR::synapse0x1f669a0() {
   return (neuron0x1f3deb0()*-0.896046);
}

double NNfunction-ss_dLdR::synapse0x1f669e0() {
   return (neuron0x1f3e1f0()*0.115858);
}

double NNfunction-ss_dLdR::synapse0x1f66a20() {
   return (neuron0x1f3e530()*0.294184);
}

double NNfunction-ss_dLdR::synapse0x1f66a60() {
   return (neuron0x1f3e870()*-1.3228);
}

double NNfunction-ss_dLdR::synapse0x1f66aa0() {
   return (neuron0x1f3ebb0()*0.791188);
}

double NNfunction-ss_dLdR::synapse0x1f66ae0() {
   return (neuron0x1f3eef0()*0.116792);
}

double NNfunction-ss_dLdR::synapse0x1f66b20() {
   return (neuron0x1f3f230()*0.182014);
}

double NNfunction-ss_dLdR::synapse0x1f66b60() {
   return (neuron0x1f3f570()*0.122642);
}

double NNfunction-ss_dLdR::synapse0x1f66ba0() {
   return (neuron0x1f3f8b0()*-1.87212);
}

double NNfunction-ss_dLdR::synapse0x1f66be0() {
   return (neuron0x1f3fbf0()*0.250242);
}

double NNfunction-ss_dLdR::synapse0x1f66c20() {
   return (neuron0x1f3ff30()*-0.57611);
}

double NNfunction-ss_dLdR::synapse0x1f66c60() {
   return (neuron0x1f40270()*-0.0919513);
}

double NNfunction-ss_dLdR::synapse0x1f66ca0() {
   return (neuron0x1f405b0()*-0.403285);
}

double NNfunction-ss_dLdR::synapse0x1f66730() {
   return (neuron0x1f408f0()*0.132015);
}

double NNfunction-ss_dLdR::synapse0x1f66770() {
   return (neuron0x1f40e50()*0.471915);
}

double NNfunction-ss_dLdR::synapse0x1f66df0() {
   return (neuron0x1f41070()*0.619942);
}

double NNfunction-ss_dLdR::synapse0x1f66e30() {
   return (neuron0x1f413b0()*-0.415084);
}

double NNfunction-ss_dLdR::synapse0x1f66e70() {
   return (neuron0x1f416f0()*-0.706504);
}

double NNfunction-ss_dLdR::synapse0x1f66eb0() {
   return (neuron0x1f41a30()*0.00716561);
}

double NNfunction-ss_dLdR::synapse0x1f66ef0() {
   return (neuron0x1f41d70()*0.273338);
}

double NNfunction-ss_dLdR::synapse0x1f66f30() {
   return (neuron0x1f420b0()*-0.450285);
}

double NNfunction-ss_dLdR::synapse0x1d06e40() {
   return (neuron0x1f42520()*0.372512);
}

double NNfunction-ss_dLdR::synapse0x1d06e80() {
   return (neuron0x1f42e70()*-0.60811);
}

double NNfunction-ss_dLdR::synapse0x1f449e0() {
   return (neuron0x1f43950()*-0.13552);
}

double NNfunction-ss_dLdR::synapse0x1f44a20() {
   return (neuron0x1f433f0()*0.182197);
}

double NNfunction-ss_dLdR::synapse0x1f453b0() {
   return (neuron0x1f44730()*0.318667);
}

double NNfunction-ss_dLdR::synapse0x1f453f0() {
   return (neuron0x1f45100()*0.345095);
}

double NNfunction-ss_dLdR::synapse0x1f46180() {
   return (neuron0x1f45ed0()*1.66986);
}

double NNfunction-ss_dLdR::synapse0x1f461c0() {
   return (neuron0x1f468a0()*-0.363171);
}

double NNfunction-ss_dLdR::synapse0x1f46b50() {
   return (neuron0x1f47270()*-0.945723);
}

double NNfunction-ss_dLdR::synapse0x1f46b90() {
   return (neuron0x1f47d50()*-3.67513);
}

double NNfunction-ss_dLdR::synapse0x1f47520() {
   return (neuron0x1f48720()*-0.00166402);
}

double NNfunction-ss_dLdR::synapse0x1f47560() {
   return (neuron0x1f45800()*-0.88394);
}

double NNfunction-ss_dLdR::synapse0x1f48000() {
   return (neuron0x1f4a2d0()*0.33837);
}

double NNfunction-ss_dLdR::synapse0x1f48040() {
   return (neuron0x1f4aca0()*-0.715744);
}

double NNfunction-ss_dLdR::synapse0x1f489d0() {
   return (neuron0x1f4b670()*0.238482);
}

double NNfunction-ss_dLdR::synapse0x1f48a10() {
   return (neuron0x1f4c040()*-0.181766);
}

double NNfunction-ss_dLdR::synapse0x1f45ab0() {
   return (neuron0x1f4de50()*0.306083);
}

double NNfunction-ss_dLdR::synapse0x1f45af0() {
   return (neuron0x1f4e130()*0.61921);
}

double NNfunction-ss_dLdR::synapse0x1f4a580() {
   return (neuron0x1f4eb00()*0.71586);
}

double NNfunction-ss_dLdR::synapse0x1f4a5c0() {
   return (neuron0x1f4f4d0()*0.983466);
}

double NNfunction-ss_dLdR::synapse0x1f4af50() {
   return (neuron0x1f4fea0()*0.219852);
}

double NNfunction-ss_dLdR::synapse0x1f4af90() {
   return (neuron0x1f50870()*-0.298623);
}

double NNfunction-ss_dLdR::synapse0x1f4b920() {
   return (neuron0x1f493c0()*0.358938);
}

double NNfunction-ss_dLdR::synapse0x1f4b960() {
   return (neuron0x1f49d90()*-0.0254356);
}

double NNfunction-ss_dLdR::synapse0x1f4c2f0() {
   return (neuron0x1f53600()*-0.014113);
}

double NNfunction-ss_dLdR::synapse0x1f4c330() {
   return (neuron0x1f53fd0()*0.664337);
}

double NNfunction-ss_dLdR::synapse0x1f40490() {
   return (neuron0x1f549a0()*0.173009);
}

double NNfunction-ss_dLdR::synapse0x1f404d0() {
   return (neuron0x1f55370()*-0.136289);
}

double NNfunction-ss_dLdR::synapse0x1f4e3e0() {
   return (neuron0x1f55d40()*-0.188111);
}

double NNfunction-ss_dLdR::synapse0x1f4e420() {
   return (neuron0x1f56710()*-0.31021);
}

double NNfunction-ss_dLdR::synapse0x1f4edb0() {
   return (neuron0x1f570e0()*-0.719326);
}

double NNfunction-ss_dLdR::synapse0x1f4edf0() {
   return (neuron0x1f57ab0()*-0.230821);
}

double NNfunction-ss_dLdR::synapse0x1f4f780() {
   return (neuron0x1f4db40()*0.417763);
}

double NNfunction-ss_dLdR::synapse0x1f4f7c0() {
   return (neuron0x1f5a690()*-0.450836);
}

double NNfunction-ss_dLdR::synapse0x1f50150() {
   return (neuron0x1f5b060()*0.225729);
}

double NNfunction-ss_dLdR::synapse0x1f50190() {
   return (neuron0x1f5ba30()*0.376526);
}

double NNfunction-ss_dLdR::synapse0x1f50b20() {
   return (neuron0x1f5c400()*0.232193);
}

double NNfunction-ss_dLdR::synapse0x1f50b60() {
   return (neuron0x1f5cdd0()*-0.289427);
}

double NNfunction-ss_dLdR::synapse0x1f49670() {
   return (neuron0x1f5d7a0()*-0.00512437);
}

double NNfunction-ss_dLdR::synapse0x1f496b0() {
   return (neuron0x1f5e170()*-0.411095);
}

double NNfunction-ss_dLdR::synapse0x1f52f20() {
   return (neuron0x1f5eb40()*-0.00296093);
}

double NNfunction-ss_dLdR::synapse0x1f52f60() {
   return (neuron0x1f5f720()*-3.74589);
}

double NNfunction-ss_dLdR::synapse0x1f538b0() {
   return (neuron0x1f600f0()*0.193089);
}

double NNfunction-ss_dLdR::synapse0x1f538f0() {
   return (neuron0x1f50f70()*-0.208386);
}

double NNfunction-ss_dLdR::synapse0x1f54280() {
   return (neuron0x1f51940()*-0.302222);
}

double NNfunction-ss_dLdR::synapse0x1f542c0() {
   return (neuron0x1f52310()*-0.11216);
}

double NNfunction-ss_dLdR::synapse0x1f54c50() {
   return (neuron0x1f64950()*0.248584);
}

double NNfunction-ss_dLdR::synapse0x1f54c90() {
   return (neuron0x1f65200()*0.294859);
}

double NNfunction-ss_dLdR::synapse0x1f55620() {
   return (neuron0x1f65bd0()*-0.506137);
}

double NNfunction-ss_dLdR::synapse0x1f55660() {
   return (neuron0x1f665a0()*0.230198);
}

double NNfunction-ss_dLdR::synapse0x1f57d60() {
   return (neuron0x1f42520()*0.402396);
}

double NNfunction-ss_dLdR::synapse0x1f57da0() {
   return (neuron0x1f42e70()*-0.370964);
}

double NNfunction-ss_dLdR::synapse0x1f4d320() {
   return (neuron0x1f43950()*-0.151062);
}

double NNfunction-ss_dLdR::synapse0x1f4d360() {
   return (neuron0x1f433f0()*0.0841368);
}

double NNfunction-ss_dLdR::synapse0x1f5a940() {
   return (neuron0x1f44730()*0.372733);
}

double NNfunction-ss_dLdR::synapse0x1f5a980() {
   return (neuron0x1f45100()*0.464273);
}

double NNfunction-ss_dLdR::synapse0x1f5b310() {
   return (neuron0x1f45ed0()*-1.39961);
}

double NNfunction-ss_dLdR::synapse0x1f5b350() {
   return (neuron0x1f468a0()*-0.37066);
}

double NNfunction-ss_dLdR::synapse0x1f5bce0() {
   return (neuron0x1f47270()*1.41521);
}

double NNfunction-ss_dLdR::synapse0x1f5bd20() {
   return (neuron0x1f47d50()*0.395425);
}

double NNfunction-ss_dLdR::synapse0x1f5c6b0() {
   return (neuron0x1f48720()*0.107588);
}

double NNfunction-ss_dLdR::synapse0x1f5c6f0() {
   return (neuron0x1f45800()*-0.454922);
}

double NNfunction-ss_dLdR::synapse0x1f5d080() {
   return (neuron0x1f4a2d0()*1.16177);
}

double NNfunction-ss_dLdR::synapse0x1f5d0c0() {
   return (neuron0x1f4aca0()*-0.743639);
}

double NNfunction-ss_dLdR::synapse0x1f5da50() {
   return (neuron0x1f4b670()*0.272222);
}

double NNfunction-ss_dLdR::synapse0x1f5da90() {
   return (neuron0x1f4c040()*-0.182796);
}

double NNfunction-ss_dLdR::synapse0x1f5e420() {
   return (neuron0x1f4de50()*0.338075);
}

double NNfunction-ss_dLdR::synapse0x1f5e460() {
   return (neuron0x1f4e130()*1.30802);
}

double NNfunction-ss_dLdR::synapse0x1f5edf0() {
   return (neuron0x1f4eb00()*0.555755);
}

double NNfunction-ss_dLdR::synapse0x1f5ee30() {
   return (neuron0x1f4f4d0()*1.10638);
}

double NNfunction-ss_dLdR::synapse0x1f5f9d0() {
   return (neuron0x1f4fea0()*0.210505);
}

double NNfunction-ss_dLdR::synapse0x1f5fa10() {
   return (neuron0x1f50870()*-0.357498);
}

double NNfunction-ss_dLdR::synapse0x1f603a0() {
   return (neuron0x1f493c0()*0.432924);
}

double NNfunction-ss_dLdR::synapse0x1f603e0() {
   return (neuron0x1f49d90()*1.4981);
}

double NNfunction-ss_dLdR::synapse0x1f51220() {
   return (neuron0x1f53600()*-0.71485);
}

double NNfunction-ss_dLdR::synapse0x1f51260() {
   return (neuron0x1f53fd0()*-1.74824);
}

double NNfunction-ss_dLdR::synapse0x1f51bf0() {
   return (neuron0x1f549a0()*0.166481);
}

double NNfunction-ss_dLdR::synapse0x1f51c30() {
   return (neuron0x1f55370()*-0.15992);
}

double NNfunction-ss_dLdR::synapse0x1f525c0() {
   return (neuron0x1f55d40()*-0.220448);
}

double NNfunction-ss_dLdR::synapse0x1f52600() {
   return (neuron0x1f56710()*0.394741);
}

double NNfunction-ss_dLdR::synapse0x1f64ae0() {
   return (neuron0x1f570e0()*-0.826179);
}

double NNfunction-ss_dLdR::synapse0x1f64b20() {
   return (neuron0x1f57ab0()*-0.255938);
}

double NNfunction-ss_dLdR::synapse0x1f654b0() {
   return (neuron0x1f4db40()*0.555681);
}

double NNfunction-ss_dLdR::synapse0x1f654f0() {
   return (neuron0x1f5a690()*0.398828);
}

double NNfunction-ss_dLdR::synapse0x1f65e80() {
   return (neuron0x1f5b060()*0.145422);
}

double NNfunction-ss_dLdR::synapse0x1f65ec0() {
   return (neuron0x1f5ba30()*0.494935);
}

double NNfunction-ss_dLdR::synapse0x1f66850() {
   return (neuron0x1f5c400()*0.291265);
}

double NNfunction-ss_dLdR::synapse0x1f66890() {
   return (neuron0x1f5cdd0()*-0.322384);
}

double NNfunction-ss_dLdR::synapse0x1f42740() {
   return (neuron0x1f5d7a0()*0.0680694);
}

double NNfunction-ss_dLdR::synapse0x1f42780() {
   return (neuron0x1f5e170()*-0.648847);
}

double NNfunction-ss_dLdR::synapse0x1f55ff0() {
   return (neuron0x1f5eb40()*0.124588);
}

double NNfunction-ss_dLdR::synapse0x1f56030() {
   return (neuron0x1f5f720()*0.416927);
}

double NNfunction-ss_dLdR::synapse0x1f66f70() {
   return (neuron0x1f600f0()*0.23183);
}

double NNfunction-ss_dLdR::synapse0x1f66fb0() {
   return (neuron0x1f50f70()*-0.204285);
}

double NNfunction-ss_dLdR::synapse0x1f66ff0() {
   return (neuron0x1f51940()*-0.311954);
}

double NNfunction-ss_dLdR::synapse0x1f67030() {
   return (neuron0x1f52310()*-0.2615);
}

double NNfunction-ss_dLdR::synapse0x1f6dee0() {
   return (neuron0x1f64950()*0.312062);
}

double NNfunction-ss_dLdR::synapse0x1f6df20() {
   return (neuron0x1f65200()*0.328426);
}

double NNfunction-ss_dLdR::synapse0x1f6df60() {
   return (neuron0x1f65bd0()*-0.283777);
}

double NNfunction-ss_dLdR::synapse0x1f6dfa0() {
   return (neuron0x1f665a0()*0.231815);
}

double NNfunction-ss_dLdR::synapse0x1f6e320() {
   return (neuron0x1f42520()*1.7175);
}

double NNfunction-ss_dLdR::synapse0x1f6e360() {
   return (neuron0x1f42e70()*0.72983);
}

double NNfunction-ss_dLdR::synapse0x1f6e3a0() {
   return (neuron0x1f43950()*-0.393402);
}

double NNfunction-ss_dLdR::synapse0x1f6e3e0() {
   return (neuron0x1f433f0()*-0.189162);
}

double NNfunction-ss_dLdR::synapse0x1f6e420() {
   return (neuron0x1f44730()*-0.330294);
}

double NNfunction-ss_dLdR::synapse0x1f6e460() {
   return (neuron0x1f45100()*0.414449);
}

double NNfunction-ss_dLdR::synapse0x1f6e4a0() {
   return (neuron0x1f45ed0()*-1.41276);
}

double NNfunction-ss_dLdR::synapse0x1f6e4e0() {
   return (neuron0x1f468a0()*-0.283453);
}

double NNfunction-ss_dLdR::synapse0x1f6e520() {
   return (neuron0x1f47270()*0.825605);
}

double NNfunction-ss_dLdR::synapse0x1f6e560() {
   return (neuron0x1f47d50()*3.90438);
}

double NNfunction-ss_dLdR::synapse0x1f6e5a0() {
   return (neuron0x1f48720()*-0.178659);
}

double NNfunction-ss_dLdR::synapse0x1f6e5e0() {
   return (neuron0x1f45800()*0.5421);
}

double NNfunction-ss_dLdR::synapse0x1f6e620() {
   return (neuron0x1f4a2d0()*1.04298);
}

double NNfunction-ss_dLdR::synapse0x1f6e660() {
   return (neuron0x1f4aca0()*-0.452153);
}

double NNfunction-ss_dLdR::synapse0x1f6e6a0() {
   return (neuron0x1f4b670()*-0.281147);
}

double NNfunction-ss_dLdR::synapse0x1f6e6e0() {
   return (neuron0x1f4c040()*-0.025234);
}

double NNfunction-ss_dLdR::synapse0x1f6e170() {
   return (neuron0x1f4de50()*-0.189913);
}

double NNfunction-ss_dLdR::synapse0x1f6e1b0() {
   return (neuron0x1f4e130()*3.75113);
}

double NNfunction-ss_dLdR::synapse0x1f6e830() {
   return (neuron0x1f4eb00()*1.86034);
}

double NNfunction-ss_dLdR::synapse0x1f6e870() {
   return (neuron0x1f4f4d0()*-0.364864);
}

double NNfunction-ss_dLdR::synapse0x1f6e8b0() {
   return (neuron0x1f4fea0()*-0.250026);
}

double NNfunction-ss_dLdR::synapse0x1f6e8f0() {
   return (neuron0x1f50870()*0.00746816);
}

double NNfunction-ss_dLdR::synapse0x1f6e930() {
   return (neuron0x1f493c0()*0.120582);
}

double NNfunction-ss_dLdR::synapse0x1f6e970() {
   return (neuron0x1f49d90()*0.557945);
}

double NNfunction-ss_dLdR::synapse0x1f6e9b0() {
   return (neuron0x1f53600()*-2.21934);
}

double NNfunction-ss_dLdR::synapse0x1f6e9f0() {
   return (neuron0x1f53fd0()*-1.4068);
}

double NNfunction-ss_dLdR::synapse0x1f6ea30() {
   return (neuron0x1f549a0()*-0.232771);
}

double NNfunction-ss_dLdR::synapse0x1f6ea70() {
   return (neuron0x1f55370()*0.15706);
}

double NNfunction-ss_dLdR::synapse0x1f6eab0() {
   return (neuron0x1f55d40()*0.314262);
}

double NNfunction-ss_dLdR::synapse0x1f6eaf0() {
   return (neuron0x1f56710()*-0.200363);
}

double NNfunction-ss_dLdR::synapse0x1f6eb30() {
   return (neuron0x1f570e0()*-0.301742);
}

double NNfunction-ss_dLdR::synapse0x1f6eb70() {
   return (neuron0x1f57ab0()*0.788941);
}

double NNfunction-ss_dLdR::synapse0x1f6e720() {
   return (neuron0x1f4db40()*0.355765);
}

double NNfunction-ss_dLdR::synapse0x1f6e760() {
   return (neuron0x1f5a690()*0.50523);
}

double NNfunction-ss_dLdR::synapse0x1f6e7a0() {
   return (neuron0x1f5b060()*-0.107199);
}

double NNfunction-ss_dLdR::synapse0x1f6e7e0() {
   return (neuron0x1f5ba30()*-0.395197);
}

double NNfunction-ss_dLdR::synapse0x1f6edc0() {
   return (neuron0x1f5c400()*-0.315506);
}

double NNfunction-ss_dLdR::synapse0x1f6ee00() {
   return (neuron0x1f5cdd0()*-0.150589);
}

double NNfunction-ss_dLdR::synapse0x1f6ee40() {
   return (neuron0x1f5d7a0()*0.31022);
}

double NNfunction-ss_dLdR::synapse0x1f6ee80() {
   return (neuron0x1f5e170()*-0.586949);
}

double NNfunction-ss_dLdR::synapse0x1f6eec0() {
   return (neuron0x1f5eb40()*0.299523);
}

double NNfunction-ss_dLdR::synapse0x1f6ef00() {
   return (neuron0x1f5f720()*2.37674);
}

double NNfunction-ss_dLdR::synapse0x1f6ef40() {
   return (neuron0x1f600f0()*-0.42167);
}

double NNfunction-ss_dLdR::synapse0x1f6ef80() {
   return (neuron0x1f50f70()*0.167051);
}

double NNfunction-ss_dLdR::synapse0x1f6efc0() {
   return (neuron0x1f51940()*0.20265);
}

double NNfunction-ss_dLdR::synapse0x1f6f000() {
   return (neuron0x1f52310()*0.0212292);
}

double NNfunction-ss_dLdR::synapse0x1f6f040() {
   return (neuron0x1f64950()*-0.370273);
}

double NNfunction-ss_dLdR::synapse0x1f6f080() {
   return (neuron0x1f65200()*-0.400584);
}

double NNfunction-ss_dLdR::synapse0x1f6f0c0() {
   return (neuron0x1f65bd0()*1.69705);
}

double NNfunction-ss_dLdR::synapse0x1f6f100() {
   return (neuron0x1f665a0()*-0.0815863);
}

double NNfunction-ss_dLdR::synapse0x1f6f480() {
   return (neuron0x1f42520()*-2.15796);
}

double NNfunction-ss_dLdR::synapse0x1f6f4c0() {
   return (neuron0x1f42e70()*0.982332);
}

double NNfunction-ss_dLdR::synapse0x1f6f500() {
   return (neuron0x1f43950()*-0.174988);
}

double NNfunction-ss_dLdR::synapse0x1f6f540() {
   return (neuron0x1f433f0()*-1.10393);
}

double NNfunction-ss_dLdR::synapse0x1f6f580() {
   return (neuron0x1f44730()*-0.755991);
}

double NNfunction-ss_dLdR::synapse0x1f6f5c0() {
   return (neuron0x1f45100()*-0.329775);
}

double NNfunction-ss_dLdR::synapse0x1f6f600() {
   return (neuron0x1f45ed0()*1.39614);
}

double NNfunction-ss_dLdR::synapse0x1f6f640() {
   return (neuron0x1f468a0()*0.69569);
}

double NNfunction-ss_dLdR::synapse0x1f6f680() {
   return (neuron0x1f47270()*-1.17976);
}

double NNfunction-ss_dLdR::synapse0x1f6f6c0() {
   return (neuron0x1f47d50()*1.69217);
}

double NNfunction-ss_dLdR::synapse0x1f6f700() {
   return (neuron0x1f48720()*0.62119);
}

double NNfunction-ss_dLdR::synapse0x1f6f740() {
   return (neuron0x1f45800()*-0.391635);
}

double NNfunction-ss_dLdR::synapse0x1f6f780() {
   return (neuron0x1f4a2d0()*-3.0354);
}

double NNfunction-ss_dLdR::synapse0x1f6f7c0() {
   return (neuron0x1f4aca0()*2.06488);
}

double NNfunction-ss_dLdR::synapse0x1f6f800() {
   return (neuron0x1f4b670()*-0.544552);
}

double NNfunction-ss_dLdR::synapse0x1f6f840() {
   return (neuron0x1f4c040()*0.437967);
}

double NNfunction-ss_dLdR::synapse0x1f6f2d0() {
   return (neuron0x1f4de50()*-0.725699);
}

double NNfunction-ss_dLdR::synapse0x1f6f310() {
   return (neuron0x1f4e130()*-3.67074);
}

double NNfunction-ss_dLdR::synapse0x1f6f990() {
   return (neuron0x1f4eb00()*-2.34413);
}

double NNfunction-ss_dLdR::synapse0x1f6f9d0() {
   return (neuron0x1f4f4d0()*-3.01171);
}

double NNfunction-ss_dLdR::synapse0x1f6fa10() {
   return (neuron0x1f4fea0()*-0.689197);
}

double NNfunction-ss_dLdR::synapse0x1f6fa50() {
   return (neuron0x1f50870()*0.382025);
}

double NNfunction-ss_dLdR::synapse0x1f6fa90() {
   return (neuron0x1f493c0()*-0.375082);
}

double NNfunction-ss_dLdR::synapse0x1f6fad0() {
   return (neuron0x1f49d90()*-1.27979);
}

double NNfunction-ss_dLdR::synapse0x1f6fb10() {
   return (neuron0x1f53600()*0.23118);
}

double NNfunction-ss_dLdR::synapse0x1f6fb50() {
   return (neuron0x1f53fd0()*0.535344);
}

double NNfunction-ss_dLdR::synapse0x1f6fb90() {
   return (neuron0x1f549a0()*-0.64722);
}

double NNfunction-ss_dLdR::synapse0x1f6fbd0() {
   return (neuron0x1f55370()*0.29612);
}

double NNfunction-ss_dLdR::synapse0x1f6fc10() {
   return (neuron0x1f55d40()*0.5515);
}

double NNfunction-ss_dLdR::synapse0x1f6fc50() {
   return (neuron0x1f56710()*-0.93353);
}

double NNfunction-ss_dLdR::synapse0x1f6fc90() {
   return (neuron0x1f570e0()*1.43136);
}

double NNfunction-ss_dLdR::synapse0x1f6fcd0() {
   return (neuron0x1f57ab0()*0.910772);
}

double NNfunction-ss_dLdR::synapse0x1f6f880() {
   return (neuron0x1f4db40()*-0.197078);
}

double NNfunction-ss_dLdR::synapse0x1f6f8c0() {
   return (neuron0x1f5a690()*0.971673);
}

double NNfunction-ss_dLdR::synapse0x1f6f900() {
   return (neuron0x1f5b060()*-1.40558);
}

double NNfunction-ss_dLdR::synapse0x1f6f940() {
   return (neuron0x1f5ba30()*-0.694595);
}

double NNfunction-ss_dLdR::synapse0x1f6ff20() {
   return (neuron0x1f5c400()*-0.671863);
}

double NNfunction-ss_dLdR::synapse0x1f6ff60() {
   return (neuron0x1f5cdd0()*0.401139);
}

double NNfunction-ss_dLdR::synapse0x1f6ffa0() {
   return (neuron0x1f5d7a0()*0.888309);
}

double NNfunction-ss_dLdR::synapse0x1f6ffe0() {
   return (neuron0x1f5e170()*-0.0564712);
}

double NNfunction-ss_dLdR::synapse0x1f70020() {
   return (neuron0x1f5eb40()*1.04823);
}

double NNfunction-ss_dLdR::synapse0x1f70060() {
   return (neuron0x1f5f720()*2.51764);
}

double NNfunction-ss_dLdR::synapse0x1f700a0() {
   return (neuron0x1f600f0()*-0.681496);
}

double NNfunction-ss_dLdR::synapse0x1f700e0() {
   return (neuron0x1f50f70()*0.88445);
}

double NNfunction-ss_dLdR::synapse0x1f70120() {
   return (neuron0x1f51940()*0.701466);
}

double NNfunction-ss_dLdR::synapse0x1f70160() {
   return (neuron0x1f52310()*-1.1239);
}

double NNfunction-ss_dLdR::synapse0x1f701a0() {
   return (neuron0x1f64950()*-1.2574);
}

double NNfunction-ss_dLdR::synapse0x1f701e0() {
   return (neuron0x1f65200()*-1.04689);
}

double NNfunction-ss_dLdR::synapse0x1f70220() {
   return (neuron0x1f65bd0()*-0.975052);
}

double NNfunction-ss_dLdR::synapse0x1f70260() {
   return (neuron0x1f665a0()*-0.692903);
}

double NNfunction-ss_dLdR::synapse0x1f705e0() {
   return (neuron0x1f42520()*-0.275248);
}

double NNfunction-ss_dLdR::synapse0x1f70620() {
   return (neuron0x1f42e70()*-0.158935);
}

double NNfunction-ss_dLdR::synapse0x1f70660() {
   return (neuron0x1f43950()*-0.396574);
}

double NNfunction-ss_dLdR::synapse0x1f706a0() {
   return (neuron0x1f433f0()*-0.135264);
}

double NNfunction-ss_dLdR::synapse0x1f706e0() {
   return (neuron0x1f44730()*-0.0594982);
}

double NNfunction-ss_dLdR::synapse0x1f70720() {
   return (neuron0x1f45100()*-0.582668);
}

double NNfunction-ss_dLdR::synapse0x1f70760() {
   return (neuron0x1f45ed0()*-0.711787);
}

double NNfunction-ss_dLdR::synapse0x1f707a0() {
   return (neuron0x1f468a0()*-0.315799);
}

double NNfunction-ss_dLdR::synapse0x1f707e0() {
   return (neuron0x1f47270()*-0.274751);
}

double NNfunction-ss_dLdR::synapse0x1f70820() {
   return (neuron0x1f47d50()*0.223636);
}

double NNfunction-ss_dLdR::synapse0x1f70860() {
   return (neuron0x1f48720()*-0.289677);
}

double NNfunction-ss_dLdR::synapse0x1f708a0() {
   return (neuron0x1f45800()*0.0772767);
}

double NNfunction-ss_dLdR::synapse0x1f708e0() {
   return (neuron0x1f4a2d0()*-0.20903);
}

double NNfunction-ss_dLdR::synapse0x1f70920() {
   return (neuron0x1f4aca0()*0.103435);
}

double NNfunction-ss_dLdR::synapse0x1f70960() {
   return (neuron0x1f4b670()*-0.168732);
}

double NNfunction-ss_dLdR::synapse0x1f709a0() {
   return (neuron0x1f4c040()*-0.163211);
}

double NNfunction-ss_dLdR::synapse0x1f70430() {
   return (neuron0x1f4de50()*-0.459505);
}

double NNfunction-ss_dLdR::synapse0x1f70470() {
   return (neuron0x1f4e130()*-0.555889);
}

double NNfunction-ss_dLdR::synapse0x1f70af0() {
   return (neuron0x1f4eb00()*-0.458815);
}

double NNfunction-ss_dLdR::synapse0x1f70b30() {
   return (neuron0x1f4f4d0()*0.241778);
}

double NNfunction-ss_dLdR::synapse0x1f70b70() {
   return (neuron0x1f4fea0()*-0.177891);
}

double NNfunction-ss_dLdR::synapse0x1f70bb0() {
   return (neuron0x1f50870()*0.134947);
}

double NNfunction-ss_dLdR::synapse0x1f70bf0() {
   return (neuron0x1f493c0()*-0.414066);
}

double NNfunction-ss_dLdR::synapse0x1f70c30() {
   return (neuron0x1f49d90()*0.258291);
}

double NNfunction-ss_dLdR::synapse0x1f70c70() {
   return (neuron0x1f53600()*-0.700977);
}

double NNfunction-ss_dLdR::synapse0x1f70cb0() {
   return (neuron0x1f53fd0()*-0.894037);
}

double NNfunction-ss_dLdR::synapse0x1f70cf0() {
   return (neuron0x1f549a0()*-0.382407);
}

double NNfunction-ss_dLdR::synapse0x1f70d30() {
   return (neuron0x1f55370()*0.129915);
}

double NNfunction-ss_dLdR::synapse0x1f70d70() {
   return (neuron0x1f55d40()*-0.540722);
}

double NNfunction-ss_dLdR::synapse0x1f70db0() {
   return (neuron0x1f56710()*-0.00712164);
}

double NNfunction-ss_dLdR::synapse0x1f70df0() {
   return (neuron0x1f570e0()*0.0368001);
}

double NNfunction-ss_dLdR::synapse0x1f70e30() {
   return (neuron0x1f57ab0()*0.204675);
}

double NNfunction-ss_dLdR::synapse0x1f709e0() {
   return (neuron0x1f4db40()*-0.133822);
}

double NNfunction-ss_dLdR::synapse0x1f70a20() {
   return (neuron0x1f5a690()*-0.285806);
}

double NNfunction-ss_dLdR::synapse0x1f70a60() {
   return (neuron0x1f5b060()*0.236444);
}

double NNfunction-ss_dLdR::synapse0x1f70aa0() {
   return (neuron0x1f5ba30()*0.0180836);
}

double NNfunction-ss_dLdR::synapse0x1f71080() {
   return (neuron0x1f5c400()*-0.33251);
}

double NNfunction-ss_dLdR::synapse0x1f710c0() {
   return (neuron0x1f5cdd0()*-0.394497);
}

double NNfunction-ss_dLdR::synapse0x1f71100() {
   return (neuron0x1f5d7a0()*-0.635005);
}

double NNfunction-ss_dLdR::synapse0x1f71140() {
   return (neuron0x1f5e170()*0.219548);
}

double NNfunction-ss_dLdR::synapse0x1f71180() {
   return (neuron0x1f5eb40()*-0.635737);
}

double NNfunction-ss_dLdR::synapse0x1f711c0() {
   return (neuron0x1f5f720()*-0.14499);
}

double NNfunction-ss_dLdR::synapse0x1f71200() {
   return (neuron0x1f600f0()*0.405025);
}

double NNfunction-ss_dLdR::synapse0x1f71240() {
   return (neuron0x1f50f70()*-0.361639);
}

double NNfunction-ss_dLdR::synapse0x1f71280() {
   return (neuron0x1f51940()*-0.490292);
}

double NNfunction-ss_dLdR::synapse0x1f712c0() {
   return (neuron0x1f52310()*0.288615);
}

double NNfunction-ss_dLdR::synapse0x1f71300() {
   return (neuron0x1f64950()*-0.510237);
}

double NNfunction-ss_dLdR::synapse0x1f71340() {
   return (neuron0x1f65200()*0.113769);
}

double NNfunction-ss_dLdR::synapse0x1f71380() {
   return (neuron0x1f65bd0()*-0.356604);
}

double NNfunction-ss_dLdR::synapse0x1f713c0() {
   return (neuron0x1f665a0()*-0.497612);
}

double NNfunction-ss_dLdR::synapse0x1f71620() {
   return (neuron0x1f6d7a0()*5.83154);
}

double NNfunction-ss_dLdR::synapse0x1f71660() {
   return (neuron0x1f6db40()*-3.91353);
}

double NNfunction-ss_dLdR::synapse0x1f716a0() {
   return (neuron0x1f6dfe0()*-4.33867);
}

double NNfunction-ss_dLdR::synapse0x1f716e0() {
   return (neuron0x1f6f140()*6.78027);
}

double NNfunction-ss_dLdR::synapse0x1f71720() {
   return (neuron0x1f702a0()*1.32828);
}

