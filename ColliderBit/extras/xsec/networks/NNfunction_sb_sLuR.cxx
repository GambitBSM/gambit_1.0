#include "NNfunction_sb_sLuR.h"
#include <cmath>

double NNfunction_sb_sLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8227)/15.0447;
   input1 = (in1 - 58.292)/738.268;
   input2 = (in2 - 376.386)/461.741;
   input3 = (in3 - 307.073)/637.123;
   input4 = (in4 - 762.886)/688.215;
   input5 = (in5 - 660.547)/663.667;
   input6 = (in6 - 663.051)/664.774;
   input7 = (in7 - 658.233)/660.438;
   input8 = (in8 - 647.028)/673.617;
   input9 = (in9 - 638.614)/662.249;
   input10 = (in10 - 646.924)/685.774;
   input11 = (in11 - 712.643)/575.415;
   input12 = (in12 - 601.515)/377.951;
   input13 = (in13 - 558.123)/368.358;
   input14 = (in14 - 606.865)/378.43;
   input15 = (in15 - 710.271)/556.377;
   input16 = (in16 - 497.092)/383.031;
   input17 = (in17 - 720.04)/592.241;
   input18 = (in18 - 716.814)/597.76;
   input19 = (in19 - 714.959)/582.637;
   input20 = (in20 - -237.103)/422.531;
   input21 = (in21 - -306.591)/905.173;
   input22 = (in22 - -1.92662)/892.172;
   input23 = (in23 - 2.01623)/515.286;
   switch(index) {
     case 0:
         return neuron0x2ecc120();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.8227)/15.0447;
   input1 = (input[1] - 58.292)/738.268;
   input2 = (input[2] - 376.386)/461.741;
   input3 = (input[3] - 307.073)/637.123;
   input4 = (input[4] - 762.886)/688.215;
   input5 = (input[5] - 660.547)/663.667;
   input6 = (input[6] - 663.051)/664.774;
   input7 = (input[7] - 658.233)/660.438;
   input8 = (input[8] - 647.028)/673.617;
   input9 = (input[9] - 638.614)/662.249;
   input10 = (input[10] - 646.924)/685.774;
   input11 = (input[11] - 712.643)/575.415;
   input12 = (input[12] - 601.515)/377.951;
   input13 = (input[13] - 558.123)/368.358;
   input14 = (input[14] - 606.865)/378.43;
   input15 = (input[15] - 710.271)/556.377;
   input16 = (input[16] - 497.092)/383.031;
   input17 = (input[17] - 720.04)/592.241;
   input18 = (input[18] - 716.814)/597.76;
   input19 = (input[19] - 714.959)/582.637;
   input20 = (input[20] - -237.103)/422.531;
   input21 = (input[21] - -306.591)/905.173;
   input22 = (input[22] - -1.92662)/892.172;
   input23 = (input[23] - 2.01623)/515.286;
   switch(index) {
     case 0:
         return neuron0x2ecc120();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuR::neuron0x2e982a0() {
   return input0;
}

double NNfunction_sb_sLuR::neuron0x2e98550() {
   return input1;
}

double NNfunction_sb_sLuR::neuron0x2e98890() {
   return input2;
}

double NNfunction_sb_sLuR::neuron0x2e98bd0() {
   return input3;
}

double NNfunction_sb_sLuR::neuron0x2e98f10() {
   return input4;
}

double NNfunction_sb_sLuR::neuron0x2e99250() {
   return input5;
}

double NNfunction_sb_sLuR::neuron0x2e99590() {
   return input6;
}

double NNfunction_sb_sLuR::neuron0x2e998d0() {
   return input7;
}

double NNfunction_sb_sLuR::neuron0x2e99c10() {
   return input8;
}

double NNfunction_sb_sLuR::neuron0x2e99f50() {
   return input9;
}

double NNfunction_sb_sLuR::neuron0x2e9a290() {
   return input10;
}

double NNfunction_sb_sLuR::neuron0x2e9a5d0() {
   return input11;
}

double NNfunction_sb_sLuR::neuron0x2e9a910() {
   return input12;
}

double NNfunction_sb_sLuR::neuron0x2e9ac50() {
   return input13;
}

double NNfunction_sb_sLuR::neuron0x2e9af90() {
   return input14;
}

double NNfunction_sb_sLuR::neuron0x2e9b2d0() {
   return input15;
}

double NNfunction_sb_sLuR::neuron0x2e9b610() {
   return input16;
}

double NNfunction_sb_sLuR::neuron0x2e9bb70() {
   return input17;
}

double NNfunction_sb_sLuR::neuron0x2e9bd90() {
   return input18;
}

double NNfunction_sb_sLuR::neuron0x2e9c0d0() {
   return input19;
}

double NNfunction_sb_sLuR::neuron0x2e9c410() {
   return input20;
}

double NNfunction_sb_sLuR::neuron0x2e9c750() {
   return input21;
}

double NNfunction_sb_sLuR::neuron0x2e9ca90() {
   return input22;
}

double NNfunction_sb_sLuR::neuron0x2e9cdd0() {
   return input23;
}

double NNfunction_sb_sLuR::input0x2e9d240() {
   double input = -0.428628;
   input += synapse0x2e98220();
   input += synapse0x2e98260();
   input += synapse0x2e9d4f0();
   input += synapse0x2e9d530();
   input += synapse0x2e9d570();
   input += synapse0x2e9d5b0();
   input += synapse0x2e9d5f0();
   input += synapse0x2e9d630();
   input += synapse0x2e9d670();
   input += synapse0x2e9d6b0();
   input += synapse0x2e9d6f0();
   input += synapse0x2e9d730();
   input += synapse0x2e9d770();
   input += synapse0x2e9d7b0();
   input += synapse0x2e9d7f0();
   input += synapse0x2e9d830();
   input += synapse0x2e98190();
   input += synapse0x2e981d0();
   input += synapse0x2c53390();
   input += synapse0x2c533d0();
   input += synapse0x2e9da90();
   input += synapse0x2e9dad0();
   input += synapse0x2e9db10();
   input += synapse0x2e9db50();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9d240() {
   double input = input0x2e9d240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e9db90() {
   double input = -1.57531;
   input += synapse0x2e9ded0();
   input += synapse0x2e9df10();
   input += synapse0x2e9df50();
   input += synapse0x2e9df90();
   input += synapse0x2e9dfd0();
   input += synapse0x2e9e010();
   input += synapse0x2e9e050();
   input += synapse0x2e9e090();
   input += synapse0x2e9e0d0();
   input += synapse0x2e9d980();
   input += synapse0x2e9d9c0();
   input += synapse0x2e9da00();
   input += synapse0x2e9da40();
   input += synapse0x2e9e320();
   input += synapse0x2e9e360();
   input += synapse0x2e9e3a0();
   input += synapse0x2e9dd20();
   input += synapse0x2e9dd60();
   input += synapse0x2e9e4f0();
   input += synapse0x2e9e530();
   input += synapse0x2e9e570();
   input += synapse0x2e9e5b0();
   input += synapse0x2e9e5f0();
   input += synapse0x2e9e630();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9db90() {
   double input = input0x2e9db90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e9e670() {
   double input = -1.69534;
   input += synapse0x2e9e9b0();
   input += synapse0x2e9e9f0();
   input += synapse0x2e9ea30();
   input += synapse0x2e9ea70();
   input += synapse0x2e9eab0();
   input += synapse0x2e9eaf0();
   input += synapse0x2e9eb30();
   input += synapse0x2e9eb70();
   input += synapse0x2e9ebb0();
   input += synapse0x2e9ebf0();
   input += synapse0x2e9ec30();
   input += synapse0x2e9ec70();
   input += synapse0x2e9ecb0();
   input += synapse0x2e9ecf0();
   input += synapse0x2e9ed30();
   input += synapse0x2e9ed70();
   input += synapse0x2e9e800();
   input += synapse0x2e9e840();
   input += synapse0x2c524e0();
   input += synapse0x2e87310();
   input += synapse0x2c61270();
   input += synapse0x2c612b0();
   input += synapse0x2d7c7b0();
   input += synapse0x2d7c7f0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9e670() {
   double input = input0x2e9e670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e9e110() {
   double input = 0.674748;
   input += synapse0x2c61af0();
   input += synapse0x2e98090();
   input += synapse0x2e9e2a0();
   input += synapse0x2e9e2e0();
   input += synapse0x2e9eec0();
   input += synapse0x2e9ef00();
   input += synapse0x2e9ef40();
   input += synapse0x2e9ef80();
   input += synapse0x2e9efc0();
   input += synapse0x2e9f000();
   input += synapse0x2e9f040();
   input += synapse0x2e9f080();
   input += synapse0x2e9f0c0();
   input += synapse0x2e9f100();
   input += synapse0x2e9f140();
   input += synapse0x2e9f180();
   input += synapse0x2e98000();
   input += synapse0x2e98040();
   input += synapse0x2e9f2d0();
   input += synapse0x2e9f310();
   input += synapse0x2e9f350();
   input += synapse0x2e9f390();
   input += synapse0x2e9f3d0();
   input += synapse0x2e9f410();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9e110() {
   double input = input0x2e9e110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e9f450() {
   double input = 0.401013;
   input += synapse0x2e9f790();
   input += synapse0x2e9f7d0();
   input += synapse0x2e9f810();
   input += synapse0x2e9f850();
   input += synapse0x2e9f890();
   input += synapse0x2e9f8d0();
   input += synapse0x2e9f910();
   input += synapse0x2e9f950();
   input += synapse0x2e9f990();
   input += synapse0x2e9f9d0();
   input += synapse0x2e9fa10();
   input += synapse0x2e9fa50();
   input += synapse0x2e9fa90();
   input += synapse0x2e9fad0();
   input += synapse0x2e9fb10();
   input += synapse0x2e9fb50();
   input += synapse0x2e9f5e0();
   input += synapse0x2e9f620();
   input += synapse0x2e9fca0();
   input += synapse0x2e9fce0();
   input += synapse0x2e9fd20();
   input += synapse0x2e9fd60();
   input += synapse0x2e9fda0();
   input += synapse0x2e9fde0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9f450() {
   double input = input0x2e9f450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2e9fe20() {
   double input = 1.1457;
   input += synapse0x2ea0160();
   input += synapse0x2ea01a0();
   input += synapse0x2ea01e0();
   input += synapse0x2ea0220();
   input += synapse0x2ea0260();
   input += synapse0x2ea02a0();
   input += synapse0x2ea02e0();
   input += synapse0x2ea0320();
   input += synapse0x2ea0360();
   input += synapse0x2c615c0();
   input += synapse0x2c61600();
   input += synapse0x2c61640();
   input += synapse0x2c61680();
   input += synapse0x2c616c0();
   input += synapse0x2c61700();
   input += synapse0x2c61740();
   input += synapse0x2e9ffb0();
   input += synapse0x2e9fff0();
   input += synapse0x2c61890();
   input += synapse0x2c618d0();
   input += synapse0x2c61910();
   input += synapse0x2c61950();
   input += synapse0x2c61990();
   input += synapse0x2ea0bb0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2e9fe20() {
   double input = input0x2e9fe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea0bf0() {
   double input = -0.270835;
   input += synapse0x2ea0f30();
   input += synapse0x2ea0f70();
   input += synapse0x2ea0fb0();
   input += synapse0x2ea0ff0();
   input += synapse0x2ea1030();
   input += synapse0x2ea1070();
   input += synapse0x2ea10b0();
   input += synapse0x2ea10f0();
   input += synapse0x2ea1130();
   input += synapse0x2ea1170();
   input += synapse0x2ea11b0();
   input += synapse0x2ea11f0();
   input += synapse0x2ea1230();
   input += synapse0x2ea1270();
   input += synapse0x2ea12b0();
   input += synapse0x2ea12f0();
   input += synapse0x2ea0d80();
   input += synapse0x2ea0dc0();
   input += synapse0x2ea1440();
   input += synapse0x2ea1480();
   input += synapse0x2ea14c0();
   input += synapse0x2ea1500();
   input += synapse0x2ea1540();
   input += synapse0x2ea1580();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea0bf0() {
   double input = input0x2ea0bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea15c0() {
   double input = 0.624144;
   input += synapse0x2ea1900();
   input += synapse0x2ea1940();
   input += synapse0x2ea1980();
   input += synapse0x2ea19c0();
   input += synapse0x2ea1a00();
   input += synapse0x2ea1a40();
   input += synapse0x2ea1a80();
   input += synapse0x2ea1ac0();
   input += synapse0x2ea1b00();
   input += synapse0x2ea1b40();
   input += synapse0x2ea1b80();
   input += synapse0x2ea1bc0();
   input += synapse0x2ea1c00();
   input += synapse0x2ea1c40();
   input += synapse0x2ea1c80();
   input += synapse0x2ea1cc0();
   input += synapse0x2ea1750();
   input += synapse0x2ea1790();
   input += synapse0x2ea1e10();
   input += synapse0x2ea1e50();
   input += synapse0x2ea1e90();
   input += synapse0x2ea1ed0();
   input += synapse0x2ea1f10();
   input += synapse0x2ea1f50();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea15c0() {
   double input = input0x2ea15c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea1f90() {
   double input = -0.104044;
   input += synapse0x2e9ba60();
   input += synapse0x2e9baa0();
   input += synapse0x2e9bae0();
   input += synapse0x2e9bb20();
   input += synapse0x2ea24e0();
   input += synapse0x2ea2520();
   input += synapse0x2ea2560();
   input += synapse0x2ea25a0();
   input += synapse0x2ea25e0();
   input += synapse0x2ea2620();
   input += synapse0x2ea2660();
   input += synapse0x2ea26a0();
   input += synapse0x2ea26e0();
   input += synapse0x2ea2720();
   input += synapse0x2ea2760();
   input += synapse0x2ea27a0();
   input += synapse0x2ea2120();
   input += synapse0x2ea2160();
   input += synapse0x2ea28f0();
   input += synapse0x2ea2930();
   input += synapse0x2ea2970();
   input += synapse0x2ea29b0();
   input += synapse0x2ea29f0();
   input += synapse0x2ea2a30();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea1f90() {
   double input = input0x2ea1f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea2a70() {
   double input = 0.124002;
   input += synapse0x2ea2db0();
   input += synapse0x2ea2df0();
   input += synapse0x2ea2e30();
   input += synapse0x2ea2e70();
   input += synapse0x2ea2eb0();
   input += synapse0x2ea2ef0();
   input += synapse0x2ea2f30();
   input += synapse0x2ea2f70();
   input += synapse0x2ea2fb0();
   input += synapse0x2ea2ff0();
   input += synapse0x2ea3030();
   input += synapse0x2ea3070();
   input += synapse0x2ea30b0();
   input += synapse0x2ea30f0();
   input += synapse0x2ea3130();
   input += synapse0x2ea3170();
   input += synapse0x2ea2c00();
   input += synapse0x2ea2c40();
   input += synapse0x2ea32c0();
   input += synapse0x2ea3300();
   input += synapse0x2ea3340();
   input += synapse0x2ea3380();
   input += synapse0x2ea33c0();
   input += synapse0x2ea3400();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea2a70() {
   double input = input0x2ea2a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea3440() {
   double input = -0.928896;
   input += synapse0x2ea3780();
   input += synapse0x2ea37c0();
   input += synapse0x2ea3800();
   input += synapse0x2ea3840();
   input += synapse0x2ea3880();
   input += synapse0x2ea38c0();
   input += synapse0x2ea3900();
   input += synapse0x2ea3940();
   input += synapse0x2ea3980();
   input += synapse0x2ea39c0();
   input += synapse0x2ea3a00();
   input += synapse0x2ea3a40();
   input += synapse0x2ea3a80();
   input += synapse0x2ea3ac0();
   input += synapse0x2ea3b00();
   input += synapse0x2ea3b40();
   input += synapse0x2ea35d0();
   input += synapse0x2ea3610();
   input += synapse0x2ea03a0();
   input += synapse0x2ea03e0();
   input += synapse0x2ea0420();
   input += synapse0x2ea0460();
   input += synapse0x2ea04a0();
   input += synapse0x2ea04e0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea3440() {
   double input = input0x2ea3440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea0520() {
   double input = 0.500723;
   input += synapse0x2ea0860();
   input += synapse0x2ea08a0();
   input += synapse0x2ea08e0();
   input += synapse0x2ea0920();
   input += synapse0x2ea0960();
   input += synapse0x2ea09a0();
   input += synapse0x2ea09e0();
   input += synapse0x2ea0a20();
   input += synapse0x2ea0a60();
   input += synapse0x2ea0aa0();
   input += synapse0x2ea0ae0();
   input += synapse0x2ea0b20();
   input += synapse0x2ea0b60();
   input += synapse0x2ea4ca0();
   input += synapse0x2ea4ce0();
   input += synapse0x2ea4d20();
   input += synapse0x2ea06b0();
   input += synapse0x2ea06f0();
   input += synapse0x2ea4e70();
   input += synapse0x2ea4eb0();
   input += synapse0x2ea4ef0();
   input += synapse0x2ea4f30();
   input += synapse0x2ea4f70();
   input += synapse0x2ea4fb0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea0520() {
   double input = input0x2ea0520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea4ff0() {
   double input = 0.277986;
   input += synapse0x2ea5330();
   input += synapse0x2ea5370();
   input += synapse0x2ea53b0();
   input += synapse0x2ea53f0();
   input += synapse0x2ea5430();
   input += synapse0x2ea5470();
   input += synapse0x2ea54b0();
   input += synapse0x2ea54f0();
   input += synapse0x2ea5530();
   input += synapse0x2ea5570();
   input += synapse0x2ea55b0();
   input += synapse0x2ea55f0();
   input += synapse0x2ea5630();
   input += synapse0x2ea5670();
   input += synapse0x2ea56b0();
   input += synapse0x2ea56f0();
   input += synapse0x2ea5180();
   input += synapse0x2ea51c0();
   input += synapse0x2ea5840();
   input += synapse0x2ea5880();
   input += synapse0x2ea58c0();
   input += synapse0x2ea5900();
   input += synapse0x2ea5940();
   input += synapse0x2ea5980();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea4ff0() {
   double input = input0x2ea4ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea59c0() {
   double input = 0.980373;
   input += synapse0x2ea5d00();
   input += synapse0x2ea5d40();
   input += synapse0x2ea5d80();
   input += synapse0x2ea5dc0();
   input += synapse0x2ea5e00();
   input += synapse0x2ea5e40();
   input += synapse0x2ea5e80();
   input += synapse0x2ea5ec0();
   input += synapse0x2ea5f00();
   input += synapse0x2ea5f40();
   input += synapse0x2ea5f80();
   input += synapse0x2ea5fc0();
   input += synapse0x2ea6000();
   input += synapse0x2ea6040();
   input += synapse0x2ea6080();
   input += synapse0x2ea60c0();
   input += synapse0x2ea5b50();
   input += synapse0x2ea5b90();
   input += synapse0x2ea6210();
   input += synapse0x2ea6250();
   input += synapse0x2ea6290();
   input += synapse0x2ea62d0();
   input += synapse0x2ea6310();
   input += synapse0x2ea6350();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea59c0() {
   double input = input0x2ea59c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea6390() {
   double input = 1.03267;
   input += synapse0x2ea66d0();
   input += synapse0x2ea6710();
   input += synapse0x2ea6750();
   input += synapse0x2ea6790();
   input += synapse0x2ea67d0();
   input += synapse0x2ea6810();
   input += synapse0x2ea6850();
   input += synapse0x2ea6890();
   input += synapse0x2ea68d0();
   input += synapse0x2ea6910();
   input += synapse0x2ea6950();
   input += synapse0x2ea6990();
   input += synapse0x2ea69d0();
   input += synapse0x2ea6a10();
   input += synapse0x2ea6a50();
   input += synapse0x2ea6a90();
   input += synapse0x2ea6520();
   input += synapse0x2ea6560();
   input += synapse0x2ea6be0();
   input += synapse0x2ea6c20();
   input += synapse0x2ea6c60();
   input += synapse0x2ea6ca0();
   input += synapse0x2ea6ce0();
   input += synapse0x2ea6d20();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea6390() {
   double input = input0x2ea6390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea6d60() {
   double input = -1.98204;
   input += synapse0x2ea70a0();
   input += synapse0x2e98430();
   input += synapse0x2e98470();
   input += synapse0x2e98770();
   input += synapse0x2e987b0();
   input += synapse0x2e98ab0();
   input += synapse0x2e98af0();
   input += synapse0x2e98df0();
   input += synapse0x2e98e30();
   input += synapse0x2e99130();
   input += synapse0x2e99170();
   input += synapse0x2e99470();
   input += synapse0x2e994b0();
   input += synapse0x2e997b0();
   input += synapse0x2e997f0();
   input += synapse0x2e99af0();
   input += synapse0x2e99b30();
   input += synapse0x2e99e30();
   input += synapse0x2e99e70();
   input += synapse0x2e9a170();
   input += synapse0x2e9a1b0();
   input += synapse0x2e9a4b0();
   input += synapse0x2e9a4f0();
   input += synapse0x2e9a7f0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea6d60() {
   double input = input0x2ea6d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea8b70() {
   double input = -1.51494;
   input += synapse0x2e9a830();
   input += synapse0x2e9b4f0();
   input += synapse0x2e9b530();
   input += synapse0x2ea6ef0();
   input += synapse0x2ea6f30();
   input += synapse0x2e9b830();
   input += synapse0x2e9b870();
   input += synapse0x2c53270();
   input += synapse0x2c532b0();
   input += synapse0x2e9bfb0();
   input += synapse0x2e9bff0();
   input += synapse0x2e9c2f0();
   input += synapse0x2e9c330();
   input += synapse0x2e9c630();
   input += synapse0x2e9c670();
   input += synapse0x2e9c970();
   input += synapse0x2e9c9b0();
   input += synapse0x2e9ccb0();
   input += synapse0x2e9ccf0();
   input += synapse0x2e9cff0();
   input += synapse0x2e9d030();
   input += synapse0x2e9ab30();
   input += synapse0x2e9ab70();
   input += synapse0x2ea8e10();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea8b70() {
   double input = input0x2ea8b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea8e50() {
   double input = -1.41293;
   input += synapse0x2ea9190();
   input += synapse0x2ea91d0();
   input += synapse0x2ea9210();
   input += synapse0x2ea9250();
   input += synapse0x2ea9290();
   input += synapse0x2ea92d0();
   input += synapse0x2ea9310();
   input += synapse0x2ea9350();
   input += synapse0x2ea9390();
   input += synapse0x2ea93d0();
   input += synapse0x2ea9410();
   input += synapse0x2ea9450();
   input += synapse0x2ea9490();
   input += synapse0x2ea94d0();
   input += synapse0x2ea9510();
   input += synapse0x2ea9550();
   input += synapse0x2ea8fe0();
   input += synapse0x2ea9020();
   input += synapse0x2ea96a0();
   input += synapse0x2ea96e0();
   input += synapse0x2ea9720();
   input += synapse0x2ea9760();
   input += synapse0x2ea97a0();
   input += synapse0x2ea97e0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea8e50() {
   double input = input0x2ea8e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea9820() {
   double input = 0.597709;
   input += synapse0x2ea9b60();
   input += synapse0x2ea9ba0();
   input += synapse0x2ea9be0();
   input += synapse0x2ea9c20();
   input += synapse0x2ea9c60();
   input += synapse0x2ea9ca0();
   input += synapse0x2ea9ce0();
   input += synapse0x2ea9d20();
   input += synapse0x2ea9d60();
   input += synapse0x2ea9da0();
   input += synapse0x2ea9de0();
   input += synapse0x2ea9e20();
   input += synapse0x2ea9e60();
   input += synapse0x2ea9ea0();
   input += synapse0x2ea9ee0();
   input += synapse0x2ea9f20();
   input += synapse0x2ea99b0();
   input += synapse0x2ea99f0();
   input += synapse0x2eaa070();
   input += synapse0x2eaa0b0();
   input += synapse0x2eaa0f0();
   input += synapse0x2eaa130();
   input += synapse0x2eaa170();
   input += synapse0x2eaa1b0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea9820() {
   double input = input0x2ea9820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eaa1f0() {
   double input = -0.166147;
   input += synapse0x2eaa530();
   input += synapse0x2eaa570();
   input += synapse0x2eaa5b0();
   input += synapse0x2eaa5f0();
   input += synapse0x2eaa630();
   input += synapse0x2eaa670();
   input += synapse0x2eaa6b0();
   input += synapse0x2eaa6f0();
   input += synapse0x2eaa730();
   input += synapse0x2eaa770();
   input += synapse0x2eaa7b0();
   input += synapse0x2eaa7f0();
   input += synapse0x2eaa830();
   input += synapse0x2eaa870();
   input += synapse0x2eaa8b0();
   input += synapse0x2eaa8f0();
   input += synapse0x2eaa380();
   input += synapse0x2eaa3c0();
   input += synapse0x2eaaa40();
   input += synapse0x2eaaa80();
   input += synapse0x2eaaac0();
   input += synapse0x2eaab00();
   input += synapse0x2eaab40();
   input += synapse0x2eaab80();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eaa1f0() {
   double input = input0x2eaa1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eaabc0() {
   double input = -0.00740143;
   input += synapse0x2eaaf00();
   input += synapse0x2eaaf40();
   input += synapse0x2eaaf80();
   input += synapse0x2eaafc0();
   input += synapse0x2eab000();
   input += synapse0x2eab040();
   input += synapse0x2eab080();
   input += synapse0x2eab0c0();
   input += synapse0x2eab100();
   input += synapse0x2eab140();
   input += synapse0x2eab180();
   input += synapse0x2eab1c0();
   input += synapse0x2eab200();
   input += synapse0x2eab240();
   input += synapse0x2eab280();
   input += synapse0x2eab2c0();
   input += synapse0x2eaad50();
   input += synapse0x2eaad90();
   input += synapse0x2eab410();
   input += synapse0x2eab450();
   input += synapse0x2eab490();
   input += synapse0x2eab4d0();
   input += synapse0x2eab510();
   input += synapse0x2eab550();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eaabc0() {
   double input = input0x2eaabc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eab590() {
   double input = 1.61297;
   input += synapse0x2eab8d0();
   input += synapse0x2eab910();
   input += synapse0x2eab950();
   input += synapse0x2eab990();
   input += synapse0x2eab9d0();
   input += synapse0x2eaba10();
   input += synapse0x2eaba50();
   input += synapse0x2eaba90();
   input += synapse0x2eabad0();
   input += synapse0x2ea3c90();
   input += synapse0x2ea3cd0();
   input += synapse0x2ea3d10();
   input += synapse0x2ea3d50();
   input += synapse0x2ea3d90();
   input += synapse0x2ea3dd0();
   input += synapse0x2ea3e10();
   input += synapse0x2eab720();
   input += synapse0x2eab760();
   input += synapse0x2ea3f60();
   input += synapse0x2ea3fa0();
   input += synapse0x2ea3fe0();
   input += synapse0x2ea4020();
   input += synapse0x2ea4060();
   input += synapse0x2ea40a0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eab590() {
   double input = input0x2eab590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea40e0() {
   double input = -0.961161;
   input += synapse0x2ea4420();
   input += synapse0x2ea4460();
   input += synapse0x2ea44a0();
   input += synapse0x2ea44e0();
   input += synapse0x2ea4520();
   input += synapse0x2ea4560();
   input += synapse0x2ea45a0();
   input += synapse0x2ea45e0();
   input += synapse0x2ea4620();
   input += synapse0x2ea4660();
   input += synapse0x2ea46a0();
   input += synapse0x2ea46e0();
   input += synapse0x2ea4720();
   input += synapse0x2ea4760();
   input += synapse0x2ea47a0();
   input += synapse0x2ea47e0();
   input += synapse0x2ea4270();
   input += synapse0x2ea42b0();
   input += synapse0x2ea4930();
   input += synapse0x2ea4970();
   input += synapse0x2ea49b0();
   input += synapse0x2ea49f0();
   input += synapse0x2ea4a30();
   input += synapse0x2ea4a70();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea40e0() {
   double input = input0x2ea40e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea4ab0() {
   double input = -0.204697;
   input += synapse0x2ea4c40();
   input += synapse0x2eadcd0();
   input += synapse0x2eadd10();
   input += synapse0x2eadd50();
   input += synapse0x2eadd90();
   input += synapse0x2eaddd0();
   input += synapse0x2eade10();
   input += synapse0x2eade50();
   input += synapse0x2eade90();
   input += synapse0x2eaded0();
   input += synapse0x2eadf10();
   input += synapse0x2eadf50();
   input += synapse0x2eadf90();
   input += synapse0x2eadfd0();
   input += synapse0x2eae010();
   input += synapse0x2eae050();
   input += synapse0x2eadb20();
   input += synapse0x2eadb60();
   input += synapse0x2eae1a0();
   input += synapse0x2eae1e0();
   input += synapse0x2eae220();
   input += synapse0x2eae260();
   input += synapse0x2eae2a0();
   input += synapse0x2eae2e0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea4ab0() {
   double input = input0x2ea4ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eae320() {
   double input = -0.271776;
   input += synapse0x2eae660();
   input += synapse0x2eae6a0();
   input += synapse0x2eae6e0();
   input += synapse0x2eae720();
   input += synapse0x2eae760();
   input += synapse0x2eae7a0();
   input += synapse0x2eae7e0();
   input += synapse0x2eae820();
   input += synapse0x2eae860();
   input += synapse0x2eae8a0();
   input += synapse0x2eae8e0();
   input += synapse0x2eae920();
   input += synapse0x2eae960();
   input += synapse0x2eae9a0();
   input += synapse0x2eae9e0();
   input += synapse0x2eaea20();
   input += synapse0x2eae4b0();
   input += synapse0x2eae4f0();
   input += synapse0x2eaeb70();
   input += synapse0x2eaebb0();
   input += synapse0x2eaebf0();
   input += synapse0x2eaec30();
   input += synapse0x2eaec70();
   input += synapse0x2eaecb0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eae320() {
   double input = input0x2eae320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eaecf0() {
   double input = -0.0655297;
   input += synapse0x2eaf030();
   input += synapse0x2eaf070();
   input += synapse0x2eaf0b0();
   input += synapse0x2eaf0f0();
   input += synapse0x2eaf130();
   input += synapse0x2eaf170();
   input += synapse0x2eaf1b0();
   input += synapse0x2eaf1f0();
   input += synapse0x2eaf230();
   input += synapse0x2eaf270();
   input += synapse0x2eaf2b0();
   input += synapse0x2eaf2f0();
   input += synapse0x2eaf330();
   input += synapse0x2eaf370();
   input += synapse0x2eaf3b0();
   input += synapse0x2eaf3f0();
   input += synapse0x2eaee80();
   input += synapse0x2eaeec0();
   input += synapse0x2eaf540();
   input += synapse0x2eaf580();
   input += synapse0x2eaf5c0();
   input += synapse0x2eaf600();
   input += synapse0x2eaf640();
   input += synapse0x2eaf680();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eaecf0() {
   double input = input0x2eaecf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eaf6c0() {
   double input = 0.534368;
   input += synapse0x2eafa00();
   input += synapse0x2eafa40();
   input += synapse0x2eafa80();
   input += synapse0x2eafac0();
   input += synapse0x2eafb00();
   input += synapse0x2eafb40();
   input += synapse0x2eafb80();
   input += synapse0x2eafbc0();
   input += synapse0x2eafc00();
   input += synapse0x2eafc40();
   input += synapse0x2eafc80();
   input += synapse0x2eafcc0();
   input += synapse0x2eafd00();
   input += synapse0x2eafd40();
   input += synapse0x2eafd80();
   input += synapse0x2eafdc0();
   input += synapse0x2eaf850();
   input += synapse0x2eaf890();
   input += synapse0x2eaff10();
   input += synapse0x2eaff50();
   input += synapse0x2eaff90();
   input += synapse0x2eaffd0();
   input += synapse0x2eb0010();
   input += synapse0x2eb0050();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eaf6c0() {
   double input = input0x2eaf6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb0090() {
   double input = 5.07635;
   input += synapse0x2eb03d0();
   input += synapse0x2eb0410();
   input += synapse0x2eb0450();
   input += synapse0x2eb0490();
   input += synapse0x2eb04d0();
   input += synapse0x2eb0510();
   input += synapse0x2eb0550();
   input += synapse0x2eb0590();
   input += synapse0x2eb05d0();
   input += synapse0x2eb0610();
   input += synapse0x2eb0650();
   input += synapse0x2eb0690();
   input += synapse0x2eb06d0();
   input += synapse0x2eb0710();
   input += synapse0x2eb0750();
   input += synapse0x2eb0790();
   input += synapse0x2eb0220();
   input += synapse0x2eb0260();
   input += synapse0x2eb08e0();
   input += synapse0x2eb0920();
   input += synapse0x2eb0960();
   input += synapse0x2eb09a0();
   input += synapse0x2eb09e0();
   input += synapse0x2eb0a20();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb0090() {
   double input = input0x2eb0090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb0a60() {
   double input = -0.584963;
   input += synapse0x2eb0da0();
   input += synapse0x2eb0de0();
   input += synapse0x2eb0e20();
   input += synapse0x2eb0e60();
   input += synapse0x2eb0ea0();
   input += synapse0x2eb0ee0();
   input += synapse0x2eb0f20();
   input += synapse0x2eb0f60();
   input += synapse0x2eb0fa0();
   input += synapse0x2eb0fe0();
   input += synapse0x2eb1020();
   input += synapse0x2eb1060();
   input += synapse0x2eb10a0();
   input += synapse0x2eb10e0();
   input += synapse0x2eb1120();
   input += synapse0x2eb1160();
   input += synapse0x2eb0bf0();
   input += synapse0x2eb0c30();
   input += synapse0x2eb12b0();
   input += synapse0x2eb12f0();
   input += synapse0x2eb1330();
   input += synapse0x2eb1370();
   input += synapse0x2eb13b0();
   input += synapse0x2eb13f0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb0a60() {
   double input = input0x2eb0a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb1430() {
   double input = 1.68117;
   input += synapse0x2eb1770();
   input += synapse0x2eb17b0();
   input += synapse0x2eb17f0();
   input += synapse0x2eb1830();
   input += synapse0x2eb1870();
   input += synapse0x2eb18b0();
   input += synapse0x2eb18f0();
   input += synapse0x2eb1930();
   input += synapse0x2eb1970();
   input += synapse0x2eb19b0();
   input += synapse0x2eb19f0();
   input += synapse0x2eb1a30();
   input += synapse0x2eb1a70();
   input += synapse0x2eb1ab0();
   input += synapse0x2eb1af0();
   input += synapse0x2eb1b30();
   input += synapse0x2eb15c0();
   input += synapse0x2eb1600();
   input += synapse0x2eb1c80();
   input += synapse0x2eb1cc0();
   input += synapse0x2eb1d00();
   input += synapse0x2eb1d40();
   input += synapse0x2eb1d80();
   input += synapse0x2eb1dc0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb1430() {
   double input = input0x2eb1430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb1e00() {
   double input = -0.336614;
   input += synapse0x2eb2140();
   input += synapse0x2eb2180();
   input += synapse0x2eb21c0();
   input += synapse0x2eb2200();
   input += synapse0x2eb2240();
   input += synapse0x2eb2280();
   input += synapse0x2eb22c0();
   input += synapse0x2eb2300();
   input += synapse0x2eb2340();
   input += synapse0x2eb2380();
   input += synapse0x2eb23c0();
   input += synapse0x2eb2400();
   input += synapse0x2eb2440();
   input += synapse0x2eb2480();
   input += synapse0x2eb24c0();
   input += synapse0x2eb2500();
   input += synapse0x2eb1f90();
   input += synapse0x2eb1fd0();
   input += synapse0x2eb2650();
   input += synapse0x2eb2690();
   input += synapse0x2eb26d0();
   input += synapse0x2eb2710();
   input += synapse0x2eb2750();
   input += synapse0x2eb2790();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb1e00() {
   double input = input0x2eb1e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb27d0() {
   double input = -4.72493;
   input += synapse0x2eb2b10();
   input += synapse0x2ea70e0();
   input += synapse0x2ea7120();
   input += synapse0x2ea7160();
   input += synapse0x2ea73b0();
   input += synapse0x2ea73f0();
   input += synapse0x2ea7430();
   input += synapse0x2ea7680();
   input += synapse0x2ea76c0();
   input += synapse0x2ea7910();
   input += synapse0x2ea7950();
   input += synapse0x2ea7990();
   input += synapse0x2ea7be0();
   input += synapse0x2ea7c20();
   input += synapse0x2ea7e70();
   input += synapse0x2ea7eb0();
   input += synapse0x2eb2960();
   input += synapse0x2eb29a0();
   input += synapse0x2ea8000();
   input += synapse0x2ea8510();
   input += synapse0x2ea8550();
   input += synapse0x2ea8590();
   input += synapse0x2ea87e0();
   input += synapse0x2ea8820();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb27d0() {
   double input = input0x2eb27d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ea8860() {
   double input = -0.621183;
   input += synapse0x2ea80d0();
   input += synapse0x2ea8110();
   input += synapse0x2ea8150();
   input += synapse0x2ea8190();
   input += synapse0x2ea8b10();
   input += synapse0x2eb4e60();
   input += synapse0x2eb4ea0();
   input += synapse0x2eb4ee0();
   input += synapse0x2eb4f20();
   input += synapse0x2eb4f60();
   input += synapse0x2eb4fa0();
   input += synapse0x2eb4fe0();
   input += synapse0x2eb5020();
   input += synapse0x2eb5060();
   input += synapse0x2eb50a0();
   input += synapse0x2eb50e0();
   input += synapse0x2ea89f0();
   input += synapse0x2ea8a30();
   input += synapse0x2eb5230();
   input += synapse0x2eb5270();
   input += synapse0x2eb52b0();
   input += synapse0x2eb52f0();
   input += synapse0x2eb5330();
   input += synapse0x2eb5370();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ea8860() {
   double input = input0x2ea8860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb53b0() {
   double input = 3.34589;
   input += synapse0x2eb56f0();
   input += synapse0x2eb5730();
   input += synapse0x2eb5770();
   input += synapse0x2eb57b0();
   input += synapse0x2eb57f0();
   input += synapse0x2eb5830();
   input += synapse0x2eb5870();
   input += synapse0x2eb58b0();
   input += synapse0x2eb58f0();
   input += synapse0x2eb5930();
   input += synapse0x2eb5970();
   input += synapse0x2eb59b0();
   input += synapse0x2eb59f0();
   input += synapse0x2eb5a30();
   input += synapse0x2eb5a70();
   input += synapse0x2eb5ab0();
   input += synapse0x2eb5540();
   input += synapse0x2eb5580();
   input += synapse0x2eb5c00();
   input += synapse0x2eb5c40();
   input += synapse0x2eb5c80();
   input += synapse0x2eb5cc0();
   input += synapse0x2eb5d00();
   input += synapse0x2eb5d40();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb53b0() {
   double input = input0x2eb53b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb5d80() {
   double input = 1.35402;
   input += synapse0x2eb60c0();
   input += synapse0x2eb6100();
   input += synapse0x2eb6140();
   input += synapse0x2eb6180();
   input += synapse0x2eb61c0();
   input += synapse0x2eb6200();
   input += synapse0x2eb6240();
   input += synapse0x2eb6280();
   input += synapse0x2eb62c0();
   input += synapse0x2eb6300();
   input += synapse0x2eb6340();
   input += synapse0x2eb6380();
   input += synapse0x2eb63c0();
   input += synapse0x2eb6400();
   input += synapse0x2eb6440();
   input += synapse0x2eb6480();
   input += synapse0x2eb5f10();
   input += synapse0x2eb5f50();
   input += synapse0x2eb65d0();
   input += synapse0x2eb6610();
   input += synapse0x2eb6650();
   input += synapse0x2eb6690();
   input += synapse0x2eb66d0();
   input += synapse0x2eb6710();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb5d80() {
   double input = input0x2eb5d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb6750() {
   double input = 0.589902;
   input += synapse0x2eb6a90();
   input += synapse0x2eb6ad0();
   input += synapse0x2eb6b10();
   input += synapse0x2eb6b50();
   input += synapse0x2eb6b90();
   input += synapse0x2eb6bd0();
   input += synapse0x2eb6c10();
   input += synapse0x2eb6c50();
   input += synapse0x2eb6c90();
   input += synapse0x2eb6cd0();
   input += synapse0x2eb6d10();
   input += synapse0x2eb6d50();
   input += synapse0x2eb6d90();
   input += synapse0x2eb6dd0();
   input += synapse0x2eb6e10();
   input += synapse0x2eb6e50();
   input += synapse0x2eb68e0();
   input += synapse0x2eb6920();
   input += synapse0x2eb6fa0();
   input += synapse0x2eb6fe0();
   input += synapse0x2eb7020();
   input += synapse0x2eb7060();
   input += synapse0x2eb70a0();
   input += synapse0x2eb70e0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb6750() {
   double input = input0x2eb6750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb7120() {
   double input = 1.21222;
   input += synapse0x2eb7460();
   input += synapse0x2eb74a0();
   input += synapse0x2eb74e0();
   input += synapse0x2eb7520();
   input += synapse0x2eb7560();
   input += synapse0x2eb75a0();
   input += synapse0x2eb75e0();
   input += synapse0x2eb7620();
   input += synapse0x2eb7660();
   input += synapse0x2eb76a0();
   input += synapse0x2eb76e0();
   input += synapse0x2eb7720();
   input += synapse0x2eb7760();
   input += synapse0x2eb77a0();
   input += synapse0x2eb77e0();
   input += synapse0x2eb7820();
   input += synapse0x2eb72b0();
   input += synapse0x2eb72f0();
   input += synapse0x2eb7970();
   input += synapse0x2eb79b0();
   input += synapse0x2eb79f0();
   input += synapse0x2eb7a30();
   input += synapse0x2eb7a70();
   input += synapse0x2eb7ab0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb7120() {
   double input = input0x2eb7120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb7af0() {
   double input = -0.356571;
   input += synapse0x2eb7e30();
   input += synapse0x2eb7e70();
   input += synapse0x2eb7eb0();
   input += synapse0x2eb7ef0();
   input += synapse0x2eb7f30();
   input += synapse0x2eb7f70();
   input += synapse0x2eb7fb0();
   input += synapse0x2eb7ff0();
   input += synapse0x2eb8030();
   input += synapse0x2eb8070();
   input += synapse0x2eb80b0();
   input += synapse0x2eb80f0();
   input += synapse0x2eb8130();
   input += synapse0x2eb8170();
   input += synapse0x2eb81b0();
   input += synapse0x2eb81f0();
   input += synapse0x2eb7c80();
   input += synapse0x2eb7cc0();
   input += synapse0x2eb8340();
   input += synapse0x2eb8380();
   input += synapse0x2eb83c0();
   input += synapse0x2eb8400();
   input += synapse0x2eb8440();
   input += synapse0x2eb8480();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb7af0() {
   double input = input0x2eb7af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb84c0() {
   double input = -0.0537629;
   input += synapse0x2eb8800();
   input += synapse0x2eb8840();
   input += synapse0x2eb8880();
   input += synapse0x2eb88c0();
   input += synapse0x2eb8900();
   input += synapse0x2eb8940();
   input += synapse0x2eb8980();
   input += synapse0x2eb89c0();
   input += synapse0x2eb8a00();
   input += synapse0x2eb8a40();
   input += synapse0x2eb8a80();
   input += synapse0x2eb8ac0();
   input += synapse0x2eb8b00();
   input += synapse0x2eb8b40();
   input += synapse0x2eb8b80();
   input += synapse0x2eb8bc0();
   input += synapse0x2eb8650();
   input += synapse0x2eb8690();
   input += synapse0x2eb8d10();
   input += synapse0x2eb8d50();
   input += synapse0x2eb8d90();
   input += synapse0x2eb8dd0();
   input += synapse0x2eb8e10();
   input += synapse0x2eb8e50();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb84c0() {
   double input = input0x2eb84c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb8e90() {
   double input = 0.160168;
   input += synapse0x2eb91d0();
   input += synapse0x2eb9210();
   input += synapse0x2eb9250();
   input += synapse0x2eb9290();
   input += synapse0x2eb92d0();
   input += synapse0x2eb9310();
   input += synapse0x2eb9350();
   input += synapse0x2eb9390();
   input += synapse0x2eb93d0();
   input += synapse0x2eb9410();
   input += synapse0x2eb9450();
   input += synapse0x2eb9490();
   input += synapse0x2eb94d0();
   input += synapse0x2eb9510();
   input += synapse0x2eb9550();
   input += synapse0x2eb9590();
   input += synapse0x2eb9020();
   input += synapse0x2eb9060();
   input += synapse0x2eb96e0();
   input += synapse0x2eb9720();
   input += synapse0x2eb9760();
   input += synapse0x2eb97a0();
   input += synapse0x2eb97e0();
   input += synapse0x2eb9820();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb8e90() {
   double input = input0x2eb8e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eb9860() {
   double input = -0.044324;
   input += synapse0x2ea22d0();
   input += synapse0x2ea2310();
   input += synapse0x2ea2350();
   input += synapse0x2ea2390();
   input += synapse0x2ea23d0();
   input += synapse0x2ea2410();
   input += synapse0x2ea2450();
   input += synapse0x2ea2490();
   input += synapse0x2eb9fb0();
   input += synapse0x2eb9ff0();
   input += synapse0x2eba030();
   input += synapse0x2eba070();
   input += synapse0x2eba0b0();
   input += synapse0x2eba0f0();
   input += synapse0x2eba130();
   input += synapse0x2eba170();
   input += synapse0x2eb99f0();
   input += synapse0x2eb9a30();
   input += synapse0x2eba2c0();
   input += synapse0x2eba300();
   input += synapse0x2eba340();
   input += synapse0x2eba380();
   input += synapse0x2eba3c0();
   input += synapse0x2eba400();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eb9860() {
   double input = input0x2eb9860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eba440() {
   double input = 0.308271;
   input += synapse0x2eba780();
   input += synapse0x2eba7c0();
   input += synapse0x2eba800();
   input += synapse0x2eba840();
   input += synapse0x2eba880();
   input += synapse0x2eba8c0();
   input += synapse0x2eba900();
   input += synapse0x2eba940();
   input += synapse0x2eba980();
   input += synapse0x2eba9c0();
   input += synapse0x2ebaa00();
   input += synapse0x2ebaa40();
   input += synapse0x2ebaa80();
   input += synapse0x2ebaac0();
   input += synapse0x2ebab00();
   input += synapse0x2ebab40();
   input += synapse0x2eba5d0();
   input += synapse0x2eba610();
   input += synapse0x2ebac90();
   input += synapse0x2ebacd0();
   input += synapse0x2ebad10();
   input += synapse0x2ebad50();
   input += synapse0x2ebad90();
   input += synapse0x2ebadd0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eba440() {
   double input = input0x2eba440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ebae10() {
   double input = -0.618725;
   input += synapse0x2ebb150();
   input += synapse0x2ebb190();
   input += synapse0x2ebb1d0();
   input += synapse0x2ebb210();
   input += synapse0x2ebb250();
   input += synapse0x2ebb290();
   input += synapse0x2ebb2d0();
   input += synapse0x2ebb310();
   input += synapse0x2ebb350();
   input += synapse0x2ebb390();
   input += synapse0x2ebb3d0();
   input += synapse0x2ebb410();
   input += synapse0x2ebb450();
   input += synapse0x2ebb490();
   input += synapse0x2ebb4d0();
   input += synapse0x2ebb510();
   input += synapse0x2ebafa0();
   input += synapse0x2ebafe0();
   input += synapse0x2eabb10();
   input += synapse0x2eabb50();
   input += synapse0x2eabb90();
   input += synapse0x2eabbd0();
   input += synapse0x2eabc10();
   input += synapse0x2eabc50();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ebae10() {
   double input = input0x2ebae10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eabc90() {
   double input = 1.11975;
   input += synapse0x2eabfd0();
   input += synapse0x2eac010();
   input += synapse0x2eac050();
   input += synapse0x2eac090();
   input += synapse0x2eac0d0();
   input += synapse0x2eac110();
   input += synapse0x2eac150();
   input += synapse0x2eac190();
   input += synapse0x2eac1d0();
   input += synapse0x2eac210();
   input += synapse0x2eac250();
   input += synapse0x2eac290();
   input += synapse0x2eac2d0();
   input += synapse0x2eac310();
   input += synapse0x2eac350();
   input += synapse0x2eac390();
   input += synapse0x2eabe20();
   input += synapse0x2eabe60();
   input += synapse0x2eac4e0();
   input += synapse0x2eac520();
   input += synapse0x2eac560();
   input += synapse0x2eac5a0();
   input += synapse0x2eac5e0();
   input += synapse0x2eac620();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eabc90() {
   double input = input0x2eabc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2eac660() {
   double input = 0.0215312;
   input += synapse0x2eac9a0();
   input += synapse0x2eac9e0();
   input += synapse0x2eaca20();
   input += synapse0x2eaca60();
   input += synapse0x2eacaa0();
   input += synapse0x2eacae0();
   input += synapse0x2eacb20();
   input += synapse0x2eacb60();
   input += synapse0x2eacba0();
   input += synapse0x2eacbe0();
   input += synapse0x2eacc20();
   input += synapse0x2eacc60();
   input += synapse0x2eacca0();
   input += synapse0x2eacce0();
   input += synapse0x2eacd20();
   input += synapse0x2eacd60();
   input += synapse0x2eac7f0();
   input += synapse0x2eac830();
   input += synapse0x2eaceb0();
   input += synapse0x2eacef0();
   input += synapse0x2eacf30();
   input += synapse0x2eacf70();
   input += synapse0x2eacfb0();
   input += synapse0x2eacff0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2eac660() {
   double input = input0x2eac660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ead030() {
   double input = 1.16771;
   input += synapse0x2ead370();
   input += synapse0x2ead3b0();
   input += synapse0x2ead3f0();
   input += synapse0x2ead430();
   input += synapse0x2ead470();
   input += synapse0x2ead4b0();
   input += synapse0x2ead4f0();
   input += synapse0x2ead530();
   input += synapse0x2ead570();
   input += synapse0x2ead5b0();
   input += synapse0x2ead5f0();
   input += synapse0x2ead630();
   input += synapse0x2ead670();
   input += synapse0x2ead6b0();
   input += synapse0x2ead6f0();
   input += synapse0x2ead730();
   input += synapse0x2ead1c0();
   input += synapse0x2ead200();
   input += synapse0x2ead880();
   input += synapse0x2ead8c0();
   input += synapse0x2ead900();
   input += synapse0x2ead940();
   input += synapse0x2ead980();
   input += synapse0x2ead9c0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ead030() {
   double input = input0x2ead030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ebf670() {
   double input = 0.149882;
   input += synapse0x2ebf890();
   input += synapse0x2ebf8d0();
   input += synapse0x2ebf910();
   input += synapse0x2ebf950();
   input += synapse0x2ebf990();
   input += synapse0x2ebf9d0();
   input += synapse0x2ebfa10();
   input += synapse0x2ebfa50();
   input += synapse0x2ebfa90();
   input += synapse0x2ebfad0();
   input += synapse0x2ebfb10();
   input += synapse0x2ebfb50();
   input += synapse0x2ebfb90();
   input += synapse0x2ebfbd0();
   input += synapse0x2ebfc10();
   input += synapse0x2ebfc50();
   input += synapse0x2eada00();
   input += synapse0x2eada40();
   input += synapse0x2ebfda0();
   input += synapse0x2ebfde0();
   input += synapse0x2ebfe20();
   input += synapse0x2ebfe60();
   input += synapse0x2ebfea0();
   input += synapse0x2ebfee0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ebf670() {
   double input = input0x2ebf670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ebff20() {
   double input = -0.328233;
   input += synapse0x2ec0260();
   input += synapse0x2ec02a0();
   input += synapse0x2ec02e0();
   input += synapse0x2ec0320();
   input += synapse0x2ec0360();
   input += synapse0x2ec03a0();
   input += synapse0x2ec03e0();
   input += synapse0x2ec0420();
   input += synapse0x2ec0460();
   input += synapse0x2ec04a0();
   input += synapse0x2ec04e0();
   input += synapse0x2ec0520();
   input += synapse0x2ec0560();
   input += synapse0x2ec05a0();
   input += synapse0x2ec05e0();
   input += synapse0x2ec0620();
   input += synapse0x2ec00b0();
   input += synapse0x2ec00f0();
   input += synapse0x2ec0770();
   input += synapse0x2ec07b0();
   input += synapse0x2ec07f0();
   input += synapse0x2ec0830();
   input += synapse0x2ec0870();
   input += synapse0x2ec08b0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ebff20() {
   double input = input0x2ebff20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec08f0() {
   double input = 2.42216;
   input += synapse0x2ec0c30();
   input += synapse0x2ec0c70();
   input += synapse0x2ec0cb0();
   input += synapse0x2ec0cf0();
   input += synapse0x2ec0d30();
   input += synapse0x2ec0d70();
   input += synapse0x2ec0db0();
   input += synapse0x2ec0df0();
   input += synapse0x2ec0e30();
   input += synapse0x2ec0e70();
   input += synapse0x2ec0eb0();
   input += synapse0x2ec0ef0();
   input += synapse0x2ec0f30();
   input += synapse0x2ec0f70();
   input += synapse0x2ec0fb0();
   input += synapse0x2ec0ff0();
   input += synapse0x2ec0a80();
   input += synapse0x2ec0ac0();
   input += synapse0x2ec1140();
   input += synapse0x2ec1180();
   input += synapse0x2ec11c0();
   input += synapse0x2ec1200();
   input += synapse0x2ec1240();
   input += synapse0x2ec1280();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec08f0() {
   double input = input0x2ec08f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec12c0() {
   double input = 0.628471;
   input += synapse0x2ec1600();
   input += synapse0x2ec1640();
   input += synapse0x2ec1680();
   input += synapse0x2ec16c0();
   input += synapse0x2ec1700();
   input += synapse0x2ec1740();
   input += synapse0x2ec1780();
   input += synapse0x2ec17c0();
   input += synapse0x2ec1800();
   input += synapse0x2ec1840();
   input += synapse0x2ec1880();
   input += synapse0x2ec18c0();
   input += synapse0x2ec1900();
   input += synapse0x2ec1940();
   input += synapse0x2ec1980();
   input += synapse0x2ec19c0();
   input += synapse0x2ec1450();
   input += synapse0x2ec1490();
   input += synapse0x2ec1b10();
   input += synapse0x2ec1b50();
   input += synapse0x2ec1b90();
   input += synapse0x2ec1bd0();
   input += synapse0x2ec1c10();
   input += synapse0x2ec1c50();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec12c0() {
   double input = input0x2ec12c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec84c0() {
   double input = -1.47158;
   input += synapse0x2c61a60();
   input += synapse0x2c61aa0();
   input += synapse0x2e9f700();
   input += synapse0x2e9f740();
   input += synapse0x2ea00d0();
   input += synapse0x2ea0110();
   input += synapse0x2ea0ea0();
   input += synapse0x2ea0ee0();
   input += synapse0x2ea1870();
   input += synapse0x2ea18b0();
   input += synapse0x2ea2240();
   input += synapse0x2ea2280();
   input += synapse0x2ea2d20();
   input += synapse0x2ea2d60();
   input += synapse0x2ea36f0();
   input += synapse0x2ea3730();
   input += synapse0x2ea07d0();
   input += synapse0x2ea0810();
   input += synapse0x2ea52a0();
   input += synapse0x2ea52e0();
   input += synapse0x2ea5c70();
   input += synapse0x2ea5cb0();
   input += synapse0x2ea6640();
   input += synapse0x2ea6680();
   input += synapse0x2ea7010();
   input += synapse0x2ea7050();
   input += synapse0x2e9b1b0();
   input += synapse0x2e9b1f0();
   input += synapse0x2ea9100();
   input += synapse0x2ea9140();
   input += synapse0x2ea9ad0();
   input += synapse0x2ea9b10();
   input += synapse0x2eaa4a0();
   input += synapse0x2eaa4e0();
   input += synapse0x2eaae70();
   input += synapse0x2eaaeb0();
   input += synapse0x2eab840();
   input += synapse0x2eab880();
   input += synapse0x2ea4390();
   input += synapse0x2ea43d0();
   input += synapse0x2eadc40();
   input += synapse0x2eadc80();
   input += synapse0x2eae5d0();
   input += synapse0x2eae610();
   input += synapse0x2eaefa0();
   input += synapse0x2eaefe0();
   input += synapse0x2eaf970();
   input += synapse0x2eaf9b0();
   input += synapse0x2eb0340();
   input += synapse0x2eb0380();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec84c0() {
   double input = input0x2ec84c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec8860() {
   double input = -0.434566;
   input += synapse0x2eb2a80();
   input += synapse0x2eb2ac0();
   input += synapse0x2ea8040();
   input += synapse0x2ea8080();
   input += synapse0x2eb5660();
   input += synapse0x2eb56a0();
   input += synapse0x2eb6030();
   input += synapse0x2eb6070();
   input += synapse0x2eb6a00();
   input += synapse0x2eb6a40();
   input += synapse0x2eb73d0();
   input += synapse0x2eb7410();
   input += synapse0x2eb7da0();
   input += synapse0x2eb7de0();
   input += synapse0x2eb8770();
   input += synapse0x2eb87b0();
   input += synapse0x2eb9140();
   input += synapse0x2eb9180();
   input += synapse0x2eb9b10();
   input += synapse0x2eb9b50();
   input += synapse0x2eba6f0();
   input += synapse0x2eba730();
   input += synapse0x2ebb0c0();
   input += synapse0x2ebb100();
   input += synapse0x2eabf40();
   input += synapse0x2eabf80();
   input += synapse0x2eac910();
   input += synapse0x2eac950();
   input += synapse0x2ead2e0();
   input += synapse0x2ead320();
   input += synapse0x2ebf800();
   input += synapse0x2ebf840();
   input += synapse0x2ec01d0();
   input += synapse0x2ec0210();
   input += synapse0x2ec0ba0();
   input += synapse0x2ec0be0();
   input += synapse0x2ec1570();
   input += synapse0x2ec15b0();
   input += synapse0x2e9d460();
   input += synapse0x2e9d4a0();
   input += synapse0x2eb0d10();
   input += synapse0x2eb0d50();
   input += synapse0x2ec1c90();
   input += synapse0x2ec1cd0();
   input += synapse0x2ec1d10();
   input += synapse0x2ec1d50();
   input += synapse0x2ec8c00();
   input += synapse0x2ec8c40();
   input += synapse0x2ec8c80();
   input += synapse0x2ec8cc0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec8860() {
   double input = input0x2ec8860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec8d00() {
   double input = -0.677986;
   input += synapse0x2ec9040();
   input += synapse0x2ec9080();
   input += synapse0x2ec90c0();
   input += synapse0x2ec9100();
   input += synapse0x2ec9140();
   input += synapse0x2ec9180();
   input += synapse0x2ec91c0();
   input += synapse0x2ec9200();
   input += synapse0x2ec9240();
   input += synapse0x2ec9280();
   input += synapse0x2ec92c0();
   input += synapse0x2ec9300();
   input += synapse0x2ec9340();
   input += synapse0x2ec9380();
   input += synapse0x2ec93c0();
   input += synapse0x2ec9400();
   input += synapse0x2ec8e90();
   input += synapse0x2ec8ed0();
   input += synapse0x2ec9550();
   input += synapse0x2ec9590();
   input += synapse0x2ec95d0();
   input += synapse0x2ec9610();
   input += synapse0x2ec9650();
   input += synapse0x2ec9690();
   input += synapse0x2ec96d0();
   input += synapse0x2ec9710();
   input += synapse0x2ec9750();
   input += synapse0x2ec9790();
   input += synapse0x2ec97d0();
   input += synapse0x2ec9810();
   input += synapse0x2ec9850();
   input += synapse0x2ec9890();
   input += synapse0x2ec9440();
   input += synapse0x2ec9480();
   input += synapse0x2ec94c0();
   input += synapse0x2ec9500();
   input += synapse0x2ec9ae0();
   input += synapse0x2ec9b20();
   input += synapse0x2ec9b60();
   input += synapse0x2ec9ba0();
   input += synapse0x2ec9be0();
   input += synapse0x2ec9c20();
   input += synapse0x2ec9c60();
   input += synapse0x2ec9ca0();
   input += synapse0x2ec9ce0();
   input += synapse0x2ec9d20();
   input += synapse0x2ec9d60();
   input += synapse0x2ec9da0();
   input += synapse0x2ec9de0();
   input += synapse0x2ec9e20();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec8d00() {
   double input = input0x2ec8d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ec9e60() {
   double input = 1.43308;
   input += synapse0x2eca1a0();
   input += synapse0x2eca1e0();
   input += synapse0x2eca220();
   input += synapse0x2eca260();
   input += synapse0x2eca2a0();
   input += synapse0x2eca2e0();
   input += synapse0x2eca320();
   input += synapse0x2eca360();
   input += synapse0x2eca3a0();
   input += synapse0x2eca3e0();
   input += synapse0x2eca420();
   input += synapse0x2eca460();
   input += synapse0x2eca4a0();
   input += synapse0x2eca4e0();
   input += synapse0x2eca520();
   input += synapse0x2eca560();
   input += synapse0x2ec9ff0();
   input += synapse0x2eca030();
   input += synapse0x2eca6b0();
   input += synapse0x2eca6f0();
   input += synapse0x2eca730();
   input += synapse0x2eca770();
   input += synapse0x2eca7b0();
   input += synapse0x2eca7f0();
   input += synapse0x2eca830();
   input += synapse0x2eca870();
   input += synapse0x2eca8b0();
   input += synapse0x2eca8f0();
   input += synapse0x2eca930();
   input += synapse0x2eca970();
   input += synapse0x2eca9b0();
   input += synapse0x2eca9f0();
   input += synapse0x2eca5a0();
   input += synapse0x2eca5e0();
   input += synapse0x2eca620();
   input += synapse0x2eca660();
   input += synapse0x2ecac40();
   input += synapse0x2ecac80();
   input += synapse0x2ecacc0();
   input += synapse0x2ecad00();
   input += synapse0x2ecad40();
   input += synapse0x2ecad80();
   input += synapse0x2ecadc0();
   input += synapse0x2ecae00();
   input += synapse0x2ecae40();
   input += synapse0x2ecae80();
   input += synapse0x2ecaec0();
   input += synapse0x2ecaf00();
   input += synapse0x2ecaf40();
   input += synapse0x2ecaf80();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ec9e60() {
   double input = input0x2ec9e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ecafc0() {
   double input = 1.11936;
   input += synapse0x2ecb300();
   input += synapse0x2ecb340();
   input += synapse0x2ecb380();
   input += synapse0x2ecb3c0();
   input += synapse0x2ecb400();
   input += synapse0x2ecb440();
   input += synapse0x2ecb480();
   input += synapse0x2ecb4c0();
   input += synapse0x2ecb500();
   input += synapse0x2ecb540();
   input += synapse0x2ecb580();
   input += synapse0x2ecb5c0();
   input += synapse0x2ecb600();
   input += synapse0x2ecb640();
   input += synapse0x2ecb680();
   input += synapse0x2ecb6c0();
   input += synapse0x2ecb150();
   input += synapse0x2ecb190();
   input += synapse0x2ecb810();
   input += synapse0x2ecb850();
   input += synapse0x2ecb890();
   input += synapse0x2ecb8d0();
   input += synapse0x2ecb910();
   input += synapse0x2ecb950();
   input += synapse0x2ecb990();
   input += synapse0x2ecb9d0();
   input += synapse0x2ecba10();
   input += synapse0x2ecba50();
   input += synapse0x2ecba90();
   input += synapse0x2ecbad0();
   input += synapse0x2ecbb10();
   input += synapse0x2ecbb50();
   input += synapse0x2ecb700();
   input += synapse0x2ecb740();
   input += synapse0x2ecb780();
   input += synapse0x2ecb7c0();
   input += synapse0x2ecbda0();
   input += synapse0x2ecbde0();
   input += synapse0x2ecbe20();
   input += synapse0x2ecbe60();
   input += synapse0x2ecbea0();
   input += synapse0x2ecbee0();
   input += synapse0x2ecbf20();
   input += synapse0x2ecbf60();
   input += synapse0x2ecbfa0();
   input += synapse0x2ecbfe0();
   input += synapse0x2ecc020();
   input += synapse0x2ecc060();
   input += synapse0x2ecc0a0();
   input += synapse0x2ecc0e0();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ecafc0() {
   double input = input0x2ecafc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuR::input0x2ecc120() {
   double input = 6.11441;
   input += synapse0x2ecc340();
   input += synapse0x2ecc380();
   input += synapse0x2ecc3c0();
   input += synapse0x2ecc400();
   input += synapse0x2ecc440();
   return input;
}

double NNfunction_sb_sLuR::neuron0x2ecc120() {
   double input = input0x2ecc120();
   return (input * 1)+0;
}

double NNfunction_sb_sLuR::synapse0x2e98220() {
   return (neuron0x2e982a0()*-0.0904887);
}

double NNfunction_sb_sLuR::synapse0x2e98260() {
   return (neuron0x2e98550()*0.0884842);
}

double NNfunction_sb_sLuR::synapse0x2e9d4f0() {
   return (neuron0x2e98890()*0.192869);
}

double NNfunction_sb_sLuR::synapse0x2e9d530() {
   return (neuron0x2e98bd0()*-0.37765);
}

double NNfunction_sb_sLuR::synapse0x2e9d570() {
   return (neuron0x2e98f10()*-0.0263015);
}

double NNfunction_sb_sLuR::synapse0x2e9d5b0() {
   return (neuron0x2e99250()*-0.205888);
}

double NNfunction_sb_sLuR::synapse0x2e9d5f0() {
   return (neuron0x2e99590()*-0.357639);
}

double NNfunction_sb_sLuR::synapse0x2e9d630() {
   return (neuron0x2e998d0()*0.152211);
}

double NNfunction_sb_sLuR::synapse0x2e9d670() {
   return (neuron0x2e99c10()*-0.0651825);
}

double NNfunction_sb_sLuR::synapse0x2e9d6b0() {
   return (neuron0x2e99f50()*0.0588169);
}

double NNfunction_sb_sLuR::synapse0x2e9d6f0() {
   return (neuron0x2e9a290()*-0.124852);
}

double NNfunction_sb_sLuR::synapse0x2e9d730() {
   return (neuron0x2e9a5d0()*-0.0397571);
}

double NNfunction_sb_sLuR::synapse0x2e9d770() {
   return (neuron0x2e9a910()*-0.687766);
}

double NNfunction_sb_sLuR::synapse0x2e9d7b0() {
   return (neuron0x2e9ac50()*0.0199268);
}

double NNfunction_sb_sLuR::synapse0x2e9d7f0() {
   return (neuron0x2e9af90()*2.3486);
}

double NNfunction_sb_sLuR::synapse0x2e9d830() {
   return (neuron0x2e9b2d0()*0.184114);
}

double NNfunction_sb_sLuR::synapse0x2e98190() {
   return (neuron0x2e9b610()*0.303873);
}

double NNfunction_sb_sLuR::synapse0x2e981d0() {
   return (neuron0x2e9bb70()*0.0844268);
}

double NNfunction_sb_sLuR::synapse0x2c53390() {
   return (neuron0x2e9bd90()*0.124801);
}

double NNfunction_sb_sLuR::synapse0x2c533d0() {
   return (neuron0x2e9c0d0()*-0.0506045);
}

double NNfunction_sb_sLuR::synapse0x2e9da90() {
   return (neuron0x2e9c410()*0.201559);
}

double NNfunction_sb_sLuR::synapse0x2e9dad0() {
   return (neuron0x2e9c750()*0.266806);
}

double NNfunction_sb_sLuR::synapse0x2e9db10() {
   return (neuron0x2e9ca90()*0.31928);
}

double NNfunction_sb_sLuR::synapse0x2e9db50() {
   return (neuron0x2e9cdd0()*0.240002);
}

double NNfunction_sb_sLuR::synapse0x2e9ded0() {
   return (neuron0x2e982a0()*0.00800378);
}

double NNfunction_sb_sLuR::synapse0x2e9df10() {
   return (neuron0x2e98550()*-0.014581);
}

double NNfunction_sb_sLuR::synapse0x2e9df50() {
   return (neuron0x2e98890()*-0.0253002);
}

double NNfunction_sb_sLuR::synapse0x2e9df90() {
   return (neuron0x2e98bd0()*-2.01176);
}

double NNfunction_sb_sLuR::synapse0x2e9dfd0() {
   return (neuron0x2e98f10()*0.00103957);
}

double NNfunction_sb_sLuR::synapse0x2e9e010() {
   return (neuron0x2e99250()*-0.00264813);
}

double NNfunction_sb_sLuR::synapse0x2e9e050() {
   return (neuron0x2e99590()*0.0053468);
}

double NNfunction_sb_sLuR::synapse0x2e9e090() {
   return (neuron0x2e998d0()*0.00183179);
}

double NNfunction_sb_sLuR::synapse0x2e9e0d0() {
   return (neuron0x2e99c10()*0.00648891);
}

double NNfunction_sb_sLuR::synapse0x2e9d980() {
   return (neuron0x2e99f50()*-0.00646979);
}

double NNfunction_sb_sLuR::synapse0x2e9d9c0() {
   return (neuron0x2e9a290()*0.000741705);
}

double NNfunction_sb_sLuR::synapse0x2e9da00() {
   return (neuron0x2e9a5d0()*0.00190784);
}

double NNfunction_sb_sLuR::synapse0x2e9da40() {
   return (neuron0x2e9a910()*0.189405);
}

double NNfunction_sb_sLuR::synapse0x2e9e320() {
   return (neuron0x2e9ac50()*-0.00862422);
}

double NNfunction_sb_sLuR::synapse0x2e9e360() {
   return (neuron0x2e9af90()*0.209783);
}

double NNfunction_sb_sLuR::synapse0x2e9e3a0() {
   return (neuron0x2e9b2d0()*0.00673259);
}

double NNfunction_sb_sLuR::synapse0x2e9dd20() {
   return (neuron0x2e9b610()*0.00281501);
}

double NNfunction_sb_sLuR::synapse0x2e9dd60() {
   return (neuron0x2e9bb70()*-0.00694281);
}

double NNfunction_sb_sLuR::synapse0x2e9e4f0() {
   return (neuron0x2e9bd90()*0.00103035);
}

double NNfunction_sb_sLuR::synapse0x2e9e530() {
   return (neuron0x2e9c0d0()*-0.00718025);
}

double NNfunction_sb_sLuR::synapse0x2e9e570() {
   return (neuron0x2e9c410()*0.00650255);
}

double NNfunction_sb_sLuR::synapse0x2e9e5b0() {
   return (neuron0x2e9c750()*0.0121625);
}

double NNfunction_sb_sLuR::synapse0x2e9e5f0() {
   return (neuron0x2e9ca90()*0.00892278);
}

double NNfunction_sb_sLuR::synapse0x2e9e630() {
   return (neuron0x2e9cdd0()*0.000410423);
}

double NNfunction_sb_sLuR::synapse0x2e9e9b0() {
   return (neuron0x2e982a0()*-0.0113623);
}

double NNfunction_sb_sLuR::synapse0x2e9e9f0() {
   return (neuron0x2e98550()*0.120173);
}

double NNfunction_sb_sLuR::synapse0x2e9ea30() {
   return (neuron0x2e98890()*-0.439028);
}

double NNfunction_sb_sLuR::synapse0x2e9ea70() {
   return (neuron0x2e98bd0()*-0.905566);
}

double NNfunction_sb_sLuR::synapse0x2e9eab0() {
   return (neuron0x2e98f10()*-0.148315);
}

double NNfunction_sb_sLuR::synapse0x2e9eaf0() {
   return (neuron0x2e99250()*-0.195244);
}

double NNfunction_sb_sLuR::synapse0x2e9eb30() {
   return (neuron0x2e99590()*-0.00522212);
}

double NNfunction_sb_sLuR::synapse0x2e9eb70() {
   return (neuron0x2e998d0()*-0.0452901);
}

double NNfunction_sb_sLuR::synapse0x2e9ebb0() {
   return (neuron0x2e99c10()*-0.102862);
}

double NNfunction_sb_sLuR::synapse0x2e9ebf0() {
   return (neuron0x2e99f50()*-0.101597);
}

double NNfunction_sb_sLuR::synapse0x2e9ec30() {
   return (neuron0x2e9a290()*-0.0706219);
}

double NNfunction_sb_sLuR::synapse0x2e9ec70() {
   return (neuron0x2e9a5d0()*-0.695514);
}

double NNfunction_sb_sLuR::synapse0x2e9ecb0() {
   return (neuron0x2e9a910()*0.241771);
}

double NNfunction_sb_sLuR::synapse0x2e9ecf0() {
   return (neuron0x2e9ac50()*-0.0773433);
}

double NNfunction_sb_sLuR::synapse0x2e9ed30() {
   return (neuron0x2e9af90()*0.359936);
}

double NNfunction_sb_sLuR::synapse0x2e9ed70() {
   return (neuron0x2e9b2d0()*-0.349434);
}

double NNfunction_sb_sLuR::synapse0x2e9e800() {
   return (neuron0x2e9b610()*0.201448);
}

double NNfunction_sb_sLuR::synapse0x2e9e840() {
   return (neuron0x2e9bb70()*-0.43336);
}

double NNfunction_sb_sLuR::synapse0x2c524e0() {
   return (neuron0x2e9bd90()*-0.425393);
}

double NNfunction_sb_sLuR::synapse0x2e87310() {
   return (neuron0x2e9c0d0()*-0.100479);
}

double NNfunction_sb_sLuR::synapse0x2c61270() {
   return (neuron0x2e9c410()*0.142009);
}

double NNfunction_sb_sLuR::synapse0x2c612b0() {
   return (neuron0x2e9c750()*0.0691681);
}

double NNfunction_sb_sLuR::synapse0x2d7c7b0() {
   return (neuron0x2e9ca90()*0.00656104);
}

double NNfunction_sb_sLuR::synapse0x2d7c7f0() {
   return (neuron0x2e9cdd0()*-0.102496);
}

double NNfunction_sb_sLuR::synapse0x2c61af0() {
   return (neuron0x2e982a0()*-0.0982144);
}

double NNfunction_sb_sLuR::synapse0x2e98090() {
   return (neuron0x2e98550()*-0.423816);
}

double NNfunction_sb_sLuR::synapse0x2e9e2a0() {
   return (neuron0x2e98890()*0.14337);
}

double NNfunction_sb_sLuR::synapse0x2e9e2e0() {
   return (neuron0x2e98bd0()*-1.25213);
}

double NNfunction_sb_sLuR::synapse0x2e9eec0() {
   return (neuron0x2e98f10()*0.0277601);
}

double NNfunction_sb_sLuR::synapse0x2e9ef00() {
   return (neuron0x2e99250()*0.406233);
}

double NNfunction_sb_sLuR::synapse0x2e9ef40() {
   return (neuron0x2e99590()*-0.0556104);
}

double NNfunction_sb_sLuR::synapse0x2e9ef80() {
   return (neuron0x2e998d0()*0.134);
}

double NNfunction_sb_sLuR::synapse0x2e9efc0() {
   return (neuron0x2e99c10()*0.666575);
}

double NNfunction_sb_sLuR::synapse0x2e9f000() {
   return (neuron0x2e99f50()*-0.424209);
}

double NNfunction_sb_sLuR::synapse0x2e9f040() {
   return (neuron0x2e9a290()*0.612249);
}

double NNfunction_sb_sLuR::synapse0x2e9f080() {
   return (neuron0x2e9a5d0()*-0.414033);
}

double NNfunction_sb_sLuR::synapse0x2e9f0c0() {
   return (neuron0x2e9a910()*-0.292911);
}

double NNfunction_sb_sLuR::synapse0x2e9f100() {
   return (neuron0x2e9ac50()*-0.136152);
}

double NNfunction_sb_sLuR::synapse0x2e9f140() {
   return (neuron0x2e9af90()*-0.486738);
}

double NNfunction_sb_sLuR::synapse0x2e9f180() {
   return (neuron0x2e9b2d0()*-0.36864);
}

double NNfunction_sb_sLuR::synapse0x2e98000() {
   return (neuron0x2e9b610()*-0.121363);
}

double NNfunction_sb_sLuR::synapse0x2e98040() {
   return (neuron0x2e9bb70()*0.580898);
}

double NNfunction_sb_sLuR::synapse0x2e9f2d0() {
   return (neuron0x2e9bd90()*0.143712);
}

double NNfunction_sb_sLuR::synapse0x2e9f310() {
   return (neuron0x2e9c0d0()*0.00885688);
}

double NNfunction_sb_sLuR::synapse0x2e9f350() {
   return (neuron0x2e9c410()*-0.378234);
}

double NNfunction_sb_sLuR::synapse0x2e9f390() {
   return (neuron0x2e9c750()*0.344544);
}

double NNfunction_sb_sLuR::synapse0x2e9f3d0() {
   return (neuron0x2e9ca90()*0.193755);
}

double NNfunction_sb_sLuR::synapse0x2e9f410() {
   return (neuron0x2e9cdd0()*0.148322);
}

double NNfunction_sb_sLuR::synapse0x2e9f790() {
   return (neuron0x2e982a0()*0.245209);
}

double NNfunction_sb_sLuR::synapse0x2e9f7d0() {
   return (neuron0x2e98550()*0.65988);
}

double NNfunction_sb_sLuR::synapse0x2e9f810() {
   return (neuron0x2e98890()*-0.394593);
}

double NNfunction_sb_sLuR::synapse0x2e9f850() {
   return (neuron0x2e98bd0()*0.934548);
}

double NNfunction_sb_sLuR::synapse0x2e9f890() {
   return (neuron0x2e98f10()*0.193876);
}

double NNfunction_sb_sLuR::synapse0x2e9f8d0() {
   return (neuron0x2e99250()*-0.0690064);
}

double NNfunction_sb_sLuR::synapse0x2e9f910() {
   return (neuron0x2e99590()*-0.0415987);
}

double NNfunction_sb_sLuR::synapse0x2e9f950() {
   return (neuron0x2e998d0()*0.09263);
}

double NNfunction_sb_sLuR::synapse0x2e9f990() {
   return (neuron0x2e99c10()*-0.113461);
}

double NNfunction_sb_sLuR::synapse0x2e9f9d0() {
   return (neuron0x2e99f50()*0.312495);
}

double NNfunction_sb_sLuR::synapse0x2e9fa10() {
   return (neuron0x2e9a290()*-0.432808);
}

double NNfunction_sb_sLuR::synapse0x2e9fa50() {
   return (neuron0x2e9a5d0()*-0.159841);
}

double NNfunction_sb_sLuR::synapse0x2e9fa90() {
   return (neuron0x2e9a910()*0.0237021);
}

double NNfunction_sb_sLuR::synapse0x2e9fad0() {
   return (neuron0x2e9ac50()*0.550719);
}

double NNfunction_sb_sLuR::synapse0x2e9fb10() {
   return (neuron0x2e9af90()*-0.465003);
}

double NNfunction_sb_sLuR::synapse0x2e9fb50() {
   return (neuron0x2e9b2d0()*0.563108);
}

double NNfunction_sb_sLuR::synapse0x2e9f5e0() {
   return (neuron0x2e9b610()*-0.163947);
}

double NNfunction_sb_sLuR::synapse0x2e9f620() {
   return (neuron0x2e9bb70()*0.0596224);
}

double NNfunction_sb_sLuR::synapse0x2e9fca0() {
   return (neuron0x2e9bd90()*-0.215796);
}

double NNfunction_sb_sLuR::synapse0x2e9fce0() {
   return (neuron0x2e9c0d0()*-0.121279);
}

double NNfunction_sb_sLuR::synapse0x2e9fd20() {
   return (neuron0x2e9c410()*-0.0674727);
}

double NNfunction_sb_sLuR::synapse0x2e9fd60() {
   return (neuron0x2e9c750()*-0.222226);
}

double NNfunction_sb_sLuR::synapse0x2e9fda0() {
   return (neuron0x2e9ca90()*-0.0217703);
}

double NNfunction_sb_sLuR::synapse0x2e9fde0() {
   return (neuron0x2e9cdd0()*-0.662444);
}

double NNfunction_sb_sLuR::synapse0x2ea0160() {
   return (neuron0x2e982a0()*-0.0595944);
}

double NNfunction_sb_sLuR::synapse0x2ea01a0() {
   return (neuron0x2e98550()*0.00909471);
}

double NNfunction_sb_sLuR::synapse0x2ea01e0() {
   return (neuron0x2e98890()*0.2548);
}

double NNfunction_sb_sLuR::synapse0x2ea0220() {
   return (neuron0x2e98bd0()*-1.04674);
}

double NNfunction_sb_sLuR::synapse0x2ea0260() {
   return (neuron0x2e98f10()*0.484391);
}

double NNfunction_sb_sLuR::synapse0x2ea02a0() {
   return (neuron0x2e99250()*0.109389);
}

double NNfunction_sb_sLuR::synapse0x2ea02e0() {
   return (neuron0x2e99590()*0.146457);
}

double NNfunction_sb_sLuR::synapse0x2ea0320() {
   return (neuron0x2e998d0()*-0.265619);
}

double NNfunction_sb_sLuR::synapse0x2ea0360() {
   return (neuron0x2e99c10()*0.0228093);
}

double NNfunction_sb_sLuR::synapse0x2c615c0() {
   return (neuron0x2e99f50()*-0.0746553);
}

double NNfunction_sb_sLuR::synapse0x2c61600() {
   return (neuron0x2e9a290()*0.0647077);
}

double NNfunction_sb_sLuR::synapse0x2c61640() {
   return (neuron0x2e9a5d0()*0.227501);
}

double NNfunction_sb_sLuR::synapse0x2c61680() {
   return (neuron0x2e9a910()*-0.554745);
}

double NNfunction_sb_sLuR::synapse0x2c616c0() {
   return (neuron0x2e9ac50()*0.148232);
}

double NNfunction_sb_sLuR::synapse0x2c61700() {
   return (neuron0x2e9af90()*-0.118125);
}

double NNfunction_sb_sLuR::synapse0x2c61740() {
   return (neuron0x2e9b2d0()*-0.0877725);
}

double NNfunction_sb_sLuR::synapse0x2e9ffb0() {
   return (neuron0x2e9b610()*0.0159624);
}

double NNfunction_sb_sLuR::synapse0x2e9fff0() {
   return (neuron0x2e9bb70()*0.216806);
}

double NNfunction_sb_sLuR::synapse0x2c61890() {
   return (neuron0x2e9bd90()*0.169109);
}

double NNfunction_sb_sLuR::synapse0x2c618d0() {
   return (neuron0x2e9c0d0()*-0.0029158);
}

double NNfunction_sb_sLuR::synapse0x2c61910() {
   return (neuron0x2e9c410()*-0.0838784);
}

double NNfunction_sb_sLuR::synapse0x2c61950() {
   return (neuron0x2e9c750()*-0.113959);
}

double NNfunction_sb_sLuR::synapse0x2c61990() {
   return (neuron0x2e9ca90()*0.0542115);
}

double NNfunction_sb_sLuR::synapse0x2ea0bb0() {
   return (neuron0x2e9cdd0()*0.444518);
}

double NNfunction_sb_sLuR::synapse0x2ea0f30() {
   return (neuron0x2e982a0()*-0.173671);
}

double NNfunction_sb_sLuR::synapse0x2ea0f70() {
   return (neuron0x2e98550()*0.102529);
}

double NNfunction_sb_sLuR::synapse0x2ea0fb0() {
   return (neuron0x2e98890()*0.0986971);
}

double NNfunction_sb_sLuR::synapse0x2ea0ff0() {
   return (neuron0x2e98bd0()*-0.471155);
}

double NNfunction_sb_sLuR::synapse0x2ea1030() {
   return (neuron0x2e98f10()*0.440219);
}

double NNfunction_sb_sLuR::synapse0x2ea1070() {
   return (neuron0x2e99250()*-0.656007);
}

double NNfunction_sb_sLuR::synapse0x2ea10b0() {
   return (neuron0x2e99590()*-1.07613);
}

double NNfunction_sb_sLuR::synapse0x2ea10f0() {
   return (neuron0x2e998d0()*-0.32458);
}

double NNfunction_sb_sLuR::synapse0x2ea1130() {
   return (neuron0x2e99c10()*-0.371164);
}

double NNfunction_sb_sLuR::synapse0x2ea1170() {
   return (neuron0x2e99f50()*-0.675079);
}

double NNfunction_sb_sLuR::synapse0x2ea11b0() {
   return (neuron0x2e9a290()*-0.17239);
}

double NNfunction_sb_sLuR::synapse0x2ea11f0() {
   return (neuron0x2e9a5d0()*0.944995);
}

double NNfunction_sb_sLuR::synapse0x2ea1230() {
   return (neuron0x2e9a910()*-0.0878857);
}

double NNfunction_sb_sLuR::synapse0x2ea1270() {
   return (neuron0x2e9ac50()*0.811857);
}

double NNfunction_sb_sLuR::synapse0x2ea12b0() {
   return (neuron0x2e9af90()*-0.951527);
}

double NNfunction_sb_sLuR::synapse0x2ea12f0() {
   return (neuron0x2e9b2d0()*-0.853511);
}

double NNfunction_sb_sLuR::synapse0x2ea0d80() {
   return (neuron0x2e9b610()*0.247028);
}

double NNfunction_sb_sLuR::synapse0x2ea0dc0() {
   return (neuron0x2e9bb70()*0.226278);
}

double NNfunction_sb_sLuR::synapse0x2ea1440() {
   return (neuron0x2e9bd90()*0.390393);
}

double NNfunction_sb_sLuR::synapse0x2ea1480() {
   return (neuron0x2e9c0d0()*0.678604);
}

double NNfunction_sb_sLuR::synapse0x2ea14c0() {
   return (neuron0x2e9c410()*-0.4495);
}

double NNfunction_sb_sLuR::synapse0x2ea1500() {
   return (neuron0x2e9c750()*-0.456436);
}

double NNfunction_sb_sLuR::synapse0x2ea1540() {
   return (neuron0x2e9ca90()*0.558711);
}

double NNfunction_sb_sLuR::synapse0x2ea1580() {
   return (neuron0x2e9cdd0()*0.358299);
}

double NNfunction_sb_sLuR::synapse0x2ea1900() {
   return (neuron0x2e982a0()*0.117168);
}

double NNfunction_sb_sLuR::synapse0x2ea1940() {
   return (neuron0x2e98550()*-0.60929);
}

double NNfunction_sb_sLuR::synapse0x2ea1980() {
   return (neuron0x2e98890()*-0.0127863);
}

double NNfunction_sb_sLuR::synapse0x2ea19c0() {
   return (neuron0x2e98bd0()*0.4122);
}

double NNfunction_sb_sLuR::synapse0x2ea1a00() {
   return (neuron0x2e98f10()*-0.219281);
}

double NNfunction_sb_sLuR::synapse0x2ea1a40() {
   return (neuron0x2e99250()*0.0834169);
}

double NNfunction_sb_sLuR::synapse0x2ea1a80() {
   return (neuron0x2e99590()*0.625497);
}

double NNfunction_sb_sLuR::synapse0x2ea1ac0() {
   return (neuron0x2e998d0()*0.317724);
}

double NNfunction_sb_sLuR::synapse0x2ea1b00() {
   return (neuron0x2e99c10()*0.466288);
}

double NNfunction_sb_sLuR::synapse0x2ea1b40() {
   return (neuron0x2e99f50()*0.156069);
}

double NNfunction_sb_sLuR::synapse0x2ea1b80() {
   return (neuron0x2e9a290()*0.576109);
}

double NNfunction_sb_sLuR::synapse0x2ea1bc0() {
   return (neuron0x2e9a5d0()*0.174354);
}

double NNfunction_sb_sLuR::synapse0x2ea1c00() {
   return (neuron0x2e9a910()*-0.999157);
}

double NNfunction_sb_sLuR::synapse0x2ea1c40() {
   return (neuron0x2e9ac50()*0.484779);
}

double NNfunction_sb_sLuR::synapse0x2ea1c80() {
   return (neuron0x2e9af90()*-0.0665776);
}

double NNfunction_sb_sLuR::synapse0x2ea1cc0() {
   return (neuron0x2e9b2d0()*0.148447);
}

double NNfunction_sb_sLuR::synapse0x2ea1750() {
   return (neuron0x2e9b610()*0.631527);
}

double NNfunction_sb_sLuR::synapse0x2ea1790() {
   return (neuron0x2e9bb70()*0.18681);
}

double NNfunction_sb_sLuR::synapse0x2ea1e10() {
   return (neuron0x2e9bd90()*-0.248791);
}

double NNfunction_sb_sLuR::synapse0x2ea1e50() {
   return (neuron0x2e9c0d0()*-0.774146);
}

double NNfunction_sb_sLuR::synapse0x2ea1e90() {
   return (neuron0x2e9c410()*-0.0491187);
}

double NNfunction_sb_sLuR::synapse0x2ea1ed0() {
   return (neuron0x2e9c750()*-0.193374);
}

double NNfunction_sb_sLuR::synapse0x2ea1f10() {
   return (neuron0x2e9ca90()*-0.0847572);
}

double NNfunction_sb_sLuR::synapse0x2ea1f50() {
   return (neuron0x2e9cdd0()*-0.475354);
}

double NNfunction_sb_sLuR::synapse0x2e9ba60() {
   return (neuron0x2e982a0()*0.0504201);
}

double NNfunction_sb_sLuR::synapse0x2e9baa0() {
   return (neuron0x2e98550()*-0.0115723);
}

double NNfunction_sb_sLuR::synapse0x2e9bae0() {
   return (neuron0x2e98890()*-0.0591241);
}

double NNfunction_sb_sLuR::synapse0x2e9bb20() {
   return (neuron0x2e98bd0()*0.087397);
}

double NNfunction_sb_sLuR::synapse0x2ea24e0() {
   return (neuron0x2e98f10()*-0.000416404);
}

double NNfunction_sb_sLuR::synapse0x2ea2520() {
   return (neuron0x2e99250()*0.0308838);
}

double NNfunction_sb_sLuR::synapse0x2ea2560() {
   return (neuron0x2e99590()*0.0321205);
}

double NNfunction_sb_sLuR::synapse0x2ea25a0() {
   return (neuron0x2e998d0()*-0.00828069);
}

double NNfunction_sb_sLuR::synapse0x2ea25e0() {
   return (neuron0x2e99c10()*0.0239851);
}

double NNfunction_sb_sLuR::synapse0x2ea2620() {
   return (neuron0x2e99f50()*0.0125381);
}

double NNfunction_sb_sLuR::synapse0x2ea2660() {
   return (neuron0x2e9a290()*0.00942741);
}

double NNfunction_sb_sLuR::synapse0x2ea26a0() {
   return (neuron0x2e9a5d0()*0.0190993);
}

double NNfunction_sb_sLuR::synapse0x2ea26e0() {
   return (neuron0x2e9a910()*-1.20291);
}

double NNfunction_sb_sLuR::synapse0x2ea2720() {
   return (neuron0x2e9ac50()*0.00713335);
}

double NNfunction_sb_sLuR::synapse0x2ea2760() {
   return (neuron0x2e9af90()*1.47322);
}

double NNfunction_sb_sLuR::synapse0x2ea27a0() {
   return (neuron0x2e9b2d0()*0.0593452);
}

double NNfunction_sb_sLuR::synapse0x2ea2120() {
   return (neuron0x2e9b610()*-0.00854484);
}

double NNfunction_sb_sLuR::synapse0x2ea2160() {
   return (neuron0x2e9bb70()*0.0134904);
}

double NNfunction_sb_sLuR::synapse0x2ea28f0() {
   return (neuron0x2e9bd90()*0.0226334);
}

double NNfunction_sb_sLuR::synapse0x2ea2930() {
   return (neuron0x2e9c0d0()*0.0275449);
}

double NNfunction_sb_sLuR::synapse0x2ea2970() {
   return (neuron0x2e9c410()*-0.0248509);
}

double NNfunction_sb_sLuR::synapse0x2ea29b0() {
   return (neuron0x2e9c750()*-0.0249397);
}

double NNfunction_sb_sLuR::synapse0x2ea29f0() {
   return (neuron0x2e9ca90()*-0.0367374);
}

double NNfunction_sb_sLuR::synapse0x2ea2a30() {
   return (neuron0x2e9cdd0()*-0.0704933);
}

double NNfunction_sb_sLuR::synapse0x2ea2db0() {
   return (neuron0x2e982a0()*-0.171886);
}

double NNfunction_sb_sLuR::synapse0x2ea2df0() {
   return (neuron0x2e98550()*0.174433);
}

double NNfunction_sb_sLuR::synapse0x2ea2e30() {
   return (neuron0x2e98890()*-0.460178);
}

double NNfunction_sb_sLuR::synapse0x2ea2e70() {
   return (neuron0x2e98bd0()*0.973337);
}

double NNfunction_sb_sLuR::synapse0x2ea2eb0() {
   return (neuron0x2e98f10()*-0.727228);
}

double NNfunction_sb_sLuR::synapse0x2ea2ef0() {
   return (neuron0x2e99250()*-0.742842);
}

double NNfunction_sb_sLuR::synapse0x2ea2f30() {
   return (neuron0x2e99590()*0.0814485);
}

double NNfunction_sb_sLuR::synapse0x2ea2f70() {
   return (neuron0x2e998d0()*-0.620981);
}

double NNfunction_sb_sLuR::synapse0x2ea2fb0() {
   return (neuron0x2e99c10()*0.229004);
}

double NNfunction_sb_sLuR::synapse0x2ea2ff0() {
   return (neuron0x2e99f50()*-0.255904);
}

double NNfunction_sb_sLuR::synapse0x2ea3030() {
   return (neuron0x2e9a290()*-0.087474);
}

double NNfunction_sb_sLuR::synapse0x2ea3070() {
   return (neuron0x2e9a5d0()*0.177667);
}

double NNfunction_sb_sLuR::synapse0x2ea30b0() {
   return (neuron0x2e9a910()*0.162582);
}

double NNfunction_sb_sLuR::synapse0x2ea30f0() {
   return (neuron0x2e9ac50()*-0.435173);
}

double NNfunction_sb_sLuR::synapse0x2ea3130() {
   return (neuron0x2e9af90()*-0.325147);
}

double NNfunction_sb_sLuR::synapse0x2ea3170() {
   return (neuron0x2e9b2d0()*-0.527562);
}

double NNfunction_sb_sLuR::synapse0x2ea2c00() {
   return (neuron0x2e9b610()*0.266028);
}

double NNfunction_sb_sLuR::synapse0x2ea2c40() {
   return (neuron0x2e9bb70()*-0.460861);
}

double NNfunction_sb_sLuR::synapse0x2ea32c0() {
   return (neuron0x2e9bd90()*1.06687);
}

double NNfunction_sb_sLuR::synapse0x2ea3300() {
   return (neuron0x2e9c0d0()*0.0255396);
}

double NNfunction_sb_sLuR::synapse0x2ea3340() {
   return (neuron0x2e9c410()*0.0348686);
}

double NNfunction_sb_sLuR::synapse0x2ea3380() {
   return (neuron0x2e9c750()*-0.566777);
}

double NNfunction_sb_sLuR::synapse0x2ea33c0() {
   return (neuron0x2e9ca90()*0.357421);
}

double NNfunction_sb_sLuR::synapse0x2ea3400() {
   return (neuron0x2e9cdd0()*0.123434);
}

double NNfunction_sb_sLuR::synapse0x2ea3780() {
   return (neuron0x2e982a0()*0.39883);
}

double NNfunction_sb_sLuR::synapse0x2ea37c0() {
   return (neuron0x2e98550()*-0.139641);
}

double NNfunction_sb_sLuR::synapse0x2ea3800() {
   return (neuron0x2e98890()*-0.49867);
}

double NNfunction_sb_sLuR::synapse0x2ea3840() {
   return (neuron0x2e98bd0()*-0.353994);
}

double NNfunction_sb_sLuR::synapse0x2ea3880() {
   return (neuron0x2e98f10()*0.668688);
}

double NNfunction_sb_sLuR::synapse0x2ea38c0() {
   return (neuron0x2e99250()*-0.481623);
}

double NNfunction_sb_sLuR::synapse0x2ea3900() {
   return (neuron0x2e99590()*-0.300268);
}

double NNfunction_sb_sLuR::synapse0x2ea3940() {
   return (neuron0x2e998d0()*0.370907);
}

double NNfunction_sb_sLuR::synapse0x2ea3980() {
   return (neuron0x2e99c10()*0.395424);
}

double NNfunction_sb_sLuR::synapse0x2ea39c0() {
   return (neuron0x2e99f50()*-0.394284);
}

double NNfunction_sb_sLuR::synapse0x2ea3a00() {
   return (neuron0x2e9a290()*-0.665517);
}

double NNfunction_sb_sLuR::synapse0x2ea3a40() {
   return (neuron0x2e9a5d0()*-0.757429);
}

double NNfunction_sb_sLuR::synapse0x2ea3a80() {
   return (neuron0x2e9a910()*-0.588501);
}

double NNfunction_sb_sLuR::synapse0x2ea3ac0() {
   return (neuron0x2e9ac50()*-0.448278);
}

double NNfunction_sb_sLuR::synapse0x2ea3b00() {
   return (neuron0x2e9af90()*-0.920144);
}

double NNfunction_sb_sLuR::synapse0x2ea3b40() {
   return (neuron0x2e9b2d0()*0.578809);
}

double NNfunction_sb_sLuR::synapse0x2ea35d0() {
   return (neuron0x2e9b610()*0.634079);
}

double NNfunction_sb_sLuR::synapse0x2ea3610() {
   return (neuron0x2e9bb70()*-0.215909);
}

double NNfunction_sb_sLuR::synapse0x2ea03a0() {
   return (neuron0x2e9bd90()*-0.0615254);
}

double NNfunction_sb_sLuR::synapse0x2ea03e0() {
   return (neuron0x2e9c0d0()*-0.147339);
}

double NNfunction_sb_sLuR::synapse0x2ea0420() {
   return (neuron0x2e9c410()*-0.0892909);
}

double NNfunction_sb_sLuR::synapse0x2ea0460() {
   return (neuron0x2e9c750()*0.406751);
}

double NNfunction_sb_sLuR::synapse0x2ea04a0() {
   return (neuron0x2e9ca90()*-0.320506);
}

double NNfunction_sb_sLuR::synapse0x2ea04e0() {
   return (neuron0x2e9cdd0()*0.10436);
}

double NNfunction_sb_sLuR::synapse0x2ea0860() {
   return (neuron0x2e982a0()*0.291713);
}

double NNfunction_sb_sLuR::synapse0x2ea08a0() {
   return (neuron0x2e98550()*0.0609507);
}

double NNfunction_sb_sLuR::synapse0x2ea08e0() {
   return (neuron0x2e98890()*0.375591);
}

double NNfunction_sb_sLuR::synapse0x2ea0920() {
   return (neuron0x2e98bd0()*0.690128);
}

double NNfunction_sb_sLuR::synapse0x2ea0960() {
   return (neuron0x2e98f10()*0.220384);
}

double NNfunction_sb_sLuR::synapse0x2ea09a0() {
   return (neuron0x2e99250()*0.461695);
}

double NNfunction_sb_sLuR::synapse0x2ea09e0() {
   return (neuron0x2e99590()*-0.390538);
}

double NNfunction_sb_sLuR::synapse0x2ea0a20() {
   return (neuron0x2e998d0()*-0.0435265);
}

double NNfunction_sb_sLuR::synapse0x2ea0a60() {
   return (neuron0x2e99c10()*0.445487);
}

double NNfunction_sb_sLuR::synapse0x2ea0aa0() {
   return (neuron0x2e99f50()*-0.221752);
}

double NNfunction_sb_sLuR::synapse0x2ea0ae0() {
   return (neuron0x2e9a290()*0.46523);
}

double NNfunction_sb_sLuR::synapse0x2ea0b20() {
   return (neuron0x2e9a5d0()*0.380582);
}

double NNfunction_sb_sLuR::synapse0x2ea0b60() {
   return (neuron0x2e9a910()*0.191219);
}

double NNfunction_sb_sLuR::synapse0x2ea4ca0() {
   return (neuron0x2e9ac50()*-0.997343);
}

double NNfunction_sb_sLuR::synapse0x2ea4ce0() {
   return (neuron0x2e9af90()*-0.0344705);
}

double NNfunction_sb_sLuR::synapse0x2ea4d20() {
   return (neuron0x2e9b2d0()*0.280073);
}

double NNfunction_sb_sLuR::synapse0x2ea06b0() {
   return (neuron0x2e9b610()*-0.136001);
}

double NNfunction_sb_sLuR::synapse0x2ea06f0() {
   return (neuron0x2e9bb70()*0.155167);
}

double NNfunction_sb_sLuR::synapse0x2ea4e70() {
   return (neuron0x2e9bd90()*-0.122204);
}

double NNfunction_sb_sLuR::synapse0x2ea4eb0() {
   return (neuron0x2e9c0d0()*0.169527);
}

double NNfunction_sb_sLuR::synapse0x2ea4ef0() {
   return (neuron0x2e9c410()*0.229422);
}

double NNfunction_sb_sLuR::synapse0x2ea4f30() {
   return (neuron0x2e9c750()*0.0245221);
}

double NNfunction_sb_sLuR::synapse0x2ea4f70() {
   return (neuron0x2e9ca90()*0.178889);
}

double NNfunction_sb_sLuR::synapse0x2ea4fb0() {
   return (neuron0x2e9cdd0()*0.733602);
}

double NNfunction_sb_sLuR::synapse0x2ea5330() {
   return (neuron0x2e982a0()*0.0243242);
}

double NNfunction_sb_sLuR::synapse0x2ea5370() {
   return (neuron0x2e98550()*0.176938);
}

double NNfunction_sb_sLuR::synapse0x2ea53b0() {
   return (neuron0x2e98890()*-0.800419);
}

double NNfunction_sb_sLuR::synapse0x2ea53f0() {
   return (neuron0x2e98bd0()*0.422114);
}

double NNfunction_sb_sLuR::synapse0x2ea5430() {
   return (neuron0x2e98f10()*-0.324577);
}

double NNfunction_sb_sLuR::synapse0x2ea5470() {
   return (neuron0x2e99250()*0.0909684);
}

double NNfunction_sb_sLuR::synapse0x2ea54b0() {
   return (neuron0x2e99590()*0.36855);
}

double NNfunction_sb_sLuR::synapse0x2ea54f0() {
   return (neuron0x2e998d0()*0.36665);
}

double NNfunction_sb_sLuR::synapse0x2ea5530() {
   return (neuron0x2e99c10()*-0.14634);
}

double NNfunction_sb_sLuR::synapse0x2ea5570() {
   return (neuron0x2e99f50()*0.591578);
}

double NNfunction_sb_sLuR::synapse0x2ea55b0() {
   return (neuron0x2e9a290()*0.15354);
}

double NNfunction_sb_sLuR::synapse0x2ea55f0() {
   return (neuron0x2e9a5d0()*-0.116141);
}

double NNfunction_sb_sLuR::synapse0x2ea5630() {
   return (neuron0x2e9a910()*-0.388869);
}

double NNfunction_sb_sLuR::synapse0x2ea5670() {
   return (neuron0x2e9ac50()*0.274986);
}

double NNfunction_sb_sLuR::synapse0x2ea56b0() {
   return (neuron0x2e9af90()*1.44894);
}

double NNfunction_sb_sLuR::synapse0x2ea56f0() {
   return (neuron0x2e9b2d0()*-0.0832226);
}

double NNfunction_sb_sLuR::synapse0x2ea5180() {
   return (neuron0x2e9b610()*0.188826);
}

double NNfunction_sb_sLuR::synapse0x2ea51c0() {
   return (neuron0x2e9bb70()*0.14041);
}

double NNfunction_sb_sLuR::synapse0x2ea5840() {
   return (neuron0x2e9bd90()*0.052862);
}

double NNfunction_sb_sLuR::synapse0x2ea5880() {
   return (neuron0x2e9c0d0()*0.15708);
}

double NNfunction_sb_sLuR::synapse0x2ea58c0() {
   return (neuron0x2e9c410()*0.128974);
}

double NNfunction_sb_sLuR::synapse0x2ea5900() {
   return (neuron0x2e9c750()*-0.0965755);
}

double NNfunction_sb_sLuR::synapse0x2ea5940() {
   return (neuron0x2e9ca90()*0.17357);
}

double NNfunction_sb_sLuR::synapse0x2ea5980() {
   return (neuron0x2e9cdd0()*-0.358027);
}

double NNfunction_sb_sLuR::synapse0x2ea5d00() {
   return (neuron0x2e982a0()*-0.0505943);
}

double NNfunction_sb_sLuR::synapse0x2ea5d40() {
   return (neuron0x2e98550()*0.593353);
}

double NNfunction_sb_sLuR::synapse0x2ea5d80() {
   return (neuron0x2e98890()*-0.460261);
}

double NNfunction_sb_sLuR::synapse0x2ea5dc0() {
   return (neuron0x2e98bd0()*0.852429);
}

double NNfunction_sb_sLuR::synapse0x2ea5e00() {
   return (neuron0x2e98f10()*0.0027764);
}

double NNfunction_sb_sLuR::synapse0x2ea5e40() {
   return (neuron0x2e99250()*0.014193);
}

double NNfunction_sb_sLuR::synapse0x2ea5e80() {
   return (neuron0x2e99590()*0.0245136);
}

double NNfunction_sb_sLuR::synapse0x2ea5ec0() {
   return (neuron0x2e998d0()*-0.0158839);
}

double NNfunction_sb_sLuR::synapse0x2ea5f00() {
   return (neuron0x2e99c10()*0.232057);
}

double NNfunction_sb_sLuR::synapse0x2ea5f40() {
   return (neuron0x2e99f50()*0.540506);
}

double NNfunction_sb_sLuR::synapse0x2ea5f80() {
   return (neuron0x2e9a290()*0.115319);
}

double NNfunction_sb_sLuR::synapse0x2ea5fc0() {
   return (neuron0x2e9a5d0()*-0.138721);
}

double NNfunction_sb_sLuR::synapse0x2ea6000() {
   return (neuron0x2e9a910()*-0.114382);
}

double NNfunction_sb_sLuR::synapse0x2ea6040() {
   return (neuron0x2e9ac50()*0.0529144);
}

double NNfunction_sb_sLuR::synapse0x2ea6080() {
   return (neuron0x2e9af90()*-0.613324);
}

double NNfunction_sb_sLuR::synapse0x2ea60c0() {
   return (neuron0x2e9b2d0()*-0.122171);
}

double NNfunction_sb_sLuR::synapse0x2ea5b50() {
   return (neuron0x2e9b610()*-0.00944586);
}

double NNfunction_sb_sLuR::synapse0x2ea5b90() {
   return (neuron0x2e9bb70()*0.496144);
}

double NNfunction_sb_sLuR::synapse0x2ea6210() {
   return (neuron0x2e9bd90()*-0.224482);
}

double NNfunction_sb_sLuR::synapse0x2ea6250() {
   return (neuron0x2e9c0d0()*0.0911525);
}

double NNfunction_sb_sLuR::synapse0x2ea6290() {
   return (neuron0x2e9c410()*0.235518);
}

double NNfunction_sb_sLuR::synapse0x2ea62d0() {
   return (neuron0x2e9c750()*0.122855);
}

double NNfunction_sb_sLuR::synapse0x2ea6310() {
   return (neuron0x2e9ca90()*-0.0948781);
}

double NNfunction_sb_sLuR::synapse0x2ea6350() {
   return (neuron0x2e9cdd0()*-0.134159);
}

double NNfunction_sb_sLuR::synapse0x2ea66d0() {
   return (neuron0x2e982a0()*-0.144017);
}

double NNfunction_sb_sLuR::synapse0x2ea6710() {
   return (neuron0x2e98550()*0.173741);
}

double NNfunction_sb_sLuR::synapse0x2ea6750() {
   return (neuron0x2e98890()*-0.0516123);
}

double NNfunction_sb_sLuR::synapse0x2ea6790() {
   return (neuron0x2e98bd0()*-0.0609635);
}

double NNfunction_sb_sLuR::synapse0x2ea67d0() {
   return (neuron0x2e98f10()*0.147491);
}

double NNfunction_sb_sLuR::synapse0x2ea6810() {
   return (neuron0x2e99250()*0.171072);
}

double NNfunction_sb_sLuR::synapse0x2ea6850() {
   return (neuron0x2e99590()*0.0544789);
}

double NNfunction_sb_sLuR::synapse0x2ea6890() {
   return (neuron0x2e998d0()*0.022063);
}

double NNfunction_sb_sLuR::synapse0x2ea68d0() {
   return (neuron0x2e99c10()*-0.0453678);
}

double NNfunction_sb_sLuR::synapse0x2ea6910() {
   return (neuron0x2e99f50()*0.0878362);
}

double NNfunction_sb_sLuR::synapse0x2ea6950() {
   return (neuron0x2e9a290()*0.212322);
}

double NNfunction_sb_sLuR::synapse0x2ea6990() {
   return (neuron0x2e9a5d0()*0.012687);
}

double NNfunction_sb_sLuR::synapse0x2ea69d0() {
   return (neuron0x2e9a910()*-0.739798);
}

double NNfunction_sb_sLuR::synapse0x2ea6a10() {
   return (neuron0x2e9ac50()*0.027229);
}

double NNfunction_sb_sLuR::synapse0x2ea6a50() {
   return (neuron0x2e9af90()*-0.844471);
}

double NNfunction_sb_sLuR::synapse0x2ea6a90() {
   return (neuron0x2e9b2d0()*-0.0911092);
}

double NNfunction_sb_sLuR::synapse0x2ea6520() {
   return (neuron0x2e9b610()*0.15413);
}

double NNfunction_sb_sLuR::synapse0x2ea6560() {
   return (neuron0x2e9bb70()*0.168435);
}

double NNfunction_sb_sLuR::synapse0x2ea6be0() {
   return (neuron0x2e9bd90()*0.0552419);
}

double NNfunction_sb_sLuR::synapse0x2ea6c20() {
   return (neuron0x2e9c0d0()*-0.138511);
}

double NNfunction_sb_sLuR::synapse0x2ea6c60() {
   return (neuron0x2e9c410()*-0.100799);
}

double NNfunction_sb_sLuR::synapse0x2ea6ca0() {
   return (neuron0x2e9c750()*0.00593676);
}

double NNfunction_sb_sLuR::synapse0x2ea6ce0() {
   return (neuron0x2e9ca90()*0.107214);
}

double NNfunction_sb_sLuR::synapse0x2ea6d20() {
   return (neuron0x2e9cdd0()*0.109837);
}

double NNfunction_sb_sLuR::synapse0x2ea70a0() {
   return (neuron0x2e982a0()*-0.0366497);
}

double NNfunction_sb_sLuR::synapse0x2e98430() {
   return (neuron0x2e98550()*-0.0374578);
}

double NNfunction_sb_sLuR::synapse0x2e98470() {
   return (neuron0x2e98890()*0.034585);
}

double NNfunction_sb_sLuR::synapse0x2e98770() {
   return (neuron0x2e98bd0()*-0.0358521);
}

double NNfunction_sb_sLuR::synapse0x2e987b0() {
   return (neuron0x2e98f10()*0.0257623);
}

double NNfunction_sb_sLuR::synapse0x2e98ab0() {
   return (neuron0x2e99250()*-0.0153422);
}

double NNfunction_sb_sLuR::synapse0x2e98af0() {
   return (neuron0x2e99590()*0.0121511);
}

double NNfunction_sb_sLuR::synapse0x2e98df0() {
   return (neuron0x2e998d0()*0.0154576);
}

double NNfunction_sb_sLuR::synapse0x2e98e30() {
   return (neuron0x2e99c10()*0.00393642);
}

double NNfunction_sb_sLuR::synapse0x2e99130() {
   return (neuron0x2e99f50()*0.0453028);
}

double NNfunction_sb_sLuR::synapse0x2e99170() {
   return (neuron0x2e9a290()*0.0215927);
}

double NNfunction_sb_sLuR::synapse0x2e99470() {
   return (neuron0x2e9a5d0()*0.0168009);
}

double NNfunction_sb_sLuR::synapse0x2e994b0() {
   return (neuron0x2e9a910()*-2.13214);
}

double NNfunction_sb_sLuR::synapse0x2e997b0() {
   return (neuron0x2e9ac50()*-0.0185435);
}

double NNfunction_sb_sLuR::synapse0x2e997f0() {
   return (neuron0x2e9af90()*0.00410211);
}

double NNfunction_sb_sLuR::synapse0x2e99af0() {
   return (neuron0x2e9b2d0()*0.00951798);
}

double NNfunction_sb_sLuR::synapse0x2e99b30() {
   return (neuron0x2e9b610()*0.0557685);
}

double NNfunction_sb_sLuR::synapse0x2e99e30() {
   return (neuron0x2e9bb70()*0.0151615);
}

double NNfunction_sb_sLuR::synapse0x2e99e70() {
   return (neuron0x2e9bd90()*-0.00313098);
}

double NNfunction_sb_sLuR::synapse0x2e9a170() {
   return (neuron0x2e9c0d0()*0.0378425);
}

double NNfunction_sb_sLuR::synapse0x2e9a1b0() {
   return (neuron0x2e9c410()*0.04353);
}

double NNfunction_sb_sLuR::synapse0x2e9a4b0() {
   return (neuron0x2e9c750()*-0.0103933);
}

double NNfunction_sb_sLuR::synapse0x2e9a4f0() {
   return (neuron0x2e9ca90()*-0.0758596);
}

double NNfunction_sb_sLuR::synapse0x2e9a7f0() {
   return (neuron0x2e9cdd0()*0.0201395);
}

double NNfunction_sb_sLuR::synapse0x2e9a830() {
   return (neuron0x2e982a0()*-0.112425);
}

double NNfunction_sb_sLuR::synapse0x2e9b4f0() {
   return (neuron0x2e98550()*-0.345869);
}

double NNfunction_sb_sLuR::synapse0x2e9b530() {
   return (neuron0x2e98890()*0.038686);
}

double NNfunction_sb_sLuR::synapse0x2ea6ef0() {
   return (neuron0x2e98bd0()*-1.17829);
}

double NNfunction_sb_sLuR::synapse0x2ea6f30() {
   return (neuron0x2e98f10()*-0.00786771);
}

double NNfunction_sb_sLuR::synapse0x2e9b830() {
   return (neuron0x2e99250()*-0.158187);
}

double NNfunction_sb_sLuR::synapse0x2e9b870() {
   return (neuron0x2e99590()*0.0188749);
}

double NNfunction_sb_sLuR::synapse0x2c53270() {
   return (neuron0x2e998d0()*0.115202);
}

double NNfunction_sb_sLuR::synapse0x2c532b0() {
   return (neuron0x2e99c10()*-0.0145787);
}

double NNfunction_sb_sLuR::synapse0x2e9bfb0() {
   return (neuron0x2e99f50()*-0.279789);
}

double NNfunction_sb_sLuR::synapse0x2e9bff0() {
   return (neuron0x2e9a290()*-0.27219);
}

double NNfunction_sb_sLuR::synapse0x2e9c2f0() {
   return (neuron0x2e9a5d0()*-0.0157432);
}

double NNfunction_sb_sLuR::synapse0x2e9c330() {
   return (neuron0x2e9a910()*0.212093);
}

double NNfunction_sb_sLuR::synapse0x2e9c630() {
   return (neuron0x2e9ac50()*0.0636417);
}

double NNfunction_sb_sLuR::synapse0x2e9c670() {
   return (neuron0x2e9af90()*1.12548);
}

double NNfunction_sb_sLuR::synapse0x2e9c970() {
   return (neuron0x2e9b2d0()*0.146982);
}

double NNfunction_sb_sLuR::synapse0x2e9c9b0() {
   return (neuron0x2e9b610()*0.0301533);
}

double NNfunction_sb_sLuR::synapse0x2e9ccb0() {
   return (neuron0x2e9bb70()*0.403935);
}

double NNfunction_sb_sLuR::synapse0x2e9ccf0() {
   return (neuron0x2e9bd90()*-0.0671056);
}

double NNfunction_sb_sLuR::synapse0x2e9cff0() {
   return (neuron0x2e9c0d0()*-0.121648);
}

double NNfunction_sb_sLuR::synapse0x2e9d030() {
   return (neuron0x2e9c410()*-0.0814055);
}

double NNfunction_sb_sLuR::synapse0x2e9ab30() {
   return (neuron0x2e9c750()*-0.0189495);
}

double NNfunction_sb_sLuR::synapse0x2e9ab70() {
   return (neuron0x2e9ca90()*0.220743);
}

double NNfunction_sb_sLuR::synapse0x2ea8e10() {
   return (neuron0x2e9cdd0()*-0.200329);
}

double NNfunction_sb_sLuR::synapse0x2ea9190() {
   return (neuron0x2e982a0()*0.410043);
}

double NNfunction_sb_sLuR::synapse0x2ea91d0() {
   return (neuron0x2e98550()*0.310622);
}

double NNfunction_sb_sLuR::synapse0x2ea9210() {
   return (neuron0x2e98890()*0.381187);
}

double NNfunction_sb_sLuR::synapse0x2ea9250() {
   return (neuron0x2e98bd0()*-0.643153);
}

double NNfunction_sb_sLuR::synapse0x2ea9290() {
   return (neuron0x2e98f10()*-0.096646);
}

double NNfunction_sb_sLuR::synapse0x2ea92d0() {
   return (neuron0x2e99250()*0.0281196);
}

double NNfunction_sb_sLuR::synapse0x2ea9310() {
   return (neuron0x2e99590()*-0.274641);
}

double NNfunction_sb_sLuR::synapse0x2ea9350() {
   return (neuron0x2e998d0()*0.133901);
}

double NNfunction_sb_sLuR::synapse0x2ea9390() {
   return (neuron0x2e99c10()*0.128496);
}

double NNfunction_sb_sLuR::synapse0x2ea93d0() {
   return (neuron0x2e99f50()*0.0944811);
}

double NNfunction_sb_sLuR::synapse0x2ea9410() {
   return (neuron0x2e9a290()*-0.20876);
}

double NNfunction_sb_sLuR::synapse0x2ea9450() {
   return (neuron0x2e9a5d0()*0.0548612);
}

double NNfunction_sb_sLuR::synapse0x2ea9490() {
   return (neuron0x2e9a910()*0.499395);
}

double NNfunction_sb_sLuR::synapse0x2ea94d0() {
   return (neuron0x2e9ac50()*0.39859);
}

double NNfunction_sb_sLuR::synapse0x2ea9510() {
   return (neuron0x2e9af90()*0.130725);
}

double NNfunction_sb_sLuR::synapse0x2ea9550() {
   return (neuron0x2e9b2d0()*0.0189194);
}

double NNfunction_sb_sLuR::synapse0x2ea8fe0() {
   return (neuron0x2e9b610()*0.30756);
}

double NNfunction_sb_sLuR::synapse0x2ea9020() {
   return (neuron0x2e9bb70()*-0.140855);
}

double NNfunction_sb_sLuR::synapse0x2ea96a0() {
   return (neuron0x2e9bd90()*-0.223425);
}

double NNfunction_sb_sLuR::synapse0x2ea96e0() {
   return (neuron0x2e9c0d0()*-0.0852276);
}

double NNfunction_sb_sLuR::synapse0x2ea9720() {
   return (neuron0x2e9c410()*-0.0171112);
}

double NNfunction_sb_sLuR::synapse0x2ea9760() {
   return (neuron0x2e9c750()*0.144278);
}

double NNfunction_sb_sLuR::synapse0x2ea97a0() {
   return (neuron0x2e9ca90()*0.279347);
}

double NNfunction_sb_sLuR::synapse0x2ea97e0() {
   return (neuron0x2e9cdd0()*0.13477);
}

double NNfunction_sb_sLuR::synapse0x2ea9b60() {
   return (neuron0x2e982a0()*-0.211064);
}

double NNfunction_sb_sLuR::synapse0x2ea9ba0() {
   return (neuron0x2e98550()*-0.122689);
}

double NNfunction_sb_sLuR::synapse0x2ea9be0() {
   return (neuron0x2e98890()*-0.0930559);
}

double NNfunction_sb_sLuR::synapse0x2ea9c20() {
   return (neuron0x2e98bd0()*0.902144);
}

double NNfunction_sb_sLuR::synapse0x2ea9c60() {
   return (neuron0x2e98f10()*-0.0778961);
}

double NNfunction_sb_sLuR::synapse0x2ea9ca0() {
   return (neuron0x2e99250()*0.160918);
}

double NNfunction_sb_sLuR::synapse0x2ea9ce0() {
   return (neuron0x2e99590()*0.650616);
}

double NNfunction_sb_sLuR::synapse0x2ea9d20() {
   return (neuron0x2e998d0()*-0.129439);
}

double NNfunction_sb_sLuR::synapse0x2ea9d60() {
   return (neuron0x2e99c10()*-0.0862332);
}

double NNfunction_sb_sLuR::synapse0x2ea9da0() {
   return (neuron0x2e99f50()*0.208716);
}

double NNfunction_sb_sLuR::synapse0x2ea9de0() {
   return (neuron0x2e9a290()*0.285001);
}

double NNfunction_sb_sLuR::synapse0x2ea9e20() {
   return (neuron0x2e9a5d0()*-0.425989);
}

double NNfunction_sb_sLuR::synapse0x2ea9e60() {
   return (neuron0x2e9a910()*-0.334245);
}

double NNfunction_sb_sLuR::synapse0x2ea9ea0() {
   return (neuron0x2e9ac50()*-0.324024);
}

double NNfunction_sb_sLuR::synapse0x2ea9ee0() {
   return (neuron0x2e9af90()*0.612349);
}

double NNfunction_sb_sLuR::synapse0x2ea9f20() {
   return (neuron0x2e9b2d0()*0.315316);
}

double NNfunction_sb_sLuR::synapse0x2ea99b0() {
   return (neuron0x2e9b610()*0.020667);
}

double NNfunction_sb_sLuR::synapse0x2ea99f0() {
   return (neuron0x2e9bb70()*-0.51318);
}

double NNfunction_sb_sLuR::synapse0x2eaa070() {
   return (neuron0x2e9bd90()*0.0808783);
}

double NNfunction_sb_sLuR::synapse0x2eaa0b0() {
   return (neuron0x2e9c0d0()*-0.632015);
}

double NNfunction_sb_sLuR::synapse0x2eaa0f0() {
   return (neuron0x2e9c410()*0.280044);
}

double NNfunction_sb_sLuR::synapse0x2eaa130() {
   return (neuron0x2e9c750()*0.177845);
}

double NNfunction_sb_sLuR::synapse0x2eaa170() {
   return (neuron0x2e9ca90()*-0.0696558);
}

double NNfunction_sb_sLuR::synapse0x2eaa1b0() {
   return (neuron0x2e9cdd0()*0.0202997);
}

double NNfunction_sb_sLuR::synapse0x2eaa530() {
   return (neuron0x2e982a0()*-0.203167);
}

double NNfunction_sb_sLuR::synapse0x2eaa570() {
   return (neuron0x2e98550()*0.439032);
}

double NNfunction_sb_sLuR::synapse0x2eaa5b0() {
   return (neuron0x2e98890()*-0.110872);
}

double NNfunction_sb_sLuR::synapse0x2eaa5f0() {
   return (neuron0x2e98bd0()*0.752007);
}

double NNfunction_sb_sLuR::synapse0x2eaa630() {
   return (neuron0x2e98f10()*0.527168);
}

double NNfunction_sb_sLuR::synapse0x2eaa670() {
   return (neuron0x2e99250()*-0.0850476);
}

double NNfunction_sb_sLuR::synapse0x2eaa6b0() {
   return (neuron0x2e99590()*0.162473);
}

double NNfunction_sb_sLuR::synapse0x2eaa6f0() {
   return (neuron0x2e998d0()*0.457201);
}

double NNfunction_sb_sLuR::synapse0x2eaa730() {
   return (neuron0x2e99c10()*-0.031904);
}

double NNfunction_sb_sLuR::synapse0x2eaa770() {
   return (neuron0x2e99f50()*0.123463);
}

double NNfunction_sb_sLuR::synapse0x2eaa7b0() {
   return (neuron0x2e9a290()*-0.70149);
}

double NNfunction_sb_sLuR::synapse0x2eaa7f0() {
   return (neuron0x2e9a5d0()*-0.293462);
}

double NNfunction_sb_sLuR::synapse0x2eaa830() {
   return (neuron0x2e9a910()*-1.19567);
}

double NNfunction_sb_sLuR::synapse0x2eaa870() {
   return (neuron0x2e9ac50()*0.580928);
}

double NNfunction_sb_sLuR::synapse0x2eaa8b0() {
   return (neuron0x2e9af90()*0.305325);
}

double NNfunction_sb_sLuR::synapse0x2eaa8f0() {
   return (neuron0x2e9b2d0()*0.0974213);
}

double NNfunction_sb_sLuR::synapse0x2eaa380() {
   return (neuron0x2e9b610()*0.136108);
}

double NNfunction_sb_sLuR::synapse0x2eaa3c0() {
   return (neuron0x2e9bb70()*0.844191);
}

double NNfunction_sb_sLuR::synapse0x2eaaa40() {
   return (neuron0x2e9bd90()*0.635313);
}

double NNfunction_sb_sLuR::synapse0x2eaaa80() {
   return (neuron0x2e9c0d0()*0.0531392);
}

double NNfunction_sb_sLuR::synapse0x2eaaac0() {
   return (neuron0x2e9c410()*-0.100205);
}

double NNfunction_sb_sLuR::synapse0x2eaab00() {
   return (neuron0x2e9c750()*0.0019043);
}

double NNfunction_sb_sLuR::synapse0x2eaab40() {
   return (neuron0x2e9ca90()*0.247078);
}

double NNfunction_sb_sLuR::synapse0x2eaab80() {
   return (neuron0x2e9cdd0()*-0.038338);
}

double NNfunction_sb_sLuR::synapse0x2eaaf00() {
   return (neuron0x2e982a0()*0.0380667);
}

double NNfunction_sb_sLuR::synapse0x2eaaf40() {
   return (neuron0x2e98550()*0.364265);
}

double NNfunction_sb_sLuR::synapse0x2eaaf80() {
   return (neuron0x2e98890()*0.0332356);
}

double NNfunction_sb_sLuR::synapse0x2eaafc0() {
   return (neuron0x2e98bd0()*-0.198701);
}

double NNfunction_sb_sLuR::synapse0x2eab000() {
   return (neuron0x2e98f10()*-0.0758906);
}

double NNfunction_sb_sLuR::synapse0x2eab040() {
   return (neuron0x2e99250()*0.527075);
}

double NNfunction_sb_sLuR::synapse0x2eab080() {
   return (neuron0x2e99590()*-0.376986);
}

double NNfunction_sb_sLuR::synapse0x2eab0c0() {
   return (neuron0x2e998d0()*0.0609709);
}

double NNfunction_sb_sLuR::synapse0x2eab100() {
   return (neuron0x2e99c10()*-0.204629);
}

double NNfunction_sb_sLuR::synapse0x2eab140() {
   return (neuron0x2e99f50()*-0.101056);
}

double NNfunction_sb_sLuR::synapse0x2eab180() {
   return (neuron0x2e9a290()*0.433459);
}

double NNfunction_sb_sLuR::synapse0x2eab1c0() {
   return (neuron0x2e9a5d0()*0.00321096);
}

double NNfunction_sb_sLuR::synapse0x2eab200() {
   return (neuron0x2e9a910()*-0.160302);
}

double NNfunction_sb_sLuR::synapse0x2eab240() {
   return (neuron0x2e9ac50()*0.735509);
}

double NNfunction_sb_sLuR::synapse0x2eab280() {
   return (neuron0x2e9af90()*0.180318);
}

double NNfunction_sb_sLuR::synapse0x2eab2c0() {
   return (neuron0x2e9b2d0()*0.0890693);
}

double NNfunction_sb_sLuR::synapse0x2eaad50() {
   return (neuron0x2e9b610()*0.243042);
}

double NNfunction_sb_sLuR::synapse0x2eaad90() {
   return (neuron0x2e9bb70()*-0.69484);
}

double NNfunction_sb_sLuR::synapse0x2eab410() {
   return (neuron0x2e9bd90()*-0.162347);
}

double NNfunction_sb_sLuR::synapse0x2eab450() {
   return (neuron0x2e9c0d0()*-0.0906629);
}

double NNfunction_sb_sLuR::synapse0x2eab490() {
   return (neuron0x2e9c410()*-0.130374);
}

double NNfunction_sb_sLuR::synapse0x2eab4d0() {
   return (neuron0x2e9c750()*-0.384048);
}

double NNfunction_sb_sLuR::synapse0x2eab510() {
   return (neuron0x2e9ca90()*-0.248653);
}

double NNfunction_sb_sLuR::synapse0x2eab550() {
   return (neuron0x2e9cdd0()*0.148217);
}

double NNfunction_sb_sLuR::synapse0x2eab8d0() {
   return (neuron0x2e982a0()*-0.0111986);
}

double NNfunction_sb_sLuR::synapse0x2eab910() {
   return (neuron0x2e98550()*-0.00449279);
}

double NNfunction_sb_sLuR::synapse0x2eab950() {
   return (neuron0x2e98890()*0.0317004);
}

double NNfunction_sb_sLuR::synapse0x2eab990() {
   return (neuron0x2e98bd0()*0.0704273);
}

double NNfunction_sb_sLuR::synapse0x2eab9d0() {
   return (neuron0x2e98f10()*-0.00142718);
}

double NNfunction_sb_sLuR::synapse0x2eaba10() {
   return (neuron0x2e99250()*-0.014058);
}

double NNfunction_sb_sLuR::synapse0x2eaba50() {
   return (neuron0x2e99590()*0.00139623);
}

double NNfunction_sb_sLuR::synapse0x2eaba90() {
   return (neuron0x2e998d0()*0.0086479);
}

double NNfunction_sb_sLuR::synapse0x2eabad0() {
   return (neuron0x2e99c10()*0.0111888);
}

double NNfunction_sb_sLuR::synapse0x2ea3c90() {
   return (neuron0x2e99f50()*0.0350442);
}

double NNfunction_sb_sLuR::synapse0x2ea3cd0() {
   return (neuron0x2e9a290()*0.0274704);
}

double NNfunction_sb_sLuR::synapse0x2ea3d10() {
   return (neuron0x2e9a5d0()*0.0181335);
}

double NNfunction_sb_sLuR::synapse0x2ea3d50() {
   return (neuron0x2e9a910()*-0.678996);
}

double NNfunction_sb_sLuR::synapse0x2ea3d90() {
   return (neuron0x2e9ac50()*-0.0275808);
}

double NNfunction_sb_sLuR::synapse0x2ea3dd0() {
   return (neuron0x2e9af90()*-0.735901);
}

double NNfunction_sb_sLuR::synapse0x2ea3e10() {
   return (neuron0x2e9b2d0()*-0.0487068);
}

double NNfunction_sb_sLuR::synapse0x2eab720() {
   return (neuron0x2e9b610()*-0.0122846);
}

double NNfunction_sb_sLuR::synapse0x2eab760() {
   return (neuron0x2e9bb70()*0.0346523);
}

double NNfunction_sb_sLuR::synapse0x2ea3f60() {
   return (neuron0x2e9bd90()*0.0119172);
}

double NNfunction_sb_sLuR::synapse0x2ea3fa0() {
   return (neuron0x2e9c0d0()*-0.00292658);
}

double NNfunction_sb_sLuR::synapse0x2ea3fe0() {
   return (neuron0x2e9c410()*0.00122277);
}

double NNfunction_sb_sLuR::synapse0x2ea4020() {
   return (neuron0x2e9c750()*-0.00275954);
}

double NNfunction_sb_sLuR::synapse0x2ea4060() {
   return (neuron0x2e9ca90()*0.013467);
}

double NNfunction_sb_sLuR::synapse0x2ea40a0() {
   return (neuron0x2e9cdd0()*-0.0155063);
}

double NNfunction_sb_sLuR::synapse0x2ea4420() {
   return (neuron0x2e982a0()*0.0864205);
}

double NNfunction_sb_sLuR::synapse0x2ea4460() {
   return (neuron0x2e98550()*-0.03042);
}

double NNfunction_sb_sLuR::synapse0x2ea44a0() {
   return (neuron0x2e98890()*0.0163163);
}

double NNfunction_sb_sLuR::synapse0x2ea44e0() {
   return (neuron0x2e98bd0()*0.0400554);
}

double NNfunction_sb_sLuR::synapse0x2ea4520() {
   return (neuron0x2e98f10()*-0.112959);
}

double NNfunction_sb_sLuR::synapse0x2ea4560() {
   return (neuron0x2e99250()*-0.126306);
}

double NNfunction_sb_sLuR::synapse0x2ea45a0() {
   return (neuron0x2e99590()*0.0185948);
}

double NNfunction_sb_sLuR::synapse0x2ea45e0() {
   return (neuron0x2e998d0()*-0.0543836);
}

double NNfunction_sb_sLuR::synapse0x2ea4620() {
   return (neuron0x2e99c10()*0.040052);
}

double NNfunction_sb_sLuR::synapse0x2ea4660() {
   return (neuron0x2e99f50()*0.0249566);
}

double NNfunction_sb_sLuR::synapse0x2ea46a0() {
   return (neuron0x2e9a290()*-0.125403);
}

double NNfunction_sb_sLuR::synapse0x2ea46e0() {
   return (neuron0x2e9a5d0()*0.0731295);
}

double NNfunction_sb_sLuR::synapse0x2ea4720() {
   return (neuron0x2e9a910()*-0.44411);
}

double NNfunction_sb_sLuR::synapse0x2ea4760() {
   return (neuron0x2e9ac50()*-0.0693191);
}

double NNfunction_sb_sLuR::synapse0x2ea47a0() {
   return (neuron0x2e9af90()*-1.49342);
}

double NNfunction_sb_sLuR::synapse0x2ea47e0() {
   return (neuron0x2e9b2d0()*-0.030105);
}

double NNfunction_sb_sLuR::synapse0x2ea4270() {
   return (neuron0x2e9b610()*-0.0630504);
}

double NNfunction_sb_sLuR::synapse0x2ea42b0() {
   return (neuron0x2e9bb70()*-0.0941137);
}

double NNfunction_sb_sLuR::synapse0x2ea4930() {
   return (neuron0x2e9bd90()*0.0369741);
}

double NNfunction_sb_sLuR::synapse0x2ea4970() {
   return (neuron0x2e9c0d0()*0.163899);
}

double NNfunction_sb_sLuR::synapse0x2ea49b0() {
   return (neuron0x2e9c410()*0.196901);
}

double NNfunction_sb_sLuR::synapse0x2ea49f0() {
   return (neuron0x2e9c750()*0.100153);
}

double NNfunction_sb_sLuR::synapse0x2ea4a30() {
   return (neuron0x2e9ca90()*-0.121842);
}

double NNfunction_sb_sLuR::synapse0x2ea4a70() {
   return (neuron0x2e9cdd0()*0.250583);
}

double NNfunction_sb_sLuR::synapse0x2ea4c40() {
   return (neuron0x2e982a0()*0.00805614);
}

double NNfunction_sb_sLuR::synapse0x2eadcd0() {
   return (neuron0x2e98550()*0.00542844);
}

double NNfunction_sb_sLuR::synapse0x2eadd10() {
   return (neuron0x2e98890()*0.00293);
}

double NNfunction_sb_sLuR::synapse0x2eadd50() {
   return (neuron0x2e98bd0()*-1.57986);
}

double NNfunction_sb_sLuR::synapse0x2eadd90() {
   return (neuron0x2e98f10()*-0.00977244);
}

double NNfunction_sb_sLuR::synapse0x2eaddd0() {
   return (neuron0x2e99250()*0.0017733);
}

double NNfunction_sb_sLuR::synapse0x2eade10() {
   return (neuron0x2e99590()*0.000499344);
}

double NNfunction_sb_sLuR::synapse0x2eade50() {
   return (neuron0x2e998d0()*0.00432603);
}

double NNfunction_sb_sLuR::synapse0x2eade90() {
   return (neuron0x2e99c10()*0.00711258);
}

double NNfunction_sb_sLuR::synapse0x2eaded0() {
   return (neuron0x2e99f50()*0.00267568);
}

double NNfunction_sb_sLuR::synapse0x2eadf10() {
   return (neuron0x2e9a290()*0.00507599);
}

double NNfunction_sb_sLuR::synapse0x2eadf50() {
   return (neuron0x2e9a5d0()*0.0213003);
}

double NNfunction_sb_sLuR::synapse0x2eadf90() {
   return (neuron0x2e9a910()*-0.011554);
}

double NNfunction_sb_sLuR::synapse0x2eadfd0() {
   return (neuron0x2e9ac50()*-0.00778877);
}

double NNfunction_sb_sLuR::synapse0x2eae010() {
   return (neuron0x2e9af90()*-0.0222424);
}

double NNfunction_sb_sLuR::synapse0x2eae050() {
   return (neuron0x2e9b2d0()*0.00916709);
}

double NNfunction_sb_sLuR::synapse0x2eadb20() {
   return (neuron0x2e9b610()*-0.00751599);
}

double NNfunction_sb_sLuR::synapse0x2eadb60() {
   return (neuron0x2e9bb70()*0.0109506);
}

double NNfunction_sb_sLuR::synapse0x2eae1a0() {
   return (neuron0x2e9bd90()*0.00996029);
}

double NNfunction_sb_sLuR::synapse0x2eae1e0() {
   return (neuron0x2e9c0d0()*0.00676151);
}

double NNfunction_sb_sLuR::synapse0x2eae220() {
   return (neuron0x2e9c410()*0.00513637);
}

double NNfunction_sb_sLuR::synapse0x2eae260() {
   return (neuron0x2e9c750()*0.0069275);
}

double NNfunction_sb_sLuR::synapse0x2eae2a0() {
   return (neuron0x2e9ca90()*-0.00267012);
}

double NNfunction_sb_sLuR::synapse0x2eae2e0() {
   return (neuron0x2e9cdd0()*-0.00347639);
}

double NNfunction_sb_sLuR::synapse0x2eae660() {
   return (neuron0x2e982a0()*-0.0331296);
}

double NNfunction_sb_sLuR::synapse0x2eae6a0() {
   return (neuron0x2e98550()*-0.0686855);
}

double NNfunction_sb_sLuR::synapse0x2eae6e0() {
   return (neuron0x2e98890()*-0.604934);
}

double NNfunction_sb_sLuR::synapse0x2eae720() {
   return (neuron0x2e98bd0()*0.35585);
}

double NNfunction_sb_sLuR::synapse0x2eae760() {
   return (neuron0x2e98f10()*-0.0546884);
}

double NNfunction_sb_sLuR::synapse0x2eae7a0() {
   return (neuron0x2e99250()*-0.196183);
}

double NNfunction_sb_sLuR::synapse0x2eae7e0() {
   return (neuron0x2e99590()*-0.0844779);
}

double NNfunction_sb_sLuR::synapse0x2eae820() {
   return (neuron0x2e998d0()*-0.166535);
}

double NNfunction_sb_sLuR::synapse0x2eae860() {
   return (neuron0x2e99c10()*-0.144131);
}

double NNfunction_sb_sLuR::synapse0x2eae8a0() {
   return (neuron0x2e99f50()*0.586686);
}

double NNfunction_sb_sLuR::synapse0x2eae8e0() {
   return (neuron0x2e9a290()*0.1895);
}

double NNfunction_sb_sLuR::synapse0x2eae920() {
   return (neuron0x2e9a5d0()*-0.265474);
}

double NNfunction_sb_sLuR::synapse0x2eae960() {
   return (neuron0x2e9a910()*-0.17428);
}

double NNfunction_sb_sLuR::synapse0x2eae9a0() {
   return (neuron0x2e9ac50()*1.08113);
}

double NNfunction_sb_sLuR::synapse0x2eae9e0() {
   return (neuron0x2e9af90()*0.0189089);
}

double NNfunction_sb_sLuR::synapse0x2eaea20() {
   return (neuron0x2e9b2d0()*-0.0394709);
}

double NNfunction_sb_sLuR::synapse0x2eae4b0() {
   return (neuron0x2e9b610()*-0.084495);
}

double NNfunction_sb_sLuR::synapse0x2eae4f0() {
   return (neuron0x2e9bb70()*-0.539986);
}

double NNfunction_sb_sLuR::synapse0x2eaeb70() {
   return (neuron0x2e9bd90()*-0.385984);
}

double NNfunction_sb_sLuR::synapse0x2eaebb0() {
   return (neuron0x2e9c0d0()*0.222193);
}

double NNfunction_sb_sLuR::synapse0x2eaebf0() {
   return (neuron0x2e9c410()*-0.634615);
}

double NNfunction_sb_sLuR::synapse0x2eaec30() {
   return (neuron0x2e9c750()*0.020143);
}

double NNfunction_sb_sLuR::synapse0x2eaec70() {
   return (neuron0x2e9ca90()*0.277506);
}

double NNfunction_sb_sLuR::synapse0x2eaecb0() {
   return (neuron0x2e9cdd0()*-0.0524871);
}

double NNfunction_sb_sLuR::synapse0x2eaf030() {
   return (neuron0x2e982a0()*0.218088);
}

double NNfunction_sb_sLuR::synapse0x2eaf070() {
   return (neuron0x2e98550()*0.0470022);
}

double NNfunction_sb_sLuR::synapse0x2eaf0b0() {
   return (neuron0x2e98890()*0.121632);
}

double NNfunction_sb_sLuR::synapse0x2eaf0f0() {
   return (neuron0x2e98bd0()*-0.0134163);
}

double NNfunction_sb_sLuR::synapse0x2eaf130() {
   return (neuron0x2e98f10()*0.50838);
}

double NNfunction_sb_sLuR::synapse0x2eaf170() {
   return (neuron0x2e99250()*0.140399);
}

double NNfunction_sb_sLuR::synapse0x2eaf1b0() {
   return (neuron0x2e99590()*-0.0550982);
}

double NNfunction_sb_sLuR::synapse0x2eaf1f0() {
   return (neuron0x2e998d0()*-0.0224265);
}

double NNfunction_sb_sLuR::synapse0x2eaf230() {
   return (neuron0x2e99c10()*0.186918);
}

double NNfunction_sb_sLuR::synapse0x2eaf270() {
   return (neuron0x2e99f50()*-0.0587786);
}

double NNfunction_sb_sLuR::synapse0x2eaf2b0() {
   return (neuron0x2e9a290()*0.0365353);
}

double NNfunction_sb_sLuR::synapse0x2eaf2f0() {
   return (neuron0x2e9a5d0()*0.151732);
}

double NNfunction_sb_sLuR::synapse0x2eaf330() {
   return (neuron0x2e9a910()*-0.325511);
}

double NNfunction_sb_sLuR::synapse0x2eaf370() {
   return (neuron0x2e9ac50()*0.124687);
}

double NNfunction_sb_sLuR::synapse0x2eaf3b0() {
   return (neuron0x2e9af90()*-0.677495);
}

double NNfunction_sb_sLuR::synapse0x2eaf3f0() {
   return (neuron0x2e9b2d0()*0.347267);
}

double NNfunction_sb_sLuR::synapse0x2eaee80() {
   return (neuron0x2e9b610()*-0.273263);
}

double NNfunction_sb_sLuR::synapse0x2eaeec0() {
   return (neuron0x2e9bb70()*0.244477);
}

double NNfunction_sb_sLuR::synapse0x2eaf540() {
   return (neuron0x2e9bd90()*0.0516709);
}

double NNfunction_sb_sLuR::synapse0x2eaf580() {
   return (neuron0x2e9c0d0()*0.134574);
}

double NNfunction_sb_sLuR::synapse0x2eaf5c0() {
   return (neuron0x2e9c410()*0.0359342);
}

double NNfunction_sb_sLuR::synapse0x2eaf600() {
   return (neuron0x2e9c750()*0.160121);
}

double NNfunction_sb_sLuR::synapse0x2eaf640() {
   return (neuron0x2e9ca90()*-0.102027);
}

double NNfunction_sb_sLuR::synapse0x2eaf680() {
   return (neuron0x2e9cdd0()*0.0591203);
}

double NNfunction_sb_sLuR::synapse0x2eafa00() {
   return (neuron0x2e982a0()*0.103911);
}

double NNfunction_sb_sLuR::synapse0x2eafa40() {
   return (neuron0x2e98550()*-0.0312219);
}

double NNfunction_sb_sLuR::synapse0x2eafa80() {
   return (neuron0x2e98890()*0.459243);
}

double NNfunction_sb_sLuR::synapse0x2eafac0() {
   return (neuron0x2e98bd0()*0.0537211);
}

double NNfunction_sb_sLuR::synapse0x2eafb00() {
   return (neuron0x2e98f10()*0.0590747);
}

double NNfunction_sb_sLuR::synapse0x2eafb40() {
   return (neuron0x2e99250()*-0.048817);
}

double NNfunction_sb_sLuR::synapse0x2eafb80() {
   return (neuron0x2e99590()*0.0484105);
}

double NNfunction_sb_sLuR::synapse0x2eafbc0() {
   return (neuron0x2e998d0()*-0.0243096);
}

double NNfunction_sb_sLuR::synapse0x2eafc00() {
   return (neuron0x2e99c10()*-0.0299048);
}

double NNfunction_sb_sLuR::synapse0x2eafc40() {
   return (neuron0x2e99f50()*0.600177);
}

double NNfunction_sb_sLuR::synapse0x2eafc80() {
   return (neuron0x2e9a290()*-0.204111);
}

double NNfunction_sb_sLuR::synapse0x2eafcc0() {
   return (neuron0x2e9a5d0()*0.360373);
}

double NNfunction_sb_sLuR::synapse0x2eafd00() {
   return (neuron0x2e9a910()*0.706681);
}

double NNfunction_sb_sLuR::synapse0x2eafd40() {
   return (neuron0x2e9ac50()*-0.149783);
}

double NNfunction_sb_sLuR::synapse0x2eafd80() {
   return (neuron0x2e9af90()*0.438171);
}

double NNfunction_sb_sLuR::synapse0x2eafdc0() {
   return (neuron0x2e9b2d0()*-0.222464);
}

double NNfunction_sb_sLuR::synapse0x2eaf850() {
   return (neuron0x2e9b610()*-0.323711);
}

double NNfunction_sb_sLuR::synapse0x2eaf890() {
   return (neuron0x2e9bb70()*0.384012);
}

double NNfunction_sb_sLuR::synapse0x2eaff10() {
   return (neuron0x2e9bd90()*0.436419);
}

double NNfunction_sb_sLuR::synapse0x2eaff50() {
   return (neuron0x2e9c0d0()*0.405354);
}

double NNfunction_sb_sLuR::synapse0x2eaff90() {
   return (neuron0x2e9c410()*-0.0225595);
}

double NNfunction_sb_sLuR::synapse0x2eaffd0() {
   return (neuron0x2e9c750()*-0.25039);
}

double NNfunction_sb_sLuR::synapse0x2eb0010() {
   return (neuron0x2e9ca90()*0.280244);
}

double NNfunction_sb_sLuR::synapse0x2eb0050() {
   return (neuron0x2e9cdd0()*0.204045);
}

double NNfunction_sb_sLuR::synapse0x2eb03d0() {
   return (neuron0x2e982a0()*-0.00607702);
}

double NNfunction_sb_sLuR::synapse0x2eb0410() {
   return (neuron0x2e98550()*-0.0183877);
}

double NNfunction_sb_sLuR::synapse0x2eb0450() {
   return (neuron0x2e98890()*-0.048816);
}

double NNfunction_sb_sLuR::synapse0x2eb0490() {
   return (neuron0x2e98bd0()*10.0198);
}

double NNfunction_sb_sLuR::synapse0x2eb04d0() {
   return (neuron0x2e98f10()*0.0146627);
}

double NNfunction_sb_sLuR::synapse0x2eb0510() {
   return (neuron0x2e99250()*-0.0259017);
}

double NNfunction_sb_sLuR::synapse0x2eb0550() {
   return (neuron0x2e99590()*-0.0087231);
}

double NNfunction_sb_sLuR::synapse0x2eb0590() {
   return (neuron0x2e998d0()*-0.00856024);
}

double NNfunction_sb_sLuR::synapse0x2eb05d0() {
   return (neuron0x2e99c10()*-0.0101158);
}

double NNfunction_sb_sLuR::synapse0x2eb0610() {
   return (neuron0x2e99f50()*-0.0222903);
}

double NNfunction_sb_sLuR::synapse0x2eb0650() {
   return (neuron0x2e9a290()*0.0130055);
}

double NNfunction_sb_sLuR::synapse0x2eb0690() {
   return (neuron0x2e9a5d0()*0.00198091);
}

double NNfunction_sb_sLuR::synapse0x2eb06d0() {
   return (neuron0x2e9a910()*-0.161895);
}

double NNfunction_sb_sLuR::synapse0x2eb0710() {
   return (neuron0x2e9ac50()*0.00926619);
}

double NNfunction_sb_sLuR::synapse0x2eb0750() {
   return (neuron0x2e9af90()*-0.166539);
}

double NNfunction_sb_sLuR::synapse0x2eb0790() {
   return (neuron0x2e9b2d0()*0.00670014);
}

double NNfunction_sb_sLuR::synapse0x2eb0220() {
   return (neuron0x2e9b610()*0.00884304);
}

double NNfunction_sb_sLuR::synapse0x2eb0260() {
   return (neuron0x2e9bb70()*-0.0198995);
}

double NNfunction_sb_sLuR::synapse0x2eb08e0() {
   return (neuron0x2e9bd90()*0.00575577);
}

double NNfunction_sb_sLuR::synapse0x2eb0920() {
   return (neuron0x2e9c0d0()*-0.0144698);
}

double NNfunction_sb_sLuR::synapse0x2eb0960() {
   return (neuron0x2e9c410()*-0.00877155);
}

double NNfunction_sb_sLuR::synapse0x2eb09a0() {
   return (neuron0x2e9c750()*0.0268947);
}

double NNfunction_sb_sLuR::synapse0x2eb09e0() {
   return (neuron0x2e9ca90()*-0.00581408);
}

double NNfunction_sb_sLuR::synapse0x2eb0a20() {
   return (neuron0x2e9cdd0()*0.032329);
}

double NNfunction_sb_sLuR::synapse0x2eb0da0() {
   return (neuron0x2e982a0()*0.142978);
}

double NNfunction_sb_sLuR::synapse0x2eb0de0() {
   return (neuron0x2e98550()*-0.0348271);
}

double NNfunction_sb_sLuR::synapse0x2eb0e20() {
   return (neuron0x2e98890()*0.0849765);
}

double NNfunction_sb_sLuR::synapse0x2eb0e60() {
   return (neuron0x2e98bd0()*-1.31926);
}

double NNfunction_sb_sLuR::synapse0x2eb0ea0() {
   return (neuron0x2e98f10()*0.048529);
}

double NNfunction_sb_sLuR::synapse0x2eb0ee0() {
   return (neuron0x2e99250()*-0.0104948);
}

double NNfunction_sb_sLuR::synapse0x2eb0f20() {
   return (neuron0x2e99590()*-0.0291272);
}

double NNfunction_sb_sLuR::synapse0x2eb0f60() {
   return (neuron0x2e998d0()*-0.0381118);
}

double NNfunction_sb_sLuR::synapse0x2eb0fa0() {
   return (neuron0x2e99c10()*-0.0354059);
}

double NNfunction_sb_sLuR::synapse0x2eb0fe0() {
   return (neuron0x2e99f50()*0.0674552);
}

double NNfunction_sb_sLuR::synapse0x2eb1020() {
   return (neuron0x2e9a290()*0.1251);
}

double NNfunction_sb_sLuR::synapse0x2eb1060() {
   return (neuron0x2e9a5d0()*-0.0273461);
}

double NNfunction_sb_sLuR::synapse0x2eb10a0() {
   return (neuron0x2e9a910()*0.88028);
}

double NNfunction_sb_sLuR::synapse0x2eb10e0() {
   return (neuron0x2e9ac50()*0.0204233);
}

double NNfunction_sb_sLuR::synapse0x2eb1120() {
   return (neuron0x2e9af90()*1.22463);
}

double NNfunction_sb_sLuR::synapse0x2eb1160() {
   return (neuron0x2e9b2d0()*-0.0156401);
}

double NNfunction_sb_sLuR::synapse0x2eb0bf0() {
   return (neuron0x2e9b610()*-0.0220014);
}

double NNfunction_sb_sLuR::synapse0x2eb0c30() {
   return (neuron0x2e9bb70()*-0.0493747);
}

double NNfunction_sb_sLuR::synapse0x2eb12b0() {
   return (neuron0x2e9bd90()*0.0154654);
}

double NNfunction_sb_sLuR::synapse0x2eb12f0() {
   return (neuron0x2e9c0d0()*-0.0127351);
}

double NNfunction_sb_sLuR::synapse0x2eb1330() {
   return (neuron0x2e9c410()*0.10114);
}

double NNfunction_sb_sLuR::synapse0x2eb1370() {
   return (neuron0x2e9c750()*-0.0250571);
}

double NNfunction_sb_sLuR::synapse0x2eb13b0() {
   return (neuron0x2e9ca90()*0.000708381);
}

double NNfunction_sb_sLuR::synapse0x2eb13f0() {
   return (neuron0x2e9cdd0()*-0.124185);
}

double NNfunction_sb_sLuR::synapse0x2eb1770() {
   return (neuron0x2e982a0()*0.00164299);
}

double NNfunction_sb_sLuR::synapse0x2eb17b0() {
   return (neuron0x2e98550()*0.0209831);
}

double NNfunction_sb_sLuR::synapse0x2eb17f0() {
   return (neuron0x2e98890()*-0.0373009);
}

double NNfunction_sb_sLuR::synapse0x2eb1830() {
   return (neuron0x2e98bd0()*-0.218133);
}

double NNfunction_sb_sLuR::synapse0x2eb1870() {
   return (neuron0x2e98f10()*0.000469447);
}

double NNfunction_sb_sLuR::synapse0x2eb18b0() {
   return (neuron0x2e99250()*0.0059672);
}

double NNfunction_sb_sLuR::synapse0x2eb18f0() {
   return (neuron0x2e99590()*0.00209045);
}

double NNfunction_sb_sLuR::synapse0x2eb1930() {
   return (neuron0x2e998d0()*0.0132889);
}

double NNfunction_sb_sLuR::synapse0x2eb1970() {
   return (neuron0x2e99c10()*-0.0207828);
}

double NNfunction_sb_sLuR::synapse0x2eb19b0() {
   return (neuron0x2e99f50()*-0.0344019);
}

double NNfunction_sb_sLuR::synapse0x2eb19f0() {
   return (neuron0x2e9a290()*-0.0206363);
}

double NNfunction_sb_sLuR::synapse0x2eb1a30() {
   return (neuron0x2e9a5d0()*0.000600208);
}

double NNfunction_sb_sLuR::synapse0x2eb1a70() {
   return (neuron0x2e9a910()*0.77365);
}

double NNfunction_sb_sLuR::synapse0x2eb1ab0() {
   return (neuron0x2e9ac50()*0.0379368);
}

double NNfunction_sb_sLuR::synapse0x2eb1af0() {
   return (neuron0x2e9af90()*1.25623);
}

double NNfunction_sb_sLuR::synapse0x2eb1b30() {
   return (neuron0x2e9b2d0()*0.0468038);
}

double NNfunction_sb_sLuR::synapse0x2eb15c0() {
   return (neuron0x2e9b610()*0.0360851);
}

double NNfunction_sb_sLuR::synapse0x2eb1600() {
   return (neuron0x2e9bb70()*-0.0290428);
}

double NNfunction_sb_sLuR::synapse0x2eb1c80() {
   return (neuron0x2e9bd90()*0.00163726);
}

double NNfunction_sb_sLuR::synapse0x2eb1cc0() {
   return (neuron0x2e9c0d0()*0.0019883);
}

double NNfunction_sb_sLuR::synapse0x2eb1d00() {
   return (neuron0x2e9c410()*-0.0047554);
}

double NNfunction_sb_sLuR::synapse0x2eb1d40() {
   return (neuron0x2e9c750()*0.0046567);
}

double NNfunction_sb_sLuR::synapse0x2eb1d80() {
   return (neuron0x2e9ca90()*-0.0262098);
}

double NNfunction_sb_sLuR::synapse0x2eb1dc0() {
   return (neuron0x2e9cdd0()*0.0365258);
}

double NNfunction_sb_sLuR::synapse0x2eb2140() {
   return (neuron0x2e982a0()*-0.0211429);
}

double NNfunction_sb_sLuR::synapse0x2eb2180() {
   return (neuron0x2e98550()*-0.0207907);
}

double NNfunction_sb_sLuR::synapse0x2eb21c0() {
   return (neuron0x2e98890()*-0.0776119);
}

double NNfunction_sb_sLuR::synapse0x2eb2200() {
   return (neuron0x2e98bd0()*-0.0380429);
}

double NNfunction_sb_sLuR::synapse0x2eb2240() {
   return (neuron0x2e98f10()*-0.0282762);
}

double NNfunction_sb_sLuR::synapse0x2eb2280() {
   return (neuron0x2e99250()*-0.00207107);
}

double NNfunction_sb_sLuR::synapse0x2eb22c0() {
   return (neuron0x2e99590()*-0.00103683);
}

double NNfunction_sb_sLuR::synapse0x2eb2300() {
   return (neuron0x2e998d0()*0.0135091);
}

double NNfunction_sb_sLuR::synapse0x2eb2340() {
   return (neuron0x2e99c10()*0.00176227);
}

double NNfunction_sb_sLuR::synapse0x2eb2380() {
   return (neuron0x2e99f50()*0.0201986);
}

double NNfunction_sb_sLuR::synapse0x2eb23c0() {
   return (neuron0x2e9a290()*0.00320795);
}

double NNfunction_sb_sLuR::synapse0x2eb2400() {
   return (neuron0x2e9a5d0()*-0.0406153);
}

double NNfunction_sb_sLuR::synapse0x2eb2440() {
   return (neuron0x2e9a910()*0.118695);
}

double NNfunction_sb_sLuR::synapse0x2eb2480() {
   return (neuron0x2e9ac50()*-0.0243966);
}

double NNfunction_sb_sLuR::synapse0x2eb24c0() {
   return (neuron0x2e9af90()*0.21445);
}

double NNfunction_sb_sLuR::synapse0x2eb2500() {
   return (neuron0x2e9b2d0()*-0.0696146);
}

double NNfunction_sb_sLuR::synapse0x2eb1f90() {
   return (neuron0x2e9b610()*0.00754338);
}

double NNfunction_sb_sLuR::synapse0x2eb1fd0() {
   return (neuron0x2e9bb70()*0.0015598);
}

double NNfunction_sb_sLuR::synapse0x2eb2650() {
   return (neuron0x2e9bd90()*-0.0118502);
}

double NNfunction_sb_sLuR::synapse0x2eb2690() {
   return (neuron0x2e9c0d0()*-0.00100166);
}

double NNfunction_sb_sLuR::synapse0x2eb26d0() {
   return (neuron0x2e9c410()*-0.00740075);
}

double NNfunction_sb_sLuR::synapse0x2eb2710() {
   return (neuron0x2e9c750()*-0.00835426);
}

double NNfunction_sb_sLuR::synapse0x2eb2750() {
   return (neuron0x2e9ca90()*0.0167744);
}

double NNfunction_sb_sLuR::synapse0x2eb2790() {
   return (neuron0x2e9cdd0()*-0.0168117);
}

double NNfunction_sb_sLuR::synapse0x2eb2b10() {
   return (neuron0x2e982a0()*-0.0295172);
}

double NNfunction_sb_sLuR::synapse0x2ea70e0() {
   return (neuron0x2e98550()*-0.00420579);
}

double NNfunction_sb_sLuR::synapse0x2ea7120() {
   return (neuron0x2e98890()*0.0303489);
}

double NNfunction_sb_sLuR::synapse0x2ea7160() {
   return (neuron0x2e98bd0()*-10.5217);
}

double NNfunction_sb_sLuR::synapse0x2ea73b0() {
   return (neuron0x2e98f10()*-0.0263194);
}

double NNfunction_sb_sLuR::synapse0x2ea73f0() {
   return (neuron0x2e99250()*0.00758698);
}

double NNfunction_sb_sLuR::synapse0x2ea7430() {
   return (neuron0x2e99590()*0.0372389);
}

double NNfunction_sb_sLuR::synapse0x2ea7680() {
   return (neuron0x2e998d0()*-0.00257442);
}

double NNfunction_sb_sLuR::synapse0x2ea76c0() {
   return (neuron0x2e99c10()*0.0331509);
}

double NNfunction_sb_sLuR::synapse0x2ea7910() {
   return (neuron0x2e99f50()*0.0150904);
}

double NNfunction_sb_sLuR::synapse0x2ea7950() {
   return (neuron0x2e9a290()*0.0153715);
}

double NNfunction_sb_sLuR::synapse0x2ea7990() {
   return (neuron0x2e9a5d0()*0.00436604);
}

double NNfunction_sb_sLuR::synapse0x2ea7be0() {
   return (neuron0x2e9a910()*-0.322661);
}

double NNfunction_sb_sLuR::synapse0x2ea7c20() {
   return (neuron0x2e9ac50()*0.000555222);
}

double NNfunction_sb_sLuR::synapse0x2ea7e70() {
   return (neuron0x2e9af90()*-0.173488);
}

double NNfunction_sb_sLuR::synapse0x2ea7eb0() {
   return (neuron0x2e9b2d0()*0.00346865);
}

double NNfunction_sb_sLuR::synapse0x2eb2960() {
   return (neuron0x2e9b610()*0.00560668);
}

double NNfunction_sb_sLuR::synapse0x2eb29a0() {
   return (neuron0x2e9bb70()*0.0328808);
}

double NNfunction_sb_sLuR::synapse0x2ea8000() {
   return (neuron0x2e9bd90()*0.0293766);
}

double NNfunction_sb_sLuR::synapse0x2ea8510() {
   return (neuron0x2e9c0d0()*-0.0321575);
}

double NNfunction_sb_sLuR::synapse0x2ea8550() {
   return (neuron0x2e9c410()*-0.00530607);
}

double NNfunction_sb_sLuR::synapse0x2ea8590() {
   return (neuron0x2e9c750()*-0.00431808);
}

double NNfunction_sb_sLuR::synapse0x2ea87e0() {
   return (neuron0x2e9ca90()*-0.027683);
}

double NNfunction_sb_sLuR::synapse0x2ea8820() {
   return (neuron0x2e9cdd0()*-0.0478731);
}

double NNfunction_sb_sLuR::synapse0x2ea80d0() {
   return (neuron0x2e982a0()*-0.0323141);
}

double NNfunction_sb_sLuR::synapse0x2ea8110() {
   return (neuron0x2e98550()*0.0339717);
}

double NNfunction_sb_sLuR::synapse0x2ea8150() {
   return (neuron0x2e98890()*0.953244);
}

double NNfunction_sb_sLuR::synapse0x2ea8190() {
   return (neuron0x2e98bd0()*0.0542369);
}

double NNfunction_sb_sLuR::synapse0x2ea8b10() {
   return (neuron0x2e98f10()*0.00875173);
}

double NNfunction_sb_sLuR::synapse0x2eb4e60() {
   return (neuron0x2e99250()*-0.0108291);
}

double NNfunction_sb_sLuR::synapse0x2eb4ea0() {
   return (neuron0x2e99590()*-0.00447119);
}

double NNfunction_sb_sLuR::synapse0x2eb4ee0() {
   return (neuron0x2e998d0()*0.0240293);
}

double NNfunction_sb_sLuR::synapse0x2eb4f20() {
   return (neuron0x2e99c10()*0.00284684);
}

double NNfunction_sb_sLuR::synapse0x2eb4f60() {
   return (neuron0x2e99f50()*-0.0455951);
}

double NNfunction_sb_sLuR::synapse0x2eb4fa0() {
   return (neuron0x2e9a290()*-0.0238313);
}

double NNfunction_sb_sLuR::synapse0x2eb4fe0() {
   return (neuron0x2e9a5d0()*-0.0214833);
}

double NNfunction_sb_sLuR::synapse0x2eb5020() {
   return (neuron0x2e9a910()*-0.430455);
}

double NNfunction_sb_sLuR::synapse0x2eb5060() {
   return (neuron0x2e9ac50()*0.0467155);
}

double NNfunction_sb_sLuR::synapse0x2eb50a0() {
   return (neuron0x2e9af90()*0.0812717);
}

double NNfunction_sb_sLuR::synapse0x2eb50e0() {
   return (neuron0x2e9b2d0()*0.0548441);
}

double NNfunction_sb_sLuR::synapse0x2ea89f0() {
   return (neuron0x2e9b610()*0.0165883);
}

double NNfunction_sb_sLuR::synapse0x2ea8a30() {
   return (neuron0x2e9bb70()*-0.043196);
}

double NNfunction_sb_sLuR::synapse0x2eb5230() {
   return (neuron0x2e9bd90()*-0.0778878);
}

double NNfunction_sb_sLuR::synapse0x2eb5270() {
   return (neuron0x2e9c0d0()*0.008234);
}

double NNfunction_sb_sLuR::synapse0x2eb52b0() {
   return (neuron0x2e9c410()*0.0443207);
}

double NNfunction_sb_sLuR::synapse0x2eb52f0() {
   return (neuron0x2e9c750()*-0.0114747);
}

double NNfunction_sb_sLuR::synapse0x2eb5330() {
   return (neuron0x2e9ca90()*-0.0867285);
}

double NNfunction_sb_sLuR::synapse0x2eb5370() {
   return (neuron0x2e9cdd0()*0.0659828);
}

double NNfunction_sb_sLuR::synapse0x2eb56f0() {
   return (neuron0x2e982a0()*-0.0460752);
}

double NNfunction_sb_sLuR::synapse0x2eb5730() {
   return (neuron0x2e98550()*-0.0252655);
}

double NNfunction_sb_sLuR::synapse0x2eb5770() {
   return (neuron0x2e98890()*0.0315986);
}

double NNfunction_sb_sLuR::synapse0x2eb57b0() {
   return (neuron0x2e98bd0()*-0.0914654);
}

double NNfunction_sb_sLuR::synapse0x2eb57f0() {
   return (neuron0x2e98f10()*-0.0171274);
}

double NNfunction_sb_sLuR::synapse0x2eb5830() {
   return (neuron0x2e99250()*0.0183788);
}

double NNfunction_sb_sLuR::synapse0x2eb5870() {
   return (neuron0x2e99590()*0.0137632);
}

double NNfunction_sb_sLuR::synapse0x2eb58b0() {
   return (neuron0x2e998d0()*0.0309987);
}

double NNfunction_sb_sLuR::synapse0x2eb58f0() {
   return (neuron0x2e99c10()*-0.0292871);
}

double NNfunction_sb_sLuR::synapse0x2eb5930() {
   return (neuron0x2e99f50()*-0.0098618);
}

double NNfunction_sb_sLuR::synapse0x2eb5970() {
   return (neuron0x2e9a290()*0.0828375);
}

double NNfunction_sb_sLuR::synapse0x2eb59b0() {
   return (neuron0x2e9a5d0()*-0.0170779);
}

double NNfunction_sb_sLuR::synapse0x2eb59f0() {
   return (neuron0x2e9a910()*-0.00696314);
}

double NNfunction_sb_sLuR::synapse0x2eb5a30() {
   return (neuron0x2e9ac50()*0.0161924);
}

double NNfunction_sb_sLuR::synapse0x2eb5a70() {
   return (neuron0x2e9af90()*2.37804);
}

double NNfunction_sb_sLuR::synapse0x2eb5ab0() {
   return (neuron0x2e9b2d0()*-0.0128399);
}

double NNfunction_sb_sLuR::synapse0x2eb5540() {
   return (neuron0x2e9b610()*0.0568586);
}

double NNfunction_sb_sLuR::synapse0x2eb5580() {
   return (neuron0x2e9bb70()*-0.0329261);
}

double NNfunction_sb_sLuR::synapse0x2eb5c00() {
   return (neuron0x2e9bd90()*0.0426174);
}

double NNfunction_sb_sLuR::synapse0x2eb5c40() {
   return (neuron0x2e9c0d0()*-0.00981619);
}

double NNfunction_sb_sLuR::synapse0x2eb5c80() {
   return (neuron0x2e9c410()*-0.0564284);
}

double NNfunction_sb_sLuR::synapse0x2eb5cc0() {
   return (neuron0x2e9c750()*-0.00585675);
}

double NNfunction_sb_sLuR::synapse0x2eb5d00() {
   return (neuron0x2e9ca90()*0.00992329);
}

double NNfunction_sb_sLuR::synapse0x2eb5d40() {
   return (neuron0x2e9cdd0()*0.0212751);
}

double NNfunction_sb_sLuR::synapse0x2eb60c0() {
   return (neuron0x2e982a0()*-0.0694562);
}

double NNfunction_sb_sLuR::synapse0x2eb6100() {
   return (neuron0x2e98550()*0.446259);
}

double NNfunction_sb_sLuR::synapse0x2eb6140() {
   return (neuron0x2e98890()*0.255483);
}

double NNfunction_sb_sLuR::synapse0x2eb6180() {
   return (neuron0x2e98bd0()*0.11598);
}

double NNfunction_sb_sLuR::synapse0x2eb61c0() {
   return (neuron0x2e98f10()*-0.0939879);
}

double NNfunction_sb_sLuR::synapse0x2eb6200() {
   return (neuron0x2e99250()*-0.168475);
}

double NNfunction_sb_sLuR::synapse0x2eb6240() {
   return (neuron0x2e99590()*-0.507697);
}

double NNfunction_sb_sLuR::synapse0x2eb6280() {
   return (neuron0x2e998d0()*-0.728495);
}

double NNfunction_sb_sLuR::synapse0x2eb62c0() {
   return (neuron0x2e99c10()*-0.816763);
}

double NNfunction_sb_sLuR::synapse0x2eb6300() {
   return (neuron0x2e99f50()*-0.412349);
}

double NNfunction_sb_sLuR::synapse0x2eb6340() {
   return (neuron0x2e9a290()*-0.548909);
}

double NNfunction_sb_sLuR::synapse0x2eb6380() {
   return (neuron0x2e9a5d0()*0.126948);
}

double NNfunction_sb_sLuR::synapse0x2eb63c0() {
   return (neuron0x2e9a910()*0.265177);
}

double NNfunction_sb_sLuR::synapse0x2eb6400() {
   return (neuron0x2e9ac50()*0.105872);
}

double NNfunction_sb_sLuR::synapse0x2eb6440() {
   return (neuron0x2e9af90()*-0.323083);
}

double NNfunction_sb_sLuR::synapse0x2eb6480() {
   return (neuron0x2e9b2d0()*0.138045);
}

double NNfunction_sb_sLuR::synapse0x2eb5f10() {
   return (neuron0x2e9b610()*-0.046822);
}

double NNfunction_sb_sLuR::synapse0x2eb5f50() {
   return (neuron0x2e9bb70()*-0.0155754);
}

double NNfunction_sb_sLuR::synapse0x2eb65d0() {
   return (neuron0x2e9bd90()*0.573891);
}

double NNfunction_sb_sLuR::synapse0x2eb6610() {
   return (neuron0x2e9c0d0()*-0.255976);
}

double NNfunction_sb_sLuR::synapse0x2eb6650() {
   return (neuron0x2e9c410()*-0.625777);
}

double NNfunction_sb_sLuR::synapse0x2eb6690() {
   return (neuron0x2e9c750()*-0.450057);
}

double NNfunction_sb_sLuR::synapse0x2eb66d0() {
   return (neuron0x2e9ca90()*0.339742);
}

double NNfunction_sb_sLuR::synapse0x2eb6710() {
   return (neuron0x2e9cdd0()*0.311211);
}

double NNfunction_sb_sLuR::synapse0x2eb6a90() {
   return (neuron0x2e982a0()*-0.428641);
}

double NNfunction_sb_sLuR::synapse0x2eb6ad0() {
   return (neuron0x2e98550()*-0.00144797);
}

double NNfunction_sb_sLuR::synapse0x2eb6b10() {
   return (neuron0x2e98890()*-0.215241);
}

double NNfunction_sb_sLuR::synapse0x2eb6b50() {
   return (neuron0x2e98bd0()*0.404618);
}

double NNfunction_sb_sLuR::synapse0x2eb6b90() {
   return (neuron0x2e98f10()*-0.436128);
}

double NNfunction_sb_sLuR::synapse0x2eb6bd0() {
   return (neuron0x2e99250()*0.0805244);
}

double NNfunction_sb_sLuR::synapse0x2eb6c10() {
   return (neuron0x2e99590()*0.137567);
}

double NNfunction_sb_sLuR::synapse0x2eb6c50() {
   return (neuron0x2e998d0()*0.329685);
}

double NNfunction_sb_sLuR::synapse0x2eb6c90() {
   return (neuron0x2e99c10()*0.0229806);
}

double NNfunction_sb_sLuR::synapse0x2eb6cd0() {
   return (neuron0x2e99f50()*-0.208544);
}

double NNfunction_sb_sLuR::synapse0x2eb6d10() {
   return (neuron0x2e9a290()*-0.257377);
}

double NNfunction_sb_sLuR::synapse0x2eb6d50() {
   return (neuron0x2e9a5d0()*-0.605612);
}

double NNfunction_sb_sLuR::synapse0x2eb6d90() {
   return (neuron0x2e9a910()*0.181429);
}

double NNfunction_sb_sLuR::synapse0x2eb6dd0() {
   return (neuron0x2e9ac50()*-0.0543168);
}

double NNfunction_sb_sLuR::synapse0x2eb6e10() {
   return (neuron0x2e9af90()*-0.1047);
}

double NNfunction_sb_sLuR::synapse0x2eb6e50() {
   return (neuron0x2e9b2d0()*-0.280906);
}

double NNfunction_sb_sLuR::synapse0x2eb68e0() {
   return (neuron0x2e9b610()*-0.0242551);
}

double NNfunction_sb_sLuR::synapse0x2eb6920() {
   return (neuron0x2e9bb70()*-0.637764);
}

double NNfunction_sb_sLuR::synapse0x2eb6fa0() {
   return (neuron0x2e9bd90()*0.185922);
}

double NNfunction_sb_sLuR::synapse0x2eb6fe0() {
   return (neuron0x2e9c0d0()*0.234917);
}

double NNfunction_sb_sLuR::synapse0x2eb7020() {
   return (neuron0x2e9c410()*-0.0920307);
}

double NNfunction_sb_sLuR::synapse0x2eb7060() {
   return (neuron0x2e9c750()*-0.430624);
}

double NNfunction_sb_sLuR::synapse0x2eb70a0() {
   return (neuron0x2e9ca90()*0.244503);
}

double NNfunction_sb_sLuR::synapse0x2eb70e0() {
   return (neuron0x2e9cdd0()*-0.0983471);
}

double NNfunction_sb_sLuR::synapse0x2eb7460() {
   return (neuron0x2e982a0()*0.0493269);
}

double NNfunction_sb_sLuR::synapse0x2eb74a0() {
   return (neuron0x2e98550()*0.0592005);
}

double NNfunction_sb_sLuR::synapse0x2eb74e0() {
   return (neuron0x2e98890()*-0.015215);
}

double NNfunction_sb_sLuR::synapse0x2eb7520() {
   return (neuron0x2e98bd0()*-0.237016);
}

double NNfunction_sb_sLuR::synapse0x2eb7560() {
   return (neuron0x2e98f10()*-0.00943525);
}

double NNfunction_sb_sLuR::synapse0x2eb75a0() {
   return (neuron0x2e99250()*-0.0136033);
}

double NNfunction_sb_sLuR::synapse0x2eb75e0() {
   return (neuron0x2e99590()*0.0076964);
}

double NNfunction_sb_sLuR::synapse0x2eb7620() {
   return (neuron0x2e998d0()*-0.0206914);
}

double NNfunction_sb_sLuR::synapse0x2eb7660() {
   return (neuron0x2e99c10()*-0.0163154);
}

double NNfunction_sb_sLuR::synapse0x2eb76a0() {
   return (neuron0x2e99f50()*-0.0158749);
}

double NNfunction_sb_sLuR::synapse0x2eb76e0() {
   return (neuron0x2e9a290()*0.000254303);
}

double NNfunction_sb_sLuR::synapse0x2eb7720() {
   return (neuron0x2e9a5d0()*0.454607);
}

double NNfunction_sb_sLuR::synapse0x2eb7760() {
   return (neuron0x2e9a910()*0.139489);
}

double NNfunction_sb_sLuR::synapse0x2eb77a0() {
   return (neuron0x2e9ac50()*-0.0650643);
}

double NNfunction_sb_sLuR::synapse0x2eb77e0() {
   return (neuron0x2e9af90()*-0.0448274);
}

double NNfunction_sb_sLuR::synapse0x2eb7820() {
   return (neuron0x2e9b2d0()*0.171789);
}

double NNfunction_sb_sLuR::synapse0x2eb72b0() {
   return (neuron0x2e9b610()*-0.0463031);
}

double NNfunction_sb_sLuR::synapse0x2eb72f0() {
   return (neuron0x2e9bb70()*0.206544);
}

double NNfunction_sb_sLuR::synapse0x2eb7970() {
   return (neuron0x2e9bd90()*0.195368);
}

double NNfunction_sb_sLuR::synapse0x2eb79b0() {
   return (neuron0x2e9c0d0()*-0.0201969);
}

double NNfunction_sb_sLuR::synapse0x2eb79f0() {
   return (neuron0x2e9c410()*0.0159758);
}

double NNfunction_sb_sLuR::synapse0x2eb7a30() {
   return (neuron0x2e9c750()*0.0198827);
}

double NNfunction_sb_sLuR::synapse0x2eb7a70() {
   return (neuron0x2e9ca90()*0.0186488);
}

double NNfunction_sb_sLuR::synapse0x2eb7ab0() {
   return (neuron0x2e9cdd0()*-0.00819986);
}

double NNfunction_sb_sLuR::synapse0x2eb7e30() {
   return (neuron0x2e982a0()*-0.360046);
}

double NNfunction_sb_sLuR::synapse0x2eb7e70() {
   return (neuron0x2e98550()*-0.204997);
}

double NNfunction_sb_sLuR::synapse0x2eb7eb0() {
   return (neuron0x2e98890()*0.537373);
}

double NNfunction_sb_sLuR::synapse0x2eb7ef0() {
   return (neuron0x2e98bd0()*0.337796);
}

double NNfunction_sb_sLuR::synapse0x2eb7f30() {
   return (neuron0x2e98f10()*0.316959);
}

double NNfunction_sb_sLuR::synapse0x2eb7f70() {
   return (neuron0x2e99250()*-0.159493);
}

double NNfunction_sb_sLuR::synapse0x2eb7fb0() {
   return (neuron0x2e99590()*0.291435);
}

double NNfunction_sb_sLuR::synapse0x2eb7ff0() {
   return (neuron0x2e998d0()*-0.013028);
}

double NNfunction_sb_sLuR::synapse0x2eb8030() {
   return (neuron0x2e99c10()*0.0483838);
}

double NNfunction_sb_sLuR::synapse0x2eb8070() {
   return (neuron0x2e99f50()*-0.018329);
}

double NNfunction_sb_sLuR::synapse0x2eb80b0() {
   return (neuron0x2e9a290()*0.339392);
}

double NNfunction_sb_sLuR::synapse0x2eb80f0() {
   return (neuron0x2e9a5d0()*0.02115);
}

double NNfunction_sb_sLuR::synapse0x2eb8130() {
   return (neuron0x2e9a910()*0.311959);
}

double NNfunction_sb_sLuR::synapse0x2eb8170() {
   return (neuron0x2e9ac50()*0.547166);
}

double NNfunction_sb_sLuR::synapse0x2eb81b0() {
   return (neuron0x2e9af90()*-0.00159717);
}

double NNfunction_sb_sLuR::synapse0x2eb81f0() {
   return (neuron0x2e9b2d0()*1.05021);
}

double NNfunction_sb_sLuR::synapse0x2eb7c80() {
   return (neuron0x2e9b610()*0.0235875);
}

double NNfunction_sb_sLuR::synapse0x2eb7cc0() {
   return (neuron0x2e9bb70()*0.0254098);
}

double NNfunction_sb_sLuR::synapse0x2eb8340() {
   return (neuron0x2e9bd90()*-0.741465);
}

double NNfunction_sb_sLuR::synapse0x2eb8380() {
   return (neuron0x2e9c0d0()*0.102681);
}

double NNfunction_sb_sLuR::synapse0x2eb83c0() {
   return (neuron0x2e9c410()*-0.0660812);
}

double NNfunction_sb_sLuR::synapse0x2eb8400() {
   return (neuron0x2e9c750()*-0.205058);
}

double NNfunction_sb_sLuR::synapse0x2eb8440() {
   return (neuron0x2e9ca90()*-0.205502);
}

double NNfunction_sb_sLuR::synapse0x2eb8480() {
   return (neuron0x2e9cdd0()*0.10044);
}

double NNfunction_sb_sLuR::synapse0x2eb8800() {
   return (neuron0x2e982a0()*0.362092);
}

double NNfunction_sb_sLuR::synapse0x2eb8840() {
   return (neuron0x2e98550()*-0.281808);
}

double NNfunction_sb_sLuR::synapse0x2eb8880() {
   return (neuron0x2e98890()*0.173964);
}

double NNfunction_sb_sLuR::synapse0x2eb88c0() {
   return (neuron0x2e98bd0()*-0.16225);
}

double NNfunction_sb_sLuR::synapse0x2eb8900() {
   return (neuron0x2e98f10()*0.232341);
}

double NNfunction_sb_sLuR::synapse0x2eb8940() {
   return (neuron0x2e99250()*-0.223962);
}

double NNfunction_sb_sLuR::synapse0x2eb8980() {
   return (neuron0x2e99590()*-0.533706);
}

double NNfunction_sb_sLuR::synapse0x2eb89c0() {
   return (neuron0x2e998d0()*-0.454841);
}

double NNfunction_sb_sLuR::synapse0x2eb8a00() {
   return (neuron0x2e99c10()*-0.545395);
}

double NNfunction_sb_sLuR::synapse0x2eb8a40() {
   return (neuron0x2e99f50()*0.0919721);
}

double NNfunction_sb_sLuR::synapse0x2eb8a80() {
   return (neuron0x2e9a290()*0.485462);
}

double NNfunction_sb_sLuR::synapse0x2eb8ac0() {
   return (neuron0x2e9a5d0()*1.0474);
}

double NNfunction_sb_sLuR::synapse0x2eb8b00() {
   return (neuron0x2e9a910()*-0.680483);
}

double NNfunction_sb_sLuR::synapse0x2eb8b40() {
   return (neuron0x2e9ac50()*-0.187198);
}

double NNfunction_sb_sLuR::synapse0x2eb8b80() {
   return (neuron0x2e9af90()*0.634197);
}

double NNfunction_sb_sLuR::synapse0x2eb8bc0() {
   return (neuron0x2e9b2d0()*0.151498);
}

double NNfunction_sb_sLuR::synapse0x2eb8650() {
   return (neuron0x2e9b610()*-0.295419);
}

double NNfunction_sb_sLuR::synapse0x2eb8690() {
   return (neuron0x2e9bb70()*-0.139235);
}

double NNfunction_sb_sLuR::synapse0x2eb8d10() {
   return (neuron0x2e9bd90()*0.696563);
}

double NNfunction_sb_sLuR::synapse0x2eb8d50() {
   return (neuron0x2e9c0d0()*-0.378661);
}

double NNfunction_sb_sLuR::synapse0x2eb8d90() {
   return (neuron0x2e9c410()*-0.10118);
}

double NNfunction_sb_sLuR::synapse0x2eb8dd0() {
   return (neuron0x2e9c750()*0.651981);
}

double NNfunction_sb_sLuR::synapse0x2eb8e10() {
   return (neuron0x2e9ca90()*-0.57745);
}

double NNfunction_sb_sLuR::synapse0x2eb8e50() {
   return (neuron0x2e9cdd0()*-0.219989);
}

double NNfunction_sb_sLuR::synapse0x2eb91d0() {
   return (neuron0x2e982a0()*0.424087);
}

double NNfunction_sb_sLuR::synapse0x2eb9210() {
   return (neuron0x2e98550()*0.251827);
}

double NNfunction_sb_sLuR::synapse0x2eb9250() {
   return (neuron0x2e98890()*0.218561);
}

double NNfunction_sb_sLuR::synapse0x2eb9290() {
   return (neuron0x2e98bd0()*-0.841857);
}

double NNfunction_sb_sLuR::synapse0x2eb92d0() {
   return (neuron0x2e98f10()*0.105713);
}

double NNfunction_sb_sLuR::synapse0x2eb9310() {
   return (neuron0x2e99250()*-0.00260762);
}

double NNfunction_sb_sLuR::synapse0x2eb9350() {
   return (neuron0x2e99590()*0.00381852);
}

double NNfunction_sb_sLuR::synapse0x2eb9390() {
   return (neuron0x2e998d0()*-0.517167);
}

double NNfunction_sb_sLuR::synapse0x2eb93d0() {
   return (neuron0x2e99c10()*-0.15532);
}

double NNfunction_sb_sLuR::synapse0x2eb9410() {
   return (neuron0x2e99f50()*0.403526);
}

double NNfunction_sb_sLuR::synapse0x2eb9450() {
   return (neuron0x2e9a290()*-0.450392);
}

double NNfunction_sb_sLuR::synapse0x2eb9490() {
   return (neuron0x2e9a5d0()*-0.250177);
}

double NNfunction_sb_sLuR::synapse0x2eb94d0() {
   return (neuron0x2e9a910()*-0.3641);
}

double NNfunction_sb_sLuR::synapse0x2eb9510() {
   return (neuron0x2e9ac50()*-0.126941);
}

double NNfunction_sb_sLuR::synapse0x2eb9550() {
   return (neuron0x2e9af90()*0.0450887);
}

double NNfunction_sb_sLuR::synapse0x2eb9590() {
   return (neuron0x2e9b2d0()*0.122027);
}

double NNfunction_sb_sLuR::synapse0x2eb9020() {
   return (neuron0x2e9b610()*0.386738);
}

double NNfunction_sb_sLuR::synapse0x2eb9060() {
   return (neuron0x2e9bb70()*-0.442416);
}

double NNfunction_sb_sLuR::synapse0x2eb96e0() {
   return (neuron0x2e9bd90()*0.121955);
}

double NNfunction_sb_sLuR::synapse0x2eb9720() {
   return (neuron0x2e9c0d0()*0.351549);
}

double NNfunction_sb_sLuR::synapse0x2eb9760() {
   return (neuron0x2e9c410()*0.770788);
}

double NNfunction_sb_sLuR::synapse0x2eb97a0() {
   return (neuron0x2e9c750()*-0.160691);
}

double NNfunction_sb_sLuR::synapse0x2eb97e0() {
   return (neuron0x2e9ca90()*-0.08384);
}

double NNfunction_sb_sLuR::synapse0x2eb9820() {
   return (neuron0x2e9cdd0()*-0.207974);
}

double NNfunction_sb_sLuR::synapse0x2ea22d0() {
   return (neuron0x2e982a0()*-0.100459);
}

double NNfunction_sb_sLuR::synapse0x2ea2310() {
   return (neuron0x2e98550()*0.0313922);
}

double NNfunction_sb_sLuR::synapse0x2ea2350() {
   return (neuron0x2e98890()*0.0607276);
}

double NNfunction_sb_sLuR::synapse0x2ea2390() {
   return (neuron0x2e98bd0()*0.109663);
}

double NNfunction_sb_sLuR::synapse0x2ea23d0() {
   return (neuron0x2e98f10()*-0.0744203);
}

double NNfunction_sb_sLuR::synapse0x2ea2410() {
   return (neuron0x2e99250()*-0.0374415);
}

double NNfunction_sb_sLuR::synapse0x2ea2450() {
   return (neuron0x2e99590()*0.739407);
}

double NNfunction_sb_sLuR::synapse0x2ea2490() {
   return (neuron0x2e998d0()*0.443337);
}

double NNfunction_sb_sLuR::synapse0x2eb9fb0() {
   return (neuron0x2e99c10()*-0.259405);
}

double NNfunction_sb_sLuR::synapse0x2eb9ff0() {
   return (neuron0x2e99f50()*0.0447644);
}

double NNfunction_sb_sLuR::synapse0x2eba030() {
   return (neuron0x2e9a290()*-0.275667);
}

double NNfunction_sb_sLuR::synapse0x2eba070() {
   return (neuron0x2e9a5d0()*0.488186);
}

double NNfunction_sb_sLuR::synapse0x2eba0b0() {
   return (neuron0x2e9a910()*0.759308);
}

double NNfunction_sb_sLuR::synapse0x2eba0f0() {
   return (neuron0x2e9ac50()*0.290277);
}

double NNfunction_sb_sLuR::synapse0x2eba130() {
   return (neuron0x2e9af90()*0.810967);
}

double NNfunction_sb_sLuR::synapse0x2eba170() {
   return (neuron0x2e9b2d0()*0.179726);
}

double NNfunction_sb_sLuR::synapse0x2eb99f0() {
   return (neuron0x2e9b610()*0.153761);
}

double NNfunction_sb_sLuR::synapse0x2eb9a30() {
   return (neuron0x2e9bb70()*0.582783);
}

double NNfunction_sb_sLuR::synapse0x2eba2c0() {
   return (neuron0x2e9bd90()*-0.042933);
}

double NNfunction_sb_sLuR::synapse0x2eba300() {
   return (neuron0x2e9c0d0()*-0.180555);
}

double NNfunction_sb_sLuR::synapse0x2eba340() {
   return (neuron0x2e9c410()*-0.275221);
}

double NNfunction_sb_sLuR::synapse0x2eba380() {
   return (neuron0x2e9c750()*-0.268719);
}

double NNfunction_sb_sLuR::synapse0x2eba3c0() {
   return (neuron0x2e9ca90()*0.342145);
}

double NNfunction_sb_sLuR::synapse0x2eba400() {
   return (neuron0x2e9cdd0()*0.220963);
}

double NNfunction_sb_sLuR::synapse0x2eba780() {
   return (neuron0x2e982a0()*0.438896);
}

double NNfunction_sb_sLuR::synapse0x2eba7c0() {
   return (neuron0x2e98550()*0.152667);
}

double NNfunction_sb_sLuR::synapse0x2eba800() {
   return (neuron0x2e98890()*-0.616756);
}

double NNfunction_sb_sLuR::synapse0x2eba840() {
   return (neuron0x2e98bd0()*-0.683049);
}

double NNfunction_sb_sLuR::synapse0x2eba880() {
   return (neuron0x2e98f10()*0.340229);
}

double NNfunction_sb_sLuR::synapse0x2eba8c0() {
   return (neuron0x2e99250()*-0.0244676);
}

double NNfunction_sb_sLuR::synapse0x2eba900() {
   return (neuron0x2e99590()*0.0405902);
}

double NNfunction_sb_sLuR::synapse0x2eba940() {
   return (neuron0x2e998d0()*0.023086);
}

double NNfunction_sb_sLuR::synapse0x2eba980() {
   return (neuron0x2e99c10()*0.364026);
}

double NNfunction_sb_sLuR::synapse0x2eba9c0() {
   return (neuron0x2e99f50()*-0.159734);
}

double NNfunction_sb_sLuR::synapse0x2ebaa00() {
   return (neuron0x2e9a290()*0.0494173);
}

double NNfunction_sb_sLuR::synapse0x2ebaa40() {
   return (neuron0x2e9a5d0()*-0.537029);
}

double NNfunction_sb_sLuR::synapse0x2ebaa80() {
   return (neuron0x2e9a910()*-0.592579);
}

double NNfunction_sb_sLuR::synapse0x2ebaac0() {
   return (neuron0x2e9ac50()*0.740963);
}

double NNfunction_sb_sLuR::synapse0x2ebab00() {
   return (neuron0x2e9af90()*-0.775532);
}

double NNfunction_sb_sLuR::synapse0x2ebab40() {
   return (neuron0x2e9b2d0()*0.396008);
}

double NNfunction_sb_sLuR::synapse0x2eba5d0() {
   return (neuron0x2e9b610()*-0.591229);
}

double NNfunction_sb_sLuR::synapse0x2eba610() {
   return (neuron0x2e9bb70()*-0.434003);
}

double NNfunction_sb_sLuR::synapse0x2ebac90() {
   return (neuron0x2e9bd90()*-0.426087);
}

double NNfunction_sb_sLuR::synapse0x2ebacd0() {
   return (neuron0x2e9c0d0()*0.850622);
}

double NNfunction_sb_sLuR::synapse0x2ebad10() {
   return (neuron0x2e9c410()*-0.402711);
}

double NNfunction_sb_sLuR::synapse0x2ebad50() {
   return (neuron0x2e9c750()*-0.168725);
}

double NNfunction_sb_sLuR::synapse0x2ebad90() {
   return (neuron0x2e9ca90()*-0.224647);
}

double NNfunction_sb_sLuR::synapse0x2ebadd0() {
   return (neuron0x2e9cdd0()*0.373957);
}

double NNfunction_sb_sLuR::synapse0x2ebb150() {
   return (neuron0x2e982a0()*-0.000275564);
}

double NNfunction_sb_sLuR::synapse0x2ebb190() {
   return (neuron0x2e98550()*-0.0194522);
}

double NNfunction_sb_sLuR::synapse0x2ebb1d0() {
   return (neuron0x2e98890()*-0.00129765);
}

double NNfunction_sb_sLuR::synapse0x2ebb210() {
   return (neuron0x2e98bd0()*-0.0522468);
}

double NNfunction_sb_sLuR::synapse0x2ebb250() {
   return (neuron0x2e98f10()*0.0305097);
}

double NNfunction_sb_sLuR::synapse0x2ebb290() {
   return (neuron0x2e99250()*-0.00150422);
}

double NNfunction_sb_sLuR::synapse0x2ebb2d0() {
   return (neuron0x2e99590()*-0.00882977);
}

double NNfunction_sb_sLuR::synapse0x2ebb310() {
   return (neuron0x2e998d0()*-0.00918295);
}

double NNfunction_sb_sLuR::synapse0x2ebb350() {
   return (neuron0x2e99c10()*-0.00231733);
}

double NNfunction_sb_sLuR::synapse0x2ebb390() {
   return (neuron0x2e99f50()*0.0033089);
}

double NNfunction_sb_sLuR::synapse0x2ebb3d0() {
   return (neuron0x2e9a290()*-0.000197441);
}

double NNfunction_sb_sLuR::synapse0x2ebb410() {
   return (neuron0x2e9a5d0()*-3.55826e-05);
}

double NNfunction_sb_sLuR::synapse0x2ebb450() {
   return (neuron0x2e9a910()*1.51439);
}

double NNfunction_sb_sLuR::synapse0x2ebb490() {
   return (neuron0x2e9ac50()*-0.0173251);
}

double NNfunction_sb_sLuR::synapse0x2ebb4d0() {
   return (neuron0x2e9af90()*-0.982847);
}

double NNfunction_sb_sLuR::synapse0x2ebb510() {
   return (neuron0x2e9b2d0()*-0.00806937);
}

double NNfunction_sb_sLuR::synapse0x2ebafa0() {
   return (neuron0x2e9b610()*-0.0264193);
}

double NNfunction_sb_sLuR::synapse0x2ebafe0() {
   return (neuron0x2e9bb70()*-0.0166245);
}

double NNfunction_sb_sLuR::synapse0x2eabb10() {
   return (neuron0x2e9bd90()*0.00784151);
}

double NNfunction_sb_sLuR::synapse0x2eabb50() {
   return (neuron0x2e9c0d0()*-0.00375022);
}

double NNfunction_sb_sLuR::synapse0x2eabb90() {
   return (neuron0x2e9c410()*0.0189871);
}

double NNfunction_sb_sLuR::synapse0x2eabbd0() {
   return (neuron0x2e9c750()*0.0253355);
}

double NNfunction_sb_sLuR::synapse0x2eabc10() {
   return (neuron0x2e9ca90()*0.0292329);
}

double NNfunction_sb_sLuR::synapse0x2eabc50() {
   return (neuron0x2e9cdd0()*0.0371478);
}

double NNfunction_sb_sLuR::synapse0x2eabfd0() {
   return (neuron0x2e982a0()*-0.14751);
}

double NNfunction_sb_sLuR::synapse0x2eac010() {
   return (neuron0x2e98550()*-0.435331);
}

double NNfunction_sb_sLuR::synapse0x2eac050() {
   return (neuron0x2e98890()*0.120282);
}

double NNfunction_sb_sLuR::synapse0x2eac090() {
   return (neuron0x2e98bd0()*-0.186116);
}

double NNfunction_sb_sLuR::synapse0x2eac0d0() {
   return (neuron0x2e98f10()*0.243535);
}

double NNfunction_sb_sLuR::synapse0x2eac110() {
   return (neuron0x2e99250()*-0.00614834);
}

double NNfunction_sb_sLuR::synapse0x2eac150() {
   return (neuron0x2e99590()*0.268293);
}

double NNfunction_sb_sLuR::synapse0x2eac190() {
   return (neuron0x2e998d0()*-0.741297);
}

double NNfunction_sb_sLuR::synapse0x2eac1d0() {
   return (neuron0x2e99c10()*0.373329);
}

double NNfunction_sb_sLuR::synapse0x2eac210() {
   return (neuron0x2e99f50()*-0.113184);
}

double NNfunction_sb_sLuR::synapse0x2eac250() {
   return (neuron0x2e9a290()*-0.0514413);
}

double NNfunction_sb_sLuR::synapse0x2eac290() {
   return (neuron0x2e9a5d0()*0.355317);
}

double NNfunction_sb_sLuR::synapse0x2eac2d0() {
   return (neuron0x2e9a910()*-0.182903);
}

double NNfunction_sb_sLuR::synapse0x2eac310() {
   return (neuron0x2e9ac50()*0.275511);
}

double NNfunction_sb_sLuR::synapse0x2eac350() {
   return (neuron0x2e9af90()*-0.476437);
}

double NNfunction_sb_sLuR::synapse0x2eac390() {
   return (neuron0x2e9b2d0()*-0.0932564);
}

double NNfunction_sb_sLuR::synapse0x2eabe20() {
   return (neuron0x2e9b610()*0.395856);
}

double NNfunction_sb_sLuR::synapse0x2eabe60() {
   return (neuron0x2e9bb70()*0.0463845);
}

double NNfunction_sb_sLuR::synapse0x2eac4e0() {
   return (neuron0x2e9bd90()*-0.0896327);
}

double NNfunction_sb_sLuR::synapse0x2eac520() {
   return (neuron0x2e9c0d0()*-0.319101);
}

double NNfunction_sb_sLuR::synapse0x2eac560() {
   return (neuron0x2e9c410()*0.234755);
}

double NNfunction_sb_sLuR::synapse0x2eac5a0() {
   return (neuron0x2e9c750()*-0.0614645);
}

double NNfunction_sb_sLuR::synapse0x2eac5e0() {
   return (neuron0x2e9ca90()*0.111137);
}

double NNfunction_sb_sLuR::synapse0x2eac620() {
   return (neuron0x2e9cdd0()*-0.0768403);
}

double NNfunction_sb_sLuR::synapse0x2eac9a0() {
   return (neuron0x2e982a0()*0.090299);
}

double NNfunction_sb_sLuR::synapse0x2eac9e0() {
   return (neuron0x2e98550()*-0.0731783);
}

double NNfunction_sb_sLuR::synapse0x2eaca20() {
   return (neuron0x2e98890()*0.142462);
}

double NNfunction_sb_sLuR::synapse0x2eaca60() {
   return (neuron0x2e98bd0()*0.110616);
}

double NNfunction_sb_sLuR::synapse0x2eacaa0() {
   return (neuron0x2e98f10()*-0.103449);
}

double NNfunction_sb_sLuR::synapse0x2eacae0() {
   return (neuron0x2e99250()*0.596884);
}

double NNfunction_sb_sLuR::synapse0x2eacb20() {
   return (neuron0x2e99590()*-0.0657368);
}

double NNfunction_sb_sLuR::synapse0x2eacb60() {
   return (neuron0x2e998d0()*0.0625436);
}

double NNfunction_sb_sLuR::synapse0x2eacba0() {
   return (neuron0x2e99c10()*0.0577037);
}

double NNfunction_sb_sLuR::synapse0x2eacbe0() {
   return (neuron0x2e99f50()*-0.0165661);
}

double NNfunction_sb_sLuR::synapse0x2eacc20() {
   return (neuron0x2e9a290()*0.13587);
}

double NNfunction_sb_sLuR::synapse0x2eacc60() {
   return (neuron0x2e9a5d0()*0.0968992);
}

double NNfunction_sb_sLuR::synapse0x2eacca0() {
   return (neuron0x2e9a910()*-0.00502769);
}

double NNfunction_sb_sLuR::synapse0x2eacce0() {
   return (neuron0x2e9ac50()*-0.0322134);
}

double NNfunction_sb_sLuR::synapse0x2eacd20() {
   return (neuron0x2e9af90()*-0.396419);
}

double NNfunction_sb_sLuR::synapse0x2eacd60() {
   return (neuron0x2e9b2d0()*0.00692395);
}

double NNfunction_sb_sLuR::synapse0x2eac7f0() {
   return (neuron0x2e9b610()*0.0274603);
}

double NNfunction_sb_sLuR::synapse0x2eac830() {
   return (neuron0x2e9bb70()*0.0923893);
}

double NNfunction_sb_sLuR::synapse0x2eaceb0() {
   return (neuron0x2e9bd90()*0.0690095);
}

double NNfunction_sb_sLuR::synapse0x2eacef0() {
   return (neuron0x2e9c0d0()*0.015433);
}

double NNfunction_sb_sLuR::synapse0x2eacf30() {
   return (neuron0x2e9c410()*-0.0387617);
}

double NNfunction_sb_sLuR::synapse0x2eacf70() {
   return (neuron0x2e9c750()*0.114606);
}

double NNfunction_sb_sLuR::synapse0x2eacfb0() {
   return (neuron0x2e9ca90()*0.0617943);
}

double NNfunction_sb_sLuR::synapse0x2eacff0() {
   return (neuron0x2e9cdd0()*0.183484);
}

double NNfunction_sb_sLuR::synapse0x2ead370() {
   return (neuron0x2e982a0()*0.0324343);
}

double NNfunction_sb_sLuR::synapse0x2ead3b0() {
   return (neuron0x2e98550()*-0.526613);
}

double NNfunction_sb_sLuR::synapse0x2ead3f0() {
   return (neuron0x2e98890()*-0.262673);
}

double NNfunction_sb_sLuR::synapse0x2ead430() {
   return (neuron0x2e98bd0()*-1.34857);
}

double NNfunction_sb_sLuR::synapse0x2ead470() {
   return (neuron0x2e98f10()*-0.154849);
}

double NNfunction_sb_sLuR::synapse0x2ead4b0() {
   return (neuron0x2e99250()*-0.0176716);
}

double NNfunction_sb_sLuR::synapse0x2ead4f0() {
   return (neuron0x2e99590()*-0.0304324);
}

double NNfunction_sb_sLuR::synapse0x2ead530() {
   return (neuron0x2e998d0()*-0.0468829);
}

double NNfunction_sb_sLuR::synapse0x2ead570() {
   return (neuron0x2e99c10()*0.20667);
}

double NNfunction_sb_sLuR::synapse0x2ead5b0() {
   return (neuron0x2e99f50()*0.407715);
}

double NNfunction_sb_sLuR::synapse0x2ead5f0() {
   return (neuron0x2e9a290()*0.130782);
}

double NNfunction_sb_sLuR::synapse0x2ead630() {
   return (neuron0x2e9a5d0()*0.0785203);
}

double NNfunction_sb_sLuR::synapse0x2ead670() {
   return (neuron0x2e9a910()*0.149719);
}

double NNfunction_sb_sLuR::synapse0x2ead6b0() {
   return (neuron0x2e9ac50()*0.0398532);
}

double NNfunction_sb_sLuR::synapse0x2ead6f0() {
   return (neuron0x2e9af90()*-0.804382);
}

double NNfunction_sb_sLuR::synapse0x2ead730() {
   return (neuron0x2e9b2d0()*-0.0344245);
}

double NNfunction_sb_sLuR::synapse0x2ead1c0() {
   return (neuron0x2e9b610()*-0.0103071);
}

double NNfunction_sb_sLuR::synapse0x2ead200() {
   return (neuron0x2e9bb70()*-0.0510102);
}

double NNfunction_sb_sLuR::synapse0x2ead880() {
   return (neuron0x2e9bd90()*0.0606576);
}

double NNfunction_sb_sLuR::synapse0x2ead8c0() {
   return (neuron0x2e9c0d0()*0.147103);
}

double NNfunction_sb_sLuR::synapse0x2ead900() {
   return (neuron0x2e9c410()*0.279374);
}

double NNfunction_sb_sLuR::synapse0x2ead940() {
   return (neuron0x2e9c750()*0.176981);
}

double NNfunction_sb_sLuR::synapse0x2ead980() {
   return (neuron0x2e9ca90()*-0.215875);
}

double NNfunction_sb_sLuR::synapse0x2ead9c0() {
   return (neuron0x2e9cdd0()*0.306014);
}

double NNfunction_sb_sLuR::synapse0x2ebf890() {
   return (neuron0x2e982a0()*0.0688723);
}

double NNfunction_sb_sLuR::synapse0x2ebf8d0() {
   return (neuron0x2e98550()*0.177598);
}

double NNfunction_sb_sLuR::synapse0x2ebf910() {
   return (neuron0x2e98890()*0.310155);
}

double NNfunction_sb_sLuR::synapse0x2ebf950() {
   return (neuron0x2e98bd0()*-1.67282);
}

double NNfunction_sb_sLuR::synapse0x2ebf990() {
   return (neuron0x2e98f10()*0.0559983);
}

double NNfunction_sb_sLuR::synapse0x2ebf9d0() {
   return (neuron0x2e99250()*0.0794306);
}

double NNfunction_sb_sLuR::synapse0x2ebfa10() {
   return (neuron0x2e99590()*0.080599);
}

double NNfunction_sb_sLuR::synapse0x2ebfa50() {
   return (neuron0x2e998d0()*-0.0474214);
}

double NNfunction_sb_sLuR::synapse0x2ebfa90() {
   return (neuron0x2e99c10()*0.0355411);
}

double NNfunction_sb_sLuR::synapse0x2ebfad0() {
   return (neuron0x2e99f50()*0.134567);
}

double NNfunction_sb_sLuR::synapse0x2ebfb10() {
   return (neuron0x2e9a290()*0.134139);
}

double NNfunction_sb_sLuR::synapse0x2ebfb50() {
   return (neuron0x2e9a5d0()*0.0372223);
}

double NNfunction_sb_sLuR::synapse0x2ebfb90() {
   return (neuron0x2e9a910()*-1.01405);
}

double NNfunction_sb_sLuR::synapse0x2ebfbd0() {
   return (neuron0x2e9ac50()*-0.062768);
}

double NNfunction_sb_sLuR::synapse0x2ebfc10() {
   return (neuron0x2e9af90()*-0.952025);
}

double NNfunction_sb_sLuR::synapse0x2ebfc50() {
   return (neuron0x2e9b2d0()*0.0688929);
}

double NNfunction_sb_sLuR::synapse0x2eada00() {
   return (neuron0x2e9b610()*-0.0903099);
}

double NNfunction_sb_sLuR::synapse0x2eada40() {
   return (neuron0x2e9bb70()*-0.256071);
}

double NNfunction_sb_sLuR::synapse0x2ebfda0() {
   return (neuron0x2e9bd90()*-0.0343481);
}

double NNfunction_sb_sLuR::synapse0x2ebfde0() {
   return (neuron0x2e9c0d0()*0.0401296);
}

double NNfunction_sb_sLuR::synapse0x2ebfe20() {
   return (neuron0x2e9c410()*0.0238721);
}

double NNfunction_sb_sLuR::synapse0x2ebfe60() {
   return (neuron0x2e9c750()*0.0773675);
}

double NNfunction_sb_sLuR::synapse0x2ebfea0() {
   return (neuron0x2e9ca90()*-0.0253777);
}

double NNfunction_sb_sLuR::synapse0x2ebfee0() {
   return (neuron0x2e9cdd0()*-0.100346);
}

double NNfunction_sb_sLuR::synapse0x2ec0260() {
   return (neuron0x2e982a0()*0.301118);
}

double NNfunction_sb_sLuR::synapse0x2ec02a0() {
   return (neuron0x2e98550()*0.448684);
}

double NNfunction_sb_sLuR::synapse0x2ec02e0() {
   return (neuron0x2e98890()*-0.966143);
}

double NNfunction_sb_sLuR::synapse0x2ec0320() {
   return (neuron0x2e98bd0()*-0.102354);
}

double NNfunction_sb_sLuR::synapse0x2ec0360() {
   return (neuron0x2e98f10()*-0.113041);
}

double NNfunction_sb_sLuR::synapse0x2ec03a0() {
   return (neuron0x2e99250()*-0.407905);
}

double NNfunction_sb_sLuR::synapse0x2ec03e0() {
   return (neuron0x2e99590()*0.120711);
}

double NNfunction_sb_sLuR::synapse0x2ec0420() {
   return (neuron0x2e998d0()*-0.104825);
}

double NNfunction_sb_sLuR::synapse0x2ec0460() {
   return (neuron0x2e99c10()*0.152101);
}

double NNfunction_sb_sLuR::synapse0x2ec04a0() {
   return (neuron0x2e99f50()*-0.469631);
}

double NNfunction_sb_sLuR::synapse0x2ec04e0() {
   return (neuron0x2e9a290()*-0.176216);
}

double NNfunction_sb_sLuR::synapse0x2ec0520() {
   return (neuron0x2e9a5d0()*0.567493);
}

double NNfunction_sb_sLuR::synapse0x2ec0560() {
   return (neuron0x2e9a910()*-0.230071);
}

double NNfunction_sb_sLuR::synapse0x2ec05a0() {
   return (neuron0x2e9ac50()*0.53818);
}

double NNfunction_sb_sLuR::synapse0x2ec05e0() {
   return (neuron0x2e9af90()*0.10998);
}

double NNfunction_sb_sLuR::synapse0x2ec0620() {
   return (neuron0x2e9b2d0()*0.371364);
}

double NNfunction_sb_sLuR::synapse0x2ec00b0() {
   return (neuron0x2e9b610()*-0.269253);
}

double NNfunction_sb_sLuR::synapse0x2ec00f0() {
   return (neuron0x2e9bb70()*0.0941225);
}

double NNfunction_sb_sLuR::synapse0x2ec0770() {
   return (neuron0x2e9bd90()*0.606477);
}

double NNfunction_sb_sLuR::synapse0x2ec07b0() {
   return (neuron0x2e9c0d0()*-0.347743);
}

double NNfunction_sb_sLuR::synapse0x2ec07f0() {
   return (neuron0x2e9c410()*-0.112205);
}

double NNfunction_sb_sLuR::synapse0x2ec0830() {
   return (neuron0x2e9c750()*-0.576149);
}

double NNfunction_sb_sLuR::synapse0x2ec0870() {
   return (neuron0x2e9ca90()*-0.0667162);
}

double NNfunction_sb_sLuR::synapse0x2ec08b0() {
   return (neuron0x2e9cdd0()*-0.416066);
}

double NNfunction_sb_sLuR::synapse0x2ec0c30() {
   return (neuron0x2e982a0()*0.136282);
}

double NNfunction_sb_sLuR::synapse0x2ec0c70() {
   return (neuron0x2e98550()*-0.556081);
}

double NNfunction_sb_sLuR::synapse0x2ec0cb0() {
   return (neuron0x2e98890()*0.233127);
}

double NNfunction_sb_sLuR::synapse0x2ec0cf0() {
   return (neuron0x2e98bd0()*1.27121);
}

double NNfunction_sb_sLuR::synapse0x2ec0d30() {
   return (neuron0x2e98f10()*0.00839166);
}

double NNfunction_sb_sLuR::synapse0x2ec0d70() {
   return (neuron0x2e99250()*0.138453);
}

double NNfunction_sb_sLuR::synapse0x2ec0db0() {
   return (neuron0x2e99590()*0.0569803);
}

double NNfunction_sb_sLuR::synapse0x2ec0df0() {
   return (neuron0x2e998d0()*-0.163311);
}

double NNfunction_sb_sLuR::synapse0x2ec0e30() {
   return (neuron0x2e99c10()*0.129969);
}

double NNfunction_sb_sLuR::synapse0x2ec0e70() {
   return (neuron0x2e99f50()*-0.10243);
}

double NNfunction_sb_sLuR::synapse0x2ec0eb0() {
   return (neuron0x2e9a290()*-0.0316455);
}

double NNfunction_sb_sLuR::synapse0x2ec0ef0() {
   return (neuron0x2e9a5d0()*0.0353589);
}

double NNfunction_sb_sLuR::synapse0x2ec0f30() {
   return (neuron0x2e9a910()*-0.0951046);
}

double NNfunction_sb_sLuR::synapse0x2ec0f70() {
   return (neuron0x2e9ac50()*-0.00445658);
}

double NNfunction_sb_sLuR::synapse0x2ec0fb0() {
   return (neuron0x2e9af90()*-0.430936);
}

double NNfunction_sb_sLuR::synapse0x2ec0ff0() {
   return (neuron0x2e9b2d0()*-0.00492219);
}

double NNfunction_sb_sLuR::synapse0x2ec0a80() {
   return (neuron0x2e9b610()*-0.111677);
}

double NNfunction_sb_sLuR::synapse0x2ec0ac0() {
   return (neuron0x2e9bb70()*-0.0339517);
}

double NNfunction_sb_sLuR::synapse0x2ec1140() {
   return (neuron0x2e9bd90()*-0.0595509);
}

double NNfunction_sb_sLuR::synapse0x2ec1180() {
   return (neuron0x2e9c0d0()*0.0703431);
}

double NNfunction_sb_sLuR::synapse0x2ec11c0() {
   return (neuron0x2e9c410()*0.182328);
}

double NNfunction_sb_sLuR::synapse0x2ec1200() {
   return (neuron0x2e9c750()*0.160118);
}

double NNfunction_sb_sLuR::synapse0x2ec1240() {
   return (neuron0x2e9ca90()*0.0609311);
}

double NNfunction_sb_sLuR::synapse0x2ec1280() {
   return (neuron0x2e9cdd0()*0.122231);
}

double NNfunction_sb_sLuR::synapse0x2ec1600() {
   return (neuron0x2e982a0()*0.10852);
}

double NNfunction_sb_sLuR::synapse0x2ec1640() {
   return (neuron0x2e98550()*-0.131892);
}

double NNfunction_sb_sLuR::synapse0x2ec1680() {
   return (neuron0x2e98890()*-0.299907);
}

double NNfunction_sb_sLuR::synapse0x2ec16c0() {
   return (neuron0x2e98bd0()*-0.93325);
}

double NNfunction_sb_sLuR::synapse0x2ec1700() {
   return (neuron0x2e98f10()*0.300703);
}

double NNfunction_sb_sLuR::synapse0x2ec1740() {
   return (neuron0x2e99250()*0.373813);
}

double NNfunction_sb_sLuR::synapse0x2ec1780() {
   return (neuron0x2e99590()*0.0676465);
}

double NNfunction_sb_sLuR::synapse0x2ec17c0() {
   return (neuron0x2e998d0()*-0.412141);
}

double NNfunction_sb_sLuR::synapse0x2ec1800() {
   return (neuron0x2e99c10()*-0.060281);
}

double NNfunction_sb_sLuR::synapse0x2ec1840() {
   return (neuron0x2e99f50()*-0.122905);
}

double NNfunction_sb_sLuR::synapse0x2ec1880() {
   return (neuron0x2e9a290()*0.138619);
}

double NNfunction_sb_sLuR::synapse0x2ec18c0() {
   return (neuron0x2e9a5d0()*0.523097);
}

double NNfunction_sb_sLuR::synapse0x2ec1900() {
   return (neuron0x2e9a910()*-0.0541821);
}

double NNfunction_sb_sLuR::synapse0x2ec1940() {
   return (neuron0x2e9ac50()*-0.0773785);
}

double NNfunction_sb_sLuR::synapse0x2ec1980() {
   return (neuron0x2e9af90()*0.840172);
}

double NNfunction_sb_sLuR::synapse0x2ec19c0() {
   return (neuron0x2e9b2d0()*0.182523);
}

double NNfunction_sb_sLuR::synapse0x2ec1450() {
   return (neuron0x2e9b610()*-0.340682);
}

double NNfunction_sb_sLuR::synapse0x2ec1490() {
   return (neuron0x2e9bb70()*-0.185954);
}

double NNfunction_sb_sLuR::synapse0x2ec1b10() {
   return (neuron0x2e9bd90()*0.208018);
}

double NNfunction_sb_sLuR::synapse0x2ec1b50() {
   return (neuron0x2e9c0d0()*-0.120711);
}

double NNfunction_sb_sLuR::synapse0x2ec1b90() {
   return (neuron0x2e9c410()*0.414191);
}

double NNfunction_sb_sLuR::synapse0x2ec1bd0() {
   return (neuron0x2e9c750()*0.252661);
}

double NNfunction_sb_sLuR::synapse0x2ec1c10() {
   return (neuron0x2e9ca90()*0.154911);
}

double NNfunction_sb_sLuR::synapse0x2ec1c50() {
   return (neuron0x2e9cdd0()*0.0858994);
}

double NNfunction_sb_sLuR::synapse0x2c61a60() {
   return (neuron0x2e9d240()*0.285414);
}

double NNfunction_sb_sLuR::synapse0x2c61aa0() {
   return (neuron0x2e9db90()*0.472469);
}

double NNfunction_sb_sLuR::synapse0x2e9f700() {
   return (neuron0x2e9e670()*-0.356257);
}

double NNfunction_sb_sLuR::synapse0x2e9f740() {
   return (neuron0x2e9e110()*-0.00131369);
}

double NNfunction_sb_sLuR::synapse0x2ea00d0() {
   return (neuron0x2e9f450()*0.0337046);
}

double NNfunction_sb_sLuR::synapse0x2ea0110() {
   return (neuron0x2e9fe20()*-0.525313);
}

double NNfunction_sb_sLuR::synapse0x2ea0ea0() {
   return (neuron0x2ea0bf0()*-0.230499);
}

double NNfunction_sb_sLuR::synapse0x2ea0ee0() {
   return (neuron0x2ea15c0()*-0.0184209);
}

double NNfunction_sb_sLuR::synapse0x2ea1870() {
   return (neuron0x2ea1f90()*0.299377);
}

double NNfunction_sb_sLuR::synapse0x2ea18b0() {
   return (neuron0x2ea2a70()*0.132183);
}

double NNfunction_sb_sLuR::synapse0x2ea2240() {
   return (neuron0x2ea3440()*0.202282);
}

double NNfunction_sb_sLuR::synapse0x2ea2280() {
   return (neuron0x2ea0520()*-0.223255);
}

double NNfunction_sb_sLuR::synapse0x2ea2d20() {
   return (neuron0x2ea4ff0()*0.211909);
}

double NNfunction_sb_sLuR::synapse0x2ea2d60() {
   return (neuron0x2ea59c0()*0.0550864);
}

double NNfunction_sb_sLuR::synapse0x2ea36f0() {
   return (neuron0x2ea6390()*0.429762);
}

double NNfunction_sb_sLuR::synapse0x2ea3730() {
   return (neuron0x2ea6d60()*-1.35792);
}

double NNfunction_sb_sLuR::synapse0x2ea07d0() {
   return (neuron0x2ea8b70()*0.102398);
}

double NNfunction_sb_sLuR::synapse0x2ea0810() {
   return (neuron0x2ea8e50()*-0.333538);
}

double NNfunction_sb_sLuR::synapse0x2ea52a0() {
   return (neuron0x2ea9820()*-0.442087);
}

double NNfunction_sb_sLuR::synapse0x2ea52e0() {
   return (neuron0x2eaa1f0()*-0.140166);
}

double NNfunction_sb_sLuR::synapse0x2ea5c70() {
   return (neuron0x2eaabc0()*0.314045);
}

double NNfunction_sb_sLuR::synapse0x2ea5cb0() {
   return (neuron0x2eab590()*-0.822644);
}

double NNfunction_sb_sLuR::synapse0x2ea6640() {
   return (neuron0x2ea40e0()*0.0950969);
}

double NNfunction_sb_sLuR::synapse0x2ea6680() {
   return (neuron0x2ea4ab0()*-2.70505);
}

double NNfunction_sb_sLuR::synapse0x2ea7010() {
   return (neuron0x2eae320()*-0.268668);
}

double NNfunction_sb_sLuR::synapse0x2ea7050() {
   return (neuron0x2eaecf0()*-0.304751);
}

double NNfunction_sb_sLuR::synapse0x2e9b1b0() {
   return (neuron0x2eaf6c0()*0.246024);
}

double NNfunction_sb_sLuR::synapse0x2e9b1f0() {
   return (neuron0x2eb0090()*4.758);
}

double NNfunction_sb_sLuR::synapse0x2ea9100() {
   return (neuron0x2eb0a60()*0.0666859);
}

double NNfunction_sb_sLuR::synapse0x2ea9140() {
   return (neuron0x2eb1430()*0.426628);
}

double NNfunction_sb_sLuR::synapse0x2ea9ad0() {
   return (neuron0x2eb1e00()*-0.431396);
}

double NNfunction_sb_sLuR::synapse0x2ea9b10() {
   return (neuron0x2eb27d0()*1.28472);
}

double NNfunction_sb_sLuR::synapse0x2eaa4a0() {
   return (neuron0x2ea8860()*0.364328);
}

double NNfunction_sb_sLuR::synapse0x2eaa4e0() {
   return (neuron0x2eb53b0()*1.46187);
}

double NNfunction_sb_sLuR::synapse0x2eaae70() {
   return (neuron0x2eb5d80()*0.0784672);
}

double NNfunction_sb_sLuR::synapse0x2eaaeb0() {
   return (neuron0x2eb6750()*-0.351688);
}

double NNfunction_sb_sLuR::synapse0x2eab840() {
   return (neuron0x2eb7120()*-0.387051);
}

double NNfunction_sb_sLuR::synapse0x2eab880() {
   return (neuron0x2eb7af0()*-0.183718);
}

double NNfunction_sb_sLuR::synapse0x2ea4390() {
   return (neuron0x2eb84c0()*-0.173654);
}

double NNfunction_sb_sLuR::synapse0x2ea43d0() {
   return (neuron0x2eb8e90()*-0.188807);
}

double NNfunction_sb_sLuR::synapse0x2eadc40() {
   return (neuron0x2eb9860()*0.0647163);
}

double NNfunction_sb_sLuR::synapse0x2eadc80() {
   return (neuron0x2eba440()*0.208073);
}

double NNfunction_sb_sLuR::synapse0x2eae5d0() {
   return (neuron0x2ebae10()*0.36566);
}

double NNfunction_sb_sLuR::synapse0x2eae610() {
   return (neuron0x2eabc90()*0.230673);
}

double NNfunction_sb_sLuR::synapse0x2eaefa0() {
   return (neuron0x2eac660()*-0.319211);
}

double NNfunction_sb_sLuR::synapse0x2eaefe0() {
   return (neuron0x2ead030()*0.0730934);
}

double NNfunction_sb_sLuR::synapse0x2eaf970() {
   return (neuron0x2ebf670()*0.323058);
}

double NNfunction_sb_sLuR::synapse0x2eaf9b0() {
   return (neuron0x2ebff20()*-0.216477);
}

double NNfunction_sb_sLuR::synapse0x2eb0340() {
   return (neuron0x2ec08f0()*-0.113566);
}

double NNfunction_sb_sLuR::synapse0x2eb0380() {
   return (neuron0x2ec12c0()*0.414043);
}

double NNfunction_sb_sLuR::synapse0x2eb2a80() {
   return (neuron0x2e9d240()*0.345452);
}

double NNfunction_sb_sLuR::synapse0x2eb2ac0() {
   return (neuron0x2e9db90()*-0.301202);
}

double NNfunction_sb_sLuR::synapse0x2ea8040() {
   return (neuron0x2e9e670()*-0.750883);
}

double NNfunction_sb_sLuR::synapse0x2ea8080() {
   return (neuron0x2e9e110()*0.053223);
}

double NNfunction_sb_sLuR::synapse0x2eb5660() {
   return (neuron0x2e9f450()*-0.282123);
}

double NNfunction_sb_sLuR::synapse0x2eb56a0() {
   return (neuron0x2e9fe20()*0.0364973);
}

double NNfunction_sb_sLuR::synapse0x2eb6030() {
   return (neuron0x2ea0bf0()*-0.542322);
}

double NNfunction_sb_sLuR::synapse0x2eb6070() {
   return (neuron0x2ea15c0()*-0.15584);
}

double NNfunction_sb_sLuR::synapse0x2eb6a00() {
   return (neuron0x2ea1f90()*0.106378);
}

double NNfunction_sb_sLuR::synapse0x2eb6a40() {
   return (neuron0x2ea2a70()*-0.128483);
}

double NNfunction_sb_sLuR::synapse0x2eb73d0() {
   return (neuron0x2ea3440()*-0.310158);
}

double NNfunction_sb_sLuR::synapse0x2eb7410() {
   return (neuron0x2ea0520()*-0.197354);
}

double NNfunction_sb_sLuR::synapse0x2eb7da0() {
   return (neuron0x2ea4ff0()*0.312847);
}

double NNfunction_sb_sLuR::synapse0x2eb7de0() {
   return (neuron0x2ea59c0()*-0.28116);
}

double NNfunction_sb_sLuR::synapse0x2eb8770() {
   return (neuron0x2ea6390()*-0.741052);
}

double NNfunction_sb_sLuR::synapse0x2eb87b0() {
   return (neuron0x2ea6d60()*-0.346908);
}

double NNfunction_sb_sLuR::synapse0x2eb9140() {
   return (neuron0x2ea8b70()*0.24502);
}

double NNfunction_sb_sLuR::synapse0x2eb9180() {
   return (neuron0x2ea8e50()*0.0231122);
}

double NNfunction_sb_sLuR::synapse0x2eb9b10() {
   return (neuron0x2ea9820()*0.0843365);
}

double NNfunction_sb_sLuR::synapse0x2eb9b50() {
   return (neuron0x2eaa1f0()*-0.317749);
}

double NNfunction_sb_sLuR::synapse0x2eba6f0() {
   return (neuron0x2eaabc0()*-0.547686);
}

double NNfunction_sb_sLuR::synapse0x2eba730() {
   return (neuron0x2eab590()*-0.52828);
}

double NNfunction_sb_sLuR::synapse0x2ebb0c0() {
   return (neuron0x2ea40e0()*-0.193561);
}

double NNfunction_sb_sLuR::synapse0x2ebb100() {
   return (neuron0x2ea4ab0()*0.11629);
}

double NNfunction_sb_sLuR::synapse0x2eabf40() {
   return (neuron0x2eae320()*-0.33906);
}

double NNfunction_sb_sLuR::synapse0x2eabf80() {
   return (neuron0x2eaecf0()*-0.315694);
}

double NNfunction_sb_sLuR::synapse0x2eac910() {
   return (neuron0x2eaf6c0()*0.117381);
}

double NNfunction_sb_sLuR::synapse0x2eac950() {
   return (neuron0x2eb0090()*0.158389);
}

double NNfunction_sb_sLuR::synapse0x2ead2e0() {
   return (neuron0x2eb0a60()*-0.521513);
}

double NNfunction_sb_sLuR::synapse0x2ead320() {
   return (neuron0x2eb1430()*0.46399);
}

double NNfunction_sb_sLuR::synapse0x2ebf800() {
   return (neuron0x2eb1e00()*-0.671115);
}

double NNfunction_sb_sLuR::synapse0x2ebf840() {
   return (neuron0x2eb27d0()*0.463888);
}

double NNfunction_sb_sLuR::synapse0x2ec01d0() {
   return (neuron0x2ea8860()*0.0691548);
}

double NNfunction_sb_sLuR::synapse0x2ec0210() {
   return (neuron0x2eb53b0()*-0.0544161);
}

double NNfunction_sb_sLuR::synapse0x2ec0ba0() {
   return (neuron0x2eb5d80()*0.136528);
}

double NNfunction_sb_sLuR::synapse0x2ec0be0() {
   return (neuron0x2eb6750()*-0.307976);
}

double NNfunction_sb_sLuR::synapse0x2ec1570() {
   return (neuron0x2eb7120()*0.588929);
}

double NNfunction_sb_sLuR::synapse0x2ec15b0() {
   return (neuron0x2eb7af0()*0.225805);
}

double NNfunction_sb_sLuR::synapse0x2e9d460() {
   return (neuron0x2eb84c0()*-0.393741);
}

double NNfunction_sb_sLuR::synapse0x2e9d4a0() {
   return (neuron0x2eb8e90()*-0.398517);
}

double NNfunction_sb_sLuR::synapse0x2eb0d10() {
   return (neuron0x2eb9860()*-0.371336);
}

double NNfunction_sb_sLuR::synapse0x2eb0d50() {
   return (neuron0x2eba440()*-0.240625);
}

double NNfunction_sb_sLuR::synapse0x2ec1c90() {
   return (neuron0x2ebae10()*0.0876844);
}

double NNfunction_sb_sLuR::synapse0x2ec1cd0() {
   return (neuron0x2eabc90()*0.179533);
}

double NNfunction_sb_sLuR::synapse0x2ec1d10() {
   return (neuron0x2eac660()*-0.0317336);
}

double NNfunction_sb_sLuR::synapse0x2ec1d50() {
   return (neuron0x2ead030()*0.0603625);
}

double NNfunction_sb_sLuR::synapse0x2ec8c00() {
   return (neuron0x2ebf670()*-0.39373);
}

double NNfunction_sb_sLuR::synapse0x2ec8c40() {
   return (neuron0x2ebff20()*0.35138);
}

double NNfunction_sb_sLuR::synapse0x2ec8c80() {
   return (neuron0x2ec08f0()*-0.496086);
}

double NNfunction_sb_sLuR::synapse0x2ec8cc0() {
   return (neuron0x2ec12c0()*0.265157);
}

double NNfunction_sb_sLuR::synapse0x2ec9040() {
   return (neuron0x2e9d240()*1.6904);
}

double NNfunction_sb_sLuR::synapse0x2ec9080() {
   return (neuron0x2e9db90()*3.50124);
}

double NNfunction_sb_sLuR::synapse0x2ec90c0() {
   return (neuron0x2e9e670()*-1.55143);
}

double NNfunction_sb_sLuR::synapse0x2ec9100() {
   return (neuron0x2e9e110()*0.909744);
}

double NNfunction_sb_sLuR::synapse0x2ec9140() {
   return (neuron0x2e9f450()*0.565849);
}

double NNfunction_sb_sLuR::synapse0x2ec9180() {
   return (neuron0x2e9fe20()*1.14796);
}

double NNfunction_sb_sLuR::synapse0x2ec91c0() {
   return (neuron0x2ea0bf0()*0.287373);
}

double NNfunction_sb_sLuR::synapse0x2ec9200() {
   return (neuron0x2ea15c0()*1.0944);
}

double NNfunction_sb_sLuR::synapse0x2ec9240() {
   return (neuron0x2ea1f90()*1.31799);
}

double NNfunction_sb_sLuR::synapse0x2ec9280() {
   return (neuron0x2ea2a70()*-0.581307);
}

double NNfunction_sb_sLuR::synapse0x2ec92c0() {
   return (neuron0x2ea3440()*0.158703);
}

double NNfunction_sb_sLuR::synapse0x2ec9300() {
   return (neuron0x2ea0520()*0.384996);
}

double NNfunction_sb_sLuR::synapse0x2ec9340() {
   return (neuron0x2ea4ff0()*-0.326065);
}

double NNfunction_sb_sLuR::synapse0x2ec9380() {
   return (neuron0x2ea59c0()*1.28548);
}

double NNfunction_sb_sLuR::synapse0x2ec93c0() {
   return (neuron0x2ea6390()*-1.50581);
}

double NNfunction_sb_sLuR::synapse0x2ec9400() {
   return (neuron0x2ea6d60()*-2.05595);
}

double NNfunction_sb_sLuR::synapse0x2ec8e90() {
   return (neuron0x2ea8b70()*-2.49645);
}

double NNfunction_sb_sLuR::synapse0x2ec8ed0() {
   return (neuron0x2ea8e50()*-1.3779);
}

double NNfunction_sb_sLuR::synapse0x2ec9550() {
   return (neuron0x2ea9820()*-0.64818);
}

double NNfunction_sb_sLuR::synapse0x2ec9590() {
   return (neuron0x2eaa1f0()*0.409652);
}

double NNfunction_sb_sLuR::synapse0x2ec95d0() {
   return (neuron0x2eaabc0()*0.293266);
}

double NNfunction_sb_sLuR::synapse0x2ec9610() {
   return (neuron0x2eab590()*-1.99068);
}

double NNfunction_sb_sLuR::synapse0x2ec9650() {
   return (neuron0x2ea40e0()*-2.76969);
}

double NNfunction_sb_sLuR::synapse0x2ec9690() {
   return (neuron0x2ea4ab0()*-1.21599);
}

double NNfunction_sb_sLuR::synapse0x2ec96d0() {
   return (neuron0x2eae320()*-0.14806);
}

double NNfunction_sb_sLuR::synapse0x2ec9710() {
   return (neuron0x2eaecf0()*-2.42463);
}

double NNfunction_sb_sLuR::synapse0x2ec9750() {
   return (neuron0x2eaf6c0()*-1.23871);
}

double NNfunction_sb_sLuR::synapse0x2ec9790() {
   return (neuron0x2eb0090()*3.32281);
}

double NNfunction_sb_sLuR::synapse0x2ec97d0() {
   return (neuron0x2eb0a60()*-1.98811);
}

double NNfunction_sb_sLuR::synapse0x2ec9810() {
   return (neuron0x2eb1430()*1.41237);
}

double NNfunction_sb_sLuR::synapse0x2ec9850() {
   return (neuron0x2eb1e00()*0.226609);
}

double NNfunction_sb_sLuR::synapse0x2ec9890() {
   return (neuron0x2eb27d0()*2.42047);
}

double NNfunction_sb_sLuR::synapse0x2ec9440() {
   return (neuron0x2ea8860()*0.630175);
}

double NNfunction_sb_sLuR::synapse0x2ec9480() {
   return (neuron0x2eb53b0()*-0.0512081);
}

double NNfunction_sb_sLuR::synapse0x2ec94c0() {
   return (neuron0x2eb5d80()*0.824046);
}

double NNfunction_sb_sLuR::synapse0x2ec9500() {
   return (neuron0x2eb6750()*0.355254);
}

double NNfunction_sb_sLuR::synapse0x2ec9ae0() {
   return (neuron0x2eb7120()*0.553421);
}

double NNfunction_sb_sLuR::synapse0x2ec9b20() {
   return (neuron0x2eb7af0()*-0.77371);
}

double NNfunction_sb_sLuR::synapse0x2ec9b60() {
   return (neuron0x2eb84c0()*0.100824);
}

double NNfunction_sb_sLuR::synapse0x2ec9ba0() {
   return (neuron0x2eb8e90()*0.838221);
}

double NNfunction_sb_sLuR::synapse0x2ec9be0() {
   return (neuron0x2eb9860()*1.19826);
}

double NNfunction_sb_sLuR::synapse0x2ec9c20() {
   return (neuron0x2eba440()*0.460105);
}

double NNfunction_sb_sLuR::synapse0x2ec9c60() {
   return (neuron0x2ebae10()*0.995903);
}

double NNfunction_sb_sLuR::synapse0x2ec9ca0() {
   return (neuron0x2eabc90()*-1.01594);
}

double NNfunction_sb_sLuR::synapse0x2ec9ce0() {
   return (neuron0x2eac660()*-2.10999);
}

double NNfunction_sb_sLuR::synapse0x2ec9d20() {
   return (neuron0x2ead030()*2.21865);
}

double NNfunction_sb_sLuR::synapse0x2ec9d60() {
   return (neuron0x2ebf670()*1.7989);
}

double NNfunction_sb_sLuR::synapse0x2ec9da0() {
   return (neuron0x2ebff20()*-0.694595);
}

double NNfunction_sb_sLuR::synapse0x2ec9de0() {
   return (neuron0x2ec08f0()*3.24635);
}

double NNfunction_sb_sLuR::synapse0x2ec9e20() {
   return (neuron0x2ec12c0()*0.430585);
}

double NNfunction_sb_sLuR::synapse0x2eca1a0() {
   return (neuron0x2e9d240()*-0.241832);
}

double NNfunction_sb_sLuR::synapse0x2eca1e0() {
   return (neuron0x2e9db90()*0.699781);
}

double NNfunction_sb_sLuR::synapse0x2eca220() {
   return (neuron0x2e9e670()*0.188935);
}

double NNfunction_sb_sLuR::synapse0x2eca260() {
   return (neuron0x2e9e110()*0.0228355);
}

double NNfunction_sb_sLuR::synapse0x2eca2a0() {
   return (neuron0x2e9f450()*-0.0817611);
}

double NNfunction_sb_sLuR::synapse0x2eca2e0() {
   return (neuron0x2e9fe20()*0.380024);
}

double NNfunction_sb_sLuR::synapse0x2eca320() {
   return (neuron0x2ea0bf0()*0.161732);
}

double NNfunction_sb_sLuR::synapse0x2eca360() {
   return (neuron0x2ea15c0()*0.019864);
}

double NNfunction_sb_sLuR::synapse0x2eca3a0() {
   return (neuron0x2ea1f90()*0.244616);
}

double NNfunction_sb_sLuR::synapse0x2eca3e0() {
   return (neuron0x2ea2a70()*-0.122198);
}

double NNfunction_sb_sLuR::synapse0x2eca420() {
   return (neuron0x2ea3440()*-0.185509);
}

double NNfunction_sb_sLuR::synapse0x2eca460() {
   return (neuron0x2ea0520()*0.196751);
}

double NNfunction_sb_sLuR::synapse0x2eca4a0() {
   return (neuron0x2ea4ff0()*-0.156223);
}

double NNfunction_sb_sLuR::synapse0x2eca4e0() {
   return (neuron0x2ea59c0()*-0.0101518);
}

double NNfunction_sb_sLuR::synapse0x2eca520() {
   return (neuron0x2ea6390()*-0.32758);
}

double NNfunction_sb_sLuR::synapse0x2eca560() {
   return (neuron0x2ea6d60()*0.940542);
}

double NNfunction_sb_sLuR::synapse0x2ec9ff0() {
   return (neuron0x2ea8b70()*-0.0425719);
}

double NNfunction_sb_sLuR::synapse0x2eca030() {
   return (neuron0x2ea8e50()*0.27969);
}

double NNfunction_sb_sLuR::synapse0x2eca6b0() {
   return (neuron0x2ea9820()*0.350619);
}

double NNfunction_sb_sLuR::synapse0x2eca6f0() {
   return (neuron0x2eaa1f0()*0.129075);
}

double NNfunction_sb_sLuR::synapse0x2eca730() {
   return (neuron0x2eaabc0()*-0.274152);
}

double NNfunction_sb_sLuR::synapse0x2eca770() {
   return (neuron0x2eab590()*-1.07656);
}

double NNfunction_sb_sLuR::synapse0x2eca7b0() {
   return (neuron0x2ea40e0()*-0.0587);
}

double NNfunction_sb_sLuR::synapse0x2eca7f0() {
   return (neuron0x2ea4ab0()*-1.0107);
}

double NNfunction_sb_sLuR::synapse0x2eca830() {
   return (neuron0x2eae320()*0.216878);
}

double NNfunction_sb_sLuR::synapse0x2eca870() {
   return (neuron0x2eaecf0()*0.27968);
}

double NNfunction_sb_sLuR::synapse0x2eca8b0() {
   return (neuron0x2eaf6c0()*-0.172342);
}

double NNfunction_sb_sLuR::synapse0x2eca8f0() {
   return (neuron0x2eb0090()*-2.63606);
}

double NNfunction_sb_sLuR::synapse0x2eca930() {
   return (neuron0x2eb0a60()*0.328351);
}

double NNfunction_sb_sLuR::synapse0x2eca970() {
   return (neuron0x2eb1430()*0.935336);
}

double NNfunction_sb_sLuR::synapse0x2eca9b0() {
   return (neuron0x2eb1e00()*2.05326);
}

double NNfunction_sb_sLuR::synapse0x2eca9f0() {
   return (neuron0x2eb27d0()*-2.97129);
}

double NNfunction_sb_sLuR::synapse0x2eca5a0() {
   return (neuron0x2ea8860()*-0.0366994);
}

double NNfunction_sb_sLuR::synapse0x2eca5e0() {
   return (neuron0x2eb53b0()*-1.39596);
}

double NNfunction_sb_sLuR::synapse0x2eca620() {
   return (neuron0x2eb5d80()*-0.0577895);
}

double NNfunction_sb_sLuR::synapse0x2eca660() {
   return (neuron0x2eb6750()*0.27889);
}

double NNfunction_sb_sLuR::synapse0x2ecac40() {
   return (neuron0x2eb7120()*0.905465);
}

double NNfunction_sb_sLuR::synapse0x2ecac80() {
   return (neuron0x2eb7af0()*0.169807);
}

double NNfunction_sb_sLuR::synapse0x2ecacc0() {
   return (neuron0x2eb84c0()*0.131495);
}

double NNfunction_sb_sLuR::synapse0x2ecad00() {
   return (neuron0x2eb8e90()*0.11677);
}

double NNfunction_sb_sLuR::synapse0x2ecad40() {
   return (neuron0x2eb9860()*-0.0968218);
}

double NNfunction_sb_sLuR::synapse0x2ecad80() {
   return (neuron0x2eba440()*-0.188095);
}

double NNfunction_sb_sLuR::synapse0x2ecadc0() {
   return (neuron0x2ebae10()*0.424363);
}

double NNfunction_sb_sLuR::synapse0x2ecae00() {
   return (neuron0x2eabc90()*-0.144091);
}

double NNfunction_sb_sLuR::synapse0x2ecae40() {
   return (neuron0x2eac660()*0.192945);
}

double NNfunction_sb_sLuR::synapse0x2ecae80() {
   return (neuron0x2ead030()*-0.033129);
}

double NNfunction_sb_sLuR::synapse0x2ecaec0() {
   return (neuron0x2ebf670()*-0.104341);
}

double NNfunction_sb_sLuR::synapse0x2ecaf00() {
   return (neuron0x2ebff20()*0.193175);
}

double NNfunction_sb_sLuR::synapse0x2ecaf40() {
   return (neuron0x2ec08f0()*0.00556584);
}

double NNfunction_sb_sLuR::synapse0x2ecaf80() {
   return (neuron0x2ec12c0()*-0.332962);
}

double NNfunction_sb_sLuR::synapse0x2ecb300() {
   return (neuron0x2e9d240()*-0.268079);
}

double NNfunction_sb_sLuR::synapse0x2ecb340() {
   return (neuron0x2e9db90()*-1.95588);
}

double NNfunction_sb_sLuR::synapse0x2ecb380() {
   return (neuron0x2e9e670()*0.352813);
}

double NNfunction_sb_sLuR::synapse0x2ecb3c0() {
   return (neuron0x2e9e110()*0.0398503);
}

double NNfunction_sb_sLuR::synapse0x2ecb400() {
   return (neuron0x2e9f450()*-0.105724);
}

double NNfunction_sb_sLuR::synapse0x2ecb440() {
   return (neuron0x2e9fe20()*0.592664);
}

double NNfunction_sb_sLuR::synapse0x2ecb480() {
   return (neuron0x2ea0bf0()*0.213829);
}

double NNfunction_sb_sLuR::synapse0x2ecb4c0() {
   return (neuron0x2ea15c0()*0.100079);
}

double NNfunction_sb_sLuR::synapse0x2ecb500() {
   return (neuron0x2ea1f90()*-0.158443);
}

double NNfunction_sb_sLuR::synapse0x2ecb540() {
   return (neuron0x2ea2a70()*-0.209792);
}

double NNfunction_sb_sLuR::synapse0x2ecb580() {
   return (neuron0x2ea3440()*-0.225335);
}

double NNfunction_sb_sLuR::synapse0x2ecb5c0() {
   return (neuron0x2ea0520()*0.286691);
}

double NNfunction_sb_sLuR::synapse0x2ecb600() {
   return (neuron0x2ea4ff0()*-0.233305);
}

double NNfunction_sb_sLuR::synapse0x2ecb640() {
   return (neuron0x2ea59c0()*0.00243602);
}

double NNfunction_sb_sLuR::synapse0x2ecb680() {
   return (neuron0x2ea6390()*-0.641728);
}

double NNfunction_sb_sLuR::synapse0x2ecb6c0() {
   return (neuron0x2ea6d60()*1.46886);
}

double NNfunction_sb_sLuR::synapse0x2ecb150() {
   return (neuron0x2ea8b70()*-0.0646633);
}

double NNfunction_sb_sLuR::synapse0x2ecb190() {
   return (neuron0x2ea8e50()*0.332459);
}

double NNfunction_sb_sLuR::synapse0x2ecb810() {
   return (neuron0x2ea9820()*0.4116);
}

double NNfunction_sb_sLuR::synapse0x2ecb850() {
   return (neuron0x2eaa1f0()*0.221442);
}

double NNfunction_sb_sLuR::synapse0x2ecb890() {
   return (neuron0x2eaabc0()*-0.355171);
}

double NNfunction_sb_sLuR::synapse0x2ecb8d0() {
   return (neuron0x2eab590()*0.567061);
}

double NNfunction_sb_sLuR::synapse0x2ecb910() {
   return (neuron0x2ea40e0()*0.0373478);
}

double NNfunction_sb_sLuR::synapse0x2ecb950() {
   return (neuron0x2ea4ab0()*0.145456);
}

double NNfunction_sb_sLuR::synapse0x2ecb990() {
   return (neuron0x2eae320()*0.301907);
}

double NNfunction_sb_sLuR::synapse0x2ecb9d0() {
   return (neuron0x2eaecf0()*0.19027);
}

double NNfunction_sb_sLuR::synapse0x2ecba10() {
   return (neuron0x2eaf6c0()*-0.286775);
}

double NNfunction_sb_sLuR::synapse0x2ecba50() {
   return (neuron0x2eb0090()*0.663423);
}

double NNfunction_sb_sLuR::synapse0x2ecba90() {
   return (neuron0x2eb0a60()*0.4323);
}

double NNfunction_sb_sLuR::synapse0x2ecbad0() {
   return (neuron0x2eb1430()*-0.120454);
}

double NNfunction_sb_sLuR::synapse0x2ecbb10() {
   return (neuron0x2eb1e00()*0.0124101);
}

double NNfunction_sb_sLuR::synapse0x2ecbb50() {
   return (neuron0x2eb27d0()*-2.94535);
}

double NNfunction_sb_sLuR::synapse0x2ecb700() {
   return (neuron0x2ea8860()*-0.539485);
}

double NNfunction_sb_sLuR::synapse0x2ecb740() {
   return (neuron0x2eb53b0()*-1.51027);
}

double NNfunction_sb_sLuR::synapse0x2ecb780() {
   return (neuron0x2eb5d80()*-0.0352381);
}

double NNfunction_sb_sLuR::synapse0x2ecb7c0() {
   return (neuron0x2eb6750()*0.407565);
}

double NNfunction_sb_sLuR::synapse0x2ecbda0() {
   return (neuron0x2eb7120()*0.611063);
}

double NNfunction_sb_sLuR::synapse0x2ecbde0() {
   return (neuron0x2eb7af0()*0.204961);
}

double NNfunction_sb_sLuR::synapse0x2ecbe20() {
   return (neuron0x2eb84c0()*0.177487);
}

double NNfunction_sb_sLuR::synapse0x2ecbe60() {
   return (neuron0x2eb8e90()*0.182298);
}

double NNfunction_sb_sLuR::synapse0x2ecbea0() {
   return (neuron0x2eb9860()*-0.106709);
}

double NNfunction_sb_sLuR::synapse0x2ecbee0() {
   return (neuron0x2eba440()*-0.249561);
}

double NNfunction_sb_sLuR::synapse0x2ecbf20() {
   return (neuron0x2ebae10()*-0.154324);
}

double NNfunction_sb_sLuR::synapse0x2ecbf60() {
   return (neuron0x2eabc90()*-0.216638);
}

double NNfunction_sb_sLuR::synapse0x2ecbfa0() {
   return (neuron0x2eac660()*0.311432);
}

double NNfunction_sb_sLuR::synapse0x2ecbfe0() {
   return (neuron0x2ead030()*-0.0810376);
}

double NNfunction_sb_sLuR::synapse0x2ecc020() {
   return (neuron0x2ebf670()*0.0325116);
}

double NNfunction_sb_sLuR::synapse0x2ecc060() {
   return (neuron0x2ebff20()*0.234281);
}

double NNfunction_sb_sLuR::synapse0x2ecc0a0() {
   return (neuron0x2ec08f0()*0.0964814);
}

double NNfunction_sb_sLuR::synapse0x2ecc0e0() {
   return (neuron0x2ec12c0()*-0.446689);
}

double NNfunction_sb_sLuR::synapse0x2ecc340() {
   return (neuron0x2ec84c0()*-6.32183);
}

double NNfunction_sb_sLuR::synapse0x2ecc380() {
   return (neuron0x2ec8860()*0.558239);
}

double NNfunction_sb_sLuR::synapse0x2ecc3c0() {
   return (neuron0x2ec8d00()*-5.33301);
}

double NNfunction_sb_sLuR::synapse0x2ecc400() {
   return (neuron0x2ec9e60()*-6.36817);
}

double NNfunction_sb_sLuR::synapse0x2ecc440() {
   return (neuron0x2ecafc0()*6.62117);
}

