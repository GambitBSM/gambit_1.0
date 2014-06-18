#include "NNfunction_sb_cLcL.h"
#include <cmath>

double NNfunction_sb_cLcL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5897)/15.3382;
   input1 = (in1 - 3.77912)/1156.83;
   input2 = (in2 - 668.163)/626.483;
   input3 = (in3 - -55.5737)/824.699;
   input4 = (in4 - 1060.32)/954.462;
   input5 = (in5 - 895.135)/946.23;
   input6 = (in6 - 901.335)/948.747;
   input7 = (in7 - 930.583)/938.599;
   input8 = (in8 - 929.193)/974.337;
   input9 = (in9 - 901.416)/956.501;
   input10 = (in10 - 991.202)/956.463;
   input11 = (in11 - 724.714)/872.942;
   input12 = (in12 - 316.551)/282.888;
   input13 = (in13 - 505.138)/523.386;
   input14 = (in14 - 723.432)/821.32;
   input15 = (in15 - 717.724)/818.145;
   input16 = (in16 - 536.195)/562.651;
   input17 = (in17 - 769.318)/907.722;
   input18 = (in18 - 758.421)/910.288;
   input19 = (in19 - 807.62)/884.267;
   input20 = (in20 - -4.33238)/485.425;
   input21 = (in21 - 1.44627)/1153.42;
   input22 = (in22 - 0.65064)/1202.14;
   input23 = (in23 - -200.745)/605.667;
   switch(index) {
     case 0:
         return neuron0x14054a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcL::Value(int index, double* input) {
   input0 = (input[0] - 23.5897)/15.3382;
   input1 = (input[1] - 3.77912)/1156.83;
   input2 = (input[2] - 668.163)/626.483;
   input3 = (input[3] - -55.5737)/824.699;
   input4 = (input[4] - 1060.32)/954.462;
   input5 = (input[5] - 895.135)/946.23;
   input6 = (input[6] - 901.335)/948.747;
   input7 = (input[7] - 930.583)/938.599;
   input8 = (input[8] - 929.193)/974.337;
   input9 = (input[9] - 901.416)/956.501;
   input10 = (input[10] - 991.202)/956.463;
   input11 = (input[11] - 724.714)/872.942;
   input12 = (input[12] - 316.551)/282.888;
   input13 = (input[13] - 505.138)/523.386;
   input14 = (input[14] - 723.432)/821.32;
   input15 = (input[15] - 717.724)/818.145;
   input16 = (input[16] - 536.195)/562.651;
   input17 = (input[17] - 769.318)/907.722;
   input18 = (input[18] - 758.421)/910.288;
   input19 = (input[19] - 807.62)/884.267;
   input20 = (input[20] - -4.33238)/485.425;
   input21 = (input[21] - 1.44627)/1153.42;
   input22 = (input[22] - 0.65064)/1202.14;
   input23 = (input[23] - -200.745)/605.667;
   switch(index) {
     case 0:
         return neuron0x14054a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcL::neuron0x13d1560() {
   return input0;
}

double NNfunction_sb_cLcL::neuron0x13d18a0() {
   return input1;
}

double NNfunction_sb_cLcL::neuron0x13d1be0() {
   return input2;
}

double NNfunction_sb_cLcL::neuron0x13d1f20() {
   return input3;
}

double NNfunction_sb_cLcL::neuron0x13d2260() {
   return input4;
}

double NNfunction_sb_cLcL::neuron0x13d25a0() {
   return input5;
}

double NNfunction_sb_cLcL::neuron0x13d28e0() {
   return input6;
}

double NNfunction_sb_cLcL::neuron0x13d2c20() {
   return input7;
}

double NNfunction_sb_cLcL::neuron0x13d2f60() {
   return input8;
}

double NNfunction_sb_cLcL::neuron0x13d32a0() {
   return input9;
}

double NNfunction_sb_cLcL::neuron0x13d35e0() {
   return input10;
}

double NNfunction_sb_cLcL::neuron0x13d3920() {
   return input11;
}

double NNfunction_sb_cLcL::neuron0x13d3c60() {
   return input12;
}

double NNfunction_sb_cLcL::neuron0x13d3fa0() {
   return input13;
}

double NNfunction_sb_cLcL::neuron0x13d42e0() {
   return input14;
}

double NNfunction_sb_cLcL::neuron0x13d4620() {
   return input15;
}

double NNfunction_sb_cLcL::neuron0x13d4960() {
   return input16;
}

double NNfunction_sb_cLcL::neuron0x13d4ec0() {
   return input17;
}

double NNfunction_sb_cLcL::neuron0x13d50e0() {
   return input18;
}

double NNfunction_sb_cLcL::neuron0x13d5420() {
   return input19;
}

double NNfunction_sb_cLcL::neuron0x13d5760() {
   return input20;
}

double NNfunction_sb_cLcL::neuron0x13d5aa0() {
   return input21;
}

double NNfunction_sb_cLcL::neuron0x13d5de0() {
   return input22;
}

double NNfunction_sb_cLcL::neuron0x13d6120() {
   return input23;
}

double NNfunction_sb_cLcL::input0x13d65c0() {
   double input = -1.01394;
   input += synapse0x11913d0();
   input += synapse0x13d1420();
   input += synapse0x13d1460();
   input += synapse0x13d6870();
   input += synapse0x13d68b0();
   input += synapse0x13d68f0();
   input += synapse0x13d6930();
   input += synapse0x13d6970();
   input += synapse0x13d69b0();
   input += synapse0x13d69f0();
   input += synapse0x13d6a30();
   input += synapse0x13d6a70();
   input += synapse0x13d6ab0();
   input += synapse0x13d6af0();
   input += synapse0x13d6b30();
   input += synapse0x13d6b70();
   input += synapse0x13d1390();
   input += synapse0x13d13d0();
   input += synapse0x1182c70();
   input += synapse0x1182cb0();
   input += synapse0x13d6dd0();
   input += synapse0x13d6e10();
   input += synapse0x13d6e50();
   input += synapse0x13d6e90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d65c0() {
   double input = input0x13d65c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d6ed0() {
   double input = -0.183325;
   input += synapse0x13d7210();
   input += synapse0x13d7250();
   input += synapse0x13d7290();
   input += synapse0x13d72d0();
   input += synapse0x13d7310();
   input += synapse0x13d7350();
   input += synapse0x13d7390();
   input += synapse0x13d73d0();
   input += synapse0x13d7410();
   input += synapse0x13d6cc0();
   input += synapse0x13d6d00();
   input += synapse0x13d6d40();
   input += synapse0x13d6d80();
   input += synapse0x13d7660();
   input += synapse0x13d76a0();
   input += synapse0x13d76e0();
   input += synapse0x13d7060();
   input += synapse0x13d70a0();
   input += synapse0x13d7830();
   input += synapse0x13d7870();
   input += synapse0x13d78b0();
   input += synapse0x13d78f0();
   input += synapse0x13d7930();
   input += synapse0x13d7970();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d6ed0() {
   double input = input0x13d6ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d79b0() {
   double input = -2.33381;
   input += synapse0x13d7cf0();
   input += synapse0x13d7d30();
   input += synapse0x13d7d70();
   input += synapse0x13d7db0();
   input += synapse0x13d7df0();
   input += synapse0x13d7e30();
   input += synapse0x13d7e70();
   input += synapse0x13d7eb0();
   input += synapse0x13d7ef0();
   input += synapse0x13d7f30();
   input += synapse0x13d7f70();
   input += synapse0x13d7fb0();
   input += synapse0x13d7ff0();
   input += synapse0x13d8030();
   input += synapse0x13d8070();
   input += synapse0x13d80b0();
   input += synapse0x13d7b40();
   input += synapse0x13d7b80();
   input += synapse0x1190ac0();
   input += synapse0x1190b00();
   input += synapse0x13c05f0();
   input += synapse0x13c0630();
   input += synapse0x13c0670();
   input += synapse0x13d14a0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d79b0() {
   double input = input0x13d79b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x1191240() {
   double input = -0.828977;
   input += synapse0x13d7600();
   input += synapse0x13d14e0();
   input += synapse0x13d1520();
   input += synapse0x13d8200();
   input += synapse0x13d8240();
   input += synapse0x13d8280();
   input += synapse0x13d82c0();
   input += synapse0x13d8300();
   input += synapse0x13d8340();
   input += synapse0x13d8380();
   input += synapse0x13d83c0();
   input += synapse0x13d8400();
   input += synapse0x13d8440();
   input += synapse0x13d8480();
   input += synapse0x13d84c0();
   input += synapse0x13d8500();
   input += synapse0x13d7450();
   input += synapse0x13d7490();
   input += synapse0x13d8650();
   input += synapse0x13d8690();
   input += synapse0x13d86d0();
   input += synapse0x13d8710();
   input += synapse0x13d8750();
   input += synapse0x13d8790();
   return input;
}

double NNfunction_sb_cLcL::neuron0x1191240() {
   double input = input0x1191240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d87d0() {
   double input = 1.17298;
   input += synapse0x13d8b10();
   input += synapse0x13d8b50();
   input += synapse0x13d8b90();
   input += synapse0x13d8bd0();
   input += synapse0x13d8c10();
   input += synapse0x13d8c50();
   input += synapse0x13d8c90();
   input += synapse0x13d8cd0();
   input += synapse0x13d8d10();
   input += synapse0x13d8d50();
   input += synapse0x13d8d90();
   input += synapse0x13d8dd0();
   input += synapse0x13d8e10();
   input += synapse0x13d8e50();
   input += synapse0x13d8e90();
   input += synapse0x13d8ed0();
   input += synapse0x13d8960();
   input += synapse0x13d89a0();
   input += synapse0x13d9020();
   input += synapse0x13d9060();
   input += synapse0x13d90a0();
   input += synapse0x13d90e0();
   input += synapse0x13d9120();
   input += synapse0x13d9160();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d87d0() {
   double input = input0x13d87d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d91a0() {
   double input = 1.10242;
   input += synapse0x13d94e0();
   input += synapse0x13d9520();
   input += synapse0x13d9560();
   input += synapse0x13d95a0();
   input += synapse0x13d95e0();
   input += synapse0x13d9620();
   input += synapse0x13d9660();
   input += synapse0x13d96a0();
   input += synapse0x13d96e0();
   input += synapse0x1190e30();
   input += synapse0x1190e70();
   input += synapse0x1190eb0();
   input += synapse0x1190ef0();
   input += synapse0x1190f30();
   input += synapse0x1190f70();
   input += synapse0x1190fb0();
   input += synapse0x13d9330();
   input += synapse0x13d9370();
   input += synapse0x1191100();
   input += synapse0x1191140();
   input += synapse0x1191180();
   input += synapse0x11911c0();
   input += synapse0x1191200();
   input += synapse0x13d9f30();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d91a0() {
   double input = input0x13d91a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d9f70() {
   double input = 1.3207;
   input += synapse0x13da2b0();
   input += synapse0x13da2f0();
   input += synapse0x13da330();
   input += synapse0x13da370();
   input += synapse0x13da3b0();
   input += synapse0x13da3f0();
   input += synapse0x13da430();
   input += synapse0x13da470();
   input += synapse0x13da4b0();
   input += synapse0x13da4f0();
   input += synapse0x13da530();
   input += synapse0x13da570();
   input += synapse0x13da5b0();
   input += synapse0x13da5f0();
   input += synapse0x13da630();
   input += synapse0x13da670();
   input += synapse0x13da100();
   input += synapse0x13da140();
   input += synapse0x13da7c0();
   input += synapse0x13da800();
   input += synapse0x13da840();
   input += synapse0x13da880();
   input += synapse0x13da8c0();
   input += synapse0x13da900();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d9f70() {
   double input = input0x13d9f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13da940() {
   double input = 5.10309;
   input += synapse0x13dac80();
   input += synapse0x13dacc0();
   input += synapse0x13dad00();
   input += synapse0x13dad40();
   input += synapse0x13dad80();
   input += synapse0x13dadc0();
   input += synapse0x13dae00();
   input += synapse0x13dae40();
   input += synapse0x13dae80();
   input += synapse0x13daec0();
   input += synapse0x13daf00();
   input += synapse0x13daf40();
   input += synapse0x13daf80();
   input += synapse0x13dafc0();
   input += synapse0x13db000();
   input += synapse0x13db040();
   input += synapse0x13daad0();
   input += synapse0x13dab10();
   input += synapse0x13db190();
   input += synapse0x13db1d0();
   input += synapse0x13db210();
   input += synapse0x13db250();
   input += synapse0x13db290();
   input += synapse0x13db2d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13da940() {
   double input = input0x13da940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13db310() {
   double input = 2.55865;
   input += synapse0x13d4db0();
   input += synapse0x13d4df0();
   input += synapse0x13d4e30();
   input += synapse0x13d4e70();
   input += synapse0x13db860();
   input += synapse0x13db8a0();
   input += synapse0x13db8e0();
   input += synapse0x13db920();
   input += synapse0x13db960();
   input += synapse0x13db9a0();
   input += synapse0x13db9e0();
   input += synapse0x13dba20();
   input += synapse0x13dba60();
   input += synapse0x13dbaa0();
   input += synapse0x13dbae0();
   input += synapse0x13dbb20();
   input += synapse0x13db4a0();
   input += synapse0x13db4e0();
   input += synapse0x13dbc70();
   input += synapse0x13dbcb0();
   input += synapse0x13dbcf0();
   input += synapse0x13dbd30();
   input += synapse0x13dbd70();
   input += synapse0x13dbdb0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13db310() {
   double input = input0x13db310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13dbdf0() {
   double input = -2.68841;
   input += synapse0x13dc130();
   input += synapse0x13dc170();
   input += synapse0x13dc1b0();
   input += synapse0x13dc1f0();
   input += synapse0x13dc230();
   input += synapse0x13dc270();
   input += synapse0x13dc2b0();
   input += synapse0x13dc2f0();
   input += synapse0x13dc330();
   input += synapse0x13dc370();
   input += synapse0x13dc3b0();
   input += synapse0x13dc3f0();
   input += synapse0x13dc430();
   input += synapse0x13dc470();
   input += synapse0x13dc4b0();
   input += synapse0x13dc4f0();
   input += synapse0x13dbf80();
   input += synapse0x13dbfc0();
   input += synapse0x13dc640();
   input += synapse0x13dc680();
   input += synapse0x13dc6c0();
   input += synapse0x13dc700();
   input += synapse0x13dc740();
   input += synapse0x13dc780();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13dbdf0() {
   double input = input0x13dbdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13dc7c0() {
   double input = 0.408025;
   input += synapse0x13dcb00();
   input += synapse0x13dcb40();
   input += synapse0x13dcb80();
   input += synapse0x13dcbc0();
   input += synapse0x13dcc00();
   input += synapse0x13dcc40();
   input += synapse0x13dcc80();
   input += synapse0x13dccc0();
   input += synapse0x13dcd00();
   input += synapse0x13dcd40();
   input += synapse0x13dcd80();
   input += synapse0x13dcdc0();
   input += synapse0x13dce00();
   input += synapse0x13dce40();
   input += synapse0x13dce80();
   input += synapse0x13dcec0();
   input += synapse0x13dc950();
   input += synapse0x13dc990();
   input += synapse0x13d9720();
   input += synapse0x13d9760();
   input += synapse0x13d97a0();
   input += synapse0x13d97e0();
   input += synapse0x13d9820();
   input += synapse0x13d9860();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13dc7c0() {
   double input = input0x13dc7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13d98a0() {
   double input = 0.0299623;
   input += synapse0x13d9be0();
   input += synapse0x13d9c20();
   input += synapse0x13d9c60();
   input += synapse0x13d9ca0();
   input += synapse0x13d9ce0();
   input += synapse0x13d9d20();
   input += synapse0x13d9d60();
   input += synapse0x13d9da0();
   input += synapse0x13d9de0();
   input += synapse0x13d9e20();
   input += synapse0x13d9e60();
   input += synapse0x13d9ea0();
   input += synapse0x13d9ee0();
   input += synapse0x13de020();
   input += synapse0x13de060();
   input += synapse0x13de0a0();
   input += synapse0x13d9a30();
   input += synapse0x13d9a70();
   input += synapse0x13de1f0();
   input += synapse0x13de230();
   input += synapse0x13de270();
   input += synapse0x13de2b0();
   input += synapse0x13de2f0();
   input += synapse0x13de330();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13d98a0() {
   double input = input0x13d98a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13de370() {
   double input = -0.297878;
   input += synapse0x13de6b0();
   input += synapse0x13de6f0();
   input += synapse0x13de730();
   input += synapse0x13de770();
   input += synapse0x13de7b0();
   input += synapse0x13de7f0();
   input += synapse0x13de830();
   input += synapse0x13de870();
   input += synapse0x13de8b0();
   input += synapse0x13de8f0();
   input += synapse0x13de930();
   input += synapse0x13de970();
   input += synapse0x13de9b0();
   input += synapse0x13de9f0();
   input += synapse0x13dea30();
   input += synapse0x13dea70();
   input += synapse0x13de500();
   input += synapse0x13de540();
   input += synapse0x13debc0();
   input += synapse0x13dec00();
   input += synapse0x13dec40();
   input += synapse0x13dec80();
   input += synapse0x13decc0();
   input += synapse0x13ded00();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13de370() {
   double input = input0x13de370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13ded40() {
   double input = -0.0711773;
   input += synapse0x13df080();
   input += synapse0x13df0c0();
   input += synapse0x13df100();
   input += synapse0x13df140();
   input += synapse0x13df180();
   input += synapse0x13df1c0();
   input += synapse0x13df200();
   input += synapse0x13df240();
   input += synapse0x13df280();
   input += synapse0x13df2c0();
   input += synapse0x13df300();
   input += synapse0x13df340();
   input += synapse0x13df380();
   input += synapse0x13df3c0();
   input += synapse0x13df400();
   input += synapse0x13df440();
   input += synapse0x13deed0();
   input += synapse0x13def10();
   input += synapse0x13df590();
   input += synapse0x13df5d0();
   input += synapse0x13df610();
   input += synapse0x13df650();
   input += synapse0x13df690();
   input += synapse0x13df6d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13ded40() {
   double input = input0x13ded40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13df710() {
   double input = 1.05906;
   input += synapse0x13dfa50();
   input += synapse0x13dfa90();
   input += synapse0x13dfad0();
   input += synapse0x13dfb10();
   input += synapse0x13dfb50();
   input += synapse0x13dfb90();
   input += synapse0x13dfbd0();
   input += synapse0x13dfc10();
   input += synapse0x13dfc50();
   input += synapse0x13dfc90();
   input += synapse0x13dfcd0();
   input += synapse0x13dfd10();
   input += synapse0x13dfd50();
   input += synapse0x13dfd90();
   input += synapse0x13dfdd0();
   input += synapse0x13dfe10();
   input += synapse0x13df8a0();
   input += synapse0x13df8e0();
   input += synapse0x13dff60();
   input += synapse0x13dffa0();
   input += synapse0x13dffe0();
   input += synapse0x13e0020();
   input += synapse0x13e0060();
   input += synapse0x13e00a0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13df710() {
   double input = input0x13df710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e00e0() {
   double input = 1.16767;
   input += synapse0x13e0420();
   input += synapse0x13d1780();
   input += synapse0x13d17c0();
   input += synapse0x13d1ac0();
   input += synapse0x13d1b00();
   input += synapse0x13d1e00();
   input += synapse0x13d1e40();
   input += synapse0x13d2140();
   input += synapse0x13d2180();
   input += synapse0x13d2480();
   input += synapse0x13d24c0();
   input += synapse0x13d27c0();
   input += synapse0x13d2800();
   input += synapse0x13d2b00();
   input += synapse0x13d2b40();
   input += synapse0x13d2e40();
   input += synapse0x13d2e80();
   input += synapse0x13d3180();
   input += synapse0x13d31c0();
   input += synapse0x13d34c0();
   input += synapse0x13d3500();
   input += synapse0x13d3800();
   input += synapse0x13d3840();
   input += synapse0x13d3b40();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e00e0() {
   double input = input0x13e00e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e1ef0() {
   double input = -1.30865;
   input += synapse0x13d3b80();
   input += synapse0x13d4840();
   input += synapse0x13d4880();
   input += synapse0x13e0270();
   input += synapse0x13e02b0();
   input += synapse0x13d4b80();
   input += synapse0x13d4bc0();
   input += synapse0x1182b50();
   input += synapse0x1182b90();
   input += synapse0x13d5300();
   input += synapse0x13d5340();
   input += synapse0x13d5640();
   input += synapse0x13d5680();
   input += synapse0x13d5980();
   input += synapse0x13d59c0();
   input += synapse0x13d5cc0();
   input += synapse0x13d5d00();
   input += synapse0x13d6000();
   input += synapse0x13d6040();
   input += synapse0x13d6340();
   input += synapse0x13d6380();
   input += synapse0x13d3e80();
   input += synapse0x13d3ec0();
   input += synapse0x13e2190();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e1ef0() {
   double input = input0x13e1ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e21d0() {
   double input = -0.810362;
   input += synapse0x13e2510();
   input += synapse0x13e2550();
   input += synapse0x13e2590();
   input += synapse0x13e25d0();
   input += synapse0x13e2610();
   input += synapse0x13e2650();
   input += synapse0x13e2690();
   input += synapse0x13e26d0();
   input += synapse0x13e2710();
   input += synapse0x13e2750();
   input += synapse0x13e2790();
   input += synapse0x13e27d0();
   input += synapse0x13e2810();
   input += synapse0x13e2850();
   input += synapse0x13e2890();
   input += synapse0x13e28d0();
   input += synapse0x13e2360();
   input += synapse0x13e23a0();
   input += synapse0x13e2a20();
   input += synapse0x13e2a60();
   input += synapse0x13e2aa0();
   input += synapse0x13e2ae0();
   input += synapse0x13e2b20();
   input += synapse0x13e2b60();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e21d0() {
   double input = input0x13e21d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e2ba0() {
   double input = 0.0289613;
   input += synapse0x13e2ee0();
   input += synapse0x13e2f20();
   input += synapse0x13e2f60();
   input += synapse0x13e2fa0();
   input += synapse0x13e2fe0();
   input += synapse0x13e3020();
   input += synapse0x13e3060();
   input += synapse0x13e30a0();
   input += synapse0x13e30e0();
   input += synapse0x13e3120();
   input += synapse0x13e3160();
   input += synapse0x13e31a0();
   input += synapse0x13e31e0();
   input += synapse0x13e3220();
   input += synapse0x13e3260();
   input += synapse0x13e32a0();
   input += synapse0x13e2d30();
   input += synapse0x13e2d70();
   input += synapse0x13e33f0();
   input += synapse0x13e3430();
   input += synapse0x13e3470();
   input += synapse0x13e34b0();
   input += synapse0x13e34f0();
   input += synapse0x13e3530();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e2ba0() {
   double input = input0x13e2ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e3570() {
   double input = 3.75963;
   input += synapse0x13e38b0();
   input += synapse0x13e38f0();
   input += synapse0x13e3930();
   input += synapse0x13e3970();
   input += synapse0x13e39b0();
   input += synapse0x13e39f0();
   input += synapse0x13e3a30();
   input += synapse0x13e3a70();
   input += synapse0x13e3ab0();
   input += synapse0x13e3af0();
   input += synapse0x13e3b30();
   input += synapse0x13e3b70();
   input += synapse0x13e3bb0();
   input += synapse0x13e3bf0();
   input += synapse0x13e3c30();
   input += synapse0x13e3c70();
   input += synapse0x13e3700();
   input += synapse0x13e3740();
   input += synapse0x13e3dc0();
   input += synapse0x13e3e00();
   input += synapse0x13e3e40();
   input += synapse0x13e3e80();
   input += synapse0x13e3ec0();
   input += synapse0x13e3f00();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e3570() {
   double input = input0x13e3570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e3f40() {
   double input = 0.0492646;
   input += synapse0x13e4280();
   input += synapse0x13e42c0();
   input += synapse0x13e4300();
   input += synapse0x13e4340();
   input += synapse0x13e4380();
   input += synapse0x13e43c0();
   input += synapse0x13e4400();
   input += synapse0x13e4440();
   input += synapse0x13e4480();
   input += synapse0x13e44c0();
   input += synapse0x13e4500();
   input += synapse0x13e4540();
   input += synapse0x13e4580();
   input += synapse0x13e45c0();
   input += synapse0x13e4600();
   input += synapse0x13e4640();
   input += synapse0x13e40d0();
   input += synapse0x13e4110();
   input += synapse0x13e4790();
   input += synapse0x13e47d0();
   input += synapse0x13e4810();
   input += synapse0x13e4850();
   input += synapse0x13e4890();
   input += synapse0x13e48d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e3f40() {
   double input = input0x13e3f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e4910() {
   double input = -1.56323;
   input += synapse0x13e4c50();
   input += synapse0x13e4c90();
   input += synapse0x13e4cd0();
   input += synapse0x13e4d10();
   input += synapse0x13e4d50();
   input += synapse0x13e4d90();
   input += synapse0x13e4dd0();
   input += synapse0x13e4e10();
   input += synapse0x13e4e50();
   input += synapse0x13dd010();
   input += synapse0x13dd050();
   input += synapse0x13dd090();
   input += synapse0x13dd0d0();
   input += synapse0x13dd110();
   input += synapse0x13dd150();
   input += synapse0x13dd190();
   input += synapse0x13e4aa0();
   input += synapse0x13e4ae0();
   input += synapse0x13dd2e0();
   input += synapse0x13dd320();
   input += synapse0x13dd360();
   input += synapse0x13dd3a0();
   input += synapse0x13dd3e0();
   input += synapse0x13dd420();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e4910() {
   double input = input0x13e4910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13dd460() {
   double input = -1.61159;
   input += synapse0x13dd7a0();
   input += synapse0x13dd7e0();
   input += synapse0x13dd820();
   input += synapse0x13dd860();
   input += synapse0x13dd8a0();
   input += synapse0x13dd8e0();
   input += synapse0x13dd920();
   input += synapse0x13dd960();
   input += synapse0x13dd9a0();
   input += synapse0x13dd9e0();
   input += synapse0x13dda20();
   input += synapse0x13dda60();
   input += synapse0x13ddaa0();
   input += synapse0x13ddae0();
   input += synapse0x13ddb20();
   input += synapse0x13ddb60();
   input += synapse0x13dd5f0();
   input += synapse0x13dd630();
   input += synapse0x13ddcb0();
   input += synapse0x13ddcf0();
   input += synapse0x13ddd30();
   input += synapse0x13ddd70();
   input += synapse0x13dddb0();
   input += synapse0x13dddf0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13dd460() {
   double input = input0x13dd460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13dde30() {
   double input = -0.0906064;
   input += synapse0x13ddfc0();
   input += synapse0x13e7050();
   input += synapse0x13e7090();
   input += synapse0x13e70d0();
   input += synapse0x13e7110();
   input += synapse0x13e7150();
   input += synapse0x13e7190();
   input += synapse0x13e71d0();
   input += synapse0x13e7210();
   input += synapse0x13e7250();
   input += synapse0x13e7290();
   input += synapse0x13e72d0();
   input += synapse0x13e7310();
   input += synapse0x13e7350();
   input += synapse0x13e7390();
   input += synapse0x13e73d0();
   input += synapse0x13e6ea0();
   input += synapse0x13e6ee0();
   input += synapse0x13e7520();
   input += synapse0x13e7560();
   input += synapse0x13e75a0();
   input += synapse0x13e75e0();
   input += synapse0x13e7620();
   input += synapse0x13e7660();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13dde30() {
   double input = input0x13dde30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e76a0() {
   double input = 0.88997;
   input += synapse0x13e79e0();
   input += synapse0x13e7a20();
   input += synapse0x13e7a60();
   input += synapse0x13e7aa0();
   input += synapse0x13e7ae0();
   input += synapse0x13e7b20();
   input += synapse0x13e7b60();
   input += synapse0x13e7ba0();
   input += synapse0x13e7be0();
   input += synapse0x13e7c20();
   input += synapse0x13e7c60();
   input += synapse0x13e7ca0();
   input += synapse0x13e7ce0();
   input += synapse0x13e7d20();
   input += synapse0x13e7d60();
   input += synapse0x13e7da0();
   input += synapse0x13e7830();
   input += synapse0x13e7870();
   input += synapse0x13e7ef0();
   input += synapse0x13e7f30();
   input += synapse0x13e7f70();
   input += synapse0x13e7fb0();
   input += synapse0x13e7ff0();
   input += synapse0x13e8030();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e76a0() {
   double input = input0x13e76a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e8070() {
   double input = -0.789364;
   input += synapse0x13e83b0();
   input += synapse0x13e83f0();
   input += synapse0x13e8430();
   input += synapse0x13e8470();
   input += synapse0x13e84b0();
   input += synapse0x13e84f0();
   input += synapse0x13e8530();
   input += synapse0x13e8570();
   input += synapse0x13e85b0();
   input += synapse0x13e85f0();
   input += synapse0x13e8630();
   input += synapse0x13e8670();
   input += synapse0x13e86b0();
   input += synapse0x13e86f0();
   input += synapse0x13e8730();
   input += synapse0x13e8770();
   input += synapse0x13e8200();
   input += synapse0x13e8240();
   input += synapse0x13e88c0();
   input += synapse0x13e8900();
   input += synapse0x13e8940();
   input += synapse0x13e8980();
   input += synapse0x13e89c0();
   input += synapse0x13e8a00();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e8070() {
   double input = input0x13e8070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e8a40() {
   double input = -1.11978;
   input += synapse0x13e8d80();
   input += synapse0x13e8dc0();
   input += synapse0x13e8e00();
   input += synapse0x13e8e40();
   input += synapse0x13e8e80();
   input += synapse0x13e8ec0();
   input += synapse0x13e8f00();
   input += synapse0x13e8f40();
   input += synapse0x13e8f80();
   input += synapse0x13e8fc0();
   input += synapse0x13e9000();
   input += synapse0x13e9040();
   input += synapse0x13e9080();
   input += synapse0x13e90c0();
   input += synapse0x13e9100();
   input += synapse0x13e9140();
   input += synapse0x13e8bd0();
   input += synapse0x13e8c10();
   input += synapse0x13e9290();
   input += synapse0x13e92d0();
   input += synapse0x13e9310();
   input += synapse0x13e9350();
   input += synapse0x13e9390();
   input += synapse0x13e93d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e8a40() {
   double input = input0x13e8a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e9410() {
   double input = 0.554195;
   input += synapse0x13e9750();
   input += synapse0x13e9790();
   input += synapse0x13e97d0();
   input += synapse0x13e9810();
   input += synapse0x13e9850();
   input += synapse0x13e9890();
   input += synapse0x13e98d0();
   input += synapse0x13e9910();
   input += synapse0x13e9950();
   input += synapse0x13e9990();
   input += synapse0x13e99d0();
   input += synapse0x13e9a10();
   input += synapse0x13e9a50();
   input += synapse0x13e9a90();
   input += synapse0x13e9ad0();
   input += synapse0x13e9b10();
   input += synapse0x13e95a0();
   input += synapse0x13e95e0();
   input += synapse0x13e9c60();
   input += synapse0x13e9ca0();
   input += synapse0x13e9ce0();
   input += synapse0x13e9d20();
   input += synapse0x13e9d60();
   input += synapse0x13e9da0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e9410() {
   double input = input0x13e9410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e9de0() {
   double input = 0.0393431;
   input += synapse0x13ea120();
   input += synapse0x13ea160();
   input += synapse0x13ea1a0();
   input += synapse0x13ea1e0();
   input += synapse0x13ea220();
   input += synapse0x13ea260();
   input += synapse0x13ea2a0();
   input += synapse0x13ea2e0();
   input += synapse0x13ea320();
   input += synapse0x13ea360();
   input += synapse0x13ea3a0();
   input += synapse0x13ea3e0();
   input += synapse0x13ea420();
   input += synapse0x13ea460();
   input += synapse0x13ea4a0();
   input += synapse0x13ea4e0();
   input += synapse0x13e9f70();
   input += synapse0x13e9fb0();
   input += synapse0x13ea630();
   input += synapse0x13ea670();
   input += synapse0x13ea6b0();
   input += synapse0x13ea6f0();
   input += synapse0x13ea730();
   input += synapse0x13ea770();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e9de0() {
   double input = input0x13e9de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13ea7b0() {
   double input = 1.2296;
   input += synapse0x13eaaf0();
   input += synapse0x13eab30();
   input += synapse0x13eab70();
   input += synapse0x13eabb0();
   input += synapse0x13eabf0();
   input += synapse0x13eac30();
   input += synapse0x13eac70();
   input += synapse0x13eacb0();
   input += synapse0x13eacf0();
   input += synapse0x13ead30();
   input += synapse0x13ead70();
   input += synapse0x13eadb0();
   input += synapse0x13eadf0();
   input += synapse0x13eae30();
   input += synapse0x13eae70();
   input += synapse0x13eaeb0();
   input += synapse0x13ea940();
   input += synapse0x13ea980();
   input += synapse0x13eb000();
   input += synapse0x13eb040();
   input += synapse0x13eb080();
   input += synapse0x13eb0c0();
   input += synapse0x13eb100();
   input += synapse0x13eb140();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13ea7b0() {
   double input = input0x13ea7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13eb180() {
   double input = -3.22054;
   input += synapse0x13eb4c0();
   input += synapse0x13eb500();
   input += synapse0x13eb540();
   input += synapse0x13eb580();
   input += synapse0x13eb5c0();
   input += synapse0x13eb600();
   input += synapse0x13eb640();
   input += synapse0x13eb680();
   input += synapse0x13eb6c0();
   input += synapse0x13eb700();
   input += synapse0x13eb740();
   input += synapse0x13eb780();
   input += synapse0x13eb7c0();
   input += synapse0x13eb800();
   input += synapse0x13eb840();
   input += synapse0x13eb880();
   input += synapse0x13eb310();
   input += synapse0x13eb350();
   input += synapse0x13eb9d0();
   input += synapse0x13eba10();
   input += synapse0x13eba50();
   input += synapse0x13eba90();
   input += synapse0x13ebad0();
   input += synapse0x13ebb10();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13eb180() {
   double input = input0x13eb180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13ebb50() {
   double input = -1.98993;
   input += synapse0x13ebe90();
   input += synapse0x13e0460();
   input += synapse0x13e04a0();
   input += synapse0x13e04e0();
   input += synapse0x13e0730();
   input += synapse0x13e0770();
   input += synapse0x13e07b0();
   input += synapse0x13e0a00();
   input += synapse0x13e0a40();
   input += synapse0x13e0c90();
   input += synapse0x13e0cd0();
   input += synapse0x13e0d10();
   input += synapse0x13e0f60();
   input += synapse0x13e0fa0();
   input += synapse0x13e11f0();
   input += synapse0x13e1230();
   input += synapse0x13ebce0();
   input += synapse0x13ebd20();
   input += synapse0x13e1380();
   input += synapse0x13e1890();
   input += synapse0x13e18d0();
   input += synapse0x13e1910();
   input += synapse0x13e1b60();
   input += synapse0x13e1ba0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13ebb50() {
   double input = input0x13ebb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e1be0() {
   double input = -1.3152;
   input += synapse0x13e1450();
   input += synapse0x13e1490();
   input += synapse0x13e14d0();
   input += synapse0x13e1510();
   input += synapse0x13e1e90();
   input += synapse0x13ee1e0();
   input += synapse0x13ee220();
   input += synapse0x13ee260();
   input += synapse0x13ee2a0();
   input += synapse0x13ee2e0();
   input += synapse0x13ee320();
   input += synapse0x13ee360();
   input += synapse0x13ee3a0();
   input += synapse0x13ee3e0();
   input += synapse0x13ee420();
   input += synapse0x13ee460();
   input += synapse0x13e1d70();
   input += synapse0x13e1db0();
   input += synapse0x13ee5b0();
   input += synapse0x13ee5f0();
   input += synapse0x13ee630();
   input += synapse0x13ee670();
   input += synapse0x13ee6b0();
   input += synapse0x13ee6f0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e1be0() {
   double input = input0x13e1be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13ee730() {
   double input = 1.92402;
   input += synapse0x13eea70();
   input += synapse0x13eeab0();
   input += synapse0x13eeaf0();
   input += synapse0x13eeb30();
   input += synapse0x13eeb70();
   input += synapse0x13eebb0();
   input += synapse0x13eebf0();
   input += synapse0x13eec30();
   input += synapse0x13eec70();
   input += synapse0x13eecb0();
   input += synapse0x13eecf0();
   input += synapse0x13eed30();
   input += synapse0x13eed70();
   input += synapse0x13eedb0();
   input += synapse0x13eedf0();
   input += synapse0x13eee30();
   input += synapse0x13ee8c0();
   input += synapse0x13ee900();
   input += synapse0x13eef80();
   input += synapse0x13eefc0();
   input += synapse0x13ef000();
   input += synapse0x13ef040();
   input += synapse0x13ef080();
   input += synapse0x13ef0c0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13ee730() {
   double input = input0x13ee730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13ef100() {
   double input = 0.503524;
   input += synapse0x13ef440();
   input += synapse0x13ef480();
   input += synapse0x13ef4c0();
   input += synapse0x13ef500();
   input += synapse0x13ef540();
   input += synapse0x13ef580();
   input += synapse0x13ef5c0();
   input += synapse0x13ef600();
   input += synapse0x13ef640();
   input += synapse0x13ef680();
   input += synapse0x13ef6c0();
   input += synapse0x13ef700();
   input += synapse0x13ef740();
   input += synapse0x13ef780();
   input += synapse0x13ef7c0();
   input += synapse0x13ef800();
   input += synapse0x13ef290();
   input += synapse0x13ef2d0();
   input += synapse0x13ef950();
   input += synapse0x13ef990();
   input += synapse0x13ef9d0();
   input += synapse0x13efa10();
   input += synapse0x13efa50();
   input += synapse0x13efa90();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13ef100() {
   double input = input0x13ef100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13efad0() {
   double input = 2.05941;
   input += synapse0x13efe10();
   input += synapse0x13efe50();
   input += synapse0x13efe90();
   input += synapse0x13efed0();
   input += synapse0x13eff10();
   input += synapse0x13eff50();
   input += synapse0x13eff90();
   input += synapse0x13effd0();
   input += synapse0x13f0010();
   input += synapse0x13f0050();
   input += synapse0x13f0090();
   input += synapse0x13f00d0();
   input += synapse0x13f0110();
   input += synapse0x13f0150();
   input += synapse0x13f0190();
   input += synapse0x13f01d0();
   input += synapse0x13efc60();
   input += synapse0x13efca0();
   input += synapse0x13f0320();
   input += synapse0x13f0360();
   input += synapse0x13f03a0();
   input += synapse0x13f03e0();
   input += synapse0x13f0420();
   input += synapse0x13f0460();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13efad0() {
   double input = input0x13efad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f04a0() {
   double input = 0.949052;
   input += synapse0x13f07e0();
   input += synapse0x13f0820();
   input += synapse0x13f0860();
   input += synapse0x13f08a0();
   input += synapse0x13f08e0();
   input += synapse0x13f0920();
   input += synapse0x13f0960();
   input += synapse0x13f09a0();
   input += synapse0x13f09e0();
   input += synapse0x13f0a20();
   input += synapse0x13f0a60();
   input += synapse0x13f0aa0();
   input += synapse0x13f0ae0();
   input += synapse0x13f0b20();
   input += synapse0x13f0b60();
   input += synapse0x13f0ba0();
   input += synapse0x13f0630();
   input += synapse0x13f0670();
   input += synapse0x13f0cf0();
   input += synapse0x13f0d30();
   input += synapse0x13f0d70();
   input += synapse0x13f0db0();
   input += synapse0x13f0df0();
   input += synapse0x13f0e30();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f04a0() {
   double input = input0x13f04a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f0e70() {
   double input = -1.82596;
   input += synapse0x13f11b0();
   input += synapse0x13f11f0();
   input += synapse0x13f1230();
   input += synapse0x13f1270();
   input += synapse0x13f12b0();
   input += synapse0x13f12f0();
   input += synapse0x13f1330();
   input += synapse0x13f1370();
   input += synapse0x13f13b0();
   input += synapse0x13f13f0();
   input += synapse0x13f1430();
   input += synapse0x13f1470();
   input += synapse0x13f14b0();
   input += synapse0x13f14f0();
   input += synapse0x13f1530();
   input += synapse0x13f1570();
   input += synapse0x13f1000();
   input += synapse0x13f1040();
   input += synapse0x13f16c0();
   input += synapse0x13f1700();
   input += synapse0x13f1740();
   input += synapse0x13f1780();
   input += synapse0x13f17c0();
   input += synapse0x13f1800();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f0e70() {
   double input = input0x13f0e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f1840() {
   double input = 2.04041;
   input += synapse0x13f1b80();
   input += synapse0x13f1bc0();
   input += synapse0x13f1c00();
   input += synapse0x13f1c40();
   input += synapse0x13f1c80();
   input += synapse0x13f1cc0();
   input += synapse0x13f1d00();
   input += synapse0x13f1d40();
   input += synapse0x13f1d80();
   input += synapse0x13f1dc0();
   input += synapse0x13f1e00();
   input += synapse0x13f1e40();
   input += synapse0x13f1e80();
   input += synapse0x13f1ec0();
   input += synapse0x13f1f00();
   input += synapse0x13f1f40();
   input += synapse0x13f19d0();
   input += synapse0x13f1a10();
   input += synapse0x13f2090();
   input += synapse0x13f20d0();
   input += synapse0x13f2110();
   input += synapse0x13f2150();
   input += synapse0x13f2190();
   input += synapse0x13f21d0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f1840() {
   double input = input0x13f1840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f2210() {
   double input = 0.824563;
   input += synapse0x13f2550();
   input += synapse0x13f2590();
   input += synapse0x13f25d0();
   input += synapse0x13f2610();
   input += synapse0x13f2650();
   input += synapse0x13f2690();
   input += synapse0x13f26d0();
   input += synapse0x13f2710();
   input += synapse0x13f2750();
   input += synapse0x13f2790();
   input += synapse0x13f27d0();
   input += synapse0x13f2810();
   input += synapse0x13f2850();
   input += synapse0x13f2890();
   input += synapse0x13f28d0();
   input += synapse0x13f2910();
   input += synapse0x13f23a0();
   input += synapse0x13f23e0();
   input += synapse0x13f2a60();
   input += synapse0x13f2aa0();
   input += synapse0x13f2ae0();
   input += synapse0x13f2b20();
   input += synapse0x13f2b60();
   input += synapse0x13f2ba0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f2210() {
   double input = input0x13f2210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f2be0() {
   double input = 0.295562;
   input += synapse0x13db650();
   input += synapse0x13db690();
   input += synapse0x13db6d0();
   input += synapse0x13db710();
   input += synapse0x13db750();
   input += synapse0x13db790();
   input += synapse0x13db7d0();
   input += synapse0x13db810();
   input += synapse0x13f3330();
   input += synapse0x13f3370();
   input += synapse0x13f33b0();
   input += synapse0x13f33f0();
   input += synapse0x13f3430();
   input += synapse0x13f3470();
   input += synapse0x13f34b0();
   input += synapse0x13f34f0();
   input += synapse0x13f2d70();
   input += synapse0x13f2db0();
   input += synapse0x13f3640();
   input += synapse0x13f3680();
   input += synapse0x13f36c0();
   input += synapse0x13f3700();
   input += synapse0x13f3740();
   input += synapse0x13f3780();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f2be0() {
   double input = input0x13f2be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f37c0() {
   double input = 1.99745;
   input += synapse0x13f3b00();
   input += synapse0x13f3b40();
   input += synapse0x13f3b80();
   input += synapse0x13f3bc0();
   input += synapse0x13f3c00();
   input += synapse0x13f3c40();
   input += synapse0x13f3c80();
   input += synapse0x13f3cc0();
   input += synapse0x13f3d00();
   input += synapse0x13f3d40();
   input += synapse0x13f3d80();
   input += synapse0x13f3dc0();
   input += synapse0x13f3e00();
   input += synapse0x13f3e40();
   input += synapse0x13f3e80();
   input += synapse0x13f3ec0();
   input += synapse0x13f3950();
   input += synapse0x13f3990();
   input += synapse0x13f4010();
   input += synapse0x13f4050();
   input += synapse0x13f4090();
   input += synapse0x13f40d0();
   input += synapse0x13f4110();
   input += synapse0x13f4150();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f37c0() {
   double input = input0x13f37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f4190() {
   double input = 0.826655;
   input += synapse0x13f44d0();
   input += synapse0x13f4510();
   input += synapse0x13f4550();
   input += synapse0x13f4590();
   input += synapse0x13f45d0();
   input += synapse0x13f4610();
   input += synapse0x13f4650();
   input += synapse0x13f4690();
   input += synapse0x13f46d0();
   input += synapse0x13f4710();
   input += synapse0x13f4750();
   input += synapse0x13f4790();
   input += synapse0x13f47d0();
   input += synapse0x13f4810();
   input += synapse0x13f4850();
   input += synapse0x13f4890();
   input += synapse0x13f4320();
   input += synapse0x13f4360();
   input += synapse0x13e4e90();
   input += synapse0x13e4ed0();
   input += synapse0x13e4f10();
   input += synapse0x13e4f50();
   input += synapse0x13e4f90();
   input += synapse0x13e4fd0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f4190() {
   double input = input0x13f4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e5010() {
   double input = 0.168581;
   input += synapse0x13e5350();
   input += synapse0x13e5390();
   input += synapse0x13e53d0();
   input += synapse0x13e5410();
   input += synapse0x13e5450();
   input += synapse0x13e5490();
   input += synapse0x13e54d0();
   input += synapse0x13e5510();
   input += synapse0x13e5550();
   input += synapse0x13e5590();
   input += synapse0x13e55d0();
   input += synapse0x13e5610();
   input += synapse0x13e5650();
   input += synapse0x13e5690();
   input += synapse0x13e56d0();
   input += synapse0x13e5710();
   input += synapse0x13e51a0();
   input += synapse0x13e51e0();
   input += synapse0x13e5860();
   input += synapse0x13e58a0();
   input += synapse0x13e58e0();
   input += synapse0x13e5920();
   input += synapse0x13e5960();
   input += synapse0x13e59a0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e5010() {
   double input = input0x13e5010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e59e0() {
   double input = -0.413997;
   input += synapse0x13e5d20();
   input += synapse0x13e5d60();
   input += synapse0x13e5da0();
   input += synapse0x13e5de0();
   input += synapse0x13e5e20();
   input += synapse0x13e5e60();
   input += synapse0x13e5ea0();
   input += synapse0x13e5ee0();
   input += synapse0x13e5f20();
   input += synapse0x13e5f60();
   input += synapse0x13e5fa0();
   input += synapse0x13e5fe0();
   input += synapse0x13e6020();
   input += synapse0x13e6060();
   input += synapse0x13e60a0();
   input += synapse0x13e60e0();
   input += synapse0x13e5b70();
   input += synapse0x13e5bb0();
   input += synapse0x13e6230();
   input += synapse0x13e6270();
   input += synapse0x13e62b0();
   input += synapse0x13e62f0();
   input += synapse0x13e6330();
   input += synapse0x13e6370();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e59e0() {
   double input = input0x13e59e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13e63b0() {
   double input = -0.257217;
   input += synapse0x13e66f0();
   input += synapse0x13e6730();
   input += synapse0x13e6770();
   input += synapse0x13e67b0();
   input += synapse0x13e67f0();
   input += synapse0x13e6830();
   input += synapse0x13e6870();
   input += synapse0x13e68b0();
   input += synapse0x13e68f0();
   input += synapse0x13e6930();
   input += synapse0x13e6970();
   input += synapse0x13e69b0();
   input += synapse0x13e69f0();
   input += synapse0x13e6a30();
   input += synapse0x13e6a70();
   input += synapse0x13e6ab0();
   input += synapse0x13e6540();
   input += synapse0x13e6580();
   input += synapse0x13e6c00();
   input += synapse0x13e6c40();
   input += synapse0x13e6c80();
   input += synapse0x13e6cc0();
   input += synapse0x13e6d00();
   input += synapse0x13e6d40();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13e63b0() {
   double input = input0x13e63b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f89f0() {
   double input = -0.367527;
   input += synapse0x13f8c10();
   input += synapse0x13f8c50();
   input += synapse0x13f8c90();
   input += synapse0x13f8cd0();
   input += synapse0x13f8d10();
   input += synapse0x13f8d50();
   input += synapse0x13f8d90();
   input += synapse0x13f8dd0();
   input += synapse0x13f8e10();
   input += synapse0x13f8e50();
   input += synapse0x13f8e90();
   input += synapse0x13f8ed0();
   input += synapse0x13f8f10();
   input += synapse0x13f8f50();
   input += synapse0x13f8f90();
   input += synapse0x13f8fd0();
   input += synapse0x13e6d80();
   input += synapse0x13e6dc0();
   input += synapse0x13f9120();
   input += synapse0x13f9160();
   input += synapse0x13f91a0();
   input += synapse0x13f91e0();
   input += synapse0x13f9220();
   input += synapse0x13f9260();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f89f0() {
   double input = input0x13f89f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f92a0() {
   double input = 1.39664;
   input += synapse0x13f95e0();
   input += synapse0x13f9620();
   input += synapse0x13f9660();
   input += synapse0x13f96a0();
   input += synapse0x13f96e0();
   input += synapse0x13f9720();
   input += synapse0x13f9760();
   input += synapse0x13f97a0();
   input += synapse0x13f97e0();
   input += synapse0x13f9820();
   input += synapse0x13f9860();
   input += synapse0x13f98a0();
   input += synapse0x13f98e0();
   input += synapse0x13f9920();
   input += synapse0x13f9960();
   input += synapse0x13f99a0();
   input += synapse0x13f9430();
   input += synapse0x13f9470();
   input += synapse0x13f9af0();
   input += synapse0x13f9b30();
   input += synapse0x13f9b70();
   input += synapse0x13f9bb0();
   input += synapse0x13f9bf0();
   input += synapse0x13f9c30();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f92a0() {
   double input = input0x13f92a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13f9c70() {
   double input = 1.38817;
   input += synapse0x13f9fb0();
   input += synapse0x13f9ff0();
   input += synapse0x13fa030();
   input += synapse0x13fa070();
   input += synapse0x13fa0b0();
   input += synapse0x13fa0f0();
   input += synapse0x13fa130();
   input += synapse0x13fa170();
   input += synapse0x13fa1b0();
   input += synapse0x13fa1f0();
   input += synapse0x13fa230();
   input += synapse0x13fa270();
   input += synapse0x13fa2b0();
   input += synapse0x13fa2f0();
   input += synapse0x13fa330();
   input += synapse0x13fa370();
   input += synapse0x13f9e00();
   input += synapse0x13f9e40();
   input += synapse0x13fa4c0();
   input += synapse0x13fa500();
   input += synapse0x13fa540();
   input += synapse0x13fa580();
   input += synapse0x13fa5c0();
   input += synapse0x13fa600();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13f9c70() {
   double input = input0x13f9c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x13fa640() {
   double input = -1.18562;
   input += synapse0x13fa980();
   input += synapse0x13fa9c0();
   input += synapse0x13faa00();
   input += synapse0x13faa40();
   input += synapse0x13faa80();
   input += synapse0x13faac0();
   input += synapse0x13fab00();
   input += synapse0x13fab40();
   input += synapse0x13fab80();
   input += synapse0x13fabc0();
   input += synapse0x13fac00();
   input += synapse0x13fac40();
   input += synapse0x13fac80();
   input += synapse0x13facc0();
   input += synapse0x13fad00();
   input += synapse0x13fad40();
   input += synapse0x13fa7d0();
   input += synapse0x13fa810();
   input += synapse0x13fae90();
   input += synapse0x13faed0();
   input += synapse0x13faf10();
   input += synapse0x13faf50();
   input += synapse0x13faf90();
   input += synapse0x13fafd0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x13fa640() {
   double input = input0x13fa640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x1401840() {
   double input = -0.956435;
   input += synapse0x13d7570();
   input += synapse0x13d75b0();
   input += synapse0x13d8a80();
   input += synapse0x13d8ac0();
   input += synapse0x13d9450();
   input += synapse0x13d9490();
   input += synapse0x13da220();
   input += synapse0x13da260();
   input += synapse0x13dabf0();
   input += synapse0x13dac30();
   input += synapse0x13db5c0();
   input += synapse0x13db600();
   input += synapse0x13dc0a0();
   input += synapse0x13dc0e0();
   input += synapse0x13dca70();
   input += synapse0x13dcab0();
   input += synapse0x13d9b50();
   input += synapse0x13d9b90();
   input += synapse0x13de620();
   input += synapse0x13de660();
   input += synapse0x13deff0();
   input += synapse0x13df030();
   input += synapse0x13df9c0();
   input += synapse0x13dfa00();
   input += synapse0x13e0390();
   input += synapse0x13e03d0();
   input += synapse0x13d4500();
   input += synapse0x13d4540();
   input += synapse0x13e2480();
   input += synapse0x13e24c0();
   input += synapse0x13e2e50();
   input += synapse0x13e2e90();
   input += synapse0x13e3820();
   input += synapse0x13e3860();
   input += synapse0x13e41f0();
   input += synapse0x13e4230();
   input += synapse0x13e4bc0();
   input += synapse0x13e4c00();
   input += synapse0x13dd710();
   input += synapse0x13dd750();
   input += synapse0x13e6fc0();
   input += synapse0x13e7000();
   input += synapse0x13e7950();
   input += synapse0x13e7990();
   input += synapse0x13e8320();
   input += synapse0x13e8360();
   input += synapse0x13e8cf0();
   input += synapse0x13e8d30();
   input += synapse0x13e96c0();
   input += synapse0x13e9700();
   return input;
}

double NNfunction_sb_cLcL::neuron0x1401840() {
   double input = input0x1401840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x1401be0() {
   double input = -0.903295;
   input += synapse0x13ebe00();
   input += synapse0x13ebe40();
   input += synapse0x13e13c0();
   input += synapse0x13e1400();
   input += synapse0x13ee9e0();
   input += synapse0x13eea20();
   input += synapse0x13ef3b0();
   input += synapse0x13ef3f0();
   input += synapse0x13efd80();
   input += synapse0x13efdc0();
   input += synapse0x13f0750();
   input += synapse0x13f0790();
   input += synapse0x13f1120();
   input += synapse0x13f1160();
   input += synapse0x13f1af0();
   input += synapse0x13f1b30();
   input += synapse0x13f24c0();
   input += synapse0x13f2500();
   input += synapse0x13f2e90();
   input += synapse0x13f2ed0();
   input += synapse0x13f3a70();
   input += synapse0x13f3ab0();
   input += synapse0x13f4440();
   input += synapse0x13f4480();
   input += synapse0x13e52c0();
   input += synapse0x13e5300();
   input += synapse0x13e5c90();
   input += synapse0x13e5cd0();
   input += synapse0x13e6660();
   input += synapse0x13e66a0();
   input += synapse0x13f8b80();
   input += synapse0x13f8bc0();
   input += synapse0x13f9550();
   input += synapse0x13f9590();
   input += synapse0x13f9f20();
   input += synapse0x13f9f60();
   input += synapse0x13fa8f0();
   input += synapse0x13fa930();
   input += synapse0x13d67e0();
   input += synapse0x13d6820();
   input += synapse0x13ea090();
   input += synapse0x13ea0d0();
   input += synapse0x13fb010();
   input += synapse0x13fb050();
   input += synapse0x13fb090();
   input += synapse0x13fb0d0();
   input += synapse0x1401f80();
   input += synapse0x1401fc0();
   input += synapse0x1402000();
   input += synapse0x1402040();
   return input;
}

double NNfunction_sb_cLcL::neuron0x1401be0() {
   double input = input0x1401be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x1402080() {
   double input = -1.08553;
   input += synapse0x14023c0();
   input += synapse0x1402400();
   input += synapse0x1402440();
   input += synapse0x1402480();
   input += synapse0x14024c0();
   input += synapse0x1402500();
   input += synapse0x1402540();
   input += synapse0x1402580();
   input += synapse0x14025c0();
   input += synapse0x1402600();
   input += synapse0x1402640();
   input += synapse0x1402680();
   input += synapse0x14026c0();
   input += synapse0x1402700();
   input += synapse0x1402740();
   input += synapse0x1402780();
   input += synapse0x1402210();
   input += synapse0x1402250();
   input += synapse0x14028d0();
   input += synapse0x1402910();
   input += synapse0x1402950();
   input += synapse0x1402990();
   input += synapse0x14029d0();
   input += synapse0x1402a10();
   input += synapse0x1402a50();
   input += synapse0x1402a90();
   input += synapse0x1402ad0();
   input += synapse0x1402b10();
   input += synapse0x1402b50();
   input += synapse0x1402b90();
   input += synapse0x1402bd0();
   input += synapse0x1402c10();
   input += synapse0x14027c0();
   input += synapse0x1402800();
   input += synapse0x1402840();
   input += synapse0x1402880();
   input += synapse0x1402e60();
   input += synapse0x1402ea0();
   input += synapse0x1402ee0();
   input += synapse0x1402f20();
   input += synapse0x1402f60();
   input += synapse0x1402fa0();
   input += synapse0x1402fe0();
   input += synapse0x1403020();
   input += synapse0x1403060();
   input += synapse0x14030a0();
   input += synapse0x14030e0();
   input += synapse0x1403120();
   input += synapse0x1403160();
   input += synapse0x14031a0();
   return input;
}

double NNfunction_sb_cLcL::neuron0x1402080() {
   double input = input0x1402080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x14031e0() {
   double input = -0.176678;
   input += synapse0x1403520();
   input += synapse0x1403560();
   input += synapse0x14035a0();
   input += synapse0x14035e0();
   input += synapse0x1403620();
   input += synapse0x1403660();
   input += synapse0x14036a0();
   input += synapse0x14036e0();
   input += synapse0x1403720();
   input += synapse0x1403760();
   input += synapse0x14037a0();
   input += synapse0x14037e0();
   input += synapse0x1403820();
   input += synapse0x1403860();
   input += synapse0x14038a0();
   input += synapse0x14038e0();
   input += synapse0x1403370();
   input += synapse0x14033b0();
   input += synapse0x1403a30();
   input += synapse0x1403a70();
   input += synapse0x1403ab0();
   input += synapse0x1403af0();
   input += synapse0x1403b30();
   input += synapse0x1403b70();
   input += synapse0x1403bb0();
   input += synapse0x1403bf0();
   input += synapse0x1403c30();
   input += synapse0x1403c70();
   input += synapse0x1403cb0();
   input += synapse0x1403cf0();
   input += synapse0x1403d30();
   input += synapse0x1403d70();
   input += synapse0x1403920();
   input += synapse0x1403960();
   input += synapse0x14039a0();
   input += synapse0x14039e0();
   input += synapse0x1403fc0();
   input += synapse0x1404000();
   input += synapse0x1404040();
   input += synapse0x1404080();
   input += synapse0x14040c0();
   input += synapse0x1404100();
   input += synapse0x1404140();
   input += synapse0x1404180();
   input += synapse0x14041c0();
   input += synapse0x1404200();
   input += synapse0x1404240();
   input += synapse0x1404280();
   input += synapse0x14042c0();
   input += synapse0x1404300();
   return input;
}

double NNfunction_sb_cLcL::neuron0x14031e0() {
   double input = input0x14031e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x1404340() {
   double input = 0.426277;
   input += synapse0x1404680();
   input += synapse0x14046c0();
   input += synapse0x1404700();
   input += synapse0x1404740();
   input += synapse0x1404780();
   input += synapse0x14047c0();
   input += synapse0x1404800();
   input += synapse0x1404840();
   input += synapse0x1404880();
   input += synapse0x14048c0();
   input += synapse0x1404900();
   input += synapse0x1404940();
   input += synapse0x1404980();
   input += synapse0x14049c0();
   input += synapse0x1404a00();
   input += synapse0x1404a40();
   input += synapse0x14044d0();
   input += synapse0x1404510();
   input += synapse0x1404b90();
   input += synapse0x1404bd0();
   input += synapse0x1404c10();
   input += synapse0x1404c50();
   input += synapse0x1404c90();
   input += synapse0x1404cd0();
   input += synapse0x1404d10();
   input += synapse0x1404d50();
   input += synapse0x1404d90();
   input += synapse0x1404dd0();
   input += synapse0x1404e10();
   input += synapse0x1404e50();
   input += synapse0x1404e90();
   input += synapse0x1404ed0();
   input += synapse0x1404a80();
   input += synapse0x1404ac0();
   input += synapse0x1404b00();
   input += synapse0x1404b40();
   input += synapse0x1405120();
   input += synapse0x1405160();
   input += synapse0x14051a0();
   input += synapse0x14051e0();
   input += synapse0x1405220();
   input += synapse0x1405260();
   input += synapse0x14052a0();
   input += synapse0x14052e0();
   input += synapse0x1405320();
   input += synapse0x1405360();
   input += synapse0x14053a0();
   input += synapse0x14053e0();
   input += synapse0x1405420();
   input += synapse0x1405460();
   return input;
}

double NNfunction_sb_cLcL::neuron0x1404340() {
   double input = input0x1404340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcL::input0x14054a0() {
   double input = 4.81547;
   input += synapse0x13d6580();
   input += synapse0x14056c0();
   input += synapse0x1405700();
   input += synapse0x1405740();
   input += synapse0x1405780();
   return input;
}

double NNfunction_sb_cLcL::neuron0x14054a0() {
   double input = input0x14054a0();
   return (input * 1)+0;
}

double NNfunction_sb_cLcL::synapse0x11913d0() {
   return (neuron0x13d1560()*0.0488031);
}

double NNfunction_sb_cLcL::synapse0x13d1420() {
   return (neuron0x13d18a0()*-0.0292983);
}

double NNfunction_sb_cLcL::synapse0x13d1460() {
   return (neuron0x13d1be0()*0.175333);
}

double NNfunction_sb_cLcL::synapse0x13d6870() {
   return (neuron0x13d1f20()*-0.0694034);
}

double NNfunction_sb_cLcL::synapse0x13d68b0() {
   return (neuron0x13d2260()*0.115033);
}

double NNfunction_sb_cLcL::synapse0x13d68f0() {
   return (neuron0x13d25a0()*0.0593775);
}

double NNfunction_sb_cLcL::synapse0x13d6930() {
   return (neuron0x13d28e0()*0.0900066);
}

double NNfunction_sb_cLcL::synapse0x13d6970() {
   return (neuron0x13d2c20()*-0.0826928);
}

double NNfunction_sb_cLcL::synapse0x13d69b0() {
   return (neuron0x13d2f60()*-0.775578);
}

double NNfunction_sb_cLcL::synapse0x13d69f0() {
   return (neuron0x13d32a0()*-0.716422);
}

double NNfunction_sb_cLcL::synapse0x13d6a30() {
   return (neuron0x13d35e0()*-0.706268);
}

double NNfunction_sb_cLcL::synapse0x13d6a70() {
   return (neuron0x13d3920()*0.0948152);
}

double NNfunction_sb_cLcL::synapse0x13d6ab0() {
   return (neuron0x13d3c60()*0.774655);
}

double NNfunction_sb_cLcL::synapse0x13d6af0() {
   return (neuron0x13d3fa0()*0.0989927);
}

double NNfunction_sb_cLcL::synapse0x13d6b30() {
   return (neuron0x13d42e0()*0.137419);
}

double NNfunction_sb_cLcL::synapse0x13d6b70() {
   return (neuron0x13d4620()*-0.0651936);
}

double NNfunction_sb_cLcL::synapse0x13d1390() {
   return (neuron0x13d4960()*0.0428312);
}

double NNfunction_sb_cLcL::synapse0x13d13d0() {
   return (neuron0x13d4ec0()*-0.00471022);
}

double NNfunction_sb_cLcL::synapse0x1182c70() {
   return (neuron0x13d50e0()*-0.00353565);
}

double NNfunction_sb_cLcL::synapse0x1182cb0() {
   return (neuron0x13d5420()*0.030845);
}

double NNfunction_sb_cLcL::synapse0x13d6dd0() {
   return (neuron0x13d5760()*-0.0299177);
}

double NNfunction_sb_cLcL::synapse0x13d6e10() {
   return (neuron0x13d5aa0()*-0.025673);
}

double NNfunction_sb_cLcL::synapse0x13d6e50() {
   return (neuron0x13d5de0()*-0.078276);
}

double NNfunction_sb_cLcL::synapse0x13d6e90() {
   return (neuron0x13d6120()*0.00388312);
}

double NNfunction_sb_cLcL::synapse0x13d7210() {
   return (neuron0x13d1560()*-0.211658);
}

double NNfunction_sb_cLcL::synapse0x13d7250() {
   return (neuron0x13d18a0()*0.172171);
}

double NNfunction_sb_cLcL::synapse0x13d7290() {
   return (neuron0x13d1be0()*0.0569007);
}

double NNfunction_sb_cLcL::synapse0x13d72d0() {
   return (neuron0x13d1f20()*0.574121);
}

double NNfunction_sb_cLcL::synapse0x13d7310() {
   return (neuron0x13d2260()*0.000986122);
}

double NNfunction_sb_cLcL::synapse0x13d7350() {
   return (neuron0x13d25a0()*0.163554);
}

double NNfunction_sb_cLcL::synapse0x13d7390() {
   return (neuron0x13d28e0()*0.302379);
}

double NNfunction_sb_cLcL::synapse0x13d73d0() {
   return (neuron0x13d2c20()*-0.161077);
}

double NNfunction_sb_cLcL::synapse0x13d7410() {
   return (neuron0x13d2f60()*-0.192729);
}

double NNfunction_sb_cLcL::synapse0x13d6cc0() {
   return (neuron0x13d32a0()*-0.116856);
}

double NNfunction_sb_cLcL::synapse0x13d6d00() {
   return (neuron0x13d35e0()*0.246929);
}

double NNfunction_sb_cLcL::synapse0x13d6d40() {
   return (neuron0x13d3920()*0.11677);
}

double NNfunction_sb_cLcL::synapse0x13d6d80() {
   return (neuron0x13d3c60()*-0.478965);
}

double NNfunction_sb_cLcL::synapse0x13d7660() {
   return (neuron0x13d3fa0()*-0.272641);
}

double NNfunction_sb_cLcL::synapse0x13d76a0() {
   return (neuron0x13d42e0()*-0.022156);
}

double NNfunction_sb_cLcL::synapse0x13d76e0() {
   return (neuron0x13d4620()*0.219688);
}

double NNfunction_sb_cLcL::synapse0x13d7060() {
   return (neuron0x13d4960()*0.222594);
}

double NNfunction_sb_cLcL::synapse0x13d70a0() {
   return (neuron0x13d4ec0()*-0.102541);
}

double NNfunction_sb_cLcL::synapse0x13d7830() {
   return (neuron0x13d50e0()*0.357157);
}

double NNfunction_sb_cLcL::synapse0x13d7870() {
   return (neuron0x13d5420()*0.22679);
}

double NNfunction_sb_cLcL::synapse0x13d78b0() {
   return (neuron0x13d5760()*-0.0440922);
}

double NNfunction_sb_cLcL::synapse0x13d78f0() {
   return (neuron0x13d5aa0()*-0.148993);
}

double NNfunction_sb_cLcL::synapse0x13d7930() {
   return (neuron0x13d5de0()*0.237069);
}

double NNfunction_sb_cLcL::synapse0x13d7970() {
   return (neuron0x13d6120()*0.0726732);
}

double NNfunction_sb_cLcL::synapse0x13d7cf0() {
   return (neuron0x13d1560()*-0.0684281);
}

double NNfunction_sb_cLcL::synapse0x13d7d30() {
   return (neuron0x13d18a0()*0.0713357);
}

double NNfunction_sb_cLcL::synapse0x13d7d70() {
   return (neuron0x13d1be0()*0.794862);
}

double NNfunction_sb_cLcL::synapse0x13d7db0() {
   return (neuron0x13d1f20()*-1.53474);
}

double NNfunction_sb_cLcL::synapse0x13d7df0() {
   return (neuron0x13d2260()*-0.00210251);
}

double NNfunction_sb_cLcL::synapse0x13d7e30() {
   return (neuron0x13d25a0()*0.0767024);
}

double NNfunction_sb_cLcL::synapse0x13d7e70() {
   return (neuron0x13d28e0()*-0.0145301);
}

double NNfunction_sb_cLcL::synapse0x13d7eb0() {
   return (neuron0x13d2c20()*0.0405106);
}

double NNfunction_sb_cLcL::synapse0x13d7ef0() {
   return (neuron0x13d2f60()*0.00288839);
}

double NNfunction_sb_cLcL::synapse0x13d7f30() {
   return (neuron0x13d32a0()*0.0447661);
}

double NNfunction_sb_cLcL::synapse0x13d7f70() {
   return (neuron0x13d35e0()*0.0941319);
}

double NNfunction_sb_cLcL::synapse0x13d7fb0() {
   return (neuron0x13d3920()*-0.28629);
}

double NNfunction_sb_cLcL::synapse0x13d7ff0() {
   return (neuron0x13d3c60()*0.257239);
}

double NNfunction_sb_cLcL::synapse0x13d8030() {
   return (neuron0x13d3fa0()*0.123355);
}

double NNfunction_sb_cLcL::synapse0x13d8070() {
   return (neuron0x13d42e0()*0.119351);
}

double NNfunction_sb_cLcL::synapse0x13d80b0() {
   return (neuron0x13d4620()*-0.0250453);
}

double NNfunction_sb_cLcL::synapse0x13d7b40() {
   return (neuron0x13d4960()*0.0643609);
}

double NNfunction_sb_cLcL::synapse0x13d7b80() {
   return (neuron0x13d4ec0()*0.0170988);
}

double NNfunction_sb_cLcL::synapse0x1190ac0() {
   return (neuron0x13d50e0()*-0.0629519);
}

double NNfunction_sb_cLcL::synapse0x1190b00() {
   return (neuron0x13d5420()*-0.161316);
}

double NNfunction_sb_cLcL::synapse0x13c05f0() {
   return (neuron0x13d5760()*-0.0155251);
}

double NNfunction_sb_cLcL::synapse0x13c0630() {
   return (neuron0x13d5aa0()*-0.0478001);
}

double NNfunction_sb_cLcL::synapse0x13c0670() {
   return (neuron0x13d5de0()*-0.031184);
}

double NNfunction_sb_cLcL::synapse0x13d14a0() {
   return (neuron0x13d6120()*-0.129976);
}

double NNfunction_sb_cLcL::synapse0x13d7600() {
   return (neuron0x13d1560()*-0.0559717);
}

double NNfunction_sb_cLcL::synapse0x13d14e0() {
   return (neuron0x13d18a0()*-0.0116474);
}

double NNfunction_sb_cLcL::synapse0x13d1520() {
   return (neuron0x13d1be0()*-0.609803);
}

double NNfunction_sb_cLcL::synapse0x13d8200() {
   return (neuron0x13d1f20()*-0.923304);
}

double NNfunction_sb_cLcL::synapse0x13d8240() {
   return (neuron0x13d2260()*-0.201752);
}

double NNfunction_sb_cLcL::synapse0x13d8280() {
   return (neuron0x13d25a0()*0.0197605);
}

double NNfunction_sb_cLcL::synapse0x13d82c0() {
   return (neuron0x13d28e0()*-0.374812);
}

double NNfunction_sb_cLcL::synapse0x13d8300() {
   return (neuron0x13d2c20()*0.220863);
}

double NNfunction_sb_cLcL::synapse0x13d8340() {
   return (neuron0x13d2f60()*-0.317231);
}

double NNfunction_sb_cLcL::synapse0x13d8380() {
   return (neuron0x13d32a0()*0.0255694);
}

double NNfunction_sb_cLcL::synapse0x13d83c0() {
   return (neuron0x13d35e0()*-0.000359169);
}

double NNfunction_sb_cLcL::synapse0x13d8400() {
   return (neuron0x13d3920()*0.347149);
}

double NNfunction_sb_cLcL::synapse0x13d8440() {
   return (neuron0x13d3c60()*0.547454);
}

double NNfunction_sb_cLcL::synapse0x13d8480() {
   return (neuron0x13d3fa0()*-0.330918);
}

double NNfunction_sb_cLcL::synapse0x13d84c0() {
   return (neuron0x13d42e0()*0.00825338);
}

double NNfunction_sb_cLcL::synapse0x13d8500() {
   return (neuron0x13d4620()*0.618024);
}

double NNfunction_sb_cLcL::synapse0x13d7450() {
   return (neuron0x13d4960()*0.11528);
}

double NNfunction_sb_cLcL::synapse0x13d7490() {
   return (neuron0x13d4ec0()*0.132739);
}

double NNfunction_sb_cLcL::synapse0x13d8650() {
   return (neuron0x13d50e0()*-0.225964);
}

double NNfunction_sb_cLcL::synapse0x13d8690() {
   return (neuron0x13d5420()*0.93641);
}

double NNfunction_sb_cLcL::synapse0x13d86d0() {
   return (neuron0x13d5760()*-0.194831);
}

double NNfunction_sb_cLcL::synapse0x13d8710() {
   return (neuron0x13d5aa0()*-0.0998925);
}

double NNfunction_sb_cLcL::synapse0x13d8750() {
   return (neuron0x13d5de0()*-0.20189);
}

double NNfunction_sb_cLcL::synapse0x13d8790() {
   return (neuron0x13d6120()*-0.114311);
}

double NNfunction_sb_cLcL::synapse0x13d8b10() {
   return (neuron0x13d1560()*-0.0231529);
}

double NNfunction_sb_cLcL::synapse0x13d8b50() {
   return (neuron0x13d18a0()*-0.0439054);
}

double NNfunction_sb_cLcL::synapse0x13d8b90() {
   return (neuron0x13d1be0()*-0.0793879);
}

double NNfunction_sb_cLcL::synapse0x13d8bd0() {
   return (neuron0x13d1f20()*-0.058932);
}

double NNfunction_sb_cLcL::synapse0x13d8c10() {
   return (neuron0x13d2260()*0.111537);
}

double NNfunction_sb_cLcL::synapse0x13d8c50() {
   return (neuron0x13d25a0()*-0.745626);
}

double NNfunction_sb_cLcL::synapse0x13d8c90() {
   return (neuron0x13d28e0()*0.241467);
}

double NNfunction_sb_cLcL::synapse0x13d8cd0() {
   return (neuron0x13d2c20()*0.09194);
}

double NNfunction_sb_cLcL::synapse0x13d8d10() {
   return (neuron0x13d2f60()*-0.196285);
}

double NNfunction_sb_cLcL::synapse0x13d8d50() {
   return (neuron0x13d32a0()*0.062069);
}

double NNfunction_sb_cLcL::synapse0x13d8d90() {
   return (neuron0x13d35e0()*0.16984);
}

double NNfunction_sb_cLcL::synapse0x13d8dd0() {
   return (neuron0x13d3920()*0.345101);
}

double NNfunction_sb_cLcL::synapse0x13d8e10() {
   return (neuron0x13d3c60()*0.81617);
}

double NNfunction_sb_cLcL::synapse0x13d8e50() {
   return (neuron0x13d3fa0()*-0.850822);
}

double NNfunction_sb_cLcL::synapse0x13d8e90() {
   return (neuron0x13d42e0()*0.366293);
}

double NNfunction_sb_cLcL::synapse0x13d8ed0() {
   return (neuron0x13d4620()*-0.0277553);
}

double NNfunction_sb_cLcL::synapse0x13d8960() {
   return (neuron0x13d4960()*1.24877);
}

double NNfunction_sb_cLcL::synapse0x13d89a0() {
   return (neuron0x13d4ec0()*0.338584);
}

double NNfunction_sb_cLcL::synapse0x13d9020() {
   return (neuron0x13d50e0()*0.309692);
}

double NNfunction_sb_cLcL::synapse0x13d9060() {
   return (neuron0x13d5420()*-0.0260099);
}

double NNfunction_sb_cLcL::synapse0x13d90a0() {
   return (neuron0x13d5760()*0.0958322);
}

double NNfunction_sb_cLcL::synapse0x13d90e0() {
   return (neuron0x13d5aa0()*0.214);
}

double NNfunction_sb_cLcL::synapse0x13d9120() {
   return (neuron0x13d5de0()*-0.170443);
}

double NNfunction_sb_cLcL::synapse0x13d9160() {
   return (neuron0x13d6120()*0.182583);
}

double NNfunction_sb_cLcL::synapse0x13d94e0() {
   return (neuron0x13d1560()*-0.00532912);
}

double NNfunction_sb_cLcL::synapse0x13d9520() {
   return (neuron0x13d18a0()*0.0244592);
}

double NNfunction_sb_cLcL::synapse0x13d9560() {
   return (neuron0x13d1be0()*-0.183505);
}

double NNfunction_sb_cLcL::synapse0x13d95a0() {
   return (neuron0x13d1f20()*-0.221574);
}

double NNfunction_sb_cLcL::synapse0x13d95e0() {
   return (neuron0x13d2260()*-0.0466774);
}

double NNfunction_sb_cLcL::synapse0x13d9620() {
   return (neuron0x13d25a0()*-0.130674);
}

double NNfunction_sb_cLcL::synapse0x13d9660() {
   return (neuron0x13d28e0()*-0.0826122);
}

double NNfunction_sb_cLcL::synapse0x13d96a0() {
   return (neuron0x13d2c20()*0.0471201);
}

double NNfunction_sb_cLcL::synapse0x13d96e0() {
   return (neuron0x13d2f60()*0.0143345);
}

double NNfunction_sb_cLcL::synapse0x1190e30() {
   return (neuron0x13d32a0()*0.0034347);
}

double NNfunction_sb_cLcL::synapse0x1190e70() {
   return (neuron0x13d35e0()*0.0351384);
}

double NNfunction_sb_cLcL::synapse0x1190eb0() {
   return (neuron0x13d3920()*0.168338);
}

double NNfunction_sb_cLcL::synapse0x1190ef0() {
   return (neuron0x13d3c60()*-0.180889);
}

double NNfunction_sb_cLcL::synapse0x1190f30() {
   return (neuron0x13d3fa0()*-0.117715);
}

double NNfunction_sb_cLcL::synapse0x1190f70() {
   return (neuron0x13d42e0()*0.454265);
}

double NNfunction_sb_cLcL::synapse0x1190fb0() {
   return (neuron0x13d4620()*0.507471);
}

double NNfunction_sb_cLcL::synapse0x13d9330() {
   return (neuron0x13d4960()*-0.146218);
}

double NNfunction_sb_cLcL::synapse0x13d9370() {
   return (neuron0x13d4ec0()*0.169603);
}

double NNfunction_sb_cLcL::synapse0x1191100() {
   return (neuron0x13d50e0()*0.13714);
}

double NNfunction_sb_cLcL::synapse0x1191140() {
   return (neuron0x13d5420()*0.0308255);
}

double NNfunction_sb_cLcL::synapse0x1191180() {
   return (neuron0x13d5760()*-0.00204308);
}

double NNfunction_sb_cLcL::synapse0x11911c0() {
   return (neuron0x13d5aa0()*0.0221376);
}

double NNfunction_sb_cLcL::synapse0x1191200() {
   return (neuron0x13d5de0()*-0.0241298);
}

double NNfunction_sb_cLcL::synapse0x13d9f30() {
   return (neuron0x13d6120()*0.00610394);
}

double NNfunction_sb_cLcL::synapse0x13da2b0() {
   return (neuron0x13d1560()*0.0846891);
}

double NNfunction_sb_cLcL::synapse0x13da2f0() {
   return (neuron0x13d18a0()*0.228302);
}

double NNfunction_sb_cLcL::synapse0x13da330() {
   return (neuron0x13d1be0()*-0.671594);
}

double NNfunction_sb_cLcL::synapse0x13da370() {
   return (neuron0x13d1f20()*0.529368);
}

double NNfunction_sb_cLcL::synapse0x13da3b0() {
   return (neuron0x13d2260()*-0.45797);
}

double NNfunction_sb_cLcL::synapse0x13da3f0() {
   return (neuron0x13d25a0()*0.0388989);
}

double NNfunction_sb_cLcL::synapse0x13da430() {
   return (neuron0x13d28e0()*0.150118);
}

double NNfunction_sb_cLcL::synapse0x13da470() {
   return (neuron0x13d2c20()*-0.307497);
}

double NNfunction_sb_cLcL::synapse0x13da4b0() {
   return (neuron0x13d2f60()*-0.00964584);
}

double NNfunction_sb_cLcL::synapse0x13da4f0() {
   return (neuron0x13d32a0()*0.144738);
}

double NNfunction_sb_cLcL::synapse0x13da530() {
   return (neuron0x13d35e0()*0.171575);
}

double NNfunction_sb_cLcL::synapse0x13da570() {
   return (neuron0x13d3920()*-0.324669);
}

double NNfunction_sb_cLcL::synapse0x13da5b0() {
   return (neuron0x13d3c60()*-0.124248);
}

double NNfunction_sb_cLcL::synapse0x13da5f0() {
   return (neuron0x13d3fa0()*0.453728);
}

double NNfunction_sb_cLcL::synapse0x13da630() {
   return (neuron0x13d42e0()*-0.35068);
}

double NNfunction_sb_cLcL::synapse0x13da670() {
   return (neuron0x13d4620()*0.0489181);
}

double NNfunction_sb_cLcL::synapse0x13da100() {
   return (neuron0x13d4960()*0.622686);
}

double NNfunction_sb_cLcL::synapse0x13da140() {
   return (neuron0x13d4ec0()*-0.105284);
}

double NNfunction_sb_cLcL::synapse0x13da7c0() {
   return (neuron0x13d50e0()*-0.567569);
}

double NNfunction_sb_cLcL::synapse0x13da800() {
   return (neuron0x13d5420()*-0.38887);
}

double NNfunction_sb_cLcL::synapse0x13da840() {
   return (neuron0x13d5760()*0.0630966);
}

double NNfunction_sb_cLcL::synapse0x13da880() {
   return (neuron0x13d5aa0()*-0.065171);
}

double NNfunction_sb_cLcL::synapse0x13da8c0() {
   return (neuron0x13d5de0()*0.0266712);
}

double NNfunction_sb_cLcL::synapse0x13da900() {
   return (neuron0x13d6120()*0.0258758);
}

double NNfunction_sb_cLcL::synapse0x13dac80() {
   return (neuron0x13d1560()*-0.01944);
}

double NNfunction_sb_cLcL::synapse0x13dacc0() {
   return (neuron0x13d18a0()*-0.0298472);
}

double NNfunction_sb_cLcL::synapse0x13dad00() {
   return (neuron0x13d1be0()*0.0765693);
}

double NNfunction_sb_cLcL::synapse0x13dad40() {
   return (neuron0x13d1f20()*2.78134);
}

double NNfunction_sb_cLcL::synapse0x13dad80() {
   return (neuron0x13d2260()*-0.0404303);
}

double NNfunction_sb_cLcL::synapse0x13dadc0() {
   return (neuron0x13d25a0()*0.0450659);
}

double NNfunction_sb_cLcL::synapse0x13dae00() {
   return (neuron0x13d28e0()*-0.0200119);
}

double NNfunction_sb_cLcL::synapse0x13dae40() {
   return (neuron0x13d2c20()*-0.00639549);
}

double NNfunction_sb_cLcL::synapse0x13dae80() {
   return (neuron0x13d2f60()*0.00821441);
}

double NNfunction_sb_cLcL::synapse0x13daec0() {
   return (neuron0x13d32a0()*-0.00329095);
}

double NNfunction_sb_cLcL::synapse0x13daf00() {
   return (neuron0x13d35e0()*0.0397449);
}

double NNfunction_sb_cLcL::synapse0x13daf40() {
   return (neuron0x13d3920()*0.00312899);
}

double NNfunction_sb_cLcL::synapse0x13daf80() {
   return (neuron0x13d3c60()*-0.247629);
}

double NNfunction_sb_cLcL::synapse0x13dafc0() {
   return (neuron0x13d3fa0()*0.0396711);
}

double NNfunction_sb_cLcL::synapse0x13db000() {
   return (neuron0x13d42e0()*0.0228956);
}

double NNfunction_sb_cLcL::synapse0x13db040() {
   return (neuron0x13d4620()*-0.0139021);
}

double NNfunction_sb_cLcL::synapse0x13daad0() {
   return (neuron0x13d4960()*0.00253678);
}

double NNfunction_sb_cLcL::synapse0x13dab10() {
   return (neuron0x13d4ec0()*0.0614737);
}

double NNfunction_sb_cLcL::synapse0x13db190() {
   return (neuron0x13d50e0()*0.0170361);
}

double NNfunction_sb_cLcL::synapse0x13db1d0() {
   return (neuron0x13d5420()*-0.0226611);
}

double NNfunction_sb_cLcL::synapse0x13db210() {
   return (neuron0x13d5760()*-0.0178317);
}

double NNfunction_sb_cLcL::synapse0x13db250() {
   return (neuron0x13d5aa0()*-0.008252);
}

double NNfunction_sb_cLcL::synapse0x13db290() {
   return (neuron0x13d5de0()*-0.0198778);
}

double NNfunction_sb_cLcL::synapse0x13db2d0() {
   return (neuron0x13d6120()*0.000726108);
}

double NNfunction_sb_cLcL::synapse0x13d4db0() {
   return (neuron0x13d1560()*0.00497318);
}

double NNfunction_sb_cLcL::synapse0x13d4df0() {
   return (neuron0x13d18a0()*0.0439766);
}

double NNfunction_sb_cLcL::synapse0x13d4e30() {
   return (neuron0x13d1be0()*0.103879);
}

double NNfunction_sb_cLcL::synapse0x13d4e70() {
   return (neuron0x13d1f20()*0.0682188);
}

double NNfunction_sb_cLcL::synapse0x13db860() {
   return (neuron0x13d2260()*-0.00569827);
}

double NNfunction_sb_cLcL::synapse0x13db8a0() {
   return (neuron0x13d25a0()*-0.0117908);
}

double NNfunction_sb_cLcL::synapse0x13db8e0() {
   return (neuron0x13d28e0()*0.0177834);
}

double NNfunction_sb_cLcL::synapse0x13db920() {
   return (neuron0x13d2c20()*-0.042251);
}

double NNfunction_sb_cLcL::synapse0x13db960() {
   return (neuron0x13d2f60()*-0.000313749);
}

double NNfunction_sb_cLcL::synapse0x13db9a0() {
   return (neuron0x13d32a0()*-0.0207296);
}

double NNfunction_sb_cLcL::synapse0x13db9e0() {
   return (neuron0x13d35e0()*0.0198889);
}

double NNfunction_sb_cLcL::synapse0x13dba20() {
   return (neuron0x13d3920()*-0.182214);
}

double NNfunction_sb_cLcL::synapse0x13dba60() {
   return (neuron0x13d3c60()*4.93324);
}

double NNfunction_sb_cLcL::synapse0x13dbaa0() {
   return (neuron0x13d3fa0()*0.0192462);
}

double NNfunction_sb_cLcL::synapse0x13dbae0() {
   return (neuron0x13d42e0()*-0.106898);
}

double NNfunction_sb_cLcL::synapse0x13dbb20() {
   return (neuron0x13d4620()*-0.107487);
}

double NNfunction_sb_cLcL::synapse0x13db4a0() {
   return (neuron0x13d4960()*-0.0887203);
}

double NNfunction_sb_cLcL::synapse0x13db4e0() {
   return (neuron0x13d4ec0()*-0.118196);
}

double NNfunction_sb_cLcL::synapse0x13dbc70() {
   return (neuron0x13d50e0()*-0.138903);
}

double NNfunction_sb_cLcL::synapse0x13dbcb0() {
   return (neuron0x13d5420()*-0.0126007);
}

double NNfunction_sb_cLcL::synapse0x13dbcf0() {
   return (neuron0x13d5760()*-0.00844342);
}

double NNfunction_sb_cLcL::synapse0x13dbd30() {
   return (neuron0x13d5aa0()*0.00551007);
}

double NNfunction_sb_cLcL::synapse0x13dbd70() {
   return (neuron0x13d5de0()*-0.0030449);
}

double NNfunction_sb_cLcL::synapse0x13dbdb0() {
   return (neuron0x13d6120()*-0.018022);
}

double NNfunction_sb_cLcL::synapse0x13dc130() {
   return (neuron0x13d1560()*0.00479282);
}

double NNfunction_sb_cLcL::synapse0x13dc170() {
   return (neuron0x13d18a0()*0.0242686);
}

double NNfunction_sb_cLcL::synapse0x13dc1b0() {
   return (neuron0x13d1be0()*0.0425473);
}

double NNfunction_sb_cLcL::synapse0x13dc1f0() {
   return (neuron0x13d1f20()*0.000514935);
}

double NNfunction_sb_cLcL::synapse0x13dc230() {
   return (neuron0x13d2260()*0.0153941);
}

double NNfunction_sb_cLcL::synapse0x13dc270() {
   return (neuron0x13d25a0()*0.0105621);
}

double NNfunction_sb_cLcL::synapse0x13dc2b0() {
   return (neuron0x13d28e0()*0.00564648);
}

double NNfunction_sb_cLcL::synapse0x13dc2f0() {
   return (neuron0x13d2c20()*0.00711125);
}

double NNfunction_sb_cLcL::synapse0x13dc330() {
   return (neuron0x13d2f60()*-0.0562404);
}

double NNfunction_sb_cLcL::synapse0x13dc370() {
   return (neuron0x13d32a0()*0.11865);
}

double NNfunction_sb_cLcL::synapse0x13dc3b0() {
   return (neuron0x13d35e0()*-0.0423111);
}

double NNfunction_sb_cLcL::synapse0x13dc3f0() {
   return (neuron0x13d3920()*0.0296043);
}

double NNfunction_sb_cLcL::synapse0x13dc430() {
   return (neuron0x13d3c60()*1.10348);
}

double NNfunction_sb_cLcL::synapse0x13dc470() {
   return (neuron0x13d3fa0()*0.0403516);
}

double NNfunction_sb_cLcL::synapse0x13dc4b0() {
   return (neuron0x13d42e0()*0.0417524);
}

double NNfunction_sb_cLcL::synapse0x13dc4f0() {
   return (neuron0x13d4620()*0.00200066);
}

double NNfunction_sb_cLcL::synapse0x13dbf80() {
   return (neuron0x13d4960()*0.0202712);
}

double NNfunction_sb_cLcL::synapse0x13dbfc0() {
   return (neuron0x13d4ec0()*0.026905);
}

double NNfunction_sb_cLcL::synapse0x13dc640() {
   return (neuron0x13d50e0()*0.027632);
}

double NNfunction_sb_cLcL::synapse0x13dc680() {
   return (neuron0x13d5420()*0.0212078);
}

double NNfunction_sb_cLcL::synapse0x13dc6c0() {
   return (neuron0x13d5760()*0.0128641);
}

double NNfunction_sb_cLcL::synapse0x13dc700() {
   return (neuron0x13d5aa0()*0.0017716);
}

double NNfunction_sb_cLcL::synapse0x13dc740() {
   return (neuron0x13d5de0()*0.00771962);
}

double NNfunction_sb_cLcL::synapse0x13dc780() {
   return (neuron0x13d6120()*0.00636882);
}

double NNfunction_sb_cLcL::synapse0x13dcb00() {
   return (neuron0x13d1560()*0.577646);
}

double NNfunction_sb_cLcL::synapse0x13dcb40() {
   return (neuron0x13d18a0()*0.052324);
}

double NNfunction_sb_cLcL::synapse0x13dcb80() {
   return (neuron0x13d1be0()*0.0272788);
}

double NNfunction_sb_cLcL::synapse0x13dcbc0() {
   return (neuron0x13d1f20()*-0.028825);
}

double NNfunction_sb_cLcL::synapse0x13dcc00() {
   return (neuron0x13d2260()*-0.279166);
}

double NNfunction_sb_cLcL::synapse0x13dcc40() {
   return (neuron0x13d25a0()*0.458576);
}

double NNfunction_sb_cLcL::synapse0x13dcc80() {
   return (neuron0x13d28e0()*-0.199008);
}

double NNfunction_sb_cLcL::synapse0x13dccc0() {
   return (neuron0x13d2c20()*0.0867538);
}

double NNfunction_sb_cLcL::synapse0x13dcd00() {
   return (neuron0x13d2f60()*-0.190532);
}

double NNfunction_sb_cLcL::synapse0x13dcd40() {
   return (neuron0x13d32a0()*0.176019);
}

double NNfunction_sb_cLcL::synapse0x13dcd80() {
   return (neuron0x13d35e0()*0.0747851);
}

double NNfunction_sb_cLcL::synapse0x13dcdc0() {
   return (neuron0x13d3920()*-0.0261822);
}

double NNfunction_sb_cLcL::synapse0x13dce00() {
   return (neuron0x13d3c60()*0.359616);
}

double NNfunction_sb_cLcL::synapse0x13dce40() {
   return (neuron0x13d3fa0()*0.255111);
}

double NNfunction_sb_cLcL::synapse0x13dce80() {
   return (neuron0x13d42e0()*0.244764);
}

double NNfunction_sb_cLcL::synapse0x13dcec0() {
   return (neuron0x13d4620()*1.19181);
}

double NNfunction_sb_cLcL::synapse0x13dc950() {
   return (neuron0x13d4960()*0.00466919);
}

double NNfunction_sb_cLcL::synapse0x13dc990() {
   return (neuron0x13d4ec0()*-0.305497);
}

double NNfunction_sb_cLcL::synapse0x13d9720() {
   return (neuron0x13d50e0()*-0.0909798);
}

double NNfunction_sb_cLcL::synapse0x13d9760() {
   return (neuron0x13d5420()*0.10693);
}

double NNfunction_sb_cLcL::synapse0x13d97a0() {
   return (neuron0x13d5760()*0.140592);
}

double NNfunction_sb_cLcL::synapse0x13d97e0() {
   return (neuron0x13d5aa0()*0.132307);
}

double NNfunction_sb_cLcL::synapse0x13d9820() {
   return (neuron0x13d5de0()*0.603198);
}

double NNfunction_sb_cLcL::synapse0x13d9860() {
   return (neuron0x13d6120()*0.117892);
}

double NNfunction_sb_cLcL::synapse0x13d9be0() {
   return (neuron0x13d1560()*-0.208079);
}

double NNfunction_sb_cLcL::synapse0x13d9c20() {
   return (neuron0x13d18a0()*0.332874);
}

double NNfunction_sb_cLcL::synapse0x13d9c60() {
   return (neuron0x13d1be0()*0.150749);
}

double NNfunction_sb_cLcL::synapse0x13d9ca0() {
   return (neuron0x13d1f20()*0.00958734);
}

double NNfunction_sb_cLcL::synapse0x13d9ce0() {
   return (neuron0x13d2260()*0.516759);
}

double NNfunction_sb_cLcL::synapse0x13d9d20() {
   return (neuron0x13d25a0()*-0.307618);
}

double NNfunction_sb_cLcL::synapse0x13d9d60() {
   return (neuron0x13d28e0()*0.326377);
}

double NNfunction_sb_cLcL::synapse0x13d9da0() {
   return (neuron0x13d2c20()*0.098877);
}

double NNfunction_sb_cLcL::synapse0x13d9de0() {
   return (neuron0x13d2f60()*-0.279099);
}

double NNfunction_sb_cLcL::synapse0x13d9e20() {
   return (neuron0x13d32a0()*-0.361402);
}

double NNfunction_sb_cLcL::synapse0x13d9e60() {
   return (neuron0x13d35e0()*-0.786432);
}

double NNfunction_sb_cLcL::synapse0x13d9ea0() {
   return (neuron0x13d3920()*-0.787195);
}

double NNfunction_sb_cLcL::synapse0x13d9ee0() {
   return (neuron0x13d3c60()*0.0470641);
}

double NNfunction_sb_cLcL::synapse0x13de020() {
   return (neuron0x13d3fa0()*-0.776206);
}

double NNfunction_sb_cLcL::synapse0x13de060() {
   return (neuron0x13d42e0()*0.529412);
}

double NNfunction_sb_cLcL::synapse0x13de0a0() {
   return (neuron0x13d4620()*-0.065574);
}

double NNfunction_sb_cLcL::synapse0x13d9a30() {
   return (neuron0x13d4960()*-0.619985);
}

double NNfunction_sb_cLcL::synapse0x13d9a70() {
   return (neuron0x13d4ec0()*0.192811);
}

double NNfunction_sb_cLcL::synapse0x13de1f0() {
   return (neuron0x13d50e0()*0.502227);
}

double NNfunction_sb_cLcL::synapse0x13de230() {
   return (neuron0x13d5420()*0.174427);
}

double NNfunction_sb_cLcL::synapse0x13de270() {
   return (neuron0x13d5760()*0.206964);
}

double NNfunction_sb_cLcL::synapse0x13de2b0() {
   return (neuron0x13d5aa0()*-0.746537);
}

double NNfunction_sb_cLcL::synapse0x13de2f0() {
   return (neuron0x13d5de0()*-0.0222729);
}

double NNfunction_sb_cLcL::synapse0x13de330() {
   return (neuron0x13d6120()*-0.0725558);
}

double NNfunction_sb_cLcL::synapse0x13de6b0() {
   return (neuron0x13d1560()*-0.213311);
}

double NNfunction_sb_cLcL::synapse0x13de6f0() {
   return (neuron0x13d18a0()*0.210614);
}

double NNfunction_sb_cLcL::synapse0x13de730() {
   return (neuron0x13d1be0()*-0.458196);
}

double NNfunction_sb_cLcL::synapse0x13de770() {
   return (neuron0x13d1f20()*-1.03272);
}

double NNfunction_sb_cLcL::synapse0x13de7b0() {
   return (neuron0x13d2260()*-0.16566);
}

double NNfunction_sb_cLcL::synapse0x13de7f0() {
   return (neuron0x13d25a0()*-0.061757);
}

double NNfunction_sb_cLcL::synapse0x13de830() {
   return (neuron0x13d28e0()*-0.0158712);
}

double NNfunction_sb_cLcL::synapse0x13de870() {
   return (neuron0x13d2c20()*-0.524421);
}

double NNfunction_sb_cLcL::synapse0x13de8b0() {
   return (neuron0x13d2f60()*0.126588);
}

double NNfunction_sb_cLcL::synapse0x13de8f0() {
   return (neuron0x13d32a0()*-0.0236423);
}

double NNfunction_sb_cLcL::synapse0x13de930() {
   return (neuron0x13d35e0()*0.189158);
}

double NNfunction_sb_cLcL::synapse0x13de970() {
   return (neuron0x13d3920()*-0.351553);
}

double NNfunction_sb_cLcL::synapse0x13de9b0() {
   return (neuron0x13d3c60()*-0.823101);
}

double NNfunction_sb_cLcL::synapse0x13de9f0() {
   return (neuron0x13d3fa0()*-0.295745);
}

double NNfunction_sb_cLcL::synapse0x13dea30() {
   return (neuron0x13d42e0()*0.53562);
}

double NNfunction_sb_cLcL::synapse0x13dea70() {
   return (neuron0x13d4620()*-0.511618);
}

double NNfunction_sb_cLcL::synapse0x13de500() {
   return (neuron0x13d4960()*0.541801);
}

double NNfunction_sb_cLcL::synapse0x13de540() {
   return (neuron0x13d4ec0()*0.0842849);
}

double NNfunction_sb_cLcL::synapse0x13debc0() {
   return (neuron0x13d50e0()*0.113861);
}

double NNfunction_sb_cLcL::synapse0x13dec00() {
   return (neuron0x13d5420()*-0.311456);
}

double NNfunction_sb_cLcL::synapse0x13dec40() {
   return (neuron0x13d5760()*-0.224922);
}

double NNfunction_sb_cLcL::synapse0x13dec80() {
   return (neuron0x13d5aa0()*0.000986199);
}

double NNfunction_sb_cLcL::synapse0x13decc0() {
   return (neuron0x13d5de0()*0.0400654);
}

double NNfunction_sb_cLcL::synapse0x13ded00() {
   return (neuron0x13d6120()*-0.428527);
}

double NNfunction_sb_cLcL::synapse0x13df080() {
   return (neuron0x13d1560()*0.00707192);
}

double NNfunction_sb_cLcL::synapse0x13df0c0() {
   return (neuron0x13d18a0()*-0.0151207);
}

double NNfunction_sb_cLcL::synapse0x13df100() {
   return (neuron0x13d1be0()*1.61164);
}

double NNfunction_sb_cLcL::synapse0x13df140() {
   return (neuron0x13d1f20()*-0.0278042);
}

double NNfunction_sb_cLcL::synapse0x13df180() {
   return (neuron0x13d2260()*-0.0208607);
}

double NNfunction_sb_cLcL::synapse0x13df1c0() {
   return (neuron0x13d25a0()*-0.00496253);
}

double NNfunction_sb_cLcL::synapse0x13df200() {
   return (neuron0x13d28e0()*-0.0214806);
}

double NNfunction_sb_cLcL::synapse0x13df240() {
   return (neuron0x13d2c20()*-0.047802);
}

double NNfunction_sb_cLcL::synapse0x13df280() {
   return (neuron0x13d2f60()*0.000683076);
}

double NNfunction_sb_cLcL::synapse0x13df2c0() {
   return (neuron0x13d32a0()*0.0205242);
}

double NNfunction_sb_cLcL::synapse0x13df300() {
   return (neuron0x13d35e0()*0.018891);
}

double NNfunction_sb_cLcL::synapse0x13df340() {
   return (neuron0x13d3920()*-0.0536369);
}

double NNfunction_sb_cLcL::synapse0x13df380() {
   return (neuron0x13d3c60()*-0.403534);
}

double NNfunction_sb_cLcL::synapse0x13df3c0() {
   return (neuron0x13d3fa0()*0.0575045);
}

double NNfunction_sb_cLcL::synapse0x13df400() {
   return (neuron0x13d42e0()*-0.034409);
}

double NNfunction_sb_cLcL::synapse0x13df440() {
   return (neuron0x13d4620()*-0.0177195);
}

double NNfunction_sb_cLcL::synapse0x13deed0() {
   return (neuron0x13d4960()*0.0428711);
}

double NNfunction_sb_cLcL::synapse0x13def10() {
   return (neuron0x13d4ec0()*-0.0208764);
}

double NNfunction_sb_cLcL::synapse0x13df590() {
   return (neuron0x13d50e0()*-0.000441012);
}

double NNfunction_sb_cLcL::synapse0x13df5d0() {
   return (neuron0x13d5420()*0.00982036);
}

double NNfunction_sb_cLcL::synapse0x13df610() {
   return (neuron0x13d5760()*0.0231722);
}

double NNfunction_sb_cLcL::synapse0x13df650() {
   return (neuron0x13d5aa0()*-0.0152821);
}

double NNfunction_sb_cLcL::synapse0x13df690() {
   return (neuron0x13d5de0()*0.00190608);
}

double NNfunction_sb_cLcL::synapse0x13df6d0() {
   return (neuron0x13d6120()*-0.030244);
}

double NNfunction_sb_cLcL::synapse0x13dfa50() {
   return (neuron0x13d1560()*-0.00778614);
}

double NNfunction_sb_cLcL::synapse0x13dfa90() {
   return (neuron0x13d18a0()*-0.172566);
}

double NNfunction_sb_cLcL::synapse0x13dfad0() {
   return (neuron0x13d1be0()*0.962601);
}

double NNfunction_sb_cLcL::synapse0x13dfb10() {
   return (neuron0x13d1f20()*-0.667254);
}

double NNfunction_sb_cLcL::synapse0x13dfb50() {
   return (neuron0x13d2260()*0.107705);
}

double NNfunction_sb_cLcL::synapse0x13dfb90() {
   return (neuron0x13d25a0()*-0.0740074);
}

double NNfunction_sb_cLcL::synapse0x13dfbd0() {
   return (neuron0x13d28e0()*0.32483);
}

double NNfunction_sb_cLcL::synapse0x13dfc10() {
   return (neuron0x13d2c20()*0.215053);
}

double NNfunction_sb_cLcL::synapse0x13dfc50() {
   return (neuron0x13d2f60()*-0.123025);
}

double NNfunction_sb_cLcL::synapse0x13dfc90() {
   return (neuron0x13d32a0()*-0.029996);
}

double NNfunction_sb_cLcL::synapse0x13dfcd0() {
   return (neuron0x13d35e0()*-0.137361);
}

double NNfunction_sb_cLcL::synapse0x13dfd10() {
   return (neuron0x13d3920()*0.160858);
}

double NNfunction_sb_cLcL::synapse0x13dfd50() {
   return (neuron0x13d3c60()*0.172037);
}

double NNfunction_sb_cLcL::synapse0x13dfd90() {
   return (neuron0x13d3fa0()*-0.0739301);
}

double NNfunction_sb_cLcL::synapse0x13dfdd0() {
   return (neuron0x13d42e0()*-0.0931064);
}

double NNfunction_sb_cLcL::synapse0x13dfe10() {
   return (neuron0x13d4620()*-0.221682);
}

double NNfunction_sb_cLcL::synapse0x13df8a0() {
   return (neuron0x13d4960()*0.10199);
}

double NNfunction_sb_cLcL::synapse0x13df8e0() {
   return (neuron0x13d4ec0()*-0.258969);
}

double NNfunction_sb_cLcL::synapse0x13dff60() {
   return (neuron0x13d50e0()*0.034861);
}

double NNfunction_sb_cLcL::synapse0x13dffa0() {
   return (neuron0x13d5420()*-0.125387);
}

double NNfunction_sb_cLcL::synapse0x13dffe0() {
   return (neuron0x13d5760()*-0.0400407);
}

double NNfunction_sb_cLcL::synapse0x13e0020() {
   return (neuron0x13d5aa0()*-0.0954451);
}

double NNfunction_sb_cLcL::synapse0x13e0060() {
   return (neuron0x13d5de0()*-0.0500757);
}

double NNfunction_sb_cLcL::synapse0x13e00a0() {
   return (neuron0x13d6120()*0.00651575);
}

double NNfunction_sb_cLcL::synapse0x13e0420() {
   return (neuron0x13d1560()*0.0705161);
}

double NNfunction_sb_cLcL::synapse0x13d1780() {
   return (neuron0x13d18a0()*-0.323064);
}

double NNfunction_sb_cLcL::synapse0x13d17c0() {
   return (neuron0x13d1be0()*-0.57458);
}

double NNfunction_sb_cLcL::synapse0x13d1ac0() {
   return (neuron0x13d1f20()*-0.865959);
}

double NNfunction_sb_cLcL::synapse0x13d1b00() {
   return (neuron0x13d2260()*0.043163);
}

double NNfunction_sb_cLcL::synapse0x13d1e00() {
   return (neuron0x13d25a0()*0.586788);
}

double NNfunction_sb_cLcL::synapse0x13d1e40() {
   return (neuron0x13d28e0()*0.395117);
}

double NNfunction_sb_cLcL::synapse0x13d2140() {
   return (neuron0x13d2c20()*0.450496);
}

double NNfunction_sb_cLcL::synapse0x13d2180() {
   return (neuron0x13d2f60()*-0.0827376);
}

double NNfunction_sb_cLcL::synapse0x13d2480() {
   return (neuron0x13d32a0()*-0.0324556);
}

double NNfunction_sb_cLcL::synapse0x13d24c0() {
   return (neuron0x13d35e0()*-0.0307956);
}

double NNfunction_sb_cLcL::synapse0x13d27c0() {
   return (neuron0x13d3920()*-0.0867076);
}

double NNfunction_sb_cLcL::synapse0x13d2800() {
   return (neuron0x13d3c60()*-0.53904);
}

double NNfunction_sb_cLcL::synapse0x13d2b00() {
   return (neuron0x13d3fa0()*-0.00348546);
}

double NNfunction_sb_cLcL::synapse0x13d2b40() {
   return (neuron0x13d42e0()*0.178092);
}

double NNfunction_sb_cLcL::synapse0x13d2e40() {
   return (neuron0x13d4620()*0.22757);
}

double NNfunction_sb_cLcL::synapse0x13d2e80() {
   return (neuron0x13d4960()*0.146198);
}

double NNfunction_sb_cLcL::synapse0x13d3180() {
   return (neuron0x13d4ec0()*-0.0978059);
}

double NNfunction_sb_cLcL::synapse0x13d31c0() {
   return (neuron0x13d50e0()*-0.1062);
}

double NNfunction_sb_cLcL::synapse0x13d34c0() {
   return (neuron0x13d5420()*0.0230179);
}

double NNfunction_sb_cLcL::synapse0x13d3500() {
   return (neuron0x13d5760()*0.0360253);
}

double NNfunction_sb_cLcL::synapse0x13d3800() {
   return (neuron0x13d5aa0()*-0.0625428);
}

double NNfunction_sb_cLcL::synapse0x13d3840() {
   return (neuron0x13d5de0()*0.133377);
}

double NNfunction_sb_cLcL::synapse0x13d3b40() {
   return (neuron0x13d6120()*-0.0370428);
}

double NNfunction_sb_cLcL::synapse0x13d3b80() {
   return (neuron0x13d1560()*0.0652415);
}

double NNfunction_sb_cLcL::synapse0x13d4840() {
   return (neuron0x13d18a0()*-0.0490389);
}

double NNfunction_sb_cLcL::synapse0x13d4880() {
   return (neuron0x13d1be0()*0.87104);
}

double NNfunction_sb_cLcL::synapse0x13e0270() {
   return (neuron0x13d1f20()*0.871544);
}

double NNfunction_sb_cLcL::synapse0x13e02b0() {
   return (neuron0x13d2260()*-0.468937);
}

double NNfunction_sb_cLcL::synapse0x13d4b80() {
   return (neuron0x13d25a0()*-0.271058);
}

double NNfunction_sb_cLcL::synapse0x13d4bc0() {
   return (neuron0x13d28e0()*0.282931);
}

double NNfunction_sb_cLcL::synapse0x1182b50() {
   return (neuron0x13d2c20()*0.433902);
}

double NNfunction_sb_cLcL::synapse0x1182b90() {
   return (neuron0x13d2f60()*-0.0954657);
}

double NNfunction_sb_cLcL::synapse0x13d5300() {
   return (neuron0x13d32a0()*0.0112707);
}

double NNfunction_sb_cLcL::synapse0x13d5340() {
   return (neuron0x13d35e0()*0.0828591);
}

double NNfunction_sb_cLcL::synapse0x13d5640() {
   return (neuron0x13d3920()*-0.217931);
}

double NNfunction_sb_cLcL::synapse0x13d5680() {
   return (neuron0x13d3c60()*1.12731);
}

double NNfunction_sb_cLcL::synapse0x13d5980() {
   return (neuron0x13d3fa0()*-0.0313213);
}

double NNfunction_sb_cLcL::synapse0x13d59c0() {
   return (neuron0x13d42e0()*0.209205);
}

double NNfunction_sb_cLcL::synapse0x13d5cc0() {
   return (neuron0x13d4620()*-0.0553727);
}

double NNfunction_sb_cLcL::synapse0x13d5d00() {
   return (neuron0x13d4960()*-0.0210621);
}

double NNfunction_sb_cLcL::synapse0x13d6000() {
   return (neuron0x13d4ec0()*0.00701654);
}

double NNfunction_sb_cLcL::synapse0x13d6040() {
   return (neuron0x13d50e0()*-0.193029);
}

double NNfunction_sb_cLcL::synapse0x13d6340() {
   return (neuron0x13d5420()*0.106846);
}

double NNfunction_sb_cLcL::synapse0x13d6380() {
   return (neuron0x13d5760()*0.112112);
}

double NNfunction_sb_cLcL::synapse0x13d3e80() {
   return (neuron0x13d5aa0()*0.0912539);
}

double NNfunction_sb_cLcL::synapse0x13d3ec0() {
   return (neuron0x13d5de0()*0.0301448);
}

double NNfunction_sb_cLcL::synapse0x13e2190() {
   return (neuron0x13d6120()*-0.022747);
}

double NNfunction_sb_cLcL::synapse0x13e2510() {
   return (neuron0x13d1560()*-0.265839);
}

double NNfunction_sb_cLcL::synapse0x13e2550() {
   return (neuron0x13d18a0()*-0.0600481);
}

double NNfunction_sb_cLcL::synapse0x13e2590() {
   return (neuron0x13d1be0()*0.202173);
}

double NNfunction_sb_cLcL::synapse0x13e25d0() {
   return (neuron0x13d1f20()*-0.618214);
}

double NNfunction_sb_cLcL::synapse0x13e2610() {
   return (neuron0x13d2260()*0.113315);
}

double NNfunction_sb_cLcL::synapse0x13e2650() {
   return (neuron0x13d25a0()*-0.147636);
}

double NNfunction_sb_cLcL::synapse0x13e2690() {
   return (neuron0x13d28e0()*0.125501);
}

double NNfunction_sb_cLcL::synapse0x13e26d0() {
   return (neuron0x13d2c20()*-0.297908);
}

double NNfunction_sb_cLcL::synapse0x13e2710() {
   return (neuron0x13d2f60()*-0.18303);
}

double NNfunction_sb_cLcL::synapse0x13e2750() {
   return (neuron0x13d32a0()*0.348108);
}

double NNfunction_sb_cLcL::synapse0x13e2790() {
   return (neuron0x13d35e0()*-0.175654);
}

double NNfunction_sb_cLcL::synapse0x13e27d0() {
   return (neuron0x13d3920()*-0.0626755);
}

double NNfunction_sb_cLcL::synapse0x13e2810() {
   return (neuron0x13d3c60()*-0.313379);
}

double NNfunction_sb_cLcL::synapse0x13e2850() {
   return (neuron0x13d3fa0()*0.116651);
}

double NNfunction_sb_cLcL::synapse0x13e2890() {
   return (neuron0x13d42e0()*-0.163761);
}

double NNfunction_sb_cLcL::synapse0x13e28d0() {
   return (neuron0x13d4620()*-0.166001);
}

double NNfunction_sb_cLcL::synapse0x13e2360() {
   return (neuron0x13d4960()*-0.0102552);
}

double NNfunction_sb_cLcL::synapse0x13e23a0() {
   return (neuron0x13d4ec0()*0.112168);
}

double NNfunction_sb_cLcL::synapse0x13e2a20() {
   return (neuron0x13d50e0()*0.0839143);
}

double NNfunction_sb_cLcL::synapse0x13e2a60() {
   return (neuron0x13d5420()*-0.071292);
}

double NNfunction_sb_cLcL::synapse0x13e2aa0() {
   return (neuron0x13d5760()*0.141406);
}

double NNfunction_sb_cLcL::synapse0x13e2ae0() {
   return (neuron0x13d5aa0()*0.15663);
}

double NNfunction_sb_cLcL::synapse0x13e2b20() {
   return (neuron0x13d5de0()*0.0421916);
}

double NNfunction_sb_cLcL::synapse0x13e2b60() {
   return (neuron0x13d6120()*0.31438);
}

double NNfunction_sb_cLcL::synapse0x13e2ee0() {
   return (neuron0x13d1560()*-0.10764);
}

double NNfunction_sb_cLcL::synapse0x13e2f20() {
   return (neuron0x13d18a0()*-0.163155);
}

double NNfunction_sb_cLcL::synapse0x13e2f60() {
   return (neuron0x13d1be0()*0.0316592);
}

double NNfunction_sb_cLcL::synapse0x13e2fa0() {
   return (neuron0x13d1f20()*-0.695201);
}

double NNfunction_sb_cLcL::synapse0x13e2fe0() {
   return (neuron0x13d2260()*0.0254719);
}

double NNfunction_sb_cLcL::synapse0x13e3020() {
   return (neuron0x13d25a0()*0.210303);
}

double NNfunction_sb_cLcL::synapse0x13e3060() {
   return (neuron0x13d28e0()*0.071998);
}

double NNfunction_sb_cLcL::synapse0x13e30a0() {
   return (neuron0x13d2c20()*-0.35782);
}

double NNfunction_sb_cLcL::synapse0x13e30e0() {
   return (neuron0x13d2f60()*0.386532);
}

double NNfunction_sb_cLcL::synapse0x13e3120() {
   return (neuron0x13d32a0()*-0.320629);
}

double NNfunction_sb_cLcL::synapse0x13e3160() {
   return (neuron0x13d35e0()*0.136494);
}

double NNfunction_sb_cLcL::synapse0x13e31a0() {
   return (neuron0x13d3920()*-0.186851);
}

double NNfunction_sb_cLcL::synapse0x13e31e0() {
   return (neuron0x13d3c60()*0.895089);
}

double NNfunction_sb_cLcL::synapse0x13e3220() {
   return (neuron0x13d3fa0()*-0.592033);
}

double NNfunction_sb_cLcL::synapse0x13e3260() {
   return (neuron0x13d42e0()*0.0892857);
}

double NNfunction_sb_cLcL::synapse0x13e32a0() {
   return (neuron0x13d4620()*-0.351297);
}

double NNfunction_sb_cLcL::synapse0x13e2d30() {
   return (neuron0x13d4960()*-0.382004);
}

double NNfunction_sb_cLcL::synapse0x13e2d70() {
   return (neuron0x13d4ec0()*-0.0882541);
}

double NNfunction_sb_cLcL::synapse0x13e33f0() {
   return (neuron0x13d50e0()*0.287284);
}

double NNfunction_sb_cLcL::synapse0x13e3430() {
   return (neuron0x13d5420()*-0.751003);
}

double NNfunction_sb_cLcL::synapse0x13e3470() {
   return (neuron0x13d5760()*0.199044);
}

double NNfunction_sb_cLcL::synapse0x13e34b0() {
   return (neuron0x13d5aa0()*-0.289487);
}

double NNfunction_sb_cLcL::synapse0x13e34f0() {
   return (neuron0x13d5de0()*-0.00906163);
}

double NNfunction_sb_cLcL::synapse0x13e3530() {
   return (neuron0x13d6120()*-0.203103);
}

double NNfunction_sb_cLcL::synapse0x13e38b0() {
   return (neuron0x13d1560()*-0.017239);
}

double NNfunction_sb_cLcL::synapse0x13e38f0() {
   return (neuron0x13d18a0()*-0.0337475);
}

double NNfunction_sb_cLcL::synapse0x13e3930() {
   return (neuron0x13d1be0()*-0.00464515);
}

double NNfunction_sb_cLcL::synapse0x13e3970() {
   return (neuron0x13d1f20()*-2.56035);
}

double NNfunction_sb_cLcL::synapse0x13e39b0() {
   return (neuron0x13d2260()*0.253948);
}

double NNfunction_sb_cLcL::synapse0x13e39f0() {
   return (neuron0x13d25a0()*-0.18981);
}

double NNfunction_sb_cLcL::synapse0x13e3a30() {
   return (neuron0x13d28e0()*-0.00439011);
}

double NNfunction_sb_cLcL::synapse0x13e3a70() {
   return (neuron0x13d2c20()*-0.0123571);
}

double NNfunction_sb_cLcL::synapse0x13e3ab0() {
   return (neuron0x13d2f60()*-0.0192451);
}

double NNfunction_sb_cLcL::synapse0x13e3af0() {
   return (neuron0x13d32a0()*-0.0322078);
}

double NNfunction_sb_cLcL::synapse0x13e3b30() {
   return (neuron0x13d35e0()*-0.111744);
}

double NNfunction_sb_cLcL::synapse0x13e3b70() {
   return (neuron0x13d3920()*-0.06441);
}

double NNfunction_sb_cLcL::synapse0x13e3bb0() {
   return (neuron0x13d3c60()*-1.03011);
}

double NNfunction_sb_cLcL::synapse0x13e3bf0() {
   return (neuron0x13d3fa0()*-0.0504688);
}

double NNfunction_sb_cLcL::synapse0x13e3c30() {
   return (neuron0x13d42e0()*-0.0123081);
}

double NNfunction_sb_cLcL::synapse0x13e3c70() {
   return (neuron0x13d4620()*-0.162316);
}

double NNfunction_sb_cLcL::synapse0x13e3700() {
   return (neuron0x13d4960()*-0.106424);
}

double NNfunction_sb_cLcL::synapse0x13e3740() {
   return (neuron0x13d4ec0()*0.0441009);
}

double NNfunction_sb_cLcL::synapse0x13e3dc0() {
   return (neuron0x13d50e0()*0.0157049);
}

double NNfunction_sb_cLcL::synapse0x13e3e00() {
   return (neuron0x13d5420()*0.0393483);
}

double NNfunction_sb_cLcL::synapse0x13e3e40() {
   return (neuron0x13d5760()*0.0262509);
}

double NNfunction_sb_cLcL::synapse0x13e3e80() {
   return (neuron0x13d5aa0()*0.00238853);
}

double NNfunction_sb_cLcL::synapse0x13e3ec0() {
   return (neuron0x13d5de0()*-0.0934351);
}

double NNfunction_sb_cLcL::synapse0x13e3f00() {
   return (neuron0x13d6120()*-0.05247);
}

double NNfunction_sb_cLcL::synapse0x13e4280() {
   return (neuron0x13d1560()*-0.239482);
}

double NNfunction_sb_cLcL::synapse0x13e42c0() {
   return (neuron0x13d18a0()*-0.374485);
}

double NNfunction_sb_cLcL::synapse0x13e4300() {
   return (neuron0x13d1be0()*-0.233854);
}

double NNfunction_sb_cLcL::synapse0x13e4340() {
   return (neuron0x13d1f20()*0.136346);
}

double NNfunction_sb_cLcL::synapse0x13e4380() {
   return (neuron0x13d2260()*0.54864);
}

double NNfunction_sb_cLcL::synapse0x13e43c0() {
   return (neuron0x13d25a0()*-0.460059);
}

double NNfunction_sb_cLcL::synapse0x13e4400() {
   return (neuron0x13d28e0()*-0.483886);
}

double NNfunction_sb_cLcL::synapse0x13e4440() {
   return (neuron0x13d2c20()*-0.147893);
}

double NNfunction_sb_cLcL::synapse0x13e4480() {
   return (neuron0x13d2f60()*-0.122279);
}

double NNfunction_sb_cLcL::synapse0x13e44c0() {
   return (neuron0x13d32a0()*0.131641);
}

double NNfunction_sb_cLcL::synapse0x13e4500() {
   return (neuron0x13d35e0()*-0.75434);
}

double NNfunction_sb_cLcL::synapse0x13e4540() {
   return (neuron0x13d3920()*-0.098699);
}

double NNfunction_sb_cLcL::synapse0x13e4580() {
   return (neuron0x13d3c60()*0.272939);
}

double NNfunction_sb_cLcL::synapse0x13e45c0() {
   return (neuron0x13d3fa0()*0.242242);
}

double NNfunction_sb_cLcL::synapse0x13e4600() {
   return (neuron0x13d42e0()*0.208818);
}

double NNfunction_sb_cLcL::synapse0x13e4640() {
   return (neuron0x13d4620()*-0.374228);
}

double NNfunction_sb_cLcL::synapse0x13e40d0() {
   return (neuron0x13d4960()*-0.40256);
}

double NNfunction_sb_cLcL::synapse0x13e4110() {
   return (neuron0x13d4ec0()*0.324512);
}

double NNfunction_sb_cLcL::synapse0x13e4790() {
   return (neuron0x13d50e0()*-0.42534);
}

double NNfunction_sb_cLcL::synapse0x13e47d0() {
   return (neuron0x13d5420()*-0.376483);
}

double NNfunction_sb_cLcL::synapse0x13e4810() {
   return (neuron0x13d5760()*0.256226);
}

double NNfunction_sb_cLcL::synapse0x13e4850() {
   return (neuron0x13d5aa0()*0.390428);
}

double NNfunction_sb_cLcL::synapse0x13e4890() {
   return (neuron0x13d5de0()*-0.131036);
}

double NNfunction_sb_cLcL::synapse0x13e48d0() {
   return (neuron0x13d6120()*0.131415);
}

double NNfunction_sb_cLcL::synapse0x13e4c50() {
   return (neuron0x13d1560()*0.00743285);
}

double NNfunction_sb_cLcL::synapse0x13e4c90() {
   return (neuron0x13d18a0()*0.0173345);
}

double NNfunction_sb_cLcL::synapse0x13e4cd0() {
   return (neuron0x13d1be0()*0.0194837);
}

double NNfunction_sb_cLcL::synapse0x13e4d10() {
   return (neuron0x13d1f20()*0.077089);
}

double NNfunction_sb_cLcL::synapse0x13e4d50() {
   return (neuron0x13d2260()*0.0274194);
}

double NNfunction_sb_cLcL::synapse0x13e4d90() {
   return (neuron0x13d25a0()*0.00289109);
}

double NNfunction_sb_cLcL::synapse0x13e4dd0() {
   return (neuron0x13d28e0()*0.0154567);
}

double NNfunction_sb_cLcL::synapse0x13e4e10() {
   return (neuron0x13d2c20()*0.00179181);
}

double NNfunction_sb_cLcL::synapse0x13e4e50() {
   return (neuron0x13d2f60()*-0.0219822);
}

double NNfunction_sb_cLcL::synapse0x13dd010() {
   return (neuron0x13d32a0()*0.00693436);
}

double NNfunction_sb_cLcL::synapse0x13dd050() {
   return (neuron0x13d35e0()*-0.00131948);
}

double NNfunction_sb_cLcL::synapse0x13dd090() {
   return (neuron0x13d3920()*0.0280155);
}

double NNfunction_sb_cLcL::synapse0x13dd0d0() {
   return (neuron0x13d3c60()*2.66943);
}

double NNfunction_sb_cLcL::synapse0x13dd110() {
   return (neuron0x13d3fa0()*0.0065525);
}

double NNfunction_sb_cLcL::synapse0x13dd150() {
   return (neuron0x13d42e0()*0.0311809);
}

double NNfunction_sb_cLcL::synapse0x13dd190() {
   return (neuron0x13d4620()*0.0128905);
}

double NNfunction_sb_cLcL::synapse0x13e4aa0() {
   return (neuron0x13d4960()*-0.00726346);
}

double NNfunction_sb_cLcL::synapse0x13e4ae0() {
   return (neuron0x13d4ec0()*0.00466202);
}

double NNfunction_sb_cLcL::synapse0x13dd2e0() {
   return (neuron0x13d50e0()*0.0125623);
}

double NNfunction_sb_cLcL::synapse0x13dd320() {
   return (neuron0x13d5420()*-0.00691748);
}

double NNfunction_sb_cLcL::synapse0x13dd360() {
   return (neuron0x13d5760()*0.000727059);
}

double NNfunction_sb_cLcL::synapse0x13dd3a0() {
   return (neuron0x13d5aa0()*-0.00210102);
}

double NNfunction_sb_cLcL::synapse0x13dd3e0() {
   return (neuron0x13d5de0()*0.00498335);
}

double NNfunction_sb_cLcL::synapse0x13dd420() {
   return (neuron0x13d6120()*0.00663255);
}

double NNfunction_sb_cLcL::synapse0x13dd7a0() {
   return (neuron0x13d1560()*-0.00869194);
}

double NNfunction_sb_cLcL::synapse0x13dd7e0() {
   return (neuron0x13d18a0()*0.025063);
}

double NNfunction_sb_cLcL::synapse0x13dd820() {
   return (neuron0x13d1be0()*0.160885);
}

double NNfunction_sb_cLcL::synapse0x13dd860() {
   return (neuron0x13d1f20()*0.153626);
}

double NNfunction_sb_cLcL::synapse0x13dd8a0() {
   return (neuron0x13d2260()*0.0241555);
}

double NNfunction_sb_cLcL::synapse0x13dd8e0() {
   return (neuron0x13d25a0()*-0.0067743);
}

double NNfunction_sb_cLcL::synapse0x13dd920() {
   return (neuron0x13d28e0()*0.00296822);
}

double NNfunction_sb_cLcL::synapse0x13dd960() {
   return (neuron0x13d2c20()*-0.00725301);
}

double NNfunction_sb_cLcL::synapse0x13dd9a0() {
   return (neuron0x13d2f60()*-0.00432997);
}

double NNfunction_sb_cLcL::synapse0x13dd9e0() {
   return (neuron0x13d32a0()*0.0174508);
}

double NNfunction_sb_cLcL::synapse0x13dda20() {
   return (neuron0x13d35e0()*0.00756418);
}

double NNfunction_sb_cLcL::synapse0x13dda60() {
   return (neuron0x13d3920()*-0.0583556);
}

double NNfunction_sb_cLcL::synapse0x13ddaa0() {
   return (neuron0x13d3c60()*-4.15855);
}

double NNfunction_sb_cLcL::synapse0x13ddae0() {
   return (neuron0x13d3fa0()*-0.0750772);
}

double NNfunction_sb_cLcL::synapse0x13ddb20() {
   return (neuron0x13d42e0()*-0.0409904);
}

double NNfunction_sb_cLcL::synapse0x13ddb60() {
   return (neuron0x13d4620()*-0.0265176);
}

double NNfunction_sb_cLcL::synapse0x13dd5f0() {
   return (neuron0x13d4960()*-0.0682672);
}

double NNfunction_sb_cLcL::synapse0x13dd630() {
   return (neuron0x13d4ec0()*-0.0326738);
}

double NNfunction_sb_cLcL::synapse0x13ddcb0() {
   return (neuron0x13d50e0()*-0.0731422);
}

double NNfunction_sb_cLcL::synapse0x13ddcf0() {
   return (neuron0x13d5420()*-0.0318919);
}

double NNfunction_sb_cLcL::synapse0x13ddd30() {
   return (neuron0x13d5760()*-0.0109332);
}

double NNfunction_sb_cLcL::synapse0x13ddd70() {
   return (neuron0x13d5aa0()*0.00379887);
}

double NNfunction_sb_cLcL::synapse0x13dddb0() {
   return (neuron0x13d5de0()*-0.00773258);
}

double NNfunction_sb_cLcL::synapse0x13dddf0() {
   return (neuron0x13d6120()*0.047486);
}

double NNfunction_sb_cLcL::synapse0x13ddfc0() {
   return (neuron0x13d1560()*0.0622408);
}

double NNfunction_sb_cLcL::synapse0x13e7050() {
   return (neuron0x13d18a0()*0.0759971);
}

double NNfunction_sb_cLcL::synapse0x13e7090() {
   return (neuron0x13d1be0()*0.705189);
}

double NNfunction_sb_cLcL::synapse0x13e70d0() {
   return (neuron0x13d1f20()*0.0151228);
}

double NNfunction_sb_cLcL::synapse0x13e7110() {
   return (neuron0x13d2260()*-0.213544);
}

double NNfunction_sb_cLcL::synapse0x13e7150() {
   return (neuron0x13d25a0()*0.0720422);
}

double NNfunction_sb_cLcL::synapse0x13e7190() {
   return (neuron0x13d28e0()*0.371616);
}

double NNfunction_sb_cLcL::synapse0x13e71d0() {
   return (neuron0x13d2c20()*0.17481);
}

double NNfunction_sb_cLcL::synapse0x13e7210() {
   return (neuron0x13d2f60()*-0.549157);
}

double NNfunction_sb_cLcL::synapse0x13e7250() {
   return (neuron0x13d32a0()*0.469601);
}

double NNfunction_sb_cLcL::synapse0x13e7290() {
   return (neuron0x13d35e0()*-0.257091);
}

double NNfunction_sb_cLcL::synapse0x13e72d0() {
   return (neuron0x13d3920()*-0.232918);
}

double NNfunction_sb_cLcL::synapse0x13e7310() {
   return (neuron0x13d3c60()*-0.504568);
}

double NNfunction_sb_cLcL::synapse0x13e7350() {
   return (neuron0x13d3fa0()*-0.576716);
}

double NNfunction_sb_cLcL::synapse0x13e7390() {
   return (neuron0x13d42e0()*0.051468);
}

double NNfunction_sb_cLcL::synapse0x13e73d0() {
   return (neuron0x13d4620()*-0.541317);
}

double NNfunction_sb_cLcL::synapse0x13e6ea0() {
   return (neuron0x13d4960()*-0.117025);
}

double NNfunction_sb_cLcL::synapse0x13e6ee0() {
   return (neuron0x13d4ec0()*-0.578139);
}

double NNfunction_sb_cLcL::synapse0x13e7520() {
   return (neuron0x13d50e0()*-0.109292);
}

double NNfunction_sb_cLcL::synapse0x13e7560() {
   return (neuron0x13d5420()*0.168935);
}

double NNfunction_sb_cLcL::synapse0x13e75a0() {
   return (neuron0x13d5760()*0.482694);
}

double NNfunction_sb_cLcL::synapse0x13e75e0() {
   return (neuron0x13d5aa0()*-0.00179975);
}

double NNfunction_sb_cLcL::synapse0x13e7620() {
   return (neuron0x13d5de0()*-0.367894);
}

double NNfunction_sb_cLcL::synapse0x13e7660() {
   return (neuron0x13d6120()*-0.227781);
}

double NNfunction_sb_cLcL::synapse0x13e79e0() {
   return (neuron0x13d1560()*-0.0261837);
}

double NNfunction_sb_cLcL::synapse0x13e7a20() {
   return (neuron0x13d18a0()*-0.140585);
}

double NNfunction_sb_cLcL::synapse0x13e7a60() {
   return (neuron0x13d1be0()*-0.0554921);
}

double NNfunction_sb_cLcL::synapse0x13e7aa0() {
   return (neuron0x13d1f20()*-0.0943221);
}

double NNfunction_sb_cLcL::synapse0x13e7ae0() {
   return (neuron0x13d2260()*0.118441);
}

double NNfunction_sb_cLcL::synapse0x13e7b20() {
   return (neuron0x13d25a0()*-0.0903025);
}

double NNfunction_sb_cLcL::synapse0x13e7b60() {
   return (neuron0x13d28e0()*0.154521);
}

double NNfunction_sb_cLcL::synapse0x13e7ba0() {
   return (neuron0x13d2c20()*0.0265462);
}

double NNfunction_sb_cLcL::synapse0x13e7be0() {
   return (neuron0x13d2f60()*0.0630373);
}

double NNfunction_sb_cLcL::synapse0x13e7c20() {
   return (neuron0x13d32a0()*0.153824);
}

double NNfunction_sb_cLcL::synapse0x13e7c60() {
   return (neuron0x13d35e0()*0.164782);
}

double NNfunction_sb_cLcL::synapse0x13e7ca0() {
   return (neuron0x13d3920()*0.512403);
}

double NNfunction_sb_cLcL::synapse0x13e7ce0() {
   return (neuron0x13d3c60()*-0.0042201);
}

double NNfunction_sb_cLcL::synapse0x13e7d20() {
   return (neuron0x13d3fa0()*-0.71362);
}

double NNfunction_sb_cLcL::synapse0x13e7d60() {
   return (neuron0x13d42e0()*0.399779);
}

double NNfunction_sb_cLcL::synapse0x13e7da0() {
   return (neuron0x13d4620()*-0.199741);
}

double NNfunction_sb_cLcL::synapse0x13e7830() {
   return (neuron0x13d4960()*-0.934642);
}

double NNfunction_sb_cLcL::synapse0x13e7870() {
   return (neuron0x13d4ec0()*0.224171);
}

double NNfunction_sb_cLcL::synapse0x13e7ef0() {
   return (neuron0x13d50e0()*0.291503);
}

double NNfunction_sb_cLcL::synapse0x13e7f30() {
   return (neuron0x13d5420()*0.0710943);
}

double NNfunction_sb_cLcL::synapse0x13e7f70() {
   return (neuron0x13d5760()*-0.0149024);
}

double NNfunction_sb_cLcL::synapse0x13e7fb0() {
   return (neuron0x13d5aa0()*0.151391);
}

double NNfunction_sb_cLcL::synapse0x13e7ff0() {
   return (neuron0x13d5de0()*0.0721727);
}

double NNfunction_sb_cLcL::synapse0x13e8030() {
   return (neuron0x13d6120()*0.105407);
}

double NNfunction_sb_cLcL::synapse0x13e83b0() {
   return (neuron0x13d1560()*0.0347646);
}

double NNfunction_sb_cLcL::synapse0x13e83f0() {
   return (neuron0x13d18a0()*-0.168099);
}

double NNfunction_sb_cLcL::synapse0x13e8430() {
   return (neuron0x13d1be0()*0.0232105);
}

double NNfunction_sb_cLcL::synapse0x13e8470() {
   return (neuron0x13d1f20()*-0.507776);
}

double NNfunction_sb_cLcL::synapse0x13e84b0() {
   return (neuron0x13d2260()*0.124946);
}

double NNfunction_sb_cLcL::synapse0x13e84f0() {
   return (neuron0x13d25a0()*0.086215);
}

double NNfunction_sb_cLcL::synapse0x13e8530() {
   return (neuron0x13d28e0()*-0.291501);
}

double NNfunction_sb_cLcL::synapse0x13e8570() {
   return (neuron0x13d2c20()*-0.263144);
}

double NNfunction_sb_cLcL::synapse0x13e85b0() {
   return (neuron0x13d2f60()*0.100921);
}

double NNfunction_sb_cLcL::synapse0x13e85f0() {
   return (neuron0x13d32a0()*-0.235681);
}

double NNfunction_sb_cLcL::synapse0x13e8630() {
   return (neuron0x13d35e0()*0.123718);
}

double NNfunction_sb_cLcL::synapse0x13e8670() {
   return (neuron0x13d3920()*-0.656523);
}

double NNfunction_sb_cLcL::synapse0x13e86b0() {
   return (neuron0x13d3c60()*-0.606535);
}

double NNfunction_sb_cLcL::synapse0x13e86f0() {
   return (neuron0x13d3fa0()*0.0134198);
}

double NNfunction_sb_cLcL::synapse0x13e8730() {
   return (neuron0x13d42e0()*-0.47378);
}

double NNfunction_sb_cLcL::synapse0x13e8770() {
   return (neuron0x13d4620()*-0.109099);
}

double NNfunction_sb_cLcL::synapse0x13e8200() {
   return (neuron0x13d4960()*0.0681602);
}

double NNfunction_sb_cLcL::synapse0x13e8240() {
   return (neuron0x13d4ec0()*-0.718535);
}

double NNfunction_sb_cLcL::synapse0x13e88c0() {
   return (neuron0x13d50e0()*-0.592917);
}

double NNfunction_sb_cLcL::synapse0x13e8900() {
   return (neuron0x13d5420()*0.0640065);
}

double NNfunction_sb_cLcL::synapse0x13e8940() {
   return (neuron0x13d5760()*0.022189);
}

double NNfunction_sb_cLcL::synapse0x13e8980() {
   return (neuron0x13d5aa0()*0.0947458);
}

double NNfunction_sb_cLcL::synapse0x13e89c0() {
   return (neuron0x13d5de0()*0.0527181);
}

double NNfunction_sb_cLcL::synapse0x13e8a00() {
   return (neuron0x13d6120()*0.0713131);
}

double NNfunction_sb_cLcL::synapse0x13e8d80() {
   return (neuron0x13d1560()*-0.032194);
}

double NNfunction_sb_cLcL::synapse0x13e8dc0() {
   return (neuron0x13d18a0()*0.000735131);
}

double NNfunction_sb_cLcL::synapse0x13e8e00() {
   return (neuron0x13d1be0()*-0.0101518);
}

double NNfunction_sb_cLcL::synapse0x13e8e40() {
   return (neuron0x13d1f20()*7.30075);
}

double NNfunction_sb_cLcL::synapse0x13e8e80() {
   return (neuron0x13d2260()*0.0118688);
}

double NNfunction_sb_cLcL::synapse0x13e8ec0() {
   return (neuron0x13d25a0()*-0.0010262);
}

double NNfunction_sb_cLcL::synapse0x13e8f00() {
   return (neuron0x13d28e0()*-0.0416733);
}

double NNfunction_sb_cLcL::synapse0x13e8f40() {
   return (neuron0x13d2c20()*-0.014296);
}

double NNfunction_sb_cLcL::synapse0x13e8f80() {
   return (neuron0x13d2f60()*0.0240549);
}

double NNfunction_sb_cLcL::synapse0x13e8fc0() {
   return (neuron0x13d32a0()*0.0175214);
}

double NNfunction_sb_cLcL::synapse0x13e9000() {
   return (neuron0x13d35e0()*0.00791657);
}

double NNfunction_sb_cLcL::synapse0x13e9040() {
   return (neuron0x13d3920()*0.0194782);
}

double NNfunction_sb_cLcL::synapse0x13e9080() {
   return (neuron0x13d3c60()*0.901258);
}

double NNfunction_sb_cLcL::synapse0x13e90c0() {
   return (neuron0x13d3fa0()*0.0868033);
}

double NNfunction_sb_cLcL::synapse0x13e9100() {
   return (neuron0x13d42e0()*-0.00449178);
}

double NNfunction_sb_cLcL::synapse0x13e9140() {
   return (neuron0x13d4620()*-0.0174125);
}

double NNfunction_sb_cLcL::synapse0x13e8bd0() {
   return (neuron0x13d4960()*0.0944675);
}

double NNfunction_sb_cLcL::synapse0x13e8c10() {
   return (neuron0x13d4ec0()*0.0254651);
}

double NNfunction_sb_cLcL::synapse0x13e9290() {
   return (neuron0x13d50e0()*-0.0242498);
}

double NNfunction_sb_cLcL::synapse0x13e92d0() {
   return (neuron0x13d5420()*0.0218307);
}

double NNfunction_sb_cLcL::synapse0x13e9310() {
   return (neuron0x13d5760()*-0.00360857);
}

double NNfunction_sb_cLcL::synapse0x13e9350() {
   return (neuron0x13d5aa0()*0.00176476);
}

double NNfunction_sb_cLcL::synapse0x13e9390() {
   return (neuron0x13d5de0()*0.00808424);
}

double NNfunction_sb_cLcL::synapse0x13e93d0() {
   return (neuron0x13d6120()*0.028921);
}

double NNfunction_sb_cLcL::synapse0x13e9750() {
   return (neuron0x13d1560()*0.271006);
}

double NNfunction_sb_cLcL::synapse0x13e9790() {
   return (neuron0x13d18a0()*-0.199467);
}

double NNfunction_sb_cLcL::synapse0x13e97d0() {
   return (neuron0x13d1be0()*0.362604);
}

double NNfunction_sb_cLcL::synapse0x13e9810() {
   return (neuron0x13d1f20()*0.533481);
}

double NNfunction_sb_cLcL::synapse0x13e9850() {
   return (neuron0x13d2260()*-0.218856);
}

double NNfunction_sb_cLcL::synapse0x13e9890() {
   return (neuron0x13d25a0()*-0.0567285);
}

double NNfunction_sb_cLcL::synapse0x13e98d0() {
   return (neuron0x13d28e0()*-0.137142);
}

double NNfunction_sb_cLcL::synapse0x13e9910() {
   return (neuron0x13d2c20()*-0.226682);
}

double NNfunction_sb_cLcL::synapse0x13e9950() {
   return (neuron0x13d2f60()*0.241648);
}

double NNfunction_sb_cLcL::synapse0x13e9990() {
   return (neuron0x13d32a0()*0.163371);
}

double NNfunction_sb_cLcL::synapse0x13e99d0() {
   return (neuron0x13d35e0()*-0.0242045);
}

double NNfunction_sb_cLcL::synapse0x13e9a10() {
   return (neuron0x13d3920()*0.0847576);
}

double NNfunction_sb_cLcL::synapse0x13e9a50() {
   return (neuron0x13d3c60()*0.986798);
}

double NNfunction_sb_cLcL::synapse0x13e9a90() {
   return (neuron0x13d3fa0()*0.187314);
}

double NNfunction_sb_cLcL::synapse0x13e9ad0() {
   return (neuron0x13d42e0()*-0.0369732);
}

double NNfunction_sb_cLcL::synapse0x13e9b10() {
   return (neuron0x13d4620()*-0.53127);
}

double NNfunction_sb_cLcL::synapse0x13e95a0() {
   return (neuron0x13d4960()*0.226973);
}

double NNfunction_sb_cLcL::synapse0x13e95e0() {
   return (neuron0x13d4ec0()*0.210751);
}

double NNfunction_sb_cLcL::synapse0x13e9c60() {
   return (neuron0x13d50e0()*0.180758);
}

double NNfunction_sb_cLcL::synapse0x13e9ca0() {
   return (neuron0x13d5420()*-0.00828255);
}

double NNfunction_sb_cLcL::synapse0x13e9ce0() {
   return (neuron0x13d5760()*0.245254);
}

double NNfunction_sb_cLcL::synapse0x13e9d20() {
   return (neuron0x13d5aa0()*0.234757);
}

double NNfunction_sb_cLcL::synapse0x13e9d60() {
   return (neuron0x13d5de0()*0.049656);
}

double NNfunction_sb_cLcL::synapse0x13e9da0() {
   return (neuron0x13d6120()*0.0140428);
}

double NNfunction_sb_cLcL::synapse0x13ea120() {
   return (neuron0x13d1560()*-0.0684889);
}

double NNfunction_sb_cLcL::synapse0x13ea160() {
   return (neuron0x13d18a0()*-0.0890121);
}

double NNfunction_sb_cLcL::synapse0x13ea1a0() {
   return (neuron0x13d1be0()*-0.0705355);
}

double NNfunction_sb_cLcL::synapse0x13ea1e0() {
   return (neuron0x13d1f20()*-0.647258);
}

double NNfunction_sb_cLcL::synapse0x13ea220() {
   return (neuron0x13d2260()*-0.100354);
}

double NNfunction_sb_cLcL::synapse0x13ea260() {
   return (neuron0x13d25a0()*-0.0438159);
}

double NNfunction_sb_cLcL::synapse0x13ea2a0() {
   return (neuron0x13d28e0()*0.0277724);
}

double NNfunction_sb_cLcL::synapse0x13ea2e0() {
   return (neuron0x13d2c20()*-0.259325);
}

double NNfunction_sb_cLcL::synapse0x13ea320() {
   return (neuron0x13d2f60()*0.0862219);
}

double NNfunction_sb_cLcL::synapse0x13ea360() {
   return (neuron0x13d32a0()*0.0711011);
}

double NNfunction_sb_cLcL::synapse0x13ea3a0() {
   return (neuron0x13d35e0()*0.124335);
}

double NNfunction_sb_cLcL::synapse0x13ea3e0() {
   return (neuron0x13d3920()*0.589499);
}

double NNfunction_sb_cLcL::synapse0x13ea420() {
   return (neuron0x13d3c60()*1.63488);
}

double NNfunction_sb_cLcL::synapse0x13ea460() {
   return (neuron0x13d3fa0()*0.196892);
}

double NNfunction_sb_cLcL::synapse0x13ea4a0() {
   return (neuron0x13d42e0()*0.609553);
}

double NNfunction_sb_cLcL::synapse0x13ea4e0() {
   return (neuron0x13d4620()*0.17708);
}

double NNfunction_sb_cLcL::synapse0x13e9f70() {
   return (neuron0x13d4960()*0.275925);
}

double NNfunction_sb_cLcL::synapse0x13e9fb0() {
   return (neuron0x13d4ec0()*0.299746);
}

double NNfunction_sb_cLcL::synapse0x13ea630() {
   return (neuron0x13d50e0()*0.177031);
}

double NNfunction_sb_cLcL::synapse0x13ea670() {
   return (neuron0x13d5420()*0.227247);
}

double NNfunction_sb_cLcL::synapse0x13ea6b0() {
   return (neuron0x13d5760()*0.0295409);
}

double NNfunction_sb_cLcL::synapse0x13ea6f0() {
   return (neuron0x13d5aa0()*0.024742);
}

double NNfunction_sb_cLcL::synapse0x13ea730() {
   return (neuron0x13d5de0()*-0.119133);
}

double NNfunction_sb_cLcL::synapse0x13ea770() {
   return (neuron0x13d6120()*-0.187811);
}

double NNfunction_sb_cLcL::synapse0x13eaaf0() {
   return (neuron0x13d1560()*0.0455356);
}

double NNfunction_sb_cLcL::synapse0x13eab30() {
   return (neuron0x13d18a0()*0.116821);
}

double NNfunction_sb_cLcL::synapse0x13eab70() {
   return (neuron0x13d1be0()*-0.185709);
}

double NNfunction_sb_cLcL::synapse0x13eabb0() {
   return (neuron0x13d1f20()*0.43625);
}

double NNfunction_sb_cLcL::synapse0x13eabf0() {
   return (neuron0x13d2260()*0.149844);
}

double NNfunction_sb_cLcL::synapse0x13eac30() {
   return (neuron0x13d25a0()*-0.259136);
}

double NNfunction_sb_cLcL::synapse0x13eac70() {
   return (neuron0x13d28e0()*-0.454283);
}

double NNfunction_sb_cLcL::synapse0x13eacb0() {
   return (neuron0x13d2c20()*0.691444);
}

double NNfunction_sb_cLcL::synapse0x13eacf0() {
   return (neuron0x13d2f60()*0.086621);
}

double NNfunction_sb_cLcL::synapse0x13ead30() {
   return (neuron0x13d32a0()*0.101167);
}

double NNfunction_sb_cLcL::synapse0x13ead70() {
   return (neuron0x13d35e0()*0.0995463);
}

double NNfunction_sb_cLcL::synapse0x13eadb0() {
   return (neuron0x13d3920()*-0.246673);
}

double NNfunction_sb_cLcL::synapse0x13eadf0() {
   return (neuron0x13d3c60()*-0.359818);
}

double NNfunction_sb_cLcL::synapse0x13eae30() {
   return (neuron0x13d3fa0()*0.223241);
}

double NNfunction_sb_cLcL::synapse0x13eae70() {
   return (neuron0x13d42e0()*-0.365329);
}

double NNfunction_sb_cLcL::synapse0x13eaeb0() {
   return (neuron0x13d4620()*-0.149342);
}

double NNfunction_sb_cLcL::synapse0x13ea940() {
   return (neuron0x13d4960()*0.243701);
}

double NNfunction_sb_cLcL::synapse0x13ea980() {
   return (neuron0x13d4ec0()*-0.10653);
}

double NNfunction_sb_cLcL::synapse0x13eb000() {
   return (neuron0x13d50e0()*-0.134755);
}

double NNfunction_sb_cLcL::synapse0x13eb040() {
   return (neuron0x13d5420()*-0.0219885);
}

double NNfunction_sb_cLcL::synapse0x13eb080() {
   return (neuron0x13d5760()*0.0537252);
}

double NNfunction_sb_cLcL::synapse0x13eb0c0() {
   return (neuron0x13d5aa0()*0.143093);
}

double NNfunction_sb_cLcL::synapse0x13eb100() {
   return (neuron0x13d5de0()*0.0830169);
}

double NNfunction_sb_cLcL::synapse0x13eb140() {
   return (neuron0x13d6120()*0.0192828);
}

double NNfunction_sb_cLcL::synapse0x13eb4c0() {
   return (neuron0x13d1560()*-0.00289468);
}

double NNfunction_sb_cLcL::synapse0x13eb500() {
   return (neuron0x13d18a0()*0.018267);
}

double NNfunction_sb_cLcL::synapse0x13eb540() {
   return (neuron0x13d1be0()*0.951852);
}

double NNfunction_sb_cLcL::synapse0x13eb580() {
   return (neuron0x13d1f20()*0.013741);
}

double NNfunction_sb_cLcL::synapse0x13eb5c0() {
   return (neuron0x13d2260()*0.0184358);
}

double NNfunction_sb_cLcL::synapse0x13eb600() {
   return (neuron0x13d25a0()*-0.013335);
}

double NNfunction_sb_cLcL::synapse0x13eb640() {
   return (neuron0x13d28e0()*0.0414535);
}

double NNfunction_sb_cLcL::synapse0x13eb680() {
   return (neuron0x13d2c20()*0.0515686);
}

double NNfunction_sb_cLcL::synapse0x13eb6c0() {
   return (neuron0x13d2f60()*-0.0416307);
}

double NNfunction_sb_cLcL::synapse0x13eb700() {
   return (neuron0x13d32a0()*-0.0158732);
}

double NNfunction_sb_cLcL::synapse0x13eb740() {
   return (neuron0x13d35e0()*-0.038713);
}

double NNfunction_sb_cLcL::synapse0x13eb780() {
   return (neuron0x13d3920()*0.0962705);
}

double NNfunction_sb_cLcL::synapse0x13eb7c0() {
   return (neuron0x13d3c60()*-0.0104182);
}

double NNfunction_sb_cLcL::synapse0x13eb800() {
   return (neuron0x13d3fa0()*0.000960872);
}

double NNfunction_sb_cLcL::synapse0x13eb840() {
   return (neuron0x13d42e0()*0.0959722);
}

double NNfunction_sb_cLcL::synapse0x13eb880() {
   return (neuron0x13d4620()*0.0454344);
}

double NNfunction_sb_cLcL::synapse0x13eb310() {
   return (neuron0x13d4960()*0.0283949);
}

double NNfunction_sb_cLcL::synapse0x13eb350() {
   return (neuron0x13d4ec0()*0.0396471);
}

double NNfunction_sb_cLcL::synapse0x13eb9d0() {
   return (neuron0x13d50e0()*0.0390041);
}

double NNfunction_sb_cLcL::synapse0x13eba10() {
   return (neuron0x13d5420()*-0.0124815);
}

double NNfunction_sb_cLcL::synapse0x13eba50() {
   return (neuron0x13d5760()*0.000375261);
}

double NNfunction_sb_cLcL::synapse0x13eba90() {
   return (neuron0x13d5aa0()*-0.00496642);
}

double NNfunction_sb_cLcL::synapse0x13ebad0() {
   return (neuron0x13d5de0()*0.00194059);
}

double NNfunction_sb_cLcL::synapse0x13ebb10() {
   return (neuron0x13d6120()*-0.00288788);
}

double NNfunction_sb_cLcL::synapse0x13ebe90() {
   return (neuron0x13d1560()*-0.0345193);
}

double NNfunction_sb_cLcL::synapse0x13e0460() {
   return (neuron0x13d18a0()*-0.0106064);
}

double NNfunction_sb_cLcL::synapse0x13e04a0() {
   return (neuron0x13d1be0()*0.157609);
}

double NNfunction_sb_cLcL::synapse0x13e04e0() {
   return (neuron0x13d1f20()*-0.631756);
}

double NNfunction_sb_cLcL::synapse0x13e0730() {
   return (neuron0x13d2260()*-0.0295663);
}

double NNfunction_sb_cLcL::synapse0x13e0770() {
   return (neuron0x13d25a0()*0.0634894);
}

double NNfunction_sb_cLcL::synapse0x13e07b0() {
   return (neuron0x13d28e0()*0.0333109);
}

double NNfunction_sb_cLcL::synapse0x13e0a00() {
   return (neuron0x13d2c20()*0.00847473);
}

double NNfunction_sb_cLcL::synapse0x13e0a40() {
   return (neuron0x13d2f60()*0.00728446);
}

double NNfunction_sb_cLcL::synapse0x13e0c90() {
   return (neuron0x13d32a0()*0.0244123);
}

double NNfunction_sb_cLcL::synapse0x13e0cd0() {
   return (neuron0x13d35e0()*0.0128744);
}

double NNfunction_sb_cLcL::synapse0x13e0d10() {
   return (neuron0x13d3920()*-0.195458);
}

double NNfunction_sb_cLcL::synapse0x13e0f60() {
   return (neuron0x13d3c60()*-4.19958);
}

double NNfunction_sb_cLcL::synapse0x13e0fa0() {
   return (neuron0x13d3fa0()*0.00704874);
}

double NNfunction_sb_cLcL::synapse0x13e11f0() {
   return (neuron0x13d42e0()*-0.0135869);
}

double NNfunction_sb_cLcL::synapse0x13e1230() {
   return (neuron0x13d4620()*-0.00216573);
}

double NNfunction_sb_cLcL::synapse0x13ebce0() {
   return (neuron0x13d4960()*-0.0387508);
}

double NNfunction_sb_cLcL::synapse0x13ebd20() {
   return (neuron0x13d4ec0()*-0.10609);
}

double NNfunction_sb_cLcL::synapse0x13e1380() {
   return (neuron0x13d50e0()*-0.108097);
}

double NNfunction_sb_cLcL::synapse0x13e1890() {
   return (neuron0x13d5420()*-0.0206288);
}

double NNfunction_sb_cLcL::synapse0x13e18d0() {
   return (neuron0x13d5760()*-0.0194677);
}

double NNfunction_sb_cLcL::synapse0x13e1910() {
   return (neuron0x13d5aa0()*-0.00480025);
}

double NNfunction_sb_cLcL::synapse0x13e1b60() {
   return (neuron0x13d5de0()*0.0290639);
}

double NNfunction_sb_cLcL::synapse0x13e1ba0() {
   return (neuron0x13d6120()*-0.0505695);
}

double NNfunction_sb_cLcL::synapse0x13e1450() {
   return (neuron0x13d1560()*-0.0171072);
}

double NNfunction_sb_cLcL::synapse0x13e1490() {
   return (neuron0x13d18a0()*-0.0272373);
}

double NNfunction_sb_cLcL::synapse0x13e14d0() {
   return (neuron0x13d1be0()*0.124032);
}

double NNfunction_sb_cLcL::synapse0x13e1510() {
   return (neuron0x13d1f20()*-0.0811745);
}

double NNfunction_sb_cLcL::synapse0x13e1e90() {
   return (neuron0x13d2260()*0.0888887);
}

double NNfunction_sb_cLcL::synapse0x13ee1e0() {
   return (neuron0x13d25a0()*-0.0832534);
}

double NNfunction_sb_cLcL::synapse0x13ee220() {
   return (neuron0x13d28e0()*-0.0442135);
}

double NNfunction_sb_cLcL::synapse0x13ee260() {
   return (neuron0x13d2c20()*-0.0499297);
}

double NNfunction_sb_cLcL::synapse0x13ee2a0() {
   return (neuron0x13d2f60()*0.399634);
}

double NNfunction_sb_cLcL::synapse0x13ee2e0() {
   return (neuron0x13d32a0()*0.199571);
}

double NNfunction_sb_cLcL::synapse0x13ee320() {
   return (neuron0x13d35e0()*-0.750333);
}

double NNfunction_sb_cLcL::synapse0x13ee360() {
   return (neuron0x13d3920()*-0.0383521);
}

double NNfunction_sb_cLcL::synapse0x13ee3a0() {
   return (neuron0x13d3c60()*0.970253);
}

double NNfunction_sb_cLcL::synapse0x13ee3e0() {
   return (neuron0x13d3fa0()*-0.169768);
}

double NNfunction_sb_cLcL::synapse0x13ee420() {
   return (neuron0x13d42e0()*-0.116273);
}

double NNfunction_sb_cLcL::synapse0x13ee460() {
   return (neuron0x13d4620()*0.0652651);
}

double NNfunction_sb_cLcL::synapse0x13e1d70() {
   return (neuron0x13d4960()*0.0444642);
}

double NNfunction_sb_cLcL::synapse0x13e1db0() {
   return (neuron0x13d4ec0()*-0.111278);
}

double NNfunction_sb_cLcL::synapse0x13ee5b0() {
   return (neuron0x13d50e0()*0.0109423);
}

double NNfunction_sb_cLcL::synapse0x13ee5f0() {
   return (neuron0x13d5420()*0.082417);
}

double NNfunction_sb_cLcL::synapse0x13ee630() {
   return (neuron0x13d5760()*-0.0564225);
}

double NNfunction_sb_cLcL::synapse0x13ee670() {
   return (neuron0x13d5aa0()*-0.0017243);
}

double NNfunction_sb_cLcL::synapse0x13ee6b0() {
   return (neuron0x13d5de0()*0.0614216);
}

double NNfunction_sb_cLcL::synapse0x13ee6f0() {
   return (neuron0x13d6120()*-0.106805);
}

double NNfunction_sb_cLcL::synapse0x13eea70() {
   return (neuron0x13d1560()*-0.0115133);
}

double NNfunction_sb_cLcL::synapse0x13eeab0() {
   return (neuron0x13d18a0()*0.0149434);
}

double NNfunction_sb_cLcL::synapse0x13eeaf0() {
   return (neuron0x13d1be0()*-0.00313234);
}

double NNfunction_sb_cLcL::synapse0x13eeb30() {
   return (neuron0x13d1f20()*-3.28049);
}

double NNfunction_sb_cLcL::synapse0x13eeb70() {
   return (neuron0x13d2260()*0.00106545);
}

double NNfunction_sb_cLcL::synapse0x13eebb0() {
   return (neuron0x13d25a0()*0.00950338);
}

double NNfunction_sb_cLcL::synapse0x13eebf0() {
   return (neuron0x13d28e0()*-0.0162943);
}

double NNfunction_sb_cLcL::synapse0x13eec30() {
   return (neuron0x13d2c20()*0.000925156);
}

double NNfunction_sb_cLcL::synapse0x13eec70() {
   return (neuron0x13d2f60()*0.00597223);
}

double NNfunction_sb_cLcL::synapse0x13eecb0() {
   return (neuron0x13d32a0()*0.00166441);
}

double NNfunction_sb_cLcL::synapse0x13eecf0() {
   return (neuron0x13d35e0()*0.0034773);
}

double NNfunction_sb_cLcL::synapse0x13eed30() {
   return (neuron0x13d3920()*0.0297614);
}

double NNfunction_sb_cLcL::synapse0x13eed70() {
   return (neuron0x13d3c60()*-0.172914);
}

double NNfunction_sb_cLcL::synapse0x13eedb0() {
   return (neuron0x13d3fa0()*-0.035428);
}

double NNfunction_sb_cLcL::synapse0x13eedf0() {
   return (neuron0x13d42e0()*0.00366539);
}

double NNfunction_sb_cLcL::synapse0x13eee30() {
   return (neuron0x13d4620()*0.022007);
}

double NNfunction_sb_cLcL::synapse0x13ee8c0() {
   return (neuron0x13d4960()*-0.0154468);
}

double NNfunction_sb_cLcL::synapse0x13ee900() {
   return (neuron0x13d4ec0()*0.010641);
}

double NNfunction_sb_cLcL::synapse0x13eef80() {
   return (neuron0x13d50e0()*0.0107435);
}

double NNfunction_sb_cLcL::synapse0x13eefc0() {
   return (neuron0x13d5420()*0.000988126);
}

double NNfunction_sb_cLcL::synapse0x13ef000() {
   return (neuron0x13d5760()*0.00348825);
}

double NNfunction_sb_cLcL::synapse0x13ef040() {
   return (neuron0x13d5aa0()*-0.00948892);
}

double NNfunction_sb_cLcL::synapse0x13ef080() {
   return (neuron0x13d5de0()*0.0112294);
}

double NNfunction_sb_cLcL::synapse0x13ef0c0() {
   return (neuron0x13d6120()*0.00118953);
}

double NNfunction_sb_cLcL::synapse0x13ef440() {
   return (neuron0x13d1560()*-0.0208758);
}

double NNfunction_sb_cLcL::synapse0x13ef480() {
   return (neuron0x13d18a0()*0.0806949);
}

double NNfunction_sb_cLcL::synapse0x13ef4c0() {
   return (neuron0x13d1be0()*-0.0190059);
}

double NNfunction_sb_cLcL::synapse0x13ef500() {
   return (neuron0x13d1f20()*-0.50276);
}

double NNfunction_sb_cLcL::synapse0x13ef540() {
   return (neuron0x13d2260()*0.0589406);
}

double NNfunction_sb_cLcL::synapse0x13ef580() {
   return (neuron0x13d25a0()*0.018448);
}

double NNfunction_sb_cLcL::synapse0x13ef5c0() {
   return (neuron0x13d28e0()*0.0587396);
}

double NNfunction_sb_cLcL::synapse0x13ef600() {
   return (neuron0x13d2c20()*-0.0912759);
}

double NNfunction_sb_cLcL::synapse0x13ef640() {
   return (neuron0x13d2f60()*0.0227194);
}

double NNfunction_sb_cLcL::synapse0x13ef680() {
   return (neuron0x13d32a0()*0.0308345);
}

double NNfunction_sb_cLcL::synapse0x13ef6c0() {
   return (neuron0x13d35e0()*0.0601047);
}

double NNfunction_sb_cLcL::synapse0x13ef700() {
   return (neuron0x13d3920()*-0.0971816);
}

double NNfunction_sb_cLcL::synapse0x13ef740() {
   return (neuron0x13d3c60()*-0.548003);
}

double NNfunction_sb_cLcL::synapse0x13ef780() {
   return (neuron0x13d3fa0()*0.0630457);
}

double NNfunction_sb_cLcL::synapse0x13ef7c0() {
   return (neuron0x13d42e0()*0.0441628);
}

double NNfunction_sb_cLcL::synapse0x13ef800() {
   return (neuron0x13d4620()*-0.0144125);
}

double NNfunction_sb_cLcL::synapse0x13ef290() {
   return (neuron0x13d4960()*0.132934);
}

double NNfunction_sb_cLcL::synapse0x13ef2d0() {
   return (neuron0x13d4ec0()*-0.0330988);
}

double NNfunction_sb_cLcL::synapse0x13ef950() {
   return (neuron0x13d50e0()*-0.0679848);
}

double NNfunction_sb_cLcL::synapse0x13ef990() {
   return (neuron0x13d5420()*-0.0477834);
}

double NNfunction_sb_cLcL::synapse0x13ef9d0() {
   return (neuron0x13d5760()*-0.0335793);
}

double NNfunction_sb_cLcL::synapse0x13efa10() {
   return (neuron0x13d5aa0()*-0.0118898);
}

double NNfunction_sb_cLcL::synapse0x13efa50() {
   return (neuron0x13d5de0()*0.0126682);
}

double NNfunction_sb_cLcL::synapse0x13efa90() {
   return (neuron0x13d6120()*-0.000184483);
}

double NNfunction_sb_cLcL::synapse0x13efe10() {
   return (neuron0x13d1560()*0.0285916);
}

double NNfunction_sb_cLcL::synapse0x13efe50() {
   return (neuron0x13d18a0()*0.0613202);
}

double NNfunction_sb_cLcL::synapse0x13efe90() {
   return (neuron0x13d1be0()*-0.599378);
}

double NNfunction_sb_cLcL::synapse0x13efed0() {
   return (neuron0x13d1f20()*-0.745594);
}

double NNfunction_sb_cLcL::synapse0x13eff10() {
   return (neuron0x13d2260()*-0.337822);
}

double NNfunction_sb_cLcL::synapse0x13eff50() {
   return (neuron0x13d25a0()*0.197769);
}

double NNfunction_sb_cLcL::synapse0x13eff90() {
   return (neuron0x13d28e0()*-0.0852904);
}

double NNfunction_sb_cLcL::synapse0x13effd0() {
   return (neuron0x13d2c20()*0.0966772);
}

double NNfunction_sb_cLcL::synapse0x13f0010() {
   return (neuron0x13d2f60()*-0.0579178);
}

double NNfunction_sb_cLcL::synapse0x13f0050() {
   return (neuron0x13d32a0()*-0.0265373);
}

double NNfunction_sb_cLcL::synapse0x13f0090() {
   return (neuron0x13d35e0()*0.0426353);
}

double NNfunction_sb_cLcL::synapse0x13f00d0() {
   return (neuron0x13d3920()*-0.0178872);
}

double NNfunction_sb_cLcL::synapse0x13f0110() {
   return (neuron0x13d3c60()*-0.126228);
}

double NNfunction_sb_cLcL::synapse0x13f0150() {
   return (neuron0x13d3fa0()*0.14314);
}

double NNfunction_sb_cLcL::synapse0x13f0190() {
   return (neuron0x13d42e0()*0.611825);
}

double NNfunction_sb_cLcL::synapse0x13f01d0() {
   return (neuron0x13d4620()*-0.617505);
}

double NNfunction_sb_cLcL::synapse0x13efc60() {
   return (neuron0x13d4960()*0.0914685);
}

double NNfunction_sb_cLcL::synapse0x13efca0() {
   return (neuron0x13d4ec0()*-0.0069416);
}

double NNfunction_sb_cLcL::synapse0x13f0320() {
   return (neuron0x13d50e0()*0.026595);
}

double NNfunction_sb_cLcL::synapse0x13f0360() {
   return (neuron0x13d5420()*-0.07056);
}

double NNfunction_sb_cLcL::synapse0x13f03a0() {
   return (neuron0x13d5760()*0.0979009);
}

double NNfunction_sb_cLcL::synapse0x13f03e0() {
   return (neuron0x13d5aa0()*0.0140697);
}

double NNfunction_sb_cLcL::synapse0x13f0420() {
   return (neuron0x13d5de0()*0.0246322);
}

double NNfunction_sb_cLcL::synapse0x13f0460() {
   return (neuron0x13d6120()*0.00302636);
}

double NNfunction_sb_cLcL::synapse0x13f07e0() {
   return (neuron0x13d1560()*0.0240383);
}

double NNfunction_sb_cLcL::synapse0x13f0820() {
   return (neuron0x13d18a0()*0.0448096);
}

double NNfunction_sb_cLcL::synapse0x13f0860() {
   return (neuron0x13d1be0()*-0.0213951);
}

double NNfunction_sb_cLcL::synapse0x13f08a0() {
   return (neuron0x13d1f20()*-0.426251);
}

double NNfunction_sb_cLcL::synapse0x13f08e0() {
   return (neuron0x13d2260()*-0.024948);
}

double NNfunction_sb_cLcL::synapse0x13f0920() {
   return (neuron0x13d25a0()*0.0853468);
}

double NNfunction_sb_cLcL::synapse0x13f0960() {
   return (neuron0x13d28e0()*-0.0312086);
}

double NNfunction_sb_cLcL::synapse0x13f09a0() {
   return (neuron0x13d2c20()*0.00987285);
}

double NNfunction_sb_cLcL::synapse0x13f09e0() {
   return (neuron0x13d2f60()*-0.00601265);
}

double NNfunction_sb_cLcL::synapse0x13f0a20() {
   return (neuron0x13d32a0()*-0.00206888);
}

double NNfunction_sb_cLcL::synapse0x13f0a60() {
   return (neuron0x13d35e0()*-0.00243904);
}

double NNfunction_sb_cLcL::synapse0x13f0aa0() {
   return (neuron0x13d3920()*0.528254);
}

double NNfunction_sb_cLcL::synapse0x13f0ae0() {
   return (neuron0x13d3c60()*-0.0948612);
}

double NNfunction_sb_cLcL::synapse0x13f0b20() {
   return (neuron0x13d3fa0()*-0.110662);
}

double NNfunction_sb_cLcL::synapse0x13f0b60() {
   return (neuron0x13d42e0()*0.00896592);
}

double NNfunction_sb_cLcL::synapse0x13f0ba0() {
   return (neuron0x13d4620()*0.0761383);
}

double NNfunction_sb_cLcL::synapse0x13f0630() {
   return (neuron0x13d4960()*-0.159009);
}

double NNfunction_sb_cLcL::synapse0x13f0670() {
   return (neuron0x13d4ec0()*0.223471);
}

double NNfunction_sb_cLcL::synapse0x13f0cf0() {
   return (neuron0x13d50e0()*0.195104);
}

double NNfunction_sb_cLcL::synapse0x13f0d30() {
   return (neuron0x13d5420()*0.0170825);
}

double NNfunction_sb_cLcL::synapse0x13f0d70() {
   return (neuron0x13d5760()*0.0200849);
}

double NNfunction_sb_cLcL::synapse0x13f0db0() {
   return (neuron0x13d5aa0()*-0.0236745);
}

double NNfunction_sb_cLcL::synapse0x13f0df0() {
   return (neuron0x13d5de0()*0.0372455);
}

double NNfunction_sb_cLcL::synapse0x13f0e30() {
   return (neuron0x13d6120()*0.0225204);
}

double NNfunction_sb_cLcL::synapse0x13f11b0() {
   return (neuron0x13d1560()*0.00357866);
}

double NNfunction_sb_cLcL::synapse0x13f11f0() {
   return (neuron0x13d18a0()*0.00125027);
}

double NNfunction_sb_cLcL::synapse0x13f1230() {
   return (neuron0x13d1be0()*-0.070738);
}

double NNfunction_sb_cLcL::synapse0x13f1270() {
   return (neuron0x13d1f20()*0.180649);
}

double NNfunction_sb_cLcL::synapse0x13f12b0() {
   return (neuron0x13d2260()*0.0636631);
}

double NNfunction_sb_cLcL::synapse0x13f12f0() {
   return (neuron0x13d25a0()*0.0212435);
}

double NNfunction_sb_cLcL::synapse0x13f1330() {
   return (neuron0x13d28e0()*-0.00452386);
}

double NNfunction_sb_cLcL::synapse0x13f1370() {
   return (neuron0x13d2c20()*-0.0130655);
}

double NNfunction_sb_cLcL::synapse0x13f13b0() {
   return (neuron0x13d2f60()*0.00810223);
}

double NNfunction_sb_cLcL::synapse0x13f13f0() {
   return (neuron0x13d32a0()*-0.0384063);
}

double NNfunction_sb_cLcL::synapse0x13f1430() {
   return (neuron0x13d35e0()*0.00458845);
}

double NNfunction_sb_cLcL::synapse0x13f1470() {
   return (neuron0x13d3920()*0.400472);
}

double NNfunction_sb_cLcL::synapse0x13f14b0() {
   return (neuron0x13d3c60()*-0.0683706);
}

double NNfunction_sb_cLcL::synapse0x13f14f0() {
   return (neuron0x13d3fa0()*-0.0506732);
}

double NNfunction_sb_cLcL::synapse0x13f1530() {
   return (neuron0x13d42e0()*0.236779);
}

double NNfunction_sb_cLcL::synapse0x13f1570() {
   return (neuron0x13d4620()*0.264666);
}

double NNfunction_sb_cLcL::synapse0x13f1000() {
   return (neuron0x13d4960()*-0.0259553);
}

double NNfunction_sb_cLcL::synapse0x13f1040() {
   return (neuron0x13d4ec0()*0.186592);
}

double NNfunction_sb_cLcL::synapse0x13f16c0() {
   return (neuron0x13d50e0()*0.182093);
}

double NNfunction_sb_cLcL::synapse0x13f1700() {
   return (neuron0x13d5420()*-0.0275955);
}

double NNfunction_sb_cLcL::synapse0x13f1740() {
   return (neuron0x13d5760()*0.00202503);
}

double NNfunction_sb_cLcL::synapse0x13f1780() {
   return (neuron0x13d5aa0()*0.00970921);
}

double NNfunction_sb_cLcL::synapse0x13f17c0() {
   return (neuron0x13d5de0()*0.00199601);
}

double NNfunction_sb_cLcL::synapse0x13f1800() {
   return (neuron0x13d6120()*-0.00439051);
}

double NNfunction_sb_cLcL::synapse0x13f1b80() {
   return (neuron0x13d1560()*-0.0375735);
}

double NNfunction_sb_cLcL::synapse0x13f1bc0() {
   return (neuron0x13d18a0()*-0.229316);
}

double NNfunction_sb_cLcL::synapse0x13f1c00() {
   return (neuron0x13d1be0()*-0.942757);
}

double NNfunction_sb_cLcL::synapse0x13f1c40() {
   return (neuron0x13d1f20()*-0.934784);
}

double NNfunction_sb_cLcL::synapse0x13f1c80() {
   return (neuron0x13d2260()*-0.202992);
}

double NNfunction_sb_cLcL::synapse0x13f1cc0() {
   return (neuron0x13d25a0()*-0.417642);
}

double NNfunction_sb_cLcL::synapse0x13f1d00() {
   return (neuron0x13d28e0()*0.187911);
}

double NNfunction_sb_cLcL::synapse0x13f1d40() {
   return (neuron0x13d2c20()*0.0361755);
}

double NNfunction_sb_cLcL::synapse0x13f1d80() {
   return (neuron0x13d2f60()*-0.0981851);
}

double NNfunction_sb_cLcL::synapse0x13f1dc0() {
   return (neuron0x13d32a0()*-0.00534548);
}

double NNfunction_sb_cLcL::synapse0x13f1e00() {
   return (neuron0x13d35e0()*0.0749616);
}

double NNfunction_sb_cLcL::synapse0x13f1e40() {
   return (neuron0x13d3920()*0.188001);
}

double NNfunction_sb_cLcL::synapse0x13f1e80() {
   return (neuron0x13d3c60()*-0.646783);
}

double NNfunction_sb_cLcL::synapse0x13f1ec0() {
   return (neuron0x13d3fa0()*-0.0150117);
}

double NNfunction_sb_cLcL::synapse0x13f1f00() {
   return (neuron0x13d42e0()*-0.145536);
}

double NNfunction_sb_cLcL::synapse0x13f1f40() {
   return (neuron0x13d4620()*0.0428258);
}

double NNfunction_sb_cLcL::synapse0x13f19d0() {
   return (neuron0x13d4960()*-0.017222);
}

double NNfunction_sb_cLcL::synapse0x13f1a10() {
   return (neuron0x13d4ec0()*0.0626644);
}

double NNfunction_sb_cLcL::synapse0x13f2090() {
   return (neuron0x13d50e0()*0.0403778);
}

double NNfunction_sb_cLcL::synapse0x13f20d0() {
   return (neuron0x13d5420()*-0.077792);
}

double NNfunction_sb_cLcL::synapse0x13f2110() {
   return (neuron0x13d5760()*0.0160109);
}

double NNfunction_sb_cLcL::synapse0x13f2150() {
   return (neuron0x13d5aa0()*-0.0286481);
}

double NNfunction_sb_cLcL::synapse0x13f2190() {
   return (neuron0x13d5de0()*0.00199381);
}

double NNfunction_sb_cLcL::synapse0x13f21d0() {
   return (neuron0x13d6120()*0.0186445);
}

double NNfunction_sb_cLcL::synapse0x13f2550() {
   return (neuron0x13d1560()*0.00422716);
}

double NNfunction_sb_cLcL::synapse0x13f2590() {
   return (neuron0x13d18a0()*0.0120046);
}

double NNfunction_sb_cLcL::synapse0x13f25d0() {
   return (neuron0x13d1be0()*-0.0124324);
}

double NNfunction_sb_cLcL::synapse0x13f2610() {
   return (neuron0x13d1f20()*2.97757);
}

double NNfunction_sb_cLcL::synapse0x13f2650() {
   return (neuron0x13d2260()*0.0208603);
}

double NNfunction_sb_cLcL::synapse0x13f2690() {
   return (neuron0x13d25a0()*0.00143476);
}

double NNfunction_sb_cLcL::synapse0x13f26d0() {
   return (neuron0x13d28e0()*0.0018602);
}

double NNfunction_sb_cLcL::synapse0x13f2710() {
   return (neuron0x13d2c20()*0.00631328);
}

double NNfunction_sb_cLcL::synapse0x13f2750() {
   return (neuron0x13d2f60()*-0.00614838);
}

double NNfunction_sb_cLcL::synapse0x13f2790() {
   return (neuron0x13d32a0()*0.00492147);
}

double NNfunction_sb_cLcL::synapse0x13f27d0() {
   return (neuron0x13d35e0()*-0.00392494);
}

double NNfunction_sb_cLcL::synapse0x13f2810() {
   return (neuron0x13d3920()*0.0551602);
}

double NNfunction_sb_cLcL::synapse0x13f2850() {
   return (neuron0x13d3c60()*-0.243958);
}

double NNfunction_sb_cLcL::synapse0x13f2890() {
   return (neuron0x13d3fa0()*-0.053794);
}

double NNfunction_sb_cLcL::synapse0x13f28d0() {
   return (neuron0x13d42e0()*0.0281939);
}

double NNfunction_sb_cLcL::synapse0x13f2910() {
   return (neuron0x13d4620()*0.0280779);
}

double NNfunction_sb_cLcL::synapse0x13f23a0() {
   return (neuron0x13d4960()*-0.0277344);
}

double NNfunction_sb_cLcL::synapse0x13f23e0() {
   return (neuron0x13d4ec0()*-0.0039039);
}

double NNfunction_sb_cLcL::synapse0x13f2a60() {
   return (neuron0x13d50e0()*0.0191179);
}

double NNfunction_sb_cLcL::synapse0x13f2aa0() {
   return (neuron0x13d5420()*0.0177711);
}

double NNfunction_sb_cLcL::synapse0x13f2ae0() {
   return (neuron0x13d5760()*0.00653421);
}

double NNfunction_sb_cLcL::synapse0x13f2b20() {
   return (neuron0x13d5aa0()*0.00133862);
}

double NNfunction_sb_cLcL::synapse0x13f2b60() {
   return (neuron0x13d5de0()*0.0159282);
}

double NNfunction_sb_cLcL::synapse0x13f2ba0() {
   return (neuron0x13d6120()*0.0163005);
}

double NNfunction_sb_cLcL::synapse0x13db650() {
   return (neuron0x13d1560()*0.123687);
}

double NNfunction_sb_cLcL::synapse0x13db690() {
   return (neuron0x13d18a0()*-0.119337);
}

double NNfunction_sb_cLcL::synapse0x13db6d0() {
   return (neuron0x13d1be0()*0.680796);
}

double NNfunction_sb_cLcL::synapse0x13db710() {
   return (neuron0x13d1f20()*-0.123881);
}

double NNfunction_sb_cLcL::synapse0x13db750() {
   return (neuron0x13d2260()*0.559222);
}

double NNfunction_sb_cLcL::synapse0x13db790() {
   return (neuron0x13d25a0()*-0.223381);
}

double NNfunction_sb_cLcL::synapse0x13db7d0() {
   return (neuron0x13d28e0()*0.145731);
}

double NNfunction_sb_cLcL::synapse0x13db810() {
   return (neuron0x13d2c20()*-0.533041);
}

double NNfunction_sb_cLcL::synapse0x13f3330() {
   return (neuron0x13d2f60()*0.294438);
}

double NNfunction_sb_cLcL::synapse0x13f3370() {
   return (neuron0x13d32a0()*-0.292663);
}

double NNfunction_sb_cLcL::synapse0x13f33b0() {
   return (neuron0x13d35e0()*-0.0387243);
}

double NNfunction_sb_cLcL::synapse0x13f33f0() {
   return (neuron0x13d3920()*-0.221634);
}

double NNfunction_sb_cLcL::synapse0x13f3430() {
   return (neuron0x13d3c60()*-0.262593);
}

double NNfunction_sb_cLcL::synapse0x13f3470() {
   return (neuron0x13d3fa0()*0.173194);
}

double NNfunction_sb_cLcL::synapse0x13f34b0() {
   return (neuron0x13d42e0()*0.245841);
}

double NNfunction_sb_cLcL::synapse0x13f34f0() {
   return (neuron0x13d4620()*0.173606);
}

double NNfunction_sb_cLcL::synapse0x13f2d70() {
   return (neuron0x13d4960()*-0.806866);
}

double NNfunction_sb_cLcL::synapse0x13f2db0() {
   return (neuron0x13d4ec0()*-0.269173);
}

double NNfunction_sb_cLcL::synapse0x13f3640() {
   return (neuron0x13d50e0()*0.274584);
}

double NNfunction_sb_cLcL::synapse0x13f3680() {
   return (neuron0x13d5420()*0.033719);
}

double NNfunction_sb_cLcL::synapse0x13f36c0() {
   return (neuron0x13d5760()*-0.507123);
}

double NNfunction_sb_cLcL::synapse0x13f3700() {
   return (neuron0x13d5aa0()*-0.0982051);
}

double NNfunction_sb_cLcL::synapse0x13f3740() {
   return (neuron0x13d5de0()*0.0785584);
}

double NNfunction_sb_cLcL::synapse0x13f3780() {
   return (neuron0x13d6120()*0.270359);
}

double NNfunction_sb_cLcL::synapse0x13f3b00() {
   return (neuron0x13d1560()*0.00592655);
}

double NNfunction_sb_cLcL::synapse0x13f3b40() {
   return (neuron0x13d18a0()*0.0168456);
}

double NNfunction_sb_cLcL::synapse0x13f3b80() {
   return (neuron0x13d1be0()*-0.0035625);
}

double NNfunction_sb_cLcL::synapse0x13f3bc0() {
   return (neuron0x13d1f20()*0.00236392);
}

double NNfunction_sb_cLcL::synapse0x13f3c00() {
   return (neuron0x13d2260()*-0.0248052);
}

double NNfunction_sb_cLcL::synapse0x13f3c40() {
   return (neuron0x13d25a0()*0.021249);
}

double NNfunction_sb_cLcL::synapse0x13f3c80() {
   return (neuron0x13d28e0()*-0.0115452);
}

double NNfunction_sb_cLcL::synapse0x13f3cc0() {
   return (neuron0x13d2c20()*0.0205818);
}

double NNfunction_sb_cLcL::synapse0x13f3d00() {
   return (neuron0x13d2f60()*-0.077617);
}

double NNfunction_sb_cLcL::synapse0x13f3d40() {
   return (neuron0x13d32a0()*0.142459);
}

double NNfunction_sb_cLcL::synapse0x13f3d80() {
   return (neuron0x13d35e0()*-0.0883129);
}

double NNfunction_sb_cLcL::synapse0x13f3dc0() {
   return (neuron0x13d3920()*-0.0444933);
}

double NNfunction_sb_cLcL::synapse0x13f3e00() {
   return (neuron0x13d3c60()*-0.845605);
}

double NNfunction_sb_cLcL::synapse0x13f3e40() {
   return (neuron0x13d3fa0()*0.0291694);
}

double NNfunction_sb_cLcL::synapse0x13f3e80() {
   return (neuron0x13d42e0()*-0.0462866);
}

double NNfunction_sb_cLcL::synapse0x13f3ec0() {
   return (neuron0x13d4620()*-0.0756693);
}

double NNfunction_sb_cLcL::synapse0x13f3950() {
   return (neuron0x13d4960()*-0.0159711);
}

double NNfunction_sb_cLcL::synapse0x13f3990() {
   return (neuron0x13d4ec0()*0.00863413);
}

double NNfunction_sb_cLcL::synapse0x13f4010() {
   return (neuron0x13d50e0()*0.00575095);
}

double NNfunction_sb_cLcL::synapse0x13f4050() {
   return (neuron0x13d5420()*0.0335492);
}

double NNfunction_sb_cLcL::synapse0x13f4090() {
   return (neuron0x13d5760()*0.0253301);
}

double NNfunction_sb_cLcL::synapse0x13f40d0() {
   return (neuron0x13d5aa0()*-0.0056347);
}

double NNfunction_sb_cLcL::synapse0x13f4110() {
   return (neuron0x13d5de0()*0.0115372);
}

double NNfunction_sb_cLcL::synapse0x13f4150() {
   return (neuron0x13d6120()*0.00185554);
}

double NNfunction_sb_cLcL::synapse0x13f44d0() {
   return (neuron0x13d1560()*-0.0299478);
}

double NNfunction_sb_cLcL::synapse0x13f4510() {
   return (neuron0x13d18a0()*-0.116961);
}

double NNfunction_sb_cLcL::synapse0x13f4550() {
   return (neuron0x13d1be0()*0.278969);
}

double NNfunction_sb_cLcL::synapse0x13f4590() {
   return (neuron0x13d1f20()*-0.573096);
}

double NNfunction_sb_cLcL::synapse0x13f45d0() {
   return (neuron0x13d2260()*0.00221461);
}

double NNfunction_sb_cLcL::synapse0x13f4610() {
   return (neuron0x13d25a0()*-0.178723);
}

double NNfunction_sb_cLcL::synapse0x13f4650() {
   return (neuron0x13d28e0()*-0.00475174);
}

double NNfunction_sb_cLcL::synapse0x13f4690() {
   return (neuron0x13d2c20()*0.259216);
}

double NNfunction_sb_cLcL::synapse0x13f46d0() {
   return (neuron0x13d2f60()*-0.257034);
}

double NNfunction_sb_cLcL::synapse0x13f4710() {
   return (neuron0x13d32a0()*-0.0333112);
}

double NNfunction_sb_cLcL::synapse0x13f4750() {
   return (neuron0x13d35e0()*0.147758);
}

double NNfunction_sb_cLcL::synapse0x13f4790() {
   return (neuron0x13d3920()*0.248692);
}

double NNfunction_sb_cLcL::synapse0x13f47d0() {
   return (neuron0x13d3c60()*0.627913);
}

double NNfunction_sb_cLcL::synapse0x13f4810() {
   return (neuron0x13d3fa0()*-0.126268);
}

double NNfunction_sb_cLcL::synapse0x13f4850() {
   return (neuron0x13d42e0()*0.100432);
}

double NNfunction_sb_cLcL::synapse0x13f4890() {
   return (neuron0x13d4620()*0.410155);
}

double NNfunction_sb_cLcL::synapse0x13f4320() {
   return (neuron0x13d4960()*-0.0769768);
}

double NNfunction_sb_cLcL::synapse0x13f4360() {
   return (neuron0x13d4ec0()*0.317233);
}

double NNfunction_sb_cLcL::synapse0x13e4e90() {
   return (neuron0x13d50e0()*0.237482);
}

double NNfunction_sb_cLcL::synapse0x13e4ed0() {
   return (neuron0x13d5420()*-0.527867);
}

double NNfunction_sb_cLcL::synapse0x13e4f10() {
   return (neuron0x13d5760()*0.147163);
}

double NNfunction_sb_cLcL::synapse0x13e4f50() {
   return (neuron0x13d5aa0()*0.0830759);
}

double NNfunction_sb_cLcL::synapse0x13e4f90() {
   return (neuron0x13d5de0()*-0.0153803);
}

double NNfunction_sb_cLcL::synapse0x13e4fd0() {
   return (neuron0x13d6120()*0.0529412);
}

double NNfunction_sb_cLcL::synapse0x13e5350() {
   return (neuron0x13d1560()*0.377032);
}

double NNfunction_sb_cLcL::synapse0x13e5390() {
   return (neuron0x13d18a0()*-0.441457);
}

double NNfunction_sb_cLcL::synapse0x13e53d0() {
   return (neuron0x13d1be0()*0.160272);
}

double NNfunction_sb_cLcL::synapse0x13e5410() {
   return (neuron0x13d1f20()*-0.59635);
}

double NNfunction_sb_cLcL::synapse0x13e5450() {
   return (neuron0x13d2260()*-0.213985);
}

double NNfunction_sb_cLcL::synapse0x13e5490() {
   return (neuron0x13d25a0()*0.0657489);
}

double NNfunction_sb_cLcL::synapse0x13e54d0() {
   return (neuron0x13d28e0()*-0.126241);
}

double NNfunction_sb_cLcL::synapse0x13e5510() {
   return (neuron0x13d2c20()*-0.263816);
}

double NNfunction_sb_cLcL::synapse0x13e5550() {
   return (neuron0x13d2f60()*0.14551);
}

double NNfunction_sb_cLcL::synapse0x13e5590() {
   return (neuron0x13d32a0()*-0.183965);
}

double NNfunction_sb_cLcL::synapse0x13e55d0() {
   return (neuron0x13d35e0()*0.337442);
}

double NNfunction_sb_cLcL::synapse0x13e5610() {
   return (neuron0x13d3920()*0.475549);
}

double NNfunction_sb_cLcL::synapse0x13e5650() {
   return (neuron0x13d3c60()*0.229781);
}

double NNfunction_sb_cLcL::synapse0x13e5690() {
   return (neuron0x13d3fa0()*-0.157539);
}

double NNfunction_sb_cLcL::synapse0x13e56d0() {
   return (neuron0x13d42e0()*0.354762);
}

double NNfunction_sb_cLcL::synapse0x13e5710() {
   return (neuron0x13d4620()*-0.365197);
}

double NNfunction_sb_cLcL::synapse0x13e51a0() {
   return (neuron0x13d4960()*0.2276);
}

double NNfunction_sb_cLcL::synapse0x13e51e0() {
   return (neuron0x13d4ec0()*-0.0501741);
}

double NNfunction_sb_cLcL::synapse0x13e5860() {
   return (neuron0x13d50e0()*-0.111392);
}

double NNfunction_sb_cLcL::synapse0x13e58a0() {
   return (neuron0x13d5420()*0.223157);
}

double NNfunction_sb_cLcL::synapse0x13e58e0() {
   return (neuron0x13d5760()*0.269453);
}

double NNfunction_sb_cLcL::synapse0x13e5920() {
   return (neuron0x13d5aa0()*0.346277);
}

double NNfunction_sb_cLcL::synapse0x13e5960() {
   return (neuron0x13d5de0()*0.249937);
}

double NNfunction_sb_cLcL::synapse0x13e59a0() {
   return (neuron0x13d6120()*0.225288);
}

double NNfunction_sb_cLcL::synapse0x13e5d20() {
   return (neuron0x13d1560()*0.0235348);
}

double NNfunction_sb_cLcL::synapse0x13e5d60() {
   return (neuron0x13d18a0()*0.0356618);
}

double NNfunction_sb_cLcL::synapse0x13e5da0() {
   return (neuron0x13d1be0()*-0.0421336);
}

double NNfunction_sb_cLcL::synapse0x13e5de0() {
   return (neuron0x13d1f20()*6.75997);
}

double NNfunction_sb_cLcL::synapse0x13e5e20() {
   return (neuron0x13d2260()*-0.0618105);
}

double NNfunction_sb_cLcL::synapse0x13e5e60() {
   return (neuron0x13d25a0()*0.0054122);
}

double NNfunction_sb_cLcL::synapse0x13e5ea0() {
   return (neuron0x13d28e0()*0.0403315);
}

double NNfunction_sb_cLcL::synapse0x13e5ee0() {
   return (neuron0x13d2c20()*-0.0724846);
}

double NNfunction_sb_cLcL::synapse0x13e5f20() {
   return (neuron0x13d2f60()*-0.00536946);
}

double NNfunction_sb_cLcL::synapse0x13e5f60() {
   return (neuron0x13d32a0()*0.00881597);
}

double NNfunction_sb_cLcL::synapse0x13e5fa0() {
   return (neuron0x13d35e0()*-0.00517012);
}

double NNfunction_sb_cLcL::synapse0x13e5fe0() {
   return (neuron0x13d3920()*-0.00303194);
}

double NNfunction_sb_cLcL::synapse0x13e6020() {
   return (neuron0x13d3c60()*-1.34003);
}

double NNfunction_sb_cLcL::synapse0x13e6060() {
   return (neuron0x13d3fa0()*-0.0810426);
}

double NNfunction_sb_cLcL::synapse0x13e60a0() {
   return (neuron0x13d42e0()*-0.00875222);
}

double NNfunction_sb_cLcL::synapse0x13e60e0() {
   return (neuron0x13d4620()*0.0220143);
}

double NNfunction_sb_cLcL::synapse0x13e5b70() {
   return (neuron0x13d4960()*-0.0963475);
}

double NNfunction_sb_cLcL::synapse0x13e5bb0() {
   return (neuron0x13d4ec0()*0.0302416);
}

double NNfunction_sb_cLcL::synapse0x13e6230() {
   return (neuron0x13d50e0()*0.00661885);
}

double NNfunction_sb_cLcL::synapse0x13e6270() {
   return (neuron0x13d5420()*-0.00912142);
}

double NNfunction_sb_cLcL::synapse0x13e62b0() {
   return (neuron0x13d5760()*-0.0298608);
}

double NNfunction_sb_cLcL::synapse0x13e62f0() {
   return (neuron0x13d5aa0()*0.00793227);
}

double NNfunction_sb_cLcL::synapse0x13e6330() {
   return (neuron0x13d5de0()*0.0171766);
}

double NNfunction_sb_cLcL::synapse0x13e6370() {
   return (neuron0x13d6120()*0.00619467);
}

double NNfunction_sb_cLcL::synapse0x13e66f0() {
   return (neuron0x13d1560()*-0.248573);
}

double NNfunction_sb_cLcL::synapse0x13e6730() {
   return (neuron0x13d18a0()*-0.0417511);
}

double NNfunction_sb_cLcL::synapse0x13e6770() {
   return (neuron0x13d1be0()*0.387607);
}

double NNfunction_sb_cLcL::synapse0x13e67b0() {
   return (neuron0x13d1f20()*0.410931);
}

double NNfunction_sb_cLcL::synapse0x13e67f0() {
   return (neuron0x13d2260()*0.127811);
}

double NNfunction_sb_cLcL::synapse0x13e6830() {
   return (neuron0x13d25a0()*0.0605345);
}

double NNfunction_sb_cLcL::synapse0x13e6870() {
   return (neuron0x13d28e0()*0.142719);
}

double NNfunction_sb_cLcL::synapse0x13e68b0() {
   return (neuron0x13d2c20()*0.11335);
}

double NNfunction_sb_cLcL::synapse0x13e68f0() {
   return (neuron0x13d2f60()*-0.0685789);
}

double NNfunction_sb_cLcL::synapse0x13e6930() {
   return (neuron0x13d32a0()*0.0880822);
}

double NNfunction_sb_cLcL::synapse0x13e6970() {
   return (neuron0x13d35e0()*-0.407335);
}

double NNfunction_sb_cLcL::synapse0x13e69b0() {
   return (neuron0x13d3920()*-0.0206565);
}

double NNfunction_sb_cLcL::synapse0x13e69f0() {
   return (neuron0x13d3c60()*-0.384284);
}

double NNfunction_sb_cLcL::synapse0x13e6a30() {
   return (neuron0x13d3fa0()*-0.380925);
}

double NNfunction_sb_cLcL::synapse0x13e6a70() {
   return (neuron0x13d42e0()*0.281938);
}

double NNfunction_sb_cLcL::synapse0x13e6ab0() {
   return (neuron0x13d4620()*0.055076);
}

double NNfunction_sb_cLcL::synapse0x13e6540() {
   return (neuron0x13d4960()*-0.0468269);
}

double NNfunction_sb_cLcL::synapse0x13e6580() {
   return (neuron0x13d4ec0()*0.0457799);
}

double NNfunction_sb_cLcL::synapse0x13e6c00() {
   return (neuron0x13d50e0()*-0.101018);
}

double NNfunction_sb_cLcL::synapse0x13e6c40() {
   return (neuron0x13d5420()*-0.470652);
}

double NNfunction_sb_cLcL::synapse0x13e6c80() {
   return (neuron0x13d5760()*0.054316);
}

double NNfunction_sb_cLcL::synapse0x13e6cc0() {
   return (neuron0x13d5aa0()*-0.193412);
}

double NNfunction_sb_cLcL::synapse0x13e6d00() {
   return (neuron0x13d5de0()*0.135742);
}

double NNfunction_sb_cLcL::synapse0x13e6d40() {
   return (neuron0x13d6120()*-0.0511269);
}

double NNfunction_sb_cLcL::synapse0x13f8c10() {
   return (neuron0x13d1560()*0.130635);
}

double NNfunction_sb_cLcL::synapse0x13f8c50() {
   return (neuron0x13d18a0()*-0.169839);
}

double NNfunction_sb_cLcL::synapse0x13f8c90() {
   return (neuron0x13d1be0()*0.146469);
}

double NNfunction_sb_cLcL::synapse0x13f8cd0() {
   return (neuron0x13d1f20()*-0.416556);
}

double NNfunction_sb_cLcL::synapse0x13f8d10() {
   return (neuron0x13d2260()*-0.0474539);
}

double NNfunction_sb_cLcL::synapse0x13f8d50() {
   return (neuron0x13d25a0()*-0.13328);
}

double NNfunction_sb_cLcL::synapse0x13f8d90() {
   return (neuron0x13d28e0()*-0.0378513);
}

double NNfunction_sb_cLcL::synapse0x13f8dd0() {
   return (neuron0x13d2c20()*-0.0701432);
}

double NNfunction_sb_cLcL::synapse0x13f8e10() {
   return (neuron0x13d2f60()*-0.886435);
}

double NNfunction_sb_cLcL::synapse0x13f8e50() {
   return (neuron0x13d32a0()*0.819349);
}

double NNfunction_sb_cLcL::synapse0x13f8e90() {
   return (neuron0x13d35e0()*0.223643);
}

double NNfunction_sb_cLcL::synapse0x13f8ed0() {
   return (neuron0x13d3920()*-0.142467);
}

double NNfunction_sb_cLcL::synapse0x13f8f10() {
   return (neuron0x13d3c60()*2.03404);
}

double NNfunction_sb_cLcL::synapse0x13f8f50() {
   return (neuron0x13d3fa0()*-0.237229);
}

double NNfunction_sb_cLcL::synapse0x13f8f90() {
   return (neuron0x13d42e0()*0.19282);
}

double NNfunction_sb_cLcL::synapse0x13f8fd0() {
   return (neuron0x13d4620()*0.0267821);
}

double NNfunction_sb_cLcL::synapse0x13e6d80() {
   return (neuron0x13d4960()*0.163409);
}

double NNfunction_sb_cLcL::synapse0x13e6dc0() {
   return (neuron0x13d4ec0()*-0.19045);
}

double NNfunction_sb_cLcL::synapse0x13f9120() {
   return (neuron0x13d50e0()*-0.211381);
}

double NNfunction_sb_cLcL::synapse0x13f9160() {
   return (neuron0x13d5420()*-0.272077);
}

double NNfunction_sb_cLcL::synapse0x13f91a0() {
   return (neuron0x13d5760()*-0.196827);
}

double NNfunction_sb_cLcL::synapse0x13f91e0() {
   return (neuron0x13d5aa0()*-0.144407);
}

double NNfunction_sb_cLcL::synapse0x13f9220() {
   return (neuron0x13d5de0()*-0.0353543);
}

double NNfunction_sb_cLcL::synapse0x13f9260() {
   return (neuron0x13d6120()*-0.0626917);
}

double NNfunction_sb_cLcL::synapse0x13f95e0() {
   return (neuron0x13d1560()*-0.158823);
}

double NNfunction_sb_cLcL::synapse0x13f9620() {
   return (neuron0x13d18a0()*0.539705);
}

double NNfunction_sb_cLcL::synapse0x13f9660() {
   return (neuron0x13d1be0()*-0.695817);
}

double NNfunction_sb_cLcL::synapse0x13f96a0() {
   return (neuron0x13d1f20()*0.447438);
}

double NNfunction_sb_cLcL::synapse0x13f96e0() {
   return (neuron0x13d2260()*0.0777703);
}

double NNfunction_sb_cLcL::synapse0x13f9720() {
   return (neuron0x13d25a0()*0.327686);
}

double NNfunction_sb_cLcL::synapse0x13f9760() {
   return (neuron0x13d28e0()*0.471173);
}

double NNfunction_sb_cLcL::synapse0x13f97a0() {
   return (neuron0x13d2c20()*0.581944);
}

double NNfunction_sb_cLcL::synapse0x13f97e0() {
   return (neuron0x13d2f60()*0.0747403);
}

double NNfunction_sb_cLcL::synapse0x13f9820() {
   return (neuron0x13d32a0()*-0.0966731);
}

double NNfunction_sb_cLcL::synapse0x13f9860() {
   return (neuron0x13d35e0()*0.0411862);
}

double NNfunction_sb_cLcL::synapse0x13f98a0() {
   return (neuron0x13d3920()*0.0127577);
}

double NNfunction_sb_cLcL::synapse0x13f98e0() {
   return (neuron0x13d3c60()*-0.912681);
}

double NNfunction_sb_cLcL::synapse0x13f9920() {
   return (neuron0x13d3fa0()*-0.238549);
}

double NNfunction_sb_cLcL::synapse0x13f9960() {
   return (neuron0x13d42e0()*-0.607298);
}

double NNfunction_sb_cLcL::synapse0x13f99a0() {
   return (neuron0x13d4620()*0.0760501);
}

double NNfunction_sb_cLcL::synapse0x13f9430() {
   return (neuron0x13d4960()*-0.566175);
}

double NNfunction_sb_cLcL::synapse0x13f9470() {
   return (neuron0x13d4ec0()*0.486728);
}

double NNfunction_sb_cLcL::synapse0x13f9af0() {
   return (neuron0x13d50e0()*0.357419);
}

double NNfunction_sb_cLcL::synapse0x13f9b30() {
   return (neuron0x13d5420()*0.293474);
}

double NNfunction_sb_cLcL::synapse0x13f9b70() {
   return (neuron0x13d5760()*0.0974345);
}

double NNfunction_sb_cLcL::synapse0x13f9bb0() {
   return (neuron0x13d5aa0()*0.0240604);
}

double NNfunction_sb_cLcL::synapse0x13f9bf0() {
   return (neuron0x13d5de0()*-0.159764);
}

double NNfunction_sb_cLcL::synapse0x13f9c30() {
   return (neuron0x13d6120()*-0.122215);
}

double NNfunction_sb_cLcL::synapse0x13f9fb0() {
   return (neuron0x13d1560()*-0.0105297);
}

double NNfunction_sb_cLcL::synapse0x13f9ff0() {
   return (neuron0x13d18a0()*-0.0397578);
}

double NNfunction_sb_cLcL::synapse0x13fa030() {
   return (neuron0x13d1be0()*0.233952);
}

double NNfunction_sb_cLcL::synapse0x13fa070() {
   return (neuron0x13d1f20()*-0.848564);
}

double NNfunction_sb_cLcL::synapse0x13fa0b0() {
   return (neuron0x13d2260()*-0.238254);
}

double NNfunction_sb_cLcL::synapse0x13fa0f0() {
   return (neuron0x13d25a0()*0.122123);
}

double NNfunction_sb_cLcL::synapse0x13fa130() {
   return (neuron0x13d28e0()*-0.156716);
}

double NNfunction_sb_cLcL::synapse0x13fa170() {
   return (neuron0x13d2c20()*0.0160475);
}

double NNfunction_sb_cLcL::synapse0x13fa1b0() {
   return (neuron0x13d2f60()*0.0658317);
}

double NNfunction_sb_cLcL::synapse0x13fa1f0() {
   return (neuron0x13d32a0()*0.0165534);
}

double NNfunction_sb_cLcL::synapse0x13fa230() {
   return (neuron0x13d35e0()*0.049719);
}

double NNfunction_sb_cLcL::synapse0x13fa270() {
   return (neuron0x13d3920()*-0.0356527);
}

double NNfunction_sb_cLcL::synapse0x13fa2b0() {
   return (neuron0x13d3c60()*-0.650326);
}

double NNfunction_sb_cLcL::synapse0x13fa2f0() {
   return (neuron0x13d3fa0()*0.0545167);
}

double NNfunction_sb_cLcL::synapse0x13fa330() {
   return (neuron0x13d42e0()*-0.302023);
}

double NNfunction_sb_cLcL::synapse0x13fa370() {
   return (neuron0x13d4620()*0.177685);
}

double NNfunction_sb_cLcL::synapse0x13f9e00() {
   return (neuron0x13d4960()*0.01813);
}

double NNfunction_sb_cLcL::synapse0x13f9e40() {
   return (neuron0x13d4ec0()*-0.000596393);
}

double NNfunction_sb_cLcL::synapse0x13fa4c0() {
   return (neuron0x13d50e0()*-0.00838172);
}

double NNfunction_sb_cLcL::synapse0x13fa500() {
   return (neuron0x13d5420()*0.00652264);
}

double NNfunction_sb_cLcL::synapse0x13fa540() {
   return (neuron0x13d5760()*-0.0101566);
}

double NNfunction_sb_cLcL::synapse0x13fa580() {
   return (neuron0x13d5aa0()*0.0565188);
}

double NNfunction_sb_cLcL::synapse0x13fa5c0() {
   return (neuron0x13d5de0()*0.0223626);
}

double NNfunction_sb_cLcL::synapse0x13fa600() {
   return (neuron0x13d6120()*0.0214718);
}

double NNfunction_sb_cLcL::synapse0x13fa980() {
   return (neuron0x13d1560()*-0.182601);
}

double NNfunction_sb_cLcL::synapse0x13fa9c0() {
   return (neuron0x13d18a0()*-0.0959003);
}

double NNfunction_sb_cLcL::synapse0x13faa00() {
   return (neuron0x13d1be0()*-0.578612);
}

double NNfunction_sb_cLcL::synapse0x13faa40() {
   return (neuron0x13d1f20()*1.44705);
}

double NNfunction_sb_cLcL::synapse0x13faa80() {
   return (neuron0x13d2260()*0.285305);
}

double NNfunction_sb_cLcL::synapse0x13faac0() {
   return (neuron0x13d25a0()*-0.133031);
}

double NNfunction_sb_cLcL::synapse0x13fab00() {
   return (neuron0x13d28e0()*-0.221351);
}

double NNfunction_sb_cLcL::synapse0x13fab40() {
   return (neuron0x13d2c20()*0.184918);
}

double NNfunction_sb_cLcL::synapse0x13fab80() {
   return (neuron0x13d2f60()*0.0423645);
}

double NNfunction_sb_cLcL::synapse0x13fabc0() {
   return (neuron0x13d32a0()*-0.103734);
}

double NNfunction_sb_cLcL::synapse0x13fac00() {
   return (neuron0x13d35e0()*0.0365395);
}

double NNfunction_sb_cLcL::synapse0x13fac40() {
   return (neuron0x13d3920()*-0.0956628);
}

double NNfunction_sb_cLcL::synapse0x13fac80() {
   return (neuron0x13d3c60()*1.03321);
}

double NNfunction_sb_cLcL::synapse0x13facc0() {
   return (neuron0x13d3fa0()*0.000887891);
}

double NNfunction_sb_cLcL::synapse0x13fad00() {
   return (neuron0x13d42e0()*-0.0942584);
}

double NNfunction_sb_cLcL::synapse0x13fad40() {
   return (neuron0x13d4620()*-0.226576);
}

double NNfunction_sb_cLcL::synapse0x13fa7d0() {
   return (neuron0x13d4960()*0.157507);
}

double NNfunction_sb_cLcL::synapse0x13fa810() {
   return (neuron0x13d4ec0()*0.132205);
}

double NNfunction_sb_cLcL::synapse0x13fae90() {
   return (neuron0x13d50e0()*0.0875781);
}

double NNfunction_sb_cLcL::synapse0x13faed0() {
   return (neuron0x13d5420()*0.0948686);
}

double NNfunction_sb_cLcL::synapse0x13faf10() {
   return (neuron0x13d5760()*-0.0543931);
}

double NNfunction_sb_cLcL::synapse0x13faf50() {
   return (neuron0x13d5aa0()*-0.149996);
}

double NNfunction_sb_cLcL::synapse0x13faf90() {
   return (neuron0x13d5de0()*-0.0981526);
}

double NNfunction_sb_cLcL::synapse0x13fafd0() {
   return (neuron0x13d6120()*-0.0639662);
}

double NNfunction_sb_cLcL::synapse0x13d7570() {
   return (neuron0x13d65c0()*-0.622619);
}

double NNfunction_sb_cLcL::synapse0x13d75b0() {
   return (neuron0x13d6ed0()*-1.13596);
}

double NNfunction_sb_cLcL::synapse0x13d8a80() {
   return (neuron0x13d79b0()*4.43023);
}

double NNfunction_sb_cLcL::synapse0x13d8ac0() {
   return (neuron0x1191240()*1.56696);
}

double NNfunction_sb_cLcL::synapse0x13d9450() {
   return (neuron0x13d87d0()*-0.996005);
}

double NNfunction_sb_cLcL::synapse0x13d9490() {
   return (neuron0x13d91a0()*-1.31854);
}

double NNfunction_sb_cLcL::synapse0x13da220() {
   return (neuron0x13d9f70()*-1.28766);
}

double NNfunction_sb_cLcL::synapse0x13da260() {
   return (neuron0x13da940()*-6.08509);
}

double NNfunction_sb_cLcL::synapse0x13dabf0() {
   return (neuron0x13db310()*-1.59492);
}

double NNfunction_sb_cLcL::synapse0x13dac30() {
   return (neuron0x13dbdf0()*-1.17378);
}

double NNfunction_sb_cLcL::synapse0x13db5c0() {
   return (neuron0x13dc7c0()*-0.802966);
}

double NNfunction_sb_cLcL::synapse0x13db600() {
   return (neuron0x13d98a0()*-0.0708347);
}

double NNfunction_sb_cLcL::synapse0x13dc0a0() {
   return (neuron0x13de370()*0.486793);
}

double NNfunction_sb_cLcL::synapse0x13dc0e0() {
   return (neuron0x13ded40()*-5.3421);
}

double NNfunction_sb_cLcL::synapse0x13dca70() {
   return (neuron0x13df710()*0.393687);
}

double NNfunction_sb_cLcL::synapse0x13dcab0() {
   return (neuron0x13e00e0()*-0.749442);
}

double NNfunction_sb_cLcL::synapse0x13d9b50() {
   return (neuron0x13e1ef0()*1.56917);
}

double NNfunction_sb_cLcL::synapse0x13d9b90() {
   return (neuron0x13e21d0()*1.53495);
}

double NNfunction_sb_cLcL::synapse0x13de620() {
   return (neuron0x13e2ba0()*-0.670839);
}

double NNfunction_sb_cLcL::synapse0x13de660() {
   return (neuron0x13e3570()*0.497644);
}

double NNfunction_sb_cLcL::synapse0x13deff0() {
   return (neuron0x13e3f40()*-1.32437);
}

double NNfunction_sb_cLcL::synapse0x13df030() {
   return (neuron0x13e4910()*-1.14644);
}

double NNfunction_sb_cLcL::synapse0x13df9c0() {
   return (neuron0x13dd460()*2.1521);
}

double NNfunction_sb_cLcL::synapse0x13dfa00() {
   return (neuron0x13dde30()*0.261534);
}

double NNfunction_sb_cLcL::synapse0x13e0390() {
   return (neuron0x13e76a0()*-1.45982);
}

double NNfunction_sb_cLcL::synapse0x13e03d0() {
   return (neuron0x13e8070()*-0.798692);
}

double NNfunction_sb_cLcL::synapse0x13d4500() {
   return (neuron0x13e8a40()*-1.32936);
}

double NNfunction_sb_cLcL::synapse0x13d4540() {
   return (neuron0x13e9410()*0.218595);
}

double NNfunction_sb_cLcL::synapse0x13e2480() {
   return (neuron0x13e9de0()*-1.16239);
}

double NNfunction_sb_cLcL::synapse0x13e24c0() {
   return (neuron0x13ea7b0()*-0.754028);
}

double NNfunction_sb_cLcL::synapse0x13e2e50() {
   return (neuron0x13eb180()*1.7005);
}

double NNfunction_sb_cLcL::synapse0x13e2e90() {
   return (neuron0x13ebb50()*1.65878);
}

double NNfunction_sb_cLcL::synapse0x13e3820() {
   return (neuron0x13e1be0()*-0.587262);
}

double NNfunction_sb_cLcL::synapse0x13e3860() {
   return (neuron0x13ee730()*1.92645);
}

double NNfunction_sb_cLcL::synapse0x13e41f0() {
   return (neuron0x13ef100()*1.34851);
}

double NNfunction_sb_cLcL::synapse0x13e4230() {
   return (neuron0x13efad0()*-1.58943);
}

double NNfunction_sb_cLcL::synapse0x13e4bc0() {
   return (neuron0x13f04a0()*1.94107);
}

double NNfunction_sb_cLcL::synapse0x13e4c00() {
   return (neuron0x13f0e70()*0.443531);
}

double NNfunction_sb_cLcL::synapse0x13dd710() {
   return (neuron0x13f1840()*-2.51101);
}

double NNfunction_sb_cLcL::synapse0x13dd750() {
   return (neuron0x13f2210()*0.050335);
}

double NNfunction_sb_cLcL::synapse0x13e6fc0() {
   return (neuron0x13f2be0()*0.758769);
}

double NNfunction_sb_cLcL::synapse0x13e7000() {
   return (neuron0x13f37c0()*0.597988);
}

double NNfunction_sb_cLcL::synapse0x13e7950() {
   return (neuron0x13f4190()*1.87361);
}

double NNfunction_sb_cLcL::synapse0x13e7990() {
   return (neuron0x13e5010()*1.80868);
}

double NNfunction_sb_cLcL::synapse0x13e8320() {
   return (neuron0x13e59e0()*7.32389);
}

double NNfunction_sb_cLcL::synapse0x13e8360() {
   return (neuron0x13e63b0()*0.531924);
}

double NNfunction_sb_cLcL::synapse0x13e8cf0() {
   return (neuron0x13f89f0()*-0.868803);
}

double NNfunction_sb_cLcL::synapse0x13e8d30() {
   return (neuron0x13f92a0()*-1.05884);
}

double NNfunction_sb_cLcL::synapse0x13e96c0() {
   return (neuron0x13f9c70()*-0.598929);
}

double NNfunction_sb_cLcL::synapse0x13e9700() {
   return (neuron0x13fa640()*-1.53763);
}

double NNfunction_sb_cLcL::synapse0x13ebe00() {
   return (neuron0x13d65c0()*0.0227482);
}

double NNfunction_sb_cLcL::synapse0x13ebe40() {
   return (neuron0x13d6ed0()*0.0263612);
}

double NNfunction_sb_cLcL::synapse0x13e13c0() {
   return (neuron0x13d79b0()*0.0330273);
}

double NNfunction_sb_cLcL::synapse0x13e1400() {
   return (neuron0x1191240()*-0.00317659);
}

double NNfunction_sb_cLcL::synapse0x13ee9e0() {
   return (neuron0x13d87d0()*0.00482526);
}

double NNfunction_sb_cLcL::synapse0x13eea20() {
   return (neuron0x13d91a0()*-0.017572);
}

double NNfunction_sb_cLcL::synapse0x13ef3b0() {
   return (neuron0x13d9f70()*-0.00198159);
}

double NNfunction_sb_cLcL::synapse0x13ef3f0() {
   return (neuron0x13da940()*-0.122223);
}

double NNfunction_sb_cLcL::synapse0x13efd80() {
   return (neuron0x13db310()*1.25148);
}

double NNfunction_sb_cLcL::synapse0x13efdc0() {
   return (neuron0x13dbdf0()*2.00017);
}

double NNfunction_sb_cLcL::synapse0x13f0750() {
   return (neuron0x13dc7c0()*0.0188637);
}

double NNfunction_sb_cLcL::synapse0x13f0790() {
   return (neuron0x13d98a0()*0.00327199);
}

double NNfunction_sb_cLcL::synapse0x13f1120() {
   return (neuron0x13de370()*0.0158446);
}

double NNfunction_sb_cLcL::synapse0x13f1160() {
   return (neuron0x13ded40()*-0.0158087);
}

double NNfunction_sb_cLcL::synapse0x13f1af0() {
   return (neuron0x13df710()*-0.0691121);
}

double NNfunction_sb_cLcL::synapse0x13f1b30() {
   return (neuron0x13e00e0()*-0.00717056);
}

double NNfunction_sb_cLcL::synapse0x13f24c0() {
   return (neuron0x13e1ef0()*-0.0451001);
}

double NNfunction_sb_cLcL::synapse0x13f2500() {
   return (neuron0x13e21d0()*0.00822494);
}

double NNfunction_sb_cLcL::synapse0x13f2e90() {
   return (neuron0x13e2ba0()*0.00337514);
}

double NNfunction_sb_cLcL::synapse0x13f2ed0() {
   return (neuron0x13e3570()*0.004473);
}

double NNfunction_sb_cLcL::synapse0x13f3a70() {
   return (neuron0x13e3f40()*-0.00729635);
}

double NNfunction_sb_cLcL::synapse0x13f3ab0() {
   return (neuron0x13e4910()*0.852926);
}

double NNfunction_sb_cLcL::synapse0x13f4440() {
   return (neuron0x13dd460()*-1.97405);
}

double NNfunction_sb_cLcL::synapse0x13f4480() {
   return (neuron0x13dde30()*-0.0251205);
}

double NNfunction_sb_cLcL::synapse0x13e52c0() {
   return (neuron0x13e76a0()*-0.0131712);
}

double NNfunction_sb_cLcL::synapse0x13e5300() {
   return (neuron0x13e8070()*-0.093784);
}

double NNfunction_sb_cLcL::synapse0x13e5c90() {
   return (neuron0x13e8a40()*0.0325006);
}

double NNfunction_sb_cLcL::synapse0x13e5cd0() {
   return (neuron0x13e9410()*0.0340948);
}

double NNfunction_sb_cLcL::synapse0x13e6660() {
   return (neuron0x13e9de0()*0.15866);
}

double NNfunction_sb_cLcL::synapse0x13e66a0() {
   return (neuron0x13ea7b0()*-0.0310275);
}

double NNfunction_sb_cLcL::synapse0x13f8b80() {
   return (neuron0x13eb180()*-0.360309);
}

double NNfunction_sb_cLcL::synapse0x13f8bc0() {
   return (neuron0x13ebb50()*-1.73463);
}

double NNfunction_sb_cLcL::synapse0x13f9550() {
   return (neuron0x13e1be0()*0.0203452);
}

double NNfunction_sb_cLcL::synapse0x13f9590() {
   return (neuron0x13ee730()*-0.42975);
}

double NNfunction_sb_cLcL::synapse0x13f9f20() {
   return (neuron0x13ef100()*-0.647782);
}

double NNfunction_sb_cLcL::synapse0x13f9f60() {
   return (neuron0x13efad0()*-0.0123812);
}

double NNfunction_sb_cLcL::synapse0x13fa8f0() {
   return (neuron0x13f04a0()*0.269437);
}

double NNfunction_sb_cLcL::synapse0x13fa930() {
   return (neuron0x13f0e70()*-1.05929);
}

double NNfunction_sb_cLcL::synapse0x13d67e0() {
   return (neuron0x13f1840()*-0.0104592);
}

double NNfunction_sb_cLcL::synapse0x13d6820() {
   return (neuron0x13f2210()*-0.434157);
}

double NNfunction_sb_cLcL::synapse0x13ea090() {
   return (neuron0x13f2be0()*-0.0352151);
}

double NNfunction_sb_cLcL::synapse0x13ea0d0() {
   return (neuron0x13f37c0()*-1.714);
}

double NNfunction_sb_cLcL::synapse0x13fb010() {
   return (neuron0x13f4190()*0.0490796);
}

double NNfunction_sb_cLcL::synapse0x13fb050() {
   return (neuron0x13e5010()*-0.0217487);
}

double NNfunction_sb_cLcL::synapse0x13fb090() {
   return (neuron0x13e59e0()*-0.00853502);
}

double NNfunction_sb_cLcL::synapse0x13fb0d0() {
   return (neuron0x13e63b0()*0.0219441);
}

double NNfunction_sb_cLcL::synapse0x1401f80() {
   return (neuron0x13f89f0()*-0.0193038);
}

double NNfunction_sb_cLcL::synapse0x1401fc0() {
   return (neuron0x13f92a0()*-0.0190347);
}

double NNfunction_sb_cLcL::synapse0x1402000() {
   return (neuron0x13f9c70()*-0.0543185);
}

double NNfunction_sb_cLcL::synapse0x1402040() {
   return (neuron0x13fa640()*-0.0298513);
}

double NNfunction_sb_cLcL::synapse0x14023c0() {
   return (neuron0x13d65c0()*1.00935);
}

double NNfunction_sb_cLcL::synapse0x1402400() {
   return (neuron0x13d6ed0()*-2.28401);
}

double NNfunction_sb_cLcL::synapse0x1402440() {
   return (neuron0x13d79b0()*-2.49004);
}

double NNfunction_sb_cLcL::synapse0x1402480() {
   return (neuron0x1191240()*-0.561156);
}

double NNfunction_sb_cLcL::synapse0x14024c0() {
   return (neuron0x13d87d0()*0.696636);
}

double NNfunction_sb_cLcL::synapse0x1402500() {
   return (neuron0x13d91a0()*1.47151);
}

double NNfunction_sb_cLcL::synapse0x1402540() {
   return (neuron0x13d9f70()*0.887777);
}

double NNfunction_sb_cLcL::synapse0x1402580() {
   return (neuron0x13da940()*-1.57474);
}

double NNfunction_sb_cLcL::synapse0x14025c0() {
   return (neuron0x13db310()*2.21185);
}

double NNfunction_sb_cLcL::synapse0x1402600() {
   return (neuron0x13dbdf0()*0.374274);
}

double NNfunction_sb_cLcL::synapse0x1402640() {
   return (neuron0x13dc7c0()*0.964198);
}

double NNfunction_sb_cLcL::synapse0x1402680() {
   return (neuron0x13d98a0()*1.03883);
}

double NNfunction_sb_cLcL::synapse0x14026c0() {
   return (neuron0x13de370()*1.25535);
}

double NNfunction_sb_cLcL::synapse0x1402700() {
   return (neuron0x13ded40()*5.06667);
}

double NNfunction_sb_cLcL::synapse0x1402740() {
   return (neuron0x13df710()*1.93238);
}

double NNfunction_sb_cLcL::synapse0x1402780() {
   return (neuron0x13e00e0()*1.7496);
}

double NNfunction_sb_cLcL::synapse0x1402210() {
   return (neuron0x13e1ef0()*-1.79833);
}

double NNfunction_sb_cLcL::synapse0x1402250() {
   return (neuron0x13e21d0()*2.10142);
}

double NNfunction_sb_cLcL::synapse0x14028d0() {
   return (neuron0x13e2ba0()*1.18836);
}

double NNfunction_sb_cLcL::synapse0x1402910() {
   return (neuron0x13e3570()*4.66189);
}

double NNfunction_sb_cLcL::synapse0x1402950() {
   return (neuron0x13e3f40()*-0.361588);
}

double NNfunction_sb_cLcL::synapse0x1402990() {
   return (neuron0x13e4910()*1.26262);
}

double NNfunction_sb_cLcL::synapse0x14029d0() {
   return (neuron0x13dd460()*-2.27978);
}

double NNfunction_sb_cLcL::synapse0x1402a10() {
   return (neuron0x13dde30()*-1.29071);
}

double NNfunction_sb_cLcL::synapse0x1402a50() {
   return (neuron0x13e76a0()*1.32948);
}

double NNfunction_sb_cLcL::synapse0x1402a90() {
   return (neuron0x13e8070()*1.03971);
}

double NNfunction_sb_cLcL::synapse0x1402ad0() {
   return (neuron0x13e8a40()*5.50631);
}

double NNfunction_sb_cLcL::synapse0x1402b10() {
   return (neuron0x13e9410()*-2.50203);
}

double NNfunction_sb_cLcL::synapse0x1402b50() {
   return (neuron0x13e9de0()*1.03971);
}

double NNfunction_sb_cLcL::synapse0x1402b90() {
   return (neuron0x13ea7b0()*1.27296);
}

double NNfunction_sb_cLcL::synapse0x1402bd0() {
   return (neuron0x13eb180()*-2.575);
}

double NNfunction_sb_cLcL::synapse0x1402c10() {
   return (neuron0x13ebb50()*-2.84643);
}

double NNfunction_sb_cLcL::synapse0x14027c0() {
   return (neuron0x13e1be0()*1.8077);
}

double NNfunction_sb_cLcL::synapse0x1402800() {
   return (neuron0x13ee730()*-8.60478);
}

double NNfunction_sb_cLcL::synapse0x1402840() {
   return (neuron0x13ef100()*1.70638);
}

double NNfunction_sb_cLcL::synapse0x1402880() {
   return (neuron0x13efad0()*2.51568);
}

double NNfunction_sb_cLcL::synapse0x1402e60() {
   return (neuron0x13f04a0()*1.39829);
}

double NNfunction_sb_cLcL::synapse0x1402ea0() {
   return (neuron0x13f0e70()*-1.4467);
}

double NNfunction_sb_cLcL::synapse0x1402ee0() {
   return (neuron0x13f1840()*2.31145);
}

double NNfunction_sb_cLcL::synapse0x1402f20() {
   return (neuron0x13f2210()*-1.16312);
}

double NNfunction_sb_cLcL::synapse0x1402f60() {
   return (neuron0x13f2be0()*-1.16323);
}

double NNfunction_sb_cLcL::synapse0x1402fa0() {
   return (neuron0x13f37c0()*-2.26528);
}

double NNfunction_sb_cLcL::synapse0x1402fe0() {
   return (neuron0x13f4190()*-0.956354);
}

double NNfunction_sb_cLcL::synapse0x1403020() {
   return (neuron0x13e5010()*-0.213052);
}

double NNfunction_sb_cLcL::synapse0x1403060() {
   return (neuron0x13e59e0()*-4.36424);
}

double NNfunction_sb_cLcL::synapse0x14030a0() {
   return (neuron0x13e63b0()*-2.73236);
}

double NNfunction_sb_cLcL::synapse0x14030e0() {
   return (neuron0x13f89f0()*1.1617);
}

double NNfunction_sb_cLcL::synapse0x1403120() {
   return (neuron0x13f92a0()*1.21492);
}

double NNfunction_sb_cLcL::synapse0x1403160() {
   return (neuron0x13f9c70()*3.33183);
}

double NNfunction_sb_cLcL::synapse0x14031a0() {
   return (neuron0x13fa640()*-2.41664);
}

double NNfunction_sb_cLcL::synapse0x1403520() {
   return (neuron0x13d65c0()*-0.0953181);
}

double NNfunction_sb_cLcL::synapse0x1403560() {
   return (neuron0x13d6ed0()*-0.0223941);
}

double NNfunction_sb_cLcL::synapse0x14035a0() {
   return (neuron0x13d79b0()*0.130533);
}

double NNfunction_sb_cLcL::synapse0x14035e0() {
   return (neuron0x1191240()*-0.0314777);
}

double NNfunction_sb_cLcL::synapse0x1403620() {
   return (neuron0x13d87d0()*-0.00437662);
}

double NNfunction_sb_cLcL::synapse0x1403660() {
   return (neuron0x13d91a0()*-0.52987);
}

double NNfunction_sb_cLcL::synapse0x14036a0() {
   return (neuron0x13d9f70()*0.00828114);
}

double NNfunction_sb_cLcL::synapse0x14036e0() {
   return (neuron0x13da940()*-1.26933);
}

double NNfunction_sb_cLcL::synapse0x1403720() {
   return (neuron0x13db310()*-0.3381);
}

double NNfunction_sb_cLcL::synapse0x1403760() {
   return (neuron0x13dbdf0()*-1.55004);
}

double NNfunction_sb_cLcL::synapse0x14037a0() {
   return (neuron0x13dc7c0()*0.0310299);
}

double NNfunction_sb_cLcL::synapse0x14037e0() {
   return (neuron0x13d98a0()*0.015129);
}

double NNfunction_sb_cLcL::synapse0x1403820() {
   return (neuron0x13de370()*0.0395244);
}

double NNfunction_sb_cLcL::synapse0x1403860() {
   return (neuron0x13ded40()*-0.388794);
}

double NNfunction_sb_cLcL::synapse0x14038a0() {
   return (neuron0x13df710()*-0.0558314);
}

double NNfunction_sb_cLcL::synapse0x14038e0() {
   return (neuron0x13e00e0()*-0.0784867);
}

double NNfunction_sb_cLcL::synapse0x1403370() {
   return (neuron0x13e1ef0()*0.0334449);
}

double NNfunction_sb_cLcL::synapse0x14033b0() {
   return (neuron0x13e21d0()*-0.0195822);
}

double NNfunction_sb_cLcL::synapse0x1403a30() {
   return (neuron0x13e2ba0()*-0.0257046);
}

double NNfunction_sb_cLcL::synapse0x1403a70() {
   return (neuron0x13e3570()*-0.331443);
}

double NNfunction_sb_cLcL::synapse0x1403ab0() {
   return (neuron0x13e3f40()*0.00828212);
}

double NNfunction_sb_cLcL::synapse0x1403af0() {
   return (neuron0x13e4910()*-1.48194);
}

double NNfunction_sb_cLcL::synapse0x1403b30() {
   return (neuron0x13dd460()*0.519826);
}

double NNfunction_sb_cLcL::synapse0x1403b70() {
   return (neuron0x13dde30()*-0.0454929);
}

double NNfunction_sb_cLcL::synapse0x1403bb0() {
   return (neuron0x13e76a0()*-0.069979);
}

double NNfunction_sb_cLcL::synapse0x1403bf0() {
   return (neuron0x13e8070()*0.0228924);
}

double NNfunction_sb_cLcL::synapse0x1403c30() {
   return (neuron0x13e8a40()*-0.402556);
}

double NNfunction_sb_cLcL::synapse0x1403c70() {
   return (neuron0x13e9410()*-0.0212526);
}

double NNfunction_sb_cLcL::synapse0x1403cb0() {
   return (neuron0x13e9de0()*-0.00198505);
}

double NNfunction_sb_cLcL::synapse0x1403cf0() {
   return (neuron0x13ea7b0()*-0.118428);
}

double NNfunction_sb_cLcL::synapse0x1403d30() {
   return (neuron0x13eb180()*1.29492);
}

double NNfunction_sb_cLcL::synapse0x1403d70() {
   return (neuron0x13ebb50()*0.258857);
}

double NNfunction_sb_cLcL::synapse0x1403920() {
   return (neuron0x13e1be0()*-0.143637);
}

double NNfunction_sb_cLcL::synapse0x1403960() {
   return (neuron0x13ee730()*1.46767);
}

double NNfunction_sb_cLcL::synapse0x14039a0() {
   return (neuron0x13ef100()*-1.01215);
}

double NNfunction_sb_cLcL::synapse0x14039e0() {
   return (neuron0x13efad0()*-0.134794);
}

double NNfunction_sb_cLcL::synapse0x1403fc0() {
   return (neuron0x13f04a0()*-0.560694);
}

double NNfunction_sb_cLcL::synapse0x1404000() {
   return (neuron0x13f0e70()*0.526748);
}

double NNfunction_sb_cLcL::synapse0x1404040() {
   return (neuron0x13f1840()*-0.0925182);
}

double NNfunction_sb_cLcL::synapse0x1404080() {
   return (neuron0x13f2210()*1.17133);
}

double NNfunction_sb_cLcL::synapse0x14040c0() {
   return (neuron0x13f2be0()*-0.0473296);
}

double NNfunction_sb_cLcL::synapse0x1404100() {
   return (neuron0x13f37c0()*1.17293);
}

double NNfunction_sb_cLcL::synapse0x1404140() {
   return (neuron0x13f4190()*-0.0348913);
}

double NNfunction_sb_cLcL::synapse0x1404180() {
   return (neuron0x13e5010()*-0.0462935);
}

double NNfunction_sb_cLcL::synapse0x14041c0() {
   return (neuron0x13e59e0()*0.185253);
}

double NNfunction_sb_cLcL::synapse0x1404200() {
   return (neuron0x13e63b0()*-0.0895288);
}

double NNfunction_sb_cLcL::synapse0x1404240() {
   return (neuron0x13f89f0()*-0.0355712);
}

double NNfunction_sb_cLcL::synapse0x1404280() {
   return (neuron0x13f92a0()*-0.0377711);
}

double NNfunction_sb_cLcL::synapse0x14042c0() {
   return (neuron0x13f9c70()*-0.537272);
}

double NNfunction_sb_cLcL::synapse0x1404300() {
   return (neuron0x13fa640()*-0.0665194);
}

double NNfunction_sb_cLcL::synapse0x1404680() {
   return (neuron0x13d65c0()*0.435517);
}

double NNfunction_sb_cLcL::synapse0x14046c0() {
   return (neuron0x13d6ed0()*0.263657);
}

double NNfunction_sb_cLcL::synapse0x1404700() {
   return (neuron0x13d79b0()*0.511011);
}

double NNfunction_sb_cLcL::synapse0x1404740() {
   return (neuron0x1191240()*0.567054);
}

double NNfunction_sb_cLcL::synapse0x1404780() {
   return (neuron0x13d87d0()*0.463984);
}

double NNfunction_sb_cLcL::synapse0x14047c0() {
   return (neuron0x13d91a0()*0.467419);
}

double NNfunction_sb_cLcL::synapse0x1404800() {
   return (neuron0x13d9f70()*0.104245);
}

double NNfunction_sb_cLcL::synapse0x1404840() {
   return (neuron0x13da940()*0.719328);
}

double NNfunction_sb_cLcL::synapse0x1404880() {
   return (neuron0x13db310()*0.295789);
}

double NNfunction_sb_cLcL::synapse0x14048c0() {
   return (neuron0x13dbdf0()*0.348654);
}

double NNfunction_sb_cLcL::synapse0x1404900() {
   return (neuron0x13dc7c0()*0.352082);
}

double NNfunction_sb_cLcL::synapse0x1404940() {
   return (neuron0x13d98a0()*-0.119171);
}

double NNfunction_sb_cLcL::synapse0x1404980() {
   return (neuron0x13de370()*0.359792);
}

double NNfunction_sb_cLcL::synapse0x14049c0() {
   return (neuron0x13ded40()*0.428388);
}

double NNfunction_sb_cLcL::synapse0x1404a00() {
   return (neuron0x13df710()*-0.323773);
}

double NNfunction_sb_cLcL::synapse0x1404a40() {
   return (neuron0x13e00e0()*0.332674);
}

double NNfunction_sb_cLcL::synapse0x14044d0() {
   return (neuron0x13e1ef0()*-0.143605);
}

double NNfunction_sb_cLcL::synapse0x1404510() {
   return (neuron0x13e21d0()*-0.0116062);
}

double NNfunction_sb_cLcL::synapse0x1404b90() {
   return (neuron0x13e2ba0()*0.29145);
}

double NNfunction_sb_cLcL::synapse0x1404bd0() {
   return (neuron0x13e3570()*0.155548);
}

double NNfunction_sb_cLcL::synapse0x1404c10() {
   return (neuron0x13e3f40()*0.374005);
}

double NNfunction_sb_cLcL::synapse0x1404c50() {
   return (neuron0x13e4910()*-0.0421688);
}

double NNfunction_sb_cLcL::synapse0x1404c90() {
   return (neuron0x13dd460()*0.418544);
}

double NNfunction_sb_cLcL::synapse0x1404cd0() {
   return (neuron0x13dde30()*0.384266);
}

double NNfunction_sb_cLcL::synapse0x1404d10() {
   return (neuron0x13e76a0()*-0.137929);
}

double NNfunction_sb_cLcL::synapse0x1404d50() {
   return (neuron0x13e8070()*0.0338471);
}

double NNfunction_sb_cLcL::synapse0x1404d90() {
   return (neuron0x13e8a40()*0.177119);
}

double NNfunction_sb_cLcL::synapse0x1404dd0() {
   return (neuron0x13e9410()*0.539483);
}

double NNfunction_sb_cLcL::synapse0x1404e10() {
   return (neuron0x13e9de0()*0.432803);
}

double NNfunction_sb_cLcL::synapse0x1404e50() {
   return (neuron0x13ea7b0()*0.359759);
}

double NNfunction_sb_cLcL::synapse0x1404e90() {
   return (neuron0x13eb180()*-0.229555);
}

double NNfunction_sb_cLcL::synapse0x1404ed0() {
   return (neuron0x13ebb50()*0.369621);
}

double NNfunction_sb_cLcL::synapse0x1404a80() {
   return (neuron0x13e1be0()*-0.0772405);
}

double NNfunction_sb_cLcL::synapse0x1404ac0() {
   return (neuron0x13ee730()*-0.00404443);
}

double NNfunction_sb_cLcL::synapse0x1404b00() {
   return (neuron0x13ef100()*0.395943);
}

double NNfunction_sb_cLcL::synapse0x1404b40() {
   return (neuron0x13efad0()*-0.215359);
}

double NNfunction_sb_cLcL::synapse0x1405120() {
   return (neuron0x13f04a0()*0.179658);
}

double NNfunction_sb_cLcL::synapse0x1405160() {
   return (neuron0x13f0e70()*0.39633);
}

double NNfunction_sb_cLcL::synapse0x14051a0() {
   return (neuron0x13f1840()*0.155329);
}

double NNfunction_sb_cLcL::synapse0x14051e0() {
   return (neuron0x13f2210()*0.314454);
}

double NNfunction_sb_cLcL::synapse0x1405220() {
   return (neuron0x13f2be0()*0.0931452);
}

double NNfunction_sb_cLcL::synapse0x1405260() {
   return (neuron0x13f37c0()*0.644044);
}

double NNfunction_sb_cLcL::synapse0x14052a0() {
   return (neuron0x13f4190()*0.15036);
}

double NNfunction_sb_cLcL::synapse0x14052e0() {
   return (neuron0x13e5010()*0.62036);
}

double NNfunction_sb_cLcL::synapse0x1405320() {
   return (neuron0x13e59e0()*0.312692);
}

double NNfunction_sb_cLcL::synapse0x1405360() {
   return (neuron0x13e63b0()*0.0765221);
}

double NNfunction_sb_cLcL::synapse0x14053a0() {
   return (neuron0x13f89f0()*-0.0891548);
}

double NNfunction_sb_cLcL::synapse0x14053e0() {
   return (neuron0x13f92a0()*0.70863);
}

double NNfunction_sb_cLcL::synapse0x1405420() {
   return (neuron0x13f9c70()*0.192177);
}

double NNfunction_sb_cLcL::synapse0x1405460() {
   return (neuron0x13fa640()*-0.294471);
}

double NNfunction_sb_cLcL::synapse0x13d6580() {
   return (neuron0x1401840()*9.65085);
}

double NNfunction_sb_cLcL::synapse0x14056c0() {
   return (neuron0x1401be0()*-4.20173);
}

double NNfunction_sb_cLcL::synapse0x1405700() {
   return (neuron0x1402080()*-9.86486);
}

double NNfunction_sb_cLcL::synapse0x1405740() {
   return (neuron0x14031e0()*8.67713);
}

double NNfunction_sb_cLcL::synapse0x1405780() {
   return (neuron0x1404340()*3.99489);
}

