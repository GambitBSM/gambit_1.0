#include "NNfunction_ss_sRcR.h"
#include <cmath>

double NNfunction_ss_sRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.5646)/14.9488;
   input1 = (in1 - 43.7149)/769.791;
   input2 = (in2 - 366.871)/486.83;
   input3 = (in3 - 207.711)/569.186;
   input4 = (in4 - 680.9)/719.624;
   input5 = (in5 - 580.206)/684.528;
   input6 = (in6 - 592.126)/701.117;
   input7 = (in7 - 587.64)/692.561;
   input8 = (in8 - 574.109)/700.571;
   input9 = (in9 - 567.398)/688.808;
   input10 = (in10 - 591.807)/720.161;
   input11 = (in11 - 589.695)/573.564;
   input12 = (in12 - 586.51)/570.149;
   input13 = (in13 - 457.793)/345.018;
   input14 = (in14 - 594.072)/560.907;
   input15 = (in15 - 392.328)/217.67;
   input16 = (in16 - 427.404)/390.616;
   input17 = (in17 - 601.957)/595.539;
   input18 = (in18 - 383.318)/217.067;
   input19 = (in19 - 610.614)/600.839;
   input20 = (in20 - -167.677)/378.805;
   input21 = (in21 - -206.542)/849.299;
   input22 = (in22 - 5.452)/863.167;
   input23 = (in23 - -34.7203)/477.944;
   switch(index) {
     case 0:
         return neuron0x2a8dd90();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.5646)/14.9488;
   input1 = (input[1] - 43.7149)/769.791;
   input2 = (input[2] - 366.871)/486.83;
   input3 = (input[3] - 207.711)/569.186;
   input4 = (input[4] - 680.9)/719.624;
   input5 = (input[5] - 580.206)/684.528;
   input6 = (input[6] - 592.126)/701.117;
   input7 = (input[7] - 587.64)/692.561;
   input8 = (input[8] - 574.109)/700.571;
   input9 = (input[9] - 567.398)/688.808;
   input10 = (input[10] - 591.807)/720.161;
   input11 = (input[11] - 589.695)/573.564;
   input12 = (input[12] - 586.51)/570.149;
   input13 = (input[13] - 457.793)/345.018;
   input14 = (input[14] - 594.072)/560.907;
   input15 = (input[15] - 392.328)/217.67;
   input16 = (input[16] - 427.404)/390.616;
   input17 = (input[17] - 601.957)/595.539;
   input18 = (input[18] - 383.318)/217.067;
   input19 = (input[19] - 610.614)/600.839;
   input20 = (input[20] - -167.677)/378.805;
   input21 = (input[21] - -206.542)/849.299;
   input22 = (input[22] - 5.452)/863.167;
   input23 = (input[23] - -34.7203)/477.944;
   switch(index) {
     case 0:
         return neuron0x2a8dd90();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRcR::neuron0x2a59e50() {
   return input0;
}

double NNfunction_ss_sRcR::neuron0x2a5a190() {
   return input1;
}

double NNfunction_ss_sRcR::neuron0x2a5a4d0() {
   return input2;
}

double NNfunction_ss_sRcR::neuron0x2a5a810() {
   return input3;
}

double NNfunction_ss_sRcR::neuron0x2a5ab50() {
   return input4;
}

double NNfunction_ss_sRcR::neuron0x2a5ae90() {
   return input5;
}

double NNfunction_ss_sRcR::neuron0x2a5b1d0() {
   return input6;
}

double NNfunction_ss_sRcR::neuron0x2a5b510() {
   return input7;
}

double NNfunction_ss_sRcR::neuron0x2a5b850() {
   return input8;
}

double NNfunction_ss_sRcR::neuron0x2a5bb90() {
   return input9;
}

double NNfunction_ss_sRcR::neuron0x2a5bed0() {
   return input10;
}

double NNfunction_ss_sRcR::neuron0x2a5c210() {
   return input11;
}

double NNfunction_ss_sRcR::neuron0x2a5c550() {
   return input12;
}

double NNfunction_ss_sRcR::neuron0x2a5c890() {
   return input13;
}

double NNfunction_ss_sRcR::neuron0x2a5cbd0() {
   return input14;
}

double NNfunction_ss_sRcR::neuron0x2a5cf10() {
   return input15;
}

double NNfunction_ss_sRcR::neuron0x2a5d250() {
   return input16;
}

double NNfunction_ss_sRcR::neuron0x2a5d7b0() {
   return input17;
}

double NNfunction_ss_sRcR::neuron0x2a5d9d0() {
   return input18;
}

double NNfunction_ss_sRcR::neuron0x2a5dd10() {
   return input19;
}

double NNfunction_ss_sRcR::neuron0x2a5e050() {
   return input20;
}

double NNfunction_ss_sRcR::neuron0x2a5e390() {
   return input21;
}

double NNfunction_ss_sRcR::neuron0x2a5e6d0() {
   return input22;
}

double NNfunction_ss_sRcR::neuron0x2a5ea10() {
   return input23;
}

double NNfunction_ss_sRcR::input0x2a5eeb0() {
   double input = -0.991917;
   input += synapse0x2823800();
   input += synapse0x2a59d10();
   input += synapse0x2a59d50();
   input += synapse0x2a5f160();
   input += synapse0x2a5f1a0();
   input += synapse0x2a5f1e0();
   input += synapse0x2a5f220();
   input += synapse0x2a5f260();
   input += synapse0x2a5f2a0();
   input += synapse0x2a5f2e0();
   input += synapse0x2a5f320();
   input += synapse0x2a5f360();
   input += synapse0x2a5f3a0();
   input += synapse0x2a5f3e0();
   input += synapse0x2a5f420();
   input += synapse0x2a5f460();
   input += synapse0x2a59c80();
   input += synapse0x2a59cc0();
   input += synapse0x2815010();
   input += synapse0x2815050();
   input += synapse0x2a5f6c0();
   input += synapse0x2a5f700();
   input += synapse0x2a5f740();
   input += synapse0x2a5f780();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a5eeb0() {
   double input = input0x2a5eeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a5f7c0() {
   double input = -0.707956;
   input += synapse0x2a5fb00();
   input += synapse0x2a5fb40();
   input += synapse0x2a5fb80();
   input += synapse0x2a5fbc0();
   input += synapse0x2a5fc00();
   input += synapse0x2a5fc40();
   input += synapse0x2a5fc80();
   input += synapse0x2a5fcc0();
   input += synapse0x2a5fd00();
   input += synapse0x2a5f5b0();
   input += synapse0x2a5f5f0();
   input += synapse0x2a5f630();
   input += synapse0x2a5f670();
   input += synapse0x2a5ff50();
   input += synapse0x2a5ff90();
   input += synapse0x2a5ffd0();
   input += synapse0x2a5f950();
   input += synapse0x2a5f990();
   input += synapse0x2a60120();
   input += synapse0x2a60160();
   input += synapse0x2a601a0();
   input += synapse0x2a601e0();
   input += synapse0x2a60220();
   input += synapse0x2a60260();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a5f7c0() {
   double input = input0x2a5f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a602a0() {
   double input = 0.0548831;
   input += synapse0x2a605e0();
   input += synapse0x2a60620();
   input += synapse0x2a60660();
   input += synapse0x2a606a0();
   input += synapse0x2a606e0();
   input += synapse0x2a60720();
   input += synapse0x2a60760();
   input += synapse0x2a607a0();
   input += synapse0x2a607e0();
   input += synapse0x2a60820();
   input += synapse0x2a60860();
   input += synapse0x2a608a0();
   input += synapse0x2a608e0();
   input += synapse0x2a60920();
   input += synapse0x2a60960();
   input += synapse0x2a609a0();
   input += synapse0x2a60430();
   input += synapse0x2a60470();
   input += synapse0x2822f10();
   input += synapse0x2822f50();
   input += synapse0x2a48ee0();
   input += synapse0x2a48f20();
   input += synapse0x2a48f60();
   input += synapse0x2a59d90();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a602a0() {
   double input = input0x2a602a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2823670() {
   double input = 0.467084;
   input += synapse0x2a5fef0();
   input += synapse0x2a59dd0();
   input += synapse0x2a59e10();
   input += synapse0x2a60af0();
   input += synapse0x2a60b30();
   input += synapse0x2a60b70();
   input += synapse0x2a60bb0();
   input += synapse0x2a60bf0();
   input += synapse0x2a60c30();
   input += synapse0x2a60c70();
   input += synapse0x2a60cb0();
   input += synapse0x2a60cf0();
   input += synapse0x2a60d30();
   input += synapse0x2a60d70();
   input += synapse0x2a60db0();
   input += synapse0x2a60df0();
   input += synapse0x2a5fd40();
   input += synapse0x2a5fd80();
   input += synapse0x2a60f40();
   input += synapse0x2a60f80();
   input += synapse0x2a60fc0();
   input += synapse0x2a61000();
   input += synapse0x2a61040();
   input += synapse0x2a61080();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2823670() {
   double input = input0x2823670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a610c0() {
   double input = -1.35345;
   input += synapse0x2a61400();
   input += synapse0x2a61440();
   input += synapse0x2a61480();
   input += synapse0x2a614c0();
   input += synapse0x2a61500();
   input += synapse0x2a61540();
   input += synapse0x2a61580();
   input += synapse0x2a615c0();
   input += synapse0x2a61600();
   input += synapse0x2a61640();
   input += synapse0x2a61680();
   input += synapse0x2a616c0();
   input += synapse0x2a61700();
   input += synapse0x2a61740();
   input += synapse0x2a61780();
   input += synapse0x2a617c0();
   input += synapse0x2a61250();
   input += synapse0x2a61290();
   input += synapse0x2a61910();
   input += synapse0x2a61950();
   input += synapse0x2a61990();
   input += synapse0x2a619d0();
   input += synapse0x2a61a10();
   input += synapse0x2a61a50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a610c0() {
   double input = input0x2a610c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a61a90() {
   double input = 1.58016;
   input += synapse0x2a61dd0();
   input += synapse0x2a61e10();
   input += synapse0x2a61e50();
   input += synapse0x2a61e90();
   input += synapse0x2a61ed0();
   input += synapse0x2a61f10();
   input += synapse0x2a61f50();
   input += synapse0x2a61f90();
   input += synapse0x2a61fd0();
   input += synapse0x2823260();
   input += synapse0x28232a0();
   input += synapse0x28232e0();
   input += synapse0x2823320();
   input += synapse0x2823360();
   input += synapse0x28233a0();
   input += synapse0x28233e0();
   input += synapse0x2a61c20();
   input += synapse0x2a61c60();
   input += synapse0x2823530();
   input += synapse0x2823570();
   input += synapse0x28235b0();
   input += synapse0x28235f0();
   input += synapse0x2823630();
   input += synapse0x2a62820();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a61a90() {
   double input = input0x2a61a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a62860() {
   double input = -0.460364;
   input += synapse0x2a62ba0();
   input += synapse0x2a62be0();
   input += synapse0x2a62c20();
   input += synapse0x2a62c60();
   input += synapse0x2a62ca0();
   input += synapse0x2a62ce0();
   input += synapse0x2a62d20();
   input += synapse0x2a62d60();
   input += synapse0x2a62da0();
   input += synapse0x2a62de0();
   input += synapse0x2a62e20();
   input += synapse0x2a62e60();
   input += synapse0x2a62ea0();
   input += synapse0x2a62ee0();
   input += synapse0x2a62f20();
   input += synapse0x2a62f60();
   input += synapse0x2a629f0();
   input += synapse0x2a62a30();
   input += synapse0x2a630b0();
   input += synapse0x2a630f0();
   input += synapse0x2a63130();
   input += synapse0x2a63170();
   input += synapse0x2a631b0();
   input += synapse0x2a631f0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a62860() {
   double input = input0x2a62860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a63230() {
   double input = -0.977669;
   input += synapse0x2a63570();
   input += synapse0x2a635b0();
   input += synapse0x2a635f0();
   input += synapse0x2a63630();
   input += synapse0x2a63670();
   input += synapse0x2a636b0();
   input += synapse0x2a636f0();
   input += synapse0x2a63730();
   input += synapse0x2a63770();
   input += synapse0x2a637b0();
   input += synapse0x2a637f0();
   input += synapse0x2a63830();
   input += synapse0x2a63870();
   input += synapse0x2a638b0();
   input += synapse0x2a638f0();
   input += synapse0x2a63930();
   input += synapse0x2a633c0();
   input += synapse0x2a63400();
   input += synapse0x2a63a80();
   input += synapse0x2a63ac0();
   input += synapse0x2a63b00();
   input += synapse0x2a63b40();
   input += synapse0x2a63b80();
   input += synapse0x2a63bc0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a63230() {
   double input = input0x2a63230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a63c00() {
   double input = -0.760955;
   input += synapse0x2a5d6a0();
   input += synapse0x2a5d6e0();
   input += synapse0x2a5d720();
   input += synapse0x2a5d760();
   input += synapse0x2a64150();
   input += synapse0x2a64190();
   input += synapse0x2a641d0();
   input += synapse0x2a64210();
   input += synapse0x2a64250();
   input += synapse0x2a64290();
   input += synapse0x2a642d0();
   input += synapse0x2a64310();
   input += synapse0x2a64350();
   input += synapse0x2a64390();
   input += synapse0x2a643d0();
   input += synapse0x2a64410();
   input += synapse0x2a63d90();
   input += synapse0x2a63dd0();
   input += synapse0x2a64560();
   input += synapse0x2a645a0();
   input += synapse0x2a645e0();
   input += synapse0x2a64620();
   input += synapse0x2a64660();
   input += synapse0x2a646a0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a63c00() {
   double input = input0x2a63c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a646e0() {
   double input = 0.131143;
   input += synapse0x2a64a20();
   input += synapse0x2a64a60();
   input += synapse0x2a64aa0();
   input += synapse0x2a64ae0();
   input += synapse0x2a64b20();
   input += synapse0x2a64b60();
   input += synapse0x2a64ba0();
   input += synapse0x2a64be0();
   input += synapse0x2a64c20();
   input += synapse0x2a64c60();
   input += synapse0x2a64ca0();
   input += synapse0x2a64ce0();
   input += synapse0x2a64d20();
   input += synapse0x2a64d60();
   input += synapse0x2a64da0();
   input += synapse0x2a64de0();
   input += synapse0x2a64870();
   input += synapse0x2a648b0();
   input += synapse0x2a64f30();
   input += synapse0x2a64f70();
   input += synapse0x2a64fb0();
   input += synapse0x2a64ff0();
   input += synapse0x2a65030();
   input += synapse0x2a65070();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a646e0() {
   double input = input0x2a646e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a650b0() {
   double input = -0.0900591;
   input += synapse0x2a653f0();
   input += synapse0x2a65430();
   input += synapse0x2a65470();
   input += synapse0x2a654b0();
   input += synapse0x2a654f0();
   input += synapse0x2a65530();
   input += synapse0x2a65570();
   input += synapse0x2a655b0();
   input += synapse0x2a655f0();
   input += synapse0x2a65630();
   input += synapse0x2a65670();
   input += synapse0x2a656b0();
   input += synapse0x2a656f0();
   input += synapse0x2a65730();
   input += synapse0x2a65770();
   input += synapse0x2a657b0();
   input += synapse0x2a65240();
   input += synapse0x2a65280();
   input += synapse0x2a62010();
   input += synapse0x2a62050();
   input += synapse0x2a62090();
   input += synapse0x2a620d0();
   input += synapse0x2a62110();
   input += synapse0x2a62150();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a650b0() {
   double input = input0x2a650b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a62190() {
   double input = 0.770006;
   input += synapse0x2a624d0();
   input += synapse0x2a62510();
   input += synapse0x2a62550();
   input += synapse0x2a62590();
   input += synapse0x2a625d0();
   input += synapse0x2a62610();
   input += synapse0x2a62650();
   input += synapse0x2a62690();
   input += synapse0x2a626d0();
   input += synapse0x2a62710();
   input += synapse0x2a62750();
   input += synapse0x2a62790();
   input += synapse0x2a627d0();
   input += synapse0x2a66910();
   input += synapse0x2a66950();
   input += synapse0x2a66990();
   input += synapse0x2a62320();
   input += synapse0x2a62360();
   input += synapse0x2a66ae0();
   input += synapse0x2a66b20();
   input += synapse0x2a66b60();
   input += synapse0x2a66ba0();
   input += synapse0x2a66be0();
   input += synapse0x2a66c20();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a62190() {
   double input = input0x2a62190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a66c60() {
   double input = -5.40683;
   input += synapse0x2a66fa0();
   input += synapse0x2a66fe0();
   input += synapse0x2a67020();
   input += synapse0x2a67060();
   input += synapse0x2a670a0();
   input += synapse0x2a670e0();
   input += synapse0x2a67120();
   input += synapse0x2a67160();
   input += synapse0x2a671a0();
   input += synapse0x2a671e0();
   input += synapse0x2a67220();
   input += synapse0x2a67260();
   input += synapse0x2a672a0();
   input += synapse0x2a672e0();
   input += synapse0x2a67320();
   input += synapse0x2a67360();
   input += synapse0x2a66df0();
   input += synapse0x2a66e30();
   input += synapse0x2a674b0();
   input += synapse0x2a674f0();
   input += synapse0x2a67530();
   input += synapse0x2a67570();
   input += synapse0x2a675b0();
   input += synapse0x2a675f0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a66c60() {
   double input = input0x2a66c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a67630() {
   double input = 2.67172;
   input += synapse0x2a67970();
   input += synapse0x2a679b0();
   input += synapse0x2a679f0();
   input += synapse0x2a67a30();
   input += synapse0x2a67a70();
   input += synapse0x2a67ab0();
   input += synapse0x2a67af0();
   input += synapse0x2a67b30();
   input += synapse0x2a67b70();
   input += synapse0x2a67bb0();
   input += synapse0x2a67bf0();
   input += synapse0x2a67c30();
   input += synapse0x2a67c70();
   input += synapse0x2a67cb0();
   input += synapse0x2a67cf0();
   input += synapse0x2a67d30();
   input += synapse0x2a677c0();
   input += synapse0x2a67800();
   input += synapse0x2a67e80();
   input += synapse0x2a67ec0();
   input += synapse0x2a67f00();
   input += synapse0x2a67f40();
   input += synapse0x2a67f80();
   input += synapse0x2a67fc0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a67630() {
   double input = input0x2a67630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a68000() {
   double input = 0.611996;
   input += synapse0x2a68340();
   input += synapse0x2a68380();
   input += synapse0x2a683c0();
   input += synapse0x2a68400();
   input += synapse0x2a68440();
   input += synapse0x2a68480();
   input += synapse0x2a684c0();
   input += synapse0x2a68500();
   input += synapse0x2a68540();
   input += synapse0x2a68580();
   input += synapse0x2a685c0();
   input += synapse0x2a68600();
   input += synapse0x2a68640();
   input += synapse0x2a68680();
   input += synapse0x2a686c0();
   input += synapse0x2a68700();
   input += synapse0x2a68190();
   input += synapse0x2a681d0();
   input += synapse0x2a68850();
   input += synapse0x2a68890();
   input += synapse0x2a688d0();
   input += synapse0x2a68910();
   input += synapse0x2a68950();
   input += synapse0x2a68990();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a68000() {
   double input = input0x2a68000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a689d0() {
   double input = 0.223859;
   input += synapse0x2a68d10();
   input += synapse0x2a5a070();
   input += synapse0x2a5a0b0();
   input += synapse0x2a5a3b0();
   input += synapse0x2a5a3f0();
   input += synapse0x2a5a6f0();
   input += synapse0x2a5a730();
   input += synapse0x2a5aa30();
   input += synapse0x2a5aa70();
   input += synapse0x2a5ad70();
   input += synapse0x2a5adb0();
   input += synapse0x2a5b0b0();
   input += synapse0x2a5b0f0();
   input += synapse0x2a5b3f0();
   input += synapse0x2a5b430();
   input += synapse0x2a5b730();
   input += synapse0x2a5b770();
   input += synapse0x2a5ba70();
   input += synapse0x2a5bab0();
   input += synapse0x2a5bdb0();
   input += synapse0x2a5bdf0();
   input += synapse0x2a5c0f0();
   input += synapse0x2a5c130();
   input += synapse0x2a5c430();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a689d0() {
   double input = input0x2a689d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6a7e0() {
   double input = -0.650947;
   input += synapse0x2a5c470();
   input += synapse0x2a5d130();
   input += synapse0x2a5d170();
   input += synapse0x2a68b60();
   input += synapse0x2a68ba0();
   input += synapse0x2a5d470();
   input += synapse0x2a5d4b0();
   input += synapse0x2814ef0();
   input += synapse0x2814f30();
   input += synapse0x2a5dbf0();
   input += synapse0x2a5dc30();
   input += synapse0x2a5df30();
   input += synapse0x2a5df70();
   input += synapse0x2a5e270();
   input += synapse0x2a5e2b0();
   input += synapse0x2a5e5b0();
   input += synapse0x2a5e5f0();
   input += synapse0x2a5e8f0();
   input += synapse0x2a5e930();
   input += synapse0x2a5ec30();
   input += synapse0x2a5ec70();
   input += synapse0x2a5c770();
   input += synapse0x2a5c7b0();
   input += synapse0x2a6aa80();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6a7e0() {
   double input = input0x2a6a7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6aac0() {
   double input = -0.883931;
   input += synapse0x2a6ae00();
   input += synapse0x2a6ae40();
   input += synapse0x2a6ae80();
   input += synapse0x2a6aec0();
   input += synapse0x2a6af00();
   input += synapse0x2a6af40();
   input += synapse0x2a6af80();
   input += synapse0x2a6afc0();
   input += synapse0x2a6b000();
   input += synapse0x2a6b040();
   input += synapse0x2a6b080();
   input += synapse0x2a6b0c0();
   input += synapse0x2a6b100();
   input += synapse0x2a6b140();
   input += synapse0x2a6b180();
   input += synapse0x2a6b1c0();
   input += synapse0x2a6ac50();
   input += synapse0x2a6ac90();
   input += synapse0x2a6b310();
   input += synapse0x2a6b350();
   input += synapse0x2a6b390();
   input += synapse0x2a6b3d0();
   input += synapse0x2a6b410();
   input += synapse0x2a6b450();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6aac0() {
   double input = input0x2a6aac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6b490() {
   double input = 0.652906;
   input += synapse0x2a6b7d0();
   input += synapse0x2a6b810();
   input += synapse0x2a6b850();
   input += synapse0x2a6b890();
   input += synapse0x2a6b8d0();
   input += synapse0x2a6b910();
   input += synapse0x2a6b950();
   input += synapse0x2a6b990();
   input += synapse0x2a6b9d0();
   input += synapse0x2a6ba10();
   input += synapse0x2a6ba50();
   input += synapse0x2a6ba90();
   input += synapse0x2a6bad0();
   input += synapse0x2a6bb10();
   input += synapse0x2a6bb50();
   input += synapse0x2a6bb90();
   input += synapse0x2a6b620();
   input += synapse0x2a6b660();
   input += synapse0x2a6bce0();
   input += synapse0x2a6bd20();
   input += synapse0x2a6bd60();
   input += synapse0x2a6bda0();
   input += synapse0x2a6bde0();
   input += synapse0x2a6be20();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6b490() {
   double input = input0x2a6b490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6be60() {
   double input = 0.443536;
   input += synapse0x2a6c1a0();
   input += synapse0x2a6c1e0();
   input += synapse0x2a6c220();
   input += synapse0x2a6c260();
   input += synapse0x2a6c2a0();
   input += synapse0x2a6c2e0();
   input += synapse0x2a6c320();
   input += synapse0x2a6c360();
   input += synapse0x2a6c3a0();
   input += synapse0x2a6c3e0();
   input += synapse0x2a6c420();
   input += synapse0x2a6c460();
   input += synapse0x2a6c4a0();
   input += synapse0x2a6c4e0();
   input += synapse0x2a6c520();
   input += synapse0x2a6c560();
   input += synapse0x2a6bff0();
   input += synapse0x2a6c030();
   input += synapse0x2a6c6b0();
   input += synapse0x2a6c6f0();
   input += synapse0x2a6c730();
   input += synapse0x2a6c770();
   input += synapse0x2a6c7b0();
   input += synapse0x2a6c7f0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6be60() {
   double input = input0x2a6be60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6c830() {
   double input = 0.315317;
   input += synapse0x2a6cb70();
   input += synapse0x2a6cbb0();
   input += synapse0x2a6cbf0();
   input += synapse0x2a6cc30();
   input += synapse0x2a6cc70();
   input += synapse0x2a6ccb0();
   input += synapse0x2a6ccf0();
   input += synapse0x2a6cd30();
   input += synapse0x2a6cd70();
   input += synapse0x2a6cdb0();
   input += synapse0x2a6cdf0();
   input += synapse0x2a6ce30();
   input += synapse0x2a6ce70();
   input += synapse0x2a6ceb0();
   input += synapse0x2a6cef0();
   input += synapse0x2a6cf30();
   input += synapse0x2a6c9c0();
   input += synapse0x2a6ca00();
   input += synapse0x2a6d080();
   input += synapse0x2a6d0c0();
   input += synapse0x2a6d100();
   input += synapse0x2a6d140();
   input += synapse0x2a6d180();
   input += synapse0x2a6d1c0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6c830() {
   double input = input0x2a6c830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6d200() {
   double input = -0.192413;
   input += synapse0x2a6d540();
   input += synapse0x2a6d580();
   input += synapse0x2a6d5c0();
   input += synapse0x2a6d600();
   input += synapse0x2a6d640();
   input += synapse0x2a6d680();
   input += synapse0x2a6d6c0();
   input += synapse0x2a6d700();
   input += synapse0x2a6d740();
   input += synapse0x2a65900();
   input += synapse0x2a65940();
   input += synapse0x2a65980();
   input += synapse0x2a659c0();
   input += synapse0x2a65a00();
   input += synapse0x2a65a40();
   input += synapse0x2a65a80();
   input += synapse0x2a6d390();
   input += synapse0x2a6d3d0();
   input += synapse0x2a65bd0();
   input += synapse0x2a65c10();
   input += synapse0x2a65c50();
   input += synapse0x2a65c90();
   input += synapse0x2a65cd0();
   input += synapse0x2a65d10();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6d200() {
   double input = input0x2a6d200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a65d50() {
   double input = 0.458913;
   input += synapse0x2a66090();
   input += synapse0x2a660d0();
   input += synapse0x2a66110();
   input += synapse0x2a66150();
   input += synapse0x2a66190();
   input += synapse0x2a661d0();
   input += synapse0x2a66210();
   input += synapse0x2a66250();
   input += synapse0x2a66290();
   input += synapse0x2a662d0();
   input += synapse0x2a66310();
   input += synapse0x2a66350();
   input += synapse0x2a66390();
   input += synapse0x2a663d0();
   input += synapse0x2a66410();
   input += synapse0x2a66450();
   input += synapse0x2a65ee0();
   input += synapse0x2a65f20();
   input += synapse0x2a665a0();
   input += synapse0x2a665e0();
   input += synapse0x2a66620();
   input += synapse0x2a66660();
   input += synapse0x2a666a0();
   input += synapse0x2a666e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a65d50() {
   double input = input0x2a65d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a66720() {
   double input = 0.482807;
   input += synapse0x2a668b0();
   input += synapse0x2a6f940();
   input += synapse0x2a6f980();
   input += synapse0x2a6f9c0();
   input += synapse0x2a6fa00();
   input += synapse0x2a6fa40();
   input += synapse0x2a6fa80();
   input += synapse0x2a6fac0();
   input += synapse0x2a6fb00();
   input += synapse0x2a6fb40();
   input += synapse0x2a6fb80();
   input += synapse0x2a6fbc0();
   input += synapse0x2a6fc00();
   input += synapse0x2a6fc40();
   input += synapse0x2a6fc80();
   input += synapse0x2a6fcc0();
   input += synapse0x2a6f790();
   input += synapse0x2a6f7d0();
   input += synapse0x2a6fe10();
   input += synapse0x2a6fe50();
   input += synapse0x2a6fe90();
   input += synapse0x2a6fed0();
   input += synapse0x2a6ff10();
   input += synapse0x2a6ff50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a66720() {
   double input = input0x2a66720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6ff90() {
   double input = 1.07001;
   input += synapse0x2a702d0();
   input += synapse0x2a70310();
   input += synapse0x2a70350();
   input += synapse0x2a70390();
   input += synapse0x2a703d0();
   input += synapse0x2a70410();
   input += synapse0x2a70450();
   input += synapse0x2a70490();
   input += synapse0x2a704d0();
   input += synapse0x2a70510();
   input += synapse0x2a70550();
   input += synapse0x2a70590();
   input += synapse0x2a705d0();
   input += synapse0x2a70610();
   input += synapse0x2a70650();
   input += synapse0x2a70690();
   input += synapse0x2a70120();
   input += synapse0x2a70160();
   input += synapse0x2a707e0();
   input += synapse0x2a70820();
   input += synapse0x2a70860();
   input += synapse0x2a708a0();
   input += synapse0x2a708e0();
   input += synapse0x2a70920();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6ff90() {
   double input = input0x2a6ff90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a70960() {
   double input = 0.773388;
   input += synapse0x2a70ca0();
   input += synapse0x2a70ce0();
   input += synapse0x2a70d20();
   input += synapse0x2a70d60();
   input += synapse0x2a70da0();
   input += synapse0x2a70de0();
   input += synapse0x2a70e20();
   input += synapse0x2a70e60();
   input += synapse0x2a70ea0();
   input += synapse0x2a70ee0();
   input += synapse0x2a70f20();
   input += synapse0x2a70f60();
   input += synapse0x2a70fa0();
   input += synapse0x2a70fe0();
   input += synapse0x2a71020();
   input += synapse0x2a71060();
   input += synapse0x2a70af0();
   input += synapse0x2a70b30();
   input += synapse0x2a711b0();
   input += synapse0x2a711f0();
   input += synapse0x2a71230();
   input += synapse0x2a71270();
   input += synapse0x2a712b0();
   input += synapse0x2a712f0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a70960() {
   double input = input0x2a70960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a71330() {
   double input = -1.41445;
   input += synapse0x2a71670();
   input += synapse0x2a716b0();
   input += synapse0x2a716f0();
   input += synapse0x2a71730();
   input += synapse0x2a71770();
   input += synapse0x2a717b0();
   input += synapse0x2a717f0();
   input += synapse0x2a71830();
   input += synapse0x2a71870();
   input += synapse0x2a718b0();
   input += synapse0x2a718f0();
   input += synapse0x2a71930();
   input += synapse0x2a71970();
   input += synapse0x2a719b0();
   input += synapse0x2a719f0();
   input += synapse0x2a71a30();
   input += synapse0x2a714c0();
   input += synapse0x2a71500();
   input += synapse0x2a71b80();
   input += synapse0x2a71bc0();
   input += synapse0x2a71c00();
   input += synapse0x2a71c40();
   input += synapse0x2a71c80();
   input += synapse0x2a71cc0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a71330() {
   double input = input0x2a71330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a71d00() {
   double input = 0.378217;
   input += synapse0x2a72040();
   input += synapse0x2a72080();
   input += synapse0x2a720c0();
   input += synapse0x2a72100();
   input += synapse0x2a72140();
   input += synapse0x2a72180();
   input += synapse0x2a721c0();
   input += synapse0x2a72200();
   input += synapse0x2a72240();
   input += synapse0x2a72280();
   input += synapse0x2a722c0();
   input += synapse0x2a72300();
   input += synapse0x2a72340();
   input += synapse0x2a72380();
   input += synapse0x2a723c0();
   input += synapse0x2a72400();
   input += synapse0x2a71e90();
   input += synapse0x2a71ed0();
   input += synapse0x2a72550();
   input += synapse0x2a72590();
   input += synapse0x2a725d0();
   input += synapse0x2a72610();
   input += synapse0x2a72650();
   input += synapse0x2a72690();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a71d00() {
   double input = input0x2a71d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a726d0() {
   double input = -4.34748;
   input += synapse0x2a72a10();
   input += synapse0x2a72a50();
   input += synapse0x2a72a90();
   input += synapse0x2a72ad0();
   input += synapse0x2a72b10();
   input += synapse0x2a72b50();
   input += synapse0x2a72b90();
   input += synapse0x2a72bd0();
   input += synapse0x2a72c10();
   input += synapse0x2a72c50();
   input += synapse0x2a72c90();
   input += synapse0x2a72cd0();
   input += synapse0x2a72d10();
   input += synapse0x2a72d50();
   input += synapse0x2a72d90();
   input += synapse0x2a72dd0();
   input += synapse0x2a72860();
   input += synapse0x2a728a0();
   input += synapse0x2a72f20();
   input += synapse0x2a72f60();
   input += synapse0x2a72fa0();
   input += synapse0x2a72fe0();
   input += synapse0x2a73020();
   input += synapse0x2a73060();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a726d0() {
   double input = input0x2a726d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a730a0() {
   double input = -2.1804;
   input += synapse0x2a733e0();
   input += synapse0x2a73420();
   input += synapse0x2a73460();
   input += synapse0x2a734a0();
   input += synapse0x2a734e0();
   input += synapse0x2a73520();
   input += synapse0x2a73560();
   input += synapse0x2a735a0();
   input += synapse0x2a735e0();
   input += synapse0x2a73620();
   input += synapse0x2a73660();
   input += synapse0x2a736a0();
   input += synapse0x2a736e0();
   input += synapse0x2a73720();
   input += synapse0x2a73760();
   input += synapse0x2a737a0();
   input += synapse0x2a73230();
   input += synapse0x2a73270();
   input += synapse0x2a738f0();
   input += synapse0x2a73930();
   input += synapse0x2a73970();
   input += synapse0x2a739b0();
   input += synapse0x2a739f0();
   input += synapse0x2a73a30();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a730a0() {
   double input = input0x2a730a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a73a70() {
   double input = 0.120136;
   input += synapse0x2a73db0();
   input += synapse0x2a73df0();
   input += synapse0x2a73e30();
   input += synapse0x2a73e70();
   input += synapse0x2a73eb0();
   input += synapse0x2a73ef0();
   input += synapse0x2a73f30();
   input += synapse0x2a73f70();
   input += synapse0x2a73fb0();
   input += synapse0x2a73ff0();
   input += synapse0x2a74030();
   input += synapse0x2a74070();
   input += synapse0x2a740b0();
   input += synapse0x2a740f0();
   input += synapse0x2a74130();
   input += synapse0x2a74170();
   input += synapse0x2a73c00();
   input += synapse0x2a73c40();
   input += synapse0x2a742c0();
   input += synapse0x2a74300();
   input += synapse0x2a74340();
   input += synapse0x2a74380();
   input += synapse0x2a743c0();
   input += synapse0x2a74400();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a73a70() {
   double input = input0x2a73a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a74440() {
   double input = -0.394441;
   input += synapse0x2a74780();
   input += synapse0x2a68d50();
   input += synapse0x2a68d90();
   input += synapse0x2a68dd0();
   input += synapse0x2a69020();
   input += synapse0x2a69060();
   input += synapse0x2a690a0();
   input += synapse0x2a692f0();
   input += synapse0x2a69330();
   input += synapse0x2a69580();
   input += synapse0x2a695c0();
   input += synapse0x2a69600();
   input += synapse0x2a69850();
   input += synapse0x2a69890();
   input += synapse0x2a69ae0();
   input += synapse0x2a69b20();
   input += synapse0x2a745d0();
   input += synapse0x2a74610();
   input += synapse0x2a69c70();
   input += synapse0x2a6a180();
   input += synapse0x2a6a1c0();
   input += synapse0x2a6a200();
   input += synapse0x2a6a450();
   input += synapse0x2a6a490();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a74440() {
   double input = input0x2a74440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6a4d0() {
   double input = -0.799681;
   input += synapse0x2a69d40();
   input += synapse0x2a69d80();
   input += synapse0x2a69dc0();
   input += synapse0x2a69e00();
   input += synapse0x2a6a780();
   input += synapse0x2a76ad0();
   input += synapse0x2a76b10();
   input += synapse0x2a76b50();
   input += synapse0x2a76b90();
   input += synapse0x2a76bd0();
   input += synapse0x2a76c10();
   input += synapse0x2a76c50();
   input += synapse0x2a76c90();
   input += synapse0x2a76cd0();
   input += synapse0x2a76d10();
   input += synapse0x2a76d50();
   input += synapse0x2a6a660();
   input += synapse0x2a6a6a0();
   input += synapse0x2a76ea0();
   input += synapse0x2a76ee0();
   input += synapse0x2a76f20();
   input += synapse0x2a76f60();
   input += synapse0x2a76fa0();
   input += synapse0x2a76fe0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6a4d0() {
   double input = input0x2a6a4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a77020() {
   double input = 0.395967;
   input += synapse0x2a77360();
   input += synapse0x2a773a0();
   input += synapse0x2a773e0();
   input += synapse0x2a77420();
   input += synapse0x2a77460();
   input += synapse0x2a774a0();
   input += synapse0x2a774e0();
   input += synapse0x2a77520();
   input += synapse0x2a77560();
   input += synapse0x2a775a0();
   input += synapse0x2a775e0();
   input += synapse0x2a77620();
   input += synapse0x2a77660();
   input += synapse0x2a776a0();
   input += synapse0x2a776e0();
   input += synapse0x2a77720();
   input += synapse0x2a771b0();
   input += synapse0x2a771f0();
   input += synapse0x2a77870();
   input += synapse0x2a778b0();
   input += synapse0x2a778f0();
   input += synapse0x2a77930();
   input += synapse0x2a77970();
   input += synapse0x2a779b0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a77020() {
   double input = input0x2a77020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a779f0() {
   double input = 0.380436;
   input += synapse0x2a77d30();
   input += synapse0x2a77d70();
   input += synapse0x2a77db0();
   input += synapse0x2a77df0();
   input += synapse0x2a77e30();
   input += synapse0x2a77e70();
   input += synapse0x2a77eb0();
   input += synapse0x2a77ef0();
   input += synapse0x2a77f30();
   input += synapse0x2a77f70();
   input += synapse0x2a77fb0();
   input += synapse0x2a77ff0();
   input += synapse0x2a78030();
   input += synapse0x2a78070();
   input += synapse0x2a780b0();
   input += synapse0x2a780f0();
   input += synapse0x2a77b80();
   input += synapse0x2a77bc0();
   input += synapse0x2a78240();
   input += synapse0x2a78280();
   input += synapse0x2a782c0();
   input += synapse0x2a78300();
   input += synapse0x2a78340();
   input += synapse0x2a78380();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a779f0() {
   double input = input0x2a779f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a783c0() {
   double input = -0.443092;
   input += synapse0x2a78700();
   input += synapse0x2a78740();
   input += synapse0x2a78780();
   input += synapse0x2a787c0();
   input += synapse0x2a78800();
   input += synapse0x2a78840();
   input += synapse0x2a78880();
   input += synapse0x2a788c0();
   input += synapse0x2a78900();
   input += synapse0x2a78940();
   input += synapse0x2a78980();
   input += synapse0x2a789c0();
   input += synapse0x2a78a00();
   input += synapse0x2a78a40();
   input += synapse0x2a78a80();
   input += synapse0x2a78ac0();
   input += synapse0x2a78550();
   input += synapse0x2a78590();
   input += synapse0x2a78c10();
   input += synapse0x2a78c50();
   input += synapse0x2a78c90();
   input += synapse0x2a78cd0();
   input += synapse0x2a78d10();
   input += synapse0x2a78d50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a783c0() {
   double input = input0x2a783c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a78d90() {
   double input = -0.254448;
   input += synapse0x2a790d0();
   input += synapse0x2a79110();
   input += synapse0x2a79150();
   input += synapse0x2a79190();
   input += synapse0x2a791d0();
   input += synapse0x2a79210();
   input += synapse0x2a79250();
   input += synapse0x2a79290();
   input += synapse0x2a792d0();
   input += synapse0x2a79310();
   input += synapse0x2a79350();
   input += synapse0x2a79390();
   input += synapse0x2a793d0();
   input += synapse0x2a79410();
   input += synapse0x2a79450();
   input += synapse0x2a79490();
   input += synapse0x2a78f20();
   input += synapse0x2a78f60();
   input += synapse0x2a795e0();
   input += synapse0x2a79620();
   input += synapse0x2a79660();
   input += synapse0x2a796a0();
   input += synapse0x2a796e0();
   input += synapse0x2a79720();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a78d90() {
   double input = input0x2a78d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a79760() {
   double input = -0.759557;
   input += synapse0x2a79aa0();
   input += synapse0x2a79ae0();
   input += synapse0x2a79b20();
   input += synapse0x2a79b60();
   input += synapse0x2a79ba0();
   input += synapse0x2a79be0();
   input += synapse0x2a79c20();
   input += synapse0x2a79c60();
   input += synapse0x2a79ca0();
   input += synapse0x2a79ce0();
   input += synapse0x2a79d20();
   input += synapse0x2a79d60();
   input += synapse0x2a79da0();
   input += synapse0x2a79de0();
   input += synapse0x2a79e20();
   input += synapse0x2a79e60();
   input += synapse0x2a798f0();
   input += synapse0x2a79930();
   input += synapse0x2a79fb0();
   input += synapse0x2a79ff0();
   input += synapse0x2a7a030();
   input += synapse0x2a7a070();
   input += synapse0x2a7a0b0();
   input += synapse0x2a7a0f0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a79760() {
   double input = input0x2a79760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a7a130() {
   double input = 1.6558;
   input += synapse0x2a7a470();
   input += synapse0x2a7a4b0();
   input += synapse0x2a7a4f0();
   input += synapse0x2a7a530();
   input += synapse0x2a7a570();
   input += synapse0x2a7a5b0();
   input += synapse0x2a7a5f0();
   input += synapse0x2a7a630();
   input += synapse0x2a7a670();
   input += synapse0x2a7a6b0();
   input += synapse0x2a7a6f0();
   input += synapse0x2a7a730();
   input += synapse0x2a7a770();
   input += synapse0x2a7a7b0();
   input += synapse0x2a7a7f0();
   input += synapse0x2a7a830();
   input += synapse0x2a7a2c0();
   input += synapse0x2a7a300();
   input += synapse0x2a7a980();
   input += synapse0x2a7a9c0();
   input += synapse0x2a7aa00();
   input += synapse0x2a7aa40();
   input += synapse0x2a7aa80();
   input += synapse0x2a7aac0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a7a130() {
   double input = input0x2a7a130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a7ab00() {
   double input = 0.366977;
   input += synapse0x2a7ae40();
   input += synapse0x2a7ae80();
   input += synapse0x2a7aec0();
   input += synapse0x2a7af00();
   input += synapse0x2a7af40();
   input += synapse0x2a7af80();
   input += synapse0x2a7afc0();
   input += synapse0x2a7b000();
   input += synapse0x2a7b040();
   input += synapse0x2a7b080();
   input += synapse0x2a7b0c0();
   input += synapse0x2a7b100();
   input += synapse0x2a7b140();
   input += synapse0x2a7b180();
   input += synapse0x2a7b1c0();
   input += synapse0x2a7b200();
   input += synapse0x2a7ac90();
   input += synapse0x2a7acd0();
   input += synapse0x2a7b350();
   input += synapse0x2a7b390();
   input += synapse0x2a7b3d0();
   input += synapse0x2a7b410();
   input += synapse0x2a7b450();
   input += synapse0x2a7b490();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a7ab00() {
   double input = input0x2a7ab00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a7b4d0() {
   double input = 0.740594;
   input += synapse0x2a63f40();
   input += synapse0x2a63f80();
   input += synapse0x2a63fc0();
   input += synapse0x2a64000();
   input += synapse0x2a64040();
   input += synapse0x2a64080();
   input += synapse0x2a640c0();
   input += synapse0x2a64100();
   input += synapse0x2a7bc20();
   input += synapse0x2a7bc60();
   input += synapse0x2a7bca0();
   input += synapse0x2a7bce0();
   input += synapse0x2a7bd20();
   input += synapse0x2a7bd60();
   input += synapse0x2a7bda0();
   input += synapse0x2a7bde0();
   input += synapse0x2a7b660();
   input += synapse0x2a7b6a0();
   input += synapse0x2a7bf30();
   input += synapse0x2a7bf70();
   input += synapse0x2a7bfb0();
   input += synapse0x2a7bff0();
   input += synapse0x2a7c030();
   input += synapse0x2a7c070();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a7b4d0() {
   double input = input0x2a7b4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a7c0b0() {
   double input = 1.126;
   input += synapse0x2a7c3f0();
   input += synapse0x2a7c430();
   input += synapse0x2a7c470();
   input += synapse0x2a7c4b0();
   input += synapse0x2a7c4f0();
   input += synapse0x2a7c530();
   input += synapse0x2a7c570();
   input += synapse0x2a7c5b0();
   input += synapse0x2a7c5f0();
   input += synapse0x2a7c630();
   input += synapse0x2a7c670();
   input += synapse0x2a7c6b0();
   input += synapse0x2a7c6f0();
   input += synapse0x2a7c730();
   input += synapse0x2a7c770();
   input += synapse0x2a7c7b0();
   input += synapse0x2a7c240();
   input += synapse0x2a7c280();
   input += synapse0x2a7c900();
   input += synapse0x2a7c940();
   input += synapse0x2a7c980();
   input += synapse0x2a7c9c0();
   input += synapse0x2a7ca00();
   input += synapse0x2a7ca40();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a7c0b0() {
   double input = input0x2a7c0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a7ca80() {
   double input = 1.46168;
   input += synapse0x2a7cdc0();
   input += synapse0x2a7ce00();
   input += synapse0x2a7ce40();
   input += synapse0x2a7ce80();
   input += synapse0x2a7cec0();
   input += synapse0x2a7cf00();
   input += synapse0x2a7cf40();
   input += synapse0x2a7cf80();
   input += synapse0x2a7cfc0();
   input += synapse0x2a7d000();
   input += synapse0x2a7d040();
   input += synapse0x2a7d080();
   input += synapse0x2a7d0c0();
   input += synapse0x2a7d100();
   input += synapse0x2a7d140();
   input += synapse0x2a7d180();
   input += synapse0x2a7cc10();
   input += synapse0x2a7cc50();
   input += synapse0x2a6d780();
   input += synapse0x2a6d7c0();
   input += synapse0x2a6d800();
   input += synapse0x2a6d840();
   input += synapse0x2a6d880();
   input += synapse0x2a6d8c0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a7ca80() {
   double input = input0x2a7ca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6d900() {
   double input = 0.297077;
   input += synapse0x2a6dc40();
   input += synapse0x2a6dc80();
   input += synapse0x2a6dcc0();
   input += synapse0x2a6dd00();
   input += synapse0x2a6dd40();
   input += synapse0x2a6dd80();
   input += synapse0x2a6ddc0();
   input += synapse0x2a6de00();
   input += synapse0x2a6de40();
   input += synapse0x2a6de80();
   input += synapse0x2a6dec0();
   input += synapse0x2a6df00();
   input += synapse0x2a6df40();
   input += synapse0x2a6df80();
   input += synapse0x2a6dfc0();
   input += synapse0x2a6e000();
   input += synapse0x2a6da90();
   input += synapse0x2a6dad0();
   input += synapse0x2a6e150();
   input += synapse0x2a6e190();
   input += synapse0x2a6e1d0();
   input += synapse0x2a6e210();
   input += synapse0x2a6e250();
   input += synapse0x2a6e290();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6d900() {
   double input = input0x2a6d900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6e2d0() {
   double input = -0.956138;
   input += synapse0x2a6e610();
   input += synapse0x2a6e650();
   input += synapse0x2a6e690();
   input += synapse0x2a6e6d0();
   input += synapse0x2a6e710();
   input += synapse0x2a6e750();
   input += synapse0x2a6e790();
   input += synapse0x2a6e7d0();
   input += synapse0x2a6e810();
   input += synapse0x2a6e850();
   input += synapse0x2a6e890();
   input += synapse0x2a6e8d0();
   input += synapse0x2a6e910();
   input += synapse0x2a6e950();
   input += synapse0x2a6e990();
   input += synapse0x2a6e9d0();
   input += synapse0x2a6e460();
   input += synapse0x2a6e4a0();
   input += synapse0x2a6eb20();
   input += synapse0x2a6eb60();
   input += synapse0x2a6eba0();
   input += synapse0x2a6ebe0();
   input += synapse0x2a6ec20();
   input += synapse0x2a6ec60();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6e2d0() {
   double input = input0x2a6e2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a6eca0() {
   double input = 0.633697;
   input += synapse0x2a6efe0();
   input += synapse0x2a6f020();
   input += synapse0x2a6f060();
   input += synapse0x2a6f0a0();
   input += synapse0x2a6f0e0();
   input += synapse0x2a6f120();
   input += synapse0x2a6f160();
   input += synapse0x2a6f1a0();
   input += synapse0x2a6f1e0();
   input += synapse0x2a6f220();
   input += synapse0x2a6f260();
   input += synapse0x2a6f2a0();
   input += synapse0x2a6f2e0();
   input += synapse0x2a6f320();
   input += synapse0x2a6f360();
   input += synapse0x2a6f3a0();
   input += synapse0x2a6ee30();
   input += synapse0x2a6ee70();
   input += synapse0x2a6f4f0();
   input += synapse0x2a6f530();
   input += synapse0x2a6f570();
   input += synapse0x2a6f5b0();
   input += synapse0x2a6f5f0();
   input += synapse0x2a6f630();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a6eca0() {
   double input = input0x2a6eca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a812e0() {
   double input = -0.414775;
   input += synapse0x2a81500();
   input += synapse0x2a81540();
   input += synapse0x2a81580();
   input += synapse0x2a815c0();
   input += synapse0x2a81600();
   input += synapse0x2a81640();
   input += synapse0x2a81680();
   input += synapse0x2a816c0();
   input += synapse0x2a81700();
   input += synapse0x2a81740();
   input += synapse0x2a81780();
   input += synapse0x2a817c0();
   input += synapse0x2a81800();
   input += synapse0x2a81840();
   input += synapse0x2a81880();
   input += synapse0x2a818c0();
   input += synapse0x2a6f670();
   input += synapse0x2a6f6b0();
   input += synapse0x2a81a10();
   input += synapse0x2a81a50();
   input += synapse0x2a81a90();
   input += synapse0x2a81ad0();
   input += synapse0x2a81b10();
   input += synapse0x2a81b50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a812e0() {
   double input = input0x2a812e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a81b90() {
   double input = 1.34799;
   input += synapse0x2a81ed0();
   input += synapse0x2a81f10();
   input += synapse0x2a81f50();
   input += synapse0x2a81f90();
   input += synapse0x2a81fd0();
   input += synapse0x2a82010();
   input += synapse0x2a82050();
   input += synapse0x2a82090();
   input += synapse0x2a820d0();
   input += synapse0x2a82110();
   input += synapse0x2a82150();
   input += synapse0x2a82190();
   input += synapse0x2a821d0();
   input += synapse0x2a82210();
   input += synapse0x2a82250();
   input += synapse0x2a82290();
   input += synapse0x2a81d20();
   input += synapse0x2a81d60();
   input += synapse0x2a823e0();
   input += synapse0x2a82420();
   input += synapse0x2a82460();
   input += synapse0x2a824a0();
   input += synapse0x2a824e0();
   input += synapse0x2a82520();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a81b90() {
   double input = input0x2a81b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a82560() {
   double input = -0.132602;
   input += synapse0x2a828a0();
   input += synapse0x2a828e0();
   input += synapse0x2a82920();
   input += synapse0x2a82960();
   input += synapse0x2a829a0();
   input += synapse0x2a829e0();
   input += synapse0x2a82a20();
   input += synapse0x2a82a60();
   input += synapse0x2a82aa0();
   input += synapse0x2a82ae0();
   input += synapse0x2a82b20();
   input += synapse0x2a82b60();
   input += synapse0x2a82ba0();
   input += synapse0x2a82be0();
   input += synapse0x2a82c20();
   input += synapse0x2a82c60();
   input += synapse0x2a826f0();
   input += synapse0x2a82730();
   input += synapse0x2a82db0();
   input += synapse0x2a82df0();
   input += synapse0x2a82e30();
   input += synapse0x2a82e70();
   input += synapse0x2a82eb0();
   input += synapse0x2a82ef0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a82560() {
   double input = input0x2a82560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a82f30() {
   double input = 1.07943;
   input += synapse0x2a83270();
   input += synapse0x2a832b0();
   input += synapse0x2a832f0();
   input += synapse0x2a83330();
   input += synapse0x2a83370();
   input += synapse0x2a833b0();
   input += synapse0x2a833f0();
   input += synapse0x2a83430();
   input += synapse0x2a83470();
   input += synapse0x2a834b0();
   input += synapse0x2a834f0();
   input += synapse0x2a83530();
   input += synapse0x2a83570();
   input += synapse0x2a835b0();
   input += synapse0x2a835f0();
   input += synapse0x2a83630();
   input += synapse0x2a830c0();
   input += synapse0x2a83100();
   input += synapse0x2a83780();
   input += synapse0x2a837c0();
   input += synapse0x2a83800();
   input += synapse0x2a83840();
   input += synapse0x2a83880();
   input += synapse0x2a838c0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a82f30() {
   double input = input0x2a82f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8a130() {
   double input = 0.562873;
   input += synapse0x2a5fe60();
   input += synapse0x2a5fea0();
   input += synapse0x2a61370();
   input += synapse0x2a613b0();
   input += synapse0x2a61d40();
   input += synapse0x2a61d80();
   input += synapse0x2a62b10();
   input += synapse0x2a62b50();
   input += synapse0x2a634e0();
   input += synapse0x2a63520();
   input += synapse0x2a63eb0();
   input += synapse0x2a63ef0();
   input += synapse0x2a64990();
   input += synapse0x2a649d0();
   input += synapse0x2a65360();
   input += synapse0x2a653a0();
   input += synapse0x2a62440();
   input += synapse0x2a62480();
   input += synapse0x2a66f10();
   input += synapse0x2a66f50();
   input += synapse0x2a678e0();
   input += synapse0x2a67920();
   input += synapse0x2a682b0();
   input += synapse0x2a682f0();
   input += synapse0x2a68c80();
   input += synapse0x2a68cc0();
   input += synapse0x2a5cdf0();
   input += synapse0x2a5ce30();
   input += synapse0x2a6ad70();
   input += synapse0x2a6adb0();
   input += synapse0x2a6b740();
   input += synapse0x2a6b780();
   input += synapse0x2a6c110();
   input += synapse0x2a6c150();
   input += synapse0x2a6cae0();
   input += synapse0x2a6cb20();
   input += synapse0x2a6d4b0();
   input += synapse0x2a6d4f0();
   input += synapse0x2a66000();
   input += synapse0x2a66040();
   input += synapse0x2a6f8b0();
   input += synapse0x2a6f8f0();
   input += synapse0x2a70240();
   input += synapse0x2a70280();
   input += synapse0x2a70c10();
   input += synapse0x2a70c50();
   input += synapse0x2a715e0();
   input += synapse0x2a71620();
   input += synapse0x2a71fb0();
   input += synapse0x2a71ff0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8a130() {
   double input = input0x2a8a130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8a4d0() {
   double input = 0.740017;
   input += synapse0x2a746f0();
   input += synapse0x2a74730();
   input += synapse0x2a69cb0();
   input += synapse0x2a69cf0();
   input += synapse0x2a772d0();
   input += synapse0x2a77310();
   input += synapse0x2a77ca0();
   input += synapse0x2a77ce0();
   input += synapse0x2a78670();
   input += synapse0x2a786b0();
   input += synapse0x2a79040();
   input += synapse0x2a79080();
   input += synapse0x2a79a10();
   input += synapse0x2a79a50();
   input += synapse0x2a7a3e0();
   input += synapse0x2a7a420();
   input += synapse0x2a7adb0();
   input += synapse0x2a7adf0();
   input += synapse0x2a7b780();
   input += synapse0x2a7b7c0();
   input += synapse0x2a7c360();
   input += synapse0x2a7c3a0();
   input += synapse0x2a7cd30();
   input += synapse0x2a7cd70();
   input += synapse0x2a6dbb0();
   input += synapse0x2a6dbf0();
   input += synapse0x2a6e580();
   input += synapse0x2a6e5c0();
   input += synapse0x2a6ef50();
   input += synapse0x2a6ef90();
   input += synapse0x2a81470();
   input += synapse0x2a814b0();
   input += synapse0x2a81e40();
   input += synapse0x2a81e80();
   input += synapse0x2a82810();
   input += synapse0x2a82850();
   input += synapse0x2a831e0();
   input += synapse0x2a83220();
   input += synapse0x2a5f0d0();
   input += synapse0x2a5f110();
   input += synapse0x2a72980();
   input += synapse0x2a729c0();
   input += synapse0x2a83900();
   input += synapse0x2a83940();
   input += synapse0x2a83980();
   input += synapse0x2a839c0();
   input += synapse0x2a8a870();
   input += synapse0x2a8a8b0();
   input += synapse0x2a8a8f0();
   input += synapse0x2a8a930();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8a4d0() {
   double input = input0x2a8a4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8a970() {
   double input = 0.671699;
   input += synapse0x2a8acb0();
   input += synapse0x2a8acf0();
   input += synapse0x2a8ad30();
   input += synapse0x2a8ad70();
   input += synapse0x2a8adb0();
   input += synapse0x2a8adf0();
   input += synapse0x2a8ae30();
   input += synapse0x2a8ae70();
   input += synapse0x2a8aeb0();
   input += synapse0x2a8aef0();
   input += synapse0x2a8af30();
   input += synapse0x2a8af70();
   input += synapse0x2a8afb0();
   input += synapse0x2a8aff0();
   input += synapse0x2a8b030();
   input += synapse0x2a8b070();
   input += synapse0x2a8ab00();
   input += synapse0x2a8ab40();
   input += synapse0x2a8b1c0();
   input += synapse0x2a8b200();
   input += synapse0x2a8b240();
   input += synapse0x2a8b280();
   input += synapse0x2a8b2c0();
   input += synapse0x2a8b300();
   input += synapse0x2a8b340();
   input += synapse0x2a8b380();
   input += synapse0x2a8b3c0();
   input += synapse0x2a8b400();
   input += synapse0x2a8b440();
   input += synapse0x2a8b480();
   input += synapse0x2a8b4c0();
   input += synapse0x2a8b500();
   input += synapse0x2a8b0b0();
   input += synapse0x2a8b0f0();
   input += synapse0x2a8b130();
   input += synapse0x2a8b170();
   input += synapse0x2a8b750();
   input += synapse0x2a8b790();
   input += synapse0x2a8b7d0();
   input += synapse0x2a8b810();
   input += synapse0x2a8b850();
   input += synapse0x2a8b890();
   input += synapse0x2a8b8d0();
   input += synapse0x2a8b910();
   input += synapse0x2a8b950();
   input += synapse0x2a8b990();
   input += synapse0x2a8b9d0();
   input += synapse0x2a8ba10();
   input += synapse0x2a8ba50();
   input += synapse0x2a8ba90();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8a970() {
   double input = input0x2a8a970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8bad0() {
   double input = -0.450815;
   input += synapse0x2a8be10();
   input += synapse0x2a8be50();
   input += synapse0x2a8be90();
   input += synapse0x2a8bed0();
   input += synapse0x2a8bf10();
   input += synapse0x2a8bf50();
   input += synapse0x2a8bf90();
   input += synapse0x2a8bfd0();
   input += synapse0x2a8c010();
   input += synapse0x2a8c050();
   input += synapse0x2a8c090();
   input += synapse0x2a8c0d0();
   input += synapse0x2a8c110();
   input += synapse0x2a8c150();
   input += synapse0x2a8c190();
   input += synapse0x2a8c1d0();
   input += synapse0x2a8bc60();
   input += synapse0x2a8bca0();
   input += synapse0x2a8c320();
   input += synapse0x2a8c360();
   input += synapse0x2a8c3a0();
   input += synapse0x2a8c3e0();
   input += synapse0x2a8c420();
   input += synapse0x2a8c460();
   input += synapse0x2a8c4a0();
   input += synapse0x2a8c4e0();
   input += synapse0x2a8c520();
   input += synapse0x2a8c560();
   input += synapse0x2a8c5a0();
   input += synapse0x2a8c5e0();
   input += synapse0x2a8c620();
   input += synapse0x2a8c660();
   input += synapse0x2a8c210();
   input += synapse0x2a8c250();
   input += synapse0x2a8c290();
   input += synapse0x2a8c2d0();
   input += synapse0x2a8c8b0();
   input += synapse0x2a8c8f0();
   input += synapse0x2a8c930();
   input += synapse0x2a8c970();
   input += synapse0x2a8c9b0();
   input += synapse0x2a8c9f0();
   input += synapse0x2a8ca30();
   input += synapse0x2a8ca70();
   input += synapse0x2a8cab0();
   input += synapse0x2a8caf0();
   input += synapse0x2a8cb30();
   input += synapse0x2a8cb70();
   input += synapse0x2a8cbb0();
   input += synapse0x2a8cbf0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8bad0() {
   double input = input0x2a8bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8cc30() {
   double input = 0.0488117;
   input += synapse0x2a8cf70();
   input += synapse0x2a8cfb0();
   input += synapse0x2a8cff0();
   input += synapse0x2a8d030();
   input += synapse0x2a8d070();
   input += synapse0x2a8d0b0();
   input += synapse0x2a8d0f0();
   input += synapse0x2a8d130();
   input += synapse0x2a8d170();
   input += synapse0x2a8d1b0();
   input += synapse0x2a8d1f0();
   input += synapse0x2a8d230();
   input += synapse0x2a8d270();
   input += synapse0x2a8d2b0();
   input += synapse0x2a8d2f0();
   input += synapse0x2a8d330();
   input += synapse0x2a8cdc0();
   input += synapse0x2a8ce00();
   input += synapse0x2a8d480();
   input += synapse0x2a8d4c0();
   input += synapse0x2a8d500();
   input += synapse0x2a8d540();
   input += synapse0x2a8d580();
   input += synapse0x2a8d5c0();
   input += synapse0x2a8d600();
   input += synapse0x2a8d640();
   input += synapse0x2a8d680();
   input += synapse0x2a8d6c0();
   input += synapse0x2a8d700();
   input += synapse0x2a8d740();
   input += synapse0x2a8d780();
   input += synapse0x2a8d7c0();
   input += synapse0x2a8d370();
   input += synapse0x2a8d3b0();
   input += synapse0x2a8d3f0();
   input += synapse0x2a8d430();
   input += synapse0x2a8da10();
   input += synapse0x2a8da50();
   input += synapse0x2a8da90();
   input += synapse0x2a8dad0();
   input += synapse0x2a8db10();
   input += synapse0x2a8db50();
   input += synapse0x2a8db90();
   input += synapse0x2a8dbd0();
   input += synapse0x2a8dc10();
   input += synapse0x2a8dc50();
   input += synapse0x2a8dc90();
   input += synapse0x2a8dcd0();
   input += synapse0x2a8dd10();
   input += synapse0x2a8dd50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8cc30() {
   double input = input0x2a8cc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2a8dd90() {
   double input = 3.24957;
   input += synapse0x2a5ee70();
   input += synapse0x2a8dfb0();
   input += synapse0x2a8dff0();
   input += synapse0x2a8e030();
   input += synapse0x2a8e070();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2a8dd90() {
   double input = input0x2a8dd90();
   return (input * 1)+0;
}

double NNfunction_ss_sRcR::synapse0x2823800() {
   return (neuron0x2a59e50()*-0.128811);
}

double NNfunction_ss_sRcR::synapse0x2a59d10() {
   return (neuron0x2a5a190()*-0.161496);
}

double NNfunction_ss_sRcR::synapse0x2a59d50() {
   return (neuron0x2a5a4d0()*-0.0389414);
}

double NNfunction_ss_sRcR::synapse0x2a5f160() {
   return (neuron0x2a5a810()*0.429271);
}

double NNfunction_ss_sRcR::synapse0x2a5f1a0() {
   return (neuron0x2a5ab50()*-0.0643307);
}

double NNfunction_ss_sRcR::synapse0x2a5f1e0() {
   return (neuron0x2a5ae90()*-0.32765);
}

double NNfunction_ss_sRcR::synapse0x2a5f220() {
   return (neuron0x2a5b1d0()*0.0995951);
}

double NNfunction_ss_sRcR::synapse0x2a5f260() {
   return (neuron0x2a5b510()*-0.463263);
}

double NNfunction_ss_sRcR::synapse0x2a5f2a0() {
   return (neuron0x2a5b850()*0.0456528);
}

double NNfunction_ss_sRcR::synapse0x2a5f2e0() {
   return (neuron0x2a5bb90()*-0.507056);
}

double NNfunction_ss_sRcR::synapse0x2a5f320() {
   return (neuron0x2a5bed0()*0.858924);
}

double NNfunction_ss_sRcR::synapse0x2a5f360() {
   return (neuron0x2a5c210()*0.759564);
}

double NNfunction_ss_sRcR::synapse0x2a5f3a0() {
   return (neuron0x2a5c550()*0.310771);
}

double NNfunction_ss_sRcR::synapse0x2a5f3e0() {
   return (neuron0x2a5c890()*0.547538);
}

double NNfunction_ss_sRcR::synapse0x2a5f420() {
   return (neuron0x2a5cbd0()*0.843194);
}

double NNfunction_ss_sRcR::synapse0x2a5f460() {
   return (neuron0x2a5cf10()*0.572074);
}

double NNfunction_ss_sRcR::synapse0x2a59c80() {
   return (neuron0x2a5d250()*0.459953);
}

double NNfunction_ss_sRcR::synapse0x2a59cc0() {
   return (neuron0x2a5d7b0()*0.722147);
}

double NNfunction_ss_sRcR::synapse0x2815010() {
   return (neuron0x2a5d9d0()*-0.926318);
}

double NNfunction_ss_sRcR::synapse0x2815050() {
   return (neuron0x2a5dd10()*-0.272552);
}

double NNfunction_ss_sRcR::synapse0x2a5f6c0() {
   return (neuron0x2a5e050()*0.651731);
}

double NNfunction_ss_sRcR::synapse0x2a5f700() {
   return (neuron0x2a5e390()*0.445075);
}

double NNfunction_ss_sRcR::synapse0x2a5f740() {
   return (neuron0x2a5e6d0()*-0.347635);
}

double NNfunction_ss_sRcR::synapse0x2a5f780() {
   return (neuron0x2a5ea10()*-0.195399);
}

double NNfunction_ss_sRcR::synapse0x2a5fb00() {
   return (neuron0x2a59e50()*0.0349052);
}

double NNfunction_ss_sRcR::synapse0x2a5fb40() {
   return (neuron0x2a5a190()*0.0931329);
}

double NNfunction_ss_sRcR::synapse0x2a5fb80() {
   return (neuron0x2a5a4d0()*0.201875);
}

double NNfunction_ss_sRcR::synapse0x2a5fbc0() {
   return (neuron0x2a5a810()*0.0481244);
}

double NNfunction_ss_sRcR::synapse0x2a5fc00() {
   return (neuron0x2a5ab50()*0.332682);
}

double NNfunction_ss_sRcR::synapse0x2a5fc40() {
   return (neuron0x2a5ae90()*0.828042);
}

double NNfunction_ss_sRcR::synapse0x2a5fc80() {
   return (neuron0x2a5b1d0()*0.435321);
}

double NNfunction_ss_sRcR::synapse0x2a5fcc0() {
   return (neuron0x2a5b510()*-0.48961);
}

double NNfunction_ss_sRcR::synapse0x2a5fd00() {
   return (neuron0x2a5b850()*-0.740476);
}

double NNfunction_ss_sRcR::synapse0x2a5f5b0() {
   return (neuron0x2a5bb90()*1.31052);
}

double NNfunction_ss_sRcR::synapse0x2a5f5f0() {
   return (neuron0x2a5bed0()*-0.298716);
}

double NNfunction_ss_sRcR::synapse0x2a5f630() {
   return (neuron0x2a5c210()*-0.12305);
}

double NNfunction_ss_sRcR::synapse0x2a5f670() {
   return (neuron0x2a5c550()*0.72042);
}

double NNfunction_ss_sRcR::synapse0x2a5ff50() {
   return (neuron0x2a5c890()*-0.228833);
}

double NNfunction_ss_sRcR::synapse0x2a5ff90() {
   return (neuron0x2a5cbd0()*-0.292959);
}

double NNfunction_ss_sRcR::synapse0x2a5ffd0() {
   return (neuron0x2a5cf10()*0.185228);
}

double NNfunction_ss_sRcR::synapse0x2a5f950() {
   return (neuron0x2a5d250()*-0.631868);
}

double NNfunction_ss_sRcR::synapse0x2a5f990() {
   return (neuron0x2a5d7b0()*0.103859);
}

double NNfunction_ss_sRcR::synapse0x2a60120() {
   return (neuron0x2a5d9d0()*0.488193);
}

double NNfunction_ss_sRcR::synapse0x2a60160() {
   return (neuron0x2a5dd10()*-0.255185);
}

double NNfunction_ss_sRcR::synapse0x2a601a0() {
   return (neuron0x2a5e050()*0.022644);
}

double NNfunction_ss_sRcR::synapse0x2a601e0() {
   return (neuron0x2a5e390()*0.830848);
}

double NNfunction_ss_sRcR::synapse0x2a60220() {
   return (neuron0x2a5e6d0()*-0.966004);
}

double NNfunction_ss_sRcR::synapse0x2a60260() {
   return (neuron0x2a5ea10()*-0.223154);
}

double NNfunction_ss_sRcR::synapse0x2a605e0() {
   return (neuron0x2a59e50()*0.486111);
}

double NNfunction_ss_sRcR::synapse0x2a60620() {
   return (neuron0x2a5a190()*-0.497472);
}

double NNfunction_ss_sRcR::synapse0x2a60660() {
   return (neuron0x2a5a4d0()*-0.0803618);
}

double NNfunction_ss_sRcR::synapse0x2a606a0() {
   return (neuron0x2a5a810()*-0.484542);
}

double NNfunction_ss_sRcR::synapse0x2a606e0() {
   return (neuron0x2a5ab50()*0.296862);
}

double NNfunction_ss_sRcR::synapse0x2a60720() {
   return (neuron0x2a5ae90()*-1.1593);
}

double NNfunction_ss_sRcR::synapse0x2a60760() {
   return (neuron0x2a5b1d0()*0.665127);
}

double NNfunction_ss_sRcR::synapse0x2a607a0() {
   return (neuron0x2a5b510()*0.57637);
}

double NNfunction_ss_sRcR::synapse0x2a607e0() {
   return (neuron0x2a5b850()*0.00417473);
}

double NNfunction_ss_sRcR::synapse0x2a60820() {
   return (neuron0x2a5bb90()*0.270821);
}

double NNfunction_ss_sRcR::synapse0x2a60860() {
   return (neuron0x2a5bed0()*1.11542);
}

double NNfunction_ss_sRcR::synapse0x2a608a0() {
   return (neuron0x2a5c210()*0.239999);
}

double NNfunction_ss_sRcR::synapse0x2a608e0() {
   return (neuron0x2a5c550()*0.617066);
}

double NNfunction_ss_sRcR::synapse0x2a60920() {
   return (neuron0x2a5c890()*0.400071);
}

double NNfunction_ss_sRcR::synapse0x2a60960() {
   return (neuron0x2a5cbd0()*-0.410126);
}

double NNfunction_ss_sRcR::synapse0x2a609a0() {
   return (neuron0x2a5cf10()*-0.0403042);
}

double NNfunction_ss_sRcR::synapse0x2a60430() {
   return (neuron0x2a5d250()*-0.754891);
}

double NNfunction_ss_sRcR::synapse0x2a60470() {
   return (neuron0x2a5d7b0()*-0.0979949);
}

double NNfunction_ss_sRcR::synapse0x2822f10() {
   return (neuron0x2a5d9d0()*-1.02287);
}

double NNfunction_ss_sRcR::synapse0x2822f50() {
   return (neuron0x2a5dd10()*0.0332107);
}

double NNfunction_ss_sRcR::synapse0x2a48ee0() {
   return (neuron0x2a5e050()*-0.146666);
}

double NNfunction_ss_sRcR::synapse0x2a48f20() {
   return (neuron0x2a5e390()*0.0282767);
}

double NNfunction_ss_sRcR::synapse0x2a48f60() {
   return (neuron0x2a5e6d0()*0.39436);
}

double NNfunction_ss_sRcR::synapse0x2a59d90() {
   return (neuron0x2a5ea10()*0.285912);
}

double NNfunction_ss_sRcR::synapse0x2a5fef0() {
   return (neuron0x2a59e50()*0.0138981);
}

double NNfunction_ss_sRcR::synapse0x2a59dd0() {
   return (neuron0x2a5a190()*0.454606);
}

double NNfunction_ss_sRcR::synapse0x2a59e10() {
   return (neuron0x2a5a4d0()*0.199382);
}

double NNfunction_ss_sRcR::synapse0x2a60af0() {
   return (neuron0x2a5a810()*0.147473);
}

double NNfunction_ss_sRcR::synapse0x2a60b30() {
   return (neuron0x2a5ab50()*0.593366);
}

double NNfunction_ss_sRcR::synapse0x2a60b70() {
   return (neuron0x2a5ae90()*0.101085);
}

double NNfunction_ss_sRcR::synapse0x2a60bb0() {
   return (neuron0x2a5b1d0()*-0.207821);
}

double NNfunction_ss_sRcR::synapse0x2a60bf0() {
   return (neuron0x2a5b510()*0.182272);
}

double NNfunction_ss_sRcR::synapse0x2a60c30() {
   return (neuron0x2a5b850()*0.0229458);
}

double NNfunction_ss_sRcR::synapse0x2a60c70() {
   return (neuron0x2a5bb90()*0.759399);
}

double NNfunction_ss_sRcR::synapse0x2a60cb0() {
   return (neuron0x2a5bed0()*0.400312);
}

double NNfunction_ss_sRcR::synapse0x2a60cf0() {
   return (neuron0x2a5c210()*-0.286311);
}

double NNfunction_ss_sRcR::synapse0x2a60d30() {
   return (neuron0x2a5c550()*-1.02745);
}

double NNfunction_ss_sRcR::synapse0x2a60d70() {
   return (neuron0x2a5c890()*-0.0126065);
}

double NNfunction_ss_sRcR::synapse0x2a60db0() {
   return (neuron0x2a5cbd0()*0.778853);
}

double NNfunction_ss_sRcR::synapse0x2a60df0() {
   return (neuron0x2a5cf10()*-0.0798686);
}

double NNfunction_ss_sRcR::synapse0x2a5fd40() {
   return (neuron0x2a5d250()*0.0441031);
}

double NNfunction_ss_sRcR::synapse0x2a5fd80() {
   return (neuron0x2a5d7b0()*1.14911);
}

double NNfunction_ss_sRcR::synapse0x2a60f40() {
   return (neuron0x2a5d9d0()*0.643661);
}

double NNfunction_ss_sRcR::synapse0x2a60f80() {
   return (neuron0x2a5dd10()*-0.430309);
}

double NNfunction_ss_sRcR::synapse0x2a60fc0() {
   return (neuron0x2a5e050()*1.09638);
}

double NNfunction_ss_sRcR::synapse0x2a61000() {
   return (neuron0x2a5e390()*-0.425493);
}

double NNfunction_ss_sRcR::synapse0x2a61040() {
   return (neuron0x2a5e6d0()*0.593924);
}

double NNfunction_ss_sRcR::synapse0x2a61080() {
   return (neuron0x2a5ea10()*0.125337);
}

double NNfunction_ss_sRcR::synapse0x2a61400() {
   return (neuron0x2a59e50()*0.422913);
}

double NNfunction_ss_sRcR::synapse0x2a61440() {
   return (neuron0x2a5a190()*0.421627);
}

double NNfunction_ss_sRcR::synapse0x2a61480() {
   return (neuron0x2a5a4d0()*0.292888);
}

double NNfunction_ss_sRcR::synapse0x2a614c0() {
   return (neuron0x2a5a810()*-0.204941);
}

double NNfunction_ss_sRcR::synapse0x2a61500() {
   return (neuron0x2a5ab50()*1.06654);
}

double NNfunction_ss_sRcR::synapse0x2a61540() {
   return (neuron0x2a5ae90()*0.832476);
}

double NNfunction_ss_sRcR::synapse0x2a61580() {
   return (neuron0x2a5b1d0()*-0.0623226);
}

double NNfunction_ss_sRcR::synapse0x2a615c0() {
   return (neuron0x2a5b510()*0.787961);
}

double NNfunction_ss_sRcR::synapse0x2a61600() {
   return (neuron0x2a5b850()*0.173176);
}

double NNfunction_ss_sRcR::synapse0x2a61640() {
   return (neuron0x2a5bb90()*0.0226283);
}

double NNfunction_ss_sRcR::synapse0x2a61680() {
   return (neuron0x2a5bed0()*-0.902618);
}

double NNfunction_ss_sRcR::synapse0x2a616c0() {
   return (neuron0x2a5c210()*0.375396);
}

double NNfunction_ss_sRcR::synapse0x2a61700() {
   return (neuron0x2a5c550()*0.0401263);
}

double NNfunction_ss_sRcR::synapse0x2a61740() {
   return (neuron0x2a5c890()*-0.285284);
}

double NNfunction_ss_sRcR::synapse0x2a61780() {
   return (neuron0x2a5cbd0()*-0.347173);
}

double NNfunction_ss_sRcR::synapse0x2a617c0() {
   return (neuron0x2a5cf10()*-0.931069);
}

double NNfunction_ss_sRcR::synapse0x2a61250() {
   return (neuron0x2a5d250()*-0.420481);
}

double NNfunction_ss_sRcR::synapse0x2a61290() {
   return (neuron0x2a5d7b0()*0.412996);
}

double NNfunction_ss_sRcR::synapse0x2a61910() {
   return (neuron0x2a5d9d0()*0.532823);
}

double NNfunction_ss_sRcR::synapse0x2a61950() {
   return (neuron0x2a5dd10()*-0.41159);
}

double NNfunction_ss_sRcR::synapse0x2a61990() {
   return (neuron0x2a5e050()*-1.03787);
}

double NNfunction_ss_sRcR::synapse0x2a619d0() {
   return (neuron0x2a5e390()*0.662158);
}

double NNfunction_ss_sRcR::synapse0x2a61a10() {
   return (neuron0x2a5e6d0()*0.299134);
}

double NNfunction_ss_sRcR::synapse0x2a61a50() {
   return (neuron0x2a5ea10()*0.562866);
}

double NNfunction_ss_sRcR::synapse0x2a61dd0() {
   return (neuron0x2a59e50()*0.0170632);
}

double NNfunction_ss_sRcR::synapse0x2a61e10() {
   return (neuron0x2a5a190()*0.25151);
}

double NNfunction_ss_sRcR::synapse0x2a61e50() {
   return (neuron0x2a5a4d0()*-0.0125292);
}

double NNfunction_ss_sRcR::synapse0x2a61e90() {
   return (neuron0x2a5a810()*0.0675756);
}

double NNfunction_ss_sRcR::synapse0x2a61ed0() {
   return (neuron0x2a5ab50()*0.00140601);
}

double NNfunction_ss_sRcR::synapse0x2a61f10() {
   return (neuron0x2a5ae90()*-0.0101524);
}

double NNfunction_ss_sRcR::synapse0x2a61f50() {
   return (neuron0x2a5b1d0()*0.0139921);
}

double NNfunction_ss_sRcR::synapse0x2a61f90() {
   return (neuron0x2a5b510()*0.0322994);
}

double NNfunction_ss_sRcR::synapse0x2a61fd0() {
   return (neuron0x2a5b850()*0.00644803);
}

double NNfunction_ss_sRcR::synapse0x2823260() {
   return (neuron0x2a5bb90()*-0.0274843);
}

double NNfunction_ss_sRcR::synapse0x28232a0() {
   return (neuron0x2a5bed0()*-0.00646202);
}

double NNfunction_ss_sRcR::synapse0x28232e0() {
   return (neuron0x2a5c210()*0.26266);
}

double NNfunction_ss_sRcR::synapse0x2823320() {
   return (neuron0x2a5c550()*0.279951);
}

double NNfunction_ss_sRcR::synapse0x2823360() {
   return (neuron0x2a5c890()*-0.053305);
}

double NNfunction_ss_sRcR::synapse0x28233a0() {
   return (neuron0x2a5cbd0()*0.117723);
}

double NNfunction_ss_sRcR::synapse0x28233e0() {
   return (neuron0x2a5cf10()*-0.101037);
}

double NNfunction_ss_sRcR::synapse0x2a61c20() {
   return (neuron0x2a5d250()*-0.00609377);
}

double NNfunction_ss_sRcR::synapse0x2a61c60() {
   return (neuron0x2a5d7b0()*0.164455);
}

double NNfunction_ss_sRcR::synapse0x2823530() {
   return (neuron0x2a5d9d0()*-0.169925);
}

double NNfunction_ss_sRcR::synapse0x2823570() {
   return (neuron0x2a5dd10()*-0.0176205);
}

double NNfunction_ss_sRcR::synapse0x28235b0() {
   return (neuron0x2a5e050()*-0.0332824);
}

double NNfunction_ss_sRcR::synapse0x28235f0() {
   return (neuron0x2a5e390()*-0.015694);
}

double NNfunction_ss_sRcR::synapse0x2823630() {
   return (neuron0x2a5e6d0()*0.0111528);
}

double NNfunction_ss_sRcR::synapse0x2a62820() {
   return (neuron0x2a5ea10()*0.00558712);
}

double NNfunction_ss_sRcR::synapse0x2a62ba0() {
   return (neuron0x2a59e50()*0.169788);
}

double NNfunction_ss_sRcR::synapse0x2a62be0() {
   return (neuron0x2a5a190()*-0.571502);
}

double NNfunction_ss_sRcR::synapse0x2a62c20() {
   return (neuron0x2a5a4d0()*-0.0592719);
}

double NNfunction_ss_sRcR::synapse0x2a62c60() {
   return (neuron0x2a5a810()*-0.090314);
}

double NNfunction_ss_sRcR::synapse0x2a62ca0() {
   return (neuron0x2a5ab50()*-0.290989);
}

double NNfunction_ss_sRcR::synapse0x2a62ce0() {
   return (neuron0x2a5ae90()*0.781673);
}

double NNfunction_ss_sRcR::synapse0x2a62d20() {
   return (neuron0x2a5b1d0()*-0.121042);
}

double NNfunction_ss_sRcR::synapse0x2a62d60() {
   return (neuron0x2a5b510()*0.437822);
}

double NNfunction_ss_sRcR::synapse0x2a62da0() {
   return (neuron0x2a5b850()*-0.543452);
}

double NNfunction_ss_sRcR::synapse0x2a62de0() {
   return (neuron0x2a5bb90()*-0.847622);
}

double NNfunction_ss_sRcR::synapse0x2a62e20() {
   return (neuron0x2a5bed0()*-0.272672);
}

double NNfunction_ss_sRcR::synapse0x2a62e60() {
   return (neuron0x2a5c210()*-1.09552);
}

double NNfunction_ss_sRcR::synapse0x2a62ea0() {
   return (neuron0x2a5c550()*-0.0435692);
}

double NNfunction_ss_sRcR::synapse0x2a62ee0() {
   return (neuron0x2a5c890()*-0.741815);
}

double NNfunction_ss_sRcR::synapse0x2a62f20() {
   return (neuron0x2a5cbd0()*-0.201998);
}

double NNfunction_ss_sRcR::synapse0x2a62f60() {
   return (neuron0x2a5cf10()*-0.15643);
}

double NNfunction_ss_sRcR::synapse0x2a629f0() {
   return (neuron0x2a5d250()*-0.0644916);
}

double NNfunction_ss_sRcR::synapse0x2a62a30() {
   return (neuron0x2a5d7b0()*0.304211);
}

double NNfunction_ss_sRcR::synapse0x2a630b0() {
   return (neuron0x2a5d9d0()*-1.25725);
}

double NNfunction_ss_sRcR::synapse0x2a630f0() {
   return (neuron0x2a5dd10()*-0.0355043);
}

double NNfunction_ss_sRcR::synapse0x2a63130() {
   return (neuron0x2a5e050()*-0.341267);
}

double NNfunction_ss_sRcR::synapse0x2a63170() {
   return (neuron0x2a5e390()*0.389734);
}

double NNfunction_ss_sRcR::synapse0x2a631b0() {
   return (neuron0x2a5e6d0()*-0.0255489);
}

double NNfunction_ss_sRcR::synapse0x2a631f0() {
   return (neuron0x2a5ea10()*-0.0808548);
}

double NNfunction_ss_sRcR::synapse0x2a63570() {
   return (neuron0x2a59e50()*0.348022);
}

double NNfunction_ss_sRcR::synapse0x2a635b0() {
   return (neuron0x2a5a190()*-0.61542);
}

double NNfunction_ss_sRcR::synapse0x2a635f0() {
   return (neuron0x2a5a4d0()*1.00415);
}

double NNfunction_ss_sRcR::synapse0x2a63630() {
   return (neuron0x2a5a810()*0.237563);
}

double NNfunction_ss_sRcR::synapse0x2a63670() {
   return (neuron0x2a5ab50()*0.79477);
}

double NNfunction_ss_sRcR::synapse0x2a636b0() {
   return (neuron0x2a5ae90()*-0.639097);
}

double NNfunction_ss_sRcR::synapse0x2a636f0() {
   return (neuron0x2a5b1d0()*0.466603);
}

double NNfunction_ss_sRcR::synapse0x2a63730() {
   return (neuron0x2a5b510()*0.0822551);
}

double NNfunction_ss_sRcR::synapse0x2a63770() {
   return (neuron0x2a5b850()*0.347185);
}

double NNfunction_ss_sRcR::synapse0x2a637b0() {
   return (neuron0x2a5bb90()*-0.153468);
}

double NNfunction_ss_sRcR::synapse0x2a637f0() {
   return (neuron0x2a5bed0()*0.483812);
}

double NNfunction_ss_sRcR::synapse0x2a63830() {
   return (neuron0x2a5c210()*-0.644179);
}

double NNfunction_ss_sRcR::synapse0x2a63870() {
   return (neuron0x2a5c550()*-0.641395);
}

double NNfunction_ss_sRcR::synapse0x2a638b0() {
   return (neuron0x2a5c890()*0.286679);
}

double NNfunction_ss_sRcR::synapse0x2a638f0() {
   return (neuron0x2a5cbd0()*-0.450989);
}

double NNfunction_ss_sRcR::synapse0x2a63930() {
   return (neuron0x2a5cf10()*0.137204);
}

double NNfunction_ss_sRcR::synapse0x2a633c0() {
   return (neuron0x2a5d250()*-0.698229);
}

double NNfunction_ss_sRcR::synapse0x2a63400() {
   return (neuron0x2a5d7b0()*-0.128142);
}

double NNfunction_ss_sRcR::synapse0x2a63a80() {
   return (neuron0x2a5d9d0()*0.7325);
}

double NNfunction_ss_sRcR::synapse0x2a63ac0() {
   return (neuron0x2a5dd10()*-0.220594);
}

double NNfunction_ss_sRcR::synapse0x2a63b00() {
   return (neuron0x2a5e050()*-0.0298581);
}

double NNfunction_ss_sRcR::synapse0x2a63b40() {
   return (neuron0x2a5e390()*0.490132);
}

double NNfunction_ss_sRcR::synapse0x2a63b80() {
   return (neuron0x2a5e6d0()*-0.290394);
}

double NNfunction_ss_sRcR::synapse0x2a63bc0() {
   return (neuron0x2a5ea10()*-0.0259584);
}

double NNfunction_ss_sRcR::synapse0x2a5d6a0() {
   return (neuron0x2a59e50()*-0.313936);
}

double NNfunction_ss_sRcR::synapse0x2a5d6e0() {
   return (neuron0x2a5a190()*-0.0846063);
}

double NNfunction_ss_sRcR::synapse0x2a5d720() {
   return (neuron0x2a5a4d0()*0.714143);
}

double NNfunction_ss_sRcR::synapse0x2a5d760() {
   return (neuron0x2a5a810()*0.14249);
}

double NNfunction_ss_sRcR::synapse0x2a64150() {
   return (neuron0x2a5ab50()*-0.395754);
}

double NNfunction_ss_sRcR::synapse0x2a64190() {
   return (neuron0x2a5ae90()*0.131601);
}

double NNfunction_ss_sRcR::synapse0x2a641d0() {
   return (neuron0x2a5b1d0()*0.106483);
}

double NNfunction_ss_sRcR::synapse0x2a64210() {
   return (neuron0x2a5b510()*-0.379612);
}

double NNfunction_ss_sRcR::synapse0x2a64250() {
   return (neuron0x2a5b850()*-0.1037);
}

double NNfunction_ss_sRcR::synapse0x2a64290() {
   return (neuron0x2a5bb90()*0.0699042);
}

double NNfunction_ss_sRcR::synapse0x2a642d0() {
   return (neuron0x2a5bed0()*0.254435);
}

double NNfunction_ss_sRcR::synapse0x2a64310() {
   return (neuron0x2a5c210()*-0.0927122);
}

double NNfunction_ss_sRcR::synapse0x2a64350() {
   return (neuron0x2a5c550()*-0.611478);
}

double NNfunction_ss_sRcR::synapse0x2a64390() {
   return (neuron0x2a5c890()*0.414019);
}

double NNfunction_ss_sRcR::synapse0x2a643d0() {
   return (neuron0x2a5cbd0()*0.361367);
}

double NNfunction_ss_sRcR::synapse0x2a64410() {
   return (neuron0x2a5cf10()*-0.0197784);
}

double NNfunction_ss_sRcR::synapse0x2a63d90() {
   return (neuron0x2a5d250()*0.758456);
}

double NNfunction_ss_sRcR::synapse0x2a63dd0() {
   return (neuron0x2a5d7b0()*-0.347596);
}

double NNfunction_ss_sRcR::synapse0x2a64560() {
   return (neuron0x2a5d9d0()*-0.174334);
}

double NNfunction_ss_sRcR::synapse0x2a645a0() {
   return (neuron0x2a5dd10()*0.126493);
}

double NNfunction_ss_sRcR::synapse0x2a645e0() {
   return (neuron0x2a5e050()*1.27217);
}

double NNfunction_ss_sRcR::synapse0x2a64620() {
   return (neuron0x2a5e390()*-0.199076);
}

double NNfunction_ss_sRcR::synapse0x2a64660() {
   return (neuron0x2a5e6d0()*0.475077);
}

double NNfunction_ss_sRcR::synapse0x2a646a0() {
   return (neuron0x2a5ea10()*0.183505);
}

double NNfunction_ss_sRcR::synapse0x2a64a20() {
   return (neuron0x2a59e50()*-0.0872262);
}

double NNfunction_ss_sRcR::synapse0x2a64a60() {
   return (neuron0x2a5a190()*0.384702);
}

double NNfunction_ss_sRcR::synapse0x2a64aa0() {
   return (neuron0x2a5a4d0()*0.607275);
}

double NNfunction_ss_sRcR::synapse0x2a64ae0() {
   return (neuron0x2a5a810()*1.15352);
}

double NNfunction_ss_sRcR::synapse0x2a64b20() {
   return (neuron0x2a5ab50()*0.35525);
}

double NNfunction_ss_sRcR::synapse0x2a64b60() {
   return (neuron0x2a5ae90()*-0.0463739);
}

double NNfunction_ss_sRcR::synapse0x2a64ba0() {
   return (neuron0x2a5b1d0()*0.283238);
}

double NNfunction_ss_sRcR::synapse0x2a64be0() {
   return (neuron0x2a5b510()*-0.507896);
}

double NNfunction_ss_sRcR::synapse0x2a64c20() {
   return (neuron0x2a5b850()*-0.190789);
}

double NNfunction_ss_sRcR::synapse0x2a64c60() {
   return (neuron0x2a5bb90()*-0.761333);
}

double NNfunction_ss_sRcR::synapse0x2a64ca0() {
   return (neuron0x2a5bed0()*0.582959);
}

double NNfunction_ss_sRcR::synapse0x2a64ce0() {
   return (neuron0x2a5c210()*0.0835456);
}

double NNfunction_ss_sRcR::synapse0x2a64d20() {
   return (neuron0x2a5c550()*0.363654);
}

double NNfunction_ss_sRcR::synapse0x2a64d60() {
   return (neuron0x2a5c890()*0.465158);
}

double NNfunction_ss_sRcR::synapse0x2a64da0() {
   return (neuron0x2a5cbd0()*0.497554);
}

double NNfunction_ss_sRcR::synapse0x2a64de0() {
   return (neuron0x2a5cf10()*0.721409);
}

double NNfunction_ss_sRcR::synapse0x2a64870() {
   return (neuron0x2a5d250()*0.467471);
}

double NNfunction_ss_sRcR::synapse0x2a648b0() {
   return (neuron0x2a5d7b0()*0.682619);
}

double NNfunction_ss_sRcR::synapse0x2a64f30() {
   return (neuron0x2a5d9d0()*0.142557);
}

double NNfunction_ss_sRcR::synapse0x2a64f70() {
   return (neuron0x2a5dd10()*0.349685);
}

double NNfunction_ss_sRcR::synapse0x2a64fb0() {
   return (neuron0x2a5e050()*-0.385306);
}

double NNfunction_ss_sRcR::synapse0x2a64ff0() {
   return (neuron0x2a5e390()*0.45222);
}

double NNfunction_ss_sRcR::synapse0x2a65030() {
   return (neuron0x2a5e6d0()*-0.227064);
}

double NNfunction_ss_sRcR::synapse0x2a65070() {
   return (neuron0x2a5ea10()*0.0693436);
}

double NNfunction_ss_sRcR::synapse0x2a653f0() {
   return (neuron0x2a59e50()*0.0209604);
}

double NNfunction_ss_sRcR::synapse0x2a65430() {
   return (neuron0x2a5a190()*-0.00492271);
}

double NNfunction_ss_sRcR::synapse0x2a65470() {
   return (neuron0x2a5a4d0()*0.0295152);
}

double NNfunction_ss_sRcR::synapse0x2a654b0() {
   return (neuron0x2a5a810()*0.51967);
}

double NNfunction_ss_sRcR::synapse0x2a654f0() {
   return (neuron0x2a5ab50()*0.0234834);
}

double NNfunction_ss_sRcR::synapse0x2a65530() {
   return (neuron0x2a5ae90()*0.0203965);
}

double NNfunction_ss_sRcR::synapse0x2a65570() {
   return (neuron0x2a5b1d0()*0.00947474);
}

double NNfunction_ss_sRcR::synapse0x2a655b0() {
   return (neuron0x2a5b510()*0.00874264);
}

double NNfunction_ss_sRcR::synapse0x2a655f0() {
   return (neuron0x2a5b850()*-0.00679847);
}

double NNfunction_ss_sRcR::synapse0x2a65630() {
   return (neuron0x2a5bb90()*-0.013841);
}

double NNfunction_ss_sRcR::synapse0x2a65670() {
   return (neuron0x2a5bed0()*-0.0122388);
}

double NNfunction_ss_sRcR::synapse0x2a656b0() {
   return (neuron0x2a5c210()*-0.0459181);
}

double NNfunction_ss_sRcR::synapse0x2a656f0() {
   return (neuron0x2a5c550()*-0.0597177);
}

double NNfunction_ss_sRcR::synapse0x2a65730() {
   return (neuron0x2a5c890()*-0.00245143);
}

double NNfunction_ss_sRcR::synapse0x2a65770() {
   return (neuron0x2a5cbd0()*-0.0135356);
}

double NNfunction_ss_sRcR::synapse0x2a657b0() {
   return (neuron0x2a5cf10()*-0.455507);
}

double NNfunction_ss_sRcR::synapse0x2a65240() {
   return (neuron0x2a5d250()*0.0184527);
}

double NNfunction_ss_sRcR::synapse0x2a65280() {
   return (neuron0x2a5d7b0()*0.000139623);
}

double NNfunction_ss_sRcR::synapse0x2a62010() {
   return (neuron0x2a5d9d0()*0.371027);
}

double NNfunction_ss_sRcR::synapse0x2a62050() {
   return (neuron0x2a5dd10()*-0.023528);
}

double NNfunction_ss_sRcR::synapse0x2a62090() {
   return (neuron0x2a5e050()*-0.00509817);
}

double NNfunction_ss_sRcR::synapse0x2a620d0() {
   return (neuron0x2a5e390()*0.00495699);
}

double NNfunction_ss_sRcR::synapse0x2a62110() {
   return (neuron0x2a5e6d0()*-0.0104339);
}

double NNfunction_ss_sRcR::synapse0x2a62150() {
   return (neuron0x2a5ea10()*-0.0227502);
}

double NNfunction_ss_sRcR::synapse0x2a624d0() {
   return (neuron0x2a59e50()*0.610426);
}

double NNfunction_ss_sRcR::synapse0x2a62510() {
   return (neuron0x2a5a190()*0.324333);
}

double NNfunction_ss_sRcR::synapse0x2a62550() {
   return (neuron0x2a5a4d0()*-1.03157);
}

double NNfunction_ss_sRcR::synapse0x2a62590() {
   return (neuron0x2a5a810()*0.0630603);
}

double NNfunction_ss_sRcR::synapse0x2a625d0() {
   return (neuron0x2a5ab50()*-0.196437);
}

double NNfunction_ss_sRcR::synapse0x2a62610() {
   return (neuron0x2a5ae90()*0.379733);
}

double NNfunction_ss_sRcR::synapse0x2a62650() {
   return (neuron0x2a5b1d0()*-0.935633);
}

double NNfunction_ss_sRcR::synapse0x2a62690() {
   return (neuron0x2a5b510()*0.0782187);
}

double NNfunction_ss_sRcR::synapse0x2a626d0() {
   return (neuron0x2a5b850()*0.387994);
}

double NNfunction_ss_sRcR::synapse0x2a62710() {
   return (neuron0x2a5bb90()*0.731159);
}

double NNfunction_ss_sRcR::synapse0x2a62750() {
   return (neuron0x2a5bed0()*0.753504);
}

double NNfunction_ss_sRcR::synapse0x2a62790() {
   return (neuron0x2a5c210()*-0.287239);
}

double NNfunction_ss_sRcR::synapse0x2a627d0() {
   return (neuron0x2a5c550()*-0.218028);
}

double NNfunction_ss_sRcR::synapse0x2a66910() {
   return (neuron0x2a5c890()*0.265268);
}

double NNfunction_ss_sRcR::synapse0x2a66950() {
   return (neuron0x2a5cbd0()*-0.251703);
}

double NNfunction_ss_sRcR::synapse0x2a66990() {
   return (neuron0x2a5cf10()*-0.372703);
}

double NNfunction_ss_sRcR::synapse0x2a62320() {
   return (neuron0x2a5d250()*-0.0439724);
}

double NNfunction_ss_sRcR::synapse0x2a62360() {
   return (neuron0x2a5d7b0()*-0.0859605);
}

double NNfunction_ss_sRcR::synapse0x2a66ae0() {
   return (neuron0x2a5d9d0()*-0.202598);
}

double NNfunction_ss_sRcR::synapse0x2a66b20() {
   return (neuron0x2a5dd10()*1.42948);
}

double NNfunction_ss_sRcR::synapse0x2a66b60() {
   return (neuron0x2a5e050()*0.423325);
}

double NNfunction_ss_sRcR::synapse0x2a66ba0() {
   return (neuron0x2a5e390()*-0.548496);
}

double NNfunction_ss_sRcR::synapse0x2a66be0() {
   return (neuron0x2a5e6d0()*0.568721);
}

double NNfunction_ss_sRcR::synapse0x2a66c20() {
   return (neuron0x2a5ea10()*0.572326);
}

double NNfunction_ss_sRcR::synapse0x2a66fa0() {
   return (neuron0x2a59e50()*-0.00599206);
}

double NNfunction_ss_sRcR::synapse0x2a66fe0() {
   return (neuron0x2a5a190()*-0.07337);
}

double NNfunction_ss_sRcR::synapse0x2a67020() {
   return (neuron0x2a5a4d0()*0.0177855);
}

double NNfunction_ss_sRcR::synapse0x2a67060() {
   return (neuron0x2a5a810()*-2.21208);
}

double NNfunction_ss_sRcR::synapse0x2a670a0() {
   return (neuron0x2a5ab50()*-0.00607332);
}

double NNfunction_ss_sRcR::synapse0x2a670e0() {
   return (neuron0x2a5ae90()*0.0756275);
}

double NNfunction_ss_sRcR::synapse0x2a67120() {
   return (neuron0x2a5b1d0()*0.0461688);
}

double NNfunction_ss_sRcR::synapse0x2a67160() {
   return (neuron0x2a5b510()*0.00720569);
}

double NNfunction_ss_sRcR::synapse0x2a671a0() {
   return (neuron0x2a5b850()*-0.0194571);
}

double NNfunction_ss_sRcR::synapse0x2a671e0() {
   return (neuron0x2a5bb90()*0.0157395);
}

double NNfunction_ss_sRcR::synapse0x2a67220() {
   return (neuron0x2a5bed0()*0.017292);
}

double NNfunction_ss_sRcR::synapse0x2a67260() {
   return (neuron0x2a5c210()*0.0264359);
}

double NNfunction_ss_sRcR::synapse0x2a672a0() {
   return (neuron0x2a5c550()*0.002995);
}

double NNfunction_ss_sRcR::synapse0x2a672e0() {
   return (neuron0x2a5c890()*0.0692877);
}

double NNfunction_ss_sRcR::synapse0x2a67320() {
   return (neuron0x2a5cbd0()*-0.00174969);
}

double NNfunction_ss_sRcR::synapse0x2a67360() {
   return (neuron0x2a5cf10()*0.553589);
}

double NNfunction_ss_sRcR::synapse0x2a66df0() {
   return (neuron0x2a5d250()*0.00893563);
}

double NNfunction_ss_sRcR::synapse0x2a66e30() {
   return (neuron0x2a5d7b0()*-0.0749888);
}

double NNfunction_ss_sRcR::synapse0x2a674b0() {
   return (neuron0x2a5d9d0()*0.699633);
}

double NNfunction_ss_sRcR::synapse0x2a674f0() {
   return (neuron0x2a5dd10()*0.0185687);
}

double NNfunction_ss_sRcR::synapse0x2a67530() {
   return (neuron0x2a5e050()*-0.0182327);
}

double NNfunction_ss_sRcR::synapse0x2a67570() {
   return (neuron0x2a5e390()*0.00391293);
}

double NNfunction_ss_sRcR::synapse0x2a675b0() {
   return (neuron0x2a5e6d0()*0.0424492);
}

double NNfunction_ss_sRcR::synapse0x2a675f0() {
   return (neuron0x2a5ea10()*0.0256748);
}

double NNfunction_ss_sRcR::synapse0x2a67970() {
   return (neuron0x2a59e50()*0.00236103);
}

double NNfunction_ss_sRcR::synapse0x2a679b0() {
   return (neuron0x2a5a190()*-0.0555957);
}

double NNfunction_ss_sRcR::synapse0x2a679f0() {
   return (neuron0x2a5a4d0()*-0.00297114);
}

double NNfunction_ss_sRcR::synapse0x2a67a30() {
   return (neuron0x2a5a810()*5.45613);
}

double NNfunction_ss_sRcR::synapse0x2a67a70() {
   return (neuron0x2a5ab50()*0.00545795);
}

double NNfunction_ss_sRcR::synapse0x2a67ab0() {
   return (neuron0x2a5ae90()*0.00544804);
}

double NNfunction_ss_sRcR::synapse0x2a67af0() {
   return (neuron0x2a5b1d0()*-0.0134004);
}

double NNfunction_ss_sRcR::synapse0x2a67b30() {
   return (neuron0x2a5b510()*-0.00655517);
}

double NNfunction_ss_sRcR::synapse0x2a67b70() {
   return (neuron0x2a5b850()*0.00964831);
}

double NNfunction_ss_sRcR::synapse0x2a67bb0() {
   return (neuron0x2a5bb90()*-0.0162766);
}

double NNfunction_ss_sRcR::synapse0x2a67bf0() {
   return (neuron0x2a5bed0()*-0.0204738);
}

double NNfunction_ss_sRcR::synapse0x2a67c30() {
   return (neuron0x2a5c210()*0.000163227);
}

double NNfunction_ss_sRcR::synapse0x2a67c70() {
   return (neuron0x2a5c550()*-0.00754816);
}

double NNfunction_ss_sRcR::synapse0x2a67cb0() {
   return (neuron0x2a5c890()*-0.0224381);
}

double NNfunction_ss_sRcR::synapse0x2a67cf0() {
   return (neuron0x2a5cbd0()*0.0171947);
}

double NNfunction_ss_sRcR::synapse0x2a67d30() {
   return (neuron0x2a5cf10()*-0.266223);
}

double NNfunction_ss_sRcR::synapse0x2a677c0() {
   return (neuron0x2a5d250()*0.0106714);
}

double NNfunction_ss_sRcR::synapse0x2a67800() {
   return (neuron0x2a5d7b0()*-0.0129043);
}

double NNfunction_ss_sRcR::synapse0x2a67e80() {
   return (neuron0x2a5d9d0()*-0.246607);
}

double NNfunction_ss_sRcR::synapse0x2a67ec0() {
   return (neuron0x2a5dd10()*0.00285234);
}

double NNfunction_ss_sRcR::synapse0x2a67f00() {
   return (neuron0x2a5e050()*0.0295561);
}

double NNfunction_ss_sRcR::synapse0x2a67f40() {
   return (neuron0x2a5e390()*-0.0123863);
}

double NNfunction_ss_sRcR::synapse0x2a67f80() {
   return (neuron0x2a5e6d0()*0.012322);
}

double NNfunction_ss_sRcR::synapse0x2a67fc0() {
   return (neuron0x2a5ea10()*-0.013012);
}

double NNfunction_ss_sRcR::synapse0x2a68340() {
   return (neuron0x2a59e50()*0.0517069);
}

double NNfunction_ss_sRcR::synapse0x2a68380() {
   return (neuron0x2a5a190()*0.24025);
}

double NNfunction_ss_sRcR::synapse0x2a683c0() {
   return (neuron0x2a5a4d0()*0.972613);
}

double NNfunction_ss_sRcR::synapse0x2a68400() {
   return (neuron0x2a5a810()*0.00663817);
}

double NNfunction_ss_sRcR::synapse0x2a68440() {
   return (neuron0x2a5ab50()*0.647427);
}

double NNfunction_ss_sRcR::synapse0x2a68480() {
   return (neuron0x2a5ae90()*0.186729);
}

double NNfunction_ss_sRcR::synapse0x2a684c0() {
   return (neuron0x2a5b1d0()*-0.136621);
}

double NNfunction_ss_sRcR::synapse0x2a68500() {
   return (neuron0x2a5b510()*0.967258);
}

double NNfunction_ss_sRcR::synapse0x2a68540() {
   return (neuron0x2a5b850()*0.339292);
}

double NNfunction_ss_sRcR::synapse0x2a68580() {
   return (neuron0x2a5bb90()*0.457199);
}

double NNfunction_ss_sRcR::synapse0x2a685c0() {
   return (neuron0x2a5bed0()*0.337335);
}

double NNfunction_ss_sRcR::synapse0x2a68600() {
   return (neuron0x2a5c210()*-0.0325729);
}

double NNfunction_ss_sRcR::synapse0x2a68640() {
   return (neuron0x2a5c550()*0.676431);
}

double NNfunction_ss_sRcR::synapse0x2a68680() {
   return (neuron0x2a5c890()*0.0787023);
}

double NNfunction_ss_sRcR::synapse0x2a686c0() {
   return (neuron0x2a5cbd0()*0.359728);
}

double NNfunction_ss_sRcR::synapse0x2a68700() {
   return (neuron0x2a5cf10()*-0.752284);
}

double NNfunction_ss_sRcR::synapse0x2a68190() {
   return (neuron0x2a5d250()*0.518509);
}

double NNfunction_ss_sRcR::synapse0x2a681d0() {
   return (neuron0x2a5d7b0()*0.461072);
}

double NNfunction_ss_sRcR::synapse0x2a68850() {
   return (neuron0x2a5d9d0()*0.577369);
}

double NNfunction_ss_sRcR::synapse0x2a68890() {
   return (neuron0x2a5dd10()*0.421333);
}

double NNfunction_ss_sRcR::synapse0x2a688d0() {
   return (neuron0x2a5e050()*0.412462);
}

double NNfunction_ss_sRcR::synapse0x2a68910() {
   return (neuron0x2a5e390()*-0.23681);
}

double NNfunction_ss_sRcR::synapse0x2a68950() {
   return (neuron0x2a5e6d0()*0.473837);
}

double NNfunction_ss_sRcR::synapse0x2a68990() {
   return (neuron0x2a5ea10()*0.260292);
}

double NNfunction_ss_sRcR::synapse0x2a68d10() {
   return (neuron0x2a59e50()*0.0347669);
}

double NNfunction_ss_sRcR::synapse0x2a5a070() {
   return (neuron0x2a5a190()*0.589605);
}

double NNfunction_ss_sRcR::synapse0x2a5a0b0() {
   return (neuron0x2a5a4d0()*0.993386);
}

double NNfunction_ss_sRcR::synapse0x2a5a3b0() {
   return (neuron0x2a5a810()*0.0736861);
}

double NNfunction_ss_sRcR::synapse0x2a5a3f0() {
   return (neuron0x2a5ab50()*0.393156);
}

double NNfunction_ss_sRcR::synapse0x2a5a6f0() {
   return (neuron0x2a5ae90()*0.435113);
}

double NNfunction_ss_sRcR::synapse0x2a5a730() {
   return (neuron0x2a5b1d0()*-0.141854);
}

double NNfunction_ss_sRcR::synapse0x2a5aa30() {
   return (neuron0x2a5b510()*0.397758);
}

double NNfunction_ss_sRcR::synapse0x2a5aa70() {
   return (neuron0x2a5b850()*0.198486);
}

double NNfunction_ss_sRcR::synapse0x2a5ad70() {
   return (neuron0x2a5bb90()*0.221558);
}

double NNfunction_ss_sRcR::synapse0x2a5adb0() {
   return (neuron0x2a5bed0()*0.208048);
}

double NNfunction_ss_sRcR::synapse0x2a5b0b0() {
   return (neuron0x2a5c210()*-0.840732);
}

double NNfunction_ss_sRcR::synapse0x2a5b0f0() {
   return (neuron0x2a5c550()*0.227011);
}

double NNfunction_ss_sRcR::synapse0x2a5b3f0() {
   return (neuron0x2a5c890()*-0.209252);
}

double NNfunction_ss_sRcR::synapse0x2a5b430() {
   return (neuron0x2a5cbd0()*0.0673564);
}

double NNfunction_ss_sRcR::synapse0x2a5b730() {
   return (neuron0x2a5cf10()*-0.260241);
}

double NNfunction_ss_sRcR::synapse0x2a5b770() {
   return (neuron0x2a5d250()*0.0953747);
}

double NNfunction_ss_sRcR::synapse0x2a5ba70() {
   return (neuron0x2a5d7b0()*1.01412);
}

double NNfunction_ss_sRcR::synapse0x2a5bab0() {
   return (neuron0x2a5d9d0()*0.208373);
}

double NNfunction_ss_sRcR::synapse0x2a5bdb0() {
   return (neuron0x2a5dd10()*-0.326624);
}

double NNfunction_ss_sRcR::synapse0x2a5bdf0() {
   return (neuron0x2a5e050()*0.0868192);
}

double NNfunction_ss_sRcR::synapse0x2a5c0f0() {
   return (neuron0x2a5e390()*-0.6894);
}

double NNfunction_ss_sRcR::synapse0x2a5c130() {
   return (neuron0x2a5e6d0()*0.112205);
}

double NNfunction_ss_sRcR::synapse0x2a5c430() {
   return (neuron0x2a5ea10()*0.557799);
}

double NNfunction_ss_sRcR::synapse0x2a5c470() {
   return (neuron0x2a59e50()*0.25137);
}

double NNfunction_ss_sRcR::synapse0x2a5d130() {
   return (neuron0x2a5a190()*-0.630057);
}

double NNfunction_ss_sRcR::synapse0x2a5d170() {
   return (neuron0x2a5a4d0()*-0.855908);
}

double NNfunction_ss_sRcR::synapse0x2a68b60() {
   return (neuron0x2a5a810()*0.232754);
}

double NNfunction_ss_sRcR::synapse0x2a68ba0() {
   return (neuron0x2a5ab50()*0.0418);
}

double NNfunction_ss_sRcR::synapse0x2a5d470() {
   return (neuron0x2a5ae90()*0.357007);
}

double NNfunction_ss_sRcR::synapse0x2a5d4b0() {
   return (neuron0x2a5b1d0()*-0.688751);
}

double NNfunction_ss_sRcR::synapse0x2814ef0() {
   return (neuron0x2a5b510()*0.581779);
}

double NNfunction_ss_sRcR::synapse0x2814f30() {
   return (neuron0x2a5b850()*-0.64734);
}

double NNfunction_ss_sRcR::synapse0x2a5dbf0() {
   return (neuron0x2a5bb90()*0.290545);
}

double NNfunction_ss_sRcR::synapse0x2a5dc30() {
   return (neuron0x2a5bed0()*0.621283);
}

double NNfunction_ss_sRcR::synapse0x2a5df30() {
   return (neuron0x2a5c210()*0.246403);
}

double NNfunction_ss_sRcR::synapse0x2a5df70() {
   return (neuron0x2a5c550()*-0.301225);
}

double NNfunction_ss_sRcR::synapse0x2a5e270() {
   return (neuron0x2a5c890()*0.32046);
}

double NNfunction_ss_sRcR::synapse0x2a5e2b0() {
   return (neuron0x2a5cbd0()*0.0751369);
}

double NNfunction_ss_sRcR::synapse0x2a5e5b0() {
   return (neuron0x2a5cf10()*0.797241);
}

double NNfunction_ss_sRcR::synapse0x2a5e5f0() {
   return (neuron0x2a5d250()*0.746149);
}

double NNfunction_ss_sRcR::synapse0x2a5e8f0() {
   return (neuron0x2a5d7b0()*0.375322);
}

double NNfunction_ss_sRcR::synapse0x2a5e930() {
   return (neuron0x2a5d9d0()*1.02114);
}

double NNfunction_ss_sRcR::synapse0x2a5ec30() {
   return (neuron0x2a5dd10()*-0.374172);
}

double NNfunction_ss_sRcR::synapse0x2a5ec70() {
   return (neuron0x2a5e050()*0.0782965);
}

double NNfunction_ss_sRcR::synapse0x2a5c770() {
   return (neuron0x2a5e390()*0.236121);
}

double NNfunction_ss_sRcR::synapse0x2a5c7b0() {
   return (neuron0x2a5e6d0()*-0.644382);
}

double NNfunction_ss_sRcR::synapse0x2a6aa80() {
   return (neuron0x2a5ea10()*0.0185494);
}

double NNfunction_ss_sRcR::synapse0x2a6ae00() {
   return (neuron0x2a59e50()*-0.0453066);
}

double NNfunction_ss_sRcR::synapse0x2a6ae40() {
   return (neuron0x2a5a190()*-0.94135);
}

double NNfunction_ss_sRcR::synapse0x2a6ae80() {
   return (neuron0x2a5a4d0()*0.062895);
}

double NNfunction_ss_sRcR::synapse0x2a6aec0() {
   return (neuron0x2a5a810()*0.296072);
}

double NNfunction_ss_sRcR::synapse0x2a6af00() {
   return (neuron0x2a5ab50()*0.76946);
}

double NNfunction_ss_sRcR::synapse0x2a6af40() {
   return (neuron0x2a5ae90()*-0.123236);
}

double NNfunction_ss_sRcR::synapse0x2a6af80() {
   return (neuron0x2a5b1d0()*0.209044);
}

double NNfunction_ss_sRcR::synapse0x2a6afc0() {
   return (neuron0x2a5b510()*0.10079);
}

double NNfunction_ss_sRcR::synapse0x2a6b000() {
   return (neuron0x2a5b850()*-1.20214);
}

double NNfunction_ss_sRcR::synapse0x2a6b040() {
   return (neuron0x2a5bb90()*0.211081);
}

double NNfunction_ss_sRcR::synapse0x2a6b080() {
   return (neuron0x2a5bed0()*0.17851);
}

double NNfunction_ss_sRcR::synapse0x2a6b0c0() {
   return (neuron0x2a5c210()*0.70948);
}

double NNfunction_ss_sRcR::synapse0x2a6b100() {
   return (neuron0x2a5c550()*0.113155);
}

double NNfunction_ss_sRcR::synapse0x2a6b140() {
   return (neuron0x2a5c890()*-0.186525);
}

double NNfunction_ss_sRcR::synapse0x2a6b180() {
   return (neuron0x2a5cbd0()*-0.138734);
}

double NNfunction_ss_sRcR::synapse0x2a6b1c0() {
   return (neuron0x2a5cf10()*-0.23064);
}

double NNfunction_ss_sRcR::synapse0x2a6ac50() {
   return (neuron0x2a5d250()*0.291812);
}

double NNfunction_ss_sRcR::synapse0x2a6ac90() {
   return (neuron0x2a5d7b0()*0.698768);
}

double NNfunction_ss_sRcR::synapse0x2a6b310() {
   return (neuron0x2a5d9d0()*0.497075);
}

double NNfunction_ss_sRcR::synapse0x2a6b350() {
   return (neuron0x2a5dd10()*-0.309208);
}

double NNfunction_ss_sRcR::synapse0x2a6b390() {
   return (neuron0x2a5e050()*0.503084);
}

double NNfunction_ss_sRcR::synapse0x2a6b3d0() {
   return (neuron0x2a5e390()*-0.0426553);
}

double NNfunction_ss_sRcR::synapse0x2a6b410() {
   return (neuron0x2a5e6d0()*-0.840117);
}

double NNfunction_ss_sRcR::synapse0x2a6b450() {
   return (neuron0x2a5ea10()*-0.292579);
}

double NNfunction_ss_sRcR::synapse0x2a6b7d0() {
   return (neuron0x2a59e50()*-0.00383349);
}

double NNfunction_ss_sRcR::synapse0x2a6b810() {
   return (neuron0x2a5a190()*0.00758342);
}

double NNfunction_ss_sRcR::synapse0x2a6b850() {
   return (neuron0x2a5a4d0()*0.0222662);
}

double NNfunction_ss_sRcR::synapse0x2a6b890() {
   return (neuron0x2a5a810()*-0.0374502);
}

double NNfunction_ss_sRcR::synapse0x2a6b8d0() {
   return (neuron0x2a5ab50()*0.0166227);
}

double NNfunction_ss_sRcR::synapse0x2a6b910() {
   return (neuron0x2a5ae90()*0.00802327);
}

double NNfunction_ss_sRcR::synapse0x2a6b950() {
   return (neuron0x2a5b1d0()*0.0116175);
}

double NNfunction_ss_sRcR::synapse0x2a6b990() {
   return (neuron0x2a5b510()*0.0126908);
}

double NNfunction_ss_sRcR::synapse0x2a6b9d0() {
   return (neuron0x2a5b850()*-0.00143347);
}

double NNfunction_ss_sRcR::synapse0x2a6ba10() {
   return (neuron0x2a5bb90()*-0.00715494);
}

double NNfunction_ss_sRcR::synapse0x2a6ba50() {
   return (neuron0x2a5bed0()*0.00718534);
}

double NNfunction_ss_sRcR::synapse0x2a6ba90() {
   return (neuron0x2a5c210()*0.00152094);
}

double NNfunction_ss_sRcR::synapse0x2a6bad0() {
   return (neuron0x2a5c550()*-0.000789184);
}

double NNfunction_ss_sRcR::synapse0x2a6bb10() {
   return (neuron0x2a5c890()*-0.00533027);
}

double NNfunction_ss_sRcR::synapse0x2a6bb50() {
   return (neuron0x2a5cbd0()*-0.00160242);
}

double NNfunction_ss_sRcR::synapse0x2a6bb90() {
   return (neuron0x2a5cf10()*-0.61562);
}

double NNfunction_ss_sRcR::synapse0x2a6b620() {
   return (neuron0x2a5d250()*-0.00232372);
}

double NNfunction_ss_sRcR::synapse0x2a6b660() {
   return (neuron0x2a5d7b0()*-0.00415053);
}

double NNfunction_ss_sRcR::synapse0x2a6bce0() {
   return (neuron0x2a5d9d0()*0.44426);
}

double NNfunction_ss_sRcR::synapse0x2a6bd20() {
   return (neuron0x2a5dd10()*-0.00229377);
}

double NNfunction_ss_sRcR::synapse0x2a6bd60() {
   return (neuron0x2a5e050()*0.00291518);
}

double NNfunction_ss_sRcR::synapse0x2a6bda0() {
   return (neuron0x2a5e390()*0.00331633);
}

double NNfunction_ss_sRcR::synapse0x2a6bde0() {
   return (neuron0x2a5e6d0()*-0.00416952);
}

double NNfunction_ss_sRcR::synapse0x2a6be20() {
   return (neuron0x2a5ea10()*-0.0126932);
}

double NNfunction_ss_sRcR::synapse0x2a6c1a0() {
   return (neuron0x2a59e50()*-0.0208015);
}

double NNfunction_ss_sRcR::synapse0x2a6c1e0() {
   return (neuron0x2a5a190()*-0.614409);
}

double NNfunction_ss_sRcR::synapse0x2a6c220() {
   return (neuron0x2a5a4d0()*-0.544031);
}

double NNfunction_ss_sRcR::synapse0x2a6c260() {
   return (neuron0x2a5a810()*-0.67713);
}

double NNfunction_ss_sRcR::synapse0x2a6c2a0() {
   return (neuron0x2a5ab50()*0.836114);
}

double NNfunction_ss_sRcR::synapse0x2a6c2e0() {
   return (neuron0x2a5ae90()*-0.0156092);
}

double NNfunction_ss_sRcR::synapse0x2a6c320() {
   return (neuron0x2a5b1d0()*0.670899);
}

double NNfunction_ss_sRcR::synapse0x2a6c360() {
   return (neuron0x2a5b510()*-0.0262319);
}

double NNfunction_ss_sRcR::synapse0x2a6c3a0() {
   return (neuron0x2a5b850()*0.51267);
}

double NNfunction_ss_sRcR::synapse0x2a6c3e0() {
   return (neuron0x2a5bb90()*0.388703);
}

double NNfunction_ss_sRcR::synapse0x2a6c420() {
   return (neuron0x2a5bed0()*0.0476711);
}

double NNfunction_ss_sRcR::synapse0x2a6c460() {
   return (neuron0x2a5c210()*-0.321731);
}

double NNfunction_ss_sRcR::synapse0x2a6c4a0() {
   return (neuron0x2a5c550()*0.178275);
}

double NNfunction_ss_sRcR::synapse0x2a6c4e0() {
   return (neuron0x2a5c890()*0.513367);
}

double NNfunction_ss_sRcR::synapse0x2a6c520() {
   return (neuron0x2a5cbd0()*0.298429);
}

double NNfunction_ss_sRcR::synapse0x2a6c560() {
   return (neuron0x2a5cf10()*-0.744735);
}

double NNfunction_ss_sRcR::synapse0x2a6bff0() {
   return (neuron0x2a5d250()*0.638629);
}

double NNfunction_ss_sRcR::synapse0x2a6c030() {
   return (neuron0x2a5d7b0()*0.548962);
}

double NNfunction_ss_sRcR::synapse0x2a6c6b0() {
   return (neuron0x2a5d9d0()*-0.316155);
}

double NNfunction_ss_sRcR::synapse0x2a6c6f0() {
   return (neuron0x2a5dd10()*0.614004);
}

double NNfunction_ss_sRcR::synapse0x2a6c730() {
   return (neuron0x2a5e050()*0.662409);
}

double NNfunction_ss_sRcR::synapse0x2a6c770() {
   return (neuron0x2a5e390()*-0.258427);
}

double NNfunction_ss_sRcR::synapse0x2a6c7b0() {
   return (neuron0x2a5e6d0()*-0.398533);
}

double NNfunction_ss_sRcR::synapse0x2a6c7f0() {
   return (neuron0x2a5ea10()*0.756276);
}

double NNfunction_ss_sRcR::synapse0x2a6cb70() {
   return (neuron0x2a59e50()*0.516989);
}

double NNfunction_ss_sRcR::synapse0x2a6cbb0() {
   return (neuron0x2a5a190()*-0.376173);
}

double NNfunction_ss_sRcR::synapse0x2a6cbf0() {
   return (neuron0x2a5a4d0()*-0.105655);
}

double NNfunction_ss_sRcR::synapse0x2a6cc30() {
   return (neuron0x2a5a810()*-1.2667);
}

double NNfunction_ss_sRcR::synapse0x2a6cc70() {
   return (neuron0x2a5ab50()*0.192208);
}

double NNfunction_ss_sRcR::synapse0x2a6ccb0() {
   return (neuron0x2a5ae90()*-0.432018);
}

double NNfunction_ss_sRcR::synapse0x2a6ccf0() {
   return (neuron0x2a5b1d0()*0.340698);
}

double NNfunction_ss_sRcR::synapse0x2a6cd30() {
   return (neuron0x2a5b510()*0.260129);
}

double NNfunction_ss_sRcR::synapse0x2a6cd70() {
   return (neuron0x2a5b850()*0.19698);
}

double NNfunction_ss_sRcR::synapse0x2a6cdb0() {
   return (neuron0x2a5bb90()*0.517726);
}

double NNfunction_ss_sRcR::synapse0x2a6cdf0() {
   return (neuron0x2a5bed0()*0.633146);
}

double NNfunction_ss_sRcR::synapse0x2a6ce30() {
   return (neuron0x2a5c210()*0.263873);
}

double NNfunction_ss_sRcR::synapse0x2a6ce70() {
   return (neuron0x2a5c550()*-0.152099);
}

double NNfunction_ss_sRcR::synapse0x2a6ceb0() {
   return (neuron0x2a5c890()*0.806174);
}

double NNfunction_ss_sRcR::synapse0x2a6cef0() {
   return (neuron0x2a5cbd0()*-0.887782);
}

double NNfunction_ss_sRcR::synapse0x2a6cf30() {
   return (neuron0x2a5cf10()*0.284032);
}

double NNfunction_ss_sRcR::synapse0x2a6c9c0() {
   return (neuron0x2a5d250()*-0.689587);
}

double NNfunction_ss_sRcR::synapse0x2a6ca00() {
   return (neuron0x2a5d7b0()*-0.257213);
}

double NNfunction_ss_sRcR::synapse0x2a6d080() {
   return (neuron0x2a5d9d0()*-0.145285);
}

double NNfunction_ss_sRcR::synapse0x2a6d0c0() {
   return (neuron0x2a5dd10()*0.205912);
}

double NNfunction_ss_sRcR::synapse0x2a6d100() {
   return (neuron0x2a5e050()*-0.348728);
}

double NNfunction_ss_sRcR::synapse0x2a6d140() {
   return (neuron0x2a5e390()*0.0340562);
}

double NNfunction_ss_sRcR::synapse0x2a6d180() {
   return (neuron0x2a5e6d0()*0.59669);
}

double NNfunction_ss_sRcR::synapse0x2a6d1c0() {
   return (neuron0x2a5ea10()*-0.536524);
}

double NNfunction_ss_sRcR::synapse0x2a6d540() {
   return (neuron0x2a59e50()*0.232759);
}

double NNfunction_ss_sRcR::synapse0x2a6d580() {
   return (neuron0x2a5a190()*-0.795566);
}

double NNfunction_ss_sRcR::synapse0x2a6d5c0() {
   return (neuron0x2a5a4d0()*0.344053);
}

double NNfunction_ss_sRcR::synapse0x2a6d600() {
   return (neuron0x2a5a810()*-0.0137299);
}

double NNfunction_ss_sRcR::synapse0x2a6d640() {
   return (neuron0x2a5ab50()*0.40025);
}

double NNfunction_ss_sRcR::synapse0x2a6d680() {
   return (neuron0x2a5ae90()*0.509837);
}

double NNfunction_ss_sRcR::synapse0x2a6d6c0() {
   return (neuron0x2a5b1d0()*0.938193);
}

double NNfunction_ss_sRcR::synapse0x2a6d700() {
   return (neuron0x2a5b510()*0.258387);
}

double NNfunction_ss_sRcR::synapse0x2a6d740() {
   return (neuron0x2a5b850()*-0.490516);
}

double NNfunction_ss_sRcR::synapse0x2a65900() {
   return (neuron0x2a5bb90()*0.133906);
}

double NNfunction_ss_sRcR::synapse0x2a65940() {
   return (neuron0x2a5bed0()*-0.191508);
}

double NNfunction_ss_sRcR::synapse0x2a65980() {
   return (neuron0x2a5c210()*-0.236869);
}

double NNfunction_ss_sRcR::synapse0x2a659c0() {
   return (neuron0x2a5c550()*-1.24246);
}

double NNfunction_ss_sRcR::synapse0x2a65a00() {
   return (neuron0x2a5c890()*0.408133);
}

double NNfunction_ss_sRcR::synapse0x2a65a40() {
   return (neuron0x2a5cbd0()*-0.230182);
}

double NNfunction_ss_sRcR::synapse0x2a65a80() {
   return (neuron0x2a5cf10()*0.803907);
}

double NNfunction_ss_sRcR::synapse0x2a6d390() {
   return (neuron0x2a5d250()*0.464138);
}

double NNfunction_ss_sRcR::synapse0x2a6d3d0() {
   return (neuron0x2a5d7b0()*-0.185448);
}

double NNfunction_ss_sRcR::synapse0x2a65bd0() {
   return (neuron0x2a5d9d0()*-0.973629);
}

double NNfunction_ss_sRcR::synapse0x2a65c10() {
   return (neuron0x2a5dd10()*0.735848);
}

double NNfunction_ss_sRcR::synapse0x2a65c50() {
   return (neuron0x2a5e050()*0.251741);
}

double NNfunction_ss_sRcR::synapse0x2a65c90() {
   return (neuron0x2a5e390()*-0.30656);
}

double NNfunction_ss_sRcR::synapse0x2a65cd0() {
   return (neuron0x2a5e6d0()*-0.725564);
}

double NNfunction_ss_sRcR::synapse0x2a65d10() {
   return (neuron0x2a5ea10()*-0.242178);
}

double NNfunction_ss_sRcR::synapse0x2a66090() {
   return (neuron0x2a59e50()*0.200253);
}

double NNfunction_ss_sRcR::synapse0x2a660d0() {
   return (neuron0x2a5a190()*-0.400342);
}

double NNfunction_ss_sRcR::synapse0x2a66110() {
   return (neuron0x2a5a4d0()*0.898996);
}

double NNfunction_ss_sRcR::synapse0x2a66150() {
   return (neuron0x2a5a810()*-0.35948);
}

double NNfunction_ss_sRcR::synapse0x2a66190() {
   return (neuron0x2a5ab50()*-0.637189);
}

double NNfunction_ss_sRcR::synapse0x2a661d0() {
   return (neuron0x2a5ae90()*0.915882);
}

double NNfunction_ss_sRcR::synapse0x2a66210() {
   return (neuron0x2a5b1d0()*0.410854);
}

double NNfunction_ss_sRcR::synapse0x2a66250() {
   return (neuron0x2a5b510()*0.37702);
}

double NNfunction_ss_sRcR::synapse0x2a66290() {
   return (neuron0x2a5b850()*0.283593);
}

double NNfunction_ss_sRcR::synapse0x2a662d0() {
   return (neuron0x2a5bb90()*0.734806);
}

double NNfunction_ss_sRcR::synapse0x2a66310() {
   return (neuron0x2a5bed0()*1.03578);
}

double NNfunction_ss_sRcR::synapse0x2a66350() {
   return (neuron0x2a5c210()*0.287219);
}

double NNfunction_ss_sRcR::synapse0x2a66390() {
   return (neuron0x2a5c550()*-0.266122);
}

double NNfunction_ss_sRcR::synapse0x2a663d0() {
   return (neuron0x2a5c890()*0.550123);
}

double NNfunction_ss_sRcR::synapse0x2a66410() {
   return (neuron0x2a5cbd0()*-0.171284);
}

double NNfunction_ss_sRcR::synapse0x2a66450() {
   return (neuron0x2a5cf10()*0.131241);
}

double NNfunction_ss_sRcR::synapse0x2a65ee0() {
   return (neuron0x2a5d250()*-0.159522);
}

double NNfunction_ss_sRcR::synapse0x2a65f20() {
   return (neuron0x2a5d7b0()*-0.199348);
}

double NNfunction_ss_sRcR::synapse0x2a665a0() {
   return (neuron0x2a5d9d0()*-0.0168679);
}

double NNfunction_ss_sRcR::synapse0x2a665e0() {
   return (neuron0x2a5dd10()*0.0993592);
}

double NNfunction_ss_sRcR::synapse0x2a66620() {
   return (neuron0x2a5e050()*-0.0806452);
}

double NNfunction_ss_sRcR::synapse0x2a66660() {
   return (neuron0x2a5e390()*0.698411);
}

double NNfunction_ss_sRcR::synapse0x2a666a0() {
   return (neuron0x2a5e6d0()*-0.298939);
}

double NNfunction_ss_sRcR::synapse0x2a666e0() {
   return (neuron0x2a5ea10()*-0.287712);
}

double NNfunction_ss_sRcR::synapse0x2a668b0() {
   return (neuron0x2a59e50()*-0.879528);
}

double NNfunction_ss_sRcR::synapse0x2a6f940() {
   return (neuron0x2a5a190()*-0.403081);
}

double NNfunction_ss_sRcR::synapse0x2a6f980() {
   return (neuron0x2a5a4d0()*-0.842563);
}

double NNfunction_ss_sRcR::synapse0x2a6f9c0() {
   return (neuron0x2a5a810()*-0.239351);
}

double NNfunction_ss_sRcR::synapse0x2a6fa00() {
   return (neuron0x2a5ab50()*0.0410419);
}

double NNfunction_ss_sRcR::synapse0x2a6fa40() {
   return (neuron0x2a5ae90()*0.0602922);
}

double NNfunction_ss_sRcR::synapse0x2a6fa80() {
   return (neuron0x2a5b1d0()*-0.671857);
}

double NNfunction_ss_sRcR::synapse0x2a6fac0() {
   return (neuron0x2a5b510()*-0.456486);
}

double NNfunction_ss_sRcR::synapse0x2a6fb00() {
   return (neuron0x2a5b850()*0.421241);
}

double NNfunction_ss_sRcR::synapse0x2a6fb40() {
   return (neuron0x2a5bb90()*-0.534971);
}

double NNfunction_ss_sRcR::synapse0x2a6fb80() {
   return (neuron0x2a5bed0()*0.866771);
}

double NNfunction_ss_sRcR::synapse0x2a6fbc0() {
   return (neuron0x2a5c210()*0.100531);
}

double NNfunction_ss_sRcR::synapse0x2a6fc00() {
   return (neuron0x2a5c550()*0.412451);
}

double NNfunction_ss_sRcR::synapse0x2a6fc40() {
   return (neuron0x2a5c890()*-1.11299);
}

double NNfunction_ss_sRcR::synapse0x2a6fc80() {
   return (neuron0x2a5cbd0()*-0.13185);
}

double NNfunction_ss_sRcR::synapse0x2a6fcc0() {
   return (neuron0x2a5cf10()*-0.926095);
}

double NNfunction_ss_sRcR::synapse0x2a6f790() {
   return (neuron0x2a5d250()*0.692805);
}

double NNfunction_ss_sRcR::synapse0x2a6f7d0() {
   return (neuron0x2a5d7b0()*-0.754304);
}

double NNfunction_ss_sRcR::synapse0x2a6fe10() {
   return (neuron0x2a5d9d0()*-0.839207);
}

double NNfunction_ss_sRcR::synapse0x2a6fe50() {
   return (neuron0x2a5dd10()*0.227831);
}

double NNfunction_ss_sRcR::synapse0x2a6fe90() {
   return (neuron0x2a5e050()*0.121879);
}

double NNfunction_ss_sRcR::synapse0x2a6fed0() {
   return (neuron0x2a5e390()*0.471321);
}

double NNfunction_ss_sRcR::synapse0x2a6ff10() {
   return (neuron0x2a5e6d0()*-0.471264);
}

double NNfunction_ss_sRcR::synapse0x2a6ff50() {
   return (neuron0x2a5ea10()*0.580894);
}

double NNfunction_ss_sRcR::synapse0x2a702d0() {
   return (neuron0x2a59e50()*-0.0347928);
}

double NNfunction_ss_sRcR::synapse0x2a70310() {
   return (neuron0x2a5a190()*-0.246489);
}

double NNfunction_ss_sRcR::synapse0x2a70350() {
   return (neuron0x2a5a4d0()*0.00986747);
}

double NNfunction_ss_sRcR::synapse0x2a70390() {
   return (neuron0x2a5a810()*-0.205349);
}

double NNfunction_ss_sRcR::synapse0x2a703d0() {
   return (neuron0x2a5ab50()*0.0323763);
}

double NNfunction_ss_sRcR::synapse0x2a70410() {
   return (neuron0x2a5ae90()*0.0155147);
}

double NNfunction_ss_sRcR::synapse0x2a70450() {
   return (neuron0x2a5b1d0()*-0.0146687);
}

double NNfunction_ss_sRcR::synapse0x2a70490() {
   return (neuron0x2a5b510()*-0.00989319);
}

double NNfunction_ss_sRcR::synapse0x2a704d0() {
   return (neuron0x2a5b850()*-0.00769347);
}

double NNfunction_ss_sRcR::synapse0x2a70510() {
   return (neuron0x2a5bb90()*0.015611);
}

double NNfunction_ss_sRcR::synapse0x2a70550() {
   return (neuron0x2a5bed0()*0.0193996);
}

double NNfunction_ss_sRcR::synapse0x2a70590() {
   return (neuron0x2a5c210()*0.330618);
}

double NNfunction_ss_sRcR::synapse0x2a705d0() {
   return (neuron0x2a5c550()*0.297932);
}

double NNfunction_ss_sRcR::synapse0x2a70610() {
   return (neuron0x2a5c890()*-0.0627192);
}

double NNfunction_ss_sRcR::synapse0x2a70650() {
   return (neuron0x2a5cbd0()*0.138562);
}

double NNfunction_ss_sRcR::synapse0x2a70690() {
   return (neuron0x2a5cf10()*-0.137005);
}

double NNfunction_ss_sRcR::synapse0x2a70120() {
   return (neuron0x2a5d250()*-0.0838144);
}

double NNfunction_ss_sRcR::synapse0x2a70160() {
   return (neuron0x2a5d7b0()*0.118198);
}

double NNfunction_ss_sRcR::synapse0x2a707e0() {
   return (neuron0x2a5d9d0()*-0.210441);
}

double NNfunction_ss_sRcR::synapse0x2a70820() {
   return (neuron0x2a5dd10()*0.0479951);
}

double NNfunction_ss_sRcR::synapse0x2a70860() {
   return (neuron0x2a5e050()*0.0397842);
}

double NNfunction_ss_sRcR::synapse0x2a708a0() {
   return (neuron0x2a5e390()*-0.000317377);
}

double NNfunction_ss_sRcR::synapse0x2a708e0() {
   return (neuron0x2a5e6d0()*-0.00140849);
}

double NNfunction_ss_sRcR::synapse0x2a70920() {
   return (neuron0x2a5ea10()*-0.00853674);
}

double NNfunction_ss_sRcR::synapse0x2a70ca0() {
   return (neuron0x2a59e50()*-0.654652);
}

double NNfunction_ss_sRcR::synapse0x2a70ce0() {
   return (neuron0x2a5a190()*0.894416);
}

double NNfunction_ss_sRcR::synapse0x2a70d20() {
   return (neuron0x2a5a4d0()*0.275734);
}

double NNfunction_ss_sRcR::synapse0x2a70d60() {
   return (neuron0x2a5a810()*0.931602);
}

double NNfunction_ss_sRcR::synapse0x2a70da0() {
   return (neuron0x2a5ab50()*-0.00813699);
}

double NNfunction_ss_sRcR::synapse0x2a70de0() {
   return (neuron0x2a5ae90()*-0.176869);
}

double NNfunction_ss_sRcR::synapse0x2a70e20() {
   return (neuron0x2a5b1d0()*0.504641);
}

double NNfunction_ss_sRcR::synapse0x2a70e60() {
   return (neuron0x2a5b510()*-0.158878);
}

double NNfunction_ss_sRcR::synapse0x2a70ea0() {
   return (neuron0x2a5b850()*0.4117);
}

double NNfunction_ss_sRcR::synapse0x2a70ee0() {
   return (neuron0x2a5bb90()*0.110434);
}

double NNfunction_ss_sRcR::synapse0x2a70f20() {
   return (neuron0x2a5bed0()*-0.408);
}

double NNfunction_ss_sRcR::synapse0x2a70f60() {
   return (neuron0x2a5c210()*0.89126);
}

double NNfunction_ss_sRcR::synapse0x2a70fa0() {
   return (neuron0x2a5c550()*0.319301);
}

double NNfunction_ss_sRcR::synapse0x2a70fe0() {
   return (neuron0x2a5c890()*-0.142935);
}

double NNfunction_ss_sRcR::synapse0x2a71020() {
   return (neuron0x2a5cbd0()*0.719478);
}

double NNfunction_ss_sRcR::synapse0x2a71060() {
   return (neuron0x2a5cf10()*0.827472);
}

double NNfunction_ss_sRcR::synapse0x2a70af0() {
   return (neuron0x2a5d250()*0.528284);
}

double NNfunction_ss_sRcR::synapse0x2a70b30() {
   return (neuron0x2a5d7b0()*-0.231123);
}

double NNfunction_ss_sRcR::synapse0x2a711b0() {
   return (neuron0x2a5d9d0()*-0.618622);
}

double NNfunction_ss_sRcR::synapse0x2a711f0() {
   return (neuron0x2a5dd10()*-0.3158);
}

double NNfunction_ss_sRcR::synapse0x2a71230() {
   return (neuron0x2a5e050()*0.0377139);
}

double NNfunction_ss_sRcR::synapse0x2a71270() {
   return (neuron0x2a5e390()*0.587114);
}

double NNfunction_ss_sRcR::synapse0x2a712b0() {
   return (neuron0x2a5e6d0()*0.326446);
}

double NNfunction_ss_sRcR::synapse0x2a712f0() {
   return (neuron0x2a5ea10()*-0.00431091);
}

double NNfunction_ss_sRcR::synapse0x2a71670() {
   return (neuron0x2a59e50()*-0.00268591);
}

double NNfunction_ss_sRcR::synapse0x2a716b0() {
   return (neuron0x2a5a190()*-0.00952736);
}

double NNfunction_ss_sRcR::synapse0x2a716f0() {
   return (neuron0x2a5a4d0()*0.0105756);
}

double NNfunction_ss_sRcR::synapse0x2a71730() {
   return (neuron0x2a5a810()*-1.79621);
}

double NNfunction_ss_sRcR::synapse0x2a71770() {
   return (neuron0x2a5ab50()*0.00198933);
}

double NNfunction_ss_sRcR::synapse0x2a717b0() {
   return (neuron0x2a5ae90()*0.00103254);
}

double NNfunction_ss_sRcR::synapse0x2a717f0() {
   return (neuron0x2a5b1d0()*0.000827086);
}

double NNfunction_ss_sRcR::synapse0x2a71830() {
   return (neuron0x2a5b510()*0.00111658);
}

double NNfunction_ss_sRcR::synapse0x2a71870() {
   return (neuron0x2a5b850()*0.00327232);
}

double NNfunction_ss_sRcR::synapse0x2a718b0() {
   return (neuron0x2a5bb90()*-0.00510174);
}

double NNfunction_ss_sRcR::synapse0x2a718f0() {
   return (neuron0x2a5bed0()*0.00254938);
}

double NNfunction_ss_sRcR::synapse0x2a71930() {
   return (neuron0x2a5c210()*-0.0181729);
}

double NNfunction_ss_sRcR::synapse0x2a71970() {
   return (neuron0x2a5c550()*-0.0141089);
}

double NNfunction_ss_sRcR::synapse0x2a719b0() {
   return (neuron0x2a5c890()*0.0123006);
}

double NNfunction_ss_sRcR::synapse0x2a719f0() {
   return (neuron0x2a5cbd0()*-0.0144167);
}

double NNfunction_ss_sRcR::synapse0x2a71a30() {
   return (neuron0x2a5cf10()*0.0947381);
}

double NNfunction_ss_sRcR::synapse0x2a714c0() {
   return (neuron0x2a5d250()*0.00276214);
}

double NNfunction_ss_sRcR::synapse0x2a71500() {
   return (neuron0x2a5d7b0()*-0.0175002);
}

double NNfunction_ss_sRcR::synapse0x2a71b80() {
   return (neuron0x2a5d9d0()*0.126111);
}

double NNfunction_ss_sRcR::synapse0x2a71bc0() {
   return (neuron0x2a5dd10()*-0.00108741);
}

double NNfunction_ss_sRcR::synapse0x2a71c00() {
   return (neuron0x2a5e050()*-0.00164308);
}

double NNfunction_ss_sRcR::synapse0x2a71c40() {
   return (neuron0x2a5e390()*0.00670271);
}

double NNfunction_ss_sRcR::synapse0x2a71c80() {
   return (neuron0x2a5e6d0()*0.00353289);
}

double NNfunction_ss_sRcR::synapse0x2a71cc0() {
   return (neuron0x2a5ea10()*-0.0083452);
}

double NNfunction_ss_sRcR::synapse0x2a72040() {
   return (neuron0x2a59e50()*-0.00259738);
}

double NNfunction_ss_sRcR::synapse0x2a72080() {
   return (neuron0x2a5a190()*-0.0167503);
}

double NNfunction_ss_sRcR::synapse0x2a720c0() {
   return (neuron0x2a5a4d0()*-0.00624287);
}

double NNfunction_ss_sRcR::synapse0x2a72100() {
   return (neuron0x2a5a810()*-0.279642);
}

double NNfunction_ss_sRcR::synapse0x2a72140() {
   return (neuron0x2a5ab50()*0.0028916);
}

double NNfunction_ss_sRcR::synapse0x2a72180() {
   return (neuron0x2a5ae90()*0.00887036);
}

double NNfunction_ss_sRcR::synapse0x2a721c0() {
   return (neuron0x2a5b1d0()*-5.41756e-05);
}

double NNfunction_ss_sRcR::synapse0x2a72200() {
   return (neuron0x2a5b510()*-0.00174063);
}

double NNfunction_ss_sRcR::synapse0x2a72240() {
   return (neuron0x2a5b850()*0.00218313);
}

double NNfunction_ss_sRcR::synapse0x2a72280() {
   return (neuron0x2a5bb90()*-0.00163748);
}

double NNfunction_ss_sRcR::synapse0x2a722c0() {
   return (neuron0x2a5bed0()*-0.00151215);
}

double NNfunction_ss_sRcR::synapse0x2a72300() {
   return (neuron0x2a5c210()*0.062128);
}

double NNfunction_ss_sRcR::synapse0x2a72340() {
   return (neuron0x2a5c550()*0.0624057);
}

double NNfunction_ss_sRcR::synapse0x2a72380() {
   return (neuron0x2a5c890()*-0.0143211);
}

double NNfunction_ss_sRcR::synapse0x2a723c0() {
   return (neuron0x2a5cbd0()*0.0196884);
}

double NNfunction_ss_sRcR::synapse0x2a72400() {
   return (neuron0x2a5cf10()*-0.545204);
}

double NNfunction_ss_sRcR::synapse0x2a71e90() {
   return (neuron0x2a5d250()*-0.036837);
}

double NNfunction_ss_sRcR::synapse0x2a71ed0() {
   return (neuron0x2a5d7b0()*0.0204053);
}

double NNfunction_ss_sRcR::synapse0x2a72550() {
   return (neuron0x2a5d9d0()*-0.680391);
}

double NNfunction_ss_sRcR::synapse0x2a72590() {
   return (neuron0x2a5dd10()*0.00464553);
}

double NNfunction_ss_sRcR::synapse0x2a725d0() {
   return (neuron0x2a5e050()*0.00416201);
}

double NNfunction_ss_sRcR::synapse0x2a72610() {
   return (neuron0x2a5e390()*-0.000116529);
}

double NNfunction_ss_sRcR::synapse0x2a72650() {
   return (neuron0x2a5e6d0()*0.00348717);
}

double NNfunction_ss_sRcR::synapse0x2a72690() {
   return (neuron0x2a5ea10()*0.00575602);
}

double NNfunction_ss_sRcR::synapse0x2a72a10() {
   return (neuron0x2a59e50()*0.127921);
}

double NNfunction_ss_sRcR::synapse0x2a72a50() {
   return (neuron0x2a5a190()*0.0254822);
}

double NNfunction_ss_sRcR::synapse0x2a72a90() {
   return (neuron0x2a5a4d0()*-0.0181136);
}

double NNfunction_ss_sRcR::synapse0x2a72ad0() {
   return (neuron0x2a5a810()*2.38033);
}

double NNfunction_ss_sRcR::synapse0x2a72b10() {
   return (neuron0x2a5ab50()*-0.0449458);
}

double NNfunction_ss_sRcR::synapse0x2a72b50() {
   return (neuron0x2a5ae90()*0.134517);
}

double NNfunction_ss_sRcR::synapse0x2a72b90() {
   return (neuron0x2a5b1d0()*0.0702279);
}

double NNfunction_ss_sRcR::synapse0x2a72bd0() {
   return (neuron0x2a5b510()*-0.135302);
}

double NNfunction_ss_sRcR::synapse0x2a72c10() {
   return (neuron0x2a5b850()*0.0977491);
}

double NNfunction_ss_sRcR::synapse0x2a72c50() {
   return (neuron0x2a5bb90()*0.101713);
}

double NNfunction_ss_sRcR::synapse0x2a72c90() {
   return (neuron0x2a5bed0()*-0.0820899);
}

double NNfunction_ss_sRcR::synapse0x2a72cd0() {
   return (neuron0x2a5c210()*-0.128394);
}

double NNfunction_ss_sRcR::synapse0x2a72d10() {
   return (neuron0x2a5c550()*0.0994937);
}

double NNfunction_ss_sRcR::synapse0x2a72d50() {
   return (neuron0x2a5c890()*0.0234832);
}

double NNfunction_ss_sRcR::synapse0x2a72d90() {
   return (neuron0x2a5cbd0()*-0.102328);
}

double NNfunction_ss_sRcR::synapse0x2a72dd0() {
   return (neuron0x2a5cf10()*0.205725);
}

double NNfunction_ss_sRcR::synapse0x2a72860() {
   return (neuron0x2a5d250()*-0.217219);
}

double NNfunction_ss_sRcR::synapse0x2a728a0() {
   return (neuron0x2a5d7b0()*-0.0480031);
}

double NNfunction_ss_sRcR::synapse0x2a72f20() {
   return (neuron0x2a5d9d0()*0.503562);
}

double NNfunction_ss_sRcR::synapse0x2a72f60() {
   return (neuron0x2a5dd10()*-0.023869);
}

double NNfunction_ss_sRcR::synapse0x2a72fa0() {
   return (neuron0x2a5e050()*0.0536771);
}

double NNfunction_ss_sRcR::synapse0x2a72fe0() {
   return (neuron0x2a5e390()*-0.0366754);
}

double NNfunction_ss_sRcR::synapse0x2a73020() {
   return (neuron0x2a5e6d0()*-0.0225896);
}

double NNfunction_ss_sRcR::synapse0x2a73060() {
   return (neuron0x2a5ea10()*-0.0777184);
}

double NNfunction_ss_sRcR::synapse0x2a733e0() {
   return (neuron0x2a59e50()*-0.133368);
}

double NNfunction_ss_sRcR::synapse0x2a73420() {
   return (neuron0x2a5a190()*-0.134092);
}

double NNfunction_ss_sRcR::synapse0x2a73460() {
   return (neuron0x2a5a4d0()*0.158446);
}

double NNfunction_ss_sRcR::synapse0x2a734a0() {
   return (neuron0x2a5a810()*0.843894);
}

double NNfunction_ss_sRcR::synapse0x2a734e0() {
   return (neuron0x2a5ab50()*-0.133644);
}

double NNfunction_ss_sRcR::synapse0x2a73520() {
   return (neuron0x2a5ae90()*0.0874104);
}

double NNfunction_ss_sRcR::synapse0x2a73560() {
   return (neuron0x2a5b1d0()*-0.0631758);
}

double NNfunction_ss_sRcR::synapse0x2a735a0() {
   return (neuron0x2a5b510()*0.104223);
}

double NNfunction_ss_sRcR::synapse0x2a735e0() {
   return (neuron0x2a5b850()*-0.0203559);
}

double NNfunction_ss_sRcR::synapse0x2a73620() {
   return (neuron0x2a5bb90()*-0.167295);
}

double NNfunction_ss_sRcR::synapse0x2a73660() {
   return (neuron0x2a5bed0()*0.574464);
}

double NNfunction_ss_sRcR::synapse0x2a736a0() {
   return (neuron0x2a5c210()*0.400807);
}

double NNfunction_ss_sRcR::synapse0x2a736e0() {
   return (neuron0x2a5c550()*-0.256035);
}

double NNfunction_ss_sRcR::synapse0x2a73720() {
   return (neuron0x2a5c890()*0.0369789);
}

double NNfunction_ss_sRcR::synapse0x2a73760() {
   return (neuron0x2a5cbd0()*0.111896);
}

double NNfunction_ss_sRcR::synapse0x2a737a0() {
   return (neuron0x2a5cf10()*-1.27579);
}

double NNfunction_ss_sRcR::synapse0x2a73230() {
   return (neuron0x2a5d250()*0.188155);
}

double NNfunction_ss_sRcR::synapse0x2a73270() {
   return (neuron0x2a5d7b0()*0.345847);
}

double NNfunction_ss_sRcR::synapse0x2a738f0() {
   return (neuron0x2a5d9d0()*1.26301);
}

double NNfunction_ss_sRcR::synapse0x2a73930() {
   return (neuron0x2a5dd10()*-0.0211941);
}

double NNfunction_ss_sRcR::synapse0x2a73970() {
   return (neuron0x2a5e050()*-0.0520603);
}

double NNfunction_ss_sRcR::synapse0x2a739b0() {
   return (neuron0x2a5e390()*0.455042);
}

double NNfunction_ss_sRcR::synapse0x2a739f0() {
   return (neuron0x2a5e6d0()*-0.104976);
}

double NNfunction_ss_sRcR::synapse0x2a73a30() {
   return (neuron0x2a5ea10()*0.0255015);
}

double NNfunction_ss_sRcR::synapse0x2a73db0() {
   return (neuron0x2a59e50()*0.117833);
}

double NNfunction_ss_sRcR::synapse0x2a73df0() {
   return (neuron0x2a5a190()*-1.11002);
}

double NNfunction_ss_sRcR::synapse0x2a73e30() {
   return (neuron0x2a5a4d0()*0.643055);
}

double NNfunction_ss_sRcR::synapse0x2a73e70() {
   return (neuron0x2a5a810()*-0.0284358);
}

double NNfunction_ss_sRcR::synapse0x2a73eb0() {
   return (neuron0x2a5ab50()*0.00426892);
}

double NNfunction_ss_sRcR::synapse0x2a73ef0() {
   return (neuron0x2a5ae90()*-0.0740418);
}

double NNfunction_ss_sRcR::synapse0x2a73f30() {
   return (neuron0x2a5b1d0()*0.027733);
}

double NNfunction_ss_sRcR::synapse0x2a73f70() {
   return (neuron0x2a5b510()*0.997905);
}

double NNfunction_ss_sRcR::synapse0x2a73fb0() {
   return (neuron0x2a5b850()*0.585246);
}

double NNfunction_ss_sRcR::synapse0x2a73ff0() {
   return (neuron0x2a5bb90()*0.0727395);
}

double NNfunction_ss_sRcR::synapse0x2a74030() {
   return (neuron0x2a5bed0()*0.66075);
}

double NNfunction_ss_sRcR::synapse0x2a74070() {
   return (neuron0x2a5c210()*0.0855385);
}

double NNfunction_ss_sRcR::synapse0x2a740b0() {
   return (neuron0x2a5c550()*-0.85178);
}

double NNfunction_ss_sRcR::synapse0x2a740f0() {
   return (neuron0x2a5c890()*0.768153);
}

double NNfunction_ss_sRcR::synapse0x2a74130() {
   return (neuron0x2a5cbd0()*0.302246);
}

double NNfunction_ss_sRcR::synapse0x2a74170() {
   return (neuron0x2a5cf10()*-0.250894);
}

double NNfunction_ss_sRcR::synapse0x2a73c00() {
   return (neuron0x2a5d250()*0.830244);
}

double NNfunction_ss_sRcR::synapse0x2a73c40() {
   return (neuron0x2a5d7b0()*-0.0778681);
}

double NNfunction_ss_sRcR::synapse0x2a742c0() {
   return (neuron0x2a5d9d0()*-0.554594);
}

double NNfunction_ss_sRcR::synapse0x2a74300() {
   return (neuron0x2a5dd10()*0.40336);
}

double NNfunction_ss_sRcR::synapse0x2a74340() {
   return (neuron0x2a5e050()*-0.131004);
}

double NNfunction_ss_sRcR::synapse0x2a74380() {
   return (neuron0x2a5e390()*-0.189552);
}

double NNfunction_ss_sRcR::synapse0x2a743c0() {
   return (neuron0x2a5e6d0()*0.30779);
}

double NNfunction_ss_sRcR::synapse0x2a74400() {
   return (neuron0x2a5ea10()*0.0916018);
}

double NNfunction_ss_sRcR::synapse0x2a74780() {
   return (neuron0x2a59e50()*0.157055);
}

double NNfunction_ss_sRcR::synapse0x2a68d50() {
   return (neuron0x2a5a190()*-0.583094);
}

double NNfunction_ss_sRcR::synapse0x2a68d90() {
   return (neuron0x2a5a4d0()*-0.186651);
}

double NNfunction_ss_sRcR::synapse0x2a68dd0() {
   return (neuron0x2a5a810()*0.49896);
}

double NNfunction_ss_sRcR::synapse0x2a69020() {
   return (neuron0x2a5ab50()*-0.270074);
}

double NNfunction_ss_sRcR::synapse0x2a69060() {
   return (neuron0x2a5ae90()*-0.0756501);
}

double NNfunction_ss_sRcR::synapse0x2a690a0() {
   return (neuron0x2a5b1d0()*-0.0948702);
}

double NNfunction_ss_sRcR::synapse0x2a692f0() {
   return (neuron0x2a5b510()*-0.154337);
}

double NNfunction_ss_sRcR::synapse0x2a69330() {
   return (neuron0x2a5b850()*-0.0135941);
}

double NNfunction_ss_sRcR::synapse0x2a69580() {
   return (neuron0x2a5bb90()*0.135128);
}

double NNfunction_ss_sRcR::synapse0x2a695c0() {
   return (neuron0x2a5bed0()*-0.3007);
}

double NNfunction_ss_sRcR::synapse0x2a69600() {
   return (neuron0x2a5c210()*0.379033);
}

double NNfunction_ss_sRcR::synapse0x2a69850() {
   return (neuron0x2a5c550()*0.336056);
}

double NNfunction_ss_sRcR::synapse0x2a69890() {
   return (neuron0x2a5c890()*-0.188866);
}

double NNfunction_ss_sRcR::synapse0x2a69ae0() {
   return (neuron0x2a5cbd0()*-0.0731195);
}

double NNfunction_ss_sRcR::synapse0x2a69b20() {
   return (neuron0x2a5cf10()*0.682132);
}

double NNfunction_ss_sRcR::synapse0x2a745d0() {
   return (neuron0x2a5d250()*0.0421632);
}

double NNfunction_ss_sRcR::synapse0x2a74610() {
   return (neuron0x2a5d7b0()*0.401164);
}

double NNfunction_ss_sRcR::synapse0x2a69c70() {
   return (neuron0x2a5d9d0()*0.132871);
}

double NNfunction_ss_sRcR::synapse0x2a6a180() {
   return (neuron0x2a5dd10()*-0.64342);
}

double NNfunction_ss_sRcR::synapse0x2a6a1c0() {
   return (neuron0x2a5e050()*-0.348089);
}

double NNfunction_ss_sRcR::synapse0x2a6a200() {
   return (neuron0x2a5e390()*-0.0469571);
}

double NNfunction_ss_sRcR::synapse0x2a6a450() {
   return (neuron0x2a5e6d0()*0.0816984);
}

double NNfunction_ss_sRcR::synapse0x2a6a490() {
   return (neuron0x2a5ea10()*-0.0973219);
}

double NNfunction_ss_sRcR::synapse0x2a69d40() {
   return (neuron0x2a59e50()*-0.089489);
}

double NNfunction_ss_sRcR::synapse0x2a69d80() {
   return (neuron0x2a5a190()*0.318223);
}

double NNfunction_ss_sRcR::synapse0x2a69dc0() {
   return (neuron0x2a5a4d0()*0.0898426);
}

double NNfunction_ss_sRcR::synapse0x2a69e00() {
   return (neuron0x2a5a810()*0.263494);
}

double NNfunction_ss_sRcR::synapse0x2a6a780() {
   return (neuron0x2a5ab50()*-0.635114);
}

double NNfunction_ss_sRcR::synapse0x2a76ad0() {
   return (neuron0x2a5ae90()*-0.169358);
}

double NNfunction_ss_sRcR::synapse0x2a76b10() {
   return (neuron0x2a5b1d0()*0.139795);
}

double NNfunction_ss_sRcR::synapse0x2a76b50() {
   return (neuron0x2a5b510()*-0.0202433);
}

double NNfunction_ss_sRcR::synapse0x2a76b90() {
   return (neuron0x2a5b850()*0.725528);
}

double NNfunction_ss_sRcR::synapse0x2a76bd0() {
   return (neuron0x2a5bb90()*-0.327667);
}

double NNfunction_ss_sRcR::synapse0x2a76c10() {
   return (neuron0x2a5bed0()*-0.766996);
}

double NNfunction_ss_sRcR::synapse0x2a76c50() {
   return (neuron0x2a5c210()*1.02191);
}

double NNfunction_ss_sRcR::synapse0x2a76c90() {
   return (neuron0x2a5c550()*-0.199398);
}

double NNfunction_ss_sRcR::synapse0x2a76cd0() {
   return (neuron0x2a5c890()*0.273922);
}

double NNfunction_ss_sRcR::synapse0x2a76d10() {
   return (neuron0x2a5cbd0()*0.612687);
}

double NNfunction_ss_sRcR::synapse0x2a76d50() {
   return (neuron0x2a5cf10()*0.16495);
}

double NNfunction_ss_sRcR::synapse0x2a6a660() {
   return (neuron0x2a5d250()*0.889123);
}

double NNfunction_ss_sRcR::synapse0x2a6a6a0() {
   return (neuron0x2a5d7b0()*-0.338348);
}

double NNfunction_ss_sRcR::synapse0x2a76ea0() {
   return (neuron0x2a5d9d0()*-0.703078);
}

double NNfunction_ss_sRcR::synapse0x2a76ee0() {
   return (neuron0x2a5dd10()*-0.00963687);
}

double NNfunction_ss_sRcR::synapse0x2a76f20() {
   return (neuron0x2a5e050()*-0.381331);
}

double NNfunction_ss_sRcR::synapse0x2a76f60() {
   return (neuron0x2a5e390()*-0.340381);
}

double NNfunction_ss_sRcR::synapse0x2a76fa0() {
   return (neuron0x2a5e6d0()*0.276412);
}

double NNfunction_ss_sRcR::synapse0x2a76fe0() {
   return (neuron0x2a5ea10()*0.055123);
}

double NNfunction_ss_sRcR::synapse0x2a77360() {
   return (neuron0x2a59e50()*0.0165041);
}

double NNfunction_ss_sRcR::synapse0x2a773a0() {
   return (neuron0x2a5a190()*-0.0252264);
}

double NNfunction_ss_sRcR::synapse0x2a773e0() {
   return (neuron0x2a5a4d0()*-0.00178924);
}

double NNfunction_ss_sRcR::synapse0x2a77420() {
   return (neuron0x2a5a810()*2.5293);
}

double NNfunction_ss_sRcR::synapse0x2a77460() {
   return (neuron0x2a5ab50()*-0.00545147);
}

double NNfunction_ss_sRcR::synapse0x2a774a0() {
   return (neuron0x2a5ae90()*0.00692921);
}

double NNfunction_ss_sRcR::synapse0x2a774e0() {
   return (neuron0x2a5b1d0()*-0.00479229);
}

double NNfunction_ss_sRcR::synapse0x2a77520() {
   return (neuron0x2a5b510()*-0.0177397);
}

double NNfunction_ss_sRcR::synapse0x2a77560() {
   return (neuron0x2a5b850()*0.0082228);
}

double NNfunction_ss_sRcR::synapse0x2a775a0() {
   return (neuron0x2a5bb90()*0.000528538);
}

double NNfunction_ss_sRcR::synapse0x2a775e0() {
   return (neuron0x2a5bed0()*-0.0158566);
}

double NNfunction_ss_sRcR::synapse0x2a77620() {
   return (neuron0x2a5c210()*-0.0202551);
}

double NNfunction_ss_sRcR::synapse0x2a77660() {
   return (neuron0x2a5c550()*-0.0211678);
}

double NNfunction_ss_sRcR::synapse0x2a776a0() {
   return (neuron0x2a5c890()*-0.0131995);
}

double NNfunction_ss_sRcR::synapse0x2a776e0() {
   return (neuron0x2a5cbd0()*-0.00930358);
}

double NNfunction_ss_sRcR::synapse0x2a77720() {
   return (neuron0x2a5cf10()*0.065465);
}

double NNfunction_ss_sRcR::synapse0x2a771b0() {
   return (neuron0x2a5d250()*-0.00740619);
}

double NNfunction_ss_sRcR::synapse0x2a771f0() {
   return (neuron0x2a5d7b0()*0.000212945);
}

double NNfunction_ss_sRcR::synapse0x2a77870() {
   return (neuron0x2a5d9d0()*0.218916);
}

double NNfunction_ss_sRcR::synapse0x2a778b0() {
   return (neuron0x2a5dd10()*-0.0143435);
}

double NNfunction_ss_sRcR::synapse0x2a778f0() {
   return (neuron0x2a5e050()*0.0298459);
}

double NNfunction_ss_sRcR::synapse0x2a77930() {
   return (neuron0x2a5e390()*-0.0144484);
}

double NNfunction_ss_sRcR::synapse0x2a77970() {
   return (neuron0x2a5e6d0()*0.0041798);
}

double NNfunction_ss_sRcR::synapse0x2a779b0() {
   return (neuron0x2a5ea10()*0.00215421);
}

double NNfunction_ss_sRcR::synapse0x2a77d30() {
   return (neuron0x2a59e50()*-0.518174);
}

double NNfunction_ss_sRcR::synapse0x2a77d70() {
   return (neuron0x2a5a190()*0.141233);
}

double NNfunction_ss_sRcR::synapse0x2a77db0() {
   return (neuron0x2a5a4d0()*0.0131484);
}

double NNfunction_ss_sRcR::synapse0x2a77df0() {
   return (neuron0x2a5a810()*0.174551);
}

double NNfunction_ss_sRcR::synapse0x2a77e30() {
   return (neuron0x2a5ab50()*0.718539);
}

double NNfunction_ss_sRcR::synapse0x2a77e70() {
   return (neuron0x2a5ae90()*-0.442414);
}

double NNfunction_ss_sRcR::synapse0x2a77eb0() {
   return (neuron0x2a5b1d0()*0.184556);
}

double NNfunction_ss_sRcR::synapse0x2a77ef0() {
   return (neuron0x2a5b510()*0.454856);
}

double NNfunction_ss_sRcR::synapse0x2a77f30() {
   return (neuron0x2a5b850()*0.52892);
}

double NNfunction_ss_sRcR::synapse0x2a77f70() {
   return (neuron0x2a5bb90()*-0.0683435);
}

double NNfunction_ss_sRcR::synapse0x2a77fb0() {
   return (neuron0x2a5bed0()*-0.497424);
}

double NNfunction_ss_sRcR::synapse0x2a77ff0() {
   return (neuron0x2a5c210()*-0.27525);
}

double NNfunction_ss_sRcR::synapse0x2a78030() {
   return (neuron0x2a5c550()*-0.549167);
}

double NNfunction_ss_sRcR::synapse0x2a78070() {
   return (neuron0x2a5c890()*0.604182);
}

double NNfunction_ss_sRcR::synapse0x2a780b0() {
   return (neuron0x2a5cbd0()*1.33973);
}

double NNfunction_ss_sRcR::synapse0x2a780f0() {
   return (neuron0x2a5cf10()*0.269158);
}

double NNfunction_ss_sRcR::synapse0x2a77b80() {
   return (neuron0x2a5d250()*0.2414);
}

double NNfunction_ss_sRcR::synapse0x2a77bc0() {
   return (neuron0x2a5d7b0()*-0.0679088);
}

double NNfunction_ss_sRcR::synapse0x2a78240() {
   return (neuron0x2a5d9d0()*0.368894);
}

double NNfunction_ss_sRcR::synapse0x2a78280() {
   return (neuron0x2a5dd10()*1.21633);
}

double NNfunction_ss_sRcR::synapse0x2a782c0() {
   return (neuron0x2a5e050()*0.238929);
}

double NNfunction_ss_sRcR::synapse0x2a78300() {
   return (neuron0x2a5e390()*1.23485);
}

double NNfunction_ss_sRcR::synapse0x2a78340() {
   return (neuron0x2a5e6d0()*-0.693217);
}

double NNfunction_ss_sRcR::synapse0x2a78380() {
   return (neuron0x2a5ea10()*-0.183814);
}

double NNfunction_ss_sRcR::synapse0x2a78700() {
   return (neuron0x2a59e50()*0.824821);
}

double NNfunction_ss_sRcR::synapse0x2a78740() {
   return (neuron0x2a5a190()*0.277713);
}

double NNfunction_ss_sRcR::synapse0x2a78780() {
   return (neuron0x2a5a4d0()*1.1886);
}

double NNfunction_ss_sRcR::synapse0x2a787c0() {
   return (neuron0x2a5a810()*-0.263838);
}

double NNfunction_ss_sRcR::synapse0x2a78800() {
   return (neuron0x2a5ab50()*0.337517);
}

double NNfunction_ss_sRcR::synapse0x2a78840() {
   return (neuron0x2a5ae90()*0.865258);
}

double NNfunction_ss_sRcR::synapse0x2a78880() {
   return (neuron0x2a5b1d0()*-0.784149);
}

double NNfunction_ss_sRcR::synapse0x2a788c0() {
   return (neuron0x2a5b510()*0.478418);
}

double NNfunction_ss_sRcR::synapse0x2a78900() {
   return (neuron0x2a5b850()*0.290243);
}

double NNfunction_ss_sRcR::synapse0x2a78940() {
   return (neuron0x2a5bb90()*-0.369283);
}

double NNfunction_ss_sRcR::synapse0x2a78980() {
   return (neuron0x2a5bed0()*-0.369903);
}

double NNfunction_ss_sRcR::synapse0x2a789c0() {
   return (neuron0x2a5c210()*-0.496228);
}

double NNfunction_ss_sRcR::synapse0x2a78a00() {
   return (neuron0x2a5c550()*0.0781922);
}

double NNfunction_ss_sRcR::synapse0x2a78a40() {
   return (neuron0x2a5c890()*0.133142);
}

double NNfunction_ss_sRcR::synapse0x2a78a80() {
   return (neuron0x2a5cbd0()*-0.271941);
}

double NNfunction_ss_sRcR::synapse0x2a78ac0() {
   return (neuron0x2a5cf10()*0.914969);
}

double NNfunction_ss_sRcR::synapse0x2a78550() {
   return (neuron0x2a5d250()*0.0164354);
}

double NNfunction_ss_sRcR::synapse0x2a78590() {
   return (neuron0x2a5d7b0()*-0.447585);
}

double NNfunction_ss_sRcR::synapse0x2a78c10() {
   return (neuron0x2a5d9d0()*-0.171089);
}

double NNfunction_ss_sRcR::synapse0x2a78c50() {
   return (neuron0x2a5dd10()*-0.267516);
}

double NNfunction_ss_sRcR::synapse0x2a78c90() {
   return (neuron0x2a5e050()*0.38429);
}

double NNfunction_ss_sRcR::synapse0x2a78cd0() {
   return (neuron0x2a5e390()*0.96874);
}

double NNfunction_ss_sRcR::synapse0x2a78d10() {
   return (neuron0x2a5e6d0()*0.0386226);
}

double NNfunction_ss_sRcR::synapse0x2a78d50() {
   return (neuron0x2a5ea10()*0.301821);
}

double NNfunction_ss_sRcR::synapse0x2a790d0() {
   return (neuron0x2a59e50()*-0.210767);
}

double NNfunction_ss_sRcR::synapse0x2a79110() {
   return (neuron0x2a5a190()*-1.27207);
}

double NNfunction_ss_sRcR::synapse0x2a79150() {
   return (neuron0x2a5a4d0()*-1.3135);
}

double NNfunction_ss_sRcR::synapse0x2a79190() {
   return (neuron0x2a5a810()*-0.633762);
}

double NNfunction_ss_sRcR::synapse0x2a791d0() {
   return (neuron0x2a5ab50()*-1.19168);
}

double NNfunction_ss_sRcR::synapse0x2a79210() {
   return (neuron0x2a5ae90()*-0.568294);
}

double NNfunction_ss_sRcR::synapse0x2a79250() {
   return (neuron0x2a5b1d0()*0.84849);
}

double NNfunction_ss_sRcR::synapse0x2a79290() {
   return (neuron0x2a5b510()*-0.0157099);
}

double NNfunction_ss_sRcR::synapse0x2a792d0() {
   return (neuron0x2a5b850()*-1.04999);
}

double NNfunction_ss_sRcR::synapse0x2a79310() {
   return (neuron0x2a5bb90()*0.194037);
}

double NNfunction_ss_sRcR::synapse0x2a79350() {
   return (neuron0x2a5bed0()*-0.202069);
}

double NNfunction_ss_sRcR::synapse0x2a79390() {
   return (neuron0x2a5c210()*0.801071);
}

double NNfunction_ss_sRcR::synapse0x2a793d0() {
   return (neuron0x2a5c550()*-1.71793);
}

double NNfunction_ss_sRcR::synapse0x2a79410() {
   return (neuron0x2a5c890()*0.339829);
}

double NNfunction_ss_sRcR::synapse0x2a79450() {
   return (neuron0x2a5cbd0()*-0.502988);
}

double NNfunction_ss_sRcR::synapse0x2a79490() {
   return (neuron0x2a5cf10()*0.440872);
}

double NNfunction_ss_sRcR::synapse0x2a78f20() {
   return (neuron0x2a5d250()*0.142055);
}

double NNfunction_ss_sRcR::synapse0x2a78f60() {
   return (neuron0x2a5d7b0()*-0.879409);
}

double NNfunction_ss_sRcR::synapse0x2a795e0() {
   return (neuron0x2a5d9d0()*1.48377);
}

double NNfunction_ss_sRcR::synapse0x2a79620() {
   return (neuron0x2a5dd10()*-0.785041);
}

double NNfunction_ss_sRcR::synapse0x2a79660() {
   return (neuron0x2a5e050()*-0.55452);
}

double NNfunction_ss_sRcR::synapse0x2a796a0() {
   return (neuron0x2a5e390()*0.261806);
}

double NNfunction_ss_sRcR::synapse0x2a796e0() {
   return (neuron0x2a5e6d0()*0.112421);
}

double NNfunction_ss_sRcR::synapse0x2a79720() {
   return (neuron0x2a5ea10()*0.137354);
}

double NNfunction_ss_sRcR::synapse0x2a79aa0() {
   return (neuron0x2a59e50()*-0.117767);
}

double NNfunction_ss_sRcR::synapse0x2a79ae0() {
   return (neuron0x2a5a190()*0.723211);
}

double NNfunction_ss_sRcR::synapse0x2a79b20() {
   return (neuron0x2a5a4d0()*-0.0517807);
}

double NNfunction_ss_sRcR::synapse0x2a79b60() {
   return (neuron0x2a5a810()*0.274683);
}

double NNfunction_ss_sRcR::synapse0x2a79ba0() {
   return (neuron0x2a5ab50()*0.147815);
}

double NNfunction_ss_sRcR::synapse0x2a79be0() {
   return (neuron0x2a5ae90()*-0.025349);
}

double NNfunction_ss_sRcR::synapse0x2a79c20() {
   return (neuron0x2a5b1d0()*0.29823);
}

double NNfunction_ss_sRcR::synapse0x2a79c60() {
   return (neuron0x2a5b510()*-0.0241027);
}

double NNfunction_ss_sRcR::synapse0x2a79ca0() {
   return (neuron0x2a5b850()*-0.647991);
}

double NNfunction_ss_sRcR::synapse0x2a79ce0() {
   return (neuron0x2a5bb90()*-0.017138);
}

double NNfunction_ss_sRcR::synapse0x2a79d20() {
   return (neuron0x2a5bed0()*0.175549);
}

double NNfunction_ss_sRcR::synapse0x2a79d60() {
   return (neuron0x2a5c210()*-0.195512);
}

double NNfunction_ss_sRcR::synapse0x2a79da0() {
   return (neuron0x2a5c550()*0.62055);
}

double NNfunction_ss_sRcR::synapse0x2a79de0() {
   return (neuron0x2a5c890()*0.302083);
}

double NNfunction_ss_sRcR::synapse0x2a79e20() {
   return (neuron0x2a5cbd0()*0.0414828);
}

double NNfunction_ss_sRcR::synapse0x2a79e60() {
   return (neuron0x2a5cf10()*-1.75366);
}

double NNfunction_ss_sRcR::synapse0x2a798f0() {
   return (neuron0x2a5d250()*0.152716);
}

double NNfunction_ss_sRcR::synapse0x2a79930() {
   return (neuron0x2a5d7b0()*-0.698974);
}

double NNfunction_ss_sRcR::synapse0x2a79fb0() {
   return (neuron0x2a5d9d0()*0.0866867);
}

double NNfunction_ss_sRcR::synapse0x2a79ff0() {
   return (neuron0x2a5dd10()*0.594696);
}

double NNfunction_ss_sRcR::synapse0x2a7a030() {
   return (neuron0x2a5e050()*0.0941424);
}

double NNfunction_ss_sRcR::synapse0x2a7a070() {
   return (neuron0x2a5e390()*-0.0823137);
}

double NNfunction_ss_sRcR::synapse0x2a7a0b0() {
   return (neuron0x2a5e6d0()*0.0895361);
}

double NNfunction_ss_sRcR::synapse0x2a7a0f0() {
   return (neuron0x2a5ea10()*-0.0585508);
}

double NNfunction_ss_sRcR::synapse0x2a7a470() {
   return (neuron0x2a59e50()*-0.237002);
}

double NNfunction_ss_sRcR::synapse0x2a7a4b0() {
   return (neuron0x2a5a190()*-0.325653);
}

double NNfunction_ss_sRcR::synapse0x2a7a4f0() {
   return (neuron0x2a5a4d0()*-0.436082);
}

double NNfunction_ss_sRcR::synapse0x2a7a530() {
   return (neuron0x2a5a810()*1.06483);
}

double NNfunction_ss_sRcR::synapse0x2a7a570() {
   return (neuron0x2a5ab50()*0.18038);
}

double NNfunction_ss_sRcR::synapse0x2a7a5b0() {
   return (neuron0x2a5ae90()*-0.280444);
}

double NNfunction_ss_sRcR::synapse0x2a7a5f0() {
   return (neuron0x2a5b1d0()*0.156565);
}

double NNfunction_ss_sRcR::synapse0x2a7a630() {
   return (neuron0x2a5b510()*0.0877039);
}

double NNfunction_ss_sRcR::synapse0x2a7a670() {
   return (neuron0x2a5b850()*-0.146822);
}

double NNfunction_ss_sRcR::synapse0x2a7a6b0() {
   return (neuron0x2a5bb90()*-0.527127);
}

double NNfunction_ss_sRcR::synapse0x2a7a6f0() {
   return (neuron0x2a5bed0()*-0.126292);
}

double NNfunction_ss_sRcR::synapse0x2a7a730() {
   return (neuron0x2a5c210()*-0.176706);
}

double NNfunction_ss_sRcR::synapse0x2a7a770() {
   return (neuron0x2a5c550()*-0.00651483);
}

double NNfunction_ss_sRcR::synapse0x2a7a7b0() {
   return (neuron0x2a5c890()*-0.172377);
}

double NNfunction_ss_sRcR::synapse0x2a7a7f0() {
   return (neuron0x2a5cbd0()*0.334583);
}

double NNfunction_ss_sRcR::synapse0x2a7a830() {
   return (neuron0x2a5cf10()*-0.00968741);
}

double NNfunction_ss_sRcR::synapse0x2a7a2c0() {
   return (neuron0x2a5d250()*-0.413419);
}

double NNfunction_ss_sRcR::synapse0x2a7a300() {
   return (neuron0x2a5d7b0()*-0.337879);
}

double NNfunction_ss_sRcR::synapse0x2a7a980() {
   return (neuron0x2a5d9d0()*-0.877154);
}

double NNfunction_ss_sRcR::synapse0x2a7a9c0() {
   return (neuron0x2a5dd10()*0.245428);
}

double NNfunction_ss_sRcR::synapse0x2a7aa00() {
   return (neuron0x2a5e050()*-0.177031);
}

double NNfunction_ss_sRcR::synapse0x2a7aa40() {
   return (neuron0x2a5e390()*-0.0656131);
}

double NNfunction_ss_sRcR::synapse0x2a7aa80() {
   return (neuron0x2a5e6d0()*0.0191035);
}

double NNfunction_ss_sRcR::synapse0x2a7aac0() {
   return (neuron0x2a5ea10()*0.394587);
}

double NNfunction_ss_sRcR::synapse0x2a7ae40() {
   return (neuron0x2a59e50()*-0.0382299);
}

double NNfunction_ss_sRcR::synapse0x2a7ae80() {
   return (neuron0x2a5a190()*0.00683632);
}

double NNfunction_ss_sRcR::synapse0x2a7aec0() {
   return (neuron0x2a5a4d0()*-0.0149173);
}

double NNfunction_ss_sRcR::synapse0x2a7af00() {
   return (neuron0x2a5a810()*-0.0657346);
}

double NNfunction_ss_sRcR::synapse0x2a7af40() {
   return (neuron0x2a5ab50()*-0.0133497);
}

double NNfunction_ss_sRcR::synapse0x2a7af80() {
   return (neuron0x2a5ae90()*-0.0163514);
}

double NNfunction_ss_sRcR::synapse0x2a7afc0() {
   return (neuron0x2a5b1d0()*0.0256163);
}

double NNfunction_ss_sRcR::synapse0x2a7b000() {
   return (neuron0x2a5b510()*2.44803e-05);
}

double NNfunction_ss_sRcR::synapse0x2a7b040() {
   return (neuron0x2a5b850()*-0.022447);
}

double NNfunction_ss_sRcR::synapse0x2a7b080() {
   return (neuron0x2a5bb90()*-0.0103291);
}

double NNfunction_ss_sRcR::synapse0x2a7b0c0() {
   return (neuron0x2a5bed0()*-0.0135778);
}

double NNfunction_ss_sRcR::synapse0x2a7b100() {
   return (neuron0x2a5c210()*-0.0185578);
}

double NNfunction_ss_sRcR::synapse0x2a7b140() {
   return (neuron0x2a5c550()*-0.0224747);
}

double NNfunction_ss_sRcR::synapse0x2a7b180() {
   return (neuron0x2a5c890()*0.0163714);
}

double NNfunction_ss_sRcR::synapse0x2a7b1c0() {
   return (neuron0x2a5cbd0()*-0.00936191);
}

double NNfunction_ss_sRcR::synapse0x2a7b200() {
   return (neuron0x2a5cf10()*-0.281871);
}

double NNfunction_ss_sRcR::synapse0x2a7ac90() {
   return (neuron0x2a5d250()*-0.00845855);
}

double NNfunction_ss_sRcR::synapse0x2a7acd0() {
   return (neuron0x2a5d7b0()*-0.00560194);
}

double NNfunction_ss_sRcR::synapse0x2a7b350() {
   return (neuron0x2a5d9d0()*1.49009);
}

double NNfunction_ss_sRcR::synapse0x2a7b390() {
   return (neuron0x2a5dd10()*0.016568);
}

double NNfunction_ss_sRcR::synapse0x2a7b3d0() {
   return (neuron0x2a5e050()*0.0155562);
}

double NNfunction_ss_sRcR::synapse0x2a7b410() {
   return (neuron0x2a5e390()*0.0239719);
}

double NNfunction_ss_sRcR::synapse0x2a7b450() {
   return (neuron0x2a5e6d0()*-0.0198484);
}

double NNfunction_ss_sRcR::synapse0x2a7b490() {
   return (neuron0x2a5ea10()*0.0180337);
}

double NNfunction_ss_sRcR::synapse0x2a63f40() {
   return (neuron0x2a59e50()*-0.0235289);
}

double NNfunction_ss_sRcR::synapse0x2a63f80() {
   return (neuron0x2a5a190()*-0.0265637);
}

double NNfunction_ss_sRcR::synapse0x2a63fc0() {
   return (neuron0x2a5a4d0()*-0.0538255);
}

double NNfunction_ss_sRcR::synapse0x2a64000() {
   return (neuron0x2a5a810()*-1.88016);
}

double NNfunction_ss_sRcR::synapse0x2a64040() {
   return (neuron0x2a5ab50()*-0.0396104);
}

double NNfunction_ss_sRcR::synapse0x2a64080() {
   return (neuron0x2a5ae90()*0.00290753);
}

double NNfunction_ss_sRcR::synapse0x2a640c0() {
   return (neuron0x2a5b1d0()*0.0217709);
}

double NNfunction_ss_sRcR::synapse0x2a64100() {
   return (neuron0x2a5b510()*-0.00629725);
}

double NNfunction_ss_sRcR::synapse0x2a7bc20() {
   return (neuron0x2a5b850()*-0.0128737);
}

double NNfunction_ss_sRcR::synapse0x2a7bc60() {
   return (neuron0x2a5bb90()*0.00632141);
}

double NNfunction_ss_sRcR::synapse0x2a7bca0() {
   return (neuron0x2a5bed0()*-0.00243902);
}

double NNfunction_ss_sRcR::synapse0x2a7bce0() {
   return (neuron0x2a5c210()*0.0626438);
}

double NNfunction_ss_sRcR::synapse0x2a7bd20() {
   return (neuron0x2a5c550()*0.034276);
}

double NNfunction_ss_sRcR::synapse0x2a7bd60() {
   return (neuron0x2a5c890()*0.0089571);
}

double NNfunction_ss_sRcR::synapse0x2a7bda0() {
   return (neuron0x2a5cbd0()*0.0595415);
}

double NNfunction_ss_sRcR::synapse0x2a7bde0() {
   return (neuron0x2a5cf10()*0.834206);
}

double NNfunction_ss_sRcR::synapse0x2a7b660() {
   return (neuron0x2a5d250()*-0.0251784);
}

double NNfunction_ss_sRcR::synapse0x2a7b6a0() {
   return (neuron0x2a5d7b0()*-0.00152046);
}

double NNfunction_ss_sRcR::synapse0x2a7bf30() {
   return (neuron0x2a5d9d0()*-0.182525);
}

double NNfunction_ss_sRcR::synapse0x2a7bf70() {
   return (neuron0x2a5dd10()*0.0224972);
}

double NNfunction_ss_sRcR::synapse0x2a7bfb0() {
   return (neuron0x2a5e050()*0.0199058);
}

double NNfunction_ss_sRcR::synapse0x2a7bff0() {
   return (neuron0x2a5e390()*-0.0438756);
}

double NNfunction_ss_sRcR::synapse0x2a7c030() {
   return (neuron0x2a5e6d0()*-0.000123199);
}

double NNfunction_ss_sRcR::synapse0x2a7c070() {
   return (neuron0x2a5ea10()*0.0159696);
}

double NNfunction_ss_sRcR::synapse0x2a7c3f0() {
   return (neuron0x2a59e50()*-0.253795);
}

double NNfunction_ss_sRcR::synapse0x2a7c430() {
   return (neuron0x2a5a190()*-0.638716);
}

double NNfunction_ss_sRcR::synapse0x2a7c470() {
   return (neuron0x2a5a4d0()*0.447111);
}

double NNfunction_ss_sRcR::synapse0x2a7c4b0() {
   return (neuron0x2a5a810()*-0.0234037);
}

double NNfunction_ss_sRcR::synapse0x2a7c4f0() {
   return (neuron0x2a5ab50()*-0.409348);
}

double NNfunction_ss_sRcR::synapse0x2a7c530() {
   return (neuron0x2a5ae90()*-0.0735422);
}

double NNfunction_ss_sRcR::synapse0x2a7c570() {
   return (neuron0x2a5b1d0()*-0.111406);
}

double NNfunction_ss_sRcR::synapse0x2a7c5b0() {
   return (neuron0x2a5b510()*-0.378057);
}

double NNfunction_ss_sRcR::synapse0x2a7c5f0() {
   return (neuron0x2a5b850()*-0.00916612);
}

double NNfunction_ss_sRcR::synapse0x2a7c630() {
   return (neuron0x2a5bb90()*-0.0905232);
}

double NNfunction_ss_sRcR::synapse0x2a7c670() {
   return (neuron0x2a5bed0()*0.0944778);
}

double NNfunction_ss_sRcR::synapse0x2a7c6b0() {
   return (neuron0x2a5c210()*0.113424);
}

double NNfunction_ss_sRcR::synapse0x2a7c6f0() {
   return (neuron0x2a5c550()*0.692945);
}

double NNfunction_ss_sRcR::synapse0x2a7c730() {
   return (neuron0x2a5c890()*0.606454);
}

double NNfunction_ss_sRcR::synapse0x2a7c770() {
   return (neuron0x2a5cbd0()*-0.0154178);
}

double NNfunction_ss_sRcR::synapse0x2a7c7b0() {
   return (neuron0x2a5cf10()*-0.0272334);
}

double NNfunction_ss_sRcR::synapse0x2a7c240() {
   return (neuron0x2a5d250()*0.260233);
}

double NNfunction_ss_sRcR::synapse0x2a7c280() {
   return (neuron0x2a5d7b0()*0.187242);
}

double NNfunction_ss_sRcR::synapse0x2a7c900() {
   return (neuron0x2a5d9d0()*1.26363);
}

double NNfunction_ss_sRcR::synapse0x2a7c940() {
   return (neuron0x2a5dd10()*-0.452245);
}

double NNfunction_ss_sRcR::synapse0x2a7c980() {
   return (neuron0x2a5e050()*-0.065122);
}

double NNfunction_ss_sRcR::synapse0x2a7c9c0() {
   return (neuron0x2a5e390()*0.334514);
}

double NNfunction_ss_sRcR::synapse0x2a7ca00() {
   return (neuron0x2a5e6d0()*-0.0161975);
}

double NNfunction_ss_sRcR::synapse0x2a7ca40() {
   return (neuron0x2a5ea10()*-0.109819);
}

double NNfunction_ss_sRcR::synapse0x2a7cdc0() {
   return (neuron0x2a59e50()*-0.024519);
}

double NNfunction_ss_sRcR::synapse0x2a7ce00() {
   return (neuron0x2a5a190()*0.00834345);
}

double NNfunction_ss_sRcR::synapse0x2a7ce40() {
   return (neuron0x2a5a4d0()*-0.0204814);
}

double NNfunction_ss_sRcR::synapse0x2a7ce80() {
   return (neuron0x2a5a810()*7.47219);
}

double NNfunction_ss_sRcR::synapse0x2a7cec0() {
   return (neuron0x2a5ab50()*-0.00269969);
}

double NNfunction_ss_sRcR::synapse0x2a7cf00() {
   return (neuron0x2a5ae90()*-0.0343321);
}

double NNfunction_ss_sRcR::synapse0x2a7cf40() {
   return (neuron0x2a5b1d0()*0.00413509);
}

double NNfunction_ss_sRcR::synapse0x2a7cf80() {
   return (neuron0x2a5b510()*0.00607467);
}

double NNfunction_ss_sRcR::synapse0x2a7cfc0() {
   return (neuron0x2a5b850()*-0.0217585);
}

double NNfunction_ss_sRcR::synapse0x2a7d000() {
   return (neuron0x2a5bb90()*-0.0153415);
}

double NNfunction_ss_sRcR::synapse0x2a7d040() {
   return (neuron0x2a5bed0()*0.0237366);
}

double NNfunction_ss_sRcR::synapse0x2a7d080() {
   return (neuron0x2a5c210()*0.0339976);
}

double NNfunction_ss_sRcR::synapse0x2a7d0c0() {
   return (neuron0x2a5c550()*0.0115997);
}

double NNfunction_ss_sRcR::synapse0x2a7d100() {
   return (neuron0x2a5c890()*-0.0079127);
}

double NNfunction_ss_sRcR::synapse0x2a7d140() {
   return (neuron0x2a5cbd0()*-0.013298);
}

double NNfunction_ss_sRcR::synapse0x2a7d180() {
   return (neuron0x2a5cf10()*0.245489);
}

double NNfunction_ss_sRcR::synapse0x2a7cc10() {
   return (neuron0x2a5d250()*0.00996139);
}

double NNfunction_ss_sRcR::synapse0x2a7cc50() {
   return (neuron0x2a5d7b0()*-0.000108928);
}

double NNfunction_ss_sRcR::synapse0x2a6d780() {
   return (neuron0x2a5d9d0()*0.22139);
}

double NNfunction_ss_sRcR::synapse0x2a6d7c0() {
   return (neuron0x2a5dd10()*0.000417777);
}

double NNfunction_ss_sRcR::synapse0x2a6d800() {
   return (neuron0x2a5e050()*-0.0570641);
}

double NNfunction_ss_sRcR::synapse0x2a6d840() {
   return (neuron0x2a5e390()*0.0368112);
}

double NNfunction_ss_sRcR::synapse0x2a6d880() {
   return (neuron0x2a5e6d0()*-0.0266468);
}

double NNfunction_ss_sRcR::synapse0x2a6d8c0() {
   return (neuron0x2a5ea10()*0.0246312);
}

double NNfunction_ss_sRcR::synapse0x2a6dc40() {
   return (neuron0x2a59e50()*-0.110359);
}

double NNfunction_ss_sRcR::synapse0x2a6dc80() {
   return (neuron0x2a5a190()*-0.0350696);
}

double NNfunction_ss_sRcR::synapse0x2a6dcc0() {
   return (neuron0x2a5a4d0()*0.00803321);
}

double NNfunction_ss_sRcR::synapse0x2a6dd00() {
   return (neuron0x2a5a810()*-0.376976);
}

double NNfunction_ss_sRcR::synapse0x2a6dd40() {
   return (neuron0x2a5ab50()*-1.16535);
}

double NNfunction_ss_sRcR::synapse0x2a6dd80() {
   return (neuron0x2a5ae90()*1.11318);
}

double NNfunction_ss_sRcR::synapse0x2a6ddc0() {
   return (neuron0x2a5b1d0()*0.460415);
}

double NNfunction_ss_sRcR::synapse0x2a6de00() {
   return (neuron0x2a5b510()*0.38573);
}

double NNfunction_ss_sRcR::synapse0x2a6de40() {
   return (neuron0x2a5b850()*-0.406333);
}

double NNfunction_ss_sRcR::synapse0x2a6de80() {
   return (neuron0x2a5bb90()*-0.0358282);
}

double NNfunction_ss_sRcR::synapse0x2a6dec0() {
   return (neuron0x2a5bed0()*0.981863);
}

double NNfunction_ss_sRcR::synapse0x2a6df00() {
   return (neuron0x2a5c210()*-0.373454);
}

double NNfunction_ss_sRcR::synapse0x2a6df40() {
   return (neuron0x2a5c550()*-0.536342);
}

double NNfunction_ss_sRcR::synapse0x2a6df80() {
   return (neuron0x2a5c890()*0.21803);
}

double NNfunction_ss_sRcR::synapse0x2a6dfc0() {
   return (neuron0x2a5cbd0()*-0.438966);
}

double NNfunction_ss_sRcR::synapse0x2a6e000() {
   return (neuron0x2a5cf10()*0.541142);
}

double NNfunction_ss_sRcR::synapse0x2a6da90() {
   return (neuron0x2a5d250()*0.404512);
}

double NNfunction_ss_sRcR::synapse0x2a6dad0() {
   return (neuron0x2a5d7b0()*0.201264);
}

double NNfunction_ss_sRcR::synapse0x2a6e150() {
   return (neuron0x2a5d9d0()*-0.293543);
}

double NNfunction_ss_sRcR::synapse0x2a6e190() {
   return (neuron0x2a5dd10()*0.769498);
}

double NNfunction_ss_sRcR::synapse0x2a6e1d0() {
   return (neuron0x2a5e050()*-0.334741);
}

double NNfunction_ss_sRcR::synapse0x2a6e210() {
   return (neuron0x2a5e390()*0.516933);
}

double NNfunction_ss_sRcR::synapse0x2a6e250() {
   return (neuron0x2a5e6d0()*0.0825909);
}

double NNfunction_ss_sRcR::synapse0x2a6e290() {
   return (neuron0x2a5ea10()*-0.0961278);
}

double NNfunction_ss_sRcR::synapse0x2a6e610() {
   return (neuron0x2a59e50()*-0.130726);
}

double NNfunction_ss_sRcR::synapse0x2a6e650() {
   return (neuron0x2a5a190()*0.26249);
}

double NNfunction_ss_sRcR::synapse0x2a6e690() {
   return (neuron0x2a5a4d0()*0.265943);
}

double NNfunction_ss_sRcR::synapse0x2a6e6d0() {
   return (neuron0x2a5a810()*-3.15253);
}

double NNfunction_ss_sRcR::synapse0x2a6e710() {
   return (neuron0x2a5ab50()*-0.40887);
}

double NNfunction_ss_sRcR::synapse0x2a6e750() {
   return (neuron0x2a5ae90()*0.0162056);
}

double NNfunction_ss_sRcR::synapse0x2a6e790() {
   return (neuron0x2a5b1d0()*-0.330547);
}

double NNfunction_ss_sRcR::synapse0x2a6e7d0() {
   return (neuron0x2a5b510()*0.26393);
}

double NNfunction_ss_sRcR::synapse0x2a6e810() {
   return (neuron0x2a5b850()*-0.0312042);
}

double NNfunction_ss_sRcR::synapse0x2a6e850() {
   return (neuron0x2a5bb90()*0.0765947);
}

double NNfunction_ss_sRcR::synapse0x2a6e890() {
   return (neuron0x2a5bed0()*-0.146947);
}

double NNfunction_ss_sRcR::synapse0x2a6e8d0() {
   return (neuron0x2a5c210()*0.0794251);
}

double NNfunction_ss_sRcR::synapse0x2a6e910() {
   return (neuron0x2a5c550()*0.188446);
}

double NNfunction_ss_sRcR::synapse0x2a6e950() {
   return (neuron0x2a5c890()*-1.33783);
}

double NNfunction_ss_sRcR::synapse0x2a6e990() {
   return (neuron0x2a5cbd0()*0.44049);
}

double NNfunction_ss_sRcR::synapse0x2a6e9d0() {
   return (neuron0x2a5cf10()*1.05524);
}

double NNfunction_ss_sRcR::synapse0x2a6e460() {
   return (neuron0x2a5d250()*0.251304);
}

double NNfunction_ss_sRcR::synapse0x2a6e4a0() {
   return (neuron0x2a5d7b0()*0.37123);
}

double NNfunction_ss_sRcR::synapse0x2a6eb20() {
   return (neuron0x2a5d9d0()*-0.165064);
}

double NNfunction_ss_sRcR::synapse0x2a6eb60() {
   return (neuron0x2a5dd10()*0.880571);
}

double NNfunction_ss_sRcR::synapse0x2a6eba0() {
   return (neuron0x2a5e050()*0.311925);
}

double NNfunction_ss_sRcR::synapse0x2a6ebe0() {
   return (neuron0x2a5e390()*-0.0790289);
}

double NNfunction_ss_sRcR::synapse0x2a6ec20() {
   return (neuron0x2a5e6d0()*-0.307924);
}

double NNfunction_ss_sRcR::synapse0x2a6ec60() {
   return (neuron0x2a5ea10()*-0.105678);
}

double NNfunction_ss_sRcR::synapse0x2a6efe0() {
   return (neuron0x2a59e50()*-0.2247);
}

double NNfunction_ss_sRcR::synapse0x2a6f020() {
   return (neuron0x2a5a190()*0.0465389);
}

double NNfunction_ss_sRcR::synapse0x2a6f060() {
   return (neuron0x2a5a4d0()*0.0383102);
}

double NNfunction_ss_sRcR::synapse0x2a6f0a0() {
   return (neuron0x2a5a810()*0.913803);
}

double NNfunction_ss_sRcR::synapse0x2a6f0e0() {
   return (neuron0x2a5ab50()*0.365105);
}

double NNfunction_ss_sRcR::synapse0x2a6f120() {
   return (neuron0x2a5ae90()*-0.129107);
}

double NNfunction_ss_sRcR::synapse0x2a6f160() {
   return (neuron0x2a5b1d0()*-0.281657);
}

double NNfunction_ss_sRcR::synapse0x2a6f1a0() {
   return (neuron0x2a5b510()*0.396647);
}

double NNfunction_ss_sRcR::synapse0x2a6f1e0() {
   return (neuron0x2a5b850()*0.171406);
}

double NNfunction_ss_sRcR::synapse0x2a6f220() {
   return (neuron0x2a5bb90()*-0.0594421);
}

double NNfunction_ss_sRcR::synapse0x2a6f260() {
   return (neuron0x2a5bed0()*0.0150105);
}

double NNfunction_ss_sRcR::synapse0x2a6f2a0() {
   return (neuron0x2a5c210()*0.0315221);
}

double NNfunction_ss_sRcR::synapse0x2a6f2e0() {
   return (neuron0x2a5c550()*-0.18041);
}

double NNfunction_ss_sRcR::synapse0x2a6f320() {
   return (neuron0x2a5c890()*0.27861);
}

double NNfunction_ss_sRcR::synapse0x2a6f360() {
   return (neuron0x2a5cbd0()*-0.0468355);
}

double NNfunction_ss_sRcR::synapse0x2a6f3a0() {
   return (neuron0x2a5cf10()*0.171932);
}

double NNfunction_ss_sRcR::synapse0x2a6ee30() {
   return (neuron0x2a5d250()*0.185262);
}

double NNfunction_ss_sRcR::synapse0x2a6ee70() {
   return (neuron0x2a5d7b0()*-0.246209);
}

double NNfunction_ss_sRcR::synapse0x2a6f4f0() {
   return (neuron0x2a5d9d0()*-0.357353);
}

double NNfunction_ss_sRcR::synapse0x2a6f530() {
   return (neuron0x2a5dd10()*0.616411);
}

double NNfunction_ss_sRcR::synapse0x2a6f570() {
   return (neuron0x2a5e050()*0.797678);
}

double NNfunction_ss_sRcR::synapse0x2a6f5b0() {
   return (neuron0x2a5e390()*-0.230909);
}

double NNfunction_ss_sRcR::synapse0x2a6f5f0() {
   return (neuron0x2a5e6d0()*0.098392);
}

double NNfunction_ss_sRcR::synapse0x2a6f630() {
   return (neuron0x2a5ea10()*-0.167203);
}

double NNfunction_ss_sRcR::synapse0x2a81500() {
   return (neuron0x2a59e50()*0.137283);
}

double NNfunction_ss_sRcR::synapse0x2a81540() {
   return (neuron0x2a5a190()*0.660356);
}

double NNfunction_ss_sRcR::synapse0x2a81580() {
   return (neuron0x2a5a4d0()*0.456558);
}

double NNfunction_ss_sRcR::synapse0x2a815c0() {
   return (neuron0x2a5a810()*0.020514);
}

double NNfunction_ss_sRcR::synapse0x2a81600() {
   return (neuron0x2a5ab50()*-0.320675);
}

double NNfunction_ss_sRcR::synapse0x2a81640() {
   return (neuron0x2a5ae90()*-0.540236);
}

double NNfunction_ss_sRcR::synapse0x2a81680() {
   return (neuron0x2a5b1d0()*-0.54716);
}

double NNfunction_ss_sRcR::synapse0x2a816c0() {
   return (neuron0x2a5b510()*0.486248);
}

double NNfunction_ss_sRcR::synapse0x2a81700() {
   return (neuron0x2a5b850()*1.09474);
}

double NNfunction_ss_sRcR::synapse0x2a81740() {
   return (neuron0x2a5bb90()*0.605534);
}

double NNfunction_ss_sRcR::synapse0x2a81780() {
   return (neuron0x2a5bed0()*0.419734);
}

double NNfunction_ss_sRcR::synapse0x2a817c0() {
   return (neuron0x2a5c210()*-0.381807);
}

double NNfunction_ss_sRcR::synapse0x2a81800() {
   return (neuron0x2a5c550()*0.106143);
}

double NNfunction_ss_sRcR::synapse0x2a81840() {
   return (neuron0x2a5c890()*0.61877);
}

double NNfunction_ss_sRcR::synapse0x2a81880() {
   return (neuron0x2a5cbd0()*0.34961);
}

double NNfunction_ss_sRcR::synapse0x2a818c0() {
   return (neuron0x2a5cf10()*0.659607);
}

double NNfunction_ss_sRcR::synapse0x2a6f670() {
   return (neuron0x2a5d250()*-0.042264);
}

double NNfunction_ss_sRcR::synapse0x2a6f6b0() {
   return (neuron0x2a5d7b0()*-0.57201);
}

double NNfunction_ss_sRcR::synapse0x2a81a10() {
   return (neuron0x2a5d9d0()*-0.724782);
}

double NNfunction_ss_sRcR::synapse0x2a81a50() {
   return (neuron0x2a5dd10()*-0.114655);
}

double NNfunction_ss_sRcR::synapse0x2a81a90() {
   return (neuron0x2a5e050()*0.0998513);
}

double NNfunction_ss_sRcR::synapse0x2a81ad0() {
   return (neuron0x2a5e390()*0.0441498);
}

double NNfunction_ss_sRcR::synapse0x2a81b10() {
   return (neuron0x2a5e6d0()*0.214816);
}

double NNfunction_ss_sRcR::synapse0x2a81b50() {
   return (neuron0x2a5ea10()*-0.525126);
}

double NNfunction_ss_sRcR::synapse0x2a81ed0() {
   return (neuron0x2a59e50()*0.973019);
}

double NNfunction_ss_sRcR::synapse0x2a81f10() {
   return (neuron0x2a5a190()*-0.146003);
}

double NNfunction_ss_sRcR::synapse0x2a81f50() {
   return (neuron0x2a5a4d0()*0.1889);
}

double NNfunction_ss_sRcR::synapse0x2a81f90() {
   return (neuron0x2a5a810()*0.366932);
}

double NNfunction_ss_sRcR::synapse0x2a81fd0() {
   return (neuron0x2a5ab50()*0.28686);
}

double NNfunction_ss_sRcR::synapse0x2a82010() {
   return (neuron0x2a5ae90()*0.0206298);
}

double NNfunction_ss_sRcR::synapse0x2a82050() {
   return (neuron0x2a5b1d0()*0.243674);
}

double NNfunction_ss_sRcR::synapse0x2a82090() {
   return (neuron0x2a5b510()*0.159653);
}

double NNfunction_ss_sRcR::synapse0x2a820d0() {
   return (neuron0x2a5b850()*-0.0611336);
}

double NNfunction_ss_sRcR::synapse0x2a82110() {
   return (neuron0x2a5bb90()*0.283548);
}

double NNfunction_ss_sRcR::synapse0x2a82150() {
   return (neuron0x2a5bed0()*0.409563);
}

double NNfunction_ss_sRcR::synapse0x2a82190() {
   return (neuron0x2a5c210()*0.0471129);
}

double NNfunction_ss_sRcR::synapse0x2a821d0() {
   return (neuron0x2a5c550()*-0.283442);
}

double NNfunction_ss_sRcR::synapse0x2a82210() {
   return (neuron0x2a5c890()*-0.148506);
}

double NNfunction_ss_sRcR::synapse0x2a82250() {
   return (neuron0x2a5cbd0()*-0.165187);
}

double NNfunction_ss_sRcR::synapse0x2a82290() {
   return (neuron0x2a5cf10()*0.481101);
}

double NNfunction_ss_sRcR::synapse0x2a81d20() {
   return (neuron0x2a5d250()*0.517192);
}

double NNfunction_ss_sRcR::synapse0x2a81d60() {
   return (neuron0x2a5d7b0()*-0.387827);
}

double NNfunction_ss_sRcR::synapse0x2a823e0() {
   return (neuron0x2a5d9d0()*0.594874);
}

double NNfunction_ss_sRcR::synapse0x2a82420() {
   return (neuron0x2a5dd10()*0.00235079);
}

double NNfunction_ss_sRcR::synapse0x2a82460() {
   return (neuron0x2a5e050()*-0.152225);
}

double NNfunction_ss_sRcR::synapse0x2a824a0() {
   return (neuron0x2a5e390()*-0.575097);
}

double NNfunction_ss_sRcR::synapse0x2a824e0() {
   return (neuron0x2a5e6d0()*-0.417955);
}

double NNfunction_ss_sRcR::synapse0x2a82520() {
   return (neuron0x2a5ea10()*0.170566);
}

double NNfunction_ss_sRcR::synapse0x2a828a0() {
   return (neuron0x2a59e50()*0.450026);
}

double NNfunction_ss_sRcR::synapse0x2a828e0() {
   return (neuron0x2a5a190()*0.414144);
}

double NNfunction_ss_sRcR::synapse0x2a82920() {
   return (neuron0x2a5a4d0()*0.197857);
}

double NNfunction_ss_sRcR::synapse0x2a82960() {
   return (neuron0x2a5a810()*0.761689);
}

double NNfunction_ss_sRcR::synapse0x2a829a0() {
   return (neuron0x2a5ab50()*0.237517);
}

double NNfunction_ss_sRcR::synapse0x2a829e0() {
   return (neuron0x2a5ae90()*0.00723441);
}

double NNfunction_ss_sRcR::synapse0x2a82a20() {
   return (neuron0x2a5b1d0()*-0.288807);
}

double NNfunction_ss_sRcR::synapse0x2a82a60() {
   return (neuron0x2a5b510()*-0.168361);
}

double NNfunction_ss_sRcR::synapse0x2a82aa0() {
   return (neuron0x2a5b850()*-1.22888);
}

double NNfunction_ss_sRcR::synapse0x2a82ae0() {
   return (neuron0x2a5bb90()*0.28381);
}

double NNfunction_ss_sRcR::synapse0x2a82b20() {
   return (neuron0x2a5bed0()*-0.283978);
}

double NNfunction_ss_sRcR::synapse0x2a82b60() {
   return (neuron0x2a5c210()*-0.0329203);
}

double NNfunction_ss_sRcR::synapse0x2a82ba0() {
   return (neuron0x2a5c550()*-0.158398);
}

double NNfunction_ss_sRcR::synapse0x2a82be0() {
   return (neuron0x2a5c890()*0.52934);
}

double NNfunction_ss_sRcR::synapse0x2a82c20() {
   return (neuron0x2a5cbd0()*-0.135719);
}

double NNfunction_ss_sRcR::synapse0x2a82c60() {
   return (neuron0x2a5cf10()*0.994074);
}

double NNfunction_ss_sRcR::synapse0x2a826f0() {
   return (neuron0x2a5d250()*-0.403119);
}

double NNfunction_ss_sRcR::synapse0x2a82730() {
   return (neuron0x2a5d7b0()*0.417057);
}

double NNfunction_ss_sRcR::synapse0x2a82db0() {
   return (neuron0x2a5d9d0()*0.451456);
}

double NNfunction_ss_sRcR::synapse0x2a82df0() {
   return (neuron0x2a5dd10()*0.475604);
}

double NNfunction_ss_sRcR::synapse0x2a82e30() {
   return (neuron0x2a5e050()*-0.465917);
}

double NNfunction_ss_sRcR::synapse0x2a82e70() {
   return (neuron0x2a5e390()*0.158334);
}

double NNfunction_ss_sRcR::synapse0x2a82eb0() {
   return (neuron0x2a5e6d0()*0.0268586);
}

double NNfunction_ss_sRcR::synapse0x2a82ef0() {
   return (neuron0x2a5ea10()*0.241211);
}

double NNfunction_ss_sRcR::synapse0x2a83270() {
   return (neuron0x2a59e50()*0.0121425);
}

double NNfunction_ss_sRcR::synapse0x2a832b0() {
   return (neuron0x2a5a190()*-0.0332221);
}

double NNfunction_ss_sRcR::synapse0x2a832f0() {
   return (neuron0x2a5a4d0()*-0.0352541);
}

double NNfunction_ss_sRcR::synapse0x2a83330() {
   return (neuron0x2a5a810()*-1.94056);
}

double NNfunction_ss_sRcR::synapse0x2a83370() {
   return (neuron0x2a5ab50()*-0.023407);
}

double NNfunction_ss_sRcR::synapse0x2a833b0() {
   return (neuron0x2a5ae90()*-0.000534759);
}

double NNfunction_ss_sRcR::synapse0x2a833f0() {
   return (neuron0x2a5b1d0()*-0.0015787);
}

double NNfunction_ss_sRcR::synapse0x2a83430() {
   return (neuron0x2a5b510()*-0.015919);
}

double NNfunction_ss_sRcR::synapse0x2a83470() {
   return (neuron0x2a5b850()*0.00594431);
}

double NNfunction_ss_sRcR::synapse0x2a834b0() {
   return (neuron0x2a5bb90()*0.00741271);
}

double NNfunction_ss_sRcR::synapse0x2a834f0() {
   return (neuron0x2a5bed0()*-0.0155467);
}

double NNfunction_ss_sRcR::synapse0x2a83530() {
   return (neuron0x2a5c210()*0.0240627);
}

double NNfunction_ss_sRcR::synapse0x2a83570() {
   return (neuron0x2a5c550()*0.0109175);
}

double NNfunction_ss_sRcR::synapse0x2a835b0() {
   return (neuron0x2a5c890()*-0.0351899);
}

double NNfunction_ss_sRcR::synapse0x2a835f0() {
   return (neuron0x2a5cbd0()*0.0335754);
}

double NNfunction_ss_sRcR::synapse0x2a83630() {
   return (neuron0x2a5cf10()*0.244888);
}

double NNfunction_ss_sRcR::synapse0x2a830c0() {
   return (neuron0x2a5d250()*-0.020194);
}

double NNfunction_ss_sRcR::synapse0x2a83100() {
   return (neuron0x2a5d7b0()*0.021882);
}

double NNfunction_ss_sRcR::synapse0x2a83780() {
   return (neuron0x2a5d9d0()*-0.04161);
}

double NNfunction_ss_sRcR::synapse0x2a837c0() {
   return (neuron0x2a5dd10()*0.00380361);
}

double NNfunction_ss_sRcR::synapse0x2a83800() {
   return (neuron0x2a5e050()*0.0399052);
}

double NNfunction_ss_sRcR::synapse0x2a83840() {
   return (neuron0x2a5e390()*-0.0350606);
}

double NNfunction_ss_sRcR::synapse0x2a83880() {
   return (neuron0x2a5e6d0()*-0.0116567);
}

double NNfunction_ss_sRcR::synapse0x2a838c0() {
   return (neuron0x2a5ea10()*0.0104427);
}

double NNfunction_ss_sRcR::synapse0x2a5fe60() {
   return (neuron0x2a5eeb0()*-1.56704);
}

double NNfunction_ss_sRcR::synapse0x2a5fea0() {
   return (neuron0x2a5f7c0()*0.901192);
}

double NNfunction_ss_sRcR::synapse0x2a61370() {
   return (neuron0x2a602a0()*-1.15883);
}

double NNfunction_ss_sRcR::synapse0x2a613b0() {
   return (neuron0x2823670()*1.518);
}

double NNfunction_ss_sRcR::synapse0x2a61d40() {
   return (neuron0x2a610c0()*-1.29048);
}

double NNfunction_ss_sRcR::synapse0x2a61d80() {
   return (neuron0x2a61a90()*-0.375547);
}

double NNfunction_ss_sRcR::synapse0x2a62b10() {
   return (neuron0x2a62860()*-1.08928);
}

double NNfunction_ss_sRcR::synapse0x2a62b50() {
   return (neuron0x2a63230()*-0.47877);
}

double NNfunction_ss_sRcR::synapse0x2a634e0() {
   return (neuron0x2a63c00()*-1.44843);
}

double NNfunction_ss_sRcR::synapse0x2a63520() {
   return (neuron0x2a646e0()*1.42447);
}

double NNfunction_ss_sRcR::synapse0x2a63eb0() {
   return (neuron0x2a650b0()*1.87193);
}

double NNfunction_ss_sRcR::synapse0x2a63ef0() {
   return (neuron0x2a62190()*-1.15089);
}

double NNfunction_ss_sRcR::synapse0x2a64990() {
   return (neuron0x2a66c60()*-5.59336);
}

double NNfunction_ss_sRcR::synapse0x2a649d0() {
   return (neuron0x2a67630()*-4.52917);
}

double NNfunction_ss_sRcR::synapse0x2a65360() {
   return (neuron0x2a68000()*-0.800906);
}

double NNfunction_ss_sRcR::synapse0x2a653a0() {
   return (neuron0x2a689d0()*-1.30558);
}

double NNfunction_ss_sRcR::synapse0x2a62440() {
   return (neuron0x2a6a7e0()*1.25792);
}

double NNfunction_ss_sRcR::synapse0x2a62480() {
   return (neuron0x2a6aac0()*-1.27202);
}

double NNfunction_ss_sRcR::synapse0x2a66f10() {
   return (neuron0x2a6b490()*-0.176395);
}

double NNfunction_ss_sRcR::synapse0x2a66f50() {
   return (neuron0x2a6be60()*0.86155);
}

double NNfunction_ss_sRcR::synapse0x2a678e0() {
   return (neuron0x2a6c830()*1.05484);
}

double NNfunction_ss_sRcR::synapse0x2a67920() {
   return (neuron0x2a6d200()*-1.26568);
}

double NNfunction_ss_sRcR::synapse0x2a682b0() {
   return (neuron0x2a65d50()*-1.03348);
}

double NNfunction_ss_sRcR::synapse0x2a682f0() {
   return (neuron0x2a66720()*-1.27219);
}

double NNfunction_ss_sRcR::synapse0x2a68c80() {
   return (neuron0x2a6ff90()*1.37567);
}

double NNfunction_ss_sRcR::synapse0x2a68cc0() {
   return (neuron0x2a70960()*1.50663);
}

double NNfunction_ss_sRcR::synapse0x2a5cdf0() {
   return (neuron0x2a71330()*2.92037);
}

double NNfunction_ss_sRcR::synapse0x2a5ce30() {
   return (neuron0x2a71d00()*3.34445);
}

double NNfunction_ss_sRcR::synapse0x2a6ad70() {
   return (neuron0x2a726d0()*-5.5334);
}

double NNfunction_ss_sRcR::synapse0x2a6adb0() {
   return (neuron0x2a730a0()*-1.65643);
}

double NNfunction_ss_sRcR::synapse0x2a6b740() {
   return (neuron0x2a73a70()*1.30742);
}

double NNfunction_ss_sRcR::synapse0x2a6b780() {
   return (neuron0x2a74440()*-1.84655);
}

double NNfunction_ss_sRcR::synapse0x2a6c110() {
   return (neuron0x2a6a4d0()*-0.840086);
}

double NNfunction_ss_sRcR::synapse0x2a6c150() {
   return (neuron0x2a77020()*2.10892);
}

double NNfunction_ss_sRcR::synapse0x2a6cae0() {
   return (neuron0x2a779f0()*-1.10981);
}

double NNfunction_ss_sRcR::synapse0x2a6cb20() {
   return (neuron0x2a783c0()*1.14945);
}

double NNfunction_ss_sRcR::synapse0x2a6d4b0() {
   return (neuron0x2a78d90()*-0.528219);
}

double NNfunction_ss_sRcR::synapse0x2a6d4f0() {
   return (neuron0x2a79760()*-1.37064);
}

double NNfunction_ss_sRcR::synapse0x2a66000() {
   return (neuron0x2a7a130()*1.93976);
}

double NNfunction_ss_sRcR::synapse0x2a66040() {
   return (neuron0x2a7ab00()*1.62282);
}

double NNfunction_ss_sRcR::synapse0x2a6f8b0() {
   return (neuron0x2a7b4d0()*0.269735);
}

double NNfunction_ss_sRcR::synapse0x2a6f8f0() {
   return (neuron0x2a7c0b0()*1.80405);
}

double NNfunction_ss_sRcR::synapse0x2a70240() {
   return (neuron0x2a7ca80()*4.06942);
}

double NNfunction_ss_sRcR::synapse0x2a70280() {
   return (neuron0x2a6d900()*1.29339);
}

double NNfunction_ss_sRcR::synapse0x2a70c10() {
   return (neuron0x2a6e2d0()*0.878716);
}

double NNfunction_ss_sRcR::synapse0x2a70c50() {
   return (neuron0x2a6eca0()*2.1166);
}

double NNfunction_ss_sRcR::synapse0x2a715e0() {
   return (neuron0x2a812e0()*-1.12941);
}

double NNfunction_ss_sRcR::synapse0x2a71620() {
   return (neuron0x2a81b90()*1.59988);
}

double NNfunction_ss_sRcR::synapse0x2a71fb0() {
   return (neuron0x2a82560()*-0.813712);
}

double NNfunction_ss_sRcR::synapse0x2a71ff0() {
   return (neuron0x2a82f30()*-0.896489);
}

double NNfunction_ss_sRcR::synapse0x2a746f0() {
   return (neuron0x2a5eeb0()*0.371666);
}

double NNfunction_ss_sRcR::synapse0x2a74730() {
   return (neuron0x2a5f7c0()*0.516849);
}

double NNfunction_ss_sRcR::synapse0x2a69cb0() {
   return (neuron0x2a602a0()*0.386721);
}

double NNfunction_ss_sRcR::synapse0x2a69cf0() {
   return (neuron0x2823670()*-0.0269427);
}

double NNfunction_ss_sRcR::synapse0x2a772d0() {
   return (neuron0x2a610c0()*0.641458);
}

double NNfunction_ss_sRcR::synapse0x2a77310() {
   return (neuron0x2a61a90()*0.336468);
}

double NNfunction_ss_sRcR::synapse0x2a77ca0() {
   return (neuron0x2a62860()*0.406337);
}

double NNfunction_ss_sRcR::synapse0x2a77ce0() {
   return (neuron0x2a63230()*0.628482);
}

double NNfunction_ss_sRcR::synapse0x2a78670() {
   return (neuron0x2a63c00()*-0.265446);
}

double NNfunction_ss_sRcR::synapse0x2a786b0() {
   return (neuron0x2a646e0()*0.0574267);
}

double NNfunction_ss_sRcR::synapse0x2a79040() {
   return (neuron0x2a650b0()*0.274446);
}

double NNfunction_ss_sRcR::synapse0x2a79080() {
   return (neuron0x2a62190()*0.404646);
}

double NNfunction_ss_sRcR::synapse0x2a79a10() {
   return (neuron0x2a66c60()*0.103764);
}

double NNfunction_ss_sRcR::synapse0x2a79a50() {
   return (neuron0x2a67630()*0.416663);
}

double NNfunction_ss_sRcR::synapse0x2a7a3e0() {
   return (neuron0x2a68000()*0.286026);
}

double NNfunction_ss_sRcR::synapse0x2a7a420() {
   return (neuron0x2a689d0()*0.408048);
}

double NNfunction_ss_sRcR::synapse0x2a7adb0() {
   return (neuron0x2a6a7e0()*-0.107487);
}

double NNfunction_ss_sRcR::synapse0x2a7adf0() {
   return (neuron0x2a6aac0()*-0.0363085);
}

double NNfunction_ss_sRcR::synapse0x2a7b780() {
   return (neuron0x2a6b490()*0.545419);
}

double NNfunction_ss_sRcR::synapse0x2a7b7c0() {
   return (neuron0x2a6be60()*0.146848);
}

double NNfunction_ss_sRcR::synapse0x2a7c360() {
   return (neuron0x2a6c830()*0.140183);
}

double NNfunction_ss_sRcR::synapse0x2a7c3a0() {
   return (neuron0x2a6d200()*0.200864);
}

double NNfunction_ss_sRcR::synapse0x2a7cd30() {
   return (neuron0x2a65d50()*0.568423);
}

double NNfunction_ss_sRcR::synapse0x2a7cd70() {
   return (neuron0x2a66720()*0.461575);
}

double NNfunction_ss_sRcR::synapse0x2a6dbb0() {
   return (neuron0x2a6ff90()*0.283175);
}

double NNfunction_ss_sRcR::synapse0x2a6dbf0() {
   return (neuron0x2a70960()*0.434899);
}

double NNfunction_ss_sRcR::synapse0x2a6e580() {
   return (neuron0x2a71330()*0.227965);
}

double NNfunction_ss_sRcR::synapse0x2a6e5c0() {
   return (neuron0x2a71d00()*-0.127271);
}

double NNfunction_ss_sRcR::synapse0x2a6ef50() {
   return (neuron0x2a726d0()*0.338687);
}

double NNfunction_ss_sRcR::synapse0x2a6ef90() {
   return (neuron0x2a730a0()*-0.0294889);
}

double NNfunction_ss_sRcR::synapse0x2a81470() {
   return (neuron0x2a73a70()*0.566867);
}

double NNfunction_ss_sRcR::synapse0x2a814b0() {
   return (neuron0x2a74440()*-0.0174248);
}

double NNfunction_ss_sRcR::synapse0x2a81e40() {
   return (neuron0x2a6a4d0()*0.418221);
}

double NNfunction_ss_sRcR::synapse0x2a81e80() {
   return (neuron0x2a77020()*0.298554);
}

double NNfunction_ss_sRcR::synapse0x2a82810() {
   return (neuron0x2a779f0()*0.170269);
}

double NNfunction_ss_sRcR::synapse0x2a82850() {
   return (neuron0x2a783c0()*0.0355733);
}

double NNfunction_ss_sRcR::synapse0x2a831e0() {
   return (neuron0x2a78d90()*0.18571);
}

double NNfunction_ss_sRcR::synapse0x2a83220() {
   return (neuron0x2a79760()*-0.0888731);
}

double NNfunction_ss_sRcR::synapse0x2a5f0d0() {
   return (neuron0x2a7a130()*0.174741);
}

double NNfunction_ss_sRcR::synapse0x2a5f110() {
   return (neuron0x2a7ab00()*0.0486861);
}

double NNfunction_ss_sRcR::synapse0x2a72980() {
   return (neuron0x2a7b4d0()*0.486976);
}

double NNfunction_ss_sRcR::synapse0x2a729c0() {
   return (neuron0x2a7c0b0()*0.639805);
}

double NNfunction_ss_sRcR::synapse0x2a83900() {
   return (neuron0x2a7ca80()*0.48875);
}

double NNfunction_ss_sRcR::synapse0x2a83940() {
   return (neuron0x2a6d900()*0.56492);
}

double NNfunction_ss_sRcR::synapse0x2a83980() {
   return (neuron0x2a6e2d0()*-0.0221608);
}

double NNfunction_ss_sRcR::synapse0x2a839c0() {
   return (neuron0x2a6eca0()*0.295549);
}

double NNfunction_ss_sRcR::synapse0x2a8a870() {
   return (neuron0x2a812e0()*0.457119);
}

double NNfunction_ss_sRcR::synapse0x2a8a8b0() {
   return (neuron0x2a81b90()*0.125073);
}

double NNfunction_ss_sRcR::synapse0x2a8a8f0() {
   return (neuron0x2a82560()*0.564693);
}

double NNfunction_ss_sRcR::synapse0x2a8a930() {
   return (neuron0x2a82f30()*-0.0384048);
}

double NNfunction_ss_sRcR::synapse0x2a8acb0() {
   return (neuron0x2a5eeb0()*0.403981);
}

double NNfunction_ss_sRcR::synapse0x2a8acf0() {
   return (neuron0x2a5f7c0()*0.0178721);
}

double NNfunction_ss_sRcR::synapse0x2a8ad30() {
   return (neuron0x2a602a0()*-0.0463425);
}

double NNfunction_ss_sRcR::synapse0x2a8ad70() {
   return (neuron0x2823670()*0.0645295);
}

double NNfunction_ss_sRcR::synapse0x2a8adb0() {
   return (neuron0x2a610c0()*0.374685);
}

double NNfunction_ss_sRcR::synapse0x2a8adf0() {
   return (neuron0x2a61a90()*0.414107);
}

double NNfunction_ss_sRcR::synapse0x2a8ae30() {
   return (neuron0x2a62860()*0.433886);
}

double NNfunction_ss_sRcR::synapse0x2a8ae70() {
   return (neuron0x2a63230()*0.0762025);
}

double NNfunction_ss_sRcR::synapse0x2a8aeb0() {
   return (neuron0x2a63c00()*0.0211609);
}

double NNfunction_ss_sRcR::synapse0x2a8aef0() {
   return (neuron0x2a646e0()*0.265928);
}

double NNfunction_ss_sRcR::synapse0x2a8af30() {
   return (neuron0x2a650b0()*-0.716412);
}

double NNfunction_ss_sRcR::synapse0x2a8af70() {
   return (neuron0x2a62190()*0.111308);
}

double NNfunction_ss_sRcR::synapse0x2a8afb0() {
   return (neuron0x2a66c60()*-0.110445);
}

double NNfunction_ss_sRcR::synapse0x2a8aff0() {
   return (neuron0x2a67630()*0.415727);
}

double NNfunction_ss_sRcR::synapse0x2a8b030() {
   return (neuron0x2a68000()*0.237942);
}

double NNfunction_ss_sRcR::synapse0x2a8b070() {
   return (neuron0x2a689d0()*0.379257);
}

double NNfunction_ss_sRcR::synapse0x2a8ab00() {
   return (neuron0x2a6a7e0()*-0.129655);
}

double NNfunction_ss_sRcR::synapse0x2a8ab40() {
   return (neuron0x2a6aac0()*0.507915);
}

double NNfunction_ss_sRcR::synapse0x2a8b1c0() {
   return (neuron0x2a6b490()*0.677302);
}

double NNfunction_ss_sRcR::synapse0x2a8b200() {
   return (neuron0x2a6be60()*-0.160213);
}

double NNfunction_ss_sRcR::synapse0x2a8b240() {
   return (neuron0x2a6c830()*0.204243);
}

double NNfunction_ss_sRcR::synapse0x2a8b280() {
   return (neuron0x2a6d200()*0.368113);
}

double NNfunction_ss_sRcR::synapse0x2a8b2c0() {
   return (neuron0x2a65d50()*0.519158);
}

double NNfunction_ss_sRcR::synapse0x2a8b300() {
   return (neuron0x2a66720()*0.255417);
}

double NNfunction_ss_sRcR::synapse0x2a8b340() {
   return (neuron0x2a6ff90()*0.343107);
}

double NNfunction_ss_sRcR::synapse0x2a8b380() {
   return (neuron0x2a70960()*0.226322);
}

double NNfunction_ss_sRcR::synapse0x2a8b3c0() {
   return (neuron0x2a71330()*0.036171);
}

double NNfunction_ss_sRcR::synapse0x2a8b400() {
   return (neuron0x2a71d00()*1.37018);
}

double NNfunction_ss_sRcR::synapse0x2a8b440() {
   return (neuron0x2a726d0()*-0.00900044);
}

double NNfunction_ss_sRcR::synapse0x2a8b480() {
   return (neuron0x2a730a0()*-0.625305);
}

double NNfunction_ss_sRcR::synapse0x2a8b4c0() {
   return (neuron0x2a73a70()*0.269315);
}

double NNfunction_ss_sRcR::synapse0x2a8b500() {
   return (neuron0x2a74440()*0.0269353);
}

double NNfunction_ss_sRcR::synapse0x2a8b0b0() {
   return (neuron0x2a6a4d0()*0.283922);
}

double NNfunction_ss_sRcR::synapse0x2a8b0f0() {
   return (neuron0x2a77020()*-0.109213);
}

double NNfunction_ss_sRcR::synapse0x2a8b130() {
   return (neuron0x2a779f0()*0.0712317);
}

double NNfunction_ss_sRcR::synapse0x2a8b170() {
   return (neuron0x2a783c0()*-0.200588);
}

double NNfunction_ss_sRcR::synapse0x2a8b750() {
   return (neuron0x2a78d90()*-0.247161);
}

double NNfunction_ss_sRcR::synapse0x2a8b790() {
   return (neuron0x2a79760()*0.278781);
}

double NNfunction_ss_sRcR::synapse0x2a8b7d0() {
   return (neuron0x2a7a130()*0.20308);
}

double NNfunction_ss_sRcR::synapse0x2a8b810() {
   return (neuron0x2a7ab00()*-0.224362);
}

double NNfunction_ss_sRcR::synapse0x2a8b850() {
   return (neuron0x2a7b4d0()*-0.203809);
}

double NNfunction_ss_sRcR::synapse0x2a8b890() {
   return (neuron0x2a7c0b0()*-0.135742);
}

double NNfunction_ss_sRcR::synapse0x2a8b8d0() {
   return (neuron0x2a7ca80()*-0.984614);
}

double NNfunction_ss_sRcR::synapse0x2a8b910() {
   return (neuron0x2a6d900()*-0.182942);
}

double NNfunction_ss_sRcR::synapse0x2a8b950() {
   return (neuron0x2a6e2d0()*-0.0730771);
}

double NNfunction_ss_sRcR::synapse0x2a8b990() {
   return (neuron0x2a6eca0()*-0.0290678);
}

double NNfunction_ss_sRcR::synapse0x2a8b9d0() {
   return (neuron0x2a812e0()*0.415854);
}

double NNfunction_ss_sRcR::synapse0x2a8ba10() {
   return (neuron0x2a81b90()*-0.0160721);
}

double NNfunction_ss_sRcR::synapse0x2a8ba50() {
   return (neuron0x2a82560()*-0.0622965);
}

double NNfunction_ss_sRcR::synapse0x2a8ba90() {
   return (neuron0x2a82f30()*0.743787);
}

double NNfunction_ss_sRcR::synapse0x2a8be10() {
   return (neuron0x2a5eeb0()*-0.753498);
}

double NNfunction_ss_sRcR::synapse0x2a8be50() {
   return (neuron0x2a5f7c0()*-1.03963);
}

double NNfunction_ss_sRcR::synapse0x2a8be90() {
   return (neuron0x2a602a0()*-0.314943);
}

double NNfunction_ss_sRcR::synapse0x2a8bed0() {
   return (neuron0x2823670()*0.0383708);
}

double NNfunction_ss_sRcR::synapse0x2a8bf10() {
   return (neuron0x2a610c0()*-1.33734);
}

double NNfunction_ss_sRcR::synapse0x2a8bf50() {
   return (neuron0x2a61a90()*-0.674737);
}

double NNfunction_ss_sRcR::synapse0x2a8bf90() {
   return (neuron0x2a62860()*-0.865339);
}

double NNfunction_ss_sRcR::synapse0x2a8bfd0() {
   return (neuron0x2a63230()*-1.01286);
}

double NNfunction_ss_sRcR::synapse0x2a8c010() {
   return (neuron0x2a63c00()*-0.640535);
}

double NNfunction_ss_sRcR::synapse0x2a8c050() {
   return (neuron0x2a646e0()*0.348631);
}

double NNfunction_ss_sRcR::synapse0x2a8c090() {
   return (neuron0x2a650b0()*0.190395);
}

double NNfunction_ss_sRcR::synapse0x2a8c0d0() {
   return (neuron0x2a62190()*0.328765);
}

double NNfunction_ss_sRcR::synapse0x2a8c110() {
   return (neuron0x2a66c60()*-0.658711);
}

double NNfunction_ss_sRcR::synapse0x2a8c150() {
   return (neuron0x2a67630()*2.20645);
}

double NNfunction_ss_sRcR::synapse0x2a8c190() {
   return (neuron0x2a68000()*-0.191729);
}

double NNfunction_ss_sRcR::synapse0x2a8c1d0() {
   return (neuron0x2a689d0()*-0.959245);
}

double NNfunction_ss_sRcR::synapse0x2a8bc60() {
   return (neuron0x2a6a7e0()*0.631222);
}

double NNfunction_ss_sRcR::synapse0x2a8bca0() {
   return (neuron0x2a6aac0()*-0.53816);
}

double NNfunction_ss_sRcR::synapse0x2a8c320() {
   return (neuron0x2a6b490()*-0.104848);
}

double NNfunction_ss_sRcR::synapse0x2a8c360() {
   return (neuron0x2a6be60()*-0.866811);
}

double NNfunction_ss_sRcR::synapse0x2a8c3a0() {
   return (neuron0x2a6c830()*-0.0449439);
}

double NNfunction_ss_sRcR::synapse0x2a8c3e0() {
   return (neuron0x2a6d200()*-0.754809);
}

double NNfunction_ss_sRcR::synapse0x2a8c420() {
   return (neuron0x2a65d50()*-1.04122);
}

double NNfunction_ss_sRcR::synapse0x2a8c460() {
   return (neuron0x2a66720()*-0.228495);
}

double NNfunction_ss_sRcR::synapse0x2a8c4a0() {
   return (neuron0x2a6ff90()*-0.0402786);
}

double NNfunction_ss_sRcR::synapse0x2a8c4e0() {
   return (neuron0x2a70960()*-0.71268);
}

double NNfunction_ss_sRcR::synapse0x2a8c520() {
   return (neuron0x2a71330()*-0.66395);
}

double NNfunction_ss_sRcR::synapse0x2a8c560() {
   return (neuron0x2a71d00()*-0.625876);
}

double NNfunction_ss_sRcR::synapse0x2a8c5a0() {
   return (neuron0x2a726d0()*-0.648262);
}

double NNfunction_ss_sRcR::synapse0x2a8c5e0() {
   return (neuron0x2a730a0()*-1.22837);
}

double NNfunction_ss_sRcR::synapse0x2a8c620() {
   return (neuron0x2a73a70()*-1.55276);
}

double NNfunction_ss_sRcR::synapse0x2a8c660() {
   return (neuron0x2a74440()*-0.657074);
}

double NNfunction_ss_sRcR::synapse0x2a8c210() {
   return (neuron0x2a6a4d0()*-1.26515);
}

double NNfunction_ss_sRcR::synapse0x2a8c250() {
   return (neuron0x2a77020()*-0.900165);
}

double NNfunction_ss_sRcR::synapse0x2a8c290() {
   return (neuron0x2a779f0()*0.228831);
}

double NNfunction_ss_sRcR::synapse0x2a8c2d0() {
   return (neuron0x2a783c0()*0.296312);
}

double NNfunction_ss_sRcR::synapse0x2a8c8b0() {
   return (neuron0x2a78d90()*1.82114);
}

double NNfunction_ss_sRcR::synapse0x2a8c8f0() {
   return (neuron0x2a79760()*-1.05165);
}

double NNfunction_ss_sRcR::synapse0x2a8c930() {
   return (neuron0x2a7a130()*-0.0556378);
}

double NNfunction_ss_sRcR::synapse0x2a8c970() {
   return (neuron0x2a7ab00()*-0.0266695);
}

double NNfunction_ss_sRcR::synapse0x2a8c9b0() {
   return (neuron0x2a7b4d0()*-0.080913);
}

double NNfunction_ss_sRcR::synapse0x2a8c9f0() {
   return (neuron0x2a7c0b0()*0.0646887);
}

double NNfunction_ss_sRcR::synapse0x2a8ca30() {
   return (neuron0x2a7ca80()*2.70851);
}

double NNfunction_ss_sRcR::synapse0x2a8ca70() {
   return (neuron0x2a6d900()*-0.376278);
}

double NNfunction_ss_sRcR::synapse0x2a8cab0() {
   return (neuron0x2a6e2d0()*-2.24984);
}

double NNfunction_ss_sRcR::synapse0x2a8caf0() {
   return (neuron0x2a6eca0()*-0.343385);
}

double NNfunction_ss_sRcR::synapse0x2a8cb30() {
   return (neuron0x2a812e0()*-1.00606);
}

double NNfunction_ss_sRcR::synapse0x2a8cb70() {
   return (neuron0x2a81b90()*-0.449962);
}

double NNfunction_ss_sRcR::synapse0x2a8cbb0() {
   return (neuron0x2a82560()*0.196546);
}

double NNfunction_ss_sRcR::synapse0x2a8cbf0() {
   return (neuron0x2a82f30()*0.77558);
}

double NNfunction_ss_sRcR::synapse0x2a8cf70() {
   return (neuron0x2a5eeb0()*0.0449858);
}

double NNfunction_ss_sRcR::synapse0x2a8cfb0() {
   return (neuron0x2a5f7c0()*-0.0254945);
}

double NNfunction_ss_sRcR::synapse0x2a8cff0() {
   return (neuron0x2a602a0()*0.0293222);
}

double NNfunction_ss_sRcR::synapse0x2a8d030() {
   return (neuron0x2823670()*-0.0205797);
}

double NNfunction_ss_sRcR::synapse0x2a8d070() {
   return (neuron0x2a610c0()*0.0404989);
}

double NNfunction_ss_sRcR::synapse0x2a8d0b0() {
   return (neuron0x2a61a90()*0.624126);
}

double NNfunction_ss_sRcR::synapse0x2a8d0f0() {
   return (neuron0x2a62860()*0.024066);
}

double NNfunction_ss_sRcR::synapse0x2a8d130() {
   return (neuron0x2a63230()*0.00380481);
}

double NNfunction_ss_sRcR::synapse0x2a8d170() {
   return (neuron0x2a63c00()*0.0147144);
}

double NNfunction_ss_sRcR::synapse0x2a8d1b0() {
   return (neuron0x2a646e0()*-0.0385767);
}

double NNfunction_ss_sRcR::synapse0x2a8d1f0() {
   return (neuron0x2a650b0()*0.989095);
}

double NNfunction_ss_sRcR::synapse0x2a8d230() {
   return (neuron0x2a62190()*0.0318395);
}

double NNfunction_ss_sRcR::synapse0x2a8d270() {
   return (neuron0x2a66c60()*0.63072);
}

double NNfunction_ss_sRcR::synapse0x2a8d2b0() {
   return (neuron0x2a67630()*-0.527274);
}

double NNfunction_ss_sRcR::synapse0x2a8d2f0() {
   return (neuron0x2a68000()*-0.0022061);
}

double NNfunction_ss_sRcR::synapse0x2a8d330() {
   return (neuron0x2a689d0()*0.043938);
}

double NNfunction_ss_sRcR::synapse0x2a8cdc0() {
   return (neuron0x2a6a7e0()*-0.0228511);
}

double NNfunction_ss_sRcR::synapse0x2a8ce00() {
   return (neuron0x2a6aac0()*0.0338789);
}

double NNfunction_ss_sRcR::synapse0x2a8d480() {
   return (neuron0x2a6b490()*-1.79879);
}

double NNfunction_ss_sRcR::synapse0x2a8d4c0() {
   return (neuron0x2a6be60()*-0.0184429);
}

double NNfunction_ss_sRcR::synapse0x2a8d500() {
   return (neuron0x2a6c830()*-0.0225314);
}

double NNfunction_ss_sRcR::synapse0x2a8d540() {
   return (neuron0x2a6d200()*0.0291455);
}

double NNfunction_ss_sRcR::synapse0x2a8d580() {
   return (neuron0x2a65d50()*0.0366372);
}

double NNfunction_ss_sRcR::synapse0x2a8d5c0() {
   return (neuron0x2a66720()*0.0343877);
}

double NNfunction_ss_sRcR::synapse0x2a8d600() {
   return (neuron0x2a6ff90()*0.568233);
}

double NNfunction_ss_sRcR::synapse0x2a8d640() {
   return (neuron0x2a70960()*-0.0297202);
}

double NNfunction_ss_sRcR::synapse0x2a8d680() {
   return (neuron0x2a71330()*2.16208);
}

double NNfunction_ss_sRcR::synapse0x2a8d6c0() {
   return (neuron0x2a71d00()*-1.05742);
}

double NNfunction_ss_sRcR::synapse0x2a8d700() {
   return (neuron0x2a726d0()*0.214462);
}

double NNfunction_ss_sRcR::synapse0x2a8d740() {
   return (neuron0x2a730a0()*0.0104834);
}

double NNfunction_ss_sRcR::synapse0x2a8d780() {
   return (neuron0x2a73a70()*-0.0227714);
}

double NNfunction_ss_sRcR::synapse0x2a8d7c0() {
   return (neuron0x2a74440()*-0.00287681);
}

double NNfunction_ss_sRcR::synapse0x2a8d370() {
   return (neuron0x2a6a4d0()*0.0236835);
}

double NNfunction_ss_sRcR::synapse0x2a8d3b0() {
   return (neuron0x2a77020()*1.32118);
}

double NNfunction_ss_sRcR::synapse0x2a8d3f0() {
   return (neuron0x2a779f0()*0.0232006);
}

double NNfunction_ss_sRcR::synapse0x2a8d430() {
   return (neuron0x2a783c0()*-0.0283849);
}

double NNfunction_ss_sRcR::synapse0x2a8da10() {
   return (neuron0x2a78d90()*0.000498964);
}

double NNfunction_ss_sRcR::synapse0x2a8da50() {
   return (neuron0x2a79760()*0.0506282);
}

double NNfunction_ss_sRcR::synapse0x2a8da90() {
   return (neuron0x2a7a130()*-0.0442831);
}

double NNfunction_ss_sRcR::synapse0x2a8dad0() {
   return (neuron0x2a7ab00()*0.510611);
}

double NNfunction_ss_sRcR::synapse0x2a8db10() {
   return (neuron0x2a7b4d0()*0.672695);
}

double NNfunction_ss_sRcR::synapse0x2a8db50() {
   return (neuron0x2a7c0b0()*-0.0326136);
}

double NNfunction_ss_sRcR::synapse0x2a8db90() {
   return (neuron0x2a7ca80()*0.345382);
}

double NNfunction_ss_sRcR::synapse0x2a8dbd0() {
   return (neuron0x2a6d900()*-0.0369756);
}

double NNfunction_ss_sRcR::synapse0x2a8dc10() {
   return (neuron0x2a6e2d0()*-0.0172385);
}

double NNfunction_ss_sRcR::synapse0x2a8dc50() {
   return (neuron0x2a6eca0()*-0.0442652);
}

double NNfunction_ss_sRcR::synapse0x2a8dc90() {
   return (neuron0x2a812e0()*0.039286);
}

double NNfunction_ss_sRcR::synapse0x2a8dcd0() {
   return (neuron0x2a81b90()*-0.0270227);
}

double NNfunction_ss_sRcR::synapse0x2a8dd10() {
   return (neuron0x2a82560()*0.00876927);
}

double NNfunction_ss_sRcR::synapse0x2a8dd50() {
   return (neuron0x2a82f30()*-1.10742);
}

double NNfunction_ss_sRcR::synapse0x2a5ee70() {
   return (neuron0x2a8a130()*-8.09433);
}

double NNfunction_ss_sRcR::synapse0x2a8dfb0() {
   return (neuron0x2a8a4d0()*2.91528);
}

double NNfunction_ss_sRcR::synapse0x2a8dff0() {
   return (neuron0x2a8a970()*5.16015);
}

double NNfunction_ss_sRcR::synapse0x2a8e030() {
   return (neuron0x2a8bad0()*1.70898);
}

double NNfunction_ss_sRcR::synapse0x2a8e070() {
   return (neuron0x2a8cc30()*-8.96367);
}

