#include "NNfunction_sb_sLuL.h"
#include <cmath>

double NNfunction_sb_sLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4899)/15.3131;
   input1 = (in1 - 0.349004)/1142.34;
   input2 = (in2 - 663.071)/619.451;
   input3 = (in3 - -50.6852)/797.917;
   input4 = (in4 - 1041.33)/941.097;
   input5 = (in5 - 879.187)/935.5;
   input6 = (in6 - 889.645)/934.642;
   input7 = (in7 - 914.772)/925.517;
   input8 = (in8 - 926.027)/976.235;
   input9 = (in9 - 896.522)/954.895;
   input10 = (in10 - 993.444)/961.862;
   input11 = (in11 - 403.269)/416.363;
   input12 = (in12 - 401.415)/414.637;
   input13 = (in13 - 500.2)/515.102;
   input14 = (in14 - 700.551)/794.959;
   input15 = (in15 - 702.15)/798.471;
   input16 = (in16 - 531.64)/555.074;
   input17 = (in17 - 769.642)/907.345;
   input18 = (in18 - 754.345)/904.243;
   input19 = (in19 - 806.979)/884.192;
   input20 = (in20 - -4.15452)/487.008;
   input21 = (in21 - 6.19337)/1161.02;
   input22 = (in22 - 6.4586)/1204.5;
   input23 = (in23 - -195.938)/596.275;
   switch(index) {
     case 0:
         return neuron0x2c464a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.4899)/15.3131;
   input1 = (input[1] - 0.349004)/1142.34;
   input2 = (input[2] - 663.071)/619.451;
   input3 = (input[3] - -50.6852)/797.917;
   input4 = (input[4] - 1041.33)/941.097;
   input5 = (input[5] - 879.187)/935.5;
   input6 = (input[6] - 889.645)/934.642;
   input7 = (input[7] - 914.772)/925.517;
   input8 = (input[8] - 926.027)/976.235;
   input9 = (input[9] - 896.522)/954.895;
   input10 = (input[10] - 993.444)/961.862;
   input11 = (input[11] - 403.269)/416.363;
   input12 = (input[12] - 401.415)/414.637;
   input13 = (input[13] - 500.2)/515.102;
   input14 = (input[14] - 700.551)/794.959;
   input15 = (input[15] - 702.15)/798.471;
   input16 = (input[16] - 531.64)/555.074;
   input17 = (input[17] - 769.642)/907.345;
   input18 = (input[18] - 754.345)/904.243;
   input19 = (input[19] - 806.979)/884.192;
   input20 = (input[20] - -4.15452)/487.008;
   input21 = (input[21] - 6.19337)/1161.02;
   input22 = (input[22] - 6.4586)/1204.5;
   input23 = (input[23] - -195.938)/596.275;
   switch(index) {
     case 0:
         return neuron0x2c464a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuL::neuron0x2c12560() {
   return input0;
}

double NNfunction_sb_sLuL::neuron0x2c128a0() {
   return input1;
}

double NNfunction_sb_sLuL::neuron0x2c12be0() {
   return input2;
}

double NNfunction_sb_sLuL::neuron0x2c12f20() {
   return input3;
}

double NNfunction_sb_sLuL::neuron0x2c13260() {
   return input4;
}

double NNfunction_sb_sLuL::neuron0x2c135a0() {
   return input5;
}

double NNfunction_sb_sLuL::neuron0x2c138e0() {
   return input6;
}

double NNfunction_sb_sLuL::neuron0x2c13c20() {
   return input7;
}

double NNfunction_sb_sLuL::neuron0x2c13f60() {
   return input8;
}

double NNfunction_sb_sLuL::neuron0x2c142a0() {
   return input9;
}

double NNfunction_sb_sLuL::neuron0x2c145e0() {
   return input10;
}

double NNfunction_sb_sLuL::neuron0x2c14920() {
   return input11;
}

double NNfunction_sb_sLuL::neuron0x2c14c60() {
   return input12;
}

double NNfunction_sb_sLuL::neuron0x2c14fa0() {
   return input13;
}

double NNfunction_sb_sLuL::neuron0x2c152e0() {
   return input14;
}

double NNfunction_sb_sLuL::neuron0x2c15620() {
   return input15;
}

double NNfunction_sb_sLuL::neuron0x2c15960() {
   return input16;
}

double NNfunction_sb_sLuL::neuron0x2c15ec0() {
   return input17;
}

double NNfunction_sb_sLuL::neuron0x2c160e0() {
   return input18;
}

double NNfunction_sb_sLuL::neuron0x2c16420() {
   return input19;
}

double NNfunction_sb_sLuL::neuron0x2c16760() {
   return input20;
}

double NNfunction_sb_sLuL::neuron0x2c16aa0() {
   return input21;
}

double NNfunction_sb_sLuL::neuron0x2c16de0() {
   return input22;
}

double NNfunction_sb_sLuL::neuron0x2c17120() {
   return input23;
}

double NNfunction_sb_sLuL::input0x2c175c0() {
   double input = 0.136345;
   input += synapse0x29d23d0();
   input += synapse0x2c12420();
   input += synapse0x2c12460();
   input += synapse0x2c17870();
   input += synapse0x2c178b0();
   input += synapse0x2c178f0();
   input += synapse0x2c17930();
   input += synapse0x2c17970();
   input += synapse0x2c179b0();
   input += synapse0x2c179f0();
   input += synapse0x2c17a30();
   input += synapse0x2c17a70();
   input += synapse0x2c17ab0();
   input += synapse0x2c17af0();
   input += synapse0x2c17b30();
   input += synapse0x2c17b70();
   input += synapse0x2c12390();
   input += synapse0x2c123d0();
   input += synapse0x29c3c70();
   input += synapse0x29c3cb0();
   input += synapse0x2c17dd0();
   input += synapse0x2c17e10();
   input += synapse0x2c17e50();
   input += synapse0x2c17e90();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c175c0() {
   double input = input0x2c175c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c17ed0() {
   double input = -0.648175;
   input += synapse0x2c18210();
   input += synapse0x2c18250();
   input += synapse0x2c18290();
   input += synapse0x2c182d0();
   input += synapse0x2c18310();
   input += synapse0x2c18350();
   input += synapse0x2c18390();
   input += synapse0x2c183d0();
   input += synapse0x2c18410();
   input += synapse0x2c17cc0();
   input += synapse0x2c17d00();
   input += synapse0x2c17d40();
   input += synapse0x2c17d80();
   input += synapse0x2c18660();
   input += synapse0x2c186a0();
   input += synapse0x2c186e0();
   input += synapse0x2c18060();
   input += synapse0x2c180a0();
   input += synapse0x2c18830();
   input += synapse0x2c18870();
   input += synapse0x2c188b0();
   input += synapse0x2c188f0();
   input += synapse0x2c18930();
   input += synapse0x2c18970();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c17ed0() {
   double input = input0x2c17ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c189b0() {
   double input = 3.1154;
   input += synapse0x2c18cf0();
   input += synapse0x2c18d30();
   input += synapse0x2c18d70();
   input += synapse0x2c18db0();
   input += synapse0x2c18df0();
   input += synapse0x2c18e30();
   input += synapse0x2c18e70();
   input += synapse0x2c18eb0();
   input += synapse0x2c18ef0();
   input += synapse0x2c18f30();
   input += synapse0x2c18f70();
   input += synapse0x2c18fb0();
   input += synapse0x2c18ff0();
   input += synapse0x2c19030();
   input += synapse0x2c19070();
   input += synapse0x2c190b0();
   input += synapse0x2c18b40();
   input += synapse0x2c18b80();
   input += synapse0x29d1ac0();
   input += synapse0x29d1b00();
   input += synapse0x2c015f0();
   input += synapse0x2c01630();
   input += synapse0x2c01670();
   input += synapse0x2c124a0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c189b0() {
   double input = input0x2c189b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x29d2240() {
   double input = 0.637324;
   input += synapse0x2c18600();
   input += synapse0x2c124e0();
   input += synapse0x2c12520();
   input += synapse0x2c19200();
   input += synapse0x2c19240();
   input += synapse0x2c19280();
   input += synapse0x2c192c0();
   input += synapse0x2c19300();
   input += synapse0x2c19340();
   input += synapse0x2c19380();
   input += synapse0x2c193c0();
   input += synapse0x2c19400();
   input += synapse0x2c19440();
   input += synapse0x2c19480();
   input += synapse0x2c194c0();
   input += synapse0x2c19500();
   input += synapse0x2c18450();
   input += synapse0x2c18490();
   input += synapse0x2c19650();
   input += synapse0x2c19690();
   input += synapse0x2c196d0();
   input += synapse0x2c19710();
   input += synapse0x2c19750();
   input += synapse0x2c19790();
   return input;
}

double NNfunction_sb_sLuL::neuron0x29d2240() {
   double input = input0x29d2240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c197d0() {
   double input = 0.335138;
   input += synapse0x2c19b10();
   input += synapse0x2c19b50();
   input += synapse0x2c19b90();
   input += synapse0x2c19bd0();
   input += synapse0x2c19c10();
   input += synapse0x2c19c50();
   input += synapse0x2c19c90();
   input += synapse0x2c19cd0();
   input += synapse0x2c19d10();
   input += synapse0x2c19d50();
   input += synapse0x2c19d90();
   input += synapse0x2c19dd0();
   input += synapse0x2c19e10();
   input += synapse0x2c19e50();
   input += synapse0x2c19e90();
   input += synapse0x2c19ed0();
   input += synapse0x2c19960();
   input += synapse0x2c199a0();
   input += synapse0x2c1a020();
   input += synapse0x2c1a060();
   input += synapse0x2c1a0a0();
   input += synapse0x2c1a0e0();
   input += synapse0x2c1a120();
   input += synapse0x2c1a160();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c197d0() {
   double input = input0x2c197d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1a1a0() {
   double input = -1.28089;
   input += synapse0x2c1a4e0();
   input += synapse0x2c1a520();
   input += synapse0x2c1a560();
   input += synapse0x2c1a5a0();
   input += synapse0x2c1a5e0();
   input += synapse0x2c1a620();
   input += synapse0x2c1a660();
   input += synapse0x2c1a6a0();
   input += synapse0x2c1a6e0();
   input += synapse0x29d1e30();
   input += synapse0x29d1e70();
   input += synapse0x29d1eb0();
   input += synapse0x29d1ef0();
   input += synapse0x29d1f30();
   input += synapse0x29d1f70();
   input += synapse0x29d1fb0();
   input += synapse0x2c1a330();
   input += synapse0x2c1a370();
   input += synapse0x29d2100();
   input += synapse0x29d2140();
   input += synapse0x29d2180();
   input += synapse0x29d21c0();
   input += synapse0x29d2200();
   input += synapse0x2c1af30();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1a1a0() {
   double input = input0x2c1a1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1af70() {
   double input = 0.0507531;
   input += synapse0x2c1b2b0();
   input += synapse0x2c1b2f0();
   input += synapse0x2c1b330();
   input += synapse0x2c1b370();
   input += synapse0x2c1b3b0();
   input += synapse0x2c1b3f0();
   input += synapse0x2c1b430();
   input += synapse0x2c1b470();
   input += synapse0x2c1b4b0();
   input += synapse0x2c1b4f0();
   input += synapse0x2c1b530();
   input += synapse0x2c1b570();
   input += synapse0x2c1b5b0();
   input += synapse0x2c1b5f0();
   input += synapse0x2c1b630();
   input += synapse0x2c1b670();
   input += synapse0x2c1b100();
   input += synapse0x2c1b140();
   input += synapse0x2c1b7c0();
   input += synapse0x2c1b800();
   input += synapse0x2c1b840();
   input += synapse0x2c1b880();
   input += synapse0x2c1b8c0();
   input += synapse0x2c1b900();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1af70() {
   double input = input0x2c1af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1b940() {
   double input = -4.86408;
   input += synapse0x2c1bc80();
   input += synapse0x2c1bcc0();
   input += synapse0x2c1bd00();
   input += synapse0x2c1bd40();
   input += synapse0x2c1bd80();
   input += synapse0x2c1bdc0();
   input += synapse0x2c1be00();
   input += synapse0x2c1be40();
   input += synapse0x2c1be80();
   input += synapse0x2c1bec0();
   input += synapse0x2c1bf00();
   input += synapse0x2c1bf40();
   input += synapse0x2c1bf80();
   input += synapse0x2c1bfc0();
   input += synapse0x2c1c000();
   input += synapse0x2c1c040();
   input += synapse0x2c1bad0();
   input += synapse0x2c1bb10();
   input += synapse0x2c1c190();
   input += synapse0x2c1c1d0();
   input += synapse0x2c1c210();
   input += synapse0x2c1c250();
   input += synapse0x2c1c290();
   input += synapse0x2c1c2d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1b940() {
   double input = input0x2c1b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1c310() {
   double input = -0.269256;
   input += synapse0x2c15db0();
   input += synapse0x2c15df0();
   input += synapse0x2c15e30();
   input += synapse0x2c15e70();
   input += synapse0x2c1c860();
   input += synapse0x2c1c8a0();
   input += synapse0x2c1c8e0();
   input += synapse0x2c1c920();
   input += synapse0x2c1c960();
   input += synapse0x2c1c9a0();
   input += synapse0x2c1c9e0();
   input += synapse0x2c1ca20();
   input += synapse0x2c1ca60();
   input += synapse0x2c1caa0();
   input += synapse0x2c1cae0();
   input += synapse0x2c1cb20();
   input += synapse0x2c1c4a0();
   input += synapse0x2c1c4e0();
   input += synapse0x2c1cc70();
   input += synapse0x2c1ccb0();
   input += synapse0x2c1ccf0();
   input += synapse0x2c1cd30();
   input += synapse0x2c1cd70();
   input += synapse0x2c1cdb0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1c310() {
   double input = input0x2c1c310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1cdf0() {
   double input = -1.39196;
   input += synapse0x2c1d130();
   input += synapse0x2c1d170();
   input += synapse0x2c1d1b0();
   input += synapse0x2c1d1f0();
   input += synapse0x2c1d230();
   input += synapse0x2c1d270();
   input += synapse0x2c1d2b0();
   input += synapse0x2c1d2f0();
   input += synapse0x2c1d330();
   input += synapse0x2c1d370();
   input += synapse0x2c1d3b0();
   input += synapse0x2c1d3f0();
   input += synapse0x2c1d430();
   input += synapse0x2c1d470();
   input += synapse0x2c1d4b0();
   input += synapse0x2c1d4f0();
   input += synapse0x2c1cf80();
   input += synapse0x2c1cfc0();
   input += synapse0x2c1d640();
   input += synapse0x2c1d680();
   input += synapse0x2c1d6c0();
   input += synapse0x2c1d700();
   input += synapse0x2c1d740();
   input += synapse0x2c1d780();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1cdf0() {
   double input = input0x2c1cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1d7c0() {
   double input = 1.31301;
   input += synapse0x2c1db00();
   input += synapse0x2c1db40();
   input += synapse0x2c1db80();
   input += synapse0x2c1dbc0();
   input += synapse0x2c1dc00();
   input += synapse0x2c1dc40();
   input += synapse0x2c1dc80();
   input += synapse0x2c1dcc0();
   input += synapse0x2c1dd00();
   input += synapse0x2c1dd40();
   input += synapse0x2c1dd80();
   input += synapse0x2c1ddc0();
   input += synapse0x2c1de00();
   input += synapse0x2c1de40();
   input += synapse0x2c1de80();
   input += synapse0x2c1dec0();
   input += synapse0x2c1d950();
   input += synapse0x2c1d990();
   input += synapse0x2c1a720();
   input += synapse0x2c1a760();
   input += synapse0x2c1a7a0();
   input += synapse0x2c1a7e0();
   input += synapse0x2c1a820();
   input += synapse0x2c1a860();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1d7c0() {
   double input = input0x2c1d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1a8a0() {
   double input = -0.0455642;
   input += synapse0x2c1abe0();
   input += synapse0x2c1ac20();
   input += synapse0x2c1ac60();
   input += synapse0x2c1aca0();
   input += synapse0x2c1ace0();
   input += synapse0x2c1ad20();
   input += synapse0x2c1ad60();
   input += synapse0x2c1ada0();
   input += synapse0x2c1ade0();
   input += synapse0x2c1ae20();
   input += synapse0x2c1ae60();
   input += synapse0x2c1aea0();
   input += synapse0x2c1aee0();
   input += synapse0x2c1f020();
   input += synapse0x2c1f060();
   input += synapse0x2c1f0a0();
   input += synapse0x2c1aa30();
   input += synapse0x2c1aa70();
   input += synapse0x2c1f1f0();
   input += synapse0x2c1f230();
   input += synapse0x2c1f270();
   input += synapse0x2c1f2b0();
   input += synapse0x2c1f2f0();
   input += synapse0x2c1f330();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1a8a0() {
   double input = input0x2c1a8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1f370() {
   double input = -0.00581788;
   input += synapse0x2c1f6b0();
   input += synapse0x2c1f6f0();
   input += synapse0x2c1f730();
   input += synapse0x2c1f770();
   input += synapse0x2c1f7b0();
   input += synapse0x2c1f7f0();
   input += synapse0x2c1f830();
   input += synapse0x2c1f870();
   input += synapse0x2c1f8b0();
   input += synapse0x2c1f8f0();
   input += synapse0x2c1f930();
   input += synapse0x2c1f970();
   input += synapse0x2c1f9b0();
   input += synapse0x2c1f9f0();
   input += synapse0x2c1fa30();
   input += synapse0x2c1fa70();
   input += synapse0x2c1f500();
   input += synapse0x2c1f540();
   input += synapse0x2c1fbc0();
   input += synapse0x2c1fc00();
   input += synapse0x2c1fc40();
   input += synapse0x2c1fc80();
   input += synapse0x2c1fcc0();
   input += synapse0x2c1fd00();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1f370() {
   double input = input0x2c1f370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1fd40() {
   double input = 0.983998;
   input += synapse0x2c20080();
   input += synapse0x2c200c0();
   input += synapse0x2c20100();
   input += synapse0x2c20140();
   input += synapse0x2c20180();
   input += synapse0x2c201c0();
   input += synapse0x2c20200();
   input += synapse0x2c20240();
   input += synapse0x2c20280();
   input += synapse0x2c202c0();
   input += synapse0x2c20300();
   input += synapse0x2c20340();
   input += synapse0x2c20380();
   input += synapse0x2c203c0();
   input += synapse0x2c20400();
   input += synapse0x2c20440();
   input += synapse0x2c1fed0();
   input += synapse0x2c1ff10();
   input += synapse0x2c20590();
   input += synapse0x2c205d0();
   input += synapse0x2c20610();
   input += synapse0x2c20650();
   input += synapse0x2c20690();
   input += synapse0x2c206d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1fd40() {
   double input = input0x2c1fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c20710() {
   double input = 0.905459;
   input += synapse0x2c20a50();
   input += synapse0x2c20a90();
   input += synapse0x2c20ad0();
   input += synapse0x2c20b10();
   input += synapse0x2c20b50();
   input += synapse0x2c20b90();
   input += synapse0x2c20bd0();
   input += synapse0x2c20c10();
   input += synapse0x2c20c50();
   input += synapse0x2c20c90();
   input += synapse0x2c20cd0();
   input += synapse0x2c20d10();
   input += synapse0x2c20d50();
   input += synapse0x2c20d90();
   input += synapse0x2c20dd0();
   input += synapse0x2c20e10();
   input += synapse0x2c208a0();
   input += synapse0x2c208e0();
   input += synapse0x2c20f60();
   input += synapse0x2c20fa0();
   input += synapse0x2c20fe0();
   input += synapse0x2c21020();
   input += synapse0x2c21060();
   input += synapse0x2c210a0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c20710() {
   double input = input0x2c20710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c210e0() {
   double input = 0.123522;
   input += synapse0x2c21420();
   input += synapse0x2c12780();
   input += synapse0x2c127c0();
   input += synapse0x2c12ac0();
   input += synapse0x2c12b00();
   input += synapse0x2c12e00();
   input += synapse0x2c12e40();
   input += synapse0x2c13140();
   input += synapse0x2c13180();
   input += synapse0x2c13480();
   input += synapse0x2c134c0();
   input += synapse0x2c137c0();
   input += synapse0x2c13800();
   input += synapse0x2c13b00();
   input += synapse0x2c13b40();
   input += synapse0x2c13e40();
   input += synapse0x2c13e80();
   input += synapse0x2c14180();
   input += synapse0x2c141c0();
   input += synapse0x2c144c0();
   input += synapse0x2c14500();
   input += synapse0x2c14800();
   input += synapse0x2c14840();
   input += synapse0x2c14b40();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c210e0() {
   double input = input0x2c210e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c22ef0() {
   double input = -0.856987;
   input += synapse0x2c14b80();
   input += synapse0x2c15840();
   input += synapse0x2c15880();
   input += synapse0x2c21270();
   input += synapse0x2c212b0();
   input += synapse0x2c15b80();
   input += synapse0x2c15bc0();
   input += synapse0x29c3b50();
   input += synapse0x29c3b90();
   input += synapse0x2c16300();
   input += synapse0x2c16340();
   input += synapse0x2c16640();
   input += synapse0x2c16680();
   input += synapse0x2c16980();
   input += synapse0x2c169c0();
   input += synapse0x2c16cc0();
   input += synapse0x2c16d00();
   input += synapse0x2c17000();
   input += synapse0x2c17040();
   input += synapse0x2c17340();
   input += synapse0x2c17380();
   input += synapse0x2c14e80();
   input += synapse0x2c14ec0();
   input += synapse0x2c23190();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c22ef0() {
   double input = input0x2c22ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c231d0() {
   double input = -0.0655131;
   input += synapse0x2c23510();
   input += synapse0x2c23550();
   input += synapse0x2c23590();
   input += synapse0x2c235d0();
   input += synapse0x2c23610();
   input += synapse0x2c23650();
   input += synapse0x2c23690();
   input += synapse0x2c236d0();
   input += synapse0x2c23710();
   input += synapse0x2c23750();
   input += synapse0x2c23790();
   input += synapse0x2c237d0();
   input += synapse0x2c23810();
   input += synapse0x2c23850();
   input += synapse0x2c23890();
   input += synapse0x2c238d0();
   input += synapse0x2c23360();
   input += synapse0x2c233a0();
   input += synapse0x2c23a20();
   input += synapse0x2c23a60();
   input += synapse0x2c23aa0();
   input += synapse0x2c23ae0();
   input += synapse0x2c23b20();
   input += synapse0x2c23b60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c231d0() {
   double input = input0x2c231d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c23ba0() {
   double input = 0.419263;
   input += synapse0x2c23ee0();
   input += synapse0x2c23f20();
   input += synapse0x2c23f60();
   input += synapse0x2c23fa0();
   input += synapse0x2c23fe0();
   input += synapse0x2c24020();
   input += synapse0x2c24060();
   input += synapse0x2c240a0();
   input += synapse0x2c240e0();
   input += synapse0x2c24120();
   input += synapse0x2c24160();
   input += synapse0x2c241a0();
   input += synapse0x2c241e0();
   input += synapse0x2c24220();
   input += synapse0x2c24260();
   input += synapse0x2c242a0();
   input += synapse0x2c23d30();
   input += synapse0x2c23d70();
   input += synapse0x2c243f0();
   input += synapse0x2c24430();
   input += synapse0x2c24470();
   input += synapse0x2c244b0();
   input += synapse0x2c244f0();
   input += synapse0x2c24530();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c23ba0() {
   double input = input0x2c23ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c24570() {
   double input = 0.824839;
   input += synapse0x2c248b0();
   input += synapse0x2c248f0();
   input += synapse0x2c24930();
   input += synapse0x2c24970();
   input += synapse0x2c249b0();
   input += synapse0x2c249f0();
   input += synapse0x2c24a30();
   input += synapse0x2c24a70();
   input += synapse0x2c24ab0();
   input += synapse0x2c24af0();
   input += synapse0x2c24b30();
   input += synapse0x2c24b70();
   input += synapse0x2c24bb0();
   input += synapse0x2c24bf0();
   input += synapse0x2c24c30();
   input += synapse0x2c24c70();
   input += synapse0x2c24700();
   input += synapse0x2c24740();
   input += synapse0x2c24dc0();
   input += synapse0x2c24e00();
   input += synapse0x2c24e40();
   input += synapse0x2c24e80();
   input += synapse0x2c24ec0();
   input += synapse0x2c24f00();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c24570() {
   double input = input0x2c24570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c24f40() {
   double input = -0.0253808;
   input += synapse0x2c25280();
   input += synapse0x2c252c0();
   input += synapse0x2c25300();
   input += synapse0x2c25340();
   input += synapse0x2c25380();
   input += synapse0x2c253c0();
   input += synapse0x2c25400();
   input += synapse0x2c25440();
   input += synapse0x2c25480();
   input += synapse0x2c254c0();
   input += synapse0x2c25500();
   input += synapse0x2c25540();
   input += synapse0x2c25580();
   input += synapse0x2c255c0();
   input += synapse0x2c25600();
   input += synapse0x2c25640();
   input += synapse0x2c250d0();
   input += synapse0x2c25110();
   input += synapse0x2c25790();
   input += synapse0x2c257d0();
   input += synapse0x2c25810();
   input += synapse0x2c25850();
   input += synapse0x2c25890();
   input += synapse0x2c258d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c24f40() {
   double input = input0x2c24f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c25910() {
   double input = 0.422145;
   input += synapse0x2c25c50();
   input += synapse0x2c25c90();
   input += synapse0x2c25cd0();
   input += synapse0x2c25d10();
   input += synapse0x2c25d50();
   input += synapse0x2c25d90();
   input += synapse0x2c25dd0();
   input += synapse0x2c25e10();
   input += synapse0x2c25e50();
   input += synapse0x2c1e010();
   input += synapse0x2c1e050();
   input += synapse0x2c1e090();
   input += synapse0x2c1e0d0();
   input += synapse0x2c1e110();
   input += synapse0x2c1e150();
   input += synapse0x2c1e190();
   input += synapse0x2c25aa0();
   input += synapse0x2c25ae0();
   input += synapse0x2c1e2e0();
   input += synapse0x2c1e320();
   input += synapse0x2c1e360();
   input += synapse0x2c1e3a0();
   input += synapse0x2c1e3e0();
   input += synapse0x2c1e420();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c25910() {
   double input = input0x2c25910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1e460() {
   double input = 0.00824661;
   input += synapse0x2c1e7a0();
   input += synapse0x2c1e7e0();
   input += synapse0x2c1e820();
   input += synapse0x2c1e860();
   input += synapse0x2c1e8a0();
   input += synapse0x2c1e8e0();
   input += synapse0x2c1e920();
   input += synapse0x2c1e960();
   input += synapse0x2c1e9a0();
   input += synapse0x2c1e9e0();
   input += synapse0x2c1ea20();
   input += synapse0x2c1ea60();
   input += synapse0x2c1eaa0();
   input += synapse0x2c1eae0();
   input += synapse0x2c1eb20();
   input += synapse0x2c1eb60();
   input += synapse0x2c1e5f0();
   input += synapse0x2c1e630();
   input += synapse0x2c1ecb0();
   input += synapse0x2c1ecf0();
   input += synapse0x2c1ed30();
   input += synapse0x2c1ed70();
   input += synapse0x2c1edb0();
   input += synapse0x2c1edf0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1e460() {
   double input = input0x2c1e460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c1ee30() {
   double input = -1.5971;
   input += synapse0x2c1efc0();
   input += synapse0x2c28050();
   input += synapse0x2c28090();
   input += synapse0x2c280d0();
   input += synapse0x2c28110();
   input += synapse0x2c28150();
   input += synapse0x2c28190();
   input += synapse0x2c281d0();
   input += synapse0x2c28210();
   input += synapse0x2c28250();
   input += synapse0x2c28290();
   input += synapse0x2c282d0();
   input += synapse0x2c28310();
   input += synapse0x2c28350();
   input += synapse0x2c28390();
   input += synapse0x2c283d0();
   input += synapse0x2c27ea0();
   input += synapse0x2c27ee0();
   input += synapse0x2c28520();
   input += synapse0x2c28560();
   input += synapse0x2c285a0();
   input += synapse0x2c285e0();
   input += synapse0x2c28620();
   input += synapse0x2c28660();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c1ee30() {
   double input = input0x2c1ee30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c286a0() {
   double input = 0.664442;
   input += synapse0x2c289e0();
   input += synapse0x2c28a20();
   input += synapse0x2c28a60();
   input += synapse0x2c28aa0();
   input += synapse0x2c28ae0();
   input += synapse0x2c28b20();
   input += synapse0x2c28b60();
   input += synapse0x2c28ba0();
   input += synapse0x2c28be0();
   input += synapse0x2c28c20();
   input += synapse0x2c28c60();
   input += synapse0x2c28ca0();
   input += synapse0x2c28ce0();
   input += synapse0x2c28d20();
   input += synapse0x2c28d60();
   input += synapse0x2c28da0();
   input += synapse0x2c28830();
   input += synapse0x2c28870();
   input += synapse0x2c28ef0();
   input += synapse0x2c28f30();
   input += synapse0x2c28f70();
   input += synapse0x2c28fb0();
   input += synapse0x2c28ff0();
   input += synapse0x2c29030();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c286a0() {
   double input = input0x2c286a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c29070() {
   double input = -0.126602;
   input += synapse0x2c293b0();
   input += synapse0x2c293f0();
   input += synapse0x2c29430();
   input += synapse0x2c29470();
   input += synapse0x2c294b0();
   input += synapse0x2c294f0();
   input += synapse0x2c29530();
   input += synapse0x2c29570();
   input += synapse0x2c295b0();
   input += synapse0x2c295f0();
   input += synapse0x2c29630();
   input += synapse0x2c29670();
   input += synapse0x2c296b0();
   input += synapse0x2c296f0();
   input += synapse0x2c29730();
   input += synapse0x2c29770();
   input += synapse0x2c29200();
   input += synapse0x2c29240();
   input += synapse0x2c298c0();
   input += synapse0x2c29900();
   input += synapse0x2c29940();
   input += synapse0x2c29980();
   input += synapse0x2c299c0();
   input += synapse0x2c29a00();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c29070() {
   double input = input0x2c29070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c29a40() {
   double input = -2.87495;
   input += synapse0x2c29d80();
   input += synapse0x2c29dc0();
   input += synapse0x2c29e00();
   input += synapse0x2c29e40();
   input += synapse0x2c29e80();
   input += synapse0x2c29ec0();
   input += synapse0x2c29f00();
   input += synapse0x2c29f40();
   input += synapse0x2c29f80();
   input += synapse0x2c29fc0();
   input += synapse0x2c2a000();
   input += synapse0x2c2a040();
   input += synapse0x2c2a080();
   input += synapse0x2c2a0c0();
   input += synapse0x2c2a100();
   input += synapse0x2c2a140();
   input += synapse0x2c29bd0();
   input += synapse0x2c29c10();
   input += synapse0x2c2a290();
   input += synapse0x2c2a2d0();
   input += synapse0x2c2a310();
   input += synapse0x2c2a350();
   input += synapse0x2c2a390();
   input += synapse0x2c2a3d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c29a40() {
   double input = input0x2c29a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2a410() {
   double input = -1.4421;
   input += synapse0x2c2a750();
   input += synapse0x2c2a790();
   input += synapse0x2c2a7d0();
   input += synapse0x2c2a810();
   input += synapse0x2c2a850();
   input += synapse0x2c2a890();
   input += synapse0x2c2a8d0();
   input += synapse0x2c2a910();
   input += synapse0x2c2a950();
   input += synapse0x2c2a990();
   input += synapse0x2c2a9d0();
   input += synapse0x2c2aa10();
   input += synapse0x2c2aa50();
   input += synapse0x2c2aa90();
   input += synapse0x2c2aad0();
   input += synapse0x2c2ab10();
   input += synapse0x2c2a5a0();
   input += synapse0x2c2a5e0();
   input += synapse0x2c2ac60();
   input += synapse0x2c2aca0();
   input += synapse0x2c2ace0();
   input += synapse0x2c2ad20();
   input += synapse0x2c2ad60();
   input += synapse0x2c2ada0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2a410() {
   double input = input0x2c2a410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2ade0() {
   double input = 0.172822;
   input += synapse0x2c2b120();
   input += synapse0x2c2b160();
   input += synapse0x2c2b1a0();
   input += synapse0x2c2b1e0();
   input += synapse0x2c2b220();
   input += synapse0x2c2b260();
   input += synapse0x2c2b2a0();
   input += synapse0x2c2b2e0();
   input += synapse0x2c2b320();
   input += synapse0x2c2b360();
   input += synapse0x2c2b3a0();
   input += synapse0x2c2b3e0();
   input += synapse0x2c2b420();
   input += synapse0x2c2b460();
   input += synapse0x2c2b4a0();
   input += synapse0x2c2b4e0();
   input += synapse0x2c2af70();
   input += synapse0x2c2afb0();
   input += synapse0x2c2b630();
   input += synapse0x2c2b670();
   input += synapse0x2c2b6b0();
   input += synapse0x2c2b6f0();
   input += synapse0x2c2b730();
   input += synapse0x2c2b770();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2ade0() {
   double input = input0x2c2ade0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2b7b0() {
   double input = 1.46659;
   input += synapse0x2c2baf0();
   input += synapse0x2c2bb30();
   input += synapse0x2c2bb70();
   input += synapse0x2c2bbb0();
   input += synapse0x2c2bbf0();
   input += synapse0x2c2bc30();
   input += synapse0x2c2bc70();
   input += synapse0x2c2bcb0();
   input += synapse0x2c2bcf0();
   input += synapse0x2c2bd30();
   input += synapse0x2c2bd70();
   input += synapse0x2c2bdb0();
   input += synapse0x2c2bdf0();
   input += synapse0x2c2be30();
   input += synapse0x2c2be70();
   input += synapse0x2c2beb0();
   input += synapse0x2c2b940();
   input += synapse0x2c2b980();
   input += synapse0x2c2c000();
   input += synapse0x2c2c040();
   input += synapse0x2c2c080();
   input += synapse0x2c2c0c0();
   input += synapse0x2c2c100();
   input += synapse0x2c2c140();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2b7b0() {
   double input = input0x2c2b7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2c180() {
   double input = -0.733998;
   input += synapse0x2c2c4c0();
   input += synapse0x2c2c500();
   input += synapse0x2c2c540();
   input += synapse0x2c2c580();
   input += synapse0x2c2c5c0();
   input += synapse0x2c2c600();
   input += synapse0x2c2c640();
   input += synapse0x2c2c680();
   input += synapse0x2c2c6c0();
   input += synapse0x2c2c700();
   input += synapse0x2c2c740();
   input += synapse0x2c2c780();
   input += synapse0x2c2c7c0();
   input += synapse0x2c2c800();
   input += synapse0x2c2c840();
   input += synapse0x2c2c880();
   input += synapse0x2c2c310();
   input += synapse0x2c2c350();
   input += synapse0x2c2c9d0();
   input += synapse0x2c2ca10();
   input += synapse0x2c2ca50();
   input += synapse0x2c2ca90();
   input += synapse0x2c2cad0();
   input += synapse0x2c2cb10();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2c180() {
   double input = input0x2c2c180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2cb50() {
   double input = 1.50358;
   input += synapse0x2c2ce90();
   input += synapse0x2c21460();
   input += synapse0x2c214a0();
   input += synapse0x2c214e0();
   input += synapse0x2c21730();
   input += synapse0x2c21770();
   input += synapse0x2c217b0();
   input += synapse0x2c21a00();
   input += synapse0x2c21a40();
   input += synapse0x2c21c90();
   input += synapse0x2c21cd0();
   input += synapse0x2c21d10();
   input += synapse0x2c21f60();
   input += synapse0x2c21fa0();
   input += synapse0x2c221f0();
   input += synapse0x2c22230();
   input += synapse0x2c2cce0();
   input += synapse0x2c2cd20();
   input += synapse0x2c22380();
   input += synapse0x2c22890();
   input += synapse0x2c228d0();
   input += synapse0x2c22910();
   input += synapse0x2c22b60();
   input += synapse0x2c22ba0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2cb50() {
   double input = input0x2c2cb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c22be0() {
   double input = 0.473976;
   input += synapse0x2c22450();
   input += synapse0x2c22490();
   input += synapse0x2c224d0();
   input += synapse0x2c22510();
   input += synapse0x2c22e90();
   input += synapse0x2c2f1e0();
   input += synapse0x2c2f220();
   input += synapse0x2c2f260();
   input += synapse0x2c2f2a0();
   input += synapse0x2c2f2e0();
   input += synapse0x2c2f320();
   input += synapse0x2c2f360();
   input += synapse0x2c2f3a0();
   input += synapse0x2c2f3e0();
   input += synapse0x2c2f420();
   input += synapse0x2c2f460();
   input += synapse0x2c22d70();
   input += synapse0x2c22db0();
   input += synapse0x2c2f5b0();
   input += synapse0x2c2f5f0();
   input += synapse0x2c2f630();
   input += synapse0x2c2f670();
   input += synapse0x2c2f6b0();
   input += synapse0x2c2f6f0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c22be0() {
   double input = input0x2c22be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c2f730() {
   double input = 1.03928;
   input += synapse0x2c2fa70();
   input += synapse0x2c2fab0();
   input += synapse0x2c2faf0();
   input += synapse0x2c2fb30();
   input += synapse0x2c2fb70();
   input += synapse0x2c2fbb0();
   input += synapse0x2c2fbf0();
   input += synapse0x2c2fc30();
   input += synapse0x2c2fc70();
   input += synapse0x2c2fcb0();
   input += synapse0x2c2fcf0();
   input += synapse0x2c2fd30();
   input += synapse0x2c2fd70();
   input += synapse0x2c2fdb0();
   input += synapse0x2c2fdf0();
   input += synapse0x2c2fe30();
   input += synapse0x2c2f8c0();
   input += synapse0x2c2f900();
   input += synapse0x2c2ff80();
   input += synapse0x2c2ffc0();
   input += synapse0x2c30000();
   input += synapse0x2c30040();
   input += synapse0x2c30080();
   input += synapse0x2c300c0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c2f730() {
   double input = input0x2c2f730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c30100() {
   double input = -1.12125;
   input += synapse0x2c30440();
   input += synapse0x2c30480();
   input += synapse0x2c304c0();
   input += synapse0x2c30500();
   input += synapse0x2c30540();
   input += synapse0x2c30580();
   input += synapse0x2c305c0();
   input += synapse0x2c30600();
   input += synapse0x2c30640();
   input += synapse0x2c30680();
   input += synapse0x2c306c0();
   input += synapse0x2c30700();
   input += synapse0x2c30740();
   input += synapse0x2c30780();
   input += synapse0x2c307c0();
   input += synapse0x2c30800();
   input += synapse0x2c30290();
   input += synapse0x2c302d0();
   input += synapse0x2c30950();
   input += synapse0x2c30990();
   input += synapse0x2c309d0();
   input += synapse0x2c30a10();
   input += synapse0x2c30a50();
   input += synapse0x2c30a90();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c30100() {
   double input = input0x2c30100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c30ad0() {
   double input = -5.27081;
   input += synapse0x2c30e10();
   input += synapse0x2c30e50();
   input += synapse0x2c30e90();
   input += synapse0x2c30ed0();
   input += synapse0x2c30f10();
   input += synapse0x2c30f50();
   input += synapse0x2c30f90();
   input += synapse0x2c30fd0();
   input += synapse0x2c31010();
   input += synapse0x2c31050();
   input += synapse0x2c31090();
   input += synapse0x2c310d0();
   input += synapse0x2c31110();
   input += synapse0x2c31150();
   input += synapse0x2c31190();
   input += synapse0x2c311d0();
   input += synapse0x2c30c60();
   input += synapse0x2c30ca0();
   input += synapse0x2c31320();
   input += synapse0x2c31360();
   input += synapse0x2c313a0();
   input += synapse0x2c313e0();
   input += synapse0x2c31420();
   input += synapse0x2c31460();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c30ad0() {
   double input = input0x2c30ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c314a0() {
   double input = -0.750266;
   input += synapse0x2c317e0();
   input += synapse0x2c31820();
   input += synapse0x2c31860();
   input += synapse0x2c318a0();
   input += synapse0x2c318e0();
   input += synapse0x2c31920();
   input += synapse0x2c31960();
   input += synapse0x2c319a0();
   input += synapse0x2c319e0();
   input += synapse0x2c31a20();
   input += synapse0x2c31a60();
   input += synapse0x2c31aa0();
   input += synapse0x2c31ae0();
   input += synapse0x2c31b20();
   input += synapse0x2c31b60();
   input += synapse0x2c31ba0();
   input += synapse0x2c31630();
   input += synapse0x2c31670();
   input += synapse0x2c31cf0();
   input += synapse0x2c31d30();
   input += synapse0x2c31d70();
   input += synapse0x2c31db0();
   input += synapse0x2c31df0();
   input += synapse0x2c31e30();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c314a0() {
   double input = input0x2c314a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c31e70() {
   double input = 5.32654;
   input += synapse0x2c321b0();
   input += synapse0x2c321f0();
   input += synapse0x2c32230();
   input += synapse0x2c32270();
   input += synapse0x2c322b0();
   input += synapse0x2c322f0();
   input += synapse0x2c32330();
   input += synapse0x2c32370();
   input += synapse0x2c323b0();
   input += synapse0x2c323f0();
   input += synapse0x2c32430();
   input += synapse0x2c32470();
   input += synapse0x2c324b0();
   input += synapse0x2c324f0();
   input += synapse0x2c32530();
   input += synapse0x2c32570();
   input += synapse0x2c32000();
   input += synapse0x2c32040();
   input += synapse0x2c326c0();
   input += synapse0x2c32700();
   input += synapse0x2c32740();
   input += synapse0x2c32780();
   input += synapse0x2c327c0();
   input += synapse0x2c32800();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c31e70() {
   double input = input0x2c31e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c32840() {
   double input = -1.19753;
   input += synapse0x2c32b80();
   input += synapse0x2c32bc0();
   input += synapse0x2c32c00();
   input += synapse0x2c32c40();
   input += synapse0x2c32c80();
   input += synapse0x2c32cc0();
   input += synapse0x2c32d00();
   input += synapse0x2c32d40();
   input += synapse0x2c32d80();
   input += synapse0x2c32dc0();
   input += synapse0x2c32e00();
   input += synapse0x2c32e40();
   input += synapse0x2c32e80();
   input += synapse0x2c32ec0();
   input += synapse0x2c32f00();
   input += synapse0x2c32f40();
   input += synapse0x2c329d0();
   input += synapse0x2c32a10();
   input += synapse0x2c33090();
   input += synapse0x2c330d0();
   input += synapse0x2c33110();
   input += synapse0x2c33150();
   input += synapse0x2c33190();
   input += synapse0x2c331d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c32840() {
   double input = input0x2c32840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c33210() {
   double input = 1.04232;
   input += synapse0x2c33550();
   input += synapse0x2c33590();
   input += synapse0x2c335d0();
   input += synapse0x2c33610();
   input += synapse0x2c33650();
   input += synapse0x2c33690();
   input += synapse0x2c336d0();
   input += synapse0x2c33710();
   input += synapse0x2c33750();
   input += synapse0x2c33790();
   input += synapse0x2c337d0();
   input += synapse0x2c33810();
   input += synapse0x2c33850();
   input += synapse0x2c33890();
   input += synapse0x2c338d0();
   input += synapse0x2c33910();
   input += synapse0x2c333a0();
   input += synapse0x2c333e0();
   input += synapse0x2c33a60();
   input += synapse0x2c33aa0();
   input += synapse0x2c33ae0();
   input += synapse0x2c33b20();
   input += synapse0x2c33b60();
   input += synapse0x2c33ba0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c33210() {
   double input = input0x2c33210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c33be0() {
   double input = 0.160088;
   input += synapse0x2c1c650();
   input += synapse0x2c1c690();
   input += synapse0x2c1c6d0();
   input += synapse0x2c1c710();
   input += synapse0x2c1c750();
   input += synapse0x2c1c790();
   input += synapse0x2c1c7d0();
   input += synapse0x2c1c810();
   input += synapse0x2c34330();
   input += synapse0x2c34370();
   input += synapse0x2c343b0();
   input += synapse0x2c343f0();
   input += synapse0x2c34430();
   input += synapse0x2c34470();
   input += synapse0x2c344b0();
   input += synapse0x2c344f0();
   input += synapse0x2c33d70();
   input += synapse0x2c33db0();
   input += synapse0x2c34640();
   input += synapse0x2c34680();
   input += synapse0x2c346c0();
   input += synapse0x2c34700();
   input += synapse0x2c34740();
   input += synapse0x2c34780();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c33be0() {
   double input = input0x2c33be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c347c0() {
   double input = 1.46809;
   input += synapse0x2c34b00();
   input += synapse0x2c34b40();
   input += synapse0x2c34b80();
   input += synapse0x2c34bc0();
   input += synapse0x2c34c00();
   input += synapse0x2c34c40();
   input += synapse0x2c34c80();
   input += synapse0x2c34cc0();
   input += synapse0x2c34d00();
   input += synapse0x2c34d40();
   input += synapse0x2c34d80();
   input += synapse0x2c34dc0();
   input += synapse0x2c34e00();
   input += synapse0x2c34e40();
   input += synapse0x2c34e80();
   input += synapse0x2c34ec0();
   input += synapse0x2c34950();
   input += synapse0x2c34990();
   input += synapse0x2c35010();
   input += synapse0x2c35050();
   input += synapse0x2c35090();
   input += synapse0x2c350d0();
   input += synapse0x2c35110();
   input += synapse0x2c35150();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c347c0() {
   double input = input0x2c347c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c35190() {
   double input = 1.44789;
   input += synapse0x2c354d0();
   input += synapse0x2c35510();
   input += synapse0x2c35550();
   input += synapse0x2c35590();
   input += synapse0x2c355d0();
   input += synapse0x2c35610();
   input += synapse0x2c35650();
   input += synapse0x2c35690();
   input += synapse0x2c356d0();
   input += synapse0x2c35710();
   input += synapse0x2c35750();
   input += synapse0x2c35790();
   input += synapse0x2c357d0();
   input += synapse0x2c35810();
   input += synapse0x2c35850();
   input += synapse0x2c35890();
   input += synapse0x2c35320();
   input += synapse0x2c35360();
   input += synapse0x2c25e90();
   input += synapse0x2c25ed0();
   input += synapse0x2c25f10();
   input += synapse0x2c25f50();
   input += synapse0x2c25f90();
   input += synapse0x2c25fd0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c35190() {
   double input = input0x2c35190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c26010() {
   double input = 1.06969;
   input += synapse0x2c26350();
   input += synapse0x2c26390();
   input += synapse0x2c263d0();
   input += synapse0x2c26410();
   input += synapse0x2c26450();
   input += synapse0x2c26490();
   input += synapse0x2c264d0();
   input += synapse0x2c26510();
   input += synapse0x2c26550();
   input += synapse0x2c26590();
   input += synapse0x2c265d0();
   input += synapse0x2c26610();
   input += synapse0x2c26650();
   input += synapse0x2c26690();
   input += synapse0x2c266d0();
   input += synapse0x2c26710();
   input += synapse0x2c261a0();
   input += synapse0x2c261e0();
   input += synapse0x2c26860();
   input += synapse0x2c268a0();
   input += synapse0x2c268e0();
   input += synapse0x2c26920();
   input += synapse0x2c26960();
   input += synapse0x2c269a0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c26010() {
   double input = input0x2c26010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c269e0() {
   double input = 0.312739;
   input += synapse0x2c26d20();
   input += synapse0x2c26d60();
   input += synapse0x2c26da0();
   input += synapse0x2c26de0();
   input += synapse0x2c26e20();
   input += synapse0x2c26e60();
   input += synapse0x2c26ea0();
   input += synapse0x2c26ee0();
   input += synapse0x2c26f20();
   input += synapse0x2c26f60();
   input += synapse0x2c26fa0();
   input += synapse0x2c26fe0();
   input += synapse0x2c27020();
   input += synapse0x2c27060();
   input += synapse0x2c270a0();
   input += synapse0x2c270e0();
   input += synapse0x2c26b70();
   input += synapse0x2c26bb0();
   input += synapse0x2c27230();
   input += synapse0x2c27270();
   input += synapse0x2c272b0();
   input += synapse0x2c272f0();
   input += synapse0x2c27330();
   input += synapse0x2c27370();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c269e0() {
   double input = input0x2c269e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c273b0() {
   double input = 1.63888;
   input += synapse0x2c276f0();
   input += synapse0x2c27730();
   input += synapse0x2c27770();
   input += synapse0x2c277b0();
   input += synapse0x2c277f0();
   input += synapse0x2c27830();
   input += synapse0x2c27870();
   input += synapse0x2c278b0();
   input += synapse0x2c278f0();
   input += synapse0x2c27930();
   input += synapse0x2c27970();
   input += synapse0x2c279b0();
   input += synapse0x2c279f0();
   input += synapse0x2c27a30();
   input += synapse0x2c27a70();
   input += synapse0x2c27ab0();
   input += synapse0x2c27540();
   input += synapse0x2c27580();
   input += synapse0x2c27c00();
   input += synapse0x2c27c40();
   input += synapse0x2c27c80();
   input += synapse0x2c27cc0();
   input += synapse0x2c27d00();
   input += synapse0x2c27d40();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c273b0() {
   double input = input0x2c273b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c399f0() {
   double input = 0.571526;
   input += synapse0x2c39c10();
   input += synapse0x2c39c50();
   input += synapse0x2c39c90();
   input += synapse0x2c39cd0();
   input += synapse0x2c39d10();
   input += synapse0x2c39d50();
   input += synapse0x2c39d90();
   input += synapse0x2c39dd0();
   input += synapse0x2c39e10();
   input += synapse0x2c39e50();
   input += synapse0x2c39e90();
   input += synapse0x2c39ed0();
   input += synapse0x2c39f10();
   input += synapse0x2c39f50();
   input += synapse0x2c39f90();
   input += synapse0x2c39fd0();
   input += synapse0x2c27d80();
   input += synapse0x2c27dc0();
   input += synapse0x2c3a120();
   input += synapse0x2c3a160();
   input += synapse0x2c3a1a0();
   input += synapse0x2c3a1e0();
   input += synapse0x2c3a220();
   input += synapse0x2c3a260();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c399f0() {
   double input = input0x2c399f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c3a2a0() {
   double input = 0.167158;
   input += synapse0x2c3a5e0();
   input += synapse0x2c3a620();
   input += synapse0x2c3a660();
   input += synapse0x2c3a6a0();
   input += synapse0x2c3a6e0();
   input += synapse0x2c3a720();
   input += synapse0x2c3a760();
   input += synapse0x2c3a7a0();
   input += synapse0x2c3a7e0();
   input += synapse0x2c3a820();
   input += synapse0x2c3a860();
   input += synapse0x2c3a8a0();
   input += synapse0x2c3a8e0();
   input += synapse0x2c3a920();
   input += synapse0x2c3a960();
   input += synapse0x2c3a9a0();
   input += synapse0x2c3a430();
   input += synapse0x2c3a470();
   input += synapse0x2c3aaf0();
   input += synapse0x2c3ab30();
   input += synapse0x2c3ab70();
   input += synapse0x2c3abb0();
   input += synapse0x2c3abf0();
   input += synapse0x2c3ac30();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c3a2a0() {
   double input = input0x2c3a2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c3ac70() {
   double input = 0.220095;
   input += synapse0x2c3afb0();
   input += synapse0x2c3aff0();
   input += synapse0x2c3b030();
   input += synapse0x2c3b070();
   input += synapse0x2c3b0b0();
   input += synapse0x2c3b0f0();
   input += synapse0x2c3b130();
   input += synapse0x2c3b170();
   input += synapse0x2c3b1b0();
   input += synapse0x2c3b1f0();
   input += synapse0x2c3b230();
   input += synapse0x2c3b270();
   input += synapse0x2c3b2b0();
   input += synapse0x2c3b2f0();
   input += synapse0x2c3b330();
   input += synapse0x2c3b370();
   input += synapse0x2c3ae00();
   input += synapse0x2c3ae40();
   input += synapse0x2c3b4c0();
   input += synapse0x2c3b500();
   input += synapse0x2c3b540();
   input += synapse0x2c3b580();
   input += synapse0x2c3b5c0();
   input += synapse0x2c3b600();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c3ac70() {
   double input = input0x2c3ac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c3b640() {
   double input = 2.01343;
   input += synapse0x2c3b980();
   input += synapse0x2c3b9c0();
   input += synapse0x2c3ba00();
   input += synapse0x2c3ba40();
   input += synapse0x2c3ba80();
   input += synapse0x2c3bac0();
   input += synapse0x2c3bb00();
   input += synapse0x2c3bb40();
   input += synapse0x2c3bb80();
   input += synapse0x2c3bbc0();
   input += synapse0x2c3bc00();
   input += synapse0x2c3bc40();
   input += synapse0x2c3bc80();
   input += synapse0x2c3bcc0();
   input += synapse0x2c3bd00();
   input += synapse0x2c3bd40();
   input += synapse0x2c3b7d0();
   input += synapse0x2c3b810();
   input += synapse0x2c3be90();
   input += synapse0x2c3bed0();
   input += synapse0x2c3bf10();
   input += synapse0x2c3bf50();
   input += synapse0x2c3bf90();
   input += synapse0x2c3bfd0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c3b640() {
   double input = input0x2c3b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c42840() {
   double input = -0.0765912;
   input += synapse0x2c18570();
   input += synapse0x2c185b0();
   input += synapse0x2c19a80();
   input += synapse0x2c19ac0();
   input += synapse0x2c1a450();
   input += synapse0x2c1a490();
   input += synapse0x2c1b220();
   input += synapse0x2c1b260();
   input += synapse0x2c1bbf0();
   input += synapse0x2c1bc30();
   input += synapse0x2c1c5c0();
   input += synapse0x2c1c600();
   input += synapse0x2c1d0a0();
   input += synapse0x2c1d0e0();
   input += synapse0x2c1da70();
   input += synapse0x2c1dab0();
   input += synapse0x2c1ab50();
   input += synapse0x2c1ab90();
   input += synapse0x2c1f620();
   input += synapse0x2c1f660();
   input += synapse0x2c1fff0();
   input += synapse0x2c20030();
   input += synapse0x2c209c0();
   input += synapse0x2c20a00();
   input += synapse0x2c21390();
   input += synapse0x2c213d0();
   input += synapse0x2c15500();
   input += synapse0x2c15540();
   input += synapse0x2c23480();
   input += synapse0x2c234c0();
   input += synapse0x2c23e50();
   input += synapse0x2c23e90();
   input += synapse0x2c24820();
   input += synapse0x2c24860();
   input += synapse0x2c251f0();
   input += synapse0x2c25230();
   input += synapse0x2c25bc0();
   input += synapse0x2c25c00();
   input += synapse0x2c1e710();
   input += synapse0x2c1e750();
   input += synapse0x2c27fc0();
   input += synapse0x2c28000();
   input += synapse0x2c28950();
   input += synapse0x2c28990();
   input += synapse0x2c29320();
   input += synapse0x2c29360();
   input += synapse0x2c29cf0();
   input += synapse0x2c29d30();
   input += synapse0x2c2a6c0();
   input += synapse0x2c2a700();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c42840() {
   double input = input0x2c42840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c42be0() {
   double input = -0.112173;
   input += synapse0x2c2ce00();
   input += synapse0x2c2ce40();
   input += synapse0x2c223c0();
   input += synapse0x2c22400();
   input += synapse0x2c2f9e0();
   input += synapse0x2c2fa20();
   input += synapse0x2c303b0();
   input += synapse0x2c303f0();
   input += synapse0x2c30d80();
   input += synapse0x2c30dc0();
   input += synapse0x2c31750();
   input += synapse0x2c31790();
   input += synapse0x2c32120();
   input += synapse0x2c32160();
   input += synapse0x2c32af0();
   input += synapse0x2c32b30();
   input += synapse0x2c334c0();
   input += synapse0x2c33500();
   input += synapse0x2c33e90();
   input += synapse0x2c33ed0();
   input += synapse0x2c34a70();
   input += synapse0x2c34ab0();
   input += synapse0x2c35440();
   input += synapse0x2c35480();
   input += synapse0x2c262c0();
   input += synapse0x2c26300();
   input += synapse0x2c26c90();
   input += synapse0x2c26cd0();
   input += synapse0x2c27660();
   input += synapse0x2c276a0();
   input += synapse0x2c39b80();
   input += synapse0x2c39bc0();
   input += synapse0x2c3a550();
   input += synapse0x2c3a590();
   input += synapse0x2c3af20();
   input += synapse0x2c3af60();
   input += synapse0x2c3b8f0();
   input += synapse0x2c3b930();
   input += synapse0x2c177e0();
   input += synapse0x2c17820();
   input += synapse0x2c2b090();
   input += synapse0x2c2b0d0();
   input += synapse0x2c3c010();
   input += synapse0x2c3c050();
   input += synapse0x2c3c090();
   input += synapse0x2c3c0d0();
   input += synapse0x2c42f80();
   input += synapse0x2c42fc0();
   input += synapse0x2c43000();
   input += synapse0x2c43040();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c42be0() {
   double input = input0x2c42be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c43080() {
   double input = -0.0442329;
   input += synapse0x2c433c0();
   input += synapse0x2c43400();
   input += synapse0x2c43440();
   input += synapse0x2c43480();
   input += synapse0x2c434c0();
   input += synapse0x2c43500();
   input += synapse0x2c43540();
   input += synapse0x2c43580();
   input += synapse0x2c435c0();
   input += synapse0x2c43600();
   input += synapse0x2c43640();
   input += synapse0x2c43680();
   input += synapse0x2c436c0();
   input += synapse0x2c43700();
   input += synapse0x2c43740();
   input += synapse0x2c43780();
   input += synapse0x2c43210();
   input += synapse0x2c43250();
   input += synapse0x2c438d0();
   input += synapse0x2c43910();
   input += synapse0x2c43950();
   input += synapse0x2c43990();
   input += synapse0x2c439d0();
   input += synapse0x2c43a10();
   input += synapse0x2c43a50();
   input += synapse0x2c43a90();
   input += synapse0x2c43ad0();
   input += synapse0x2c43b10();
   input += synapse0x2c43b50();
   input += synapse0x2c43b90();
   input += synapse0x2c43bd0();
   input += synapse0x2c43c10();
   input += synapse0x2c437c0();
   input += synapse0x2c43800();
   input += synapse0x2c43840();
   input += synapse0x2c43880();
   input += synapse0x2c43e60();
   input += synapse0x2c43ea0();
   input += synapse0x2c43ee0();
   input += synapse0x2c43f20();
   input += synapse0x2c43f60();
   input += synapse0x2c43fa0();
   input += synapse0x2c43fe0();
   input += synapse0x2c44020();
   input += synapse0x2c44060();
   input += synapse0x2c440a0();
   input += synapse0x2c440e0();
   input += synapse0x2c44120();
   input += synapse0x2c44160();
   input += synapse0x2c441a0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c43080() {
   double input = input0x2c43080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c441e0() {
   double input = -0.683725;
   input += synapse0x2c44520();
   input += synapse0x2c44560();
   input += synapse0x2c445a0();
   input += synapse0x2c445e0();
   input += synapse0x2c44620();
   input += synapse0x2c44660();
   input += synapse0x2c446a0();
   input += synapse0x2c446e0();
   input += synapse0x2c44720();
   input += synapse0x2c44760();
   input += synapse0x2c447a0();
   input += synapse0x2c447e0();
   input += synapse0x2c44820();
   input += synapse0x2c44860();
   input += synapse0x2c448a0();
   input += synapse0x2c448e0();
   input += synapse0x2c44370();
   input += synapse0x2c443b0();
   input += synapse0x2c44a30();
   input += synapse0x2c44a70();
   input += synapse0x2c44ab0();
   input += synapse0x2c44af0();
   input += synapse0x2c44b30();
   input += synapse0x2c44b70();
   input += synapse0x2c44bb0();
   input += synapse0x2c44bf0();
   input += synapse0x2c44c30();
   input += synapse0x2c44c70();
   input += synapse0x2c44cb0();
   input += synapse0x2c44cf0();
   input += synapse0x2c44d30();
   input += synapse0x2c44d70();
   input += synapse0x2c44920();
   input += synapse0x2c44960();
   input += synapse0x2c449a0();
   input += synapse0x2c449e0();
   input += synapse0x2c44fc0();
   input += synapse0x2c45000();
   input += synapse0x2c45040();
   input += synapse0x2c45080();
   input += synapse0x2c450c0();
   input += synapse0x2c45100();
   input += synapse0x2c45140();
   input += synapse0x2c45180();
   input += synapse0x2c451c0();
   input += synapse0x2c45200();
   input += synapse0x2c45240();
   input += synapse0x2c45280();
   input += synapse0x2c452c0();
   input += synapse0x2c45300();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c441e0() {
   double input = input0x2c441e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c45340() {
   double input = -0.221286;
   input += synapse0x2c45680();
   input += synapse0x2c456c0();
   input += synapse0x2c45700();
   input += synapse0x2c45740();
   input += synapse0x2c45780();
   input += synapse0x2c457c0();
   input += synapse0x2c45800();
   input += synapse0x2c45840();
   input += synapse0x2c45880();
   input += synapse0x2c458c0();
   input += synapse0x2c45900();
   input += synapse0x2c45940();
   input += synapse0x2c45980();
   input += synapse0x2c459c0();
   input += synapse0x2c45a00();
   input += synapse0x2c45a40();
   input += synapse0x2c454d0();
   input += synapse0x2c45510();
   input += synapse0x2c45b90();
   input += synapse0x2c45bd0();
   input += synapse0x2c45c10();
   input += synapse0x2c45c50();
   input += synapse0x2c45c90();
   input += synapse0x2c45cd0();
   input += synapse0x2c45d10();
   input += synapse0x2c45d50();
   input += synapse0x2c45d90();
   input += synapse0x2c45dd0();
   input += synapse0x2c45e10();
   input += synapse0x2c45e50();
   input += synapse0x2c45e90();
   input += synapse0x2c45ed0();
   input += synapse0x2c45a80();
   input += synapse0x2c45ac0();
   input += synapse0x2c45b00();
   input += synapse0x2c45b40();
   input += synapse0x2c46120();
   input += synapse0x2c46160();
   input += synapse0x2c461a0();
   input += synapse0x2c461e0();
   input += synapse0x2c46220();
   input += synapse0x2c46260();
   input += synapse0x2c462a0();
   input += synapse0x2c462e0();
   input += synapse0x2c46320();
   input += synapse0x2c46360();
   input += synapse0x2c463a0();
   input += synapse0x2c463e0();
   input += synapse0x2c46420();
   input += synapse0x2c46460();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c45340() {
   double input = input0x2c45340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x2c464a0() {
   double input = 4.06958;
   input += synapse0x2c17580();
   input += synapse0x2c466c0();
   input += synapse0x2c46700();
   input += synapse0x2c46740();
   input += synapse0x2c46780();
   return input;
}

double NNfunction_sb_sLuL::neuron0x2c464a0() {
   double input = input0x2c464a0();
   return (input * 1)+0;
}

double NNfunction_sb_sLuL::synapse0x29d23d0() {
   return (neuron0x2c12560()*0.29507);
}

double NNfunction_sb_sLuL::synapse0x2c12420() {
   return (neuron0x2c128a0()*-0.119177);
}

double NNfunction_sb_sLuL::synapse0x2c12460() {
   return (neuron0x2c12be0()*-0.458072);
}

double NNfunction_sb_sLuL::synapse0x2c17870() {
   return (neuron0x2c12f20()*-0.367821);
}

double NNfunction_sb_sLuL::synapse0x2c178b0() {
   return (neuron0x2c13260()*-0.227449);
}

double NNfunction_sb_sLuL::synapse0x2c178f0() {
   return (neuron0x2c135a0()*0.0593654);
}

double NNfunction_sb_sLuL::synapse0x2c17930() {
   return (neuron0x2c138e0()*-0.355184);
}

double NNfunction_sb_sLuL::synapse0x2c17970() {
   return (neuron0x2c13c20()*-0.570639);
}

double NNfunction_sb_sLuL::synapse0x2c179b0() {
   return (neuron0x2c13f60()*0.056453);
}

double NNfunction_sb_sLuL::synapse0x2c179f0() {
   return (neuron0x2c142a0()*0.247018);
}

double NNfunction_sb_sLuL::synapse0x2c17a30() {
   return (neuron0x2c145e0()*0.0605996);
}

double NNfunction_sb_sLuL::synapse0x2c17a70() {
   return (neuron0x2c14920()*0.236001);
}

double NNfunction_sb_sLuL::synapse0x2c17ab0() {
   return (neuron0x2c14c60()*-0.552584);
}

double NNfunction_sb_sLuL::synapse0x2c17af0() {
   return (neuron0x2c14fa0()*1.08729);
}

double NNfunction_sb_sLuL::synapse0x2c17b30() {
   return (neuron0x2c152e0()*-0.354669);
}

double NNfunction_sb_sLuL::synapse0x2c17b70() {
   return (neuron0x2c15620()*-0.141443);
}

double NNfunction_sb_sLuL::synapse0x2c12390() {
   return (neuron0x2c15960()*0.149598);
}

double NNfunction_sb_sLuL::synapse0x2c123d0() {
   return (neuron0x2c15ec0()*0.83303);
}

double NNfunction_sb_sLuL::synapse0x29c3c70() {
   return (neuron0x2c160e0()*-0.606769);
}

double NNfunction_sb_sLuL::synapse0x29c3cb0() {
   return (neuron0x2c16420()*-0.137265);
}

double NNfunction_sb_sLuL::synapse0x2c17dd0() {
   return (neuron0x2c16760()*-0.755031);
}

double NNfunction_sb_sLuL::synapse0x2c17e10() {
   return (neuron0x2c16aa0()*0.466445);
}

double NNfunction_sb_sLuL::synapse0x2c17e50() {
   return (neuron0x2c16de0()*-0.375532);
}

double NNfunction_sb_sLuL::synapse0x2c17e90() {
   return (neuron0x2c17120()*0.359164);
}

double NNfunction_sb_sLuL::synapse0x2c18210() {
   return (neuron0x2c12560()*-0.42352);
}

double NNfunction_sb_sLuL::synapse0x2c18250() {
   return (neuron0x2c128a0()*0.090646);
}

double NNfunction_sb_sLuL::synapse0x2c18290() {
   return (neuron0x2c12be0()*-0.159937);
}

double NNfunction_sb_sLuL::synapse0x2c182d0() {
   return (neuron0x2c12f20()*-0.348465);
}

double NNfunction_sb_sLuL::synapse0x2c18310() {
   return (neuron0x2c13260()*-0.109262);
}

double NNfunction_sb_sLuL::synapse0x2c18350() {
   return (neuron0x2c135a0()*0.463635);
}

double NNfunction_sb_sLuL::synapse0x2c18390() {
   return (neuron0x2c138e0()*0.466933);
}

double NNfunction_sb_sLuL::synapse0x2c183d0() {
   return (neuron0x2c13c20()*-0.0977228);
}

double NNfunction_sb_sLuL::synapse0x2c18410() {
   return (neuron0x2c13f60()*-0.098755);
}

double NNfunction_sb_sLuL::synapse0x2c17cc0() {
   return (neuron0x2c142a0()*-0.0390337);
}

double NNfunction_sb_sLuL::synapse0x2c17d00() {
   return (neuron0x2c145e0()*-0.12841);
}

double NNfunction_sb_sLuL::synapse0x2c17d40() {
   return (neuron0x2c14920()*0.801123);
}

double NNfunction_sb_sLuL::synapse0x2c17d80() {
   return (neuron0x2c14c60()*2.11492);
}

double NNfunction_sb_sLuL::synapse0x2c18660() {
   return (neuron0x2c14fa0()*0.609575);
}

double NNfunction_sb_sLuL::synapse0x2c186a0() {
   return (neuron0x2c152e0()*0.0786757);
}

double NNfunction_sb_sLuL::synapse0x2c186e0() {
   return (neuron0x2c15620()*0.0151646);
}

double NNfunction_sb_sLuL::synapse0x2c18060() {
   return (neuron0x2c15960()*0.734101);
}

double NNfunction_sb_sLuL::synapse0x2c180a0() {
   return (neuron0x2c15ec0()*-0.628442);
}

double NNfunction_sb_sLuL::synapse0x2c18830() {
   return (neuron0x2c160e0()*0.844327);
}

double NNfunction_sb_sLuL::synapse0x2c18870() {
   return (neuron0x2c16420()*-0.0434318);
}

double NNfunction_sb_sLuL::synapse0x2c188b0() {
   return (neuron0x2c16760()*0.129243);
}

double NNfunction_sb_sLuL::synapse0x2c188f0() {
   return (neuron0x2c16aa0()*-0.299471);
}

double NNfunction_sb_sLuL::synapse0x2c18930() {
   return (neuron0x2c16de0()*0.228022);
}

double NNfunction_sb_sLuL::synapse0x2c18970() {
   return (neuron0x2c17120()*-0.270454);
}

double NNfunction_sb_sLuL::synapse0x2c18cf0() {
   return (neuron0x2c12560()*0.0229074);
}

double NNfunction_sb_sLuL::synapse0x2c18d30() {
   return (neuron0x2c128a0()*-4.99138e-05);
}

double NNfunction_sb_sLuL::synapse0x2c18d70() {
   return (neuron0x2c12be0()*0.058828);
}

double NNfunction_sb_sLuL::synapse0x2c18db0() {
   return (neuron0x2c12f20()*2.10494);
}

double NNfunction_sb_sLuL::synapse0x2c18df0() {
   return (neuron0x2c13260()*-0.0215639);
}

double NNfunction_sb_sLuL::synapse0x2c18e30() {
   return (neuron0x2c135a0()*-0.0266319);
}

double NNfunction_sb_sLuL::synapse0x2c18e70() {
   return (neuron0x2c138e0()*0.0240973);
}

double NNfunction_sb_sLuL::synapse0x2c18eb0() {
   return (neuron0x2c13c20()*0.0155815);
}

double NNfunction_sb_sLuL::synapse0x2c18ef0() {
   return (neuron0x2c13f60()*0.0190726);
}

double NNfunction_sb_sLuL::synapse0x2c18f30() {
   return (neuron0x2c142a0()*-0.0278645);
}

double NNfunction_sb_sLuL::synapse0x2c18f70() {
   return (neuron0x2c145e0()*-0.0122042);
}

double NNfunction_sb_sLuL::synapse0x2c18fb0() {
   return (neuron0x2c14920()*-0.23519);
}

double NNfunction_sb_sLuL::synapse0x2c18ff0() {
   return (neuron0x2c14c60()*-0.318719);
}

double NNfunction_sb_sLuL::synapse0x2c19030() {
   return (neuron0x2c14fa0()*-0.00337597);
}

double NNfunction_sb_sLuL::synapse0x2c19070() {
   return (neuron0x2c152e0()*0.0152987);
}

double NNfunction_sb_sLuL::synapse0x2c190b0() {
   return (neuron0x2c15620()*0.0143687);
}

double NNfunction_sb_sLuL::synapse0x2c18b40() {
   return (neuron0x2c15960()*-0.0136536);
}

double NNfunction_sb_sLuL::synapse0x2c18b80() {
   return (neuron0x2c15ec0()*-0.0328678);
}

double NNfunction_sb_sLuL::synapse0x29d1ac0() {
   return (neuron0x2c160e0()*-0.0247572);
}

double NNfunction_sb_sLuL::synapse0x29d1b00() {
   return (neuron0x2c16420()*0.0230912);
}

double NNfunction_sb_sLuL::synapse0x2c015f0() {
   return (neuron0x2c16760()*-0.0208613);
}

double NNfunction_sb_sLuL::synapse0x2c01630() {
   return (neuron0x2c16aa0()*0.00641645);
}

double NNfunction_sb_sLuL::synapse0x2c01670() {
   return (neuron0x2c16de0()*0.0276228);
}

double NNfunction_sb_sLuL::synapse0x2c124a0() {
   return (neuron0x2c17120()*-0.0109988);
}

double NNfunction_sb_sLuL::synapse0x2c18600() {
   return (neuron0x2c12560()*-0.480336);
}

double NNfunction_sb_sLuL::synapse0x2c124e0() {
   return (neuron0x2c128a0()*-0.320582);
}

double NNfunction_sb_sLuL::synapse0x2c12520() {
   return (neuron0x2c12be0()*-0.209728);
}

double NNfunction_sb_sLuL::synapse0x2c19200() {
   return (neuron0x2c12f20()*0.59917);
}

double NNfunction_sb_sLuL::synapse0x2c19240() {
   return (neuron0x2c13260()*-0.262837);
}

double NNfunction_sb_sLuL::synapse0x2c19280() {
   return (neuron0x2c135a0()*-0.957507);
}

double NNfunction_sb_sLuL::synapse0x2c192c0() {
   return (neuron0x2c138e0()*0.854747);
}

double NNfunction_sb_sLuL::synapse0x2c19300() {
   return (neuron0x2c13c20()*0.390301);
}

double NNfunction_sb_sLuL::synapse0x2c19340() {
   return (neuron0x2c13f60()*0.0856681);
}

double NNfunction_sb_sLuL::synapse0x2c19380() {
   return (neuron0x2c142a0()*-0.343084);
}

double NNfunction_sb_sLuL::synapse0x2c193c0() {
   return (neuron0x2c145e0()*-0.0056387);
}

double NNfunction_sb_sLuL::synapse0x2c19400() {
   return (neuron0x2c14920()*-0.253505);
}

double NNfunction_sb_sLuL::synapse0x2c19440() {
   return (neuron0x2c14c60()*-0.855742);
}

double NNfunction_sb_sLuL::synapse0x2c19480() {
   return (neuron0x2c14fa0()*0.652525);
}

double NNfunction_sb_sLuL::synapse0x2c194c0() {
   return (neuron0x2c152e0()*-0.345109);
}

double NNfunction_sb_sLuL::synapse0x2c19500() {
   return (neuron0x2c15620()*0.308844);
}

double NNfunction_sb_sLuL::synapse0x2c18450() {
   return (neuron0x2c15960()*0.437759);
}

double NNfunction_sb_sLuL::synapse0x2c18490() {
   return (neuron0x2c15ec0()*-0.0940556);
}

double NNfunction_sb_sLuL::synapse0x2c19650() {
   return (neuron0x2c160e0()*-0.0968389);
}

double NNfunction_sb_sLuL::synapse0x2c19690() {
   return (neuron0x2c16420()*-0.867821);
}

double NNfunction_sb_sLuL::synapse0x2c196d0() {
   return (neuron0x2c16760()*-0.431457);
}

double NNfunction_sb_sLuL::synapse0x2c19710() {
   return (neuron0x2c16aa0()*-0.347054);
}

double NNfunction_sb_sLuL::synapse0x2c19750() {
   return (neuron0x2c16de0()*0.226481);
}

double NNfunction_sb_sLuL::synapse0x2c19790() {
   return (neuron0x2c17120()*-1.01699);
}

double NNfunction_sb_sLuL::synapse0x2c19b10() {
   return (neuron0x2c12560()*-0.0677151);
}

double NNfunction_sb_sLuL::synapse0x2c19b50() {
   return (neuron0x2c128a0()*0.00481131);
}

double NNfunction_sb_sLuL::synapse0x2c19b90() {
   return (neuron0x2c12be0()*0.121535);
}

double NNfunction_sb_sLuL::synapse0x2c19bd0() {
   return (neuron0x2c12f20()*-0.0552673);
}

double NNfunction_sb_sLuL::synapse0x2c19c10() {
   return (neuron0x2c13260()*0.00593817);
}

double NNfunction_sb_sLuL::synapse0x2c19c50() {
   return (neuron0x2c135a0()*0.00353587);
}

double NNfunction_sb_sLuL::synapse0x2c19c90() {
   return (neuron0x2c138e0()*-0.0103304);
}

double NNfunction_sb_sLuL::synapse0x2c19cd0() {
   return (neuron0x2c13c20()*0.0175481);
}

double NNfunction_sb_sLuL::synapse0x2c19d10() {
   return (neuron0x2c13f60()*-0.00751986);
}

double NNfunction_sb_sLuL::synapse0x2c19d50() {
   return (neuron0x2c142a0()*-0.0111018);
}

double NNfunction_sb_sLuL::synapse0x2c19d90() {
   return (neuron0x2c145e0()*0.0151618);
}

double NNfunction_sb_sLuL::synapse0x2c19dd0() {
   return (neuron0x2c14920()*0.0881527);
}

double NNfunction_sb_sLuL::synapse0x2c19e10() {
   return (neuron0x2c14c60()*-0.695038);
}

double NNfunction_sb_sLuL::synapse0x2c19e50() {
   return (neuron0x2c14fa0()*-0.0128765);
}

double NNfunction_sb_sLuL::synapse0x2c19e90() {
   return (neuron0x2c152e0()*-0.0567727);
}

double NNfunction_sb_sLuL::synapse0x2c19ed0() {
   return (neuron0x2c15620()*0.00742867);
}

double NNfunction_sb_sLuL::synapse0x2c19960() {
   return (neuron0x2c15960()*-0.0441283);
}

double NNfunction_sb_sLuL::synapse0x2c199a0() {
   return (neuron0x2c15ec0()*-0.0921988);
}

double NNfunction_sb_sLuL::synapse0x2c1a020() {
   return (neuron0x2c160e0()*-0.038949);
}

double NNfunction_sb_sLuL::synapse0x2c1a060() {
   return (neuron0x2c16420()*-0.0195083);
}

double NNfunction_sb_sLuL::synapse0x2c1a0a0() {
   return (neuron0x2c16760()*0.0310413);
}

double NNfunction_sb_sLuL::synapse0x2c1a0e0() {
   return (neuron0x2c16aa0()*-0.000710325);
}

double NNfunction_sb_sLuL::synapse0x2c1a120() {
   return (neuron0x2c16de0()*0.01293);
}

double NNfunction_sb_sLuL::synapse0x2c1a160() {
   return (neuron0x2c17120()*-0.0139028);
}

double NNfunction_sb_sLuL::synapse0x2c1a4e0() {
   return (neuron0x2c12560()*0.559072);
}

double NNfunction_sb_sLuL::synapse0x2c1a520() {
   return (neuron0x2c128a0()*-0.198573);
}

double NNfunction_sb_sLuL::synapse0x2c1a560() {
   return (neuron0x2c12be0()*0.332986);
}

double NNfunction_sb_sLuL::synapse0x2c1a5a0() {
   return (neuron0x2c12f20()*0.783278);
}

double NNfunction_sb_sLuL::synapse0x2c1a5e0() {
   return (neuron0x2c13260()*0.666413);
}

double NNfunction_sb_sLuL::synapse0x2c1a620() {
   return (neuron0x2c135a0()*-0.0876347);
}

double NNfunction_sb_sLuL::synapse0x2c1a660() {
   return (neuron0x2c138e0()*-0.532204);
}

double NNfunction_sb_sLuL::synapse0x2c1a6a0() {
   return (neuron0x2c13c20()*-0.198965);
}

double NNfunction_sb_sLuL::synapse0x2c1a6e0() {
   return (neuron0x2c13f60()*0.373149);
}

double NNfunction_sb_sLuL::synapse0x29d1e30() {
   return (neuron0x2c142a0()*-0.123437);
}

double NNfunction_sb_sLuL::synapse0x29d1e70() {
   return (neuron0x2c145e0()*-0.0411493);
}

double NNfunction_sb_sLuL::synapse0x29d1eb0() {
   return (neuron0x2c14920()*0.110315);
}

double NNfunction_sb_sLuL::synapse0x29d1ef0() {
   return (neuron0x2c14c60()*0.25282);
}

double NNfunction_sb_sLuL::synapse0x29d1f30() {
   return (neuron0x2c14fa0()*0.191814);
}

double NNfunction_sb_sLuL::synapse0x29d1f70() {
   return (neuron0x2c152e0()*0.128217);
}

double NNfunction_sb_sLuL::synapse0x29d1fb0() {
   return (neuron0x2c15620()*-0.785881);
}

double NNfunction_sb_sLuL::synapse0x2c1a330() {
   return (neuron0x2c15960()*-0.323296);
}

double NNfunction_sb_sLuL::synapse0x2c1a370() {
   return (neuron0x2c15ec0()*0.179872);
}

double NNfunction_sb_sLuL::synapse0x29d2100() {
   return (neuron0x2c160e0()*0.241991);
}

double NNfunction_sb_sLuL::synapse0x29d2140() {
   return (neuron0x2c16420()*0.288652);
}

double NNfunction_sb_sLuL::synapse0x29d2180() {
   return (neuron0x2c16760()*0.84918);
}

double NNfunction_sb_sLuL::synapse0x29d21c0() {
   return (neuron0x2c16aa0()*-0.154263);
}

double NNfunction_sb_sLuL::synapse0x29d2200() {
   return (neuron0x2c16de0()*0.287669);
}

double NNfunction_sb_sLuL::synapse0x2c1af30() {
   return (neuron0x2c17120()*-0.222976);
}

double NNfunction_sb_sLuL::synapse0x2c1b2b0() {
   return (neuron0x2c12560()*-0.475885);
}

double NNfunction_sb_sLuL::synapse0x2c1b2f0() {
   return (neuron0x2c128a0()*-0.283804);
}

double NNfunction_sb_sLuL::synapse0x2c1b330() {
   return (neuron0x2c12be0()*0.60639);
}

double NNfunction_sb_sLuL::synapse0x2c1b370() {
   return (neuron0x2c12f20()*-0.150243);
}

double NNfunction_sb_sLuL::synapse0x2c1b3b0() {
   return (neuron0x2c13260()*-0.384677);
}

double NNfunction_sb_sLuL::synapse0x2c1b3f0() {
   return (neuron0x2c135a0()*-0.813762);
}

double NNfunction_sb_sLuL::synapse0x2c1b430() {
   return (neuron0x2c138e0()*0.958324);
}

double NNfunction_sb_sLuL::synapse0x2c1b470() {
   return (neuron0x2c13c20()*0.245269);
}

double NNfunction_sb_sLuL::synapse0x2c1b4b0() {
   return (neuron0x2c13f60()*0.680952);
}

double NNfunction_sb_sLuL::synapse0x2c1b4f0() {
   return (neuron0x2c142a0()*-0.212973);
}

double NNfunction_sb_sLuL::synapse0x2c1b530() {
   return (neuron0x2c145e0()*-0.428999);
}

double NNfunction_sb_sLuL::synapse0x2c1b570() {
   return (neuron0x2c14920()*-0.515679);
}

double NNfunction_sb_sLuL::synapse0x2c1b5b0() {
   return (neuron0x2c14c60()*1.96951);
}

double NNfunction_sb_sLuL::synapse0x2c1b5f0() {
   return (neuron0x2c14fa0()*-0.387822);
}

double NNfunction_sb_sLuL::synapse0x2c1b630() {
   return (neuron0x2c152e0()*1.18859);
}

double NNfunction_sb_sLuL::synapse0x2c1b670() {
   return (neuron0x2c15620()*0.547059);
}

double NNfunction_sb_sLuL::synapse0x2c1b100() {
   return (neuron0x2c15960()*0.495161);
}

double NNfunction_sb_sLuL::synapse0x2c1b140() {
   return (neuron0x2c15ec0()*1.0256);
}

double NNfunction_sb_sLuL::synapse0x2c1b7c0() {
   return (neuron0x2c160e0()*0.100058);
}

double NNfunction_sb_sLuL::synapse0x2c1b800() {
   return (neuron0x2c16420()*1.34154);
}

double NNfunction_sb_sLuL::synapse0x2c1b840() {
   return (neuron0x2c16760()*0.00439009);
}

double NNfunction_sb_sLuL::synapse0x2c1b880() {
   return (neuron0x2c16aa0()*0.385441);
}

double NNfunction_sb_sLuL::synapse0x2c1b8c0() {
   return (neuron0x2c16de0()*-0.623449);
}

double NNfunction_sb_sLuL::synapse0x2c1b900() {
   return (neuron0x2c17120()*0.305066);
}

double NNfunction_sb_sLuL::synapse0x2c1bc80() {
   return (neuron0x2c12560()*-0.0133672);
}

double NNfunction_sb_sLuL::synapse0x2c1bcc0() {
   return (neuron0x2c128a0()*-0.137223);
}

double NNfunction_sb_sLuL::synapse0x2c1bd00() {
   return (neuron0x2c12be0()*0.132216);
}

double NNfunction_sb_sLuL::synapse0x2c1bd40() {
   return (neuron0x2c12f20()*-2.40325);
}

double NNfunction_sb_sLuL::synapse0x2c1bd80() {
   return (neuron0x2c13260()*0.0250025);
}

double NNfunction_sb_sLuL::synapse0x2c1bdc0() {
   return (neuron0x2c135a0()*0.0670294);
}

double NNfunction_sb_sLuL::synapse0x2c1be00() {
   return (neuron0x2c138e0()*0.0874059);
}

double NNfunction_sb_sLuL::synapse0x2c1be40() {
   return (neuron0x2c13c20()*0.0255358);
}

double NNfunction_sb_sLuL::synapse0x2c1be80() {
   return (neuron0x2c13f60()*0.0175783);
}

double NNfunction_sb_sLuL::synapse0x2c1bec0() {
   return (neuron0x2c142a0()*-0.0769697);
}

double NNfunction_sb_sLuL::synapse0x2c1bf00() {
   return (neuron0x2c145e0()*0.05967);
}

double NNfunction_sb_sLuL::synapse0x2c1bf40() {
   return (neuron0x2c14920()*0.474675);
}

double NNfunction_sb_sLuL::synapse0x2c1bf80() {
   return (neuron0x2c14c60()*0.390332);
}

double NNfunction_sb_sLuL::synapse0x2c1bfc0() {
   return (neuron0x2c14fa0()*0.0846047);
}

double NNfunction_sb_sLuL::synapse0x2c1c000() {
   return (neuron0x2c152e0()*0.0894625);
}

double NNfunction_sb_sLuL::synapse0x2c1c040() {
   return (neuron0x2c15620()*0.0813276);
}

double NNfunction_sb_sLuL::synapse0x2c1bad0() {
   return (neuron0x2c15960()*0.1243);
}

double NNfunction_sb_sLuL::synapse0x2c1bb10() {
   return (neuron0x2c15ec0()*-0.130161);
}

double NNfunction_sb_sLuL::synapse0x2c1c190() {
   return (neuron0x2c160e0()*-0.0938794);
}

double NNfunction_sb_sLuL::synapse0x2c1c1d0() {
   return (neuron0x2c16420()*0.0702501);
}

double NNfunction_sb_sLuL::synapse0x2c1c210() {
   return (neuron0x2c16760()*0.0705849);
}

double NNfunction_sb_sLuL::synapse0x2c1c250() {
   return (neuron0x2c16aa0()*-0.0260303);
}

double NNfunction_sb_sLuL::synapse0x2c1c290() {
   return (neuron0x2c16de0()*0.105796);
}

double NNfunction_sb_sLuL::synapse0x2c1c2d0() {
   return (neuron0x2c17120()*0.0524145);
}

double NNfunction_sb_sLuL::synapse0x2c15db0() {
   return (neuron0x2c12560()*0.0110839);
}

double NNfunction_sb_sLuL::synapse0x2c15df0() {
   return (neuron0x2c128a0()*0.0156923);
}

double NNfunction_sb_sLuL::synapse0x2c15e30() {
   return (neuron0x2c12be0()*-0.547892);
}

double NNfunction_sb_sLuL::synapse0x2c15e70() {
   return (neuron0x2c12f20()*0.371792);
}

double NNfunction_sb_sLuL::synapse0x2c1c860() {
   return (neuron0x2c13260()*0.0184816);
}

double NNfunction_sb_sLuL::synapse0x2c1c8a0() {
   return (neuron0x2c135a0()*-0.0450665);
}

double NNfunction_sb_sLuL::synapse0x2c1c8e0() {
   return (neuron0x2c138e0()*-0.00165484);
}

double NNfunction_sb_sLuL::synapse0x2c1c920() {
   return (neuron0x2c13c20()*-0.0521323);
}

double NNfunction_sb_sLuL::synapse0x2c1c960() {
   return (neuron0x2c13f60()*-0.00440804);
}

double NNfunction_sb_sLuL::synapse0x2c1c9a0() {
   return (neuron0x2c142a0()*-0.0381086);
}

double NNfunction_sb_sLuL::synapse0x2c1c9e0() {
   return (neuron0x2c145e0()*-0.0153741);
}

double NNfunction_sb_sLuL::synapse0x2c1ca20() {
   return (neuron0x2c14920()*1.12226);
}

double NNfunction_sb_sLuL::synapse0x2c1ca60() {
   return (neuron0x2c14c60()*-0.361337);
}

double NNfunction_sb_sLuL::synapse0x2c1caa0() {
   return (neuron0x2c14fa0()*-0.0737125);
}

double NNfunction_sb_sLuL::synapse0x2c1cae0() {
   return (neuron0x2c152e0()*0.0218277);
}

double NNfunction_sb_sLuL::synapse0x2c1cb20() {
   return (neuron0x2c15620()*-0.284763);
}

double NNfunction_sb_sLuL::synapse0x2c1c4a0() {
   return (neuron0x2c15960()*0.0375518);
}

double NNfunction_sb_sLuL::synapse0x2c1c4e0() {
   return (neuron0x2c15ec0()*-0.0199537);
}

double NNfunction_sb_sLuL::synapse0x2c1cc70() {
   return (neuron0x2c160e0()*-0.0717663);
}

double NNfunction_sb_sLuL::synapse0x2c1ccb0() {
   return (neuron0x2c16420()*0.0531615);
}

double NNfunction_sb_sLuL::synapse0x2c1ccf0() {
   return (neuron0x2c16760()*-0.00137488);
}

double NNfunction_sb_sLuL::synapse0x2c1cd30() {
   return (neuron0x2c16aa0()*0.0381821);
}

double NNfunction_sb_sLuL::synapse0x2c1cd70() {
   return (neuron0x2c16de0()*-0.023227);
}

double NNfunction_sb_sLuL::synapse0x2c1cdb0() {
   return (neuron0x2c17120()*-0.0545421);
}

double NNfunction_sb_sLuL::synapse0x2c1d130() {
   return (neuron0x2c12560()*-0.0596108);
}

double NNfunction_sb_sLuL::synapse0x2c1d170() {
   return (neuron0x2c128a0()*-0.0776978);
}

double NNfunction_sb_sLuL::synapse0x2c1d1b0() {
   return (neuron0x2c12be0()*0.643754);
}

double NNfunction_sb_sLuL::synapse0x2c1d1f0() {
   return (neuron0x2c12f20()*1.15276);
}

double NNfunction_sb_sLuL::synapse0x2c1d230() {
   return (neuron0x2c13260()*-0.453336);
}

double NNfunction_sb_sLuL::synapse0x2c1d270() {
   return (neuron0x2c135a0()*0.219555);
}

double NNfunction_sb_sLuL::synapse0x2c1d2b0() {
   return (neuron0x2c138e0()*0.751645);
}

double NNfunction_sb_sLuL::synapse0x2c1d2f0() {
   return (neuron0x2c13c20()*0.442044);
}

double NNfunction_sb_sLuL::synapse0x2c1d330() {
   return (neuron0x2c13f60()*0.015554);
}

double NNfunction_sb_sLuL::synapse0x2c1d370() {
   return (neuron0x2c142a0()*-0.28913);
}

double NNfunction_sb_sLuL::synapse0x2c1d3b0() {
   return (neuron0x2c145e0()*0.277405);
}

double NNfunction_sb_sLuL::synapse0x2c1d3f0() {
   return (neuron0x2c14920()*0.0738646);
}

double NNfunction_sb_sLuL::synapse0x2c1d430() {
   return (neuron0x2c14c60()*0.743264);
}

double NNfunction_sb_sLuL::synapse0x2c1d470() {
   return (neuron0x2c14fa0()*0.132973);
}

double NNfunction_sb_sLuL::synapse0x2c1d4b0() {
   return (neuron0x2c152e0()*0.513262);
}

double NNfunction_sb_sLuL::synapse0x2c1d4f0() {
   return (neuron0x2c15620()*-0.0342278);
}

double NNfunction_sb_sLuL::synapse0x2c1cf80() {
   return (neuron0x2c15960()*-0.631788);
}

double NNfunction_sb_sLuL::synapse0x2c1cfc0() {
   return (neuron0x2c15ec0()*0.143674);
}

double NNfunction_sb_sLuL::synapse0x2c1d640() {
   return (neuron0x2c160e0()*-0.0147359);
}

double NNfunction_sb_sLuL::synapse0x2c1d680() {
   return (neuron0x2c16420()*0.392412);
}

double NNfunction_sb_sLuL::synapse0x2c1d6c0() {
   return (neuron0x2c16760()*0.0464679);
}

double NNfunction_sb_sLuL::synapse0x2c1d700() {
   return (neuron0x2c16aa0()*-0.197972);
}

double NNfunction_sb_sLuL::synapse0x2c1d740() {
   return (neuron0x2c16de0()*-0.267041);
}

double NNfunction_sb_sLuL::synapse0x2c1d780() {
   return (neuron0x2c17120()*0.35729);
}

double NNfunction_sb_sLuL::synapse0x2c1db00() {
   return (neuron0x2c12560()*-0.406342);
}

double NNfunction_sb_sLuL::synapse0x2c1db40() {
   return (neuron0x2c128a0()*0.0181585);
}

double NNfunction_sb_sLuL::synapse0x2c1db80() {
   return (neuron0x2c12be0()*-1.26022);
}

double NNfunction_sb_sLuL::synapse0x2c1dbc0() {
   return (neuron0x2c12f20()*1.59009);
}

double NNfunction_sb_sLuL::synapse0x2c1dc00() {
   return (neuron0x2c13260()*0.0379338);
}

double NNfunction_sb_sLuL::synapse0x2c1dc40() {
   return (neuron0x2c135a0()*0.0759822);
}

double NNfunction_sb_sLuL::synapse0x2c1dc80() {
   return (neuron0x2c138e0()*-0.68726);
}

double NNfunction_sb_sLuL::synapse0x2c1dcc0() {
   return (neuron0x2c13c20()*-0.13824);
}

double NNfunction_sb_sLuL::synapse0x2c1dd00() {
   return (neuron0x2c13f60()*0.161438);
}

double NNfunction_sb_sLuL::synapse0x2c1dd40() {
   return (neuron0x2c142a0()*-0.309096);
}

double NNfunction_sb_sLuL::synapse0x2c1dd80() {
   return (neuron0x2c145e0()*-0.384409);
}

double NNfunction_sb_sLuL::synapse0x2c1ddc0() {
   return (neuron0x2c14920()*-0.996177);
}

double NNfunction_sb_sLuL::synapse0x2c1de00() {
   return (neuron0x2c14c60()*0.0939984);
}

double NNfunction_sb_sLuL::synapse0x2c1de40() {
   return (neuron0x2c14fa0()*0.148232);
}

double NNfunction_sb_sLuL::synapse0x2c1de80() {
   return (neuron0x2c152e0()*-0.13411);
}

double NNfunction_sb_sLuL::synapse0x2c1dec0() {
   return (neuron0x2c15620()*-0.0419655);
}

double NNfunction_sb_sLuL::synapse0x2c1d950() {
   return (neuron0x2c15960()*-0.267548);
}

double NNfunction_sb_sLuL::synapse0x2c1d990() {
   return (neuron0x2c15ec0()*-0.1834);
}

double NNfunction_sb_sLuL::synapse0x2c1a720() {
   return (neuron0x2c160e0()*-0.19906);
}

double NNfunction_sb_sLuL::synapse0x2c1a760() {
   return (neuron0x2c16420()*-0.381454);
}

double NNfunction_sb_sLuL::synapse0x2c1a7a0() {
   return (neuron0x2c16760()*0.373012);
}

double NNfunction_sb_sLuL::synapse0x2c1a7e0() {
   return (neuron0x2c16aa0()*0.197447);
}

double NNfunction_sb_sLuL::synapse0x2c1a820() {
   return (neuron0x2c16de0()*-0.322744);
}

double NNfunction_sb_sLuL::synapse0x2c1a860() {
   return (neuron0x2c17120()*0.122475);
}

double NNfunction_sb_sLuL::synapse0x2c1abe0() {
   return (neuron0x2c12560()*1.50234);
}

double NNfunction_sb_sLuL::synapse0x2c1ac20() {
   return (neuron0x2c128a0()*0.504132);
}

double NNfunction_sb_sLuL::synapse0x2c1ac60() {
   return (neuron0x2c12be0()*0.221962);
}

double NNfunction_sb_sLuL::synapse0x2c1aca0() {
   return (neuron0x2c12f20()*-0.256495);
}

double NNfunction_sb_sLuL::synapse0x2c1ace0() {
   return (neuron0x2c13260()*-0.702146);
}

double NNfunction_sb_sLuL::synapse0x2c1ad20() {
   return (neuron0x2c135a0()*-0.378381);
}

double NNfunction_sb_sLuL::synapse0x2c1ad60() {
   return (neuron0x2c138e0()*-0.656367);
}

double NNfunction_sb_sLuL::synapse0x2c1ada0() {
   return (neuron0x2c13c20()*0.130902);
}

double NNfunction_sb_sLuL::synapse0x2c1ade0() {
   return (neuron0x2c13f60()*-0.507025);
}

double NNfunction_sb_sLuL::synapse0x2c1ae20() {
   return (neuron0x2c142a0()*-0.451332);
}

double NNfunction_sb_sLuL::synapse0x2c1ae60() {
   return (neuron0x2c145e0()*-0.306802);
}

double NNfunction_sb_sLuL::synapse0x2c1aea0() {
   return (neuron0x2c14920()*-0.606239);
}

double NNfunction_sb_sLuL::synapse0x2c1aee0() {
   return (neuron0x2c14c60()*-0.654037);
}

double NNfunction_sb_sLuL::synapse0x2c1f020() {
   return (neuron0x2c14fa0()*0.250216);
}

double NNfunction_sb_sLuL::synapse0x2c1f060() {
   return (neuron0x2c152e0()*0.319698);
}

double NNfunction_sb_sLuL::synapse0x2c1f0a0() {
   return (neuron0x2c15620()*-0.942783);
}

double NNfunction_sb_sLuL::synapse0x2c1aa30() {
   return (neuron0x2c15960()*1.23586);
}

double NNfunction_sb_sLuL::synapse0x2c1aa70() {
   return (neuron0x2c15ec0()*-0.30643);
}

double NNfunction_sb_sLuL::synapse0x2c1f1f0() {
   return (neuron0x2c160e0()*-0.421101);
}

double NNfunction_sb_sLuL::synapse0x2c1f230() {
   return (neuron0x2c16420()*-0.657786);
}

double NNfunction_sb_sLuL::synapse0x2c1f270() {
   return (neuron0x2c16760()*-0.161067);
}

double NNfunction_sb_sLuL::synapse0x2c1f2b0() {
   return (neuron0x2c16aa0()*0.0210977);
}

double NNfunction_sb_sLuL::synapse0x2c1f2f0() {
   return (neuron0x2c16de0()*0.219358);
}

double NNfunction_sb_sLuL::synapse0x2c1f330() {
   return (neuron0x2c17120()*0.0886679);
}

double NNfunction_sb_sLuL::synapse0x2c1f6b0() {
   return (neuron0x2c12560()*0.445604);
}

double NNfunction_sb_sLuL::synapse0x2c1f6f0() {
   return (neuron0x2c128a0()*0.115684);
}

double NNfunction_sb_sLuL::synapse0x2c1f730() {
   return (neuron0x2c12be0()*-0.870283);
}

double NNfunction_sb_sLuL::synapse0x2c1f770() {
   return (neuron0x2c12f20()*0.375563);
}

double NNfunction_sb_sLuL::synapse0x2c1f7b0() {
   return (neuron0x2c13260()*-0.363751);
}

double NNfunction_sb_sLuL::synapse0x2c1f7f0() {
   return (neuron0x2c135a0()*0.120581);
}

double NNfunction_sb_sLuL::synapse0x2c1f830() {
   return (neuron0x2c138e0()*-0.472698);
}

double NNfunction_sb_sLuL::synapse0x2c1f870() {
   return (neuron0x2c13c20()*0.473301);
}

double NNfunction_sb_sLuL::synapse0x2c1f8b0() {
   return (neuron0x2c13f60()*0.0555029);
}

double NNfunction_sb_sLuL::synapse0x2c1f8f0() {
   return (neuron0x2c142a0()*0.0921499);
}

double NNfunction_sb_sLuL::synapse0x2c1f930() {
   return (neuron0x2c145e0()*0.259512);
}

double NNfunction_sb_sLuL::synapse0x2c1f970() {
   return (neuron0x2c14920()*0.455594);
}

double NNfunction_sb_sLuL::synapse0x2c1f9b0() {
   return (neuron0x2c14c60()*0.295039);
}

double NNfunction_sb_sLuL::synapse0x2c1f9f0() {
   return (neuron0x2c14fa0()*0.0832284);
}

double NNfunction_sb_sLuL::synapse0x2c1fa30() {
   return (neuron0x2c152e0()*-0.52149);
}

double NNfunction_sb_sLuL::synapse0x2c1fa70() {
   return (neuron0x2c15620()*0.376467);
}

double NNfunction_sb_sLuL::synapse0x2c1f500() {
   return (neuron0x2c15960()*-1.08489);
}

double NNfunction_sb_sLuL::synapse0x2c1f540() {
   return (neuron0x2c15ec0()*0.953131);
}

double NNfunction_sb_sLuL::synapse0x2c1fbc0() {
   return (neuron0x2c160e0()*-0.107332);
}

double NNfunction_sb_sLuL::synapse0x2c1fc00() {
   return (neuron0x2c16420()*-0.260164);
}

double NNfunction_sb_sLuL::synapse0x2c1fc40() {
   return (neuron0x2c16760()*-0.10087);
}

double NNfunction_sb_sLuL::synapse0x2c1fc80() {
   return (neuron0x2c16aa0()*-0.174265);
}

double NNfunction_sb_sLuL::synapse0x2c1fcc0() {
   return (neuron0x2c16de0()*-0.0672919);
}

double NNfunction_sb_sLuL::synapse0x2c1fd00() {
   return (neuron0x2c17120()*0.23398);
}

double NNfunction_sb_sLuL::synapse0x2c20080() {
   return (neuron0x2c12560()*-0.733791);
}

double NNfunction_sb_sLuL::synapse0x2c200c0() {
   return (neuron0x2c128a0()*0.144105);
}

double NNfunction_sb_sLuL::synapse0x2c20100() {
   return (neuron0x2c12be0()*0.363416);
}

double NNfunction_sb_sLuL::synapse0x2c20140() {
   return (neuron0x2c12f20()*0.17127);
}

double NNfunction_sb_sLuL::synapse0x2c20180() {
   return (neuron0x2c13260()*0.250349);
}

double NNfunction_sb_sLuL::synapse0x2c201c0() {
   return (neuron0x2c135a0()*-0.112753);
}

double NNfunction_sb_sLuL::synapse0x2c20200() {
   return (neuron0x2c138e0()*0.141571);
}

double NNfunction_sb_sLuL::synapse0x2c20240() {
   return (neuron0x2c13c20()*0.275151);
}

double NNfunction_sb_sLuL::synapse0x2c20280() {
   return (neuron0x2c13f60()*0.220773);
}

double NNfunction_sb_sLuL::synapse0x2c202c0() {
   return (neuron0x2c142a0()*-0.200634);
}

double NNfunction_sb_sLuL::synapse0x2c20300() {
   return (neuron0x2c145e0()*-0.346001);
}

double NNfunction_sb_sLuL::synapse0x2c20340() {
   return (neuron0x2c14920()*0.798111);
}

double NNfunction_sb_sLuL::synapse0x2c20380() {
   return (neuron0x2c14c60()*2.01263);
}

double NNfunction_sb_sLuL::synapse0x2c203c0() {
   return (neuron0x2c14fa0()*0.022609);
}

double NNfunction_sb_sLuL::synapse0x2c20400() {
   return (neuron0x2c152e0()*-0.288845);
}

double NNfunction_sb_sLuL::synapse0x2c20440() {
   return (neuron0x2c15620()*-0.346499);
}

double NNfunction_sb_sLuL::synapse0x2c1fed0() {
   return (neuron0x2c15960()*0.371302);
}

double NNfunction_sb_sLuL::synapse0x2c1ff10() {
   return (neuron0x2c15ec0()*-0.619992);
}

double NNfunction_sb_sLuL::synapse0x2c20590() {
   return (neuron0x2c160e0()*0.0523286);
}

double NNfunction_sb_sLuL::synapse0x2c205d0() {
   return (neuron0x2c16420()*0.185438);
}

double NNfunction_sb_sLuL::synapse0x2c20610() {
   return (neuron0x2c16760()*-0.171086);
}

double NNfunction_sb_sLuL::synapse0x2c20650() {
   return (neuron0x2c16aa0()*-0.0854789);
}

double NNfunction_sb_sLuL::synapse0x2c20690() {
   return (neuron0x2c16de0()*0.379847);
}

double NNfunction_sb_sLuL::synapse0x2c206d0() {
   return (neuron0x2c17120()*0.105884);
}

double NNfunction_sb_sLuL::synapse0x2c20a50() {
   return (neuron0x2c12560()*-0.344041);
}

double NNfunction_sb_sLuL::synapse0x2c20a90() {
   return (neuron0x2c128a0()*0.0764816);
}

double NNfunction_sb_sLuL::synapse0x2c20ad0() {
   return (neuron0x2c12be0()*0.025473);
}

double NNfunction_sb_sLuL::synapse0x2c20b10() {
   return (neuron0x2c12f20()*0.252438);
}

double NNfunction_sb_sLuL::synapse0x2c20b50() {
   return (neuron0x2c13260()*0.0216529);
}

double NNfunction_sb_sLuL::synapse0x2c20b90() {
   return (neuron0x2c135a0()*-0.482091);
}

double NNfunction_sb_sLuL::synapse0x2c20bd0() {
   return (neuron0x2c138e0()*0.591553);
}

double NNfunction_sb_sLuL::synapse0x2c20c10() {
   return (neuron0x2c13c20()*0.164691);
}

double NNfunction_sb_sLuL::synapse0x2c20c50() {
   return (neuron0x2c13f60()*-0.0274482);
}

double NNfunction_sb_sLuL::synapse0x2c20c90() {
   return (neuron0x2c142a0()*0.0709261);
}

double NNfunction_sb_sLuL::synapse0x2c20cd0() {
   return (neuron0x2c145e0()*0.00913168);
}

double NNfunction_sb_sLuL::synapse0x2c20d10() {
   return (neuron0x2c14920()*-0.937292);
}

double NNfunction_sb_sLuL::synapse0x2c20d50() {
   return (neuron0x2c14c60()*-1.37369);
}

double NNfunction_sb_sLuL::synapse0x2c20d90() {
   return (neuron0x2c14fa0()*-0.144978);
}

double NNfunction_sb_sLuL::synapse0x2c20dd0() {
   return (neuron0x2c152e0()*-0.137686);
}

double NNfunction_sb_sLuL::synapse0x2c20e10() {
   return (neuron0x2c15620()*0.112898);
}

double NNfunction_sb_sLuL::synapse0x2c208a0() {
   return (neuron0x2c15960()*-0.234773);
}

double NNfunction_sb_sLuL::synapse0x2c208e0() {
   return (neuron0x2c15ec0()*-0.19694);
}

double NNfunction_sb_sLuL::synapse0x2c20f60() {
   return (neuron0x2c160e0()*0.527667);
}

double NNfunction_sb_sLuL::synapse0x2c20fa0() {
   return (neuron0x2c16420()*-0.202585);
}

double NNfunction_sb_sLuL::synapse0x2c20fe0() {
   return (neuron0x2c16760()*-0.131574);
}

double NNfunction_sb_sLuL::synapse0x2c21020() {
   return (neuron0x2c16aa0()*-0.244108);
}

double NNfunction_sb_sLuL::synapse0x2c21060() {
   return (neuron0x2c16de0()*0.11127);
}

double NNfunction_sb_sLuL::synapse0x2c210a0() {
   return (neuron0x2c17120()*0.117918);
}

double NNfunction_sb_sLuL::synapse0x2c21420() {
   return (neuron0x2c12560()*0.610872);
}

double NNfunction_sb_sLuL::synapse0x2c12780() {
   return (neuron0x2c128a0()*-0.704069);
}

double NNfunction_sb_sLuL::synapse0x2c127c0() {
   return (neuron0x2c12be0()*-0.384276);
}

double NNfunction_sb_sLuL::synapse0x2c12ac0() {
   return (neuron0x2c12f20()*-0.0206534);
}

double NNfunction_sb_sLuL::synapse0x2c12b00() {
   return (neuron0x2c13260()*-0.135071);
}

double NNfunction_sb_sLuL::synapse0x2c12e00() {
   return (neuron0x2c135a0()*-0.126884);
}

double NNfunction_sb_sLuL::synapse0x2c12e40() {
   return (neuron0x2c138e0()*0.187864);
}

double NNfunction_sb_sLuL::synapse0x2c13140() {
   return (neuron0x2c13c20()*-0.428573);
}

double NNfunction_sb_sLuL::synapse0x2c13180() {
   return (neuron0x2c13f60()*0.788301);
}

double NNfunction_sb_sLuL::synapse0x2c13480() {
   return (neuron0x2c142a0()*-0.390276);
}

double NNfunction_sb_sLuL::synapse0x2c134c0() {
   return (neuron0x2c145e0()*0.91818);
}

double NNfunction_sb_sLuL::synapse0x2c137c0() {
   return (neuron0x2c14920()*0.652722);
}

double NNfunction_sb_sLuL::synapse0x2c13800() {
   return (neuron0x2c14c60()*0.0920595);
}

double NNfunction_sb_sLuL::synapse0x2c13b00() {
   return (neuron0x2c14fa0()*-0.527213);
}

double NNfunction_sb_sLuL::synapse0x2c13b40() {
   return (neuron0x2c152e0()*0.0748136);
}

double NNfunction_sb_sLuL::synapse0x2c13e40() {
   return (neuron0x2c15620()*-1.04313);
}

double NNfunction_sb_sLuL::synapse0x2c13e80() {
   return (neuron0x2c15960()*0.397572);
}

double NNfunction_sb_sLuL::synapse0x2c14180() {
   return (neuron0x2c15ec0()*0.19335);
}

double NNfunction_sb_sLuL::synapse0x2c141c0() {
   return (neuron0x2c160e0()*0.832569);
}

double NNfunction_sb_sLuL::synapse0x2c144c0() {
   return (neuron0x2c16420()*-0.321094);
}

double NNfunction_sb_sLuL::synapse0x2c14500() {
   return (neuron0x2c16760()*-0.37245);
}

double NNfunction_sb_sLuL::synapse0x2c14800() {
   return (neuron0x2c16aa0()*-0.80328);
}

double NNfunction_sb_sLuL::synapse0x2c14840() {
   return (neuron0x2c16de0()*-0.193877);
}

double NNfunction_sb_sLuL::synapse0x2c14b40() {
   return (neuron0x2c17120()*0.97559);
}

double NNfunction_sb_sLuL::synapse0x2c14b80() {
   return (neuron0x2c12560()*0.0164761);
}

double NNfunction_sb_sLuL::synapse0x2c15840() {
   return (neuron0x2c128a0()*0.0125205);
}

double NNfunction_sb_sLuL::synapse0x2c15880() {
   return (neuron0x2c12be0()*0.00304975);
}

double NNfunction_sb_sLuL::synapse0x2c21270() {
   return (neuron0x2c12f20()*6.89117);
}

double NNfunction_sb_sLuL::synapse0x2c212b0() {
   return (neuron0x2c13260()*-0.010882);
}

double NNfunction_sb_sLuL::synapse0x2c15b80() {
   return (neuron0x2c135a0()*-0.00463539);
}

double NNfunction_sb_sLuL::synapse0x2c15bc0() {
   return (neuron0x2c138e0()*0.0134809);
}

double NNfunction_sb_sLuL::synapse0x29c3b50() {
   return (neuron0x2c13c20()*0.00100978);
}

double NNfunction_sb_sLuL::synapse0x29c3b90() {
   return (neuron0x2c13f60()*0.0102787);
}

double NNfunction_sb_sLuL::synapse0x2c16300() {
   return (neuron0x2c142a0()*0.0212869);
}

double NNfunction_sb_sLuL::synapse0x2c16340() {
   return (neuron0x2c145e0()*-0.0201482);
}

double NNfunction_sb_sLuL::synapse0x2c16640() {
   return (neuron0x2c14920()*0.0960121);
}

double NNfunction_sb_sLuL::synapse0x2c16680() {
   return (neuron0x2c14c60()*0.126115);
}

double NNfunction_sb_sLuL::synapse0x2c16980() {
   return (neuron0x2c14fa0()*0.0226324);
}

double NNfunction_sb_sLuL::synapse0x2c169c0() {
   return (neuron0x2c152e0()*0.00546915);
}

double NNfunction_sb_sLuL::synapse0x2c16cc0() {
   return (neuron0x2c15620()*-0.00664458);
}

double NNfunction_sb_sLuL::synapse0x2c16d00() {
   return (neuron0x2c15960()*0.00220282);
}

double NNfunction_sb_sLuL::synapse0x2c17000() {
   return (neuron0x2c15ec0()*-0.0103423);
}

double NNfunction_sb_sLuL::synapse0x2c17040() {
   return (neuron0x2c160e0()*-0.0261134);
}

double NNfunction_sb_sLuL::synapse0x2c17340() {
   return (neuron0x2c16420()*0.0142893);
}

double NNfunction_sb_sLuL::synapse0x2c17380() {
   return (neuron0x2c16760()*-0.00181798);
}

double NNfunction_sb_sLuL::synapse0x2c14e80() {
   return (neuron0x2c16aa0()*-0.00852495);
}

double NNfunction_sb_sLuL::synapse0x2c14ec0() {
   return (neuron0x2c16de0()*-0.00436745);
}

double NNfunction_sb_sLuL::synapse0x2c23190() {
   return (neuron0x2c17120()*-0.0137264);
}

double NNfunction_sb_sLuL::synapse0x2c23510() {
   return (neuron0x2c12560()*0.559848);
}

double NNfunction_sb_sLuL::synapse0x2c23550() {
   return (neuron0x2c128a0()*-0.0152564);
}

double NNfunction_sb_sLuL::synapse0x2c23590() {
   return (neuron0x2c12be0()*0.448688);
}

double NNfunction_sb_sLuL::synapse0x2c235d0() {
   return (neuron0x2c12f20()*0.212043);
}

double NNfunction_sb_sLuL::synapse0x2c23610() {
   return (neuron0x2c13260()*-0.257481);
}

double NNfunction_sb_sLuL::synapse0x2c23650() {
   return (neuron0x2c135a0()*-0.279561);
}

double NNfunction_sb_sLuL::synapse0x2c23690() {
   return (neuron0x2c138e0()*-0.5338);
}

double NNfunction_sb_sLuL::synapse0x2c236d0() {
   return (neuron0x2c13c20()*0.487359);
}

double NNfunction_sb_sLuL::synapse0x2c23710() {
   return (neuron0x2c13f60()*-0.324499);
}

double NNfunction_sb_sLuL::synapse0x2c23750() {
   return (neuron0x2c142a0()*-0.514629);
}

double NNfunction_sb_sLuL::synapse0x2c23790() {
   return (neuron0x2c145e0()*0.0341913);
}

double NNfunction_sb_sLuL::synapse0x2c237d0() {
   return (neuron0x2c14920()*-0.139728);
}

double NNfunction_sb_sLuL::synapse0x2c23810() {
   return (neuron0x2c14c60()*0.238018);
}

double NNfunction_sb_sLuL::synapse0x2c23850() {
   return (neuron0x2c14fa0()*-0.00045262);
}

double NNfunction_sb_sLuL::synapse0x2c23890() {
   return (neuron0x2c152e0()*0.681511);
}

double NNfunction_sb_sLuL::synapse0x2c238d0() {
   return (neuron0x2c15620()*-0.355898);
}

double NNfunction_sb_sLuL::synapse0x2c23360() {
   return (neuron0x2c15960()*-1.05659);
}

double NNfunction_sb_sLuL::synapse0x2c233a0() {
   return (neuron0x2c15ec0()*-0.294534);
}

double NNfunction_sb_sLuL::synapse0x2c23a20() {
   return (neuron0x2c160e0()*-0.124495);
}

double NNfunction_sb_sLuL::synapse0x2c23a60() {
   return (neuron0x2c16420()*0.169815);
}

double NNfunction_sb_sLuL::synapse0x2c23aa0() {
   return (neuron0x2c16760()*-0.463273);
}

double NNfunction_sb_sLuL::synapse0x2c23ae0() {
   return (neuron0x2c16aa0()*-0.509827);
}

double NNfunction_sb_sLuL::synapse0x2c23b20() {
   return (neuron0x2c16de0()*-0.449817);
}

double NNfunction_sb_sLuL::synapse0x2c23b60() {
   return (neuron0x2c17120()*-0.128863);
}

double NNfunction_sb_sLuL::synapse0x2c23ee0() {
   return (neuron0x2c12560()*0.805859);
}

double NNfunction_sb_sLuL::synapse0x2c23f20() {
   return (neuron0x2c128a0()*-0.520491);
}

double NNfunction_sb_sLuL::synapse0x2c23f60() {
   return (neuron0x2c12be0()*-0.412811);
}

double NNfunction_sb_sLuL::synapse0x2c23fa0() {
   return (neuron0x2c12f20()*0.49663);
}

double NNfunction_sb_sLuL::synapse0x2c23fe0() {
   return (neuron0x2c13260()*-0.785173);
}

double NNfunction_sb_sLuL::synapse0x2c24020() {
   return (neuron0x2c135a0()*-0.155861);
}

double NNfunction_sb_sLuL::synapse0x2c24060() {
   return (neuron0x2c138e0()*-0.111396);
}

double NNfunction_sb_sLuL::synapse0x2c240a0() {
   return (neuron0x2c13c20()*-0.102174);
}

double NNfunction_sb_sLuL::synapse0x2c240e0() {
   return (neuron0x2c13f60()*0.170736);
}

double NNfunction_sb_sLuL::synapse0x2c24120() {
   return (neuron0x2c142a0()*0.917962);
}

double NNfunction_sb_sLuL::synapse0x2c24160() {
   return (neuron0x2c145e0()*0.178788);
}

double NNfunction_sb_sLuL::synapse0x2c241a0() {
   return (neuron0x2c14920()*-0.914047);
}

double NNfunction_sb_sLuL::synapse0x2c241e0() {
   return (neuron0x2c14c60()*-0.369828);
}

double NNfunction_sb_sLuL::synapse0x2c24220() {
   return (neuron0x2c14fa0()*-0.827417);
}

double NNfunction_sb_sLuL::synapse0x2c24260() {
   return (neuron0x2c152e0()*0.284849);
}

double NNfunction_sb_sLuL::synapse0x2c242a0() {
   return (neuron0x2c15620()*-0.757258);
}

double NNfunction_sb_sLuL::synapse0x2c23d30() {
   return (neuron0x2c15960()*-0.477466);
}

double NNfunction_sb_sLuL::synapse0x2c23d70() {
   return (neuron0x2c15ec0()*-0.105616);
}

double NNfunction_sb_sLuL::synapse0x2c243f0() {
   return (neuron0x2c160e0()*-0.707461);
}

double NNfunction_sb_sLuL::synapse0x2c24430() {
   return (neuron0x2c16420()*-0.700685);
}

double NNfunction_sb_sLuL::synapse0x2c24470() {
   return (neuron0x2c16760()*0.368067);
}

double NNfunction_sb_sLuL::synapse0x2c244b0() {
   return (neuron0x2c16aa0()*0.0410517);
}

double NNfunction_sb_sLuL::synapse0x2c244f0() {
   return (neuron0x2c16de0()*0.31014);
}

double NNfunction_sb_sLuL::synapse0x2c24530() {
   return (neuron0x2c17120()*-0.981141);
}

double NNfunction_sb_sLuL::synapse0x2c248b0() {
   return (neuron0x2c12560()*0.00288852);
}

double NNfunction_sb_sLuL::synapse0x2c248f0() {
   return (neuron0x2c128a0()*0.00304116);
}

double NNfunction_sb_sLuL::synapse0x2c24930() {
   return (neuron0x2c12be0()*0.0326706);
}

double NNfunction_sb_sLuL::synapse0x2c24970() {
   return (neuron0x2c12f20()*-1.32523);
}

double NNfunction_sb_sLuL::synapse0x2c249b0() {
   return (neuron0x2c13260()*0.00170546);
}

double NNfunction_sb_sLuL::synapse0x2c249f0() {
   return (neuron0x2c135a0()*0.0014255);
}

double NNfunction_sb_sLuL::synapse0x2c24a30() {
   return (neuron0x2c138e0()*0.00402379);
}

double NNfunction_sb_sLuL::synapse0x2c24a70() {
   return (neuron0x2c13c20()*-0.000931593);
}

double NNfunction_sb_sLuL::synapse0x2c24ab0() {
   return (neuron0x2c13f60()*-0.00215729);
}

double NNfunction_sb_sLuL::synapse0x2c24af0() {
   return (neuron0x2c142a0()*-0.00360042);
}

double NNfunction_sb_sLuL::synapse0x2c24b30() {
   return (neuron0x2c145e0()*-0.00368368);
}

double NNfunction_sb_sLuL::synapse0x2c24b70() {
   return (neuron0x2c14920()*-0.201731);
}

double NNfunction_sb_sLuL::synapse0x2c24bb0() {
   return (neuron0x2c14c60()*-0.242966);
}

double NNfunction_sb_sLuL::synapse0x2c24bf0() {
   return (neuron0x2c14fa0()*0.000692265);
}

double NNfunction_sb_sLuL::synapse0x2c24c30() {
   return (neuron0x2c152e0()*-0.00753182);
}

double NNfunction_sb_sLuL::synapse0x2c24c70() {
   return (neuron0x2c15620()*0.00806213);
}

double NNfunction_sb_sLuL::synapse0x2c24700() {
   return (neuron0x2c15960()*-0.0102657);
}

double NNfunction_sb_sLuL::synapse0x2c24740() {
   return (neuron0x2c15ec0()*0.001248);
}

double NNfunction_sb_sLuL::synapse0x2c24dc0() {
   return (neuron0x2c160e0()*-0.0100416);
}

double NNfunction_sb_sLuL::synapse0x2c24e00() {
   return (neuron0x2c16420()*0.00846142);
}

double NNfunction_sb_sLuL::synapse0x2c24e40() {
   return (neuron0x2c16760()*0.00447125);
}

double NNfunction_sb_sLuL::synapse0x2c24e80() {
   return (neuron0x2c16aa0()*-0.00105292);
}

double NNfunction_sb_sLuL::synapse0x2c24ec0() {
   return (neuron0x2c16de0()*0.00128847);
}

double NNfunction_sb_sLuL::synapse0x2c24f00() {
   return (neuron0x2c17120()*0.00214309);
}

double NNfunction_sb_sLuL::synapse0x2c25280() {
   return (neuron0x2c12560()*0.183642);
}

double NNfunction_sb_sLuL::synapse0x2c252c0() {
   return (neuron0x2c128a0()*0.192279);
}

double NNfunction_sb_sLuL::synapse0x2c25300() {
   return (neuron0x2c12be0()*-0.117371);
}

double NNfunction_sb_sLuL::synapse0x2c25340() {
   return (neuron0x2c12f20()*-0.0257286);
}

double NNfunction_sb_sLuL::synapse0x2c25380() {
   return (neuron0x2c13260()*-0.0916805);
}

double NNfunction_sb_sLuL::synapse0x2c253c0() {
   return (neuron0x2c135a0()*0.271319);
}

double NNfunction_sb_sLuL::synapse0x2c25400() {
   return (neuron0x2c138e0()*-0.791272);
}

double NNfunction_sb_sLuL::synapse0x2c25440() {
   return (neuron0x2c13c20()*-0.685572);
}

double NNfunction_sb_sLuL::synapse0x2c25480() {
   return (neuron0x2c13f60()*-0.110735);
}

double NNfunction_sb_sLuL::synapse0x2c254c0() {
   return (neuron0x2c142a0()*0.79905);
}

double NNfunction_sb_sLuL::synapse0x2c25500() {
   return (neuron0x2c145e0()*-0.169735);
}

double NNfunction_sb_sLuL::synapse0x2c25540() {
   return (neuron0x2c14920()*-1.00412);
}

double NNfunction_sb_sLuL::synapse0x2c25580() {
   return (neuron0x2c14c60()*-0.486904);
}

double NNfunction_sb_sLuL::synapse0x2c255c0() {
   return (neuron0x2c14fa0()*-0.621765);
}

double NNfunction_sb_sLuL::synapse0x2c25600() {
   return (neuron0x2c152e0()*0.0802393);
}

double NNfunction_sb_sLuL::synapse0x2c25640() {
   return (neuron0x2c15620()*-0.124762);
}

double NNfunction_sb_sLuL::synapse0x2c250d0() {
   return (neuron0x2c15960()*-0.669043);
}

double NNfunction_sb_sLuL::synapse0x2c25110() {
   return (neuron0x2c15ec0()*-0.07503);
}

double NNfunction_sb_sLuL::synapse0x2c25790() {
   return (neuron0x2c160e0()*-0.0285369);
}

double NNfunction_sb_sLuL::synapse0x2c257d0() {
   return (neuron0x2c16420()*0.179678);
}

double NNfunction_sb_sLuL::synapse0x2c25810() {
   return (neuron0x2c16760()*1.742);
}

double NNfunction_sb_sLuL::synapse0x2c25850() {
   return (neuron0x2c16aa0()*0.221645);
}

double NNfunction_sb_sLuL::synapse0x2c25890() {
   return (neuron0x2c16de0()*0.355211);
}

double NNfunction_sb_sLuL::synapse0x2c258d0() {
   return (neuron0x2c17120()*0.315853);
}

double NNfunction_sb_sLuL::synapse0x2c25c50() {
   return (neuron0x2c12560()*0.379408);
}

double NNfunction_sb_sLuL::synapse0x2c25c90() {
   return (neuron0x2c128a0()*-0.365937);
}

double NNfunction_sb_sLuL::synapse0x2c25cd0() {
   return (neuron0x2c12be0()*-0.44299);
}

double NNfunction_sb_sLuL::synapse0x2c25d10() {
   return (neuron0x2c12f20()*-0.0461653);
}

double NNfunction_sb_sLuL::synapse0x2c25d50() {
   return (neuron0x2c13260()*0.600316);
}

double NNfunction_sb_sLuL::synapse0x2c25d90() {
   return (neuron0x2c135a0()*0.628635);
}

double NNfunction_sb_sLuL::synapse0x2c25dd0() {
   return (neuron0x2c138e0()*0.880845);
}

double NNfunction_sb_sLuL::synapse0x2c25e10() {
   return (neuron0x2c13c20()*-0.217593);
}

double NNfunction_sb_sLuL::synapse0x2c25e50() {
   return (neuron0x2c13f60()*-0.0362997);
}

double NNfunction_sb_sLuL::synapse0x2c1e010() {
   return (neuron0x2c142a0()*-0.715647);
}

double NNfunction_sb_sLuL::synapse0x2c1e050() {
   return (neuron0x2c145e0()*-0.398432);
}

double NNfunction_sb_sLuL::synapse0x2c1e090() {
   return (neuron0x2c14920()*-0.554865);
}

double NNfunction_sb_sLuL::synapse0x2c1e0d0() {
   return (neuron0x2c14c60()*0.486285);
}

double NNfunction_sb_sLuL::synapse0x2c1e110() {
   return (neuron0x2c14fa0()*0.416857);
}

double NNfunction_sb_sLuL::synapse0x2c1e150() {
   return (neuron0x2c152e0()*0.224897);
}

double NNfunction_sb_sLuL::synapse0x2c1e190() {
   return (neuron0x2c15620()*-0.0569226);
}

double NNfunction_sb_sLuL::synapse0x2c25aa0() {
   return (neuron0x2c15960()*-0.122331);
}

double NNfunction_sb_sLuL::synapse0x2c25ae0() {
   return (neuron0x2c15ec0()*0.107372);
}

double NNfunction_sb_sLuL::synapse0x2c1e2e0() {
   return (neuron0x2c160e0()*-0.110693);
}

double NNfunction_sb_sLuL::synapse0x2c1e320() {
   return (neuron0x2c16420()*-0.404337);
}

double NNfunction_sb_sLuL::synapse0x2c1e360() {
   return (neuron0x2c16760()*-0.104436);
}

double NNfunction_sb_sLuL::synapse0x2c1e3a0() {
   return (neuron0x2c16aa0()*-0.259744);
}

double NNfunction_sb_sLuL::synapse0x2c1e3e0() {
   return (neuron0x2c16de0()*-0.588491);
}

double NNfunction_sb_sLuL::synapse0x2c1e420() {
   return (neuron0x2c17120()*0.799696);
}

double NNfunction_sb_sLuL::synapse0x2c1e7a0() {
   return (neuron0x2c12560()*-0.165758);
}

double NNfunction_sb_sLuL::synapse0x2c1e7e0() {
   return (neuron0x2c128a0()*-0.215368);
}

double NNfunction_sb_sLuL::synapse0x2c1e820() {
   return (neuron0x2c12be0()*0.183863);
}

double NNfunction_sb_sLuL::synapse0x2c1e860() {
   return (neuron0x2c12f20()*-0.380081);
}

double NNfunction_sb_sLuL::synapse0x2c1e8a0() {
   return (neuron0x2c13260()*0.209402);
}

double NNfunction_sb_sLuL::synapse0x2c1e8e0() {
   return (neuron0x2c135a0()*0.8014);
}

double NNfunction_sb_sLuL::synapse0x2c1e920() {
   return (neuron0x2c138e0()*-0.279157);
}

double NNfunction_sb_sLuL::synapse0x2c1e960() {
   return (neuron0x2c13c20()*0.0484555);
}

double NNfunction_sb_sLuL::synapse0x2c1e9a0() {
   return (neuron0x2c13f60()*-0.347957);
}

double NNfunction_sb_sLuL::synapse0x2c1e9e0() {
   return (neuron0x2c142a0()*0.00255546);
}

double NNfunction_sb_sLuL::synapse0x2c1ea20() {
   return (neuron0x2c145e0()*0.341316);
}

double NNfunction_sb_sLuL::synapse0x2c1ea60() {
   return (neuron0x2c14920()*-0.56192);
}

double NNfunction_sb_sLuL::synapse0x2c1eaa0() {
   return (neuron0x2c14c60()*-0.19582);
}

double NNfunction_sb_sLuL::synapse0x2c1eae0() {
   return (neuron0x2c14fa0()*-0.434479);
}

double NNfunction_sb_sLuL::synapse0x2c1eb20() {
   return (neuron0x2c152e0()*-0.0140819);
}

double NNfunction_sb_sLuL::synapse0x2c1eb60() {
   return (neuron0x2c15620()*-1.00444);
}

double NNfunction_sb_sLuL::synapse0x2c1e5f0() {
   return (neuron0x2c15960()*0.42088);
}

double NNfunction_sb_sLuL::synapse0x2c1e630() {
   return (neuron0x2c15ec0()*-0.612753);
}

double NNfunction_sb_sLuL::synapse0x2c1ecb0() {
   return (neuron0x2c160e0()*-0.697419);
}

double NNfunction_sb_sLuL::synapse0x2c1ecf0() {
   return (neuron0x2c16420()*-0.0732582);
}

double NNfunction_sb_sLuL::synapse0x2c1ed30() {
   return (neuron0x2c16760()*-0.124115);
}

double NNfunction_sb_sLuL::synapse0x2c1ed70() {
   return (neuron0x2c16aa0()*-0.410229);
}

double NNfunction_sb_sLuL::synapse0x2c1edb0() {
   return (neuron0x2c16de0()*-0.509755);
}

double NNfunction_sb_sLuL::synapse0x2c1edf0() {
   return (neuron0x2c17120()*-0.275178);
}

double NNfunction_sb_sLuL::synapse0x2c1efc0() {
   return (neuron0x2c12560()*-0.723228);
}

double NNfunction_sb_sLuL::synapse0x2c28050() {
   return (neuron0x2c128a0()*-0.517534);
}

double NNfunction_sb_sLuL::synapse0x2c28090() {
   return (neuron0x2c12be0()*-0.302605);
}

double NNfunction_sb_sLuL::synapse0x2c280d0() {
   return (neuron0x2c12f20()*0.657252);
}

double NNfunction_sb_sLuL::synapse0x2c28110() {
   return (neuron0x2c13260()*-0.0597813);
}

double NNfunction_sb_sLuL::synapse0x2c28150() {
   return (neuron0x2c135a0()*0.419377);
}

double NNfunction_sb_sLuL::synapse0x2c28190() {
   return (neuron0x2c138e0()*-0.361137);
}

double NNfunction_sb_sLuL::synapse0x2c281d0() {
   return (neuron0x2c13c20()*-0.0528061);
}

double NNfunction_sb_sLuL::synapse0x2c28210() {
   return (neuron0x2c13f60()*-0.562505);
}

double NNfunction_sb_sLuL::synapse0x2c28250() {
   return (neuron0x2c142a0()*0.340496);
}

double NNfunction_sb_sLuL::synapse0x2c28290() {
   return (neuron0x2c145e0()*-0.456237);
}

double NNfunction_sb_sLuL::synapse0x2c282d0() {
   return (neuron0x2c14920()*0.858814);
}

double NNfunction_sb_sLuL::synapse0x2c28310() {
   return (neuron0x2c14c60()*0.262428);
}

double NNfunction_sb_sLuL::synapse0x2c28350() {
   return (neuron0x2c14fa0()*0.560982);
}

double NNfunction_sb_sLuL::synapse0x2c28390() {
   return (neuron0x2c152e0()*0.555631);
}

double NNfunction_sb_sLuL::synapse0x2c283d0() {
   return (neuron0x2c15620()*1.07387);
}

double NNfunction_sb_sLuL::synapse0x2c27ea0() {
   return (neuron0x2c15960()*0.16731);
}

double NNfunction_sb_sLuL::synapse0x2c27ee0() {
   return (neuron0x2c15ec0()*-0.487671);
}

double NNfunction_sb_sLuL::synapse0x2c28520() {
   return (neuron0x2c160e0()*0.622286);
}

double NNfunction_sb_sLuL::synapse0x2c28560() {
   return (neuron0x2c16420()*0.124714);
}

double NNfunction_sb_sLuL::synapse0x2c285a0() {
   return (neuron0x2c16760()*0.355216);
}

double NNfunction_sb_sLuL::synapse0x2c285e0() {
   return (neuron0x2c16aa0()*-0.670563);
}

double NNfunction_sb_sLuL::synapse0x2c28620() {
   return (neuron0x2c16de0()*0.392805);
}

double NNfunction_sb_sLuL::synapse0x2c28660() {
   return (neuron0x2c17120()*0.230524);
}

double NNfunction_sb_sLuL::synapse0x2c289e0() {
   return (neuron0x2c12560()*-0.0357898);
}

double NNfunction_sb_sLuL::synapse0x2c28a20() {
   return (neuron0x2c128a0()*0.044825);
}

double NNfunction_sb_sLuL::synapse0x2c28a60() {
   return (neuron0x2c12be0()*-0.293552);
}

double NNfunction_sb_sLuL::synapse0x2c28aa0() {
   return (neuron0x2c12f20()*1.11343);
}

double NNfunction_sb_sLuL::synapse0x2c28ae0() {
   return (neuron0x2c13260()*0.130431);
}

double NNfunction_sb_sLuL::synapse0x2c28b20() {
   return (neuron0x2c135a0()*-0.112095);
}

double NNfunction_sb_sLuL::synapse0x2c28b60() {
   return (neuron0x2c138e0()*-0.0393637);
}

double NNfunction_sb_sLuL::synapse0x2c28ba0() {
   return (neuron0x2c13c20()*-0.0463028);
}

double NNfunction_sb_sLuL::synapse0x2c28be0() {
   return (neuron0x2c13f60()*-0.0074398);
}

double NNfunction_sb_sLuL::synapse0x2c28c20() {
   return (neuron0x2c142a0()*-0.0349338);
}

double NNfunction_sb_sLuL::synapse0x2c28c60() {
   return (neuron0x2c145e0()*0.138185);
}

double NNfunction_sb_sLuL::synapse0x2c28ca0() {
   return (neuron0x2c14920()*1.12419);
}

double NNfunction_sb_sLuL::synapse0x2c28ce0() {
   return (neuron0x2c14c60()*0.240756);
}

double NNfunction_sb_sLuL::synapse0x2c28d20() {
   return (neuron0x2c14fa0()*-0.061211);
}

double NNfunction_sb_sLuL::synapse0x2c28d60() {
   return (neuron0x2c152e0()*-0.0757915);
}

double NNfunction_sb_sLuL::synapse0x2c28da0() {
   return (neuron0x2c15620()*-0.135455);
}

double NNfunction_sb_sLuL::synapse0x2c28830() {
   return (neuron0x2c15960()*0.0453024);
}

double NNfunction_sb_sLuL::synapse0x2c28870() {
   return (neuron0x2c15ec0()*-0.0265848);
}

double NNfunction_sb_sLuL::synapse0x2c28ef0() {
   return (neuron0x2c160e0()*0.153374);
}

double NNfunction_sb_sLuL::synapse0x2c28f30() {
   return (neuron0x2c16420()*0.0885078);
}

double NNfunction_sb_sLuL::synapse0x2c28f70() {
   return (neuron0x2c16760()*0.138544);
}

double NNfunction_sb_sLuL::synapse0x2c28fb0() {
   return (neuron0x2c16aa0()*0.164389);
}

double NNfunction_sb_sLuL::synapse0x2c28ff0() {
   return (neuron0x2c16de0()*0.0272188);
}

double NNfunction_sb_sLuL::synapse0x2c29030() {
   return (neuron0x2c17120()*-0.00771935);
}

double NNfunction_sb_sLuL::synapse0x2c293b0() {
   return (neuron0x2c12560()*0.0253586);
}

double NNfunction_sb_sLuL::synapse0x2c293f0() {
   return (neuron0x2c128a0()*-0.00241516);
}

double NNfunction_sb_sLuL::synapse0x2c29430() {
   return (neuron0x2c12be0()*-0.00823966);
}

double NNfunction_sb_sLuL::synapse0x2c29470() {
   return (neuron0x2c12f20()*1.13756);
}

double NNfunction_sb_sLuL::synapse0x2c294b0() {
   return (neuron0x2c13260()*-0.0412898);
}

double NNfunction_sb_sLuL::synapse0x2c294f0() {
   return (neuron0x2c135a0()*-0.0252224);
}

double NNfunction_sb_sLuL::synapse0x2c29530() {
   return (neuron0x2c138e0()*-0.00287692);
}

double NNfunction_sb_sLuL::synapse0x2c29570() {
   return (neuron0x2c13c20()*0.00959794);
}

double NNfunction_sb_sLuL::synapse0x2c295b0() {
   return (neuron0x2c13f60()*0.0265603);
}

double NNfunction_sb_sLuL::synapse0x2c295f0() {
   return (neuron0x2c142a0()*0.0467518);
}

double NNfunction_sb_sLuL::synapse0x2c29630() {
   return (neuron0x2c145e0()*-0.0196884);
}

double NNfunction_sb_sLuL::synapse0x2c29670() {
   return (neuron0x2c14920()*-0.319541);
}

double NNfunction_sb_sLuL::synapse0x2c296b0() {
   return (neuron0x2c14c60()*-0.339905);
}

double NNfunction_sb_sLuL::synapse0x2c296f0() {
   return (neuron0x2c14fa0()*0.00214287);
}

double NNfunction_sb_sLuL::synapse0x2c29730() {
   return (neuron0x2c152e0()*0.0483678);
}

double NNfunction_sb_sLuL::synapse0x2c29770() {
   return (neuron0x2c15620()*-0.00280974);
}

double NNfunction_sb_sLuL::synapse0x2c29200() {
   return (neuron0x2c15960()*0.013118);
}

double NNfunction_sb_sLuL::synapse0x2c29240() {
   return (neuron0x2c15ec0()*0.0781721);
}

double NNfunction_sb_sLuL::synapse0x2c298c0() {
   return (neuron0x2c160e0()*0.0586053);
}

double NNfunction_sb_sLuL::synapse0x2c29900() {
   return (neuron0x2c16420()*0.0245605);
}

double NNfunction_sb_sLuL::synapse0x2c29940() {
   return (neuron0x2c16760()*-0.0338502);
}

double NNfunction_sb_sLuL::synapse0x2c29980() {
   return (neuron0x2c16aa0()*-0.0204269);
}

double NNfunction_sb_sLuL::synapse0x2c299c0() {
   return (neuron0x2c16de0()*-0.00251704);
}

double NNfunction_sb_sLuL::synapse0x2c29a00() {
   return (neuron0x2c17120()*0.000337792);
}

double NNfunction_sb_sLuL::synapse0x2c29d80() {
   return (neuron0x2c12560()*0.0448946);
}

double NNfunction_sb_sLuL::synapse0x2c29dc0() {
   return (neuron0x2c128a0()*-0.0360268);
}

double NNfunction_sb_sLuL::synapse0x2c29e00() {
   return (neuron0x2c12be0()*0.188715);
}

double NNfunction_sb_sLuL::synapse0x2c29e40() {
   return (neuron0x2c12f20()*-0.231748);
}

double NNfunction_sb_sLuL::synapse0x2c29e80() {
   return (neuron0x2c13260()*0.162989);
}

double NNfunction_sb_sLuL::synapse0x2c29ec0() {
   return (neuron0x2c135a0()*-0.0335827);
}

double NNfunction_sb_sLuL::synapse0x2c29f00() {
   return (neuron0x2c138e0()*0.083362);
}

double NNfunction_sb_sLuL::synapse0x2c29f40() {
   return (neuron0x2c13c20()*-0.0913499);
}

double NNfunction_sb_sLuL::synapse0x2c29f80() {
   return (neuron0x2c13f60()*0.00175911);
}

double NNfunction_sb_sLuL::synapse0x2c29fc0() {
   return (neuron0x2c142a0()*0.00791376);
}

double NNfunction_sb_sLuL::synapse0x2c2a000() {
   return (neuron0x2c145e0()*-0.169952);
}

double NNfunction_sb_sLuL::synapse0x2c2a040() {
   return (neuron0x2c14920()*-1.0744);
}

double NNfunction_sb_sLuL::synapse0x2c2a080() {
   return (neuron0x2c14c60()*-0.83912);
}

double NNfunction_sb_sLuL::synapse0x2c2a0c0() {
   return (neuron0x2c14fa0()*-0.127152);
}

double NNfunction_sb_sLuL::synapse0x2c2a100() {
   return (neuron0x2c152e0()*0.430934);
}

double NNfunction_sb_sLuL::synapse0x2c2a140() {
   return (neuron0x2c15620()*0.453322);
}

double NNfunction_sb_sLuL::synapse0x2c29bd0() {
   return (neuron0x2c15960()*-0.0129641);
}

double NNfunction_sb_sLuL::synapse0x2c29c10() {
   return (neuron0x2c15ec0()*0.524476);
}

double NNfunction_sb_sLuL::synapse0x2c2a290() {
   return (neuron0x2c160e0()*0.464208);
}

double NNfunction_sb_sLuL::synapse0x2c2a2d0() {
   return (neuron0x2c16420()*-0.035158);
}

double NNfunction_sb_sLuL::synapse0x2c2a310() {
   return (neuron0x2c16760()*0.0057143);
}

double NNfunction_sb_sLuL::synapse0x2c2a350() {
   return (neuron0x2c16aa0()*-0.0524117);
}

double NNfunction_sb_sLuL::synapse0x2c2a390() {
   return (neuron0x2c16de0()*-0.00760132);
}

double NNfunction_sb_sLuL::synapse0x2c2a3d0() {
   return (neuron0x2c17120()*-0.039675);
}

double NNfunction_sb_sLuL::synapse0x2c2a750() {
   return (neuron0x2c12560()*0.150488);
}

double NNfunction_sb_sLuL::synapse0x2c2a790() {
   return (neuron0x2c128a0()*0.147516);
}

double NNfunction_sb_sLuL::synapse0x2c2a7d0() {
   return (neuron0x2c12be0()*0.513844);
}

double NNfunction_sb_sLuL::synapse0x2c2a810() {
   return (neuron0x2c12f20()*-1.14681);
}

double NNfunction_sb_sLuL::synapse0x2c2a850() {
   return (neuron0x2c13260()*-0.567259);
}

double NNfunction_sb_sLuL::synapse0x2c2a890() {
   return (neuron0x2c135a0()*0.0359483);
}

double NNfunction_sb_sLuL::synapse0x2c2a8d0() {
   return (neuron0x2c138e0()*0.0687789);
}

double NNfunction_sb_sLuL::synapse0x2c2a910() {
   return (neuron0x2c13c20()*-0.142253);
}

double NNfunction_sb_sLuL::synapse0x2c2a950() {
   return (neuron0x2c13f60()*0.155823);
}

double NNfunction_sb_sLuL::synapse0x2c2a990() {
   return (neuron0x2c142a0()*-0.175472);
}

double NNfunction_sb_sLuL::synapse0x2c2a9d0() {
   return (neuron0x2c145e0()*-0.372526);
}

double NNfunction_sb_sLuL::synapse0x2c2aa10() {
   return (neuron0x2c14920()*0.395469);
}

double NNfunction_sb_sLuL::synapse0x2c2aa50() {
   return (neuron0x2c14c60()*0.959706);
}

double NNfunction_sb_sLuL::synapse0x2c2aa90() {
   return (neuron0x2c14fa0()*0.703333);
}

double NNfunction_sb_sLuL::synapse0x2c2aad0() {
   return (neuron0x2c152e0()*-0.134145);
}

double NNfunction_sb_sLuL::synapse0x2c2ab10() {
   return (neuron0x2c15620()*-0.421098);
}

double NNfunction_sb_sLuL::synapse0x2c2a5a0() {
   return (neuron0x2c15960()*0.100672);
}

double NNfunction_sb_sLuL::synapse0x2c2a5e0() {
   return (neuron0x2c15ec0()*0.219743);
}

double NNfunction_sb_sLuL::synapse0x2c2ac60() {
   return (neuron0x2c160e0()*0.321085);
}

double NNfunction_sb_sLuL::synapse0x2c2aca0() {
   return (neuron0x2c16420()*0.0523864);
}

double NNfunction_sb_sLuL::synapse0x2c2ace0() {
   return (neuron0x2c16760()*-0.124773);
}

double NNfunction_sb_sLuL::synapse0x2c2ad20() {
   return (neuron0x2c16aa0()*-0.0681789);
}

double NNfunction_sb_sLuL::synapse0x2c2ad60() {
   return (neuron0x2c16de0()*0.14001);
}

double NNfunction_sb_sLuL::synapse0x2c2ada0() {
   return (neuron0x2c17120()*-0.307518);
}

double NNfunction_sb_sLuL::synapse0x2c2b120() {
   return (neuron0x2c12560()*-0.0355637);
}

double NNfunction_sb_sLuL::synapse0x2c2b160() {
   return (neuron0x2c128a0()*-0.123857);
}

double NNfunction_sb_sLuL::synapse0x2c2b1a0() {
   return (neuron0x2c12be0()*1.69425);
}

double NNfunction_sb_sLuL::synapse0x2c2b1e0() {
   return (neuron0x2c12f20()*-0.126903);
}

double NNfunction_sb_sLuL::synapse0x2c2b220() {
   return (neuron0x2c13260()*-0.0234306);
}

double NNfunction_sb_sLuL::synapse0x2c2b260() {
   return (neuron0x2c135a0()*-0.0185138);
}

double NNfunction_sb_sLuL::synapse0x2c2b2a0() {
   return (neuron0x2c138e0()*-0.0516483);
}

double NNfunction_sb_sLuL::synapse0x2c2b2e0() {
   return (neuron0x2c13c20()*0.00973632);
}

double NNfunction_sb_sLuL::synapse0x2c2b320() {
   return (neuron0x2c13f60()*-0.025254);
}

double NNfunction_sb_sLuL::synapse0x2c2b360() {
   return (neuron0x2c142a0()*-0.0811666);
}

double NNfunction_sb_sLuL::synapse0x2c2b3a0() {
   return (neuron0x2c145e0()*0.0223381);
}

double NNfunction_sb_sLuL::synapse0x2c2b3e0() {
   return (neuron0x2c14920()*-0.0904548);
}

double NNfunction_sb_sLuL::synapse0x2c2b420() {
   return (neuron0x2c14c60()*-0.0651968);
}

double NNfunction_sb_sLuL::synapse0x2c2b460() {
   return (neuron0x2c14fa0()*-0.0492755);
}

double NNfunction_sb_sLuL::synapse0x2c2b4a0() {
   return (neuron0x2c152e0()*-0.000507247);
}

double NNfunction_sb_sLuL::synapse0x2c2b4e0() {
   return (neuron0x2c15620()*0.00340714);
}

double NNfunction_sb_sLuL::synapse0x2c2af70() {
   return (neuron0x2c15960()*0.066272);
}

double NNfunction_sb_sLuL::synapse0x2c2afb0() {
   return (neuron0x2c15ec0()*-0.011567);
}

double NNfunction_sb_sLuL::synapse0x2c2b630() {
   return (neuron0x2c160e0()*-0.0651866);
}

double NNfunction_sb_sLuL::synapse0x2c2b670() {
   return (neuron0x2c16420()*-0.0343087);
}

double NNfunction_sb_sLuL::synapse0x2c2b6b0() {
   return (neuron0x2c16760()*0.0126948);
}

double NNfunction_sb_sLuL::synapse0x2c2b6f0() {
   return (neuron0x2c16aa0()*-0.0239783);
}

double NNfunction_sb_sLuL::synapse0x2c2b730() {
   return (neuron0x2c16de0()*-0.024451);
}

double NNfunction_sb_sLuL::synapse0x2c2b770() {
   return (neuron0x2c17120()*-0.0183397);
}

double NNfunction_sb_sLuL::synapse0x2c2baf0() {
   return (neuron0x2c12560()*-0.00803977);
}

double NNfunction_sb_sLuL::synapse0x2c2bb30() {
   return (neuron0x2c128a0()*-0.0125546);
}

double NNfunction_sb_sLuL::synapse0x2c2bb70() {
   return (neuron0x2c12be0()*0.0995958);
}

double NNfunction_sb_sLuL::synapse0x2c2bbb0() {
   return (neuron0x2c12f20()*-0.0160422);
}

double NNfunction_sb_sLuL::synapse0x2c2bbf0() {
   return (neuron0x2c13260()*0.00436364);
}

double NNfunction_sb_sLuL::synapse0x2c2bc30() {
   return (neuron0x2c135a0()*0.0150985);
}

double NNfunction_sb_sLuL::synapse0x2c2bc70() {
   return (neuron0x2c138e0()*-0.01862);
}

double NNfunction_sb_sLuL::synapse0x2c2bcb0() {
   return (neuron0x2c13c20()*0.00415143);
}

double NNfunction_sb_sLuL::synapse0x2c2bcf0() {
   return (neuron0x2c13f60()*-0.0303372);
}

double NNfunction_sb_sLuL::synapse0x2c2bd30() {
   return (neuron0x2c142a0()*-0.0239435);
}

double NNfunction_sb_sLuL::synapse0x2c2bd70() {
   return (neuron0x2c145e0()*0.0415635);
}

double NNfunction_sb_sLuL::synapse0x2c2bdb0() {
   return (neuron0x2c14920()*-1.12864);
}

double NNfunction_sb_sLuL::synapse0x2c2bdf0() {
   return (neuron0x2c14c60()*-0.223817);
}

double NNfunction_sb_sLuL::synapse0x2c2be30() {
   return (neuron0x2c14fa0()*-0.0269031);
}

double NNfunction_sb_sLuL::synapse0x2c2be70() {
   return (neuron0x2c152e0()*-0.0318297);
}

double NNfunction_sb_sLuL::synapse0x2c2beb0() {
   return (neuron0x2c15620()*-0.0198406);
}

double NNfunction_sb_sLuL::synapse0x2c2b940() {
   return (neuron0x2c15960()*0.00105615);
}

double NNfunction_sb_sLuL::synapse0x2c2b980() {
   return (neuron0x2c15ec0()*-0.102685);
}

double NNfunction_sb_sLuL::synapse0x2c2c000() {
   return (neuron0x2c160e0()*-0.034734);
}

double NNfunction_sb_sLuL::synapse0x2c2c040() {
   return (neuron0x2c16420()*-0.0588231);
}

double NNfunction_sb_sLuL::synapse0x2c2c080() {
   return (neuron0x2c16760()*-0.00529637);
}

double NNfunction_sb_sLuL::synapse0x2c2c0c0() {
   return (neuron0x2c16aa0()*0.0301152);
}

double NNfunction_sb_sLuL::synapse0x2c2c100() {
   return (neuron0x2c16de0()*-0.0123017);
}

double NNfunction_sb_sLuL::synapse0x2c2c140() {
   return (neuron0x2c17120()*-0.00776138);
}

double NNfunction_sb_sLuL::synapse0x2c2c4c0() {
   return (neuron0x2c12560()*-0.835053);
}

double NNfunction_sb_sLuL::synapse0x2c2c500() {
   return (neuron0x2c128a0()*0.151899);
}

double NNfunction_sb_sLuL::synapse0x2c2c540() {
   return (neuron0x2c12be0()*-0.0884468);
}

double NNfunction_sb_sLuL::synapse0x2c2c580() {
   return (neuron0x2c12f20()*-0.0394956);
}

double NNfunction_sb_sLuL::synapse0x2c2c5c0() {
   return (neuron0x2c13260()*-0.211639);
}

double NNfunction_sb_sLuL::synapse0x2c2c600() {
   return (neuron0x2c135a0()*-0.163887);
}

double NNfunction_sb_sLuL::synapse0x2c2c640() {
   return (neuron0x2c138e0()*-0.697084);
}

double NNfunction_sb_sLuL::synapse0x2c2c680() {
   return (neuron0x2c13c20()*-0.123758);
}

double NNfunction_sb_sLuL::synapse0x2c2c6c0() {
   return (neuron0x2c13f60()*0.271487);
}

double NNfunction_sb_sLuL::synapse0x2c2c700() {
   return (neuron0x2c142a0()*-0.133795);
}

double NNfunction_sb_sLuL::synapse0x2c2c740() {
   return (neuron0x2c145e0()*0.301303);
}

double NNfunction_sb_sLuL::synapse0x2c2c780() {
   return (neuron0x2c14920()*1.43986);
}

double NNfunction_sb_sLuL::synapse0x2c2c7c0() {
   return (neuron0x2c14c60()*0.511851);
}

double NNfunction_sb_sLuL::synapse0x2c2c800() {
   return (neuron0x2c14fa0()*-0.913528);
}

double NNfunction_sb_sLuL::synapse0x2c2c840() {
   return (neuron0x2c152e0()*-0.445763);
}

double NNfunction_sb_sLuL::synapse0x2c2c880() {
   return (neuron0x2c15620()*-0.245666);
}

double NNfunction_sb_sLuL::synapse0x2c2c310() {
   return (neuron0x2c15960()*-1.11135);
}

double NNfunction_sb_sLuL::synapse0x2c2c350() {
   return (neuron0x2c15ec0()*0.219625);
}

double NNfunction_sb_sLuL::synapse0x2c2c9d0() {
   return (neuron0x2c160e0()*-0.040861);
}

double NNfunction_sb_sLuL::synapse0x2c2ca10() {
   return (neuron0x2c16420()*0.510478);
}

double NNfunction_sb_sLuL::synapse0x2c2ca50() {
   return (neuron0x2c16760()*-0.253537);
}

double NNfunction_sb_sLuL::synapse0x2c2ca90() {
   return (neuron0x2c16aa0()*0.26655);
}

double NNfunction_sb_sLuL::synapse0x2c2cad0() {
   return (neuron0x2c16de0()*0.0180837);
}

double NNfunction_sb_sLuL::synapse0x2c2cb10() {
   return (neuron0x2c17120()*0.206116);
}

double NNfunction_sb_sLuL::synapse0x2c2ce90() {
   return (neuron0x2c12560()*0.0354513);
}

double NNfunction_sb_sLuL::synapse0x2c21460() {
   return (neuron0x2c128a0()*-0.1442);
}

double NNfunction_sb_sLuL::synapse0x2c214a0() {
   return (neuron0x2c12be0()*-0.748833);
}

double NNfunction_sb_sLuL::synapse0x2c214e0() {
   return (neuron0x2c12f20()*-0.559811);
}

double NNfunction_sb_sLuL::synapse0x2c21730() {
   return (neuron0x2c13260()*0.0685999);
}

double NNfunction_sb_sLuL::synapse0x2c21770() {
   return (neuron0x2c135a0()*-0.0259275);
}

double NNfunction_sb_sLuL::synapse0x2c217b0() {
   return (neuron0x2c138e0()*-0.0383875);
}

double NNfunction_sb_sLuL::synapse0x2c21a00() {
   return (neuron0x2c13c20()*-0.066246);
}

double NNfunction_sb_sLuL::synapse0x2c21a40() {
   return (neuron0x2c13f60()*-0.0146127);
}

double NNfunction_sb_sLuL::synapse0x2c21c90() {
   return (neuron0x2c142a0()*0.00913785);
}

double NNfunction_sb_sLuL::synapse0x2c21cd0() {
   return (neuron0x2c145e0()*-0.10814);
}

double NNfunction_sb_sLuL::synapse0x2c21d10() {
   return (neuron0x2c14920()*-1.05401);
}

double NNfunction_sb_sLuL::synapse0x2c21f60() {
   return (neuron0x2c14c60()*-0.00362052);
}

double NNfunction_sb_sLuL::synapse0x2c21fa0() {
   return (neuron0x2c14fa0()*0.0231441);
}

double NNfunction_sb_sLuL::synapse0x2c221f0() {
   return (neuron0x2c152e0()*-0.146998);
}

double NNfunction_sb_sLuL::synapse0x2c22230() {
   return (neuron0x2c15620()*-0.0611752);
}

double NNfunction_sb_sLuL::synapse0x2c2cce0() {
   return (neuron0x2c15960()*-0.0109836);
}

double NNfunction_sb_sLuL::synapse0x2c2cd20() {
   return (neuron0x2c15ec0()*0.0853213);
}

double NNfunction_sb_sLuL::synapse0x2c22380() {
   return (neuron0x2c160e0()*-0.0421079);
}

double NNfunction_sb_sLuL::synapse0x2c22890() {
   return (neuron0x2c16420()*-0.0369819);
}

double NNfunction_sb_sLuL::synapse0x2c228d0() {
   return (neuron0x2c16760()*0.00990594);
}

double NNfunction_sb_sLuL::synapse0x2c22910() {
   return (neuron0x2c16aa0()*-0.0317719);
}

double NNfunction_sb_sLuL::synapse0x2c22b60() {
   return (neuron0x2c16de0()*-0.0138618);
}

double NNfunction_sb_sLuL::synapse0x2c22ba0() {
   return (neuron0x2c17120()*0.02524);
}

double NNfunction_sb_sLuL::synapse0x2c22450() {
   return (neuron0x2c12560()*-0.301803);
}

double NNfunction_sb_sLuL::synapse0x2c22490() {
   return (neuron0x2c128a0()*0.829371);
}

double NNfunction_sb_sLuL::synapse0x2c224d0() {
   return (neuron0x2c12be0()*-0.317272);
}

double NNfunction_sb_sLuL::synapse0x2c22510() {
   return (neuron0x2c12f20()*-0.172347);
}

double NNfunction_sb_sLuL::synapse0x2c22e90() {
   return (neuron0x2c13260()*0.894189);
}

double NNfunction_sb_sLuL::synapse0x2c2f1e0() {
   return (neuron0x2c135a0()*0.555803);
}

double NNfunction_sb_sLuL::synapse0x2c2f220() {
   return (neuron0x2c138e0()*0.285225);
}

double NNfunction_sb_sLuL::synapse0x2c2f260() {
   return (neuron0x2c13c20()*0.279587);
}

double NNfunction_sb_sLuL::synapse0x2c2f2a0() {
   return (neuron0x2c13f60()*-0.204782);
}

double NNfunction_sb_sLuL::synapse0x2c2f2e0() {
   return (neuron0x2c142a0()*-0.83133);
}

double NNfunction_sb_sLuL::synapse0x2c2f320() {
   return (neuron0x2c145e0()*-0.0661343);
}

double NNfunction_sb_sLuL::synapse0x2c2f360() {
   return (neuron0x2c14920()*0.893302);
}

double NNfunction_sb_sLuL::synapse0x2c2f3a0() {
   return (neuron0x2c14c60()*0.421797);
}

double NNfunction_sb_sLuL::synapse0x2c2f3e0() {
   return (neuron0x2c14fa0()*0.154499);
}

double NNfunction_sb_sLuL::synapse0x2c2f420() {
   return (neuron0x2c152e0()*-0.286623);
}

double NNfunction_sb_sLuL::synapse0x2c2f460() {
   return (neuron0x2c15620()*0.00170599);
}

double NNfunction_sb_sLuL::synapse0x2c22d70() {
   return (neuron0x2c15960()*-0.299419);
}

double NNfunction_sb_sLuL::synapse0x2c22db0() {
   return (neuron0x2c15ec0()*0.243515);
}

double NNfunction_sb_sLuL::synapse0x2c2f5b0() {
   return (neuron0x2c160e0()*-0.869049);
}

double NNfunction_sb_sLuL::synapse0x2c2f5f0() {
   return (neuron0x2c16420()*0.719902);
}

double NNfunction_sb_sLuL::synapse0x2c2f630() {
   return (neuron0x2c16760()*-0.754665);
}

double NNfunction_sb_sLuL::synapse0x2c2f670() {
   return (neuron0x2c16aa0()*-0.0128899);
}

double NNfunction_sb_sLuL::synapse0x2c2f6b0() {
   return (neuron0x2c16de0()*0.362099);
}

double NNfunction_sb_sLuL::synapse0x2c2f6f0() {
   return (neuron0x2c17120()*1.25466);
}

double NNfunction_sb_sLuL::synapse0x2c2fa70() {
   return (neuron0x2c12560()*0.000806316);
}

double NNfunction_sb_sLuL::synapse0x2c2fab0() {
   return (neuron0x2c128a0()*0.064296);
}

double NNfunction_sb_sLuL::synapse0x2c2faf0() {
   return (neuron0x2c12be0()*-0.493659);
}

double NNfunction_sb_sLuL::synapse0x2c2fb30() {
   return (neuron0x2c12f20()*0.327976);
}

double NNfunction_sb_sLuL::synapse0x2c2fb70() {
   return (neuron0x2c13260()*-0.114135);
}

double NNfunction_sb_sLuL::synapse0x2c2fbb0() {
   return (neuron0x2c135a0()*0.0244757);
}

double NNfunction_sb_sLuL::synapse0x2c2fbf0() {
   return (neuron0x2c138e0()*0.0157614);
}

double NNfunction_sb_sLuL::synapse0x2c2fc30() {
   return (neuron0x2c13c20()*0.0125532);
}

double NNfunction_sb_sLuL::synapse0x2c2fc70() {
   return (neuron0x2c13f60()*0.0250988);
}

double NNfunction_sb_sLuL::synapse0x2c2fcb0() {
   return (neuron0x2c142a0()*0.0589022);
}

double NNfunction_sb_sLuL::synapse0x2c2fcf0() {
   return (neuron0x2c145e0()*0.0225665);
}

double NNfunction_sb_sLuL::synapse0x2c2fd30() {
   return (neuron0x2c14920()*-0.114233);
}

double NNfunction_sb_sLuL::synapse0x2c2fd70() {
   return (neuron0x2c14c60()*-0.587588);
}

double NNfunction_sb_sLuL::synapse0x2c2fdb0() {
   return (neuron0x2c14fa0()*-0.0798806);
}

double NNfunction_sb_sLuL::synapse0x2c2fdf0() {
   return (neuron0x2c152e0()*0.306225);
}

double NNfunction_sb_sLuL::synapse0x2c2fe30() {
   return (neuron0x2c15620()*0.224487);
}

double NNfunction_sb_sLuL::synapse0x2c2f8c0() {
   return (neuron0x2c15960()*-0.0981156);
}

double NNfunction_sb_sLuL::synapse0x2c2f900() {
   return (neuron0x2c15ec0()*0.287086);
}

double NNfunction_sb_sLuL::synapse0x2c2ff80() {
   return (neuron0x2c160e0()*0.263394);
}

double NNfunction_sb_sLuL::synapse0x2c2ffc0() {
   return (neuron0x2c16420()*0.0405142);
}

double NNfunction_sb_sLuL::synapse0x2c30000() {
   return (neuron0x2c16760()*-0.021772);
}

double NNfunction_sb_sLuL::synapse0x2c30040() {
   return (neuron0x2c16aa0()*-0.0194945);
}

double NNfunction_sb_sLuL::synapse0x2c30080() {
   return (neuron0x2c16de0()*-0.00424877);
}

double NNfunction_sb_sLuL::synapse0x2c300c0() {
   return (neuron0x2c17120()*-0.0383507);
}

double NNfunction_sb_sLuL::synapse0x2c30440() {
   return (neuron0x2c12560()*-0.27568);
}

double NNfunction_sb_sLuL::synapse0x2c30480() {
   return (neuron0x2c128a0()*0.325144);
}

double NNfunction_sb_sLuL::synapse0x2c304c0() {
   return (neuron0x2c12be0()*0.783126);
}

double NNfunction_sb_sLuL::synapse0x2c30500() {
   return (neuron0x2c12f20()*0.573561);
}

double NNfunction_sb_sLuL::synapse0x2c30540() {
   return (neuron0x2c13260()*-0.0129373);
}

double NNfunction_sb_sLuL::synapse0x2c30580() {
   return (neuron0x2c135a0()*0.414945);
}

double NNfunction_sb_sLuL::synapse0x2c305c0() {
   return (neuron0x2c138e0()*0.0872757);
}

double NNfunction_sb_sLuL::synapse0x2c30600() {
   return (neuron0x2c13c20()*-0.379796);
}

double NNfunction_sb_sLuL::synapse0x2c30640() {
   return (neuron0x2c13f60()*0.00118002);
}

double NNfunction_sb_sLuL::synapse0x2c30680() {
   return (neuron0x2c142a0()*0.249681);
}

double NNfunction_sb_sLuL::synapse0x2c306c0() {
   return (neuron0x2c145e0()*0.0509811);
}

double NNfunction_sb_sLuL::synapse0x2c30700() {
   return (neuron0x2c14920()*-0.568267);
}

double NNfunction_sb_sLuL::synapse0x2c30740() {
   return (neuron0x2c14c60()*0.82355);
}

double NNfunction_sb_sLuL::synapse0x2c30780() {
   return (neuron0x2c14fa0()*0.896031);
}

double NNfunction_sb_sLuL::synapse0x2c307c0() {
   return (neuron0x2c152e0()*-0.822761);
}

double NNfunction_sb_sLuL::synapse0x2c30800() {
   return (neuron0x2c15620()*0.0291916);
}

double NNfunction_sb_sLuL::synapse0x2c30290() {
   return (neuron0x2c15960()*1.34204);
}

double NNfunction_sb_sLuL::synapse0x2c302d0() {
   return (neuron0x2c15ec0()*-0.352518);
}

double NNfunction_sb_sLuL::synapse0x2c30950() {
   return (neuron0x2c160e0()*-0.739211);
}

double NNfunction_sb_sLuL::synapse0x2c30990() {
   return (neuron0x2c16420()*0.0746916);
}

double NNfunction_sb_sLuL::synapse0x2c309d0() {
   return (neuron0x2c16760()*-0.507627);
}

double NNfunction_sb_sLuL::synapse0x2c30a10() {
   return (neuron0x2c16aa0()*0.248439);
}

double NNfunction_sb_sLuL::synapse0x2c30a50() {
   return (neuron0x2c16de0()*0.0266875);
}

double NNfunction_sb_sLuL::synapse0x2c30a90() {
   return (neuron0x2c17120()*-0.036435);
}

double NNfunction_sb_sLuL::synapse0x2c30e10() {
   return (neuron0x2c12560()*0.0646925);
}

double NNfunction_sb_sLuL::synapse0x2c30e50() {
   return (neuron0x2c128a0()*-0.0154374);
}

double NNfunction_sb_sLuL::synapse0x2c30e90() {
   return (neuron0x2c12be0()*-0.0698877);
}

double NNfunction_sb_sLuL::synapse0x2c30ed0() {
   return (neuron0x2c12f20()*2.71223);
}

double NNfunction_sb_sLuL::synapse0x2c30f10() {
   return (neuron0x2c13260()*-0.0406452);
}

double NNfunction_sb_sLuL::synapse0x2c30f50() {
   return (neuron0x2c135a0()*-0.0687497);
}

double NNfunction_sb_sLuL::synapse0x2c30f90() {
   return (neuron0x2c138e0()*0.0038563);
}

double NNfunction_sb_sLuL::synapse0x2c30fd0() {
   return (neuron0x2c13c20()*0.00781753);
}

double NNfunction_sb_sLuL::synapse0x2c31010() {
   return (neuron0x2c13f60()*0.0353027);
}

double NNfunction_sb_sLuL::synapse0x2c31050() {
   return (neuron0x2c142a0()*-0.00669791);
}

double NNfunction_sb_sLuL::synapse0x2c31090() {
   return (neuron0x2c145e0()*-0.0143798);
}

double NNfunction_sb_sLuL::synapse0x2c310d0() {
   return (neuron0x2c14920()*0.217676);
}

double NNfunction_sb_sLuL::synapse0x2c31110() {
   return (neuron0x2c14c60()*0.416158);
}

double NNfunction_sb_sLuL::synapse0x2c31150() {
   return (neuron0x2c14fa0()*0.0451538);
}

double NNfunction_sb_sLuL::synapse0x2c31190() {
   return (neuron0x2c152e0()*0.00950422);
}

double NNfunction_sb_sLuL::synapse0x2c311d0() {
   return (neuron0x2c15620()*-0.00986246);
}

double NNfunction_sb_sLuL::synapse0x2c30c60() {
   return (neuron0x2c15960()*0.116238);
}

double NNfunction_sb_sLuL::synapse0x2c30ca0() {
   return (neuron0x2c15ec0()*0.0644796);
}

double NNfunction_sb_sLuL::synapse0x2c31320() {
   return (neuron0x2c160e0()*0.056852);
}

double NNfunction_sb_sLuL::synapse0x2c31360() {
   return (neuron0x2c16420()*-0.0145381);
}

double NNfunction_sb_sLuL::synapse0x2c313a0() {
   return (neuron0x2c16760()*-0.0906183);
}

double NNfunction_sb_sLuL::synapse0x2c313e0() {
   return (neuron0x2c16aa0()*-0.0119498);
}

double NNfunction_sb_sLuL::synapse0x2c31420() {
   return (neuron0x2c16de0()*0.0086916);
}

double NNfunction_sb_sLuL::synapse0x2c31460() {
   return (neuron0x2c17120()*-0.0222478);
}

double NNfunction_sb_sLuL::synapse0x2c317e0() {
   return (neuron0x2c12560()*0.275887);
}

double NNfunction_sb_sLuL::synapse0x2c31820() {
   return (neuron0x2c128a0()*-0.263168);
}

double NNfunction_sb_sLuL::synapse0x2c31860() {
   return (neuron0x2c12be0()*-0.129174);
}

double NNfunction_sb_sLuL::synapse0x2c318a0() {
   return (neuron0x2c12f20()*-0.139551);
}

double NNfunction_sb_sLuL::synapse0x2c318e0() {
   return (neuron0x2c13260()*0.324404);
}

double NNfunction_sb_sLuL::synapse0x2c31920() {
   return (neuron0x2c135a0()*0.578545);
}

double NNfunction_sb_sLuL::synapse0x2c31960() {
   return (neuron0x2c138e0()*-0.0143188);
}

double NNfunction_sb_sLuL::synapse0x2c319a0() {
   return (neuron0x2c13c20()*0.715941);
}

double NNfunction_sb_sLuL::synapse0x2c319e0() {
   return (neuron0x2c13f60()*-0.1461);
}

double NNfunction_sb_sLuL::synapse0x2c31a20() {
   return (neuron0x2c142a0()*-0.0701563);
}

double NNfunction_sb_sLuL::synapse0x2c31a60() {
   return (neuron0x2c145e0()*-0.299785);
}

double NNfunction_sb_sLuL::synapse0x2c31aa0() {
   return (neuron0x2c14920()*0.841312);
}

double NNfunction_sb_sLuL::synapse0x2c31ae0() {
   return (neuron0x2c14c60()*-0.729027);
}

double NNfunction_sb_sLuL::synapse0x2c31b20() {
   return (neuron0x2c14fa0()*0.343313);
}

double NNfunction_sb_sLuL::synapse0x2c31b60() {
   return (neuron0x2c152e0()*0.76955);
}

double NNfunction_sb_sLuL::synapse0x2c31ba0() {
   return (neuron0x2c15620()*0.714628);
}

double NNfunction_sb_sLuL::synapse0x2c31630() {
   return (neuron0x2c15960()*0.363144);
}

double NNfunction_sb_sLuL::synapse0x2c31670() {
   return (neuron0x2c15ec0()*0.635589);
}

double NNfunction_sb_sLuL::synapse0x2c31cf0() {
   return (neuron0x2c160e0()*0.297592);
}

double NNfunction_sb_sLuL::synapse0x2c31d30() {
   return (neuron0x2c16420()*-0.1559);
}

double NNfunction_sb_sLuL::synapse0x2c31d70() {
   return (neuron0x2c16760()*0.0879618);
}

double NNfunction_sb_sLuL::synapse0x2c31db0() {
   return (neuron0x2c16aa0()*-0.197563);
}

double NNfunction_sb_sLuL::synapse0x2c31df0() {
   return (neuron0x2c16de0()*0.333128);
}

double NNfunction_sb_sLuL::synapse0x2c31e30() {
   return (neuron0x2c17120()*0.378775);
}

double NNfunction_sb_sLuL::synapse0x2c321b0() {
   return (neuron0x2c12560()*0.0190476);
}

double NNfunction_sb_sLuL::synapse0x2c321f0() {
   return (neuron0x2c128a0()*0.130767);
}

double NNfunction_sb_sLuL::synapse0x2c32230() {
   return (neuron0x2c12be0()*-0.085444);
}

double NNfunction_sb_sLuL::synapse0x2c32270() {
   return (neuron0x2c12f20()*2.77515);
}

double NNfunction_sb_sLuL::synapse0x2c322b0() {
   return (neuron0x2c13260()*-0.020373);
}

double NNfunction_sb_sLuL::synapse0x2c322f0() {
   return (neuron0x2c135a0()*-0.0814241);
}

double NNfunction_sb_sLuL::synapse0x2c32330() {
   return (neuron0x2c138e0()*-0.067217);
}

double NNfunction_sb_sLuL::synapse0x2c32370() {
   return (neuron0x2c13c20()*-0.00939527);
}

double NNfunction_sb_sLuL::synapse0x2c323b0() {
   return (neuron0x2c13f60()*-0.0162892);
}

double NNfunction_sb_sLuL::synapse0x2c323f0() {
   return (neuron0x2c142a0()*0.0476628);
}

double NNfunction_sb_sLuL::synapse0x2c32430() {
   return (neuron0x2c145e0()*-0.0729466);
}

double NNfunction_sb_sLuL::synapse0x2c32470() {
   return (neuron0x2c14920()*-0.565852);
}

double NNfunction_sb_sLuL::synapse0x2c324b0() {
   return (neuron0x2c14c60()*-0.347199);
}

double NNfunction_sb_sLuL::synapse0x2c324f0() {
   return (neuron0x2c14fa0()*-0.108362);
}

double NNfunction_sb_sLuL::synapse0x2c32530() {
   return (neuron0x2c152e0()*-0.0861889);
}

double NNfunction_sb_sLuL::synapse0x2c32570() {
   return (neuron0x2c15620()*-0.0593252);
}

double NNfunction_sb_sLuL::synapse0x2c32000() {
   return (neuron0x2c15960()*-0.155904);
}

double NNfunction_sb_sLuL::synapse0x2c32040() {
   return (neuron0x2c15ec0()*0.0657467);
}

double NNfunction_sb_sLuL::synapse0x2c326c0() {
   return (neuron0x2c160e0()*0.0667467);
}

double NNfunction_sb_sLuL::synapse0x2c32700() {
   return (neuron0x2c16420()*-0.0699284);
}

double NNfunction_sb_sLuL::synapse0x2c32740() {
   return (neuron0x2c16760()*-0.0766881);
}

double NNfunction_sb_sLuL::synapse0x2c32780() {
   return (neuron0x2c16aa0()*0.0391471);
}

double NNfunction_sb_sLuL::synapse0x2c327c0() {
   return (neuron0x2c16de0()*-0.0783282);
}

double NNfunction_sb_sLuL::synapse0x2c32800() {
   return (neuron0x2c17120()*-0.0643266);
}

double NNfunction_sb_sLuL::synapse0x2c32b80() {
   return (neuron0x2c12560()*-0.0038406);
}

double NNfunction_sb_sLuL::synapse0x2c32bc0() {
   return (neuron0x2c128a0()*0.000589731);
}

double NNfunction_sb_sLuL::synapse0x2c32c00() {
   return (neuron0x2c12be0()*-0.00842488);
}

double NNfunction_sb_sLuL::synapse0x2c32c40() {
   return (neuron0x2c12f20()*-3.6099);
}

double NNfunction_sb_sLuL::synapse0x2c32c80() {
   return (neuron0x2c13260()*-0.00294975);
}

double NNfunction_sb_sLuL::synapse0x2c32cc0() {
   return (neuron0x2c135a0()*-0.0147265);
}

double NNfunction_sb_sLuL::synapse0x2c32d00() {
   return (neuron0x2c138e0()*-0.00222141);
}

double NNfunction_sb_sLuL::synapse0x2c32d40() {
   return (neuron0x2c13c20()*-0.00263235);
}

double NNfunction_sb_sLuL::synapse0x2c32d80() {
   return (neuron0x2c13f60()*0.00783455);
}

double NNfunction_sb_sLuL::synapse0x2c32dc0() {
   return (neuron0x2c142a0()*0.00656531);
}

double NNfunction_sb_sLuL::synapse0x2c32e00() {
   return (neuron0x2c145e0()*-0.00926691);
}

double NNfunction_sb_sLuL::synapse0x2c32e40() {
   return (neuron0x2c14920()*0.219605);
}

double NNfunction_sb_sLuL::synapse0x2c32e80() {
   return (neuron0x2c14c60()*0.153502);
}

double NNfunction_sb_sLuL::synapse0x2c32ec0() {
   return (neuron0x2c14fa0()*0.00304523);
}

double NNfunction_sb_sLuL::synapse0x2c32f00() {
   return (neuron0x2c152e0()*0.00573218);
}

double NNfunction_sb_sLuL::synapse0x2c32f40() {
   return (neuron0x2c15620()*0.00865637);
}

double NNfunction_sb_sLuL::synapse0x2c329d0() {
   return (neuron0x2c15960()*-0.00251087);
}

double NNfunction_sb_sLuL::synapse0x2c32a10() {
   return (neuron0x2c15ec0()*-0.00483101);
}

double NNfunction_sb_sLuL::synapse0x2c33090() {
   return (neuron0x2c160e0()*0.0042137);
}

double NNfunction_sb_sLuL::synapse0x2c330d0() {
   return (neuron0x2c16420()*-0.00504431);
}

double NNfunction_sb_sLuL::synapse0x2c33110() {
   return (neuron0x2c16760()*-0.000918144);
}

double NNfunction_sb_sLuL::synapse0x2c33150() {
   return (neuron0x2c16aa0()*-0.00207059);
}

double NNfunction_sb_sLuL::synapse0x2c33190() {
   return (neuron0x2c16de0()*-0.00150376);
}

double NNfunction_sb_sLuL::synapse0x2c331d0() {
   return (neuron0x2c17120()*0.00634723);
}

double NNfunction_sb_sLuL::synapse0x2c33550() {
   return (neuron0x2c12560()*-0.350744);
}

double NNfunction_sb_sLuL::synapse0x2c33590() {
   return (neuron0x2c128a0()*-0.13512);
}

double NNfunction_sb_sLuL::synapse0x2c335d0() {
   return (neuron0x2c12be0()*-0.607341);
}

double NNfunction_sb_sLuL::synapse0x2c33610() {
   return (neuron0x2c12f20()*-0.182804);
}

double NNfunction_sb_sLuL::synapse0x2c33650() {
   return (neuron0x2c13260()*-0.313923);
}

double NNfunction_sb_sLuL::synapse0x2c33690() {
   return (neuron0x2c135a0()*-0.304111);
}

double NNfunction_sb_sLuL::synapse0x2c336d0() {
   return (neuron0x2c138e0()*-1.20274);
}

double NNfunction_sb_sLuL::synapse0x2c33710() {
   return (neuron0x2c13c20()*-1.13809);
}

double NNfunction_sb_sLuL::synapse0x2c33750() {
   return (neuron0x2c13f60()*0.303428);
}

double NNfunction_sb_sLuL::synapse0x2c33790() {
   return (neuron0x2c142a0()*0.124973);
}

double NNfunction_sb_sLuL::synapse0x2c337d0() {
   return (neuron0x2c145e0()*0.277463);
}

double NNfunction_sb_sLuL::synapse0x2c33810() {
   return (neuron0x2c14920()*-0.153859);
}

double NNfunction_sb_sLuL::synapse0x2c33850() {
   return (neuron0x2c14c60()*0.220479);
}

double NNfunction_sb_sLuL::synapse0x2c33890() {
   return (neuron0x2c14fa0()*-0.388385);
}

double NNfunction_sb_sLuL::synapse0x2c338d0() {
   return (neuron0x2c152e0()*-0.579297);
}

double NNfunction_sb_sLuL::synapse0x2c33910() {
   return (neuron0x2c15620()*0.362145);
}

double NNfunction_sb_sLuL::synapse0x2c333a0() {
   return (neuron0x2c15960()*-0.625201);
}

double NNfunction_sb_sLuL::synapse0x2c333e0() {
   return (neuron0x2c15ec0()*0.091382);
}

double NNfunction_sb_sLuL::synapse0x2c33a60() {
   return (neuron0x2c160e0()*-0.557222);
}

double NNfunction_sb_sLuL::synapse0x2c33aa0() {
   return (neuron0x2c16420()*0.0211966);
}

double NNfunction_sb_sLuL::synapse0x2c33ae0() {
   return (neuron0x2c16760()*0.0778155);
}

double NNfunction_sb_sLuL::synapse0x2c33b20() {
   return (neuron0x2c16aa0()*-0.0404906);
}

double NNfunction_sb_sLuL::synapse0x2c33b60() {
   return (neuron0x2c16de0()*-0.444214);
}

double NNfunction_sb_sLuL::synapse0x2c33ba0() {
   return (neuron0x2c17120()*-0.412372);
}

double NNfunction_sb_sLuL::synapse0x2c1c650() {
   return (neuron0x2c12560()*0.00110174);
}

double NNfunction_sb_sLuL::synapse0x2c1c690() {
   return (neuron0x2c128a0()*-0.220107);
}

double NNfunction_sb_sLuL::synapse0x2c1c6d0() {
   return (neuron0x2c12be0()*-0.309985);
}

double NNfunction_sb_sLuL::synapse0x2c1c710() {
   return (neuron0x2c12f20()*0.586913);
}

double NNfunction_sb_sLuL::synapse0x2c1c750() {
   return (neuron0x2c13260()*0.358596);
}

double NNfunction_sb_sLuL::synapse0x2c1c790() {
   return (neuron0x2c135a0()*-0.271469);
}

double NNfunction_sb_sLuL::synapse0x2c1c7d0() {
   return (neuron0x2c138e0()*-1.35208);
}

double NNfunction_sb_sLuL::synapse0x2c1c810() {
   return (neuron0x2c13c20()*-0.507617);
}

double NNfunction_sb_sLuL::synapse0x2c34330() {
   return (neuron0x2c13f60()*-0.370899);
}

double NNfunction_sb_sLuL::synapse0x2c34370() {
   return (neuron0x2c142a0()*-0.0158478);
}

double NNfunction_sb_sLuL::synapse0x2c343b0() {
   return (neuron0x2c145e0()*0.508204);
}

double NNfunction_sb_sLuL::synapse0x2c343f0() {
   return (neuron0x2c14920()*0.403908);
}

double NNfunction_sb_sLuL::synapse0x2c34430() {
   return (neuron0x2c14c60()*-0.269758);
}

double NNfunction_sb_sLuL::synapse0x2c34470() {
   return (neuron0x2c14fa0()*0.147963);
}

double NNfunction_sb_sLuL::synapse0x2c344b0() {
   return (neuron0x2c152e0()*-0.805226);
}

double NNfunction_sb_sLuL::synapse0x2c344f0() {
   return (neuron0x2c15620()*-0.9133);
}

double NNfunction_sb_sLuL::synapse0x2c33d70() {
   return (neuron0x2c15960()*-0.145399);
}

double NNfunction_sb_sLuL::synapse0x2c33db0() {
   return (neuron0x2c15ec0()*-1.17919);
}

double NNfunction_sb_sLuL::synapse0x2c34640() {
   return (neuron0x2c160e0()*-0.431226);
}

double NNfunction_sb_sLuL::synapse0x2c34680() {
   return (neuron0x2c16420()*-1.02852);
}

double NNfunction_sb_sLuL::synapse0x2c346c0() {
   return (neuron0x2c16760()*-0.167224);
}

double NNfunction_sb_sLuL::synapse0x2c34700() {
   return (neuron0x2c16aa0()*-0.477624);
}

double NNfunction_sb_sLuL::synapse0x2c34740() {
   return (neuron0x2c16de0()*-0.0337667);
}

double NNfunction_sb_sLuL::synapse0x2c34780() {
   return (neuron0x2c17120()*-0.811462);
}

double NNfunction_sb_sLuL::synapse0x2c34b00() {
   return (neuron0x2c12560()*0.306553);
}

double NNfunction_sb_sLuL::synapse0x2c34b40() {
   return (neuron0x2c128a0()*-0.0790639);
}

double NNfunction_sb_sLuL::synapse0x2c34b80() {
   return (neuron0x2c12be0()*0.565467);
}

double NNfunction_sb_sLuL::synapse0x2c34bc0() {
   return (neuron0x2c12f20()*-0.103288);
}

double NNfunction_sb_sLuL::synapse0x2c34c00() {
   return (neuron0x2c13260()*1.42409);
}

double NNfunction_sb_sLuL::synapse0x2c34c40() {
   return (neuron0x2c135a0()*-0.49015);
}

double NNfunction_sb_sLuL::synapse0x2c34c80() {
   return (neuron0x2c138e0()*0.128088);
}

double NNfunction_sb_sLuL::synapse0x2c34cc0() {
   return (neuron0x2c13c20()*-0.799382);
}

double NNfunction_sb_sLuL::synapse0x2c34d00() {
   return (neuron0x2c13f60()*0.352069);
}

double NNfunction_sb_sLuL::synapse0x2c34d40() {
   return (neuron0x2c142a0()*-0.177574);
}

double NNfunction_sb_sLuL::synapse0x2c34d80() {
   return (neuron0x2c145e0()*0.119877);
}

double NNfunction_sb_sLuL::synapse0x2c34dc0() {
   return (neuron0x2c14920()*-0.169045);
}

double NNfunction_sb_sLuL::synapse0x2c34e00() {
   return (neuron0x2c14c60()*-0.323297);
}

double NNfunction_sb_sLuL::synapse0x2c34e40() {
   return (neuron0x2c14fa0()*-0.32887);
}

double NNfunction_sb_sLuL::synapse0x2c34e80() {
   return (neuron0x2c152e0()*0.0536184);
}

double NNfunction_sb_sLuL::synapse0x2c34ec0() {
   return (neuron0x2c15620()*0.242364);
}

double NNfunction_sb_sLuL::synapse0x2c34950() {
   return (neuron0x2c15960()*-0.126772);
}

double NNfunction_sb_sLuL::synapse0x2c34990() {
   return (neuron0x2c15ec0()*0.420696);
}

double NNfunction_sb_sLuL::synapse0x2c35010() {
   return (neuron0x2c160e0()*0.262046);
}

double NNfunction_sb_sLuL::synapse0x2c35050() {
   return (neuron0x2c16420()*0.0340373);
}

double NNfunction_sb_sLuL::synapse0x2c35090() {
   return (neuron0x2c16760()*0.508038);
}

double NNfunction_sb_sLuL::synapse0x2c350d0() {
   return (neuron0x2c16aa0()*-0.00685634);
}

double NNfunction_sb_sLuL::synapse0x2c35110() {
   return (neuron0x2c16de0()*0.722001);
}

double NNfunction_sb_sLuL::synapse0x2c35150() {
   return (neuron0x2c17120()*-0.517219);
}

double NNfunction_sb_sLuL::synapse0x2c354d0() {
   return (neuron0x2c12560()*-0.070061);
}

double NNfunction_sb_sLuL::synapse0x2c35510() {
   return (neuron0x2c128a0()*0.0792731);
}

double NNfunction_sb_sLuL::synapse0x2c35550() {
   return (neuron0x2c12be0()*0.0980548);
}

double NNfunction_sb_sLuL::synapse0x2c35590() {
   return (neuron0x2c12f20()*-0.252352);
}

double NNfunction_sb_sLuL::synapse0x2c355d0() {
   return (neuron0x2c13260()*0.00104218);
}

double NNfunction_sb_sLuL::synapse0x2c35610() {
   return (neuron0x2c135a0()*-0.0287214);
}

double NNfunction_sb_sLuL::synapse0x2c35650() {
   return (neuron0x2c138e0()*-0.0302417);
}

double NNfunction_sb_sLuL::synapse0x2c35690() {
   return (neuron0x2c13c20()*0.0161212);
}

double NNfunction_sb_sLuL::synapse0x2c356d0() {
   return (neuron0x2c13f60()*0.0286144);
}

double NNfunction_sb_sLuL::synapse0x2c35710() {
   return (neuron0x2c142a0()*-0.0313752);
}

double NNfunction_sb_sLuL::synapse0x2c35750() {
   return (neuron0x2c145e0()*-0.0206831);
}

double NNfunction_sb_sLuL::synapse0x2c35790() {
   return (neuron0x2c14920()*2.35034);
}

double NNfunction_sb_sLuL::synapse0x2c357d0() {
   return (neuron0x2c14c60()*0.116596);
}

double NNfunction_sb_sLuL::synapse0x2c35810() {
   return (neuron0x2c14fa0()*0.0706114);
}

double NNfunction_sb_sLuL::synapse0x2c35850() {
   return (neuron0x2c152e0()*0.10395);
}

double NNfunction_sb_sLuL::synapse0x2c35890() {
   return (neuron0x2c15620()*0.0936445);
}

double NNfunction_sb_sLuL::synapse0x2c35320() {
   return (neuron0x2c15960()*0.0231325);
}

double NNfunction_sb_sLuL::synapse0x2c35360() {
   return (neuron0x2c15ec0()*0.191058);
}

double NNfunction_sb_sLuL::synapse0x2c25e90() {
   return (neuron0x2c160e0()*0.165936);
}

double NNfunction_sb_sLuL::synapse0x2c25ed0() {
   return (neuron0x2c16420()*0.0990008);
}

double NNfunction_sb_sLuL::synapse0x2c25f10() {
   return (neuron0x2c16760()*-0.0452337);
}

double NNfunction_sb_sLuL::synapse0x2c25f50() {
   return (neuron0x2c16aa0()*0.038459);
}

double NNfunction_sb_sLuL::synapse0x2c25f90() {
   return (neuron0x2c16de0()*0.00768014);
}

double NNfunction_sb_sLuL::synapse0x2c25fd0() {
   return (neuron0x2c17120()*-0.0671209);
}

double NNfunction_sb_sLuL::synapse0x2c26350() {
   return (neuron0x2c12560()*0.1677);
}

double NNfunction_sb_sLuL::synapse0x2c26390() {
   return (neuron0x2c128a0()*-0.633371);
}

double NNfunction_sb_sLuL::synapse0x2c263d0() {
   return (neuron0x2c12be0()*1.51992);
}

double NNfunction_sb_sLuL::synapse0x2c26410() {
   return (neuron0x2c12f20()*1.03238);
}

double NNfunction_sb_sLuL::synapse0x2c26450() {
   return (neuron0x2c13260()*0.537196);
}

double NNfunction_sb_sLuL::synapse0x2c26490() {
   return (neuron0x2c135a0()*0.50871);
}

double NNfunction_sb_sLuL::synapse0x2c264d0() {
   return (neuron0x2c138e0()*-0.630354);
}

double NNfunction_sb_sLuL::synapse0x2c26510() {
   return (neuron0x2c13c20()*-0.09629);
}

double NNfunction_sb_sLuL::synapse0x2c26550() {
   return (neuron0x2c13f60()*0.503087);
}

double NNfunction_sb_sLuL::synapse0x2c26590() {
   return (neuron0x2c142a0()*0.692117);
}

double NNfunction_sb_sLuL::synapse0x2c265d0() {
   return (neuron0x2c145e0()*0.456066);
}

double NNfunction_sb_sLuL::synapse0x2c26610() {
   return (neuron0x2c14920()*-1.07872);
}

double NNfunction_sb_sLuL::synapse0x2c26650() {
   return (neuron0x2c14c60()*-0.36743);
}

double NNfunction_sb_sLuL::synapse0x2c26690() {
   return (neuron0x2c14fa0()*0.603879);
}

double NNfunction_sb_sLuL::synapse0x2c266d0() {
   return (neuron0x2c152e0()*-0.311918);
}

double NNfunction_sb_sLuL::synapse0x2c26710() {
   return (neuron0x2c15620()*-0.44092);
}

double NNfunction_sb_sLuL::synapse0x2c261a0() {
   return (neuron0x2c15960()*0.902512);
}

double NNfunction_sb_sLuL::synapse0x2c261e0() {
   return (neuron0x2c15ec0()*0.41054);
}

double NNfunction_sb_sLuL::synapse0x2c26860() {
   return (neuron0x2c160e0()*0.566256);
}

double NNfunction_sb_sLuL::synapse0x2c268a0() {
   return (neuron0x2c16420()*-0.151112);
}

double NNfunction_sb_sLuL::synapse0x2c268e0() {
   return (neuron0x2c16760()*0.162107);
}

double NNfunction_sb_sLuL::synapse0x2c26920() {
   return (neuron0x2c16aa0()*0.610163);
}

double NNfunction_sb_sLuL::synapse0x2c26960() {
   return (neuron0x2c16de0()*0.0496125);
}

double NNfunction_sb_sLuL::synapse0x2c269a0() {
   return (neuron0x2c17120()*0.346733);
}

double NNfunction_sb_sLuL::synapse0x2c26d20() {
   return (neuron0x2c12560()*-0.644046);
}

double NNfunction_sb_sLuL::synapse0x2c26d60() {
   return (neuron0x2c128a0()*0.733413);
}

double NNfunction_sb_sLuL::synapse0x2c26da0() {
   return (neuron0x2c12be0()*-0.392435);
}

double NNfunction_sb_sLuL::synapse0x2c26de0() {
   return (neuron0x2c12f20()*0.772976);
}

double NNfunction_sb_sLuL::synapse0x2c26e20() {
   return (neuron0x2c13260()*0.342038);
}

double NNfunction_sb_sLuL::synapse0x2c26e60() {
   return (neuron0x2c135a0()*0.261468);
}

double NNfunction_sb_sLuL::synapse0x2c26ea0() {
   return (neuron0x2c138e0()*0.340281);
}

double NNfunction_sb_sLuL::synapse0x2c26ee0() {
   return (neuron0x2c13c20()*-0.80456);
}

double NNfunction_sb_sLuL::synapse0x2c26f20() {
   return (neuron0x2c13f60()*0.628012);
}

double NNfunction_sb_sLuL::synapse0x2c26f60() {
   return (neuron0x2c142a0()*0.645741);
}

double NNfunction_sb_sLuL::synapse0x2c26fa0() {
   return (neuron0x2c145e0()*-0.0139789);
}

double NNfunction_sb_sLuL::synapse0x2c26fe0() {
   return (neuron0x2c14920()*0.666237);
}

double NNfunction_sb_sLuL::synapse0x2c27020() {
   return (neuron0x2c14c60()*0.0705641);
}

double NNfunction_sb_sLuL::synapse0x2c27060() {
   return (neuron0x2c14fa0()*0.556485);
}

double NNfunction_sb_sLuL::synapse0x2c270a0() {
   return (neuron0x2c152e0()*-0.498004);
}

double NNfunction_sb_sLuL::synapse0x2c270e0() {
   return (neuron0x2c15620()*-0.530869);
}

double NNfunction_sb_sLuL::synapse0x2c26b70() {
   return (neuron0x2c15960()*0.525291);
}

double NNfunction_sb_sLuL::synapse0x2c26bb0() {
   return (neuron0x2c15ec0()*0.0170309);
}

double NNfunction_sb_sLuL::synapse0x2c27230() {
   return (neuron0x2c160e0()*0.155294);
}

double NNfunction_sb_sLuL::synapse0x2c27270() {
   return (neuron0x2c16420()*0.113086);
}

double NNfunction_sb_sLuL::synapse0x2c272b0() {
   return (neuron0x2c16760()*0.484548);
}

double NNfunction_sb_sLuL::synapse0x2c272f0() {
   return (neuron0x2c16aa0()*-0.174609);
}

double NNfunction_sb_sLuL::synapse0x2c27330() {
   return (neuron0x2c16de0()*0.899056);
}

double NNfunction_sb_sLuL::synapse0x2c27370() {
   return (neuron0x2c17120()*0.0759367);
}

double NNfunction_sb_sLuL::synapse0x2c276f0() {
   return (neuron0x2c12560()*0.130948);
}

double NNfunction_sb_sLuL::synapse0x2c27730() {
   return (neuron0x2c128a0()*-0.117315);
}

double NNfunction_sb_sLuL::synapse0x2c27770() {
   return (neuron0x2c12be0()*-0.0170908);
}

double NNfunction_sb_sLuL::synapse0x2c277b0() {
   return (neuron0x2c12f20()*0.835369);
}

double NNfunction_sb_sLuL::synapse0x2c277f0() {
   return (neuron0x2c13260()*-0.067684);
}

double NNfunction_sb_sLuL::synapse0x2c27830() {
   return (neuron0x2c135a0()*0.115547);
}

double NNfunction_sb_sLuL::synapse0x2c27870() {
   return (neuron0x2c138e0()*0.153088);
}

double NNfunction_sb_sLuL::synapse0x2c278b0() {
   return (neuron0x2c13c20()*0.0703286);
}

double NNfunction_sb_sLuL::synapse0x2c278f0() {
   return (neuron0x2c13f60()*0.0362428);
}

double NNfunction_sb_sLuL::synapse0x2c27930() {
   return (neuron0x2c142a0()*0.0909242);
}

double NNfunction_sb_sLuL::synapse0x2c27970() {
   return (neuron0x2c145e0()*-0.106751);
}

double NNfunction_sb_sLuL::synapse0x2c279b0() {
   return (neuron0x2c14920()*2.63525);
}

double NNfunction_sb_sLuL::synapse0x2c279f0() {
   return (neuron0x2c14c60()*0.498302);
}

double NNfunction_sb_sLuL::synapse0x2c27a30() {
   return (neuron0x2c14fa0()*0.12614);
}

double NNfunction_sb_sLuL::synapse0x2c27a70() {
   return (neuron0x2c152e0()*0.0197453);
}

double NNfunction_sb_sLuL::synapse0x2c27ab0() {
   return (neuron0x2c15620()*-0.0371062);
}

double NNfunction_sb_sLuL::synapse0x2c27540() {
   return (neuron0x2c15960()*0.0108766);
}

double NNfunction_sb_sLuL::synapse0x2c27580() {
   return (neuron0x2c15ec0()*-0.178637);
}

double NNfunction_sb_sLuL::synapse0x2c27c00() {
   return (neuron0x2c160e0()*-0.138728);
}

double NNfunction_sb_sLuL::synapse0x2c27c40() {
   return (neuron0x2c16420()*-0.0786312);
}

double NNfunction_sb_sLuL::synapse0x2c27c80() {
   return (neuron0x2c16760()*-0.0720811);
}

double NNfunction_sb_sLuL::synapse0x2c27cc0() {
   return (neuron0x2c16aa0()*-0.138265);
}

double NNfunction_sb_sLuL::synapse0x2c27d00() {
   return (neuron0x2c16de0()*0.0374154);
}

double NNfunction_sb_sLuL::synapse0x2c27d40() {
   return (neuron0x2c17120()*0.181095);
}

double NNfunction_sb_sLuL::synapse0x2c39c10() {
   return (neuron0x2c12560()*-0.0336398);
}

double NNfunction_sb_sLuL::synapse0x2c39c50() {
   return (neuron0x2c128a0()*-0.0147748);
}

double NNfunction_sb_sLuL::synapse0x2c39c90() {
   return (neuron0x2c12be0()*-0.00738541);
}

double NNfunction_sb_sLuL::synapse0x2c39cd0() {
   return (neuron0x2c12f20()*10.3727);
}

double NNfunction_sb_sLuL::synapse0x2c39d10() {
   return (neuron0x2c13260()*-0.00219584);
}

double NNfunction_sb_sLuL::synapse0x2c39d50() {
   return (neuron0x2c135a0()*-0.00285256);
}

double NNfunction_sb_sLuL::synapse0x2c39d90() {
   return (neuron0x2c138e0()*0.00421267);
}

double NNfunction_sb_sLuL::synapse0x2c39dd0() {
   return (neuron0x2c13c20()*-0.00169241);
}

double NNfunction_sb_sLuL::synapse0x2c39e10() {
   return (neuron0x2c13f60()*-0.00186993);
}

double NNfunction_sb_sLuL::synapse0x2c39e50() {
   return (neuron0x2c142a0()*-0.000526058);
}

double NNfunction_sb_sLuL::synapse0x2c39e90() {
   return (neuron0x2c145e0()*0.0247272);
}

double NNfunction_sb_sLuL::synapse0x2c39ed0() {
   return (neuron0x2c14920()*-0.127697);
}

double NNfunction_sb_sLuL::synapse0x2c39f10() {
   return (neuron0x2c14c60()*-0.0494254);
}

double NNfunction_sb_sLuL::synapse0x2c39f50() {
   return (neuron0x2c14fa0()*-0.00265596);
}

double NNfunction_sb_sLuL::synapse0x2c39f90() {
   return (neuron0x2c152e0()*0.00858574);
}

double NNfunction_sb_sLuL::synapse0x2c39fd0() {
   return (neuron0x2c15620()*0.0257765);
}

double NNfunction_sb_sLuL::synapse0x2c27d80() {
   return (neuron0x2c15960()*-0.0143896);
}

double NNfunction_sb_sLuL::synapse0x2c27dc0() {
   return (neuron0x2c15ec0()*-0.0451286);
}

double NNfunction_sb_sLuL::synapse0x2c3a120() {
   return (neuron0x2c160e0()*0.00159916);
}

double NNfunction_sb_sLuL::synapse0x2c3a160() {
   return (neuron0x2c16420()*0.00676077);
}

double NNfunction_sb_sLuL::synapse0x2c3a1a0() {
   return (neuron0x2c16760()*0.0195771);
}

double NNfunction_sb_sLuL::synapse0x2c3a1e0() {
   return (neuron0x2c16aa0()*-0.00857305);
}

double NNfunction_sb_sLuL::synapse0x2c3a220() {
   return (neuron0x2c16de0()*-0.0113758);
}

double NNfunction_sb_sLuL::synapse0x2c3a260() {
   return (neuron0x2c17120()*0.0282122);
}

double NNfunction_sb_sLuL::synapse0x2c3a5e0() {
   return (neuron0x2c12560()*0.801117);
}

double NNfunction_sb_sLuL::synapse0x2c3a620() {
   return (neuron0x2c128a0()*-0.273776);
}

double NNfunction_sb_sLuL::synapse0x2c3a660() {
   return (neuron0x2c12be0()*-0.232891);
}

double NNfunction_sb_sLuL::synapse0x2c3a6a0() {
   return (neuron0x2c12f20()*-0.0159381);
}

double NNfunction_sb_sLuL::synapse0x2c3a6e0() {
   return (neuron0x2c13260()*-0.267163);
}

double NNfunction_sb_sLuL::synapse0x2c3a720() {
   return (neuron0x2c135a0()*-0.209324);
}

double NNfunction_sb_sLuL::synapse0x2c3a760() {
   return (neuron0x2c138e0()*0.0496092);
}

double NNfunction_sb_sLuL::synapse0x2c3a7a0() {
   return (neuron0x2c13c20()*0.418982);
}

double NNfunction_sb_sLuL::synapse0x2c3a7e0() {
   return (neuron0x2c13f60()*0.432996);
}

double NNfunction_sb_sLuL::synapse0x2c3a820() {
   return (neuron0x2c142a0()*1.16756);
}

double NNfunction_sb_sLuL::synapse0x2c3a860() {
   return (neuron0x2c145e0()*-0.0610129);
}

double NNfunction_sb_sLuL::synapse0x2c3a8a0() {
   return (neuron0x2c14920()*-0.18678);
}

double NNfunction_sb_sLuL::synapse0x2c3a8e0() {
   return (neuron0x2c14c60()*0.0516207);
}

double NNfunction_sb_sLuL::synapse0x2c3a920() {
   return (neuron0x2c14fa0()*0.501024);
}

double NNfunction_sb_sLuL::synapse0x2c3a960() {
   return (neuron0x2c152e0()*0.79821);
}

double NNfunction_sb_sLuL::synapse0x2c3a9a0() {
   return (neuron0x2c15620()*-0.148213);
}

double NNfunction_sb_sLuL::synapse0x2c3a430() {
   return (neuron0x2c15960()*0.384631);
}

double NNfunction_sb_sLuL::synapse0x2c3a470() {
   return (neuron0x2c15ec0()*0.678214);
}

double NNfunction_sb_sLuL::synapse0x2c3aaf0() {
   return (neuron0x2c160e0()*-0.434701);
}

double NNfunction_sb_sLuL::synapse0x2c3ab30() {
   return (neuron0x2c16420()*-0.977492);
}

double NNfunction_sb_sLuL::synapse0x2c3ab70() {
   return (neuron0x2c16760()*-0.0589267);
}

double NNfunction_sb_sLuL::synapse0x2c3abb0() {
   return (neuron0x2c16aa0()*0.622642);
}

double NNfunction_sb_sLuL::synapse0x2c3abf0() {
   return (neuron0x2c16de0()*0.388546);
}

double NNfunction_sb_sLuL::synapse0x2c3ac30() {
   return (neuron0x2c17120()*0.318287);
}

double NNfunction_sb_sLuL::synapse0x2c3afb0() {
   return (neuron0x2c12560()*-0.00456356);
}

double NNfunction_sb_sLuL::synapse0x2c3aff0() {
   return (neuron0x2c128a0()*0.0264073);
}

double NNfunction_sb_sLuL::synapse0x2c3b030() {
   return (neuron0x2c12be0()*-0.0714939);
}

double NNfunction_sb_sLuL::synapse0x2c3b070() {
   return (neuron0x2c12f20()*0.986167);
}

double NNfunction_sb_sLuL::synapse0x2c3b0b0() {
   return (neuron0x2c13260()*0.0422731);
}

double NNfunction_sb_sLuL::synapse0x2c3b0f0() {
   return (neuron0x2c135a0()*0.0567553);
}

double NNfunction_sb_sLuL::synapse0x2c3b130() {
   return (neuron0x2c138e0()*0.116915);
}

double NNfunction_sb_sLuL::synapse0x2c3b170() {
   return (neuron0x2c13c20()*0.138906);
}

double NNfunction_sb_sLuL::synapse0x2c3b1b0() {
   return (neuron0x2c13f60()*-0.104104);
}

double NNfunction_sb_sLuL::synapse0x2c3b1f0() {
   return (neuron0x2c142a0()*-0.140585);
}

double NNfunction_sb_sLuL::synapse0x2c3b230() {
   return (neuron0x2c145e0()*0.0603516);
}

double NNfunction_sb_sLuL::synapse0x2c3b270() {
   return (neuron0x2c14920()*0.031334);
}

double NNfunction_sb_sLuL::synapse0x2c3b2b0() {
   return (neuron0x2c14c60()*1.28042);
}

double NNfunction_sb_sLuL::synapse0x2c3b2f0() {
   return (neuron0x2c14fa0()*0.0326329);
}

double NNfunction_sb_sLuL::synapse0x2c3b330() {
   return (neuron0x2c152e0()*0.209947);
}

double NNfunction_sb_sLuL::synapse0x2c3b370() {
   return (neuron0x2c15620()*0.219932);
}

double NNfunction_sb_sLuL::synapse0x2c3ae00() {
   return (neuron0x2c15960()*-0.136855);
}

double NNfunction_sb_sLuL::synapse0x2c3ae40() {
   return (neuron0x2c15ec0()*0.00711856);
}

double NNfunction_sb_sLuL::synapse0x2c3b4c0() {
   return (neuron0x2c160e0()*-0.102886);
}

double NNfunction_sb_sLuL::synapse0x2c3b500() {
   return (neuron0x2c16420()*-0.0989133);
}

double NNfunction_sb_sLuL::synapse0x2c3b540() {
   return (neuron0x2c16760()*-0.0348999);
}

double NNfunction_sb_sLuL::synapse0x2c3b580() {
   return (neuron0x2c16aa0()*-0.0573807);
}

double NNfunction_sb_sLuL::synapse0x2c3b5c0() {
   return (neuron0x2c16de0()*-0.029479);
}

double NNfunction_sb_sLuL::synapse0x2c3b600() {
   return (neuron0x2c17120()*-0.00224233);
}

double NNfunction_sb_sLuL::synapse0x2c3b980() {
   return (neuron0x2c12560()*-0.0075407);
}

double NNfunction_sb_sLuL::synapse0x2c3b9c0() {
   return (neuron0x2c128a0()*0.000349644);
}

double NNfunction_sb_sLuL::synapse0x2c3ba00() {
   return (neuron0x2c12be0()*0.0502775);
}

double NNfunction_sb_sLuL::synapse0x2c3ba40() {
   return (neuron0x2c12f20()*0.136077);
}

double NNfunction_sb_sLuL::synapse0x2c3ba80() {
   return (neuron0x2c13260()*-0.00180046);
}

double NNfunction_sb_sLuL::synapse0x2c3bac0() {
   return (neuron0x2c135a0()*0.0370208);
}

double NNfunction_sb_sLuL::synapse0x2c3bb00() {
   return (neuron0x2c138e0()*-0.121893);
}

double NNfunction_sb_sLuL::synapse0x2c3bb40() {
   return (neuron0x2c13c20()*0.0180446);
}

double NNfunction_sb_sLuL::synapse0x2c3bb80() {
   return (neuron0x2c13f60()*0.00912561);
}

double NNfunction_sb_sLuL::synapse0x2c3bbc0() {
   return (neuron0x2c142a0()*0.0368208);
}

double NNfunction_sb_sLuL::synapse0x2c3bc00() {
   return (neuron0x2c145e0()*0.00610582);
}

double NNfunction_sb_sLuL::synapse0x2c3bc40() {
   return (neuron0x2c14920()*0.078147);
}

double NNfunction_sb_sLuL::synapse0x2c3bc80() {
   return (neuron0x2c14c60()*3.0002);
}

double NNfunction_sb_sLuL::synapse0x2c3bcc0() {
   return (neuron0x2c14fa0()*0.0330919);
}

double NNfunction_sb_sLuL::synapse0x2c3bd00() {
   return (neuron0x2c152e0()*-0.064037);
}

double NNfunction_sb_sLuL::synapse0x2c3bd40() {
   return (neuron0x2c15620()*0.0501167);
}

double NNfunction_sb_sLuL::synapse0x2c3b7d0() {
   return (neuron0x2c15960()*-0.0263342);
}

double NNfunction_sb_sLuL::synapse0x2c3b810() {
   return (neuron0x2c15ec0()*-0.00524821);
}

double NNfunction_sb_sLuL::synapse0x2c3be90() {
   return (neuron0x2c160e0()*-0.00507227);
}

double NNfunction_sb_sLuL::synapse0x2c3bed0() {
   return (neuron0x2c16420()*-0.00746964);
}

double NNfunction_sb_sLuL::synapse0x2c3bf10() {
   return (neuron0x2c16760()*0.0571523);
}

double NNfunction_sb_sLuL::synapse0x2c3bf50() {
   return (neuron0x2c16aa0()*0.0452956);
}

double NNfunction_sb_sLuL::synapse0x2c3bf90() {
   return (neuron0x2c16de0()*0.0174059);
}

double NNfunction_sb_sLuL::synapse0x2c3bfd0() {
   return (neuron0x2c17120()*-0.0163312);
}

double NNfunction_sb_sLuL::synapse0x2c18570() {
   return (neuron0x2c175c0()*-0.0253043);
}

double NNfunction_sb_sLuL::synapse0x2c185b0() {
   return (neuron0x2c17ed0()*0.0331354);
}

double NNfunction_sb_sLuL::synapse0x2c19a80() {
   return (neuron0x2c189b0()*0.870511);
}

double NNfunction_sb_sLuL::synapse0x2c19ac0() {
   return (neuron0x29d2240()*-0.0276292);
}

double NNfunction_sb_sLuL::synapse0x2c1a450() {
   return (neuron0x2c197d0()*-0.680603);
}

double NNfunction_sb_sLuL::synapse0x2c1a490() {
   return (neuron0x2c1a1a0()*-0.0595156);
}

double NNfunction_sb_sLuL::synapse0x2c1b220() {
   return (neuron0x2c1af70()*0.0425472);
}

double NNfunction_sb_sLuL::synapse0x2c1b260() {
   return (neuron0x2c1b940()*-2.20066);
}

double NNfunction_sb_sLuL::synapse0x2c1bbf0() {
   return (neuron0x2c1c310()*-0.0662249);
}

double NNfunction_sb_sLuL::synapse0x2c1bc30() {
   return (neuron0x2c1cdf0()*-0.0249198);
}

double NNfunction_sb_sLuL::synapse0x2c1c5c0() {
   return (neuron0x2c1d7c0()*-0.00729311);
}

double NNfunction_sb_sLuL::synapse0x2c1c600() {
   return (neuron0x2c1a8a0()*-0.0113252);
}

double NNfunction_sb_sLuL::synapse0x2c1d0a0() {
   return (neuron0x2c1f370()*0.025032);
}

double NNfunction_sb_sLuL::synapse0x2c1d0e0() {
   return (neuron0x2c1fd40()*0.0811963);
}

double NNfunction_sb_sLuL::synapse0x2c1da70() {
   return (neuron0x2c20710()*0.0253616);
}

double NNfunction_sb_sLuL::synapse0x2c1dab0() {
   return (neuron0x2c210e0()*0.0364375);
}

double NNfunction_sb_sLuL::synapse0x2c1ab50() {
   return (neuron0x2c22ef0()*-1.21392);
}

double NNfunction_sb_sLuL::synapse0x2c1ab90() {
   return (neuron0x2c231d0()*-0.0301779);
}

double NNfunction_sb_sLuL::synapse0x2c1f620() {
   return (neuron0x2c23ba0()*0.0450591);
}

double NNfunction_sb_sLuL::synapse0x2c1f660() {
   return (neuron0x2c24570()*1.96681);
}

double NNfunction_sb_sLuL::synapse0x2c1fff0() {
   return (neuron0x2c24f40()*0.0596357);
}

double NNfunction_sb_sLuL::synapse0x2c20030() {
   return (neuron0x2c25910()*0.0390292);
}

double NNfunction_sb_sLuL::synapse0x2c209c0() {
   return (neuron0x2c1e460()*0.0184701);
}

double NNfunction_sb_sLuL::synapse0x2c20a00() {
   return (neuron0x2c1ee30()*0.0174487);
}

double NNfunction_sb_sLuL::synapse0x2c21390() {
   return (neuron0x2c286a0()*0.285039);
}

double NNfunction_sb_sLuL::synapse0x2c213d0() {
   return (neuron0x2c29070()*-0.20741);
}

double NNfunction_sb_sLuL::synapse0x2c15500() {
   return (neuron0x2c29a40()*-0.147896);
}

double NNfunction_sb_sLuL::synapse0x2c15540() {
   return (neuron0x2c2a410()*-0.0542387);
}

double NNfunction_sb_sLuL::synapse0x2c23480() {
   return (neuron0x2c2ade0()*0.324852);
}

double NNfunction_sb_sLuL::synapse0x2c234c0() {
   return (neuron0x2c2b7b0()*0.016851);
}

double NNfunction_sb_sLuL::synapse0x2c23e50() {
   return (neuron0x2c2c180()*0.027915);
}

double NNfunction_sb_sLuL::synapse0x2c23e90() {
   return (neuron0x2c2cb50()*0.40189);
}

double NNfunction_sb_sLuL::synapse0x2c24820() {
   return (neuron0x2c22be0()*0.0001454);
}

double NNfunction_sb_sLuL::synapse0x2c24860() {
   return (neuron0x2c2f730()*-0.0248788);
}

double NNfunction_sb_sLuL::synapse0x2c251f0() {
   return (neuron0x2c30100()*0.013325);
}

double NNfunction_sb_sLuL::synapse0x2c25230() {
   return (neuron0x2c30ad0()*0.699915);
}

double NNfunction_sb_sLuL::synapse0x2c25bc0() {
   return (neuron0x2c314a0()*-0.0981613);
}

double NNfunction_sb_sLuL::synapse0x2c25c00() {
   return (neuron0x2c31e70()*-1.23343);
}

double NNfunction_sb_sLuL::synapse0x2c1e710() {
   return (neuron0x2c32840()*-1.02199);
}

double NNfunction_sb_sLuL::synapse0x2c1e750() {
   return (neuron0x2c33210()*-0.0178268);
}

double NNfunction_sb_sLuL::synapse0x2c27fc0() {
   return (neuron0x2c33be0()*0.0560203);
}

double NNfunction_sb_sLuL::synapse0x2c28000() {
   return (neuron0x2c347c0()*-0.0291784);
}

double NNfunction_sb_sLuL::synapse0x2c28950() {
   return (neuron0x2c35190()*-0.178511);
}

double NNfunction_sb_sLuL::synapse0x2c28990() {
   return (neuron0x2c26010()*-0.0139853);
}

double NNfunction_sb_sLuL::synapse0x2c29320() {
   return (neuron0x2c269e0()*0.0187464);
}

double NNfunction_sb_sLuL::synapse0x2c29360() {
   return (neuron0x2c273b0()*0.0823302);
}

double NNfunction_sb_sLuL::synapse0x2c29cf0() {
   return (neuron0x2c399f0()*0.733891);
}

double NNfunction_sb_sLuL::synapse0x2c29d30() {
   return (neuron0x2c3a2a0()*-0.0131472);
}

double NNfunction_sb_sLuL::synapse0x2c2a6c0() {
   return (neuron0x2c3ac70()*0.549035);
}

double NNfunction_sb_sLuL::synapse0x2c2a700() {
   return (neuron0x2c3b640()*1.17544);
}

double NNfunction_sb_sLuL::synapse0x2c2ce00() {
   return (neuron0x2c175c0()*-0.071891);
}

double NNfunction_sb_sLuL::synapse0x2c2ce40() {
   return (neuron0x2c17ed0()*0.00160184);
}

double NNfunction_sb_sLuL::synapse0x2c223c0() {
   return (neuron0x2c189b0()*0.106411);
}

double NNfunction_sb_sLuL::synapse0x2c22400() {
   return (neuron0x29d2240()*-0.00455163);
}

double NNfunction_sb_sLuL::synapse0x2c2f9e0() {
   return (neuron0x2c197d0()*-1.04462);
}

double NNfunction_sb_sLuL::synapse0x2c2fa20() {
   return (neuron0x2c1a1a0()*0.137968);
}

double NNfunction_sb_sLuL::synapse0x2c303b0() {
   return (neuron0x2c1af70()*-0.0153274);
}

double NNfunction_sb_sLuL::synapse0x2c303f0() {
   return (neuron0x2c1b940()*1.59066);
}

double NNfunction_sb_sLuL::synapse0x2c30d80() {
   return (neuron0x2c1c310()*-0.88901);
}

double NNfunction_sb_sLuL::synapse0x2c30dc0() {
   return (neuron0x2c1cdf0()*0.122361);
}

double NNfunction_sb_sLuL::synapse0x2c31750() {
   return (neuron0x2c1d7c0()*0.0346522);
}

double NNfunction_sb_sLuL::synapse0x2c31790() {
   return (neuron0x2c1a8a0()*0.029384);
}

double NNfunction_sb_sLuL::synapse0x2c32120() {
   return (neuron0x2c1f370()*-0.0964631);
}

double NNfunction_sb_sLuL::synapse0x2c32160() {
   return (neuron0x2c1fd40()*-0.0607255);
}

double NNfunction_sb_sLuL::synapse0x2c32af0() {
   return (neuron0x2c20710()*0.0434808);
}

double NNfunction_sb_sLuL::synapse0x2c32b30() {
   return (neuron0x2c210e0()*-0.0636751);
}

double NNfunction_sb_sLuL::synapse0x2c334c0() {
   return (neuron0x2c22ef0()*1.89728);
}

double NNfunction_sb_sLuL::synapse0x2c33500() {
   return (neuron0x2c231d0()*0.0700278);
}

double NNfunction_sb_sLuL::synapse0x2c33e90() {
   return (neuron0x2c23ba0()*-0.0317358);
}

double NNfunction_sb_sLuL::synapse0x2c33ed0() {
   return (neuron0x2c24570()*-1.78538);
}

double NNfunction_sb_sLuL::synapse0x2c34a70() {
   return (neuron0x2c24f40()*-0.0377754);
}

double NNfunction_sb_sLuL::synapse0x2c34ab0() {
   return (neuron0x2c25910()*-0.0400787);
}

double NNfunction_sb_sLuL::synapse0x2c35440() {
   return (neuron0x2c1e460()*0.0217525);
}

double NNfunction_sb_sLuL::synapse0x2c35480() {
   return (neuron0x2c1ee30()*0.0033029);
}

double NNfunction_sb_sLuL::synapse0x2c262c0() {
   return (neuron0x2c286a0()*-0.883641);
}

double NNfunction_sb_sLuL::synapse0x2c26300() {
   return (neuron0x2c29070()*0.712174);
}

double NNfunction_sb_sLuL::synapse0x2c26c90() {
   return (neuron0x2c29a40()*0.174403);
}

double NNfunction_sb_sLuL::synapse0x2c26cd0() {
   return (neuron0x2c2a410()*0.0166836);
}

double NNfunction_sb_sLuL::synapse0x2c27660() {
   return (neuron0x2c2ade0()*-0.546907);
}

double NNfunction_sb_sLuL::synapse0x2c276a0() {
   return (neuron0x2c2b7b0()*0.732015);
}

double NNfunction_sb_sLuL::synapse0x2c39b80() {
   return (neuron0x2c2c180()*0.0327567);
}

double NNfunction_sb_sLuL::synapse0x2c39bc0() {
   return (neuron0x2c2cb50()*0.609645);
}

double NNfunction_sb_sLuL::synapse0x2c3a550() {
   return (neuron0x2c22be0()*0.00486524);
}

double NNfunction_sb_sLuL::synapse0x2c3a590() {
   return (neuron0x2c2f730()*-0.385974);
}

double NNfunction_sb_sLuL::synapse0x2c3af20() {
   return (neuron0x2c30100()*0.0554167);
}

double NNfunction_sb_sLuL::synapse0x2c3af60() {
   return (neuron0x2c30ad0()*-0.134509);
}

double NNfunction_sb_sLuL::synapse0x2c3b8f0() {
   return (neuron0x2c314a0()*-0.114031);
}

double NNfunction_sb_sLuL::synapse0x2c3b930() {
   return (neuron0x2c31e70()*0.503809);
}

double NNfunction_sb_sLuL::synapse0x2c177e0() {
   return (neuron0x2c32840()*0.723694);
}

double NNfunction_sb_sLuL::synapse0x2c17820() {
   return (neuron0x2c33210()*-0.0116648);
}

double NNfunction_sb_sLuL::synapse0x2c2b090() {
   return (neuron0x2c33be0()*-0.100437);
}

double NNfunction_sb_sLuL::synapse0x2c2b0d0() {
   return (neuron0x2c347c0()*0.0461862);
}

double NNfunction_sb_sLuL::synapse0x2c3c010() {
   return (neuron0x2c35190()*-0.803822);
}

double NNfunction_sb_sLuL::synapse0x2c3c050() {
   return (neuron0x2c26010()*0.00827544);
}

double NNfunction_sb_sLuL::synapse0x2c3c090() {
   return (neuron0x2c269e0()*0.00673912);
}

double NNfunction_sb_sLuL::synapse0x2c3c0d0() {
   return (neuron0x2c273b0()*-0.971577);
}

double NNfunction_sb_sLuL::synapse0x2c42f80() {
   return (neuron0x2c399f0()*-1.59701);
}

double NNfunction_sb_sLuL::synapse0x2c42fc0() {
   return (neuron0x2c3a2a0()*0.0775098);
}

double NNfunction_sb_sLuL::synapse0x2c43000() {
   return (neuron0x2c3ac70()*-0.331216);
}

double NNfunction_sb_sLuL::synapse0x2c43040() {
   return (neuron0x2c3b640()*-0.141971);
}

double NNfunction_sb_sLuL::synapse0x2c433c0() {
   return (neuron0x2c175c0()*-0.0405536);
}

double NNfunction_sb_sLuL::synapse0x2c43400() {
   return (neuron0x2c17ed0()*-0.0173027);
}

double NNfunction_sb_sLuL::synapse0x2c43440() {
   return (neuron0x2c189b0()*-0.0694498);
}

double NNfunction_sb_sLuL::synapse0x2c43480() {
   return (neuron0x29d2240()*-0.0491208);
}

double NNfunction_sb_sLuL::synapse0x2c434c0() {
   return (neuron0x2c197d0()*-1.0919);
}

double NNfunction_sb_sLuL::synapse0x2c43500() {
   return (neuron0x2c1a1a0()*-0.0718942);
}

double NNfunction_sb_sLuL::synapse0x2c43540() {
   return (neuron0x2c1af70()*-0.031712);
}

double NNfunction_sb_sLuL::synapse0x2c43580() {
   return (neuron0x2c1b940()*-0.926376);
}

double NNfunction_sb_sLuL::synapse0x2c435c0() {
   return (neuron0x2c1c310()*0.0576445);
}

double NNfunction_sb_sLuL::synapse0x2c43600() {
   return (neuron0x2c1cdf0()*-0.0807995);
}

double NNfunction_sb_sLuL::synapse0x2c43640() {
   return (neuron0x2c1d7c0()*-0.0415114);
}

double NNfunction_sb_sLuL::synapse0x2c43680() {
   return (neuron0x2c1a8a0()*0.0090635);
}

double NNfunction_sb_sLuL::synapse0x2c436c0() {
   return (neuron0x2c1f370()*0.111107);
}

double NNfunction_sb_sLuL::synapse0x2c43700() {
   return (neuron0x2c1fd40()*0.126575);
}

double NNfunction_sb_sLuL::synapse0x2c43740() {
   return (neuron0x2c20710()*0.0692946);
}

double NNfunction_sb_sLuL::synapse0x2c43780() {
   return (neuron0x2c210e0()*0.00559156);
}

double NNfunction_sb_sLuL::synapse0x2c43210() {
   return (neuron0x2c22ef0()*1.15858);
}

double NNfunction_sb_sLuL::synapse0x2c43250() {
   return (neuron0x2c231d0()*-0.110778);
}

double NNfunction_sb_sLuL::synapse0x2c438d0() {
   return (neuron0x2c23ba0()*0.0167946);
}

double NNfunction_sb_sLuL::synapse0x2c43910() {
   return (neuron0x2c24570()*-1.17693);
}

double NNfunction_sb_sLuL::synapse0x2c43950() {
   return (neuron0x2c24f40()*0.0311347);
}

double NNfunction_sb_sLuL::synapse0x2c43990() {
   return (neuron0x2c25910()*0.11771);
}

double NNfunction_sb_sLuL::synapse0x2c439d0() {
   return (neuron0x2c1e460()*0.0728113);
}

double NNfunction_sb_sLuL::synapse0x2c43a10() {
   return (neuron0x2c1ee30()*0.0635584);
}

double NNfunction_sb_sLuL::synapse0x2c43a50() {
   return (neuron0x2c286a0()*0.986416);
}

double NNfunction_sb_sLuL::synapse0x2c43a90() {
   return (neuron0x2c29070()*-0.666851);
}

double NNfunction_sb_sLuL::synapse0x2c43ad0() {
   return (neuron0x2c29a40()*-0.394368);
}

double NNfunction_sb_sLuL::synapse0x2c43b10() {
   return (neuron0x2c2a410()*-0.0245587);
}

double NNfunction_sb_sLuL::synapse0x2c43b50() {
   return (neuron0x2c2ade0()*1.01875);
}

double NNfunction_sb_sLuL::synapse0x2c43b90() {
   return (neuron0x2c2b7b0()*-1.27255);
}

double NNfunction_sb_sLuL::synapse0x2c43bd0() {
   return (neuron0x2c2c180()*0.053546);
}

double NNfunction_sb_sLuL::synapse0x2c43c10() {
   return (neuron0x2c2cb50()*0.467052);
}

double NNfunction_sb_sLuL::synapse0x2c437c0() {
   return (neuron0x2c22be0()*-0.0603368);
}

double NNfunction_sb_sLuL::synapse0x2c43800() {
   return (neuron0x2c2f730()*0.927312);
}

double NNfunction_sb_sLuL::synapse0x2c43840() {
   return (neuron0x2c30100()*0.011725);
}

double NNfunction_sb_sLuL::synapse0x2c43880() {
   return (neuron0x2c30ad0()*-1.16231);
}

double NNfunction_sb_sLuL::synapse0x2c43e60() {
   return (neuron0x2c314a0()*-0.0869421);
}

double NNfunction_sb_sLuL::synapse0x2c43ea0() {
   return (neuron0x2c31e70()*0.529938);
}

double NNfunction_sb_sLuL::synapse0x2c43ee0() {
   return (neuron0x2c32840()*1.22579);
}

double NNfunction_sb_sLuL::synapse0x2c43f20() {
   return (neuron0x2c33210()*0.0475947);
}

double NNfunction_sb_sLuL::synapse0x2c43f60() {
   return (neuron0x2c33be0()*0.0273005);
}

double NNfunction_sb_sLuL::synapse0x2c43fa0() {
   return (neuron0x2c347c0()*0.0203035);
}

double NNfunction_sb_sLuL::synapse0x2c43fe0() {
   return (neuron0x2c35190()*0.456483);
}

double NNfunction_sb_sLuL::synapse0x2c44020() {
   return (neuron0x2c26010()*-0.0419976);
}

double NNfunction_sb_sLuL::synapse0x2c44060() {
   return (neuron0x2c269e0()*-0.0144516);
}

double NNfunction_sb_sLuL::synapse0x2c440a0() {
   return (neuron0x2c273b0()*0.602796);
}

double NNfunction_sb_sLuL::synapse0x2c440e0() {
   return (neuron0x2c399f0()*-1.20612);
}

double NNfunction_sb_sLuL::synapse0x2c44120() {
   return (neuron0x2c3a2a0()*-0.00654244);
}

double NNfunction_sb_sLuL::synapse0x2c44160() {
   return (neuron0x2c3ac70()*0.76696);
}

double NNfunction_sb_sLuL::synapse0x2c441a0() {
   return (neuron0x2c3b640()*0.670391);
}

double NNfunction_sb_sLuL::synapse0x2c44520() {
   return (neuron0x2c175c0()*1.80656);
}

double NNfunction_sb_sLuL::synapse0x2c44560() {
   return (neuron0x2c17ed0()*2.16415);
}

double NNfunction_sb_sLuL::synapse0x2c445a0() {
   return (neuron0x2c189b0()*1.92451);
}

double NNfunction_sb_sLuL::synapse0x2c445e0() {
   return (neuron0x29d2240()*1.6552);
}

double NNfunction_sb_sLuL::synapse0x2c44620() {
   return (neuron0x2c197d0()*-0.612482);
}

double NNfunction_sb_sLuL::synapse0x2c44660() {
   return (neuron0x2c1a1a0()*-2.13593);
}

double NNfunction_sb_sLuL::synapse0x2c446a0() {
   return (neuron0x2c1af70()*1.90711);
}

double NNfunction_sb_sLuL::synapse0x2c446e0() {
   return (neuron0x2c1b940()*-3.02187);
}

double NNfunction_sb_sLuL::synapse0x2c44720() {
   return (neuron0x2c1c310()*-1.38845);
}

double NNfunction_sb_sLuL::synapse0x2c44760() {
   return (neuron0x2c1cdf0()*-2.43658);
}

double NNfunction_sb_sLuL::synapse0x2c447a0() {
   return (neuron0x2c1d7c0()*1.8696);
}

double NNfunction_sb_sLuL::synapse0x2c447e0() {
   return (neuron0x2c1a8a0()*-1.40757);
}

double NNfunction_sb_sLuL::synapse0x2c44820() {
   return (neuron0x2c1f370()*-1.62933);
}

double NNfunction_sb_sLuL::synapse0x2c44860() {
   return (neuron0x2c1fd40()*-1.78616);
}

double NNfunction_sb_sLuL::synapse0x2c448a0() {
   return (neuron0x2c20710()*-2.60289);
}

double NNfunction_sb_sLuL::synapse0x2c448e0() {
   return (neuron0x2c210e0()*1.7355);
}

double NNfunction_sb_sLuL::synapse0x2c44370() {
   return (neuron0x2c22ef0()*6.62149);
}

double NNfunction_sb_sLuL::synapse0x2c443b0() {
   return (neuron0x2c231d0()*1.61318);
}

double NNfunction_sb_sLuL::synapse0x2c44a30() {
   return (neuron0x2c23ba0()*1.19626);
}

double NNfunction_sb_sLuL::synapse0x2c44a70() {
   return (neuron0x2c24570()*0.972003);
}

double NNfunction_sb_sLuL::synapse0x2c44ab0() {
   return (neuron0x2c24f40()*1.65301);
}

double NNfunction_sb_sLuL::synapse0x2c44af0() {
   return (neuron0x2c25910()*-1.83287);
}

double NNfunction_sb_sLuL::synapse0x2c44b30() {
   return (neuron0x2c1e460()*-1.9805);
}

double NNfunction_sb_sLuL::synapse0x2c44b70() {
   return (neuron0x2c1ee30()*-1.57223);
}

double NNfunction_sb_sLuL::synapse0x2c44bb0() {
   return (neuron0x2c286a0()*0.159937);
}

double NNfunction_sb_sLuL::synapse0x2c44bf0() {
   return (neuron0x2c29070()*-2.30076);
}

double NNfunction_sb_sLuL::synapse0x2c44c30() {
   return (neuron0x2c29a40()*-2.6743);
}

double NNfunction_sb_sLuL::synapse0x2c44c70() {
   return (neuron0x2c2a410()*-2.39793);
}

double NNfunction_sb_sLuL::synapse0x2c44cb0() {
   return (neuron0x2c2ade0()*2.06315);
}

double NNfunction_sb_sLuL::synapse0x2c44cf0() {
   return (neuron0x2c2b7b0()*-2.34072);
}

double NNfunction_sb_sLuL::synapse0x2c44d30() {
   return (neuron0x2c2c180()*-2.34597);
}

double NNfunction_sb_sLuL::synapse0x2c44d70() {
   return (neuron0x2c2cb50()*1.56479);
}

double NNfunction_sb_sLuL::synapse0x2c44920() {
   return (neuron0x2c22be0()*1.8931);
}

double NNfunction_sb_sLuL::synapse0x2c44960() {
   return (neuron0x2c2f730()*-0.0159658);
}

double NNfunction_sb_sLuL::synapse0x2c449a0() {
   return (neuron0x2c30100()*-1.79241);
}

double NNfunction_sb_sLuL::synapse0x2c449e0() {
   return (neuron0x2c30ad0()*-6.21697);
}

double NNfunction_sb_sLuL::synapse0x2c44fc0() {
   return (neuron0x2c314a0()*1.7613);
}

double NNfunction_sb_sLuL::synapse0x2c45000() {
   return (neuron0x2c31e70()*4.48867);
}

double NNfunction_sb_sLuL::synapse0x2c45040() {
   return (neuron0x2c32840()*1.60392);
}

double NNfunction_sb_sLuL::synapse0x2c45080() {
   return (neuron0x2c33210()*-1.69129);
}

double NNfunction_sb_sLuL::synapse0x2c450c0() {
   return (neuron0x2c33be0()*1.49637);
}

double NNfunction_sb_sLuL::synapse0x2c45100() {
   return (neuron0x2c347c0()*-1.46425);
}

double NNfunction_sb_sLuL::synapse0x2c45140() {
   return (neuron0x2c35190()*1.03119);
}

double NNfunction_sb_sLuL::synapse0x2c45180() {
   return (neuron0x2c26010()*1.60345);
}

double NNfunction_sb_sLuL::synapse0x2c451c0() {
   return (neuron0x2c269e0()*1.61814);
}

double NNfunction_sb_sLuL::synapse0x2c45200() {
   return (neuron0x2c273b0()*1.8506);
}

double NNfunction_sb_sLuL::synapse0x2c45240() {
   return (neuron0x2c399f0()*-5.61764);
}

double NNfunction_sb_sLuL::synapse0x2c45280() {
   return (neuron0x2c3a2a0()*-2.2009);
}

double NNfunction_sb_sLuL::synapse0x2c452c0() {
   return (neuron0x2c3ac70()*1.04101);
}

double NNfunction_sb_sLuL::synapse0x2c45300() {
   return (neuron0x2c3b640()*1.92836);
}

double NNfunction_sb_sLuL::synapse0x2c45680() {
   return (neuron0x2c175c0()*0.0112553);
}

double NNfunction_sb_sLuL::synapse0x2c456c0() {
   return (neuron0x2c17ed0()*-0.021003);
}

double NNfunction_sb_sLuL::synapse0x2c45700() {
   return (neuron0x2c189b0()*0.650265);
}

double NNfunction_sb_sLuL::synapse0x2c45740() {
   return (neuron0x29d2240()*0.0252165);
}

double NNfunction_sb_sLuL::synapse0x2c45780() {
   return (neuron0x2c197d0()*0.710108);
}

double NNfunction_sb_sLuL::synapse0x2c457c0() {
   return (neuron0x2c1a1a0()*0.0479242);
}

double NNfunction_sb_sLuL::synapse0x2c45800() {
   return (neuron0x2c1af70()*-0.0303458);
}

double NNfunction_sb_sLuL::synapse0x2c45840() {
   return (neuron0x2c1b940()*0.18749);
}

double NNfunction_sb_sLuL::synapse0x2c45880() {
   return (neuron0x2c1c310()*0.0364894);
}

double NNfunction_sb_sLuL::synapse0x2c458c0() {
   return (neuron0x2c1cdf0()*-0.00326366);
}

double NNfunction_sb_sLuL::synapse0x2c45900() {
   return (neuron0x2c1d7c0()*0.0448508);
}

double NNfunction_sb_sLuL::synapse0x2c45940() {
   return (neuron0x2c1a8a0()*0.00871086);
}

double NNfunction_sb_sLuL::synapse0x2c45980() {
   return (neuron0x2c1f370()*-0.0289677);
}

double NNfunction_sb_sLuL::synapse0x2c459c0() {
   return (neuron0x2c1fd40()*-0.0592996);
}

double NNfunction_sb_sLuL::synapse0x2c45a00() {
   return (neuron0x2c20710()*-0.0173155);
}

double NNfunction_sb_sLuL::synapse0x2c45a40() {
   return (neuron0x2c210e0()*-0.0238633);
}

double NNfunction_sb_sLuL::synapse0x2c454d0() {
   return (neuron0x2c22ef0()*0.293475);
}

double NNfunction_sb_sLuL::synapse0x2c45510() {
   return (neuron0x2c231d0()*0.0123397);
}

double NNfunction_sb_sLuL::synapse0x2c45b90() {
   return (neuron0x2c23ba0()*-0.024081);
}

double NNfunction_sb_sLuL::synapse0x2c45bd0() {
   return (neuron0x2c24570()*1.87585);
}

double NNfunction_sb_sLuL::synapse0x2c45c10() {
   return (neuron0x2c24f40()*-0.0250326);
}

double NNfunction_sb_sLuL::synapse0x2c45c50() {
   return (neuron0x2c25910()*-0.00727652);
}

double NNfunction_sb_sLuL::synapse0x2c45c90() {
   return (neuron0x2c1e460()*0.0228641);
}

double NNfunction_sb_sLuL::synapse0x2c45cd0() {
   return (neuron0x2c1ee30()*-0.00699139);
}

double NNfunction_sb_sLuL::synapse0x2c45d10() {
   return (neuron0x2c286a0()*-0.14985);
}

double NNfunction_sb_sLuL::synapse0x2c45d50() {
   return (neuron0x2c29070()*1.27172);
}

double NNfunction_sb_sLuL::synapse0x2c45d90() {
   return (neuron0x2c29a40()*0.276615);
}

double NNfunction_sb_sLuL::synapse0x2c45dd0() {
   return (neuron0x2c2a410()*0.00387849);
}

double NNfunction_sb_sLuL::synapse0x2c45e10() {
   return (neuron0x2c2ade0()*-0.20181);
}

double NNfunction_sb_sLuL::synapse0x2c45e50() {
   return (neuron0x2c2b7b0()*0.616786);
}

double NNfunction_sb_sLuL::synapse0x2c45e90() {
   return (neuron0x2c2c180()*-0.00775764);
}

double NNfunction_sb_sLuL::synapse0x2c45ed0() {
   return (neuron0x2c2cb50()*-0.00661725);
}

double NNfunction_sb_sLuL::synapse0x2c45a80() {
   return (neuron0x2c22be0()*0.00181409);
}

double NNfunction_sb_sLuL::synapse0x2c45ac0() {
   return (neuron0x2c2f730()*0.08469);
}

double NNfunction_sb_sLuL::synapse0x2c45b00() {
   return (neuron0x2c30100()*0.00256897);
}

double NNfunction_sb_sLuL::synapse0x2c45b40() {
   return (neuron0x2c30ad0()*-0.62929);
}

double NNfunction_sb_sLuL::synapse0x2c46120() {
   return (neuron0x2c314a0()*0.0242146);
}

double NNfunction_sb_sLuL::synapse0x2c46160() {
   return (neuron0x2c31e70()*-0.160355);
}

double NNfunction_sb_sLuL::synapse0x2c461a0() {
   return (neuron0x2c32840()*-0.59793);
}

double NNfunction_sb_sLuL::synapse0x2c461e0() {
   return (neuron0x2c33210()*-0.00612943);
}

double NNfunction_sb_sLuL::synapse0x2c46220() {
   return (neuron0x2c33be0()*-0.0539873);
}

double NNfunction_sb_sLuL::synapse0x2c46260() {
   return (neuron0x2c347c0()*0.0253459);
}

double NNfunction_sb_sLuL::synapse0x2c462a0() {
   return (neuron0x2c35190()*-0.437232);
}

double NNfunction_sb_sLuL::synapse0x2c462e0() {
   return (neuron0x2c26010()*0.00685644);
}

double NNfunction_sb_sLuL::synapse0x2c46320() {
   return (neuron0x2c269e0()*0.00664587);
}

double NNfunction_sb_sLuL::synapse0x2c46360() {
   return (neuron0x2c273b0()*-0.184152);
}

double NNfunction_sb_sLuL::synapse0x2c463a0() {
   return (neuron0x2c399f0()*-0.346882);
}

double NNfunction_sb_sLuL::synapse0x2c463e0() {
   return (neuron0x2c3a2a0()*0.00323221);
}

double NNfunction_sb_sLuL::synapse0x2c46420() {
   return (neuron0x2c3ac70()*-0.245948);
}

double NNfunction_sb_sLuL::synapse0x2c46460() {
   return (neuron0x2c3b640()*-0.812015);
}

double NNfunction_sb_sLuL::synapse0x2c17580() {
   return (neuron0x2c42840()*5.57156);
}

double NNfunction_sb_sLuL::synapse0x2c466c0() {
   return (neuron0x2c42be0()*-4.71201);
}

double NNfunction_sb_sLuL::synapse0x2c46700() {
   return (neuron0x2c43080()*-4.81983);
}

double NNfunction_sb_sLuL::synapse0x2c46740() {
   return (neuron0x2c441e0()*-10.6463);
}

double NNfunction_sb_sLuL::synapse0x2c46780() {
   return (neuron0x2c45340()*6.25105);
}

