#include "NNfunction_sb_dRcR.h"
#include <cmath>

double NNfunction_sb_dRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.808)/14.9885;
   input1 = (in1 - 40.401)/789.499;
   input2 = (in2 - 378.238)/493.14;
   input3 = (in3 - 201.855)/599.966;
   input4 = (in4 - 722.371)/732.911;
   input5 = (in5 - 623.368)/698.952;
   input6 = (in6 - 629.1)/705.317;
   input7 = (in7 - 631.685)/706.281;
   input8 = (in8 - 614.816)/711.289;
   input9 = (in9 - 610.062)/700.827;
   input10 = (in10 - 630.868)/727.885;
   input11 = (in11 - 624.449)/594.561;
   input12 = (in12 - 622.254)/595.339;
   input13 = (in13 - 479.935)/363.22;
   input14 = (in14 - 626.101)/577.185;
   input15 = (in15 - 453.823)/273.232;
   input16 = (in16 - 446.829)/404.562;
   input17 = (in17 - 445.404)/269.711;
   input18 = (in18 - 628.013)/607.592;
   input19 = (in19 - 643.269)/611.788;
   input20 = (in20 - -163.9)/393.025;
   input21 = (in21 - -210.606)/868.991;
   input22 = (in22 - 6.73088)/891.998;
   input23 = (in23 - -39.6826)/492.586;
   switch(index) {
     case 0:
         return neuron0x1edacb0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.808)/14.9885;
   input1 = (input[1] - 40.401)/789.499;
   input2 = (input[2] - 378.238)/493.14;
   input3 = (input[3] - 201.855)/599.966;
   input4 = (input[4] - 722.371)/732.911;
   input5 = (input[5] - 623.368)/698.952;
   input6 = (input[6] - 629.1)/705.317;
   input7 = (input[7] - 631.685)/706.281;
   input8 = (input[8] - 614.816)/711.289;
   input9 = (input[9] - 610.062)/700.827;
   input10 = (input[10] - 630.868)/727.885;
   input11 = (input[11] - 624.449)/594.561;
   input12 = (input[12] - 622.254)/595.339;
   input13 = (input[13] - 479.935)/363.22;
   input14 = (input[14] - 626.101)/577.185;
   input15 = (input[15] - 453.823)/273.232;
   input16 = (input[16] - 446.829)/404.562;
   input17 = (input[17] - 445.404)/269.711;
   input18 = (input[18] - 628.013)/607.592;
   input19 = (input[19] - 643.269)/611.788;
   input20 = (input[20] - -163.9)/393.025;
   input21 = (input[21] - -210.606)/868.991;
   input22 = (input[22] - 6.73088)/891.998;
   input23 = (input[23] - -39.6826)/492.586;
   switch(index) {
     case 0:
         return neuron0x1edacb0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRcR::neuron0x1ea5d20() {
   return input0;
}

double NNfunction_sb_dRcR::neuron0x1ea5fd0() {
   return input1;
}

double NNfunction_sb_dRcR::neuron0x1ea6310() {
   return input2;
}

double NNfunction_sb_dRcR::neuron0x1ea6650() {
   return input3;
}

double NNfunction_sb_dRcR::neuron0x1ea6990() {
   return input4;
}

double NNfunction_sb_dRcR::neuron0x1ea6cd0() {
   return input5;
}

double NNfunction_sb_dRcR::neuron0x1ea7010() {
   return input6;
}

double NNfunction_sb_dRcR::neuron0x1ea7350() {
   return input7;
}

double NNfunction_sb_dRcR::neuron0x1ea7690() {
   return input8;
}

double NNfunction_sb_dRcR::neuron0x1ea79d0() {
   return input9;
}

double NNfunction_sb_dRcR::neuron0x1ea7d10() {
   return input10;
}

double NNfunction_sb_dRcR::neuron0x1ea8050() {
   return input11;
}

double NNfunction_sb_dRcR::neuron0x1ea8390() {
   return input12;
}

double NNfunction_sb_dRcR::neuron0x1ea86d0() {
   return input13;
}

double NNfunction_sb_dRcR::neuron0x1ea8a10() {
   return input14;
}

double NNfunction_sb_dRcR::neuron0x1ea8d50() {
   return input15;
}

double NNfunction_sb_dRcR::neuron0x1ea9090() {
   return input16;
}

double NNfunction_sb_dRcR::neuron0x1ea95f0() {
   return input17;
}

double NNfunction_sb_dRcR::neuron0x1ea9930() {
   return input18;
}

double NNfunction_sb_dRcR::neuron0x1ea9c70() {
   return input19;
}

double NNfunction_sb_dRcR::neuron0x1ea9fb0() {
   return input20;
}

double NNfunction_sb_dRcR::neuron0x1eaa2f0() {
   return input21;
}

double NNfunction_sb_dRcR::neuron0x1eaa630() {
   return input22;
}

double NNfunction_sb_dRcR::neuron0x1eaa970() {
   return input23;
}

double NNfunction_sb_dRcR::input0x1eaade0() {
   double input = -3.28264;
   input += synapse0x1eab120();
   input += synapse0x1eab160();
   input += synapse0x1eab1a0();
   input += synapse0x1eab1e0();
   input += synapse0x1eab220();
   input += synapse0x1eab260();
   input += synapse0x1eab2a0();
   input += synapse0x1eab2e0();
   input += synapse0x1eab320();
   input += synapse0x1eab360();
   input += synapse0x1eab3a0();
   input += synapse0x1eab3e0();
   input += synapse0x1eab420();
   input += synapse0x1eab460();
   input += synapse0x1eab4a0();
   input += synapse0x1eab4e0();
   input += synapse0x1eaaf70();
   input += synapse0x1eaafb0();
   input += synapse0x1c61f00();
   input += synapse0x1c61f40();
   input += synapse0x1eab520();
   input += synapse0x1eab560();
   input += synapse0x1eab5a0();
   input += synapse0x1eab5e0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eaade0() {
   double input = input0x1eaade0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eab620() {
   double input = 0.634401;
   input += synapse0x1eab960();
   input += synapse0x1eab9a0();
   input += synapse0x1eab9e0();
   input += synapse0x1eaba20();
   input += synapse0x1eaba60();
   input += synapse0x1eabaa0();
   input += synapse0x1eabae0();
   input += synapse0x1eabb20();
   input += synapse0x1eabb60();
   input += synapse0x1c61d50();
   input += synapse0x1c61d90();
   input += synapse0x1c61dd0();
   input += synapse0x1c61e10();
   input += synapse0x1eabdb0();
   input += synapse0x1eabdf0();
   input += synapse0x1eabe30();
   input += synapse0x1eab7b0();
   input += synapse0x1eab7f0();
   input += synapse0x1eabf80();
   input += synapse0x1eabfc0();
   input += synapse0x1eac000();
   input += synapse0x1eac040();
   input += synapse0x1eac080();
   input += synapse0x1eac0c0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eab620() {
   double input = input0x1eab620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eac100() {
   double input = 1.19582;
   input += synapse0x1eac440();
   input += synapse0x1eac480();
   input += synapse0x1eac4c0();
   input += synapse0x1eac500();
   input += synapse0x1eac540();
   input += synapse0x1eac580();
   input += synapse0x1eac5c0();
   input += synapse0x1eac600();
   input += synapse0x1eac640();
   input += synapse0x1eac680();
   input += synapse0x1eac6c0();
   input += synapse0x1eac700();
   input += synapse0x1eac740();
   input += synapse0x1eac780();
   input += synapse0x1eac7c0();
   input += synapse0x1eac800();
   input += synapse0x1eac290();
   input += synapse0x1eac2d0();
   input += synapse0x1c62590();
   input += synapse0x1c6fe60();
   input += synapse0x1c6fea0();
   input += synapse0x1eae730();
   input += synapse0x1eae770();
   input += synapse0x1ea5a60();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eac100() {
   double input = input0x1eac100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eabba0() {
   double input = -0.465775;
   input += synapse0x1ea5b30();
   input += synapse0x1c706e0();
   input += synapse0x1eabd30();
   input += synapse0x1eabd70();
   input += synapse0x1eac950();
   input += synapse0x1eac990();
   input += synapse0x1eac9d0();
   input += synapse0x1eaca10();
   input += synapse0x1eaca50();
   input += synapse0x1eaca90();
   input += synapse0x1eacad0();
   input += synapse0x1eacb10();
   input += synapse0x1eacb50();
   input += synapse0x1eacb90();
   input += synapse0x1eacbd0();
   input += synapse0x1eacc10();
   input += synapse0x1ea5aa0();
   input += synapse0x1ea5ae0();
   input += synapse0x1eacd60();
   input += synapse0x1eacda0();
   input += synapse0x1eacde0();
   input += synapse0x1eace20();
   input += synapse0x1eace60();
   input += synapse0x1eacea0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eabba0() {
   double input = input0x1eabba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eacee0() {
   double input = 0.716308;
   input += synapse0x1ead220();
   input += synapse0x1ead260();
   input += synapse0x1ead2a0();
   input += synapse0x1ead2e0();
   input += synapse0x1ead320();
   input += synapse0x1ead360();
   input += synapse0x1ead3a0();
   input += synapse0x1ead3e0();
   input += synapse0x1ead420();
   input += synapse0x1ead460();
   input += synapse0x1ead4a0();
   input += synapse0x1ead4e0();
   input += synapse0x1ead520();
   input += synapse0x1ead560();
   input += synapse0x1ead5a0();
   input += synapse0x1ead5e0();
   input += synapse0x1ead730();
   input += synapse0x1ead070();
   input += synapse0x1ead0b0();
   input += synapse0x1eae870();
   input += synapse0x1eae8b0();
   input += synapse0x1eae8f0();
   input += synapse0x1eae930();
   input += synapse0x1eae970();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eacee0() {
   double input = input0x1eacee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eae9b0() {
   double input = 0.781237;
   input += synapse0x1eaecf0();
   input += synapse0x1eaed30();
   input += synapse0x1eaed70();
   input += synapse0x1eaedb0();
   input += synapse0x1eaedf0();
   input += synapse0x1eaee30();
   input += synapse0x1eaee70();
   input += synapse0x1eaeeb0();
   input += synapse0x1eaeef0();
   input += synapse0x1c701b0();
   input += synapse0x1c701f0();
   input += synapse0x1c70230();
   input += synapse0x1c70270();
   input += synapse0x1c702b0();
   input += synapse0x1c702f0();
   input += synapse0x1c70330();
   input += synapse0x1eaeb40();
   input += synapse0x1eaeb80();
   input += synapse0x1c70480();
   input += synapse0x1c704c0();
   input += synapse0x1c70500();
   input += synapse0x1c70540();
   input += synapse0x1c70580();
   input += synapse0x1eaf740();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eae9b0() {
   double input = input0x1eae9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eaf780() {
   double input = 1.54884;
   input += synapse0x1eafac0();
   input += synapse0x1eafb00();
   input += synapse0x1eafb40();
   input += synapse0x1eafb80();
   input += synapse0x1eafbc0();
   input += synapse0x1eafc00();
   input += synapse0x1eafc40();
   input += synapse0x1eafc80();
   input += synapse0x1eafcc0();
   input += synapse0x1eafd00();
   input += synapse0x1eafd40();
   input += synapse0x1eafd80();
   input += synapse0x1eafdc0();
   input += synapse0x1eafe00();
   input += synapse0x1eafe40();
   input += synapse0x1eafe80();
   input += synapse0x1eaf910();
   input += synapse0x1eaf950();
   input += synapse0x1eaffd0();
   input += synapse0x1eb0010();
   input += synapse0x1eb0050();
   input += synapse0x1eb0090();
   input += synapse0x1eb00d0();
   input += synapse0x1eb0110();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eaf780() {
   double input = input0x1eaf780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb0150() {
   double input = -0.119647;
   input += synapse0x1eb0490();
   input += synapse0x1eb04d0();
   input += synapse0x1eb0510();
   input += synapse0x1eb0550();
   input += synapse0x1eb0590();
   input += synapse0x1eb05d0();
   input += synapse0x1eb0610();
   input += synapse0x1eb0650();
   input += synapse0x1eb0690();
   input += synapse0x1eb06d0();
   input += synapse0x1eb0710();
   input += synapse0x1eb0750();
   input += synapse0x1eb0790();
   input += synapse0x1eb07d0();
   input += synapse0x1eb0810();
   input += synapse0x1eb0850();
   input += synapse0x1eb02e0();
   input += synapse0x1eb0320();
   input += synapse0x1eb09a0();
   input += synapse0x1eb09e0();
   input += synapse0x1eb0a20();
   input += synapse0x1eb0a60();
   input += synapse0x1eb0aa0();
   input += synapse0x1eb0ae0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb0150() {
   double input = input0x1eb0150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb0b20() {
   double input = 0.393037;
   input += synapse0x1ea94e0();
   input += synapse0x1ea9520();
   input += synapse0x1ea9560();
   input += synapse0x1ea95a0();
   input += synapse0x1eb1070();
   input += synapse0x1eb10b0();
   input += synapse0x1eb10f0();
   input += synapse0x1eb1130();
   input += synapse0x1eb1170();
   input += synapse0x1eb11b0();
   input += synapse0x1eb11f0();
   input += synapse0x1eb1230();
   input += synapse0x1eb1270();
   input += synapse0x1eb12b0();
   input += synapse0x1eb12f0();
   input += synapse0x1eb1330();
   input += synapse0x1eb0cb0();
   input += synapse0x1eb0cf0();
   input += synapse0x1eb1480();
   input += synapse0x1eb14c0();
   input += synapse0x1eb1500();
   input += synapse0x1eb1540();
   input += synapse0x1eb1580();
   input += synapse0x1eb15c0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb0b20() {
   double input = input0x1eb0b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb1600() {
   double input = -1.16276;
   input += synapse0x1eb1940();
   input += synapse0x1eb1980();
   input += synapse0x1eb19c0();
   input += synapse0x1eb1a00();
   input += synapse0x1eb1a40();
   input += synapse0x1eb1a80();
   input += synapse0x1eb1ac0();
   input += synapse0x1eb1b00();
   input += synapse0x1eb1b40();
   input += synapse0x1eb1b80();
   input += synapse0x1eb1bc0();
   input += synapse0x1eb1c00();
   input += synapse0x1eb1c40();
   input += synapse0x1eb1c80();
   input += synapse0x1eb1cc0();
   input += synapse0x1eb1d00();
   input += synapse0x1eb1790();
   input += synapse0x1eb17d0();
   input += synapse0x1eb1e50();
   input += synapse0x1eb1e90();
   input += synapse0x1eb1ed0();
   input += synapse0x1eb1f10();
   input += synapse0x1eb1f50();
   input += synapse0x1eb1f90();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb1600() {
   double input = input0x1eb1600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb1fd0() {
   double input = 1.12877;
   input += synapse0x1eb2310();
   input += synapse0x1eb2350();
   input += synapse0x1eb2390();
   input += synapse0x1eb23d0();
   input += synapse0x1eb2410();
   input += synapse0x1eb2450();
   input += synapse0x1eb2490();
   input += synapse0x1eb24d0();
   input += synapse0x1eb2510();
   input += synapse0x1eb2550();
   input += synapse0x1eb2590();
   input += synapse0x1eb25d0();
   input += synapse0x1eb2610();
   input += synapse0x1eb2650();
   input += synapse0x1eb2690();
   input += synapse0x1eb26d0();
   input += synapse0x1eb2160();
   input += synapse0x1eb21a0();
   input += synapse0x1eaef30();
   input += synapse0x1eaef70();
   input += synapse0x1eaefb0();
   input += synapse0x1eaeff0();
   input += synapse0x1eaf030();
   input += synapse0x1eaf070();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb1fd0() {
   double input = input0x1eb1fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eaf0b0() {
   double input = -1.15291;
   input += synapse0x1eaf3f0();
   input += synapse0x1eaf430();
   input += synapse0x1eaf470();
   input += synapse0x1eaf4b0();
   input += synapse0x1eaf4f0();
   input += synapse0x1eaf530();
   input += synapse0x1eaf570();
   input += synapse0x1eaf5b0();
   input += synapse0x1eaf5f0();
   input += synapse0x1eaf630();
   input += synapse0x1eaf670();
   input += synapse0x1eaf6b0();
   input += synapse0x1eaf6f0();
   input += synapse0x1eb3830();
   input += synapse0x1eb3870();
   input += synapse0x1eb38b0();
   input += synapse0x1eaf240();
   input += synapse0x1eaf280();
   input += synapse0x1eb3a00();
   input += synapse0x1eb3a40();
   input += synapse0x1eb3a80();
   input += synapse0x1eb3ac0();
   input += synapse0x1eb3b00();
   input += synapse0x1eb3b40();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eaf0b0() {
   double input = input0x1eaf0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb3b80() {
   double input = -0.132877;
   input += synapse0x1eb3ec0();
   input += synapse0x1eb3f00();
   input += synapse0x1eb3f40();
   input += synapse0x1eb3f80();
   input += synapse0x1eb3fc0();
   input += synapse0x1eb4000();
   input += synapse0x1eb4040();
   input += synapse0x1eb4080();
   input += synapse0x1eb40c0();
   input += synapse0x1eb4100();
   input += synapse0x1eb4140();
   input += synapse0x1eb4180();
   input += synapse0x1eb41c0();
   input += synapse0x1eb4200();
   input += synapse0x1eb4240();
   input += synapse0x1eb4280();
   input += synapse0x1eb3d10();
   input += synapse0x1eb3d50();
   input += synapse0x1eb43d0();
   input += synapse0x1eb4410();
   input += synapse0x1eb4450();
   input += synapse0x1eb4490();
   input += synapse0x1eb44d0();
   input += synapse0x1eb4510();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb3b80() {
   double input = input0x1eb3b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb4550() {
   double input = 2.8696;
   input += synapse0x1eb4890();
   input += synapse0x1eb48d0();
   input += synapse0x1eb4910();
   input += synapse0x1eb4950();
   input += synapse0x1eb4990();
   input += synapse0x1eb49d0();
   input += synapse0x1eb4a10();
   input += synapse0x1eb4a50();
   input += synapse0x1eb4a90();
   input += synapse0x1eb4ad0();
   input += synapse0x1eb4b10();
   input += synapse0x1eb4b50();
   input += synapse0x1eb4b90();
   input += synapse0x1eb4bd0();
   input += synapse0x1eb4c10();
   input += synapse0x1eb4c50();
   input += synapse0x1eb46e0();
   input += synapse0x1eb4720();
   input += synapse0x1eb4da0();
   input += synapse0x1eb4de0();
   input += synapse0x1eb4e20();
   input += synapse0x1eb4e60();
   input += synapse0x1eb4ea0();
   input += synapse0x1eb4ee0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb4550() {
   double input = input0x1eb4550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb4f20() {
   double input = -2.01321;
   input += synapse0x1eb5260();
   input += synapse0x1eb52a0();
   input += synapse0x1eb52e0();
   input += synapse0x1eb5320();
   input += synapse0x1eb5360();
   input += synapse0x1eb53a0();
   input += synapse0x1eb53e0();
   input += synapse0x1eb5420();
   input += synapse0x1eb5460();
   input += synapse0x1eb54a0();
   input += synapse0x1eb54e0();
   input += synapse0x1eb5520();
   input += synapse0x1eb5560();
   input += synapse0x1eb55a0();
   input += synapse0x1eb55e0();
   input += synapse0x1eb5620();
   input += synapse0x1eb50b0();
   input += synapse0x1eb50f0();
   input += synapse0x1eb5770();
   input += synapse0x1eb57b0();
   input += synapse0x1eb57f0();
   input += synapse0x1eb5830();
   input += synapse0x1eb5870();
   input += synapse0x1eb58b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb4f20() {
   double input = input0x1eb4f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb58f0() {
   double input = 0.737232;
   input += synapse0x1eb5c30();
   input += synapse0x1ea5eb0();
   input += synapse0x1ea5ef0();
   input += synapse0x1ea61f0();
   input += synapse0x1ea6230();
   input += synapse0x1ea6530();
   input += synapse0x1ea6570();
   input += synapse0x1ea6870();
   input += synapse0x1ea68b0();
   input += synapse0x1ea6bb0();
   input += synapse0x1ea6bf0();
   input += synapse0x1ea6ef0();
   input += synapse0x1ea6f30();
   input += synapse0x1ea7230();
   input += synapse0x1ea7270();
   input += synapse0x1ea7570();
   input += synapse0x1ea75b0();
   input += synapse0x1ea78b0();
   input += synapse0x1ea78f0();
   input += synapse0x1ea7bf0();
   input += synapse0x1ea7c30();
   input += synapse0x1ea7f30();
   input += synapse0x1ea7f70();
   input += synapse0x1ea8270();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb58f0() {
   double input = input0x1eb58f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb7700() {
   double input = -0.476334;
   input += synapse0x1ea82b0();
   input += synapse0x1ea8f70();
   input += synapse0x1ea8fb0();
   input += synapse0x1eb5a80();
   input += synapse0x1eb5ac0();
   input += synapse0x1ea92b0();
   input += synapse0x1ea92f0();
   input += synapse0x1ea9810();
   input += synapse0x1ea9850();
   input += synapse0x1ea9b50();
   input += synapse0x1ea9b90();
   input += synapse0x1ea9e90();
   input += synapse0x1ea9ed0();
   input += synapse0x1eaa1d0();
   input += synapse0x1eaa210();
   input += synapse0x1eaa510();
   input += synapse0x1eaa550();
   input += synapse0x1eaa850();
   input += synapse0x1eaa890();
   input += synapse0x1eaab90();
   input += synapse0x1eaabd0();
   input += synapse0x1ea85b0();
   input += synapse0x1ea85f0();
   input += synapse0x1eb79a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb7700() {
   double input = input0x1eb7700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb79e0() {
   double input = -0.381595;
   input += synapse0x1eb7d20();
   input += synapse0x1eb7d60();
   input += synapse0x1eb7da0();
   input += synapse0x1eb7de0();
   input += synapse0x1eb7e20();
   input += synapse0x1eb7e60();
   input += synapse0x1eb7ea0();
   input += synapse0x1eb7ee0();
   input += synapse0x1eb7f20();
   input += synapse0x1eb7f60();
   input += synapse0x1eb7fa0();
   input += synapse0x1eb7fe0();
   input += synapse0x1eb8020();
   input += synapse0x1eb8060();
   input += synapse0x1eb80a0();
   input += synapse0x1eb80e0();
   input += synapse0x1eb7b70();
   input += synapse0x1eb7bb0();
   input += synapse0x1eb8230();
   input += synapse0x1eb8270();
   input += synapse0x1eb82b0();
   input += synapse0x1eb82f0();
   input += synapse0x1eb8330();
   input += synapse0x1eb8370();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb79e0() {
   double input = input0x1eb79e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb83b0() {
   double input = 0.287493;
   input += synapse0x1eb86f0();
   input += synapse0x1eb8730();
   input += synapse0x1eb8770();
   input += synapse0x1eb87b0();
   input += synapse0x1eb87f0();
   input += synapse0x1eb8830();
   input += synapse0x1eb8870();
   input += synapse0x1eb88b0();
   input += synapse0x1eb88f0();
   input += synapse0x1eb8930();
   input += synapse0x1eb8970();
   input += synapse0x1eb89b0();
   input += synapse0x1eb89f0();
   input += synapse0x1eb8a30();
   input += synapse0x1eb8a70();
   input += synapse0x1eb8ab0();
   input += synapse0x1eb8540();
   input += synapse0x1eb8580();
   input += synapse0x1eb8c00();
   input += synapse0x1eb8c40();
   input += synapse0x1eb8c80();
   input += synapse0x1eb8cc0();
   input += synapse0x1eb8d00();
   input += synapse0x1eb8d40();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb83b0() {
   double input = input0x1eb83b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb8d80() {
   double input = 1.31448;
   input += synapse0x1eb90c0();
   input += synapse0x1eb9100();
   input += synapse0x1eb9140();
   input += synapse0x1eb9180();
   input += synapse0x1eb91c0();
   input += synapse0x1eb9200();
   input += synapse0x1eb9240();
   input += synapse0x1eb9280();
   input += synapse0x1eb92c0();
   input += synapse0x1eb9300();
   input += synapse0x1eb9340();
   input += synapse0x1eb9380();
   input += synapse0x1eb93c0();
   input += synapse0x1eb9400();
   input += synapse0x1eb9440();
   input += synapse0x1eb9480();
   input += synapse0x1eb8f10();
   input += synapse0x1eb8f50();
   input += synapse0x1eb95d0();
   input += synapse0x1eb9610();
   input += synapse0x1eb9650();
   input += synapse0x1eb9690();
   input += synapse0x1eb96d0();
   input += synapse0x1eb9710();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb8d80() {
   double input = input0x1eb8d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb9750() {
   double input = -0.918351;
   input += synapse0x1eb9a90();
   input += synapse0x1eb9ad0();
   input += synapse0x1eb9b10();
   input += synapse0x1eb9b50();
   input += synapse0x1eb9b90();
   input += synapse0x1eb9bd0();
   input += synapse0x1eb9c10();
   input += synapse0x1eb9c50();
   input += synapse0x1eb9c90();
   input += synapse0x1eb9cd0();
   input += synapse0x1eb9d10();
   input += synapse0x1eb9d50();
   input += synapse0x1eb9d90();
   input += synapse0x1eb9dd0();
   input += synapse0x1eb9e10();
   input += synapse0x1eb9e50();
   input += synapse0x1eb98e0();
   input += synapse0x1eb9920();
   input += synapse0x1eb9fa0();
   input += synapse0x1eb9fe0();
   input += synapse0x1eba020();
   input += synapse0x1eba060();
   input += synapse0x1eba0a0();
   input += synapse0x1eba0e0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb9750() {
   double input = input0x1eb9750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eba120() {
   double input = 2.56902;
   input += synapse0x1eba460();
   input += synapse0x1eba4a0();
   input += synapse0x1eba4e0();
   input += synapse0x1eba520();
   input += synapse0x1eba560();
   input += synapse0x1eba5a0();
   input += synapse0x1eba5e0();
   input += synapse0x1eba620();
   input += synapse0x1eba660();
   input += synapse0x1eb2820();
   input += synapse0x1eb2860();
   input += synapse0x1eb28a0();
   input += synapse0x1eb28e0();
   input += synapse0x1eb2920();
   input += synapse0x1eb2960();
   input += synapse0x1eb29a0();
   input += synapse0x1eba2b0();
   input += synapse0x1eba2f0();
   input += synapse0x1eb2af0();
   input += synapse0x1eb2b30();
   input += synapse0x1eb2b70();
   input += synapse0x1eb2bb0();
   input += synapse0x1eb2bf0();
   input += synapse0x1eb2c30();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eba120() {
   double input = input0x1eba120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb2c70() {
   double input = 3.07411;
   input += synapse0x1eb2fb0();
   input += synapse0x1eb2ff0();
   input += synapse0x1eb3030();
   input += synapse0x1eb3070();
   input += synapse0x1eb30b0();
   input += synapse0x1eb30f0();
   input += synapse0x1eb3130();
   input += synapse0x1eb3170();
   input += synapse0x1eb31b0();
   input += synapse0x1eb31f0();
   input += synapse0x1eb3230();
   input += synapse0x1eb3270();
   input += synapse0x1eb32b0();
   input += synapse0x1eb32f0();
   input += synapse0x1eb3330();
   input += synapse0x1eb3370();
   input += synapse0x1eb2e00();
   input += synapse0x1eb2e40();
   input += synapse0x1eb34c0();
   input += synapse0x1eb3500();
   input += synapse0x1eb3540();
   input += synapse0x1eb3580();
   input += synapse0x1eb35c0();
   input += synapse0x1eb3600();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb2c70() {
   double input = input0x1eb2c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb3640() {
   double input = -0.161009;
   input += synapse0x1eb37d0();
   input += synapse0x1ebc860();
   input += synapse0x1ebc8a0();
   input += synapse0x1ebc8e0();
   input += synapse0x1ebc920();
   input += synapse0x1ebc960();
   input += synapse0x1ebc9a0();
   input += synapse0x1ebc9e0();
   input += synapse0x1ebca20();
   input += synapse0x1ebca60();
   input += synapse0x1ebcaa0();
   input += synapse0x1ebcae0();
   input += synapse0x1ebcb20();
   input += synapse0x1ebcb60();
   input += synapse0x1ebcba0();
   input += synapse0x1ebcbe0();
   input += synapse0x1ebc6b0();
   input += synapse0x1ebc6f0();
   input += synapse0x1ebcd30();
   input += synapse0x1ebcd70();
   input += synapse0x1ebcdb0();
   input += synapse0x1ebcdf0();
   input += synapse0x1ebce30();
   input += synapse0x1ebce70();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb3640() {
   double input = input0x1eb3640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebceb0() {
   double input = -3.15862;
   input += synapse0x1ebd1f0();
   input += synapse0x1ebd230();
   input += synapse0x1ebd270();
   input += synapse0x1ebd2b0();
   input += synapse0x1ebd2f0();
   input += synapse0x1ebd330();
   input += synapse0x1ebd370();
   input += synapse0x1ebd3b0();
   input += synapse0x1ebd3f0();
   input += synapse0x1ebd430();
   input += synapse0x1ebd470();
   input += synapse0x1ebd4b0();
   input += synapse0x1ebd4f0();
   input += synapse0x1ebd530();
   input += synapse0x1ebd570();
   input += synapse0x1ebd5b0();
   input += synapse0x1ebd040();
   input += synapse0x1ebd080();
   input += synapse0x1ebd700();
   input += synapse0x1ebd740();
   input += synapse0x1ebd780();
   input += synapse0x1ebd7c0();
   input += synapse0x1ebd800();
   input += synapse0x1ebd840();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebceb0() {
   double input = input0x1ebceb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebd880() {
   double input = 0.726658;
   input += synapse0x1ebdbc0();
   input += synapse0x1ebdc00();
   input += synapse0x1ebdc40();
   input += synapse0x1ebdc80();
   input += synapse0x1ebdcc0();
   input += synapse0x1ebdd00();
   input += synapse0x1ebdd40();
   input += synapse0x1ebdd80();
   input += synapse0x1ebddc0();
   input += synapse0x1ebde00();
   input += synapse0x1ebde40();
   input += synapse0x1ebde80();
   input += synapse0x1ebdec0();
   input += synapse0x1ebdf00();
   input += synapse0x1ebdf40();
   input += synapse0x1ebdf80();
   input += synapse0x1ebda10();
   input += synapse0x1ebda50();
   input += synapse0x1ebe0d0();
   input += synapse0x1ebe110();
   input += synapse0x1ebe150();
   input += synapse0x1ebe190();
   input += synapse0x1ebe1d0();
   input += synapse0x1ebe210();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebd880() {
   double input = input0x1ebd880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebe250() {
   double input = 0.415283;
   input += synapse0x1ebe590();
   input += synapse0x1ebe5d0();
   input += synapse0x1ebe610();
   input += synapse0x1ebe650();
   input += synapse0x1ebe690();
   input += synapse0x1ebe6d0();
   input += synapse0x1ebe710();
   input += synapse0x1ebe750();
   input += synapse0x1ebe790();
   input += synapse0x1ebe7d0();
   input += synapse0x1ebe810();
   input += synapse0x1ebe850();
   input += synapse0x1ebe890();
   input += synapse0x1ebe8d0();
   input += synapse0x1ebe910();
   input += synapse0x1ebe950();
   input += synapse0x1ebe3e0();
   input += synapse0x1ebe420();
   input += synapse0x1ebeaa0();
   input += synapse0x1ebeae0();
   input += synapse0x1ebeb20();
   input += synapse0x1ebeb60();
   input += synapse0x1ebeba0();
   input += synapse0x1ebebe0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebe250() {
   double input = input0x1ebe250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebec20() {
   double input = 2.06756;
   input += synapse0x1ebef60();
   input += synapse0x1ebefa0();
   input += synapse0x1ebefe0();
   input += synapse0x1ebf020();
   input += synapse0x1ebf060();
   input += synapse0x1ebf0a0();
   input += synapse0x1ebf0e0();
   input += synapse0x1ebf120();
   input += synapse0x1ebf160();
   input += synapse0x1ebf1a0();
   input += synapse0x1ebf1e0();
   input += synapse0x1ebf220();
   input += synapse0x1ebf260();
   input += synapse0x1ebf2a0();
   input += synapse0x1ebf2e0();
   input += synapse0x1ebf320();
   input += synapse0x1ebedb0();
   input += synapse0x1ebedf0();
   input += synapse0x1ebf470();
   input += synapse0x1ebf4b0();
   input += synapse0x1ebf4f0();
   input += synapse0x1ebf530();
   input += synapse0x1ebf570();
   input += synapse0x1ebf5b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebec20() {
   double input = input0x1ebec20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebf5f0() {
   double input = 1.34252;
   input += synapse0x1ebf930();
   input += synapse0x1ebf970();
   input += synapse0x1ebf9b0();
   input += synapse0x1ebf9f0();
   input += synapse0x1ebfa30();
   input += synapse0x1ebfa70();
   input += synapse0x1ebfab0();
   input += synapse0x1ebfaf0();
   input += synapse0x1ebfb30();
   input += synapse0x1ebfb70();
   input += synapse0x1ebfbb0();
   input += synapse0x1ebfbf0();
   input += synapse0x1ebfc30();
   input += synapse0x1ebfc70();
   input += synapse0x1ebfcb0();
   input += synapse0x1ebfcf0();
   input += synapse0x1ebf780();
   input += synapse0x1ebf7c0();
   input += synapse0x1ebfe40();
   input += synapse0x1ebfe80();
   input += synapse0x1ebfec0();
   input += synapse0x1ebff00();
   input += synapse0x1ebff40();
   input += synapse0x1ebff80();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebf5f0() {
   double input = input0x1ebf5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebffc0() {
   double input = 0.0377867;
   input += synapse0x1ec0300();
   input += synapse0x1ec0340();
   input += synapse0x1ec0380();
   input += synapse0x1ec03c0();
   input += synapse0x1ec0400();
   input += synapse0x1ec0440();
   input += synapse0x1ec0480();
   input += synapse0x1ec04c0();
   input += synapse0x1ec0500();
   input += synapse0x1ec0540();
   input += synapse0x1ec0580();
   input += synapse0x1ec05c0();
   input += synapse0x1ec0600();
   input += synapse0x1ec0640();
   input += synapse0x1ec0680();
   input += synapse0x1ec06c0();
   input += synapse0x1ec0150();
   input += synapse0x1ec0190();
   input += synapse0x1ec0810();
   input += synapse0x1ec0850();
   input += synapse0x1ec0890();
   input += synapse0x1ec08d0();
   input += synapse0x1ec0910();
   input += synapse0x1ec0950();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebffc0() {
   double input = input0x1ebffc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec0990() {
   double input = -0.659102;
   input += synapse0x1ec0cd0();
   input += synapse0x1ec0d10();
   input += synapse0x1ec0d50();
   input += synapse0x1ec0d90();
   input += synapse0x1ec0dd0();
   input += synapse0x1ec0e10();
   input += synapse0x1ec0e50();
   input += synapse0x1ec0e90();
   input += synapse0x1ec0ed0();
   input += synapse0x1ec0f10();
   input += synapse0x1ec0f50();
   input += synapse0x1ec0f90();
   input += synapse0x1ec0fd0();
   input += synapse0x1ec1010();
   input += synapse0x1ec1050();
   input += synapse0x1ec1090();
   input += synapse0x1ec0b20();
   input += synapse0x1ec0b60();
   input += synapse0x1ec11e0();
   input += synapse0x1ec1220();
   input += synapse0x1ec1260();
   input += synapse0x1ec12a0();
   input += synapse0x1ec12e0();
   input += synapse0x1ec1320();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec0990() {
   double input = input0x1ec0990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec1360() {
   double input = -0.325255;
   input += synapse0x1ec16a0();
   input += synapse0x1eb5c70();
   input += synapse0x1eb5cb0();
   input += synapse0x1eb5cf0();
   input += synapse0x1eb5f40();
   input += synapse0x1eb5f80();
   input += synapse0x1eb5fc0();
   input += synapse0x1eb6210();
   input += synapse0x1eb6250();
   input += synapse0x1eb64a0();
   input += synapse0x1eb64e0();
   input += synapse0x1eb6520();
   input += synapse0x1eb6770();
   input += synapse0x1eb67b0();
   input += synapse0x1eb6a00();
   input += synapse0x1eb6a40();
   input += synapse0x1ec14f0();
   input += synapse0x1ec1530();
   input += synapse0x1eb6b90();
   input += synapse0x1eb70a0();
   input += synapse0x1eb70e0();
   input += synapse0x1eb7120();
   input += synapse0x1eb7370();
   input += synapse0x1eb73b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec1360() {
   double input = input0x1ec1360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eb73f0() {
   double input = -0.175204;
   input += synapse0x1eb6c60();
   input += synapse0x1eb6ca0();
   input += synapse0x1eb6ce0();
   input += synapse0x1eb6d20();
   input += synapse0x1eb76a0();
   input += synapse0x1ec39f0();
   input += synapse0x1ec3a30();
   input += synapse0x1ec3a70();
   input += synapse0x1ec3ab0();
   input += synapse0x1ec3af0();
   input += synapse0x1ec3b30();
   input += synapse0x1ec3b70();
   input += synapse0x1ec3bb0();
   input += synapse0x1ec3bf0();
   input += synapse0x1ec3c30();
   input += synapse0x1ec3c70();
   input += synapse0x1eb7580();
   input += synapse0x1eb75c0();
   input += synapse0x1ec3dc0();
   input += synapse0x1ec3e00();
   input += synapse0x1ec3e40();
   input += synapse0x1ec3e80();
   input += synapse0x1ec3ec0();
   input += synapse0x1ec3f00();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eb73f0() {
   double input = input0x1eb73f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec3f40() {
   double input = -0.0974682;
   input += synapse0x1ec4280();
   input += synapse0x1ec42c0();
   input += synapse0x1ec4300();
   input += synapse0x1ec4340();
   input += synapse0x1ec4380();
   input += synapse0x1ec43c0();
   input += synapse0x1ec4400();
   input += synapse0x1ec4440();
   input += synapse0x1ec4480();
   input += synapse0x1ec44c0();
   input += synapse0x1ec4500();
   input += synapse0x1ec4540();
   input += synapse0x1ec4580();
   input += synapse0x1ec45c0();
   input += synapse0x1ec4600();
   input += synapse0x1ec4640();
   input += synapse0x1ec40d0();
   input += synapse0x1ec4110();
   input += synapse0x1ec4790();
   input += synapse0x1ec47d0();
   input += synapse0x1ec4810();
   input += synapse0x1ec4850();
   input += synapse0x1ec4890();
   input += synapse0x1ec48d0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec3f40() {
   double input = input0x1ec3f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec4910() {
   double input = 0.0520233;
   input += synapse0x1ec4c50();
   input += synapse0x1ec4c90();
   input += synapse0x1ec4cd0();
   input += synapse0x1ec4d10();
   input += synapse0x1ec4d50();
   input += synapse0x1ec4d90();
   input += synapse0x1ec4dd0();
   input += synapse0x1ec4e10();
   input += synapse0x1ec4e50();
   input += synapse0x1ec4e90();
   input += synapse0x1ec4ed0();
   input += synapse0x1ec4f10();
   input += synapse0x1ec4f50();
   input += synapse0x1ec4f90();
   input += synapse0x1ec4fd0();
   input += synapse0x1ec5010();
   input += synapse0x1ec4aa0();
   input += synapse0x1ec4ae0();
   input += synapse0x1ec5160();
   input += synapse0x1ec51a0();
   input += synapse0x1ec51e0();
   input += synapse0x1ec5220();
   input += synapse0x1ec5260();
   input += synapse0x1ec52a0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec4910() {
   double input = input0x1ec4910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec52e0() {
   double input = 1.68244;
   input += synapse0x1ec5620();
   input += synapse0x1ec5660();
   input += synapse0x1ec56a0();
   input += synapse0x1ec56e0();
   input += synapse0x1ec5720();
   input += synapse0x1ec5760();
   input += synapse0x1ec57a0();
   input += synapse0x1ec57e0();
   input += synapse0x1ec5820();
   input += synapse0x1ec5860();
   input += synapse0x1ec58a0();
   input += synapse0x1ec58e0();
   input += synapse0x1ec5920();
   input += synapse0x1ec5960();
   input += synapse0x1ec59a0();
   input += synapse0x1ec59e0();
   input += synapse0x1ec5470();
   input += synapse0x1ec54b0();
   input += synapse0x1ec5b30();
   input += synapse0x1ec5b70();
   input += synapse0x1ec5bb0();
   input += synapse0x1ec5bf0();
   input += synapse0x1ec5c30();
   input += synapse0x1ec5c70();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec52e0() {
   double input = input0x1ec52e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec5cb0() {
   double input = 0.044293;
   input += synapse0x1ec5ff0();
   input += synapse0x1ec6030();
   input += synapse0x1ec6070();
   input += synapse0x1ec60b0();
   input += synapse0x1ec60f0();
   input += synapse0x1ec6130();
   input += synapse0x1ec6170();
   input += synapse0x1ec61b0();
   input += synapse0x1ec61f0();
   input += synapse0x1ec6230();
   input += synapse0x1ec6270();
   input += synapse0x1ec62b0();
   input += synapse0x1ec62f0();
   input += synapse0x1ec6330();
   input += synapse0x1ec6370();
   input += synapse0x1ec63b0();
   input += synapse0x1ec5e40();
   input += synapse0x1ec5e80();
   input += synapse0x1ec6500();
   input += synapse0x1ec6540();
   input += synapse0x1ec6580();
   input += synapse0x1ec65c0();
   input += synapse0x1ec6600();
   input += synapse0x1ec6640();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec5cb0() {
   double input = input0x1ec5cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec6680() {
   double input = 0.792609;
   input += synapse0x1ec69c0();
   input += synapse0x1ec6a00();
   input += synapse0x1ec6a40();
   input += synapse0x1ec6a80();
   input += synapse0x1ec6ac0();
   input += synapse0x1ec6b00();
   input += synapse0x1ec6b40();
   input += synapse0x1ec6b80();
   input += synapse0x1ec6bc0();
   input += synapse0x1ec6c00();
   input += synapse0x1ec6c40();
   input += synapse0x1ec6c80();
   input += synapse0x1ec6cc0();
   input += synapse0x1ec6d00();
   input += synapse0x1ec6d40();
   input += synapse0x1ec6d80();
   input += synapse0x1ec6810();
   input += synapse0x1ec6850();
   input += synapse0x1ec6ed0();
   input += synapse0x1ec6f10();
   input += synapse0x1ec6f50();
   input += synapse0x1ec6f90();
   input += synapse0x1ec6fd0();
   input += synapse0x1ec7010();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec6680() {
   double input = input0x1ec6680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec7050() {
   double input = -0.396841;
   input += synapse0x1ec7390();
   input += synapse0x1ec73d0();
   input += synapse0x1ec7410();
   input += synapse0x1ec7450();
   input += synapse0x1ec7490();
   input += synapse0x1ec74d0();
   input += synapse0x1ec7510();
   input += synapse0x1ec7550();
   input += synapse0x1ec7590();
   input += synapse0x1ec75d0();
   input += synapse0x1ec7610();
   input += synapse0x1ec7650();
   input += synapse0x1ec7690();
   input += synapse0x1ec76d0();
   input += synapse0x1ec7710();
   input += synapse0x1ec7750();
   input += synapse0x1ec71e0();
   input += synapse0x1ec7220();
   input += synapse0x1ec78a0();
   input += synapse0x1ec78e0();
   input += synapse0x1ec7920();
   input += synapse0x1ec7960();
   input += synapse0x1ec79a0();
   input += synapse0x1ec79e0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec7050() {
   double input = input0x1ec7050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec7a20() {
   double input = -1.83802;
   input += synapse0x1ec7d60();
   input += synapse0x1ec7da0();
   input += synapse0x1ec7de0();
   input += synapse0x1ec7e20();
   input += synapse0x1ec7e60();
   input += synapse0x1ec7ea0();
   input += synapse0x1ec7ee0();
   input += synapse0x1ec7f20();
   input += synapse0x1ec7f60();
   input += synapse0x1ec7fa0();
   input += synapse0x1ec7fe0();
   input += synapse0x1ec8020();
   input += synapse0x1ec8060();
   input += synapse0x1ec80a0();
   input += synapse0x1ec80e0();
   input += synapse0x1ec8120();
   input += synapse0x1ec7bb0();
   input += synapse0x1ec7bf0();
   input += synapse0x1ec8270();
   input += synapse0x1ec82b0();
   input += synapse0x1ec82f0();
   input += synapse0x1ec8330();
   input += synapse0x1ec8370();
   input += synapse0x1ec83b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec7a20() {
   double input = input0x1ec7a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec83f0() {
   double input = 0.232179;
   input += synapse0x1eb0e60();
   input += synapse0x1eb0ea0();
   input += synapse0x1eb0ee0();
   input += synapse0x1eb0f20();
   input += synapse0x1eb0f60();
   input += synapse0x1eb0fa0();
   input += synapse0x1eb0fe0();
   input += synapse0x1eb1020();
   input += synapse0x1ec8b40();
   input += synapse0x1ec8b80();
   input += synapse0x1ec8bc0();
   input += synapse0x1ec8c00();
   input += synapse0x1ec8c40();
   input += synapse0x1ec8c80();
   input += synapse0x1ec8cc0();
   input += synapse0x1ec8d00();
   input += synapse0x1ec8580();
   input += synapse0x1ec85c0();
   input += synapse0x1ec8e50();
   input += synapse0x1ec8e90();
   input += synapse0x1ec8ed0();
   input += synapse0x1ec8f10();
   input += synapse0x1ec8f50();
   input += synapse0x1ec8f90();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec83f0() {
   double input = input0x1ec83f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec8fd0() {
   double input = 0.768499;
   input += synapse0x1ec9310();
   input += synapse0x1ec9350();
   input += synapse0x1ec9390();
   input += synapse0x1ec93d0();
   input += synapse0x1ec9410();
   input += synapse0x1ec9450();
   input += synapse0x1ec9490();
   input += synapse0x1ec94d0();
   input += synapse0x1ec9510();
   input += synapse0x1ec9550();
   input += synapse0x1ec9590();
   input += synapse0x1ec95d0();
   input += synapse0x1ec9610();
   input += synapse0x1ec9650();
   input += synapse0x1ec9690();
   input += synapse0x1ec96d0();
   input += synapse0x1ec9160();
   input += synapse0x1ec91a0();
   input += synapse0x1ec9820();
   input += synapse0x1ec9860();
   input += synapse0x1ec98a0();
   input += synapse0x1ec98e0();
   input += synapse0x1ec9920();
   input += synapse0x1ec9960();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec8fd0() {
   double input = input0x1ec8fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ec99a0() {
   double input = 0.811797;
   input += synapse0x1ec9ce0();
   input += synapse0x1ec9d20();
   input += synapse0x1ec9d60();
   input += synapse0x1ec9da0();
   input += synapse0x1ec9de0();
   input += synapse0x1ec9e20();
   input += synapse0x1ec9e60();
   input += synapse0x1ec9ea0();
   input += synapse0x1ec9ee0();
   input += synapse0x1ec9f20();
   input += synapse0x1ec9f60();
   input += synapse0x1ec9fa0();
   input += synapse0x1ec9fe0();
   input += synapse0x1eca020();
   input += synapse0x1eca060();
   input += synapse0x1eca0a0();
   input += synapse0x1ec9b30();
   input += synapse0x1ec9b70();
   input += synapse0x1eba6a0();
   input += synapse0x1eba6e0();
   input += synapse0x1eba720();
   input += synapse0x1eba760();
   input += synapse0x1eba7a0();
   input += synapse0x1eba7e0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ec99a0() {
   double input = input0x1ec99a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eba820() {
   double input = -0.0718215;
   input += synapse0x1ebab60();
   input += synapse0x1ebaba0();
   input += synapse0x1ebabe0();
   input += synapse0x1ebac20();
   input += synapse0x1ebac60();
   input += synapse0x1ebaca0();
   input += synapse0x1ebace0();
   input += synapse0x1ebad20();
   input += synapse0x1ebad60();
   input += synapse0x1ebada0();
   input += synapse0x1ebade0();
   input += synapse0x1ebae20();
   input += synapse0x1ebae60();
   input += synapse0x1ebaea0();
   input += synapse0x1ebaee0();
   input += synapse0x1ebaf20();
   input += synapse0x1eba9b0();
   input += synapse0x1eba9f0();
   input += synapse0x1ebb070();
   input += synapse0x1ebb0b0();
   input += synapse0x1ebb0f0();
   input += synapse0x1ebb130();
   input += synapse0x1ebb170();
   input += synapse0x1ebb1b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eba820() {
   double input = input0x1eba820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebb1f0() {
   double input = -1.04179;
   input += synapse0x1ebb530();
   input += synapse0x1ebb570();
   input += synapse0x1ebb5b0();
   input += synapse0x1ebb5f0();
   input += synapse0x1ebb630();
   input += synapse0x1ebb670();
   input += synapse0x1ebb6b0();
   input += synapse0x1ebb6f0();
   input += synapse0x1ebb730();
   input += synapse0x1ebb770();
   input += synapse0x1ebb7b0();
   input += synapse0x1ebb7f0();
   input += synapse0x1ebb830();
   input += synapse0x1ebb870();
   input += synapse0x1ebb8b0();
   input += synapse0x1ebb8f0();
   input += synapse0x1ebb380();
   input += synapse0x1ebb3c0();
   input += synapse0x1ebba40();
   input += synapse0x1ebba80();
   input += synapse0x1ebbac0();
   input += synapse0x1ebbb00();
   input += synapse0x1ebbb40();
   input += synapse0x1ebbb80();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebb1f0() {
   double input = input0x1ebb1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ebbbc0() {
   double input = -0.480483;
   input += synapse0x1ebbf00();
   input += synapse0x1ebbf40();
   input += synapse0x1ebbf80();
   input += synapse0x1ebbfc0();
   input += synapse0x1ebc000();
   input += synapse0x1ebc040();
   input += synapse0x1ebc080();
   input += synapse0x1ebc0c0();
   input += synapse0x1ebc100();
   input += synapse0x1ebc140();
   input += synapse0x1ebc180();
   input += synapse0x1ebc1c0();
   input += synapse0x1ebc200();
   input += synapse0x1ebc240();
   input += synapse0x1ebc280();
   input += synapse0x1ebc2c0();
   input += synapse0x1ebbd50();
   input += synapse0x1ebbd90();
   input += synapse0x1ebc410();
   input += synapse0x1ebc450();
   input += synapse0x1ebc490();
   input += synapse0x1ebc4d0();
   input += synapse0x1ebc510();
   input += synapse0x1ebc550();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ebbbc0() {
   double input = input0x1ebbbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ece200() {
   double input = 0.11038;
   input += synapse0x1ece420();
   input += synapse0x1ece460();
   input += synapse0x1ece4a0();
   input += synapse0x1ece4e0();
   input += synapse0x1ece520();
   input += synapse0x1ece560();
   input += synapse0x1ece5a0();
   input += synapse0x1ece5e0();
   input += synapse0x1ece620();
   input += synapse0x1ece660();
   input += synapse0x1ece6a0();
   input += synapse0x1ece6e0();
   input += synapse0x1ece720();
   input += synapse0x1ece760();
   input += synapse0x1ece7a0();
   input += synapse0x1ece7e0();
   input += synapse0x1ebc590();
   input += synapse0x1ebc5d0();
   input += synapse0x1ece930();
   input += synapse0x1ece970();
   input += synapse0x1ece9b0();
   input += synapse0x1ece9f0();
   input += synapse0x1ecea30();
   input += synapse0x1ecea70();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ece200() {
   double input = input0x1ece200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1eceab0() {
   double input = 0.338818;
   input += synapse0x1ecedf0();
   input += synapse0x1ecee30();
   input += synapse0x1ecee70();
   input += synapse0x1eceeb0();
   input += synapse0x1eceef0();
   input += synapse0x1ecef30();
   input += synapse0x1ecef70();
   input += synapse0x1ecefb0();
   input += synapse0x1eceff0();
   input += synapse0x1ecf030();
   input += synapse0x1ecf070();
   input += synapse0x1ecf0b0();
   input += synapse0x1ecf0f0();
   input += synapse0x1ecf130();
   input += synapse0x1ecf170();
   input += synapse0x1ecf1b0();
   input += synapse0x1ecec40();
   input += synapse0x1ecec80();
   input += synapse0x1ecf300();
   input += synapse0x1ecf340();
   input += synapse0x1ecf380();
   input += synapse0x1ecf3c0();
   input += synapse0x1ecf400();
   input += synapse0x1ecf440();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1eceab0() {
   double input = input0x1eceab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ecf480() {
   double input = 0.407095;
   input += synapse0x1ecf7c0();
   input += synapse0x1ecf800();
   input += synapse0x1ecf840();
   input += synapse0x1ecf880();
   input += synapse0x1ecf8c0();
   input += synapse0x1ecf900();
   input += synapse0x1ecf940();
   input += synapse0x1ecf980();
   input += synapse0x1ecf9c0();
   input += synapse0x1ecfa00();
   input += synapse0x1ecfa40();
   input += synapse0x1ecfa80();
   input += synapse0x1ecfac0();
   input += synapse0x1ecfb00();
   input += synapse0x1ecfb40();
   input += synapse0x1ecfb80();
   input += synapse0x1ecf610();
   input += synapse0x1ecf650();
   input += synapse0x1ecfcd0();
   input += synapse0x1ecfd10();
   input += synapse0x1ecfd50();
   input += synapse0x1ecfd90();
   input += synapse0x1ecfdd0();
   input += synapse0x1ecfe10();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ecf480() {
   double input = input0x1ecf480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ecfe50() {
   double input = -0.0784727;
   input += synapse0x1ed0190();
   input += synapse0x1ed01d0();
   input += synapse0x1ed0210();
   input += synapse0x1ed0250();
   input += synapse0x1ed0290();
   input += synapse0x1ed02d0();
   input += synapse0x1ed0310();
   input += synapse0x1ed0350();
   input += synapse0x1ed0390();
   input += synapse0x1ed03d0();
   input += synapse0x1ed0410();
   input += synapse0x1ed0450();
   input += synapse0x1ed0490();
   input += synapse0x1ed04d0();
   input += synapse0x1ed0510();
   input += synapse0x1ed0550();
   input += synapse0x1ecffe0();
   input += synapse0x1ed0020();
   input += synapse0x1ed06a0();
   input += synapse0x1ed06e0();
   input += synapse0x1ed0720();
   input += synapse0x1ed0760();
   input += synapse0x1ed07a0();
   input += synapse0x1ed07e0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ecfe50() {
   double input = input0x1ecfe50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ed7050() {
   double input = 0.13628;
   input += synapse0x1c70650();
   input += synapse0x1c70690();
   input += synapse0x1ead190();
   input += synapse0x1ead1d0();
   input += synapse0x1eaec60();
   input += synapse0x1eaeca0();
   input += synapse0x1eafa30();
   input += synapse0x1eafa70();
   input += synapse0x1eb0400();
   input += synapse0x1eb0440();
   input += synapse0x1eb0dd0();
   input += synapse0x1eb0e10();
   input += synapse0x1eb18b0();
   input += synapse0x1eb18f0();
   input += synapse0x1eb2280();
   input += synapse0x1eb22c0();
   input += synapse0x1eaf360();
   input += synapse0x1eaf3a0();
   input += synapse0x1eb3e30();
   input += synapse0x1eb3e70();
   input += synapse0x1eb4800();
   input += synapse0x1eb4840();
   input += synapse0x1eb51d0();
   input += synapse0x1eb5210();
   input += synapse0x1eb5ba0();
   input += synapse0x1eb5be0();
   input += synapse0x1ea8c30();
   input += synapse0x1ea8c70();
   input += synapse0x1eb7c90();
   input += synapse0x1eb7cd0();
   input += synapse0x1eb8660();
   input += synapse0x1eb86a0();
   input += synapse0x1eb9030();
   input += synapse0x1eb9070();
   input += synapse0x1eb9a00();
   input += synapse0x1eb9a40();
   input += synapse0x1eba3d0();
   input += synapse0x1eba410();
   input += synapse0x1eb2f20();
   input += synapse0x1eb2f60();
   input += synapse0x1ebc7d0();
   input += synapse0x1ebc810();
   input += synapse0x1ebd160();
   input += synapse0x1ebd1a0();
   input += synapse0x1ebdb30();
   input += synapse0x1ebdb70();
   input += synapse0x1ebe500();
   input += synapse0x1ebe540();
   input += synapse0x1ebeed0();
   input += synapse0x1ebef10();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ed7050() {
   double input = input0x1ed7050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ed73f0() {
   double input = -0.263493;
   input += synapse0x1ec1610();
   input += synapse0x1ec1650();
   input += synapse0x1eb6bd0();
   input += synapse0x1eb6c10();
   input += synapse0x1ec41f0();
   input += synapse0x1ec4230();
   input += synapse0x1ec4bc0();
   input += synapse0x1ec4c00();
   input += synapse0x1ec5590();
   input += synapse0x1ec55d0();
   input += synapse0x1ec5f60();
   input += synapse0x1ec5fa0();
   input += synapse0x1ec6930();
   input += synapse0x1ec6970();
   input += synapse0x1ec7300();
   input += synapse0x1ec7340();
   input += synapse0x1ec7cd0();
   input += synapse0x1ec7d10();
   input += synapse0x1ec86a0();
   input += synapse0x1ec86e0();
   input += synapse0x1ec9280();
   input += synapse0x1ec92c0();
   input += synapse0x1ec9c50();
   input += synapse0x1ec9c90();
   input += synapse0x1ebaad0();
   input += synapse0x1ebab10();
   input += synapse0x1ebb4a0();
   input += synapse0x1ebb4e0();
   input += synapse0x1ebbe70();
   input += synapse0x1ebbeb0();
   input += synapse0x1ece390();
   input += synapse0x1ece3d0();
   input += synapse0x1eced60();
   input += synapse0x1eceda0();
   input += synapse0x1ecf730();
   input += synapse0x1ecf770();
   input += synapse0x1ed0100();
   input += synapse0x1ed0140();
   input += synapse0x1eab090();
   input += synapse0x1eab0d0();
   input += synapse0x1ebf8a0();
   input += synapse0x1ebf8e0();
   input += synapse0x1ed0820();
   input += synapse0x1ed0860();
   input += synapse0x1ed08a0();
   input += synapse0x1ed08e0();
   input += synapse0x1ed7790();
   input += synapse0x1ed77d0();
   input += synapse0x1ed7810();
   input += synapse0x1ed7850();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ed73f0() {
   double input = input0x1ed73f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ed7890() {
   double input = 0.166767;
   input += synapse0x1ed7bd0();
   input += synapse0x1ed7c10();
   input += synapse0x1ed7c50();
   input += synapse0x1ed7c90();
   input += synapse0x1ed7cd0();
   input += synapse0x1ed7d10();
   input += synapse0x1ed7d50();
   input += synapse0x1ed7d90();
   input += synapse0x1ed7dd0();
   input += synapse0x1ed7e10();
   input += synapse0x1ed7e50();
   input += synapse0x1ed7e90();
   input += synapse0x1ed7ed0();
   input += synapse0x1ed7f10();
   input += synapse0x1ed7f50();
   input += synapse0x1ed7f90();
   input += synapse0x1ed7a20();
   input += synapse0x1ed7a60();
   input += synapse0x1ed80e0();
   input += synapse0x1ed8120();
   input += synapse0x1ed8160();
   input += synapse0x1ed81a0();
   input += synapse0x1ed81e0();
   input += synapse0x1ed8220();
   input += synapse0x1ed8260();
   input += synapse0x1ed82a0();
   input += synapse0x1ed82e0();
   input += synapse0x1ed8320();
   input += synapse0x1ed8360();
   input += synapse0x1ed83a0();
   input += synapse0x1ed83e0();
   input += synapse0x1ed8420();
   input += synapse0x1ed7fd0();
   input += synapse0x1ed8010();
   input += synapse0x1ed8050();
   input += synapse0x1ed8090();
   input += synapse0x1ed8670();
   input += synapse0x1ed86b0();
   input += synapse0x1ed86f0();
   input += synapse0x1ed8730();
   input += synapse0x1ed8770();
   input += synapse0x1ed87b0();
   input += synapse0x1ed87f0();
   input += synapse0x1ed8830();
   input += synapse0x1ed8870();
   input += synapse0x1ed88b0();
   input += synapse0x1ed88f0();
   input += synapse0x1ed8930();
   input += synapse0x1ed8970();
   input += synapse0x1ed89b0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ed7890() {
   double input = input0x1ed7890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ed89f0() {
   double input = 0.491486;
   input += synapse0x1ed8d30();
   input += synapse0x1ed8d70();
   input += synapse0x1ed8db0();
   input += synapse0x1ed8df0();
   input += synapse0x1ed8e30();
   input += synapse0x1ed8e70();
   input += synapse0x1ed8eb0();
   input += synapse0x1ed8ef0();
   input += synapse0x1ed8f30();
   input += synapse0x1ed8f70();
   input += synapse0x1ed8fb0();
   input += synapse0x1ed8ff0();
   input += synapse0x1ed9030();
   input += synapse0x1ed9070();
   input += synapse0x1ed90b0();
   input += synapse0x1ed90f0();
   input += synapse0x1ed8b80();
   input += synapse0x1ed8bc0();
   input += synapse0x1ed9240();
   input += synapse0x1ed9280();
   input += synapse0x1ed92c0();
   input += synapse0x1ed9300();
   input += synapse0x1ed9340();
   input += synapse0x1ed9380();
   input += synapse0x1ed93c0();
   input += synapse0x1ed9400();
   input += synapse0x1ed9440();
   input += synapse0x1ed9480();
   input += synapse0x1ed94c0();
   input += synapse0x1ed9500();
   input += synapse0x1ed9540();
   input += synapse0x1ed9580();
   input += synapse0x1ed9130();
   input += synapse0x1ed9170();
   input += synapse0x1ed91b0();
   input += synapse0x1ed91f0();
   input += synapse0x1ed97d0();
   input += synapse0x1ed9810();
   input += synapse0x1ed9850();
   input += synapse0x1ed9890();
   input += synapse0x1ed98d0();
   input += synapse0x1ed9910();
   input += synapse0x1ed9950();
   input += synapse0x1ed9990();
   input += synapse0x1ed99d0();
   input += synapse0x1ed9a10();
   input += synapse0x1ed9a50();
   input += synapse0x1ed9a90();
   input += synapse0x1ed9ad0();
   input += synapse0x1ed9b10();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ed89f0() {
   double input = input0x1ed89f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1ed9b50() {
   double input = 0.461783;
   input += synapse0x1ed9e90();
   input += synapse0x1ed9ed0();
   input += synapse0x1ed9f10();
   input += synapse0x1ed9f50();
   input += synapse0x1ed9f90();
   input += synapse0x1ed9fd0();
   input += synapse0x1eda010();
   input += synapse0x1eda050();
   input += synapse0x1eda090();
   input += synapse0x1eda0d0();
   input += synapse0x1eda110();
   input += synapse0x1eda150();
   input += synapse0x1eda190();
   input += synapse0x1eda1d0();
   input += synapse0x1eda210();
   input += synapse0x1eda250();
   input += synapse0x1ed9ce0();
   input += synapse0x1ed9d20();
   input += synapse0x1eda3a0();
   input += synapse0x1eda3e0();
   input += synapse0x1eda420();
   input += synapse0x1eda460();
   input += synapse0x1eda4a0();
   input += synapse0x1eda4e0();
   input += synapse0x1eda520();
   input += synapse0x1eda560();
   input += synapse0x1eda5a0();
   input += synapse0x1eda5e0();
   input += synapse0x1eda620();
   input += synapse0x1eda660();
   input += synapse0x1eda6a0();
   input += synapse0x1eda6e0();
   input += synapse0x1eda290();
   input += synapse0x1eda2d0();
   input += synapse0x1eda310();
   input += synapse0x1eda350();
   input += synapse0x1eda930();
   input += synapse0x1eda970();
   input += synapse0x1eda9b0();
   input += synapse0x1eda9f0();
   input += synapse0x1edaa30();
   input += synapse0x1edaa70();
   input += synapse0x1edaab0();
   input += synapse0x1edaaf0();
   input += synapse0x1edab30();
   input += synapse0x1edab70();
   input += synapse0x1edabb0();
   input += synapse0x1edabf0();
   input += synapse0x1edac30();
   input += synapse0x1edac70();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1ed9b50() {
   double input = input0x1ed9b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRcR::input0x1edacb0() {
   double input = 5.05533;
   input += synapse0x1edaed0();
   input += synapse0x1edaf10();
   input += synapse0x1edaf50();
   input += synapse0x1edaf90();
   input += synapse0x1edafd0();
   return input;
}

double NNfunction_sb_dRcR::neuron0x1edacb0() {
   double input = input0x1edacb0();
   return (input * 1)+0;
}

double NNfunction_sb_dRcR::synapse0x1eab120() {
   return (neuron0x1ea5d20()*0.0237891);
}

double NNfunction_sb_dRcR::synapse0x1eab160() {
   return (neuron0x1ea5fd0()*0.00944065);
}

double NNfunction_sb_dRcR::synapse0x1eab1a0() {
   return (neuron0x1ea6310()*0.00788553);
}

double NNfunction_sb_dRcR::synapse0x1eab1e0() {
   return (neuron0x1ea6650()*-1.62455);
}

double NNfunction_sb_dRcR::synapse0x1eab220() {
   return (neuron0x1ea6990()*0.0199658);
}

double NNfunction_sb_dRcR::synapse0x1eab260() {
   return (neuron0x1ea6cd0()*-0.00862884);
}

double NNfunction_sb_dRcR::synapse0x1eab2a0() {
   return (neuron0x1ea7010()*0.0171602);
}

double NNfunction_sb_dRcR::synapse0x1eab2e0() {
   return (neuron0x1ea7350()*0.0115605);
}

double NNfunction_sb_dRcR::synapse0x1eab320() {
   return (neuron0x1ea7690()*-0.000283878);
}

double NNfunction_sb_dRcR::synapse0x1eab360() {
   return (neuron0x1ea79d0()*0.0302684);
}

double NNfunction_sb_dRcR::synapse0x1eab3a0() {
   return (neuron0x1ea7d10()*0.0044679);
}

double NNfunction_sb_dRcR::synapse0x1eab3e0() {
   return (neuron0x1ea8050()*0.0280551);
}

double NNfunction_sb_dRcR::synapse0x1eab420() {
   return (neuron0x1ea8390()*0.0276173);
}

double NNfunction_sb_dRcR::synapse0x1eab460() {
   return (neuron0x1ea86d0()*-0.0287557);
}

double NNfunction_sb_dRcR::synapse0x1eab4a0() {
   return (neuron0x1ea8a10()*0.00755661);
}

double NNfunction_sb_dRcR::synapse0x1eab4e0() {
   return (neuron0x1ea8d50()*-0.0584273);
}

double NNfunction_sb_dRcR::synapse0x1eaaf70() {
   return (neuron0x1ea9090()*0.0119609);
}

double NNfunction_sb_dRcR::synapse0x1eaafb0() {
   return (neuron0x1ea95f0()*0.0205349);
}

double NNfunction_sb_dRcR::synapse0x1c61f00() {
   return (neuron0x1ea9930()*0.000144051);
}

double NNfunction_sb_dRcR::synapse0x1c61f40() {
   return (neuron0x1ea9c70()*0.0228235);
}

double NNfunction_sb_dRcR::synapse0x1eab520() {
   return (neuron0x1ea9fb0()*0.00938631);
}

double NNfunction_sb_dRcR::synapse0x1eab560() {
   return (neuron0x1eaa2f0()*-0.0245599);
}

double NNfunction_sb_dRcR::synapse0x1eab5a0() {
   return (neuron0x1eaa630()*-0.00682653);
}

double NNfunction_sb_dRcR::synapse0x1eab5e0() {
   return (neuron0x1eaa970()*-0.013414);
}

double NNfunction_sb_dRcR::synapse0x1eab960() {
   return (neuron0x1ea5d20()*0.0639392);
}

double NNfunction_sb_dRcR::synapse0x1eab9a0() {
   return (neuron0x1ea5fd0()*0.634132);
}

double NNfunction_sb_dRcR::synapse0x1eab9e0() {
   return (neuron0x1ea6310()*-0.0530903);
}

double NNfunction_sb_dRcR::synapse0x1eaba20() {
   return (neuron0x1ea6650()*-0.925008);
}

double NNfunction_sb_dRcR::synapse0x1eaba60() {
   return (neuron0x1ea6990()*0.19138);
}

double NNfunction_sb_dRcR::synapse0x1eabaa0() {
   return (neuron0x1ea6cd0()*0.082323);
}

double NNfunction_sb_dRcR::synapse0x1eabae0() {
   return (neuron0x1ea7010()*0.380467);
}

double NNfunction_sb_dRcR::synapse0x1eabb20() {
   return (neuron0x1ea7350()*0.166445);
}

double NNfunction_sb_dRcR::synapse0x1eabb60() {
   return (neuron0x1ea7690()*0.18266);
}

double NNfunction_sb_dRcR::synapse0x1c61d50() {
   return (neuron0x1ea79d0()*-0.134525);
}

double NNfunction_sb_dRcR::synapse0x1c61d90() {
   return (neuron0x1ea7d10()*-0.0089412);
}

double NNfunction_sb_dRcR::synapse0x1c61dd0() {
   return (neuron0x1ea8050()*0.79078);
}

double NNfunction_sb_dRcR::synapse0x1c61e10() {
   return (neuron0x1ea8390()*0.334227);
}

double NNfunction_sb_dRcR::synapse0x1eabdb0() {
   return (neuron0x1ea86d0()*-0.830213);
}

double NNfunction_sb_dRcR::synapse0x1eabdf0() {
   return (neuron0x1ea8a10()*0.542043);
}

double NNfunction_sb_dRcR::synapse0x1eabe30() {
   return (neuron0x1ea8d50()*-0.152624);
}

double NNfunction_sb_dRcR::synapse0x1eab7b0() {
   return (neuron0x1ea9090()*-0.38602);
}

double NNfunction_sb_dRcR::synapse0x1eab7f0() {
   return (neuron0x1ea95f0()*-0.0313118);
}

double NNfunction_sb_dRcR::synapse0x1eabf80() {
   return (neuron0x1ea9930()*0.0954983);
}

double NNfunction_sb_dRcR::synapse0x1eabfc0() {
   return (neuron0x1ea9c70()*0.111132);
}

double NNfunction_sb_dRcR::synapse0x1eac000() {
   return (neuron0x1ea9fb0()*0.767662);
}

double NNfunction_sb_dRcR::synapse0x1eac040() {
   return (neuron0x1eaa2f0()*0.0765396);
}

double NNfunction_sb_dRcR::synapse0x1eac080() {
   return (neuron0x1eaa630()*-0.117239);
}

double NNfunction_sb_dRcR::synapse0x1eac0c0() {
   return (neuron0x1eaa970()*-0.53331);
}

double NNfunction_sb_dRcR::synapse0x1eac440() {
   return (neuron0x1ea5d20()*-0.110157);
}

double NNfunction_sb_dRcR::synapse0x1eac480() {
   return (neuron0x1ea5fd0()*-0.0632796);
}

double NNfunction_sb_dRcR::synapse0x1eac4c0() {
   return (neuron0x1ea6310()*-0.118255);
}

double NNfunction_sb_dRcR::synapse0x1eac500() {
   return (neuron0x1ea6650()*-0.0602175);
}

double NNfunction_sb_dRcR::synapse0x1eac540() {
   return (neuron0x1ea6990()*-0.365108);
}

double NNfunction_sb_dRcR::synapse0x1eac580() {
   return (neuron0x1ea6cd0()*-0.00432214);
}

double NNfunction_sb_dRcR::synapse0x1eac5c0() {
   return (neuron0x1ea7010()*0.207869);
}

double NNfunction_sb_dRcR::synapse0x1eac600() {
   return (neuron0x1ea7350()*0.104182);
}

double NNfunction_sb_dRcR::synapse0x1eac640() {
   return (neuron0x1ea7690()*0.101048);
}

double NNfunction_sb_dRcR::synapse0x1eac680() {
   return (neuron0x1ea79d0()*0.0654336);
}

double NNfunction_sb_dRcR::synapse0x1eac6c0() {
   return (neuron0x1ea7d10()*0.439983);
}

double NNfunction_sb_dRcR::synapse0x1eac700() {
   return (neuron0x1ea8050()*0.965145);
}

double NNfunction_sb_dRcR::synapse0x1eac740() {
   return (neuron0x1ea8390()*0.318367);
}

double NNfunction_sb_dRcR::synapse0x1eac780() {
   return (neuron0x1ea86d0()*0.121156);
}

double NNfunction_sb_dRcR::synapse0x1eac7c0() {
   return (neuron0x1ea8a10()*0.230968);
}

double NNfunction_sb_dRcR::synapse0x1eac800() {
   return (neuron0x1ea8d50()*0.10987);
}

double NNfunction_sb_dRcR::synapse0x1eac290() {
   return (neuron0x1ea9090()*-0.12067);
}

double NNfunction_sb_dRcR::synapse0x1eac2d0() {
   return (neuron0x1ea95f0()*-0.145338);
}

double NNfunction_sb_dRcR::synapse0x1c62590() {
   return (neuron0x1ea9930()*0.605114);
}

double NNfunction_sb_dRcR::synapse0x1c6fe60() {
   return (neuron0x1ea9c70()*-0.206523);
}

double NNfunction_sb_dRcR::synapse0x1c6fea0() {
   return (neuron0x1ea9fb0()*-0.135801);
}

double NNfunction_sb_dRcR::synapse0x1eae730() {
   return (neuron0x1eaa2f0()*0.0223947);
}

double NNfunction_sb_dRcR::synapse0x1eae770() {
   return (neuron0x1eaa630()*0.0263967);
}

double NNfunction_sb_dRcR::synapse0x1ea5a60() {
   return (neuron0x1eaa970()*-0.0788323);
}

double NNfunction_sb_dRcR::synapse0x1ea5b30() {
   return (neuron0x1ea5d20()*0.0189142);
}

double NNfunction_sb_dRcR::synapse0x1c706e0() {
   return (neuron0x1ea5fd0()*-0.0491666);
}

double NNfunction_sb_dRcR::synapse0x1eabd30() {
   return (neuron0x1ea6310()*0.323949);
}

double NNfunction_sb_dRcR::synapse0x1eabd70() {
   return (neuron0x1ea6650()*0.28884);
}

double NNfunction_sb_dRcR::synapse0x1eac950() {
   return (neuron0x1ea6990()*0.0697003);
}

double NNfunction_sb_dRcR::synapse0x1eac990() {
   return (neuron0x1ea6cd0()*-0.0396389);
}

double NNfunction_sb_dRcR::synapse0x1eac9d0() {
   return (neuron0x1ea7010()*-0.0910719);
}

double NNfunction_sb_dRcR::synapse0x1eaca10() {
   return (neuron0x1ea7350()*-0.0510661);
}

double NNfunction_sb_dRcR::synapse0x1eaca50() {
   return (neuron0x1ea7690()*-0.0426155);
}

double NNfunction_sb_dRcR::synapse0x1eaca90() {
   return (neuron0x1ea79d0()*0.0814108);
}

double NNfunction_sb_dRcR::synapse0x1eacad0() {
   return (neuron0x1ea7d10()*-0.122231);
}

double NNfunction_sb_dRcR::synapse0x1eacb10() {
   return (neuron0x1ea8050()*-0.0255753);
}

double NNfunction_sb_dRcR::synapse0x1eacb50() {
   return (neuron0x1ea8390()*0.356438);
}

double NNfunction_sb_dRcR::synapse0x1eacb90() {
   return (neuron0x1ea86d0()*-0.430826);
}

double NNfunction_sb_dRcR::synapse0x1eacbd0() {
   return (neuron0x1ea8a10()*0.0770892);
}

double NNfunction_sb_dRcR::synapse0x1eacc10() {
   return (neuron0x1ea8d50()*-1.41931);
}

double NNfunction_sb_dRcR::synapse0x1ea5aa0() {
   return (neuron0x1ea9090()*0.168714);
}

double NNfunction_sb_dRcR::synapse0x1ea5ae0() {
   return (neuron0x1ea95f0()*0.266345);
}

double NNfunction_sb_dRcR::synapse0x1eacd60() {
   return (neuron0x1ea9930()*0.159918);
}

double NNfunction_sb_dRcR::synapse0x1eacda0() {
   return (neuron0x1ea9c70()*-0.102241);
}

double NNfunction_sb_dRcR::synapse0x1eacde0() {
   return (neuron0x1ea9fb0()*0.238107);
}

double NNfunction_sb_dRcR::synapse0x1eace20() {
   return (neuron0x1eaa2f0()*0.0244947);
}

double NNfunction_sb_dRcR::synapse0x1eace60() {
   return (neuron0x1eaa630()*0.301074);
}

double NNfunction_sb_dRcR::synapse0x1eacea0() {
   return (neuron0x1eaa970()*0.247103);
}

double NNfunction_sb_dRcR::synapse0x1ead220() {
   return (neuron0x1ea5d20()*0.241299);
}

double NNfunction_sb_dRcR::synapse0x1ead260() {
   return (neuron0x1ea5fd0()*-0.520102);
}

double NNfunction_sb_dRcR::synapse0x1ead2a0() {
   return (neuron0x1ea6310()*-0.561972);
}

double NNfunction_sb_dRcR::synapse0x1ead2e0() {
   return (neuron0x1ea6650()*-0.0119145);
}

double NNfunction_sb_dRcR::synapse0x1ead320() {
   return (neuron0x1ea6990()*-0.32435);
}

double NNfunction_sb_dRcR::synapse0x1ead360() {
   return (neuron0x1ea6cd0()*0.25639);
}

double NNfunction_sb_dRcR::synapse0x1ead3a0() {
   return (neuron0x1ea7010()*-0.314498);
}

double NNfunction_sb_dRcR::synapse0x1ead3e0() {
   return (neuron0x1ea7350()*0.130818);
}

double NNfunction_sb_dRcR::synapse0x1ead420() {
   return (neuron0x1ea7690()*-0.278439);
}

double NNfunction_sb_dRcR::synapse0x1ead460() {
   return (neuron0x1ea79d0()*-0.701008);
}

double NNfunction_sb_dRcR::synapse0x1ead4a0() {
   return (neuron0x1ea7d10()*-0.418722);
}

double NNfunction_sb_dRcR::synapse0x1ead4e0() {
   return (neuron0x1ea8050()*0.220063);
}

double NNfunction_sb_dRcR::synapse0x1ead520() {
   return (neuron0x1ea8390()*-0.291962);
}

double NNfunction_sb_dRcR::synapse0x1ead560() {
   return (neuron0x1ea86d0()*-0.0818254);
}

double NNfunction_sb_dRcR::synapse0x1ead5a0() {
   return (neuron0x1ea8a10()*0.643131);
}

double NNfunction_sb_dRcR::synapse0x1ead5e0() {
   return (neuron0x1ea8d50()*0.238846);
}

double NNfunction_sb_dRcR::synapse0x1ead730() {
   return (neuron0x1ea9090()*0.295809);
}

double NNfunction_sb_dRcR::synapse0x1ead070() {
   return (neuron0x1ea95f0()*-0.0870117);
}

double NNfunction_sb_dRcR::synapse0x1ead0b0() {
   return (neuron0x1ea9930()*-0.3988);
}

double NNfunction_sb_dRcR::synapse0x1eae870() {
   return (neuron0x1ea9c70()*0.0615919);
}

double NNfunction_sb_dRcR::synapse0x1eae8b0() {
   return (neuron0x1ea9fb0()*0.639673);
}

double NNfunction_sb_dRcR::synapse0x1eae8f0() {
   return (neuron0x1eaa2f0()*0.163076);
}

double NNfunction_sb_dRcR::synapse0x1eae930() {
   return (neuron0x1eaa630()*0.520643);
}

double NNfunction_sb_dRcR::synapse0x1eae970() {
   return (neuron0x1eaa970()*0.2685);
}

double NNfunction_sb_dRcR::synapse0x1eaecf0() {
   return (neuron0x1ea5d20()*-0.0155013);
}

double NNfunction_sb_dRcR::synapse0x1eaed30() {
   return (neuron0x1ea5fd0()*0.159955);
}

double NNfunction_sb_dRcR::synapse0x1eaed70() {
   return (neuron0x1ea6310()*0.046231);
}

double NNfunction_sb_dRcR::synapse0x1eaedb0() {
   return (neuron0x1ea6650()*-0.275247);
}

double NNfunction_sb_dRcR::synapse0x1eaedf0() {
   return (neuron0x1ea6990()*0.0425315);
}

double NNfunction_sb_dRcR::synapse0x1eaee30() {
   return (neuron0x1ea6cd0()*-0.00587201);
}

double NNfunction_sb_dRcR::synapse0x1eaee70() {
   return (neuron0x1ea7010()*-0.0183789);
}

double NNfunction_sb_dRcR::synapse0x1eaeeb0() {
   return (neuron0x1ea7350()*0.000114046);
}

double NNfunction_sb_dRcR::synapse0x1eaeef0() {
   return (neuron0x1ea7690()*0.000770569);
}

double NNfunction_sb_dRcR::synapse0x1c701b0() {
   return (neuron0x1ea79d0()*0.0078973);
}

double NNfunction_sb_dRcR::synapse0x1c701f0() {
   return (neuron0x1ea7d10()*0.0132444);
}

double NNfunction_sb_dRcR::synapse0x1c70230() {
   return (neuron0x1ea8050()*0.338646);
}

double NNfunction_sb_dRcR::synapse0x1c70270() {
   return (neuron0x1ea8390()*0.447512);
}

double NNfunction_sb_dRcR::synapse0x1c702b0() {
   return (neuron0x1ea86d0()*-0.0475728);
}

double NNfunction_sb_dRcR::synapse0x1c702f0() {
   return (neuron0x1ea8a10()*0.200249);
}

double NNfunction_sb_dRcR::synapse0x1c70330() {
   return (neuron0x1ea8d50()*0.0962021);
}

double NNfunction_sb_dRcR::synapse0x1eaeb40() {
   return (neuron0x1ea9090()*-0.0773948);
}

double NNfunction_sb_dRcR::synapse0x1eaeb80() {
   return (neuron0x1ea95f0()*-0.2537);
}

double NNfunction_sb_dRcR::synapse0x1c70480() {
   return (neuron0x1ea9930()*0.158078);
}

double NNfunction_sb_dRcR::synapse0x1c704c0() {
   return (neuron0x1ea9c70()*0.000510665);
}

double NNfunction_sb_dRcR::synapse0x1c70500() {
   return (neuron0x1ea9fb0()*0.0060566);
}

double NNfunction_sb_dRcR::synapse0x1c70540() {
   return (neuron0x1eaa2f0()*0.0404085);
}

double NNfunction_sb_dRcR::synapse0x1c70580() {
   return (neuron0x1eaa630()*-0.022808);
}

double NNfunction_sb_dRcR::synapse0x1eaf740() {
   return (neuron0x1eaa970()*-0.011955);
}

double NNfunction_sb_dRcR::synapse0x1eafac0() {
   return (neuron0x1ea5d20()*0.00488865);
}

double NNfunction_sb_dRcR::synapse0x1eafb00() {
   return (neuron0x1ea5fd0()*0.109679);
}

double NNfunction_sb_dRcR::synapse0x1eafb40() {
   return (neuron0x1ea6310()*0.00968959);
}

double NNfunction_sb_dRcR::synapse0x1eafb80() {
   return (neuron0x1ea6650()*0.466109);
}

double NNfunction_sb_dRcR::synapse0x1eafbc0() {
   return (neuron0x1ea6990()*-0.0162957);
}

double NNfunction_sb_dRcR::synapse0x1eafc00() {
   return (neuron0x1ea6cd0()*-5.74426e-05);
}

double NNfunction_sb_dRcR::synapse0x1eafc40() {
   return (neuron0x1ea7010()*0.0265676);
}

double NNfunction_sb_dRcR::synapse0x1eafc80() {
   return (neuron0x1ea7350()*0.00263421);
}

double NNfunction_sb_dRcR::synapse0x1eafcc0() {
   return (neuron0x1ea7690()*0.0150259);
}

double NNfunction_sb_dRcR::synapse0x1eafd00() {
   return (neuron0x1ea79d0()*0.00987748);
}

double NNfunction_sb_dRcR::synapse0x1eafd40() {
   return (neuron0x1ea7d10()*0.0453);
}

double NNfunction_sb_dRcR::synapse0x1eafd80() {
   return (neuron0x1ea8050()*-0.149683);
}

double NNfunction_sb_dRcR::synapse0x1eafdc0() {
   return (neuron0x1ea8390()*-0.125766);
}

double NNfunction_sb_dRcR::synapse0x1eafe00() {
   return (neuron0x1ea86d0()*0.0515548);
}

double NNfunction_sb_dRcR::synapse0x1eafe40() {
   return (neuron0x1ea8a10()*-0.0451329);
}

double NNfunction_sb_dRcR::synapse0x1eafe80() {
   return (neuron0x1ea8d50()*0.136811);
}

double NNfunction_sb_dRcR::synapse0x1eaf910() {
   return (neuron0x1ea9090()*0.0208974);
}

double NNfunction_sb_dRcR::synapse0x1eaf950() {
   return (neuron0x1ea95f0()*-0.015348);
}

double NNfunction_sb_dRcR::synapse0x1eaffd0() {
   return (neuron0x1ea9930()*-0.0743836);
}

double NNfunction_sb_dRcR::synapse0x1eb0010() {
   return (neuron0x1ea9c70()*-0.0377951);
}

double NNfunction_sb_dRcR::synapse0x1eb0050() {
   return (neuron0x1ea9fb0()*0.0159315);
}

double NNfunction_sb_dRcR::synapse0x1eb0090() {
   return (neuron0x1eaa2f0()*0.033476);
}

double NNfunction_sb_dRcR::synapse0x1eb00d0() {
   return (neuron0x1eaa630()*0.01716);
}

double NNfunction_sb_dRcR::synapse0x1eb0110() {
   return (neuron0x1eaa970()*-0.0125003);
}

double NNfunction_sb_dRcR::synapse0x1eb0490() {
   return (neuron0x1ea5d20()*0.185636);
}

double NNfunction_sb_dRcR::synapse0x1eb04d0() {
   return (neuron0x1ea5fd0()*-0.801756);
}

double NNfunction_sb_dRcR::synapse0x1eb0510() {
   return (neuron0x1ea6310()*-0.466903);
}

double NNfunction_sb_dRcR::synapse0x1eb0550() {
   return (neuron0x1ea6650()*0.262972);
}

double NNfunction_sb_dRcR::synapse0x1eb0590() {
   return (neuron0x1ea6990()*0.0850287);
}

double NNfunction_sb_dRcR::synapse0x1eb05d0() {
   return (neuron0x1ea6cd0()*0.31856);
}

double NNfunction_sb_dRcR::synapse0x1eb0610() {
   return (neuron0x1ea7010()*-0.226574);
}

double NNfunction_sb_dRcR::synapse0x1eb0650() {
   return (neuron0x1ea7350()*-0.217512);
}

double NNfunction_sb_dRcR::synapse0x1eb0690() {
   return (neuron0x1ea7690()*0.164693);
}

double NNfunction_sb_dRcR::synapse0x1eb06d0() {
   return (neuron0x1ea79d0()*0.496103);
}

double NNfunction_sb_dRcR::synapse0x1eb0710() {
   return (neuron0x1ea7d10()*-0.247701);
}

double NNfunction_sb_dRcR::synapse0x1eb0750() {
   return (neuron0x1ea8050()*-0.43327);
}

double NNfunction_sb_dRcR::synapse0x1eb0790() {
   return (neuron0x1ea8390()*0.951933);
}

double NNfunction_sb_dRcR::synapse0x1eb07d0() {
   return (neuron0x1ea86d0()*-0.129048);
}

double NNfunction_sb_dRcR::synapse0x1eb0810() {
   return (neuron0x1ea8a10()*0.192213);
}

double NNfunction_sb_dRcR::synapse0x1eb0850() {
   return (neuron0x1ea8d50()*-0.314749);
}

double NNfunction_sb_dRcR::synapse0x1eb02e0() {
   return (neuron0x1ea9090()*-0.726769);
}

double NNfunction_sb_dRcR::synapse0x1eb0320() {
   return (neuron0x1ea95f0()*-0.767372);
}

double NNfunction_sb_dRcR::synapse0x1eb09a0() {
   return (neuron0x1ea9930()*0.500759);
}

double NNfunction_sb_dRcR::synapse0x1eb09e0() {
   return (neuron0x1ea9c70()*-0.517431);
}

double NNfunction_sb_dRcR::synapse0x1eb0a20() {
   return (neuron0x1ea9fb0()*0.132787);
}

double NNfunction_sb_dRcR::synapse0x1eb0a60() {
   return (neuron0x1eaa2f0()*0.239904);
}

double NNfunction_sb_dRcR::synapse0x1eb0aa0() {
   return (neuron0x1eaa630()*0.422581);
}

double NNfunction_sb_dRcR::synapse0x1eb0ae0() {
   return (neuron0x1eaa970()*0.342852);
}

double NNfunction_sb_dRcR::synapse0x1ea94e0() {
   return (neuron0x1ea5d20()*-0.315209);
}

double NNfunction_sb_dRcR::synapse0x1ea9520() {
   return (neuron0x1ea5fd0()*0.524559);
}

double NNfunction_sb_dRcR::synapse0x1ea9560() {
   return (neuron0x1ea6310()*0.211547);
}

double NNfunction_sb_dRcR::synapse0x1ea95a0() {
   return (neuron0x1ea6650()*-0.757531);
}

double NNfunction_sb_dRcR::synapse0x1eb1070() {
   return (neuron0x1ea6990()*-0.511519);
}

double NNfunction_sb_dRcR::synapse0x1eb10b0() {
   return (neuron0x1ea6cd0()*0.0758163);
}

double NNfunction_sb_dRcR::synapse0x1eb10f0() {
   return (neuron0x1ea7010()*0.0452332);
}

double NNfunction_sb_dRcR::synapse0x1eb1130() {
   return (neuron0x1ea7350()*0.163974);
}

double NNfunction_sb_dRcR::synapse0x1eb1170() {
   return (neuron0x1ea7690()*0.682178);
}

double NNfunction_sb_dRcR::synapse0x1eb11b0() {
   return (neuron0x1ea79d0()*-0.0654914);
}

double NNfunction_sb_dRcR::synapse0x1eb11f0() {
   return (neuron0x1ea7d10()*0.344238);
}

double NNfunction_sb_dRcR::synapse0x1eb1230() {
   return (neuron0x1ea8050()*-0.86127);
}

double NNfunction_sb_dRcR::synapse0x1eb1270() {
   return (neuron0x1ea8390()*-0.026558);
}

double NNfunction_sb_dRcR::synapse0x1eb12b0() {
   return (neuron0x1ea86d0()*0.0919792);
}

double NNfunction_sb_dRcR::synapse0x1eb12f0() {
   return (neuron0x1ea8a10()*-0.0886041);
}

double NNfunction_sb_dRcR::synapse0x1eb1330() {
   return (neuron0x1ea8d50()*-0.253604);
}

double NNfunction_sb_dRcR::synapse0x1eb0cb0() {
   return (neuron0x1ea9090()*0.1133);
}

double NNfunction_sb_dRcR::synapse0x1eb0cf0() {
   return (neuron0x1ea95f0()*-0.41726);
}

double NNfunction_sb_dRcR::synapse0x1eb1480() {
   return (neuron0x1ea9930()*-0.649256);
}

double NNfunction_sb_dRcR::synapse0x1eb14c0() {
   return (neuron0x1ea9c70()*-0.348193);
}

double NNfunction_sb_dRcR::synapse0x1eb1500() {
   return (neuron0x1ea9fb0()*0.0250801);
}

double NNfunction_sb_dRcR::synapse0x1eb1540() {
   return (neuron0x1eaa2f0()*-0.128567);
}

double NNfunction_sb_dRcR::synapse0x1eb1580() {
   return (neuron0x1eaa630()*-0.195094);
}

double NNfunction_sb_dRcR::synapse0x1eb15c0() {
   return (neuron0x1eaa970()*0.182338);
}

double NNfunction_sb_dRcR::synapse0x1eb1940() {
   return (neuron0x1ea5d20()*-0.0249853);
}

double NNfunction_sb_dRcR::synapse0x1eb1980() {
   return (neuron0x1ea5fd0()*-0.0193632);
}

double NNfunction_sb_dRcR::synapse0x1eb19c0() {
   return (neuron0x1ea6310()*-0.000854919);
}

double NNfunction_sb_dRcR::synapse0x1eb1a00() {
   return (neuron0x1ea6650()*-6.91917);
}

double NNfunction_sb_dRcR::synapse0x1eb1a40() {
   return (neuron0x1ea6990()*0.0185993);
}

double NNfunction_sb_dRcR::synapse0x1eb1a80() {
   return (neuron0x1ea6cd0()*0.00858114);
}

double NNfunction_sb_dRcR::synapse0x1eb1ac0() {
   return (neuron0x1ea7010()*-0.0233473);
}

double NNfunction_sb_dRcR::synapse0x1eb1b00() {
   return (neuron0x1ea7350()*0.0107702);
}

double NNfunction_sb_dRcR::synapse0x1eb1b40() {
   return (neuron0x1ea7690()*-0.00302626);
}

double NNfunction_sb_dRcR::synapse0x1eb1b80() {
   return (neuron0x1ea79d0()*0.0128077);
}

double NNfunction_sb_dRcR::synapse0x1eb1bc0() {
   return (neuron0x1ea7d10()*0.00115075);
}

double NNfunction_sb_dRcR::synapse0x1eb1c00() {
   return (neuron0x1ea8050()*0.0129735);
}

double NNfunction_sb_dRcR::synapse0x1eb1c40() {
   return (neuron0x1ea8390()*0.00288954);
}

double NNfunction_sb_dRcR::synapse0x1eb1c80() {
   return (neuron0x1ea86d0()*-0.0136536);
}

double NNfunction_sb_dRcR::synapse0x1eb1cc0() {
   return (neuron0x1ea8a10()*0.00223789);
}

double NNfunction_sb_dRcR::synapse0x1eb1d00() {
   return (neuron0x1ea8d50()*-0.24839);
}

double NNfunction_sb_dRcR::synapse0x1eb1790() {
   return (neuron0x1ea9090()*0.0118879);
}

double NNfunction_sb_dRcR::synapse0x1eb17d0() {
   return (neuron0x1ea95f0()*-0.281513);
}

double NNfunction_sb_dRcR::synapse0x1eb1e50() {
   return (neuron0x1ea9930()*-0.0139269);
}

double NNfunction_sb_dRcR::synapse0x1eb1e90() {
   return (neuron0x1ea9c70()*0.0390969);
}

double NNfunction_sb_dRcR::synapse0x1eb1ed0() {
   return (neuron0x1ea9fb0()*-0.0105903);
}

double NNfunction_sb_dRcR::synapse0x1eb1f10() {
   return (neuron0x1eaa2f0()*0.0305468);
}

double NNfunction_sb_dRcR::synapse0x1eb1f50() {
   return (neuron0x1eaa630()*-0.00325023);
}

double NNfunction_sb_dRcR::synapse0x1eb1f90() {
   return (neuron0x1eaa970()*-0.0125549);
}

double NNfunction_sb_dRcR::synapse0x1eb2310() {
   return (neuron0x1ea5d20()*0.150381);
}

double NNfunction_sb_dRcR::synapse0x1eb2350() {
   return (neuron0x1ea5fd0()*-0.726732);
}

double NNfunction_sb_dRcR::synapse0x1eb2390() {
   return (neuron0x1ea6310()*0.263147);
}

double NNfunction_sb_dRcR::synapse0x1eb23d0() {
   return (neuron0x1ea6650()*-0.517388);
}

double NNfunction_sb_dRcR::synapse0x1eb2410() {
   return (neuron0x1ea6990()*0.0140635);
}

double NNfunction_sb_dRcR::synapse0x1eb2450() {
   return (neuron0x1ea6cd0()*0.144767);
}

double NNfunction_sb_dRcR::synapse0x1eb2490() {
   return (neuron0x1ea7010()*0.00983858);
}

double NNfunction_sb_dRcR::synapse0x1eb24d0() {
   return (neuron0x1ea7350()*0.117003);
}

double NNfunction_sb_dRcR::synapse0x1eb2510() {
   return (neuron0x1ea7690()*0.361657);
}

double NNfunction_sb_dRcR::synapse0x1eb2550() {
   return (neuron0x1ea79d0()*0.171635);
}

double NNfunction_sb_dRcR::synapse0x1eb2590() {
   return (neuron0x1ea7d10()*0.312989);
}

double NNfunction_sb_dRcR::synapse0x1eb25d0() {
   return (neuron0x1ea8050()*-0.0904661);
}

double NNfunction_sb_dRcR::synapse0x1eb2610() {
   return (neuron0x1ea8390()*-0.0180397);
}

double NNfunction_sb_dRcR::synapse0x1eb2650() {
   return (neuron0x1ea86d0()*0.117801);
}

double NNfunction_sb_dRcR::synapse0x1eb2690() {
   return (neuron0x1ea8a10()*0.0664106);
}

double NNfunction_sb_dRcR::synapse0x1eb26d0() {
   return (neuron0x1ea8d50()*-0.222568);
}

double NNfunction_sb_dRcR::synapse0x1eb2160() {
   return (neuron0x1ea9090()*0.0936771);
}

double NNfunction_sb_dRcR::synapse0x1eb21a0() {
   return (neuron0x1ea95f0()*0.00520681);
}

double NNfunction_sb_dRcR::synapse0x1eaef30() {
   return (neuron0x1ea9930()*-0.251805);
}

double NNfunction_sb_dRcR::synapse0x1eaef70() {
   return (neuron0x1ea9c70()*0.0405271);
}

double NNfunction_sb_dRcR::synapse0x1eaefb0() {
   return (neuron0x1ea9fb0()*0.0981665);
}

double NNfunction_sb_dRcR::synapse0x1eaeff0() {
   return (neuron0x1eaa2f0()*0.0647395);
}

double NNfunction_sb_dRcR::synapse0x1eaf030() {
   return (neuron0x1eaa630()*-0.0739277);
}

double NNfunction_sb_dRcR::synapse0x1eaf070() {
   return (neuron0x1eaa970()*0.156202);
}

double NNfunction_sb_dRcR::synapse0x1eaf3f0() {
   return (neuron0x1ea5d20()*0.0310915);
}

double NNfunction_sb_dRcR::synapse0x1eaf430() {
   return (neuron0x1ea5fd0()*-0.0570458);
}

double NNfunction_sb_dRcR::synapse0x1eaf470() {
   return (neuron0x1ea6310()*0.057579);
}

double NNfunction_sb_dRcR::synapse0x1eaf4b0() {
   return (neuron0x1ea6650()*4.10692);
}

double NNfunction_sb_dRcR::synapse0x1eaf4f0() {
   return (neuron0x1ea6990()*0.0478967);
}

double NNfunction_sb_dRcR::synapse0x1eaf530() {
   return (neuron0x1ea6cd0()*-0.0171933);
}

double NNfunction_sb_dRcR::synapse0x1eaf570() {
   return (neuron0x1ea7010()*-0.0015257);
}

double NNfunction_sb_dRcR::synapse0x1eaf5b0() {
   return (neuron0x1ea7350()*0.0307825);
}

double NNfunction_sb_dRcR::synapse0x1eaf5f0() {
   return (neuron0x1ea7690()*-0.038291);
}

double NNfunction_sb_dRcR::synapse0x1eaf630() {
   return (neuron0x1ea79d0()*0.0227259);
}

double NNfunction_sb_dRcR::synapse0x1eaf670() {
   return (neuron0x1ea7d10()*-0.0127806);
}

double NNfunction_sb_dRcR::synapse0x1eaf6b0() {
   return (neuron0x1ea8050()*-0.00307371);
}

double NNfunction_sb_dRcR::synapse0x1eaf6f0() {
   return (neuron0x1ea8390()*-0.00641992);
}

double NNfunction_sb_dRcR::synapse0x1eb3830() {
   return (neuron0x1ea86d0()*-0.0674529);
}

double NNfunction_sb_dRcR::synapse0x1eb3870() {
   return (neuron0x1ea8a10()*-0.0296248);
}

double NNfunction_sb_dRcR::synapse0x1eb38b0() {
   return (neuron0x1ea8d50()*0.159446);
}

double NNfunction_sb_dRcR::synapse0x1eaf240() {
   return (neuron0x1ea9090()*0.00484348);
}

double NNfunction_sb_dRcR::synapse0x1eaf280() {
   return (neuron0x1ea95f0()*0.0837086);
}

double NNfunction_sb_dRcR::synapse0x1eb3a00() {
   return (neuron0x1ea9930()*-0.0357807);
}

double NNfunction_sb_dRcR::synapse0x1eb3a40() {
   return (neuron0x1ea9c70()*0.060747);
}

double NNfunction_sb_dRcR::synapse0x1eb3a80() {
   return (neuron0x1ea9fb0()*0.0112361);
}

double NNfunction_sb_dRcR::synapse0x1eb3ac0() {
   return (neuron0x1eaa2f0()*-0.0345158);
}

double NNfunction_sb_dRcR::synapse0x1eb3b00() {
   return (neuron0x1eaa630()*-0.00649371);
}

double NNfunction_sb_dRcR::synapse0x1eb3b40() {
   return (neuron0x1eaa970()*0.0101812);
}

double NNfunction_sb_dRcR::synapse0x1eb3ec0() {
   return (neuron0x1ea5d20()*-0.303817);
}

double NNfunction_sb_dRcR::synapse0x1eb3f00() {
   return (neuron0x1ea5fd0()*0.261236);
}

double NNfunction_sb_dRcR::synapse0x1eb3f40() {
   return (neuron0x1ea6310()*-0.584408);
}

double NNfunction_sb_dRcR::synapse0x1eb3f80() {
   return (neuron0x1ea6650()*0.0363202);
}

double NNfunction_sb_dRcR::synapse0x1eb3fc0() {
   return (neuron0x1ea6990()*-0.389335);
}

double NNfunction_sb_dRcR::synapse0x1eb4000() {
   return (neuron0x1ea6cd0()*-0.0979485);
}

double NNfunction_sb_dRcR::synapse0x1eb4040() {
   return (neuron0x1ea7010()*0.524112);
}

double NNfunction_sb_dRcR::synapse0x1eb4080() {
   return (neuron0x1ea7350()*-0.907024);
}

double NNfunction_sb_dRcR::synapse0x1eb40c0() {
   return (neuron0x1ea7690()*-0.266377);
}

double NNfunction_sb_dRcR::synapse0x1eb4100() {
   return (neuron0x1ea79d0()*0.379382);
}

double NNfunction_sb_dRcR::synapse0x1eb4140() {
   return (neuron0x1ea7d10()*0.567437);
}

double NNfunction_sb_dRcR::synapse0x1eb4180() {
   return (neuron0x1ea8050()*0.588611);
}

double NNfunction_sb_dRcR::synapse0x1eb41c0() {
   return (neuron0x1ea8390()*-0.05227);
}

double NNfunction_sb_dRcR::synapse0x1eb4200() {
   return (neuron0x1ea86d0()*0.344668);
}

double NNfunction_sb_dRcR::synapse0x1eb4240() {
   return (neuron0x1ea8a10()*-0.113727);
}

double NNfunction_sb_dRcR::synapse0x1eb4280() {
   return (neuron0x1ea8d50()*-0.184149);
}

double NNfunction_sb_dRcR::synapse0x1eb3d10() {
   return (neuron0x1ea9090()*0.264555);
}

double NNfunction_sb_dRcR::synapse0x1eb3d50() {
   return (neuron0x1ea95f0()*0.0416806);
}

double NNfunction_sb_dRcR::synapse0x1eb43d0() {
   return (neuron0x1ea9930()*-0.0918777);
}

double NNfunction_sb_dRcR::synapse0x1eb4410() {
   return (neuron0x1ea9c70()*0.908943);
}

double NNfunction_sb_dRcR::synapse0x1eb4450() {
   return (neuron0x1ea9fb0()*0.785222);
}

double NNfunction_sb_dRcR::synapse0x1eb4490() {
   return (neuron0x1eaa2f0()*-0.335093);
}

double NNfunction_sb_dRcR::synapse0x1eb44d0() {
   return (neuron0x1eaa630()*-0.216013);
}

double NNfunction_sb_dRcR::synapse0x1eb4510() {
   return (neuron0x1eaa970()*0.0336572);
}

double NNfunction_sb_dRcR::synapse0x1eb4890() {
   return (neuron0x1ea5d20()*0.300821);
}

double NNfunction_sb_dRcR::synapse0x1eb48d0() {
   return (neuron0x1ea5fd0()*-0.296816);
}

double NNfunction_sb_dRcR::synapse0x1eb4910() {
   return (neuron0x1ea6310()*0.48111);
}

double NNfunction_sb_dRcR::synapse0x1eb4950() {
   return (neuron0x1ea6650()*-1.29233);
}

double NNfunction_sb_dRcR::synapse0x1eb4990() {
   return (neuron0x1ea6990()*-0.287286);
}

double NNfunction_sb_dRcR::synapse0x1eb49d0() {
   return (neuron0x1ea6cd0()*-0.069517);
}

double NNfunction_sb_dRcR::synapse0x1eb4a10() {
   return (neuron0x1ea7010()*0.083877);
}

double NNfunction_sb_dRcR::synapse0x1eb4a50() {
   return (neuron0x1ea7350()*0.218057);
}

double NNfunction_sb_dRcR::synapse0x1eb4a90() {
   return (neuron0x1ea7690()*-0.205992);
}

double NNfunction_sb_dRcR::synapse0x1eb4ad0() {
   return (neuron0x1ea79d0()*0.0820853);
}

double NNfunction_sb_dRcR::synapse0x1eb4b10() {
   return (neuron0x1ea7d10()*-0.0248772);
}

double NNfunction_sb_dRcR::synapse0x1eb4b50() {
   return (neuron0x1ea8050()*0.402329);
}

double NNfunction_sb_dRcR::synapse0x1eb4b90() {
   return (neuron0x1ea8390()*0.0754533);
}

double NNfunction_sb_dRcR::synapse0x1eb4bd0() {
   return (neuron0x1ea86d0()*-0.153732);
}

double NNfunction_sb_dRcR::synapse0x1eb4c10() {
   return (neuron0x1ea8a10()*0.0495782);
}

double NNfunction_sb_dRcR::synapse0x1eb4c50() {
   return (neuron0x1ea8d50()*0.355484);
}

double NNfunction_sb_dRcR::synapse0x1eb46e0() {
   return (neuron0x1ea9090()*0.123197);
}

double NNfunction_sb_dRcR::synapse0x1eb4720() {
   return (neuron0x1ea95f0()*-1.2555);
}

double NNfunction_sb_dRcR::synapse0x1eb4da0() {
   return (neuron0x1ea9930()*-0.0010072);
}

double NNfunction_sb_dRcR::synapse0x1eb4de0() {
   return (neuron0x1ea9c70()*0.115505);
}

double NNfunction_sb_dRcR::synapse0x1eb4e20() {
   return (neuron0x1ea9fb0()*-0.0851823);
}

double NNfunction_sb_dRcR::synapse0x1eb4e60() {
   return (neuron0x1eaa2f0()*0.0154658);
}

double NNfunction_sb_dRcR::synapse0x1eb4ea0() {
   return (neuron0x1eaa630()*0.134453);
}

double NNfunction_sb_dRcR::synapse0x1eb4ee0() {
   return (neuron0x1eaa970()*0.0403932);
}

double NNfunction_sb_dRcR::synapse0x1eb5260() {
   return (neuron0x1ea5d20()*-0.00938283);
}

double NNfunction_sb_dRcR::synapse0x1eb52a0() {
   return (neuron0x1ea5fd0()*0.039667);
}

double NNfunction_sb_dRcR::synapse0x1eb52e0() {
   return (neuron0x1ea6310()*-0.0125142);
}

double NNfunction_sb_dRcR::synapse0x1eb5320() {
   return (neuron0x1ea6650()*0.627189);
}

double NNfunction_sb_dRcR::synapse0x1eb5360() {
   return (neuron0x1ea6990()*-0.140336);
}

double NNfunction_sb_dRcR::synapse0x1eb53a0() {
   return (neuron0x1ea6cd0()*0.0577795);
}

double NNfunction_sb_dRcR::synapse0x1eb53e0() {
   return (neuron0x1ea7010()*-0.177128);
}

double NNfunction_sb_dRcR::synapse0x1eb5420() {
   return (neuron0x1ea7350()*0.141966);
}

double NNfunction_sb_dRcR::synapse0x1eb5460() {
   return (neuron0x1ea7690()*-0.0310124);
}

double NNfunction_sb_dRcR::synapse0x1eb54a0() {
   return (neuron0x1ea79d0()*-0.161793);
}

double NNfunction_sb_dRcR::synapse0x1eb54e0() {
   return (neuron0x1ea7d10()*-0.0470149);
}

double NNfunction_sb_dRcR::synapse0x1eb5520() {
   return (neuron0x1ea8050()*0.213933);
}

double NNfunction_sb_dRcR::synapse0x1eb5560() {
   return (neuron0x1ea8390()*0.111467);
}

double NNfunction_sb_dRcR::synapse0x1eb55a0() {
   return (neuron0x1ea86d0()*0.00292649);
}

double NNfunction_sb_dRcR::synapse0x1eb55e0() {
   return (neuron0x1ea8a10()*0.052252);
}

double NNfunction_sb_dRcR::synapse0x1eb5620() {
   return (neuron0x1ea8d50()*-1.91136);
}

double NNfunction_sb_dRcR::synapse0x1eb50b0() {
   return (neuron0x1ea9090()*-0.00146229);
}

double NNfunction_sb_dRcR::synapse0x1eb50f0() {
   return (neuron0x1ea95f0()*0.00676636);
}

double NNfunction_sb_dRcR::synapse0x1eb5770() {
   return (neuron0x1ea9930()*-0.012927);
}

double NNfunction_sb_dRcR::synapse0x1eb57b0() {
   return (neuron0x1ea9c70()*-0.0278963);
}

double NNfunction_sb_dRcR::synapse0x1eb57f0() {
   return (neuron0x1ea9fb0()*-0.0903962);
}

double NNfunction_sb_dRcR::synapse0x1eb5830() {
   return (neuron0x1eaa2f0()*-0.0120708);
}

double NNfunction_sb_dRcR::synapse0x1eb5870() {
   return (neuron0x1eaa630()*-0.131138);
}

double NNfunction_sb_dRcR::synapse0x1eb58b0() {
   return (neuron0x1eaa970()*-0.0178162);
}

double NNfunction_sb_dRcR::synapse0x1eb5c30() {
   return (neuron0x1ea5d20()*1.21861);
}

double NNfunction_sb_dRcR::synapse0x1ea5eb0() {
   return (neuron0x1ea5fd0()*0.21761);
}

double NNfunction_sb_dRcR::synapse0x1ea5ef0() {
   return (neuron0x1ea6310()*-0.621293);
}

double NNfunction_sb_dRcR::synapse0x1ea61f0() {
   return (neuron0x1ea6650()*0.253632);
}

double NNfunction_sb_dRcR::synapse0x1ea6230() {
   return (neuron0x1ea6990()*0.00485127);
}

double NNfunction_sb_dRcR::synapse0x1ea6530() {
   return (neuron0x1ea6cd0()*-0.245296);
}

double NNfunction_sb_dRcR::synapse0x1ea6570() {
   return (neuron0x1ea7010()*0.201058);
}

double NNfunction_sb_dRcR::synapse0x1ea6870() {
   return (neuron0x1ea7350()*-0.482394);
}

double NNfunction_sb_dRcR::synapse0x1ea68b0() {
   return (neuron0x1ea7690()*-0.312265);
}

double NNfunction_sb_dRcR::synapse0x1ea6bb0() {
   return (neuron0x1ea79d0()*0.2613);
}

double NNfunction_sb_dRcR::synapse0x1ea6bf0() {
   return (neuron0x1ea7d10()*0.20309);
}

double NNfunction_sb_dRcR::synapse0x1ea6ef0() {
   return (neuron0x1ea8050()*-0.663379);
}

double NNfunction_sb_dRcR::synapse0x1ea6f30() {
   return (neuron0x1ea8390()*-0.173942);
}

double NNfunction_sb_dRcR::synapse0x1ea7230() {
   return (neuron0x1ea86d0()*-0.219406);
}

double NNfunction_sb_dRcR::synapse0x1ea7270() {
   return (neuron0x1ea8a10()*0.461569);
}

double NNfunction_sb_dRcR::synapse0x1ea7570() {
   return (neuron0x1ea8d50()*-0.425567);
}

double NNfunction_sb_dRcR::synapse0x1ea75b0() {
   return (neuron0x1ea9090()*0.456294);
}

double NNfunction_sb_dRcR::synapse0x1ea78b0() {
   return (neuron0x1ea95f0()*0.881171);
}

double NNfunction_sb_dRcR::synapse0x1ea78f0() {
   return (neuron0x1ea9930()*-0.983605);
}

double NNfunction_sb_dRcR::synapse0x1ea7bf0() {
   return (neuron0x1ea9c70()*-0.277343);
}

double NNfunction_sb_dRcR::synapse0x1ea7c30() {
   return (neuron0x1ea9fb0()*-0.368447);
}

double NNfunction_sb_dRcR::synapse0x1ea7f30() {
   return (neuron0x1eaa2f0()*0.167023);
}

double NNfunction_sb_dRcR::synapse0x1ea7f70() {
   return (neuron0x1eaa630()*-0.0772764);
}

double NNfunction_sb_dRcR::synapse0x1ea8270() {
   return (neuron0x1eaa970()*-0.264814);
}

double NNfunction_sb_dRcR::synapse0x1ea82b0() {
   return (neuron0x1ea5d20()*-0.677314);
}

double NNfunction_sb_dRcR::synapse0x1ea8f70() {
   return (neuron0x1ea5fd0()*-0.441155);
}

double NNfunction_sb_dRcR::synapse0x1ea8fb0() {
   return (neuron0x1ea6310()*0.0700618);
}

double NNfunction_sb_dRcR::synapse0x1eb5a80() {
   return (neuron0x1ea6650()*-0.48258);
}

double NNfunction_sb_dRcR::synapse0x1eb5ac0() {
   return (neuron0x1ea6990()*0.321512);
}

double NNfunction_sb_dRcR::synapse0x1ea92b0() {
   return (neuron0x1ea6cd0()*0.261724);
}

double NNfunction_sb_dRcR::synapse0x1ea92f0() {
   return (neuron0x1ea7010()*-0.473662);
}

double NNfunction_sb_dRcR::synapse0x1ea9810() {
   return (neuron0x1ea7350()*-0.139155);
}

double NNfunction_sb_dRcR::synapse0x1ea9850() {
   return (neuron0x1ea7690()*-0.146072);
}

double NNfunction_sb_dRcR::synapse0x1ea9b50() {
   return (neuron0x1ea79d0()*-0.558074);
}

double NNfunction_sb_dRcR::synapse0x1ea9b90() {
   return (neuron0x1ea7d10()*0.315702);
}

double NNfunction_sb_dRcR::synapse0x1ea9e90() {
   return (neuron0x1ea8050()*-0.0254841);
}

double NNfunction_sb_dRcR::synapse0x1ea9ed0() {
   return (neuron0x1ea8390()*-0.320363);
}

double NNfunction_sb_dRcR::synapse0x1eaa1d0() {
   return (neuron0x1ea86d0()*0.185234);
}

double NNfunction_sb_dRcR::synapse0x1eaa210() {
   return (neuron0x1ea8a10()*0.131388);
}

double NNfunction_sb_dRcR::synapse0x1eaa510() {
   return (neuron0x1ea8d50()*-0.201759);
}

double NNfunction_sb_dRcR::synapse0x1eaa550() {
   return (neuron0x1ea9090()*-0.365672);
}

double NNfunction_sb_dRcR::synapse0x1eaa850() {
   return (neuron0x1ea95f0()*-0.123131);
}

double NNfunction_sb_dRcR::synapse0x1eaa890() {
   return (neuron0x1ea9930()*-0.130615);
}

double NNfunction_sb_dRcR::synapse0x1eaab90() {
   return (neuron0x1ea9c70()*-0.246349);
}

double NNfunction_sb_dRcR::synapse0x1eaabd0() {
   return (neuron0x1ea9fb0()*-0.0291334);
}

double NNfunction_sb_dRcR::synapse0x1ea85b0() {
   return (neuron0x1eaa2f0()*-0.318854);
}

double NNfunction_sb_dRcR::synapse0x1ea85f0() {
   return (neuron0x1eaa630()*0.397975);
}

double NNfunction_sb_dRcR::synapse0x1eb79a0() {
   return (neuron0x1eaa970()*-0.0703877);
}

double NNfunction_sb_dRcR::synapse0x1eb7d20() {
   return (neuron0x1ea5d20()*1.07377);
}

double NNfunction_sb_dRcR::synapse0x1eb7d60() {
   return (neuron0x1ea5fd0()*0.672787);
}

double NNfunction_sb_dRcR::synapse0x1eb7da0() {
   return (neuron0x1ea6310()*0.413256);
}

double NNfunction_sb_dRcR::synapse0x1eb7de0() {
   return (neuron0x1ea6650()*-0.853302);
}

double NNfunction_sb_dRcR::synapse0x1eb7e20() {
   return (neuron0x1ea6990()*-0.362134);
}

double NNfunction_sb_dRcR::synapse0x1eb7e60() {
   return (neuron0x1ea6cd0()*0.379688);
}

double NNfunction_sb_dRcR::synapse0x1eb7ea0() {
   return (neuron0x1ea7010()*-0.770369);
}

double NNfunction_sb_dRcR::synapse0x1eb7ee0() {
   return (neuron0x1ea7350()*-0.397248);
}

double NNfunction_sb_dRcR::synapse0x1eb7f20() {
   return (neuron0x1ea7690()*0.122572);
}

double NNfunction_sb_dRcR::synapse0x1eb7f60() {
   return (neuron0x1ea79d0()*0.325741);
}

double NNfunction_sb_dRcR::synapse0x1eb7fa0() {
   return (neuron0x1ea7d10()*-0.548216);
}

double NNfunction_sb_dRcR::synapse0x1eb7fe0() {
   return (neuron0x1ea8050()*0.592551);
}

double NNfunction_sb_dRcR::synapse0x1eb8020() {
   return (neuron0x1ea8390()*-0.152389);
}

double NNfunction_sb_dRcR::synapse0x1eb8060() {
   return (neuron0x1ea86d0()*0.43918);
}

double NNfunction_sb_dRcR::synapse0x1eb80a0() {
   return (neuron0x1ea8a10()*-0.565272);
}

double NNfunction_sb_dRcR::synapse0x1eb80e0() {
   return (neuron0x1ea8d50()*0.258429);
}

double NNfunction_sb_dRcR::synapse0x1eb7b70() {
   return (neuron0x1ea9090()*-0.0898214);
}

double NNfunction_sb_dRcR::synapse0x1eb7bb0() {
   return (neuron0x1ea95f0()*0.0701413);
}

double NNfunction_sb_dRcR::synapse0x1eb8230() {
   return (neuron0x1ea9930()*0.456953);
}

double NNfunction_sb_dRcR::synapse0x1eb8270() {
   return (neuron0x1ea9c70()*-0.444739);
}

double NNfunction_sb_dRcR::synapse0x1eb82b0() {
   return (neuron0x1ea9fb0()*0.837151);
}

double NNfunction_sb_dRcR::synapse0x1eb82f0() {
   return (neuron0x1eaa2f0()*-0.509611);
}

double NNfunction_sb_dRcR::synapse0x1eb8330() {
   return (neuron0x1eaa630()*0.377563);
}

double NNfunction_sb_dRcR::synapse0x1eb8370() {
   return (neuron0x1eaa970()*0.845);
}

double NNfunction_sb_dRcR::synapse0x1eb86f0() {
   return (neuron0x1ea5d20()*-0.00326213);
}

double NNfunction_sb_dRcR::synapse0x1eb8730() {
   return (neuron0x1ea5fd0()*0.0255823);
}

double NNfunction_sb_dRcR::synapse0x1eb8770() {
   return (neuron0x1ea6310()*0.0179798);
}

double NNfunction_sb_dRcR::synapse0x1eb87b0() {
   return (neuron0x1ea6650()*-0.43804);
}

double NNfunction_sb_dRcR::synapse0x1eb87f0() {
   return (neuron0x1ea6990()*-0.00397975);
}

double NNfunction_sb_dRcR::synapse0x1eb8830() {
   return (neuron0x1ea6cd0()*0.00930152);
}

double NNfunction_sb_dRcR::synapse0x1eb8870() {
   return (neuron0x1ea7010()*-0.0275001);
}

double NNfunction_sb_dRcR::synapse0x1eb88b0() {
   return (neuron0x1ea7350()*-0.00134787);
}

double NNfunction_sb_dRcR::synapse0x1eb88f0() {
   return (neuron0x1ea7690()*0.00651366);
}

double NNfunction_sb_dRcR::synapse0x1eb8930() {
   return (neuron0x1ea79d0()*0.00727667);
}

double NNfunction_sb_dRcR::synapse0x1eb8970() {
   return (neuron0x1ea7d10()*0.0064386);
}

double NNfunction_sb_dRcR::synapse0x1eb89b0() {
   return (neuron0x1ea8050()*0.0264201);
}

double NNfunction_sb_dRcR::synapse0x1eb89f0() {
   return (neuron0x1ea8390()*0.0329017);
}

double NNfunction_sb_dRcR::synapse0x1eb8a30() {
   return (neuron0x1ea86d0()*0.00871691);
}

double NNfunction_sb_dRcR::synapse0x1eb8a70() {
   return (neuron0x1ea8a10()*0.0309502);
}

double NNfunction_sb_dRcR::synapse0x1eb8ab0() {
   return (neuron0x1ea8d50()*-0.165792);
}

double NNfunction_sb_dRcR::synapse0x1eb8540() {
   return (neuron0x1ea9090()*-0.021636);
}

double NNfunction_sb_dRcR::synapse0x1eb8580() {
   return (neuron0x1ea95f0()*-0.347846);
}

double NNfunction_sb_dRcR::synapse0x1eb8c00() {
   return (neuron0x1ea9930()*0.0129922);
}

double NNfunction_sb_dRcR::synapse0x1eb8c40() {
   return (neuron0x1ea9c70()*-0.0125207);
}

double NNfunction_sb_dRcR::synapse0x1eb8c80() {
   return (neuron0x1ea9fb0()*-0.00454165);
}

double NNfunction_sb_dRcR::synapse0x1eb8cc0() {
   return (neuron0x1eaa2f0()*0.0218257);
}

double NNfunction_sb_dRcR::synapse0x1eb8d00() {
   return (neuron0x1eaa630()*-0.000432069);
}

double NNfunction_sb_dRcR::synapse0x1eb8d40() {
   return (neuron0x1eaa970()*0.000578086);
}

double NNfunction_sb_dRcR::synapse0x1eb90c0() {
   return (neuron0x1ea5d20()*0.0433923);
}

double NNfunction_sb_dRcR::synapse0x1eb9100() {
   return (neuron0x1ea5fd0()*0.202767);
}

double NNfunction_sb_dRcR::synapse0x1eb9140() {
   return (neuron0x1ea6310()*-0.0722055);
}

double NNfunction_sb_dRcR::synapse0x1eb9180() {
   return (neuron0x1ea6650()*-0.231533);
}

double NNfunction_sb_dRcR::synapse0x1eb91c0() {
   return (neuron0x1ea6990()*-0.632136);
}

double NNfunction_sb_dRcR::synapse0x1eb9200() {
   return (neuron0x1ea6cd0()*-0.40018);
}

double NNfunction_sb_dRcR::synapse0x1eb9240() {
   return (neuron0x1ea7010()*-0.817536);
}

double NNfunction_sb_dRcR::synapse0x1eb9280() {
   return (neuron0x1ea7350()*-0.218295);
}

double NNfunction_sb_dRcR::synapse0x1eb92c0() {
   return (neuron0x1ea7690()*-0.111863);
}

double NNfunction_sb_dRcR::synapse0x1eb9300() {
   return (neuron0x1ea79d0()*0.0829865);
}

double NNfunction_sb_dRcR::synapse0x1eb9340() {
   return (neuron0x1ea7d10()*0.20729);
}

double NNfunction_sb_dRcR::synapse0x1eb9380() {
   return (neuron0x1ea8050()*-0.369393);
}

double NNfunction_sb_dRcR::synapse0x1eb93c0() {
   return (neuron0x1ea8390()*1.22434);
}

double NNfunction_sb_dRcR::synapse0x1eb9400() {
   return (neuron0x1ea86d0()*0.0995687);
}

double NNfunction_sb_dRcR::synapse0x1eb9440() {
   return (neuron0x1ea8a10()*-0.390754);
}

double NNfunction_sb_dRcR::synapse0x1eb9480() {
   return (neuron0x1ea8d50()*-0.258449);
}

double NNfunction_sb_dRcR::synapse0x1eb8f10() {
   return (neuron0x1ea9090()*0.274422);
}

double NNfunction_sb_dRcR::synapse0x1eb8f50() {
   return (neuron0x1ea95f0()*0.369003);
}

double NNfunction_sb_dRcR::synapse0x1eb95d0() {
   return (neuron0x1ea9930()*0.0145145);
}

double NNfunction_sb_dRcR::synapse0x1eb9610() {
   return (neuron0x1ea9c70()*0.224294);
}

double NNfunction_sb_dRcR::synapse0x1eb9650() {
   return (neuron0x1ea9fb0()*-0.854857);
}

double NNfunction_sb_dRcR::synapse0x1eb9690() {
   return (neuron0x1eaa2f0()*-0.373112);
}

double NNfunction_sb_dRcR::synapse0x1eb96d0() {
   return (neuron0x1eaa630()*-0.489205);
}

double NNfunction_sb_dRcR::synapse0x1eb9710() {
   return (neuron0x1eaa970()*-0.376819);
}

double NNfunction_sb_dRcR::synapse0x1eb9a90() {
   return (neuron0x1ea5d20()*-0.241141);
}

double NNfunction_sb_dRcR::synapse0x1eb9ad0() {
   return (neuron0x1ea5fd0()*-0.0266672);
}

double NNfunction_sb_dRcR::synapse0x1eb9b10() {
   return (neuron0x1ea6310()*0.107459);
}

double NNfunction_sb_dRcR::synapse0x1eb9b50() {
   return (neuron0x1ea6650()*0.683187);
}

double NNfunction_sb_dRcR::synapse0x1eb9b90() {
   return (neuron0x1ea6990()*0.0380293);
}

double NNfunction_sb_dRcR::synapse0x1eb9bd0() {
   return (neuron0x1ea6cd0()*0.183236);
}

double NNfunction_sb_dRcR::synapse0x1eb9c10() {
   return (neuron0x1ea7010()*-0.220965);
}

double NNfunction_sb_dRcR::synapse0x1eb9c50() {
   return (neuron0x1ea7350()*-0.488197);
}

double NNfunction_sb_dRcR::synapse0x1eb9c90() {
   return (neuron0x1ea7690()*0.387975);
}

double NNfunction_sb_dRcR::synapse0x1eb9cd0() {
   return (neuron0x1ea79d0()*0.227613);
}

double NNfunction_sb_dRcR::synapse0x1eb9d10() {
   return (neuron0x1ea7d10()*0.10801);
}

double NNfunction_sb_dRcR::synapse0x1eb9d50() {
   return (neuron0x1ea8050()*-0.526638);
}

double NNfunction_sb_dRcR::synapse0x1eb9d90() {
   return (neuron0x1ea8390()*0.0889815);
}

double NNfunction_sb_dRcR::synapse0x1eb9dd0() {
   return (neuron0x1ea86d0()*-0.182023);
}

double NNfunction_sb_dRcR::synapse0x1eb9e10() {
   return (neuron0x1ea8a10()*0.200938);
}

double NNfunction_sb_dRcR::synapse0x1eb9e50() {
   return (neuron0x1ea8d50()*0.147186);
}

double NNfunction_sb_dRcR::synapse0x1eb98e0() {
   return (neuron0x1ea9090()*0.157851);
}

double NNfunction_sb_dRcR::synapse0x1eb9920() {
   return (neuron0x1ea95f0()*-0.345202);
}

double NNfunction_sb_dRcR::synapse0x1eb9fa0() {
   return (neuron0x1ea9930()*-0.341653);
}

double NNfunction_sb_dRcR::synapse0x1eb9fe0() {
   return (neuron0x1ea9c70()*0.555306);
}

double NNfunction_sb_dRcR::synapse0x1eba020() {
   return (neuron0x1ea9fb0()*0.00821733);
}

double NNfunction_sb_dRcR::synapse0x1eba060() {
   return (neuron0x1eaa2f0()*-0.180039);
}

double NNfunction_sb_dRcR::synapse0x1eba0a0() {
   return (neuron0x1eaa630()*0.430034);
}

double NNfunction_sb_dRcR::synapse0x1eba0e0() {
   return (neuron0x1eaa970()*-0.0265403);
}

double NNfunction_sb_dRcR::synapse0x1eba460() {
   return (neuron0x1ea5d20()*0.00161299);
}

double NNfunction_sb_dRcR::synapse0x1eba4a0() {
   return (neuron0x1ea5fd0()*-0.0302493);
}

double NNfunction_sb_dRcR::synapse0x1eba4e0() {
   return (neuron0x1ea6310()*-0.00264839);
}

double NNfunction_sb_dRcR::synapse0x1eba520() {
   return (neuron0x1ea6650()*-0.384499);
}

double NNfunction_sb_dRcR::synapse0x1eba560() {
   return (neuron0x1ea6990()*0.0373483);
}

double NNfunction_sb_dRcR::synapse0x1eba5a0() {
   return (neuron0x1ea6cd0()*0.0102259);
}

double NNfunction_sb_dRcR::synapse0x1eba5e0() {
   return (neuron0x1ea7010()*0.038949);
}

double NNfunction_sb_dRcR::synapse0x1eba620() {
   return (neuron0x1ea7350()*0.0263972);
}

double NNfunction_sb_dRcR::synapse0x1eba660() {
   return (neuron0x1ea7690()*-0.00977332);
}

double NNfunction_sb_dRcR::synapse0x1eb2820() {
   return (neuron0x1ea79d0()*0.0104179);
}

double NNfunction_sb_dRcR::synapse0x1eb2860() {
   return (neuron0x1ea7d10()*-0.0177766);
}

double NNfunction_sb_dRcR::synapse0x1eb28a0() {
   return (neuron0x1ea8050()*-0.016206);
}

double NNfunction_sb_dRcR::synapse0x1eb28e0() {
   return (neuron0x1ea8390()*-0.00231082);
}

double NNfunction_sb_dRcR::synapse0x1eb2920() {
   return (neuron0x1ea86d0()*-0.0163561);
}

double NNfunction_sb_dRcR::synapse0x1eb2960() {
   return (neuron0x1ea8a10()*0.0449208);
}

double NNfunction_sb_dRcR::synapse0x1eb29a0() {
   return (neuron0x1ea8d50()*-0.039726);
}

double NNfunction_sb_dRcR::synapse0x1eba2b0() {
   return (neuron0x1ea9090()*0.0277748);
}

double NNfunction_sb_dRcR::synapse0x1eba2f0() {
   return (neuron0x1ea95f0()*1.25977);
}

double NNfunction_sb_dRcR::synapse0x1eb2af0() {
   return (neuron0x1ea9930()*-0.0266909);
}

double NNfunction_sb_dRcR::synapse0x1eb2b30() {
   return (neuron0x1ea9c70()*0.0318667);
}

double NNfunction_sb_dRcR::synapse0x1eb2b70() {
   return (neuron0x1ea9fb0()*0.0157188);
}

double NNfunction_sb_dRcR::synapse0x1eb2bb0() {
   return (neuron0x1eaa2f0()*-0.0177497);
}

double NNfunction_sb_dRcR::synapse0x1eb2bf0() {
   return (neuron0x1eaa630()*0.0235826);
}

double NNfunction_sb_dRcR::synapse0x1eb2c30() {
   return (neuron0x1eaa970()*0.000793073);
}

double NNfunction_sb_dRcR::synapse0x1eb2fb0() {
   return (neuron0x1ea5d20()*-0.0263959);
}

double NNfunction_sb_dRcR::synapse0x1eb2ff0() {
   return (neuron0x1ea5fd0()*-0.0516968);
}

double NNfunction_sb_dRcR::synapse0x1eb3030() {
   return (neuron0x1ea6310()*-0.0170384);
}

double NNfunction_sb_dRcR::synapse0x1eb3070() {
   return (neuron0x1ea6650()*1.01165);
}

double NNfunction_sb_dRcR::synapse0x1eb30b0() {
   return (neuron0x1ea6990()*-0.0201529);
}

double NNfunction_sb_dRcR::synapse0x1eb30f0() {
   return (neuron0x1ea6cd0()*-0.00131943);
}

double NNfunction_sb_dRcR::synapse0x1eb3130() {
   return (neuron0x1ea7010()*-0.0212389);
}

double NNfunction_sb_dRcR::synapse0x1eb3170() {
   return (neuron0x1ea7350()*-0.0132038);
}

double NNfunction_sb_dRcR::synapse0x1eb31b0() {
   return (neuron0x1ea7690()*-0.000368705);
}

double NNfunction_sb_dRcR::synapse0x1eb31f0() {
   return (neuron0x1ea79d0()*-0.0433763);
}

double NNfunction_sb_dRcR::synapse0x1eb3230() {
   return (neuron0x1ea7d10()*-0.0106047);
}

double NNfunction_sb_dRcR::synapse0x1eb3270() {
   return (neuron0x1ea8050()*-0.0141824);
}

double NNfunction_sb_dRcR::synapse0x1eb32b0() {
   return (neuron0x1ea8390()*-0.0240786);
}

double NNfunction_sb_dRcR::synapse0x1eb32f0() {
   return (neuron0x1ea86d0()*0.00668211);
}

double NNfunction_sb_dRcR::synapse0x1eb3330() {
   return (neuron0x1ea8a10()*-0.0127801);
}

double NNfunction_sb_dRcR::synapse0x1eb3370() {
   return (neuron0x1ea8d50()*0.0271119);
}

double NNfunction_sb_dRcR::synapse0x1eb2e00() {
   return (neuron0x1ea9090()*-0.0178313);
}

double NNfunction_sb_dRcR::synapse0x1eb2e40() {
   return (neuron0x1ea95f0()*-0.126147);
}

double NNfunction_sb_dRcR::synapse0x1eb34c0() {
   return (neuron0x1ea9930()*-0.00422084);
}

double NNfunction_sb_dRcR::synapse0x1eb3500() {
   return (neuron0x1ea9c70()*-0.00654298);
}

double NNfunction_sb_dRcR::synapse0x1eb3540() {
   return (neuron0x1ea9fb0()*-0.00693401);
}

double NNfunction_sb_dRcR::synapse0x1eb3580() {
   return (neuron0x1eaa2f0()*0.0272856);
}

double NNfunction_sb_dRcR::synapse0x1eb35c0() {
   return (neuron0x1eaa630()*0.003526);
}

double NNfunction_sb_dRcR::synapse0x1eb3600() {
   return (neuron0x1eaa970()*0.0245568);
}

double NNfunction_sb_dRcR::synapse0x1eb37d0() {
   return (neuron0x1ea5d20()*-0.458258);
}

double NNfunction_sb_dRcR::synapse0x1ebc860() {
   return (neuron0x1ea5fd0()*0.260822);
}

double NNfunction_sb_dRcR::synapse0x1ebc8a0() {
   return (neuron0x1ea6310()*0.374487);
}

double NNfunction_sb_dRcR::synapse0x1ebc8e0() {
   return (neuron0x1ea6650()*0.101966);
}

double NNfunction_sb_dRcR::synapse0x1ebc920() {
   return (neuron0x1ea6990()*-0.0282682);
}

double NNfunction_sb_dRcR::synapse0x1ebc960() {
   return (neuron0x1ea6cd0()*0.477512);
}

double NNfunction_sb_dRcR::synapse0x1ebc9a0() {
   return (neuron0x1ea7010()*-0.0565745);
}

double NNfunction_sb_dRcR::synapse0x1ebc9e0() {
   return (neuron0x1ea7350()*-0.142697);
}

double NNfunction_sb_dRcR::synapse0x1ebca20() {
   return (neuron0x1ea7690()*-0.346957);
}

double NNfunction_sb_dRcR::synapse0x1ebca60() {
   return (neuron0x1ea79d0()*-0.504076);
}

double NNfunction_sb_dRcR::synapse0x1ebcaa0() {
   return (neuron0x1ea7d10()*0.474521);
}

double NNfunction_sb_dRcR::synapse0x1ebcae0() {
   return (neuron0x1ea8050()*-0.562151);
}

double NNfunction_sb_dRcR::synapse0x1ebcb20() {
   return (neuron0x1ea8390()*0.0563241);
}

double NNfunction_sb_dRcR::synapse0x1ebcb60() {
   return (neuron0x1ea86d0()*-1.21425);
}

double NNfunction_sb_dRcR::synapse0x1ebcba0() {
   return (neuron0x1ea8a10()*-0.761956);
}

double NNfunction_sb_dRcR::synapse0x1ebcbe0() {
   return (neuron0x1ea8d50()*0.440647);
}

double NNfunction_sb_dRcR::synapse0x1ebc6b0() {
   return (neuron0x1ea9090()*0.567077);
}

double NNfunction_sb_dRcR::synapse0x1ebc6f0() {
   return (neuron0x1ea95f0()*0.127333);
}

double NNfunction_sb_dRcR::synapse0x1ebcd30() {
   return (neuron0x1ea9930()*0.302715);
}

double NNfunction_sb_dRcR::synapse0x1ebcd70() {
   return (neuron0x1ea9c70()*0.000848511);
}

double NNfunction_sb_dRcR::synapse0x1ebcdb0() {
   return (neuron0x1ea9fb0()*0.0831819);
}

double NNfunction_sb_dRcR::synapse0x1ebcdf0() {
   return (neuron0x1eaa2f0()*-0.143306);
}

double NNfunction_sb_dRcR::synapse0x1ebce30() {
   return (neuron0x1eaa630()*-0.11265);
}

double NNfunction_sb_dRcR::synapse0x1ebce70() {
   return (neuron0x1eaa970()*-0.324221);
}

double NNfunction_sb_dRcR::synapse0x1ebd1f0() {
   return (neuron0x1ea5d20()*0.226785);
}

double NNfunction_sb_dRcR::synapse0x1ebd230() {
   return (neuron0x1ea5fd0()*-0.325378);
}

double NNfunction_sb_dRcR::synapse0x1ebd270() {
   return (neuron0x1ea6310()*0.216741);
}

double NNfunction_sb_dRcR::synapse0x1ebd2b0() {
   return (neuron0x1ea6650()*1.60363);
}

double NNfunction_sb_dRcR::synapse0x1ebd2f0() {
   return (neuron0x1ea6990()*-0.109828);
}

double NNfunction_sb_dRcR::synapse0x1ebd330() {
   return (neuron0x1ea6cd0()*0.108998);
}

double NNfunction_sb_dRcR::synapse0x1ebd370() {
   return (neuron0x1ea7010()*-0.104922);
}

double NNfunction_sb_dRcR::synapse0x1ebd3b0() {
   return (neuron0x1ea7350()*0.149432);
}

double NNfunction_sb_dRcR::synapse0x1ebd3f0() {
   return (neuron0x1ea7690()*-0.0328525);
}

double NNfunction_sb_dRcR::synapse0x1ebd430() {
   return (neuron0x1ea79d0()*0.232369);
}

double NNfunction_sb_dRcR::synapse0x1ebd470() {
   return (neuron0x1ea7d10()*0.0652321);
}

double NNfunction_sb_dRcR::synapse0x1ebd4b0() {
   return (neuron0x1ea8050()*0.152812);
}

double NNfunction_sb_dRcR::synapse0x1ebd4f0() {
   return (neuron0x1ea8390()*-0.0953242);
}

double NNfunction_sb_dRcR::synapse0x1ebd530() {
   return (neuron0x1ea86d0()*-0.277634);
}

double NNfunction_sb_dRcR::synapse0x1ebd570() {
   return (neuron0x1ea8a10()*-0.123524);
}

double NNfunction_sb_dRcR::synapse0x1ebd5b0() {
   return (neuron0x1ea8d50()*0.805365);
}

double NNfunction_sb_dRcR::synapse0x1ebd040() {
   return (neuron0x1ea9090()*-0.0323161);
}

double NNfunction_sb_dRcR::synapse0x1ebd080() {
   return (neuron0x1ea95f0()*0.639096);
}

double NNfunction_sb_dRcR::synapse0x1ebd700() {
   return (neuron0x1ea9930()*0.0428834);
}

double NNfunction_sb_dRcR::synapse0x1ebd740() {
   return (neuron0x1ea9c70()*0.155052);
}

double NNfunction_sb_dRcR::synapse0x1ebd780() {
   return (neuron0x1ea9fb0()*-0.0139154);
}

double NNfunction_sb_dRcR::synapse0x1ebd7c0() {
   return (neuron0x1eaa2f0()*-0.0996323);
}

double NNfunction_sb_dRcR::synapse0x1ebd800() {
   return (neuron0x1eaa630()*0.0815146);
}

double NNfunction_sb_dRcR::synapse0x1ebd840() {
   return (neuron0x1eaa970()*0.209082);
}

double NNfunction_sb_dRcR::synapse0x1ebdbc0() {
   return (neuron0x1ea5d20()*-0.25229);
}

double NNfunction_sb_dRcR::synapse0x1ebdc00() {
   return (neuron0x1ea5fd0()*0.237651);
}

double NNfunction_sb_dRcR::synapse0x1ebdc40() {
   return (neuron0x1ea6310()*-0.0908241);
}

double NNfunction_sb_dRcR::synapse0x1ebdc80() {
   return (neuron0x1ea6650()*-0.607296);
}

double NNfunction_sb_dRcR::synapse0x1ebdcc0() {
   return (neuron0x1ea6990()*-0.0851682);
}

double NNfunction_sb_dRcR::synapse0x1ebdd00() {
   return (neuron0x1ea6cd0()*0.142156);
}

double NNfunction_sb_dRcR::synapse0x1ebdd40() {
   return (neuron0x1ea7010()*-0.753035);
}

double NNfunction_sb_dRcR::synapse0x1ebdd80() {
   return (neuron0x1ea7350()*0.448085);
}

double NNfunction_sb_dRcR::synapse0x1ebddc0() {
   return (neuron0x1ea7690()*-0.200731);
}

double NNfunction_sb_dRcR::synapse0x1ebde00() {
   return (neuron0x1ea79d0()*-0.188344);
}

double NNfunction_sb_dRcR::synapse0x1ebde40() {
   return (neuron0x1ea7d10()*-0.0755997);
}

double NNfunction_sb_dRcR::synapse0x1ebde80() {
   return (neuron0x1ea8050()*0.130341);
}

double NNfunction_sb_dRcR::synapse0x1ebdec0() {
   return (neuron0x1ea8390()*0.0217482);
}

double NNfunction_sb_dRcR::synapse0x1ebdf00() {
   return (neuron0x1ea86d0()*-0.299454);
}

double NNfunction_sb_dRcR::synapse0x1ebdf40() {
   return (neuron0x1ea8a10()*0.105126);
}

double NNfunction_sb_dRcR::synapse0x1ebdf80() {
   return (neuron0x1ea8d50()*0.989963);
}

double NNfunction_sb_dRcR::synapse0x1ebda10() {
   return (neuron0x1ea9090()*0.243311);
}

double NNfunction_sb_dRcR::synapse0x1ebda50() {
   return (neuron0x1ea95f0()*-0.249153);
}

double NNfunction_sb_dRcR::synapse0x1ebe0d0() {
   return (neuron0x1ea9930()*-0.177055);
}

double NNfunction_sb_dRcR::synapse0x1ebe110() {
   return (neuron0x1ea9c70()*-0.115149);
}

double NNfunction_sb_dRcR::synapse0x1ebe150() {
   return (neuron0x1ea9fb0()*0.288069);
}

double NNfunction_sb_dRcR::synapse0x1ebe190() {
   return (neuron0x1eaa2f0()*-0.115654);
}

double NNfunction_sb_dRcR::synapse0x1ebe1d0() {
   return (neuron0x1eaa630()*0.0794711);
}

double NNfunction_sb_dRcR::synapse0x1ebe210() {
   return (neuron0x1eaa970()*-0.191209);
}

double NNfunction_sb_dRcR::synapse0x1ebe590() {
   return (neuron0x1ea5d20()*0.324127);
}

double NNfunction_sb_dRcR::synapse0x1ebe5d0() {
   return (neuron0x1ea5fd0()*-0.645436);
}

double NNfunction_sb_dRcR::synapse0x1ebe610() {
   return (neuron0x1ea6310()*-0.616592);
}

double NNfunction_sb_dRcR::synapse0x1ebe650() {
   return (neuron0x1ea6650()*-0.218787);
}

double NNfunction_sb_dRcR::synapse0x1ebe690() {
   return (neuron0x1ea6990()*0.328066);
}

double NNfunction_sb_dRcR::synapse0x1ebe6d0() {
   return (neuron0x1ea6cd0()*-0.108018);
}

double NNfunction_sb_dRcR::synapse0x1ebe710() {
   return (neuron0x1ea7010()*0.183623);
}

double NNfunction_sb_dRcR::synapse0x1ebe750() {
   return (neuron0x1ea7350()*0.230112);
}

double NNfunction_sb_dRcR::synapse0x1ebe790() {
   return (neuron0x1ea7690()*-0.217374);
}

double NNfunction_sb_dRcR::synapse0x1ebe7d0() {
   return (neuron0x1ea79d0()*-0.560826);
}

double NNfunction_sb_dRcR::synapse0x1ebe810() {
   return (neuron0x1ea7d10()*-0.193081);
}

double NNfunction_sb_dRcR::synapse0x1ebe850() {
   return (neuron0x1ea8050()*0.725586);
}

double NNfunction_sb_dRcR::synapse0x1ebe890() {
   return (neuron0x1ea8390()*0.478148);
}

double NNfunction_sb_dRcR::synapse0x1ebe8d0() {
   return (neuron0x1ea86d0()*-0.605545);
}

double NNfunction_sb_dRcR::synapse0x1ebe910() {
   return (neuron0x1ea8a10()*0.263216);
}

double NNfunction_sb_dRcR::synapse0x1ebe950() {
   return (neuron0x1ea8d50()*0.772529);
}

double NNfunction_sb_dRcR::synapse0x1ebe3e0() {
   return (neuron0x1ea9090()*0.144955);
}

double NNfunction_sb_dRcR::synapse0x1ebe420() {
   return (neuron0x1ea95f0()*-0.409953);
}

double NNfunction_sb_dRcR::synapse0x1ebeaa0() {
   return (neuron0x1ea9930()*-0.611096);
}

double NNfunction_sb_dRcR::synapse0x1ebeae0() {
   return (neuron0x1ea9c70()*-0.0165082);
}

double NNfunction_sb_dRcR::synapse0x1ebeb20() {
   return (neuron0x1ea9fb0()*0.115455);
}

double NNfunction_sb_dRcR::synapse0x1ebeb60() {
   return (neuron0x1eaa2f0()*-0.248688);
}

double NNfunction_sb_dRcR::synapse0x1ebeba0() {
   return (neuron0x1eaa630()*-0.466331);
}

double NNfunction_sb_dRcR::synapse0x1ebebe0() {
   return (neuron0x1eaa970()*0.221543);
}

double NNfunction_sb_dRcR::synapse0x1ebef60() {
   return (neuron0x1ea5d20()*-0.0235827);
}

double NNfunction_sb_dRcR::synapse0x1ebefa0() {
   return (neuron0x1ea5fd0()*-0.000936721);
}

double NNfunction_sb_dRcR::synapse0x1ebefe0() {
   return (neuron0x1ea6310()*-0.0251565);
}

double NNfunction_sb_dRcR::synapse0x1ebf020() {
   return (neuron0x1ea6650()*3.80849);
}

double NNfunction_sb_dRcR::synapse0x1ebf060() {
   return (neuron0x1ea6990()*-0.00633064);
}

double NNfunction_sb_dRcR::synapse0x1ebf0a0() {
   return (neuron0x1ea6cd0()*0.0139192);
}

double NNfunction_sb_dRcR::synapse0x1ebf0e0() {
   return (neuron0x1ea7010()*-0.00291715);
}

double NNfunction_sb_dRcR::synapse0x1ebf120() {
   return (neuron0x1ea7350()*-0.0121223);
}

double NNfunction_sb_dRcR::synapse0x1ebf160() {
   return (neuron0x1ea7690()*0.00134818);
}

double NNfunction_sb_dRcR::synapse0x1ebf1a0() {
   return (neuron0x1ea79d0()*0.00230226);
}

double NNfunction_sb_dRcR::synapse0x1ebf1e0() {
   return (neuron0x1ea7d10()*0.0110994);
}

double NNfunction_sb_dRcR::synapse0x1ebf220() {
   return (neuron0x1ea8050()*-0.008829);
}

double NNfunction_sb_dRcR::synapse0x1ebf260() {
   return (neuron0x1ea8390()*0.000323713);
}

double NNfunction_sb_dRcR::synapse0x1ebf2a0() {
   return (neuron0x1ea86d0()*0.0224769);
}

double NNfunction_sb_dRcR::synapse0x1ebf2e0() {
   return (neuron0x1ea8a10()*-0.00335088);
}

double NNfunction_sb_dRcR::synapse0x1ebf320() {
   return (neuron0x1ea8d50()*-0.193449);
}

double NNfunction_sb_dRcR::synapse0x1ebedb0() {
   return (neuron0x1ea9090()*-0.00246409);
}

double NNfunction_sb_dRcR::synapse0x1ebedf0() {
   return (neuron0x1ea95f0()*-0.190656);
}

double NNfunction_sb_dRcR::synapse0x1ebf470() {
   return (neuron0x1ea9930()*0.00578089);
}

double NNfunction_sb_dRcR::synapse0x1ebf4b0() {
   return (neuron0x1ea9c70()*-0.0128047);
}

double NNfunction_sb_dRcR::synapse0x1ebf4f0() {
   return (neuron0x1ea9fb0()*-0.00387761);
}

double NNfunction_sb_dRcR::synapse0x1ebf530() {
   return (neuron0x1eaa2f0()*0.0216533);
}

double NNfunction_sb_dRcR::synapse0x1ebf570() {
   return (neuron0x1eaa630()*-0.0110051);
}

double NNfunction_sb_dRcR::synapse0x1ebf5b0() {
   return (neuron0x1eaa970()*-0.000865143);
}

double NNfunction_sb_dRcR::synapse0x1ebf930() {
   return (neuron0x1ea5d20()*-0.0578514);
}

double NNfunction_sb_dRcR::synapse0x1ebf970() {
   return (neuron0x1ea5fd0()*-0.0483203);
}

double NNfunction_sb_dRcR::synapse0x1ebf9b0() {
   return (neuron0x1ea6310()*-0.0265203);
}

double NNfunction_sb_dRcR::synapse0x1ebf9f0() {
   return (neuron0x1ea6650()*0.881237);
}

double NNfunction_sb_dRcR::synapse0x1ebfa30() {
   return (neuron0x1ea6990()*-0.0222272);
}

double NNfunction_sb_dRcR::synapse0x1ebfa70() {
   return (neuron0x1ea6cd0()*0.0214804);
}

double NNfunction_sb_dRcR::synapse0x1ebfab0() {
   return (neuron0x1ea7010()*0.00133542);
}

double NNfunction_sb_dRcR::synapse0x1ebfaf0() {
   return (neuron0x1ea7350()*-0.0170432);
}

double NNfunction_sb_dRcR::synapse0x1ebfb30() {
   return (neuron0x1ea7690()*-0.00754627);
}

double NNfunction_sb_dRcR::synapse0x1ebfb70() {
   return (neuron0x1ea79d0()*-0.0405909);
}

double NNfunction_sb_dRcR::synapse0x1ebfbb0() {
   return (neuron0x1ea7d10()*0.00452066);
}

double NNfunction_sb_dRcR::synapse0x1ebfbf0() {
   return (neuron0x1ea8050()*-0.0313104);
}

double NNfunction_sb_dRcR::synapse0x1ebfc30() {
   return (neuron0x1ea8390()*-0.0304988);
}

double NNfunction_sb_dRcR::synapse0x1ebfc70() {
   return (neuron0x1ea86d0()*0.0437797);
}

double NNfunction_sb_dRcR::synapse0x1ebfcb0() {
   return (neuron0x1ea8a10()*-0.0927408);
}

double NNfunction_sb_dRcR::synapse0x1ebfcf0() {
   return (neuron0x1ea8d50()*0.0321376);
}

double NNfunction_sb_dRcR::synapse0x1ebf780() {
   return (neuron0x1ea9090()*-0.0192224);
}

double NNfunction_sb_dRcR::synapse0x1ebf7c0() {
   return (neuron0x1ea95f0()*-0.517311);
}

double NNfunction_sb_dRcR::synapse0x1ebfe40() {
   return (neuron0x1ea9930()*0.00606003);
}

double NNfunction_sb_dRcR::synapse0x1ebfe80() {
   return (neuron0x1ea9c70()*-0.0629421);
}

double NNfunction_sb_dRcR::synapse0x1ebfec0() {
   return (neuron0x1ea9fb0()*-0.00503598);
}

double NNfunction_sb_dRcR::synapse0x1ebff00() {
   return (neuron0x1eaa2f0()*0.00223904);
}

double NNfunction_sb_dRcR::synapse0x1ebff40() {
   return (neuron0x1eaa630()*-0.0235245);
}

double NNfunction_sb_dRcR::synapse0x1ebff80() {
   return (neuron0x1eaa970()*0.0233119);
}

double NNfunction_sb_dRcR::synapse0x1ec0300() {
   return (neuron0x1ea5d20()*0.600342);
}

double NNfunction_sb_dRcR::synapse0x1ec0340() {
   return (neuron0x1ea5fd0()*0.331547);
}

double NNfunction_sb_dRcR::synapse0x1ec0380() {
   return (neuron0x1ea6310()*0.407324);
}

double NNfunction_sb_dRcR::synapse0x1ec03c0() {
   return (neuron0x1ea6650()*-0.142753);
}

double NNfunction_sb_dRcR::synapse0x1ec0400() {
   return (neuron0x1ea6990()*-1.04861);
}

double NNfunction_sb_dRcR::synapse0x1ec0440() {
   return (neuron0x1ea6cd0()*-0.0183341);
}

double NNfunction_sb_dRcR::synapse0x1ec0480() {
   return (neuron0x1ea7010()*0.295082);
}

double NNfunction_sb_dRcR::synapse0x1ec04c0() {
   return (neuron0x1ea7350()*0.238353);
}

double NNfunction_sb_dRcR::synapse0x1ec0500() {
   return (neuron0x1ea7690()*-0.0563216);
}

double NNfunction_sb_dRcR::synapse0x1ec0540() {
   return (neuron0x1ea79d0()*-0.161499);
}

double NNfunction_sb_dRcR::synapse0x1ec0580() {
   return (neuron0x1ea7d10()*-0.826856);
}

double NNfunction_sb_dRcR::synapse0x1ec05c0() {
   return (neuron0x1ea8050()*-0.105947);
}

double NNfunction_sb_dRcR::synapse0x1ec0600() {
   return (neuron0x1ea8390()*0.52418);
}

double NNfunction_sb_dRcR::synapse0x1ec0640() {
   return (neuron0x1ea86d0()*0.116552);
}

double NNfunction_sb_dRcR::synapse0x1ec0680() {
   return (neuron0x1ea8a10()*-0.591666);
}

double NNfunction_sb_dRcR::synapse0x1ec06c0() {
   return (neuron0x1ea8d50()*-1.3983);
}

double NNfunction_sb_dRcR::synapse0x1ec0150() {
   return (neuron0x1ea9090()*-0.306024);
}

double NNfunction_sb_dRcR::synapse0x1ec0190() {
   return (neuron0x1ea95f0()*-0.291455);
}

double NNfunction_sb_dRcR::synapse0x1ec0810() {
   return (neuron0x1ea9930()*-0.571147);
}

double NNfunction_sb_dRcR::synapse0x1ec0850() {
   return (neuron0x1ea9c70()*-0.488666);
}

double NNfunction_sb_dRcR::synapse0x1ec0890() {
   return (neuron0x1ea9fb0()*0.39292);
}

double NNfunction_sb_dRcR::synapse0x1ec08d0() {
   return (neuron0x1eaa2f0()*-0.0924382);
}

double NNfunction_sb_dRcR::synapse0x1ec0910() {
   return (neuron0x1eaa630()*0.639867);
}

double NNfunction_sb_dRcR::synapse0x1ec0950() {
   return (neuron0x1eaa970()*-0.51947);
}

double NNfunction_sb_dRcR::synapse0x1ec0cd0() {
   return (neuron0x1ea5d20()*0.386079);
}

double NNfunction_sb_dRcR::synapse0x1ec0d10() {
   return (neuron0x1ea5fd0()*0.225208);
}

double NNfunction_sb_dRcR::synapse0x1ec0d50() {
   return (neuron0x1ea6310()*0.55259);
}

double NNfunction_sb_dRcR::synapse0x1ec0d90() {
   return (neuron0x1ea6650()*-0.328514);
}

double NNfunction_sb_dRcR::synapse0x1ec0dd0() {
   return (neuron0x1ea6990()*0.628007);
}

double NNfunction_sb_dRcR::synapse0x1ec0e10() {
   return (neuron0x1ea6cd0()*-0.124521);
}

double NNfunction_sb_dRcR::synapse0x1ec0e50() {
   return (neuron0x1ea7010()*-0.398978);
}

double NNfunction_sb_dRcR::synapse0x1ec0e90() {
   return (neuron0x1ea7350()*0.449827);
}

double NNfunction_sb_dRcR::synapse0x1ec0ed0() {
   return (neuron0x1ea7690()*-0.27155);
}

double NNfunction_sb_dRcR::synapse0x1ec0f10() {
   return (neuron0x1ea79d0()*0.41955);
}

double NNfunction_sb_dRcR::synapse0x1ec0f50() {
   return (neuron0x1ea7d10()*0.392396);
}

double NNfunction_sb_dRcR::synapse0x1ec0f90() {
   return (neuron0x1ea8050()*-0.170215);
}

double NNfunction_sb_dRcR::synapse0x1ec0fd0() {
   return (neuron0x1ea8390()*0.172284);
}

double NNfunction_sb_dRcR::synapse0x1ec1010() {
   return (neuron0x1ea86d0()*-0.424563);
}

double NNfunction_sb_dRcR::synapse0x1ec1050() {
   return (neuron0x1ea8a10()*-0.425631);
}

double NNfunction_sb_dRcR::synapse0x1ec1090() {
   return (neuron0x1ea8d50()*0.132222);
}

double NNfunction_sb_dRcR::synapse0x1ec0b20() {
   return (neuron0x1ea9090()*-0.366684);
}

double NNfunction_sb_dRcR::synapse0x1ec0b60() {
   return (neuron0x1ea95f0()*-0.573224);
}

double NNfunction_sb_dRcR::synapse0x1ec11e0() {
   return (neuron0x1ea9930()*0.113082);
}

double NNfunction_sb_dRcR::synapse0x1ec1220() {
   return (neuron0x1ea9c70()*-0.255218);
}

double NNfunction_sb_dRcR::synapse0x1ec1260() {
   return (neuron0x1ea9fb0()*-0.252756);
}

double NNfunction_sb_dRcR::synapse0x1ec12a0() {
   return (neuron0x1eaa2f0()*0.401675);
}

double NNfunction_sb_dRcR::synapse0x1ec12e0() {
   return (neuron0x1eaa630()*0.631671);
}

double NNfunction_sb_dRcR::synapse0x1ec1320() {
   return (neuron0x1eaa970()*-0.111226);
}

double NNfunction_sb_dRcR::synapse0x1ec16a0() {
   return (neuron0x1ea5d20()*-0.251394);
}

double NNfunction_sb_dRcR::synapse0x1eb5c70() {
   return (neuron0x1ea5fd0()*-0.0941664);
}

double NNfunction_sb_dRcR::synapse0x1eb5cb0() {
   return (neuron0x1ea6310()*0.270265);
}

double NNfunction_sb_dRcR::synapse0x1eb5cf0() {
   return (neuron0x1ea6650()*0.246045);
}

double NNfunction_sb_dRcR::synapse0x1eb5f40() {
   return (neuron0x1ea6990()*0.402221);
}

double NNfunction_sb_dRcR::synapse0x1eb5f80() {
   return (neuron0x1ea6cd0()*-0.106662);
}

double NNfunction_sb_dRcR::synapse0x1eb5fc0() {
   return (neuron0x1ea7010()*-0.464207);
}

double NNfunction_sb_dRcR::synapse0x1eb6210() {
   return (neuron0x1ea7350()*0.481109);
}

double NNfunction_sb_dRcR::synapse0x1eb6250() {
   return (neuron0x1ea7690()*-0.234526);
}

double NNfunction_sb_dRcR::synapse0x1eb64a0() {
   return (neuron0x1ea79d0()*0.319952);
}

double NNfunction_sb_dRcR::synapse0x1eb64e0() {
   return (neuron0x1ea7d10()*-0.000123052);
}

double NNfunction_sb_dRcR::synapse0x1eb6520() {
   return (neuron0x1ea8050()*-0.075172);
}

double NNfunction_sb_dRcR::synapse0x1eb6770() {
   return (neuron0x1ea8390()*0.0631422);
}

double NNfunction_sb_dRcR::synapse0x1eb67b0() {
   return (neuron0x1ea86d0()*-0.0804795);
}

double NNfunction_sb_dRcR::synapse0x1eb6a00() {
   return (neuron0x1ea8a10()*0.631418);
}

double NNfunction_sb_dRcR::synapse0x1eb6a40() {
   return (neuron0x1ea8d50()*-0.700836);
}

double NNfunction_sb_dRcR::synapse0x1ec14f0() {
   return (neuron0x1ea9090()*0.0652056);
}

double NNfunction_sb_dRcR::synapse0x1ec1530() {
   return (neuron0x1ea95f0()*-0.0709794);
}

double NNfunction_sb_dRcR::synapse0x1eb6b90() {
   return (neuron0x1ea9930()*-0.322641);
}

double NNfunction_sb_dRcR::synapse0x1eb70a0() {
   return (neuron0x1ea9c70()*0.2318);
}

double NNfunction_sb_dRcR::synapse0x1eb70e0() {
   return (neuron0x1ea9fb0()*0.389297);
}

double NNfunction_sb_dRcR::synapse0x1eb7120() {
   return (neuron0x1eaa2f0()*0.369758);
}

double NNfunction_sb_dRcR::synapse0x1eb7370() {
   return (neuron0x1eaa630()*-0.326472);
}

double NNfunction_sb_dRcR::synapse0x1eb73b0() {
   return (neuron0x1eaa970()*0.224502);
}

double NNfunction_sb_dRcR::synapse0x1eb6c60() {
   return (neuron0x1ea5d20()*0.234868);
}

double NNfunction_sb_dRcR::synapse0x1eb6ca0() {
   return (neuron0x1ea5fd0()*0.101268);
}

double NNfunction_sb_dRcR::synapse0x1eb6ce0() {
   return (neuron0x1ea6310()*0.677627);
}

double NNfunction_sb_dRcR::synapse0x1eb6d20() {
   return (neuron0x1ea6650()*0.437758);
}

double NNfunction_sb_dRcR::synapse0x1eb76a0() {
   return (neuron0x1ea6990()*1.03949);
}

double NNfunction_sb_dRcR::synapse0x1ec39f0() {
   return (neuron0x1ea6cd0()*-0.417079);
}

double NNfunction_sb_dRcR::synapse0x1ec3a30() {
   return (neuron0x1ea7010()*-0.127828);
}

double NNfunction_sb_dRcR::synapse0x1ec3a70() {
   return (neuron0x1ea7350()*0.0843879);
}

double NNfunction_sb_dRcR::synapse0x1ec3ab0() {
   return (neuron0x1ea7690()*0.0882746);
}

double NNfunction_sb_dRcR::synapse0x1ec3af0() {
   return (neuron0x1ea79d0()*0.122054);
}

double NNfunction_sb_dRcR::synapse0x1ec3b30() {
   return (neuron0x1ea7d10()*0.0522251);
}

double NNfunction_sb_dRcR::synapse0x1ec3b70() {
   return (neuron0x1ea8050()*-0.375735);
}

double NNfunction_sb_dRcR::synapse0x1ec3bb0() {
   return (neuron0x1ea8390()*0.738379);
}

double NNfunction_sb_dRcR::synapse0x1ec3bf0() {
   return (neuron0x1ea86d0()*-0.227508);
}

double NNfunction_sb_dRcR::synapse0x1ec3c30() {
   return (neuron0x1ea8a10()*0.978771);
}

double NNfunction_sb_dRcR::synapse0x1ec3c70() {
   return (neuron0x1ea8d50()*0.129257);
}

double NNfunction_sb_dRcR::synapse0x1eb7580() {
   return (neuron0x1ea9090()*-0.282708);
}

double NNfunction_sb_dRcR::synapse0x1eb75c0() {
   return (neuron0x1ea95f0()*0.148815);
}

double NNfunction_sb_dRcR::synapse0x1ec3dc0() {
   return (neuron0x1ea9930()*0.668717);
}

double NNfunction_sb_dRcR::synapse0x1ec3e00() {
   return (neuron0x1ea9c70()*-0.337902);
}

double NNfunction_sb_dRcR::synapse0x1ec3e40() {
   return (neuron0x1ea9fb0()*-0.820686);
}

double NNfunction_sb_dRcR::synapse0x1ec3e80() {
   return (neuron0x1eaa2f0()*-0.459778);
}

double NNfunction_sb_dRcR::synapse0x1ec3ec0() {
   return (neuron0x1eaa630()*-0.302758);
}

double NNfunction_sb_dRcR::synapse0x1ec3f00() {
   return (neuron0x1eaa970()*-0.152668);
}

double NNfunction_sb_dRcR::synapse0x1ec4280() {
   return (neuron0x1ea5d20()*-0.563203);
}

double NNfunction_sb_dRcR::synapse0x1ec42c0() {
   return (neuron0x1ea5fd0()*0.170878);
}

double NNfunction_sb_dRcR::synapse0x1ec4300() {
   return (neuron0x1ea6310()*0.801567);
}

double NNfunction_sb_dRcR::synapse0x1ec4340() {
   return (neuron0x1ea6650()*-1.21996);
}

double NNfunction_sb_dRcR::synapse0x1ec4380() {
   return (neuron0x1ea6990()*0.268333);
}

double NNfunction_sb_dRcR::synapse0x1ec43c0() {
   return (neuron0x1ea6cd0()*0.0999602);
}

double NNfunction_sb_dRcR::synapse0x1ec4400() {
   return (neuron0x1ea7010()*0.0978415);
}

double NNfunction_sb_dRcR::synapse0x1ec4440() {
   return (neuron0x1ea7350()*1.2141);
}

double NNfunction_sb_dRcR::synapse0x1ec4480() {
   return (neuron0x1ea7690()*0.000706908);
}

double NNfunction_sb_dRcR::synapse0x1ec44c0() {
   return (neuron0x1ea79d0()*-0.144295);
}

double NNfunction_sb_dRcR::synapse0x1ec4500() {
   return (neuron0x1ea7d10()*-0.398595);
}

double NNfunction_sb_dRcR::synapse0x1ec4540() {
   return (neuron0x1ea8050()*0.130936);
}

double NNfunction_sb_dRcR::synapse0x1ec4580() {
   return (neuron0x1ea8390()*0.062601);
}

double NNfunction_sb_dRcR::synapse0x1ec45c0() {
   return (neuron0x1ea86d0()*0.317048);
}

double NNfunction_sb_dRcR::synapse0x1ec4600() {
   return (neuron0x1ea8a10()*-0.379854);
}

double NNfunction_sb_dRcR::synapse0x1ec4640() {
   return (neuron0x1ea8d50()*0.453041);
}

double NNfunction_sb_dRcR::synapse0x1ec40d0() {
   return (neuron0x1ea9090()*-0.218425);
}

double NNfunction_sb_dRcR::synapse0x1ec4110() {
   return (neuron0x1ea95f0()*0.0613231);
}

double NNfunction_sb_dRcR::synapse0x1ec4790() {
   return (neuron0x1ea9930()*0.171739);
}

double NNfunction_sb_dRcR::synapse0x1ec47d0() {
   return (neuron0x1ea9c70()*0.00744771);
}

double NNfunction_sb_dRcR::synapse0x1ec4810() {
   return (neuron0x1ea9fb0()*0.532365);
}

double NNfunction_sb_dRcR::synapse0x1ec4850() {
   return (neuron0x1eaa2f0()*-0.553285);
}

double NNfunction_sb_dRcR::synapse0x1ec4890() {
   return (neuron0x1eaa630()*0.533378);
}

double NNfunction_sb_dRcR::synapse0x1ec48d0() {
   return (neuron0x1eaa970()*0.189163);
}

double NNfunction_sb_dRcR::synapse0x1ec4c50() {
   return (neuron0x1ea5d20()*-0.0739054);
}

double NNfunction_sb_dRcR::synapse0x1ec4c90() {
   return (neuron0x1ea5fd0()*-0.245239);
}

double NNfunction_sb_dRcR::synapse0x1ec4cd0() {
   return (neuron0x1ea6310()*-0.604848);
}

double NNfunction_sb_dRcR::synapse0x1ec4d10() {
   return (neuron0x1ea6650()*0.592249);
}

double NNfunction_sb_dRcR::synapse0x1ec4d50() {
   return (neuron0x1ea6990()*0.563339);
}

double NNfunction_sb_dRcR::synapse0x1ec4d90() {
   return (neuron0x1ea6cd0()*0.0441922);
}

double NNfunction_sb_dRcR::synapse0x1ec4dd0() {
   return (neuron0x1ea7010()*-0.0233774);
}

double NNfunction_sb_dRcR::synapse0x1ec4e10() {
   return (neuron0x1ea7350()*1.17362);
}

double NNfunction_sb_dRcR::synapse0x1ec4e50() {
   return (neuron0x1ea7690()*-0.0721201);
}

double NNfunction_sb_dRcR::synapse0x1ec4e90() {
   return (neuron0x1ea79d0()*0.127054);
}

double NNfunction_sb_dRcR::synapse0x1ec4ed0() {
   return (neuron0x1ea7d10()*0.483259);
}

double NNfunction_sb_dRcR::synapse0x1ec4f10() {
   return (neuron0x1ea8050()*-0.101174);
}

double NNfunction_sb_dRcR::synapse0x1ec4f50() {
   return (neuron0x1ea8390()*-0.322637);
}

double NNfunction_sb_dRcR::synapse0x1ec4f90() {
   return (neuron0x1ea86d0()*-0.470975);
}

double NNfunction_sb_dRcR::synapse0x1ec4fd0() {
   return (neuron0x1ea8a10()*0.210615);
}

double NNfunction_sb_dRcR::synapse0x1ec5010() {
   return (neuron0x1ea8d50()*-0.201701);
}

double NNfunction_sb_dRcR::synapse0x1ec4aa0() {
   return (neuron0x1ea9090()*0.147171);
}

double NNfunction_sb_dRcR::synapse0x1ec4ae0() {
   return (neuron0x1ea95f0()*0.357141);
}

double NNfunction_sb_dRcR::synapse0x1ec5160() {
   return (neuron0x1ea9930()*-0.332161);
}

double NNfunction_sb_dRcR::synapse0x1ec51a0() {
   return (neuron0x1ea9c70()*-0.560645);
}

double NNfunction_sb_dRcR::synapse0x1ec51e0() {
   return (neuron0x1ea9fb0()*-0.332722);
}

double NNfunction_sb_dRcR::synapse0x1ec5220() {
   return (neuron0x1eaa2f0()*0.0577287);
}

double NNfunction_sb_dRcR::synapse0x1ec5260() {
   return (neuron0x1eaa630()*-0.138289);
}

double NNfunction_sb_dRcR::synapse0x1ec52a0() {
   return (neuron0x1eaa970()*0.0227631);
}

double NNfunction_sb_dRcR::synapse0x1ec5620() {
   return (neuron0x1ea5d20()*-0.0250209);
}

double NNfunction_sb_dRcR::synapse0x1ec5660() {
   return (neuron0x1ea5fd0()*-0.0311897);
}

double NNfunction_sb_dRcR::synapse0x1ec56a0() {
   return (neuron0x1ea6310()*-0.0321733);
}

double NNfunction_sb_dRcR::synapse0x1ec56e0() {
   return (neuron0x1ea6650()*0.594453);
}

double NNfunction_sb_dRcR::synapse0x1ec5720() {
   return (neuron0x1ea6990()*-0.0260157);
}

double NNfunction_sb_dRcR::synapse0x1ec5760() {
   return (neuron0x1ea6cd0()*-0.0118743);
}

double NNfunction_sb_dRcR::synapse0x1ec57a0() {
   return (neuron0x1ea7010()*0.0428366);
}

double NNfunction_sb_dRcR::synapse0x1ec57e0() {
   return (neuron0x1ea7350()*0.00431905);
}

double NNfunction_sb_dRcR::synapse0x1ec5820() {
   return (neuron0x1ea7690()*0.00874427);
}

double NNfunction_sb_dRcR::synapse0x1ec5860() {
   return (neuron0x1ea79d0()*-0.0312469);
}

double NNfunction_sb_dRcR::synapse0x1ec58a0() {
   return (neuron0x1ea7d10()*0.0176824);
}

double NNfunction_sb_dRcR::synapse0x1ec58e0() {
   return (neuron0x1ea8050()*-0.062782);
}

double NNfunction_sb_dRcR::synapse0x1ec5920() {
   return (neuron0x1ea8390()*-0.0597271);
}

double NNfunction_sb_dRcR::synapse0x1ec5960() {
   return (neuron0x1ea86d0()*-0.00221099);
}

double NNfunction_sb_dRcR::synapse0x1ec59a0() {
   return (neuron0x1ea8a10()*-0.0949915);
}

double NNfunction_sb_dRcR::synapse0x1ec59e0() {
   return (neuron0x1ea8d50()*-0.310357);
}

double NNfunction_sb_dRcR::synapse0x1ec5470() {
   return (neuron0x1ea9090()*-0.00570292);
}

double NNfunction_sb_dRcR::synapse0x1ec54b0() {
   return (neuron0x1ea95f0()*-0.743655);
}

double NNfunction_sb_dRcR::synapse0x1ec5b30() {
   return (neuron0x1ea9930()*-0.0395396);
}

double NNfunction_sb_dRcR::synapse0x1ec5b70() {
   return (neuron0x1ea9c70()*-0.0233532);
}

double NNfunction_sb_dRcR::synapse0x1ec5bb0() {
   return (neuron0x1ea9fb0()*0.0192911);
}

double NNfunction_sb_dRcR::synapse0x1ec5bf0() {
   return (neuron0x1eaa2f0()*-0.0143263);
}

double NNfunction_sb_dRcR::synapse0x1ec5c30() {
   return (neuron0x1eaa630()*-0.0179629);
}

double NNfunction_sb_dRcR::synapse0x1ec5c70() {
   return (neuron0x1eaa970()*0.0197915);
}

double NNfunction_sb_dRcR::synapse0x1ec5ff0() {
   return (neuron0x1ea5d20()*-0.301922);
}

double NNfunction_sb_dRcR::synapse0x1ec6030() {
   return (neuron0x1ea5fd0()*-0.77254);
}

double NNfunction_sb_dRcR::synapse0x1ec6070() {
   return (neuron0x1ea6310()*0.00810858);
}

double NNfunction_sb_dRcR::synapse0x1ec60b0() {
   return (neuron0x1ea6650()*-0.31584);
}

double NNfunction_sb_dRcR::synapse0x1ec60f0() {
   return (neuron0x1ea6990()*0.0869709);
}

double NNfunction_sb_dRcR::synapse0x1ec6130() {
   return (neuron0x1ea6cd0()*-0.0723413);
}

double NNfunction_sb_dRcR::synapse0x1ec6170() {
   return (neuron0x1ea7010()*-0.114863);
}

double NNfunction_sb_dRcR::synapse0x1ec61b0() {
   return (neuron0x1ea7350()*0.0698118);
}

double NNfunction_sb_dRcR::synapse0x1ec61f0() {
   return (neuron0x1ea7690()*0.426594);
}

double NNfunction_sb_dRcR::synapse0x1ec6230() {
   return (neuron0x1ea79d0()*0.142048);
}

double NNfunction_sb_dRcR::synapse0x1ec6270() {
   return (neuron0x1ea7d10()*0.0558738);
}

double NNfunction_sb_dRcR::synapse0x1ec62b0() {
   return (neuron0x1ea8050()*0.508692);
}

double NNfunction_sb_dRcR::synapse0x1ec62f0() {
   return (neuron0x1ea8390()*-0.141783);
}

double NNfunction_sb_dRcR::synapse0x1ec6330() {
   return (neuron0x1ea86d0()*0.124334);
}

double NNfunction_sb_dRcR::synapse0x1ec6370() {
   return (neuron0x1ea8a10()*0.172255);
}

double NNfunction_sb_dRcR::synapse0x1ec63b0() {
   return (neuron0x1ea8d50()*-0.264058);
}

double NNfunction_sb_dRcR::synapse0x1ec5e40() {
   return (neuron0x1ea9090()*0.126434);
}

double NNfunction_sb_dRcR::synapse0x1ec5e80() {
   return (neuron0x1ea95f0()*0.579962);
}

double NNfunction_sb_dRcR::synapse0x1ec6500() {
   return (neuron0x1ea9930()*-0.534481);
}

double NNfunction_sb_dRcR::synapse0x1ec6540() {
   return (neuron0x1ea9c70()*0.0575663);
}

double NNfunction_sb_dRcR::synapse0x1ec6580() {
   return (neuron0x1ea9fb0()*-0.0756416);
}

double NNfunction_sb_dRcR::synapse0x1ec65c0() {
   return (neuron0x1eaa2f0()*0.0361393);
}

double NNfunction_sb_dRcR::synapse0x1ec6600() {
   return (neuron0x1eaa630()*-0.016983);
}

double NNfunction_sb_dRcR::synapse0x1ec6640() {
   return (neuron0x1eaa970()*-0.380851);
}

double NNfunction_sb_dRcR::synapse0x1ec69c0() {
   return (neuron0x1ea5d20()*0.551387);
}

double NNfunction_sb_dRcR::synapse0x1ec6a00() {
   return (neuron0x1ea5fd0()*0.0539723);
}

double NNfunction_sb_dRcR::synapse0x1ec6a40() {
   return (neuron0x1ea6310()*-0.0472364);
}

double NNfunction_sb_dRcR::synapse0x1ec6a80() {
   return (neuron0x1ea6650()*0.297259);
}

double NNfunction_sb_dRcR::synapse0x1ec6ac0() {
   return (neuron0x1ea6990()*-0.0333095);
}

double NNfunction_sb_dRcR::synapse0x1ec6b00() {
   return (neuron0x1ea6cd0()*0.14931);
}

double NNfunction_sb_dRcR::synapse0x1ec6b40() {
   return (neuron0x1ea7010()*-0.133535);
}

double NNfunction_sb_dRcR::synapse0x1ec6b80() {
   return (neuron0x1ea7350()*-0.274794);
}

double NNfunction_sb_dRcR::synapse0x1ec6bc0() {
   return (neuron0x1ea7690()*0.342623);
}

double NNfunction_sb_dRcR::synapse0x1ec6c00() {
   return (neuron0x1ea79d0()*-0.118652);
}

double NNfunction_sb_dRcR::synapse0x1ec6c40() {
   return (neuron0x1ea7d10()*0.0982376);
}

double NNfunction_sb_dRcR::synapse0x1ec6c80() {
   return (neuron0x1ea8050()*-0.163502);
}

double NNfunction_sb_dRcR::synapse0x1ec6cc0() {
   return (neuron0x1ea8390()*0.389625);
}

double NNfunction_sb_dRcR::synapse0x1ec6d00() {
   return (neuron0x1ea86d0()*0.186099);
}

double NNfunction_sb_dRcR::synapse0x1ec6d40() {
   return (neuron0x1ea8a10()*0.0141126);
}

double NNfunction_sb_dRcR::synapse0x1ec6d80() {
   return (neuron0x1ea8d50()*0.464178);
}

double NNfunction_sb_dRcR::synapse0x1ec6810() {
   return (neuron0x1ea9090()*0.210662);
}

double NNfunction_sb_dRcR::synapse0x1ec6850() {
   return (neuron0x1ea95f0()*0.85715);
}

double NNfunction_sb_dRcR::synapse0x1ec6ed0() {
   return (neuron0x1ea9930()*0.556964);
}

double NNfunction_sb_dRcR::synapse0x1ec6f10() {
   return (neuron0x1ea9c70()*-0.0495256);
}

double NNfunction_sb_dRcR::synapse0x1ec6f50() {
   return (neuron0x1ea9fb0()*-0.137276);
}

double NNfunction_sb_dRcR::synapse0x1ec6f90() {
   return (neuron0x1eaa2f0()*0.363489);
}

double NNfunction_sb_dRcR::synapse0x1ec6fd0() {
   return (neuron0x1eaa630()*0.0521367);
}

double NNfunction_sb_dRcR::synapse0x1ec7010() {
   return (neuron0x1eaa970()*0.386252);
}

double NNfunction_sb_dRcR::synapse0x1ec7390() {
   return (neuron0x1ea5d20()*-0.195106);
}

double NNfunction_sb_dRcR::synapse0x1ec73d0() {
   return (neuron0x1ea5fd0()*-0.28175);
}

double NNfunction_sb_dRcR::synapse0x1ec7410() {
   return (neuron0x1ea6310()*0.40543);
}

double NNfunction_sb_dRcR::synapse0x1ec7450() {
   return (neuron0x1ea6650()*-0.374618);
}

double NNfunction_sb_dRcR::synapse0x1ec7490() {
   return (neuron0x1ea6990()*-0.272706);
}

double NNfunction_sb_dRcR::synapse0x1ec74d0() {
   return (neuron0x1ea6cd0()*-0.289213);
}

double NNfunction_sb_dRcR::synapse0x1ec7510() {
   return (neuron0x1ea7010()*-0.637323);
}

double NNfunction_sb_dRcR::synapse0x1ec7550() {
   return (neuron0x1ea7350()*0.166417);
}

double NNfunction_sb_dRcR::synapse0x1ec7590() {
   return (neuron0x1ea7690()*0.0637178);
}

double NNfunction_sb_dRcR::synapse0x1ec75d0() {
   return (neuron0x1ea79d0()*0.311232);
}

double NNfunction_sb_dRcR::synapse0x1ec7610() {
   return (neuron0x1ea7d10()*0.610238);
}

double NNfunction_sb_dRcR::synapse0x1ec7650() {
   return (neuron0x1ea8050()*0.528802);
}

double NNfunction_sb_dRcR::synapse0x1ec7690() {
   return (neuron0x1ea8390()*0.185548);
}

double NNfunction_sb_dRcR::synapse0x1ec76d0() {
   return (neuron0x1ea86d0()*0.344536);
}

double NNfunction_sb_dRcR::synapse0x1ec7710() {
   return (neuron0x1ea8a10()*-0.506791);
}

double NNfunction_sb_dRcR::synapse0x1ec7750() {
   return (neuron0x1ea8d50()*0.911129);
}

double NNfunction_sb_dRcR::synapse0x1ec71e0() {
   return (neuron0x1ea9090()*-0.176444);
}

double NNfunction_sb_dRcR::synapse0x1ec7220() {
   return (neuron0x1ea95f0()*0.460575);
}

double NNfunction_sb_dRcR::synapse0x1ec78a0() {
   return (neuron0x1ea9930()*-0.0650008);
}

double NNfunction_sb_dRcR::synapse0x1ec78e0() {
   return (neuron0x1ea9c70()*0.174383);
}

double NNfunction_sb_dRcR::synapse0x1ec7920() {
   return (neuron0x1ea9fb0()*0.426146);
}

double NNfunction_sb_dRcR::synapse0x1ec7960() {
   return (neuron0x1eaa2f0()*0.460202);
}

double NNfunction_sb_dRcR::synapse0x1ec79a0() {
   return (neuron0x1eaa630()*0.542081);
}

double NNfunction_sb_dRcR::synapse0x1ec79e0() {
   return (neuron0x1eaa970()*-0.103616);
}

double NNfunction_sb_dRcR::synapse0x1ec7d60() {
   return (neuron0x1ea5d20()*0.00829443);
}

double NNfunction_sb_dRcR::synapse0x1ec7da0() {
   return (neuron0x1ea5fd0()*0.0242657);
}

double NNfunction_sb_dRcR::synapse0x1ec7de0() {
   return (neuron0x1ea6310()*-0.0021215);
}

double NNfunction_sb_dRcR::synapse0x1ec7e20() {
   return (neuron0x1ea6650()*0.175008);
}

double NNfunction_sb_dRcR::synapse0x1ec7e60() {
   return (neuron0x1ea6990()*-0.0338164);
}

double NNfunction_sb_dRcR::synapse0x1ec7ea0() {
   return (neuron0x1ea6cd0()*-0.014728);
}

double NNfunction_sb_dRcR::synapse0x1ec7ee0() {
   return (neuron0x1ea7010()*0.0125923);
}

double NNfunction_sb_dRcR::synapse0x1ec7f20() {
   return (neuron0x1ea7350()*-0.00956806);
}

double NNfunction_sb_dRcR::synapse0x1ec7f60() {
   return (neuron0x1ea7690()*0.0150649);
}

double NNfunction_sb_dRcR::synapse0x1ec7fa0() {
   return (neuron0x1ea79d0()*-0.016117);
}

double NNfunction_sb_dRcR::synapse0x1ec7fe0() {
   return (neuron0x1ea7d10()*0.0349914);
}

double NNfunction_sb_dRcR::synapse0x1ec8020() {
   return (neuron0x1ea8050()*-0.0466352);
}

double NNfunction_sb_dRcR::synapse0x1ec8060() {
   return (neuron0x1ea8390()*-0.0534658);
}

double NNfunction_sb_dRcR::synapse0x1ec80a0() {
   return (neuron0x1ea86d0()*-0.0042228);
}

double NNfunction_sb_dRcR::synapse0x1ec80e0() {
   return (neuron0x1ea8a10()*-0.106596);
}

double NNfunction_sb_dRcR::synapse0x1ec8120() {
   return (neuron0x1ea8d50()*-0.45226);
}

double NNfunction_sb_dRcR::synapse0x1ec7bb0() {
   return (neuron0x1ea9090()*-0.0148762);
}

double NNfunction_sb_dRcR::synapse0x1ec7bf0() {
   return (neuron0x1ea95f0()*-1.14262);
}

double NNfunction_sb_dRcR::synapse0x1ec8270() {
   return (neuron0x1ea9930()*-0.0169337);
}

double NNfunction_sb_dRcR::synapse0x1ec82b0() {
   return (neuron0x1ea9c70()*-0.0270597);
}

double NNfunction_sb_dRcR::synapse0x1ec82f0() {
   return (neuron0x1ea9fb0()*0.00736918);
}

double NNfunction_sb_dRcR::synapse0x1ec8330() {
   return (neuron0x1eaa2f0()*0.00733968);
}

double NNfunction_sb_dRcR::synapse0x1ec8370() {
   return (neuron0x1eaa630()*-0.025532);
}

double NNfunction_sb_dRcR::synapse0x1ec83b0() {
   return (neuron0x1eaa970()*0.0070367);
}

double NNfunction_sb_dRcR::synapse0x1eb0e60() {
   return (neuron0x1ea5d20()*0.332673);
}

double NNfunction_sb_dRcR::synapse0x1eb0ea0() {
   return (neuron0x1ea5fd0()*0.198609);
}

double NNfunction_sb_dRcR::synapse0x1eb0ee0() {
   return (neuron0x1ea6310()*-0.150664);
}

double NNfunction_sb_dRcR::synapse0x1eb0f20() {
   return (neuron0x1ea6650()*-0.29722);
}

double NNfunction_sb_dRcR::synapse0x1eb0f60() {
   return (neuron0x1ea6990()*-0.160344);
}

double NNfunction_sb_dRcR::synapse0x1eb0fa0() {
   return (neuron0x1ea6cd0()*-0.366173);
}

double NNfunction_sb_dRcR::synapse0x1eb0fe0() {
   return (neuron0x1ea7010()*0.393935);
}

double NNfunction_sb_dRcR::synapse0x1eb1020() {
   return (neuron0x1ea7350()*-0.443892);
}

double NNfunction_sb_dRcR::synapse0x1ec8b40() {
   return (neuron0x1ea7690()*-0.309737);
}

double NNfunction_sb_dRcR::synapse0x1ec8b80() {
   return (neuron0x1ea79d0()*-0.080889);
}

double NNfunction_sb_dRcR::synapse0x1ec8bc0() {
   return (neuron0x1ea7d10()*0.0309014);
}

double NNfunction_sb_dRcR::synapse0x1ec8c00() {
   return (neuron0x1ea8050()*0.0174813);
}

double NNfunction_sb_dRcR::synapse0x1ec8c40() {
   return (neuron0x1ea8390()*-0.243643);
}

double NNfunction_sb_dRcR::synapse0x1ec8c80() {
   return (neuron0x1ea86d0()*0.0170074);
}

double NNfunction_sb_dRcR::synapse0x1ec8cc0() {
   return (neuron0x1ea8a10()*-0.271464);
}

double NNfunction_sb_dRcR::synapse0x1ec8d00() {
   return (neuron0x1ea8d50()*-0.184435);
}

double NNfunction_sb_dRcR::synapse0x1ec8580() {
   return (neuron0x1ea9090()*0.0276988);
}

double NNfunction_sb_dRcR::synapse0x1ec85c0() {
   return (neuron0x1ea95f0()*1.47062);
}

double NNfunction_sb_dRcR::synapse0x1ec8e50() {
   return (neuron0x1ea9930()*0.296138);
}

double NNfunction_sb_dRcR::synapse0x1ec8e90() {
   return (neuron0x1ea9c70()*-0.0320361);
}

double NNfunction_sb_dRcR::synapse0x1ec8ed0() {
   return (neuron0x1ea9fb0()*0.258335);
}

double NNfunction_sb_dRcR::synapse0x1ec8f10() {
   return (neuron0x1eaa2f0()*0.449198);
}

double NNfunction_sb_dRcR::synapse0x1ec8f50() {
   return (neuron0x1eaa630()*0.206799);
}

double NNfunction_sb_dRcR::synapse0x1ec8f90() {
   return (neuron0x1eaa970()*0.557573);
}

double NNfunction_sb_dRcR::synapse0x1ec9310() {
   return (neuron0x1ea5d20()*-0.150925);
}

double NNfunction_sb_dRcR::synapse0x1ec9350() {
   return (neuron0x1ea5fd0()*-0.503906);
}

double NNfunction_sb_dRcR::synapse0x1ec9390() {
   return (neuron0x1ea6310()*-0.19164);
}

double NNfunction_sb_dRcR::synapse0x1ec93d0() {
   return (neuron0x1ea6650()*0.311181);
}

double NNfunction_sb_dRcR::synapse0x1ec9410() {
   return (neuron0x1ea6990()*0.264072);
}

double NNfunction_sb_dRcR::synapse0x1ec9450() {
   return (neuron0x1ea6cd0()*0.55088);
}

double NNfunction_sb_dRcR::synapse0x1ec9490() {
   return (neuron0x1ea7010()*-0.237612);
}

double NNfunction_sb_dRcR::synapse0x1ec94d0() {
   return (neuron0x1ea7350()*-0.263655);
}

double NNfunction_sb_dRcR::synapse0x1ec9510() {
   return (neuron0x1ea7690()*0.429712);
}

double NNfunction_sb_dRcR::synapse0x1ec9550() {
   return (neuron0x1ea79d0()*-0.017399);
}

double NNfunction_sb_dRcR::synapse0x1ec9590() {
   return (neuron0x1ea7d10()*0.17778);
}

double NNfunction_sb_dRcR::synapse0x1ec95d0() {
   return (neuron0x1ea8050()*0.0790843);
}

double NNfunction_sb_dRcR::synapse0x1ec9610() {
   return (neuron0x1ea8390()*-0.683314);
}

double NNfunction_sb_dRcR::synapse0x1ec9650() {
   return (neuron0x1ea86d0()*1.35554);
}

double NNfunction_sb_dRcR::synapse0x1ec9690() {
   return (neuron0x1ea8a10()*0.2942);
}

double NNfunction_sb_dRcR::synapse0x1ec96d0() {
   return (neuron0x1ea8d50()*-0.807919);
}

double NNfunction_sb_dRcR::synapse0x1ec9160() {
   return (neuron0x1ea9090()*0.483628);
}

double NNfunction_sb_dRcR::synapse0x1ec91a0() {
   return (neuron0x1ea95f0()*0.265523);
}

double NNfunction_sb_dRcR::synapse0x1ec9820() {
   return (neuron0x1ea9930()*-0.490893);
}

double NNfunction_sb_dRcR::synapse0x1ec9860() {
   return (neuron0x1ea9c70()*0.208196);
}

double NNfunction_sb_dRcR::synapse0x1ec98a0() {
   return (neuron0x1ea9fb0()*0.191745);
}

double NNfunction_sb_dRcR::synapse0x1ec98e0() {
   return (neuron0x1eaa2f0()*-0.490566);
}

double NNfunction_sb_dRcR::synapse0x1ec9920() {
   return (neuron0x1eaa630()*0.430608);
}

double NNfunction_sb_dRcR::synapse0x1ec9960() {
   return (neuron0x1eaa970()*-0.216383);
}

double NNfunction_sb_dRcR::synapse0x1ec9ce0() {
   return (neuron0x1ea5d20()*0.245827);
}

double NNfunction_sb_dRcR::synapse0x1ec9d20() {
   return (neuron0x1ea5fd0()*0.79065);
}

double NNfunction_sb_dRcR::synapse0x1ec9d60() {
   return (neuron0x1ea6310()*0.761966);
}

double NNfunction_sb_dRcR::synapse0x1ec9da0() {
   return (neuron0x1ea6650()*-0.580595);
}

double NNfunction_sb_dRcR::synapse0x1ec9de0() {
   return (neuron0x1ea6990()*-0.181763);
}

double NNfunction_sb_dRcR::synapse0x1ec9e20() {
   return (neuron0x1ea6cd0()*0.163693);
}

double NNfunction_sb_dRcR::synapse0x1ec9e60() {
   return (neuron0x1ea7010()*0.215231);
}

double NNfunction_sb_dRcR::synapse0x1ec9ea0() {
   return (neuron0x1ea7350()*0.177843);
}

double NNfunction_sb_dRcR::synapse0x1ec9ee0() {
   return (neuron0x1ea7690()*0.615622);
}

double NNfunction_sb_dRcR::synapse0x1ec9f20() {
   return (neuron0x1ea79d0()*0.106671);
}

double NNfunction_sb_dRcR::synapse0x1ec9f60() {
   return (neuron0x1ea7d10()*-0.450502);
}

double NNfunction_sb_dRcR::synapse0x1ec9fa0() {
   return (neuron0x1ea8050()*0.709536);
}

double NNfunction_sb_dRcR::synapse0x1ec9fe0() {
   return (neuron0x1ea8390()*-0.0348654);
}

double NNfunction_sb_dRcR::synapse0x1eca020() {
   return (neuron0x1ea86d0()*-0.575093);
}

double NNfunction_sb_dRcR::synapse0x1eca060() {
   return (neuron0x1ea8a10()*0.0899739);
}

double NNfunction_sb_dRcR::synapse0x1eca0a0() {
   return (neuron0x1ea8d50()*-0.47767);
}

double NNfunction_sb_dRcR::synapse0x1ec9b30() {
   return (neuron0x1ea9090()*-0.263525);
}

double NNfunction_sb_dRcR::synapse0x1ec9b70() {
   return (neuron0x1ea95f0()*0.198279);
}

double NNfunction_sb_dRcR::synapse0x1eba6a0() {
   return (neuron0x1ea9930()*0.612888);
}

double NNfunction_sb_dRcR::synapse0x1eba6e0() {
   return (neuron0x1ea9c70()*0.983325);
}

double NNfunction_sb_dRcR::synapse0x1eba720() {
   return (neuron0x1ea9fb0()*0.236243);
}

double NNfunction_sb_dRcR::synapse0x1eba760() {
   return (neuron0x1eaa2f0()*0.00176586);
}

double NNfunction_sb_dRcR::synapse0x1eba7a0() {
   return (neuron0x1eaa630()*-0.356209);
}

double NNfunction_sb_dRcR::synapse0x1eba7e0() {
   return (neuron0x1eaa970()*0.957512);
}

double NNfunction_sb_dRcR::synapse0x1ebab60() {
   return (neuron0x1ea5d20()*-0.170658);
}

double NNfunction_sb_dRcR::synapse0x1ebaba0() {
   return (neuron0x1ea5fd0()*0.321175);
}

double NNfunction_sb_dRcR::synapse0x1ebabe0() {
   return (neuron0x1ea6310()*0.460895);
}

double NNfunction_sb_dRcR::synapse0x1ebac20() {
   return (neuron0x1ea6650()*0.614198);
}

double NNfunction_sb_dRcR::synapse0x1ebac60() {
   return (neuron0x1ea6990()*-0.791144);
}

double NNfunction_sb_dRcR::synapse0x1ebaca0() {
   return (neuron0x1ea6cd0()*0.0364409);
}

double NNfunction_sb_dRcR::synapse0x1ebace0() {
   return (neuron0x1ea7010()*-0.0745792);
}

double NNfunction_sb_dRcR::synapse0x1ebad20() {
   return (neuron0x1ea7350()*0.0453282);
}

double NNfunction_sb_dRcR::synapse0x1ebad60() {
   return (neuron0x1ea7690()*0.360412);
}

double NNfunction_sb_dRcR::synapse0x1ebada0() {
   return (neuron0x1ea79d0()*0.168772);
}

double NNfunction_sb_dRcR::synapse0x1ebade0() {
   return (neuron0x1ea7d10()*0.228009);
}

double NNfunction_sb_dRcR::synapse0x1ebae20() {
   return (neuron0x1ea8050()*-0.348105);
}

double NNfunction_sb_dRcR::synapse0x1ebae60() {
   return (neuron0x1ea8390()*-0.190894);
}

double NNfunction_sb_dRcR::synapse0x1ebaea0() {
   return (neuron0x1ea86d0()*0.45436);
}

double NNfunction_sb_dRcR::synapse0x1ebaee0() {
   return (neuron0x1ea8a10()*0.0280101);
}

double NNfunction_sb_dRcR::synapse0x1ebaf20() {
   return (neuron0x1ea8d50()*0.303412);
}

double NNfunction_sb_dRcR::synapse0x1eba9b0() {
   return (neuron0x1ea9090()*0.0441745);
}

double NNfunction_sb_dRcR::synapse0x1eba9f0() {
   return (neuron0x1ea95f0()*0.140534);
}

double NNfunction_sb_dRcR::synapse0x1ebb070() {
   return (neuron0x1ea9930()*-0.172562);
}

double NNfunction_sb_dRcR::synapse0x1ebb0b0() {
   return (neuron0x1ea9c70()*-0.0796793);
}

double NNfunction_sb_dRcR::synapse0x1ebb0f0() {
   return (neuron0x1ea9fb0()*-0.747955);
}

double NNfunction_sb_dRcR::synapse0x1ebb130() {
   return (neuron0x1eaa2f0()*-0.120552);
}

double NNfunction_sb_dRcR::synapse0x1ebb170() {
   return (neuron0x1eaa630()*-0.224214);
}

double NNfunction_sb_dRcR::synapse0x1ebb1b0() {
   return (neuron0x1eaa970()*-0.159722);
}

double NNfunction_sb_dRcR::synapse0x1ebb530() {
   return (neuron0x1ea5d20()*0.442052);
}

double NNfunction_sb_dRcR::synapse0x1ebb570() {
   return (neuron0x1ea5fd0()*0.242361);
}

double NNfunction_sb_dRcR::synapse0x1ebb5b0() {
   return (neuron0x1ea6310()*0.208582);
}

double NNfunction_sb_dRcR::synapse0x1ebb5f0() {
   return (neuron0x1ea6650()*-0.28438);
}

double NNfunction_sb_dRcR::synapse0x1ebb630() {
   return (neuron0x1ea6990()*-0.00296274);
}

double NNfunction_sb_dRcR::synapse0x1ebb670() {
   return (neuron0x1ea6cd0()*0.20918);
}

double NNfunction_sb_dRcR::synapse0x1ebb6b0() {
   return (neuron0x1ea7010()*-0.241693);
}

double NNfunction_sb_dRcR::synapse0x1ebb6f0() {
   return (neuron0x1ea7350()*0.210965);
}

double NNfunction_sb_dRcR::synapse0x1ebb730() {
   return (neuron0x1ea7690()*0.20355);
}

double NNfunction_sb_dRcR::synapse0x1ebb770() {
   return (neuron0x1ea79d0()*-0.449023);
}

double NNfunction_sb_dRcR::synapse0x1ebb7b0() {
   return (neuron0x1ea7d10()*0.907697);
}

double NNfunction_sb_dRcR::synapse0x1ebb7f0() {
   return (neuron0x1ea8050()*-0.0649807);
}

double NNfunction_sb_dRcR::synapse0x1ebb830() {
   return (neuron0x1ea8390()*-0.388712);
}

double NNfunction_sb_dRcR::synapse0x1ebb870() {
   return (neuron0x1ea86d0()*0.225419);
}

double NNfunction_sb_dRcR::synapse0x1ebb8b0() {
   return (neuron0x1ea8a10()*-0.357281);
}

double NNfunction_sb_dRcR::synapse0x1ebb8f0() {
   return (neuron0x1ea8d50()*0.143061);
}

double NNfunction_sb_dRcR::synapse0x1ebb380() {
   return (neuron0x1ea9090()*0.384604);
}

double NNfunction_sb_dRcR::synapse0x1ebb3c0() {
   return (neuron0x1ea95f0()*0.138902);
}

double NNfunction_sb_dRcR::synapse0x1ebba40() {
   return (neuron0x1ea9930()*0.18146);
}

double NNfunction_sb_dRcR::synapse0x1ebba80() {
   return (neuron0x1ea9c70()*-0.366175);
}

double NNfunction_sb_dRcR::synapse0x1ebbac0() {
   return (neuron0x1ea9fb0()*-0.470008);
}

double NNfunction_sb_dRcR::synapse0x1ebbb00() {
   return (neuron0x1eaa2f0()*0.0597334);
}

double NNfunction_sb_dRcR::synapse0x1ebbb40() {
   return (neuron0x1eaa630()*0.34205);
}

double NNfunction_sb_dRcR::synapse0x1ebbb80() {
   return (neuron0x1eaa970()*0.0917969);
}

double NNfunction_sb_dRcR::synapse0x1ebbf00() {
   return (neuron0x1ea5d20()*-0.203797);
}

double NNfunction_sb_dRcR::synapse0x1ebbf40() {
   return (neuron0x1ea5fd0()*0.63112);
}

double NNfunction_sb_dRcR::synapse0x1ebbf80() {
   return (neuron0x1ea6310()*0.225467);
}

double NNfunction_sb_dRcR::synapse0x1ebbfc0() {
   return (neuron0x1ea6650()*1.19041);
}

double NNfunction_sb_dRcR::synapse0x1ebc000() {
   return (neuron0x1ea6990()*0.496035);
}

double NNfunction_sb_dRcR::synapse0x1ebc040() {
   return (neuron0x1ea6cd0()*0.450651);
}

double NNfunction_sb_dRcR::synapse0x1ebc080() {
   return (neuron0x1ea7010()*0.0753905);
}

double NNfunction_sb_dRcR::synapse0x1ebc0c0() {
   return (neuron0x1ea7350()*0.904347);
}

double NNfunction_sb_dRcR::synapse0x1ebc100() {
   return (neuron0x1ea7690()*0.0890959);
}

double NNfunction_sb_dRcR::synapse0x1ebc140() {
   return (neuron0x1ea79d0()*-0.0383976);
}

double NNfunction_sb_dRcR::synapse0x1ebc180() {
   return (neuron0x1ea7d10()*0.15413);
}

double NNfunction_sb_dRcR::synapse0x1ebc1c0() {
   return (neuron0x1ea8050()*0.232034);
}

double NNfunction_sb_dRcR::synapse0x1ebc200() {
   return (neuron0x1ea8390()*0.195857);
}

double NNfunction_sb_dRcR::synapse0x1ebc240() {
   return (neuron0x1ea86d0()*0.287933);
}

double NNfunction_sb_dRcR::synapse0x1ebc280() {
   return (neuron0x1ea8a10()*-0.369296);
}

double NNfunction_sb_dRcR::synapse0x1ebc2c0() {
   return (neuron0x1ea8d50()*-0.0331569);
}

double NNfunction_sb_dRcR::synapse0x1ebbd50() {
   return (neuron0x1ea9090()*-0.0552176);
}

double NNfunction_sb_dRcR::synapse0x1ebbd90() {
   return (neuron0x1ea95f0()*-0.114893);
}

double NNfunction_sb_dRcR::synapse0x1ebc410() {
   return (neuron0x1ea9930()*0.678096);
}

double NNfunction_sb_dRcR::synapse0x1ebc450() {
   return (neuron0x1ea9c70()*0.0522072);
}

double NNfunction_sb_dRcR::synapse0x1ebc490() {
   return (neuron0x1ea9fb0()*0.212655);
}

double NNfunction_sb_dRcR::synapse0x1ebc4d0() {
   return (neuron0x1eaa2f0()*-0.421933);
}

double NNfunction_sb_dRcR::synapse0x1ebc510() {
   return (neuron0x1eaa630()*-0.140093);
}

double NNfunction_sb_dRcR::synapse0x1ebc550() {
   return (neuron0x1eaa970()*0.209217);
}

double NNfunction_sb_dRcR::synapse0x1ece420() {
   return (neuron0x1ea5d20()*-0.075833);
}

double NNfunction_sb_dRcR::synapse0x1ece460() {
   return (neuron0x1ea5fd0()*0.0964868);
}

double NNfunction_sb_dRcR::synapse0x1ece4a0() {
   return (neuron0x1ea6310()*-0.0885796);
}

double NNfunction_sb_dRcR::synapse0x1ece4e0() {
   return (neuron0x1ea6650()*0.158571);
}

double NNfunction_sb_dRcR::synapse0x1ece520() {
   return (neuron0x1ea6990()*-0.0139974);
}

double NNfunction_sb_dRcR::synapse0x1ece560() {
   return (neuron0x1ea6cd0()*0.438107);
}

double NNfunction_sb_dRcR::synapse0x1ece5a0() {
   return (neuron0x1ea7010()*-0.179993);
}

double NNfunction_sb_dRcR::synapse0x1ece5e0() {
   return (neuron0x1ea7350()*-1.17187);
}

double NNfunction_sb_dRcR::synapse0x1ece620() {
   return (neuron0x1ea7690()*-0.132103);
}

double NNfunction_sb_dRcR::synapse0x1ece660() {
   return (neuron0x1ea79d0()*-0.455175);
}

double NNfunction_sb_dRcR::synapse0x1ece6a0() {
   return (neuron0x1ea7d10()*-0.334847);
}

double NNfunction_sb_dRcR::synapse0x1ece6e0() {
   return (neuron0x1ea8050()*0.110752);
}

double NNfunction_sb_dRcR::synapse0x1ece720() {
   return (neuron0x1ea8390()*-0.13893);
}

double NNfunction_sb_dRcR::synapse0x1ece760() {
   return (neuron0x1ea86d0()*-0.410995);
}

double NNfunction_sb_dRcR::synapse0x1ece7a0() {
   return (neuron0x1ea8a10()*-0.0822451);
}

double NNfunction_sb_dRcR::synapse0x1ece7e0() {
   return (neuron0x1ea8d50()*-0.190884);
}

double NNfunction_sb_dRcR::synapse0x1ebc590() {
   return (neuron0x1ea9090()*0.365644);
}

double NNfunction_sb_dRcR::synapse0x1ebc5d0() {
   return (neuron0x1ea95f0()*-0.271864);
}

double NNfunction_sb_dRcR::synapse0x1ece930() {
   return (neuron0x1ea9930()*-0.245697);
}

double NNfunction_sb_dRcR::synapse0x1ece970() {
   return (neuron0x1ea9c70()*-0.462977);
}

double NNfunction_sb_dRcR::synapse0x1ece9b0() {
   return (neuron0x1ea9fb0()*0.0611497);
}

double NNfunction_sb_dRcR::synapse0x1ece9f0() {
   return (neuron0x1eaa2f0()*0.161067);
}

double NNfunction_sb_dRcR::synapse0x1ecea30() {
   return (neuron0x1eaa630()*-0.198044);
}

double NNfunction_sb_dRcR::synapse0x1ecea70() {
   return (neuron0x1eaa970()*-0.0846182);
}

double NNfunction_sb_dRcR::synapse0x1ecedf0() {
   return (neuron0x1ea5d20()*-0.573022);
}

double NNfunction_sb_dRcR::synapse0x1ecee30() {
   return (neuron0x1ea5fd0()*1.63646);
}

double NNfunction_sb_dRcR::synapse0x1ecee70() {
   return (neuron0x1ea6310()*-0.0110938);
}

double NNfunction_sb_dRcR::synapse0x1eceeb0() {
   return (neuron0x1ea6650()*-0.525013);
}

double NNfunction_sb_dRcR::synapse0x1eceef0() {
   return (neuron0x1ea6990()*-0.634724);
}

double NNfunction_sb_dRcR::synapse0x1ecef30() {
   return (neuron0x1ea6cd0()*0.521661);
}

double NNfunction_sb_dRcR::synapse0x1ecef70() {
   return (neuron0x1ea7010()*0.0667369);
}

double NNfunction_sb_dRcR::synapse0x1ecefb0() {
   return (neuron0x1ea7350()*0.224058);
}

double NNfunction_sb_dRcR::synapse0x1eceff0() {
   return (neuron0x1ea7690()*-0.0345247);
}

double NNfunction_sb_dRcR::synapse0x1ecf030() {
   return (neuron0x1ea79d0()*0.213684);
}

double NNfunction_sb_dRcR::synapse0x1ecf070() {
   return (neuron0x1ea7d10()*-0.473599);
}

double NNfunction_sb_dRcR::synapse0x1ecf0b0() {
   return (neuron0x1ea8050()*0.189605);
}

double NNfunction_sb_dRcR::synapse0x1ecf0f0() {
   return (neuron0x1ea8390()*0.210487);
}

double NNfunction_sb_dRcR::synapse0x1ecf130() {
   return (neuron0x1ea86d0()*-0.0555965);
}

double NNfunction_sb_dRcR::synapse0x1ecf170() {
   return (neuron0x1ea8a10()*-0.234431);
}

double NNfunction_sb_dRcR::synapse0x1ecf1b0() {
   return (neuron0x1ea8d50()*0.0744591);
}

double NNfunction_sb_dRcR::synapse0x1ecec40() {
   return (neuron0x1ea9090()*0.0797721);
}

double NNfunction_sb_dRcR::synapse0x1ecec80() {
   return (neuron0x1ea95f0()*0.646745);
}

double NNfunction_sb_dRcR::synapse0x1ecf300() {
   return (neuron0x1ea9930()*0.565087);
}

double NNfunction_sb_dRcR::synapse0x1ecf340() {
   return (neuron0x1ea9c70()*-0.100963);
}

double NNfunction_sb_dRcR::synapse0x1ecf380() {
   return (neuron0x1ea9fb0()*0.0941871);
}

double NNfunction_sb_dRcR::synapse0x1ecf3c0() {
   return (neuron0x1eaa2f0()*-0.450245);
}

double NNfunction_sb_dRcR::synapse0x1ecf400() {
   return (neuron0x1eaa630()*-0.554519);
}

double NNfunction_sb_dRcR::synapse0x1ecf440() {
   return (neuron0x1eaa970()*0.285946);
}

double NNfunction_sb_dRcR::synapse0x1ecf7c0() {
   return (neuron0x1ea5d20()*0.412294);
}

double NNfunction_sb_dRcR::synapse0x1ecf800() {
   return (neuron0x1ea5fd0()*-0.627464);
}

double NNfunction_sb_dRcR::synapse0x1ecf840() {
   return (neuron0x1ea6310()*-0.0203635);
}

double NNfunction_sb_dRcR::synapse0x1ecf880() {
   return (neuron0x1ea6650()*-0.582361);
}

double NNfunction_sb_dRcR::synapse0x1ecf8c0() {
   return (neuron0x1ea6990()*0.674272);
}

double NNfunction_sb_dRcR::synapse0x1ecf900() {
   return (neuron0x1ea6cd0()*0.214977);
}

double NNfunction_sb_dRcR::synapse0x1ecf940() {
   return (neuron0x1ea7010()*-0.134181);
}

double NNfunction_sb_dRcR::synapse0x1ecf980() {
   return (neuron0x1ea7350()*-0.223197);
}

double NNfunction_sb_dRcR::synapse0x1ecf9c0() {
   return (neuron0x1ea7690()*0.498067);
}

double NNfunction_sb_dRcR::synapse0x1ecfa00() {
   return (neuron0x1ea79d0()*-0.469178);
}

double NNfunction_sb_dRcR::synapse0x1ecfa40() {
   return (neuron0x1ea7d10()*0.0159542);
}

double NNfunction_sb_dRcR::synapse0x1ecfa80() {
   return (neuron0x1ea8050()*-0.0906678);
}

double NNfunction_sb_dRcR::synapse0x1ecfac0() {
   return (neuron0x1ea8390()*-0.131523);
}

double NNfunction_sb_dRcR::synapse0x1ecfb00() {
   return (neuron0x1ea86d0()*-0.395907);
}

double NNfunction_sb_dRcR::synapse0x1ecfb40() {
   return (neuron0x1ea8a10()*0.219141);
}

double NNfunction_sb_dRcR::synapse0x1ecfb80() {
   return (neuron0x1ea8d50()*0.792737);
}

double NNfunction_sb_dRcR::synapse0x1ecf610() {
   return (neuron0x1ea9090()*0.311883);
}

double NNfunction_sb_dRcR::synapse0x1ecf650() {
   return (neuron0x1ea95f0()*-0.505985);
}

double NNfunction_sb_dRcR::synapse0x1ecfcd0() {
   return (neuron0x1ea9930()*0.511917);
}

double NNfunction_sb_dRcR::synapse0x1ecfd10() {
   return (neuron0x1ea9c70()*0.317566);
}

double NNfunction_sb_dRcR::synapse0x1ecfd50() {
   return (neuron0x1ea9fb0()*-0.160936);
}

double NNfunction_sb_dRcR::synapse0x1ecfd90() {
   return (neuron0x1eaa2f0()*-0.0396769);
}

double NNfunction_sb_dRcR::synapse0x1ecfdd0() {
   return (neuron0x1eaa630()*-0.227498);
}

double NNfunction_sb_dRcR::synapse0x1ecfe10() {
   return (neuron0x1eaa970()*0.163581);
}

double NNfunction_sb_dRcR::synapse0x1ed0190() {
   return (neuron0x1ea5d20()*0.141727);
}

double NNfunction_sb_dRcR::synapse0x1ed01d0() {
   return (neuron0x1ea5fd0()*-0.0696787);
}

double NNfunction_sb_dRcR::synapse0x1ed0210() {
   return (neuron0x1ea6310()*0.0464194);
}

double NNfunction_sb_dRcR::synapse0x1ed0250() {
   return (neuron0x1ea6650()*0.32208);
}

double NNfunction_sb_dRcR::synapse0x1ed0290() {
   return (neuron0x1ea6990()*0.476394);
}

double NNfunction_sb_dRcR::synapse0x1ed02d0() {
   return (neuron0x1ea6cd0()*0.0518666);
}

double NNfunction_sb_dRcR::synapse0x1ed0310() {
   return (neuron0x1ea7010()*-0.147792);
}

double NNfunction_sb_dRcR::synapse0x1ed0350() {
   return (neuron0x1ea7350()*-0.384137);
}

double NNfunction_sb_dRcR::synapse0x1ed0390() {
   return (neuron0x1ea7690()*0.377261);
}

double NNfunction_sb_dRcR::synapse0x1ed03d0() {
   return (neuron0x1ea79d0()*0.398079);
}

double NNfunction_sb_dRcR::synapse0x1ed0410() {
   return (neuron0x1ea7d10()*-0.274744);
}

double NNfunction_sb_dRcR::synapse0x1ed0450() {
   return (neuron0x1ea8050()*0.00481813);
}

double NNfunction_sb_dRcR::synapse0x1ed0490() {
   return (neuron0x1ea8390()*-0.845285);
}

double NNfunction_sb_dRcR::synapse0x1ed04d0() {
   return (neuron0x1ea86d0()*-0.669635);
}

double NNfunction_sb_dRcR::synapse0x1ed0510() {
   return (neuron0x1ea8a10()*-0.802433);
}

double NNfunction_sb_dRcR::synapse0x1ed0550() {
   return (neuron0x1ea8d50()*1.61306);
}

double NNfunction_sb_dRcR::synapse0x1ecffe0() {
   return (neuron0x1ea9090()*0.158747);
}

double NNfunction_sb_dRcR::synapse0x1ed0020() {
   return (neuron0x1ea95f0()*1.71262);
}

double NNfunction_sb_dRcR::synapse0x1ed06a0() {
   return (neuron0x1ea9930()*0.0330799);
}

double NNfunction_sb_dRcR::synapse0x1ed06e0() {
   return (neuron0x1ea9c70()*0.291466);
}

double NNfunction_sb_dRcR::synapse0x1ed0720() {
   return (neuron0x1ea9fb0()*-0.144003);
}

double NNfunction_sb_dRcR::synapse0x1ed0760() {
   return (neuron0x1eaa2f0()*-0.171023);
}

double NNfunction_sb_dRcR::synapse0x1ed07a0() {
   return (neuron0x1eaa630()*0.0518135);
}

double NNfunction_sb_dRcR::synapse0x1ed07e0() {
   return (neuron0x1eaa970()*0.185652);
}

double NNfunction_sb_dRcR::synapse0x1c70650() {
   return (neuron0x1eaade0()*2.47367);
}

double NNfunction_sb_dRcR::synapse0x1c70690() {
   return (neuron0x1eab620()*-0.260616);
}

double NNfunction_sb_dRcR::synapse0x1ead190() {
   return (neuron0x1eac100()*0.270804);
}

double NNfunction_sb_dRcR::synapse0x1ead1d0() {
   return (neuron0x1eabba0()*0.0815209);
}

double NNfunction_sb_dRcR::synapse0x1eaec60() {
   return (neuron0x1eacee0()*0.329592);
}

double NNfunction_sb_dRcR::synapse0x1eaeca0() {
   return (neuron0x1eae9b0()*-0.622452);
}

double NNfunction_sb_dRcR::synapse0x1eafa30() {
   return (neuron0x1eaf780()*0.145587);
}

double NNfunction_sb_dRcR::synapse0x1eafa70() {
   return (neuron0x1eb0150()*-0.0220475);
}

double NNfunction_sb_dRcR::synapse0x1eb0400() {
   return (neuron0x1eb0b20()*0.0568262);
}

double NNfunction_sb_dRcR::synapse0x1eb0440() {
   return (neuron0x1eb1600()*-0.765667);
}

double NNfunction_sb_dRcR::synapse0x1eb0dd0() {
   return (neuron0x1eb1fd0()*0.283902);
}

double NNfunction_sb_dRcR::synapse0x1eb0e10() {
   return (neuron0x1eaf0b0()*1.57842);
}

double NNfunction_sb_dRcR::synapse0x1eb18b0() {
   return (neuron0x1eb3b80()*-0.0595343);
}

double NNfunction_sb_dRcR::synapse0x1eb18f0() {
   return (neuron0x1eb4550()*-1.2153);
}

double NNfunction_sb_dRcR::synapse0x1eb2280() {
   return (neuron0x1eb4f20()*0.548741);
}

double NNfunction_sb_dRcR::synapse0x1eb22c0() {
   return (neuron0x1eb58f0()*0.218816);
}

double NNfunction_sb_dRcR::synapse0x1eaf360() {
   return (neuron0x1eb7700()*-0.276958);
}

double NNfunction_sb_dRcR::synapse0x1eaf3a0() {
   return (neuron0x1eb79e0()*-0.066133);
}

double NNfunction_sb_dRcR::synapse0x1eb3e30() {
   return (neuron0x1eb83b0()*-0.00467965);
}

double NNfunction_sb_dRcR::synapse0x1eb3e70() {
   return (neuron0x1eb8d80()*0.0366567);
}

double NNfunction_sb_dRcR::synapse0x1eb4800() {
   return (neuron0x1eb9750()*0.207476);
}

double NNfunction_sb_dRcR::synapse0x1eb4840() {
   return (neuron0x1eba120()*-1.83418);
}

double NNfunction_sb_dRcR::synapse0x1eb51d0() {
   return (neuron0x1eb2c70()*-0.158691);
}

double NNfunction_sb_dRcR::synapse0x1eb5210() {
   return (neuron0x1eb3640()*0.0130699);
}

double NNfunction_sb_dRcR::synapse0x1eb5ba0() {
   return (neuron0x1ebceb0()*0.468338);
}

double NNfunction_sb_dRcR::synapse0x1eb5be0() {
   return (neuron0x1ebd880()*-0.342144);
}

double NNfunction_sb_dRcR::synapse0x1ea8c30() {
   return (neuron0x1ebe250()*0.112995);
}

double NNfunction_sb_dRcR::synapse0x1ea8c70() {
   return (neuron0x1ebec20()*-2.27668);
}

double NNfunction_sb_dRcR::synapse0x1eb7c90() {
   return (neuron0x1ebf5f0()*0.535137);
}

double NNfunction_sb_dRcR::synapse0x1eb7cd0() {
   return (neuron0x1ebffc0()*0.0946747);
}

double NNfunction_sb_dRcR::synapse0x1eb8660() {
   return (neuron0x1ec0990()*0.347551);
}

double NNfunction_sb_dRcR::synapse0x1eb86a0() {
   return (neuron0x1ec1360()*-0.208845);
}

double NNfunction_sb_dRcR::synapse0x1eb9030() {
   return (neuron0x1eb73f0()*0.360704);
}

double NNfunction_sb_dRcR::synapse0x1eb9070() {
   return (neuron0x1ec3f40()*0.171026);
}

double NNfunction_sb_dRcR::synapse0x1eb9a00() {
   return (neuron0x1ec4910()*-0.0981377);
}

double NNfunction_sb_dRcR::synapse0x1eb9a40() {
   return (neuron0x1ec52e0()*-0.870587);
}

double NNfunction_sb_dRcR::synapse0x1eba3d0() {
   return (neuron0x1ec5cb0()*-0.181894);
}

double NNfunction_sb_dRcR::synapse0x1eba410() {
   return (neuron0x1ec6680()*-0.672254);
}

double NNfunction_sb_dRcR::synapse0x1eb2f20() {
   return (neuron0x1ec7050()*0.300594);
}

double NNfunction_sb_dRcR::synapse0x1eb2f60() {
   return (neuron0x1ec7a20()*0.771505);
}

double NNfunction_sb_dRcR::synapse0x1ebc7d0() {
   return (neuron0x1ec83f0()*0.144025);
}

double NNfunction_sb_dRcR::synapse0x1ebc810() {
   return (neuron0x1ec8fd0()*0.158682);
}

double NNfunction_sb_dRcR::synapse0x1ebd160() {
   return (neuron0x1ec99a0()*0.333996);
}

double NNfunction_sb_dRcR::synapse0x1ebd1a0() {
   return (neuron0x1eba820()*-0.351319);
}

double NNfunction_sb_dRcR::synapse0x1ebdb30() {
   return (neuron0x1ebb1f0()*-0.164733);
}

double NNfunction_sb_dRcR::synapse0x1ebdb70() {
   return (neuron0x1ebbbc0()*0.134084);
}

double NNfunction_sb_dRcR::synapse0x1ebe500() {
   return (neuron0x1ece200()*0.118984);
}

double NNfunction_sb_dRcR::synapse0x1ebe540() {
   return (neuron0x1eceab0()*0.167878);
}

double NNfunction_sb_dRcR::synapse0x1ebeed0() {
   return (neuron0x1ecf480()*0.169433);
}

double NNfunction_sb_dRcR::synapse0x1ebef10() {
   return (neuron0x1ecfe50()*-0.162236);
}

double NNfunction_sb_dRcR::synapse0x1ec1610() {
   return (neuron0x1eaade0()*-0.135704);
}

double NNfunction_sb_dRcR::synapse0x1ec1650() {
   return (neuron0x1eab620()*-0.238644);
}

double NNfunction_sb_dRcR::synapse0x1eb6bd0() {
   return (neuron0x1eac100()*-0.234117);
}

double NNfunction_sb_dRcR::synapse0x1eb6c10() {
   return (neuron0x1eabba0()*-0.322496);
}

double NNfunction_sb_dRcR::synapse0x1ec41f0() {
   return (neuron0x1eacee0()*0.273784);
}

double NNfunction_sb_dRcR::synapse0x1ec4230() {
   return (neuron0x1eae9b0()*0.271803);
}

double NNfunction_sb_dRcR::synapse0x1ec4bc0() {
   return (neuron0x1eaf780()*0.608085);
}

double NNfunction_sb_dRcR::synapse0x1ec4c00() {
   return (neuron0x1eb0150()*-0.205897);
}

double NNfunction_sb_dRcR::synapse0x1ec5590() {
   return (neuron0x1eb0b20()*-0.224919);
}

double NNfunction_sb_dRcR::synapse0x1ec55d0() {
   return (neuron0x1eb1600()*0.349572);
}

double NNfunction_sb_dRcR::synapse0x1ec5f60() {
   return (neuron0x1eb1fd0()*0.236155);
}

double NNfunction_sb_dRcR::synapse0x1ec5fa0() {
   return (neuron0x1eaf0b0()*-0.869396);
}

double NNfunction_sb_dRcR::synapse0x1ec6930() {
   return (neuron0x1eb3b80()*0.0306575);
}

double NNfunction_sb_dRcR::synapse0x1ec6970() {
   return (neuron0x1eb4550()*-0.672822);
}

double NNfunction_sb_dRcR::synapse0x1ec7300() {
   return (neuron0x1eb4f20()*-2.17993);
}

double NNfunction_sb_dRcR::synapse0x1ec7340() {
   return (neuron0x1eb58f0()*-0.0694092);
}

double NNfunction_sb_dRcR::synapse0x1ec7cd0() {
   return (neuron0x1eb7700()*-0.115289);
}

double NNfunction_sb_dRcR::synapse0x1ec7d10() {
   return (neuron0x1eb79e0()*-0.131495);
}

double NNfunction_sb_dRcR::synapse0x1ec86a0() {
   return (neuron0x1eb83b0()*-0.237268);
}

double NNfunction_sb_dRcR::synapse0x1ec86e0() {
   return (neuron0x1eb8d80()*-0.25602);
}

double NNfunction_sb_dRcR::synapse0x1ec9280() {
   return (neuron0x1eb9750()*0.0824917);
}

double NNfunction_sb_dRcR::synapse0x1ec92c0() {
   return (neuron0x1eba120()*-0.806528);
}

double NNfunction_sb_dRcR::synapse0x1ec9c50() {
   return (neuron0x1eb2c70()*0.965543);
}

double NNfunction_sb_dRcR::synapse0x1ec9c90() {
   return (neuron0x1eb3640()*-0.0926425);
}

double NNfunction_sb_dRcR::synapse0x1ebaad0() {
   return (neuron0x1ebceb0()*-0.0547079);
}

double NNfunction_sb_dRcR::synapse0x1ebab10() {
   return (neuron0x1ebd880()*0.599554);
}

double NNfunction_sb_dRcR::synapse0x1ebb4a0() {
   return (neuron0x1ebe250()*0.752374);
}

double NNfunction_sb_dRcR::synapse0x1ebb4e0() {
   return (neuron0x1ebec20()*0.818573);
}

double NNfunction_sb_dRcR::synapse0x1ebbe70() {
   return (neuron0x1ebf5f0()*0.428466);
}

double NNfunction_sb_dRcR::synapse0x1ebbeb0() {
   return (neuron0x1ebffc0()*-0.0940075);
}

double NNfunction_sb_dRcR::synapse0x1ece390() {
   return (neuron0x1ec0990()*0.0789932);
}

double NNfunction_sb_dRcR::synapse0x1ece3d0() {
   return (neuron0x1ec1360()*-0.563863);
}

double NNfunction_sb_dRcR::synapse0x1eced60() {
   return (neuron0x1eb73f0()*0.176231);
}

double NNfunction_sb_dRcR::synapse0x1eceda0() {
   return (neuron0x1ec3f40()*-0.0969453);
}

double NNfunction_sb_dRcR::synapse0x1ecf730() {
   return (neuron0x1ec4910()*-0.0694423);
}

double NNfunction_sb_dRcR::synapse0x1ecf770() {
   return (neuron0x1ec52e0()*-0.444562);
}

double NNfunction_sb_dRcR::synapse0x1ed0100() {
   return (neuron0x1ec5cb0()*-0.390874);
}

double NNfunction_sb_dRcR::synapse0x1ed0140() {
   return (neuron0x1ec6680()*0.162957);
}

double NNfunction_sb_dRcR::synapse0x1eab090() {
   return (neuron0x1ec7050()*0.627519);
}

double NNfunction_sb_dRcR::synapse0x1eab0d0() {
   return (neuron0x1ec7a20()*-0.138533);
}

double NNfunction_sb_dRcR::synapse0x1ebf8a0() {
   return (neuron0x1ec83f0()*-0.342411);
}

double NNfunction_sb_dRcR::synapse0x1ebf8e0() {
   return (neuron0x1ec8fd0()*-0.342763);
}

double NNfunction_sb_dRcR::synapse0x1ed0820() {
   return (neuron0x1ec99a0()*0.237932);
}

double NNfunction_sb_dRcR::synapse0x1ed0860() {
   return (neuron0x1eba820()*0.597624);
}

double NNfunction_sb_dRcR::synapse0x1ed08a0() {
   return (neuron0x1ebb1f0()*-0.291497);
}

double NNfunction_sb_dRcR::synapse0x1ed08e0() {
   return (neuron0x1ebbbc0()*0.204209);
}

double NNfunction_sb_dRcR::synapse0x1ed7790() {
   return (neuron0x1ece200()*0.0636175);
}

double NNfunction_sb_dRcR::synapse0x1ed77d0() {
   return (neuron0x1eceab0()*-0.0683226);
}

double NNfunction_sb_dRcR::synapse0x1ed7810() {
   return (neuron0x1ecf480()*-0.152207);
}

double NNfunction_sb_dRcR::synapse0x1ed7850() {
   return (neuron0x1ecfe50()*0.0300977);
}

double NNfunction_sb_dRcR::synapse0x1ed7bd0() {
   return (neuron0x1eaade0()*-1.84782);
}

double NNfunction_sb_dRcR::synapse0x1ed7c10() {
   return (neuron0x1eab620()*0.862857);
}

double NNfunction_sb_dRcR::synapse0x1ed7c50() {
   return (neuron0x1eac100()*1.12673);
}

double NNfunction_sb_dRcR::synapse0x1ed7c90() {
   return (neuron0x1eabba0()*-0.359068);
}

double NNfunction_sb_dRcR::synapse0x1ed7cd0() {
   return (neuron0x1eacee0()*0.873446);
}

double NNfunction_sb_dRcR::synapse0x1ed7d10() {
   return (neuron0x1eae9b0()*0.542156);
}

double NNfunction_sb_dRcR::synapse0x1ed7d50() {
   return (neuron0x1eaf780()*1.7008);
}

double NNfunction_sb_dRcR::synapse0x1ed7d90() {
   return (neuron0x1eb0150()*-0.0221095);
}

double NNfunction_sb_dRcR::synapse0x1ed7dd0() {
   return (neuron0x1eb0b20()*-0.405619);
}

double NNfunction_sb_dRcR::synapse0x1ed7e10() {
   return (neuron0x1eb1600()*-0.516844);
}

double NNfunction_sb_dRcR::synapse0x1ed7e50() {
   return (neuron0x1eb1fd0()*0.2339);
}

double NNfunction_sb_dRcR::synapse0x1ed7e90() {
   return (neuron0x1eaf0b0()*0.999445);
}

double NNfunction_sb_dRcR::synapse0x1ed7ed0() {
   return (neuron0x1eb3b80()*-0.985265);
}

double NNfunction_sb_dRcR::synapse0x1ed7f10() {
   return (neuron0x1eb4550()*-0.0967791);
}

double NNfunction_sb_dRcR::synapse0x1ed7f50() {
   return (neuron0x1eb4f20()*0.494736);
}

double NNfunction_sb_dRcR::synapse0x1ed7f90() {
   return (neuron0x1eb58f0()*0.385519);
}

double NNfunction_sb_dRcR::synapse0x1ed7a20() {
   return (neuron0x1eb7700()*-1.33552);
}

double NNfunction_sb_dRcR::synapse0x1ed7a60() {
   return (neuron0x1eb79e0()*0.701356);
}

double NNfunction_sb_dRcR::synapse0x1ed80e0() {
   return (neuron0x1eb83b0()*-0.88498);
}

double NNfunction_sb_dRcR::synapse0x1ed8120() {
   return (neuron0x1eb8d80()*1.73263);
}

double NNfunction_sb_dRcR::synapse0x1ed8160() {
   return (neuron0x1eb9750()*0.55238);
}

double NNfunction_sb_dRcR::synapse0x1ed81a0() {
   return (neuron0x1eba120()*-0.0648544);
}

double NNfunction_sb_dRcR::synapse0x1ed81e0() {
   return (neuron0x1eb2c70()*1.84178);
}

double NNfunction_sb_dRcR::synapse0x1ed8220() {
   return (neuron0x1eb3640()*1.32926);
}

double NNfunction_sb_dRcR::synapse0x1ed8260() {
   return (neuron0x1ebceb0()*0.0701342);
}

double NNfunction_sb_dRcR::synapse0x1ed82a0() {
   return (neuron0x1ebd880()*-1.24542);
}

double NNfunction_sb_dRcR::synapse0x1ed82e0() {
   return (neuron0x1ebe250()*-0.510888);
}

double NNfunction_sb_dRcR::synapse0x1ed8320() {
   return (neuron0x1ebec20()*-1.00001);
}

double NNfunction_sb_dRcR::synapse0x1ed8360() {
   return (neuron0x1ebf5f0()*1.63688);
}

double NNfunction_sb_dRcR::synapse0x1ed83a0() {
   return (neuron0x1ebffc0()*-1.19056);
}

double NNfunction_sb_dRcR::synapse0x1ed83e0() {
   return (neuron0x1ec0990()*-0.469557);
}

double NNfunction_sb_dRcR::synapse0x1ed8420() {
   return (neuron0x1ec1360()*-0.989284);
}

double NNfunction_sb_dRcR::synapse0x1ed7fd0() {
   return (neuron0x1eb73f0()*0.852577);
}

double NNfunction_sb_dRcR::synapse0x1ed8010() {
   return (neuron0x1ec3f40()*0.709923);
}

double NNfunction_sb_dRcR::synapse0x1ed8050() {
   return (neuron0x1ec4910()*1.32516);
}

double NNfunction_sb_dRcR::synapse0x1ed8090() {
   return (neuron0x1ec52e0()*0.85744);
}

double NNfunction_sb_dRcR::synapse0x1ed8670() {
   return (neuron0x1ec5cb0()*0.0857871);
}

double NNfunction_sb_dRcR::synapse0x1ed86b0() {
   return (neuron0x1ec6680()*-0.643719);
}

double NNfunction_sb_dRcR::synapse0x1ed86f0() {
   return (neuron0x1ec7050()*0.874707);
}

double NNfunction_sb_dRcR::synapse0x1ed8730() {
   return (neuron0x1ec7a20()*-1.03034);
}

double NNfunction_sb_dRcR::synapse0x1ed8770() {
   return (neuron0x1ec83f0()*0.618531);
}

double NNfunction_sb_dRcR::synapse0x1ed87b0() {
   return (neuron0x1ec8fd0()*1.66595);
}

double NNfunction_sb_dRcR::synapse0x1ed87f0() {
   return (neuron0x1ec99a0()*0.493733);
}

double NNfunction_sb_dRcR::synapse0x1ed8830() {
   return (neuron0x1eba820()*-0.0555397);
}

double NNfunction_sb_dRcR::synapse0x1ed8870() {
   return (neuron0x1ebb1f0()*-1.39337);
}

double NNfunction_sb_dRcR::synapse0x1ed88b0() {
   return (neuron0x1ebbbc0()*1.28312);
}

double NNfunction_sb_dRcR::synapse0x1ed88f0() {
   return (neuron0x1ece200()*0.92631);
}

double NNfunction_sb_dRcR::synapse0x1ed8930() {
   return (neuron0x1eceab0()*-0.469921);
}

double NNfunction_sb_dRcR::synapse0x1ed8970() {
   return (neuron0x1ecf480()*-0.918772);
}

double NNfunction_sb_dRcR::synapse0x1ed89b0() {
   return (neuron0x1ecfe50()*-0.788415);
}

double NNfunction_sb_dRcR::synapse0x1ed8d30() {
   return (neuron0x1eaade0()*1.05122);
}

double NNfunction_sb_dRcR::synapse0x1ed8d70() {
   return (neuron0x1eab620()*-0.971233);
}

double NNfunction_sb_dRcR::synapse0x1ed8db0() {
   return (neuron0x1eac100()*0.410136);
}

double NNfunction_sb_dRcR::synapse0x1ed8df0() {
   return (neuron0x1eabba0()*-1.726);
}

double NNfunction_sb_dRcR::synapse0x1ed8e30() {
   return (neuron0x1eacee0()*0.335658);
}

double NNfunction_sb_dRcR::synapse0x1ed8e70() {
   return (neuron0x1eae9b0()*0.983195);
}

double NNfunction_sb_dRcR::synapse0x1ed8eb0() {
   return (neuron0x1eaf780()*-1.20751);
}

double NNfunction_sb_dRcR::synapse0x1ed8ef0() {
   return (neuron0x1eb0150()*1.15543);
}

double NNfunction_sb_dRcR::synapse0x1ed8f30() {
   return (neuron0x1eb0b20()*0.847897);
}

double NNfunction_sb_dRcR::synapse0x1ed8f70() {
   return (neuron0x1eb1600()*-4.42527);
}

double NNfunction_sb_dRcR::synapse0x1ed8fb0() {
   return (neuron0x1eb1fd0()*1.24582);
}

double NNfunction_sb_dRcR::synapse0x1ed8ff0() {
   return (neuron0x1eaf0b0()*3.34953);
}

double NNfunction_sb_dRcR::synapse0x1ed9030() {
   return (neuron0x1eb3b80()*0.781558);
}

double NNfunction_sb_dRcR::synapse0x1ed9070() {
   return (neuron0x1eb4550()*3.02904);
}

double NNfunction_sb_dRcR::synapse0x1ed90b0() {
   return (neuron0x1eb4f20()*-0.611884);
}

double NNfunction_sb_dRcR::synapse0x1ed90f0() {
   return (neuron0x1eb58f0()*1.50963);
}

double NNfunction_sb_dRcR::synapse0x1ed8b80() {
   return (neuron0x1eb7700()*0.49254);
}

double NNfunction_sb_dRcR::synapse0x1ed8bc0() {
   return (neuron0x1eb79e0()*-1.14652);
}

double NNfunction_sb_dRcR::synapse0x1ed9240() {
   return (neuron0x1eb83b0()*0.693664);
}

double NNfunction_sb_dRcR::synapse0x1ed9280() {
   return (neuron0x1eb8d80()*0.519149);
}

double NNfunction_sb_dRcR::synapse0x1ed92c0() {
   return (neuron0x1eb9750()*-1.41055);
}

double NNfunction_sb_dRcR::synapse0x1ed9300() {
   return (neuron0x1eba120()*2.26027);
}

double NNfunction_sb_dRcR::synapse0x1ed9340() {
   return (neuron0x1eb2c70()*1.31286);
}

double NNfunction_sb_dRcR::synapse0x1ed9380() {
   return (neuron0x1eb3640()*0.103707);
}

double NNfunction_sb_dRcR::synapse0x1ed93c0() {
   return (neuron0x1ebceb0()*-3.93242);
}

double NNfunction_sb_dRcR::synapse0x1ed9400() {
   return (neuron0x1ebd880()*0.908998);
}

double NNfunction_sb_dRcR::synapse0x1ed9440() {
   return (neuron0x1ebe250()*-1.163);
}

double NNfunction_sb_dRcR::synapse0x1ed9480() {
   return (neuron0x1ebec20()*-4.62908);
}

double NNfunction_sb_dRcR::synapse0x1ed94c0() {
   return (neuron0x1ebf5f0()*-1.16241);
}

double NNfunction_sb_dRcR::synapse0x1ed9500() {
   return (neuron0x1ebffc0()*0.454664);
}

double NNfunction_sb_dRcR::synapse0x1ed9540() {
   return (neuron0x1ec0990()*0.820615);
}

double NNfunction_sb_dRcR::synapse0x1ed9580() {
   return (neuron0x1ec1360()*0.496583);
}

double NNfunction_sb_dRcR::synapse0x1ed9130() {
   return (neuron0x1eb73f0()*-0.229776);
}

double NNfunction_sb_dRcR::synapse0x1ed9170() {
   return (neuron0x1ec3f40()*1.21035);
}

double NNfunction_sb_dRcR::synapse0x1ed91b0() {
   return (neuron0x1ec4910()*-0.733009);
}

double NNfunction_sb_dRcR::synapse0x1ed91f0() {
   return (neuron0x1ec52e0()*-1.18151);
}

double NNfunction_sb_dRcR::synapse0x1ed97d0() {
   return (neuron0x1ec5cb0()*1.28511);
}

double NNfunction_sb_dRcR::synapse0x1ed9810() {
   return (neuron0x1ec6680()*-0.563834);
}

double NNfunction_sb_dRcR::synapse0x1ed9850() {
   return (neuron0x1ec7050()*-0.171254);
}

double NNfunction_sb_dRcR::synapse0x1ed9890() {
   return (neuron0x1ec7a20()*-1.97781);
}

double NNfunction_sb_dRcR::synapse0x1ed98d0() {
   return (neuron0x1ec83f0()*1.20175);
}

double NNfunction_sb_dRcR::synapse0x1ed9910() {
   return (neuron0x1ec8fd0()*-0.114585);
}

double NNfunction_sb_dRcR::synapse0x1ed9950() {
   return (neuron0x1ec99a0()*0.783641);
}

double NNfunction_sb_dRcR::synapse0x1ed9990() {
   return (neuron0x1eba820()*-0.930878);
}

double NNfunction_sb_dRcR::synapse0x1ed99d0() {
   return (neuron0x1ebb1f0()*0.426492);
}

double NNfunction_sb_dRcR::synapse0x1ed9a10() {
   return (neuron0x1ebbbc0()*0.0394223);
}

double NNfunction_sb_dRcR::synapse0x1ed9a50() {
   return (neuron0x1ece200()*0.738723);
}

double NNfunction_sb_dRcR::synapse0x1ed9a90() {
   return (neuron0x1eceab0()*1.25866);
}

double NNfunction_sb_dRcR::synapse0x1ed9ad0() {
   return (neuron0x1ecf480()*1.2853);
}

double NNfunction_sb_dRcR::synapse0x1ed9b10() {
   return (neuron0x1ecfe50()*1.56281);
}

double NNfunction_sb_dRcR::synapse0x1ed9e90() {
   return (neuron0x1eaade0()*-2.73178);
}

double NNfunction_sb_dRcR::synapse0x1ed9ed0() {
   return (neuron0x1eab620()*-0.0649838);
}

double NNfunction_sb_dRcR::synapse0x1ed9f10() {
   return (neuron0x1eac100()*-0.0476768);
}

double NNfunction_sb_dRcR::synapse0x1ed9f50() {
   return (neuron0x1eabba0()*-0.0408668);
}

double NNfunction_sb_dRcR::synapse0x1ed9f90() {
   return (neuron0x1eacee0()*0.0601263);
}

double NNfunction_sb_dRcR::synapse0x1ed9fd0() {
   return (neuron0x1eae9b0()*-0.343073);
}

double NNfunction_sb_dRcR::synapse0x1eda010() {
   return (neuron0x1eaf780()*-0.986595);
}

double NNfunction_sb_dRcR::synapse0x1eda050() {
   return (neuron0x1eb0150()*-0.0155886);
}

double NNfunction_sb_dRcR::synapse0x1eda090() {
   return (neuron0x1eb0b20()*-0.0273265);
}

double NNfunction_sb_dRcR::synapse0x1eda0d0() {
   return (neuron0x1eb1600()*0.480246);
}

double NNfunction_sb_dRcR::synapse0x1eda110() {
   return (neuron0x1eb1fd0()*0.0168769);
}

double NNfunction_sb_dRcR::synapse0x1eda150() {
   return (neuron0x1eaf0b0()*-0.301917);
}

double NNfunction_sb_dRcR::synapse0x1eda190() {
   return (neuron0x1eb3b80()*0.000963062);
}

double NNfunction_sb_dRcR::synapse0x1eda1d0() {
   return (neuron0x1eb4550()*-0.138816);
}

double NNfunction_sb_dRcR::synapse0x1eda210() {
   return (neuron0x1eb4f20()*-0.265408);
}

double NNfunction_sb_dRcR::synapse0x1eda250() {
   return (neuron0x1eb58f0()*0.0361749);
}

double NNfunction_sb_dRcR::synapse0x1ed9ce0() {
   return (neuron0x1eb7700()*-0.0272285);
}

double NNfunction_sb_dRcR::synapse0x1ed9d20() {
   return (neuron0x1eb79e0()*-0.0359656);
}

double NNfunction_sb_dRcR::synapse0x1eda3a0() {
   return (neuron0x1eb83b0()*1.89519);
}

double NNfunction_sb_dRcR::synapse0x1eda3e0() {
   return (neuron0x1eb8d80()*-0.0199837);
}

double NNfunction_sb_dRcR::synapse0x1eda420() {
   return (neuron0x1eb9750()*0.00407904);
}

double NNfunction_sb_dRcR::synapse0x1eda460() {
   return (neuron0x1eba120()*0.851401);
}

double NNfunction_sb_dRcR::synapse0x1eda4a0() {
   return (neuron0x1eb2c70()*-2.8159);
}

double NNfunction_sb_dRcR::synapse0x1eda4e0() {
   return (neuron0x1eb3640()*0.0045355);
}

double NNfunction_sb_dRcR::synapse0x1eda520() {
   return (neuron0x1ebceb0()*-0.0523227);
}

double NNfunction_sb_dRcR::synapse0x1eda560() {
   return (neuron0x1ebd880()*0.049445);
}

double NNfunction_sb_dRcR::synapse0x1eda5a0() {
   return (neuron0x1ebe250()*0.0850372);
}

double NNfunction_sb_dRcR::synapse0x1eda5e0() {
   return (neuron0x1ebec20()*1.07918);
}

double NNfunction_sb_dRcR::synapse0x1eda620() {
   return (neuron0x1ebf5f0()*-0.883345);
}

double NNfunction_sb_dRcR::synapse0x1eda660() {
   return (neuron0x1ebffc0()*-0.000974221);
}

double NNfunction_sb_dRcR::synapse0x1eda6a0() {
   return (neuron0x1ec0990()*0.0455345);
}

double NNfunction_sb_dRcR::synapse0x1eda6e0() {
   return (neuron0x1ec1360()*-0.0697679);
}

double NNfunction_sb_dRcR::synapse0x1eda290() {
   return (neuron0x1eb73f0()*0.050274);
}

double NNfunction_sb_dRcR::synapse0x1eda2d0() {
   return (neuron0x1ec3f40()*0.0175407);
}

double NNfunction_sb_dRcR::synapse0x1eda310() {
   return (neuron0x1ec4910()*-0.0302492);
}

double NNfunction_sb_dRcR::synapse0x1eda350() {
   return (neuron0x1ec52e0()*1.27328);
}

double NNfunction_sb_dRcR::synapse0x1eda930() {
   return (neuron0x1ec5cb0()*-0.0531698);
}

double NNfunction_sb_dRcR::synapse0x1eda970() {
   return (neuron0x1ec6680()*-0.0610271);
}

double NNfunction_sb_dRcR::synapse0x1eda9b0() {
   return (neuron0x1ec7050()*0.0930354);
}

double NNfunction_sb_dRcR::synapse0x1eda9f0() {
   return (neuron0x1ec7a20()*1.11746);
}

double NNfunction_sb_dRcR::synapse0x1edaa30() {
   return (neuron0x1ec83f0()*-0.0157661);
}

double NNfunction_sb_dRcR::synapse0x1edaa70() {
   return (neuron0x1ec8fd0()*-0.0164972);
}

double NNfunction_sb_dRcR::synapse0x1edaab0() {
   return (neuron0x1ec99a0()*0.0577591);
}

double NNfunction_sb_dRcR::synapse0x1edaaf0() {
   return (neuron0x1eba820()*0.0412916);
}

double NNfunction_sb_dRcR::synapse0x1edab30() {
   return (neuron0x1ebb1f0()*-0.0307711);
}

double NNfunction_sb_dRcR::synapse0x1edab70() {
   return (neuron0x1ebbbc0()*0.0280867);
}

double NNfunction_sb_dRcR::synapse0x1edabb0() {
   return (neuron0x1ece200()*0.0169538);
}

double NNfunction_sb_dRcR::synapse0x1edabf0() {
   return (neuron0x1eceab0()*0.0262854);
}

double NNfunction_sb_dRcR::synapse0x1edac30() {
   return (neuron0x1ecf480()*0.00760664);
}

double NNfunction_sb_dRcR::synapse0x1edac70() {
   return (neuron0x1ecfe50()*0.0163316);
}

double NNfunction_sb_dRcR::synapse0x1edaed0() {
   return (neuron0x1ed7050()*-3.42755);
}

double NNfunction_sb_dRcR::synapse0x1edaf10() {
   return (neuron0x1ed73f0()*-1.36169);
}

double NNfunction_sb_dRcR::synapse0x1edaf50() {
   return (neuron0x1ed7890()*-4.06537);
}

double NNfunction_sb_dRcR::synapse0x1edaf90() {
   return (neuron0x1ed89f0()*-6.53723);
}

double NNfunction_sb_dRcR::synapse0x1edafd0() {
   return (neuron0x1ed9b50()*9.0871);
}

