#include "NNfunction_sb_dRdR.h"
#include <cmath>

double NNfunction_sb_dRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5242)/15.3251;
   input1 = (in1 - 2.79973)/1161.8;
   input2 = (in2 - 664.573)/627.977;
   input3 = (in3 - -57.1224)/829.086;
   input4 = (in4 - 1064.22)/957.388;
   input5 = (in5 - 895.705)/943.076;
   input6 = (in6 - 905.684)/944.592;
   input7 = (in7 - 929.196)/934.262;
   input8 = (in8 - 926.633)/978.049;
   input9 = (in9 - 906.189)/958.114;
   input10 = (in10 - 991.308)/956.487;
   input11 = (in11 - 736.007)/881.899;
   input12 = (in12 - 738.687)/886.777;
   input13 = (in13 - 509.258)/530.516;
   input14 = (in14 - 721.359)/819.366;
   input15 = (in15 - 724.42)/820.514;
   input16 = (in16 - 541.587)/570.35;
   input17 = (in17 - 333.121)/303.734;
   input18 = (in18 - 759.003)/905.487;
   input19 = (in19 - 808.829)/883.798;
   input20 = (in20 - -6.01969)/492.016;
   input21 = (in21 - 0.493376)/1159.33;
   input22 = (in22 - 0.135566)/1211.96;
   input23 = (in23 - -200.367)/609.351;
   switch(index) {
     case 0:
         return neuron0x28e84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5242)/15.3251;
   input1 = (input[1] - 2.79973)/1161.8;
   input2 = (input[2] - 664.573)/627.977;
   input3 = (input[3] - -57.1224)/829.086;
   input4 = (input[4] - 1064.22)/957.388;
   input5 = (input[5] - 895.705)/943.076;
   input6 = (input[6] - 905.684)/944.592;
   input7 = (input[7] - 929.196)/934.262;
   input8 = (input[8] - 926.633)/978.049;
   input9 = (input[9] - 906.189)/958.114;
   input10 = (input[10] - 991.308)/956.487;
   input11 = (input[11] - 736.007)/881.899;
   input12 = (input[12] - 738.687)/886.777;
   input13 = (input[13] - 509.258)/530.516;
   input14 = (input[14] - 721.359)/819.366;
   input15 = (input[15] - 724.42)/820.514;
   input16 = (input[16] - 541.587)/570.35;
   input17 = (input[17] - 333.121)/303.734;
   input18 = (input[18] - 759.003)/905.487;
   input19 = (input[19] - 808.829)/883.798;
   input20 = (input[20] - -6.01969)/492.016;
   input21 = (input[21] - 0.493376)/1159.33;
   input22 = (input[22] - 0.135566)/1211.96;
   input23 = (input[23] - -200.367)/609.351;
   switch(index) {
     case 0:
         return neuron0x28e84b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRdR::neuron0x28b4570() {
   return input0;
}

double NNfunction_sb_dRdR::neuron0x28b48b0() {
   return input1;
}

double NNfunction_sb_dRdR::neuron0x28b4bf0() {
   return input2;
}

double NNfunction_sb_dRdR::neuron0x28b4f30() {
   return input3;
}

double NNfunction_sb_dRdR::neuron0x28b5270() {
   return input4;
}

double NNfunction_sb_dRdR::neuron0x28b55b0() {
   return input5;
}

double NNfunction_sb_dRdR::neuron0x28b58f0() {
   return input6;
}

double NNfunction_sb_dRdR::neuron0x28b5c30() {
   return input7;
}

double NNfunction_sb_dRdR::neuron0x28b5f70() {
   return input8;
}

double NNfunction_sb_dRdR::neuron0x28b62b0() {
   return input9;
}

double NNfunction_sb_dRdR::neuron0x28b65f0() {
   return input10;
}

double NNfunction_sb_dRdR::neuron0x28b6930() {
   return input11;
}

double NNfunction_sb_dRdR::neuron0x28b6c70() {
   return input12;
}

double NNfunction_sb_dRdR::neuron0x28b6fb0() {
   return input13;
}

double NNfunction_sb_dRdR::neuron0x28b72f0() {
   return input14;
}

double NNfunction_sb_dRdR::neuron0x28b7630() {
   return input15;
}

double NNfunction_sb_dRdR::neuron0x28b7970() {
   return input16;
}

double NNfunction_sb_dRdR::neuron0x28b7ed0() {
   return input17;
}

double NNfunction_sb_dRdR::neuron0x28b80f0() {
   return input18;
}

double NNfunction_sb_dRdR::neuron0x28b8430() {
   return input19;
}

double NNfunction_sb_dRdR::neuron0x28b8770() {
   return input20;
}

double NNfunction_sb_dRdR::neuron0x28b8ab0() {
   return input21;
}

double NNfunction_sb_dRdR::neuron0x28b8df0() {
   return input22;
}

double NNfunction_sb_dRdR::neuron0x28b9130() {
   return input23;
}

double NNfunction_sb_dRdR::input0x28b95d0() {
   double input = -0.421827;
   input += synapse0x26743e0();
   input += synapse0x28b4430();
   input += synapse0x28b4470();
   input += synapse0x28b9880();
   input += synapse0x28b98c0();
   input += synapse0x28b9900();
   input += synapse0x28b9940();
   input += synapse0x28b9980();
   input += synapse0x28b99c0();
   input += synapse0x28b9a00();
   input += synapse0x28b9a40();
   input += synapse0x28b9a80();
   input += synapse0x28b9ac0();
   input += synapse0x28b9b00();
   input += synapse0x28b9b40();
   input += synapse0x28b9b80();
   input += synapse0x28b43a0();
   input += synapse0x28b43e0();
   input += synapse0x2665c80();
   input += synapse0x2665cc0();
   input += synapse0x28b9de0();
   input += synapse0x28b9e20();
   input += synapse0x28b9e60();
   input += synapse0x28b9ea0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28b95d0() {
   double input = input0x28b95d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28b9ee0() {
   double input = 0.701763;
   input += synapse0x28ba220();
   input += synapse0x28ba260();
   input += synapse0x28ba2a0();
   input += synapse0x28ba2e0();
   input += synapse0x28ba320();
   input += synapse0x28ba360();
   input += synapse0x28ba3a0();
   input += synapse0x28ba3e0();
   input += synapse0x28ba420();
   input += synapse0x28b9cd0();
   input += synapse0x28b9d10();
   input += synapse0x28b9d50();
   input += synapse0x28b9d90();
   input += synapse0x28ba670();
   input += synapse0x28ba6b0();
   input += synapse0x28ba6f0();
   input += synapse0x28ba070();
   input += synapse0x28ba0b0();
   input += synapse0x28ba840();
   input += synapse0x28ba880();
   input += synapse0x28ba8c0();
   input += synapse0x28ba900();
   input += synapse0x28ba940();
   input += synapse0x28ba980();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28b9ee0() {
   double input = input0x28b9ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28ba9c0() {
   double input = -1.12064;
   input += synapse0x28bad00();
   input += synapse0x28bad40();
   input += synapse0x28bad80();
   input += synapse0x28badc0();
   input += synapse0x28bae00();
   input += synapse0x28bae40();
   input += synapse0x28bae80();
   input += synapse0x28baec0();
   input += synapse0x28baf00();
   input += synapse0x28baf40();
   input += synapse0x28baf80();
   input += synapse0x28bafc0();
   input += synapse0x28bb000();
   input += synapse0x28bb040();
   input += synapse0x28bb080();
   input += synapse0x28bb0c0();
   input += synapse0x28bab50();
   input += synapse0x28bab90();
   input += synapse0x2673ad0();
   input += synapse0x2673b10();
   input += synapse0x28a3600();
   input += synapse0x28a3640();
   input += synapse0x28a3680();
   input += synapse0x28b44b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28ba9c0() {
   double input = input0x28ba9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x2674250() {
   double input = -9.63907e-06;
   input += synapse0x28ba610();
   input += synapse0x28b44f0();
   input += synapse0x28b4530();
   input += synapse0x28bb210();
   input += synapse0x28bb250();
   input += synapse0x28bb290();
   input += synapse0x28bb2d0();
   input += synapse0x28bb310();
   input += synapse0x28bb350();
   input += synapse0x28bb390();
   input += synapse0x28bb3d0();
   input += synapse0x28bb410();
   input += synapse0x28bb450();
   input += synapse0x28bb490();
   input += synapse0x28bb4d0();
   input += synapse0x28bb510();
   input += synapse0x28ba460();
   input += synapse0x28ba4a0();
   input += synapse0x28bb660();
   input += synapse0x28bb6a0();
   input += synapse0x28bb6e0();
   input += synapse0x28bb720();
   input += synapse0x28bb760();
   input += synapse0x28bb7a0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x2674250() {
   double input = input0x2674250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bb7e0() {
   double input = 0.509752;
   input += synapse0x28bbb20();
   input += synapse0x28bbb60();
   input += synapse0x28bbba0();
   input += synapse0x28bbbe0();
   input += synapse0x28bbc20();
   input += synapse0x28bbc60();
   input += synapse0x28bbca0();
   input += synapse0x28bbce0();
   input += synapse0x28bbd20();
   input += synapse0x28bbd60();
   input += synapse0x28bbda0();
   input += synapse0x28bbde0();
   input += synapse0x28bbe20();
   input += synapse0x28bbe60();
   input += synapse0x28bbea0();
   input += synapse0x28bbee0();
   input += synapse0x28bb970();
   input += synapse0x28bb9b0();
   input += synapse0x28bc030();
   input += synapse0x28bc070();
   input += synapse0x28bc0b0();
   input += synapse0x28bc0f0();
   input += synapse0x28bc130();
   input += synapse0x28bc170();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bb7e0() {
   double input = input0x28bb7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bc1b0() {
   double input = -7.09427e-05;
   input += synapse0x28bc4f0();
   input += synapse0x28bc530();
   input += synapse0x28bc570();
   input += synapse0x28bc5b0();
   input += synapse0x28bc5f0();
   input += synapse0x28bc630();
   input += synapse0x28bc670();
   input += synapse0x28bc6b0();
   input += synapse0x28bc6f0();
   input += synapse0x2673e40();
   input += synapse0x2673e80();
   input += synapse0x2673ec0();
   input += synapse0x2673f00();
   input += synapse0x2673f40();
   input += synapse0x2673f80();
   input += synapse0x2673fc0();
   input += synapse0x28bc340();
   input += synapse0x28bc380();
   input += synapse0x2674110();
   input += synapse0x2674150();
   input += synapse0x2674190();
   input += synapse0x26741d0();
   input += synapse0x2674210();
   input += synapse0x28bcf40();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bc1b0() {
   double input = input0x28bc1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bcf80() {
   double input = -2.3318;
   input += synapse0x28bd2c0();
   input += synapse0x28bd300();
   input += synapse0x28bd340();
   input += synapse0x28bd380();
   input += synapse0x28bd3c0();
   input += synapse0x28bd400();
   input += synapse0x28bd440();
   input += synapse0x28bd480();
   input += synapse0x28bd4c0();
   input += synapse0x28bd500();
   input += synapse0x28bd540();
   input += synapse0x28bd580();
   input += synapse0x28bd5c0();
   input += synapse0x28bd600();
   input += synapse0x28bd640();
   input += synapse0x28bd680();
   input += synapse0x28bd110();
   input += synapse0x28bd150();
   input += synapse0x28bd7d0();
   input += synapse0x28bd810();
   input += synapse0x28bd850();
   input += synapse0x28bd890();
   input += synapse0x28bd8d0();
   input += synapse0x28bd910();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bcf80() {
   double input = input0x28bcf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bd950() {
   double input = -0.16426;
   input += synapse0x28bdc90();
   input += synapse0x28bdcd0();
   input += synapse0x28bdd10();
   input += synapse0x28bdd50();
   input += synapse0x28bdd90();
   input += synapse0x28bddd0();
   input += synapse0x28bde10();
   input += synapse0x28bde50();
   input += synapse0x28bde90();
   input += synapse0x28bded0();
   input += synapse0x28bdf10();
   input += synapse0x28bdf50();
   input += synapse0x28bdf90();
   input += synapse0x28bdfd0();
   input += synapse0x28be010();
   input += synapse0x28be050();
   input += synapse0x28bdae0();
   input += synapse0x28bdb20();
   input += synapse0x28be1a0();
   input += synapse0x28be1e0();
   input += synapse0x28be220();
   input += synapse0x28be260();
   input += synapse0x28be2a0();
   input += synapse0x28be2e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bd950() {
   double input = input0x28bd950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28be320() {
   double input = -0.165517;
   input += synapse0x28b7dc0();
   input += synapse0x28b7e00();
   input += synapse0x28b7e40();
   input += synapse0x28b7e80();
   input += synapse0x28be870();
   input += synapse0x28be8b0();
   input += synapse0x28be8f0();
   input += synapse0x28be930();
   input += synapse0x28be970();
   input += synapse0x28be9b0();
   input += synapse0x28be9f0();
   input += synapse0x28bea30();
   input += synapse0x28bea70();
   input += synapse0x28beab0();
   input += synapse0x28beaf0();
   input += synapse0x28beb30();
   input += synapse0x28be4b0();
   input += synapse0x28be4f0();
   input += synapse0x28bec80();
   input += synapse0x28becc0();
   input += synapse0x28bed00();
   input += synapse0x28bed40();
   input += synapse0x28bed80();
   input += synapse0x28bedc0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28be320() {
   double input = input0x28be320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bee00() {
   double input = 0.691236;
   input += synapse0x28bf140();
   input += synapse0x28bf180();
   input += synapse0x28bf1c0();
   input += synapse0x28bf200();
   input += synapse0x28bf240();
   input += synapse0x28bf280();
   input += synapse0x28bf2c0();
   input += synapse0x28bf300();
   input += synapse0x28bf340();
   input += synapse0x28bf380();
   input += synapse0x28bf3c0();
   input += synapse0x28bf400();
   input += synapse0x28bf440();
   input += synapse0x28bf480();
   input += synapse0x28bf4c0();
   input += synapse0x28bf500();
   input += synapse0x28bef90();
   input += synapse0x28befd0();
   input += synapse0x28bf650();
   input += synapse0x28bf690();
   input += synapse0x28bf6d0();
   input += synapse0x28bf710();
   input += synapse0x28bf750();
   input += synapse0x28bf790();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bee00() {
   double input = input0x28bee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bf7d0() {
   double input = 0.507123;
   input += synapse0x28bfb10();
   input += synapse0x28bfb50();
   input += synapse0x28bfb90();
   input += synapse0x28bfbd0();
   input += synapse0x28bfc10();
   input += synapse0x28bfc50();
   input += synapse0x28bfc90();
   input += synapse0x28bfcd0();
   input += synapse0x28bfd10();
   input += synapse0x28bfd50();
   input += synapse0x28bfd90();
   input += synapse0x28bfdd0();
   input += synapse0x28bfe10();
   input += synapse0x28bfe50();
   input += synapse0x28bfe90();
   input += synapse0x28bfed0();
   input += synapse0x28bf960();
   input += synapse0x28bf9a0();
   input += synapse0x28bc730();
   input += synapse0x28bc770();
   input += synapse0x28bc7b0();
   input += synapse0x28bc7f0();
   input += synapse0x28bc830();
   input += synapse0x28bc870();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bf7d0() {
   double input = input0x28bf7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28bc8b0() {
   double input = -0.579615;
   input += synapse0x28bcbf0();
   input += synapse0x28bcc30();
   input += synapse0x28bcc70();
   input += synapse0x28bccb0();
   input += synapse0x28bccf0();
   input += synapse0x28bcd30();
   input += synapse0x28bcd70();
   input += synapse0x28bcdb0();
   input += synapse0x28bcdf0();
   input += synapse0x28bce30();
   input += synapse0x28bce70();
   input += synapse0x28bceb0();
   input += synapse0x28bcef0();
   input += synapse0x28c1030();
   input += synapse0x28c1070();
   input += synapse0x28c10b0();
   input += synapse0x28bca40();
   input += synapse0x28bca80();
   input += synapse0x28c1200();
   input += synapse0x28c1240();
   input += synapse0x28c1280();
   input += synapse0x28c12c0();
   input += synapse0x28c1300();
   input += synapse0x28c1340();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28bc8b0() {
   double input = input0x28bc8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c1380() {
   double input = -0.776847;
   input += synapse0x28c16c0();
   input += synapse0x28c1700();
   input += synapse0x28c1740();
   input += synapse0x28c1780();
   input += synapse0x28c17c0();
   input += synapse0x28c1800();
   input += synapse0x28c1840();
   input += synapse0x28c1880();
   input += synapse0x28c18c0();
   input += synapse0x28c1900();
   input += synapse0x28c1940();
   input += synapse0x28c1980();
   input += synapse0x28c19c0();
   input += synapse0x28c1a00();
   input += synapse0x28c1a40();
   input += synapse0x28c1a80();
   input += synapse0x28c1510();
   input += synapse0x28c1550();
   input += synapse0x28c1bd0();
   input += synapse0x28c1c10();
   input += synapse0x28c1c50();
   input += synapse0x28c1c90();
   input += synapse0x28c1cd0();
   input += synapse0x28c1d10();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c1380() {
   double input = input0x28c1380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c1d50() {
   double input = 0.501059;
   input += synapse0x28c2090();
   input += synapse0x28c20d0();
   input += synapse0x28c2110();
   input += synapse0x28c2150();
   input += synapse0x28c2190();
   input += synapse0x28c21d0();
   input += synapse0x28c2210();
   input += synapse0x28c2250();
   input += synapse0x28c2290();
   input += synapse0x28c22d0();
   input += synapse0x28c2310();
   input += synapse0x28c2350();
   input += synapse0x28c2390();
   input += synapse0x28c23d0();
   input += synapse0x28c2410();
   input += synapse0x28c2450();
   input += synapse0x28c1ee0();
   input += synapse0x28c1f20();
   input += synapse0x28c25a0();
   input += synapse0x28c25e0();
   input += synapse0x28c2620();
   input += synapse0x28c2660();
   input += synapse0x28c26a0();
   input += synapse0x28c26e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c1d50() {
   double input = input0x28c1d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c2720() {
   double input = 1.42178;
   input += synapse0x28c2a60();
   input += synapse0x28c2aa0();
   input += synapse0x28c2ae0();
   input += synapse0x28c2b20();
   input += synapse0x28c2b60();
   input += synapse0x28c2ba0();
   input += synapse0x28c2be0();
   input += synapse0x28c2c20();
   input += synapse0x28c2c60();
   input += synapse0x28c2ca0();
   input += synapse0x28c2ce0();
   input += synapse0x28c2d20();
   input += synapse0x28c2d60();
   input += synapse0x28c2da0();
   input += synapse0x28c2de0();
   input += synapse0x28c2e20();
   input += synapse0x28c28b0();
   input += synapse0x28c28f0();
   input += synapse0x28c2f70();
   input += synapse0x28c2fb0();
   input += synapse0x28c2ff0();
   input += synapse0x28c3030();
   input += synapse0x28c3070();
   input += synapse0x28c30b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c2720() {
   double input = input0x28c2720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c30f0() {
   double input = 1.91369;
   input += synapse0x28c3430();
   input += synapse0x28b4790();
   input += synapse0x28b47d0();
   input += synapse0x28b4ad0();
   input += synapse0x28b4b10();
   input += synapse0x28b4e10();
   input += synapse0x28b4e50();
   input += synapse0x28b5150();
   input += synapse0x28b5190();
   input += synapse0x28b5490();
   input += synapse0x28b54d0();
   input += synapse0x28b57d0();
   input += synapse0x28b5810();
   input += synapse0x28b5b10();
   input += synapse0x28b5b50();
   input += synapse0x28b5e50();
   input += synapse0x28b5e90();
   input += synapse0x28b6190();
   input += synapse0x28b61d0();
   input += synapse0x28b64d0();
   input += synapse0x28b6510();
   input += synapse0x28b6810();
   input += synapse0x28b6850();
   input += synapse0x28b6b50();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c30f0() {
   double input = input0x28c30f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c4f00() {
   double input = 0.9521;
   input += synapse0x28b6b90();
   input += synapse0x28b7850();
   input += synapse0x28b7890();
   input += synapse0x28c3280();
   input += synapse0x28c32c0();
   input += synapse0x28b7b90();
   input += synapse0x28b7bd0();
   input += synapse0x2665b60();
   input += synapse0x2665ba0();
   input += synapse0x28b8310();
   input += synapse0x28b8350();
   input += synapse0x28b8650();
   input += synapse0x28b8690();
   input += synapse0x28b8990();
   input += synapse0x28b89d0();
   input += synapse0x28b8cd0();
   input += synapse0x28b8d10();
   input += synapse0x28b9010();
   input += synapse0x28b9050();
   input += synapse0x28b9350();
   input += synapse0x28b9390();
   input += synapse0x28b6e90();
   input += synapse0x28b6ed0();
   input += synapse0x28c51a0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c4f00() {
   double input = input0x28c4f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c51e0() {
   double input = 0.693679;
   input += synapse0x28c5520();
   input += synapse0x28c5560();
   input += synapse0x28c55a0();
   input += synapse0x28c55e0();
   input += synapse0x28c5620();
   input += synapse0x28c5660();
   input += synapse0x28c56a0();
   input += synapse0x28c56e0();
   input += synapse0x28c5720();
   input += synapse0x28c5760();
   input += synapse0x28c57a0();
   input += synapse0x28c57e0();
   input += synapse0x28c5820();
   input += synapse0x28c5860();
   input += synapse0x28c58a0();
   input += synapse0x28c58e0();
   input += synapse0x28c5370();
   input += synapse0x28c53b0();
   input += synapse0x28c5a30();
   input += synapse0x28c5a70();
   input += synapse0x28c5ab0();
   input += synapse0x28c5af0();
   input += synapse0x28c5b30();
   input += synapse0x28c5b70();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c51e0() {
   double input = input0x28c51e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c5bb0() {
   double input = -2.46617;
   input += synapse0x28c5ef0();
   input += synapse0x28c5f30();
   input += synapse0x28c5f70();
   input += synapse0x28c5fb0();
   input += synapse0x28c5ff0();
   input += synapse0x28c6030();
   input += synapse0x28c6070();
   input += synapse0x28c60b0();
   input += synapse0x28c60f0();
   input += synapse0x28c6130();
   input += synapse0x28c6170();
   input += synapse0x28c61b0();
   input += synapse0x28c61f0();
   input += synapse0x28c6230();
   input += synapse0x28c6270();
   input += synapse0x28c62b0();
   input += synapse0x28c5d40();
   input += synapse0x28c5d80();
   input += synapse0x28c6400();
   input += synapse0x28c6440();
   input += synapse0x28c6480();
   input += synapse0x28c64c0();
   input += synapse0x28c6500();
   input += synapse0x28c6540();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c5bb0() {
   double input = input0x28c5bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c6580() {
   double input = 0.751493;
   input += synapse0x28c68c0();
   input += synapse0x28c6900();
   input += synapse0x28c6940();
   input += synapse0x28c6980();
   input += synapse0x28c69c0();
   input += synapse0x28c6a00();
   input += synapse0x28c6a40();
   input += synapse0x28c6a80();
   input += synapse0x28c6ac0();
   input += synapse0x28c6b00();
   input += synapse0x28c6b40();
   input += synapse0x28c6b80();
   input += synapse0x28c6bc0();
   input += synapse0x28c6c00();
   input += synapse0x28c6c40();
   input += synapse0x28c6c80();
   input += synapse0x28c6710();
   input += synapse0x28c6750();
   input += synapse0x28c6dd0();
   input += synapse0x28c6e10();
   input += synapse0x28c6e50();
   input += synapse0x28c6e90();
   input += synapse0x28c6ed0();
   input += synapse0x28c6f10();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c6580() {
   double input = input0x28c6580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c6f50() {
   double input = -1.82862;
   input += synapse0x28c7290();
   input += synapse0x28c72d0();
   input += synapse0x28c7310();
   input += synapse0x28c7350();
   input += synapse0x28c7390();
   input += synapse0x28c73d0();
   input += synapse0x28c7410();
   input += synapse0x28c7450();
   input += synapse0x28c7490();
   input += synapse0x28c74d0();
   input += synapse0x28c7510();
   input += synapse0x28c7550();
   input += synapse0x28c7590();
   input += synapse0x28c75d0();
   input += synapse0x28c7610();
   input += synapse0x28c7650();
   input += synapse0x28c70e0();
   input += synapse0x28c7120();
   input += synapse0x28c77a0();
   input += synapse0x28c77e0();
   input += synapse0x28c7820();
   input += synapse0x28c7860();
   input += synapse0x28c78a0();
   input += synapse0x28c78e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c6f50() {
   double input = input0x28c6f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c7920() {
   double input = -1.69105;
   input += synapse0x28c7c60();
   input += synapse0x28c7ca0();
   input += synapse0x28c7ce0();
   input += synapse0x28c7d20();
   input += synapse0x28c7d60();
   input += synapse0x28c7da0();
   input += synapse0x28c7de0();
   input += synapse0x28c7e20();
   input += synapse0x28c7e60();
   input += synapse0x28c0020();
   input += synapse0x28c0060();
   input += synapse0x28c00a0();
   input += synapse0x28c00e0();
   input += synapse0x28c0120();
   input += synapse0x28c0160();
   input += synapse0x28c01a0();
   input += synapse0x28c7ab0();
   input += synapse0x28c7af0();
   input += synapse0x28c02f0();
   input += synapse0x28c0330();
   input += synapse0x28c0370();
   input += synapse0x28c03b0();
   input += synapse0x28c03f0();
   input += synapse0x28c0430();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c7920() {
   double input = input0x28c7920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c0470() {
   double input = 4.40285;
   input += synapse0x28c07b0();
   input += synapse0x28c07f0();
   input += synapse0x28c0830();
   input += synapse0x28c0870();
   input += synapse0x28c08b0();
   input += synapse0x28c08f0();
   input += synapse0x28c0930();
   input += synapse0x28c0970();
   input += synapse0x28c09b0();
   input += synapse0x28c09f0();
   input += synapse0x28c0a30();
   input += synapse0x28c0a70();
   input += synapse0x28c0ab0();
   input += synapse0x28c0af0();
   input += synapse0x28c0b30();
   input += synapse0x28c0b70();
   input += synapse0x28c0600();
   input += synapse0x28c0640();
   input += synapse0x28c0cc0();
   input += synapse0x28c0d00();
   input += synapse0x28c0d40();
   input += synapse0x28c0d80();
   input += synapse0x28c0dc0();
   input += synapse0x28c0e00();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c0470() {
   double input = input0x28c0470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c0e40() {
   double input = -1.65389;
   input += synapse0x28c0fd0();
   input += synapse0x28ca060();
   input += synapse0x28ca0a0();
   input += synapse0x28ca0e0();
   input += synapse0x28ca120();
   input += synapse0x28ca160();
   input += synapse0x28ca1a0();
   input += synapse0x28ca1e0();
   input += synapse0x28ca220();
   input += synapse0x28ca260();
   input += synapse0x28ca2a0();
   input += synapse0x28ca2e0();
   input += synapse0x28ca320();
   input += synapse0x28ca360();
   input += synapse0x28ca3a0();
   input += synapse0x28ca3e0();
   input += synapse0x28c9eb0();
   input += synapse0x28c9ef0();
   input += synapse0x28ca530();
   input += synapse0x28ca570();
   input += synapse0x28ca5b0();
   input += synapse0x28ca5f0();
   input += synapse0x28ca630();
   input += synapse0x28ca670();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c0e40() {
   double input = input0x28c0e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28ca6b0() {
   double input = 0.964301;
   input += synapse0x28ca9f0();
   input += synapse0x28caa30();
   input += synapse0x28caa70();
   input += synapse0x28caab0();
   input += synapse0x28caaf0();
   input += synapse0x28cab30();
   input += synapse0x28cab70();
   input += synapse0x28cabb0();
   input += synapse0x28cabf0();
   input += synapse0x28cac30();
   input += synapse0x28cac70();
   input += synapse0x28cacb0();
   input += synapse0x28cacf0();
   input += synapse0x28cad30();
   input += synapse0x28cad70();
   input += synapse0x28cadb0();
   input += synapse0x28ca840();
   input += synapse0x28ca880();
   input += synapse0x28caf00();
   input += synapse0x28caf40();
   input += synapse0x28caf80();
   input += synapse0x28cafc0();
   input += synapse0x28cb000();
   input += synapse0x28cb040();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28ca6b0() {
   double input = input0x28ca6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28cb080() {
   double input = -0.904215;
   input += synapse0x28cb3c0();
   input += synapse0x28cb400();
   input += synapse0x28cb440();
   input += synapse0x28cb480();
   input += synapse0x28cb4c0();
   input += synapse0x28cb500();
   input += synapse0x28cb540();
   input += synapse0x28cb580();
   input += synapse0x28cb5c0();
   input += synapse0x28cb600();
   input += synapse0x28cb640();
   input += synapse0x28cb680();
   input += synapse0x28cb6c0();
   input += synapse0x28cb700();
   input += synapse0x28cb740();
   input += synapse0x28cb780();
   input += synapse0x28cb210();
   input += synapse0x28cb250();
   input += synapse0x28cb8d0();
   input += synapse0x28cb910();
   input += synapse0x28cb950();
   input += synapse0x28cb990();
   input += synapse0x28cb9d0();
   input += synapse0x28cba10();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28cb080() {
   double input = input0x28cb080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28cba50() {
   double input = 0.196965;
   input += synapse0x28cbd90();
   input += synapse0x28cbdd0();
   input += synapse0x28cbe10();
   input += synapse0x28cbe50();
   input += synapse0x28cbe90();
   input += synapse0x28cbed0();
   input += synapse0x28cbf10();
   input += synapse0x28cbf50();
   input += synapse0x28cbf90();
   input += synapse0x28cbfd0();
   input += synapse0x28cc010();
   input += synapse0x28cc050();
   input += synapse0x28cc090();
   input += synapse0x28cc0d0();
   input += synapse0x28cc110();
   input += synapse0x28cc150();
   input += synapse0x28cbbe0();
   input += synapse0x28cbc20();
   input += synapse0x28cc2a0();
   input += synapse0x28cc2e0();
   input += synapse0x28cc320();
   input += synapse0x28cc360();
   input += synapse0x28cc3a0();
   input += synapse0x28cc3e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28cba50() {
   double input = input0x28cba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28cc420() {
   double input = 1.73173;
   input += synapse0x28cc760();
   input += synapse0x28cc7a0();
   input += synapse0x28cc7e0();
   input += synapse0x28cc820();
   input += synapse0x28cc860();
   input += synapse0x28cc8a0();
   input += synapse0x28cc8e0();
   input += synapse0x28cc920();
   input += synapse0x28cc960();
   input += synapse0x28cc9a0();
   input += synapse0x28cc9e0();
   input += synapse0x28cca20();
   input += synapse0x28cca60();
   input += synapse0x28ccaa0();
   input += synapse0x28ccae0();
   input += synapse0x28ccb20();
   input += synapse0x28cc5b0();
   input += synapse0x28cc5f0();
   input += synapse0x28ccc70();
   input += synapse0x28cccb0();
   input += synapse0x28cccf0();
   input += synapse0x28ccd30();
   input += synapse0x28ccd70();
   input += synapse0x28ccdb0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28cc420() {
   double input = input0x28cc420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28ccdf0() {
   double input = -0.0501247;
   input += synapse0x28cd130();
   input += synapse0x28cd170();
   input += synapse0x28cd1b0();
   input += synapse0x28cd1f0();
   input += synapse0x28cd230();
   input += synapse0x28cd270();
   input += synapse0x28cd2b0();
   input += synapse0x28cd2f0();
   input += synapse0x28cd330();
   input += synapse0x28cd370();
   input += synapse0x28cd3b0();
   input += synapse0x28cd3f0();
   input += synapse0x28cd430();
   input += synapse0x28cd470();
   input += synapse0x28cd4b0();
   input += synapse0x28cd4f0();
   input += synapse0x28ccf80();
   input += synapse0x28ccfc0();
   input += synapse0x28cd640();
   input += synapse0x28cd680();
   input += synapse0x28cd6c0();
   input += synapse0x28cd700();
   input += synapse0x28cd740();
   input += synapse0x28cd780();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28ccdf0() {
   double input = input0x28ccdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28cd7c0() {
   double input = -0.893329;
   input += synapse0x28cdb00();
   input += synapse0x28cdb40();
   input += synapse0x28cdb80();
   input += synapse0x28cdbc0();
   input += synapse0x28cdc00();
   input += synapse0x28cdc40();
   input += synapse0x28cdc80();
   input += synapse0x28cdcc0();
   input += synapse0x28cdd00();
   input += synapse0x28cdd40();
   input += synapse0x28cdd80();
   input += synapse0x28cddc0();
   input += synapse0x28cde00();
   input += synapse0x28cde40();
   input += synapse0x28cde80();
   input += synapse0x28cdec0();
   input += synapse0x28cd950();
   input += synapse0x28cd990();
   input += synapse0x28ce010();
   input += synapse0x28ce050();
   input += synapse0x28ce090();
   input += synapse0x28ce0d0();
   input += synapse0x28ce110();
   input += synapse0x28ce150();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28cd7c0() {
   double input = input0x28cd7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28ce190() {
   double input = 0.894657;
   input += synapse0x28ce4d0();
   input += synapse0x28ce510();
   input += synapse0x28ce550();
   input += synapse0x28ce590();
   input += synapse0x28ce5d0();
   input += synapse0x28ce610();
   input += synapse0x28ce650();
   input += synapse0x28ce690();
   input += synapse0x28ce6d0();
   input += synapse0x28ce710();
   input += synapse0x28ce750();
   input += synapse0x28ce790();
   input += synapse0x28ce7d0();
   input += synapse0x28ce810();
   input += synapse0x28ce850();
   input += synapse0x28ce890();
   input += synapse0x28ce320();
   input += synapse0x28ce360();
   input += synapse0x28ce9e0();
   input += synapse0x28cea20();
   input += synapse0x28cea60();
   input += synapse0x28ceaa0();
   input += synapse0x28ceae0();
   input += synapse0x28ceb20();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28ce190() {
   double input = input0x28ce190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28ceb60() {
   double input = -1.25393;
   input += synapse0x28ceea0();
   input += synapse0x28c3470();
   input += synapse0x28c34b0();
   input += synapse0x28c34f0();
   input += synapse0x28c3740();
   input += synapse0x28c3780();
   input += synapse0x28c37c0();
   input += synapse0x28c3a10();
   input += synapse0x28c3a50();
   input += synapse0x28c3ca0();
   input += synapse0x28c3ce0();
   input += synapse0x28c3d20();
   input += synapse0x28c3f70();
   input += synapse0x28c3fb0();
   input += synapse0x28c4200();
   input += synapse0x28c4240();
   input += synapse0x28cecf0();
   input += synapse0x28ced30();
   input += synapse0x28c4390();
   input += synapse0x28c48a0();
   input += synapse0x28c48e0();
   input += synapse0x28c4920();
   input += synapse0x28c4b70();
   input += synapse0x28c4bb0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28ceb60() {
   double input = input0x28ceb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c4bf0() {
   double input = 0.385488;
   input += synapse0x28c4460();
   input += synapse0x28c44a0();
   input += synapse0x28c44e0();
   input += synapse0x28c4520();
   input += synapse0x28c4ea0();
   input += synapse0x28d11f0();
   input += synapse0x28d1230();
   input += synapse0x28d1270();
   input += synapse0x28d12b0();
   input += synapse0x28d12f0();
   input += synapse0x28d1330();
   input += synapse0x28d1370();
   input += synapse0x28d13b0();
   input += synapse0x28d13f0();
   input += synapse0x28d1430();
   input += synapse0x28d1470();
   input += synapse0x28c4d80();
   input += synapse0x28c4dc0();
   input += synapse0x28d15c0();
   input += synapse0x28d1600();
   input += synapse0x28d1640();
   input += synapse0x28d1680();
   input += synapse0x28d16c0();
   input += synapse0x28d1700();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c4bf0() {
   double input = input0x28c4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d1740() {
   double input = 0.749837;
   input += synapse0x28d1a80();
   input += synapse0x28d1ac0();
   input += synapse0x28d1b00();
   input += synapse0x28d1b40();
   input += synapse0x28d1b80();
   input += synapse0x28d1bc0();
   input += synapse0x28d1c00();
   input += synapse0x28d1c40();
   input += synapse0x28d1c80();
   input += synapse0x28d1cc0();
   input += synapse0x28d1d00();
   input += synapse0x28d1d40();
   input += synapse0x28d1d80();
   input += synapse0x28d1dc0();
   input += synapse0x28d1e00();
   input += synapse0x28d1e40();
   input += synapse0x28d18d0();
   input += synapse0x28d1910();
   input += synapse0x28d1f90();
   input += synapse0x28d1fd0();
   input += synapse0x28d2010();
   input += synapse0x28d2050();
   input += synapse0x28d2090();
   input += synapse0x28d20d0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d1740() {
   double input = input0x28d1740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d2110() {
   double input = 2.50924;
   input += synapse0x28d2450();
   input += synapse0x28d2490();
   input += synapse0x28d24d0();
   input += synapse0x28d2510();
   input += synapse0x28d2550();
   input += synapse0x28d2590();
   input += synapse0x28d25d0();
   input += synapse0x28d2610();
   input += synapse0x28d2650();
   input += synapse0x28d2690();
   input += synapse0x28d26d0();
   input += synapse0x28d2710();
   input += synapse0x28d2750();
   input += synapse0x28d2790();
   input += synapse0x28d27d0();
   input += synapse0x28d2810();
   input += synapse0x28d22a0();
   input += synapse0x28d22e0();
   input += synapse0x28d2960();
   input += synapse0x28d29a0();
   input += synapse0x28d29e0();
   input += synapse0x28d2a20();
   input += synapse0x28d2a60();
   input += synapse0x28d2aa0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d2110() {
   double input = input0x28d2110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d2ae0() {
   double input = -1.79704;
   input += synapse0x28d2e20();
   input += synapse0x28d2e60();
   input += synapse0x28d2ea0();
   input += synapse0x28d2ee0();
   input += synapse0x28d2f20();
   input += synapse0x28d2f60();
   input += synapse0x28d2fa0();
   input += synapse0x28d2fe0();
   input += synapse0x28d3020();
   input += synapse0x28d3060();
   input += synapse0x28d30a0();
   input += synapse0x28d30e0();
   input += synapse0x28d3120();
   input += synapse0x28d3160();
   input += synapse0x28d31a0();
   input += synapse0x28d31e0();
   input += synapse0x28d2c70();
   input += synapse0x28d2cb0();
   input += synapse0x28d3330();
   input += synapse0x28d3370();
   input += synapse0x28d33b0();
   input += synapse0x28d33f0();
   input += synapse0x28d3430();
   input += synapse0x28d3470();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d2ae0() {
   double input = input0x28d2ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d34b0() {
   double input = 0.888712;
   input += synapse0x28d37f0();
   input += synapse0x28d3830();
   input += synapse0x28d3870();
   input += synapse0x28d38b0();
   input += synapse0x28d38f0();
   input += synapse0x28d3930();
   input += synapse0x28d3970();
   input += synapse0x28d39b0();
   input += synapse0x28d39f0();
   input += synapse0x28d3a30();
   input += synapse0x28d3a70();
   input += synapse0x28d3ab0();
   input += synapse0x28d3af0();
   input += synapse0x28d3b30();
   input += synapse0x28d3b70();
   input += synapse0x28d3bb0();
   input += synapse0x28d3640();
   input += synapse0x28d3680();
   input += synapse0x28d3d00();
   input += synapse0x28d3d40();
   input += synapse0x28d3d80();
   input += synapse0x28d3dc0();
   input += synapse0x28d3e00();
   input += synapse0x28d3e40();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d34b0() {
   double input = input0x28d34b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d3e80() {
   double input = -4.00647;
   input += synapse0x28d41c0();
   input += synapse0x28d4200();
   input += synapse0x28d4240();
   input += synapse0x28d4280();
   input += synapse0x28d42c0();
   input += synapse0x28d4300();
   input += synapse0x28d4340();
   input += synapse0x28d4380();
   input += synapse0x28d43c0();
   input += synapse0x28d4400();
   input += synapse0x28d4440();
   input += synapse0x28d4480();
   input += synapse0x28d44c0();
   input += synapse0x28d4500();
   input += synapse0x28d4540();
   input += synapse0x28d4580();
   input += synapse0x28d4010();
   input += synapse0x28d4050();
   input += synapse0x28d46d0();
   input += synapse0x28d4710();
   input += synapse0x28d4750();
   input += synapse0x28d4790();
   input += synapse0x28d47d0();
   input += synapse0x28d4810();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d3e80() {
   double input = input0x28d3e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d4850() {
   double input = 0.592258;
   input += synapse0x28d4b90();
   input += synapse0x28d4bd0();
   input += synapse0x28d4c10();
   input += synapse0x28d4c50();
   input += synapse0x28d4c90();
   input += synapse0x28d4cd0();
   input += synapse0x28d4d10();
   input += synapse0x28d4d50();
   input += synapse0x28d4d90();
   input += synapse0x28d4dd0();
   input += synapse0x28d4e10();
   input += synapse0x28d4e50();
   input += synapse0x28d4e90();
   input += synapse0x28d4ed0();
   input += synapse0x28d4f10();
   input += synapse0x28d4f50();
   input += synapse0x28d49e0();
   input += synapse0x28d4a20();
   input += synapse0x28d50a0();
   input += synapse0x28d50e0();
   input += synapse0x28d5120();
   input += synapse0x28d5160();
   input += synapse0x28d51a0();
   input += synapse0x28d51e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d4850() {
   double input = input0x28d4850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d5220() {
   double input = -0.328625;
   input += synapse0x28d5560();
   input += synapse0x28d55a0();
   input += synapse0x28d55e0();
   input += synapse0x28d5620();
   input += synapse0x28d5660();
   input += synapse0x28d56a0();
   input += synapse0x28d56e0();
   input += synapse0x28d5720();
   input += synapse0x28d5760();
   input += synapse0x28d57a0();
   input += synapse0x28d57e0();
   input += synapse0x28d5820();
   input += synapse0x28d5860();
   input += synapse0x28d58a0();
   input += synapse0x28d58e0();
   input += synapse0x28d5920();
   input += synapse0x28d53b0();
   input += synapse0x28d53f0();
   input += synapse0x28d5a70();
   input += synapse0x28d5ab0();
   input += synapse0x28d5af0();
   input += synapse0x28d5b30();
   input += synapse0x28d5b70();
   input += synapse0x28d5bb0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d5220() {
   double input = input0x28d5220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d5bf0() {
   double input = -3.22436;
   input += synapse0x28be660();
   input += synapse0x28be6a0();
   input += synapse0x28be6e0();
   input += synapse0x28be720();
   input += synapse0x28be760();
   input += synapse0x28be7a0();
   input += synapse0x28be7e0();
   input += synapse0x28be820();
   input += synapse0x28d6340();
   input += synapse0x28d6380();
   input += synapse0x28d63c0();
   input += synapse0x28d6400();
   input += synapse0x28d6440();
   input += synapse0x28d6480();
   input += synapse0x28d64c0();
   input += synapse0x28d6500();
   input += synapse0x28d5d80();
   input += synapse0x28d5dc0();
   input += synapse0x28d6650();
   input += synapse0x28d6690();
   input += synapse0x28d66d0();
   input += synapse0x28d6710();
   input += synapse0x28d6750();
   input += synapse0x28d6790();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d5bf0() {
   double input = input0x28d5bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d67d0() {
   double input = 1.66355;
   input += synapse0x28d6b10();
   input += synapse0x28d6b50();
   input += synapse0x28d6b90();
   input += synapse0x28d6bd0();
   input += synapse0x28d6c10();
   input += synapse0x28d6c50();
   input += synapse0x28d6c90();
   input += synapse0x28d6cd0();
   input += synapse0x28d6d10();
   input += synapse0x28d6d50();
   input += synapse0x28d6d90();
   input += synapse0x28d6dd0();
   input += synapse0x28d6e10();
   input += synapse0x28d6e50();
   input += synapse0x28d6e90();
   input += synapse0x28d6ed0();
   input += synapse0x28d6960();
   input += synapse0x28d69a0();
   input += synapse0x28d7020();
   input += synapse0x28d7060();
   input += synapse0x28d70a0();
   input += synapse0x28d70e0();
   input += synapse0x28d7120();
   input += synapse0x28d7160();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d67d0() {
   double input = input0x28d67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28d71a0() {
   double input = -0.0703647;
   input += synapse0x28d74e0();
   input += synapse0x28d7520();
   input += synapse0x28d7560();
   input += synapse0x28d75a0();
   input += synapse0x28d75e0();
   input += synapse0x28d7620();
   input += synapse0x28d7660();
   input += synapse0x28d76a0();
   input += synapse0x28d76e0();
   input += synapse0x28d7720();
   input += synapse0x28d7760();
   input += synapse0x28d77a0();
   input += synapse0x28d77e0();
   input += synapse0x28d7820();
   input += synapse0x28d7860();
   input += synapse0x28d78a0();
   input += synapse0x28d7330();
   input += synapse0x28d7370();
   input += synapse0x28c7ea0();
   input += synapse0x28c7ee0();
   input += synapse0x28c7f20();
   input += synapse0x28c7f60();
   input += synapse0x28c7fa0();
   input += synapse0x28c7fe0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28d71a0() {
   double input = input0x28d71a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c8020() {
   double input = -0.264491;
   input += synapse0x28c8360();
   input += synapse0x28c83a0();
   input += synapse0x28c83e0();
   input += synapse0x28c8420();
   input += synapse0x28c8460();
   input += synapse0x28c84a0();
   input += synapse0x28c84e0();
   input += synapse0x28c8520();
   input += synapse0x28c8560();
   input += synapse0x28c85a0();
   input += synapse0x28c85e0();
   input += synapse0x28c8620();
   input += synapse0x28c8660();
   input += synapse0x28c86a0();
   input += synapse0x28c86e0();
   input += synapse0x28c8720();
   input += synapse0x28c81b0();
   input += synapse0x28c81f0();
   input += synapse0x28c8870();
   input += synapse0x28c88b0();
   input += synapse0x28c88f0();
   input += synapse0x28c8930();
   input += synapse0x28c8970();
   input += synapse0x28c89b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c8020() {
   double input = input0x28c8020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c89f0() {
   double input = 1.06411;
   input += synapse0x28c8d30();
   input += synapse0x28c8d70();
   input += synapse0x28c8db0();
   input += synapse0x28c8df0();
   input += synapse0x28c8e30();
   input += synapse0x28c8e70();
   input += synapse0x28c8eb0();
   input += synapse0x28c8ef0();
   input += synapse0x28c8f30();
   input += synapse0x28c8f70();
   input += synapse0x28c8fb0();
   input += synapse0x28c8ff0();
   input += synapse0x28c9030();
   input += synapse0x28c9070();
   input += synapse0x28c90b0();
   input += synapse0x28c90f0();
   input += synapse0x28c8b80();
   input += synapse0x28c8bc0();
   input += synapse0x28c9240();
   input += synapse0x28c9280();
   input += synapse0x28c92c0();
   input += synapse0x28c9300();
   input += synapse0x28c9340();
   input += synapse0x28c9380();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c89f0() {
   double input = input0x28c89f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28c93c0() {
   double input = 0.380821;
   input += synapse0x28c9700();
   input += synapse0x28c9740();
   input += synapse0x28c9780();
   input += synapse0x28c97c0();
   input += synapse0x28c9800();
   input += synapse0x28c9840();
   input += synapse0x28c9880();
   input += synapse0x28c98c0();
   input += synapse0x28c9900();
   input += synapse0x28c9940();
   input += synapse0x28c9980();
   input += synapse0x28c99c0();
   input += synapse0x28c9a00();
   input += synapse0x28c9a40();
   input += synapse0x28c9a80();
   input += synapse0x28c9ac0();
   input += synapse0x28c9550();
   input += synapse0x28c9590();
   input += synapse0x28c9c10();
   input += synapse0x28c9c50();
   input += synapse0x28c9c90();
   input += synapse0x28c9cd0();
   input += synapse0x28c9d10();
   input += synapse0x28c9d50();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28c93c0() {
   double input = input0x28c93c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28dba00() {
   double input = 0.359658;
   input += synapse0x28dbc20();
   input += synapse0x28dbc60();
   input += synapse0x28dbca0();
   input += synapse0x28dbce0();
   input += synapse0x28dbd20();
   input += synapse0x28dbd60();
   input += synapse0x28dbda0();
   input += synapse0x28dbde0();
   input += synapse0x28dbe20();
   input += synapse0x28dbe60();
   input += synapse0x28dbea0();
   input += synapse0x28dbee0();
   input += synapse0x28dbf20();
   input += synapse0x28dbf60();
   input += synapse0x28dbfa0();
   input += synapse0x28dbfe0();
   input += synapse0x28c9d90();
   input += synapse0x28c9dd0();
   input += synapse0x28dc130();
   input += synapse0x28dc170();
   input += synapse0x28dc1b0();
   input += synapse0x28dc1f0();
   input += synapse0x28dc230();
   input += synapse0x28dc270();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28dba00() {
   double input = input0x28dba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28dc2b0() {
   double input = -1.02313;
   input += synapse0x28dc5f0();
   input += synapse0x28dc630();
   input += synapse0x28dc670();
   input += synapse0x28dc6b0();
   input += synapse0x28dc6f0();
   input += synapse0x28dc730();
   input += synapse0x28dc770();
   input += synapse0x28dc7b0();
   input += synapse0x28dc7f0();
   input += synapse0x28dc830();
   input += synapse0x28dc870();
   input += synapse0x28dc8b0();
   input += synapse0x28dc8f0();
   input += synapse0x28dc930();
   input += synapse0x28dc970();
   input += synapse0x28dc9b0();
   input += synapse0x28dc440();
   input += synapse0x28dc480();
   input += synapse0x28dcb00();
   input += synapse0x28dcb40();
   input += synapse0x28dcb80();
   input += synapse0x28dcbc0();
   input += synapse0x28dcc00();
   input += synapse0x28dcc40();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28dc2b0() {
   double input = input0x28dc2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28dcc80() {
   double input = -0.518945;
   input += synapse0x28dcfc0();
   input += synapse0x28dd000();
   input += synapse0x28dd040();
   input += synapse0x28dd080();
   input += synapse0x28dd0c0();
   input += synapse0x28dd100();
   input += synapse0x28dd140();
   input += synapse0x28dd180();
   input += synapse0x28dd1c0();
   input += synapse0x28dd200();
   input += synapse0x28dd240();
   input += synapse0x28dd280();
   input += synapse0x28dd2c0();
   input += synapse0x28dd300();
   input += synapse0x28dd340();
   input += synapse0x28dd380();
   input += synapse0x28dce10();
   input += synapse0x28dce50();
   input += synapse0x28dd4d0();
   input += synapse0x28dd510();
   input += synapse0x28dd550();
   input += synapse0x28dd590();
   input += synapse0x28dd5d0();
   input += synapse0x28dd610();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28dcc80() {
   double input = input0x28dcc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28dd650() {
   double input = 1.68772;
   input += synapse0x28dd990();
   input += synapse0x28dd9d0();
   input += synapse0x28dda10();
   input += synapse0x28dda50();
   input += synapse0x28dda90();
   input += synapse0x28ddad0();
   input += synapse0x28ddb10();
   input += synapse0x28ddb50();
   input += synapse0x28ddb90();
   input += synapse0x28ddbd0();
   input += synapse0x28ddc10();
   input += synapse0x28ddc50();
   input += synapse0x28ddc90();
   input += synapse0x28ddcd0();
   input += synapse0x28ddd10();
   input += synapse0x28ddd50();
   input += synapse0x28dd7e0();
   input += synapse0x28dd820();
   input += synapse0x28ddea0();
   input += synapse0x28ddee0();
   input += synapse0x28ddf20();
   input += synapse0x28ddf60();
   input += synapse0x28ddfa0();
   input += synapse0x28ddfe0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28dd650() {
   double input = input0x28dd650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e4850() {
   double input = -0.673582;
   input += synapse0x28ba580();
   input += synapse0x28ba5c0();
   input += synapse0x28bba90();
   input += synapse0x28bbad0();
   input += synapse0x28bc460();
   input += synapse0x28bc4a0();
   input += synapse0x28bd230();
   input += synapse0x28bd270();
   input += synapse0x28bdc00();
   input += synapse0x28bdc40();
   input += synapse0x28be5d0();
   input += synapse0x28be610();
   input += synapse0x28bf0b0();
   input += synapse0x28bf0f0();
   input += synapse0x28bfa80();
   input += synapse0x28bfac0();
   input += synapse0x28bcb60();
   input += synapse0x28bcba0();
   input += synapse0x28c1630();
   input += synapse0x28c1670();
   input += synapse0x28c2000();
   input += synapse0x28c2040();
   input += synapse0x28c29d0();
   input += synapse0x28c2a10();
   input += synapse0x28c33a0();
   input += synapse0x28c33e0();
   input += synapse0x28b7510();
   input += synapse0x28b7550();
   input += synapse0x28c5490();
   input += synapse0x28c54d0();
   input += synapse0x28c5e60();
   input += synapse0x28c5ea0();
   input += synapse0x28c6830();
   input += synapse0x28c6870();
   input += synapse0x28c7200();
   input += synapse0x28c7240();
   input += synapse0x28c7bd0();
   input += synapse0x28c7c10();
   input += synapse0x28c0720();
   input += synapse0x28c0760();
   input += synapse0x28c9fd0();
   input += synapse0x28ca010();
   input += synapse0x28ca960();
   input += synapse0x28ca9a0();
   input += synapse0x28cb330();
   input += synapse0x28cb370();
   input += synapse0x28cbd00();
   input += synapse0x28cbd40();
   input += synapse0x28cc6d0();
   input += synapse0x28cc710();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e4850() {
   double input = input0x28e4850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e4bf0() {
   double input = 0.219824;
   input += synapse0x28cee10();
   input += synapse0x28cee50();
   input += synapse0x28c43d0();
   input += synapse0x28c4410();
   input += synapse0x28d19f0();
   input += synapse0x28d1a30();
   input += synapse0x28d23c0();
   input += synapse0x28d2400();
   input += synapse0x28d2d90();
   input += synapse0x28d2dd0();
   input += synapse0x28d3760();
   input += synapse0x28d37a0();
   input += synapse0x28d4130();
   input += synapse0x28d4170();
   input += synapse0x28d4b00();
   input += synapse0x28d4b40();
   input += synapse0x28d54d0();
   input += synapse0x28d5510();
   input += synapse0x28d5ea0();
   input += synapse0x28d5ee0();
   input += synapse0x28d6a80();
   input += synapse0x28d6ac0();
   input += synapse0x28d7450();
   input += synapse0x28d7490();
   input += synapse0x28c82d0();
   input += synapse0x28c8310();
   input += synapse0x28c8ca0();
   input += synapse0x28c8ce0();
   input += synapse0x28c9670();
   input += synapse0x28c96b0();
   input += synapse0x28dbb90();
   input += synapse0x28dbbd0();
   input += synapse0x28dc560();
   input += synapse0x28dc5a0();
   input += synapse0x28dcf30();
   input += synapse0x28dcf70();
   input += synapse0x28dd900();
   input += synapse0x28dd940();
   input += synapse0x28b97f0();
   input += synapse0x28b9830();
   input += synapse0x28cd0a0();
   input += synapse0x28cd0e0();
   input += synapse0x28de020();
   input += synapse0x28de060();
   input += synapse0x28de0a0();
   input += synapse0x28de0e0();
   input += synapse0x28e4f90();
   input += synapse0x28e4fd0();
   input += synapse0x28e5010();
   input += synapse0x28e5050();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e4bf0() {
   double input = input0x28e4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e5090() {
   double input = -1.03392;
   input += synapse0x28e53d0();
   input += synapse0x28e5410();
   input += synapse0x28e5450();
   input += synapse0x28e5490();
   input += synapse0x28e54d0();
   input += synapse0x28e5510();
   input += synapse0x28e5550();
   input += synapse0x28e5590();
   input += synapse0x28e55d0();
   input += synapse0x28e5610();
   input += synapse0x28e5650();
   input += synapse0x28e5690();
   input += synapse0x28e56d0();
   input += synapse0x28e5710();
   input += synapse0x28e5750();
   input += synapse0x28e5790();
   input += synapse0x28e5220();
   input += synapse0x28e5260();
   input += synapse0x28e58e0();
   input += synapse0x28e5920();
   input += synapse0x28e5960();
   input += synapse0x28e59a0();
   input += synapse0x28e59e0();
   input += synapse0x28e5a20();
   input += synapse0x28e5a60();
   input += synapse0x28e5aa0();
   input += synapse0x28e5ae0();
   input += synapse0x28e5b20();
   input += synapse0x28e5b60();
   input += synapse0x28e5ba0();
   input += synapse0x28e5be0();
   input += synapse0x28e5c20();
   input += synapse0x28e57d0();
   input += synapse0x28e5810();
   input += synapse0x28e5850();
   input += synapse0x28e5890();
   input += synapse0x28e5e70();
   input += synapse0x28e5eb0();
   input += synapse0x28e5ef0();
   input += synapse0x28e5f30();
   input += synapse0x28e5f70();
   input += synapse0x28e5fb0();
   input += synapse0x28e5ff0();
   input += synapse0x28e6030();
   input += synapse0x28e6070();
   input += synapse0x28e60b0();
   input += synapse0x28e60f0();
   input += synapse0x28e6130();
   input += synapse0x28e6170();
   input += synapse0x28e61b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e5090() {
   double input = input0x28e5090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e61f0() {
   double input = -0.214959;
   input += synapse0x28e6530();
   input += synapse0x28e6570();
   input += synapse0x28e65b0();
   input += synapse0x28e65f0();
   input += synapse0x28e6630();
   input += synapse0x28e6670();
   input += synapse0x28e66b0();
   input += synapse0x28e66f0();
   input += synapse0x28e6730();
   input += synapse0x28e6770();
   input += synapse0x28e67b0();
   input += synapse0x28e67f0();
   input += synapse0x28e6830();
   input += synapse0x28e6870();
   input += synapse0x28e68b0();
   input += synapse0x28e68f0();
   input += synapse0x28e6380();
   input += synapse0x28e63c0();
   input += synapse0x28e6a40();
   input += synapse0x28e6a80();
   input += synapse0x28e6ac0();
   input += synapse0x28e6b00();
   input += synapse0x28e6b40();
   input += synapse0x28e6b80();
   input += synapse0x28e6bc0();
   input += synapse0x28e6c00();
   input += synapse0x28e6c40();
   input += synapse0x28e6c80();
   input += synapse0x28e6cc0();
   input += synapse0x28e6d00();
   input += synapse0x28e6d40();
   input += synapse0x28e6d80();
   input += synapse0x28e6930();
   input += synapse0x28e6970();
   input += synapse0x28e69b0();
   input += synapse0x28e69f0();
   input += synapse0x28e6fd0();
   input += synapse0x28e7010();
   input += synapse0x28e7050();
   input += synapse0x28e7090();
   input += synapse0x28e70d0();
   input += synapse0x28e7110();
   input += synapse0x28e7150();
   input += synapse0x28e7190();
   input += synapse0x28e71d0();
   input += synapse0x28e7210();
   input += synapse0x28e7250();
   input += synapse0x28e7290();
   input += synapse0x28e72d0();
   input += synapse0x28e7310();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e61f0() {
   double input = input0x28e61f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e7350() {
   double input = 0.418164;
   input += synapse0x28e7690();
   input += synapse0x28e76d0();
   input += synapse0x28e7710();
   input += synapse0x28e7750();
   input += synapse0x28e7790();
   input += synapse0x28e77d0();
   input += synapse0x28e7810();
   input += synapse0x28e7850();
   input += synapse0x28e7890();
   input += synapse0x28e78d0();
   input += synapse0x28e7910();
   input += synapse0x28e7950();
   input += synapse0x28e7990();
   input += synapse0x28e79d0();
   input += synapse0x28e7a10();
   input += synapse0x28e7a50();
   input += synapse0x28e74e0();
   input += synapse0x28e7520();
   input += synapse0x28e7ba0();
   input += synapse0x28e7be0();
   input += synapse0x28e7c20();
   input += synapse0x28e7c60();
   input += synapse0x28e7ca0();
   input += synapse0x28e7ce0();
   input += synapse0x28e7d20();
   input += synapse0x28e7d60();
   input += synapse0x28e7da0();
   input += synapse0x28e7de0();
   input += synapse0x28e7e20();
   input += synapse0x28e7e60();
   input += synapse0x28e7ea0();
   input += synapse0x28e7ee0();
   input += synapse0x28e7a90();
   input += synapse0x28e7ad0();
   input += synapse0x28e7b10();
   input += synapse0x28e7b50();
   input += synapse0x28e8130();
   input += synapse0x28e8170();
   input += synapse0x28e81b0();
   input += synapse0x28e81f0();
   input += synapse0x28e8230();
   input += synapse0x28e8270();
   input += synapse0x28e82b0();
   input += synapse0x28e82f0();
   input += synapse0x28e8330();
   input += synapse0x28e8370();
   input += synapse0x28e83b0();
   input += synapse0x28e83f0();
   input += synapse0x28e8430();
   input += synapse0x28e8470();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e7350() {
   double input = input0x28e7350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x28e84b0() {
   double input = 5.76454;
   input += synapse0x28b9590();
   input += synapse0x28e86d0();
   input += synapse0x28e8710();
   input += synapse0x28e8750();
   input += synapse0x28e8790();
   return input;
}

double NNfunction_sb_dRdR::neuron0x28e84b0() {
   double input = input0x28e84b0();
   return (input * 1)+0;
}

double NNfunction_sb_dRdR::synapse0x26743e0() {
   return (neuron0x28b4570()*-0.016465);
}

double NNfunction_sb_dRdR::synapse0x28b4430() {
   return (neuron0x28b48b0()*0.0201304);
}

double NNfunction_sb_dRdR::synapse0x28b4470() {
   return (neuron0x28b4bf0()*-0.0599587);
}

double NNfunction_sb_dRdR::synapse0x28b9880() {
   return (neuron0x28b4f30()*0.147076);
}

double NNfunction_sb_dRdR::synapse0x28b98c0() {
   return (neuron0x28b5270()*-0.160595);
}

double NNfunction_sb_dRdR::synapse0x28b9900() {
   return (neuron0x28b55b0()*0.166449);
}

double NNfunction_sb_dRdR::synapse0x28b9940() {
   return (neuron0x28b58f0()*0.267741);
}

double NNfunction_sb_dRdR::synapse0x28b9980() {
   return (neuron0x28b5c30()*-0.205541);
}

double NNfunction_sb_dRdR::synapse0x28b99c0() {
   return (neuron0x28b5f70()*-0.0879392);
}

double NNfunction_sb_dRdR::synapse0x28b9a00() {
   return (neuron0x28b62b0()*0.0288831);
}

double NNfunction_sb_dRdR::synapse0x28b9a40() {
   return (neuron0x28b65f0()*0.00259977);
}

double NNfunction_sb_dRdR::synapse0x28b9a80() {
   return (neuron0x28b6930()*0.084568);
}

double NNfunction_sb_dRdR::synapse0x28b9ac0() {
   return (neuron0x28b6c70()*0.0421328);
}

double NNfunction_sb_dRdR::synapse0x28b9b00() {
   return (neuron0x28b6fb0()*0.0375095);
}

double NNfunction_sb_dRdR::synapse0x28b9b40() {
   return (neuron0x28b72f0()*-0.501545);
}

double NNfunction_sb_dRdR::synapse0x28b9b80() {
   return (neuron0x28b7630()*-0.0591837);
}

double NNfunction_sb_dRdR::synapse0x28b43a0() {
   return (neuron0x28b7970()*0.161145);
}

double NNfunction_sb_dRdR::synapse0x28b43e0() {
   return (neuron0x28b7ed0()*0.940758);
}

double NNfunction_sb_dRdR::synapse0x2665c80() {
   return (neuron0x28b80f0()*0.0220861);
}

double NNfunction_sb_dRdR::synapse0x2665cc0() {
   return (neuron0x28b8430()*-0.00108691);
}

double NNfunction_sb_dRdR::synapse0x28b9de0() {
   return (neuron0x28b8770()*-0.0450914);
}

double NNfunction_sb_dRdR::synapse0x28b9e20() {
   return (neuron0x28b8ab0()*0.0232009);
}

double NNfunction_sb_dRdR::synapse0x28b9e60() {
   return (neuron0x28b8df0()*-0.00635453);
}

double NNfunction_sb_dRdR::synapse0x28b9ea0() {
   return (neuron0x28b9130()*0.0324874);
}

double NNfunction_sb_dRdR::synapse0x28ba220() {
   return (neuron0x28b4570()*-0.0402526);
}

double NNfunction_sb_dRdR::synapse0x28ba260() {
   return (neuron0x28b48b0()*0.0190982);
}

double NNfunction_sb_dRdR::synapse0x28ba2a0() {
   return (neuron0x28b4bf0()*0.38675);
}

double NNfunction_sb_dRdR::synapse0x28ba2e0() {
   return (neuron0x28b4f30()*-0.104223);
}

double NNfunction_sb_dRdR::synapse0x28ba320() {
   return (neuron0x28b5270()*0.223016);
}

double NNfunction_sb_dRdR::synapse0x28ba360() {
   return (neuron0x28b55b0()*0.429539);
}

double NNfunction_sb_dRdR::synapse0x28ba3a0() {
   return (neuron0x28b58f0()*-0.24305);
}

double NNfunction_sb_dRdR::synapse0x28ba3e0() {
   return (neuron0x28b5c30()*-0.294095);
}

double NNfunction_sb_dRdR::synapse0x28ba420() {
   return (neuron0x28b5f70()*0.795713);
}

double NNfunction_sb_dRdR::synapse0x28b9cd0() {
   return (neuron0x28b62b0()*-0.0441272);
}

double NNfunction_sb_dRdR::synapse0x28b9d10() {
   return (neuron0x28b65f0()*-0.266307);
}

double NNfunction_sb_dRdR::synapse0x28b9d50() {
   return (neuron0x28b6930()*0.0176366);
}

double NNfunction_sb_dRdR::synapse0x28b9d90() {
   return (neuron0x28b6c70()*-0.474633);
}

double NNfunction_sb_dRdR::synapse0x28ba670() {
   return (neuron0x28b6fb0()*0.018529);
}

double NNfunction_sb_dRdR::synapse0x28ba6b0() {
   return (neuron0x28b72f0()*0.501812);
}

double NNfunction_sb_dRdR::synapse0x28ba6f0() {
   return (neuron0x28b7630()*-0.258904);
}

double NNfunction_sb_dRdR::synapse0x28ba070() {
   return (neuron0x28b7970()*-0.300217);
}

double NNfunction_sb_dRdR::synapse0x28ba0b0() {
   return (neuron0x28b7ed0()*1.65655);
}

double NNfunction_sb_dRdR::synapse0x28ba840() {
   return (neuron0x28b80f0()*0.158884);
}

double NNfunction_sb_dRdR::synapse0x28ba880() {
   return (neuron0x28b8430()*0.431996);
}

double NNfunction_sb_dRdR::synapse0x28ba8c0() {
   return (neuron0x28b8770()*-0.173333);
}

double NNfunction_sb_dRdR::synapse0x28ba900() {
   return (neuron0x28b8ab0()*-0.165646);
}

double NNfunction_sb_dRdR::synapse0x28ba940() {
   return (neuron0x28b8df0()*0.114598);
}

double NNfunction_sb_dRdR::synapse0x28ba980() {
   return (neuron0x28b9130()*-0.263233);
}

double NNfunction_sb_dRdR::synapse0x28bad00() {
   return (neuron0x28b4570()*0.0487306);
}

double NNfunction_sb_dRdR::synapse0x28bad40() {
   return (neuron0x28b48b0()*-0.0926777);
}

double NNfunction_sb_dRdR::synapse0x28bad80() {
   return (neuron0x28b4bf0()*0.00567056);
}

double NNfunction_sb_dRdR::synapse0x28badc0() {
   return (neuron0x28b4f30()*0.496171);
}

double NNfunction_sb_dRdR::synapse0x28bae00() {
   return (neuron0x28b5270()*-0.296306);
}

double NNfunction_sb_dRdR::synapse0x28bae40() {
   return (neuron0x28b55b0()*-0.160144);
}

double NNfunction_sb_dRdR::synapse0x28bae80() {
   return (neuron0x28b58f0()*-0.000546531);
}

double NNfunction_sb_dRdR::synapse0x28baec0() {
   return (neuron0x28b5c30()*0.0197935);
}

double NNfunction_sb_dRdR::synapse0x28baf00() {
   return (neuron0x28b5f70()*0.0114943);
}

double NNfunction_sb_dRdR::synapse0x28baf40() {
   return (neuron0x28b62b0()*0.20668);
}

double NNfunction_sb_dRdR::synapse0x28baf80() {
   return (neuron0x28b65f0()*-0.364581);
}

double NNfunction_sb_dRdR::synapse0x28bafc0() {
   return (neuron0x28b6930()*0.214622);
}

double NNfunction_sb_dRdR::synapse0x28bb000() {
   return (neuron0x28b6c70()*0.0999775);
}

double NNfunction_sb_dRdR::synapse0x28bb040() {
   return (neuron0x28b6fb0()*0.322899);
}

double NNfunction_sb_dRdR::synapse0x28bb080() {
   return (neuron0x28b72f0()*-0.162977);
}

double NNfunction_sb_dRdR::synapse0x28bb0c0() {
   return (neuron0x28b7630()*-0.0801667);
}

double NNfunction_sb_dRdR::synapse0x28bab50() {
   return (neuron0x28b7970()*0.106238);
}

double NNfunction_sb_dRdR::synapse0x28bab90() {
   return (neuron0x28b7ed0()*0.74347);
}

double NNfunction_sb_dRdR::synapse0x2673ad0() {
   return (neuron0x28b80f0()*-0.700964);
}

double NNfunction_sb_dRdR::synapse0x2673b10() {
   return (neuron0x28b8430()*0.454921);
}

double NNfunction_sb_dRdR::synapse0x28a3600() {
   return (neuron0x28b8770()*-0.0775829);
}

double NNfunction_sb_dRdR::synapse0x28a3640() {
   return (neuron0x28b8ab0()*-0.0172992);
}

double NNfunction_sb_dRdR::synapse0x28a3680() {
   return (neuron0x28b8df0()*-0.0457346);
}

double NNfunction_sb_dRdR::synapse0x28b44b0() {
   return (neuron0x28b9130()*-0.0839462);
}

double NNfunction_sb_dRdR::synapse0x28ba610() {
   return (neuron0x28b4570()*-0.702499);
}

double NNfunction_sb_dRdR::synapse0x28b44f0() {
   return (neuron0x28b48b0()*-0.0593325);
}

double NNfunction_sb_dRdR::synapse0x28b4530() {
   return (neuron0x28b4bf0()*0.0231944);
}

double NNfunction_sb_dRdR::synapse0x28bb210() {
   return (neuron0x28b4f30()*0.855699);
}

double NNfunction_sb_dRdR::synapse0x28bb250() {
   return (neuron0x28b5270()*-0.246992);
}

double NNfunction_sb_dRdR::synapse0x28bb290() {
   return (neuron0x28b55b0()*-0.402198);
}

double NNfunction_sb_dRdR::synapse0x28bb2d0() {
   return (neuron0x28b58f0()*0.393134);
}

double NNfunction_sb_dRdR::synapse0x28bb310() {
   return (neuron0x28b5c30()*-0.148235);
}

double NNfunction_sb_dRdR::synapse0x28bb350() {
   return (neuron0x28b5f70()*0.275436);
}

double NNfunction_sb_dRdR::synapse0x28bb390() {
   return (neuron0x28b62b0()*-0.89798);
}

double NNfunction_sb_dRdR::synapse0x28bb3d0() {
   return (neuron0x28b65f0()*0.119048);
}

double NNfunction_sb_dRdR::synapse0x28bb410() {
   return (neuron0x28b6930()*0.269086);
}

double NNfunction_sb_dRdR::synapse0x28bb450() {
   return (neuron0x28b6c70()*-0.00528342);
}

double NNfunction_sb_dRdR::synapse0x28bb490() {
   return (neuron0x28b6fb0()*0.248911);
}

double NNfunction_sb_dRdR::synapse0x28bb4d0() {
   return (neuron0x28b72f0()*0.288714);
}

double NNfunction_sb_dRdR::synapse0x28bb510() {
   return (neuron0x28b7630()*-0.149248);
}

double NNfunction_sb_dRdR::synapse0x28ba460() {
   return (neuron0x28b7970()*-0.0502866);
}

double NNfunction_sb_dRdR::synapse0x28ba4a0() {
   return (neuron0x28b7ed0()*-0.278596);
}

double NNfunction_sb_dRdR::synapse0x28bb660() {
   return (neuron0x28b80f0()*0.602645);
}

double NNfunction_sb_dRdR::synapse0x28bb6a0() {
   return (neuron0x28b8430()*0.286925);
}

double NNfunction_sb_dRdR::synapse0x28bb6e0() {
   return (neuron0x28b8770()*-0.0803341);
}

double NNfunction_sb_dRdR::synapse0x28bb720() {
   return (neuron0x28b8ab0()*0.172128);
}

double NNfunction_sb_dRdR::synapse0x28bb760() {
   return (neuron0x28b8df0()*-0.112788);
}

double NNfunction_sb_dRdR::synapse0x28bb7a0() {
   return (neuron0x28b9130()*0.120414);
}

double NNfunction_sb_dRdR::synapse0x28bbb20() {
   return (neuron0x28b4570()*0.014473);
}

double NNfunction_sb_dRdR::synapse0x28bbb60() {
   return (neuron0x28b48b0()*-0.00391021);
}

double NNfunction_sb_dRdR::synapse0x28bbba0() {
   return (neuron0x28b4bf0()*0.0107945);
}

double NNfunction_sb_dRdR::synapse0x28bbbe0() {
   return (neuron0x28b4f30()*-0.163414);
}

double NNfunction_sb_dRdR::synapse0x28bbc20() {
   return (neuron0x28b5270()*-0.0399723);
}

double NNfunction_sb_dRdR::synapse0x28bbc60() {
   return (neuron0x28b55b0()*0.00907732);
}

double NNfunction_sb_dRdR::synapse0x28bbca0() {
   return (neuron0x28b58f0()*0.000894328);
}

double NNfunction_sb_dRdR::synapse0x28bbce0() {
   return (neuron0x28b5c30()*-0.0691061);
}

double NNfunction_sb_dRdR::synapse0x28bbd20() {
   return (neuron0x28b5f70()*0.113897);
}

double NNfunction_sb_dRdR::synapse0x28bbd60() {
   return (neuron0x28b62b0()*0.0432239);
}

double NNfunction_sb_dRdR::synapse0x28bbda0() {
   return (neuron0x28b65f0()*0.0593819);
}

double NNfunction_sb_dRdR::synapse0x28bbde0() {
   return (neuron0x28b6930()*0.0204872);
}

double NNfunction_sb_dRdR::synapse0x28bbe20() {
   return (neuron0x28b6c70()*-0.0133255);
}

double NNfunction_sb_dRdR::synapse0x28bbe60() {
   return (neuron0x28b6fb0()*0.00798456);
}

double NNfunction_sb_dRdR::synapse0x28bbea0() {
   return (neuron0x28b72f0()*-0.0704301);
}

double NNfunction_sb_dRdR::synapse0x28bbee0() {
   return (neuron0x28b7630()*-0.0515186);
}

double NNfunction_sb_dRdR::synapse0x28bb970() {
   return (neuron0x28b7970()*0.00210386);
}

double NNfunction_sb_dRdR::synapse0x28bb9b0() {
   return (neuron0x28b7ed0()*-0.342298);
}

double NNfunction_sb_dRdR::synapse0x28bc030() {
   return (neuron0x28b80f0()*-0.00531139);
}

double NNfunction_sb_dRdR::synapse0x28bc070() {
   return (neuron0x28b8430()*-0.0753343);
}

double NNfunction_sb_dRdR::synapse0x28bc0b0() {
   return (neuron0x28b8770()*-0.0193521);
}

double NNfunction_sb_dRdR::synapse0x28bc0f0() {
   return (neuron0x28b8ab0()*-0.0327702);
}

double NNfunction_sb_dRdR::synapse0x28bc130() {
   return (neuron0x28b8df0()*-0.00828708);
}

double NNfunction_sb_dRdR::synapse0x28bc170() {
   return (neuron0x28b9130()*-0.0067922);
}

double NNfunction_sb_dRdR::synapse0x28bc4f0() {
   return (neuron0x28b4570()*-0.370742);
}

double NNfunction_sb_dRdR::synapse0x28bc530() {
   return (neuron0x28b48b0()*0.0835757);
}

double NNfunction_sb_dRdR::synapse0x28bc570() {
   return (neuron0x28b4bf0()*0.377421);
}

double NNfunction_sb_dRdR::synapse0x28bc5b0() {
   return (neuron0x28b4f30()*-0.495744);
}

double NNfunction_sb_dRdR::synapse0x28bc5f0() {
   return (neuron0x28b5270()*0.195303);
}

double NNfunction_sb_dRdR::synapse0x28bc630() {
   return (neuron0x28b55b0()*-0.229837);
}

double NNfunction_sb_dRdR::synapse0x28bc670() {
   return (neuron0x28b58f0()*-0.269506);
}

double NNfunction_sb_dRdR::synapse0x28bc6b0() {
   return (neuron0x28b5c30()*0.121741);
}

double NNfunction_sb_dRdR::synapse0x28bc6f0() {
   return (neuron0x28b5f70()*0.170803);
}

double NNfunction_sb_dRdR::synapse0x2673e40() {
   return (neuron0x28b62b0()*-0.272257);
}

double NNfunction_sb_dRdR::synapse0x2673e80() {
   return (neuron0x28b65f0()*0.0773773);
}

double NNfunction_sb_dRdR::synapse0x2673ec0() {
   return (neuron0x28b6930()*0.903084);
}

double NNfunction_sb_dRdR::synapse0x2673f00() {
   return (neuron0x28b6c70()*0.839861);
}

double NNfunction_sb_dRdR::synapse0x2673f40() {
   return (neuron0x28b6fb0()*-0.439472);
}

double NNfunction_sb_dRdR::synapse0x2673f80() {
   return (neuron0x28b72f0()*0.0885777);
}

double NNfunction_sb_dRdR::synapse0x2673fc0() {
   return (neuron0x28b7630()*-0.184065);
}

double NNfunction_sb_dRdR::synapse0x28bc340() {
   return (neuron0x28b7970()*0.227427);
}

double NNfunction_sb_dRdR::synapse0x28bc380() {
   return (neuron0x28b7ed0()*-0.304619);
}

double NNfunction_sb_dRdR::synapse0x2674110() {
   return (neuron0x28b80f0()*0.139048);
}

double NNfunction_sb_dRdR::synapse0x2674150() {
   return (neuron0x28b8430()*0.715763);
}

double NNfunction_sb_dRdR::synapse0x2674190() {
   return (neuron0x28b8770()*0.0318889);
}

double NNfunction_sb_dRdR::synapse0x26741d0() {
   return (neuron0x28b8ab0()*-0.184727);
}

double NNfunction_sb_dRdR::synapse0x2674210() {
   return (neuron0x28b8df0()*-0.22257);
}

double NNfunction_sb_dRdR::synapse0x28bcf40() {
   return (neuron0x28b9130()*-0.0925718);
}

double NNfunction_sb_dRdR::synapse0x28bd2c0() {
   return (neuron0x28b4570()*0.0342652);
}

double NNfunction_sb_dRdR::synapse0x28bd300() {
   return (neuron0x28b48b0()*0.306621);
}

double NNfunction_sb_dRdR::synapse0x28bd340() {
   return (neuron0x28b4bf0()*0.0451402);
}

double NNfunction_sb_dRdR::synapse0x28bd380() {
   return (neuron0x28b4f30()*-0.551297);
}

double NNfunction_sb_dRdR::synapse0x28bd3c0() {
   return (neuron0x28b5270()*0.158412);
}

double NNfunction_sb_dRdR::synapse0x28bd400() {
   return (neuron0x28b55b0()*0.405084);
}

double NNfunction_sb_dRdR::synapse0x28bd440() {
   return (neuron0x28b58f0()*0.181578);
}

double NNfunction_sb_dRdR::synapse0x28bd480() {
   return (neuron0x28b5c30()*0.0894316);
}

double NNfunction_sb_dRdR::synapse0x28bd4c0() {
   return (neuron0x28b5f70()*-0.0670908);
}

double NNfunction_sb_dRdR::synapse0x28bd500() {
   return (neuron0x28b62b0()*-0.00991204);
}

double NNfunction_sb_dRdR::synapse0x28bd540() {
   return (neuron0x28b65f0()*-0.109677);
}

double NNfunction_sb_dRdR::synapse0x28bd580() {
   return (neuron0x28b6930()*0.0220711);
}

double NNfunction_sb_dRdR::synapse0x28bd5c0() {
   return (neuron0x28b6c70()*0.0278481);
}

double NNfunction_sb_dRdR::synapse0x28bd600() {
   return (neuron0x28b6fb0()*-0.0947608);
}

double NNfunction_sb_dRdR::synapse0x28bd640() {
   return (neuron0x28b72f0()*0.0311338);
}

double NNfunction_sb_dRdR::synapse0x28bd680() {
   return (neuron0x28b7630()*0.236211);
}

double NNfunction_sb_dRdR::synapse0x28bd110() {
   return (neuron0x28b7970()*-0.422643);
}

double NNfunction_sb_dRdR::synapse0x28bd150() {
   return (neuron0x28b7ed0()*-0.302148);
}

double NNfunction_sb_dRdR::synapse0x28bd7d0() {
   return (neuron0x28b80f0()*0.110238);
}

double NNfunction_sb_dRdR::synapse0x28bd810() {
   return (neuron0x28b8430()*0.0283787);
}

double NNfunction_sb_dRdR::synapse0x28bd850() {
   return (neuron0x28b8770()*-0.00389654);
}

double NNfunction_sb_dRdR::synapse0x28bd890() {
   return (neuron0x28b8ab0()*0.0112457);
}

double NNfunction_sb_dRdR::synapse0x28bd8d0() {
   return (neuron0x28b8df0()*-0.0118702);
}

double NNfunction_sb_dRdR::synapse0x28bd910() {
   return (neuron0x28b9130()*-0.020816);
}

double NNfunction_sb_dRdR::synapse0x28bdc90() {
   return (neuron0x28b4570()*-0.408144);
}

double NNfunction_sb_dRdR::synapse0x28bdcd0() {
   return (neuron0x28b48b0()*-0.298978);
}

double NNfunction_sb_dRdR::synapse0x28bdd10() {
   return (neuron0x28b4bf0()*0.224557);
}

double NNfunction_sb_dRdR::synapse0x28bdd50() {
   return (neuron0x28b4f30()*0.750914);
}

double NNfunction_sb_dRdR::synapse0x28bdd90() {
   return (neuron0x28b5270()*0.303733);
}

double NNfunction_sb_dRdR::synapse0x28bddd0() {
   return (neuron0x28b55b0()*-0.141838);
}

double NNfunction_sb_dRdR::synapse0x28bde10() {
   return (neuron0x28b58f0()*0.197967);
}

double NNfunction_sb_dRdR::synapse0x28bde50() {
   return (neuron0x28b5c30()*-0.342096);
}

double NNfunction_sb_dRdR::synapse0x28bde90() {
   return (neuron0x28b5f70()*-0.494337);
}

double NNfunction_sb_dRdR::synapse0x28bded0() {
   return (neuron0x28b62b0()*0.384762);
}

double NNfunction_sb_dRdR::synapse0x28bdf10() {
   return (neuron0x28b65f0()*0.184119);
}

double NNfunction_sb_dRdR::synapse0x28bdf50() {
   return (neuron0x28b6930()*1.23391);
}

double NNfunction_sb_dRdR::synapse0x28bdf90() {
   return (neuron0x28b6c70()*-0.0241117);
}

double NNfunction_sb_dRdR::synapse0x28bdfd0() {
   return (neuron0x28b6fb0()*0.0300983);
}

double NNfunction_sb_dRdR::synapse0x28be010() {
   return (neuron0x28b72f0()*-0.414038);
}

double NNfunction_sb_dRdR::synapse0x28be050() {
   return (neuron0x28b7630()*0.742174);
}

double NNfunction_sb_dRdR::synapse0x28bdae0() {
   return (neuron0x28b7970()*0.32976);
}

double NNfunction_sb_dRdR::synapse0x28bdb20() {
   return (neuron0x28b7ed0()*-0.116628);
}

double NNfunction_sb_dRdR::synapse0x28be1a0() {
   return (neuron0x28b80f0()*-0.415571);
}

double NNfunction_sb_dRdR::synapse0x28be1e0() {
   return (neuron0x28b8430()*0.26213);
}

double NNfunction_sb_dRdR::synapse0x28be220() {
   return (neuron0x28b8770()*0.183392);
}

double NNfunction_sb_dRdR::synapse0x28be260() {
   return (neuron0x28b8ab0()*-0.284588);
}

double NNfunction_sb_dRdR::synapse0x28be2a0() {
   return (neuron0x28b8df0()*0.448539);
}

double NNfunction_sb_dRdR::synapse0x28be2e0() {
   return (neuron0x28b9130()*0.478109);
}

double NNfunction_sb_dRdR::synapse0x28b7dc0() {
   return (neuron0x28b4570()*0.263329);
}

double NNfunction_sb_dRdR::synapse0x28b7e00() {
   return (neuron0x28b48b0()*-0.214928);
}

double NNfunction_sb_dRdR::synapse0x28b7e40() {
   return (neuron0x28b4bf0()*0.0220309);
}

double NNfunction_sb_dRdR::synapse0x28b7e80() {
   return (neuron0x28b4f30()*-0.35164);
}

double NNfunction_sb_dRdR::synapse0x28be870() {
   return (neuron0x28b5270()*0.158425);
}

double NNfunction_sb_dRdR::synapse0x28be8b0() {
   return (neuron0x28b55b0()*-0.203402);
}

double NNfunction_sb_dRdR::synapse0x28be8f0() {
   return (neuron0x28b58f0()*0.252348);
}

double NNfunction_sb_dRdR::synapse0x28be930() {
   return (neuron0x28b5c30()*-0.212666);
}

double NNfunction_sb_dRdR::synapse0x28be970() {
   return (neuron0x28b5f70()*0.188915);
}

double NNfunction_sb_dRdR::synapse0x28be9b0() {
   return (neuron0x28b62b0()*-0.288108);
}

double NNfunction_sb_dRdR::synapse0x28be9f0() {
   return (neuron0x28b65f0()*0.00897555);
}

double NNfunction_sb_dRdR::synapse0x28bea30() {
   return (neuron0x28b6930()*0.333869);
}

double NNfunction_sb_dRdR::synapse0x28bea70() {
   return (neuron0x28b6c70()*-0.0866608);
}

double NNfunction_sb_dRdR::synapse0x28beab0() {
   return (neuron0x28b6fb0()*0.100244);
}

double NNfunction_sb_dRdR::synapse0x28beaf0() {
   return (neuron0x28b72f0()*-0.470916);
}

double NNfunction_sb_dRdR::synapse0x28beb30() {
   return (neuron0x28b7630()*0.0885544);
}

double NNfunction_sb_dRdR::synapse0x28be4b0() {
   return (neuron0x28b7970()*-0.493052);
}

double NNfunction_sb_dRdR::synapse0x28be4f0() {
   return (neuron0x28b7ed0()*0.509666);
}

double NNfunction_sb_dRdR::synapse0x28bec80() {
   return (neuron0x28b80f0()*0.28322);
}

double NNfunction_sb_dRdR::synapse0x28becc0() {
   return (neuron0x28b8430()*0.242537);
}

double NNfunction_sb_dRdR::synapse0x28bed00() {
   return (neuron0x28b8770()*-0.153129);
}

double NNfunction_sb_dRdR::synapse0x28bed40() {
   return (neuron0x28b8ab0()*-0.0257206);
}

double NNfunction_sb_dRdR::synapse0x28bed80() {
   return (neuron0x28b8df0()*-0.140961);
}

double NNfunction_sb_dRdR::synapse0x28bedc0() {
   return (neuron0x28b9130()*0.16301);
}

double NNfunction_sb_dRdR::synapse0x28bf140() {
   return (neuron0x28b4570()*-0.227978);
}

double NNfunction_sb_dRdR::synapse0x28bf180() {
   return (neuron0x28b48b0()*0.0880112);
}

double NNfunction_sb_dRdR::synapse0x28bf1c0() {
   return (neuron0x28b4bf0()*-0.280133);
}

double NNfunction_sb_dRdR::synapse0x28bf200() {
   return (neuron0x28b4f30()*-0.489278);
}

double NNfunction_sb_dRdR::synapse0x28bf240() {
   return (neuron0x28b5270()*0.108199);
}

double NNfunction_sb_dRdR::synapse0x28bf280() {
   return (neuron0x28b55b0()*0.143674);
}

double NNfunction_sb_dRdR::synapse0x28bf2c0() {
   return (neuron0x28b58f0()*0.203029);
}

double NNfunction_sb_dRdR::synapse0x28bf300() {
   return (neuron0x28b5c30()*0.050826);
}

double NNfunction_sb_dRdR::synapse0x28bf340() {
   return (neuron0x28b5f70()*-0.44646);
}

double NNfunction_sb_dRdR::synapse0x28bf380() {
   return (neuron0x28b62b0()*0.0957504);
}

double NNfunction_sb_dRdR::synapse0x28bf3c0() {
   return (neuron0x28b65f0()*0.252618);
}

double NNfunction_sb_dRdR::synapse0x28bf400() {
   return (neuron0x28b6930()*0.375113);
}

double NNfunction_sb_dRdR::synapse0x28bf440() {
   return (neuron0x28b6c70()*0.313879);
}

double NNfunction_sb_dRdR::synapse0x28bf480() {
   return (neuron0x28b6fb0()*0.26486);
}

double NNfunction_sb_dRdR::synapse0x28bf4c0() {
   return (neuron0x28b72f0()*0.245483);
}

double NNfunction_sb_dRdR::synapse0x28bf500() {
   return (neuron0x28b7630()*0.0612198);
}

double NNfunction_sb_dRdR::synapse0x28bef90() {
   return (neuron0x28b7970()*0.16385);
}

double NNfunction_sb_dRdR::synapse0x28befd0() {
   return (neuron0x28b7ed0()*0.23834);
}

double NNfunction_sb_dRdR::synapse0x28bf650() {
   return (neuron0x28b80f0()*-0.0969503);
}

double NNfunction_sb_dRdR::synapse0x28bf690() {
   return (neuron0x28b8430()*-0.0643131);
}

double NNfunction_sb_dRdR::synapse0x28bf6d0() {
   return (neuron0x28b8770()*0.0546814);
}

double NNfunction_sb_dRdR::synapse0x28bf710() {
   return (neuron0x28b8ab0()*-0.0717051);
}

double NNfunction_sb_dRdR::synapse0x28bf750() {
   return (neuron0x28b8df0()*0.0388556);
}

double NNfunction_sb_dRdR::synapse0x28bf790() {
   return (neuron0x28b9130()*0.00317618);
}

double NNfunction_sb_dRdR::synapse0x28bfb10() {
   return (neuron0x28b4570()*-0.149247);
}

double NNfunction_sb_dRdR::synapse0x28bfb50() {
   return (neuron0x28b48b0()*0.300516);
}

double NNfunction_sb_dRdR::synapse0x28bfb90() {
   return (neuron0x28b4bf0()*-0.682234);
}

double NNfunction_sb_dRdR::synapse0x28bfbd0() {
   return (neuron0x28b4f30()*-0.671864);
}

double NNfunction_sb_dRdR::synapse0x28bfc10() {
   return (neuron0x28b5270()*0.397716);
}

double NNfunction_sb_dRdR::synapse0x28bfc50() {
   return (neuron0x28b55b0()*-0.668179);
}

double NNfunction_sb_dRdR::synapse0x28bfc90() {
   return (neuron0x28b58f0()*-0.314337);
}

double NNfunction_sb_dRdR::synapse0x28bfcd0() {
   return (neuron0x28b5c30()*0.932654);
}

double NNfunction_sb_dRdR::synapse0x28bfd10() {
   return (neuron0x28b5f70()*0.0323497);
}

double NNfunction_sb_dRdR::synapse0x28bfd50() {
   return (neuron0x28b62b0()*0.267792);
}

double NNfunction_sb_dRdR::synapse0x28bfd90() {
   return (neuron0x28b65f0()*0.398848);
}

double NNfunction_sb_dRdR::synapse0x28bfdd0() {
   return (neuron0x28b6930()*-0.0945155);
}

double NNfunction_sb_dRdR::synapse0x28bfe10() {
   return (neuron0x28b6c70()*-0.40553);
}

double NNfunction_sb_dRdR::synapse0x28bfe50() {
   return (neuron0x28b6fb0()*0.102621);
}

double NNfunction_sb_dRdR::synapse0x28bfe90() {
   return (neuron0x28b72f0()*-0.553121);
}

double NNfunction_sb_dRdR::synapse0x28bfed0() {
   return (neuron0x28b7630()*0.0775894);
}

double NNfunction_sb_dRdR::synapse0x28bf960() {
   return (neuron0x28b7970()*-0.391781);
}

double NNfunction_sb_dRdR::synapse0x28bf9a0() {
   return (neuron0x28b7ed0()*-0.0546958);
}

double NNfunction_sb_dRdR::synapse0x28bc730() {
   return (neuron0x28b80f0()*0.330378);
}

double NNfunction_sb_dRdR::synapse0x28bc770() {
   return (neuron0x28b8430()*0.0874966);
}

double NNfunction_sb_dRdR::synapse0x28bc7b0() {
   return (neuron0x28b8770()*-0.462931);
}

double NNfunction_sb_dRdR::synapse0x28bc7f0() {
   return (neuron0x28b8ab0()*0.359057);
}

double NNfunction_sb_dRdR::synapse0x28bc830() {
   return (neuron0x28b8df0()*0.189609);
}

double NNfunction_sb_dRdR::synapse0x28bc870() {
   return (neuron0x28b9130()*0.108063);
}

double NNfunction_sb_dRdR::synapse0x28bcbf0() {
   return (neuron0x28b4570()*-0.00977512);
}

double NNfunction_sb_dRdR::synapse0x28bcc30() {
   return (neuron0x28b48b0()*-0.0708013);
}

double NNfunction_sb_dRdR::synapse0x28bcc70() {
   return (neuron0x28b4bf0()*-0.0193474);
}

double NNfunction_sb_dRdR::synapse0x28bccb0() {
   return (neuron0x28b4f30()*0.265777);
}

double NNfunction_sb_dRdR::synapse0x28bccf0() {
   return (neuron0x28b5270()*0.0487775);
}

double NNfunction_sb_dRdR::synapse0x28bcd30() {
   return (neuron0x28b55b0()*0.0441757);
}

double NNfunction_sb_dRdR::synapse0x28bcd70() {
   return (neuron0x28b58f0()*0.106593);
}

double NNfunction_sb_dRdR::synapse0x28bcdb0() {
   return (neuron0x28b5c30()*-0.0901813);
}

double NNfunction_sb_dRdR::synapse0x28bcdf0() {
   return (neuron0x28b5f70()*-1.14962);
}

double NNfunction_sb_dRdR::synapse0x28bce30() {
   return (neuron0x28b62b0()*0.318375);
}

double NNfunction_sb_dRdR::synapse0x28bce70() {
   return (neuron0x28b65f0()*0.312821);
}

double NNfunction_sb_dRdR::synapse0x28bceb0() {
   return (neuron0x28b6930()*-0.256972);
}

double NNfunction_sb_dRdR::synapse0x28bcef0() {
   return (neuron0x28b6c70()*-0.206642);
}

double NNfunction_sb_dRdR::synapse0x28c1030() {
   return (neuron0x28b6fb0()*-0.335612);
}

double NNfunction_sb_dRdR::synapse0x28c1070() {
   return (neuron0x28b72f0()*-0.0955408);
}

double NNfunction_sb_dRdR::synapse0x28c10b0() {
   return (neuron0x28b7630()*-0.0943874);
}

double NNfunction_sb_dRdR::synapse0x28bca40() {
   return (neuron0x28b7970()*-0.164699);
}

double NNfunction_sb_dRdR::synapse0x28bca80() {
   return (neuron0x28b7ed0()*1.18012);
}

double NNfunction_sb_dRdR::synapse0x28c1200() {
   return (neuron0x28b80f0()*-0.345216);
}

double NNfunction_sb_dRdR::synapse0x28c1240() {
   return (neuron0x28b8430()*-0.0293939);
}

double NNfunction_sb_dRdR::synapse0x28c1280() {
   return (neuron0x28b8770()*-0.0842684);
}

double NNfunction_sb_dRdR::synapse0x28c12c0() {
   return (neuron0x28b8ab0()*0.036141);
}

double NNfunction_sb_dRdR::synapse0x28c1300() {
   return (neuron0x28b8df0()*0.0277402);
}

double NNfunction_sb_dRdR::synapse0x28c1340() {
   return (neuron0x28b9130()*0.072201);
}

double NNfunction_sb_dRdR::synapse0x28c16c0() {
   return (neuron0x28b4570()*0.0407085);
}

double NNfunction_sb_dRdR::synapse0x28c1700() {
   return (neuron0x28b48b0()*0.498643);
}

double NNfunction_sb_dRdR::synapse0x28c1740() {
   return (neuron0x28b4bf0()*-0.520764);
}

double NNfunction_sb_dRdR::synapse0x28c1780() {
   return (neuron0x28b4f30()*0.232248);
}

double NNfunction_sb_dRdR::synapse0x28c17c0() {
   return (neuron0x28b5270()*0.521997);
}

double NNfunction_sb_dRdR::synapse0x28c1800() {
   return (neuron0x28b55b0()*-0.017413);
}

double NNfunction_sb_dRdR::synapse0x28c1840() {
   return (neuron0x28b58f0()*0.695313);
}

double NNfunction_sb_dRdR::synapse0x28c1880() {
   return (neuron0x28b5c30()*0.477897);
}

double NNfunction_sb_dRdR::synapse0x28c18c0() {
   return (neuron0x28b5f70()*0.0880381);
}

double NNfunction_sb_dRdR::synapse0x28c1900() {
   return (neuron0x28b62b0()*-0.540276);
}

double NNfunction_sb_dRdR::synapse0x28c1940() {
   return (neuron0x28b65f0()*-0.315513);
}

double NNfunction_sb_dRdR::synapse0x28c1980() {
   return (neuron0x28b6930()*-0.0103504);
}

double NNfunction_sb_dRdR::synapse0x28c19c0() {
   return (neuron0x28b6c70()*-0.289085);
}

double NNfunction_sb_dRdR::synapse0x28c1a00() {
   return (neuron0x28b6fb0()*-0.0499495);
}

double NNfunction_sb_dRdR::synapse0x28c1a40() {
   return (neuron0x28b72f0()*-0.170333);
}

double NNfunction_sb_dRdR::synapse0x28c1a80() {
   return (neuron0x28b7630()*0.038607);
}

double NNfunction_sb_dRdR::synapse0x28c1510() {
   return (neuron0x28b7970()*-0.557934);
}

double NNfunction_sb_dRdR::synapse0x28c1550() {
   return (neuron0x28b7ed0()*-0.454061);
}

double NNfunction_sb_dRdR::synapse0x28c1bd0() {
   return (neuron0x28b80f0()*-0.045314);
}

double NNfunction_sb_dRdR::synapse0x28c1c10() {
   return (neuron0x28b8430()*-0.0825828);
}

double NNfunction_sb_dRdR::synapse0x28c1c50() {
   return (neuron0x28b8770()*-0.375552);
}

double NNfunction_sb_dRdR::synapse0x28c1c90() {
   return (neuron0x28b8ab0()*0.349912);
}

double NNfunction_sb_dRdR::synapse0x28c1cd0() {
   return (neuron0x28b8df0()*0.525679);
}

double NNfunction_sb_dRdR::synapse0x28c1d10() {
   return (neuron0x28b9130()*-0.10867);
}

double NNfunction_sb_dRdR::synapse0x28c2090() {
   return (neuron0x28b4570()*-0.12138);
}

double NNfunction_sb_dRdR::synapse0x28c20d0() {
   return (neuron0x28b48b0()*-0.117236);
}

double NNfunction_sb_dRdR::synapse0x28c2110() {
   return (neuron0x28b4bf0()*-0.0484779);
}

double NNfunction_sb_dRdR::synapse0x28c2150() {
   return (neuron0x28b4f30()*0.020187);
}

double NNfunction_sb_dRdR::synapse0x28c2190() {
   return (neuron0x28b5270()*0.0710981);
}

double NNfunction_sb_dRdR::synapse0x28c21d0() {
   return (neuron0x28b55b0()*-0.0635775);
}

double NNfunction_sb_dRdR::synapse0x28c2210() {
   return (neuron0x28b58f0()*0.717977);
}

double NNfunction_sb_dRdR::synapse0x28c2250() {
   return (neuron0x28b5c30()*-0.123474);
}

double NNfunction_sb_dRdR::synapse0x28c2290() {
   return (neuron0x28b5f70()*-0.00626974);
}

double NNfunction_sb_dRdR::synapse0x28c22d0() {
   return (neuron0x28b62b0()*0.00802782);
}

double NNfunction_sb_dRdR::synapse0x28c2310() {
   return (neuron0x28b65f0()*0.0652824);
}

double NNfunction_sb_dRdR::synapse0x28c2350() {
   return (neuron0x28b6930()*0.0946762);
}

double NNfunction_sb_dRdR::synapse0x28c2390() {
   return (neuron0x28b6c70()*0.106942);
}

double NNfunction_sb_dRdR::synapse0x28c23d0() {
   return (neuron0x28b6fb0()*-0.12939);
}

double NNfunction_sb_dRdR::synapse0x28c2410() {
   return (neuron0x28b72f0()*0.807002);
}

double NNfunction_sb_dRdR::synapse0x28c2450() {
   return (neuron0x28b7630()*0.0386512);
}

double NNfunction_sb_dRdR::synapse0x28c1ee0() {
   return (neuron0x28b7970()*-0.150796);
}

double NNfunction_sb_dRdR::synapse0x28c1f20() {
   return (neuron0x28b7ed0()*-0.256598);
}

double NNfunction_sb_dRdR::synapse0x28c25a0() {
   return (neuron0x28b80f0()*0.0533306);
}

double NNfunction_sb_dRdR::synapse0x28c25e0() {
   return (neuron0x28b8430()*0.0749437);
}

double NNfunction_sb_dRdR::synapse0x28c2620() {
   return (neuron0x28b8770()*0.0355187);
}

double NNfunction_sb_dRdR::synapse0x28c2660() {
   return (neuron0x28b8ab0()*0.0159988);
}

double NNfunction_sb_dRdR::synapse0x28c26a0() {
   return (neuron0x28b8df0()*0.0389375);
}

double NNfunction_sb_dRdR::synapse0x28c26e0() {
   return (neuron0x28b9130()*0.0128294);
}

double NNfunction_sb_dRdR::synapse0x28c2a60() {
   return (neuron0x28b4570()*0.73134);
}

double NNfunction_sb_dRdR::synapse0x28c2aa0() {
   return (neuron0x28b48b0()*0.779707);
}

double NNfunction_sb_dRdR::synapse0x28c2ae0() {
   return (neuron0x28b4bf0()*-0.14158);
}

double NNfunction_sb_dRdR::synapse0x28c2b20() {
   return (neuron0x28b4f30()*0.329853);
}

double NNfunction_sb_dRdR::synapse0x28c2b60() {
   return (neuron0x28b5270()*-0.393459);
}

double NNfunction_sb_dRdR::synapse0x28c2ba0() {
   return (neuron0x28b55b0()*0.174536);
}

double NNfunction_sb_dRdR::synapse0x28c2be0() {
   return (neuron0x28b58f0()*0.433763);
}

double NNfunction_sb_dRdR::synapse0x28c2c20() {
   return (neuron0x28b5c30()*-0.150675);
}

double NNfunction_sb_dRdR::synapse0x28c2c60() {
   return (neuron0x28b5f70()*-0.0962779);
}

double NNfunction_sb_dRdR::synapse0x28c2ca0() {
   return (neuron0x28b62b0()*-0.4517);
}

double NNfunction_sb_dRdR::synapse0x28c2ce0() {
   return (neuron0x28b65f0()*-0.265923);
}

double NNfunction_sb_dRdR::synapse0x28c2d20() {
   return (neuron0x28b6930()*-0.212822);
}

double NNfunction_sb_dRdR::synapse0x28c2d60() {
   return (neuron0x28b6c70()*-0.472377);
}

double NNfunction_sb_dRdR::synapse0x28c2da0() {
   return (neuron0x28b6fb0()*1.06165);
}

double NNfunction_sb_dRdR::synapse0x28c2de0() {
   return (neuron0x28b72f0()*0.392713);
}

double NNfunction_sb_dRdR::synapse0x28c2e20() {
   return (neuron0x28b7630()*-0.0476831);
}

double NNfunction_sb_dRdR::synapse0x28c28b0() {
   return (neuron0x28b7970()*0.557789);
}

double NNfunction_sb_dRdR::synapse0x28c28f0() {
   return (neuron0x28b7ed0()*-0.182849);
}

double NNfunction_sb_dRdR::synapse0x28c2f70() {
   return (neuron0x28b80f0()*-0.124209);
}

double NNfunction_sb_dRdR::synapse0x28c2fb0() {
   return (neuron0x28b8430()*-0.375227);
}

double NNfunction_sb_dRdR::synapse0x28c2ff0() {
   return (neuron0x28b8770()*0.513204);
}

double NNfunction_sb_dRdR::synapse0x28c3030() {
   return (neuron0x28b8ab0()*0.0383624);
}

double NNfunction_sb_dRdR::synapse0x28c3070() {
   return (neuron0x28b8df0()*0.0330939);
}

double NNfunction_sb_dRdR::synapse0x28c30b0() {
   return (neuron0x28b9130()*-0.387947);
}

double NNfunction_sb_dRdR::synapse0x28c3430() {
   return (neuron0x28b4570()*0.306512);
}

double NNfunction_sb_dRdR::synapse0x28b4790() {
   return (neuron0x28b48b0()*-0.0291708);
}

double NNfunction_sb_dRdR::synapse0x28b47d0() {
   return (neuron0x28b4bf0()*0.497198);
}

double NNfunction_sb_dRdR::synapse0x28b4ad0() {
   return (neuron0x28b4f30()*-1.23562);
}

double NNfunction_sb_dRdR::synapse0x28b4b10() {
   return (neuron0x28b5270()*-0.475393);
}

double NNfunction_sb_dRdR::synapse0x28b4e10() {
   return (neuron0x28b55b0()*-0.168324);
}

double NNfunction_sb_dRdR::synapse0x28b4e50() {
   return (neuron0x28b58f0()*0.21851);
}

double NNfunction_sb_dRdR::synapse0x28b5150() {
   return (neuron0x28b5c30()*-0.0951777);
}

double NNfunction_sb_dRdR::synapse0x28b5190() {
   return (neuron0x28b5f70()*-0.000533113);
}

double NNfunction_sb_dRdR::synapse0x28b5490() {
   return (neuron0x28b62b0()*0.132757);
}

double NNfunction_sb_dRdR::synapse0x28b54d0() {
   return (neuron0x28b65f0()*0.142972);
}

double NNfunction_sb_dRdR::synapse0x28b57d0() {
   return (neuron0x28b6930()*-0.351334);
}

double NNfunction_sb_dRdR::synapse0x28b5810() {
   return (neuron0x28b6c70()*-0.186692);
}

double NNfunction_sb_dRdR::synapse0x28b5b10() {
   return (neuron0x28b6fb0()*-0.276261);
}

double NNfunction_sb_dRdR::synapse0x28b5b50() {
   return (neuron0x28b72f0()*-0.26458);
}

double NNfunction_sb_dRdR::synapse0x28b5e50() {
   return (neuron0x28b7630()*-0.0298734);
}

double NNfunction_sb_dRdR::synapse0x28b5e90() {
   return (neuron0x28b7970()*0.517986);
}

double NNfunction_sb_dRdR::synapse0x28b6190() {
   return (neuron0x28b7ed0()*-0.220557);
}

double NNfunction_sb_dRdR::synapse0x28b61d0() {
   return (neuron0x28b80f0()*0.20241);
}

double NNfunction_sb_dRdR::synapse0x28b64d0() {
   return (neuron0x28b8430()*0.220201);
}

double NNfunction_sb_dRdR::synapse0x28b6510() {
   return (neuron0x28b8770()*0.112423);
}

double NNfunction_sb_dRdR::synapse0x28b6810() {
   return (neuron0x28b8ab0()*0.266319);
}

double NNfunction_sb_dRdR::synapse0x28b6850() {
   return (neuron0x28b8df0()*0.260188);
}

double NNfunction_sb_dRdR::synapse0x28b6b50() {
   return (neuron0x28b9130()*0.0180658);
}

double NNfunction_sb_dRdR::synapse0x28b6b90() {
   return (neuron0x28b4570()*0.111425);
}

double NNfunction_sb_dRdR::synapse0x28b7850() {
   return (neuron0x28b48b0()*-0.289284);
}

double NNfunction_sb_dRdR::synapse0x28b7890() {
   return (neuron0x28b4bf0()*-0.176253);
}

double NNfunction_sb_dRdR::synapse0x28c3280() {
   return (neuron0x28b4f30()*0.648923);
}

double NNfunction_sb_dRdR::synapse0x28c32c0() {
   return (neuron0x28b5270()*0.94854);
}

double NNfunction_sb_dRdR::synapse0x28b7b90() {
   return (neuron0x28b55b0()*-0.685364);
}

double NNfunction_sb_dRdR::synapse0x28b7bd0() {
   return (neuron0x28b58f0()*-0.568456);
}

double NNfunction_sb_dRdR::synapse0x2665b60() {
   return (neuron0x28b5c30()*-0.528669);
}

double NNfunction_sb_dRdR::synapse0x2665ba0() {
   return (neuron0x28b5f70()*-0.0520627);
}

double NNfunction_sb_dRdR::synapse0x28b8310() {
   return (neuron0x28b62b0()*0.0885724);
}

double NNfunction_sb_dRdR::synapse0x28b8350() {
   return (neuron0x28b65f0()*-0.17004);
}

double NNfunction_sb_dRdR::synapse0x28b8650() {
   return (neuron0x28b6930()*-0.169614);
}

double NNfunction_sb_dRdR::synapse0x28b8690() {
   return (neuron0x28b6c70()*-0.000688175);
}

double NNfunction_sb_dRdR::synapse0x28b8990() {
   return (neuron0x28b6fb0()*0.457234);
}

double NNfunction_sb_dRdR::synapse0x28b89d0() {
   return (neuron0x28b72f0()*0.33885);
}

double NNfunction_sb_dRdR::synapse0x28b8cd0() {
   return (neuron0x28b7630()*0.0225784);
}

double NNfunction_sb_dRdR::synapse0x28b8d10() {
   return (neuron0x28b7970()*0.509326);
}

double NNfunction_sb_dRdR::synapse0x28b9010() {
   return (neuron0x28b7ed0()*0.0936473);
}

double NNfunction_sb_dRdR::synapse0x28b9050() {
   return (neuron0x28b80f0()*0.022775);
}

double NNfunction_sb_dRdR::synapse0x28b9350() {
   return (neuron0x28b8430()*-0.560402);
}

double NNfunction_sb_dRdR::synapse0x28b9390() {
   return (neuron0x28b8770()*-0.848386);
}

double NNfunction_sb_dRdR::synapse0x28b6e90() {
   return (neuron0x28b8ab0()*-0.0584064);
}

double NNfunction_sb_dRdR::synapse0x28b6ed0() {
   return (neuron0x28b8df0()*0.700003);
}

double NNfunction_sb_dRdR::synapse0x28c51a0() {
   return (neuron0x28b9130()*0.024919);
}

double NNfunction_sb_dRdR::synapse0x28c5520() {
   return (neuron0x28b4570()*-0.0908662);
}

double NNfunction_sb_dRdR::synapse0x28c5560() {
   return (neuron0x28b48b0()*-0.004505);
}

double NNfunction_sb_dRdR::synapse0x28c55a0() {
   return (neuron0x28b4bf0()*-0.0382188);
}

double NNfunction_sb_dRdR::synapse0x28c55e0() {
   return (neuron0x28b4f30()*-0.44936);
}

double NNfunction_sb_dRdR::synapse0x28c5620() {
   return (neuron0x28b5270()*0.0409555);
}

double NNfunction_sb_dRdR::synapse0x28c5660() {
   return (neuron0x28b55b0()*0.0964586);
}

double NNfunction_sb_dRdR::synapse0x28c56a0() {
   return (neuron0x28b58f0()*0.297101);
}

double NNfunction_sb_dRdR::synapse0x28c56e0() {
   return (neuron0x28b5c30()*0.0608292);
}

double NNfunction_sb_dRdR::synapse0x28c5720() {
   return (neuron0x28b5f70()*-0.0291556);
}

double NNfunction_sb_dRdR::synapse0x28c5760() {
   return (neuron0x28b62b0()*0.273765);
}

double NNfunction_sb_dRdR::synapse0x28c57a0() {
   return (neuron0x28b65f0()*-0.184946);
}

double NNfunction_sb_dRdR::synapse0x28c57e0() {
   return (neuron0x28b6930()*-0.456151);
}

double NNfunction_sb_dRdR::synapse0x28c5820() {
   return (neuron0x28b6c70()*-0.279757);
}

double NNfunction_sb_dRdR::synapse0x28c5860() {
   return (neuron0x28b6fb0()*-0.121449);
}

double NNfunction_sb_dRdR::synapse0x28c58a0() {
   return (neuron0x28b72f0()*0.162994);
}

double NNfunction_sb_dRdR::synapse0x28c58e0() {
   return (neuron0x28b7630()*0.291743);
}

double NNfunction_sb_dRdR::synapse0x28c5370() {
   return (neuron0x28b7970()*0.175748);
}

double NNfunction_sb_dRdR::synapse0x28c53b0() {
   return (neuron0x28b7ed0()*0.238264);
}

double NNfunction_sb_dRdR::synapse0x28c5a30() {
   return (neuron0x28b80f0()*0.384266);
}

double NNfunction_sb_dRdR::synapse0x28c5a70() {
   return (neuron0x28b8430()*1.06019);
}

double NNfunction_sb_dRdR::synapse0x28c5ab0() {
   return (neuron0x28b8770()*0.244727);
}

double NNfunction_sb_dRdR::synapse0x28c5af0() {
   return (neuron0x28b8ab0()*0.0329169);
}

double NNfunction_sb_dRdR::synapse0x28c5b30() {
   return (neuron0x28b8df0()*0.134026);
}

double NNfunction_sb_dRdR::synapse0x28c5b70() {
   return (neuron0x28b9130()*-0.0390994);
}

double NNfunction_sb_dRdR::synapse0x28c5ef0() {
   return (neuron0x28b4570()*-0.00984654);
}

double NNfunction_sb_dRdR::synapse0x28c5f30() {
   return (neuron0x28b48b0()*0.0447025);
}

double NNfunction_sb_dRdR::synapse0x28c5f70() {
   return (neuron0x28b4bf0()*-0.0241474);
}

double NNfunction_sb_dRdR::synapse0x28c5fb0() {
   return (neuron0x28b4f30()*-3.86731);
}

double NNfunction_sb_dRdR::synapse0x28c5ff0() {
   return (neuron0x28b5270()*-0.0151458);
}

double NNfunction_sb_dRdR::synapse0x28c6030() {
   return (neuron0x28b55b0()*-0.0342255);
}

double NNfunction_sb_dRdR::synapse0x28c6070() {
   return (neuron0x28b58f0()*-0.0130674);
}

double NNfunction_sb_dRdR::synapse0x28c60b0() {
   return (neuron0x28b5c30()*-0.0476839);
}

double NNfunction_sb_dRdR::synapse0x28c60f0() {
   return (neuron0x28b5f70()*0.0296738);
}

double NNfunction_sb_dRdR::synapse0x28c6130() {
   return (neuron0x28b62b0()*0.00956027);
}

double NNfunction_sb_dRdR::synapse0x28c6170() {
   return (neuron0x28b65f0()*0.0310122);
}

double NNfunction_sb_dRdR::synapse0x28c61b0() {
   return (neuron0x28b6930()*-0.0275725);
}

double NNfunction_sb_dRdR::synapse0x28c61f0() {
   return (neuron0x28b6c70()*-0.0187494);
}

double NNfunction_sb_dRdR::synapse0x28c6230() {
   return (neuron0x28b6fb0()*0.00600053);
}

double NNfunction_sb_dRdR::synapse0x28c6270() {
   return (neuron0x28b72f0()*-0.0949841);
}

double NNfunction_sb_dRdR::synapse0x28c62b0() {
   return (neuron0x28b7630()*-0.0717587);
}

double NNfunction_sb_dRdR::synapse0x28c5d40() {
   return (neuron0x28b7970()*-0.0510444);
}

double NNfunction_sb_dRdR::synapse0x28c5d80() {
   return (neuron0x28b7ed0()*-0.0513436);
}

double NNfunction_sb_dRdR::synapse0x28c6400() {
   return (neuron0x28b80f0()*-0.00565666);
}

double NNfunction_sb_dRdR::synapse0x28c6440() {
   return (neuron0x28b8430()*0.00376725);
}

double NNfunction_sb_dRdR::synapse0x28c6480() {
   return (neuron0x28b8770()*-0.00213178);
}

double NNfunction_sb_dRdR::synapse0x28c64c0() {
   return (neuron0x28b8ab0()*-0.000242623);
}

double NNfunction_sb_dRdR::synapse0x28c6500() {
   return (neuron0x28b8df0()*-0.00290388);
}

double NNfunction_sb_dRdR::synapse0x28c6540() {
   return (neuron0x28b9130()*-0.000621936);
}

double NNfunction_sb_dRdR::synapse0x28c68c0() {
   return (neuron0x28b4570()*-0.051796);
}

double NNfunction_sb_dRdR::synapse0x28c6900() {
   return (neuron0x28b48b0()*0.0426741);
}

double NNfunction_sb_dRdR::synapse0x28c6940() {
   return (neuron0x28b4bf0()*-0.0380437);
}

double NNfunction_sb_dRdR::synapse0x28c6980() {
   return (neuron0x28b4f30()*0.087337);
}

double NNfunction_sb_dRdR::synapse0x28c69c0() {
   return (neuron0x28b5270()*0.0101884);
}

double NNfunction_sb_dRdR::synapse0x28c6a00() {
   return (neuron0x28b55b0()*-0.0101462);
}

double NNfunction_sb_dRdR::synapse0x28c6a40() {
   return (neuron0x28b58f0()*-0.0032752);
}

double NNfunction_sb_dRdR::synapse0x28c6a80() {
   return (neuron0x28b5c30()*0.0881807);
}

double NNfunction_sb_dRdR::synapse0x28c6ac0() {
   return (neuron0x28b5f70()*0.31829);
}

double NNfunction_sb_dRdR::synapse0x28c6b00() {
   return (neuron0x28b62b0()*0.477641);
}

double NNfunction_sb_dRdR::synapse0x28c6b40() {
   return (neuron0x28b65f0()*0.0642097);
}

double NNfunction_sb_dRdR::synapse0x28c6b80() {
   return (neuron0x28b6930()*-0.151602);
}

double NNfunction_sb_dRdR::synapse0x28c6bc0() {
   return (neuron0x28b6c70()*-0.108592);
}

double NNfunction_sb_dRdR::synapse0x28c6c00() {
   return (neuron0x28b6fb0()*-0.222921);
}

double NNfunction_sb_dRdR::synapse0x28c6c40() {
   return (neuron0x28b72f0()*0.0479877);
}

double NNfunction_sb_dRdR::synapse0x28c6c80() {
   return (neuron0x28b7630()*0.0393912);
}

double NNfunction_sb_dRdR::synapse0x28c6710() {
   return (neuron0x28b7970()*-0.117094);
}

double NNfunction_sb_dRdR::synapse0x28c6750() {
   return (neuron0x28b7ed0()*-1.04037);
}

double NNfunction_sb_dRdR::synapse0x28c6dd0() {
   return (neuron0x28b80f0()*-0.198047);
}

double NNfunction_sb_dRdR::synapse0x28c6e10() {
   return (neuron0x28b8430()*-0.111781);
}

double NNfunction_sb_dRdR::synapse0x28c6e50() {
   return (neuron0x28b8770()*0.00118647);
}

double NNfunction_sb_dRdR::synapse0x28c6e90() {
   return (neuron0x28b8ab0()*0.00166661);
}

double NNfunction_sb_dRdR::synapse0x28c6ed0() {
   return (neuron0x28b8df0()*-0.0121006);
}

double NNfunction_sb_dRdR::synapse0x28c6f10() {
   return (neuron0x28b9130()*0.00650023);
}

double NNfunction_sb_dRdR::synapse0x28c7290() {
   return (neuron0x28b4570()*-0.0307436);
}

double NNfunction_sb_dRdR::synapse0x28c72d0() {
   return (neuron0x28b48b0()*0.0298301);
}

double NNfunction_sb_dRdR::synapse0x28c7310() {
   return (neuron0x28b4bf0()*-0.09059);
}

double NNfunction_sb_dRdR::synapse0x28c7350() {
   return (neuron0x28b4f30()*-0.037496);
}

double NNfunction_sb_dRdR::synapse0x28c7390() {
   return (neuron0x28b5270()*-0.000541976);
}

double NNfunction_sb_dRdR::synapse0x28c73d0() {
   return (neuron0x28b55b0()*0.111515);
}

double NNfunction_sb_dRdR::synapse0x28c7410() {
   return (neuron0x28b58f0()*0.094038);
}

double NNfunction_sb_dRdR::synapse0x28c7450() {
   return (neuron0x28b5c30()*-0.0865177);
}

double NNfunction_sb_dRdR::synapse0x28c7490() {
   return (neuron0x28b5f70()*-0.191631);
}

double NNfunction_sb_dRdR::synapse0x28c74d0() {
   return (neuron0x28b62b0()*0.463434);
}

double NNfunction_sb_dRdR::synapse0x28c7510() {
   return (neuron0x28b65f0()*-0.197725);
}

double NNfunction_sb_dRdR::synapse0x28c7550() {
   return (neuron0x28b6930()*0.143104);
}

double NNfunction_sb_dRdR::synapse0x28c7590() {
   return (neuron0x28b6c70()*0.232179);
}

double NNfunction_sb_dRdR::synapse0x28c75d0() {
   return (neuron0x28b6fb0()*0.16238);
}

double NNfunction_sb_dRdR::synapse0x28c7610() {
   return (neuron0x28b72f0()*-0.0539736);
}

double NNfunction_sb_dRdR::synapse0x28c7650() {
   return (neuron0x28b7630()*0.153566);
}

double NNfunction_sb_dRdR::synapse0x28c70e0() {
   return (neuron0x28b7970()*0.0904355);
}

double NNfunction_sb_dRdR::synapse0x28c7120() {
   return (neuron0x28b7ed0()*-1.18832);
}

double NNfunction_sb_dRdR::synapse0x28c77a0() {
   return (neuron0x28b80f0()*0.227451);
}

double NNfunction_sb_dRdR::synapse0x28c77e0() {
   return (neuron0x28b8430()*0.15621);
}

double NNfunction_sb_dRdR::synapse0x28c7820() {
   return (neuron0x28b8770()*0.0309312);
}

double NNfunction_sb_dRdR::synapse0x28c7860() {
   return (neuron0x28b8ab0()*0.0417755);
}

double NNfunction_sb_dRdR::synapse0x28c78a0() {
   return (neuron0x28b8df0()*0.018621);
}

double NNfunction_sb_dRdR::synapse0x28c78e0() {
   return (neuron0x28b9130()*0.055667);
}

double NNfunction_sb_dRdR::synapse0x28c7c60() {
   return (neuron0x28b4570()*-0.00922777);
}

double NNfunction_sb_dRdR::synapse0x28c7ca0() {
   return (neuron0x28b48b0()*0.0225028);
}

double NNfunction_sb_dRdR::synapse0x28c7ce0() {
   return (neuron0x28b4bf0()*-0.0259768);
}

double NNfunction_sb_dRdR::synapse0x28c7d20() {
   return (neuron0x28b4f30()*-0.0190543);
}

double NNfunction_sb_dRdR::synapse0x28c7d60() {
   return (neuron0x28b5270()*0.117041);
}

double NNfunction_sb_dRdR::synapse0x28c7da0() {
   return (neuron0x28b55b0()*-0.0565333);
}

double NNfunction_sb_dRdR::synapse0x28c7de0() {
   return (neuron0x28b58f0()*-0.00622395);
}

double NNfunction_sb_dRdR::synapse0x28c7e20() {
   return (neuron0x28b5c30()*0.101689);
}

double NNfunction_sb_dRdR::synapse0x28c7e60() {
   return (neuron0x28b5f70()*-0.0258397);
}

double NNfunction_sb_dRdR::synapse0x28c0020() {
   return (neuron0x28b62b0()*0.0434356);
}

double NNfunction_sb_dRdR::synapse0x28c0060() {
   return (neuron0x28b65f0()*-0.0165106);
}

double NNfunction_sb_dRdR::synapse0x28c00a0() {
   return (neuron0x28b6930()*-0.50912);
}

double NNfunction_sb_dRdR::synapse0x28c00e0() {
   return (neuron0x28b6c70()*-0.514811);
}

double NNfunction_sb_dRdR::synapse0x28c0120() {
   return (neuron0x28b6fb0()*-0.000955362);
}

double NNfunction_sb_dRdR::synapse0x28c0160() {
   return (neuron0x28b72f0()*-0.253106);
}

double NNfunction_sb_dRdR::synapse0x28c01a0() {
   return (neuron0x28b7630()*-0.194802);
}

double NNfunction_sb_dRdR::synapse0x28c7ab0() {
   return (neuron0x28b7970()*-0.0352831);
}

double NNfunction_sb_dRdR::synapse0x28c7af0() {
   return (neuron0x28b7ed0()*0.0529);
}

double NNfunction_sb_dRdR::synapse0x28c02f0() {
   return (neuron0x28b80f0()*-0.251778);
}

double NNfunction_sb_dRdR::synapse0x28c0330() {
   return (neuron0x28b8430()*0.00999555);
}

double NNfunction_sb_dRdR::synapse0x28c0370() {
   return (neuron0x28b8770()*0.0283232);
}

double NNfunction_sb_dRdR::synapse0x28c03b0() {
   return (neuron0x28b8ab0()*0.0198293);
}

double NNfunction_sb_dRdR::synapse0x28c03f0() {
   return (neuron0x28b8df0()*0.032226);
}

double NNfunction_sb_dRdR::synapse0x28c0430() {
   return (neuron0x28b9130()*0.0259208);
}

double NNfunction_sb_dRdR::synapse0x28c07b0() {
   return (neuron0x28b4570()*-0.0116441);
}

double NNfunction_sb_dRdR::synapse0x28c07f0() {
   return (neuron0x28b48b0()*0.141944);
}

double NNfunction_sb_dRdR::synapse0x28c0830() {
   return (neuron0x28b4bf0()*-0.0292648);
}

double NNfunction_sb_dRdR::synapse0x28c0870() {
   return (neuron0x28b4f30()*2.5459);
}

double NNfunction_sb_dRdR::synapse0x28c08b0() {
   return (neuron0x28b5270()*-0.0119237);
}

double NNfunction_sb_dRdR::synapse0x28c08f0() {
   return (neuron0x28b55b0()*-0.0732446);
}

double NNfunction_sb_dRdR::synapse0x28c0930() {
   return (neuron0x28b58f0()*-0.0151693);
}

double NNfunction_sb_dRdR::synapse0x28c0970() {
   return (neuron0x28b5c30()*-0.116432);
}

double NNfunction_sb_dRdR::synapse0x28c09b0() {
   return (neuron0x28b5f70()*0.043456);
}

double NNfunction_sb_dRdR::synapse0x28c09f0() {
   return (neuron0x28b62b0()*0.0179991);
}

double NNfunction_sb_dRdR::synapse0x28c0a30() {
   return (neuron0x28b65f0()*0.0402906);
}

double NNfunction_sb_dRdR::synapse0x28c0a70() {
   return (neuron0x28b6930()*-0.000738866);
}

double NNfunction_sb_dRdR::synapse0x28c0ab0() {
   return (neuron0x28b6c70()*0.013477);
}

double NNfunction_sb_dRdR::synapse0x28c0af0() {
   return (neuron0x28b6fb0()*-0.0446448);
}

double NNfunction_sb_dRdR::synapse0x28c0b30() {
   return (neuron0x28b72f0()*-0.159017);
}

double NNfunction_sb_dRdR::synapse0x28c0b70() {
   return (neuron0x28b7630()*-0.0967159);
}

double NNfunction_sb_dRdR::synapse0x28c0600() {
   return (neuron0x28b7970()*-0.211441);
}

double NNfunction_sb_dRdR::synapse0x28c0640() {
   return (neuron0x28b7ed0()*-0.501079);
}

double NNfunction_sb_dRdR::synapse0x28c0cc0() {
   return (neuron0x28b80f0()*0.00676368);
}

double NNfunction_sb_dRdR::synapse0x28c0d00() {
   return (neuron0x28b8430()*0.022749);
}

double NNfunction_sb_dRdR::synapse0x28c0d40() {
   return (neuron0x28b8770()*-0.0165764);
}

double NNfunction_sb_dRdR::synapse0x28c0d80() {
   return (neuron0x28b8ab0()*0.00448354);
}

double NNfunction_sb_dRdR::synapse0x28c0dc0() {
   return (neuron0x28b8df0()*-0.0210826);
}

double NNfunction_sb_dRdR::synapse0x28c0e00() {
   return (neuron0x28b9130()*0.00814278);
}

double NNfunction_sb_dRdR::synapse0x28c0fd0() {
   return (neuron0x28b4570()*0.00105848);
}

double NNfunction_sb_dRdR::synapse0x28ca060() {
   return (neuron0x28b48b0()*0.000511629);
}

double NNfunction_sb_dRdR::synapse0x28ca0a0() {
   return (neuron0x28b4bf0()*0.00680862);
}

double NNfunction_sb_dRdR::synapse0x28ca0e0() {
   return (neuron0x28b4f30()*0.0381429);
}

double NNfunction_sb_dRdR::synapse0x28ca120() {
   return (neuron0x28b5270()*0.00755506);
}

double NNfunction_sb_dRdR::synapse0x28ca160() {
   return (neuron0x28b55b0()*-0.025106);
}

double NNfunction_sb_dRdR::synapse0x28ca1a0() {
   return (neuron0x28b58f0()*-0.0107357);
}

double NNfunction_sb_dRdR::synapse0x28ca1e0() {
   return (neuron0x28b5c30()*0.00280059);
}

double NNfunction_sb_dRdR::synapse0x28ca220() {
   return (neuron0x28b5f70()*0.0947698);
}

double NNfunction_sb_dRdR::synapse0x28ca260() {
   return (neuron0x28b62b0()*-0.0633774);
}

double NNfunction_sb_dRdR::synapse0x28ca2a0() {
   return (neuron0x28b65f0()*0.0665373);
}

double NNfunction_sb_dRdR::synapse0x28ca2e0() {
   return (neuron0x28b6930()*0.011942);
}

double NNfunction_sb_dRdR::synapse0x28ca320() {
   return (neuron0x28b6c70()*-0.00723199);
}

double NNfunction_sb_dRdR::synapse0x28ca360() {
   return (neuron0x28b6fb0()*-0.0306323);
}

double NNfunction_sb_dRdR::synapse0x28ca3a0() {
   return (neuron0x28b72f0()*-0.00904284);
}

double NNfunction_sb_dRdR::synapse0x28ca3e0() {
   return (neuron0x28b7630()*0.00534535);
}

double NNfunction_sb_dRdR::synapse0x28c9eb0() {
   return (neuron0x28b7970()*-0.017569);
}

double NNfunction_sb_dRdR::synapse0x28c9ef0() {
   return (neuron0x28b7ed0()*0.77252);
}

double NNfunction_sb_dRdR::synapse0x28ca530() {
   return (neuron0x28b80f0()*-0.0392132);
}

double NNfunction_sb_dRdR::synapse0x28ca570() {
   return (neuron0x28b8430()*-0.0870547);
}

double NNfunction_sb_dRdR::synapse0x28ca5b0() {
   return (neuron0x28b8770()*-0.0113746);
}

double NNfunction_sb_dRdR::synapse0x28ca5f0() {
   return (neuron0x28b8ab0()*-0.0190182);
}

double NNfunction_sb_dRdR::synapse0x28ca630() {
   return (neuron0x28b8df0()*0.00244649);
}

double NNfunction_sb_dRdR::synapse0x28ca670() {
   return (neuron0x28b9130()*0.00405751);
}

double NNfunction_sb_dRdR::synapse0x28ca9f0() {
   return (neuron0x28b4570()*-0.0499813);
}

double NNfunction_sb_dRdR::synapse0x28caa30() {
   return (neuron0x28b48b0()*0.409936);
}

double NNfunction_sb_dRdR::synapse0x28caa70() {
   return (neuron0x28b4bf0()*-0.0916745);
}

double NNfunction_sb_dRdR::synapse0x28caab0() {
   return (neuron0x28b4f30()*-0.0872765);
}

double NNfunction_sb_dRdR::synapse0x28caaf0() {
   return (neuron0x28b5270()*-0.164484);
}

double NNfunction_sb_dRdR::synapse0x28cab30() {
   return (neuron0x28b55b0()*0.315434);
}

double NNfunction_sb_dRdR::synapse0x28cab70() {
   return (neuron0x28b58f0()*-0.2026);
}

double NNfunction_sb_dRdR::synapse0x28cabb0() {
   return (neuron0x28b5c30()*0.0931346);
}

double NNfunction_sb_dRdR::synapse0x28cabf0() {
   return (neuron0x28b5f70()*0.0720593);
}

double NNfunction_sb_dRdR::synapse0x28cac30() {
   return (neuron0x28b62b0()*0.00359994);
}

double NNfunction_sb_dRdR::synapse0x28cac70() {
   return (neuron0x28b65f0()*0.0246395);
}

double NNfunction_sb_dRdR::synapse0x28cacb0() {
   return (neuron0x28b6930()*-0.0116888);
}

double NNfunction_sb_dRdR::synapse0x28cacf0() {
   return (neuron0x28b6c70()*-0.0292554);
}

double NNfunction_sb_dRdR::synapse0x28cad30() {
   return (neuron0x28b6fb0()*-0.0257357);
}

double NNfunction_sb_dRdR::synapse0x28cad70() {
   return (neuron0x28b72f0()*0.444276);
}

double NNfunction_sb_dRdR::synapse0x28cadb0() {
   return (neuron0x28b7630()*-0.0492668);
}

double NNfunction_sb_dRdR::synapse0x28ca840() {
   return (neuron0x28b7970()*0.226377);
}

double NNfunction_sb_dRdR::synapse0x28ca880() {
   return (neuron0x28b7ed0()*-0.555647);
}

double NNfunction_sb_dRdR::synapse0x28caf00() {
   return (neuron0x28b80f0()*0.00569397);
}

double NNfunction_sb_dRdR::synapse0x28caf40() {
   return (neuron0x28b8430()*-0.0785065);
}

double NNfunction_sb_dRdR::synapse0x28caf80() {
   return (neuron0x28b8770()*0.00185981);
}

double NNfunction_sb_dRdR::synapse0x28cafc0() {
   return (neuron0x28b8ab0()*-0.00599142);
}

double NNfunction_sb_dRdR::synapse0x28cb000() {
   return (neuron0x28b8df0()*0.0286576);
}

double NNfunction_sb_dRdR::synapse0x28cb040() {
   return (neuron0x28b9130()*0.0626428);
}

double NNfunction_sb_dRdR::synapse0x28cb3c0() {
   return (neuron0x28b4570()*-0.103908);
}

double NNfunction_sb_dRdR::synapse0x28cb400() {
   return (neuron0x28b48b0()*-0.0349402);
}

double NNfunction_sb_dRdR::synapse0x28cb440() {
   return (neuron0x28b4bf0()*0.0849305);
}

double NNfunction_sb_dRdR::synapse0x28cb480() {
   return (neuron0x28b4f30()*-0.599183);
}

double NNfunction_sb_dRdR::synapse0x28cb4c0() {
   return (neuron0x28b5270()*-0.2064);
}

double NNfunction_sb_dRdR::synapse0x28cb500() {
   return (neuron0x28b55b0()*-0.0896246);
}

double NNfunction_sb_dRdR::synapse0x28cb540() {
   return (neuron0x28b58f0()*0.180385);
}

double NNfunction_sb_dRdR::synapse0x28cb580() {
   return (neuron0x28b5c30()*-0.299934);
}

double NNfunction_sb_dRdR::synapse0x28cb5c0() {
   return (neuron0x28b5f70()*0.0951999);
}

double NNfunction_sb_dRdR::synapse0x28cb600() {
   return (neuron0x28b62b0()*-0.153479);
}

double NNfunction_sb_dRdR::synapse0x28cb640() {
   return (neuron0x28b65f0()*-0.051699);
}

double NNfunction_sb_dRdR::synapse0x28cb680() {
   return (neuron0x28b6930()*-0.521413);
}

double NNfunction_sb_dRdR::synapse0x28cb6c0() {
   return (neuron0x28b6c70()*-0.62937);
}

double NNfunction_sb_dRdR::synapse0x28cb700() {
   return (neuron0x28b6fb0()*0.680392);
}

double NNfunction_sb_dRdR::synapse0x28cb740() {
   return (neuron0x28b72f0()*-0.0938671);
}

double NNfunction_sb_dRdR::synapse0x28cb780() {
   return (neuron0x28b7630()*0.201378);
}

double NNfunction_sb_dRdR::synapse0x28cb210() {
   return (neuron0x28b7970()*0.494876);
}

double NNfunction_sb_dRdR::synapse0x28cb250() {
   return (neuron0x28b7ed0()*0.130557);
}

double NNfunction_sb_dRdR::synapse0x28cb8d0() {
   return (neuron0x28b80f0()*-0.138198);
}

double NNfunction_sb_dRdR::synapse0x28cb910() {
   return (neuron0x28b8430()*-0.14535);
}

double NNfunction_sb_dRdR::synapse0x28cb950() {
   return (neuron0x28b8770()*-0.0162893);
}

double NNfunction_sb_dRdR::synapse0x28cb990() {
   return (neuron0x28b8ab0()*-0.025326);
}

double NNfunction_sb_dRdR::synapse0x28cb9d0() {
   return (neuron0x28b8df0()*-0.150219);
}

double NNfunction_sb_dRdR::synapse0x28cba10() {
   return (neuron0x28b9130()*-0.106366);
}

double NNfunction_sb_dRdR::synapse0x28cbd90() {
   return (neuron0x28b4570()*-0.22863);
}

double NNfunction_sb_dRdR::synapse0x28cbdd0() {
   return (neuron0x28b48b0()*1.04097);
}

double NNfunction_sb_dRdR::synapse0x28cbe10() {
   return (neuron0x28b4bf0()*0.439856);
}

double NNfunction_sb_dRdR::synapse0x28cbe50() {
   return (neuron0x28b4f30()*0.176766);
}

double NNfunction_sb_dRdR::synapse0x28cbe90() {
   return (neuron0x28b5270()*0.187662);
}

double NNfunction_sb_dRdR::synapse0x28cbed0() {
   return (neuron0x28b55b0()*-0.613009);
}

double NNfunction_sb_dRdR::synapse0x28cbf10() {
   return (neuron0x28b58f0()*0.42375);
}

double NNfunction_sb_dRdR::synapse0x28cbf50() {
   return (neuron0x28b5c30()*-0.397298);
}

double NNfunction_sb_dRdR::synapse0x28cbf90() {
   return (neuron0x28b5f70()*-0.191191);
}

double NNfunction_sb_dRdR::synapse0x28cbfd0() {
   return (neuron0x28b62b0()*-0.0897493);
}

double NNfunction_sb_dRdR::synapse0x28cc010() {
   return (neuron0x28b65f0()*0.320634);
}

double NNfunction_sb_dRdR::synapse0x28cc050() {
   return (neuron0x28b6930()*0.252724);
}

double NNfunction_sb_dRdR::synapse0x28cc090() {
   return (neuron0x28b6c70()*-0.0626613);
}

double NNfunction_sb_dRdR::synapse0x28cc0d0() {
   return (neuron0x28b6fb0()*0.142541);
}

double NNfunction_sb_dRdR::synapse0x28cc110() {
   return (neuron0x28b72f0()*-0.61834);
}

double NNfunction_sb_dRdR::synapse0x28cc150() {
   return (neuron0x28b7630()*0.127735);
}

double NNfunction_sb_dRdR::synapse0x28cbbe0() {
   return (neuron0x28b7970()*-0.538974);
}

double NNfunction_sb_dRdR::synapse0x28cbc20() {
   return (neuron0x28b7ed0()*0.14085);
}

double NNfunction_sb_dRdR::synapse0x28cc2a0() {
   return (neuron0x28b80f0()*0.352811);
}

double NNfunction_sb_dRdR::synapse0x28cc2e0() {
   return (neuron0x28b8430()*-0.447566);
}

double NNfunction_sb_dRdR::synapse0x28cc320() {
   return (neuron0x28b8770()*-0.116978);
}

double NNfunction_sb_dRdR::synapse0x28cc360() {
   return (neuron0x28b8ab0()*0.812758);
}

double NNfunction_sb_dRdR::synapse0x28cc3a0() {
   return (neuron0x28b8df0()*-0.35874);
}

double NNfunction_sb_dRdR::synapse0x28cc3e0() {
   return (neuron0x28b9130()*-0.331437);
}

double NNfunction_sb_dRdR::synapse0x28cc760() {
   return (neuron0x28b4570()*0.00692398);
}

double NNfunction_sb_dRdR::synapse0x28cc7a0() {
   return (neuron0x28b48b0()*-0.00588055);
}

double NNfunction_sb_dRdR::synapse0x28cc7e0() {
   return (neuron0x28b4bf0()*0.0172894);
}

double NNfunction_sb_dRdR::synapse0x28cc820() {
   return (neuron0x28b4f30()*-0.00925903);
}

double NNfunction_sb_dRdR::synapse0x28cc860() {
   return (neuron0x28b5270()*-0.108838);
}

double NNfunction_sb_dRdR::synapse0x28cc8a0() {
   return (neuron0x28b55b0()*0.113011);
}

double NNfunction_sb_dRdR::synapse0x28cc8e0() {
   return (neuron0x28b58f0()*0.0277953);
}

double NNfunction_sb_dRdR::synapse0x28cc920() {
   return (neuron0x28b5c30()*-0.07784);
}

double NNfunction_sb_dRdR::synapse0x28cc960() {
   return (neuron0x28b5f70()*0.026306);
}

double NNfunction_sb_dRdR::synapse0x28cc9a0() {
   return (neuron0x28b62b0()*-0.0187439);
}

double NNfunction_sb_dRdR::synapse0x28cc9e0() {
   return (neuron0x28b65f0()*0.0361494);
}

double NNfunction_sb_dRdR::synapse0x28cca20() {
   return (neuron0x28b6930()*-0.287168);
}

double NNfunction_sb_dRdR::synapse0x28cca60() {
   return (neuron0x28b6c70()*-0.270658);
}

double NNfunction_sb_dRdR::synapse0x28ccaa0() {
   return (neuron0x28b6fb0()*0.0626223);
}

double NNfunction_sb_dRdR::synapse0x28ccae0() {
   return (neuron0x28b72f0()*-0.154332);
}

double NNfunction_sb_dRdR::synapse0x28ccb20() {
   return (neuron0x28b7630()*-0.223388);
}

double NNfunction_sb_dRdR::synapse0x28cc5b0() {
   return (neuron0x28b7970()*0.0958401);
}

double NNfunction_sb_dRdR::synapse0x28cc5f0() {
   return (neuron0x28b7ed0()*-0.0315442);
}

double NNfunction_sb_dRdR::synapse0x28ccc70() {
   return (neuron0x28b80f0()*-0.174031);
}

double NNfunction_sb_dRdR::synapse0x28cccb0() {
   return (neuron0x28b8430()*0.0306191);
}

double NNfunction_sb_dRdR::synapse0x28cccf0() {
   return (neuron0x28b8770()*-0.0325103);
}

double NNfunction_sb_dRdR::synapse0x28ccd30() {
   return (neuron0x28b8ab0()*-0.0090507);
}

double NNfunction_sb_dRdR::synapse0x28ccd70() {
   return (neuron0x28b8df0()*-0.0264646);
}

double NNfunction_sb_dRdR::synapse0x28ccdb0() {
   return (neuron0x28b9130()*-0.0300497);
}

double NNfunction_sb_dRdR::synapse0x28cd130() {
   return (neuron0x28b4570()*-0.0983269);
}

double NNfunction_sb_dRdR::synapse0x28cd170() {
   return (neuron0x28b48b0()*0.624623);
}

double NNfunction_sb_dRdR::synapse0x28cd1b0() {
   return (neuron0x28b4bf0()*0.202782);
}

double NNfunction_sb_dRdR::synapse0x28cd1f0() {
   return (neuron0x28b4f30()*0.641426);
}

double NNfunction_sb_dRdR::synapse0x28cd230() {
   return (neuron0x28b5270()*0.0609569);
}

double NNfunction_sb_dRdR::synapse0x28cd270() {
   return (neuron0x28b55b0()*-0.197628);
}

double NNfunction_sb_dRdR::synapse0x28cd2b0() {
   return (neuron0x28b58f0()*0.113188);
}

double NNfunction_sb_dRdR::synapse0x28cd2f0() {
   return (neuron0x28b5c30()*0.478039);
}

double NNfunction_sb_dRdR::synapse0x28cd330() {
   return (neuron0x28b5f70()*-0.0253401);
}

double NNfunction_sb_dRdR::synapse0x28cd370() {
   return (neuron0x28b62b0()*0.19168);
}

double NNfunction_sb_dRdR::synapse0x28cd3b0() {
   return (neuron0x28b65f0()*0.135463);
}

double NNfunction_sb_dRdR::synapse0x28cd3f0() {
   return (neuron0x28b6930()*0.489493);
}

double NNfunction_sb_dRdR::synapse0x28cd430() {
   return (neuron0x28b6c70()*-0.342903);
}

double NNfunction_sb_dRdR::synapse0x28cd470() {
   return (neuron0x28b6fb0()*-0.0184301);
}

double NNfunction_sb_dRdR::synapse0x28cd4b0() {
   return (neuron0x28b72f0()*-0.239527);
}

double NNfunction_sb_dRdR::synapse0x28cd4f0() {
   return (neuron0x28b7630()*0.240562);
}

double NNfunction_sb_dRdR::synapse0x28ccf80() {
   return (neuron0x28b7970()*0.0567085);
}

double NNfunction_sb_dRdR::synapse0x28ccfc0() {
   return (neuron0x28b7ed0()*-0.514886);
}

double NNfunction_sb_dRdR::synapse0x28cd640() {
   return (neuron0x28b80f0()*0.466128);
}

double NNfunction_sb_dRdR::synapse0x28cd680() {
   return (neuron0x28b8430()*-0.132376);
}

double NNfunction_sb_dRdR::synapse0x28cd6c0() {
   return (neuron0x28b8770()*0.149768);
}

double NNfunction_sb_dRdR::synapse0x28cd700() {
   return (neuron0x28b8ab0()*0.211084);
}

double NNfunction_sb_dRdR::synapse0x28cd740() {
   return (neuron0x28b8df0()*-0.123887);
}

double NNfunction_sb_dRdR::synapse0x28cd780() {
   return (neuron0x28b9130()*0.036521);
}

double NNfunction_sb_dRdR::synapse0x28cdb00() {
   return (neuron0x28b4570()*0.446122);
}

double NNfunction_sb_dRdR::synapse0x28cdb40() {
   return (neuron0x28b48b0()*0.634429);
}

double NNfunction_sb_dRdR::synapse0x28cdb80() {
   return (neuron0x28b4bf0()*-0.245887);
}

double NNfunction_sb_dRdR::synapse0x28cdbc0() {
   return (neuron0x28b4f30()*0.353501);
}

double NNfunction_sb_dRdR::synapse0x28cdc00() {
   return (neuron0x28b5270()*-0.0352712);
}

double NNfunction_sb_dRdR::synapse0x28cdc40() {
   return (neuron0x28b55b0()*-0.0647181);
}

double NNfunction_sb_dRdR::synapse0x28cdc80() {
   return (neuron0x28b58f0()*-0.116083);
}

double NNfunction_sb_dRdR::synapse0x28cdcc0() {
   return (neuron0x28b5c30()*-0.141192);
}

double NNfunction_sb_dRdR::synapse0x28cdd00() {
   return (neuron0x28b5f70()*-0.485768);
}

double NNfunction_sb_dRdR::synapse0x28cdd40() {
   return (neuron0x28b62b0()*0.730069);
}

double NNfunction_sb_dRdR::synapse0x28cdd80() {
   return (neuron0x28b65f0()*-0.62334);
}

double NNfunction_sb_dRdR::synapse0x28cddc0() {
   return (neuron0x28b6930()*-0.0869418);
}

double NNfunction_sb_dRdR::synapse0x28cde00() {
   return (neuron0x28b6c70()*0.278847);
}

double NNfunction_sb_dRdR::synapse0x28cde40() {
   return (neuron0x28b6fb0()*0.687834);
}

double NNfunction_sb_dRdR::synapse0x28cde80() {
   return (neuron0x28b72f0()*-0.0821878);
}

double NNfunction_sb_dRdR::synapse0x28cdec0() {
   return (neuron0x28b7630()*-0.51127);
}

double NNfunction_sb_dRdR::synapse0x28cd950() {
   return (neuron0x28b7970()*0.426885);
}

double NNfunction_sb_dRdR::synapse0x28cd990() {
   return (neuron0x28b7ed0()*0.0631728);
}

double NNfunction_sb_dRdR::synapse0x28ce010() {
   return (neuron0x28b80f0()*0.498999);
}

double NNfunction_sb_dRdR::synapse0x28ce050() {
   return (neuron0x28b8430()*-0.227676);
}

double NNfunction_sb_dRdR::synapse0x28ce090() {
   return (neuron0x28b8770()*0.176067);
}

double NNfunction_sb_dRdR::synapse0x28ce0d0() {
   return (neuron0x28b8ab0()*0.141);
}

double NNfunction_sb_dRdR::synapse0x28ce110() {
   return (neuron0x28b8df0()*-0.0695966);
}

double NNfunction_sb_dRdR::synapse0x28ce150() {
   return (neuron0x28b9130()*-0.300486);
}

double NNfunction_sb_dRdR::synapse0x28ce4d0() {
   return (neuron0x28b4570()*-0.00463534);
}

double NNfunction_sb_dRdR::synapse0x28ce510() {
   return (neuron0x28b48b0()*0.00279591);
}

double NNfunction_sb_dRdR::synapse0x28ce550() {
   return (neuron0x28b4bf0()*-0.000856941);
}

double NNfunction_sb_dRdR::synapse0x28ce590() {
   return (neuron0x28b4f30()*8.14092);
}

double NNfunction_sb_dRdR::synapse0x28ce5d0() {
   return (neuron0x28b5270()*-0.00445809);
}

double NNfunction_sb_dRdR::synapse0x28ce610() {
   return (neuron0x28b55b0()*0.025447);
}

double NNfunction_sb_dRdR::synapse0x28ce650() {
   return (neuron0x28b58f0()*-0.00408824);
}

double NNfunction_sb_dRdR::synapse0x28ce690() {
   return (neuron0x28b5c30()*0.0150455);
}

double NNfunction_sb_dRdR::synapse0x28ce6d0() {
   return (neuron0x28b5f70()*0.00898193);
}

double NNfunction_sb_dRdR::synapse0x28ce710() {
   return (neuron0x28b62b0()*0.00637266);
}

double NNfunction_sb_dRdR::synapse0x28ce750() {
   return (neuron0x28b65f0()*-0.00208633);
}

double NNfunction_sb_dRdR::synapse0x28ce790() {
   return (neuron0x28b6930()*0.0448872);
}

double NNfunction_sb_dRdR::synapse0x28ce7d0() {
   return (neuron0x28b6c70()*0.0513094);
}

double NNfunction_sb_dRdR::synapse0x28ce810() {
   return (neuron0x28b6fb0()*-0.032286);
}

double NNfunction_sb_dRdR::synapse0x28ce850() {
   return (neuron0x28b72f0()*0.0217632);
}

double NNfunction_sb_dRdR::synapse0x28ce890() {
   return (neuron0x28b7630()*0.0231642);
}

double NNfunction_sb_dRdR::synapse0x28ce320() {
   return (neuron0x28b7970()*-0.019849);
}

double NNfunction_sb_dRdR::synapse0x28ce360() {
   return (neuron0x28b7ed0()*-0.122752);
}

double NNfunction_sb_dRdR::synapse0x28ce9e0() {
   return (neuron0x28b80f0()*0.0483336);
}

double NNfunction_sb_dRdR::synapse0x28cea20() {
   return (neuron0x28b8430()*0.00021482);
}

double NNfunction_sb_dRdR::synapse0x28cea60() {
   return (neuron0x28b8770()*-0.00422837);
}

double NNfunction_sb_dRdR::synapse0x28ceaa0() {
   return (neuron0x28b8ab0()*0.0146033);
}

double NNfunction_sb_dRdR::synapse0x28ceae0() {
   return (neuron0x28b8df0()*-0.00435495);
}

double NNfunction_sb_dRdR::synapse0x28ceb20() {
   return (neuron0x28b9130()*-0.00507334);
}

double NNfunction_sb_dRdR::synapse0x28ceea0() {
   return (neuron0x28b4570()*0.0318814);
}

double NNfunction_sb_dRdR::synapse0x28c3470() {
   return (neuron0x28b48b0()*-0.034892);
}

double NNfunction_sb_dRdR::synapse0x28c34b0() {
   return (neuron0x28b4bf0()*0.0581161);
}

double NNfunction_sb_dRdR::synapse0x28c34f0() {
   return (neuron0x28b4f30()*-5.4829);
}

double NNfunction_sb_dRdR::synapse0x28c3740() {
   return (neuron0x28b5270()*-0.0498068);
}

double NNfunction_sb_dRdR::synapse0x28c3780() {
   return (neuron0x28b55b0()*-0.00674693);
}

double NNfunction_sb_dRdR::synapse0x28c37c0() {
   return (neuron0x28b58f0()*0.0554807);
}

double NNfunction_sb_dRdR::synapse0x28c3a10() {
   return (neuron0x28b5c30()*0.0142581);
}

double NNfunction_sb_dRdR::synapse0x28c3a50() {
   return (neuron0x28b5f70()*-0.225782);
}

double NNfunction_sb_dRdR::synapse0x28c3ca0() {
   return (neuron0x28b62b0()*-0.187273);
}

double NNfunction_sb_dRdR::synapse0x28c3ce0() {
   return (neuron0x28b65f0()*-0.0864639);
}

double NNfunction_sb_dRdR::synapse0x28c3d20() {
   return (neuron0x28b6930()*-0.0843566);
}

double NNfunction_sb_dRdR::synapse0x28c3f70() {
   return (neuron0x28b6c70()*-0.164089);
}

double NNfunction_sb_dRdR::synapse0x28c3fb0() {
   return (neuron0x28b6fb0()*-0.13108);
}

double NNfunction_sb_dRdR::synapse0x28c4200() {
   return (neuron0x28b72f0()*0.0237709);
}

double NNfunction_sb_dRdR::synapse0x28c4240() {
   return (neuron0x28b7630()*0.0159428);
}

double NNfunction_sb_dRdR::synapse0x28cecf0() {
   return (neuron0x28b7970()*-0.000149342);
}

double NNfunction_sb_dRdR::synapse0x28ced30() {
   return (neuron0x28b7ed0()*-2.02835);
}

double NNfunction_sb_dRdR::synapse0x28c4390() {
   return (neuron0x28b80f0()*-0.111651);
}

double NNfunction_sb_dRdR::synapse0x28c48a0() {
   return (neuron0x28b8430()*-0.0081589);
}

double NNfunction_sb_dRdR::synapse0x28c48e0() {
   return (neuron0x28b8770()*0.0326059);
}

double NNfunction_sb_dRdR::synapse0x28c4920() {
   return (neuron0x28b8ab0()*0.0378379);
}

double NNfunction_sb_dRdR::synapse0x28c4b70() {
   return (neuron0x28b8df0()*0.0127426);
}

double NNfunction_sb_dRdR::synapse0x28c4bb0() {
   return (neuron0x28b9130()*0.106496);
}

double NNfunction_sb_dRdR::synapse0x28c4460() {
   return (neuron0x28b4570()*0.0672095);
}

double NNfunction_sb_dRdR::synapse0x28c44a0() {
   return (neuron0x28b48b0()*0.0194033);
}

double NNfunction_sb_dRdR::synapse0x28c44e0() {
   return (neuron0x28b4bf0()*0.30992);
}

double NNfunction_sb_dRdR::synapse0x28c4520() {
   return (neuron0x28b4f30()*-0.200493);
}

double NNfunction_sb_dRdR::synapse0x28c4ea0() {
   return (neuron0x28b5270()*0.835656);
}

double NNfunction_sb_dRdR::synapse0x28d11f0() {
   return (neuron0x28b55b0()*-0.102536);
}

double NNfunction_sb_dRdR::synapse0x28d1230() {
   return (neuron0x28b58f0()*-0.311719);
}

double NNfunction_sb_dRdR::synapse0x28d1270() {
   return (neuron0x28b5c30()*-0.202028);
}

double NNfunction_sb_dRdR::synapse0x28d12b0() {
   return (neuron0x28b5f70()*0.0797449);
}

double NNfunction_sb_dRdR::synapse0x28d12f0() {
   return (neuron0x28b62b0()*0.332273);
}

double NNfunction_sb_dRdR::synapse0x28d1330() {
   return (neuron0x28b65f0()*-0.740825);
}

double NNfunction_sb_dRdR::synapse0x28d1370() {
   return (neuron0x28b6930()*0.347957);
}

double NNfunction_sb_dRdR::synapse0x28d13b0() {
   return (neuron0x28b6c70()*0.75845);
}

double NNfunction_sb_dRdR::synapse0x28d13f0() {
   return (neuron0x28b6fb0()*0.345923);
}

double NNfunction_sb_dRdR::synapse0x28d1430() {
   return (neuron0x28b72f0()*-0.0983401);
}

double NNfunction_sb_dRdR::synapse0x28d1470() {
   return (neuron0x28b7630()*-0.390069);
}

double NNfunction_sb_dRdR::synapse0x28c4d80() {
   return (neuron0x28b7970()*0.317185);
}

double NNfunction_sb_dRdR::synapse0x28c4dc0() {
   return (neuron0x28b7ed0()*-0.996524);
}

double NNfunction_sb_dRdR::synapse0x28d15c0() {
   return (neuron0x28b80f0()*-0.0568687);
}

double NNfunction_sb_dRdR::synapse0x28d1600() {
   return (neuron0x28b8430()*-0.273668);
}

double NNfunction_sb_dRdR::synapse0x28d1640() {
   return (neuron0x28b8770()*-0.826896);
}

double NNfunction_sb_dRdR::synapse0x28d1680() {
   return (neuron0x28b8ab0()*0.104331);
}

double NNfunction_sb_dRdR::synapse0x28d16c0() {
   return (neuron0x28b8df0()*0.864075);
}

double NNfunction_sb_dRdR::synapse0x28d1700() {
   return (neuron0x28b9130()*0.113614);
}

double NNfunction_sb_dRdR::synapse0x28d1a80() {
   return (neuron0x28b4570()*-0.00634352);
}

double NNfunction_sb_dRdR::synapse0x28d1ac0() {
   return (neuron0x28b48b0()*-0.190989);
}

double NNfunction_sb_dRdR::synapse0x28d1b00() {
   return (neuron0x28b4bf0()*0.139734);
}

double NNfunction_sb_dRdR::synapse0x28d1b40() {
   return (neuron0x28b4f30()*0.484262);
}

double NNfunction_sb_dRdR::synapse0x28d1b80() {
   return (neuron0x28b5270()*0.987237);
}

double NNfunction_sb_dRdR::synapse0x28d1bc0() {
   return (neuron0x28b55b0()*0.484425);
}

double NNfunction_sb_dRdR::synapse0x28d1c00() {
   return (neuron0x28b58f0()*-0.0506524);
}

double NNfunction_sb_dRdR::synapse0x28d1c40() {
   return (neuron0x28b5c30()*-0.132149);
}

double NNfunction_sb_dRdR::synapse0x28d1c80() {
   return (neuron0x28b5f70()*-0.0216235);
}

double NNfunction_sb_dRdR::synapse0x28d1cc0() {
   return (neuron0x28b62b0()*-0.0263037);
}

double NNfunction_sb_dRdR::synapse0x28d1d00() {
   return (neuron0x28b65f0()*0.124783);
}

double NNfunction_sb_dRdR::synapse0x28d1d40() {
   return (neuron0x28b6930()*0.00163847);
}

double NNfunction_sb_dRdR::synapse0x28d1d80() {
   return (neuron0x28b6c70()*0.000881322);
}

double NNfunction_sb_dRdR::synapse0x28d1dc0() {
   return (neuron0x28b6fb0()*-0.0169469);
}

double NNfunction_sb_dRdR::synapse0x28d1e00() {
   return (neuron0x28b72f0()*-0.214849);
}

double NNfunction_sb_dRdR::synapse0x28d1e40() {
   return (neuron0x28b7630()*-0.1284);
}

double NNfunction_sb_dRdR::synapse0x28d18d0() {
   return (neuron0x28b7970()*0.383447);
}

double NNfunction_sb_dRdR::synapse0x28d1910() {
   return (neuron0x28b7ed0()*-0.155607);
}

double NNfunction_sb_dRdR::synapse0x28d1f90() {
   return (neuron0x28b80f0()*0.148137);
}

double NNfunction_sb_dRdR::synapse0x28d1fd0() {
   return (neuron0x28b8430()*-0.079523);
}

double NNfunction_sb_dRdR::synapse0x28d2010() {
   return (neuron0x28b8770()*0.0665088);
}

double NNfunction_sb_dRdR::synapse0x28d2050() {
   return (neuron0x28b8ab0()*0.0222033);
}

double NNfunction_sb_dRdR::synapse0x28d2090() {
   return (neuron0x28b8df0()*0.0455396);
}

double NNfunction_sb_dRdR::synapse0x28d20d0() {
   return (neuron0x28b9130()*0.00924917);
}

double NNfunction_sb_dRdR::synapse0x28d2450() {
   return (neuron0x28b4570()*-0.133244);
}

double NNfunction_sb_dRdR::synapse0x28d2490() {
   return (neuron0x28b48b0()*-0.151484);
}

double NNfunction_sb_dRdR::synapse0x28d24d0() {
   return (neuron0x28b4bf0()*0.0161502);
}

double NNfunction_sb_dRdR::synapse0x28d2510() {
   return (neuron0x28b4f30()*-1.54199);
}

double NNfunction_sb_dRdR::synapse0x28d2550() {
   return (neuron0x28b5270()*0.143809);
}

double NNfunction_sb_dRdR::synapse0x28d2590() {
   return (neuron0x28b55b0()*-0.0163591);
}

double NNfunction_sb_dRdR::synapse0x28d25d0() {
   return (neuron0x28b58f0()*-0.182378);
}

double NNfunction_sb_dRdR::synapse0x28d2610() {
   return (neuron0x28b5c30()*0.37041);
}

double NNfunction_sb_dRdR::synapse0x28d2650() {
   return (neuron0x28b5f70()*-0.0212265);
}

double NNfunction_sb_dRdR::synapse0x28d2690() {
   return (neuron0x28b62b0()*0.0689588);
}

double NNfunction_sb_dRdR::synapse0x28d26d0() {
   return (neuron0x28b65f0()*0.0960131);
}

double NNfunction_sb_dRdR::synapse0x28d2710() {
   return (neuron0x28b6930()*0.0829798);
}

double NNfunction_sb_dRdR::synapse0x28d2750() {
   return (neuron0x28b6c70()*0.163262);
}

double NNfunction_sb_dRdR::synapse0x28d2790() {
   return (neuron0x28b6fb0()*-0.0128738);
}

double NNfunction_sb_dRdR::synapse0x28d27d0() {
   return (neuron0x28b72f0()*-0.10868);
}

double NNfunction_sb_dRdR::synapse0x28d2810() {
   return (neuron0x28b7630()*0.172815);
}

double NNfunction_sb_dRdR::synapse0x28d22a0() {
   return (neuron0x28b7970()*0.0317144);
}

double NNfunction_sb_dRdR::synapse0x28d22e0() {
   return (neuron0x28b7ed0()*-0.227377);
}

double NNfunction_sb_dRdR::synapse0x28d2960() {
   return (neuron0x28b80f0()*0.0240116);
}

double NNfunction_sb_dRdR::synapse0x28d29a0() {
   return (neuron0x28b8430()*-0.162275);
}

double NNfunction_sb_dRdR::synapse0x28d29e0() {
   return (neuron0x28b8770()*-0.0153884);
}

double NNfunction_sb_dRdR::synapse0x28d2a20() {
   return (neuron0x28b8ab0()*0.0423924);
}

double NNfunction_sb_dRdR::synapse0x28d2a60() {
   return (neuron0x28b8df0()*-0.289415);
}

double NNfunction_sb_dRdR::synapse0x28d2aa0() {
   return (neuron0x28b9130()*0.0360045);
}

double NNfunction_sb_dRdR::synapse0x28d2e20() {
   return (neuron0x28b4570()*-0.134196);
}

double NNfunction_sb_dRdR::synapse0x28d2e60() {
   return (neuron0x28b48b0()*-0.168904);
}

double NNfunction_sb_dRdR::synapse0x28d2ea0() {
   return (neuron0x28b4bf0()*0.18053);
}

double NNfunction_sb_dRdR::synapse0x28d2ee0() {
   return (neuron0x28b4f30()*1.73244);
}

double NNfunction_sb_dRdR::synapse0x28d2f20() {
   return (neuron0x28b5270()*-0.0062139);
}

double NNfunction_sb_dRdR::synapse0x28d2f60() {
   return (neuron0x28b55b0()*-0.0421504);
}

double NNfunction_sb_dRdR::synapse0x28d2fa0() {
   return (neuron0x28b58f0()*-0.167981);
}

double NNfunction_sb_dRdR::synapse0x28d2fe0() {
   return (neuron0x28b5c30()*0.0155444);
}

double NNfunction_sb_dRdR::synapse0x28d3020() {
   return (neuron0x28b5f70()*-0.0786643);
}

double NNfunction_sb_dRdR::synapse0x28d3060() {
   return (neuron0x28b62b0()*0.329448);
}

double NNfunction_sb_dRdR::synapse0x28d30a0() {
   return (neuron0x28b65f0()*0.400249);
}

double NNfunction_sb_dRdR::synapse0x28d30e0() {
   return (neuron0x28b6930()*0.359615);
}

double NNfunction_sb_dRdR::synapse0x28d3120() {
   return (neuron0x28b6c70()*0.232328);
}

double NNfunction_sb_dRdR::synapse0x28d3160() {
   return (neuron0x28b6fb0()*0.0865156);
}

double NNfunction_sb_dRdR::synapse0x28d31a0() {
   return (neuron0x28b72f0()*-0.164657);
}

double NNfunction_sb_dRdR::synapse0x28d31e0() {
   return (neuron0x28b7630()*0.0349933);
}

double NNfunction_sb_dRdR::synapse0x28d2c70() {
   return (neuron0x28b7970()*0.175518);
}

double NNfunction_sb_dRdR::synapse0x28d2cb0() {
   return (neuron0x28b7ed0()*0.403616);
}

double NNfunction_sb_dRdR::synapse0x28d3330() {
   return (neuron0x28b80f0()*0.455703);
}

double NNfunction_sb_dRdR::synapse0x28d3370() {
   return (neuron0x28b8430()*0.111205);
}

double NNfunction_sb_dRdR::synapse0x28d33b0() {
   return (neuron0x28b8770()*-0.0714306);
}

double NNfunction_sb_dRdR::synapse0x28d33f0() {
   return (neuron0x28b8ab0()*0.0112432);
}

double NNfunction_sb_dRdR::synapse0x28d3430() {
   return (neuron0x28b8df0()*-0.304425);
}

double NNfunction_sb_dRdR::synapse0x28d3470() {
   return (neuron0x28b9130()*0.125424);
}

double NNfunction_sb_dRdR::synapse0x28d37f0() {
   return (neuron0x28b4570()*-0.113692);
}

double NNfunction_sb_dRdR::synapse0x28d3830() {
   return (neuron0x28b48b0()*0.363439);
}

double NNfunction_sb_dRdR::synapse0x28d3870() {
   return (neuron0x28b4bf0()*0.06453);
}

double NNfunction_sb_dRdR::synapse0x28d38b0() {
   return (neuron0x28b4f30()*-0.644089);
}

double NNfunction_sb_dRdR::synapse0x28d38f0() {
   return (neuron0x28b5270()*0.216301);
}

double NNfunction_sb_dRdR::synapse0x28d3930() {
   return (neuron0x28b55b0()*-0.268502);
}

double NNfunction_sb_dRdR::synapse0x28d3970() {
   return (neuron0x28b58f0()*0.719748);
}

double NNfunction_sb_dRdR::synapse0x28d39b0() {
   return (neuron0x28b5c30()*-0.205427);
}

double NNfunction_sb_dRdR::synapse0x28d39f0() {
   return (neuron0x28b5f70()*-0.743798);
}

double NNfunction_sb_dRdR::synapse0x28d3a30() {
   return (neuron0x28b62b0()*0.21343);
}

double NNfunction_sb_dRdR::synapse0x28d3a70() {
   return (neuron0x28b65f0()*-0.0157504);
}

double NNfunction_sb_dRdR::synapse0x28d3ab0() {
   return (neuron0x28b6930()*0.46262);
}

double NNfunction_sb_dRdR::synapse0x28d3af0() {
   return (neuron0x28b6c70()*0.378443);
}

double NNfunction_sb_dRdR::synapse0x28d3b30() {
   return (neuron0x28b6fb0()*0.226381);
}

double NNfunction_sb_dRdR::synapse0x28d3b70() {
   return (neuron0x28b72f0()*-0.339854);
}

double NNfunction_sb_dRdR::synapse0x28d3bb0() {
   return (neuron0x28b7630()*-0.525574);
}

double NNfunction_sb_dRdR::synapse0x28d3640() {
   return (neuron0x28b7970()*-0.349529);
}

double NNfunction_sb_dRdR::synapse0x28d3680() {
   return (neuron0x28b7ed0()*-0.458196);
}

double NNfunction_sb_dRdR::synapse0x28d3d00() {
   return (neuron0x28b80f0()*-0.0123558);
}

double NNfunction_sb_dRdR::synapse0x28d3d40() {
   return (neuron0x28b8430()*-0.36709);
}

double NNfunction_sb_dRdR::synapse0x28d3d80() {
   return (neuron0x28b8770()*0.123807);
}

double NNfunction_sb_dRdR::synapse0x28d3dc0() {
   return (neuron0x28b8ab0()*-0.104593);
}

double NNfunction_sb_dRdR::synapse0x28d3e00() {
   return (neuron0x28b8df0()*-0.0251804);
}

double NNfunction_sb_dRdR::synapse0x28d3e40() {
   return (neuron0x28b9130()*0.190727);
}

double NNfunction_sb_dRdR::synapse0x28d41c0() {
   return (neuron0x28b4570()*0.00160316);
}

double NNfunction_sb_dRdR::synapse0x28d4200() {
   return (neuron0x28b48b0()*-0.0373295);
}

double NNfunction_sb_dRdR::synapse0x28d4240() {
   return (neuron0x28b4bf0()*0.0687591);
}

double NNfunction_sb_dRdR::synapse0x28d4280() {
   return (neuron0x28b4f30()*2.22938);
}

double NNfunction_sb_dRdR::synapse0x28d42c0() {
   return (neuron0x28b5270()*0.0194566);
}

double NNfunction_sb_dRdR::synapse0x28d4300() {
   return (neuron0x28b55b0()*0.0525112);
}

double NNfunction_sb_dRdR::synapse0x28d4340() {
   return (neuron0x28b58f0()*0.0181909);
}

double NNfunction_sb_dRdR::synapse0x28d4380() {
   return (neuron0x28b5c30()*0.10558);
}

double NNfunction_sb_dRdR::synapse0x28d43c0() {
   return (neuron0x28b5f70()*-0.0529463);
}

double NNfunction_sb_dRdR::synapse0x28d4400() {
   return (neuron0x28b62b0()*0.0344883);
}

double NNfunction_sb_dRdR::synapse0x28d4440() {
   return (neuron0x28b65f0()*-0.0400551);
}

double NNfunction_sb_dRdR::synapse0x28d4480() {
   return (neuron0x28b6930()*-0.0469928);
}

double NNfunction_sb_dRdR::synapse0x28d44c0() {
   return (neuron0x28b6c70()*-0.0582313);
}

double NNfunction_sb_dRdR::synapse0x28d4500() {
   return (neuron0x28b6fb0()*0.0178657);
}

double NNfunction_sb_dRdR::synapse0x28d4540() {
   return (neuron0x28b72f0()*0.139345);
}

double NNfunction_sb_dRdR::synapse0x28d4580() {
   return (neuron0x28b7630()*0.113649);
}

double NNfunction_sb_dRdR::synapse0x28d4010() {
   return (neuron0x28b7970()*0.15012);
}

double NNfunction_sb_dRdR::synapse0x28d4050() {
   return (neuron0x28b7ed0()*0.472201);
}

double NNfunction_sb_dRdR::synapse0x28d46d0() {
   return (neuron0x28b80f0()*-0.0544069);
}

double NNfunction_sb_dRdR::synapse0x28d4710() {
   return (neuron0x28b8430()*-0.021529);
}

double NNfunction_sb_dRdR::synapse0x28d4750() {
   return (neuron0x28b8770()*-0.00668302);
}

double NNfunction_sb_dRdR::synapse0x28d4790() {
   return (neuron0x28b8ab0()*0.00641211);
}

double NNfunction_sb_dRdR::synapse0x28d47d0() {
   return (neuron0x28b8df0()*-0.041847);
}

double NNfunction_sb_dRdR::synapse0x28d4810() {
   return (neuron0x28b9130()*-0.00615267);
}

double NNfunction_sb_dRdR::synapse0x28d4b90() {
   return (neuron0x28b4570()*-0.10887);
}

double NNfunction_sb_dRdR::synapse0x28d4bd0() {
   return (neuron0x28b48b0()*0.218871);
}

double NNfunction_sb_dRdR::synapse0x28d4c10() {
   return (neuron0x28b4bf0()*0.0958788);
}

double NNfunction_sb_dRdR::synapse0x28d4c50() {
   return (neuron0x28b4f30()*0.0729777);
}

double NNfunction_sb_dRdR::synapse0x28d4c90() {
   return (neuron0x28b5270()*0.0609084);
}

double NNfunction_sb_dRdR::synapse0x28d4cd0() {
   return (neuron0x28b55b0()*-0.277787);
}

double NNfunction_sb_dRdR::synapse0x28d4d10() {
   return (neuron0x28b58f0()*0.523998);
}

double NNfunction_sb_dRdR::synapse0x28d4d50() {
   return (neuron0x28b5c30()*0.876781);
}

double NNfunction_sb_dRdR::synapse0x28d4d90() {
   return (neuron0x28b5f70()*0.170332);
}

double NNfunction_sb_dRdR::synapse0x28d4dd0() {
   return (neuron0x28b62b0()*0.0209587);
}

double NNfunction_sb_dRdR::synapse0x28d4e10() {
   return (neuron0x28b65f0()*0.075366);
}

double NNfunction_sb_dRdR::synapse0x28d4e50() {
   return (neuron0x28b6930()*-0.107569);
}

double NNfunction_sb_dRdR::synapse0x28d4e90() {
   return (neuron0x28b6c70()*-0.0762767);
}

double NNfunction_sb_dRdR::synapse0x28d4ed0() {
   return (neuron0x28b6fb0()*0.140826);
}

double NNfunction_sb_dRdR::synapse0x28d4f10() {
   return (neuron0x28b72f0()*-0.360233);
}

double NNfunction_sb_dRdR::synapse0x28d4f50() {
   return (neuron0x28b7630()*-0.192859);
}

double NNfunction_sb_dRdR::synapse0x28d49e0() {
   return (neuron0x28b7970()*0.372027);
}

double NNfunction_sb_dRdR::synapse0x28d4a20() {
   return (neuron0x28b7ed0()*-1.10703);
}

double NNfunction_sb_dRdR::synapse0x28d50a0() {
   return (neuron0x28b80f0()*-0.142825);
}

double NNfunction_sb_dRdR::synapse0x28d50e0() {
   return (neuron0x28b8430()*0.0102231);
}

double NNfunction_sb_dRdR::synapse0x28d5120() {
   return (neuron0x28b8770()*-0.0186036);
}

double NNfunction_sb_dRdR::synapse0x28d5160() {
   return (neuron0x28b8ab0()*-0.0890416);
}

double NNfunction_sb_dRdR::synapse0x28d51a0() {
   return (neuron0x28b8df0()*-0.0173863);
}

double NNfunction_sb_dRdR::synapse0x28d51e0() {
   return (neuron0x28b9130()*-0.037973);
}

double NNfunction_sb_dRdR::synapse0x28d5560() {
   return (neuron0x28b4570()*-0.000857527);
}

double NNfunction_sb_dRdR::synapse0x28d55a0() {
   return (neuron0x28b48b0()*0.00850857);
}

double NNfunction_sb_dRdR::synapse0x28d55e0() {
   return (neuron0x28b4bf0()*0.0127944);
}

double NNfunction_sb_dRdR::synapse0x28d5620() {
   return (neuron0x28b4f30()*-0.024702);
}

double NNfunction_sb_dRdR::synapse0x28d5660() {
   return (neuron0x28b5270()*-0.00283964);
}

double NNfunction_sb_dRdR::synapse0x28d56a0() {
   return (neuron0x28b55b0()*-0.000382766);
}

double NNfunction_sb_dRdR::synapse0x28d56e0() {
   return (neuron0x28b58f0()*-0.0142921);
}

double NNfunction_sb_dRdR::synapse0x28d5720() {
   return (neuron0x28b5c30()*0.032991);
}

double NNfunction_sb_dRdR::synapse0x28d5760() {
   return (neuron0x28b5f70()*-0.0444978);
}

double NNfunction_sb_dRdR::synapse0x28d57a0() {
   return (neuron0x28b62b0()*-0.0587416);
}

double NNfunction_sb_dRdR::synapse0x28d57e0() {
   return (neuron0x28b65f0()*0.00209177);
}

double NNfunction_sb_dRdR::synapse0x28d5820() {
   return (neuron0x28b6930()*-0.0381687);
}

double NNfunction_sb_dRdR::synapse0x28d5860() {
   return (neuron0x28b6c70()*-0.031911);
}

double NNfunction_sb_dRdR::synapse0x28d58a0() {
   return (neuron0x28b6fb0()*-0.00616078);
}

double NNfunction_sb_dRdR::synapse0x28d58e0() {
   return (neuron0x28b72f0()*0.0220424);
}

double NNfunction_sb_dRdR::synapse0x28d5920() {
   return (neuron0x28b7630()*-0.0305895);
}

double NNfunction_sb_dRdR::synapse0x28d53b0() {
   return (neuron0x28b7970()*-0.0118516);
}

double NNfunction_sb_dRdR::synapse0x28d53f0() {
   return (neuron0x28b7ed0()*-2.58753);
}

double NNfunction_sb_dRdR::synapse0x28d5a70() {
   return (neuron0x28b80f0()*-0.0319798);
}

double NNfunction_sb_dRdR::synapse0x28d5ab0() {
   return (neuron0x28b8430()*0.0274995);
}

double NNfunction_sb_dRdR::synapse0x28d5af0() {
   return (neuron0x28b8770()*-0.00446198);
}

double NNfunction_sb_dRdR::synapse0x28d5b30() {
   return (neuron0x28b8ab0()*-0.00773379);
}

double NNfunction_sb_dRdR::synapse0x28d5b70() {
   return (neuron0x28b8df0()*0.00126856);
}

double NNfunction_sb_dRdR::synapse0x28d5bb0() {
   return (neuron0x28b9130()*-0.0022496);
}

double NNfunction_sb_dRdR::synapse0x28be660() {
   return (neuron0x28b4570()*0.0100922);
}

double NNfunction_sb_dRdR::synapse0x28be6a0() {
   return (neuron0x28b48b0()*0.0120592);
}

double NNfunction_sb_dRdR::synapse0x28be6e0() {
   return (neuron0x28b4bf0()*0.00267938);
}

double NNfunction_sb_dRdR::synapse0x28be720() {
   return (neuron0x28b4f30()*-0.0339036);
}

double NNfunction_sb_dRdR::synapse0x28be760() {
   return (neuron0x28b5270()*0.0194445);
}

double NNfunction_sb_dRdR::synapse0x28be7a0() {
   return (neuron0x28b55b0()*-0.00961261);
}

double NNfunction_sb_dRdR::synapse0x28be7e0() {
   return (neuron0x28b58f0()*0.00959566);
}

double NNfunction_sb_dRdR::synapse0x28be820() {
   return (neuron0x28b5c30()*0.0121228);
}

double NNfunction_sb_dRdR::synapse0x28d6340() {
   return (neuron0x28b5f70()*-0.0196985);
}

double NNfunction_sb_dRdR::synapse0x28d6380() {
   return (neuron0x28b62b0()*0.00310959);
}

double NNfunction_sb_dRdR::synapse0x28d63c0() {
   return (neuron0x28b65f0()*-0.00303376);
}

double NNfunction_sb_dRdR::synapse0x28d6400() {
   return (neuron0x28b6930()*-0.0161697);
}

double NNfunction_sb_dRdR::synapse0x28d6440() {
   return (neuron0x28b6c70()*-0.0187271);
}

double NNfunction_sb_dRdR::synapse0x28d6480() {
   return (neuron0x28b6fb0()*-0.000578259);
}

double NNfunction_sb_dRdR::synapse0x28d64c0() {
   return (neuron0x28b72f0()*0.0197979);
}

double NNfunction_sb_dRdR::synapse0x28d6500() {
   return (neuron0x28b7630()*0.0214828);
}

double NNfunction_sb_dRdR::synapse0x28d5d80() {
   return (neuron0x28b7970()*-0.031715);
}

double NNfunction_sb_dRdR::synapse0x28d5dc0() {
   return (neuron0x28b7ed0()*-5.35505);
}

double NNfunction_sb_dRdR::synapse0x28d6650() {
   return (neuron0x28b80f0()*-0.00343341);
}

double NNfunction_sb_dRdR::synapse0x28d6690() {
   return (neuron0x28b8430()*0.00699705);
}

double NNfunction_sb_dRdR::synapse0x28d66d0() {
   return (neuron0x28b8770()*-0.00797932);
}

double NNfunction_sb_dRdR::synapse0x28d6710() {
   return (neuron0x28b8ab0()*-0.0030148);
}

double NNfunction_sb_dRdR::synapse0x28d6750() {
   return (neuron0x28b8df0()*-0.00386342);
}

double NNfunction_sb_dRdR::synapse0x28d6790() {
   return (neuron0x28b9130()*-0.0121077);
}

double NNfunction_sb_dRdR::synapse0x28d6b10() {
   return (neuron0x28b4570()*-0.0340374);
}

double NNfunction_sb_dRdR::synapse0x28d6b50() {
   return (neuron0x28b48b0()*-0.599517);
}

double NNfunction_sb_dRdR::synapse0x28d6b90() {
   return (neuron0x28b4bf0()*-0.0314302);
}

double NNfunction_sb_dRdR::synapse0x28d6bd0() {
   return (neuron0x28b4f30()*0.806317);
}

double NNfunction_sb_dRdR::synapse0x28d6c10() {
   return (neuron0x28b5270()*-0.437901);
}

double NNfunction_sb_dRdR::synapse0x28d6c50() {
   return (neuron0x28b55b0()*0.539981);
}

double NNfunction_sb_dRdR::synapse0x28d6c90() {
   return (neuron0x28b58f0()*0.0111444);
}

double NNfunction_sb_dRdR::synapse0x28d6cd0() {
   return (neuron0x28b5c30()*0.459137);
}

double NNfunction_sb_dRdR::synapse0x28d6d10() {
   return (neuron0x28b5f70()*0.0311719);
}

double NNfunction_sb_dRdR::synapse0x28d6d50() {
   return (neuron0x28b62b0()*-0.0386996);
}

double NNfunction_sb_dRdR::synapse0x28d6d90() {
   return (neuron0x28b65f0()*0.0137283);
}

double NNfunction_sb_dRdR::synapse0x28d6dd0() {
   return (neuron0x28b6930()*0.0618011);
}

double NNfunction_sb_dRdR::synapse0x28d6e10() {
   return (neuron0x28b6c70()*0.056759);
}

double NNfunction_sb_dRdR::synapse0x28d6e50() {
   return (neuron0x28b6fb0()*0.121239);
}

double NNfunction_sb_dRdR::synapse0x28d6e90() {
   return (neuron0x28b72f0()*-0.0667926);
}

double NNfunction_sb_dRdR::synapse0x28d6ed0() {
   return (neuron0x28b7630()*0.0651556);
}

double NNfunction_sb_dRdR::synapse0x28d6960() {
   return (neuron0x28b7970()*-0.137986);
}

double NNfunction_sb_dRdR::synapse0x28d69a0() {
   return (neuron0x28b7ed0()*-0.525405);
}

double NNfunction_sb_dRdR::synapse0x28d7020() {
   return (neuron0x28b80f0()*0.0708499);
}

double NNfunction_sb_dRdR::synapse0x28d7060() {
   return (neuron0x28b8430()*0.0695386);
}

double NNfunction_sb_dRdR::synapse0x28d70a0() {
   return (neuron0x28b8770()*0.0496324);
}

double NNfunction_sb_dRdR::synapse0x28d70e0() {
   return (neuron0x28b8ab0()*-0.0289225);
}

double NNfunction_sb_dRdR::synapse0x28d7120() {
   return (neuron0x28b8df0()*0.0220959);
}

double NNfunction_sb_dRdR::synapse0x28d7160() {
   return (neuron0x28b9130()*-0.00455559);
}

double NNfunction_sb_dRdR::synapse0x28d74e0() {
   return (neuron0x28b4570()*-0.0333491);
}

double NNfunction_sb_dRdR::synapse0x28d7520() {
   return (neuron0x28b48b0()*0.0122812);
}

double NNfunction_sb_dRdR::synapse0x28d7560() {
   return (neuron0x28b4bf0()*-0.0493396);
}

double NNfunction_sb_dRdR::synapse0x28d75a0() {
   return (neuron0x28b4f30()*0.186222);
}

double NNfunction_sb_dRdR::synapse0x28d75e0() {
   return (neuron0x28b5270()*-0.0251555);
}

double NNfunction_sb_dRdR::synapse0x28d7620() {
   return (neuron0x28b55b0()*-0.0314935);
}

double NNfunction_sb_dRdR::synapse0x28d7660() {
   return (neuron0x28b58f0()*0.05538);
}

double NNfunction_sb_dRdR::synapse0x28d76a0() {
   return (neuron0x28b5c30()*-0.0641033);
}

double NNfunction_sb_dRdR::synapse0x28d76e0() {
   return (neuron0x28b5f70()*0.0719295);
}

double NNfunction_sb_dRdR::synapse0x28d7720() {
   return (neuron0x28b62b0()*0.122423);
}

double NNfunction_sb_dRdR::synapse0x28d7760() {
   return (neuron0x28b65f0()*0.102012);
}

double NNfunction_sb_dRdR::synapse0x28d77a0() {
   return (neuron0x28b6930()*0.00539923);
}

double NNfunction_sb_dRdR::synapse0x28d77e0() {
   return (neuron0x28b6c70()*0.00525966);
}

double NNfunction_sb_dRdR::synapse0x28d7820() {
   return (neuron0x28b6fb0()*-0.0907767);
}

double NNfunction_sb_dRdR::synapse0x28d7860() {
   return (neuron0x28b72f0()*-0.220799);
}

double NNfunction_sb_dRdR::synapse0x28d78a0() {
   return (neuron0x28b7630()*1.24603);
}

double NNfunction_sb_dRdR::synapse0x28d7330() {
   return (neuron0x28b7970()*0.0360742);
}

double NNfunction_sb_dRdR::synapse0x28d7370() {
   return (neuron0x28b7ed0()*-0.557212);
}

double NNfunction_sb_dRdR::synapse0x28c7ea0() {
   return (neuron0x28b80f0()*0.0164266);
}

double NNfunction_sb_dRdR::synapse0x28c7ee0() {
   return (neuron0x28b8430()*0.00558962);
}

double NNfunction_sb_dRdR::synapse0x28c7f20() {
   return (neuron0x28b8770()*0.0154988);
}

double NNfunction_sb_dRdR::synapse0x28c7f60() {
   return (neuron0x28b8ab0()*0.0159238);
}

double NNfunction_sb_dRdR::synapse0x28c7fa0() {
   return (neuron0x28b8df0()*0.0550773);
}

double NNfunction_sb_dRdR::synapse0x28c7fe0() {
   return (neuron0x28b9130()*-0.00246673);
}

double NNfunction_sb_dRdR::synapse0x28c8360() {
   return (neuron0x28b4570()*0.313563);
}

double NNfunction_sb_dRdR::synapse0x28c83a0() {
   return (neuron0x28b48b0()*0.0264571);
}

double NNfunction_sb_dRdR::synapse0x28c83e0() {
   return (neuron0x28b4bf0()*-0.108249);
}

double NNfunction_sb_dRdR::synapse0x28c8420() {
   return (neuron0x28b4f30()*1.02497);
}

double NNfunction_sb_dRdR::synapse0x28c8460() {
   return (neuron0x28b5270()*0.521085);
}

double NNfunction_sb_dRdR::synapse0x28c84a0() {
   return (neuron0x28b55b0()*-0.320027);
}

double NNfunction_sb_dRdR::synapse0x28c84e0() {
   return (neuron0x28b58f0()*0.238776);
}

double NNfunction_sb_dRdR::synapse0x28c8520() {
   return (neuron0x28b5c30()*-0.0765426);
}

double NNfunction_sb_dRdR::synapse0x28c8560() {
   return (neuron0x28b5f70()*0.205305);
}

double NNfunction_sb_dRdR::synapse0x28c85a0() {
   return (neuron0x28b62b0()*-0.105198);
}

double NNfunction_sb_dRdR::synapse0x28c85e0() {
   return (neuron0x28b65f0()*0.0651527);
}

double NNfunction_sb_dRdR::synapse0x28c8620() {
   return (neuron0x28b6930()*-0.881821);
}

double NNfunction_sb_dRdR::synapse0x28c8660() {
   return (neuron0x28b6c70()*0.895034);
}

double NNfunction_sb_dRdR::synapse0x28c86a0() {
   return (neuron0x28b6fb0()*-0.556085);
}

double NNfunction_sb_dRdR::synapse0x28c86e0() {
   return (neuron0x28b72f0()*-0.443152);
}

double NNfunction_sb_dRdR::synapse0x28c8720() {
   return (neuron0x28b7630()*0.706214);
}

double NNfunction_sb_dRdR::synapse0x28c81b0() {
   return (neuron0x28b7970()*-0.386096);
}

double NNfunction_sb_dRdR::synapse0x28c81f0() {
   return (neuron0x28b7ed0()*-0.427131);
}

double NNfunction_sb_dRdR::synapse0x28c8870() {
   return (neuron0x28b80f0()*0.565073);
}

double NNfunction_sb_dRdR::synapse0x28c88b0() {
   return (neuron0x28b8430()*0.431323);
}

double NNfunction_sb_dRdR::synapse0x28c88f0() {
   return (neuron0x28b8770()*-0.50808);
}

double NNfunction_sb_dRdR::synapse0x28c8930() {
   return (neuron0x28b8ab0()*0.192653);
}

double NNfunction_sb_dRdR::synapse0x28c8970() {
   return (neuron0x28b8df0()*-0.191128);
}

double NNfunction_sb_dRdR::synapse0x28c89b0() {
   return (neuron0x28b9130()*0.57946);
}

double NNfunction_sb_dRdR::synapse0x28c8d30() {
   return (neuron0x28b4570()*-0.012373);
}

double NNfunction_sb_dRdR::synapse0x28c8d70() {
   return (neuron0x28b48b0()*0.136274);
}

double NNfunction_sb_dRdR::synapse0x28c8db0() {
   return (neuron0x28b4bf0()*0.0451019);
}

double NNfunction_sb_dRdR::synapse0x28c8df0() {
   return (neuron0x28b4f30()*1.35854);
}

double NNfunction_sb_dRdR::synapse0x28c8e30() {
   return (neuron0x28b5270()*-0.308458);
}

double NNfunction_sb_dRdR::synapse0x28c8e70() {
   return (neuron0x28b55b0()*-0.0883175);
}

double NNfunction_sb_dRdR::synapse0x28c8eb0() {
   return (neuron0x28b58f0()*0.0649983);
}

double NNfunction_sb_dRdR::synapse0x28c8ef0() {
   return (neuron0x28b5c30()*-0.173936);
}

double NNfunction_sb_dRdR::synapse0x28c8f30() {
   return (neuron0x28b5f70()*-0.0164441);
}

double NNfunction_sb_dRdR::synapse0x28c8f70() {
   return (neuron0x28b62b0()*0.288368);
}

double NNfunction_sb_dRdR::synapse0x28c8fb0() {
   return (neuron0x28b65f0()*-0.175363);
}

double NNfunction_sb_dRdR::synapse0x28c8ff0() {
   return (neuron0x28b6930()*-0.323816);
}

double NNfunction_sb_dRdR::synapse0x28c9030() {
   return (neuron0x28b6c70()*0.415503);
}

double NNfunction_sb_dRdR::synapse0x28c9070() {
   return (neuron0x28b6fb0()*0.280951);
}

double NNfunction_sb_dRdR::synapse0x28c90b0() {
   return (neuron0x28b72f0()*-0.465413);
}

double NNfunction_sb_dRdR::synapse0x28c90f0() {
   return (neuron0x28b7630()*-0.0145459);
}

double NNfunction_sb_dRdR::synapse0x28c8b80() {
   return (neuron0x28b7970()*-0.318965);
}

double NNfunction_sb_dRdR::synapse0x28c8bc0() {
   return (neuron0x28b7ed0()*-0.902804);
}

double NNfunction_sb_dRdR::synapse0x28c9240() {
   return (neuron0x28b80f0()*-0.295312);
}

double NNfunction_sb_dRdR::synapse0x28c9280() {
   return (neuron0x28b8430()*0.194561);
}

double NNfunction_sb_dRdR::synapse0x28c92c0() {
   return (neuron0x28b8770()*-0.189999);
}

double NNfunction_sb_dRdR::synapse0x28c9300() {
   return (neuron0x28b8ab0()*0.000572398);
}

double NNfunction_sb_dRdR::synapse0x28c9340() {
   return (neuron0x28b8df0()*0.0642903);
}

double NNfunction_sb_dRdR::synapse0x28c9380() {
   return (neuron0x28b9130()*-0.215491);
}

double NNfunction_sb_dRdR::synapse0x28c9700() {
   return (neuron0x28b4570()*0.0261668);
}

double NNfunction_sb_dRdR::synapse0x28c9740() {
   return (neuron0x28b48b0()*-0.188472);
}

double NNfunction_sb_dRdR::synapse0x28c9780() {
   return (neuron0x28b4bf0()*-0.145624);
}

double NNfunction_sb_dRdR::synapse0x28c97c0() {
   return (neuron0x28b4f30()*0.669698);
}

double NNfunction_sb_dRdR::synapse0x28c9800() {
   return (neuron0x28b5270()*-0.0428831);
}

double NNfunction_sb_dRdR::synapse0x28c9840() {
   return (neuron0x28b55b0()*0.140836);
}

double NNfunction_sb_dRdR::synapse0x28c9880() {
   return (neuron0x28b58f0()*-0.267336);
}

double NNfunction_sb_dRdR::synapse0x28c98c0() {
   return (neuron0x28b5c30()*0.0552724);
}

double NNfunction_sb_dRdR::synapse0x28c9900() {
   return (neuron0x28b5f70()*0.157187);
}

double NNfunction_sb_dRdR::synapse0x28c9940() {
   return (neuron0x28b62b0()*-0.846716);
}

double NNfunction_sb_dRdR::synapse0x28c9980() {
   return (neuron0x28b65f0()*-0.0149669);
}

double NNfunction_sb_dRdR::synapse0x28c99c0() {
   return (neuron0x28b6930()*-0.524011);
}

double NNfunction_sb_dRdR::synapse0x28c9a00() {
   return (neuron0x28b6c70()*-0.369437);
}

double NNfunction_sb_dRdR::synapse0x28c9a40() {
   return (neuron0x28b6fb0()*-0.0751128);
}

double NNfunction_sb_dRdR::synapse0x28c9a80() {
   return (neuron0x28b72f0()*-0.0215435);
}

double NNfunction_sb_dRdR::synapse0x28c9ac0() {
   return (neuron0x28b7630()*-0.393677);
}

double NNfunction_sb_dRdR::synapse0x28c9550() {
   return (neuron0x28b7970()*0.204815);
}

double NNfunction_sb_dRdR::synapse0x28c9590() {
   return (neuron0x28b7ed0()*1.51551);
}

double NNfunction_sb_dRdR::synapse0x28c9c10() {
   return (neuron0x28b80f0()*-0.521539);
}

double NNfunction_sb_dRdR::synapse0x28c9c50() {
   return (neuron0x28b8430()*0.356264);
}

double NNfunction_sb_dRdR::synapse0x28c9c90() {
   return (neuron0x28b8770()*-0.0355075);
}

double NNfunction_sb_dRdR::synapse0x28c9cd0() {
   return (neuron0x28b8ab0()*0.0353147);
}

double NNfunction_sb_dRdR::synapse0x28c9d10() {
   return (neuron0x28b8df0()*-0.256099);
}

double NNfunction_sb_dRdR::synapse0x28c9d50() {
   return (neuron0x28b9130()*-0.232673);
}

double NNfunction_sb_dRdR::synapse0x28dbc20() {
   return (neuron0x28b4570()*-0.119649);
}

double NNfunction_sb_dRdR::synapse0x28dbc60() {
   return (neuron0x28b48b0()*0.221503);
}

double NNfunction_sb_dRdR::synapse0x28dbca0() {
   return (neuron0x28b4bf0()*0.264008);
}

double NNfunction_sb_dRdR::synapse0x28dbce0() {
   return (neuron0x28b4f30()*0.81671);
}

double NNfunction_sb_dRdR::synapse0x28dbd20() {
   return (neuron0x28b5270()*-0.480609);
}

double NNfunction_sb_dRdR::synapse0x28dbd60() {
   return (neuron0x28b55b0()*0.249496);
}

double NNfunction_sb_dRdR::synapse0x28dbda0() {
   return (neuron0x28b58f0()*-0.126078);
}

double NNfunction_sb_dRdR::synapse0x28dbde0() {
   return (neuron0x28b5c30()*-0.414031);
}

double NNfunction_sb_dRdR::synapse0x28dbe20() {
   return (neuron0x28b5f70()*0.155045);
}

double NNfunction_sb_dRdR::synapse0x28dbe60() {
   return (neuron0x28b62b0()*-0.0881786);
}

double NNfunction_sb_dRdR::synapse0x28dbea0() {
   return (neuron0x28b65f0()*0.011085);
}

double NNfunction_sb_dRdR::synapse0x28dbee0() {
   return (neuron0x28b6930()*0.327871);
}

double NNfunction_sb_dRdR::synapse0x28dbf20() {
   return (neuron0x28b6c70()*-0.0374696);
}

double NNfunction_sb_dRdR::synapse0x28dbf60() {
   return (neuron0x28b6fb0()*-0.393095);
}

double NNfunction_sb_dRdR::synapse0x28dbfa0() {
   return (neuron0x28b72f0()*0.698495);
}

double NNfunction_sb_dRdR::synapse0x28dbfe0() {
   return (neuron0x28b7630()*0.367776);
}

double NNfunction_sb_dRdR::synapse0x28c9d90() {
   return (neuron0x28b7970()*-0.0592501);
}

double NNfunction_sb_dRdR::synapse0x28c9dd0() {
   return (neuron0x28b7ed0()*-0.54665);
}

double NNfunction_sb_dRdR::synapse0x28dc130() {
   return (neuron0x28b80f0()*0.256937);
}

double NNfunction_sb_dRdR::synapse0x28dc170() {
   return (neuron0x28b8430()*0.506198);
}

double NNfunction_sb_dRdR::synapse0x28dc1b0() {
   return (neuron0x28b8770()*0.228075);
}

double NNfunction_sb_dRdR::synapse0x28dc1f0() {
   return (neuron0x28b8ab0()*0.272306);
}

double NNfunction_sb_dRdR::synapse0x28dc230() {
   return (neuron0x28b8df0()*-0.193761);
}

double NNfunction_sb_dRdR::synapse0x28dc270() {
   return (neuron0x28b9130()*0.233161);
}

double NNfunction_sb_dRdR::synapse0x28dc5f0() {
   return (neuron0x28b4570()*-0.0125349);
}

double NNfunction_sb_dRdR::synapse0x28dc630() {
   return (neuron0x28b48b0()*0.0252913);
}

double NNfunction_sb_dRdR::synapse0x28dc670() {
   return (neuron0x28b4bf0()*-0.0263452);
}

double NNfunction_sb_dRdR::synapse0x28dc6b0() {
   return (neuron0x28b4f30()*2.67625);
}

double NNfunction_sb_dRdR::synapse0x28dc6f0() {
   return (neuron0x28b5270()*-0.00461617);
}

double NNfunction_sb_dRdR::synapse0x28dc730() {
   return (neuron0x28b55b0()*-0.0213476);
}

double NNfunction_sb_dRdR::synapse0x28dc770() {
   return (neuron0x28b58f0()*-0.00602661);
}

double NNfunction_sb_dRdR::synapse0x28dc7b0() {
   return (neuron0x28b5c30()*-0.0466325);
}

double NNfunction_sb_dRdR::synapse0x28dc7f0() {
   return (neuron0x28b5f70()*0.0350787);
}

double NNfunction_sb_dRdR::synapse0x28dc830() {
   return (neuron0x28b62b0()*-0.0148728);
}

double NNfunction_sb_dRdR::synapse0x28dc870() {
   return (neuron0x28b65f0()*0.0192846);
}

double NNfunction_sb_dRdR::synapse0x28dc8b0() {
   return (neuron0x28b6930()*-0.0410053);
}

double NNfunction_sb_dRdR::synapse0x28dc8f0() {
   return (neuron0x28b6c70()*-0.033671);
}

double NNfunction_sb_dRdR::synapse0x28dc930() {
   return (neuron0x28b6fb0()*0.0351751);
}

double NNfunction_sb_dRdR::synapse0x28dc970() {
   return (neuron0x28b72f0()*-0.0996138);
}

double NNfunction_sb_dRdR::synapse0x28dc9b0() {
   return (neuron0x28b7630()*-0.0701456);
}

double NNfunction_sb_dRdR::synapse0x28dc440() {
   return (neuron0x28b7970()*-0.0350008);
}

double NNfunction_sb_dRdR::synapse0x28dc480() {
   return (neuron0x28b7ed0()*0.189685);
}

double NNfunction_sb_dRdR::synapse0x28dcb00() {
   return (neuron0x28b80f0()*-0.0284024);
}

double NNfunction_sb_dRdR::synapse0x28dcb40() {
   return (neuron0x28b8430()*0.00421271);
}

double NNfunction_sb_dRdR::synapse0x28dcb80() {
   return (neuron0x28b8770()*0.00256673);
}

double NNfunction_sb_dRdR::synapse0x28dcbc0() {
   return (neuron0x28b8ab0()*-0.0022128);
}

double NNfunction_sb_dRdR::synapse0x28dcc00() {
   return (neuron0x28b8df0()*0.00790406);
}

double NNfunction_sb_dRdR::synapse0x28dcc40() {
   return (neuron0x28b9130()*-0.000110303);
}

double NNfunction_sb_dRdR::synapse0x28dcfc0() {
   return (neuron0x28b4570()*0.0419252);
}

double NNfunction_sb_dRdR::synapse0x28dd000() {
   return (neuron0x28b48b0()*0.0308534);
}

double NNfunction_sb_dRdR::synapse0x28dd040() {
   return (neuron0x28b4bf0()*-0.0601023);
}

double NNfunction_sb_dRdR::synapse0x28dd080() {
   return (neuron0x28b4f30()*0.0615269);
}

double NNfunction_sb_dRdR::synapse0x28dd0c0() {
   return (neuron0x28b5270()*0.0297503);
}

double NNfunction_sb_dRdR::synapse0x28dd100() {
   return (neuron0x28b55b0()*0.160809);
}

double NNfunction_sb_dRdR::synapse0x28dd140() {
   return (neuron0x28b58f0()*-0.0932851);
}

double NNfunction_sb_dRdR::synapse0x28dd180() {
   return (neuron0x28b5c30()*-0.0716417);
}

double NNfunction_sb_dRdR::synapse0x28dd1c0() {
   return (neuron0x28b5f70()*-0.262274);
}

double NNfunction_sb_dRdR::synapse0x28dd200() {
   return (neuron0x28b62b0()*-0.0573581);
}

double NNfunction_sb_dRdR::synapse0x28dd240() {
   return (neuron0x28b65f0()*-1.33117);
}

double NNfunction_sb_dRdR::synapse0x28dd280() {
   return (neuron0x28b6930()*0.0526482);
}

double NNfunction_sb_dRdR::synapse0x28dd2c0() {
   return (neuron0x28b6c70()*0.024686);
}

double NNfunction_sb_dRdR::synapse0x28dd300() {
   return (neuron0x28b6fb0()*-0.294085);
}

double NNfunction_sb_dRdR::synapse0x28dd340() {
   return (neuron0x28b72f0()*0.0279112);
}

double NNfunction_sb_dRdR::synapse0x28dd380() {
   return (neuron0x28b7630()*0.0271458);
}

double NNfunction_sb_dRdR::synapse0x28dce10() {
   return (neuron0x28b7970()*-0.281521);
}

double NNfunction_sb_dRdR::synapse0x28dce50() {
   return (neuron0x28b7ed0()*0.612203);
}

double NNfunction_sb_dRdR::synapse0x28dd4d0() {
   return (neuron0x28b80f0()*0.156366);
}

double NNfunction_sb_dRdR::synapse0x28dd510() {
   return (neuron0x28b8430()*-0.432553);
}

double NNfunction_sb_dRdR::synapse0x28dd550() {
   return (neuron0x28b8770()*0.068542);
}

double NNfunction_sb_dRdR::synapse0x28dd590() {
   return (neuron0x28b8ab0()*-0.0378866);
}

double NNfunction_sb_dRdR::synapse0x28dd5d0() {
   return (neuron0x28b8df0()*-0.0567591);
}

double NNfunction_sb_dRdR::synapse0x28dd610() {
   return (neuron0x28b9130()*0.066456);
}

double NNfunction_sb_dRdR::synapse0x28dd990() {
   return (neuron0x28b4570()*-0.0152159);
}

double NNfunction_sb_dRdR::synapse0x28dd9d0() {
   return (neuron0x28b48b0()*-0.00966824);
}

double NNfunction_sb_dRdR::synapse0x28dda10() {
   return (neuron0x28b4bf0()*0.0100949);
}

double NNfunction_sb_dRdR::synapse0x28dda50() {
   return (neuron0x28b4f30()*0.0395064);
}

double NNfunction_sb_dRdR::synapse0x28dda90() {
   return (neuron0x28b5270()*-0.0131401);
}

double NNfunction_sb_dRdR::synapse0x28ddad0() {
   return (neuron0x28b55b0()*-0.00183002);
}

double NNfunction_sb_dRdR::synapse0x28ddb10() {
   return (neuron0x28b58f0()*0.00181029);
}

double NNfunction_sb_dRdR::synapse0x28ddb50() {
   return (neuron0x28b5c30()*0.0183595);
}

double NNfunction_sb_dRdR::synapse0x28ddb90() {
   return (neuron0x28b5f70()*0.0427779);
}

double NNfunction_sb_dRdR::synapse0x28ddbd0() {
   return (neuron0x28b62b0()*-0.258441);
}

double NNfunction_sb_dRdR::synapse0x28ddc10() {
   return (neuron0x28b65f0()*0.0796497);
}

double NNfunction_sb_dRdR::synapse0x28ddc50() {
   return (neuron0x28b6930()*-0.0614867);
}

double NNfunction_sb_dRdR::synapse0x28ddc90() {
   return (neuron0x28b6c70()*-0.0522543);
}

double NNfunction_sb_dRdR::synapse0x28ddcd0() {
   return (neuron0x28b6fb0()*-0.075451);
}

double NNfunction_sb_dRdR::synapse0x28ddd10() {
   return (neuron0x28b72f0()*0.032557);
}

double NNfunction_sb_dRdR::synapse0x28ddd50() {
   return (neuron0x28b7630()*-0.0342755);
}

double NNfunction_sb_dRdR::synapse0x28dd7e0() {
   return (neuron0x28b7970()*-0.00984815);
}

double NNfunction_sb_dRdR::synapse0x28dd820() {
   return (neuron0x28b7ed0()*-0.697017);
}

double NNfunction_sb_dRdR::synapse0x28ddea0() {
   return (neuron0x28b80f0()*-0.131281);
}

double NNfunction_sb_dRdR::synapse0x28ddee0() {
   return (neuron0x28b8430()*-0.0425898);
}

double NNfunction_sb_dRdR::synapse0x28ddf20() {
   return (neuron0x28b8770()*-0.00717012);
}

double NNfunction_sb_dRdR::synapse0x28ddf60() {
   return (neuron0x28b8ab0()*-0.000525035);
}

double NNfunction_sb_dRdR::synapse0x28ddfa0() {
   return (neuron0x28b8df0()*0.0014737);
}

double NNfunction_sb_dRdR::synapse0x28ddfe0() {
   return (neuron0x28b9130()*0.00147216);
}

double NNfunction_sb_dRdR::synapse0x28ba580() {
   return (neuron0x28b95d0()*-0.191489);
}

double NNfunction_sb_dRdR::synapse0x28ba5c0() {
   return (neuron0x28b9ee0()*-1.61571);
}

double NNfunction_sb_dRdR::synapse0x28bba90() {
   return (neuron0x28ba9c0()*0.510684);
}

double NNfunction_sb_dRdR::synapse0x28bbad0() {
   return (neuron0x2674250()*0.98013);
}

double NNfunction_sb_dRdR::synapse0x28bc460() {
   return (neuron0x28bb7e0()*0.368416);
}

double NNfunction_sb_dRdR::synapse0x28bc4a0() {
   return (neuron0x28bc1b0()*-0.630884);
}

double NNfunction_sb_dRdR::synapse0x28bd230() {
   return (neuron0x28bcf80()*0.486304);
}

double NNfunction_sb_dRdR::synapse0x28bd270() {
   return (neuron0x28bd950()*0.310974);
}

double NNfunction_sb_dRdR::synapse0x28bdc00() {
   return (neuron0x28be320()*-1.91835);
}

double NNfunction_sb_dRdR::synapse0x28bdc40() {
   return (neuron0x28bee00()*-2.09053);
}

double NNfunction_sb_dRdR::synapse0x28be5d0() {
   return (neuron0x28bf7d0()*-1.43731);
}

double NNfunction_sb_dRdR::synapse0x28be610() {
   return (neuron0x28bc8b0()*-0.0580525);
}

double NNfunction_sb_dRdR::synapse0x28bf0b0() {
   return (neuron0x28c1380()*1.76062);
}

double NNfunction_sb_dRdR::synapse0x28bf0f0() {
   return (neuron0x28c1d50()*-0.778789);
}

double NNfunction_sb_dRdR::synapse0x28bfa80() {
   return (neuron0x28c2720()*-0.438902);
}

double NNfunction_sb_dRdR::synapse0x28bfac0() {
   return (neuron0x28c30f0()*-2.38734);
}

double NNfunction_sb_dRdR::synapse0x28bcb60() {
   return (neuron0x28c4f00()*-0.5049);
}

double NNfunction_sb_dRdR::synapse0x28bcba0() {
   return (neuron0x28c51e0()*-0.636789);
}

double NNfunction_sb_dRdR::synapse0x28c1630() {
   return (neuron0x28c5bb0()*-0.140623);
}

double NNfunction_sb_dRdR::synapse0x28c1670() {
   return (neuron0x28c6580()*0.332492);
}

double NNfunction_sb_dRdR::synapse0x28c2000() {
   return (neuron0x28c6f50()*-0.463391);
}

double NNfunction_sb_dRdR::synapse0x28c2040() {
   return (neuron0x28c7920()*0.0354905);
}

double NNfunction_sb_dRdR::synapse0x28c29d0() {
   return (neuron0x28c0470()*-0.268358);
}

double NNfunction_sb_dRdR::synapse0x28c2a10() {
   return (neuron0x28c0e40()*-0.622251);
}

double NNfunction_sb_dRdR::synapse0x28c33a0() {
   return (neuron0x28ca6b0()*-1.79922);
}

double NNfunction_sb_dRdR::synapse0x28c33e0() {
   return (neuron0x28cb080()*-0.941085);
}

double NNfunction_sb_dRdR::synapse0x28b7510() {
   return (neuron0x28cba50()*-0.239576);
}

double NNfunction_sb_dRdR::synapse0x28b7550() {
   return (neuron0x28cc420()*-2.22549);
}

double NNfunction_sb_dRdR::synapse0x28c5490() {
   return (neuron0x28ccdf0()*0.919992);
}

double NNfunction_sb_dRdR::synapse0x28c54d0() {
   return (neuron0x28cd7c0()*0.794105);
}

double NNfunction_sb_dRdR::synapse0x28c5e60() {
   return (neuron0x28ce190()*-1.12437);
}

double NNfunction_sb_dRdR::synapse0x28c5ea0() {
   return (neuron0x28ceb60()*0.493523);
}

double NNfunction_sb_dRdR::synapse0x28c6830() {
   return (neuron0x28c4bf0()*-0.0260364);
}

double NNfunction_sb_dRdR::synapse0x28c6870() {
   return (neuron0x28d1740()*0.375029);
}

double NNfunction_sb_dRdR::synapse0x28c7200() {
   return (neuron0x28d2110()*-3.93835);
}

double NNfunction_sb_dRdR::synapse0x28c7240() {
   return (neuron0x28d2ae0()*3.2683);
}

double NNfunction_sb_dRdR::synapse0x28c7bd0() {
   return (neuron0x28d34b0()*-1.26696);
}

double NNfunction_sb_dRdR::synapse0x28c7c10() {
   return (neuron0x28d3e80()*4.38322);
}

double NNfunction_sb_dRdR::synapse0x28c0720() {
   return (neuron0x28d4850()*-0.116839);
}

double NNfunction_sb_dRdR::synapse0x28c0760() {
   return (neuron0x28d5220()*0.659567);
}

double NNfunction_sb_dRdR::synapse0x28c9fd0() {
   return (neuron0x28d5bf0()*1.87724);
}

double NNfunction_sb_dRdR::synapse0x28ca010() {
   return (neuron0x28d67d0()*-0.0397689);
}

double NNfunction_sb_dRdR::synapse0x28ca960() {
   return (neuron0x28d71a0()*-1.0693);
}

double NNfunction_sb_dRdR::synapse0x28ca9a0() {
   return (neuron0x28c8020()*0.643137);
}

double NNfunction_sb_dRdR::synapse0x28cb330() {
   return (neuron0x28c89f0()*0.368814);
}

double NNfunction_sb_dRdR::synapse0x28cb370() {
   return (neuron0x28c93c0()*-0.784157);
}

double NNfunction_sb_dRdR::synapse0x28cbd00() {
   return (neuron0x28dba00()*0.501798);
}

double NNfunction_sb_dRdR::synapse0x28cbd40() {
   return (neuron0x28dc2b0()*-0.243687);
}

double NNfunction_sb_dRdR::synapse0x28cc6d0() {
   return (neuron0x28dcc80()*-1.33359);
}

double NNfunction_sb_dRdR::synapse0x28cc710() {
   return (neuron0x28dd650()*1.085);
}

double NNfunction_sb_dRdR::synapse0x28cee10() {
   return (neuron0x28b95d0()*0.197312);
}

double NNfunction_sb_dRdR::synapse0x28cee50() {
   return (neuron0x28b9ee0()*0.0158057);
}

double NNfunction_sb_dRdR::synapse0x28c43d0() {
   return (neuron0x28ba9c0()*-0.0524072);
}

double NNfunction_sb_dRdR::synapse0x28c4410() {
   return (neuron0x2674250()*0.00676713);
}

double NNfunction_sb_dRdR::synapse0x28d19f0() {
   return (neuron0x28bb7e0()*-1.82339);
}

double NNfunction_sb_dRdR::synapse0x28d1a30() {
   return (neuron0x28bc1b0()*0.000360048);
}

double NNfunction_sb_dRdR::synapse0x28d23c0() {
   return (neuron0x28bcf80()*0.0267031);
}

double NNfunction_sb_dRdR::synapse0x28d2400() {
   return (neuron0x28bd950()*0.0358169);
}

double NNfunction_sb_dRdR::synapse0x28d2d90() {
   return (neuron0x28be320()*-0.0175793);
}

double NNfunction_sb_dRdR::synapse0x28d2dd0() {
   return (neuron0x28bee00()*0.0712106);
}

double NNfunction_sb_dRdR::synapse0x28d3760() {
   return (neuron0x28bf7d0()*-0.011213);
}

double NNfunction_sb_dRdR::synapse0x28d37a0() {
   return (neuron0x28bc8b0()*-0.0575755);
}

double NNfunction_sb_dRdR::synapse0x28d4130() {
   return (neuron0x28c1380()*-0.018716);
}

double NNfunction_sb_dRdR::synapse0x28d4170() {
   return (neuron0x28c1d50()*-0.0811261);
}

double NNfunction_sb_dRdR::synapse0x28d4b00() {
   return (neuron0x28c2720()*0.0230923);
}

double NNfunction_sb_dRdR::synapse0x28d4b40() {
   return (neuron0x28c30f0()*-0.00480163);
}

double NNfunction_sb_dRdR::synapse0x28d54d0() {
   return (neuron0x28c4f00()*0.0165118);
}

double NNfunction_sb_dRdR::synapse0x28d5510() {
   return (neuron0x28c51e0()*0.0114455);
}

double NNfunction_sb_dRdR::synapse0x28d5ea0() {
   return (neuron0x28c5bb0()*0.144627);
}

double NNfunction_sb_dRdR::synapse0x28d5ee0() {
   return (neuron0x28c6580()*0.172996);
}

double NNfunction_sb_dRdR::synapse0x28d6a80() {
   return (neuron0x28c6f50()*-0.472311);
}

double NNfunction_sb_dRdR::synapse0x28d6ac0() {
   return (neuron0x28c7920()*-0.534485);
}

double NNfunction_sb_dRdR::synapse0x28d7450() {
   return (neuron0x28c0470()*-0.311415);
}

double NNfunction_sb_dRdR::synapse0x28d7490() {
   return (neuron0x28c0e40()*1.92628);
}

double NNfunction_sb_dRdR::synapse0x28c82d0() {
   return (neuron0x28ca6b0()*-0.0950136);
}

double NNfunction_sb_dRdR::synapse0x28c8310() {
   return (neuron0x28cb080()*-0.0280237);
}

double NNfunction_sb_dRdR::synapse0x28c8ca0() {
   return (neuron0x28cba50()*-0.0258157);
}

double NNfunction_sb_dRdR::synapse0x28c8ce0() {
   return (neuron0x28cc420()*0.649019);
}

double NNfunction_sb_dRdR::synapse0x28c9670() {
   return (neuron0x28ccdf0()*0.0142026);
}

double NNfunction_sb_dRdR::synapse0x28c96b0() {
   return (neuron0x28cd7c0()*0.0124358);
}

double NNfunction_sb_dRdR::synapse0x28dbb90() {
   return (neuron0x28ce190()*-0.0775074);
}

double NNfunction_sb_dRdR::synapse0x28dbbd0() {
   return (neuron0x28ceb60()*0.0813377);
}

double NNfunction_sb_dRdR::synapse0x28dc560() {
   return (neuron0x28c4bf0()*0.0115702);
}

double NNfunction_sb_dRdR::synapse0x28dc5a0() {
   return (neuron0x28d1740()*-0.0407782);
}

double NNfunction_sb_dRdR::synapse0x28dcf30() {
   return (neuron0x28d2110()*-0.0171745);
}

double NNfunction_sb_dRdR::synapse0x28dcf70() {
   return (neuron0x28d2ae0()*-0.00270069);
}

double NNfunction_sb_dRdR::synapse0x28dd900() {
   return (neuron0x28d34b0()*0.0458463);
}

double NNfunction_sb_dRdR::synapse0x28dd940() {
   return (neuron0x28d3e80()*0.22275);
}

double NNfunction_sb_dRdR::synapse0x28b97f0() {
   return (neuron0x28d4850()*-0.0535586);
}

double NNfunction_sb_dRdR::synapse0x28b9830() {
   return (neuron0x28d5220()*-1.44592);
}

double NNfunction_sb_dRdR::synapse0x28cd0a0() {
   return (neuron0x28d5bf0()*-1.52727);
}

double NNfunction_sb_dRdR::synapse0x28cd0e0() {
   return (neuron0x28d67d0()*-0.00882832);
}

double NNfunction_sb_dRdR::synapse0x28de020() {
   return (neuron0x28d71a0()*-0.0817935);
}

double NNfunction_sb_dRdR::synapse0x28de060() {
   return (neuron0x28c8020()*0.0430581);
}

double NNfunction_sb_dRdR::synapse0x28de0a0() {
   return (neuron0x28c89f0()*0.0283429);
}

double NNfunction_sb_dRdR::synapse0x28de0e0() {
   return (neuron0x28c93c0()*-0.0352961);
}

double NNfunction_sb_dRdR::synapse0x28e4f90() {
   return (neuron0x28dba00()*0.0231728);
}

double NNfunction_sb_dRdR::synapse0x28e4fd0() {
   return (neuron0x28dc2b0()*0.0746097);
}

double NNfunction_sb_dRdR::synapse0x28e5010() {
   return (neuron0x28dcc80()*-0.0399227);
}

double NNfunction_sb_dRdR::synapse0x28e5050() {
   return (neuron0x28dd650()*-0.77164);
}

double NNfunction_sb_dRdR::synapse0x28e53d0() {
   return (neuron0x28b95d0()*-1.15974);
}

double NNfunction_sb_dRdR::synapse0x28e5410() {
   return (neuron0x28b9ee0()*-0.0912538);
}

double NNfunction_sb_dRdR::synapse0x28e5450() {
   return (neuron0x28ba9c0()*0.307723);
}

double NNfunction_sb_dRdR::synapse0x28e5490() {
   return (neuron0x2674250()*-0.0657793);
}

double NNfunction_sb_dRdR::synapse0x28e54d0() {
   return (neuron0x28bb7e0()*0.451529);
}

double NNfunction_sb_dRdR::synapse0x28e5510() {
   return (neuron0x28bc1b0()*0.0489506);
}

double NNfunction_sb_dRdR::synapse0x28e5550() {
   return (neuron0x28bcf80()*-0.716523);
}

double NNfunction_sb_dRdR::synapse0x28e5590() {
   return (neuron0x28bd950()*-0.0695647);
}

double NNfunction_sb_dRdR::synapse0x28e55d0() {
   return (neuron0x28be320()*0.0270924);
}

double NNfunction_sb_dRdR::synapse0x28e5610() {
   return (neuron0x28bee00()*-0.247462);
}

double NNfunction_sb_dRdR::synapse0x28e5650() {
   return (neuron0x28bf7d0()*0.0199779);
}

double NNfunction_sb_dRdR::synapse0x28e5690() {
   return (neuron0x28bc8b0()*0.32701);
}

double NNfunction_sb_dRdR::synapse0x28e56d0() {
   return (neuron0x28c1380()*0.0410797);
}

double NNfunction_sb_dRdR::synapse0x28e5710() {
   return (neuron0x28c1d50()*0.573747);
}

double NNfunction_sb_dRdR::synapse0x28e5750() {
   return (neuron0x28c2720()*0.00330304);
}

double NNfunction_sb_dRdR::synapse0x28e5790() {
   return (neuron0x28c30f0()*0.105446);
}

double NNfunction_sb_dRdR::synapse0x28e5220() {
   return (neuron0x28c4f00()*-0.0372889);
}

double NNfunction_sb_dRdR::synapse0x28e5260() {
   return (neuron0x28c51e0()*-0.115306);
}

double NNfunction_sb_dRdR::synapse0x28e58e0() {
   return (neuron0x28c5bb0()*2.21605);
}

double NNfunction_sb_dRdR::synapse0x28e5920() {
   return (neuron0x28c6580()*-1.03858);
}

double NNfunction_sb_dRdR::synapse0x28e5960() {
   return (neuron0x28c6f50()*0.171459);
}

double NNfunction_sb_dRdR::synapse0x28e59a0() {
   return (neuron0x28c7920()*-0.905695);
}

double NNfunction_sb_dRdR::synapse0x28e59e0() {
   return (neuron0x28c0470()*2.28637);
}

double NNfunction_sb_dRdR::synapse0x28e5a20() {
   return (neuron0x28c0e40()*1.81301);
}

double NNfunction_sb_dRdR::synapse0x28e5a60() {
   return (neuron0x28ca6b0()*0.723513);
}

double NNfunction_sb_dRdR::synapse0x28e5aa0() {
   return (neuron0x28cb080()*-0.179761);
}

double NNfunction_sb_dRdR::synapse0x28e5ae0() {
   return (neuron0x28cba50()*0.052025);
}

double NNfunction_sb_dRdR::synapse0x28e5b20() {
   return (neuron0x28cc420()*1.69412);
}

double NNfunction_sb_dRdR::synapse0x28e5b60() {
   return (neuron0x28ccdf0()*0.0117462);
}

double NNfunction_sb_dRdR::synapse0x28e5ba0() {
   return (neuron0x28cd7c0()*-0.0583906);
}

double NNfunction_sb_dRdR::synapse0x28e5be0() {
   return (neuron0x28ce190()*-1.06571);
}

double NNfunction_sb_dRdR::synapse0x28e5c20() {
   return (neuron0x28ceb60()*-0.0655534);
}

double NNfunction_sb_dRdR::synapse0x28e57d0() {
   return (neuron0x28c4bf0()*0.0214117);
}

double NNfunction_sb_dRdR::synapse0x28e5810() {
   return (neuron0x28d1740()*0.339294);
}

double NNfunction_sb_dRdR::synapse0x28e5850() {
   return (neuron0x28d2110()*0.228572);
}

double NNfunction_sb_dRdR::synapse0x28e5890() {
   return (neuron0x28d2ae0()*0.170624);
}

double NNfunction_sb_dRdR::synapse0x28e5e70() {
   return (neuron0x28d34b0()*-0.0391835);
}

double NNfunction_sb_dRdR::synapse0x28e5eb0() {
   return (neuron0x28d3e80()*-2.41434);
}

double NNfunction_sb_dRdR::synapse0x28e5ef0() {
   return (neuron0x28d4850()*0.339113);
}

double NNfunction_sb_dRdR::synapse0x28e5f30() {
   return (neuron0x28d5220()*-0.652724);
}

double NNfunction_sb_dRdR::synapse0x28e5f70() {
   return (neuron0x28d5bf0()*-1.05322);
}

double NNfunction_sb_dRdR::synapse0x28e5fb0() {
   return (neuron0x28d67d0()*0.349874);
}

double NNfunction_sb_dRdR::synapse0x28e5ff0() {
   return (neuron0x28d71a0()*0.576759);
}

double NNfunction_sb_dRdR::synapse0x28e6030() {
   return (neuron0x28c8020()*-0.0306537);
}

double NNfunction_sb_dRdR::synapse0x28e6070() {
   return (neuron0x28c89f0()*-0.0663132);
}

double NNfunction_sb_dRdR::synapse0x28e60b0() {
   return (neuron0x28c93c0()*0.00443821);
}

double NNfunction_sb_dRdR::synapse0x28e60f0() {
   return (neuron0x28dba00()*-0.00993402);
}

double NNfunction_sb_dRdR::synapse0x28e6130() {
   return (neuron0x28dc2b0()*3.13973);
}

double NNfunction_sb_dRdR::synapse0x28e6170() {
   return (neuron0x28dcc80()*0.264277);
}

double NNfunction_sb_dRdR::synapse0x28e61b0() {
   return (neuron0x28dd650()*-2.54202);
}

double NNfunction_sb_dRdR::synapse0x28e6530() {
   return (neuron0x28b95d0()*0.161122);
}

double NNfunction_sb_dRdR::synapse0x28e6570() {
   return (neuron0x28b9ee0()*-1.5892);
}

double NNfunction_sb_dRdR::synapse0x28e65b0() {
   return (neuron0x28ba9c0()*-2.82857);
}

double NNfunction_sb_dRdR::synapse0x28e65f0() {
   return (neuron0x2674250()*-1.60959);
}

double NNfunction_sb_dRdR::synapse0x28e6630() {
   return (neuron0x28bb7e0()*0.76635);
}

double NNfunction_sb_dRdR::synapse0x28e6670() {
   return (neuron0x28bc1b0()*1.55121);
}

double NNfunction_sb_dRdR::synapse0x28e66b0() {
   return (neuron0x28bcf80()*2.82471);
}

double NNfunction_sb_dRdR::synapse0x28e66f0() {
   return (neuron0x28bd950()*-0.972628);
}

double NNfunction_sb_dRdR::synapse0x28e6730() {
   return (neuron0x28be320()*2.06923);
}

double NNfunction_sb_dRdR::synapse0x28e6770() {
   return (neuron0x28bee00()*2.58984);
}

double NNfunction_sb_dRdR::synapse0x28e67b0() {
   return (neuron0x28bf7d0()*-0.570055);
}

double NNfunction_sb_dRdR::synapse0x28e67f0() {
   return (neuron0x28bc8b0()*-1.9429);
}

double NNfunction_sb_dRdR::synapse0x28e6830() {
   return (neuron0x28c1380()*0.802281);
}

double NNfunction_sb_dRdR::synapse0x28e6870() {
   return (neuron0x28c1d50()*-2.20698);
}

double NNfunction_sb_dRdR::synapse0x28e68b0() {
   return (neuron0x28c2720()*-1.15107);
}

double NNfunction_sb_dRdR::synapse0x28e68f0() {
   return (neuron0x28c30f0()*-0.632337);
}

double NNfunction_sb_dRdR::synapse0x28e6380() {
   return (neuron0x28c4f00()*-1.32179);
}

double NNfunction_sb_dRdR::synapse0x28e63c0() {
   return (neuron0x28c51e0()*2.32405);
}

double NNfunction_sb_dRdR::synapse0x28e6a40() {
   return (neuron0x28c5bb0()*-8.30473);
}

double NNfunction_sb_dRdR::synapse0x28e6a80() {
   return (neuron0x28c6580()*2.5715);
}

double NNfunction_sb_dRdR::synapse0x28e6ac0() {
   return (neuron0x28c6f50()*2.05114);
}

double NNfunction_sb_dRdR::synapse0x28e6b00() {
   return (neuron0x28c7920()*-0.237819);
}

double NNfunction_sb_dRdR::synapse0x28e6b40() {
   return (neuron0x28c0470()*-4.98522);
}

double NNfunction_sb_dRdR::synapse0x28e6b80() {
   return (neuron0x28c0e40()*-1.71261);
}

double NNfunction_sb_dRdR::synapse0x28e6bc0() {
   return (neuron0x28ca6b0()*-1.20241);
}

double NNfunction_sb_dRdR::synapse0x28e6c00() {
   return (neuron0x28cb080()*2.5263);
}

double NNfunction_sb_dRdR::synapse0x28e6c40() {
   return (neuron0x28cba50()*1.29515);
}

double NNfunction_sb_dRdR::synapse0x28e6c80() {
   return (neuron0x28cc420()*-0.856156);
}

double NNfunction_sb_dRdR::synapse0x28e6cc0() {
   return (neuron0x28ccdf0()*-1.89831);
}

double NNfunction_sb_dRdR::synapse0x28e6d00() {
   return (neuron0x28cd7c0()*-1.6672);
}

double NNfunction_sb_dRdR::synapse0x28e6d40() {
   return (neuron0x28ce190()*7.24727);
}

double NNfunction_sb_dRdR::synapse0x28e6d80() {
   return (neuron0x28ceb60()*4.76196);
}

double NNfunction_sb_dRdR::synapse0x28e6930() {
   return (neuron0x28c4bf0()*1.40823);
}

double NNfunction_sb_dRdR::synapse0x28e6970() {
   return (neuron0x28d1740()*-2.57754);
}

double NNfunction_sb_dRdR::synapse0x28e69b0() {
   return (neuron0x28d2110()*1.83356);
}

double NNfunction_sb_dRdR::synapse0x28e69f0() {
   return (neuron0x28d2ae0()*-1.57948);
}

double NNfunction_sb_dRdR::synapse0x28e6fd0() {
   return (neuron0x28d34b0()*-1.86884);
}

double NNfunction_sb_dRdR::synapse0x28e7010() {
   return (neuron0x28d3e80()*-0.163983);
}

double NNfunction_sb_dRdR::synapse0x28e7050() {
   return (neuron0x28d4850()*-2.02956);
}

double NNfunction_sb_dRdR::synapse0x28e7090() {
   return (neuron0x28d5220()*3.35921);
}

double NNfunction_sb_dRdR::synapse0x28e70d0() {
   return (neuron0x28d5bf0()*2.70003);
}

double NNfunction_sb_dRdR::synapse0x28e7110() {
   return (neuron0x28d67d0()*-2.53605);
}

double NNfunction_sb_dRdR::synapse0x28e7150() {
   return (neuron0x28d71a0()*-2.51746);
}

double NNfunction_sb_dRdR::synapse0x28e7190() {
   return (neuron0x28c8020()*-1.10491);
}

double NNfunction_sb_dRdR::synapse0x28e71d0() {
   return (neuron0x28c89f0()*-2.26032);
}

double NNfunction_sb_dRdR::synapse0x28e7210() {
   return (neuron0x28c93c0()*-2.16414);
}

double NNfunction_sb_dRdR::synapse0x28e7250() {
   return (neuron0x28dba00()*-1.4266);
}

double NNfunction_sb_dRdR::synapse0x28e7290() {
   return (neuron0x28dc2b0()*-2.54556);
}

double NNfunction_sb_dRdR::synapse0x28e72d0() {
   return (neuron0x28dcc80()*-1.20547);
}

double NNfunction_sb_dRdR::synapse0x28e7310() {
   return (neuron0x28dd650()*1.3768);
}

double NNfunction_sb_dRdR::synapse0x28e7690() {
   return (neuron0x28b95d0()*0.275791);
}

double NNfunction_sb_dRdR::synapse0x28e76d0() {
   return (neuron0x28b9ee0()*0.332165);
}

double NNfunction_sb_dRdR::synapse0x28e7710() {
   return (neuron0x28ba9c0()*0.144528);
}

double NNfunction_sb_dRdR::synapse0x28e7750() {
   return (neuron0x2674250()*0.0627771);
}

double NNfunction_sb_dRdR::synapse0x28e7790() {
   return (neuron0x28bb7e0()*0.231985);
}

double NNfunction_sb_dRdR::synapse0x28e77d0() {
   return (neuron0x28bc1b0()*-0.0501026);
}

double NNfunction_sb_dRdR::synapse0x28e7810() {
   return (neuron0x28bcf80()*-0.072233);
}

double NNfunction_sb_dRdR::synapse0x28e7850() {
   return (neuron0x28bd950()*-0.413084);
}

double NNfunction_sb_dRdR::synapse0x28e7890() {
   return (neuron0x28be320()*0.239629);
}

double NNfunction_sb_dRdR::synapse0x28e78d0() {
   return (neuron0x28bee00()*-0.188268);
}

double NNfunction_sb_dRdR::synapse0x28e7910() {
   return (neuron0x28bf7d0()*-0.126712);
}

double NNfunction_sb_dRdR::synapse0x28e7950() {
   return (neuron0x28bc8b0()*-0.0305693);
}

double NNfunction_sb_dRdR::synapse0x28e7990() {
   return (neuron0x28c1380()*0.28209);
}

double NNfunction_sb_dRdR::synapse0x28e79d0() {
   return (neuron0x28c1d50()*0.0848997);
}

double NNfunction_sb_dRdR::synapse0x28e7a10() {
   return (neuron0x28c2720()*-0.284772);
}

double NNfunction_sb_dRdR::synapse0x28e7a50() {
   return (neuron0x28c30f0()*-0.151913);
}

double NNfunction_sb_dRdR::synapse0x28e74e0() {
   return (neuron0x28c4f00()*-0.105014);
}

double NNfunction_sb_dRdR::synapse0x28e7520() {
   return (neuron0x28c51e0()*0.0930263);
}

double NNfunction_sb_dRdR::synapse0x28e7ba0() {
   return (neuron0x28c5bb0()*0.155582);
}

double NNfunction_sb_dRdR::synapse0x28e7be0() {
   return (neuron0x28c6580()*-0.592228);
}

double NNfunction_sb_dRdR::synapse0x28e7c20() {
   return (neuron0x28c6f50()*0.204451);
}

double NNfunction_sb_dRdR::synapse0x28e7c60() {
   return (neuron0x28c7920()*0.0518313);
}

double NNfunction_sb_dRdR::synapse0x28e7ca0() {
   return (neuron0x28c0470()*-0.116417);
}

double NNfunction_sb_dRdR::synapse0x28e7ce0() {
   return (neuron0x28c0e40()*0.856928);
}

double NNfunction_sb_dRdR::synapse0x28e7d20() {
   return (neuron0x28ca6b0()*-0.411158);
}

double NNfunction_sb_dRdR::synapse0x28e7d60() {
   return (neuron0x28cb080()*0.0912298);
}

double NNfunction_sb_dRdR::synapse0x28e7da0() {
   return (neuron0x28cba50()*0.241193);
}

double NNfunction_sb_dRdR::synapse0x28e7de0() {
   return (neuron0x28cc420()*-0.189938);
}

double NNfunction_sb_dRdR::synapse0x28e7e20() {
   return (neuron0x28ccdf0()*-0.262858);
}

double NNfunction_sb_dRdR::synapse0x28e7e60() {
   return (neuron0x28cd7c0()*-0.11789);
}

double NNfunction_sb_dRdR::synapse0x28e7ea0() {
   return (neuron0x28ce190()*-0.0654447);
}

double NNfunction_sb_dRdR::synapse0x28e7ee0() {
   return (neuron0x28ceb60()*-0.399037);
}

double NNfunction_sb_dRdR::synapse0x28e7a90() {
   return (neuron0x28c4bf0()*-0.268082);
}

double NNfunction_sb_dRdR::synapse0x28e7ad0() {
   return (neuron0x28d1740()*-0.125479);
}

double NNfunction_sb_dRdR::synapse0x28e7b10() {
   return (neuron0x28d2110()*-0.541138);
}

double NNfunction_sb_dRdR::synapse0x28e7b50() {
   return (neuron0x28d2ae0()*-0.0455516);
}

double NNfunction_sb_dRdR::synapse0x28e8130() {
   return (neuron0x28d34b0()*-0.610079);
}

double NNfunction_sb_dRdR::synapse0x28e8170() {
   return (neuron0x28d3e80()*0.33921);
}

double NNfunction_sb_dRdR::synapse0x28e81b0() {
   return (neuron0x28d4850()*0.0301777);
}

double NNfunction_sb_dRdR::synapse0x28e81f0() {
   return (neuron0x28d5220()*-0.937551);
}

double NNfunction_sb_dRdR::synapse0x28e8230() {
   return (neuron0x28d5bf0()*-0.366797);
}

double NNfunction_sb_dRdR::synapse0x28e8270() {
   return (neuron0x28d67d0()*-0.51692);
}

double NNfunction_sb_dRdR::synapse0x28e82b0() {
   return (neuron0x28d71a0()*0.0405999);
}

double NNfunction_sb_dRdR::synapse0x28e82f0() {
   return (neuron0x28c8020()*-0.541366);
}

double NNfunction_sb_dRdR::synapse0x28e8330() {
   return (neuron0x28c89f0()*-0.734482);
}

double NNfunction_sb_dRdR::synapse0x28e8370() {
   return (neuron0x28c93c0()*0.276398);
}

double NNfunction_sb_dRdR::synapse0x28e83b0() {
   return (neuron0x28dba00()*-0.144095);
}

double NNfunction_sb_dRdR::synapse0x28e83f0() {
   return (neuron0x28dc2b0()*-0.0647512);
}

double NNfunction_sb_dRdR::synapse0x28e8430() {
   return (neuron0x28dcc80()*0.0452393);
}

double NNfunction_sb_dRdR::synapse0x28e8470() {
   return (neuron0x28dd650()*-0.0264311);
}

double NNfunction_sb_dRdR::synapse0x28b9590() {
   return (neuron0x28e4850()*6.54241);
}

double NNfunction_sb_dRdR::synapse0x28e86d0() {
   return (neuron0x28e4bf0()*-6.09971);
}

double NNfunction_sb_dRdR::synapse0x28e8710() {
   return (neuron0x28e5090()*-5.67701);
}

double NNfunction_sb_dRdR::synapse0x28e8750() {
   return (neuron0x28e61f0()*12.7706);
}

double NNfunction_sb_dRdR::synapse0x28e8790() {
   return (neuron0x28e7350()*-0.548855);
}

