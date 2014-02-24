#include "NNfunction_ss_cLuL.h"
#include <cmath>

double NNfunction_ss_cLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.551)/15.3337;
   input1 = (in1 - -0.407008)/1141.6;
   input2 = (in2 - 663.646)/622.41;
   input3 = (in3 - -50.7)/823.676;
   input4 = (in4 - 1050.83)/946.23;
   input5 = (in5 - 883.199)/937.014;
   input6 = (in6 - 894.899)/937.874;
   input7 = (in7 - 914.298)/925.777;
   input8 = (in8 - 926.332)/976.623;
   input9 = (in9 - 898.837)/956.373;
   input10 = (in10 - 993.332)/960.963;
   input11 = (in11 - 429.965)/458.86;
   input12 = (in12 - 425.082)/453.303;
   input13 = (in13 - 499.346)/516.711;
   input14 = (in14 - 703.533)/800.27;
   input15 = (in15 - 704.906)/802.64;
   input16 = (in16 - 527.786)/552.162;
   input17 = (in17 - 768.297)/905.98;
   input18 = (in18 - 752.225)/905.937;
   input19 = (in19 - 806.303)/888.174;
   input20 = (in20 - -3.16676)/487.347;
   input21 = (in21 - 3.79185)/1160.09;
   input22 = (in22 - 2.67189)/1206.43;
   input23 = (in23 - -193.863)/595.047;
   switch(index) {
     case 0:
         return neuron0x1d844a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.551)/15.3337;
   input1 = (input[1] - -0.407008)/1141.6;
   input2 = (input[2] - 663.646)/622.41;
   input3 = (input[3] - -50.7)/823.676;
   input4 = (input[4] - 1050.83)/946.23;
   input5 = (input[5] - 883.199)/937.014;
   input6 = (input[6] - 894.899)/937.874;
   input7 = (input[7] - 914.298)/925.777;
   input8 = (input[8] - 926.332)/976.623;
   input9 = (input[9] - 898.837)/956.373;
   input10 = (input[10] - 993.332)/960.963;
   input11 = (input[11] - 429.965)/458.86;
   input12 = (input[12] - 425.082)/453.303;
   input13 = (input[13] - 499.346)/516.711;
   input14 = (input[14] - 703.533)/800.27;
   input15 = (input[15] - 704.906)/802.64;
   input16 = (input[16] - 527.786)/552.162;
   input17 = (input[17] - 768.297)/905.98;
   input18 = (input[18] - 752.225)/905.937;
   input19 = (input[19] - 806.303)/888.174;
   input20 = (input[20] - -3.16676)/487.347;
   input21 = (input[21] - 3.79185)/1160.09;
   input22 = (input[22] - 2.67189)/1206.43;
   input23 = (input[23] - -193.863)/595.047;
   switch(index) {
     case 0:
         return neuron0x1d844a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLuL::neuron0x1d50560() {
   return input0;
}

double NNfunction_ss_cLuL::neuron0x1d508a0() {
   return input1;
}

double NNfunction_ss_cLuL::neuron0x1d50be0() {
   return input2;
}

double NNfunction_ss_cLuL::neuron0x1d50f20() {
   return input3;
}

double NNfunction_ss_cLuL::neuron0x1d51260() {
   return input4;
}

double NNfunction_ss_cLuL::neuron0x1d515a0() {
   return input5;
}

double NNfunction_ss_cLuL::neuron0x1d518e0() {
   return input6;
}

double NNfunction_ss_cLuL::neuron0x1d51c20() {
   return input7;
}

double NNfunction_ss_cLuL::neuron0x1d51f60() {
   return input8;
}

double NNfunction_ss_cLuL::neuron0x1d522a0() {
   return input9;
}

double NNfunction_ss_cLuL::neuron0x1d525e0() {
   return input10;
}

double NNfunction_ss_cLuL::neuron0x1d52920() {
   return input11;
}

double NNfunction_ss_cLuL::neuron0x1d52c60() {
   return input12;
}

double NNfunction_ss_cLuL::neuron0x1d52fa0() {
   return input13;
}

double NNfunction_ss_cLuL::neuron0x1d532e0() {
   return input14;
}

double NNfunction_ss_cLuL::neuron0x1d53620() {
   return input15;
}

double NNfunction_ss_cLuL::neuron0x1d53960() {
   return input16;
}

double NNfunction_ss_cLuL::neuron0x1d53ec0() {
   return input17;
}

double NNfunction_ss_cLuL::neuron0x1d540e0() {
   return input18;
}

double NNfunction_ss_cLuL::neuron0x1d54420() {
   return input19;
}

double NNfunction_ss_cLuL::neuron0x1d54760() {
   return input20;
}

double NNfunction_ss_cLuL::neuron0x1d54aa0() {
   return input21;
}

double NNfunction_ss_cLuL::neuron0x1d54de0() {
   return input22;
}

double NNfunction_ss_cLuL::neuron0x1d55120() {
   return input23;
}

double NNfunction_ss_cLuL::input0x1d555c0() {
   double input = 0.895783;
   input += synapse0x1b103d0();
   input += synapse0x1d50420();
   input += synapse0x1d50460();
   input += synapse0x1d55870();
   input += synapse0x1d558b0();
   input += synapse0x1d558f0();
   input += synapse0x1d55930();
   input += synapse0x1d55970();
   input += synapse0x1d559b0();
   input += synapse0x1d559f0();
   input += synapse0x1d55a30();
   input += synapse0x1d55a70();
   input += synapse0x1d55ab0();
   input += synapse0x1d55af0();
   input += synapse0x1d55b30();
   input += synapse0x1d55b70();
   input += synapse0x1d50390();
   input += synapse0x1d503d0();
   input += synapse0x1b01c70();
   input += synapse0x1b01cb0();
   input += synapse0x1d55dd0();
   input += synapse0x1d55e10();
   input += synapse0x1d55e50();
   input += synapse0x1d55e90();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d555c0() {
   double input = input0x1d555c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d55ed0() {
   double input = 0.400918;
   input += synapse0x1d56210();
   input += synapse0x1d56250();
   input += synapse0x1d56290();
   input += synapse0x1d562d0();
   input += synapse0x1d56310();
   input += synapse0x1d56350();
   input += synapse0x1d56390();
   input += synapse0x1d563d0();
   input += synapse0x1d56410();
   input += synapse0x1d55cc0();
   input += synapse0x1d55d00();
   input += synapse0x1d55d40();
   input += synapse0x1d55d80();
   input += synapse0x1d56660();
   input += synapse0x1d566a0();
   input += synapse0x1d566e0();
   input += synapse0x1d56060();
   input += synapse0x1d560a0();
   input += synapse0x1d56830();
   input += synapse0x1d56870();
   input += synapse0x1d568b0();
   input += synapse0x1d568f0();
   input += synapse0x1d56930();
   input += synapse0x1d56970();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d55ed0() {
   double input = input0x1d55ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d569b0() {
   double input = -0.53763;
   input += synapse0x1d56cf0();
   input += synapse0x1d56d30();
   input += synapse0x1d56d70();
   input += synapse0x1d56db0();
   input += synapse0x1d56df0();
   input += synapse0x1d56e30();
   input += synapse0x1d56e70();
   input += synapse0x1d56eb0();
   input += synapse0x1d56ef0();
   input += synapse0x1d56f30();
   input += synapse0x1d56f70();
   input += synapse0x1d56fb0();
   input += synapse0x1d56ff0();
   input += synapse0x1d57030();
   input += synapse0x1d57070();
   input += synapse0x1d570b0();
   input += synapse0x1d56b40();
   input += synapse0x1d56b80();
   input += synapse0x1b0fac0();
   input += synapse0x1b0fb00();
   input += synapse0x1d3f5f0();
   input += synapse0x1d3f630();
   input += synapse0x1d3f670();
   input += synapse0x1d504a0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d569b0() {
   double input = input0x1d569b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1b10240() {
   double input = 0.0797314;
   input += synapse0x1d56600();
   input += synapse0x1d504e0();
   input += synapse0x1d50520();
   input += synapse0x1d57200();
   input += synapse0x1d57240();
   input += synapse0x1d57280();
   input += synapse0x1d572c0();
   input += synapse0x1d57300();
   input += synapse0x1d57340();
   input += synapse0x1d57380();
   input += synapse0x1d573c0();
   input += synapse0x1d57400();
   input += synapse0x1d57440();
   input += synapse0x1d57480();
   input += synapse0x1d574c0();
   input += synapse0x1d57500();
   input += synapse0x1d56450();
   input += synapse0x1d56490();
   input += synapse0x1d57650();
   input += synapse0x1d57690();
   input += synapse0x1d576d0();
   input += synapse0x1d57710();
   input += synapse0x1d57750();
   input += synapse0x1d57790();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1b10240() {
   double input = input0x1b10240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d577d0() {
   double input = 1.89085;
   input += synapse0x1d57b10();
   input += synapse0x1d57b50();
   input += synapse0x1d57b90();
   input += synapse0x1d57bd0();
   input += synapse0x1d57c10();
   input += synapse0x1d57c50();
   input += synapse0x1d57c90();
   input += synapse0x1d57cd0();
   input += synapse0x1d57d10();
   input += synapse0x1d57d50();
   input += synapse0x1d57d90();
   input += synapse0x1d57dd0();
   input += synapse0x1d57e10();
   input += synapse0x1d57e50();
   input += synapse0x1d57e90();
   input += synapse0x1d57ed0();
   input += synapse0x1d57960();
   input += synapse0x1d579a0();
   input += synapse0x1d58020();
   input += synapse0x1d58060();
   input += synapse0x1d580a0();
   input += synapse0x1d580e0();
   input += synapse0x1d58120();
   input += synapse0x1d58160();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d577d0() {
   double input = input0x1d577d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d581a0() {
   double input = 0.922841;
   input += synapse0x1d584e0();
   input += synapse0x1d58520();
   input += synapse0x1d58560();
   input += synapse0x1d585a0();
   input += synapse0x1d585e0();
   input += synapse0x1d58620();
   input += synapse0x1d58660();
   input += synapse0x1d586a0();
   input += synapse0x1d586e0();
   input += synapse0x1b0fe30();
   input += synapse0x1b0fe70();
   input += synapse0x1b0feb0();
   input += synapse0x1b0fef0();
   input += synapse0x1b0ff30();
   input += synapse0x1b0ff70();
   input += synapse0x1b0ffb0();
   input += synapse0x1d58330();
   input += synapse0x1d58370();
   input += synapse0x1b10100();
   input += synapse0x1b10140();
   input += synapse0x1b10180();
   input += synapse0x1b101c0();
   input += synapse0x1b10200();
   input += synapse0x1d58f30();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d581a0() {
   double input = input0x1d581a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d58f70() {
   double input = 1.76;
   input += synapse0x1d592b0();
   input += synapse0x1d592f0();
   input += synapse0x1d59330();
   input += synapse0x1d59370();
   input += synapse0x1d593b0();
   input += synapse0x1d593f0();
   input += synapse0x1d59430();
   input += synapse0x1d59470();
   input += synapse0x1d594b0();
   input += synapse0x1d594f0();
   input += synapse0x1d59530();
   input += synapse0x1d59570();
   input += synapse0x1d595b0();
   input += synapse0x1d595f0();
   input += synapse0x1d59630();
   input += synapse0x1d59670();
   input += synapse0x1d59100();
   input += synapse0x1d59140();
   input += synapse0x1d597c0();
   input += synapse0x1d59800();
   input += synapse0x1d59840();
   input += synapse0x1d59880();
   input += synapse0x1d598c0();
   input += synapse0x1d59900();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d58f70() {
   double input = input0x1d58f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d59940() {
   double input = 1.51242;
   input += synapse0x1d59c80();
   input += synapse0x1d59cc0();
   input += synapse0x1d59d00();
   input += synapse0x1d59d40();
   input += synapse0x1d59d80();
   input += synapse0x1d59dc0();
   input += synapse0x1d59e00();
   input += synapse0x1d59e40();
   input += synapse0x1d59e80();
   input += synapse0x1d59ec0();
   input += synapse0x1d59f00();
   input += synapse0x1d59f40();
   input += synapse0x1d59f80();
   input += synapse0x1d59fc0();
   input += synapse0x1d5a000();
   input += synapse0x1d5a040();
   input += synapse0x1d59ad0();
   input += synapse0x1d59b10();
   input += synapse0x1d5a190();
   input += synapse0x1d5a1d0();
   input += synapse0x1d5a210();
   input += synapse0x1d5a250();
   input += synapse0x1d5a290();
   input += synapse0x1d5a2d0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d59940() {
   double input = input0x1d59940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5a310() {
   double input = -1.30848;
   input += synapse0x1d53db0();
   input += synapse0x1d53df0();
   input += synapse0x1d53e30();
   input += synapse0x1d53e70();
   input += synapse0x1d5a860();
   input += synapse0x1d5a8a0();
   input += synapse0x1d5a8e0();
   input += synapse0x1d5a920();
   input += synapse0x1d5a960();
   input += synapse0x1d5a9a0();
   input += synapse0x1d5a9e0();
   input += synapse0x1d5aa20();
   input += synapse0x1d5aa60();
   input += synapse0x1d5aaa0();
   input += synapse0x1d5aae0();
   input += synapse0x1d5ab20();
   input += synapse0x1d5a4a0();
   input += synapse0x1d5a4e0();
   input += synapse0x1d5ac70();
   input += synapse0x1d5acb0();
   input += synapse0x1d5acf0();
   input += synapse0x1d5ad30();
   input += synapse0x1d5ad70();
   input += synapse0x1d5adb0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5a310() {
   double input = input0x1d5a310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5adf0() {
   double input = -0.0512642;
   input += synapse0x1d5b130();
   input += synapse0x1d5b170();
   input += synapse0x1d5b1b0();
   input += synapse0x1d5b1f0();
   input += synapse0x1d5b230();
   input += synapse0x1d5b270();
   input += synapse0x1d5b2b0();
   input += synapse0x1d5b2f0();
   input += synapse0x1d5b330();
   input += synapse0x1d5b370();
   input += synapse0x1d5b3b0();
   input += synapse0x1d5b3f0();
   input += synapse0x1d5b430();
   input += synapse0x1d5b470();
   input += synapse0x1d5b4b0();
   input += synapse0x1d5b4f0();
   input += synapse0x1d5af80();
   input += synapse0x1d5afc0();
   input += synapse0x1d5b640();
   input += synapse0x1d5b680();
   input += synapse0x1d5b6c0();
   input += synapse0x1d5b700();
   input += synapse0x1d5b740();
   input += synapse0x1d5b780();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5adf0() {
   double input = input0x1d5adf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5b7c0() {
   double input = -1.5352;
   input += synapse0x1d5bb00();
   input += synapse0x1d5bb40();
   input += synapse0x1d5bb80();
   input += synapse0x1d5bbc0();
   input += synapse0x1d5bc00();
   input += synapse0x1d5bc40();
   input += synapse0x1d5bc80();
   input += synapse0x1d5bcc0();
   input += synapse0x1d5bd00();
   input += synapse0x1d5bd40();
   input += synapse0x1d5bd80();
   input += synapse0x1d5bdc0();
   input += synapse0x1d5be00();
   input += synapse0x1d5be40();
   input += synapse0x1d5be80();
   input += synapse0x1d5bec0();
   input += synapse0x1d5b950();
   input += synapse0x1d5b990();
   input += synapse0x1d58720();
   input += synapse0x1d58760();
   input += synapse0x1d587a0();
   input += synapse0x1d587e0();
   input += synapse0x1d58820();
   input += synapse0x1d58860();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5b7c0() {
   double input = input0x1d5b7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d588a0() {
   double input = -2.10802;
   input += synapse0x1d58be0();
   input += synapse0x1d58c20();
   input += synapse0x1d58c60();
   input += synapse0x1d58ca0();
   input += synapse0x1d58ce0();
   input += synapse0x1d58d20();
   input += synapse0x1d58d60();
   input += synapse0x1d58da0();
   input += synapse0x1d58de0();
   input += synapse0x1d58e20();
   input += synapse0x1d58e60();
   input += synapse0x1d58ea0();
   input += synapse0x1d58ee0();
   input += synapse0x1d5d020();
   input += synapse0x1d5d060();
   input += synapse0x1d5d0a0();
   input += synapse0x1d58a30();
   input += synapse0x1d58a70();
   input += synapse0x1d5d1f0();
   input += synapse0x1d5d230();
   input += synapse0x1d5d270();
   input += synapse0x1d5d2b0();
   input += synapse0x1d5d2f0();
   input += synapse0x1d5d330();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d588a0() {
   double input = input0x1d588a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5d370() {
   double input = -0.807287;
   input += synapse0x1d5d6b0();
   input += synapse0x1d5d6f0();
   input += synapse0x1d5d730();
   input += synapse0x1d5d770();
   input += synapse0x1d5d7b0();
   input += synapse0x1d5d7f0();
   input += synapse0x1d5d830();
   input += synapse0x1d5d870();
   input += synapse0x1d5d8b0();
   input += synapse0x1d5d8f0();
   input += synapse0x1d5d930();
   input += synapse0x1d5d970();
   input += synapse0x1d5d9b0();
   input += synapse0x1d5d9f0();
   input += synapse0x1d5da30();
   input += synapse0x1d5da70();
   input += synapse0x1d5d500();
   input += synapse0x1d5d540();
   input += synapse0x1d5dbc0();
   input += synapse0x1d5dc00();
   input += synapse0x1d5dc40();
   input += synapse0x1d5dc80();
   input += synapse0x1d5dcc0();
   input += synapse0x1d5dd00();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5d370() {
   double input = input0x1d5d370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5dd40() {
   double input = -0.21207;
   input += synapse0x1d5e080();
   input += synapse0x1d5e0c0();
   input += synapse0x1d5e100();
   input += synapse0x1d5e140();
   input += synapse0x1d5e180();
   input += synapse0x1d5e1c0();
   input += synapse0x1d5e200();
   input += synapse0x1d5e240();
   input += synapse0x1d5e280();
   input += synapse0x1d5e2c0();
   input += synapse0x1d5e300();
   input += synapse0x1d5e340();
   input += synapse0x1d5e380();
   input += synapse0x1d5e3c0();
   input += synapse0x1d5e400();
   input += synapse0x1d5e440();
   input += synapse0x1d5ded0();
   input += synapse0x1d5df10();
   input += synapse0x1d5e590();
   input += synapse0x1d5e5d0();
   input += synapse0x1d5e610();
   input += synapse0x1d5e650();
   input += synapse0x1d5e690();
   input += synapse0x1d5e6d0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5dd40() {
   double input = input0x1d5dd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5e710() {
   double input = -0.923359;
   input += synapse0x1d5ea50();
   input += synapse0x1d5ea90();
   input += synapse0x1d5ead0();
   input += synapse0x1d5eb10();
   input += synapse0x1d5eb50();
   input += synapse0x1d5eb90();
   input += synapse0x1d5ebd0();
   input += synapse0x1d5ec10();
   input += synapse0x1d5ec50();
   input += synapse0x1d5ec90();
   input += synapse0x1d5ecd0();
   input += synapse0x1d5ed10();
   input += synapse0x1d5ed50();
   input += synapse0x1d5ed90();
   input += synapse0x1d5edd0();
   input += synapse0x1d5ee10();
   input += synapse0x1d5e8a0();
   input += synapse0x1d5e8e0();
   input += synapse0x1d5ef60();
   input += synapse0x1d5efa0();
   input += synapse0x1d5efe0();
   input += synapse0x1d5f020();
   input += synapse0x1d5f060();
   input += synapse0x1d5f0a0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5e710() {
   double input = input0x1d5e710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5f0e0() {
   double input = 0.12505;
   input += synapse0x1d5f420();
   input += synapse0x1d50780();
   input += synapse0x1d507c0();
   input += synapse0x1d50ac0();
   input += synapse0x1d50b00();
   input += synapse0x1d50e00();
   input += synapse0x1d50e40();
   input += synapse0x1d51140();
   input += synapse0x1d51180();
   input += synapse0x1d51480();
   input += synapse0x1d514c0();
   input += synapse0x1d517c0();
   input += synapse0x1d51800();
   input += synapse0x1d51b00();
   input += synapse0x1d51b40();
   input += synapse0x1d51e40();
   input += synapse0x1d51e80();
   input += synapse0x1d52180();
   input += synapse0x1d521c0();
   input += synapse0x1d524c0();
   input += synapse0x1d52500();
   input += synapse0x1d52800();
   input += synapse0x1d52840();
   input += synapse0x1d52b40();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5f0e0() {
   double input = input0x1d5f0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d60ef0() {
   double input = -0.132072;
   input += synapse0x1d52b80();
   input += synapse0x1d53840();
   input += synapse0x1d53880();
   input += synapse0x1d5f270();
   input += synapse0x1d5f2b0();
   input += synapse0x1d53b80();
   input += synapse0x1d53bc0();
   input += synapse0x1b01b50();
   input += synapse0x1b01b90();
   input += synapse0x1d54300();
   input += synapse0x1d54340();
   input += synapse0x1d54640();
   input += synapse0x1d54680();
   input += synapse0x1d54980();
   input += synapse0x1d549c0();
   input += synapse0x1d54cc0();
   input += synapse0x1d54d00();
   input += synapse0x1d55000();
   input += synapse0x1d55040();
   input += synapse0x1d55340();
   input += synapse0x1d55380();
   input += synapse0x1d52e80();
   input += synapse0x1d52ec0();
   input += synapse0x1d61190();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d60ef0() {
   double input = input0x1d60ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d611d0() {
   double input = -0.307701;
   input += synapse0x1d61510();
   input += synapse0x1d61550();
   input += synapse0x1d61590();
   input += synapse0x1d615d0();
   input += synapse0x1d61610();
   input += synapse0x1d61650();
   input += synapse0x1d61690();
   input += synapse0x1d616d0();
   input += synapse0x1d61710();
   input += synapse0x1d61750();
   input += synapse0x1d61790();
   input += synapse0x1d617d0();
   input += synapse0x1d61810();
   input += synapse0x1d61850();
   input += synapse0x1d61890();
   input += synapse0x1d618d0();
   input += synapse0x1d61360();
   input += synapse0x1d613a0();
   input += synapse0x1d61a20();
   input += synapse0x1d61a60();
   input += synapse0x1d61aa0();
   input += synapse0x1d61ae0();
   input += synapse0x1d61b20();
   input += synapse0x1d61b60();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d611d0() {
   double input = input0x1d611d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d61ba0() {
   double input = -0.397327;
   input += synapse0x1d61ee0();
   input += synapse0x1d61f20();
   input += synapse0x1d61f60();
   input += synapse0x1d61fa0();
   input += synapse0x1d61fe0();
   input += synapse0x1d62020();
   input += synapse0x1d62060();
   input += synapse0x1d620a0();
   input += synapse0x1d620e0();
   input += synapse0x1d62120();
   input += synapse0x1d62160();
   input += synapse0x1d621a0();
   input += synapse0x1d621e0();
   input += synapse0x1d62220();
   input += synapse0x1d62260();
   input += synapse0x1d622a0();
   input += synapse0x1d61d30();
   input += synapse0x1d61d70();
   input += synapse0x1d623f0();
   input += synapse0x1d62430();
   input += synapse0x1d62470();
   input += synapse0x1d624b0();
   input += synapse0x1d624f0();
   input += synapse0x1d62530();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d61ba0() {
   double input = input0x1d61ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d62570() {
   double input = -0.444457;
   input += synapse0x1d628b0();
   input += synapse0x1d628f0();
   input += synapse0x1d62930();
   input += synapse0x1d62970();
   input += synapse0x1d629b0();
   input += synapse0x1d629f0();
   input += synapse0x1d62a30();
   input += synapse0x1d62a70();
   input += synapse0x1d62ab0();
   input += synapse0x1d62af0();
   input += synapse0x1d62b30();
   input += synapse0x1d62b70();
   input += synapse0x1d62bb0();
   input += synapse0x1d62bf0();
   input += synapse0x1d62c30();
   input += synapse0x1d62c70();
   input += synapse0x1d62700();
   input += synapse0x1d62740();
   input += synapse0x1d62dc0();
   input += synapse0x1d62e00();
   input += synapse0x1d62e40();
   input += synapse0x1d62e80();
   input += synapse0x1d62ec0();
   input += synapse0x1d62f00();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d62570() {
   double input = input0x1d62570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d62f40() {
   double input = 0.238922;
   input += synapse0x1d63280();
   input += synapse0x1d632c0();
   input += synapse0x1d63300();
   input += synapse0x1d63340();
   input += synapse0x1d63380();
   input += synapse0x1d633c0();
   input += synapse0x1d63400();
   input += synapse0x1d63440();
   input += synapse0x1d63480();
   input += synapse0x1d634c0();
   input += synapse0x1d63500();
   input += synapse0x1d63540();
   input += synapse0x1d63580();
   input += synapse0x1d635c0();
   input += synapse0x1d63600();
   input += synapse0x1d63640();
   input += synapse0x1d630d0();
   input += synapse0x1d63110();
   input += synapse0x1d63790();
   input += synapse0x1d637d0();
   input += synapse0x1d63810();
   input += synapse0x1d63850();
   input += synapse0x1d63890();
   input += synapse0x1d638d0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d62f40() {
   double input = input0x1d62f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d63910() {
   double input = -0.107629;
   input += synapse0x1d63c50();
   input += synapse0x1d63c90();
   input += synapse0x1d63cd0();
   input += synapse0x1d63d10();
   input += synapse0x1d63d50();
   input += synapse0x1d63d90();
   input += synapse0x1d63dd0();
   input += synapse0x1d63e10();
   input += synapse0x1d63e50();
   input += synapse0x1d5c010();
   input += synapse0x1d5c050();
   input += synapse0x1d5c090();
   input += synapse0x1d5c0d0();
   input += synapse0x1d5c110();
   input += synapse0x1d5c150();
   input += synapse0x1d5c190();
   input += synapse0x1d63aa0();
   input += synapse0x1d63ae0();
   input += synapse0x1d5c2e0();
   input += synapse0x1d5c320();
   input += synapse0x1d5c360();
   input += synapse0x1d5c3a0();
   input += synapse0x1d5c3e0();
   input += synapse0x1d5c420();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d63910() {
   double input = input0x1d63910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5c460() {
   double input = 0.416585;
   input += synapse0x1d5c7a0();
   input += synapse0x1d5c7e0();
   input += synapse0x1d5c820();
   input += synapse0x1d5c860();
   input += synapse0x1d5c8a0();
   input += synapse0x1d5c8e0();
   input += synapse0x1d5c920();
   input += synapse0x1d5c960();
   input += synapse0x1d5c9a0();
   input += synapse0x1d5c9e0();
   input += synapse0x1d5ca20();
   input += synapse0x1d5ca60();
   input += synapse0x1d5caa0();
   input += synapse0x1d5cae0();
   input += synapse0x1d5cb20();
   input += synapse0x1d5cb60();
   input += synapse0x1d5c5f0();
   input += synapse0x1d5c630();
   input += synapse0x1d5ccb0();
   input += synapse0x1d5ccf0();
   input += synapse0x1d5cd30();
   input += synapse0x1d5cd70();
   input += synapse0x1d5cdb0();
   input += synapse0x1d5cdf0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5c460() {
   double input = input0x1d5c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d5ce30() {
   double input = -0.112691;
   input += synapse0x1d5cfc0();
   input += synapse0x1d66050();
   input += synapse0x1d66090();
   input += synapse0x1d660d0();
   input += synapse0x1d66110();
   input += synapse0x1d66150();
   input += synapse0x1d66190();
   input += synapse0x1d661d0();
   input += synapse0x1d66210();
   input += synapse0x1d66250();
   input += synapse0x1d66290();
   input += synapse0x1d662d0();
   input += synapse0x1d66310();
   input += synapse0x1d66350();
   input += synapse0x1d66390();
   input += synapse0x1d663d0();
   input += synapse0x1d65ea0();
   input += synapse0x1d65ee0();
   input += synapse0x1d66520();
   input += synapse0x1d66560();
   input += synapse0x1d665a0();
   input += synapse0x1d665e0();
   input += synapse0x1d66620();
   input += synapse0x1d66660();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d5ce30() {
   double input = input0x1d5ce30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d666a0() {
   double input = 0.0634698;
   input += synapse0x1d669e0();
   input += synapse0x1d66a20();
   input += synapse0x1d66a60();
   input += synapse0x1d66aa0();
   input += synapse0x1d66ae0();
   input += synapse0x1d66b20();
   input += synapse0x1d66b60();
   input += synapse0x1d66ba0();
   input += synapse0x1d66be0();
   input += synapse0x1d66c20();
   input += synapse0x1d66c60();
   input += synapse0x1d66ca0();
   input += synapse0x1d66ce0();
   input += synapse0x1d66d20();
   input += synapse0x1d66d60();
   input += synapse0x1d66da0();
   input += synapse0x1d66830();
   input += synapse0x1d66870();
   input += synapse0x1d66ef0();
   input += synapse0x1d66f30();
   input += synapse0x1d66f70();
   input += synapse0x1d66fb0();
   input += synapse0x1d66ff0();
   input += synapse0x1d67030();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d666a0() {
   double input = input0x1d666a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d67070() {
   double input = 0.34759;
   input += synapse0x1d673b0();
   input += synapse0x1d673f0();
   input += synapse0x1d67430();
   input += synapse0x1d67470();
   input += synapse0x1d674b0();
   input += synapse0x1d674f0();
   input += synapse0x1d67530();
   input += synapse0x1d67570();
   input += synapse0x1d675b0();
   input += synapse0x1d675f0();
   input += synapse0x1d67630();
   input += synapse0x1d67670();
   input += synapse0x1d676b0();
   input += synapse0x1d676f0();
   input += synapse0x1d67730();
   input += synapse0x1d67770();
   input += synapse0x1d67200();
   input += synapse0x1d67240();
   input += synapse0x1d678c0();
   input += synapse0x1d67900();
   input += synapse0x1d67940();
   input += synapse0x1d67980();
   input += synapse0x1d679c0();
   input += synapse0x1d67a00();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d67070() {
   double input = input0x1d67070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d67a40() {
   double input = 0.401393;
   input += synapse0x1d67d80();
   input += synapse0x1d67dc0();
   input += synapse0x1d67e00();
   input += synapse0x1d67e40();
   input += synapse0x1d67e80();
   input += synapse0x1d67ec0();
   input += synapse0x1d67f00();
   input += synapse0x1d67f40();
   input += synapse0x1d67f80();
   input += synapse0x1d67fc0();
   input += synapse0x1d68000();
   input += synapse0x1d68040();
   input += synapse0x1d68080();
   input += synapse0x1d680c0();
   input += synapse0x1d68100();
   input += synapse0x1d68140();
   input += synapse0x1d67bd0();
   input += synapse0x1d67c10();
   input += synapse0x1d68290();
   input += synapse0x1d682d0();
   input += synapse0x1d68310();
   input += synapse0x1d68350();
   input += synapse0x1d68390();
   input += synapse0x1d683d0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d67a40() {
   double input = input0x1d67a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d68410() {
   double input = 2.67626;
   input += synapse0x1d68750();
   input += synapse0x1d68790();
   input += synapse0x1d687d0();
   input += synapse0x1d68810();
   input += synapse0x1d68850();
   input += synapse0x1d68890();
   input += synapse0x1d688d0();
   input += synapse0x1d68910();
   input += synapse0x1d68950();
   input += synapse0x1d68990();
   input += synapse0x1d689d0();
   input += synapse0x1d68a10();
   input += synapse0x1d68a50();
   input += synapse0x1d68a90();
   input += synapse0x1d68ad0();
   input += synapse0x1d68b10();
   input += synapse0x1d685a0();
   input += synapse0x1d685e0();
   input += synapse0x1d68c60();
   input += synapse0x1d68ca0();
   input += synapse0x1d68ce0();
   input += synapse0x1d68d20();
   input += synapse0x1d68d60();
   input += synapse0x1d68da0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d68410() {
   double input = input0x1d68410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d68de0() {
   double input = -0.275914;
   input += synapse0x1d69120();
   input += synapse0x1d69160();
   input += synapse0x1d691a0();
   input += synapse0x1d691e0();
   input += synapse0x1d69220();
   input += synapse0x1d69260();
   input += synapse0x1d692a0();
   input += synapse0x1d692e0();
   input += synapse0x1d69320();
   input += synapse0x1d69360();
   input += synapse0x1d693a0();
   input += synapse0x1d693e0();
   input += synapse0x1d69420();
   input += synapse0x1d69460();
   input += synapse0x1d694a0();
   input += synapse0x1d694e0();
   input += synapse0x1d68f70();
   input += synapse0x1d68fb0();
   input += synapse0x1d69630();
   input += synapse0x1d69670();
   input += synapse0x1d696b0();
   input += synapse0x1d696f0();
   input += synapse0x1d69730();
   input += synapse0x1d69770();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d68de0() {
   double input = input0x1d68de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d697b0() {
   double input = 0.40629;
   input += synapse0x1d69af0();
   input += synapse0x1d69b30();
   input += synapse0x1d69b70();
   input += synapse0x1d69bb0();
   input += synapse0x1d69bf0();
   input += synapse0x1d69c30();
   input += synapse0x1d69c70();
   input += synapse0x1d69cb0();
   input += synapse0x1d69cf0();
   input += synapse0x1d69d30();
   input += synapse0x1d69d70();
   input += synapse0x1d69db0();
   input += synapse0x1d69df0();
   input += synapse0x1d69e30();
   input += synapse0x1d69e70();
   input += synapse0x1d69eb0();
   input += synapse0x1d69940();
   input += synapse0x1d69980();
   input += synapse0x1d6a000();
   input += synapse0x1d6a040();
   input += synapse0x1d6a080();
   input += synapse0x1d6a0c0();
   input += synapse0x1d6a100();
   input += synapse0x1d6a140();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d697b0() {
   double input = input0x1d697b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6a180() {
   double input = 1.34478;
   input += synapse0x1d6a4c0();
   input += synapse0x1d6a500();
   input += synapse0x1d6a540();
   input += synapse0x1d6a580();
   input += synapse0x1d6a5c0();
   input += synapse0x1d6a600();
   input += synapse0x1d6a640();
   input += synapse0x1d6a680();
   input += synapse0x1d6a6c0();
   input += synapse0x1d6a700();
   input += synapse0x1d6a740();
   input += synapse0x1d6a780();
   input += synapse0x1d6a7c0();
   input += synapse0x1d6a800();
   input += synapse0x1d6a840();
   input += synapse0x1d6a880();
   input += synapse0x1d6a310();
   input += synapse0x1d6a350();
   input += synapse0x1d6a9d0();
   input += synapse0x1d6aa10();
   input += synapse0x1d6aa50();
   input += synapse0x1d6aa90();
   input += synapse0x1d6aad0();
   input += synapse0x1d6ab10();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6a180() {
   double input = input0x1d6a180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6ab50() {
   double input = 0.805938;
   input += synapse0x1d6ae90();
   input += synapse0x1d5f460();
   input += synapse0x1d5f4a0();
   input += synapse0x1d5f4e0();
   input += synapse0x1d5f730();
   input += synapse0x1d5f770();
   input += synapse0x1d5f7b0();
   input += synapse0x1d5fa00();
   input += synapse0x1d5fa40();
   input += synapse0x1d5fc90();
   input += synapse0x1d5fcd0();
   input += synapse0x1d5fd10();
   input += synapse0x1d5ff60();
   input += synapse0x1d5ffa0();
   input += synapse0x1d601f0();
   input += synapse0x1d60230();
   input += synapse0x1d6ace0();
   input += synapse0x1d6ad20();
   input += synapse0x1d60380();
   input += synapse0x1d60890();
   input += synapse0x1d608d0();
   input += synapse0x1d60910();
   input += synapse0x1d60b60();
   input += synapse0x1d60ba0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6ab50() {
   double input = input0x1d6ab50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d60be0() {
   double input = 2.75888;
   input += synapse0x1d60450();
   input += synapse0x1d60490();
   input += synapse0x1d604d0();
   input += synapse0x1d60510();
   input += synapse0x1d60e90();
   input += synapse0x1d6d1e0();
   input += synapse0x1d6d220();
   input += synapse0x1d6d260();
   input += synapse0x1d6d2a0();
   input += synapse0x1d6d2e0();
   input += synapse0x1d6d320();
   input += synapse0x1d6d360();
   input += synapse0x1d6d3a0();
   input += synapse0x1d6d3e0();
   input += synapse0x1d6d420();
   input += synapse0x1d6d460();
   input += synapse0x1d60d70();
   input += synapse0x1d60db0();
   input += synapse0x1d6d5b0();
   input += synapse0x1d6d5f0();
   input += synapse0x1d6d630();
   input += synapse0x1d6d670();
   input += synapse0x1d6d6b0();
   input += synapse0x1d6d6f0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d60be0() {
   double input = input0x1d60be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6d730() {
   double input = 0.0749585;
   input += synapse0x1d6da70();
   input += synapse0x1d6dab0();
   input += synapse0x1d6daf0();
   input += synapse0x1d6db30();
   input += synapse0x1d6db70();
   input += synapse0x1d6dbb0();
   input += synapse0x1d6dbf0();
   input += synapse0x1d6dc30();
   input += synapse0x1d6dc70();
   input += synapse0x1d6dcb0();
   input += synapse0x1d6dcf0();
   input += synapse0x1d6dd30();
   input += synapse0x1d6dd70();
   input += synapse0x1d6ddb0();
   input += synapse0x1d6ddf0();
   input += synapse0x1d6de30();
   input += synapse0x1d6d8c0();
   input += synapse0x1d6d900();
   input += synapse0x1d6df80();
   input += synapse0x1d6dfc0();
   input += synapse0x1d6e000();
   input += synapse0x1d6e040();
   input += synapse0x1d6e080();
   input += synapse0x1d6e0c0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6d730() {
   double input = input0x1d6d730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6e100() {
   double input = 0.221741;
   input += synapse0x1d6e440();
   input += synapse0x1d6e480();
   input += synapse0x1d6e4c0();
   input += synapse0x1d6e500();
   input += synapse0x1d6e540();
   input += synapse0x1d6e580();
   input += synapse0x1d6e5c0();
   input += synapse0x1d6e600();
   input += synapse0x1d6e640();
   input += synapse0x1d6e680();
   input += synapse0x1d6e6c0();
   input += synapse0x1d6e700();
   input += synapse0x1d6e740();
   input += synapse0x1d6e780();
   input += synapse0x1d6e7c0();
   input += synapse0x1d6e800();
   input += synapse0x1d6e290();
   input += synapse0x1d6e2d0();
   input += synapse0x1d6e950();
   input += synapse0x1d6e990();
   input += synapse0x1d6e9d0();
   input += synapse0x1d6ea10();
   input += synapse0x1d6ea50();
   input += synapse0x1d6ea90();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6e100() {
   double input = input0x1d6e100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6ead0() {
   double input = 0.744863;
   input += synapse0x1d6ee10();
   input += synapse0x1d6ee50();
   input += synapse0x1d6ee90();
   input += synapse0x1d6eed0();
   input += synapse0x1d6ef10();
   input += synapse0x1d6ef50();
   input += synapse0x1d6ef90();
   input += synapse0x1d6efd0();
   input += synapse0x1d6f010();
   input += synapse0x1d6f050();
   input += synapse0x1d6f090();
   input += synapse0x1d6f0d0();
   input += synapse0x1d6f110();
   input += synapse0x1d6f150();
   input += synapse0x1d6f190();
   input += synapse0x1d6f1d0();
   input += synapse0x1d6ec60();
   input += synapse0x1d6eca0();
   input += synapse0x1d6f320();
   input += synapse0x1d6f360();
   input += synapse0x1d6f3a0();
   input += synapse0x1d6f3e0();
   input += synapse0x1d6f420();
   input += synapse0x1d6f460();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6ead0() {
   double input = input0x1d6ead0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6f4a0() {
   double input = -1.02583;
   input += synapse0x1d6f7e0();
   input += synapse0x1d6f820();
   input += synapse0x1d6f860();
   input += synapse0x1d6f8a0();
   input += synapse0x1d6f8e0();
   input += synapse0x1d6f920();
   input += synapse0x1d6f960();
   input += synapse0x1d6f9a0();
   input += synapse0x1d6f9e0();
   input += synapse0x1d6fa20();
   input += synapse0x1d6fa60();
   input += synapse0x1d6faa0();
   input += synapse0x1d6fae0();
   input += synapse0x1d6fb20();
   input += synapse0x1d6fb60();
   input += synapse0x1d6fba0();
   input += synapse0x1d6f630();
   input += synapse0x1d6f670();
   input += synapse0x1d6fcf0();
   input += synapse0x1d6fd30();
   input += synapse0x1d6fd70();
   input += synapse0x1d6fdb0();
   input += synapse0x1d6fdf0();
   input += synapse0x1d6fe30();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6f4a0() {
   double input = input0x1d6f4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d6fe70() {
   double input = 1.1833;
   input += synapse0x1d701b0();
   input += synapse0x1d701f0();
   input += synapse0x1d70230();
   input += synapse0x1d70270();
   input += synapse0x1d702b0();
   input += synapse0x1d702f0();
   input += synapse0x1d70330();
   input += synapse0x1d70370();
   input += synapse0x1d703b0();
   input += synapse0x1d703f0();
   input += synapse0x1d70430();
   input += synapse0x1d70470();
   input += synapse0x1d704b0();
   input += synapse0x1d704f0();
   input += synapse0x1d70530();
   input += synapse0x1d70570();
   input += synapse0x1d70000();
   input += synapse0x1d70040();
   input += synapse0x1d706c0();
   input += synapse0x1d70700();
   input += synapse0x1d70740();
   input += synapse0x1d70780();
   input += synapse0x1d707c0();
   input += synapse0x1d70800();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d6fe70() {
   double input = input0x1d6fe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d70840() {
   double input = -1.58134;
   input += synapse0x1d70b80();
   input += synapse0x1d70bc0();
   input += synapse0x1d70c00();
   input += synapse0x1d70c40();
   input += synapse0x1d70c80();
   input += synapse0x1d70cc0();
   input += synapse0x1d70d00();
   input += synapse0x1d70d40();
   input += synapse0x1d70d80();
   input += synapse0x1d70dc0();
   input += synapse0x1d70e00();
   input += synapse0x1d70e40();
   input += synapse0x1d70e80();
   input += synapse0x1d70ec0();
   input += synapse0x1d70f00();
   input += synapse0x1d70f40();
   input += synapse0x1d709d0();
   input += synapse0x1d70a10();
   input += synapse0x1d71090();
   input += synapse0x1d710d0();
   input += synapse0x1d71110();
   input += synapse0x1d71150();
   input += synapse0x1d71190();
   input += synapse0x1d711d0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d70840() {
   double input = input0x1d70840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d71210() {
   double input = -1.735;
   input += synapse0x1d71550();
   input += synapse0x1d71590();
   input += synapse0x1d715d0();
   input += synapse0x1d71610();
   input += synapse0x1d71650();
   input += synapse0x1d71690();
   input += synapse0x1d716d0();
   input += synapse0x1d71710();
   input += synapse0x1d71750();
   input += synapse0x1d71790();
   input += synapse0x1d717d0();
   input += synapse0x1d71810();
   input += synapse0x1d71850();
   input += synapse0x1d71890();
   input += synapse0x1d718d0();
   input += synapse0x1d71910();
   input += synapse0x1d713a0();
   input += synapse0x1d713e0();
   input += synapse0x1d71a60();
   input += synapse0x1d71aa0();
   input += synapse0x1d71ae0();
   input += synapse0x1d71b20();
   input += synapse0x1d71b60();
   input += synapse0x1d71ba0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d71210() {
   double input = input0x1d71210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d71be0() {
   double input = 0.776389;
   input += synapse0x1d5a650();
   input += synapse0x1d5a690();
   input += synapse0x1d5a6d0();
   input += synapse0x1d5a710();
   input += synapse0x1d5a750();
   input += synapse0x1d5a790();
   input += synapse0x1d5a7d0();
   input += synapse0x1d5a810();
   input += synapse0x1d72330();
   input += synapse0x1d72370();
   input += synapse0x1d723b0();
   input += synapse0x1d723f0();
   input += synapse0x1d72430();
   input += synapse0x1d72470();
   input += synapse0x1d724b0();
   input += synapse0x1d724f0();
   input += synapse0x1d71d70();
   input += synapse0x1d71db0();
   input += synapse0x1d72640();
   input += synapse0x1d72680();
   input += synapse0x1d726c0();
   input += synapse0x1d72700();
   input += synapse0x1d72740();
   input += synapse0x1d72780();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d71be0() {
   double input = input0x1d71be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d727c0() {
   double input = 0.816968;
   input += synapse0x1d72b00();
   input += synapse0x1d72b40();
   input += synapse0x1d72b80();
   input += synapse0x1d72bc0();
   input += synapse0x1d72c00();
   input += synapse0x1d72c40();
   input += synapse0x1d72c80();
   input += synapse0x1d72cc0();
   input += synapse0x1d72d00();
   input += synapse0x1d72d40();
   input += synapse0x1d72d80();
   input += synapse0x1d72dc0();
   input += synapse0x1d72e00();
   input += synapse0x1d72e40();
   input += synapse0x1d72e80();
   input += synapse0x1d72ec0();
   input += synapse0x1d72950();
   input += synapse0x1d72990();
   input += synapse0x1d73010();
   input += synapse0x1d73050();
   input += synapse0x1d73090();
   input += synapse0x1d730d0();
   input += synapse0x1d73110();
   input += synapse0x1d73150();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d727c0() {
   double input = input0x1d727c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d73190() {
   double input = 0.296371;
   input += synapse0x1d734d0();
   input += synapse0x1d73510();
   input += synapse0x1d73550();
   input += synapse0x1d73590();
   input += synapse0x1d735d0();
   input += synapse0x1d73610();
   input += synapse0x1d73650();
   input += synapse0x1d73690();
   input += synapse0x1d736d0();
   input += synapse0x1d73710();
   input += synapse0x1d73750();
   input += synapse0x1d73790();
   input += synapse0x1d737d0();
   input += synapse0x1d73810();
   input += synapse0x1d73850();
   input += synapse0x1d73890();
   input += synapse0x1d73320();
   input += synapse0x1d73360();
   input += synapse0x1d63e90();
   input += synapse0x1d63ed0();
   input += synapse0x1d63f10();
   input += synapse0x1d63f50();
   input += synapse0x1d63f90();
   input += synapse0x1d63fd0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d73190() {
   double input = input0x1d73190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d64010() {
   double input = -0.314053;
   input += synapse0x1d64350();
   input += synapse0x1d64390();
   input += synapse0x1d643d0();
   input += synapse0x1d64410();
   input += synapse0x1d64450();
   input += synapse0x1d64490();
   input += synapse0x1d644d0();
   input += synapse0x1d64510();
   input += synapse0x1d64550();
   input += synapse0x1d64590();
   input += synapse0x1d645d0();
   input += synapse0x1d64610();
   input += synapse0x1d64650();
   input += synapse0x1d64690();
   input += synapse0x1d646d0();
   input += synapse0x1d64710();
   input += synapse0x1d641a0();
   input += synapse0x1d641e0();
   input += synapse0x1d64860();
   input += synapse0x1d648a0();
   input += synapse0x1d648e0();
   input += synapse0x1d64920();
   input += synapse0x1d64960();
   input += synapse0x1d649a0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d64010() {
   double input = input0x1d64010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d649e0() {
   double input = -0.898526;
   input += synapse0x1d64d20();
   input += synapse0x1d64d60();
   input += synapse0x1d64da0();
   input += synapse0x1d64de0();
   input += synapse0x1d64e20();
   input += synapse0x1d64e60();
   input += synapse0x1d64ea0();
   input += synapse0x1d64ee0();
   input += synapse0x1d64f20();
   input += synapse0x1d64f60();
   input += synapse0x1d64fa0();
   input += synapse0x1d64fe0();
   input += synapse0x1d65020();
   input += synapse0x1d65060();
   input += synapse0x1d650a0();
   input += synapse0x1d650e0();
   input += synapse0x1d64b70();
   input += synapse0x1d64bb0();
   input += synapse0x1d65230();
   input += synapse0x1d65270();
   input += synapse0x1d652b0();
   input += synapse0x1d652f0();
   input += synapse0x1d65330();
   input += synapse0x1d65370();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d649e0() {
   double input = input0x1d649e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d653b0() {
   double input = -0.265765;
   input += synapse0x1d656f0();
   input += synapse0x1d65730();
   input += synapse0x1d65770();
   input += synapse0x1d657b0();
   input += synapse0x1d657f0();
   input += synapse0x1d65830();
   input += synapse0x1d65870();
   input += synapse0x1d658b0();
   input += synapse0x1d658f0();
   input += synapse0x1d65930();
   input += synapse0x1d65970();
   input += synapse0x1d659b0();
   input += synapse0x1d659f0();
   input += synapse0x1d65a30();
   input += synapse0x1d65a70();
   input += synapse0x1d65ab0();
   input += synapse0x1d65540();
   input += synapse0x1d65580();
   input += synapse0x1d65c00();
   input += synapse0x1d65c40();
   input += synapse0x1d65c80();
   input += synapse0x1d65cc0();
   input += synapse0x1d65d00();
   input += synapse0x1d65d40();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d653b0() {
   double input = input0x1d653b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d779f0() {
   double input = -0.540492;
   input += synapse0x1d77c10();
   input += synapse0x1d77c50();
   input += synapse0x1d77c90();
   input += synapse0x1d77cd0();
   input += synapse0x1d77d10();
   input += synapse0x1d77d50();
   input += synapse0x1d77d90();
   input += synapse0x1d77dd0();
   input += synapse0x1d77e10();
   input += synapse0x1d77e50();
   input += synapse0x1d77e90();
   input += synapse0x1d77ed0();
   input += synapse0x1d77f10();
   input += synapse0x1d77f50();
   input += synapse0x1d77f90();
   input += synapse0x1d77fd0();
   input += synapse0x1d65d80();
   input += synapse0x1d65dc0();
   input += synapse0x1d78120();
   input += synapse0x1d78160();
   input += synapse0x1d781a0();
   input += synapse0x1d781e0();
   input += synapse0x1d78220();
   input += synapse0x1d78260();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d779f0() {
   double input = input0x1d779f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d782a0() {
   double input = 0.316616;
   input += synapse0x1d785e0();
   input += synapse0x1d78620();
   input += synapse0x1d78660();
   input += synapse0x1d786a0();
   input += synapse0x1d786e0();
   input += synapse0x1d78720();
   input += synapse0x1d78760();
   input += synapse0x1d787a0();
   input += synapse0x1d787e0();
   input += synapse0x1d78820();
   input += synapse0x1d78860();
   input += synapse0x1d788a0();
   input += synapse0x1d788e0();
   input += synapse0x1d78920();
   input += synapse0x1d78960();
   input += synapse0x1d789a0();
   input += synapse0x1d78430();
   input += synapse0x1d78470();
   input += synapse0x1d78af0();
   input += synapse0x1d78b30();
   input += synapse0x1d78b70();
   input += synapse0x1d78bb0();
   input += synapse0x1d78bf0();
   input += synapse0x1d78c30();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d782a0() {
   double input = input0x1d782a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d78c70() {
   double input = 1.02992;
   input += synapse0x1d78fb0();
   input += synapse0x1d78ff0();
   input += synapse0x1d79030();
   input += synapse0x1d79070();
   input += synapse0x1d790b0();
   input += synapse0x1d790f0();
   input += synapse0x1d79130();
   input += synapse0x1d79170();
   input += synapse0x1d791b0();
   input += synapse0x1d791f0();
   input += synapse0x1d79230();
   input += synapse0x1d79270();
   input += synapse0x1d792b0();
   input += synapse0x1d792f0();
   input += synapse0x1d79330();
   input += synapse0x1d79370();
   input += synapse0x1d78e00();
   input += synapse0x1d78e40();
   input += synapse0x1d794c0();
   input += synapse0x1d79500();
   input += synapse0x1d79540();
   input += synapse0x1d79580();
   input += synapse0x1d795c0();
   input += synapse0x1d79600();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d78c70() {
   double input = input0x1d78c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d79640() {
   double input = 0.0551407;
   input += synapse0x1d79980();
   input += synapse0x1d799c0();
   input += synapse0x1d79a00();
   input += synapse0x1d79a40();
   input += synapse0x1d79a80();
   input += synapse0x1d79ac0();
   input += synapse0x1d79b00();
   input += synapse0x1d79b40();
   input += synapse0x1d79b80();
   input += synapse0x1d79bc0();
   input += synapse0x1d79c00();
   input += synapse0x1d79c40();
   input += synapse0x1d79c80();
   input += synapse0x1d79cc0();
   input += synapse0x1d79d00();
   input += synapse0x1d79d40();
   input += synapse0x1d797d0();
   input += synapse0x1d79810();
   input += synapse0x1d79e90();
   input += synapse0x1d79ed0();
   input += synapse0x1d79f10();
   input += synapse0x1d79f50();
   input += synapse0x1d79f90();
   input += synapse0x1d79fd0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d79640() {
   double input = input0x1d79640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d80840() {
   double input = -0.575569;
   input += synapse0x1d56570();
   input += synapse0x1d565b0();
   input += synapse0x1d57a80();
   input += synapse0x1d57ac0();
   input += synapse0x1d58450();
   input += synapse0x1d58490();
   input += synapse0x1d59220();
   input += synapse0x1d59260();
   input += synapse0x1d59bf0();
   input += synapse0x1d59c30();
   input += synapse0x1d5a5c0();
   input += synapse0x1d5a600();
   input += synapse0x1d5b0a0();
   input += synapse0x1d5b0e0();
   input += synapse0x1d5ba70();
   input += synapse0x1d5bab0();
   input += synapse0x1d58b50();
   input += synapse0x1d58b90();
   input += synapse0x1d5d620();
   input += synapse0x1d5d660();
   input += synapse0x1d5dff0();
   input += synapse0x1d5e030();
   input += synapse0x1d5e9c0();
   input += synapse0x1d5ea00();
   input += synapse0x1d5f390();
   input += synapse0x1d5f3d0();
   input += synapse0x1d53500();
   input += synapse0x1d53540();
   input += synapse0x1d61480();
   input += synapse0x1d614c0();
   input += synapse0x1d61e50();
   input += synapse0x1d61e90();
   input += synapse0x1d62820();
   input += synapse0x1d62860();
   input += synapse0x1d631f0();
   input += synapse0x1d63230();
   input += synapse0x1d63bc0();
   input += synapse0x1d63c00();
   input += synapse0x1d5c710();
   input += synapse0x1d5c750();
   input += synapse0x1d65fc0();
   input += synapse0x1d66000();
   input += synapse0x1d66950();
   input += synapse0x1d66990();
   input += synapse0x1d67320();
   input += synapse0x1d67360();
   input += synapse0x1d67cf0();
   input += synapse0x1d67d30();
   input += synapse0x1d686c0();
   input += synapse0x1d68700();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d80840() {
   double input = input0x1d80840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d80be0() {
   double input = -0.592794;
   input += synapse0x1d6ae00();
   input += synapse0x1d6ae40();
   input += synapse0x1d603c0();
   input += synapse0x1d60400();
   input += synapse0x1d6d9e0();
   input += synapse0x1d6da20();
   input += synapse0x1d6e3b0();
   input += synapse0x1d6e3f0();
   input += synapse0x1d6ed80();
   input += synapse0x1d6edc0();
   input += synapse0x1d6f750();
   input += synapse0x1d6f790();
   input += synapse0x1d70120();
   input += synapse0x1d70160();
   input += synapse0x1d70af0();
   input += synapse0x1d70b30();
   input += synapse0x1d714c0();
   input += synapse0x1d71500();
   input += synapse0x1d71e90();
   input += synapse0x1d71ed0();
   input += synapse0x1d72a70();
   input += synapse0x1d72ab0();
   input += synapse0x1d73440();
   input += synapse0x1d73480();
   input += synapse0x1d642c0();
   input += synapse0x1d64300();
   input += synapse0x1d64c90();
   input += synapse0x1d64cd0();
   input += synapse0x1d65660();
   input += synapse0x1d656a0();
   input += synapse0x1d77b80();
   input += synapse0x1d77bc0();
   input += synapse0x1d78550();
   input += synapse0x1d78590();
   input += synapse0x1d78f20();
   input += synapse0x1d78f60();
   input += synapse0x1d798f0();
   input += synapse0x1d79930();
   input += synapse0x1d557e0();
   input += synapse0x1d55820();
   input += synapse0x1d69090();
   input += synapse0x1d690d0();
   input += synapse0x1d7a010();
   input += synapse0x1d7a050();
   input += synapse0x1d7a090();
   input += synapse0x1d7a0d0();
   input += synapse0x1d80f80();
   input += synapse0x1d80fc0();
   input += synapse0x1d81000();
   input += synapse0x1d81040();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d80be0() {
   double input = input0x1d80be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d81080() {
   double input = 0.20641;
   input += synapse0x1d813c0();
   input += synapse0x1d81400();
   input += synapse0x1d81440();
   input += synapse0x1d81480();
   input += synapse0x1d814c0();
   input += synapse0x1d81500();
   input += synapse0x1d81540();
   input += synapse0x1d81580();
   input += synapse0x1d815c0();
   input += synapse0x1d81600();
   input += synapse0x1d81640();
   input += synapse0x1d81680();
   input += synapse0x1d816c0();
   input += synapse0x1d81700();
   input += synapse0x1d81740();
   input += synapse0x1d81780();
   input += synapse0x1d81210();
   input += synapse0x1d81250();
   input += synapse0x1d818d0();
   input += synapse0x1d81910();
   input += synapse0x1d81950();
   input += synapse0x1d81990();
   input += synapse0x1d819d0();
   input += synapse0x1d81a10();
   input += synapse0x1d81a50();
   input += synapse0x1d81a90();
   input += synapse0x1d81ad0();
   input += synapse0x1d81b10();
   input += synapse0x1d81b50();
   input += synapse0x1d81b90();
   input += synapse0x1d81bd0();
   input += synapse0x1d81c10();
   input += synapse0x1d817c0();
   input += synapse0x1d81800();
   input += synapse0x1d81840();
   input += synapse0x1d81880();
   input += synapse0x1d81e60();
   input += synapse0x1d81ea0();
   input += synapse0x1d81ee0();
   input += synapse0x1d81f20();
   input += synapse0x1d81f60();
   input += synapse0x1d81fa0();
   input += synapse0x1d81fe0();
   input += synapse0x1d82020();
   input += synapse0x1d82060();
   input += synapse0x1d820a0();
   input += synapse0x1d820e0();
   input += synapse0x1d82120();
   input += synapse0x1d82160();
   input += synapse0x1d821a0();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d81080() {
   double input = input0x1d81080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d821e0() {
   double input = -0.108132;
   input += synapse0x1d82520();
   input += synapse0x1d82560();
   input += synapse0x1d825a0();
   input += synapse0x1d825e0();
   input += synapse0x1d82620();
   input += synapse0x1d82660();
   input += synapse0x1d826a0();
   input += synapse0x1d826e0();
   input += synapse0x1d82720();
   input += synapse0x1d82760();
   input += synapse0x1d827a0();
   input += synapse0x1d827e0();
   input += synapse0x1d82820();
   input += synapse0x1d82860();
   input += synapse0x1d828a0();
   input += synapse0x1d828e0();
   input += synapse0x1d82370();
   input += synapse0x1d823b0();
   input += synapse0x1d82a30();
   input += synapse0x1d82a70();
   input += synapse0x1d82ab0();
   input += synapse0x1d82af0();
   input += synapse0x1d82b30();
   input += synapse0x1d82b70();
   input += synapse0x1d82bb0();
   input += synapse0x1d82bf0();
   input += synapse0x1d82c30();
   input += synapse0x1d82c70();
   input += synapse0x1d82cb0();
   input += synapse0x1d82cf0();
   input += synapse0x1d82d30();
   input += synapse0x1d82d70();
   input += synapse0x1d82920();
   input += synapse0x1d82960();
   input += synapse0x1d829a0();
   input += synapse0x1d829e0();
   input += synapse0x1d82fc0();
   input += synapse0x1d83000();
   input += synapse0x1d83040();
   input += synapse0x1d83080();
   input += synapse0x1d830c0();
   input += synapse0x1d83100();
   input += synapse0x1d83140();
   input += synapse0x1d83180();
   input += synapse0x1d831c0();
   input += synapse0x1d83200();
   input += synapse0x1d83240();
   input += synapse0x1d83280();
   input += synapse0x1d832c0();
   input += synapse0x1d83300();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d821e0() {
   double input = input0x1d821e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d83340() {
   double input = -0.236271;
   input += synapse0x1d83680();
   input += synapse0x1d836c0();
   input += synapse0x1d83700();
   input += synapse0x1d83740();
   input += synapse0x1d83780();
   input += synapse0x1d837c0();
   input += synapse0x1d83800();
   input += synapse0x1d83840();
   input += synapse0x1d83880();
   input += synapse0x1d838c0();
   input += synapse0x1d83900();
   input += synapse0x1d83940();
   input += synapse0x1d83980();
   input += synapse0x1d839c0();
   input += synapse0x1d83a00();
   input += synapse0x1d83a40();
   input += synapse0x1d834d0();
   input += synapse0x1d83510();
   input += synapse0x1d83b90();
   input += synapse0x1d83bd0();
   input += synapse0x1d83c10();
   input += synapse0x1d83c50();
   input += synapse0x1d83c90();
   input += synapse0x1d83cd0();
   input += synapse0x1d83d10();
   input += synapse0x1d83d50();
   input += synapse0x1d83d90();
   input += synapse0x1d83dd0();
   input += synapse0x1d83e10();
   input += synapse0x1d83e50();
   input += synapse0x1d83e90();
   input += synapse0x1d83ed0();
   input += synapse0x1d83a80();
   input += synapse0x1d83ac0();
   input += synapse0x1d83b00();
   input += synapse0x1d83b40();
   input += synapse0x1d84120();
   input += synapse0x1d84160();
   input += synapse0x1d841a0();
   input += synapse0x1d841e0();
   input += synapse0x1d84220();
   input += synapse0x1d84260();
   input += synapse0x1d842a0();
   input += synapse0x1d842e0();
   input += synapse0x1d84320();
   input += synapse0x1d84360();
   input += synapse0x1d843a0();
   input += synapse0x1d843e0();
   input += synapse0x1d84420();
   input += synapse0x1d84460();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d83340() {
   double input = input0x1d83340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLuL::input0x1d844a0() {
   double input = 7.44314;
   input += synapse0x1d55580();
   input += synapse0x1d846c0();
   input += synapse0x1d84700();
   input += synapse0x1d84740();
   input += synapse0x1d84780();
   return input;
}

double NNfunction_ss_cLuL::neuron0x1d844a0() {
   double input = input0x1d844a0();
   return (input * 1)+0;
}

double NNfunction_ss_cLuL::synapse0x1b103d0() {
   return (neuron0x1d50560()*0.0904947);
}

double NNfunction_ss_cLuL::synapse0x1d50420() {
   return (neuron0x1d508a0()*0.277483);
}

double NNfunction_ss_cLuL::synapse0x1d50460() {
   return (neuron0x1d50be0()*-0.445573);
}

double NNfunction_ss_cLuL::synapse0x1d55870() {
   return (neuron0x1d50f20()*-0.0458426);
}

double NNfunction_ss_cLuL::synapse0x1d558b0() {
   return (neuron0x1d51260()*-0.019507);
}

double NNfunction_ss_cLuL::synapse0x1d558f0() {
   return (neuron0x1d515a0()*-0.609133);
}

double NNfunction_ss_cLuL::synapse0x1d55930() {
   return (neuron0x1d518e0()*-0.0397442);
}

double NNfunction_ss_cLuL::synapse0x1d55970() {
   return (neuron0x1d51c20()*-0.179163);
}

double NNfunction_ss_cLuL::synapse0x1d559b0() {
   return (neuron0x1d51f60()*0.0940369);
}

double NNfunction_ss_cLuL::synapse0x1d559f0() {
   return (neuron0x1d522a0()*-0.123444);
}

double NNfunction_ss_cLuL::synapse0x1d55a30() {
   return (neuron0x1d525e0()*-0.12289);
}

double NNfunction_ss_cLuL::synapse0x1d55a70() {
   return (neuron0x1d52920()*0.258605);
}

double NNfunction_ss_cLuL::synapse0x1d55ab0() {
   return (neuron0x1d52c60()*-0.236254);
}

double NNfunction_ss_cLuL::synapse0x1d55af0() {
   return (neuron0x1d52fa0()*-0.128281);
}

double NNfunction_ss_cLuL::synapse0x1d55b30() {
   return (neuron0x1d532e0()*0.533554);
}

double NNfunction_ss_cLuL::synapse0x1d55b70() {
   return (neuron0x1d53620()*0.289161);
}

double NNfunction_ss_cLuL::synapse0x1d50390() {
   return (neuron0x1d53960()*-0.259021);
}

double NNfunction_ss_cLuL::synapse0x1d503d0() {
   return (neuron0x1d53ec0()*0.360818);
}

double NNfunction_ss_cLuL::synapse0x1b01c70() {
   return (neuron0x1d540e0()*0.315892);
}

double NNfunction_ss_cLuL::synapse0x1b01cb0() {
   return (neuron0x1d54420()*0.20874);
}

double NNfunction_ss_cLuL::synapse0x1d55dd0() {
   return (neuron0x1d54760()*0.360256);
}

double NNfunction_ss_cLuL::synapse0x1d55e10() {
   return (neuron0x1d54aa0()*0.222212);
}

double NNfunction_ss_cLuL::synapse0x1d55e50() {
   return (neuron0x1d54de0()*0.250119);
}

double NNfunction_ss_cLuL::synapse0x1d55e90() {
   return (neuron0x1d55120()*-0.0642649);
}

double NNfunction_ss_cLuL::synapse0x1d56210() {
   return (neuron0x1d50560()*-0.119682);
}

double NNfunction_ss_cLuL::synapse0x1d56250() {
   return (neuron0x1d508a0()*-0.302264);
}

double NNfunction_ss_cLuL::synapse0x1d56290() {
   return (neuron0x1d50be0()*-0.329421);
}

double NNfunction_ss_cLuL::synapse0x1d562d0() {
   return (neuron0x1d50f20()*1.35692);
}

double NNfunction_ss_cLuL::synapse0x1d56310() {
   return (neuron0x1d51260()*0.38931);
}

double NNfunction_ss_cLuL::synapse0x1d56350() {
   return (neuron0x1d515a0()*0.162561);
}

double NNfunction_ss_cLuL::synapse0x1d56390() {
   return (neuron0x1d518e0()*-0.13085);
}

double NNfunction_ss_cLuL::synapse0x1d563d0() {
   return (neuron0x1d51c20()*0.20273);
}

double NNfunction_ss_cLuL::synapse0x1d56410() {
   return (neuron0x1d51f60()*-0.085475);
}

double NNfunction_ss_cLuL::synapse0x1d55cc0() {
   return (neuron0x1d522a0()*0.0817113);
}

double NNfunction_ss_cLuL::synapse0x1d55d00() {
   return (neuron0x1d525e0()*0.223007);
}

double NNfunction_ss_cLuL::synapse0x1d55d40() {
   return (neuron0x1d52920()*-1.40985);
}

double NNfunction_ss_cLuL::synapse0x1d55d80() {
   return (neuron0x1d52c60()*-0.526274);
}

double NNfunction_ss_cLuL::synapse0x1d56660() {
   return (neuron0x1d52fa0()*-0.330822);
}

double NNfunction_ss_cLuL::synapse0x1d566a0() {
   return (neuron0x1d532e0()*-0.239772);
}

double NNfunction_ss_cLuL::synapse0x1d566e0() {
   return (neuron0x1d53620()*0.208915);
}

double NNfunction_ss_cLuL::synapse0x1d56060() {
   return (neuron0x1d53960()*-0.27978);
}

double NNfunction_ss_cLuL::synapse0x1d560a0() {
   return (neuron0x1d53ec0()*-0.130477);
}

double NNfunction_ss_cLuL::synapse0x1d56830() {
   return (neuron0x1d540e0()*0.140343);
}

double NNfunction_ss_cLuL::synapse0x1d56870() {
   return (neuron0x1d54420()*0.263996);
}

double NNfunction_ss_cLuL::synapse0x1d568b0() {
   return (neuron0x1d54760()*0.0437363);
}

double NNfunction_ss_cLuL::synapse0x1d568f0() {
   return (neuron0x1d54aa0()*0.0573509);
}

double NNfunction_ss_cLuL::synapse0x1d56930() {
   return (neuron0x1d54de0()*-0.136341);
}

double NNfunction_ss_cLuL::synapse0x1d56970() {
   return (neuron0x1d55120()*0.109297);
}

double NNfunction_ss_cLuL::synapse0x1d56cf0() {
   return (neuron0x1d50560()*-0.175997);
}

double NNfunction_ss_cLuL::synapse0x1d56d30() {
   return (neuron0x1d508a0()*0.132688);
}

double NNfunction_ss_cLuL::synapse0x1d56d70() {
   return (neuron0x1d50be0()*-0.0812076);
}

double NNfunction_ss_cLuL::synapse0x1d56db0() {
   return (neuron0x1d50f20()*-0.510392);
}

double NNfunction_ss_cLuL::synapse0x1d56df0() {
   return (neuron0x1d51260()*0.122435);
}

double NNfunction_ss_cLuL::synapse0x1d56e30() {
   return (neuron0x1d515a0()*0.16326);
}

double NNfunction_ss_cLuL::synapse0x1d56e70() {
   return (neuron0x1d518e0()*-0.195321);
}

double NNfunction_ss_cLuL::synapse0x1d56eb0() {
   return (neuron0x1d51c20()*0.370494);
}

double NNfunction_ss_cLuL::synapse0x1d56ef0() {
   return (neuron0x1d51f60()*0.0913826);
}

double NNfunction_ss_cLuL::synapse0x1d56f30() {
   return (neuron0x1d522a0()*0.00480985);
}

double NNfunction_ss_cLuL::synapse0x1d56f70() {
   return (neuron0x1d525e0()*-0.0864768);
}

double NNfunction_ss_cLuL::synapse0x1d56fb0() {
   return (neuron0x1d52920()*-0.176078);
}

double NNfunction_ss_cLuL::synapse0x1d56ff0() {
   return (neuron0x1d52c60()*-0.204117);
}

double NNfunction_ss_cLuL::synapse0x1d57030() {
   return (neuron0x1d52fa0()*0.0186294);
}

double NNfunction_ss_cLuL::synapse0x1d57070() {
   return (neuron0x1d532e0()*-0.030907);
}

double NNfunction_ss_cLuL::synapse0x1d570b0() {
   return (neuron0x1d53620()*-0.352259);
}

double NNfunction_ss_cLuL::synapse0x1d56b40() {
   return (neuron0x1d53960()*0.290116);
}

double NNfunction_ss_cLuL::synapse0x1d56b80() {
   return (neuron0x1d53ec0()*0.168203);
}

double NNfunction_ss_cLuL::synapse0x1b0fac0() {
   return (neuron0x1d540e0()*-0.391626);
}

double NNfunction_ss_cLuL::synapse0x1b0fb00() {
   return (neuron0x1d54420()*-0.094172);
}

double NNfunction_ss_cLuL::synapse0x1d3f5f0() {
   return (neuron0x1d54760()*-0.0735188);
}

double NNfunction_ss_cLuL::synapse0x1d3f630() {
   return (neuron0x1d54aa0()*0.20123);
}

double NNfunction_ss_cLuL::synapse0x1d3f670() {
   return (neuron0x1d54de0()*-0.275125);
}

double NNfunction_ss_cLuL::synapse0x1d504a0() {
   return (neuron0x1d55120()*0.168292);
}

double NNfunction_ss_cLuL::synapse0x1d56600() {
   return (neuron0x1d50560()*-0.102385);
}

double NNfunction_ss_cLuL::synapse0x1d504e0() {
   return (neuron0x1d508a0()*0.017469);
}

double NNfunction_ss_cLuL::synapse0x1d50520() {
   return (neuron0x1d50be0()*0.0113142);
}

double NNfunction_ss_cLuL::synapse0x1d57200() {
   return (neuron0x1d50f20()*-0.80378);
}

double NNfunction_ss_cLuL::synapse0x1d57240() {
   return (neuron0x1d51260()*-0.111347);
}

double NNfunction_ss_cLuL::synapse0x1d57280() {
   return (neuron0x1d515a0()*0.100122);
}

double NNfunction_ss_cLuL::synapse0x1d572c0() {
   return (neuron0x1d518e0()*-0.00929114);
}

double NNfunction_ss_cLuL::synapse0x1d57300() {
   return (neuron0x1d51c20()*-0.020075);
}

double NNfunction_ss_cLuL::synapse0x1d57340() {
   return (neuron0x1d51f60()*0.184824);
}

double NNfunction_ss_cLuL::synapse0x1d57380() {
   return (neuron0x1d522a0()*-0.0390501);
}

double NNfunction_ss_cLuL::synapse0x1d573c0() {
   return (neuron0x1d525e0()*0.163971);
}

double NNfunction_ss_cLuL::synapse0x1d57400() {
   return (neuron0x1d52920()*-0.715997);
}

double NNfunction_ss_cLuL::synapse0x1d57440() {
   return (neuron0x1d52c60()*0.649055);
}

double NNfunction_ss_cLuL::synapse0x1d57480() {
   return (neuron0x1d52fa0()*-0.0604124);
}

double NNfunction_ss_cLuL::synapse0x1d574c0() {
   return (neuron0x1d532e0()*-0.0479437);
}

double NNfunction_ss_cLuL::synapse0x1d57500() {
   return (neuron0x1d53620()*-0.150633);
}

double NNfunction_ss_cLuL::synapse0x1d56450() {
   return (neuron0x1d53960()*-0.0448306);
}

double NNfunction_ss_cLuL::synapse0x1d56490() {
   return (neuron0x1d53ec0()*-0.130217);
}

double NNfunction_ss_cLuL::synapse0x1d57650() {
   return (neuron0x1d540e0()*0.00140601);
}

double NNfunction_ss_cLuL::synapse0x1d57690() {
   return (neuron0x1d54420()*-0.0484276);
}

double NNfunction_ss_cLuL::synapse0x1d576d0() {
   return (neuron0x1d54760()*0.0383249);
}

double NNfunction_ss_cLuL::synapse0x1d57710() {
   return (neuron0x1d54aa0()*-0.0761498);
}

double NNfunction_ss_cLuL::synapse0x1d57750() {
   return (neuron0x1d54de0()*-0.222712);
}

double NNfunction_ss_cLuL::synapse0x1d57790() {
   return (neuron0x1d55120()*0.248857);
}

double NNfunction_ss_cLuL::synapse0x1d57b10() {
   return (neuron0x1d50560()*0.0188636);
}

double NNfunction_ss_cLuL::synapse0x1d57b50() {
   return (neuron0x1d508a0()*-0.0591818);
}

double NNfunction_ss_cLuL::synapse0x1d57b90() {
   return (neuron0x1d50be0()*-0.0318268);
}

double NNfunction_ss_cLuL::synapse0x1d57bd0() {
   return (neuron0x1d50f20()*2.48602);
}

double NNfunction_ss_cLuL::synapse0x1d57c10() {
   return (neuron0x1d51260()*0.00412676);
}

double NNfunction_ss_cLuL::synapse0x1d57c50() {
   return (neuron0x1d515a0()*-0.0906849);
}

double NNfunction_ss_cLuL::synapse0x1d57c90() {
   return (neuron0x1d518e0()*0.0379489);
}

double NNfunction_ss_cLuL::synapse0x1d57cd0() {
   return (neuron0x1d51c20()*-0.00601866);
}

double NNfunction_ss_cLuL::synapse0x1d57d10() {
   return (neuron0x1d51f60()*0.0618232);
}

double NNfunction_ss_cLuL::synapse0x1d57d50() {
   return (neuron0x1d522a0()*0.11354);
}

double NNfunction_ss_cLuL::synapse0x1d57d90() {
   return (neuron0x1d525e0()*0.0911717);
}

double NNfunction_ss_cLuL::synapse0x1d57dd0() {
   return (neuron0x1d52920()*2.86832);
}

double NNfunction_ss_cLuL::synapse0x1d57e10() {
   return (neuron0x1d52c60()*-0.0854053);
}

double NNfunction_ss_cLuL::synapse0x1d57e50() {
   return (neuron0x1d52fa0()*0.0392605);
}

double NNfunction_ss_cLuL::synapse0x1d57e90() {
   return (neuron0x1d532e0()*-0.0540515);
}

double NNfunction_ss_cLuL::synapse0x1d57ed0() {
   return (neuron0x1d53620()*-0.0965496);
}

double NNfunction_ss_cLuL::synapse0x1d57960() {
   return (neuron0x1d53960()*-0.000434916);
}

double NNfunction_ss_cLuL::synapse0x1d579a0() {
   return (neuron0x1d53ec0()*0.0150627);
}

double NNfunction_ss_cLuL::synapse0x1d58020() {
   return (neuron0x1d540e0()*-0.0920752);
}

double NNfunction_ss_cLuL::synapse0x1d58060() {
   return (neuron0x1d54420()*-0.00374283);
}

double NNfunction_ss_cLuL::synapse0x1d580a0() {
   return (neuron0x1d54760()*-0.0116769);
}

double NNfunction_ss_cLuL::synapse0x1d580e0() {
   return (neuron0x1d54aa0()*0.0330216);
}

double NNfunction_ss_cLuL::synapse0x1d58120() {
   return (neuron0x1d54de0()*-0.0161073);
}

double NNfunction_ss_cLuL::synapse0x1d58160() {
   return (neuron0x1d55120()*-0.00412615);
}

double NNfunction_ss_cLuL::synapse0x1d584e0() {
   return (neuron0x1d50560()*0.0329992);
}

double NNfunction_ss_cLuL::synapse0x1d58520() {
   return (neuron0x1d508a0()*0.0167853);
}

double NNfunction_ss_cLuL::synapse0x1d58560() {
   return (neuron0x1d50be0()*-0.0149224);
}

double NNfunction_ss_cLuL::synapse0x1d585a0() {
   return (neuron0x1d50f20()*-0.0051709);
}

double NNfunction_ss_cLuL::synapse0x1d585e0() {
   return (neuron0x1d51260()*0.0212283);
}

double NNfunction_ss_cLuL::synapse0x1d58620() {
   return (neuron0x1d515a0()*0.0256794);
}

double NNfunction_ss_cLuL::synapse0x1d58660() {
   return (neuron0x1d518e0()*0.029703);
}

double NNfunction_ss_cLuL::synapse0x1d586a0() {
   return (neuron0x1d51c20()*-0.0569283);
}

double NNfunction_ss_cLuL::synapse0x1d586e0() {
   return (neuron0x1d51f60()*0.0423046);
}

double NNfunction_ss_cLuL::synapse0x1b0fe30() {
   return (neuron0x1d522a0()*0.0497028);
}

double NNfunction_ss_cLuL::synapse0x1b0fe70() {
   return (neuron0x1d525e0()*0.00785022);
}

double NNfunction_ss_cLuL::synapse0x1b0feb0() {
   return (neuron0x1d52920()*0.148298);
}

double NNfunction_ss_cLuL::synapse0x1b0fef0() {
   return (neuron0x1d52c60()*2.73411);
}

double NNfunction_ss_cLuL::synapse0x1b0ff30() {
   return (neuron0x1d52fa0()*-0.0109478);
}

double NNfunction_ss_cLuL::synapse0x1b0ff70() {
   return (neuron0x1d532e0()*-0.033064);
}

double NNfunction_ss_cLuL::synapse0x1b0ffb0() {
   return (neuron0x1d53620()*0.0165596);
}

double NNfunction_ss_cLuL::synapse0x1d58330() {
   return (neuron0x1d53960()*-0.0282437);
}

double NNfunction_ss_cLuL::synapse0x1d58370() {
   return (neuron0x1d53ec0()*0.0338486);
}

double NNfunction_ss_cLuL::synapse0x1b10100() {
   return (neuron0x1d540e0()*-0.00165252);
}

double NNfunction_ss_cLuL::synapse0x1b10140() {
   return (neuron0x1d54420()*-0.0163702);
}

double NNfunction_ss_cLuL::synapse0x1b10180() {
   return (neuron0x1d54760()*-0.0719312);
}

double NNfunction_ss_cLuL::synapse0x1b101c0() {
   return (neuron0x1d54aa0()*0.0138285);
}

double NNfunction_ss_cLuL::synapse0x1b10200() {
   return (neuron0x1d54de0()*0.04122);
}

double NNfunction_ss_cLuL::synapse0x1d58f30() {
   return (neuron0x1d55120()*-0.0143458);
}

double NNfunction_ss_cLuL::synapse0x1d592b0() {
   return (neuron0x1d50560()*0.0126954);
}

double NNfunction_ss_cLuL::synapse0x1d592f0() {
   return (neuron0x1d508a0()*-0.00759549);
}

double NNfunction_ss_cLuL::synapse0x1d59330() {
   return (neuron0x1d50be0()*0.0369499);
}

double NNfunction_ss_cLuL::synapse0x1d59370() {
   return (neuron0x1d50f20()*-17.6652);
}

double NNfunction_ss_cLuL::synapse0x1d593b0() {
   return (neuron0x1d51260()*0.000120896);
}

double NNfunction_ss_cLuL::synapse0x1d593f0() {
   return (neuron0x1d515a0()*0.0322837);
}

double NNfunction_ss_cLuL::synapse0x1d59430() {
   return (neuron0x1d518e0()*-0.0223734);
}

double NNfunction_ss_cLuL::synapse0x1d59470() {
   return (neuron0x1d51c20()*-0.0144217);
}

double NNfunction_ss_cLuL::synapse0x1d594b0() {
   return (neuron0x1d51f60()*0.0104025);
}

double NNfunction_ss_cLuL::synapse0x1d594f0() {
   return (neuron0x1d522a0()*0.00351614);
}

double NNfunction_ss_cLuL::synapse0x1d59530() {
   return (neuron0x1d525e0()*-0.0213674);
}

double NNfunction_ss_cLuL::synapse0x1d59570() {
   return (neuron0x1d52920()*-0.0423032);
}

double NNfunction_ss_cLuL::synapse0x1d595b0() {
   return (neuron0x1d52c60()*-0.0313151);
}

double NNfunction_ss_cLuL::synapse0x1d595f0() {
   return (neuron0x1d52fa0()*0.0111992);
}

double NNfunction_ss_cLuL::synapse0x1d59630() {
   return (neuron0x1d532e0()*0.00253307);
}

double NNfunction_ss_cLuL::synapse0x1d59670() {
   return (neuron0x1d53620()*-0.00402589);
}

double NNfunction_ss_cLuL::synapse0x1d59100() {
   return (neuron0x1d53960()*0.0216607);
}

double NNfunction_ss_cLuL::synapse0x1d59140() {
   return (neuron0x1d53ec0()*0.0114045);
}

double NNfunction_ss_cLuL::synapse0x1d597c0() {
   return (neuron0x1d540e0()*-0.0186674);
}

double NNfunction_ss_cLuL::synapse0x1d59800() {
   return (neuron0x1d54420()*0.00901662);
}

double NNfunction_ss_cLuL::synapse0x1d59840() {
   return (neuron0x1d54760()*-0.000816583);
}

double NNfunction_ss_cLuL::synapse0x1d59880() {
   return (neuron0x1d54aa0()*-0.00789193);
}

double NNfunction_ss_cLuL::synapse0x1d598c0() {
   return (neuron0x1d54de0()*-0.0260908);
}

double NNfunction_ss_cLuL::synapse0x1d59900() {
   return (neuron0x1d55120()*-0.0210952);
}

double NNfunction_ss_cLuL::synapse0x1d59c80() {
   return (neuron0x1d50560()*0.00623312);
}

double NNfunction_ss_cLuL::synapse0x1d59cc0() {
   return (neuron0x1d508a0()*-5.04726e-05);
}

double NNfunction_ss_cLuL::synapse0x1d59d00() {
   return (neuron0x1d50be0()*-0.022962);
}

double NNfunction_ss_cLuL::synapse0x1d59d40() {
   return (neuron0x1d50f20()*-0.389935);
}

double NNfunction_ss_cLuL::synapse0x1d59d80() {
   return (neuron0x1d51260()*0.0393746);
}

double NNfunction_ss_cLuL::synapse0x1d59dc0() {
   return (neuron0x1d515a0()*-0.0457139);
}

double NNfunction_ss_cLuL::synapse0x1d59e00() {
   return (neuron0x1d518e0()*-0.0200315);
}

double NNfunction_ss_cLuL::synapse0x1d59e40() {
   return (neuron0x1d51c20()*0.00490038);
}

double NNfunction_ss_cLuL::synapse0x1d59e80() {
   return (neuron0x1d51f60()*-0.053035);
}

double NNfunction_ss_cLuL::synapse0x1d59ec0() {
   return (neuron0x1d522a0()*-0.0251694);
}

double NNfunction_ss_cLuL::synapse0x1d59f00() {
   return (neuron0x1d525e0()*-0.0508855);
}

double NNfunction_ss_cLuL::synapse0x1d59f40() {
   return (neuron0x1d52920()*-0.36364);
}

double NNfunction_ss_cLuL::synapse0x1d59f80() {
   return (neuron0x1d52c60()*-0.89004);
}

double NNfunction_ss_cLuL::synapse0x1d59fc0() {
   return (neuron0x1d52fa0()*-0.0512083);
}

double NNfunction_ss_cLuL::synapse0x1d5a000() {
   return (neuron0x1d532e0()*-0.0402241);
}

double NNfunction_ss_cLuL::synapse0x1d5a040() {
   return (neuron0x1d53620()*0.0371138);
}

double NNfunction_ss_cLuL::synapse0x1d59ad0() {
   return (neuron0x1d53960()*-0.0520489);
}

double NNfunction_ss_cLuL::synapse0x1d59b10() {
   return (neuron0x1d53ec0()*-0.0342355);
}

double NNfunction_ss_cLuL::synapse0x1d5a190() {
   return (neuron0x1d540e0()*0.0291822);
}

double NNfunction_ss_cLuL::synapse0x1d5a1d0() {
   return (neuron0x1d54420()*-0.0024778);
}

double NNfunction_ss_cLuL::synapse0x1d5a210() {
   return (neuron0x1d54760()*0.0368143);
}

double NNfunction_ss_cLuL::synapse0x1d5a250() {
   return (neuron0x1d54aa0()*0.00412134);
}

double NNfunction_ss_cLuL::synapse0x1d5a290() {
   return (neuron0x1d54de0()*-0.0104866);
}

double NNfunction_ss_cLuL::synapse0x1d5a2d0() {
   return (neuron0x1d55120()*-0.0243019);
}

double NNfunction_ss_cLuL::synapse0x1d53db0() {
   return (neuron0x1d50560()*-0.00657259);
}

double NNfunction_ss_cLuL::synapse0x1d53df0() {
   return (neuron0x1d508a0()*0.00834493);
}

double NNfunction_ss_cLuL::synapse0x1d53e30() {
   return (neuron0x1d50be0()*-0.0867321);
}

double NNfunction_ss_cLuL::synapse0x1d53e70() {
   return (neuron0x1d50f20()*0.0879372);
}

double NNfunction_ss_cLuL::synapse0x1d5a860() {
   return (neuron0x1d51260()*-0.0066889);
}

double NNfunction_ss_cLuL::synapse0x1d5a8a0() {
   return (neuron0x1d515a0()*-0.0145665);
}

double NNfunction_ss_cLuL::synapse0x1d5a8e0() {
   return (neuron0x1d518e0()*0.00880776);
}

double NNfunction_ss_cLuL::synapse0x1d5a920() {
   return (neuron0x1d51c20()*0.00236601);
}

double NNfunction_ss_cLuL::synapse0x1d5a960() {
   return (neuron0x1d51f60()*-0.0186573);
}

double NNfunction_ss_cLuL::synapse0x1d5a9a0() {
   return (neuron0x1d522a0()*0.0180806);
}

double NNfunction_ss_cLuL::synapse0x1d5a9e0() {
   return (neuron0x1d525e0()*-0.0345015);
}

double NNfunction_ss_cLuL::synapse0x1d5aa20() {
   return (neuron0x1d52920()*0.66203);
}

double NNfunction_ss_cLuL::synapse0x1d5aa60() {
   return (neuron0x1d52c60()*0.407294);
}

double NNfunction_ss_cLuL::synapse0x1d5aaa0() {
   return (neuron0x1d52fa0()*-0.00655483);
}

double NNfunction_ss_cLuL::synapse0x1d5aae0() {
   return (neuron0x1d532e0()*0.00104905);
}

double NNfunction_ss_cLuL::synapse0x1d5ab20() {
   return (neuron0x1d53620()*0.0194711);
}

double NNfunction_ss_cLuL::synapse0x1d5a4a0() {
   return (neuron0x1d53960()*8.33069e-05);
}

double NNfunction_ss_cLuL::synapse0x1d5a4e0() {
   return (neuron0x1d53ec0()*0.0332018);
}

double NNfunction_ss_cLuL::synapse0x1d5ac70() {
   return (neuron0x1d540e0()*0.0312298);
}

double NNfunction_ss_cLuL::synapse0x1d5acb0() {
   return (neuron0x1d54420()*-0.0289637);
}

double NNfunction_ss_cLuL::synapse0x1d5acf0() {
   return (neuron0x1d54760()*0.00427527);
}

double NNfunction_ss_cLuL::synapse0x1d5ad30() {
   return (neuron0x1d54aa0()*-0.0237346);
}

double NNfunction_ss_cLuL::synapse0x1d5ad70() {
   return (neuron0x1d54de0()*0.0123212);
}

double NNfunction_ss_cLuL::synapse0x1d5adb0() {
   return (neuron0x1d55120()*-0.0336479);
}

double NNfunction_ss_cLuL::synapse0x1d5b130() {
   return (neuron0x1d50560()*-0.518985);
}

double NNfunction_ss_cLuL::synapse0x1d5b170() {
   return (neuron0x1d508a0()*-0.212042);
}

double NNfunction_ss_cLuL::synapse0x1d5b1b0() {
   return (neuron0x1d50be0()*0.435963);
}

double NNfunction_ss_cLuL::synapse0x1d5b1f0() {
   return (neuron0x1d50f20()*-0.540214);
}

double NNfunction_ss_cLuL::synapse0x1d5b230() {
   return (neuron0x1d51260()*-0.160984);
}

double NNfunction_ss_cLuL::synapse0x1d5b270() {
   return (neuron0x1d515a0()*-0.172207);
}

double NNfunction_ss_cLuL::synapse0x1d5b2b0() {
   return (neuron0x1d518e0()*-0.376991);
}

double NNfunction_ss_cLuL::synapse0x1d5b2f0() {
   return (neuron0x1d51c20()*0.318803);
}

double NNfunction_ss_cLuL::synapse0x1d5b330() {
   return (neuron0x1d51f60()*0.154027);
}

double NNfunction_ss_cLuL::synapse0x1d5b370() {
   return (neuron0x1d522a0()*0.38737);
}

double NNfunction_ss_cLuL::synapse0x1d5b3b0() {
   return (neuron0x1d525e0()*0.188015);
}

double NNfunction_ss_cLuL::synapse0x1d5b3f0() {
   return (neuron0x1d52920()*-0.198722);
}

double NNfunction_ss_cLuL::synapse0x1d5b430() {
   return (neuron0x1d52c60()*0.0459244);
}

double NNfunction_ss_cLuL::synapse0x1d5b470() {
   return (neuron0x1d52fa0()*0.125045);
}

double NNfunction_ss_cLuL::synapse0x1d5b4b0() {
   return (neuron0x1d532e0()*-0.126644);
}

double NNfunction_ss_cLuL::synapse0x1d5b4f0() {
   return (neuron0x1d53620()*-0.0217784);
}

double NNfunction_ss_cLuL::synapse0x1d5af80() {
   return (neuron0x1d53960()*-0.244005);
}

double NNfunction_ss_cLuL::synapse0x1d5afc0() {
   return (neuron0x1d53ec0()*-0.183293);
}

double NNfunction_ss_cLuL::synapse0x1d5b640() {
   return (neuron0x1d540e0()*-0.102545);
}

double NNfunction_ss_cLuL::synapse0x1d5b680() {
   return (neuron0x1d54420()*0.29721);
}

double NNfunction_ss_cLuL::synapse0x1d5b6c0() {
   return (neuron0x1d54760()*-0.263433);
}

double NNfunction_ss_cLuL::synapse0x1d5b700() {
   return (neuron0x1d54aa0()*-0.146823);
}

double NNfunction_ss_cLuL::synapse0x1d5b740() {
   return (neuron0x1d54de0()*-0.0544394);
}

double NNfunction_ss_cLuL::synapse0x1d5b780() {
   return (neuron0x1d55120()*0.0324488);
}

double NNfunction_ss_cLuL::synapse0x1d5bb00() {
   return (neuron0x1d50560()*0.0110896);
}

double NNfunction_ss_cLuL::synapse0x1d5bb40() {
   return (neuron0x1d508a0()*0.0232594);
}

double NNfunction_ss_cLuL::synapse0x1d5bb80() {
   return (neuron0x1d50be0()*0.129605);
}

double NNfunction_ss_cLuL::synapse0x1d5bbc0() {
   return (neuron0x1d50f20()*-1.11867);
}

double NNfunction_ss_cLuL::synapse0x1d5bc00() {
   return (neuron0x1d51260()*0.0269212);
}

double NNfunction_ss_cLuL::synapse0x1d5bc40() {
   return (neuron0x1d515a0()*-0.000969192);
}

double NNfunction_ss_cLuL::synapse0x1d5bc80() {
   return (neuron0x1d518e0()*-0.0191072);
}

double NNfunction_ss_cLuL::synapse0x1d5bcc0() {
   return (neuron0x1d51c20()*-0.015557);
}

double NNfunction_ss_cLuL::synapse0x1d5bd00() {
   return (neuron0x1d51f60()*0.0125409);
}

double NNfunction_ss_cLuL::synapse0x1d5bd40() {
   return (neuron0x1d522a0()*-0.0291791);
}

double NNfunction_ss_cLuL::synapse0x1d5bd80() {
   return (neuron0x1d525e0()*0.00202821);
}

double NNfunction_ss_cLuL::synapse0x1d5bdc0() {
   return (neuron0x1d52920()*0.115367);
}

double NNfunction_ss_cLuL::synapse0x1d5be00() {
   return (neuron0x1d52c60()*-1.45009);
}

double NNfunction_ss_cLuL::synapse0x1d5be40() {
   return (neuron0x1d52fa0()*-0.0830801);
}

double NNfunction_ss_cLuL::synapse0x1d5be80() {
   return (neuron0x1d532e0()*-0.0230501);
}

double NNfunction_ss_cLuL::synapse0x1d5bec0() {
   return (neuron0x1d53620()*0.0220604);
}

double NNfunction_ss_cLuL::synapse0x1d5b950() {
   return (neuron0x1d53960()*-0.016621);
}

double NNfunction_ss_cLuL::synapse0x1d5b990() {
   return (neuron0x1d53ec0()*-0.00295576);
}

double NNfunction_ss_cLuL::synapse0x1d58720() {
   return (neuron0x1d540e0()*0.0322857);
}

double NNfunction_ss_cLuL::synapse0x1d58760() {
   return (neuron0x1d54420()*-0.00450758);
}

double NNfunction_ss_cLuL::synapse0x1d587a0() {
   return (neuron0x1d54760()*0.00941748);
}

double NNfunction_ss_cLuL::synapse0x1d587e0() {
   return (neuron0x1d54aa0()*-0.0156828);
}

double NNfunction_ss_cLuL::synapse0x1d58820() {
   return (neuron0x1d54de0()*0.0302676);
}

double NNfunction_ss_cLuL::synapse0x1d58860() {
   return (neuron0x1d55120()*-0.0238469);
}

double NNfunction_ss_cLuL::synapse0x1d58be0() {
   return (neuron0x1d50560()*-0.0893935);
}

double NNfunction_ss_cLuL::synapse0x1d58c20() {
   return (neuron0x1d508a0()*0.0885832);
}

double NNfunction_ss_cLuL::synapse0x1d58c60() {
   return (neuron0x1d50be0()*0.472163);
}

double NNfunction_ss_cLuL::synapse0x1d58ca0() {
   return (neuron0x1d50f20()*-0.769562);
}

double NNfunction_ss_cLuL::synapse0x1d58ce0() {
   return (neuron0x1d51260()*0.0168153);
}

double NNfunction_ss_cLuL::synapse0x1d58d20() {
   return (neuron0x1d515a0()*0.0244264);
}

double NNfunction_ss_cLuL::synapse0x1d58d60() {
   return (neuron0x1d518e0()*0.134703);
}

double NNfunction_ss_cLuL::synapse0x1d58da0() {
   return (neuron0x1d51c20()*0.158996);
}

double NNfunction_ss_cLuL::synapse0x1d58de0() {
   return (neuron0x1d51f60()*-0.222593);
}

double NNfunction_ss_cLuL::synapse0x1d58e20() {
   return (neuron0x1d522a0()*0.00705301);
}

double NNfunction_ss_cLuL::synapse0x1d58e60() {
   return (neuron0x1d525e0()*-0.0704501);
}

double NNfunction_ss_cLuL::synapse0x1d58ea0() {
   return (neuron0x1d52920()*-0.305645);
}

double NNfunction_ss_cLuL::synapse0x1d58ee0() {
   return (neuron0x1d52c60()*0.160961);
}

double NNfunction_ss_cLuL::synapse0x1d5d020() {
   return (neuron0x1d52fa0()*-0.114548);
}

double NNfunction_ss_cLuL::synapse0x1d5d060() {
   return (neuron0x1d532e0()*0.0426418);
}

double NNfunction_ss_cLuL::synapse0x1d5d0a0() {
   return (neuron0x1d53620()*0.382119);
}

double NNfunction_ss_cLuL::synapse0x1d58a30() {
   return (neuron0x1d53960()*-0.347239);
}

double NNfunction_ss_cLuL::synapse0x1d58a70() {
   return (neuron0x1d53ec0()*0.277564);
}

double NNfunction_ss_cLuL::synapse0x1d5d1f0() {
   return (neuron0x1d540e0()*0.0980221);
}

double NNfunction_ss_cLuL::synapse0x1d5d230() {
   return (neuron0x1d54420()*0.165909);
}

double NNfunction_ss_cLuL::synapse0x1d5d270() {
   return (neuron0x1d54760()*0.125273);
}

double NNfunction_ss_cLuL::synapse0x1d5d2b0() {
   return (neuron0x1d54aa0()*0.00651382);
}

double NNfunction_ss_cLuL::synapse0x1d5d2f0() {
   return (neuron0x1d54de0()*-0.0328541);
}

double NNfunction_ss_cLuL::synapse0x1d5d330() {
   return (neuron0x1d55120()*-0.106128);
}

double NNfunction_ss_cLuL::synapse0x1d5d6b0() {
   return (neuron0x1d50560()*-0.0253462);
}

double NNfunction_ss_cLuL::synapse0x1d5d6f0() {
   return (neuron0x1d508a0()*0.00772922);
}

double NNfunction_ss_cLuL::synapse0x1d5d730() {
   return (neuron0x1d50be0()*-0.0125994);
}

double NNfunction_ss_cLuL::synapse0x1d5d770() {
   return (neuron0x1d50f20()*13.4624);
}

double NNfunction_ss_cLuL::synapse0x1d5d7b0() {
   return (neuron0x1d51260()*-0.0128913);
}

double NNfunction_ss_cLuL::synapse0x1d5d7f0() {
   return (neuron0x1d515a0()*-0.0506185);
}

double NNfunction_ss_cLuL::synapse0x1d5d830() {
   return (neuron0x1d518e0()*0.0191464);
}

double NNfunction_ss_cLuL::synapse0x1d5d870() {
   return (neuron0x1d51c20()*0.0239469);
}

double NNfunction_ss_cLuL::synapse0x1d5d8b0() {
   return (neuron0x1d51f60()*0.00765243);
}

double NNfunction_ss_cLuL::synapse0x1d5d8f0() {
   return (neuron0x1d522a0()*0.00554502);
}

double NNfunction_ss_cLuL::synapse0x1d5d930() {
   return (neuron0x1d525e0()*0.0247444);
}

double NNfunction_ss_cLuL::synapse0x1d5d970() {
   return (neuron0x1d52920()*0.165122);
}

double NNfunction_ss_cLuL::synapse0x1d5d9b0() {
   return (neuron0x1d52c60()*0.216261);
}

double NNfunction_ss_cLuL::synapse0x1d5d9f0() {
   return (neuron0x1d52fa0()*0.0307477);
}

double NNfunction_ss_cLuL::synapse0x1d5da30() {
   return (neuron0x1d532e0()*-0.00652833);
}

double NNfunction_ss_cLuL::synapse0x1d5da70() {
   return (neuron0x1d53620()*-0.00035871);
}

double NNfunction_ss_cLuL::synapse0x1d5d500() {
   return (neuron0x1d53960()*-0.0151575);
}

double NNfunction_ss_cLuL::synapse0x1d5d540() {
   return (neuron0x1d53ec0()*-0.0192617);
}

double NNfunction_ss_cLuL::synapse0x1d5dbc0() {
   return (neuron0x1d540e0()*0.0473146);
}

double NNfunction_ss_cLuL::synapse0x1d5dc00() {
   return (neuron0x1d54420()*-0.0131012);
}

double NNfunction_ss_cLuL::synapse0x1d5dc40() {
   return (neuron0x1d54760()*-0.020151);
}

double NNfunction_ss_cLuL::synapse0x1d5dc80() {
   return (neuron0x1d54aa0()*0.004235);
}

double NNfunction_ss_cLuL::synapse0x1d5dcc0() {
   return (neuron0x1d54de0()*0.0178781);
}

double NNfunction_ss_cLuL::synapse0x1d5dd00() {
   return (neuron0x1d55120()*0.0139148);
}

double NNfunction_ss_cLuL::synapse0x1d5e080() {
   return (neuron0x1d50560()*0.0454259);
}

double NNfunction_ss_cLuL::synapse0x1d5e0c0() {
   return (neuron0x1d508a0()*0.00949344);
}

double NNfunction_ss_cLuL::synapse0x1d5e100() {
   return (neuron0x1d50be0()*-1.08994);
}

double NNfunction_ss_cLuL::synapse0x1d5e140() {
   return (neuron0x1d50f20()*-0.108861);
}

double NNfunction_ss_cLuL::synapse0x1d5e180() {
   return (neuron0x1d51260()*0.0905715);
}

double NNfunction_ss_cLuL::synapse0x1d5e1c0() {
   return (neuron0x1d515a0()*0.0114961);
}

double NNfunction_ss_cLuL::synapse0x1d5e200() {
   return (neuron0x1d518e0()*0.0172409);
}

double NNfunction_ss_cLuL::synapse0x1d5e240() {
   return (neuron0x1d51c20()*0.0202856);
}

double NNfunction_ss_cLuL::synapse0x1d5e280() {
   return (neuron0x1d51f60()*-0.0202726);
}

double NNfunction_ss_cLuL::synapse0x1d5e2c0() {
   return (neuron0x1d522a0()*0.00597476);
}

double NNfunction_ss_cLuL::synapse0x1d5e300() {
   return (neuron0x1d525e0()*-0.0492848);
}

double NNfunction_ss_cLuL::synapse0x1d5e340() {
   return (neuron0x1d52920()*0.107878);
}

double NNfunction_ss_cLuL::synapse0x1d5e380() {
   return (neuron0x1d52c60()*0.108066);
}

double NNfunction_ss_cLuL::synapse0x1d5e3c0() {
   return (neuron0x1d52fa0()*-0.00919739);
}

double NNfunction_ss_cLuL::synapse0x1d5e400() {
   return (neuron0x1d532e0()*0.00174095);
}

double NNfunction_ss_cLuL::synapse0x1d5e440() {
   return (neuron0x1d53620()*0.00778255);
}

double NNfunction_ss_cLuL::synapse0x1d5ded0() {
   return (neuron0x1d53960()*-0.0098967);
}

double NNfunction_ss_cLuL::synapse0x1d5df10() {
   return (neuron0x1d53ec0()*-0.0253455);
}

double NNfunction_ss_cLuL::synapse0x1d5e590() {
   return (neuron0x1d540e0()*0.00416042);
}

double NNfunction_ss_cLuL::synapse0x1d5e5d0() {
   return (neuron0x1d54420()*-0.0223154);
}

double NNfunction_ss_cLuL::synapse0x1d5e610() {
   return (neuron0x1d54760()*-0.0238623);
}

double NNfunction_ss_cLuL::synapse0x1d5e650() {
   return (neuron0x1d54aa0()*0.0189693);
}

double NNfunction_ss_cLuL::synapse0x1d5e690() {
   return (neuron0x1d54de0()*0.00266667);
}

double NNfunction_ss_cLuL::synapse0x1d5e6d0() {
   return (neuron0x1d55120()*0.0136129);
}

double NNfunction_ss_cLuL::synapse0x1d5ea50() {
   return (neuron0x1d50560()*-0.0389911);
}

double NNfunction_ss_cLuL::synapse0x1d5ea90() {
   return (neuron0x1d508a0()*-0.0559757);
}

double NNfunction_ss_cLuL::synapse0x1d5ead0() {
   return (neuron0x1d50be0()*0.320043);
}

double NNfunction_ss_cLuL::synapse0x1d5eb10() {
   return (neuron0x1d50f20()*0.160437);
}

double NNfunction_ss_cLuL::synapse0x1d5eb50() {
   return (neuron0x1d51260()*0.0200627);
}

double NNfunction_ss_cLuL::synapse0x1d5eb90() {
   return (neuron0x1d515a0()*0.170369);
}

double NNfunction_ss_cLuL::synapse0x1d5ebd0() {
   return (neuron0x1d518e0()*-0.116011);
}

double NNfunction_ss_cLuL::synapse0x1d5ec10() {
   return (neuron0x1d51c20()*0.411251);
}

double NNfunction_ss_cLuL::synapse0x1d5ec50() {
   return (neuron0x1d51f60()*0.0591323);
}

double NNfunction_ss_cLuL::synapse0x1d5ec90() {
   return (neuron0x1d522a0()*0.0253633);
}

double NNfunction_ss_cLuL::synapse0x1d5ecd0() {
   return (neuron0x1d525e0()*-0.0294991);
}

double NNfunction_ss_cLuL::synapse0x1d5ed10() {
   return (neuron0x1d52920()*0.258437);
}

double NNfunction_ss_cLuL::synapse0x1d5ed50() {
   return (neuron0x1d52c60()*0.00575934);
}

double NNfunction_ss_cLuL::synapse0x1d5ed90() {
   return (neuron0x1d52fa0()*0.106098);
}

double NNfunction_ss_cLuL::synapse0x1d5edd0() {
   return (neuron0x1d532e0()*0.330324);
}

double NNfunction_ss_cLuL::synapse0x1d5ee10() {
   return (neuron0x1d53620()*-0.818232);
}

double NNfunction_ss_cLuL::synapse0x1d5e8a0() {
   return (neuron0x1d53960()*-0.121252);
}

double NNfunction_ss_cLuL::synapse0x1d5e8e0() {
   return (neuron0x1d53ec0()*-0.186332);
}

double NNfunction_ss_cLuL::synapse0x1d5ef60() {
   return (neuron0x1d540e0()*-0.0947784);
}

double NNfunction_ss_cLuL::synapse0x1d5efa0() {
   return (neuron0x1d54420()*0.119184);
}

double NNfunction_ss_cLuL::synapse0x1d5efe0() {
   return (neuron0x1d54760()*0.0260295);
}

double NNfunction_ss_cLuL::synapse0x1d5f020() {
   return (neuron0x1d54aa0()*-0.0764452);
}

double NNfunction_ss_cLuL::synapse0x1d5f060() {
   return (neuron0x1d54de0()*0.0229838);
}

double NNfunction_ss_cLuL::synapse0x1d5f0a0() {
   return (neuron0x1d55120()*-0.0303844);
}

double NNfunction_ss_cLuL::synapse0x1d5f420() {
   return (neuron0x1d50560()*-0.343231);
}

double NNfunction_ss_cLuL::synapse0x1d50780() {
   return (neuron0x1d508a0()*0.0111139);
}

double NNfunction_ss_cLuL::synapse0x1d507c0() {
   return (neuron0x1d50be0()*-0.0893315);
}

double NNfunction_ss_cLuL::synapse0x1d50ac0() {
   return (neuron0x1d50f20()*-0.496823);
}

double NNfunction_ss_cLuL::synapse0x1d50b00() {
   return (neuron0x1d51260()*0.0997869);
}

double NNfunction_ss_cLuL::synapse0x1d50e00() {
   return (neuron0x1d515a0()*-0.0338935);
}

double NNfunction_ss_cLuL::synapse0x1d50e40() {
   return (neuron0x1d518e0()*0.0616914);
}

double NNfunction_ss_cLuL::synapse0x1d51140() {
   return (neuron0x1d51c20()*0.0284985);
}

double NNfunction_ss_cLuL::synapse0x1d51180() {
   return (neuron0x1d51f60()*-0.165008);
}

double NNfunction_ss_cLuL::synapse0x1d51480() {
   return (neuron0x1d522a0()*0.429225);
}

double NNfunction_ss_cLuL::synapse0x1d514c0() {
   return (neuron0x1d525e0()*0.0171549);
}

double NNfunction_ss_cLuL::synapse0x1d517c0() {
   return (neuron0x1d52920()*0.0291227);
}

double NNfunction_ss_cLuL::synapse0x1d51800() {
   return (neuron0x1d52c60()*0.0100667);
}

double NNfunction_ss_cLuL::synapse0x1d51b00() {
   return (neuron0x1d52fa0()*0.253505);
}

double NNfunction_ss_cLuL::synapse0x1d51b40() {
   return (neuron0x1d532e0()*-0.0386586);
}

double NNfunction_ss_cLuL::synapse0x1d51e40() {
   return (neuron0x1d53620()*-0.185734);
}

double NNfunction_ss_cLuL::synapse0x1d51e80() {
   return (neuron0x1d53960()*-0.237385);
}

double NNfunction_ss_cLuL::synapse0x1d52180() {
   return (neuron0x1d53ec0()*0.0128608);
}

double NNfunction_ss_cLuL::synapse0x1d521c0() {
   return (neuron0x1d540e0()*0.206552);
}

double NNfunction_ss_cLuL::synapse0x1d524c0() {
   return (neuron0x1d54420()*-0.162037);
}

double NNfunction_ss_cLuL::synapse0x1d52500() {
   return (neuron0x1d54760()*-0.0827997);
}

double NNfunction_ss_cLuL::synapse0x1d52800() {
   return (neuron0x1d54aa0()*-0.12512);
}

double NNfunction_ss_cLuL::synapse0x1d52840() {
   return (neuron0x1d54de0()*0.264771);
}

double NNfunction_ss_cLuL::synapse0x1d52b40() {
   return (neuron0x1d55120()*-0.0923117);
}

double NNfunction_ss_cLuL::synapse0x1d52b80() {
   return (neuron0x1d50560()*0.622403);
}

double NNfunction_ss_cLuL::synapse0x1d53840() {
   return (neuron0x1d508a0()*-0.547216);
}

double NNfunction_ss_cLuL::synapse0x1d53880() {
   return (neuron0x1d50be0()*0.132668);
}

double NNfunction_ss_cLuL::synapse0x1d5f270() {
   return (neuron0x1d50f20()*-0.831106);
}

double NNfunction_ss_cLuL::synapse0x1d5f2b0() {
   return (neuron0x1d51260()*0.705127);
}

double NNfunction_ss_cLuL::synapse0x1d53b80() {
   return (neuron0x1d515a0()*-0.589758);
}

double NNfunction_ss_cLuL::synapse0x1d53bc0() {
   return (neuron0x1d518e0()*-0.063449);
}

double NNfunction_ss_cLuL::synapse0x1b01b50() {
   return (neuron0x1d51c20()*-0.559656);
}

double NNfunction_ss_cLuL::synapse0x1b01b90() {
   return (neuron0x1d51f60()*-0.224989);
}

double NNfunction_ss_cLuL::synapse0x1d54300() {
   return (neuron0x1d522a0()*0.188766);
}

double NNfunction_ss_cLuL::synapse0x1d54340() {
   return (neuron0x1d525e0()*-0.460845);
}

double NNfunction_ss_cLuL::synapse0x1d54640() {
   return (neuron0x1d52920()*-0.394953);
}

double NNfunction_ss_cLuL::synapse0x1d54680() {
   return (neuron0x1d52c60()*-0.3743);
}

double NNfunction_ss_cLuL::synapse0x1d54980() {
   return (neuron0x1d52fa0()*-0.238944);
}

double NNfunction_ss_cLuL::synapse0x1d549c0() {
   return (neuron0x1d532e0()*-0.432304);
}

double NNfunction_ss_cLuL::synapse0x1d54cc0() {
   return (neuron0x1d53620()*0.130213);
}

double NNfunction_ss_cLuL::synapse0x1d54d00() {
   return (neuron0x1d53960()*0.729278);
}

double NNfunction_ss_cLuL::synapse0x1d55000() {
   return (neuron0x1d53ec0()*-0.339766);
}

double NNfunction_ss_cLuL::synapse0x1d55040() {
   return (neuron0x1d540e0()*-0.12936);
}

double NNfunction_ss_cLuL::synapse0x1d55340() {
   return (neuron0x1d54420()*0.189561);
}

double NNfunction_ss_cLuL::synapse0x1d55380() {
   return (neuron0x1d54760()*-0.00208979);
}

double NNfunction_ss_cLuL::synapse0x1d52e80() {
   return (neuron0x1d54aa0()*0.313299);
}

double NNfunction_ss_cLuL::synapse0x1d52ec0() {
   return (neuron0x1d54de0()*0.0621838);
}

double NNfunction_ss_cLuL::synapse0x1d61190() {
   return (neuron0x1d55120()*-0.108695);
}

double NNfunction_ss_cLuL::synapse0x1d61510() {
   return (neuron0x1d50560()*-0.0488105);
}

double NNfunction_ss_cLuL::synapse0x1d61550() {
   return (neuron0x1d508a0()*-0.0247149);
}

double NNfunction_ss_cLuL::synapse0x1d61590() {
   return (neuron0x1d50be0()*-0.0010665);
}

double NNfunction_ss_cLuL::synapse0x1d615d0() {
   return (neuron0x1d50f20()*0.26044);
}

double NNfunction_ss_cLuL::synapse0x1d61610() {
   return (neuron0x1d51260()*0.367443);
}

double NNfunction_ss_cLuL::synapse0x1d61650() {
   return (neuron0x1d515a0()*0.02813);
}

double NNfunction_ss_cLuL::synapse0x1d61690() {
   return (neuron0x1d518e0()*0.170751);
}

double NNfunction_ss_cLuL::synapse0x1d616d0() {
   return (neuron0x1d51c20()*0.382957);
}

double NNfunction_ss_cLuL::synapse0x1d61710() {
   return (neuron0x1d51f60()*-0.0465486);
}

double NNfunction_ss_cLuL::synapse0x1d61750() {
   return (neuron0x1d522a0()*0.220512);
}

double NNfunction_ss_cLuL::synapse0x1d61790() {
   return (neuron0x1d525e0()*-0.500698);
}

double NNfunction_ss_cLuL::synapse0x1d617d0() {
   return (neuron0x1d52920()*0.539404);
}

double NNfunction_ss_cLuL::synapse0x1d61810() {
   return (neuron0x1d52c60()*0.355037);
}

double NNfunction_ss_cLuL::synapse0x1d61850() {
   return (neuron0x1d52fa0()*0.548871);
}

double NNfunction_ss_cLuL::synapse0x1d61890() {
   return (neuron0x1d532e0()*0.454837);
}

double NNfunction_ss_cLuL::synapse0x1d618d0() {
   return (neuron0x1d53620()*0.320181);
}

double NNfunction_ss_cLuL::synapse0x1d61360() {
   return (neuron0x1d53960()*-0.188263);
}

double NNfunction_ss_cLuL::synapse0x1d613a0() {
   return (neuron0x1d53ec0()*0.448337);
}

double NNfunction_ss_cLuL::synapse0x1d61a20() {
   return (neuron0x1d540e0()*-0.00518291);
}

double NNfunction_ss_cLuL::synapse0x1d61a60() {
   return (neuron0x1d54420()*-0.115682);
}

double NNfunction_ss_cLuL::synapse0x1d61aa0() {
   return (neuron0x1d54760()*0.222509);
}

double NNfunction_ss_cLuL::synapse0x1d61ae0() {
   return (neuron0x1d54aa0()*0.00630588);
}

double NNfunction_ss_cLuL::synapse0x1d61b20() {
   return (neuron0x1d54de0()*-0.416397);
}

double NNfunction_ss_cLuL::synapse0x1d61b60() {
   return (neuron0x1d55120()*-0.4972);
}

double NNfunction_ss_cLuL::synapse0x1d61ee0() {
   return (neuron0x1d50560()*0.0381517);
}

double NNfunction_ss_cLuL::synapse0x1d61f20() {
   return (neuron0x1d508a0()*0.26943);
}

double NNfunction_ss_cLuL::synapse0x1d61f60() {
   return (neuron0x1d50be0()*0.530095);
}

double NNfunction_ss_cLuL::synapse0x1d61fa0() {
   return (neuron0x1d50f20()*0.469455);
}

double NNfunction_ss_cLuL::synapse0x1d61fe0() {
   return (neuron0x1d51260()*-0.0326362);
}

double NNfunction_ss_cLuL::synapse0x1d62020() {
   return (neuron0x1d515a0()*0.119767);
}

double NNfunction_ss_cLuL::synapse0x1d62060() {
   return (neuron0x1d518e0()*0.0692539);
}

double NNfunction_ss_cLuL::synapse0x1d620a0() {
   return (neuron0x1d51c20()*0.216185);
}

double NNfunction_ss_cLuL::synapse0x1d620e0() {
   return (neuron0x1d51f60()*0.0671341);
}

double NNfunction_ss_cLuL::synapse0x1d62120() {
   return (neuron0x1d522a0()*0.16133);
}

double NNfunction_ss_cLuL::synapse0x1d62160() {
   return (neuron0x1d525e0()*0.104653);
}

double NNfunction_ss_cLuL::synapse0x1d621a0() {
   return (neuron0x1d52920()*0.07083);
}

double NNfunction_ss_cLuL::synapse0x1d621e0() {
   return (neuron0x1d52c60()*-0.76913);
}

double NNfunction_ss_cLuL::synapse0x1d62220() {
   return (neuron0x1d52fa0()*-0.344561);
}

double NNfunction_ss_cLuL::synapse0x1d62260() {
   return (neuron0x1d532e0()*-0.914165);
}

double NNfunction_ss_cLuL::synapse0x1d622a0() {
   return (neuron0x1d53620()*0.210576);
}

double NNfunction_ss_cLuL::synapse0x1d61d30() {
   return (neuron0x1d53960()*-0.0360971);
}

double NNfunction_ss_cLuL::synapse0x1d61d70() {
   return (neuron0x1d53ec0()*-0.130675);
}

double NNfunction_ss_cLuL::synapse0x1d623f0() {
   return (neuron0x1d540e0()*0.327249);
}

double NNfunction_ss_cLuL::synapse0x1d62430() {
   return (neuron0x1d54420()*0.0908063);
}

double NNfunction_ss_cLuL::synapse0x1d62470() {
   return (neuron0x1d54760()*0.757516);
}

double NNfunction_ss_cLuL::synapse0x1d624b0() {
   return (neuron0x1d54aa0()*-0.429315);
}

double NNfunction_ss_cLuL::synapse0x1d624f0() {
   return (neuron0x1d54de0()*0.0930219);
}

double NNfunction_ss_cLuL::synapse0x1d62530() {
   return (neuron0x1d55120()*0.429325);
}

double NNfunction_ss_cLuL::synapse0x1d628b0() {
   return (neuron0x1d50560()*0.00782097);
}

double NNfunction_ss_cLuL::synapse0x1d628f0() {
   return (neuron0x1d508a0()*0.0105032);
}

double NNfunction_ss_cLuL::synapse0x1d62930() {
   return (neuron0x1d50be0()*0.0482064);
}

double NNfunction_ss_cLuL::synapse0x1d62970() {
   return (neuron0x1d50f20()*0.595127);
}

double NNfunction_ss_cLuL::synapse0x1d629b0() {
   return (neuron0x1d51260()*0.00875894);
}

double NNfunction_ss_cLuL::synapse0x1d629f0() {
   return (neuron0x1d515a0()*-0.013371);
}

double NNfunction_ss_cLuL::synapse0x1d62a30() {
   return (neuron0x1d518e0()*-0.0212661);
}

double NNfunction_ss_cLuL::synapse0x1d62a70() {
   return (neuron0x1d51c20()*-0.00965735);
}

double NNfunction_ss_cLuL::synapse0x1d62ab0() {
   return (neuron0x1d51f60()*-0.00374401);
}

double NNfunction_ss_cLuL::synapse0x1d62af0() {
   return (neuron0x1d522a0()*-0.00897418);
}

double NNfunction_ss_cLuL::synapse0x1d62b30() {
   return (neuron0x1d525e0()*-0.000780902);
}

double NNfunction_ss_cLuL::synapse0x1d62b70() {
   return (neuron0x1d52920()*-0.196068);
}

double NNfunction_ss_cLuL::synapse0x1d62bb0() {
   return (neuron0x1d52c60()*-0.282827);
}

double NNfunction_ss_cLuL::synapse0x1d62bf0() {
   return (neuron0x1d52fa0()*-0.0148149);
}

double NNfunction_ss_cLuL::synapse0x1d62c30() {
   return (neuron0x1d532e0()*-0.00381109);
}

double NNfunction_ss_cLuL::synapse0x1d62c70() {
   return (neuron0x1d53620()*-0.00937984);
}

double NNfunction_ss_cLuL::synapse0x1d62700() {
   return (neuron0x1d53960()*0.0132242);
}

double NNfunction_ss_cLuL::synapse0x1d62740() {
   return (neuron0x1d53ec0()*-0.0174708);
}

double NNfunction_ss_cLuL::synapse0x1d62dc0() {
   return (neuron0x1d540e0()*-0.00857659);
}

double NNfunction_ss_cLuL::synapse0x1d62e00() {
   return (neuron0x1d54420()*-0.00650686);
}

double NNfunction_ss_cLuL::synapse0x1d62e40() {
   return (neuron0x1d54760()*-0.00292279);
}

double NNfunction_ss_cLuL::synapse0x1d62e80() {
   return (neuron0x1d54aa0()*0.00378993);
}

double NNfunction_ss_cLuL::synapse0x1d62ec0() {
   return (neuron0x1d54de0()*-0.00843542);
}

double NNfunction_ss_cLuL::synapse0x1d62f00() {
   return (neuron0x1d55120()*-0.00450377);
}

double NNfunction_ss_cLuL::synapse0x1d63280() {
   return (neuron0x1d50560()*0.113968);
}

double NNfunction_ss_cLuL::synapse0x1d632c0() {
   return (neuron0x1d508a0()*0.0777554);
}

double NNfunction_ss_cLuL::synapse0x1d63300() {
   return (neuron0x1d50be0()*1.11795);
}

double NNfunction_ss_cLuL::synapse0x1d63340() {
   return (neuron0x1d50f20()*-0.257935);
}

double NNfunction_ss_cLuL::synapse0x1d63380() {
   return (neuron0x1d51260()*0.149553);
}

double NNfunction_ss_cLuL::synapse0x1d633c0() {
   return (neuron0x1d515a0()*0.341062);
}

double NNfunction_ss_cLuL::synapse0x1d63400() {
   return (neuron0x1d518e0()*0.171829);
}

double NNfunction_ss_cLuL::synapse0x1d63440() {
   return (neuron0x1d51c20()*0.13779);
}

double NNfunction_ss_cLuL::synapse0x1d63480() {
   return (neuron0x1d51f60()*-0.066402);
}

double NNfunction_ss_cLuL::synapse0x1d634c0() {
   return (neuron0x1d522a0()*0.158728);
}

double NNfunction_ss_cLuL::synapse0x1d63500() {
   return (neuron0x1d525e0()*0.135703);
}

double NNfunction_ss_cLuL::synapse0x1d63540() {
   return (neuron0x1d52920()*-0.599841);
}

double NNfunction_ss_cLuL::synapse0x1d63580() {
   return (neuron0x1d52c60()*-0.293296);
}

double NNfunction_ss_cLuL::synapse0x1d635c0() {
   return (neuron0x1d52fa0()*0.40777);
}

double NNfunction_ss_cLuL::synapse0x1d63600() {
   return (neuron0x1d532e0()*0.482815);
}

double NNfunction_ss_cLuL::synapse0x1d63640() {
   return (neuron0x1d53620()*0.147426);
}

double NNfunction_ss_cLuL::synapse0x1d630d0() {
   return (neuron0x1d53960()*0.243362);
}

double NNfunction_ss_cLuL::synapse0x1d63110() {
   return (neuron0x1d53ec0()*-0.211715);
}

double NNfunction_ss_cLuL::synapse0x1d63790() {
   return (neuron0x1d540e0()*0.0938158);
}

double NNfunction_ss_cLuL::synapse0x1d637d0() {
   return (neuron0x1d54420()*-0.112942);
}

double NNfunction_ss_cLuL::synapse0x1d63810() {
   return (neuron0x1d54760()*-0.383865);
}

double NNfunction_ss_cLuL::synapse0x1d63850() {
   return (neuron0x1d54aa0()*-0.00817663);
}

double NNfunction_ss_cLuL::synapse0x1d63890() {
   return (neuron0x1d54de0()*-0.204131);
}

double NNfunction_ss_cLuL::synapse0x1d638d0() {
   return (neuron0x1d55120()*0.0954451);
}

double NNfunction_ss_cLuL::synapse0x1d63c50() {
   return (neuron0x1d50560()*-0.242429);
}

double NNfunction_ss_cLuL::synapse0x1d63c90() {
   return (neuron0x1d508a0()*0.0057114);
}

double NNfunction_ss_cLuL::synapse0x1d63cd0() {
   return (neuron0x1d50be0()*-0.138605);
}

double NNfunction_ss_cLuL::synapse0x1d63d10() {
   return (neuron0x1d50f20()*0.405456);
}

double NNfunction_ss_cLuL::synapse0x1d63d50() {
   return (neuron0x1d51260()*0.08049);
}

double NNfunction_ss_cLuL::synapse0x1d63d90() {
   return (neuron0x1d515a0()*0.561718);
}

double NNfunction_ss_cLuL::synapse0x1d63dd0() {
   return (neuron0x1d518e0()*-0.0686702);
}

double NNfunction_ss_cLuL::synapse0x1d63e10() {
   return (neuron0x1d51c20()*-0.7307);
}

double NNfunction_ss_cLuL::synapse0x1d63e50() {
   return (neuron0x1d51f60()*-0.0862286);
}

double NNfunction_ss_cLuL::synapse0x1d5c010() {
   return (neuron0x1d522a0()*0.23548);
}

double NNfunction_ss_cLuL::synapse0x1d5c050() {
   return (neuron0x1d525e0()*-0.405834);
}

double NNfunction_ss_cLuL::synapse0x1d5c090() {
   return (neuron0x1d52920()*-0.164077);
}

double NNfunction_ss_cLuL::synapse0x1d5c0d0() {
   return (neuron0x1d52c60()*0.0124231);
}

double NNfunction_ss_cLuL::synapse0x1d5c110() {
   return (neuron0x1d52fa0()*-0.192887);
}

double NNfunction_ss_cLuL::synapse0x1d5c150() {
   return (neuron0x1d532e0()*-0.322905);
}

double NNfunction_ss_cLuL::synapse0x1d5c190() {
   return (neuron0x1d53620()*0.0902155);
}

double NNfunction_ss_cLuL::synapse0x1d63aa0() {
   return (neuron0x1d53960()*-0.807703);
}

double NNfunction_ss_cLuL::synapse0x1d63ae0() {
   return (neuron0x1d53ec0()*0.454616);
}

double NNfunction_ss_cLuL::synapse0x1d5c2e0() {
   return (neuron0x1d540e0()*-0.0390491);
}

double NNfunction_ss_cLuL::synapse0x1d5c320() {
   return (neuron0x1d54420()*0.0901245);
}

double NNfunction_ss_cLuL::synapse0x1d5c360() {
   return (neuron0x1d54760()*0.528224);
}

double NNfunction_ss_cLuL::synapse0x1d5c3a0() {
   return (neuron0x1d54aa0()*0.0393027);
}

double NNfunction_ss_cLuL::synapse0x1d5c3e0() {
   return (neuron0x1d54de0()*0.221346);
}

double NNfunction_ss_cLuL::synapse0x1d5c420() {
   return (neuron0x1d55120()*-0.267004);
}

double NNfunction_ss_cLuL::synapse0x1d5c7a0() {
   return (neuron0x1d50560()*0.0182199);
}

double NNfunction_ss_cLuL::synapse0x1d5c7e0() {
   return (neuron0x1d508a0()*0.094394);
}

double NNfunction_ss_cLuL::synapse0x1d5c820() {
   return (neuron0x1d50be0()*-0.652379);
}

double NNfunction_ss_cLuL::synapse0x1d5c860() {
   return (neuron0x1d50f20()*0.279148);
}

double NNfunction_ss_cLuL::synapse0x1d5c8a0() {
   return (neuron0x1d51260()*-0.0997167);
}

double NNfunction_ss_cLuL::synapse0x1d5c8e0() {
   return (neuron0x1d515a0()*-0.000187065);
}

double NNfunction_ss_cLuL::synapse0x1d5c920() {
   return (neuron0x1d518e0()*-0.254737);
}

double NNfunction_ss_cLuL::synapse0x1d5c960() {
   return (neuron0x1d51c20()*-0.36415);
}

double NNfunction_ss_cLuL::synapse0x1d5c9a0() {
   return (neuron0x1d51f60()*-0.0273398);
}

double NNfunction_ss_cLuL::synapse0x1d5c9e0() {
   return (neuron0x1d522a0()*0.25411);
}

double NNfunction_ss_cLuL::synapse0x1d5ca20() {
   return (neuron0x1d525e0()*-0.0797459);
}

double NNfunction_ss_cLuL::synapse0x1d5ca60() {
   return (neuron0x1d52920()*-0.56666);
}

double NNfunction_ss_cLuL::synapse0x1d5caa0() {
   return (neuron0x1d52c60()*-1.08667);
}

double NNfunction_ss_cLuL::synapse0x1d5cae0() {
   return (neuron0x1d52fa0()*-0.532103);
}

double NNfunction_ss_cLuL::synapse0x1d5cb20() {
   return (neuron0x1d532e0()*0.158243);
}

double NNfunction_ss_cLuL::synapse0x1d5cb60() {
   return (neuron0x1d53620()*-0.47494);
}

double NNfunction_ss_cLuL::synapse0x1d5c5f0() {
   return (neuron0x1d53960()*-0.441195);
}

double NNfunction_ss_cLuL::synapse0x1d5c630() {
   return (neuron0x1d53ec0()*0.268171);
}

double NNfunction_ss_cLuL::synapse0x1d5ccb0() {
   return (neuron0x1d540e0()*0.535398);
}

double NNfunction_ss_cLuL::synapse0x1d5ccf0() {
   return (neuron0x1d54420()*0.352595);
}

double NNfunction_ss_cLuL::synapse0x1d5cd30() {
   return (neuron0x1d54760()*-0.016992);
}

double NNfunction_ss_cLuL::synapse0x1d5cd70() {
   return (neuron0x1d54aa0()*0.0338449);
}

double NNfunction_ss_cLuL::synapse0x1d5cdb0() {
   return (neuron0x1d54de0()*-0.0220378);
}

double NNfunction_ss_cLuL::synapse0x1d5cdf0() {
   return (neuron0x1d55120()*-0.258411);
}

double NNfunction_ss_cLuL::synapse0x1d5cfc0() {
   return (neuron0x1d50560()*0.205449);
}

double NNfunction_ss_cLuL::synapse0x1d66050() {
   return (neuron0x1d508a0()*0.0329428);
}

double NNfunction_ss_cLuL::synapse0x1d66090() {
   return (neuron0x1d50be0()*0.0896456);
}

double NNfunction_ss_cLuL::synapse0x1d660d0() {
   return (neuron0x1d50f20()*-0.788234);
}

double NNfunction_ss_cLuL::synapse0x1d66110() {
   return (neuron0x1d51260()*0.071714);
}

double NNfunction_ss_cLuL::synapse0x1d66150() {
   return (neuron0x1d515a0()*-0.37082);
}

double NNfunction_ss_cLuL::synapse0x1d66190() {
   return (neuron0x1d518e0()*-0.282133);
}

double NNfunction_ss_cLuL::synapse0x1d661d0() {
   return (neuron0x1d51c20()*-0.0124588);
}

double NNfunction_ss_cLuL::synapse0x1d66210() {
   return (neuron0x1d51f60()*0.0605926);
}

double NNfunction_ss_cLuL::synapse0x1d66250() {
   return (neuron0x1d522a0()*-0.0504561);
}

double NNfunction_ss_cLuL::synapse0x1d66290() {
   return (neuron0x1d525e0()*0.292431);
}

double NNfunction_ss_cLuL::synapse0x1d662d0() {
   return (neuron0x1d52920()*0.261478);
}

double NNfunction_ss_cLuL::synapse0x1d66310() {
   return (neuron0x1d52c60()*0.492068);
}

double NNfunction_ss_cLuL::synapse0x1d66350() {
   return (neuron0x1d52fa0()*-0.448374);
}

double NNfunction_ss_cLuL::synapse0x1d66390() {
   return (neuron0x1d532e0()*-0.199775);
}

double NNfunction_ss_cLuL::synapse0x1d663d0() {
   return (neuron0x1d53620()*0.122845);
}

double NNfunction_ss_cLuL::synapse0x1d65ea0() {
   return (neuron0x1d53960()*-0.0119476);
}

double NNfunction_ss_cLuL::synapse0x1d65ee0() {
   return (neuron0x1d53ec0()*0.24314);
}

double NNfunction_ss_cLuL::synapse0x1d66520() {
   return (neuron0x1d540e0()*-0.110929);
}

double NNfunction_ss_cLuL::synapse0x1d66560() {
   return (neuron0x1d54420()*0.428829);
}

double NNfunction_ss_cLuL::synapse0x1d665a0() {
   return (neuron0x1d54760()*0.104597);
}

double NNfunction_ss_cLuL::synapse0x1d665e0() {
   return (neuron0x1d54aa0()*-0.0879322);
}

double NNfunction_ss_cLuL::synapse0x1d66620() {
   return (neuron0x1d54de0()*0.0108735);
}

double NNfunction_ss_cLuL::synapse0x1d66660() {
   return (neuron0x1d55120()*-0.0140392);
}

double NNfunction_ss_cLuL::synapse0x1d669e0() {
   return (neuron0x1d50560()*-0.076843);
}

double NNfunction_ss_cLuL::synapse0x1d66a20() {
   return (neuron0x1d508a0()*-0.291368);
}

double NNfunction_ss_cLuL::synapse0x1d66a60() {
   return (neuron0x1d50be0()*-0.139093);
}

double NNfunction_ss_cLuL::synapse0x1d66aa0() {
   return (neuron0x1d50f20()*0.0735187);
}

double NNfunction_ss_cLuL::synapse0x1d66ae0() {
   return (neuron0x1d51260()*0.00494117);
}

double NNfunction_ss_cLuL::synapse0x1d66b20() {
   return (neuron0x1d515a0()*-0.00809843);
}

double NNfunction_ss_cLuL::synapse0x1d66b60() {
   return (neuron0x1d518e0()*-0.436848);
}

double NNfunction_ss_cLuL::synapse0x1d66ba0() {
   return (neuron0x1d51c20()*0.136803);
}

double NNfunction_ss_cLuL::synapse0x1d66be0() {
   return (neuron0x1d51f60()*0.518121);
}

double NNfunction_ss_cLuL::synapse0x1d66c20() {
   return (neuron0x1d522a0()*-0.0512975);
}

double NNfunction_ss_cLuL::synapse0x1d66c60() {
   return (neuron0x1d525e0()*0.172244);
}

double NNfunction_ss_cLuL::synapse0x1d66ca0() {
   return (neuron0x1d52920()*-0.234896);
}

double NNfunction_ss_cLuL::synapse0x1d66ce0() {
   return (neuron0x1d52c60()*-0.6111);
}

double NNfunction_ss_cLuL::synapse0x1d66d20() {
   return (neuron0x1d52fa0()*0.240751);
}

double NNfunction_ss_cLuL::synapse0x1d66d60() {
   return (neuron0x1d532e0()*0.383009);
}

double NNfunction_ss_cLuL::synapse0x1d66da0() {
   return (neuron0x1d53620()*-0.0498398);
}

double NNfunction_ss_cLuL::synapse0x1d66830() {
   return (neuron0x1d53960()*-0.481827);
}

double NNfunction_ss_cLuL::synapse0x1d66870() {
   return (neuron0x1d53ec0()*-0.399859);
}

double NNfunction_ss_cLuL::synapse0x1d66ef0() {
   return (neuron0x1d540e0()*0.170583);
}

double NNfunction_ss_cLuL::synapse0x1d66f30() {
   return (neuron0x1d54420()*0.352953);
}

double NNfunction_ss_cLuL::synapse0x1d66f70() {
   return (neuron0x1d54760()*0.287921);
}

double NNfunction_ss_cLuL::synapse0x1d66fb0() {
   return (neuron0x1d54aa0()*-0.0430133);
}

double NNfunction_ss_cLuL::synapse0x1d66ff0() {
   return (neuron0x1d54de0()*0.0258773);
}

double NNfunction_ss_cLuL::synapse0x1d67030() {
   return (neuron0x1d55120()*-0.636828);
}

double NNfunction_ss_cLuL::synapse0x1d673b0() {
   return (neuron0x1d50560()*0.109563);
}

double NNfunction_ss_cLuL::synapse0x1d673f0() {
   return (neuron0x1d508a0()*-0.160522);
}

double NNfunction_ss_cLuL::synapse0x1d67430() {
   return (neuron0x1d50be0()*-0.34387);
}

double NNfunction_ss_cLuL::synapse0x1d67470() {
   return (neuron0x1d50f20()*-0.507192);
}

double NNfunction_ss_cLuL::synapse0x1d674b0() {
   return (neuron0x1d51260()*-0.123241);
}

double NNfunction_ss_cLuL::synapse0x1d674f0() {
   return (neuron0x1d515a0()*-0.0516614);
}

double NNfunction_ss_cLuL::synapse0x1d67530() {
   return (neuron0x1d518e0()*-0.172574);
}

double NNfunction_ss_cLuL::synapse0x1d67570() {
   return (neuron0x1d51c20()*0.577295);
}

double NNfunction_ss_cLuL::synapse0x1d675b0() {
   return (neuron0x1d51f60()*-0.115979);
}

double NNfunction_ss_cLuL::synapse0x1d675f0() {
   return (neuron0x1d522a0()*-0.0779448);
}

double NNfunction_ss_cLuL::synapse0x1d67630() {
   return (neuron0x1d525e0()*0.0934147);
}

double NNfunction_ss_cLuL::synapse0x1d67670() {
   return (neuron0x1d52920()*0.46233);
}

double NNfunction_ss_cLuL::synapse0x1d676b0() {
   return (neuron0x1d52c60()*0.162129);
}

double NNfunction_ss_cLuL::synapse0x1d676f0() {
   return (neuron0x1d52fa0()*-0.0208117);
}

double NNfunction_ss_cLuL::synapse0x1d67730() {
   return (neuron0x1d532e0()*-0.084352);
}

double NNfunction_ss_cLuL::synapse0x1d67770() {
   return (neuron0x1d53620()*0.0831996);
}

double NNfunction_ss_cLuL::synapse0x1d67200() {
   return (neuron0x1d53960()*0.572582);
}

double NNfunction_ss_cLuL::synapse0x1d67240() {
   return (neuron0x1d53ec0()*0.0230238);
}

double NNfunction_ss_cLuL::synapse0x1d678c0() {
   return (neuron0x1d540e0()*0.0827547);
}

double NNfunction_ss_cLuL::synapse0x1d67900() {
   return (neuron0x1d54420()*0.146331);
}

double NNfunction_ss_cLuL::synapse0x1d67940() {
   return (neuron0x1d54760()*0.123829);
}

double NNfunction_ss_cLuL::synapse0x1d67980() {
   return (neuron0x1d54aa0()*0.259214);
}

double NNfunction_ss_cLuL::synapse0x1d679c0() {
   return (neuron0x1d54de0()*0.160026);
}

double NNfunction_ss_cLuL::synapse0x1d67a00() {
   return (neuron0x1d55120()*-0.0969898);
}

double NNfunction_ss_cLuL::synapse0x1d67d80() {
   return (neuron0x1d50560()*0.0176922);
}

double NNfunction_ss_cLuL::synapse0x1d67dc0() {
   return (neuron0x1d508a0()*-0.00380977);
}

double NNfunction_ss_cLuL::synapse0x1d67e00() {
   return (neuron0x1d50be0()*0.0188111);
}

double NNfunction_ss_cLuL::synapse0x1d67e40() {
   return (neuron0x1d50f20()*-3.31079);
}

double NNfunction_ss_cLuL::synapse0x1d67e80() {
   return (neuron0x1d51260()*0.0027377);
}

double NNfunction_ss_cLuL::synapse0x1d67ec0() {
   return (neuron0x1d515a0()*-0.00089327);
}

double NNfunction_ss_cLuL::synapse0x1d67f00() {
   return (neuron0x1d518e0()*-0.00466086);
}

double NNfunction_ss_cLuL::synapse0x1d67f40() {
   return (neuron0x1d51c20()*-0.000349508);
}

double NNfunction_ss_cLuL::synapse0x1d67f80() {
   return (neuron0x1d51f60()*0.00215891);
}

double NNfunction_ss_cLuL::synapse0x1d67fc0() {
   return (neuron0x1d522a0()*0.000343523);
}

double NNfunction_ss_cLuL::synapse0x1d68000() {
   return (neuron0x1d525e0()*-0.00789864);
}

double NNfunction_ss_cLuL::synapse0x1d68040() {
   return (neuron0x1d52920()*0.303532);
}

double NNfunction_ss_cLuL::synapse0x1d68080() {
   return (neuron0x1d52c60()*0.37012);
}

double NNfunction_ss_cLuL::synapse0x1d680c0() {
   return (neuron0x1d52fa0()*0.00142208);
}

double NNfunction_ss_cLuL::synapse0x1d68100() {
   return (neuron0x1d532e0()*0.0108824);
}

double NNfunction_ss_cLuL::synapse0x1d68140() {
   return (neuron0x1d53620()*0.00916427);
}

double NNfunction_ss_cLuL::synapse0x1d67bd0() {
   return (neuron0x1d53960()*0.000963001);
}

double NNfunction_ss_cLuL::synapse0x1d67c10() {
   return (neuron0x1d53ec0()*0.000169811);
}

double NNfunction_ss_cLuL::synapse0x1d68290() {
   return (neuron0x1d540e0()*-0.00124273);
}

double NNfunction_ss_cLuL::synapse0x1d682d0() {
   return (neuron0x1d54420()*-0.00697709);
}

double NNfunction_ss_cLuL::synapse0x1d68310() {
   return (neuron0x1d54760()*0.00272268);
}

double NNfunction_ss_cLuL::synapse0x1d68350() {
   return (neuron0x1d54aa0()*0.00441057);
}

double NNfunction_ss_cLuL::synapse0x1d68390() {
   return (neuron0x1d54de0()*-0.000219932);
}

double NNfunction_ss_cLuL::synapse0x1d683d0() {
   return (neuron0x1d55120()*-0.000638588);
}

double NNfunction_ss_cLuL::synapse0x1d68750() {
   return (neuron0x1d50560()*-0.0126391);
}

double NNfunction_ss_cLuL::synapse0x1d68790() {
   return (neuron0x1d508a0()*-0.0269954);
}

double NNfunction_ss_cLuL::synapse0x1d687d0() {
   return (neuron0x1d50be0()*-0.0123758);
}

double NNfunction_ss_cLuL::synapse0x1d68810() {
   return (neuron0x1d50f20()*0.22597);
}

double NNfunction_ss_cLuL::synapse0x1d68850() {
   return (neuron0x1d51260()*-0.0076472);
}

double NNfunction_ss_cLuL::synapse0x1d68890() {
   return (neuron0x1d515a0()*0.0218557);
}

double NNfunction_ss_cLuL::synapse0x1d688d0() {
   return (neuron0x1d518e0()*0.0131187);
}

double NNfunction_ss_cLuL::synapse0x1d68910() {
   return (neuron0x1d51c20()*0.0498086);
}

double NNfunction_ss_cLuL::synapse0x1d68950() {
   return (neuron0x1d51f60()*-0.0310368);
}

double NNfunction_ss_cLuL::synapse0x1d68990() {
   return (neuron0x1d522a0()*0.0224088);
}

double NNfunction_ss_cLuL::synapse0x1d689d0() {
   return (neuron0x1d525e0()*-0.0410539);
}

double NNfunction_ss_cLuL::synapse0x1d68a10() {
   return (neuron0x1d52920()*-0.750308);
}

double NNfunction_ss_cLuL::synapse0x1d68a50() {
   return (neuron0x1d52c60()*2.84353);
}

double NNfunction_ss_cLuL::synapse0x1d68a90() {
   return (neuron0x1d52fa0()*0.0351729);
}

double NNfunction_ss_cLuL::synapse0x1d68ad0() {
   return (neuron0x1d532e0()*-0.0387737);
}

double NNfunction_ss_cLuL::synapse0x1d68b10() {
   return (neuron0x1d53620()*-0.00124832);
}

double NNfunction_ss_cLuL::synapse0x1d685a0() {
   return (neuron0x1d53960()*0.0136215);
}

double NNfunction_ss_cLuL::synapse0x1d685e0() {
   return (neuron0x1d53ec0()*-0.00291366);
}

double NNfunction_ss_cLuL::synapse0x1d68c60() {
   return (neuron0x1d540e0()*-0.00693273);
}

double NNfunction_ss_cLuL::synapse0x1d68ca0() {
   return (neuron0x1d54420()*0.0335994);
}

double NNfunction_ss_cLuL::synapse0x1d68ce0() {
   return (neuron0x1d54760()*0.0285916);
}

double NNfunction_ss_cLuL::synapse0x1d68d20() {
   return (neuron0x1d54aa0()*0.0481406);
}

double NNfunction_ss_cLuL::synapse0x1d68d60() {
   return (neuron0x1d54de0()*-0.00662249);
}

double NNfunction_ss_cLuL::synapse0x1d68da0() {
   return (neuron0x1d55120()*-0.0227407);
}

double NNfunction_ss_cLuL::synapse0x1d69120() {
   return (neuron0x1d50560()*0.000665119);
}

double NNfunction_ss_cLuL::synapse0x1d69160() {
   return (neuron0x1d508a0()*-0.00576102);
}

double NNfunction_ss_cLuL::synapse0x1d691a0() {
   return (neuron0x1d50be0()*0.231323);
}

double NNfunction_ss_cLuL::synapse0x1d691e0() {
   return (neuron0x1d50f20()*0.438284);
}

double NNfunction_ss_cLuL::synapse0x1d69220() {
   return (neuron0x1d51260()*-0.0561412);
}

double NNfunction_ss_cLuL::synapse0x1d69260() {
   return (neuron0x1d515a0()*-0.0255201);
}

double NNfunction_ss_cLuL::synapse0x1d692a0() {
   return (neuron0x1d518e0()*0.0268598);
}

double NNfunction_ss_cLuL::synapse0x1d692e0() {
   return (neuron0x1d51c20()*-0.063978);
}

double NNfunction_ss_cLuL::synapse0x1d69320() {
   return (neuron0x1d51f60()*0.0249141);
}

double NNfunction_ss_cLuL::synapse0x1d69360() {
   return (neuron0x1d522a0()*0.038683);
}

double NNfunction_ss_cLuL::synapse0x1d693a0() {
   return (neuron0x1d525e0()*0.00726179);
}

double NNfunction_ss_cLuL::synapse0x1d693e0() {
   return (neuron0x1d52920()*0.210254);
}

double NNfunction_ss_cLuL::synapse0x1d69420() {
   return (neuron0x1d52c60()*0.292234);
}

double NNfunction_ss_cLuL::synapse0x1d69460() {
   return (neuron0x1d52fa0()*0.0135598);
}

double NNfunction_ss_cLuL::synapse0x1d694a0() {
   return (neuron0x1d532e0()*0.0249573);
}

double NNfunction_ss_cLuL::synapse0x1d694e0() {
   return (neuron0x1d53620()*0.0126684);
}

double NNfunction_ss_cLuL::synapse0x1d68f70() {
   return (neuron0x1d53960()*0.0180598);
}

double NNfunction_ss_cLuL::synapse0x1d68fb0() {
   return (neuron0x1d53ec0()*0.0544671);
}

double NNfunction_ss_cLuL::synapse0x1d69630() {
   return (neuron0x1d540e0()*0.0198141);
}

double NNfunction_ss_cLuL::synapse0x1d69670() {
   return (neuron0x1d54420()*-0.027162);
}

double NNfunction_ss_cLuL::synapse0x1d696b0() {
   return (neuron0x1d54760()*0.00124567);
}

double NNfunction_ss_cLuL::synapse0x1d696f0() {
   return (neuron0x1d54aa0()*-0.0272208);
}

double NNfunction_ss_cLuL::synapse0x1d69730() {
   return (neuron0x1d54de0()*0.013629);
}

double NNfunction_ss_cLuL::synapse0x1d69770() {
   return (neuron0x1d55120()*-0.0191796);
}

double NNfunction_ss_cLuL::synapse0x1d69af0() {
   return (neuron0x1d50560()*-0.676213);
}

double NNfunction_ss_cLuL::synapse0x1d69b30() {
   return (neuron0x1d508a0()*0.213972);
}

double NNfunction_ss_cLuL::synapse0x1d69b70() {
   return (neuron0x1d50be0()*0.0978495);
}

double NNfunction_ss_cLuL::synapse0x1d69bb0() {
   return (neuron0x1d50f20()*0.317119);
}

double NNfunction_ss_cLuL::synapse0x1d69bf0() {
   return (neuron0x1d51260()*0.470801);
}

double NNfunction_ss_cLuL::synapse0x1d69c30() {
   return (neuron0x1d515a0()*-0.189063);
}

double NNfunction_ss_cLuL::synapse0x1d69c70() {
   return (neuron0x1d518e0()*-0.113197);
}

double NNfunction_ss_cLuL::synapse0x1d69cb0() {
   return (neuron0x1d51c20()*0.118613);
}

double NNfunction_ss_cLuL::synapse0x1d69cf0() {
   return (neuron0x1d51f60()*-0.433066);
}

double NNfunction_ss_cLuL::synapse0x1d69d30() {
   return (neuron0x1d522a0()*0.0739469);
}

double NNfunction_ss_cLuL::synapse0x1d69d70() {
   return (neuron0x1d525e0()*-0.33427);
}

double NNfunction_ss_cLuL::synapse0x1d69db0() {
   return (neuron0x1d52920()*-0.0288963);
}

double NNfunction_ss_cLuL::synapse0x1d69df0() {
   return (neuron0x1d52c60()*-0.166416);
}

double NNfunction_ss_cLuL::synapse0x1d69e30() {
   return (neuron0x1d52fa0()*-0.204318);
}

double NNfunction_ss_cLuL::synapse0x1d69e70() {
   return (neuron0x1d532e0()*-0.0971598);
}

double NNfunction_ss_cLuL::synapse0x1d69eb0() {
   return (neuron0x1d53620()*0.44269);
}

double NNfunction_ss_cLuL::synapse0x1d69940() {
   return (neuron0x1d53960()*-0.847724);
}

double NNfunction_ss_cLuL::synapse0x1d69980() {
   return (neuron0x1d53ec0()*0.0487404);
}

double NNfunction_ss_cLuL::synapse0x1d6a000() {
   return (neuron0x1d540e0()*0.339674);
}

double NNfunction_ss_cLuL::synapse0x1d6a040() {
   return (neuron0x1d54420()*-0.214105);
}

double NNfunction_ss_cLuL::synapse0x1d6a080() {
   return (neuron0x1d54760()*-0.483879);
}

double NNfunction_ss_cLuL::synapse0x1d6a0c0() {
   return (neuron0x1d54aa0()*-0.467467);
}

double NNfunction_ss_cLuL::synapse0x1d6a100() {
   return (neuron0x1d54de0()*0.382565);
}

double NNfunction_ss_cLuL::synapse0x1d6a140() {
   return (neuron0x1d55120()*-0.0776208);
}

double NNfunction_ss_cLuL::synapse0x1d6a4c0() {
   return (neuron0x1d50560()*0.0999325);
}

double NNfunction_ss_cLuL::synapse0x1d6a500() {
   return (neuron0x1d508a0()*-0.222883);
}

double NNfunction_ss_cLuL::synapse0x1d6a540() {
   return (neuron0x1d50be0()*-0.660529);
}

double NNfunction_ss_cLuL::synapse0x1d6a580() {
   return (neuron0x1d50f20()*-0.864771);
}

double NNfunction_ss_cLuL::synapse0x1d6a5c0() {
   return (neuron0x1d51260()*-0.181351);
}

double NNfunction_ss_cLuL::synapse0x1d6a600() {
   return (neuron0x1d515a0()*-0.0030035);
}

double NNfunction_ss_cLuL::synapse0x1d6a640() {
   return (neuron0x1d518e0()*0.0164047);
}

double NNfunction_ss_cLuL::synapse0x1d6a680() {
   return (neuron0x1d51c20()*-0.0201459);
}

double NNfunction_ss_cLuL::synapse0x1d6a6c0() {
   return (neuron0x1d51f60()*0.00118954);
}

double NNfunction_ss_cLuL::synapse0x1d6a700() {
   return (neuron0x1d522a0()*-0.0069093);
}

double NNfunction_ss_cLuL::synapse0x1d6a740() {
   return (neuron0x1d525e0()*0.0705312);
}

double NNfunction_ss_cLuL::synapse0x1d6a780() {
   return (neuron0x1d52920()*-0.400726);
}

double NNfunction_ss_cLuL::synapse0x1d6a7c0() {
   return (neuron0x1d52c60()*-0.454114);
}

double NNfunction_ss_cLuL::synapse0x1d6a800() {
   return (neuron0x1d52fa0()*-0.0127883);
}

double NNfunction_ss_cLuL::synapse0x1d6a840() {
   return (neuron0x1d532e0()*0.20802);
}

double NNfunction_ss_cLuL::synapse0x1d6a880() {
   return (neuron0x1d53620()*-0.031375);
}

double NNfunction_ss_cLuL::synapse0x1d6a310() {
   return (neuron0x1d53960()*-0.16273);
}

double NNfunction_ss_cLuL::synapse0x1d6a350() {
   return (neuron0x1d53ec0()*0.0385014);
}

double NNfunction_ss_cLuL::synapse0x1d6a9d0() {
   return (neuron0x1d540e0()*-0.0269708);
}

double NNfunction_ss_cLuL::synapse0x1d6aa10() {
   return (neuron0x1d54420()*-0.232045);
}

double NNfunction_ss_cLuL::synapse0x1d6aa50() {
   return (neuron0x1d54760()*-0.0113269);
}

double NNfunction_ss_cLuL::synapse0x1d6aa90() {
   return (neuron0x1d54aa0()*-0.0885665);
}

double NNfunction_ss_cLuL::synapse0x1d6aad0() {
   return (neuron0x1d54de0()*-0.0574141);
}

double NNfunction_ss_cLuL::synapse0x1d6ab10() {
   return (neuron0x1d55120()*-0.0142251);
}

double NNfunction_ss_cLuL::synapse0x1d6ae90() {
   return (neuron0x1d50560()*-0.123727);
}

double NNfunction_ss_cLuL::synapse0x1d5f460() {
   return (neuron0x1d508a0()*0.549463);
}

double NNfunction_ss_cLuL::synapse0x1d5f4a0() {
   return (neuron0x1d50be0()*0.0820916);
}

double NNfunction_ss_cLuL::synapse0x1d5f4e0() {
   return (neuron0x1d50f20()*-0.26543);
}

double NNfunction_ss_cLuL::synapse0x1d5f730() {
   return (neuron0x1d51260()*-0.0348405);
}

double NNfunction_ss_cLuL::synapse0x1d5f770() {
   return (neuron0x1d515a0()*0.131844);
}

double NNfunction_ss_cLuL::synapse0x1d5f7b0() {
   return (neuron0x1d518e0()*0.107461);
}

double NNfunction_ss_cLuL::synapse0x1d5fa00() {
   return (neuron0x1d51c20()*-0.104321);
}

double NNfunction_ss_cLuL::synapse0x1d5fa40() {
   return (neuron0x1d51f60()*-0.300649);
}

double NNfunction_ss_cLuL::synapse0x1d5fc90() {
   return (neuron0x1d522a0()*-0.282906);
}

double NNfunction_ss_cLuL::synapse0x1d5fcd0() {
   return (neuron0x1d525e0()*-0.422851);
}

double NNfunction_ss_cLuL::synapse0x1d5fd10() {
   return (neuron0x1d52920()*0.0559159);
}

double NNfunction_ss_cLuL::synapse0x1d5ff60() {
   return (neuron0x1d52c60()*0.429437);
}

double NNfunction_ss_cLuL::synapse0x1d5ffa0() {
   return (neuron0x1d52fa0()*0.314593);
}

double NNfunction_ss_cLuL::synapse0x1d601f0() {
   return (neuron0x1d532e0()*-0.120539);
}

double NNfunction_ss_cLuL::synapse0x1d60230() {
   return (neuron0x1d53620()*0.320709);
}

double NNfunction_ss_cLuL::synapse0x1d6ace0() {
   return (neuron0x1d53960()*-0.138442);
}

double NNfunction_ss_cLuL::synapse0x1d6ad20() {
   return (neuron0x1d53ec0()*0.433346);
}

double NNfunction_ss_cLuL::synapse0x1d60380() {
   return (neuron0x1d540e0()*-0.439308);
}

double NNfunction_ss_cLuL::synapse0x1d60890() {
   return (neuron0x1d54420()*0.271304);
}

double NNfunction_ss_cLuL::synapse0x1d608d0() {
   return (neuron0x1d54760()*0.212124);
}

double NNfunction_ss_cLuL::synapse0x1d60910() {
   return (neuron0x1d54aa0()*-0.0806364);
}

double NNfunction_ss_cLuL::synapse0x1d60b60() {
   return (neuron0x1d54de0()*0.232608);
}

double NNfunction_ss_cLuL::synapse0x1d60ba0() {
   return (neuron0x1d55120()*0.0427129);
}

double NNfunction_ss_cLuL::synapse0x1d60450() {
   return (neuron0x1d50560()*0.00256725);
}

double NNfunction_ss_cLuL::synapse0x1d60490() {
   return (neuron0x1d508a0()*-0.00105501);
}

double NNfunction_ss_cLuL::synapse0x1d604d0() {
   return (neuron0x1d50be0()*0.00742648);
}

double NNfunction_ss_cLuL::synapse0x1d60510() {
   return (neuron0x1d50f20()*-0.0185519);
}

double NNfunction_ss_cLuL::synapse0x1d60e90() {
   return (neuron0x1d51260()*-0.0065882);
}

double NNfunction_ss_cLuL::synapse0x1d6d1e0() {
   return (neuron0x1d515a0()*0.00289007);
}

double NNfunction_ss_cLuL::synapse0x1d6d220() {
   return (neuron0x1d518e0()*0.000768308);
}

double NNfunction_ss_cLuL::synapse0x1d6d260() {
   return (neuron0x1d51c20()*0.00677256);
}

double NNfunction_ss_cLuL::synapse0x1d6d2a0() {
   return (neuron0x1d51f60()*-0.00939803);
}

double NNfunction_ss_cLuL::synapse0x1d6d2e0() {
   return (neuron0x1d522a0()*-0.00313912);
}

double NNfunction_ss_cLuL::synapse0x1d6d320() {
   return (neuron0x1d525e0()*-0.00775394);
}

double NNfunction_ss_cLuL::synapse0x1d6d360() {
   return (neuron0x1d52920()*1.83152);
}

double NNfunction_ss_cLuL::synapse0x1d6d3a0() {
   return (neuron0x1d52c60()*-0.0692427);
}

double NNfunction_ss_cLuL::synapse0x1d6d3e0() {
   return (neuron0x1d52fa0()*0.0184076);
}

double NNfunction_ss_cLuL::synapse0x1d6d420() {
   return (neuron0x1d532e0()*0.020204);
}

double NNfunction_ss_cLuL::synapse0x1d6d460() {
   return (neuron0x1d53620()*0.00408071);
}

double NNfunction_ss_cLuL::synapse0x1d60d70() {
   return (neuron0x1d53960()*0.0119433);
}

double NNfunction_ss_cLuL::synapse0x1d60db0() {
   return (neuron0x1d53ec0()*0.00817445);
}

double NNfunction_ss_cLuL::synapse0x1d6d5b0() {
   return (neuron0x1d540e0()*-0.00887953);
}

double NNfunction_ss_cLuL::synapse0x1d6d5f0() {
   return (neuron0x1d54420()*0.01408);
}

double NNfunction_ss_cLuL::synapse0x1d6d630() {
   return (neuron0x1d54760()*-0.000767259);
}

double NNfunction_ss_cLuL::synapse0x1d6d670() {
   return (neuron0x1d54aa0()*0.00987424);
}

double NNfunction_ss_cLuL::synapse0x1d6d6b0() {
   return (neuron0x1d54de0()*0.0104972);
}

double NNfunction_ss_cLuL::synapse0x1d6d6f0() {
   return (neuron0x1d55120()*-0.00273819);
}

double NNfunction_ss_cLuL::synapse0x1d6da70() {
   return (neuron0x1d50560()*0.188196);
}

double NNfunction_ss_cLuL::synapse0x1d6dab0() {
   return (neuron0x1d508a0()*0.402609);
}

double NNfunction_ss_cLuL::synapse0x1d6daf0() {
   return (neuron0x1d50be0()*-0.51159);
}

double NNfunction_ss_cLuL::synapse0x1d6db30() {
   return (neuron0x1d50f20()*0.302502);
}

double NNfunction_ss_cLuL::synapse0x1d6db70() {
   return (neuron0x1d51260()*-0.0106411);
}

double NNfunction_ss_cLuL::synapse0x1d6dbb0() {
   return (neuron0x1d515a0()*0.225924);
}

double NNfunction_ss_cLuL::synapse0x1d6dbf0() {
   return (neuron0x1d518e0()*-0.00245164);
}

double NNfunction_ss_cLuL::synapse0x1d6dc30() {
   return (neuron0x1d51c20()*-0.144214);
}

double NNfunction_ss_cLuL::synapse0x1d6dc70() {
   return (neuron0x1d51f60()*0.251222);
}

double NNfunction_ss_cLuL::synapse0x1d6dcb0() {
   return (neuron0x1d522a0()*-0.323045);
}

double NNfunction_ss_cLuL::synapse0x1d6dcf0() {
   return (neuron0x1d525e0()*-0.257071);
}

double NNfunction_ss_cLuL::synapse0x1d6dd30() {
   return (neuron0x1d52920()*0.476322);
}

double NNfunction_ss_cLuL::synapse0x1d6dd70() {
   return (neuron0x1d52c60()*0.173191);
}

double NNfunction_ss_cLuL::synapse0x1d6ddb0() {
   return (neuron0x1d52fa0()*0.249959);
}

double NNfunction_ss_cLuL::synapse0x1d6ddf0() {
   return (neuron0x1d532e0()*-0.098021);
}

double NNfunction_ss_cLuL::synapse0x1d6de30() {
   return (neuron0x1d53620()*-0.608197);
}

double NNfunction_ss_cLuL::synapse0x1d6d8c0() {
   return (neuron0x1d53960()*0.0253702);
}

double NNfunction_ss_cLuL::synapse0x1d6d900() {
   return (neuron0x1d53ec0()*-0.466136);
}

double NNfunction_ss_cLuL::synapse0x1d6df80() {
   return (neuron0x1d540e0()*-0.248173);
}

double NNfunction_ss_cLuL::synapse0x1d6dfc0() {
   return (neuron0x1d54420()*0.319007);
}

double NNfunction_ss_cLuL::synapse0x1d6e000() {
   return (neuron0x1d54760()*-0.0789402);
}

double NNfunction_ss_cLuL::synapse0x1d6e040() {
   return (neuron0x1d54aa0()*-0.33493);
}

double NNfunction_ss_cLuL::synapse0x1d6e080() {
   return (neuron0x1d54de0()*0.286051);
}

double NNfunction_ss_cLuL::synapse0x1d6e0c0() {
   return (neuron0x1d55120()*0.094956);
}

double NNfunction_ss_cLuL::synapse0x1d6e440() {
   return (neuron0x1d50560()*0.0435144);
}

double NNfunction_ss_cLuL::synapse0x1d6e480() {
   return (neuron0x1d508a0()*-0.0167591);
}

double NNfunction_ss_cLuL::synapse0x1d6e4c0() {
   return (neuron0x1d50be0()*0.0900475);
}

double NNfunction_ss_cLuL::synapse0x1d6e500() {
   return (neuron0x1d50f20()*0.495964);
}

double NNfunction_ss_cLuL::synapse0x1d6e540() {
   return (neuron0x1d51260()*-0.149196);
}

double NNfunction_ss_cLuL::synapse0x1d6e580() {
   return (neuron0x1d515a0()*-0.310114);
}

double NNfunction_ss_cLuL::synapse0x1d6e5c0() {
   return (neuron0x1d518e0()*0.0680006);
}

double NNfunction_ss_cLuL::synapse0x1d6e600() {
   return (neuron0x1d51c20()*0.362538);
}

double NNfunction_ss_cLuL::synapse0x1d6e640() {
   return (neuron0x1d51f60()*0.0663398);
}

double NNfunction_ss_cLuL::synapse0x1d6e680() {
   return (neuron0x1d522a0()*-0.0073107);
}

double NNfunction_ss_cLuL::synapse0x1d6e6c0() {
   return (neuron0x1d525e0()*-0.24068);
}

double NNfunction_ss_cLuL::synapse0x1d6e700() {
   return (neuron0x1d52920()*-0.214305);
}

double NNfunction_ss_cLuL::synapse0x1d6e740() {
   return (neuron0x1d52c60()*0.0655833);
}

double NNfunction_ss_cLuL::synapse0x1d6e780() {
   return (neuron0x1d52fa0()*0.0628568);
}

double NNfunction_ss_cLuL::synapse0x1d6e7c0() {
   return (neuron0x1d532e0()*0.034738);
}

double NNfunction_ss_cLuL::synapse0x1d6e800() {
   return (neuron0x1d53620()*0.137194);
}

double NNfunction_ss_cLuL::synapse0x1d6e290() {
   return (neuron0x1d53960()*0.140791);
}

double NNfunction_ss_cLuL::synapse0x1d6e2d0() {
   return (neuron0x1d53ec0()*-0.315218);
}

double NNfunction_ss_cLuL::synapse0x1d6e950() {
   return (neuron0x1d540e0()*0.563531);
}

double NNfunction_ss_cLuL::synapse0x1d6e990() {
   return (neuron0x1d54420()*0.141292);
}

double NNfunction_ss_cLuL::synapse0x1d6e9d0() {
   return (neuron0x1d54760()*0.0613029);
}

double NNfunction_ss_cLuL::synapse0x1d6ea10() {
   return (neuron0x1d54aa0()*0.00291543);
}

double NNfunction_ss_cLuL::synapse0x1d6ea50() {
   return (neuron0x1d54de0()*0.245348);
}

double NNfunction_ss_cLuL::synapse0x1d6ea90() {
   return (neuron0x1d55120()*0.0234679);
}

double NNfunction_ss_cLuL::synapse0x1d6ee10() {
   return (neuron0x1d50560()*-0.0379);
}

double NNfunction_ss_cLuL::synapse0x1d6ee50() {
   return (neuron0x1d508a0()*0.151258);
}

double NNfunction_ss_cLuL::synapse0x1d6ee90() {
   return (neuron0x1d50be0()*-0.482862);
}

double NNfunction_ss_cLuL::synapse0x1d6eed0() {
   return (neuron0x1d50f20()*1.23277);
}

double NNfunction_ss_cLuL::synapse0x1d6ef10() {
   return (neuron0x1d51260()*0.109919);
}

double NNfunction_ss_cLuL::synapse0x1d6ef50() {
   return (neuron0x1d515a0()*-0.267225);
}

double NNfunction_ss_cLuL::synapse0x1d6ef90() {
   return (neuron0x1d518e0()*0.362228);
}

double NNfunction_ss_cLuL::synapse0x1d6efd0() {
   return (neuron0x1d51c20()*0.558473);
}

double NNfunction_ss_cLuL::synapse0x1d6f010() {
   return (neuron0x1d51f60()*0.0186472);
}

double NNfunction_ss_cLuL::synapse0x1d6f050() {
   return (neuron0x1d522a0()*-0.168111);
}

double NNfunction_ss_cLuL::synapse0x1d6f090() {
   return (neuron0x1d525e0()*-0.260426);
}

double NNfunction_ss_cLuL::synapse0x1d6f0d0() {
   return (neuron0x1d52920()*-0.155071);
}

double NNfunction_ss_cLuL::synapse0x1d6f110() {
   return (neuron0x1d52c60()*-0.772766);
}

double NNfunction_ss_cLuL::synapse0x1d6f150() {
   return (neuron0x1d52fa0()*-0.0415505);
}

double NNfunction_ss_cLuL::synapse0x1d6f190() {
   return (neuron0x1d532e0()*-0.148576);
}

double NNfunction_ss_cLuL::synapse0x1d6f1d0() {
   return (neuron0x1d53620()*-0.230024);
}

double NNfunction_ss_cLuL::synapse0x1d6ec60() {
   return (neuron0x1d53960()*-0.230881);
}

double NNfunction_ss_cLuL::synapse0x1d6eca0() {
   return (neuron0x1d53ec0()*0.133384);
}

double NNfunction_ss_cLuL::synapse0x1d6f320() {
   return (neuron0x1d540e0()*-0.175548);
}

double NNfunction_ss_cLuL::synapse0x1d6f360() {
   return (neuron0x1d54420()*0.118544);
}

double NNfunction_ss_cLuL::synapse0x1d6f3a0() {
   return (neuron0x1d54760()*-0.00884517);
}

double NNfunction_ss_cLuL::synapse0x1d6f3e0() {
   return (neuron0x1d54aa0()*0.0449291);
}

double NNfunction_ss_cLuL::synapse0x1d6f420() {
   return (neuron0x1d54de0()*-0.167923);
}

double NNfunction_ss_cLuL::synapse0x1d6f460() {
   return (neuron0x1d55120()*0.14815);
}

double NNfunction_ss_cLuL::synapse0x1d6f7e0() {
   return (neuron0x1d50560()*0.183265);
}

double NNfunction_ss_cLuL::synapse0x1d6f820() {
   return (neuron0x1d508a0()*0.343508);
}

double NNfunction_ss_cLuL::synapse0x1d6f860() {
   return (neuron0x1d50be0()*0.0866128);
}

double NNfunction_ss_cLuL::synapse0x1d6f8a0() {
   return (neuron0x1d50f20()*-0.184256);
}

double NNfunction_ss_cLuL::synapse0x1d6f8e0() {
   return (neuron0x1d51260()*-0.454824);
}

double NNfunction_ss_cLuL::synapse0x1d6f920() {
   return (neuron0x1d515a0()*-0.0257023);
}

double NNfunction_ss_cLuL::synapse0x1d6f960() {
   return (neuron0x1d518e0()*0.318093);
}

double NNfunction_ss_cLuL::synapse0x1d6f9a0() {
   return (neuron0x1d51c20()*-0.280608);
}

double NNfunction_ss_cLuL::synapse0x1d6f9e0() {
   return (neuron0x1d51f60()*0.183721);
}

double NNfunction_ss_cLuL::synapse0x1d6fa20() {
   return (neuron0x1d522a0()*0.146367);
}

double NNfunction_ss_cLuL::synapse0x1d6fa60() {
   return (neuron0x1d525e0()*0.216451);
}

double NNfunction_ss_cLuL::synapse0x1d6faa0() {
   return (neuron0x1d52920()*-0.878669);
}

double NNfunction_ss_cLuL::synapse0x1d6fae0() {
   return (neuron0x1d52c60()*0.70292);
}

double NNfunction_ss_cLuL::synapse0x1d6fb20() {
   return (neuron0x1d52fa0()*0.317121);
}

double NNfunction_ss_cLuL::synapse0x1d6fb60() {
   return (neuron0x1d532e0()*-1.07493);
}

double NNfunction_ss_cLuL::synapse0x1d6fba0() {
   return (neuron0x1d53620()*-0.77935);
}

double NNfunction_ss_cLuL::synapse0x1d6f630() {
   return (neuron0x1d53960()*0.466007);
}

double NNfunction_ss_cLuL::synapse0x1d6f670() {
   return (neuron0x1d53ec0()*0.113842);
}

double NNfunction_ss_cLuL::synapse0x1d6fcf0() {
   return (neuron0x1d540e0()*0.159982);
}

double NNfunction_ss_cLuL::synapse0x1d6fd30() {
   return (neuron0x1d54420()*-0.163994);
}

double NNfunction_ss_cLuL::synapse0x1d6fd70() {
   return (neuron0x1d54760()*0.16215);
}

double NNfunction_ss_cLuL::synapse0x1d6fdb0() {
   return (neuron0x1d54aa0()*0.12901);
}

double NNfunction_ss_cLuL::synapse0x1d6fdf0() {
   return (neuron0x1d54de0()*0.308108);
}

double NNfunction_ss_cLuL::synapse0x1d6fe30() {
   return (neuron0x1d55120()*-0.0888755);
}

double NNfunction_ss_cLuL::synapse0x1d701b0() {
   return (neuron0x1d50560()*0.00938228);
}

double NNfunction_ss_cLuL::synapse0x1d701f0() {
   return (neuron0x1d508a0()*-0.00124045);
}

double NNfunction_ss_cLuL::synapse0x1d70230() {
   return (neuron0x1d50be0()*0.0143224);
}

double NNfunction_ss_cLuL::synapse0x1d70270() {
   return (neuron0x1d50f20()*-2.10926);
}

double NNfunction_ss_cLuL::synapse0x1d702b0() {
   return (neuron0x1d51260()*0.00811247);
}

double NNfunction_ss_cLuL::synapse0x1d702f0() {
   return (neuron0x1d515a0()*-0.0015133);
}

double NNfunction_ss_cLuL::synapse0x1d70330() {
   return (neuron0x1d518e0()*-0.0141208);
}

double NNfunction_ss_cLuL::synapse0x1d70370() {
   return (neuron0x1d51c20()*-0.00695236);
}

double NNfunction_ss_cLuL::synapse0x1d703b0() {
   return (neuron0x1d51f60()*-0.000754656);
}

double NNfunction_ss_cLuL::synapse0x1d703f0() {
   return (neuron0x1d522a0()*-0.00799834);
}

double NNfunction_ss_cLuL::synapse0x1d70430() {
   return (neuron0x1d525e0()*-0.00168668);
}

double NNfunction_ss_cLuL::synapse0x1d70470() {
   return (neuron0x1d52920()*-0.0536201);
}

double NNfunction_ss_cLuL::synapse0x1d704b0() {
   return (neuron0x1d52c60()*-0.01422);
}

double NNfunction_ss_cLuL::synapse0x1d704f0() {
   return (neuron0x1d52fa0()*0.00233379);
}

double NNfunction_ss_cLuL::synapse0x1d70530() {
   return (neuron0x1d532e0()*0.00310512);
}

double NNfunction_ss_cLuL::synapse0x1d70570() {
   return (neuron0x1d53620()*0.00543312);
}

double NNfunction_ss_cLuL::synapse0x1d70000() {
   return (neuron0x1d53960()*0.00124002);
}

double NNfunction_ss_cLuL::synapse0x1d70040() {
   return (neuron0x1d53ec0()*-0.00469807);
}

double NNfunction_ss_cLuL::synapse0x1d706c0() {
   return (neuron0x1d540e0()*-0.000835413);
}

double NNfunction_ss_cLuL::synapse0x1d70700() {
   return (neuron0x1d54420()*0.00432506);
}

double NNfunction_ss_cLuL::synapse0x1d70740() {
   return (neuron0x1d54760()*0.00523994);
}

double NNfunction_ss_cLuL::synapse0x1d70780() {
   return (neuron0x1d54aa0()*0.00870742);
}

double NNfunction_ss_cLuL::synapse0x1d707c0() {
   return (neuron0x1d54de0()*-0.00616177);
}

double NNfunction_ss_cLuL::synapse0x1d70800() {
   return (neuron0x1d55120()*0.0103781);
}

double NNfunction_ss_cLuL::synapse0x1d70b80() {
   return (neuron0x1d50560()*-0.00392633);
}

double NNfunction_ss_cLuL::synapse0x1d70bc0() {
   return (neuron0x1d508a0()*0.00130512);
}

double NNfunction_ss_cLuL::synapse0x1d70c00() {
   return (neuron0x1d50be0()*0.0408427);
}

double NNfunction_ss_cLuL::synapse0x1d70c40() {
   return (neuron0x1d50f20()*0.0357112);
}

double NNfunction_ss_cLuL::synapse0x1d70c80() {
   return (neuron0x1d51260()*0.00661803);
}

double NNfunction_ss_cLuL::synapse0x1d70cc0() {
   return (neuron0x1d515a0()*0.0150962);
}

double NNfunction_ss_cLuL::synapse0x1d70d00() {
   return (neuron0x1d518e0()*-0.00316531);
}

double NNfunction_ss_cLuL::synapse0x1d70d40() {
   return (neuron0x1d51c20()*0.00161772);
}

double NNfunction_ss_cLuL::synapse0x1d70d80() {
   return (neuron0x1d51f60()*0.0232345);
}

double NNfunction_ss_cLuL::synapse0x1d70dc0() {
   return (neuron0x1d522a0()*-0.00389113);
}

double NNfunction_ss_cLuL::synapse0x1d70e00() {
   return (neuron0x1d525e0()*0.0263402);
}

double NNfunction_ss_cLuL::synapse0x1d70e40() {
   return (neuron0x1d52920()*-2.27607);
}

double NNfunction_ss_cLuL::synapse0x1d70e80() {
   return (neuron0x1d52c60()*-0.0264864);
}

double NNfunction_ss_cLuL::synapse0x1d70ec0() {
   return (neuron0x1d52fa0()*-0.014983);
}

double NNfunction_ss_cLuL::synapse0x1d70f00() {
   return (neuron0x1d532e0()*-0.0250994);
}

double NNfunction_ss_cLuL::synapse0x1d70f40() {
   return (neuron0x1d53620()*-0.0158411);
}

double NNfunction_ss_cLuL::synapse0x1d709d0() {
   return (neuron0x1d53960()*-0.00693639);
}

double NNfunction_ss_cLuL::synapse0x1d70a10() {
   return (neuron0x1d53ec0()*-0.0216292);
}

double NNfunction_ss_cLuL::synapse0x1d71090() {
   return (neuron0x1d540e0()*-0.00175869);
}

double NNfunction_ss_cLuL::synapse0x1d710d0() {
   return (neuron0x1d54420()*-0.00346779);
}

double NNfunction_ss_cLuL::synapse0x1d71110() {
   return (neuron0x1d54760()*0.00978711);
}

double NNfunction_ss_cLuL::synapse0x1d71150() {
   return (neuron0x1d54aa0()*0.000330548);
}

double NNfunction_ss_cLuL::synapse0x1d71190() {
   return (neuron0x1d54de0()*-0.0186023);
}

double NNfunction_ss_cLuL::synapse0x1d711d0() {
   return (neuron0x1d55120()*0.014792);
}

double NNfunction_ss_cLuL::synapse0x1d71550() {
   return (neuron0x1d50560()*0.0174094);
}

double NNfunction_ss_cLuL::synapse0x1d71590() {
   return (neuron0x1d508a0()*-0.00238264);
}

double NNfunction_ss_cLuL::synapse0x1d715d0() {
   return (neuron0x1d50be0()*0.0493693);
}

double NNfunction_ss_cLuL::synapse0x1d71610() {
   return (neuron0x1d50f20()*-9.00325);
}

double NNfunction_ss_cLuL::synapse0x1d71650() {
   return (neuron0x1d51260()*0.00283701);
}

double NNfunction_ss_cLuL::synapse0x1d71690() {
   return (neuron0x1d515a0()*0.0246545);
}

double NNfunction_ss_cLuL::synapse0x1d716d0() {
   return (neuron0x1d518e0()*-0.00904286);
}

double NNfunction_ss_cLuL::synapse0x1d71710() {
   return (neuron0x1d51c20()*-0.0194843);
}

double NNfunction_ss_cLuL::synapse0x1d71750() {
   return (neuron0x1d51f60()*0.000467122);
}

double NNfunction_ss_cLuL::synapse0x1d71790() {
   return (neuron0x1d522a0()*-0.00626069);
}

double NNfunction_ss_cLuL::synapse0x1d717d0() {
   return (neuron0x1d525e0()*-0.00797386);
}

double NNfunction_ss_cLuL::synapse0x1d71810() {
   return (neuron0x1d52920()*-0.0287609);
}

double NNfunction_ss_cLuL::synapse0x1d71850() {
   return (neuron0x1d52c60()*-0.0168575);
}

double NNfunction_ss_cLuL::synapse0x1d71890() {
   return (neuron0x1d52fa0()*-0.02501);
}

double NNfunction_ss_cLuL::synapse0x1d718d0() {
   return (neuron0x1d532e0()*-0.0092196);
}

double NNfunction_ss_cLuL::synapse0x1d71910() {
   return (neuron0x1d53620()*-0.00829545);
}

double NNfunction_ss_cLuL::synapse0x1d713a0() {
   return (neuron0x1d53960()*0.0153834);
}

double NNfunction_ss_cLuL::synapse0x1d713e0() {
   return (neuron0x1d53ec0()*0.0178583);
}

double NNfunction_ss_cLuL::synapse0x1d71a60() {
   return (neuron0x1d540e0()*-0.0335431);
}

double NNfunction_ss_cLuL::synapse0x1d71aa0() {
   return (neuron0x1d54420()*-0.00947822);
}

double NNfunction_ss_cLuL::synapse0x1d71ae0() {
   return (neuron0x1d54760()*0.0313702);
}

double NNfunction_ss_cLuL::synapse0x1d71b20() {
   return (neuron0x1d54aa0()*-0.0148186);
}

double NNfunction_ss_cLuL::synapse0x1d71b60() {
   return (neuron0x1d54de0()*-0.00479185);
}

double NNfunction_ss_cLuL::synapse0x1d71ba0() {
   return (neuron0x1d55120()*-0.0333245);
}

double NNfunction_ss_cLuL::synapse0x1d5a650() {
   return (neuron0x1d50560()*-0.318325);
}

double NNfunction_ss_cLuL::synapse0x1d5a690() {
   return (neuron0x1d508a0()*0.117885);
}

double NNfunction_ss_cLuL::synapse0x1d5a6d0() {
   return (neuron0x1d50be0()*-0.0786819);
}

double NNfunction_ss_cLuL::synapse0x1d5a710() {
   return (neuron0x1d50f20()*0.68521);
}

double NNfunction_ss_cLuL::synapse0x1d5a750() {
   return (neuron0x1d51260()*-0.457823);
}

double NNfunction_ss_cLuL::synapse0x1d5a790() {
   return (neuron0x1d515a0()*0.111213);
}

double NNfunction_ss_cLuL::synapse0x1d5a7d0() {
   return (neuron0x1d518e0()*-0.789846);
}

double NNfunction_ss_cLuL::synapse0x1d5a810() {
   return (neuron0x1d51c20()*0.217798);
}

double NNfunction_ss_cLuL::synapse0x1d72330() {
   return (neuron0x1d51f60()*-0.0810675);
}

double NNfunction_ss_cLuL::synapse0x1d72370() {
   return (neuron0x1d522a0()*0.0994973);
}

double NNfunction_ss_cLuL::synapse0x1d723b0() {
   return (neuron0x1d525e0()*0.0787017);
}

double NNfunction_ss_cLuL::synapse0x1d723f0() {
   return (neuron0x1d52920()*0.0674829);
}

double NNfunction_ss_cLuL::synapse0x1d72430() {
   return (neuron0x1d52c60()*-0.255603);
}

double NNfunction_ss_cLuL::synapse0x1d72470() {
   return (neuron0x1d52fa0()*0.0107309);
}

double NNfunction_ss_cLuL::synapse0x1d724b0() {
   return (neuron0x1d532e0()*-0.126544);
}

double NNfunction_ss_cLuL::synapse0x1d724f0() {
   return (neuron0x1d53620()*0.115771);
}

double NNfunction_ss_cLuL::synapse0x1d71d70() {
   return (neuron0x1d53960()*0.0823806);
}

double NNfunction_ss_cLuL::synapse0x1d71db0() {
   return (neuron0x1d53ec0()*0.384639);
}

double NNfunction_ss_cLuL::synapse0x1d72640() {
   return (neuron0x1d540e0()*-0.0316641);
}

double NNfunction_ss_cLuL::synapse0x1d72680() {
   return (neuron0x1d54420()*-0.287785);
}

double NNfunction_ss_cLuL::synapse0x1d726c0() {
   return (neuron0x1d54760()*0.00155924);
}

double NNfunction_ss_cLuL::synapse0x1d72700() {
   return (neuron0x1d54aa0()*0.216475);
}

double NNfunction_ss_cLuL::synapse0x1d72740() {
   return (neuron0x1d54de0()*0.184961);
}

double NNfunction_ss_cLuL::synapse0x1d72780() {
   return (neuron0x1d55120()*0.220195);
}

double NNfunction_ss_cLuL::synapse0x1d72b00() {
   return (neuron0x1d50560()*-0.118139);
}

double NNfunction_ss_cLuL::synapse0x1d72b40() {
   return (neuron0x1d508a0()*0.337262);
}

double NNfunction_ss_cLuL::synapse0x1d72b80() {
   return (neuron0x1d50be0()*-0.50972);
}

double NNfunction_ss_cLuL::synapse0x1d72bc0() {
   return (neuron0x1d50f20()*0.143316);
}

double NNfunction_ss_cLuL::synapse0x1d72c00() {
   return (neuron0x1d51260()*-0.257316);
}

double NNfunction_ss_cLuL::synapse0x1d72c40() {
   return (neuron0x1d515a0()*0.350618);
}

double NNfunction_ss_cLuL::synapse0x1d72c80() {
   return (neuron0x1d518e0()*0.28616);
}

double NNfunction_ss_cLuL::synapse0x1d72cc0() {
   return (neuron0x1d51c20()*-0.285977);
}

double NNfunction_ss_cLuL::synapse0x1d72d00() {
   return (neuron0x1d51f60()*0.220166);
}

double NNfunction_ss_cLuL::synapse0x1d72d40() {
   return (neuron0x1d522a0()*-0.0704318);
}

double NNfunction_ss_cLuL::synapse0x1d72d80() {
   return (neuron0x1d525e0()*-0.384091);
}

double NNfunction_ss_cLuL::synapse0x1d72dc0() {
   return (neuron0x1d52920()*0.668204);
}

double NNfunction_ss_cLuL::synapse0x1d72e00() {
   return (neuron0x1d52c60()*-0.00348573);
}

double NNfunction_ss_cLuL::synapse0x1d72e40() {
   return (neuron0x1d52fa0()*0.288076);
}

double NNfunction_ss_cLuL::synapse0x1d72e80() {
   return (neuron0x1d532e0()*0.210159);
}

double NNfunction_ss_cLuL::synapse0x1d72ec0() {
   return (neuron0x1d53620()*-0.0479262);
}

double NNfunction_ss_cLuL::synapse0x1d72950() {
   return (neuron0x1d53960()*0.039084);
}

double NNfunction_ss_cLuL::synapse0x1d72990() {
   return (neuron0x1d53ec0()*-0.149236);
}

double NNfunction_ss_cLuL::synapse0x1d73010() {
   return (neuron0x1d540e0()*0.0927148);
}

double NNfunction_ss_cLuL::synapse0x1d73050() {
   return (neuron0x1d54420()*-0.181195);
}

double NNfunction_ss_cLuL::synapse0x1d73090() {
   return (neuron0x1d54760()*0.0557739);
}

double NNfunction_ss_cLuL::synapse0x1d730d0() {
   return (neuron0x1d54aa0()*0.0564755);
}

double NNfunction_ss_cLuL::synapse0x1d73110() {
   return (neuron0x1d54de0()*0.0990724);
}

double NNfunction_ss_cLuL::synapse0x1d73150() {
   return (neuron0x1d55120()*-0.752486);
}

double NNfunction_ss_cLuL::synapse0x1d734d0() {
   return (neuron0x1d50560()*0.0214527);
}

double NNfunction_ss_cLuL::synapse0x1d73510() {
   return (neuron0x1d508a0()*-0.307732);
}

double NNfunction_ss_cLuL::synapse0x1d73550() {
   return (neuron0x1d50be0()*-0.40917);
}

double NNfunction_ss_cLuL::synapse0x1d73590() {
   return (neuron0x1d50f20()*0.487514);
}

double NNfunction_ss_cLuL::synapse0x1d735d0() {
   return (neuron0x1d51260()*-0.0282225);
}

double NNfunction_ss_cLuL::synapse0x1d73610() {
   return (neuron0x1d515a0()*-0.285996);
}

double NNfunction_ss_cLuL::synapse0x1d73650() {
   return (neuron0x1d518e0()*-0.496999);
}

double NNfunction_ss_cLuL::synapse0x1d73690() {
   return (neuron0x1d51c20()*-0.0455632);
}

double NNfunction_ss_cLuL::synapse0x1d736d0() {
   return (neuron0x1d51f60()*0.320588);
}

double NNfunction_ss_cLuL::synapse0x1d73710() {
   return (neuron0x1d522a0()*0.479018);
}

double NNfunction_ss_cLuL::synapse0x1d73750() {
   return (neuron0x1d525e0()*0.184744);
}

double NNfunction_ss_cLuL::synapse0x1d73790() {
   return (neuron0x1d52920()*-0.379239);
}

double NNfunction_ss_cLuL::synapse0x1d737d0() {
   return (neuron0x1d52c60()*-0.239474);
}

double NNfunction_ss_cLuL::synapse0x1d73810() {
   return (neuron0x1d52fa0()*0.116311);
}

double NNfunction_ss_cLuL::synapse0x1d73850() {
   return (neuron0x1d532e0()*0.247197);
}

double NNfunction_ss_cLuL::synapse0x1d73890() {
   return (neuron0x1d53620()*-0.173333);
}

double NNfunction_ss_cLuL::synapse0x1d73320() {
   return (neuron0x1d53960()*-0.188585);
}

double NNfunction_ss_cLuL::synapse0x1d73360() {
   return (neuron0x1d53ec0()*0.0698494);
}

double NNfunction_ss_cLuL::synapse0x1d63e90() {
   return (neuron0x1d540e0()*0.00868852);
}

double NNfunction_ss_cLuL::synapse0x1d63ed0() {
   return (neuron0x1d54420()*-0.081413);
}

double NNfunction_ss_cLuL::synapse0x1d63f10() {
   return (neuron0x1d54760()*0.341553);
}

double NNfunction_ss_cLuL::synapse0x1d63f50() {
   return (neuron0x1d54aa0()*0.105978);
}

double NNfunction_ss_cLuL::synapse0x1d63f90() {
   return (neuron0x1d54de0()*0.151931);
}

double NNfunction_ss_cLuL::synapse0x1d63fd0() {
   return (neuron0x1d55120()*-0.32259);
}

double NNfunction_ss_cLuL::synapse0x1d64350() {
   return (neuron0x1d50560()*-0.153508);
}

double NNfunction_ss_cLuL::synapse0x1d64390() {
   return (neuron0x1d508a0()*0.0568668);
}

double NNfunction_ss_cLuL::synapse0x1d643d0() {
   return (neuron0x1d50be0()*0.000440956);
}

double NNfunction_ss_cLuL::synapse0x1d64410() {
   return (neuron0x1d50f20()*0.300039);
}

double NNfunction_ss_cLuL::synapse0x1d64450() {
   return (neuron0x1d51260()*-0.0945667);
}

double NNfunction_ss_cLuL::synapse0x1d64490() {
   return (neuron0x1d515a0()*0.204881);
}

double NNfunction_ss_cLuL::synapse0x1d644d0() {
   return (neuron0x1d518e0()*0.0649663);
}

double NNfunction_ss_cLuL::synapse0x1d64510() {
   return (neuron0x1d51c20()*0.0781237);
}

double NNfunction_ss_cLuL::synapse0x1d64550() {
   return (neuron0x1d51f60()*-0.425041);
}

double NNfunction_ss_cLuL::synapse0x1d64590() {
   return (neuron0x1d522a0()*-0.00799129);
}

double NNfunction_ss_cLuL::synapse0x1d645d0() {
   return (neuron0x1d525e0()*0.309305);
}

double NNfunction_ss_cLuL::synapse0x1d64610() {
   return (neuron0x1d52920()*0.661329);
}

double NNfunction_ss_cLuL::synapse0x1d64650() {
   return (neuron0x1d52c60()*1.38217);
}

double NNfunction_ss_cLuL::synapse0x1d64690() {
   return (neuron0x1d52fa0()*0.154818);
}

double NNfunction_ss_cLuL::synapse0x1d646d0() {
   return (neuron0x1d532e0()*0.072762);
}

double NNfunction_ss_cLuL::synapse0x1d64710() {
   return (neuron0x1d53620()*0.0279927);
}

double NNfunction_ss_cLuL::synapse0x1d641a0() {
   return (neuron0x1d53960()*0.161526);
}

double NNfunction_ss_cLuL::synapse0x1d641e0() {
   return (neuron0x1d53ec0()*-0.0738084);
}

double NNfunction_ss_cLuL::synapse0x1d64860() {
   return (neuron0x1d540e0()*-0.186308);
}

double NNfunction_ss_cLuL::synapse0x1d648a0() {
   return (neuron0x1d54420()*0.0546039);
}

double NNfunction_ss_cLuL::synapse0x1d648e0() {
   return (neuron0x1d54760()*0.0500719);
}

double NNfunction_ss_cLuL::synapse0x1d64920() {
   return (neuron0x1d54aa0()*-0.122063);
}

double NNfunction_ss_cLuL::synapse0x1d64960() {
   return (neuron0x1d54de0()*-0.125214);
}

double NNfunction_ss_cLuL::synapse0x1d649a0() {
   return (neuron0x1d55120()*0.205831);
}

double NNfunction_ss_cLuL::synapse0x1d64d20() {
   return (neuron0x1d50560()*-0.0403711);
}

double NNfunction_ss_cLuL::synapse0x1d64d60() {
   return (neuron0x1d508a0()*0.00223238);
}

double NNfunction_ss_cLuL::synapse0x1d64da0() {
   return (neuron0x1d50be0()*-0.150005);
}

double NNfunction_ss_cLuL::synapse0x1d64de0() {
   return (neuron0x1d50f20()*0.788264);
}

double NNfunction_ss_cLuL::synapse0x1d64e20() {
   return (neuron0x1d51260()*-0.0606512);
}

double NNfunction_ss_cLuL::synapse0x1d64e60() {
   return (neuron0x1d515a0()*0.0476858);
}

double NNfunction_ss_cLuL::synapse0x1d64ea0() {
   return (neuron0x1d518e0()*0.0753203);
}

double NNfunction_ss_cLuL::synapse0x1d64ee0() {
   return (neuron0x1d51c20()*0.0606728);
}

double NNfunction_ss_cLuL::synapse0x1d64f20() {
   return (neuron0x1d51f60()*7.18784e-05);
}

double NNfunction_ss_cLuL::synapse0x1d64f60() {
   return (neuron0x1d522a0()*0.0161132);
}

double NNfunction_ss_cLuL::synapse0x1d64fa0() {
   return (neuron0x1d525e0()*0.0123149);
}

double NNfunction_ss_cLuL::synapse0x1d64fe0() {
   return (neuron0x1d52920()*0.210499);
}

double NNfunction_ss_cLuL::synapse0x1d65020() {
   return (neuron0x1d52c60()*0.22131);
}

double NNfunction_ss_cLuL::synapse0x1d65060() {
   return (neuron0x1d52fa0()*0.00388653);
}

double NNfunction_ss_cLuL::synapse0x1d650a0() {
   return (neuron0x1d532e0()*0.0192476);
}

double NNfunction_ss_cLuL::synapse0x1d650e0() {
   return (neuron0x1d53620()*0.0319839);
}

double NNfunction_ss_cLuL::synapse0x1d64b70() {
   return (neuron0x1d53960()*-0.0200637);
}

double NNfunction_ss_cLuL::synapse0x1d64bb0() {
   return (neuron0x1d53ec0()*0.0565559);
}

double NNfunction_ss_cLuL::synapse0x1d65230() {
   return (neuron0x1d540e0()*0.0240352);
}

double NNfunction_ss_cLuL::synapse0x1d65270() {
   return (neuron0x1d54420()*-0.0193259);
}

double NNfunction_ss_cLuL::synapse0x1d652b0() {
   return (neuron0x1d54760()*-0.0351901);
}

double NNfunction_ss_cLuL::synapse0x1d652f0() {
   return (neuron0x1d54aa0()*-0.0420205);
}

double NNfunction_ss_cLuL::synapse0x1d65330() {
   return (neuron0x1d54de0()*0.0208046);
}

double NNfunction_ss_cLuL::synapse0x1d65370() {
   return (neuron0x1d55120()*-0.0325583);
}

double NNfunction_ss_cLuL::synapse0x1d656f0() {
   return (neuron0x1d50560()*-0.0564534);
}

double NNfunction_ss_cLuL::synapse0x1d65730() {
   return (neuron0x1d508a0()*0.323228);
}

double NNfunction_ss_cLuL::synapse0x1d65770() {
   return (neuron0x1d50be0()*-0.352418);
}

double NNfunction_ss_cLuL::synapse0x1d657b0() {
   return (neuron0x1d50f20()*0.592022);
}

double NNfunction_ss_cLuL::synapse0x1d657f0() {
   return (neuron0x1d51260()*-0.215671);
}

double NNfunction_ss_cLuL::synapse0x1d65830() {
   return (neuron0x1d515a0()*0.110172);
}

double NNfunction_ss_cLuL::synapse0x1d65870() {
   return (neuron0x1d518e0()*0.166765);
}

double NNfunction_ss_cLuL::synapse0x1d658b0() {
   return (neuron0x1d51c20()*0.0707616);
}

double NNfunction_ss_cLuL::synapse0x1d658f0() {
   return (neuron0x1d51f60()*0.224068);
}

double NNfunction_ss_cLuL::synapse0x1d65930() {
   return (neuron0x1d522a0()*-0.44273);
}

double NNfunction_ss_cLuL::synapse0x1d65970() {
   return (neuron0x1d525e0()*-0.28634);
}

double NNfunction_ss_cLuL::synapse0x1d659b0() {
   return (neuron0x1d52920()*0.536044);
}

double NNfunction_ss_cLuL::synapse0x1d659f0() {
   return (neuron0x1d52c60()*0.688411);
}

double NNfunction_ss_cLuL::synapse0x1d65a30() {
   return (neuron0x1d52fa0()*0.545672);
}

double NNfunction_ss_cLuL::synapse0x1d65a70() {
   return (neuron0x1d532e0()*-0.130789);
}

double NNfunction_ss_cLuL::synapse0x1d65ab0() {
   return (neuron0x1d53620()*0.296796);
}

double NNfunction_ss_cLuL::synapse0x1d65540() {
   return (neuron0x1d53960()*0.00340077);
}

double NNfunction_ss_cLuL::synapse0x1d65580() {
   return (neuron0x1d53ec0()*0.431482);
}

double NNfunction_ss_cLuL::synapse0x1d65c00() {
   return (neuron0x1d540e0()*0.120827);
}

double NNfunction_ss_cLuL::synapse0x1d65c40() {
   return (neuron0x1d54420()*0.439911);
}

double NNfunction_ss_cLuL::synapse0x1d65c80() {
   return (neuron0x1d54760()*0.151039);
}

double NNfunction_ss_cLuL::synapse0x1d65cc0() {
   return (neuron0x1d54aa0()*-0.141457);
}

double NNfunction_ss_cLuL::synapse0x1d65d00() {
   return (neuron0x1d54de0()*0.0721143);
}

double NNfunction_ss_cLuL::synapse0x1d65d40() {
   return (neuron0x1d55120()*-0.331697);
}

double NNfunction_ss_cLuL::synapse0x1d77c10() {
   return (neuron0x1d50560()*0.418811);
}

double NNfunction_ss_cLuL::synapse0x1d77c50() {
   return (neuron0x1d508a0()*-0.426156);
}

double NNfunction_ss_cLuL::synapse0x1d77c90() {
   return (neuron0x1d50be0()*-0.0457705);
}

double NNfunction_ss_cLuL::synapse0x1d77cd0() {
   return (neuron0x1d50f20()*-0.479232);
}

double NNfunction_ss_cLuL::synapse0x1d77d10() {
   return (neuron0x1d51260()*-0.13209);
}

double NNfunction_ss_cLuL::synapse0x1d77d50() {
   return (neuron0x1d515a0()*-0.34905);
}

double NNfunction_ss_cLuL::synapse0x1d77d90() {
   return (neuron0x1d518e0()*-0.248228);
}

double NNfunction_ss_cLuL::synapse0x1d77dd0() {
   return (neuron0x1d51c20()*0.100943);
}

double NNfunction_ss_cLuL::synapse0x1d77e10() {
   return (neuron0x1d51f60()*-0.0181888);
}

double NNfunction_ss_cLuL::synapse0x1d77e50() {
   return (neuron0x1d522a0()*-0.0369967);
}

double NNfunction_ss_cLuL::synapse0x1d77e90() {
   return (neuron0x1d525e0()*-0.529636);
}

double NNfunction_ss_cLuL::synapse0x1d77ed0() {
   return (neuron0x1d52920()*0.394843);
}

double NNfunction_ss_cLuL::synapse0x1d77f10() {
   return (neuron0x1d52c60()*-0.312305);
}

double NNfunction_ss_cLuL::synapse0x1d77f50() {
   return (neuron0x1d52fa0()*0.176029);
}

double NNfunction_ss_cLuL::synapse0x1d77f90() {
   return (neuron0x1d532e0()*-0.32332);
}

double NNfunction_ss_cLuL::synapse0x1d77fd0() {
   return (neuron0x1d53620()*-0.0845428);
}

double NNfunction_ss_cLuL::synapse0x1d65d80() {
   return (neuron0x1d53960()*0.218973);
}

double NNfunction_ss_cLuL::synapse0x1d65dc0() {
   return (neuron0x1d53ec0()*-0.287212);
}

double NNfunction_ss_cLuL::synapse0x1d78120() {
   return (neuron0x1d540e0()*0.470878);
}

double NNfunction_ss_cLuL::synapse0x1d78160() {
   return (neuron0x1d54420()*-0.344017);
}

double NNfunction_ss_cLuL::synapse0x1d781a0() {
   return (neuron0x1d54760()*0.124903);
}

double NNfunction_ss_cLuL::synapse0x1d781e0() {
   return (neuron0x1d54aa0()*0.0164212);
}

double NNfunction_ss_cLuL::synapse0x1d78220() {
   return (neuron0x1d54de0()*-0.237624);
}

double NNfunction_ss_cLuL::synapse0x1d78260() {
   return (neuron0x1d55120()*-0.0654618);
}

double NNfunction_ss_cLuL::synapse0x1d785e0() {
   return (neuron0x1d50560()*0.35938);
}

double NNfunction_ss_cLuL::synapse0x1d78620() {
   return (neuron0x1d508a0()*-0.260988);
}

double NNfunction_ss_cLuL::synapse0x1d78660() {
   return (neuron0x1d50be0()*0.547213);
}

double NNfunction_ss_cLuL::synapse0x1d786a0() {
   return (neuron0x1d50f20()*0.272598);
}

double NNfunction_ss_cLuL::synapse0x1d786e0() {
   return (neuron0x1d51260()*0.221992);
}

double NNfunction_ss_cLuL::synapse0x1d78720() {
   return (neuron0x1d515a0()*-0.253744);
}

double NNfunction_ss_cLuL::synapse0x1d78760() {
   return (neuron0x1d518e0()*-0.126843);
}

double NNfunction_ss_cLuL::synapse0x1d787a0() {
   return (neuron0x1d51c20()*0.11319);
}

double NNfunction_ss_cLuL::synapse0x1d787e0() {
   return (neuron0x1d51f60()*0.420848);
}

double NNfunction_ss_cLuL::synapse0x1d78820() {
   return (neuron0x1d522a0()*-0.290867);
}

double NNfunction_ss_cLuL::synapse0x1d78860() {
   return (neuron0x1d525e0()*0.187749);
}

double NNfunction_ss_cLuL::synapse0x1d788a0() {
   return (neuron0x1d52920()*-0.26117);
}

double NNfunction_ss_cLuL::synapse0x1d788e0() {
   return (neuron0x1d52c60()*-0.103591);
}

double NNfunction_ss_cLuL::synapse0x1d78920() {
   return (neuron0x1d52fa0()*-0.837146);
}

double NNfunction_ss_cLuL::synapse0x1d78960() {
   return (neuron0x1d532e0()*-0.500167);
}

double NNfunction_ss_cLuL::synapse0x1d789a0() {
   return (neuron0x1d53620()*-0.207687);
}

double NNfunction_ss_cLuL::synapse0x1d78430() {
   return (neuron0x1d53960()*-0.512399);
}

double NNfunction_ss_cLuL::synapse0x1d78470() {
   return (neuron0x1d53ec0()*0.0545345);
}

double NNfunction_ss_cLuL::synapse0x1d78af0() {
   return (neuron0x1d540e0()*-0.406831);
}

double NNfunction_ss_cLuL::synapse0x1d78b30() {
   return (neuron0x1d54420()*0.00464559);
}

double NNfunction_ss_cLuL::synapse0x1d78b70() {
   return (neuron0x1d54760()*0.0746272);
}

double NNfunction_ss_cLuL::synapse0x1d78bb0() {
   return (neuron0x1d54aa0()*-0.169025);
}

double NNfunction_ss_cLuL::synapse0x1d78bf0() {
   return (neuron0x1d54de0()*0.312734);
}

double NNfunction_ss_cLuL::synapse0x1d78c30() {
   return (neuron0x1d55120()*-0.504897);
}

double NNfunction_ss_cLuL::synapse0x1d78fb0() {
   return (neuron0x1d50560()*-0.38211);
}

double NNfunction_ss_cLuL::synapse0x1d78ff0() {
   return (neuron0x1d508a0()*-0.286417);
}

double NNfunction_ss_cLuL::synapse0x1d79030() {
   return (neuron0x1d50be0()*-0.0843797);
}

double NNfunction_ss_cLuL::synapse0x1d79070() {
   return (neuron0x1d50f20()*-0.367468);
}

double NNfunction_ss_cLuL::synapse0x1d790b0() {
   return (neuron0x1d51260()*-0.45352);
}

double NNfunction_ss_cLuL::synapse0x1d790f0() {
   return (neuron0x1d515a0()*-0.195982);
}

double NNfunction_ss_cLuL::synapse0x1d79130() {
   return (neuron0x1d518e0()*0.501653);
}

double NNfunction_ss_cLuL::synapse0x1d79170() {
   return (neuron0x1d51c20()*-0.213618);
}

double NNfunction_ss_cLuL::synapse0x1d791b0() {
   return (neuron0x1d51f60()*-0.505175);
}

double NNfunction_ss_cLuL::synapse0x1d791f0() {
   return (neuron0x1d522a0()*0.121032);
}

double NNfunction_ss_cLuL::synapse0x1d79230() {
   return (neuron0x1d525e0()*0.442852);
}

double NNfunction_ss_cLuL::synapse0x1d79270() {
   return (neuron0x1d52920()*0.824709);
}

double NNfunction_ss_cLuL::synapse0x1d792b0() {
   return (neuron0x1d52c60()*-0.187973);
}

double NNfunction_ss_cLuL::synapse0x1d792f0() {
   return (neuron0x1d52fa0()*0.58359);
}

double NNfunction_ss_cLuL::synapse0x1d79330() {
   return (neuron0x1d532e0()*-0.807099);
}

double NNfunction_ss_cLuL::synapse0x1d79370() {
   return (neuron0x1d53620()*-0.25781);
}

double NNfunction_ss_cLuL::synapse0x1d78e00() {
   return (neuron0x1d53960()*-0.0975732);
}

double NNfunction_ss_cLuL::synapse0x1d78e40() {
   return (neuron0x1d53ec0()*-0.179295);
}

double NNfunction_ss_cLuL::synapse0x1d794c0() {
   return (neuron0x1d540e0()*-0.337736);
}

double NNfunction_ss_cLuL::synapse0x1d79500() {
   return (neuron0x1d54420()*0.461236);
}

double NNfunction_ss_cLuL::synapse0x1d79540() {
   return (neuron0x1d54760()*0.0183182);
}

double NNfunction_ss_cLuL::synapse0x1d79580() {
   return (neuron0x1d54aa0()*0.0590691);
}

double NNfunction_ss_cLuL::synapse0x1d795c0() {
   return (neuron0x1d54de0()*0.0177995);
}

double NNfunction_ss_cLuL::synapse0x1d79600() {
   return (neuron0x1d55120()*0.20383);
}

double NNfunction_ss_cLuL::synapse0x1d79980() {
   return (neuron0x1d50560()*-0.0282251);
}

double NNfunction_ss_cLuL::synapse0x1d799c0() {
   return (neuron0x1d508a0()*-0.0357808);
}

double NNfunction_ss_cLuL::synapse0x1d79a00() {
   return (neuron0x1d50be0()*-0.581428);
}

double NNfunction_ss_cLuL::synapse0x1d79a40() {
   return (neuron0x1d50f20()*0.642114);
}

double NNfunction_ss_cLuL::synapse0x1d79a80() {
   return (neuron0x1d51260()*0.241702);
}

double NNfunction_ss_cLuL::synapse0x1d79ac0() {
   return (neuron0x1d515a0()*-0.0995464);
}

double NNfunction_ss_cLuL::synapse0x1d79b00() {
   return (neuron0x1d518e0()*-0.279142);
}

double NNfunction_ss_cLuL::synapse0x1d79b40() {
   return (neuron0x1d51c20()*-0.510077);
}

double NNfunction_ss_cLuL::synapse0x1d79b80() {
   return (neuron0x1d51f60()*-0.0781618);
}

double NNfunction_ss_cLuL::synapse0x1d79bc0() {
   return (neuron0x1d522a0()*0.417659);
}

double NNfunction_ss_cLuL::synapse0x1d79c00() {
   return (neuron0x1d525e0()*0.267003);
}

double NNfunction_ss_cLuL::synapse0x1d79c40() {
   return (neuron0x1d52920()*0.522211);
}

double NNfunction_ss_cLuL::synapse0x1d79c80() {
   return (neuron0x1d52c60()*0.0764019);
}

double NNfunction_ss_cLuL::synapse0x1d79cc0() {
   return (neuron0x1d52fa0()*-0.138102);
}

double NNfunction_ss_cLuL::synapse0x1d79d00() {
   return (neuron0x1d532e0()*0.105909);
}

double NNfunction_ss_cLuL::synapse0x1d79d40() {
   return (neuron0x1d53620()*-0.0577454);
}

double NNfunction_ss_cLuL::synapse0x1d797d0() {
   return (neuron0x1d53960()*-0.0176882);
}

double NNfunction_ss_cLuL::synapse0x1d79810() {
   return (neuron0x1d53ec0()*0.256245);
}

double NNfunction_ss_cLuL::synapse0x1d79e90() {
   return (neuron0x1d540e0()*-0.429558);
}

double NNfunction_ss_cLuL::synapse0x1d79ed0() {
   return (neuron0x1d54420()*0.183157);
}

double NNfunction_ss_cLuL::synapse0x1d79f10() {
   return (neuron0x1d54760()*-0.0853875);
}

double NNfunction_ss_cLuL::synapse0x1d79f50() {
   return (neuron0x1d54aa0()*0.157079);
}

double NNfunction_ss_cLuL::synapse0x1d79f90() {
   return (neuron0x1d54de0()*-0.0584147);
}

double NNfunction_ss_cLuL::synapse0x1d79fd0() {
   return (neuron0x1d55120()*0.0303422);
}

double NNfunction_ss_cLuL::synapse0x1d56570() {
   return (neuron0x1d555c0()*-0.128544);
}

double NNfunction_ss_cLuL::synapse0x1d565b0() {
   return (neuron0x1d55ed0()*1.22779);
}

double NNfunction_ss_cLuL::synapse0x1d57a80() {
   return (neuron0x1d569b0()*-0.727515);
}

double NNfunction_ss_cLuL::synapse0x1d57ac0() {
   return (neuron0x1b10240()*-0.0336068);
}

double NNfunction_ss_cLuL::synapse0x1d58450() {
   return (neuron0x1d577d0()*0.205362);
}

double NNfunction_ss_cLuL::synapse0x1d58490() {
   return (neuron0x1d581a0()*0.121198);
}

double NNfunction_ss_cLuL::synapse0x1d59220() {
   return (neuron0x1d58f70()*1.03797);
}

double NNfunction_ss_cLuL::synapse0x1d59260() {
   return (neuron0x1d59940()*-1.80472);
}

double NNfunction_ss_cLuL::synapse0x1d59bf0() {
   return (neuron0x1d5a310()*1.32786);
}

double NNfunction_ss_cLuL::synapse0x1d59c30() {
   return (neuron0x1d5adf0()*-1.36549);
}

double NNfunction_ss_cLuL::synapse0x1d5a5c0() {
   return (neuron0x1d5b7c0()*-2.42152);
}

double NNfunction_ss_cLuL::synapse0x1d5a600() {
   return (neuron0x1d588a0()*-1.82062);
}

double NNfunction_ss_cLuL::synapse0x1d5b0a0() {
   return (neuron0x1d5d370()*3.12739);
}

double NNfunction_ss_cLuL::synapse0x1d5b0e0() {
   return (neuron0x1d5dd40()*-3.71277);
}

double NNfunction_ss_cLuL::synapse0x1d5ba70() {
   return (neuron0x1d5e710()*-0.742846);
}

double NNfunction_ss_cLuL::synapse0x1d5bab0() {
   return (neuron0x1d5f0e0()*-1.89022);
}

double NNfunction_ss_cLuL::synapse0x1d58b50() {
   return (neuron0x1d60ef0()*0.823617);
}

double NNfunction_ss_cLuL::synapse0x1d58b90() {
   return (neuron0x1d611d0()*0.962929);
}

double NNfunction_ss_cLuL::synapse0x1d5d620() {
   return (neuron0x1d61ba0()*0.873263);
}

double NNfunction_ss_cLuL::synapse0x1d5d660() {
   return (neuron0x1d62570()*-0.578309);
}

double NNfunction_ss_cLuL::synapse0x1d5dff0() {
   return (neuron0x1d62f40()*0.264337);
}

double NNfunction_ss_cLuL::synapse0x1d5e030() {
   return (neuron0x1d63910()*-0.760518);
}

double NNfunction_ss_cLuL::synapse0x1d5e9c0() {
   return (neuron0x1d5c460()*1.15653);
}

double NNfunction_ss_cLuL::synapse0x1d5ea00() {
   return (neuron0x1d5ce30()*-1.77956);
}

double NNfunction_ss_cLuL::synapse0x1d5f390() {
   return (neuron0x1d666a0()*-0.721375);
}

double NNfunction_ss_cLuL::synapse0x1d5f3d0() {
   return (neuron0x1d67070()*0.0463332);
}

double NNfunction_ss_cLuL::synapse0x1d53500() {
   return (neuron0x1d67a40()*-0.787695);
}

double NNfunction_ss_cLuL::synapse0x1d53540() {
   return (neuron0x1d68410()*1.92991);
}

double NNfunction_ss_cLuL::synapse0x1d61480() {
   return (neuron0x1d68de0()*0.342994);
}

double NNfunction_ss_cLuL::synapse0x1d614c0() {
   return (neuron0x1d697b0()*0.937382);
}

double NNfunction_ss_cLuL::synapse0x1d61e50() {
   return (neuron0x1d6a180()*-0.24492);
}

double NNfunction_ss_cLuL::synapse0x1d61e90() {
   return (neuron0x1d6ab50()*-1.41084);
}

double NNfunction_ss_cLuL::synapse0x1d62820() {
   return (neuron0x1d60be0()*0.0179305);
}

double NNfunction_ss_cLuL::synapse0x1d62860() {
   return (neuron0x1d6d730()*1.28473);
}

double NNfunction_ss_cLuL::synapse0x1d631f0() {
   return (neuron0x1d6e100()*0.22693);
}

double NNfunction_ss_cLuL::synapse0x1d63230() {
   return (neuron0x1d6ead0()*1.38793);
}

double NNfunction_ss_cLuL::synapse0x1d63bc0() {
   return (neuron0x1d6f4a0()*-0.813528);
}

double NNfunction_ss_cLuL::synapse0x1d63c00() {
   return (neuron0x1d6fe70()*-2.65626);
}

double NNfunction_ss_cLuL::synapse0x1d5c710() {
   return (neuron0x1d70840()*-1.90626);
}

double NNfunction_ss_cLuL::synapse0x1d5c750() {
   return (neuron0x1d71210()*10.3767);
}

double NNfunction_ss_cLuL::synapse0x1d65fc0() {
   return (neuron0x1d71be0()*1.64187);
}

double NNfunction_ss_cLuL::synapse0x1d66000() {
   return (neuron0x1d727c0()*0.480136);
}

double NNfunction_ss_cLuL::synapse0x1d66950() {
   return (neuron0x1d73190()*1.51471);
}

double NNfunction_ss_cLuL::synapse0x1d66990() {
   return (neuron0x1d64010()*1.26437);
}

double NNfunction_ss_cLuL::synapse0x1d67320() {
   return (neuron0x1d649e0()*0.905737);
}

double NNfunction_ss_cLuL::synapse0x1d67360() {
   return (neuron0x1d653b0()*0.995639);
}

double NNfunction_ss_cLuL::synapse0x1d67cf0() {
   return (neuron0x1d779f0()*-1.03397);
}

double NNfunction_ss_cLuL::synapse0x1d67d30() {
   return (neuron0x1d782a0()*0.459731);
}

double NNfunction_ss_cLuL::synapse0x1d686c0() {
   return (neuron0x1d78c70()*0.777694);
}

double NNfunction_ss_cLuL::synapse0x1d68700() {
   return (neuron0x1d79640()*0.811419);
}

double NNfunction_ss_cLuL::synapse0x1d6ae00() {
   return (neuron0x1d555c0()*-0.0476499);
}

double NNfunction_ss_cLuL::synapse0x1d6ae40() {
   return (neuron0x1d55ed0()*-0.136359);
}

double NNfunction_ss_cLuL::synapse0x1d603c0() {
   return (neuron0x1d569b0()*0.390751);
}

double NNfunction_ss_cLuL::synapse0x1d60400() {
   return (neuron0x1b10240()*0.0667754);
}

double NNfunction_ss_cLuL::synapse0x1d6d9e0() {
   return (neuron0x1d577d0()*-0.45244);
}

double NNfunction_ss_cLuL::synapse0x1d6da20() {
   return (neuron0x1d581a0()*0.714498);
}

double NNfunction_ss_cLuL::synapse0x1d6e3b0() {
   return (neuron0x1d58f70()*-2.1277);
}

double NNfunction_ss_cLuL::synapse0x1d6e3f0() {
   return (neuron0x1d59940()*0.537674);
}

double NNfunction_ss_cLuL::synapse0x1d6ed80() {
   return (neuron0x1d5a310()*-1.2222);
}

double NNfunction_ss_cLuL::synapse0x1d6edc0() {
   return (neuron0x1d5adf0()*-0.0584664);
}

double NNfunction_ss_cLuL::synapse0x1d6f750() {
   return (neuron0x1d5b7c0()*0.584897);
}

double NNfunction_ss_cLuL::synapse0x1d6f790() {
   return (neuron0x1d588a0()*-0.0446444);
}

double NNfunction_ss_cLuL::synapse0x1d70120() {
   return (neuron0x1d5d370()*-2.8607);
}

double NNfunction_ss_cLuL::synapse0x1d70160() {
   return (neuron0x1d5dd40()*0.241194);
}

double NNfunction_ss_cLuL::synapse0x1d70af0() {
   return (neuron0x1d5e710()*-0.159589);
}

double NNfunction_ss_cLuL::synapse0x1d70b30() {
   return (neuron0x1d5f0e0()*0.326309);
}

double NNfunction_ss_cLuL::synapse0x1d714c0() {
   return (neuron0x1d60ef0()*-0.0366878);
}

double NNfunction_ss_cLuL::synapse0x1d71500() {
   return (neuron0x1d611d0()*0.00950191);
}

double NNfunction_ss_cLuL::synapse0x1d71e90() {
   return (neuron0x1d61ba0()*-0.0269086);
}

double NNfunction_ss_cLuL::synapse0x1d71ed0() {
   return (neuron0x1d62570()*1.23192);
}

double NNfunction_ss_cLuL::synapse0x1d72a70() {
   return (neuron0x1d62f40()*0.0822769);
}

double NNfunction_ss_cLuL::synapse0x1d72ab0() {
   return (neuron0x1d63910()*0.108874);
}

double NNfunction_ss_cLuL::synapse0x1d73440() {
   return (neuron0x1d5c460()*0.0639002);
}

double NNfunction_ss_cLuL::synapse0x1d73480() {
   return (neuron0x1d5ce30()*0.0630152);
}

double NNfunction_ss_cLuL::synapse0x1d642c0() {
   return (neuron0x1d666a0()*0.160693);
}

double NNfunction_ss_cLuL::synapse0x1d64300() {
   return (neuron0x1d67070()*0.0332878);
}

double NNfunction_ss_cLuL::synapse0x1d64c90() {
   return (neuron0x1d67a40()*-1.11667);
}

double NNfunction_ss_cLuL::synapse0x1d64cd0() {
   return (neuron0x1d68410()*-0.588413);
}

double NNfunction_ss_cLuL::synapse0x1d65660() {
   return (neuron0x1d68de0()*0.921417);
}

double NNfunction_ss_cLuL::synapse0x1d656a0() {
   return (neuron0x1d697b0()*-0.105435);
}

double NNfunction_ss_cLuL::synapse0x1d77b80() {
   return (neuron0x1d6a180()*0.123259);
}

double NNfunction_ss_cLuL::synapse0x1d77bc0() {
   return (neuron0x1d6ab50()*0.159228);
}

double NNfunction_ss_cLuL::synapse0x1d78550() {
   return (neuron0x1d60be0()*1.43773);
}

double NNfunction_ss_cLuL::synapse0x1d78590() {
   return (neuron0x1d6d730()*-0.0294474);
}

double NNfunction_ss_cLuL::synapse0x1d78f20() {
   return (neuron0x1d6e100()*0.326359);
}

double NNfunction_ss_cLuL::synapse0x1d78f60() {
   return (neuron0x1d6ead0()*-0.0378077);
}

double NNfunction_ss_cLuL::synapse0x1d798f0() {
   return (neuron0x1d6f4a0()*0.000575309);
}

double NNfunction_ss_cLuL::synapse0x1d79930() {
   return (neuron0x1d6fe70()*1.46801);
}

double NNfunction_ss_cLuL::synapse0x1d557e0() {
   return (neuron0x1d70840()*0.382543);
}

double NNfunction_ss_cLuL::synapse0x1d55820() {
   return (neuron0x1d71210()*-1.1399);
}

double NNfunction_ss_cLuL::synapse0x1d69090() {
   return (neuron0x1d71be0()*-0.0462982);
}

double NNfunction_ss_cLuL::synapse0x1d690d0() {
   return (neuron0x1d727c0()*-0.0890687);
}

double NNfunction_ss_cLuL::synapse0x1d7a010() {
   return (neuron0x1d73190()*-0.137583);
}

double NNfunction_ss_cLuL::synapse0x1d7a050() {
   return (neuron0x1d64010()*0.262921);
}

double NNfunction_ss_cLuL::synapse0x1d7a090() {
   return (neuron0x1d649e0()*0.563009);
}

double NNfunction_ss_cLuL::synapse0x1d7a0d0() {
   return (neuron0x1d653b0()*-0.0395944);
}

double NNfunction_ss_cLuL::synapse0x1d80f80() {
   return (neuron0x1d779f0()*0.118239);
}

double NNfunction_ss_cLuL::synapse0x1d80fc0() {
   return (neuron0x1d782a0()*0.158608);
}

double NNfunction_ss_cLuL::synapse0x1d81000() {
   return (neuron0x1d78c70()*-0.0349415);
}

double NNfunction_ss_cLuL::synapse0x1d81040() {
   return (neuron0x1d79640()*0.132589);
}

double NNfunction_ss_cLuL::synapse0x1d813c0() {
   return (neuron0x1d555c0()*-0.126125);
}

double NNfunction_ss_cLuL::synapse0x1d81400() {
   return (neuron0x1d55ed0()*-0.307754);
}

double NNfunction_ss_cLuL::synapse0x1d81440() {
   return (neuron0x1d569b0()*0.583578);
}

double NNfunction_ss_cLuL::synapse0x1d81480() {
   return (neuron0x1b10240()*0.0871799);
}

double NNfunction_ss_cLuL::synapse0x1d814c0() {
   return (neuron0x1d577d0()*-0.565326);
}

double NNfunction_ss_cLuL::synapse0x1d81500() {
   return (neuron0x1d581a0()*1.37301);
}

double NNfunction_ss_cLuL::synapse0x1d81540() {
   return (neuron0x1d58f70()*4.59005);
}

double NNfunction_ss_cLuL::synapse0x1d81580() {
   return (neuron0x1d59940()*-0.667647);
}

double NNfunction_ss_cLuL::synapse0x1d815c0() {
   return (neuron0x1d5a310()*1.48153);
}

double NNfunction_ss_cLuL::synapse0x1d81600() {
   return (neuron0x1d5adf0()*-0.0792924);
}

double NNfunction_ss_cLuL::synapse0x1d81640() {
   return (neuron0x1d5b7c0()*0.433089);
}

double NNfunction_ss_cLuL::synapse0x1d81680() {
   return (neuron0x1d588a0()*0.0528895);
}

double NNfunction_ss_cLuL::synapse0x1d816c0() {
   return (neuron0x1d5d370()*4.30416);
}

double NNfunction_ss_cLuL::synapse0x1d81700() {
   return (neuron0x1d5dd40()*-0.0965718);
}

double NNfunction_ss_cLuL::synapse0x1d81740() {
   return (neuron0x1d5e710()*-0.243432);
}

double NNfunction_ss_cLuL::synapse0x1d81780() {
   return (neuron0x1d5f0e0()*0.465874);
}

double NNfunction_ss_cLuL::synapse0x1d81210() {
   return (neuron0x1d60ef0()*-0.16106);
}

double NNfunction_ss_cLuL::synapse0x1d81250() {
   return (neuron0x1d611d0()*-0.0520919);
}

double NNfunction_ss_cLuL::synapse0x1d818d0() {
   return (neuron0x1d61ba0()*-0.0934909);
}

double NNfunction_ss_cLuL::synapse0x1d81910() {
   return (neuron0x1d62570()*-0.813932);
}

double NNfunction_ss_cLuL::synapse0x1d81950() {
   return (neuron0x1d62f40()*0.0576689);
}

double NNfunction_ss_cLuL::synapse0x1d81990() {
   return (neuron0x1d63910()*0.180505);
}

double NNfunction_ss_cLuL::synapse0x1d819d0() {
   return (neuron0x1d5c460()*0.0633573);
}

double NNfunction_ss_cLuL::synapse0x1d81a10() {
   return (neuron0x1d5ce30()*0.124545);
}

double NNfunction_ss_cLuL::synapse0x1d81a50() {
   return (neuron0x1d666a0()*0.367544);
}

double NNfunction_ss_cLuL::synapse0x1d81a90() {
   return (neuron0x1d67070()*-0.0508591);
}

double NNfunction_ss_cLuL::synapse0x1d81ad0() {
   return (neuron0x1d67a40()*1.47192);
}

double NNfunction_ss_cLuL::synapse0x1d81b10() {
   return (neuron0x1d68410()*-1.50842);
}

double NNfunction_ss_cLuL::synapse0x1d81b50() {
   return (neuron0x1d68de0()*-0.370148);
}

double NNfunction_ss_cLuL::synapse0x1d81b90() {
   return (neuron0x1d697b0()*-0.239598);
}

double NNfunction_ss_cLuL::synapse0x1d81bd0() {
   return (neuron0x1d6a180()*0.0881914);
}

double NNfunction_ss_cLuL::synapse0x1d81c10() {
   return (neuron0x1d6ab50()*0.343261);
}

double NNfunction_ss_cLuL::synapse0x1d817c0() {
   return (neuron0x1d60be0()*-1.5511);
}

double NNfunction_ss_cLuL::synapse0x1d81800() {
   return (neuron0x1d6d730()*-0.208656);
}

double NNfunction_ss_cLuL::synapse0x1d81840() {
   return (neuron0x1d6e100()*0.601276);
}

double NNfunction_ss_cLuL::synapse0x1d81880() {
   return (neuron0x1d6ead0()*-0.146642);
}

double NNfunction_ss_cLuL::synapse0x1d81e60() {
   return (neuron0x1d6f4a0()*0.0554939);
}

double NNfunction_ss_cLuL::synapse0x1d81ea0() {
   return (neuron0x1d6fe70()*-2.15014);
}

double NNfunction_ss_cLuL::synapse0x1d81ee0() {
   return (neuron0x1d70840()*-0.966803);
}

double NNfunction_ss_cLuL::synapse0x1d81f20() {
   return (neuron0x1d71210()*-2.12025);
}

double NNfunction_ss_cLuL::synapse0x1d81f60() {
   return (neuron0x1d71be0()*-0.153575);
}

double NNfunction_ss_cLuL::synapse0x1d81fa0() {
   return (neuron0x1d727c0()*-0.230633);
}

double NNfunction_ss_cLuL::synapse0x1d81fe0() {
   return (neuron0x1d73190()*-0.330922);
}

double NNfunction_ss_cLuL::synapse0x1d82020() {
   return (neuron0x1d64010()*0.377908);
}

double NNfunction_ss_cLuL::synapse0x1d82060() {
   return (neuron0x1d649e0()*-0.737452);
}

double NNfunction_ss_cLuL::synapse0x1d820a0() {
   return (neuron0x1d653b0()*-0.133835);
}

double NNfunction_ss_cLuL::synapse0x1d820e0() {
   return (neuron0x1d779f0()*0.219963);
}

double NNfunction_ss_cLuL::synapse0x1d82120() {
   return (neuron0x1d782a0()*0.228235);
}

double NNfunction_ss_cLuL::synapse0x1d82160() {
   return (neuron0x1d78c70()*-0.127891);
}

double NNfunction_ss_cLuL::synapse0x1d821a0() {
   return (neuron0x1d79640()*0.240384);
}

double NNfunction_ss_cLuL::synapse0x1d82520() {
   return (neuron0x1d555c0()*0.83738);
}

double NNfunction_ss_cLuL::synapse0x1d82560() {
   return (neuron0x1d55ed0()*0.067857);
}

double NNfunction_ss_cLuL::synapse0x1d825a0() {
   return (neuron0x1d569b0()*0.772585);
}

double NNfunction_ss_cLuL::synapse0x1d825e0() {
   return (neuron0x1b10240()*1.63817);
}

double NNfunction_ss_cLuL::synapse0x1d82620() {
   return (neuron0x1d577d0()*0.307766);
}

double NNfunction_ss_cLuL::synapse0x1d82660() {
   return (neuron0x1d581a0()*1.57282);
}

double NNfunction_ss_cLuL::synapse0x1d826a0() {
   return (neuron0x1d58f70()*1.81708);
}

double NNfunction_ss_cLuL::synapse0x1d826e0() {
   return (neuron0x1d59940()*-0.532556);
}

double NNfunction_ss_cLuL::synapse0x1d82720() {
   return (neuron0x1d5a310()*1.43717);
}

double NNfunction_ss_cLuL::synapse0x1d82760() {
   return (neuron0x1d5adf0()*0.0858749);
}

double NNfunction_ss_cLuL::synapse0x1d827a0() {
   return (neuron0x1d5b7c0()*-0.39525);
}

double NNfunction_ss_cLuL::synapse0x1d827e0() {
   return (neuron0x1d588a0()*-1.08924);
}

double NNfunction_ss_cLuL::synapse0x1d82820() {
   return (neuron0x1d5d370()*3.16647);
}

double NNfunction_ss_cLuL::synapse0x1d82860() {
   return (neuron0x1d5dd40()*-2.01709);
}

double NNfunction_ss_cLuL::synapse0x1d828a0() {
   return (neuron0x1d5e710()*-0.946726);
}

double NNfunction_ss_cLuL::synapse0x1d828e0() {
   return (neuron0x1d5f0e0()*1.11373);
}

double NNfunction_ss_cLuL::synapse0x1d82370() {
   return (neuron0x1d60ef0()*0.388858);
}

double NNfunction_ss_cLuL::synapse0x1d823b0() {
   return (neuron0x1d611d0()*0.104936);
}

double NNfunction_ss_cLuL::synapse0x1d82a30() {
   return (neuron0x1d61ba0()*0.0475278);
}

double NNfunction_ss_cLuL::synapse0x1d82a70() {
   return (neuron0x1d62570()*-2.07999);
}

double NNfunction_ss_cLuL::synapse0x1d82ab0() {
   return (neuron0x1d62f40()*1.08413);
}

double NNfunction_ss_cLuL::synapse0x1d82af0() {
   return (neuron0x1d63910()*0.419103);
}

double NNfunction_ss_cLuL::synapse0x1d82b30() {
   return (neuron0x1d5c460()*0.420076);
}

double NNfunction_ss_cLuL::synapse0x1d82b70() {
   return (neuron0x1d5ce30()*0.679738);
}

double NNfunction_ss_cLuL::synapse0x1d82bb0() {
   return (neuron0x1d666a0()*-0.449764);
}

double NNfunction_ss_cLuL::synapse0x1d82bf0() {
   return (neuron0x1d67070()*1.34396);
}

double NNfunction_ss_cLuL::synapse0x1d82c30() {
   return (neuron0x1d67a40()*0.443578);
}

double NNfunction_ss_cLuL::synapse0x1d82c70() {
   return (neuron0x1d68410()*-0.985782);
}

double NNfunction_ss_cLuL::synapse0x1d82cb0() {
   return (neuron0x1d68de0()*-1.45442);
}

double NNfunction_ss_cLuL::synapse0x1d82cf0() {
   return (neuron0x1d697b0()*0.16541);
}

double NNfunction_ss_cLuL::synapse0x1d82d30() {
   return (neuron0x1d6a180()*1.77092);
}

double NNfunction_ss_cLuL::synapse0x1d82d70() {
   return (neuron0x1d6ab50()*-0.123124);
}

double NNfunction_ss_cLuL::synapse0x1d82920() {
   return (neuron0x1d60be0()*-1.16472);
}

double NNfunction_ss_cLuL::synapse0x1d82960() {
   return (neuron0x1d6d730()*0.567527);
}

double NNfunction_ss_cLuL::synapse0x1d829a0() {
   return (neuron0x1d6e100()*-0.259841);
}

double NNfunction_ss_cLuL::synapse0x1d829e0() {
   return (neuron0x1d6ead0()*0.133782);
}

double NNfunction_ss_cLuL::synapse0x1d82fc0() {
   return (neuron0x1d6f4a0()*-0.469597);
}

double NNfunction_ss_cLuL::synapse0x1d83000() {
   return (neuron0x1d6fe70()*-2.20905);
}

double NNfunction_ss_cLuL::synapse0x1d83040() {
   return (neuron0x1d70840()*-1.97154);
}

double NNfunction_ss_cLuL::synapse0x1d83080() {
   return (neuron0x1d71210()*0.212707);
}

double NNfunction_ss_cLuL::synapse0x1d830c0() {
   return (neuron0x1d71be0()*-0.0278533);
}

double NNfunction_ss_cLuL::synapse0x1d83100() {
   return (neuron0x1d727c0()*0.730026);
}

double NNfunction_ss_cLuL::synapse0x1d83140() {
   return (neuron0x1d73190()*0.0191435);
}

double NNfunction_ss_cLuL::synapse0x1d83180() {
   return (neuron0x1d64010()*0.475737);
}

double NNfunction_ss_cLuL::synapse0x1d831c0() {
   return (neuron0x1d649e0()*-1.55669);
}

double NNfunction_ss_cLuL::synapse0x1d83200() {
   return (neuron0x1d653b0()*0.26852);
}

double NNfunction_ss_cLuL::synapse0x1d83240() {
   return (neuron0x1d779f0()*0.0738322);
}

double NNfunction_ss_cLuL::synapse0x1d83280() {
   return (neuron0x1d782a0()*0.375953);
}

double NNfunction_ss_cLuL::synapse0x1d832c0() {
   return (neuron0x1d78c70()*0.258227);
}

double NNfunction_ss_cLuL::synapse0x1d83300() {
   return (neuron0x1d79640()*-0.437025);
}

double NNfunction_ss_cLuL::synapse0x1d83680() {
   return (neuron0x1d555c0()*-0.287462);
}

double NNfunction_ss_cLuL::synapse0x1d836c0() {
   return (neuron0x1d55ed0()*-0.150346);
}

double NNfunction_ss_cLuL::synapse0x1d83700() {
   return (neuron0x1d569b0()*-0.454044);
}

double NNfunction_ss_cLuL::synapse0x1d83740() {
   return (neuron0x1b10240()*0.175107);
}

double NNfunction_ss_cLuL::synapse0x1d83780() {
   return (neuron0x1d577d0()*0.243794);
}

double NNfunction_ss_cLuL::synapse0x1d837c0() {
   return (neuron0x1d581a0()*-0.296089);
}

double NNfunction_ss_cLuL::synapse0x1d83800() {
   return (neuron0x1d58f70()*-0.224342);
}

double NNfunction_ss_cLuL::synapse0x1d83840() {
   return (neuron0x1d59940()*-0.0392571);
}

double NNfunction_ss_cLuL::synapse0x1d83880() {
   return (neuron0x1d5a310()*0.565264);
}

double NNfunction_ss_cLuL::synapse0x1d838c0() {
   return (neuron0x1d5adf0()*-0.360204);
}

double NNfunction_ss_cLuL::synapse0x1d83900() {
   return (neuron0x1d5b7c0()*0.152341);
}

double NNfunction_ss_cLuL::synapse0x1d83940() {
   return (neuron0x1d588a0()*0.300073);
}

double NNfunction_ss_cLuL::synapse0x1d83980() {
   return (neuron0x1d5d370()*-0.403717);
}

double NNfunction_ss_cLuL::synapse0x1d839c0() {
   return (neuron0x1d5dd40()*0.141766);
}

double NNfunction_ss_cLuL::synapse0x1d83a00() {
   return (neuron0x1d5e710()*-0.581166);
}

double NNfunction_ss_cLuL::synapse0x1d83a40() {
   return (neuron0x1d5f0e0()*-0.59113);
}

double NNfunction_ss_cLuL::synapse0x1d834d0() {
   return (neuron0x1d60ef0()*-0.221592);
}

double NNfunction_ss_cLuL::synapse0x1d83510() {
   return (neuron0x1d611d0()*-0.437387);
}

double NNfunction_ss_cLuL::synapse0x1d83b90() {
   return (neuron0x1d61ba0()*-0.118882);
}

double NNfunction_ss_cLuL::synapse0x1d83bd0() {
   return (neuron0x1d62570()*-0.746635);
}

double NNfunction_ss_cLuL::synapse0x1d83c10() {
   return (neuron0x1d62f40()*0.0446893);
}

double NNfunction_ss_cLuL::synapse0x1d83c50() {
   return (neuron0x1d63910()*-0.155672);
}

double NNfunction_ss_cLuL::synapse0x1d83c90() {
   return (neuron0x1d5c460()*-0.607205);
}

double NNfunction_ss_cLuL::synapse0x1d83cd0() {
   return (neuron0x1d5ce30()*-0.481668);
}

double NNfunction_ss_cLuL::synapse0x1d83d10() {
   return (neuron0x1d666a0()*-0.584124);
}

double NNfunction_ss_cLuL::synapse0x1d83d50() {
   return (neuron0x1d67070()*-0.1889);
}

double NNfunction_ss_cLuL::synapse0x1d83d90() {
   return (neuron0x1d67a40()*-0.478679);
}

double NNfunction_ss_cLuL::synapse0x1d83dd0() {
   return (neuron0x1d68410()*-0.0986194);
}

double NNfunction_ss_cLuL::synapse0x1d83e10() {
   return (neuron0x1d68de0()*-0.470595);
}

double NNfunction_ss_cLuL::synapse0x1d83e50() {
   return (neuron0x1d697b0()*-0.434987);
}

double NNfunction_ss_cLuL::synapse0x1d83e90() {
   return (neuron0x1d6a180()*-0.423406);
}

double NNfunction_ss_cLuL::synapse0x1d83ed0() {
   return (neuron0x1d6ab50()*-0.591548);
}

double NNfunction_ss_cLuL::synapse0x1d83a80() {
   return (neuron0x1d60be0()*-0.535126);
}

double NNfunction_ss_cLuL::synapse0x1d83ac0() {
   return (neuron0x1d6d730()*-0.225735);
}

double NNfunction_ss_cLuL::synapse0x1d83b00() {
   return (neuron0x1d6e100()*-0.593393);
}

double NNfunction_ss_cLuL::synapse0x1d83b40() {
   return (neuron0x1d6ead0()*-0.0231507);
}

double NNfunction_ss_cLuL::synapse0x1d84120() {
   return (neuron0x1d6f4a0()*0.0453964);
}

double NNfunction_ss_cLuL::synapse0x1d84160() {
   return (neuron0x1d6fe70()*-0.00661666);
}

double NNfunction_ss_cLuL::synapse0x1d841a0() {
   return (neuron0x1d70840()*0.104722);
}

double NNfunction_ss_cLuL::synapse0x1d841e0() {
   return (neuron0x1d71210()*-0.500492);
}

double NNfunction_ss_cLuL::synapse0x1d84220() {
   return (neuron0x1d71be0()*-0.445269);
}

double NNfunction_ss_cLuL::synapse0x1d84260() {
   return (neuron0x1d727c0()*-0.249319);
}

double NNfunction_ss_cLuL::synapse0x1d842a0() {
   return (neuron0x1d73190()*0.0444735);
}

double NNfunction_ss_cLuL::synapse0x1d842e0() {
   return (neuron0x1d64010()*-0.302171);
}

double NNfunction_ss_cLuL::synapse0x1d84320() {
   return (neuron0x1d649e0()*-0.283011);
}

double NNfunction_ss_cLuL::synapse0x1d84360() {
   return (neuron0x1d653b0()*0.29819);
}

double NNfunction_ss_cLuL::synapse0x1d843a0() {
   return (neuron0x1d779f0()*0.200976);
}

double NNfunction_ss_cLuL::synapse0x1d843e0() {
   return (neuron0x1d782a0()*-0.359524);
}

double NNfunction_ss_cLuL::synapse0x1d84420() {
   return (neuron0x1d78c70()*0.211129);
}

double NNfunction_ss_cLuL::synapse0x1d84460() {
   return (neuron0x1d79640()*-0.237125);
}

double NNfunction_ss_cLuL::synapse0x1d55580() {
   return (neuron0x1d80840()*-6.32474);
}

double NNfunction_ss_cLuL::synapse0x1d846c0() {
   return (neuron0x1d80be0()*8.85493);
}

double NNfunction_ss_cLuL::synapse0x1d84700() {
   return (neuron0x1d81080()*-5.45434);
}

double NNfunction_ss_cLuL::synapse0x1d84740() {
   return (neuron0x1d821e0()*-4.11524);
}

double NNfunction_ss_cLuL::synapse0x1d84780() {
   return (neuron0x1d83340()*0.210515);
}

