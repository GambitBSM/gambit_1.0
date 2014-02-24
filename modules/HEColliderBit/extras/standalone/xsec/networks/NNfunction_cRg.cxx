#include "NNfunction_cRg.h"
#include <cmath>

double NNfunction_cRg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4196)/15.2868;
   input1 = (in1 - -2.92248)/1164.42;
   input2 = (in2 - 650.669)/623.455;
   input3 = (in3 - -42.6844)/772.15;
   input4 = (in4 - 1069.71)/968.889;
   input5 = (in5 - 910.404)/966.266;
   input6 = (in6 - 918.518)/966.164;
   input7 = (in7 - 935.684)/945.267;
   input8 = (in8 - 909.835)/956.957;
   input9 = (in9 - 895.424)/942.868;
   input10 = (in10 - 971.959)/938.74;
   input11 = (in11 - 706.611)/843.816;
   input12 = (in12 - 706.806)/845.879;
   input13 = (in13 - 497.958)/508.334;
   input14 = (in14 - 744.221)/836.175;
   input15 = (in15 - 431.812)/447.592;
   input16 = (in16 - 547.943)/576.055;
   input17 = (in17 - 741.625)/879.508;
   input18 = (in18 - 735.996)/878.787;
   input19 = (in19 - 788.829)/857.065;
   input20 = (in20 - -4.96771)/492.872;
   input21 = (in21 - 0.573267)/1149.76;
   input22 = (in22 - 0.243864)/1205.16;
   input23 = (in23 - -203.474)/610.789;
   switch(index) {
     case 0:
         return neuron0x268cbf0();
     default:
         return 0.;
   }
}

double NNfunction_cRg::Value(int index, double* input) {
   input0 = (input[0] - 23.4196)/15.2868;
   input1 = (input[1] - -2.92248)/1164.42;
   input2 = (input[2] - 650.669)/623.455;
   input3 = (input[3] - -42.6844)/772.15;
   input4 = (input[4] - 1069.71)/968.889;
   input5 = (input[5] - 910.404)/966.266;
   input6 = (input[6] - 918.518)/966.164;
   input7 = (input[7] - 935.684)/945.267;
   input8 = (input[8] - 909.835)/956.957;
   input9 = (input[9] - 895.424)/942.868;
   input10 = (input[10] - 971.959)/938.74;
   input11 = (input[11] - 706.611)/843.816;
   input12 = (input[12] - 706.806)/845.879;
   input13 = (input[13] - 497.958)/508.334;
   input14 = (input[14] - 744.221)/836.175;
   input15 = (input[15] - 431.812)/447.592;
   input16 = (input[16] - 547.943)/576.055;
   input17 = (input[17] - 741.625)/879.508;
   input18 = (input[18] - 735.996)/878.787;
   input19 = (input[19] - 788.829)/857.065;
   input20 = (input[20] - -4.96771)/492.872;
   input21 = (input[21] - 0.573267)/1149.76;
   input22 = (input[22] - 0.243864)/1205.16;
   input23 = (input[23] - -203.474)/610.789;
   switch(index) {
     case 0:
         return neuron0x268cbf0();
     default:
         return 0.;
   }
}

double NNfunction_cRg::neuron0x2658ce0() {
   return input0;
}

double NNfunction_cRg::neuron0x2659020() {
   return input1;
}

double NNfunction_cRg::neuron0x2659360() {
   return input2;
}

double NNfunction_cRg::neuron0x26596a0() {
   return input3;
}

double NNfunction_cRg::neuron0x26599e0() {
   return input4;
}

double NNfunction_cRg::neuron0x2659d20() {
   return input5;
}

double NNfunction_cRg::neuron0x265a060() {
   return input6;
}

double NNfunction_cRg::neuron0x265a3a0() {
   return input7;
}

double NNfunction_cRg::neuron0x265a6e0() {
   return input8;
}

double NNfunction_cRg::neuron0x265aa20() {
   return input9;
}

double NNfunction_cRg::neuron0x265ad60() {
   return input10;
}

double NNfunction_cRg::neuron0x265b0a0() {
   return input11;
}

double NNfunction_cRg::neuron0x265b3e0() {
   return input12;
}

double NNfunction_cRg::neuron0x265b720() {
   return input13;
}

double NNfunction_cRg::neuron0x265ba60() {
   return input14;
}

double NNfunction_cRg::neuron0x265bda0() {
   return input15;
}

double NNfunction_cRg::neuron0x265c0e0() {
   return input16;
}

double NNfunction_cRg::neuron0x265c640() {
   return input17;
}

double NNfunction_cRg::neuron0x265c860() {
   return input18;
}

double NNfunction_cRg::neuron0x265cba0() {
   return input19;
}

double NNfunction_cRg::neuron0x265cee0() {
   return input20;
}

double NNfunction_cRg::neuron0x265d220() {
   return input21;
}

double NNfunction_cRg::neuron0x265d560() {
   return input22;
}

double NNfunction_cRg::neuron0x265d8a0() {
   return input23;
}

double NNfunction_cRg::input0x265dd10() {
   double input = 0.473121;
   input += synapse0x2658ba0();
   input += synapse0x2658be0();
   input += synapse0x265dfc0();
   input += synapse0x265e000();
   input += synapse0x265e040();
   input += synapse0x265e080();
   input += synapse0x265e0c0();
   input += synapse0x265e100();
   input += synapse0x265e140();
   input += synapse0x265e180();
   input += synapse0x265e1c0();
   input += synapse0x265e200();
   input += synapse0x265e240();
   input += synapse0x265e280();
   input += synapse0x265e2c0();
   input += synapse0x265e300();
   input += synapse0x2658b10();
   input += synapse0x2658b50();
   input += synapse0x240a790();
   input += synapse0x240a7d0();
   input += synapse0x265e560();
   input += synapse0x265e5a0();
   input += synapse0x265e5e0();
   input += synapse0x265e620();
   return input;
}

double NNfunction_cRg::neuron0x265dd10() {
   double input = input0x265dd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x265e660() {
   double input = -0.560568;
   input += synapse0x265e9a0();
   input += synapse0x265e9e0();
   input += synapse0x265ea20();
   input += synapse0x265ea60();
   input += synapse0x265eaa0();
   input += synapse0x265eae0();
   input += synapse0x265eb20();
   input += synapse0x265eb60();
   input += synapse0x265eba0();
   input += synapse0x265e450();
   input += synapse0x265e490();
   input += synapse0x265e4d0();
   input += synapse0x265e510();
   input += synapse0x265edf0();
   input += synapse0x265ee30();
   input += synapse0x265ee70();
   input += synapse0x265e7f0();
   input += synapse0x265e830();
   input += synapse0x265efc0();
   input += synapse0x265f000();
   input += synapse0x265f040();
   input += synapse0x265f080();
   input += synapse0x265f0c0();
   input += synapse0x265f100();
   return input;
}

double NNfunction_cRg::neuron0x265e660() {
   double input = input0x265e660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x265f140() {
   double input = 0.361624;
   input += synapse0x265f480();
   input += synapse0x265f4c0();
   input += synapse0x265f500();
   input += synapse0x265f540();
   input += synapse0x265f580();
   input += synapse0x265f5c0();
   input += synapse0x265f600();
   input += synapse0x265f640();
   input += synapse0x265f680();
   input += synapse0x265f6c0();
   input += synapse0x265f700();
   input += synapse0x265f740();
   input += synapse0x265f780();
   input += synapse0x265f7c0();
   input += synapse0x265f800();
   input += synapse0x265f840();
   input += synapse0x265f2d0();
   input += synapse0x265f310();
   input += synapse0x240abc0();
   input += synapse0x24182e0();
   input += synapse0x2418320();
   input += synapse0x2647d70();
   input += synapse0x2647db0();
   input += synapse0x2647df0();
   return input;
}

double NNfunction_cRg::neuron0x265f140() {
   double input = input0x265f140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x265ebe0() {
   double input = -0.352676;
   input += synapse0x2418b80();
   input += synapse0x265ed70();
   input += synapse0x265edb0();
   input += synapse0x265f990();
   input += synapse0x265f9d0();
   input += synapse0x265fa10();
   input += synapse0x265fa50();
   input += synapse0x265fa90();
   input += synapse0x265fad0();
   input += synapse0x265fb10();
   input += synapse0x265fb50();
   input += synapse0x265fb90();
   input += synapse0x265fbd0();
   input += synapse0x265fc10();
   input += synapse0x265fc50();
   input += synapse0x265fc90();
   input += synapse0x2658c20();
   input += synapse0x2658c60();
   input += synapse0x2658ca0();
   input += synapse0x265fde0();
   input += synapse0x265fe20();
   input += synapse0x265fe60();
   input += synapse0x265fea0();
   input += synapse0x265fee0();
   return input;
}

double NNfunction_cRg::neuron0x265ebe0() {
   double input = input0x265ebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x265ff20() {
   double input = -0.501605;
   input += synapse0x2660260();
   input += synapse0x26602a0();
   input += synapse0x26602e0();
   input += synapse0x2660320();
   input += synapse0x2660360();
   input += synapse0x26603a0();
   input += synapse0x26603e0();
   input += synapse0x2660420();
   input += synapse0x2660460();
   input += synapse0x26604a0();
   input += synapse0x26604e0();
   input += synapse0x2660520();
   input += synapse0x2660560();
   input += synapse0x26605a0();
   input += synapse0x26605e0();
   input += synapse0x2660620();
   input += synapse0x26600b0();
   input += synapse0x26600f0();
   input += synapse0x2660770();
   input += synapse0x26607b0();
   input += synapse0x26607f0();
   input += synapse0x2660830();
   input += synapse0x2660870();
   input += synapse0x26608b0();
   return input;
}

double NNfunction_cRg::neuron0x265ff20() {
   double input = input0x265ff20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26608f0() {
   double input = -0.0474323;
   input += synapse0x2660c30();
   input += synapse0x2660c70();
   input += synapse0x2660cb0();
   input += synapse0x2660cf0();
   input += synapse0x2660d30();
   input += synapse0x2660d70();
   input += synapse0x2660db0();
   input += synapse0x2660df0();
   input += synapse0x2660e30();
   input += synapse0x2418650();
   input += synapse0x2418690();
   input += synapse0x24186d0();
   input += synapse0x2418710();
   input += synapse0x2418750();
   input += synapse0x2418790();
   input += synapse0x24187d0();
   input += synapse0x2660a80();
   input += synapse0x2660ac0();
   input += synapse0x2418920();
   input += synapse0x2418960();
   input += synapse0x24189a0();
   input += synapse0x24189e0();
   input += synapse0x2418a20();
   input += synapse0x2661680();
   return input;
}

double NNfunction_cRg::neuron0x26608f0() {
   double input = input0x26608f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26616c0() {
   double input = -0.183116;
   input += synapse0x2661a00();
   input += synapse0x2661a40();
   input += synapse0x2661a80();
   input += synapse0x2661ac0();
   input += synapse0x2661b00();
   input += synapse0x2661b40();
   input += synapse0x2661b80();
   input += synapse0x2661bc0();
   input += synapse0x2661c00();
   input += synapse0x2661c40();
   input += synapse0x2661c80();
   input += synapse0x2661cc0();
   input += synapse0x2661d00();
   input += synapse0x2661d40();
   input += synapse0x2661d80();
   input += synapse0x2661dc0();
   input += synapse0x2661850();
   input += synapse0x2661890();
   input += synapse0x2661f10();
   input += synapse0x2661f50();
   input += synapse0x2661f90();
   input += synapse0x2661fd0();
   input += synapse0x2662010();
   input += synapse0x2662050();
   return input;
}

double NNfunction_cRg::neuron0x26616c0() {
   double input = input0x26616c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2662090() {
   double input = -0.0212105;
   input += synapse0x26623d0();
   input += synapse0x2662410();
   input += synapse0x2662450();
   input += synapse0x2662490();
   input += synapse0x26624d0();
   input += synapse0x2662510();
   input += synapse0x2662550();
   input += synapse0x2662590();
   input += synapse0x26625d0();
   input += synapse0x2662610();
   input += synapse0x2662650();
   input += synapse0x2662690();
   input += synapse0x26626d0();
   input += synapse0x2662710();
   input += synapse0x2662750();
   input += synapse0x2662790();
   input += synapse0x2662220();
   input += synapse0x2662260();
   input += synapse0x26628e0();
   input += synapse0x2662920();
   input += synapse0x2662960();
   input += synapse0x26629a0();
   input += synapse0x26629e0();
   input += synapse0x2662a20();
   return input;
}

double NNfunction_cRg::neuron0x2662090() {
   double input = input0x2662090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2662a60() {
   double input = -0.191399;
   input += synapse0x265c530();
   input += synapse0x265c570();
   input += synapse0x265c5b0();
   input += synapse0x265c5f0();
   input += synapse0x2662fb0();
   input += synapse0x2662ff0();
   input += synapse0x2663030();
   input += synapse0x2663070();
   input += synapse0x26630b0();
   input += synapse0x26630f0();
   input += synapse0x2663130();
   input += synapse0x2663170();
   input += synapse0x26631b0();
   input += synapse0x26631f0();
   input += synapse0x2663230();
   input += synapse0x2663270();
   input += synapse0x2662bf0();
   input += synapse0x2662c30();
   input += synapse0x26633c0();
   input += synapse0x2663400();
   input += synapse0x2663440();
   input += synapse0x2663480();
   input += synapse0x26634c0();
   input += synapse0x2663500();
   return input;
}

double NNfunction_cRg::neuron0x2662a60() {
   double input = input0x2662a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2663540() {
   double input = -0.955501;
   input += synapse0x2663880();
   input += synapse0x26638c0();
   input += synapse0x2663900();
   input += synapse0x2663940();
   input += synapse0x2663980();
   input += synapse0x26639c0();
   input += synapse0x2663a00();
   input += synapse0x2663a40();
   input += synapse0x2663a80();
   input += synapse0x2663ac0();
   input += synapse0x2663b00();
   input += synapse0x2663b40();
   input += synapse0x2663b80();
   input += synapse0x2663bc0();
   input += synapse0x2663c00();
   input += synapse0x2663c40();
   input += synapse0x26636d0();
   input += synapse0x2663710();
   input += synapse0x2663d90();
   input += synapse0x2663dd0();
   input += synapse0x2663e10();
   input += synapse0x2663e50();
   input += synapse0x2663e90();
   input += synapse0x2663ed0();
   return input;
}

double NNfunction_cRg::neuron0x2663540() {
   double input = input0x2663540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2663f10() {
   double input = -0.59104;
   input += synapse0x2664250();
   input += synapse0x2664290();
   input += synapse0x26642d0();
   input += synapse0x2664310();
   input += synapse0x2664350();
   input += synapse0x2664390();
   input += synapse0x26643d0();
   input += synapse0x2664410();
   input += synapse0x2664450();
   input += synapse0x2664490();
   input += synapse0x26644d0();
   input += synapse0x2664510();
   input += synapse0x2664550();
   input += synapse0x2664590();
   input += synapse0x26645d0();
   input += synapse0x2664610();
   input += synapse0x26640a0();
   input += synapse0x26640e0();
   input += synapse0x2660e70();
   input += synapse0x2660eb0();
   input += synapse0x2660ef0();
   input += synapse0x2660f30();
   input += synapse0x2660f70();
   input += synapse0x2660fb0();
   return input;
}

double NNfunction_cRg::neuron0x2663f10() {
   double input = input0x2663f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2660ff0() {
   double input = -0.306353;
   input += synapse0x2661330();
   input += synapse0x2661370();
   input += synapse0x26613b0();
   input += synapse0x26613f0();
   input += synapse0x2661430();
   input += synapse0x2661470();
   input += synapse0x26614b0();
   input += synapse0x26614f0();
   input += synapse0x2661530();
   input += synapse0x2661570();
   input += synapse0x26615b0();
   input += synapse0x26615f0();
   input += synapse0x2661630();
   input += synapse0x2665770();
   input += synapse0x26657b0();
   input += synapse0x26657f0();
   input += synapse0x2661180();
   input += synapse0x26611c0();
   input += synapse0x2665940();
   input += synapse0x2665980();
   input += synapse0x26659c0();
   input += synapse0x2665a00();
   input += synapse0x2665a40();
   input += synapse0x2665a80();
   return input;
}

double NNfunction_cRg::neuron0x2660ff0() {
   double input = input0x2660ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2665ac0() {
   double input = -1.14078;
   input += synapse0x2665e00();
   input += synapse0x2665e40();
   input += synapse0x2665e80();
   input += synapse0x2665ec0();
   input += synapse0x2665f00();
   input += synapse0x2665f40();
   input += synapse0x2665f80();
   input += synapse0x2665fc0();
   input += synapse0x2666000();
   input += synapse0x2666040();
   input += synapse0x2666080();
   input += synapse0x26660c0();
   input += synapse0x2666100();
   input += synapse0x2666140();
   input += synapse0x2666180();
   input += synapse0x26661c0();
   input += synapse0x2665c50();
   input += synapse0x2665c90();
   input += synapse0x2666310();
   input += synapse0x2666350();
   input += synapse0x2666390();
   input += synapse0x26663d0();
   input += synapse0x2666410();
   input += synapse0x2666450();
   return input;
}

double NNfunction_cRg::neuron0x2665ac0() {
   double input = input0x2665ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2666490() {
   double input = -1.00307;
   input += synapse0x26667d0();
   input += synapse0x2666810();
   input += synapse0x2666850();
   input += synapse0x2666890();
   input += synapse0x26668d0();
   input += synapse0x2666910();
   input += synapse0x2666950();
   input += synapse0x2666990();
   input += synapse0x26669d0();
   input += synapse0x2666a10();
   input += synapse0x2666a50();
   input += synapse0x2666a90();
   input += synapse0x2666ad0();
   input += synapse0x2666b10();
   input += synapse0x2666b50();
   input += synapse0x2666b90();
   input += synapse0x2666620();
   input += synapse0x2666660();
   input += synapse0x2666ce0();
   input += synapse0x2666d20();
   input += synapse0x2666d60();
   input += synapse0x2666da0();
   input += synapse0x2666de0();
   input += synapse0x2666e20();
   return input;
}

double NNfunction_cRg::neuron0x2666490() {
   double input = input0x2666490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2666e60() {
   double input = -0.368276;
   input += synapse0x26671a0();
   input += synapse0x26671e0();
   input += synapse0x2667220();
   input += synapse0x2667260();
   input += synapse0x26672a0();
   input += synapse0x26672e0();
   input += synapse0x2667320();
   input += synapse0x2667360();
   input += synapse0x26673a0();
   input += synapse0x26673e0();
   input += synapse0x2667420();
   input += synapse0x2667460();
   input += synapse0x26674a0();
   input += synapse0x26674e0();
   input += synapse0x2667520();
   input += synapse0x2667560();
   input += synapse0x2666ff0();
   input += synapse0x2667030();
   input += synapse0x26676b0();
   input += synapse0x26676f0();
   input += synapse0x2667730();
   input += synapse0x2667770();
   input += synapse0x26677b0();
   input += synapse0x26677f0();
   return input;
}

double NNfunction_cRg::neuron0x2666e60() {
   double input = input0x2666e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2667830() {
   double input = 0.693479;
   input += synapse0x2667b70();
   input += synapse0x2658f00();
   input += synapse0x2658f40();
   input += synapse0x2659240();
   input += synapse0x2659280();
   input += synapse0x2659580();
   input += synapse0x26595c0();
   input += synapse0x26598c0();
   input += synapse0x2659900();
   input += synapse0x2659c00();
   input += synapse0x2659c40();
   input += synapse0x2659f40();
   input += synapse0x2659f80();
   input += synapse0x265a280();
   input += synapse0x265a2c0();
   input += synapse0x265a5c0();
   input += synapse0x265a600();
   input += synapse0x265a900();
   input += synapse0x265a940();
   input += synapse0x265ac40();
   input += synapse0x265ac80();
   input += synapse0x265af80();
   input += synapse0x265afc0();
   input += synapse0x265b2c0();
   return input;
}

double NNfunction_cRg::neuron0x2667830() {
   double input = input0x2667830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2669640() {
   double input = -0.0254736;
   input += synapse0x265b300();
   input += synapse0x265bfc0();
   input += synapse0x265c000();
   input += synapse0x26679c0();
   input += synapse0x2667a00();
   input += synapse0x265c300();
   input += synapse0x265c340();
   input += synapse0x240a670();
   input += synapse0x240a6b0();
   input += synapse0x265ca80();
   input += synapse0x265cac0();
   input += synapse0x265cdc0();
   input += synapse0x265ce00();
   input += synapse0x265d100();
   input += synapse0x265d140();
   input += synapse0x265d440();
   input += synapse0x265d480();
   input += synapse0x265d780();
   input += synapse0x265d7c0();
   input += synapse0x265dac0();
   input += synapse0x265db00();
   input += synapse0x265b600();
   input += synapse0x265b640();
   input += synapse0x26698e0();
   return input;
}

double NNfunction_cRg::neuron0x2669640() {
   double input = input0x2669640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2669920() {
   double input = 0.619454;
   input += synapse0x2669c60();
   input += synapse0x2669ca0();
   input += synapse0x2669ce0();
   input += synapse0x2669d20();
   input += synapse0x2669d60();
   input += synapse0x2669da0();
   input += synapse0x2669de0();
   input += synapse0x2669e20();
   input += synapse0x2669e60();
   input += synapse0x2669ea0();
   input += synapse0x2669ee0();
   input += synapse0x2669f20();
   input += synapse0x2669f60();
   input += synapse0x2669fa0();
   input += synapse0x2669fe0();
   input += synapse0x266a020();
   input += synapse0x2669ab0();
   input += synapse0x2669af0();
   input += synapse0x266a170();
   input += synapse0x266a1b0();
   input += synapse0x266a1f0();
   input += synapse0x266a230();
   input += synapse0x266a270();
   input += synapse0x266a2b0();
   return input;
}

double NNfunction_cRg::neuron0x2669920() {
   double input = input0x2669920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266a2f0() {
   double input = -2.8162;
   input += synapse0x266a630();
   input += synapse0x266a670();
   input += synapse0x266a6b0();
   input += synapse0x266a6f0();
   input += synapse0x266a730();
   input += synapse0x266a770();
   input += synapse0x266a7b0();
   input += synapse0x266a7f0();
   input += synapse0x266a830();
   input += synapse0x266a870();
   input += synapse0x266a8b0();
   input += synapse0x266a8f0();
   input += synapse0x266a930();
   input += synapse0x266a970();
   input += synapse0x266a9b0();
   input += synapse0x266a9f0();
   input += synapse0x266a480();
   input += synapse0x266a4c0();
   input += synapse0x266ab40();
   input += synapse0x266ab80();
   input += synapse0x266abc0();
   input += synapse0x266ac00();
   input += synapse0x266ac40();
   input += synapse0x266ac80();
   return input;
}

double NNfunction_cRg::neuron0x266a2f0() {
   double input = input0x266a2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266acc0() {
   double input = 0.253724;
   input += synapse0x266b000();
   input += synapse0x266b040();
   input += synapse0x266b080();
   input += synapse0x266b0c0();
   input += synapse0x266b100();
   input += synapse0x266b140();
   input += synapse0x266b180();
   input += synapse0x266b1c0();
   input += synapse0x266b200();
   input += synapse0x266b240();
   input += synapse0x266b280();
   input += synapse0x266b2c0();
   input += synapse0x266b300();
   input += synapse0x266b340();
   input += synapse0x266b380();
   input += synapse0x266b3c0();
   input += synapse0x266ae50();
   input += synapse0x266ae90();
   input += synapse0x266b510();
   input += synapse0x266b550();
   input += synapse0x266b590();
   input += synapse0x266b5d0();
   input += synapse0x266b610();
   input += synapse0x266b650();
   return input;
}

double NNfunction_cRg::neuron0x266acc0() {
   double input = input0x266acc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266b690() {
   double input = -1.54981;
   input += synapse0x266b9d0();
   input += synapse0x266ba10();
   input += synapse0x266ba50();
   input += synapse0x266ba90();
   input += synapse0x266bad0();
   input += synapse0x266bb10();
   input += synapse0x266bb50();
   input += synapse0x266bb90();
   input += synapse0x266bbd0();
   input += synapse0x266bc10();
   input += synapse0x266bc50();
   input += synapse0x266bc90();
   input += synapse0x266bcd0();
   input += synapse0x266bd10();
   input += synapse0x266bd50();
   input += synapse0x266bd90();
   input += synapse0x266b820();
   input += synapse0x266b860();
   input += synapse0x266bee0();
   input += synapse0x266bf20();
   input += synapse0x266bf60();
   input += synapse0x266bfa0();
   input += synapse0x266bfe0();
   input += synapse0x266c020();
   return input;
}

double NNfunction_cRg::neuron0x266b690() {
   double input = input0x266b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266c060() {
   double input = -0.639446;
   input += synapse0x266c3a0();
   input += synapse0x266c3e0();
   input += synapse0x266c420();
   input += synapse0x266c460();
   input += synapse0x266c4a0();
   input += synapse0x266c4e0();
   input += synapse0x266c520();
   input += synapse0x266c560();
   input += synapse0x266c5a0();
   input += synapse0x2664760();
   input += synapse0x26647a0();
   input += synapse0x26647e0();
   input += synapse0x2664820();
   input += synapse0x2664860();
   input += synapse0x26648a0();
   input += synapse0x26648e0();
   input += synapse0x266c1f0();
   input += synapse0x266c230();
   input += synapse0x2664a30();
   input += synapse0x2664a70();
   input += synapse0x2664ab0();
   input += synapse0x2664af0();
   input += synapse0x2664b30();
   input += synapse0x2664b70();
   return input;
}

double NNfunction_cRg::neuron0x266c060() {
   double input = input0x266c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2664bb0() {
   double input = 0.739381;
   input += synapse0x2664ef0();
   input += synapse0x2664f30();
   input += synapse0x2664f70();
   input += synapse0x2664fb0();
   input += synapse0x2664ff0();
   input += synapse0x2665030();
   input += synapse0x2665070();
   input += synapse0x26650b0();
   input += synapse0x26650f0();
   input += synapse0x2665130();
   input += synapse0x2665170();
   input += synapse0x26651b0();
   input += synapse0x26651f0();
   input += synapse0x2665230();
   input += synapse0x2665270();
   input += synapse0x26652b0();
   input += synapse0x2664d40();
   input += synapse0x2664d80();
   input += synapse0x2665400();
   input += synapse0x2665440();
   input += synapse0x2665480();
   input += synapse0x26654c0();
   input += synapse0x2665500();
   input += synapse0x2665540();
   return input;
}

double NNfunction_cRg::neuron0x2664bb0() {
   double input = input0x2664bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2665580() {
   double input = -0.345313;
   input += synapse0x2665710();
   input += synapse0x266e7a0();
   input += synapse0x266e7e0();
   input += synapse0x266e820();
   input += synapse0x266e860();
   input += synapse0x266e8a0();
   input += synapse0x266e8e0();
   input += synapse0x266e920();
   input += synapse0x266e960();
   input += synapse0x266e9a0();
   input += synapse0x266e9e0();
   input += synapse0x266ea20();
   input += synapse0x266ea60();
   input += synapse0x266eaa0();
   input += synapse0x266eae0();
   input += synapse0x266eb20();
   input += synapse0x266e5f0();
   input += synapse0x266e630();
   input += synapse0x266ec70();
   input += synapse0x266ecb0();
   input += synapse0x266ecf0();
   input += synapse0x266ed30();
   input += synapse0x266ed70();
   input += synapse0x266edb0();
   return input;
}

double NNfunction_cRg::neuron0x2665580() {
   double input = input0x2665580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266edf0() {
   double input = 1.60228;
   input += synapse0x266f130();
   input += synapse0x266f170();
   input += synapse0x266f1b0();
   input += synapse0x266f1f0();
   input += synapse0x266f230();
   input += synapse0x266f270();
   input += synapse0x266f2b0();
   input += synapse0x266f2f0();
   input += synapse0x266f330();
   input += synapse0x266f370();
   input += synapse0x266f3b0();
   input += synapse0x266f3f0();
   input += synapse0x266f430();
   input += synapse0x266f470();
   input += synapse0x266f4b0();
   input += synapse0x266f4f0();
   input += synapse0x266ef80();
   input += synapse0x266efc0();
   input += synapse0x266f640();
   input += synapse0x266f680();
   input += synapse0x266f6c0();
   input += synapse0x266f700();
   input += synapse0x266f740();
   input += synapse0x266f780();
   return input;
}

double NNfunction_cRg::neuron0x266edf0() {
   double input = input0x266edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266f7c0() {
   double input = -0.273098;
   input += synapse0x266fb00();
   input += synapse0x266fb40();
   input += synapse0x266fb80();
   input += synapse0x266fbc0();
   input += synapse0x266fc00();
   input += synapse0x266fc40();
   input += synapse0x266fc80();
   input += synapse0x266fcc0();
   input += synapse0x266fd00();
   input += synapse0x266fd40();
   input += synapse0x266fd80();
   input += synapse0x266fdc0();
   input += synapse0x266fe00();
   input += synapse0x266fe40();
   input += synapse0x266fe80();
   input += synapse0x266fec0();
   input += synapse0x266f950();
   input += synapse0x266f990();
   input += synapse0x2670010();
   input += synapse0x2670050();
   input += synapse0x2670090();
   input += synapse0x26700d0();
   input += synapse0x2670110();
   input += synapse0x2670150();
   return input;
}

double NNfunction_cRg::neuron0x266f7c0() {
   double input = input0x266f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2670190() {
   double input = 0.788901;
   input += synapse0x26704d0();
   input += synapse0x2670510();
   input += synapse0x2670550();
   input += synapse0x2670590();
   input += synapse0x26705d0();
   input += synapse0x2670610();
   input += synapse0x2670650();
   input += synapse0x2670690();
   input += synapse0x26706d0();
   input += synapse0x2670710();
   input += synapse0x2670750();
   input += synapse0x2670790();
   input += synapse0x26707d0();
   input += synapse0x2670810();
   input += synapse0x2670850();
   input += synapse0x2670890();
   input += synapse0x2670320();
   input += synapse0x2670360();
   input += synapse0x26709e0();
   input += synapse0x2670a20();
   input += synapse0x2670a60();
   input += synapse0x2670aa0();
   input += synapse0x2670ae0();
   input += synapse0x2670b20();
   return input;
}

double NNfunction_cRg::neuron0x2670190() {
   double input = input0x2670190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2670b60() {
   double input = 1.81469;
   input += synapse0x2670ea0();
   input += synapse0x2670ee0();
   input += synapse0x2670f20();
   input += synapse0x2670f60();
   input += synapse0x2670fa0();
   input += synapse0x2670fe0();
   input += synapse0x2671020();
   input += synapse0x2671060();
   input += synapse0x26710a0();
   input += synapse0x26710e0();
   input += synapse0x2671120();
   input += synapse0x2671160();
   input += synapse0x26711a0();
   input += synapse0x26711e0();
   input += synapse0x2671220();
   input += synapse0x2671260();
   input += synapse0x2670cf0();
   input += synapse0x2670d30();
   input += synapse0x26713b0();
   input += synapse0x26713f0();
   input += synapse0x2671430();
   input += synapse0x2671470();
   input += synapse0x26714b0();
   input += synapse0x26714f0();
   return input;
}

double NNfunction_cRg::neuron0x2670b60() {
   double input = input0x2670b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2671530() {
   double input = 0.163534;
   input += synapse0x2671870();
   input += synapse0x26718b0();
   input += synapse0x26718f0();
   input += synapse0x2671930();
   input += synapse0x2671970();
   input += synapse0x26719b0();
   input += synapse0x26719f0();
   input += synapse0x2671a30();
   input += synapse0x2671a70();
   input += synapse0x2671ab0();
   input += synapse0x2671af0();
   input += synapse0x2671b30();
   input += synapse0x2671b70();
   input += synapse0x2671bb0();
   input += synapse0x2671bf0();
   input += synapse0x2671c30();
   input += synapse0x26716c0();
   input += synapse0x2671700();
   input += synapse0x2671d80();
   input += synapse0x2671dc0();
   input += synapse0x2671e00();
   input += synapse0x2671e40();
   input += synapse0x2671e80();
   input += synapse0x2671ec0();
   return input;
}

double NNfunction_cRg::neuron0x2671530() {
   double input = input0x2671530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2671f00() {
   double input = -0.072739;
   input += synapse0x2672240();
   input += synapse0x2672280();
   input += synapse0x26722c0();
   input += synapse0x2672300();
   input += synapse0x2672340();
   input += synapse0x2672380();
   input += synapse0x26723c0();
   input += synapse0x2672400();
   input += synapse0x2672440();
   input += synapse0x2672480();
   input += synapse0x26724c0();
   input += synapse0x2672500();
   input += synapse0x2672540();
   input += synapse0x2672580();
   input += synapse0x26725c0();
   input += synapse0x2672600();
   input += synapse0x2672090();
   input += synapse0x26720d0();
   input += synapse0x2672750();
   input += synapse0x2672790();
   input += synapse0x26727d0();
   input += synapse0x2672810();
   input += synapse0x2672850();
   input += synapse0x2672890();
   return input;
}

double NNfunction_cRg::neuron0x2671f00() {
   double input = input0x2671f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26728d0() {
   double input = 0.618904;
   input += synapse0x2672c10();
   input += synapse0x2672c50();
   input += synapse0x2672c90();
   input += synapse0x2672cd0();
   input += synapse0x2672d10();
   input += synapse0x2672d50();
   input += synapse0x2672d90();
   input += synapse0x2672dd0();
   input += synapse0x2672e10();
   input += synapse0x2672e50();
   input += synapse0x2672e90();
   input += synapse0x2672ed0();
   input += synapse0x2672f10();
   input += synapse0x2672f50();
   input += synapse0x2672f90();
   input += synapse0x2672fd0();
   input += synapse0x2672a60();
   input += synapse0x2672aa0();
   input += synapse0x2673120();
   input += synapse0x2673160();
   input += synapse0x26731a0();
   input += synapse0x26731e0();
   input += synapse0x2673220();
   input += synapse0x2673260();
   return input;
}

double NNfunction_cRg::neuron0x26728d0() {
   double input = input0x26728d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26732a0() {
   double input = 0.988602;
   input += synapse0x26735e0();
   input += synapse0x2667bb0();
   input += synapse0x2667bf0();
   input += synapse0x2667c30();
   input += synapse0x2667e80();
   input += synapse0x2667ec0();
   input += synapse0x2667f00();
   input += synapse0x2668150();
   input += synapse0x2668190();
   input += synapse0x26683e0();
   input += synapse0x2668420();
   input += synapse0x2668460();
   input += synapse0x26686b0();
   input += synapse0x26686f0();
   input += synapse0x2668940();
   input += synapse0x2668980();
   input += synapse0x2673430();
   input += synapse0x2673470();
   input += synapse0x2668ad0();
   input += synapse0x2668fe0();
   input += synapse0x2669020();
   input += synapse0x2669060();
   input += synapse0x26692b0();
   input += synapse0x26692f0();
   return input;
}

double NNfunction_cRg::neuron0x26732a0() {
   double input = input0x26732a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2669330() {
   double input = 0.520965;
   input += synapse0x2668ba0();
   input += synapse0x2668be0();
   input += synapse0x2668c20();
   input += synapse0x2668c60();
   input += synapse0x26695e0();
   input += synapse0x2675930();
   input += synapse0x2675970();
   input += synapse0x26759b0();
   input += synapse0x26759f0();
   input += synapse0x2675a30();
   input += synapse0x2675a70();
   input += synapse0x2675ab0();
   input += synapse0x2675af0();
   input += synapse0x2675b30();
   input += synapse0x2675b70();
   input += synapse0x2675bb0();
   input += synapse0x26694c0();
   input += synapse0x2669500();
   input += synapse0x2675d00();
   input += synapse0x2675d40();
   input += synapse0x2675d80();
   input += synapse0x2675dc0();
   input += synapse0x2675e00();
   input += synapse0x2675e40();
   return input;
}

double NNfunction_cRg::neuron0x2669330() {
   double input = input0x2669330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2675e80() {
   double input = 0.773511;
   input += synapse0x26761c0();
   input += synapse0x2676200();
   input += synapse0x2676240();
   input += synapse0x2676280();
   input += synapse0x26762c0();
   input += synapse0x2676300();
   input += synapse0x2676340();
   input += synapse0x2676380();
   input += synapse0x26763c0();
   input += synapse0x2676400();
   input += synapse0x2676440();
   input += synapse0x2676480();
   input += synapse0x26764c0();
   input += synapse0x2676500();
   input += synapse0x2676540();
   input += synapse0x2676580();
   input += synapse0x2676010();
   input += synapse0x2676050();
   input += synapse0x26766d0();
   input += synapse0x2676710();
   input += synapse0x2676750();
   input += synapse0x2676790();
   input += synapse0x26767d0();
   input += synapse0x2676810();
   return input;
}

double NNfunction_cRg::neuron0x2675e80() {
   double input = input0x2675e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2676850() {
   double input = 0.479273;
   input += synapse0x2676b90();
   input += synapse0x2676bd0();
   input += synapse0x2676c10();
   input += synapse0x2676c50();
   input += synapse0x2676c90();
   input += synapse0x2676cd0();
   input += synapse0x2676d10();
   input += synapse0x2676d50();
   input += synapse0x2676d90();
   input += synapse0x2676dd0();
   input += synapse0x2676e10();
   input += synapse0x2676e50();
   input += synapse0x2676e90();
   input += synapse0x2676ed0();
   input += synapse0x2676f10();
   input += synapse0x2676f50();
   input += synapse0x26769e0();
   input += synapse0x2676a20();
   input += synapse0x26770a0();
   input += synapse0x26770e0();
   input += synapse0x2677120();
   input += synapse0x2677160();
   input += synapse0x26771a0();
   input += synapse0x26771e0();
   return input;
}

double NNfunction_cRg::neuron0x2676850() {
   double input = input0x2676850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2677220() {
   double input = -0.574652;
   input += synapse0x2677560();
   input += synapse0x26775a0();
   input += synapse0x26775e0();
   input += synapse0x2677620();
   input += synapse0x2677660();
   input += synapse0x26776a0();
   input += synapse0x26776e0();
   input += synapse0x2677720();
   input += synapse0x2677760();
   input += synapse0x26777a0();
   input += synapse0x26777e0();
   input += synapse0x2677820();
   input += synapse0x2677860();
   input += synapse0x26778a0();
   input += synapse0x26778e0();
   input += synapse0x2677920();
   input += synapse0x26773b0();
   input += synapse0x26773f0();
   input += synapse0x2677a70();
   input += synapse0x2677ab0();
   input += synapse0x2677af0();
   input += synapse0x2677b30();
   input += synapse0x2677b70();
   input += synapse0x2677bb0();
   return input;
}

double NNfunction_cRg::neuron0x2677220() {
   double input = input0x2677220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2677bf0() {
   double input = -4.08034;
   input += synapse0x2677f30();
   input += synapse0x2677f70();
   input += synapse0x2677fb0();
   input += synapse0x2677ff0();
   input += synapse0x2678030();
   input += synapse0x2678070();
   input += synapse0x26780b0();
   input += synapse0x26780f0();
   input += synapse0x2678130();
   input += synapse0x2678170();
   input += synapse0x26781b0();
   input += synapse0x26781f0();
   input += synapse0x2678230();
   input += synapse0x2678270();
   input += synapse0x26782b0();
   input += synapse0x26782f0();
   input += synapse0x2677d80();
   input += synapse0x2677dc0();
   input += synapse0x2678440();
   input += synapse0x2678480();
   input += synapse0x26784c0();
   input += synapse0x2678500();
   input += synapse0x2678540();
   input += synapse0x2678580();
   return input;
}

double NNfunction_cRg::neuron0x2677bf0() {
   double input = input0x2677bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26785c0() {
   double input = 0.499643;
   input += synapse0x2678900();
   input += synapse0x2678940();
   input += synapse0x2678980();
   input += synapse0x26789c0();
   input += synapse0x2678a00();
   input += synapse0x2678a40();
   input += synapse0x2678a80();
   input += synapse0x2678ac0();
   input += synapse0x2678b00();
   input += synapse0x2678b40();
   input += synapse0x2678b80();
   input += synapse0x2678bc0();
   input += synapse0x2678c00();
   input += synapse0x2678c40();
   input += synapse0x2678c80();
   input += synapse0x2678cc0();
   input += synapse0x2678750();
   input += synapse0x2678790();
   input += synapse0x2678e10();
   input += synapse0x2678e50();
   input += synapse0x2678e90();
   input += synapse0x2678ed0();
   input += synapse0x2678f10();
   input += synapse0x2678f50();
   return input;
}

double NNfunction_cRg::neuron0x26785c0() {
   double input = input0x26785c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2678f90() {
   double input = -0.717359;
   input += synapse0x26792d0();
   input += synapse0x2679310();
   input += synapse0x2679350();
   input += synapse0x2679390();
   input += synapse0x26793d0();
   input += synapse0x2679410();
   input += synapse0x2679450();
   input += synapse0x2679490();
   input += synapse0x26794d0();
   input += synapse0x2679510();
   input += synapse0x2679550();
   input += synapse0x2679590();
   input += synapse0x26795d0();
   input += synapse0x2679610();
   input += synapse0x2679650();
   input += synapse0x2679690();
   input += synapse0x2679120();
   input += synapse0x2679160();
   input += synapse0x26797e0();
   input += synapse0x2679820();
   input += synapse0x2679860();
   input += synapse0x26798a0();
   input += synapse0x26798e0();
   input += synapse0x2679920();
   return input;
}

double NNfunction_cRg::neuron0x2678f90() {
   double input = input0x2678f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2679960() {
   double input = 1.99324;
   input += synapse0x2679ca0();
   input += synapse0x2679ce0();
   input += synapse0x2679d20();
   input += synapse0x2679d60();
   input += synapse0x2679da0();
   input += synapse0x2679de0();
   input += synapse0x2679e20();
   input += synapse0x2679e60();
   input += synapse0x2679ea0();
   input += synapse0x2679ee0();
   input += synapse0x2679f20();
   input += synapse0x2679f60();
   input += synapse0x2679fa0();
   input += synapse0x2679fe0();
   input += synapse0x267a020();
   input += synapse0x267a060();
   input += synapse0x2679af0();
   input += synapse0x2679b30();
   input += synapse0x267a1b0();
   input += synapse0x267a1f0();
   input += synapse0x267a230();
   input += synapse0x267a270();
   input += synapse0x267a2b0();
   input += synapse0x267a2f0();
   return input;
}

double NNfunction_cRg::neuron0x2679960() {
   double input = input0x2679960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x267a330() {
   double input = -1.01832;
   input += synapse0x2662da0();
   input += synapse0x2662de0();
   input += synapse0x2662e20();
   input += synapse0x2662e60();
   input += synapse0x2662ea0();
   input += synapse0x2662ee0();
   input += synapse0x2662f20();
   input += synapse0x2662f60();
   input += synapse0x267aa80();
   input += synapse0x267aac0();
   input += synapse0x267ab00();
   input += synapse0x267ab40();
   input += synapse0x267ab80();
   input += synapse0x267abc0();
   input += synapse0x267ac00();
   input += synapse0x267ac40();
   input += synapse0x267a4c0();
   input += synapse0x267a500();
   input += synapse0x267ad90();
   input += synapse0x267add0();
   input += synapse0x267ae10();
   input += synapse0x267ae50();
   input += synapse0x267ae90();
   input += synapse0x267aed0();
   return input;
}

double NNfunction_cRg::neuron0x267a330() {
   double input = input0x267a330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x267af10() {
   double input = -1.28512;
   input += synapse0x267b250();
   input += synapse0x267b290();
   input += synapse0x267b2d0();
   input += synapse0x267b310();
   input += synapse0x267b350();
   input += synapse0x267b390();
   input += synapse0x267b3d0();
   input += synapse0x267b410();
   input += synapse0x267b450();
   input += synapse0x267b490();
   input += synapse0x267b4d0();
   input += synapse0x267b510();
   input += synapse0x267b550();
   input += synapse0x267b590();
   input += synapse0x267b5d0();
   input += synapse0x267b610();
   input += synapse0x267b0a0();
   input += synapse0x267b0e0();
   input += synapse0x267b760();
   input += synapse0x267b7a0();
   input += synapse0x267b7e0();
   input += synapse0x267b820();
   input += synapse0x267b860();
   input += synapse0x267b8a0();
   return input;
}

double NNfunction_cRg::neuron0x267af10() {
   double input = input0x267af10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x267b8e0() {
   double input = -0.16552;
   input += synapse0x267bc20();
   input += synapse0x267bc60();
   input += synapse0x267bca0();
   input += synapse0x267bce0();
   input += synapse0x267bd20();
   input += synapse0x267bd60();
   input += synapse0x267bda0();
   input += synapse0x267bde0();
   input += synapse0x267be20();
   input += synapse0x267be60();
   input += synapse0x267bea0();
   input += synapse0x267bee0();
   input += synapse0x267bf20();
   input += synapse0x267bf60();
   input += synapse0x267bfa0();
   input += synapse0x267bfe0();
   input += synapse0x267ba70();
   input += synapse0x267bab0();
   input += synapse0x266c5e0();
   input += synapse0x266c620();
   input += synapse0x266c660();
   input += synapse0x266c6a0();
   input += synapse0x266c6e0();
   input += synapse0x266c720();
   return input;
}

double NNfunction_cRg::neuron0x267b8e0() {
   double input = input0x267b8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266c760() {
   double input = -0.0430566;
   input += synapse0x266caa0();
   input += synapse0x266cae0();
   input += synapse0x266cb20();
   input += synapse0x266cb60();
   input += synapse0x266cba0();
   input += synapse0x266cbe0();
   input += synapse0x266cc20();
   input += synapse0x266cc60();
   input += synapse0x266cca0();
   input += synapse0x266cce0();
   input += synapse0x266cd20();
   input += synapse0x266cd60();
   input += synapse0x266cda0();
   input += synapse0x266cde0();
   input += synapse0x266ce20();
   input += synapse0x266ce60();
   input += synapse0x266c8f0();
   input += synapse0x266c930();
   input += synapse0x266cfb0();
   input += synapse0x266cff0();
   input += synapse0x266d030();
   input += synapse0x266d070();
   input += synapse0x266d0b0();
   input += synapse0x266d0f0();
   return input;
}

double NNfunction_cRg::neuron0x266c760() {
   double input = input0x266c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266d130() {
   double input = 0.191017;
   input += synapse0x266d470();
   input += synapse0x266d4b0();
   input += synapse0x266d4f0();
   input += synapse0x266d530();
   input += synapse0x266d570();
   input += synapse0x266d5b0();
   input += synapse0x266d5f0();
   input += synapse0x266d630();
   input += synapse0x266d670();
   input += synapse0x266d6b0();
   input += synapse0x266d6f0();
   input += synapse0x266d730();
   input += synapse0x266d770();
   input += synapse0x266d7b0();
   input += synapse0x266d7f0();
   input += synapse0x266d830();
   input += synapse0x266d2c0();
   input += synapse0x266d300();
   input += synapse0x266d980();
   input += synapse0x266d9c0();
   input += synapse0x266da00();
   input += synapse0x266da40();
   input += synapse0x266da80();
   input += synapse0x266dac0();
   return input;
}

double NNfunction_cRg::neuron0x266d130() {
   double input = input0x266d130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x266db00() {
   double input = 0.393729;
   input += synapse0x266de40();
   input += synapse0x266de80();
   input += synapse0x266dec0();
   input += synapse0x266df00();
   input += synapse0x266df40();
   input += synapse0x266df80();
   input += synapse0x266dfc0();
   input += synapse0x266e000();
   input += synapse0x266e040();
   input += synapse0x266e080();
   input += synapse0x266e0c0();
   input += synapse0x266e100();
   input += synapse0x266e140();
   input += synapse0x266e180();
   input += synapse0x266e1c0();
   input += synapse0x266e200();
   input += synapse0x266dc90();
   input += synapse0x266dcd0();
   input += synapse0x266e350();
   input += synapse0x266e390();
   input += synapse0x266e3d0();
   input += synapse0x266e410();
   input += synapse0x266e450();
   input += synapse0x266e490();
   return input;
}

double NNfunction_cRg::neuron0x266db00() {
   double input = input0x266db00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2680140() {
   double input = -0.508414;
   input += synapse0x2680360();
   input += synapse0x26803a0();
   input += synapse0x26803e0();
   input += synapse0x2680420();
   input += synapse0x2680460();
   input += synapse0x26804a0();
   input += synapse0x26804e0();
   input += synapse0x2680520();
   input += synapse0x2680560();
   input += synapse0x26805a0();
   input += synapse0x26805e0();
   input += synapse0x2680620();
   input += synapse0x2680660();
   input += synapse0x26806a0();
   input += synapse0x26806e0();
   input += synapse0x2680720();
   input += synapse0x266e4d0();
   input += synapse0x266e510();
   input += synapse0x2680870();
   input += synapse0x26808b0();
   input += synapse0x26808f0();
   input += synapse0x2680930();
   input += synapse0x2680970();
   input += synapse0x26809b0();
   return input;
}

double NNfunction_cRg::neuron0x2680140() {
   double input = input0x2680140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26809f0() {
   double input = -0.552741;
   input += synapse0x2680d30();
   input += synapse0x2680d70();
   input += synapse0x2680db0();
   input += synapse0x2680df0();
   input += synapse0x2680e30();
   input += synapse0x2680e70();
   input += synapse0x2680eb0();
   input += synapse0x2680ef0();
   input += synapse0x2680f30();
   input += synapse0x2680f70();
   input += synapse0x2680fb0();
   input += synapse0x2680ff0();
   input += synapse0x2681030();
   input += synapse0x2681070();
   input += synapse0x26810b0();
   input += synapse0x26810f0();
   input += synapse0x2680b80();
   input += synapse0x2680bc0();
   input += synapse0x2681240();
   input += synapse0x2681280();
   input += synapse0x26812c0();
   input += synapse0x2681300();
   input += synapse0x2681340();
   input += synapse0x2681380();
   return input;
}

double NNfunction_cRg::neuron0x26809f0() {
   double input = input0x26809f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26813c0() {
   double input = 0.423487;
   input += synapse0x2681700();
   input += synapse0x2681740();
   input += synapse0x2681780();
   input += synapse0x26817c0();
   input += synapse0x2681800();
   input += synapse0x2681840();
   input += synapse0x2681880();
   input += synapse0x26818c0();
   input += synapse0x2681900();
   input += synapse0x2681940();
   input += synapse0x2681980();
   input += synapse0x26819c0();
   input += synapse0x2681a00();
   input += synapse0x2681a40();
   input += synapse0x2681a80();
   input += synapse0x2681ac0();
   input += synapse0x2681550();
   input += synapse0x2681590();
   input += synapse0x2681c10();
   input += synapse0x2681c50();
   input += synapse0x2681c90();
   input += synapse0x2681cd0();
   input += synapse0x2681d10();
   input += synapse0x2681d50();
   return input;
}

double NNfunction_cRg::neuron0x26813c0() {
   double input = input0x26813c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2681d90() {
   double input = 0.199555;
   input += synapse0x26820d0();
   input += synapse0x2682110();
   input += synapse0x2682150();
   input += synapse0x2682190();
   input += synapse0x26821d0();
   input += synapse0x2682210();
   input += synapse0x2682250();
   input += synapse0x2682290();
   input += synapse0x26822d0();
   input += synapse0x2682310();
   input += synapse0x2682350();
   input += synapse0x2682390();
   input += synapse0x26823d0();
   input += synapse0x2682410();
   input += synapse0x2682450();
   input += synapse0x2682490();
   input += synapse0x2681f20();
   input += synapse0x2681f60();
   input += synapse0x26825e0();
   input += synapse0x2682620();
   input += synapse0x2682660();
   input += synapse0x26826a0();
   input += synapse0x26826e0();
   input += synapse0x2682720();
   return input;
}

double NNfunction_cRg::neuron0x2681d90() {
   double input = input0x2681d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2688f90() {
   double input = -0.811266;
   input += synapse0x2418af0();
   input += synapse0x2418b30();
   input += synapse0x26601d0();
   input += synapse0x2660210();
   input += synapse0x2660ba0();
   input += synapse0x2660be0();
   input += synapse0x2661970();
   input += synapse0x26619b0();
   input += synapse0x2662340();
   input += synapse0x2662380();
   input += synapse0x2662d10();
   input += synapse0x2662d50();
   input += synapse0x26637f0();
   input += synapse0x2663830();
   input += synapse0x26641c0();
   input += synapse0x2664200();
   input += synapse0x26612a0();
   input += synapse0x26612e0();
   input += synapse0x2665d70();
   input += synapse0x2665db0();
   input += synapse0x2666740();
   input += synapse0x2666780();
   input += synapse0x2667110();
   input += synapse0x2667150();
   input += synapse0x2667ae0();
   input += synapse0x2667b20();
   input += synapse0x265bc80();
   input += synapse0x265bcc0();
   input += synapse0x2669bd0();
   input += synapse0x2669c10();
   input += synapse0x266a5a0();
   input += synapse0x266a5e0();
   input += synapse0x266af70();
   input += synapse0x266afb0();
   input += synapse0x266b940();
   input += synapse0x266b980();
   input += synapse0x266c310();
   input += synapse0x266c350();
   input += synapse0x2664e60();
   input += synapse0x2664ea0();
   input += synapse0x266e710();
   input += synapse0x266e750();
   input += synapse0x266f0a0();
   input += synapse0x266f0e0();
   input += synapse0x266fa70();
   input += synapse0x266fab0();
   input += synapse0x2670440();
   input += synapse0x2670480();
   input += synapse0x2670e10();
   input += synapse0x2670e50();
   return input;
}

double NNfunction_cRg::neuron0x2688f90() {
   double input = input0x2688f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x2689330() {
   double input = 0.563405;
   input += synapse0x2673550();
   input += synapse0x2673590();
   input += synapse0x2668b10();
   input += synapse0x2668b50();
   input += synapse0x2676130();
   input += synapse0x2676170();
   input += synapse0x2676b00();
   input += synapse0x2676b40();
   input += synapse0x26774d0();
   input += synapse0x2677510();
   input += synapse0x2677ea0();
   input += synapse0x2677ee0();
   input += synapse0x2678870();
   input += synapse0x26788b0();
   input += synapse0x2679240();
   input += synapse0x2679280();
   input += synapse0x2679c10();
   input += synapse0x2679c50();
   input += synapse0x267a5e0();
   input += synapse0x267a620();
   input += synapse0x267b1c0();
   input += synapse0x267b200();
   input += synapse0x267bb90();
   input += synapse0x267bbd0();
   input += synapse0x266ca10();
   input += synapse0x266ca50();
   input += synapse0x266d3e0();
   input += synapse0x266d420();
   input += synapse0x266ddb0();
   input += synapse0x266ddf0();
   input += synapse0x26802d0();
   input += synapse0x2680310();
   input += synapse0x2680ca0();
   input += synapse0x2680ce0();
   input += synapse0x2681670();
   input += synapse0x26816b0();
   input += synapse0x2682040();
   input += synapse0x2682080();
   input += synapse0x265df30();
   input += synapse0x265df70();
   input += synapse0x26717e0();
   input += synapse0x2671820();
   input += synapse0x2682760();
   input += synapse0x26827a0();
   input += synapse0x26827e0();
   input += synapse0x2682820();
   input += synapse0x26896d0();
   input += synapse0x2689710();
   input += synapse0x2689750();
   input += synapse0x2689790();
   return input;
}

double NNfunction_cRg::neuron0x2689330() {
   double input = input0x2689330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x26897d0() {
   double input = 0.372497;
   input += synapse0x2689b10();
   input += synapse0x2689b50();
   input += synapse0x2689b90();
   input += synapse0x2689bd0();
   input += synapse0x2689c10();
   input += synapse0x2689c50();
   input += synapse0x2689c90();
   input += synapse0x2689cd0();
   input += synapse0x2689d10();
   input += synapse0x2689d50();
   input += synapse0x2689d90();
   input += synapse0x2689dd0();
   input += synapse0x2689e10();
   input += synapse0x2689e50();
   input += synapse0x2689e90();
   input += synapse0x2689ed0();
   input += synapse0x2689960();
   input += synapse0x26899a0();
   input += synapse0x268a020();
   input += synapse0x268a060();
   input += synapse0x268a0a0();
   input += synapse0x268a0e0();
   input += synapse0x268a120();
   input += synapse0x268a160();
   input += synapse0x268a1a0();
   input += synapse0x268a1e0();
   input += synapse0x268a220();
   input += synapse0x268a260();
   input += synapse0x268a2a0();
   input += synapse0x268a2e0();
   input += synapse0x268a320();
   input += synapse0x268a360();
   input += synapse0x2689f10();
   input += synapse0x2689f50();
   input += synapse0x2689f90();
   input += synapse0x2689fd0();
   input += synapse0x268a5b0();
   input += synapse0x268a5f0();
   input += synapse0x268a630();
   input += synapse0x268a670();
   input += synapse0x268a6b0();
   input += synapse0x268a6f0();
   input += synapse0x268a730();
   input += synapse0x268a770();
   input += synapse0x268a7b0();
   input += synapse0x268a7f0();
   input += synapse0x268a830();
   input += synapse0x268a870();
   input += synapse0x268a8b0();
   input += synapse0x268a8f0();
   return input;
}

double NNfunction_cRg::neuron0x26897d0() {
   double input = input0x26897d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x268a930() {
   double input = -0.134263;
   input += synapse0x268ac70();
   input += synapse0x268acb0();
   input += synapse0x268acf0();
   input += synapse0x268ad30();
   input += synapse0x268ad70();
   input += synapse0x268adb0();
   input += synapse0x268adf0();
   input += synapse0x268ae30();
   input += synapse0x268ae70();
   input += synapse0x268aeb0();
   input += synapse0x268aef0();
   input += synapse0x268af30();
   input += synapse0x268af70();
   input += synapse0x268afb0();
   input += synapse0x268aff0();
   input += synapse0x268b030();
   input += synapse0x268aac0();
   input += synapse0x268ab00();
   input += synapse0x268b180();
   input += synapse0x268b1c0();
   input += synapse0x268b200();
   input += synapse0x268b240();
   input += synapse0x268b280();
   input += synapse0x268b2c0();
   input += synapse0x268b300();
   input += synapse0x268b340();
   input += synapse0x268b380();
   input += synapse0x268b3c0();
   input += synapse0x268b400();
   input += synapse0x268b440();
   input += synapse0x268b480();
   input += synapse0x268b4c0();
   input += synapse0x268b070();
   input += synapse0x268b0b0();
   input += synapse0x268b0f0();
   input += synapse0x268b130();
   input += synapse0x268b710();
   input += synapse0x268b750();
   input += synapse0x268b790();
   input += synapse0x268b7d0();
   input += synapse0x268b810();
   input += synapse0x268b850();
   input += synapse0x268b890();
   input += synapse0x268b8d0();
   input += synapse0x268b910();
   input += synapse0x268b950();
   input += synapse0x268b990();
   input += synapse0x268b9d0();
   input += synapse0x268ba10();
   input += synapse0x268ba50();
   return input;
}

double NNfunction_cRg::neuron0x268a930() {
   double input = input0x268a930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x268ba90() {
   double input = -0.202868;
   input += synapse0x268bdd0();
   input += synapse0x268be10();
   input += synapse0x268be50();
   input += synapse0x268be90();
   input += synapse0x268bed0();
   input += synapse0x268bf10();
   input += synapse0x268bf50();
   input += synapse0x268bf90();
   input += synapse0x268bfd0();
   input += synapse0x268c010();
   input += synapse0x268c050();
   input += synapse0x268c090();
   input += synapse0x268c0d0();
   input += synapse0x268c110();
   input += synapse0x268c150();
   input += synapse0x268c190();
   input += synapse0x268bc20();
   input += synapse0x268bc60();
   input += synapse0x268c2e0();
   input += synapse0x268c320();
   input += synapse0x268c360();
   input += synapse0x268c3a0();
   input += synapse0x268c3e0();
   input += synapse0x268c420();
   input += synapse0x268c460();
   input += synapse0x268c4a0();
   input += synapse0x268c4e0();
   input += synapse0x268c520();
   input += synapse0x268c560();
   input += synapse0x268c5a0();
   input += synapse0x268c5e0();
   input += synapse0x268c620();
   input += synapse0x268c1d0();
   input += synapse0x268c210();
   input += synapse0x268c250();
   input += synapse0x268c290();
   input += synapse0x268c870();
   input += synapse0x268c8b0();
   input += synapse0x268c8f0();
   input += synapse0x268c930();
   input += synapse0x268c970();
   input += synapse0x268c9b0();
   input += synapse0x268c9f0();
   input += synapse0x268ca30();
   input += synapse0x268ca70();
   input += synapse0x268cab0();
   input += synapse0x268caf0();
   input += synapse0x268cb30();
   input += synapse0x268cb70();
   input += synapse0x268cbb0();
   return input;
}

double NNfunction_cRg::neuron0x268ba90() {
   double input = input0x268ba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_cRg::input0x268cbf0() {
   double input = 7.81144;
   input += synapse0x268ce10();
   input += synapse0x268ce50();
   input += synapse0x268ce90();
   input += synapse0x268ced0();
   input += synapse0x268cf10();
   return input;
}

double NNfunction_cRg::neuron0x268cbf0() {
   double input = input0x268cbf0();
   return (input * 1)+0;
}

double NNfunction_cRg::synapse0x2658ba0() {
   return (neuron0x2658ce0()*0.17201);
}

double NNfunction_cRg::synapse0x2658be0() {
   return (neuron0x2659020()*0.36383);
}

double NNfunction_cRg::synapse0x265dfc0() {
   return (neuron0x2659360()*-0.378457);
}

double NNfunction_cRg::synapse0x265e000() {
   return (neuron0x26596a0()*0.0873877);
}

double NNfunction_cRg::synapse0x265e040() {
   return (neuron0x26599e0()*-0.301651);
}

double NNfunction_cRg::synapse0x265e080() {
   return (neuron0x2659d20()*-0.115059);
}

double NNfunction_cRg::synapse0x265e0c0() {
   return (neuron0x265a060()*-0.23511);
}

double NNfunction_cRg::synapse0x265e100() {
   return (neuron0x265a3a0()*-0.2406);
}

double NNfunction_cRg::synapse0x265e140() {
   return (neuron0x265a6e0()*-0.0287384);
}

double NNfunction_cRg::synapse0x265e180() {
   return (neuron0x265aa20()*0.0355893);
}

double NNfunction_cRg::synapse0x265e1c0() {
   return (neuron0x265ad60()*-0.509538);
}

double NNfunction_cRg::synapse0x265e200() {
   return (neuron0x265b0a0()*0.319866);
}

double NNfunction_cRg::synapse0x265e240() {
   return (neuron0x265b3e0()*0.34557);
}

double NNfunction_cRg::synapse0x265e280() {
   return (neuron0x265b720()*-0.220708);
}

double NNfunction_cRg::synapse0x265e2c0() {
   return (neuron0x265ba60()*0.0628301);
}

double NNfunction_cRg::synapse0x265e300() {
   return (neuron0x265bda0()*-0.274746);
}

double NNfunction_cRg::synapse0x2658b10() {
   return (neuron0x265c0e0()*-0.0270671);
}

double NNfunction_cRg::synapse0x2658b50() {
   return (neuron0x265c640()*0.159018);
}

double NNfunction_cRg::synapse0x240a790() {
   return (neuron0x265c860()*-0.0144137);
}

double NNfunction_cRg::synapse0x240a7d0() {
   return (neuron0x265cba0()*0.231446);
}

double NNfunction_cRg::synapse0x265e560() {
   return (neuron0x265cee0()*0.22049);
}

double NNfunction_cRg::synapse0x265e5a0() {
   return (neuron0x265d220()*-0.492307);
}

double NNfunction_cRg::synapse0x265e5e0() {
   return (neuron0x265d560()*-0.413956);
}

double NNfunction_cRg::synapse0x265e620() {
   return (neuron0x265d8a0()*-0.32702);
}

double NNfunction_cRg::synapse0x265e9a0() {
   return (neuron0x2658ce0()*0.0044534);
}

double NNfunction_cRg::synapse0x265e9e0() {
   return (neuron0x2659020()*0.0326134);
}

double NNfunction_cRg::synapse0x265ea20() {
   return (neuron0x2659360()*0.00628373);
}

double NNfunction_cRg::synapse0x265ea60() {
   return (neuron0x26596a0()*-0.182395);
}

double NNfunction_cRg::synapse0x265eaa0() {
   return (neuron0x26599e0()*0.00998835);
}

double NNfunction_cRg::synapse0x265eae0() {
   return (neuron0x2659d20()*0.0099052);
}

double NNfunction_cRg::synapse0x265eb20() {
   return (neuron0x265a060()*0.00986241);
}

double NNfunction_cRg::synapse0x265eb60() {
   return (neuron0x265a3a0()*0.0054562);
}

double NNfunction_cRg::synapse0x265eba0() {
   return (neuron0x265a6e0()*-0.0101304);
}

double NNfunction_cRg::synapse0x265e450() {
   return (neuron0x265aa20()*-0.0126802);
}

double NNfunction_cRg::synapse0x265e490() {
   return (neuron0x265ad60()*-0.0113733);
}

double NNfunction_cRg::synapse0x265e4d0() {
   return (neuron0x265b0a0()*-0.0189711);
}

double NNfunction_cRg::synapse0x265e510() {
   return (neuron0x265b3e0()*-0.0195551);
}

double NNfunction_cRg::synapse0x265edf0() {
   return (neuron0x265b720()*-0.00102829);
}

double NNfunction_cRg::synapse0x265ee30() {
   return (neuron0x265ba60()*-0.00488678);
}

double NNfunction_cRg::synapse0x265ee70() {
   return (neuron0x265bda0()*-1.81698);
}

double NNfunction_cRg::synapse0x265e7f0() {
   return (neuron0x265c0e0()*-0.0147352);
}

double NNfunction_cRg::synapse0x265e830() {
   return (neuron0x265c640()*-0.0268715);
}

double NNfunction_cRg::synapse0x265efc0() {
   return (neuron0x265c860()*-0.0107624);
}

double NNfunction_cRg::synapse0x265f000() {
   return (neuron0x265cba0()*-0.0133113);
}

double NNfunction_cRg::synapse0x265f040() {
   return (neuron0x265cee0()*0.00767249);
}

double NNfunction_cRg::synapse0x265f080() {
   return (neuron0x265d220()*-0.00318624);
}

double NNfunction_cRg::synapse0x265f0c0() {
   return (neuron0x265d560()*-0.00141984);
}

double NNfunction_cRg::synapse0x265f100() {
   return (neuron0x265d8a0()*-0.00225621);
}

double NNfunction_cRg::synapse0x265f480() {
   return (neuron0x2658ce0()*0.010859);
}

double NNfunction_cRg::synapse0x265f4c0() {
   return (neuron0x2659020()*0.240631);
}

double NNfunction_cRg::synapse0x265f500() {
   return (neuron0x2659360()*-0.0132833);
}

double NNfunction_cRg::synapse0x265f540() {
   return (neuron0x26596a0()*-0.981258);
}

double NNfunction_cRg::synapse0x265f580() {
   return (neuron0x26599e0()*0.0145158);
}

double NNfunction_cRg::synapse0x265f5c0() {
   return (neuron0x2659d20()*0.00796072);
}

double NNfunction_cRg::synapse0x265f600() {
   return (neuron0x265a060()*-0.031239);
}

double NNfunction_cRg::synapse0x265f640() {
   return (neuron0x265a3a0()*0.0143978);
}

double NNfunction_cRg::synapse0x265f680() {
   return (neuron0x265a6e0()*-0.033204);
}

double NNfunction_cRg::synapse0x265f6c0() {
   return (neuron0x265aa20()*0.0924561);
}

double NNfunction_cRg::synapse0x265f700() {
   return (neuron0x265ad60()*-0.0347521);
}

double NNfunction_cRg::synapse0x265f740() {
   return (neuron0x265b0a0()*0.149312);
}

double NNfunction_cRg::synapse0x265f780() {
   return (neuron0x265b3e0()*0.139927);
}

double NNfunction_cRg::synapse0x265f7c0() {
   return (neuron0x265b720()*0.0803872);
}

double NNfunction_cRg::synapse0x265f800() {
   return (neuron0x265ba60()*0.106813);
}

double NNfunction_cRg::synapse0x265f840() {
   return (neuron0x265bda0()*-0.218039);
}

double NNfunction_cRg::synapse0x265f2d0() {
   return (neuron0x265c0e0()*0.0533093);
}

double NNfunction_cRg::synapse0x265f310() {
   return (neuron0x265c640()*0.0490877);
}

double NNfunction_cRg::synapse0x240abc0() {
   return (neuron0x265c860()*0.209841);
}

double NNfunction_cRg::synapse0x24182e0() {
   return (neuron0x265cba0()*-0.0680693);
}

double NNfunction_cRg::synapse0x2418320() {
   return (neuron0x265cee0()*-0.00298439);
}

double NNfunction_cRg::synapse0x2647d70() {
   return (neuron0x265d220()*-0.0227654);
}

double NNfunction_cRg::synapse0x2647db0() {
   return (neuron0x265d560()*-0.0132717);
}

double NNfunction_cRg::synapse0x2647df0() {
   return (neuron0x265d8a0()*0.0240313);
}

double NNfunction_cRg::synapse0x2418b80() {
   return (neuron0x2658ce0()*-0.0108081);
}

double NNfunction_cRg::synapse0x265ed70() {
   return (neuron0x2659020()*-0.0868804);
}

double NNfunction_cRg::synapse0x265edb0() {
   return (neuron0x2659360()*-0.00539464);
}

double NNfunction_cRg::synapse0x265f990() {
   return (neuron0x26596a0()*0.758223);
}

double NNfunction_cRg::synapse0x265f9d0() {
   return (neuron0x26599e0()*0.0465987);
}

double NNfunction_cRg::synapse0x265fa10() {
   return (neuron0x2659d20()*0.0155957);
}

double NNfunction_cRg::synapse0x265fa50() {
   return (neuron0x265a060()*0.0258926);
}

double NNfunction_cRg::synapse0x265fa90() {
   return (neuron0x265a3a0()*-0.001678);
}

double NNfunction_cRg::synapse0x265fad0() {
   return (neuron0x265a6e0()*-0.11523);
}

double NNfunction_cRg::synapse0x265fb10() {
   return (neuron0x265aa20()*-0.0282905);
}

double NNfunction_cRg::synapse0x265fb50() {
   return (neuron0x265ad60()*0.030298);
}

double NNfunction_cRg::synapse0x265fb90() {
   return (neuron0x265b0a0()*-0.124628);
}

double NNfunction_cRg::synapse0x265fbd0() {
   return (neuron0x265b3e0()*0.162723);
}

double NNfunction_cRg::synapse0x265fc10() {
   return (neuron0x265b720()*0.0452085);
}

double NNfunction_cRg::synapse0x265fc50() {
   return (neuron0x265ba60()*0.0440026);
}

double NNfunction_cRg::synapse0x265fc90() {
   return (neuron0x265bda0()*0.359982);
}

double NNfunction_cRg::synapse0x2658c20() {
   return (neuron0x265c0e0()*-0.0292701);
}

double NNfunction_cRg::synapse0x2658c60() {
   return (neuron0x265c640()*-0.522227);
}

double NNfunction_cRg::synapse0x2658ca0() {
   return (neuron0x265c860()*-0.0519883);
}

double NNfunction_cRg::synapse0x265fde0() {
   return (neuron0x265cba0()*0.0909442);
}

double NNfunction_cRg::synapse0x265fe20() {
   return (neuron0x265cee0()*0.0263755);
}

double NNfunction_cRg::synapse0x265fe60() {
   return (neuron0x265d220()*0.00362787);
}

double NNfunction_cRg::synapse0x265fea0() {
   return (neuron0x265d560()*-0.0294381);
}

double NNfunction_cRg::synapse0x265fee0() {
   return (neuron0x265d8a0()*-0.00590761);
}

double NNfunction_cRg::synapse0x2660260() {
   return (neuron0x2658ce0()*-0.075845);
}

double NNfunction_cRg::synapse0x26602a0() {
   return (neuron0x2659020()*-0.00810031);
}

double NNfunction_cRg::synapse0x26602e0() {
   return (neuron0x2659360()*-0.40999);
}

double NNfunction_cRg::synapse0x2660320() {
   return (neuron0x26596a0()*-0.317978);
}

double NNfunction_cRg::synapse0x2660360() {
   return (neuron0x26599e0()*-0.106427);
}

double NNfunction_cRg::synapse0x26603a0() {
   return (neuron0x2659d20()*-0.092548);
}

double NNfunction_cRg::synapse0x26603e0() {
   return (neuron0x265a060()*-0.0444119);
}

double NNfunction_cRg::synapse0x2660420() {
   return (neuron0x265a3a0()*-0.257757);
}

double NNfunction_cRg::synapse0x2660460() {
   return (neuron0x265a6e0()*0.0602412);
}

double NNfunction_cRg::synapse0x26604a0() {
   return (neuron0x265aa20()*-0.0893572);
}

double NNfunction_cRg::synapse0x26604e0() {
   return (neuron0x265ad60()*0.134121);
}

double NNfunction_cRg::synapse0x2660520() {
   return (neuron0x265b0a0()*0.182212);
}

double NNfunction_cRg::synapse0x2660560() {
   return (neuron0x265b3e0()*-0.00737135);
}

double NNfunction_cRg::synapse0x26605a0() {
   return (neuron0x265b720()*-0.24355);
}

double NNfunction_cRg::synapse0x26605e0() {
   return (neuron0x265ba60()*-0.493933);
}

double NNfunction_cRg::synapse0x2660620() {
   return (neuron0x265bda0()*0.815827);
}

double NNfunction_cRg::synapse0x26600b0() {
   return (neuron0x265c0e0()*-0.109781);
}

double NNfunction_cRg::synapse0x26600f0() {
   return (neuron0x265c640()*0.0234912);
}

double NNfunction_cRg::synapse0x2660770() {
   return (neuron0x265c860()*0.232959);
}

double NNfunction_cRg::synapse0x26607b0() {
   return (neuron0x265cba0()*-0.0863239);
}

double NNfunction_cRg::synapse0x26607f0() {
   return (neuron0x265cee0()*0.145512);
}

double NNfunction_cRg::synapse0x2660830() {
   return (neuron0x265d220()*0.217755);
}

double NNfunction_cRg::synapse0x2660870() {
   return (neuron0x265d560()*0.221009);
}

double NNfunction_cRg::synapse0x26608b0() {
   return (neuron0x265d8a0()*-0.148925);
}

double NNfunction_cRg::synapse0x2660c30() {
   return (neuron0x2658ce0()*-0.00330321);
}

double NNfunction_cRg::synapse0x2660c70() {
   return (neuron0x2659020()*-0.28252);
}

double NNfunction_cRg::synapse0x2660cb0() {
   return (neuron0x2659360()*-0.00784411);
}

double NNfunction_cRg::synapse0x2660cf0() {
   return (neuron0x26596a0()*-0.851787);
}

double NNfunction_cRg::synapse0x2660d30() {
   return (neuron0x26599e0()*0.080348);
}

double NNfunction_cRg::synapse0x2660d70() {
   return (neuron0x2659d20()*0.0655734);
}

double NNfunction_cRg::synapse0x2660db0() {
   return (neuron0x265a060()*-0.00408453);
}

double NNfunction_cRg::synapse0x2660df0() {
   return (neuron0x265a3a0()*0.0603087);
}

double NNfunction_cRg::synapse0x2660e30() {
   return (neuron0x265a6e0()*-0.297514);
}

double NNfunction_cRg::synapse0x2418650() {
   return (neuron0x265aa20()*-0.0999892);
}

double NNfunction_cRg::synapse0x2418690() {
   return (neuron0x265ad60()*0.0945539);
}

double NNfunction_cRg::synapse0x24186d0() {
   return (neuron0x265b0a0()*-0.0931785);
}

double NNfunction_cRg::synapse0x2418710() {
   return (neuron0x265b3e0()*-0.00678619);
}

double NNfunction_cRg::synapse0x2418750() {
   return (neuron0x265b720()*0.0642029);
}

double NNfunction_cRg::synapse0x2418790() {
   return (neuron0x265ba60()*0.073855);
}

double NNfunction_cRg::synapse0x24187d0() {
   return (neuron0x265bda0()*0.334214);
}

double NNfunction_cRg::synapse0x2660a80() {
   return (neuron0x265c0e0()*-0.00635168);
}

double NNfunction_cRg::synapse0x2660ac0() {
   return (neuron0x265c640()*-0.665626);
}

double NNfunction_cRg::synapse0x2418920() {
   return (neuron0x265c860()*-0.161773);
}

double NNfunction_cRg::synapse0x2418960() {
   return (neuron0x265cba0()*0.0655105);
}

double NNfunction_cRg::synapse0x24189a0() {
   return (neuron0x265cee0()*0.022945);
}

double NNfunction_cRg::synapse0x24189e0() {
   return (neuron0x265d220()*0.0333092);
}

double NNfunction_cRg::synapse0x2418a20() {
   return (neuron0x265d560()*-0.0261608);
}

double NNfunction_cRg::synapse0x2661680() {
   return (neuron0x265d8a0()*-0.00626817);
}

double NNfunction_cRg::synapse0x2661a00() {
   return (neuron0x2658ce0()*-0.147779);
}

double NNfunction_cRg::synapse0x2661a40() {
   return (neuron0x2659020()*0.1171);
}

double NNfunction_cRg::synapse0x2661a80() {
   return (neuron0x2659360()*0.414761);
}

double NNfunction_cRg::synapse0x2661ac0() {
   return (neuron0x26596a0()*-0.413063);
}

double NNfunction_cRg::synapse0x2661b00() {
   return (neuron0x26599e0()*-0.159552);
}

double NNfunction_cRg::synapse0x2661b40() {
   return (neuron0x2659d20()*0.116419);
}

double NNfunction_cRg::synapse0x2661b80() {
   return (neuron0x265a060()*0.290181);
}

double NNfunction_cRg::synapse0x2661bc0() {
   return (neuron0x265a3a0()*0.341757);
}

double NNfunction_cRg::synapse0x2661c00() {
   return (neuron0x265a6e0()*0.0310377);
}

double NNfunction_cRg::synapse0x2661c40() {
   return (neuron0x265aa20()*-0.214501);
}

double NNfunction_cRg::synapse0x2661c80() {
   return (neuron0x265ad60()*0.195632);
}

double NNfunction_cRg::synapse0x2661cc0() {
   return (neuron0x265b0a0()*0.386442);
}

double NNfunction_cRg::synapse0x2661d00() {
   return (neuron0x265b3e0()*0.412318);
}

double NNfunction_cRg::synapse0x2661d40() {
   return (neuron0x265b720()*0.0880194);
}

double NNfunction_cRg::synapse0x2661d80() {
   return (neuron0x265ba60()*0.493878);
}

double NNfunction_cRg::synapse0x2661dc0() {
   return (neuron0x265bda0()*0.346817);
}

double NNfunction_cRg::synapse0x2661850() {
   return (neuron0x265c0e0()*0.212888);
}

double NNfunction_cRg::synapse0x2661890() {
   return (neuron0x265c640()*0.1845);
}

double NNfunction_cRg::synapse0x2661f10() {
   return (neuron0x265c860()*0.019965);
}

double NNfunction_cRg::synapse0x2661f50() {
   return (neuron0x265cba0()*0.0334451);
}

double NNfunction_cRg::synapse0x2661f90() {
   return (neuron0x265cee0()*-0.054551);
}

double NNfunction_cRg::synapse0x2661fd0() {
   return (neuron0x265d220()*0.214138);
}

double NNfunction_cRg::synapse0x2662010() {
   return (neuron0x265d560()*-0.117815);
}

double NNfunction_cRg::synapse0x2662050() {
   return (neuron0x265d8a0()*0.187326);
}

double NNfunction_cRg::synapse0x26623d0() {
   return (neuron0x2658ce0()*-0.00981655);
}

double NNfunction_cRg::synapse0x2662410() {
   return (neuron0x2659020()*-0.224623);
}

double NNfunction_cRg::synapse0x2662450() {
   return (neuron0x2659360()*-0.00476018);
}

double NNfunction_cRg::synapse0x2662490() {
   return (neuron0x26596a0()*1.20449);
}

double NNfunction_cRg::synapse0x26624d0() {
   return (neuron0x26599e0()*0.000277801);
}

double NNfunction_cRg::synapse0x2662510() {
   return (neuron0x2659d20()*-0.00393069);
}

double NNfunction_cRg::synapse0x2662550() {
   return (neuron0x265a060()*-0.00343811);
}

double NNfunction_cRg::synapse0x2662590() {
   return (neuron0x265a3a0()*0.0189517);
}

double NNfunction_cRg::synapse0x26625d0() {
   return (neuron0x265a6e0()*0.00496374);
}

double NNfunction_cRg::synapse0x2662610() {
   return (neuron0x265aa20()*0.0136059);
}

double NNfunction_cRg::synapse0x2662650() {
   return (neuron0x265ad60()*0.0355075);
}

double NNfunction_cRg::synapse0x2662690() {
   return (neuron0x265b0a0()*-0.0256507);
}

double NNfunction_cRg::synapse0x26626d0() {
   return (neuron0x265b3e0()*-0.0391866);
}

double NNfunction_cRg::synapse0x2662710() {
   return (neuron0x265b720()*-0.0413316);
}

double NNfunction_cRg::synapse0x2662750() {
   return (neuron0x265ba60()*0.0108351);
}

double NNfunction_cRg::synapse0x2662790() {
   return (neuron0x265bda0()*-1.51552);
}

double NNfunction_cRg::synapse0x2662220() {
   return (neuron0x265c0e0()*0.0175695);
}

double NNfunction_cRg::synapse0x2662260() {
   return (neuron0x265c640()*0.00456181);
}

double NNfunction_cRg::synapse0x26628e0() {
   return (neuron0x265c860()*-0.0119777);
}

double NNfunction_cRg::synapse0x2662920() {
   return (neuron0x265cba0()*0.0538983);
}

double NNfunction_cRg::synapse0x2662960() {
   return (neuron0x265cee0()*-0.0120955);
}

double NNfunction_cRg::synapse0x26629a0() {
   return (neuron0x265d220()*0.0138107);
}

double NNfunction_cRg::synapse0x26629e0() {
   return (neuron0x265d560()*-0.0102599);
}

double NNfunction_cRg::synapse0x2662a20() {
   return (neuron0x265d8a0()*-0.0139044);
}

double NNfunction_cRg::synapse0x265c530() {
   return (neuron0x2658ce0()*-0.016296);
}

double NNfunction_cRg::synapse0x265c570() {
   return (neuron0x2659020()*-0.0816166);
}

double NNfunction_cRg::synapse0x265c5b0() {
   return (neuron0x2659360()*0.000982415);
}

double NNfunction_cRg::synapse0x265c5f0() {
   return (neuron0x26596a0()*1.31695);
}

double NNfunction_cRg::synapse0x2662fb0() {
   return (neuron0x26599e0()*-0.039507);
}

double NNfunction_cRg::synapse0x2662ff0() {
   return (neuron0x2659d20()*-0.00114591);
}

double NNfunction_cRg::synapse0x2663030() {
   return (neuron0x265a060()*-0.0117152);
}

double NNfunction_cRg::synapse0x2663070() {
   return (neuron0x265a3a0()*-0.0314904);
}

double NNfunction_cRg::synapse0x26630b0() {
   return (neuron0x265a6e0()*0.0593045);
}

double NNfunction_cRg::synapse0x26630f0() {
   return (neuron0x265aa20()*-0.0176757);
}

double NNfunction_cRg::synapse0x2663130() {
   return (neuron0x265ad60()*0.0632322);
}

double NNfunction_cRg::synapse0x2663170() {
   return (neuron0x265b0a0()*0.163477);
}

double NNfunction_cRg::synapse0x26631b0() {
   return (neuron0x265b3e0()*0.0705488);
}

double NNfunction_cRg::synapse0x26631f0() {
   return (neuron0x265b720()*0.136379);
}

double NNfunction_cRg::synapse0x2663230() {
   return (neuron0x265ba60()*0.0179769);
}

double NNfunction_cRg::synapse0x2663270() {
   return (neuron0x265bda0()*0.104336);
}

double NNfunction_cRg::synapse0x2662bf0() {
   return (neuron0x265c0e0()*0.0282605);
}

double NNfunction_cRg::synapse0x2662c30() {
   return (neuron0x265c640()*0.0322541);
}

double NNfunction_cRg::synapse0x26633c0() {
   return (neuron0x265c860()*0.253975);
}

double NNfunction_cRg::synapse0x2663400() {
   return (neuron0x265cba0()*0.00162274);
}

double NNfunction_cRg::synapse0x2663440() {
   return (neuron0x265cee0()*0.00762935);
}

double NNfunction_cRg::synapse0x2663480() {
   return (neuron0x265d220()*0.0135775);
}

double NNfunction_cRg::synapse0x26634c0() {
   return (neuron0x265d560()*0.00638131);
}

double NNfunction_cRg::synapse0x2663500() {
   return (neuron0x265d8a0()*-0.0173826);
}

double NNfunction_cRg::synapse0x2663880() {
   return (neuron0x2658ce0()*0.0107374);
}

double NNfunction_cRg::synapse0x26638c0() {
   return (neuron0x2659020()*0.250949);
}

double NNfunction_cRg::synapse0x2663900() {
   return (neuron0x2659360()*-0.0026162);
}

double NNfunction_cRg::synapse0x2663940() {
   return (neuron0x26596a0()*-0.260298);
}

double NNfunction_cRg::synapse0x2663980() {
   return (neuron0x26599e0()*0.016048);
}

double NNfunction_cRg::synapse0x26639c0() {
   return (neuron0x2659d20()*0.0340425);
}

double NNfunction_cRg::synapse0x2663a00() {
   return (neuron0x265a060()*0.0158071);
}

double NNfunction_cRg::synapse0x2663a40() {
   return (neuron0x265a3a0()*-0.0284519);
}

double NNfunction_cRg::synapse0x2663a80() {
   return (neuron0x265a6e0()*0.0754618);
}

double NNfunction_cRg::synapse0x2663ac0() {
   return (neuron0x265aa20()*-0.00545068);
}

double NNfunction_cRg::synapse0x2663b00() {
   return (neuron0x265ad60()*-0.0972634);
}

double NNfunction_cRg::synapse0x2663b40() {
   return (neuron0x265b0a0()*-0.141526);
}

double NNfunction_cRg::synapse0x2663b80() {
   return (neuron0x265b3e0()*-0.181955);
}

double NNfunction_cRg::synapse0x2663bc0() {
   return (neuron0x265b720()*0.156192);
}

double NNfunction_cRg::synapse0x2663c00() {
   return (neuron0x265ba60()*0.0340743);
}

double NNfunction_cRg::synapse0x2663c40() {
   return (neuron0x265bda0()*0.327734);
}

double NNfunction_cRg::synapse0x26636d0() {
   return (neuron0x265c0e0()*0.0230273);
}

double NNfunction_cRg::synapse0x2663710() {
   return (neuron0x265c640()*-0.108546);
}

double NNfunction_cRg::synapse0x2663d90() {
   return (neuron0x265c860()*-0.373873);
}

double NNfunction_cRg::synapse0x2663dd0() {
   return (neuron0x265cba0()*-0.296101);
}

double NNfunction_cRg::synapse0x2663e10() {
   return (neuron0x265cee0()*0.0284666);
}

double NNfunction_cRg::synapse0x2663e50() {
   return (neuron0x265d220()*6.33533e-05);
}

double NNfunction_cRg::synapse0x2663e90() {
   return (neuron0x265d560()*-0.0172419);
}

double NNfunction_cRg::synapse0x2663ed0() {
   return (neuron0x265d8a0()*-0.0209555);
}

double NNfunction_cRg::synapse0x2664250() {
   return (neuron0x2658ce0()*0.00373894);
}

double NNfunction_cRg::synapse0x2664290() {
   return (neuron0x2659020()*-0.0310135);
}

double NNfunction_cRg::synapse0x26642d0() {
   return (neuron0x2659360()*0.0273049);
}

double NNfunction_cRg::synapse0x2664310() {
   return (neuron0x26596a0()*0.0373973);
}

double NNfunction_cRg::synapse0x2664350() {
   return (neuron0x26599e0()*0.103701);
}

double NNfunction_cRg::synapse0x2664390() {
   return (neuron0x2659d20()*-0.0239514);
}

double NNfunction_cRg::synapse0x26643d0() {
   return (neuron0x265a060()*0.238898);
}

double NNfunction_cRg::synapse0x2664410() {
   return (neuron0x265a3a0()*0.0419806);
}

double NNfunction_cRg::synapse0x2664450() {
   return (neuron0x265a6e0()*-0.015256);
}

double NNfunction_cRg::synapse0x2664490() {
   return (neuron0x265aa20()*-0.0103665);
}

double NNfunction_cRg::synapse0x26644d0() {
   return (neuron0x265ad60()*-0.0216584);
}

double NNfunction_cRg::synapse0x2664510() {
   return (neuron0x265b0a0()*-0.0307289);
}

double NNfunction_cRg::synapse0x2664550() {
   return (neuron0x265b3e0()*-0.03575);
}

double NNfunction_cRg::synapse0x2664590() {
   return (neuron0x265b720()*-0.00342944);
}

double NNfunction_cRg::synapse0x26645d0() {
   return (neuron0x265ba60()*-0.0476853);
}

double NNfunction_cRg::synapse0x2664610() {
   return (neuron0x265bda0()*0.379978);
}

double NNfunction_cRg::synapse0x26640a0() {
   return (neuron0x265c0e0()*-0.0518982);
}

double NNfunction_cRg::synapse0x26640e0() {
   return (neuron0x265c640()*-0.0272312);
}

double NNfunction_cRg::synapse0x2660e70() {
   return (neuron0x265c860()*-0.0056718);
}

double NNfunction_cRg::synapse0x2660eb0() {
   return (neuron0x265cba0()*-0.0432162);
}

double NNfunction_cRg::synapse0x2660ef0() {
   return (neuron0x265cee0()*0.00140528);
}

double NNfunction_cRg::synapse0x2660f30() {
   return (neuron0x265d220()*0.000365624);
}

double NNfunction_cRg::synapse0x2660f70() {
   return (neuron0x265d560()*-0.00616702);
}

double NNfunction_cRg::synapse0x2660fb0() {
   return (neuron0x265d8a0()*-0.00974748);
}

double NNfunction_cRg::synapse0x2661330() {
   return (neuron0x2658ce0()*-0.0634629);
}

double NNfunction_cRg::synapse0x2661370() {
   return (neuron0x2659020()*-0.0864469);
}

double NNfunction_cRg::synapse0x26613b0() {
   return (neuron0x2659360()*-0.0310165);
}

double NNfunction_cRg::synapse0x26613f0() {
   return (neuron0x26596a0()*-2.13796);
}

double NNfunction_cRg::synapse0x2661430() {
   return (neuron0x26599e0()*0.0336072);
}

double NNfunction_cRg::synapse0x2661470() {
   return (neuron0x2659d20()*0.103709);
}

double NNfunction_cRg::synapse0x26614b0() {
   return (neuron0x265a060()*0.0142985);
}

double NNfunction_cRg::synapse0x26614f0() {
   return (neuron0x265a3a0()*-0.00639718);
}

double NNfunction_cRg::synapse0x2661530() {
   return (neuron0x265a6e0()*-0.184405);
}

double NNfunction_cRg::synapse0x2661570() {
   return (neuron0x265aa20()*0.017455);
}

double NNfunction_cRg::synapse0x26615b0() {
   return (neuron0x265ad60()*0.00223684);
}

double NNfunction_cRg::synapse0x26615f0() {
   return (neuron0x265b0a0()*-0.0405019);
}

double NNfunction_cRg::synapse0x2661630() {
   return (neuron0x265b3e0()*0.195199);
}

double NNfunction_cRg::synapse0x2665770() {
   return (neuron0x265b720()*0.0391027);
}

double NNfunction_cRg::synapse0x26657b0() {
   return (neuron0x265ba60()*0.0960494);
}

double NNfunction_cRg::synapse0x26657f0() {
   return (neuron0x265bda0()*-0.0669477);
}

double NNfunction_cRg::synapse0x2661180() {
   return (neuron0x265c0e0()*-0.0726788);
}

double NNfunction_cRg::synapse0x26611c0() {
   return (neuron0x265c640()*0.320031);
}

double NNfunction_cRg::synapse0x2665940() {
   return (neuron0x265c860()*-0.11024);
}

double NNfunction_cRg::synapse0x2665980() {
   return (neuron0x265cba0()*0.523875);
}

double NNfunction_cRg::synapse0x26659c0() {
   return (neuron0x265cee0()*-0.0122269);
}

double NNfunction_cRg::synapse0x2665a00() {
   return (neuron0x265d220()*-0.0513392);
}

double NNfunction_cRg::synapse0x2665a40() {
   return (neuron0x265d560()*-0.00676055);
}

double NNfunction_cRg::synapse0x2665a80() {
   return (neuron0x265d8a0()*-0.0335174);
}

double NNfunction_cRg::synapse0x2665e00() {
   return (neuron0x2658ce0()*0.00340813);
}

double NNfunction_cRg::synapse0x2665e40() {
   return (neuron0x2659020()*-0.0252912);
}

double NNfunction_cRg::synapse0x2665e80() {
   return (neuron0x2659360()*-0.0156444);
}

double NNfunction_cRg::synapse0x2665ec0() {
   return (neuron0x26596a0()*1.1719);
}

double NNfunction_cRg::synapse0x2665f00() {
   return (neuron0x26599e0()*0.00562314);
}

double NNfunction_cRg::synapse0x2665f40() {
   return (neuron0x2659d20()*0.00723166);
}

double NNfunction_cRg::synapse0x2665f80() {
   return (neuron0x265a060()*-0.0227584);
}

double NNfunction_cRg::synapse0x2665fc0() {
   return (neuron0x265a3a0()*0.00516928);
}

double NNfunction_cRg::synapse0x2666000() {
   return (neuron0x265a6e0()*-0.0108327);
}

double NNfunction_cRg::synapse0x2666040() {
   return (neuron0x265aa20()*0.0195647);
}

double NNfunction_cRg::synapse0x2666080() {
   return (neuron0x265ad60()*0.0114836);
}

double NNfunction_cRg::synapse0x26660c0() {
   return (neuron0x265b0a0()*-0.0185327);
}

double NNfunction_cRg::synapse0x2666100() {
   return (neuron0x265b3e0()*-0.00688841);
}

double NNfunction_cRg::synapse0x2666140() {
   return (neuron0x265b720()*0.0156809);
}

double NNfunction_cRg::synapse0x2666180() {
   return (neuron0x265ba60()*0.0160884);
}

double NNfunction_cRg::synapse0x26661c0() {
   return (neuron0x265bda0()*-0.509276);
}

double NNfunction_cRg::synapse0x2665c50() {
   return (neuron0x265c0e0()*0.0198247);
}

double NNfunction_cRg::synapse0x2665c90() {
   return (neuron0x265c640()*0.0120534);
}

double NNfunction_cRg::synapse0x2666310() {
   return (neuron0x265c860()*0.0338338);
}

double NNfunction_cRg::synapse0x2666350() {
   return (neuron0x265cba0()*0.0332821);
}

double NNfunction_cRg::synapse0x2666390() {
   return (neuron0x265cee0()*-0.00572011);
}

double NNfunction_cRg::synapse0x26663d0() {
   return (neuron0x265d220()*-0.00599243);
}

double NNfunction_cRg::synapse0x2666410() {
   return (neuron0x265d560()*0.00323949);
}

double NNfunction_cRg::synapse0x2666450() {
   return (neuron0x265d8a0()*-0.00199785);
}

double NNfunction_cRg::synapse0x26667d0() {
   return (neuron0x2658ce0()*0.017852);
}

double NNfunction_cRg::synapse0x2666810() {
   return (neuron0x2659020()*-0.0181794);
}

double NNfunction_cRg::synapse0x2666850() {
   return (neuron0x2659360()*-0.0083892);
}

double NNfunction_cRg::synapse0x2666890() {
   return (neuron0x26596a0()*0.240956);
}

double NNfunction_cRg::synapse0x26668d0() {
   return (neuron0x26599e0()*0.00366514);
}

double NNfunction_cRg::synapse0x2666910() {
   return (neuron0x2659d20()*0.0781201);
}

double NNfunction_cRg::synapse0x2666950() {
   return (neuron0x265a060()*-0.00187871);
}

double NNfunction_cRg::synapse0x2666990() {
   return (neuron0x265a3a0()*0.030452);
}

double NNfunction_cRg::synapse0x26669d0() {
   return (neuron0x265a6e0()*-0.00312515);
}

double NNfunction_cRg::synapse0x2666a10() {
   return (neuron0x265aa20()*-0.00442157);
}

double NNfunction_cRg::synapse0x2666a50() {
   return (neuron0x265ad60()*0.0080892);
}

double NNfunction_cRg::synapse0x2666a90() {
   return (neuron0x265b0a0()*-0.0304408);
}

double NNfunction_cRg::synapse0x2666ad0() {
   return (neuron0x265b3e0()*-0.0363999);
}

double NNfunction_cRg::synapse0x2666b10() {
   return (neuron0x265b720()*-0.0236413);
}

double NNfunction_cRg::synapse0x2666b50() {
   return (neuron0x265ba60()*0.00986365);
}

double NNfunction_cRg::synapse0x2666b90() {
   return (neuron0x265bda0()*0.458596);
}

double NNfunction_cRg::synapse0x2666620() {
   return (neuron0x265c0e0()*0.123394);
}

double NNfunction_cRg::synapse0x2666660() {
   return (neuron0x265c640()*-0.00140624);
}

double NNfunction_cRg::synapse0x2666ce0() {
   return (neuron0x265c860()*0.0128914);
}

double NNfunction_cRg::synapse0x2666d20() {
   return (neuron0x265cba0()*0.0119006);
}

double NNfunction_cRg::synapse0x2666d60() {
   return (neuron0x265cee0()*-0.00113859);
}

double NNfunction_cRg::synapse0x2666da0() {
   return (neuron0x265d220()*0.0202013);
}

double NNfunction_cRg::synapse0x2666de0() {
   return (neuron0x265d560()*0.00454657);
}

double NNfunction_cRg::synapse0x2666e20() {
   return (neuron0x265d8a0()*-0.00130617);
}

double NNfunction_cRg::synapse0x26671a0() {
   return (neuron0x2658ce0()*0.00853515);
}

double NNfunction_cRg::synapse0x26671e0() {
   return (neuron0x2659020()*-0.172303);
}

double NNfunction_cRg::synapse0x2667220() {
   return (neuron0x2659360()*0.0154442);
}

double NNfunction_cRg::synapse0x2667260() {
   return (neuron0x26596a0()*-0.913482);
}

double NNfunction_cRg::synapse0x26672a0() {
   return (neuron0x26599e0()*0.0236398);
}

double NNfunction_cRg::synapse0x26672e0() {
   return (neuron0x2659d20()*0.0162956);
}

double NNfunction_cRg::synapse0x2667320() {
   return (neuron0x265a060()*0.0107504);
}

double NNfunction_cRg::synapse0x2667360() {
   return (neuron0x265a3a0()*0.053024);
}

double NNfunction_cRg::synapse0x26673a0() {
   return (neuron0x265a6e0()*-0.112461);
}

double NNfunction_cRg::synapse0x26673e0() {
   return (neuron0x265aa20()*-0.0250086);
}

double NNfunction_cRg::synapse0x2667420() {
   return (neuron0x265ad60()*-0.0274636);
}

double NNfunction_cRg::synapse0x2667460() {
   return (neuron0x265b0a0()*0.0436476);
}

double NNfunction_cRg::synapse0x26674a0() {
   return (neuron0x265b3e0()*-0.530661);
}

double NNfunction_cRg::synapse0x26674e0() {
   return (neuron0x265b720()*0.036333);
}

double NNfunction_cRg::synapse0x2667520() {
   return (neuron0x265ba60()*-0.0107633);
}

double NNfunction_cRg::synapse0x2667560() {
   return (neuron0x265bda0()*0.339064);
}

double NNfunction_cRg::synapse0x2666ff0() {
   return (neuron0x265c0e0()*0.030332);
}

double NNfunction_cRg::synapse0x2667030() {
   return (neuron0x265c640()*0.0662098);
}

double NNfunction_cRg::synapse0x26676b0() {
   return (neuron0x265c860()*0.0219362);
}

double NNfunction_cRg::synapse0x26676f0() {
   return (neuron0x265cba0()*0.00261399);
}

double NNfunction_cRg::synapse0x2667730() {
   return (neuron0x265cee0()*-0.00323879);
}

double NNfunction_cRg::synapse0x2667770() {
   return (neuron0x265d220()*-0.0128411);
}

double NNfunction_cRg::synapse0x26677b0() {
   return (neuron0x265d560()*-0.00534106);
}

double NNfunction_cRg::synapse0x26677f0() {
   return (neuron0x265d8a0()*-0.00570155);
}

double NNfunction_cRg::synapse0x2667b70() {
   return (neuron0x2658ce0()*-0.0369769);
}

double NNfunction_cRg::synapse0x2658f00() {
   return (neuron0x2659020()*-0.455431);
}

double NNfunction_cRg::synapse0x2658f40() {
   return (neuron0x2659360()*0.000737641);
}

double NNfunction_cRg::synapse0x2659240() {
   return (neuron0x26596a0()*0.145729);
}

double NNfunction_cRg::synapse0x2659280() {
   return (neuron0x26599e0()*0.0371744);
}

double NNfunction_cRg::synapse0x2659580() {
   return (neuron0x2659d20()*0.0093702);
}

double NNfunction_cRg::synapse0x26595c0() {
   return (neuron0x265a060()*0.0243049);
}

double NNfunction_cRg::synapse0x26598c0() {
   return (neuron0x265a3a0()*0.014516);
}

double NNfunction_cRg::synapse0x2659900() {
   return (neuron0x265a6e0()*-0.079402);
}

double NNfunction_cRg::synapse0x2659c00() {
   return (neuron0x265aa20()*-0.108253);
}

double NNfunction_cRg::synapse0x2659c40() {
   return (neuron0x265ad60()*-0.104935);
}

double NNfunction_cRg::synapse0x2659f40() {
   return (neuron0x265b0a0()*-0.00817025);
}

double NNfunction_cRg::synapse0x2659f80() {
   return (neuron0x265b3e0()*-0.0595633);
}

double NNfunction_cRg::synapse0x265a280() {
   return (neuron0x265b720()*-0.00700712);
}

double NNfunction_cRg::synapse0x265a2c0() {
   return (neuron0x265ba60()*0.012481);
}

double NNfunction_cRg::synapse0x265a5c0() {
   return (neuron0x265bda0()*1.37408);
}

double NNfunction_cRg::synapse0x265a600() {
   return (neuron0x265c0e0()*0.00877749);
}

double NNfunction_cRg::synapse0x265a900() {
   return (neuron0x265c640()*-0.0545848);
}

double NNfunction_cRg::synapse0x265a940() {
   return (neuron0x265c860()*-0.0998495);
}

double NNfunction_cRg::synapse0x265ac40() {
   return (neuron0x265cba0()*-0.0835578);
}

double NNfunction_cRg::synapse0x265ac80() {
   return (neuron0x265cee0()*-0.00753336);
}

double NNfunction_cRg::synapse0x265af80() {
   return (neuron0x265d220()*0.0231278);
}

double NNfunction_cRg::synapse0x265afc0() {
   return (neuron0x265d560()*-0.00851932);
}

double NNfunction_cRg::synapse0x265b2c0() {
   return (neuron0x265d8a0()*-0.0154194);
}

double NNfunction_cRg::synapse0x265b300() {
   return (neuron0x2658ce0()*-0.0353365);
}

double NNfunction_cRg::synapse0x265bfc0() {
   return (neuron0x2659020()*0.118899);
}

double NNfunction_cRg::synapse0x265c000() {
   return (neuron0x2659360()*0.00282528);
}

double NNfunction_cRg::synapse0x26679c0() {
   return (neuron0x26596a0()*1.50636);
}

double NNfunction_cRg::synapse0x2667a00() {
   return (neuron0x26599e0()*0.0112262);
}

double NNfunction_cRg::synapse0x265c300() {
   return (neuron0x2659d20()*-0.0189243);
}

double NNfunction_cRg::synapse0x265c340() {
   return (neuron0x265a060()*0.0428282);
}

double NNfunction_cRg::synapse0x240a670() {
   return (neuron0x265a3a0()*-0.0956112);
}

double NNfunction_cRg::synapse0x240a6b0() {
   return (neuron0x265a6e0()*0.203353);
}

double NNfunction_cRg::synapse0x265ca80() {
   return (neuron0x265aa20()*0.113626);
}

double NNfunction_cRg::synapse0x265cac0() {
   return (neuron0x265ad60()*-0.0788372);
}

double NNfunction_cRg::synapse0x265cdc0() {
   return (neuron0x265b0a0()*0.190994);
}

double NNfunction_cRg::synapse0x265ce00() {
   return (neuron0x265b3e0()*-0.0616359);
}

double NNfunction_cRg::synapse0x265d100() {
   return (neuron0x265b720()*0.140411);
}

double NNfunction_cRg::synapse0x265d140() {
   return (neuron0x265ba60()*-0.00623144);
}

double NNfunction_cRg::synapse0x265d440() {
   return (neuron0x265bda0()*0.127492);
}

double NNfunction_cRg::synapse0x265d480() {
   return (neuron0x265c0e0()*0.0559872);
}

double NNfunction_cRg::synapse0x265d780() {
   return (neuron0x265c640()*-0.0761841);
}

double NNfunction_cRg::synapse0x265d7c0() {
   return (neuron0x265c860()*-0.277787);
}

double NNfunction_cRg::synapse0x265dac0() {
   return (neuron0x265cba0()*0.173193);
}

double NNfunction_cRg::synapse0x265db00() {
   return (neuron0x265cee0()*-0.0661609);
}

double NNfunction_cRg::synapse0x265b600() {
   return (neuron0x265d220()*-8.88003e-05);
}

double NNfunction_cRg::synapse0x265b640() {
   return (neuron0x265d560()*0.0306271);
}

double NNfunction_cRg::synapse0x26698e0() {
   return (neuron0x265d8a0()*0.0137557);
}

double NNfunction_cRg::synapse0x2669c60() {
   return (neuron0x2658ce0()*0.014482);
}

double NNfunction_cRg::synapse0x2669ca0() {
   return (neuron0x2659020()*-0.336409);
}

double NNfunction_cRg::synapse0x2669ce0() {
   return (neuron0x2659360()*0.0221314);
}

double NNfunction_cRg::synapse0x2669d20() {
   return (neuron0x26596a0()*-0.654327);
}

double NNfunction_cRg::synapse0x2669d60() {
   return (neuron0x26599e0()*0.0302388);
}

double NNfunction_cRg::synapse0x2669da0() {
   return (neuron0x2659d20()*0.0324783);
}

double NNfunction_cRg::synapse0x2669de0() {
   return (neuron0x265a060()*0.0231214);
}

double NNfunction_cRg::synapse0x2669e20() {
   return (neuron0x265a3a0()*0.0377293);
}

double NNfunction_cRg::synapse0x2669e60() {
   return (neuron0x265a6e0()*-0.0826381);
}

double NNfunction_cRg::synapse0x2669ea0() {
   return (neuron0x265aa20()*-0.0712162);
}

double NNfunction_cRg::synapse0x2669ee0() {
   return (neuron0x265ad60()*4.77786e-05);
}

double NNfunction_cRg::synapse0x2669f20() {
   return (neuron0x265b0a0()*-0.037917);
}

double NNfunction_cRg::synapse0x2669f60() {
   return (neuron0x265b3e0()*-0.122657);
}

double NNfunction_cRg::synapse0x2669fa0() {
   return (neuron0x265b720()*0.078125);
}

double NNfunction_cRg::synapse0x2669fe0() {
   return (neuron0x265ba60()*0.0106611);
}

double NNfunction_cRg::synapse0x266a020() {
   return (neuron0x265bda0()*-0.222107);
}

double NNfunction_cRg::synapse0x2669ab0() {
   return (neuron0x265c0e0()*0.0678513);
}

double NNfunction_cRg::synapse0x2669af0() {
   return (neuron0x265c640()*-0.0518904);
}

double NNfunction_cRg::synapse0x266a170() {
   return (neuron0x265c860()*-0.167971);
}

double NNfunction_cRg::synapse0x266a1b0() {
   return (neuron0x265cba0()*0.0120902);
}

double NNfunction_cRg::synapse0x266a1f0() {
   return (neuron0x265cee0()*-0.0101303);
}

double NNfunction_cRg::synapse0x266a230() {
   return (neuron0x265d220()*0.0204617);
}

double NNfunction_cRg::synapse0x266a270() {
   return (neuron0x265d560()*-0.00531118);
}

double NNfunction_cRg::synapse0x266a2b0() {
   return (neuron0x265d8a0()*-0.0106551);
}

double NNfunction_cRg::synapse0x266a630() {
   return (neuron0x2658ce0()*0.0203225);
}

double NNfunction_cRg::synapse0x266a670() {
   return (neuron0x2659020()*-0.0225962);
}

double NNfunction_cRg::synapse0x266a6b0() {
   return (neuron0x2659360()*0.0122933);
}

double NNfunction_cRg::synapse0x266a6f0() {
   return (neuron0x26596a0()*-1.34866);
}

double NNfunction_cRg::synapse0x266a730() {
   return (neuron0x26599e0()*0.00745695);
}

double NNfunction_cRg::synapse0x266a770() {
   return (neuron0x2659d20()*0.0033329);
}

double NNfunction_cRg::synapse0x266a7b0() {
   return (neuron0x265a060()*-0.0174789);
}

double NNfunction_cRg::synapse0x266a7f0() {
   return (neuron0x265a3a0()*0.0244033);
}

double NNfunction_cRg::synapse0x266a830() {
   return (neuron0x265a6e0()*-0.0104133);
}

double NNfunction_cRg::synapse0x266a870() {
   return (neuron0x265aa20()*-0.0144309);
}

double NNfunction_cRg::synapse0x266a8b0() {
   return (neuron0x265ad60()*-0.0206067);
}

double NNfunction_cRg::synapse0x266a8f0() {
   return (neuron0x265b0a0()*-0.0154153);
}

double NNfunction_cRg::synapse0x266a930() {
   return (neuron0x265b3e0()*-0.031408);
}

double NNfunction_cRg::synapse0x266a970() {
   return (neuron0x265b720()*0.0111369);
}

double NNfunction_cRg::synapse0x266a9b0() {
   return (neuron0x265ba60()*-0.016624);
}

double NNfunction_cRg::synapse0x266a9f0() {
   return (neuron0x265bda0()*-1.18803);
}

double NNfunction_cRg::synapse0x266a480() {
   return (neuron0x265c0e0()*-0.00776112);
}

double NNfunction_cRg::synapse0x266a4c0() {
   return (neuron0x265c640()*-0.00556166);
}

double NNfunction_cRg::synapse0x266ab40() {
   return (neuron0x265c860()*-0.0166433);
}

double NNfunction_cRg::synapse0x266ab80() {
   return (neuron0x265cba0()*-0.0136362);
}

double NNfunction_cRg::synapse0x266abc0() {
   return (neuron0x265cee0()*-0.00408464);
}

double NNfunction_cRg::synapse0x266ac00() {
   return (neuron0x265d220()*0.00698235);
}

double NNfunction_cRg::synapse0x266ac40() {
   return (neuron0x265d560()*0.000325214);
}

double NNfunction_cRg::synapse0x266ac80() {
   return (neuron0x265d8a0()*-0.000334055);
}

double NNfunction_cRg::synapse0x266b000() {
   return (neuron0x2658ce0()*0.0742635);
}

double NNfunction_cRg::synapse0x266b040() {
   return (neuron0x2659020()*0.071235);
}

double NNfunction_cRg::synapse0x266b080() {
   return (neuron0x2659360()*0.0674801);
}

double NNfunction_cRg::synapse0x266b0c0() {
   return (neuron0x26596a0()*-0.221197);
}

double NNfunction_cRg::synapse0x266b100() {
   return (neuron0x26599e0()*-0.0650172);
}

double NNfunction_cRg::synapse0x266b140() {
   return (neuron0x2659d20()*0.0496496);
}

double NNfunction_cRg::synapse0x266b180() {
   return (neuron0x265a060()*-0.0410597);
}

double NNfunction_cRg::synapse0x266b1c0() {
   return (neuron0x265a3a0()*-0.0748407);
}

double NNfunction_cRg::synapse0x266b200() {
   return (neuron0x265a6e0()*0.0392695);
}

double NNfunction_cRg::synapse0x266b240() {
   return (neuron0x265aa20()*0.0289052);
}

double NNfunction_cRg::synapse0x266b280() {
   return (neuron0x265ad60()*0.0789002);
}

double NNfunction_cRg::synapse0x266b2c0() {
   return (neuron0x265b0a0()*-0.00359242);
}

double NNfunction_cRg::synapse0x266b300() {
   return (neuron0x265b3e0()*-0.0298042);
}

double NNfunction_cRg::synapse0x266b340() {
   return (neuron0x265b720()*-0.04466);
}

double NNfunction_cRg::synapse0x266b380() {
   return (neuron0x265ba60()*-0.0720734);
}

double NNfunction_cRg::synapse0x266b3c0() {
   return (neuron0x265bda0()*-0.236092);
}

double NNfunction_cRg::synapse0x266ae50() {
   return (neuron0x265c0e0()*-0.116006);
}

double NNfunction_cRg::synapse0x266ae90() {
   return (neuron0x265c640()*0.0158234);
}

double NNfunction_cRg::synapse0x266b510() {
   return (neuron0x265c860()*0.0239326);
}

double NNfunction_cRg::synapse0x266b550() {
   return (neuron0x265cba0()*0.0358652);
}

double NNfunction_cRg::synapse0x266b590() {
   return (neuron0x265cee0()*0.00457702);
}

double NNfunction_cRg::synapse0x266b5d0() {
   return (neuron0x265d220()*0.0143217);
}

double NNfunction_cRg::synapse0x266b610() {
   return (neuron0x265d560()*0.00747354);
}

double NNfunction_cRg::synapse0x266b650() {
   return (neuron0x265d8a0()*-0.0727334);
}

double NNfunction_cRg::synapse0x266b9d0() {
   return (neuron0x2658ce0()*0.00818692);
}

double NNfunction_cRg::synapse0x266ba10() {
   return (neuron0x2659020()*0.0153688);
}

double NNfunction_cRg::synapse0x266ba50() {
   return (neuron0x2659360()*0.0046551);
}

double NNfunction_cRg::synapse0x266ba90() {
   return (neuron0x26596a0()*-2.05118);
}

double NNfunction_cRg::synapse0x266bad0() {
   return (neuron0x26599e0()*0.00638492);
}

double NNfunction_cRg::synapse0x266bb10() {
   return (neuron0x2659d20()*0.0122614);
}

double NNfunction_cRg::synapse0x266bb50() {
   return (neuron0x265a060()*-0.0113201);
}

double NNfunction_cRg::synapse0x266bb90() {
   return (neuron0x265a3a0()*-0.000187074);
}

double NNfunction_cRg::synapse0x266bbd0() {
   return (neuron0x265a6e0()*-0.0180169);
}

double NNfunction_cRg::synapse0x266bc10() {
   return (neuron0x265aa20()*0.0021417);
}

double NNfunction_cRg::synapse0x266bc50() {
   return (neuron0x265ad60()*-0.000603296);
}

double NNfunction_cRg::synapse0x266bc90() {
   return (neuron0x265b0a0()*-0.0623001);
}

double NNfunction_cRg::synapse0x266bcd0() {
   return (neuron0x265b3e0()*-0.0668816);
}

double NNfunction_cRg::synapse0x266bd10() {
   return (neuron0x265b720()*0.0064922);
}

double NNfunction_cRg::synapse0x266bd50() {
   return (neuron0x265ba60()*-0.0523512);
}

double NNfunction_cRg::synapse0x266bd90() {
   return (neuron0x265bda0()*-0.197695);
}

double NNfunction_cRg::synapse0x266b820() {
   return (neuron0x265c0e0()*-0.032878);
}

double NNfunction_cRg::synapse0x266b860() {
   return (neuron0x265c640()*-0.056663);
}

double NNfunction_cRg::synapse0x266bee0() {
   return (neuron0x265c860()*-0.00921346);
}

double NNfunction_cRg::synapse0x266bf20() {
   return (neuron0x265cba0()*0.00135979);
}

double NNfunction_cRg::synapse0x266bf60() {
   return (neuron0x265cee0()*0.00684497);
}

double NNfunction_cRg::synapse0x266bfa0() {
   return (neuron0x265d220()*-0.00116936);
}

double NNfunction_cRg::synapse0x266bfe0() {
   return (neuron0x265d560()*-0.00409875);
}

double NNfunction_cRg::synapse0x266c020() {
   return (neuron0x265d8a0()*-0.00615987);
}

double NNfunction_cRg::synapse0x266c3a0() {
   return (neuron0x2658ce0()*0.278144);
}

double NNfunction_cRg::synapse0x266c3e0() {
   return (neuron0x2659020()*0.512019);
}

double NNfunction_cRg::synapse0x266c420() {
   return (neuron0x2659360()*0.0798271);
}

double NNfunction_cRg::synapse0x266c460() {
   return (neuron0x26596a0()*-1.25757);
}

double NNfunction_cRg::synapse0x266c4a0() {
   return (neuron0x26599e0()*-0.0277478);
}

double NNfunction_cRg::synapse0x266c4e0() {
   return (neuron0x2659d20()*-0.0619903);
}

double NNfunction_cRg::synapse0x266c520() {
   return (neuron0x265a060()*0.143066);
}

double NNfunction_cRg::synapse0x266c560() {
   return (neuron0x265a3a0()*0.141187);
}

double NNfunction_cRg::synapse0x266c5a0() {
   return (neuron0x265a6e0()*-0.680465);
}

double NNfunction_cRg::synapse0x2664760() {
   return (neuron0x265aa20()*-0.0965806);
}

double NNfunction_cRg::synapse0x26647a0() {
   return (neuron0x265ad60()*-0.0794722);
}

double NNfunction_cRg::synapse0x26647e0() {
   return (neuron0x265b0a0()*-0.124373);
}

double NNfunction_cRg::synapse0x2664820() {
   return (neuron0x265b3e0()*0.00333484);
}

double NNfunction_cRg::synapse0x2664860() {
   return (neuron0x265b720()*0.156475);
}

double NNfunction_cRg::synapse0x26648a0() {
   return (neuron0x265ba60()*-0.247752);
}

double NNfunction_cRg::synapse0x26648e0() {
   return (neuron0x265bda0()*0.372943);
}

double NNfunction_cRg::synapse0x266c1f0() {
   return (neuron0x265c0e0()*0.000528694);
}

double NNfunction_cRg::synapse0x266c230() {
   return (neuron0x265c640()*-0.174404);
}

double NNfunction_cRg::synapse0x2664a30() {
   return (neuron0x265c860()*-0.109596);
}

double NNfunction_cRg::synapse0x2664a70() {
   return (neuron0x265cba0()*-0.174804);
}

double NNfunction_cRg::synapse0x2664ab0() {
   return (neuron0x265cee0()*-0.0155538);
}

double NNfunction_cRg::synapse0x2664af0() {
   return (neuron0x265d220()*0.01108);
}

double NNfunction_cRg::synapse0x2664b30() {
   return (neuron0x265d560()*-0.119205);
}

double NNfunction_cRg::synapse0x2664b70() {
   return (neuron0x265d8a0()*0.185446);
}

double NNfunction_cRg::synapse0x2664ef0() {
   return (neuron0x2658ce0()*-0.0157855);
}

double NNfunction_cRg::synapse0x2664f30() {
   return (neuron0x2659020()*0.0274843);
}

double NNfunction_cRg::synapse0x2664f70() {
   return (neuron0x2659360()*-0.0258794);
}

double NNfunction_cRg::synapse0x2664fb0() {
   return (neuron0x26596a0()*-0.207211);
}

double NNfunction_cRg::synapse0x2664ff0() {
   return (neuron0x26599e0()*-0.054361);
}

double NNfunction_cRg::synapse0x2665030() {
   return (neuron0x2659d20()*-0.0686425);
}

double NNfunction_cRg::synapse0x2665070() {
   return (neuron0x265a060()*0.129331);
}

double NNfunction_cRg::synapse0x26650b0() {
   return (neuron0x265a3a0()*-0.0364251);
}

double NNfunction_cRg::synapse0x26650f0() {
   return (neuron0x265a6e0()*0.0137544);
}

double NNfunction_cRg::synapse0x2665130() {
   return (neuron0x265aa20()*0.00316383);
}

double NNfunction_cRg::synapse0x2665170() {
   return (neuron0x265ad60()*0.0193079);
}

double NNfunction_cRg::synapse0x26651b0() {
   return (neuron0x265b0a0()*0.041062);
}

double NNfunction_cRg::synapse0x26651f0() {
   return (neuron0x265b3e0()*0.0267065);
}

double NNfunction_cRg::synapse0x2665230() {
   return (neuron0x265b720()*-0.0314345);
}

double NNfunction_cRg::synapse0x2665270() {
   return (neuron0x265ba60()*-0.131623);
}

double NNfunction_cRg::synapse0x26652b0() {
   return (neuron0x265bda0()*-0.433163);
}

double NNfunction_cRg::synapse0x2664d40() {
   return (neuron0x265c0e0()*0.0787403);
}

double NNfunction_cRg::synapse0x2664d80() {
   return (neuron0x265c640()*0.0238516);
}

double NNfunction_cRg::synapse0x2665400() {
   return (neuron0x265c860()*0.0138305);
}

double NNfunction_cRg::synapse0x2665440() {
   return (neuron0x265cba0()*0.0186245);
}

double NNfunction_cRg::synapse0x2665480() {
   return (neuron0x265cee0()*-0.000734098);
}

double NNfunction_cRg::synapse0x26654c0() {
   return (neuron0x265d220()*0.000424987);
}

double NNfunction_cRg::synapse0x2665500() {
   return (neuron0x265d560()*0.00513372);
}

double NNfunction_cRg::synapse0x2665540() {
   return (neuron0x265d8a0()*0.027698);
}

double NNfunction_cRg::synapse0x2665710() {
   return (neuron0x2658ce0()*0.34017);
}

double NNfunction_cRg::synapse0x266e7a0() {
   return (neuron0x2659020()*-0.348448);
}

double NNfunction_cRg::synapse0x266e7e0() {
   return (neuron0x2659360()*0.230006);
}

double NNfunction_cRg::synapse0x266e820() {
   return (neuron0x26596a0()*-0.200886);
}

double NNfunction_cRg::synapse0x266e860() {
   return (neuron0x26599e0()*0.145164);
}

double NNfunction_cRg::synapse0x266e8a0() {
   return (neuron0x2659d20()*-0.128533);
}

double NNfunction_cRg::synapse0x266e8e0() {
   return (neuron0x265a060()*-0.197583);
}

double NNfunction_cRg::synapse0x266e920() {
   return (neuron0x265a3a0()*-0.449197);
}

double NNfunction_cRg::synapse0x266e960() {
   return (neuron0x265a6e0()*0.0857902);
}

double NNfunction_cRg::synapse0x266e9a0() {
   return (neuron0x265aa20()*-0.472874);
}

double NNfunction_cRg::synapse0x266e9e0() {
   return (neuron0x265ad60()*0.0549832);
}

double NNfunction_cRg::synapse0x266ea20() {
   return (neuron0x265b0a0()*-0.292044);
}

double NNfunction_cRg::synapse0x266ea60() {
   return (neuron0x265b3e0()*-0.0256937);
}

double NNfunction_cRg::synapse0x266eaa0() {
   return (neuron0x265b720()*0.128748);
}

double NNfunction_cRg::synapse0x266eae0() {
   return (neuron0x265ba60()*-0.307777);
}

double NNfunction_cRg::synapse0x266eb20() {
   return (neuron0x265bda0()*0.615852);
}

double NNfunction_cRg::synapse0x266e5f0() {
   return (neuron0x265c0e0()*-0.166024);
}

double NNfunction_cRg::synapse0x266e630() {
   return (neuron0x265c640()*-0.0112588);
}

double NNfunction_cRg::synapse0x266ec70() {
   return (neuron0x265c860()*-0.106583);
}

double NNfunction_cRg::synapse0x266ecb0() {
   return (neuron0x265cba0()*-0.140784);
}

double NNfunction_cRg::synapse0x266ecf0() {
   return (neuron0x265cee0()*0.00502499);
}

double NNfunction_cRg::synapse0x266ed30() {
   return (neuron0x265d220()*-0.00958054);
}

double NNfunction_cRg::synapse0x266ed70() {
   return (neuron0x265d560()*0.23925);
}

double NNfunction_cRg::synapse0x266edb0() {
   return (neuron0x265d8a0()*0.02475);
}

double NNfunction_cRg::synapse0x266f130() {
   return (neuron0x2658ce0()*-0.0190753);
}

double NNfunction_cRg::synapse0x266f170() {
   return (neuron0x2659020()*-0.103467);
}

double NNfunction_cRg::synapse0x266f1b0() {
   return (neuron0x2659360()*-0.0471652);
}

double NNfunction_cRg::synapse0x266f1f0() {
   return (neuron0x26596a0()*1.51184);
}

double NNfunction_cRg::synapse0x266f230() {
   return (neuron0x26599e0()*0.0288713);
}

double NNfunction_cRg::synapse0x266f270() {
   return (neuron0x2659d20()*0.0619398);
}

double NNfunction_cRg::synapse0x266f2b0() {
   return (neuron0x265a060()*-0.112778);
}

double NNfunction_cRg::synapse0x266f2f0() {
   return (neuron0x265a3a0()*0.0952029);
}

double NNfunction_cRg::synapse0x266f330() {
   return (neuron0x265a6e0()*0.00667085);
}

double NNfunction_cRg::synapse0x266f370() {
   return (neuron0x265aa20()*-0.0173749);
}

double NNfunction_cRg::synapse0x266f3b0() {
   return (neuron0x265ad60()*0.0511392);
}

double NNfunction_cRg::synapse0x266f3f0() {
   return (neuron0x265b0a0()*0.00509927);
}

double NNfunction_cRg::synapse0x266f430() {
   return (neuron0x265b3e0()*-0.0244141);
}

double NNfunction_cRg::synapse0x266f470() {
   return (neuron0x265b720()*-0.00306664);
}

double NNfunction_cRg::synapse0x266f4b0() {
   return (neuron0x265ba60()*-0.0140028);
}

double NNfunction_cRg::synapse0x266f4f0() {
   return (neuron0x265bda0()*-0.31095);
}

double NNfunction_cRg::synapse0x266ef80() {
   return (neuron0x265c0e0()*0.0538584);
}

double NNfunction_cRg::synapse0x266efc0() {
   return (neuron0x265c640()*0.056381);
}

double NNfunction_cRg::synapse0x266f640() {
   return (neuron0x265c860()*0.0261942);
}

double NNfunction_cRg::synapse0x266f680() {
   return (neuron0x265cba0()*0.0503636);
}

double NNfunction_cRg::synapse0x266f6c0() {
   return (neuron0x265cee0()*-0.00755454);
}

double NNfunction_cRg::synapse0x266f700() {
   return (neuron0x265d220()*-0.00635379);
}

double NNfunction_cRg::synapse0x266f740() {
   return (neuron0x265d560()*-0.019308);
}

double NNfunction_cRg::synapse0x266f780() {
   return (neuron0x265d8a0()*0.0542699);
}

double NNfunction_cRg::synapse0x266fb00() {
   return (neuron0x2658ce0()*0.0190609);
}

double NNfunction_cRg::synapse0x266fb40() {
   return (neuron0x2659020()*-0.260948);
}

double NNfunction_cRg::synapse0x266fb80() {
   return (neuron0x2659360()*-0.00745184);
}

double NNfunction_cRg::synapse0x266fbc0() {
   return (neuron0x26596a0()*-1.94694);
}

double NNfunction_cRg::synapse0x266fc00() {
   return (neuron0x26599e0()*-0.0106004);
}

double NNfunction_cRg::synapse0x266fc40() {
   return (neuron0x2659d20()*-0.00783845);
}

double NNfunction_cRg::synapse0x266fc80() {
   return (neuron0x265a060()*-0.039137);
}

double NNfunction_cRg::synapse0x266fcc0() {
   return (neuron0x265a3a0()*-0.0196043);
}

double NNfunction_cRg::synapse0x266fd00() {
   return (neuron0x265a6e0()*0.489679);
}

double NNfunction_cRg::synapse0x266fd40() {
   return (neuron0x265aa20()*0.0119751);
}

double NNfunction_cRg::synapse0x266fd80() {
   return (neuron0x265ad60()*0.0616152);
}

double NNfunction_cRg::synapse0x266fdc0() {
   return (neuron0x265b0a0()*0.0389924);
}

double NNfunction_cRg::synapse0x266fe00() {
   return (neuron0x265b3e0()*-0.0512042);
}

double NNfunction_cRg::synapse0x266fe40() {
   return (neuron0x265b720()*0.0170546);
}

double NNfunction_cRg::synapse0x266fe80() {
   return (neuron0x265ba60()*0.000558114);
}

double NNfunction_cRg::synapse0x266fec0() {
   return (neuron0x265bda0()*-0.109579);
}

double NNfunction_cRg::synapse0x266f950() {
   return (neuron0x265c0e0()*-0.0380953);
}

double NNfunction_cRg::synapse0x266f990() {
   return (neuron0x265c640()*-0.0250168);
}

double NNfunction_cRg::synapse0x2670010() {
   return (neuron0x265c860()*0.16288);
}

double NNfunction_cRg::synapse0x2670050() {
   return (neuron0x265cba0()*0.0589194);
}

double NNfunction_cRg::synapse0x2670090() {
   return (neuron0x265cee0()*-0.0151681);
}

double NNfunction_cRg::synapse0x26700d0() {
   return (neuron0x265d220()*0.0189642);
}

double NNfunction_cRg::synapse0x2670110() {
   return (neuron0x265d560()*-0.0109078);
}

double NNfunction_cRg::synapse0x2670150() {
   return (neuron0x265d8a0()*0.0102695);
}

double NNfunction_cRg::synapse0x26704d0() {
   return (neuron0x2658ce0()*-0.0296646);
}

double NNfunction_cRg::synapse0x2670510() {
   return (neuron0x2659020()*-0.151953);
}

double NNfunction_cRg::synapse0x2670550() {
   return (neuron0x2659360()*0.0325426);
}

double NNfunction_cRg::synapse0x2670590() {
   return (neuron0x26596a0()*0.186417);
}

double NNfunction_cRg::synapse0x26705d0() {
   return (neuron0x26599e0()*-0.000995034);
}

double NNfunction_cRg::synapse0x2670610() {
   return (neuron0x2659d20()*0.00392176);
}

double NNfunction_cRg::synapse0x2670650() {
   return (neuron0x265a060()*-0.0966968);
}

double NNfunction_cRg::synapse0x2670690() {
   return (neuron0x265a3a0()*0.0246284);
}

double NNfunction_cRg::synapse0x26706d0() {
   return (neuron0x265a6e0()*0.14055);
}

double NNfunction_cRg::synapse0x2670710() {
   return (neuron0x265aa20()*0.716877);
}

double NNfunction_cRg::synapse0x2670750() {
   return (neuron0x265ad60()*-0.277712);
}

double NNfunction_cRg::synapse0x2670790() {
   return (neuron0x265b0a0()*0.148765);
}

double NNfunction_cRg::synapse0x26707d0() {
   return (neuron0x265b3e0()*-0.131419);
}

double NNfunction_cRg::synapse0x2670810() {
   return (neuron0x265b720()*0.00990665);
}

double NNfunction_cRg::synapse0x2670850() {
   return (neuron0x265ba60()*-0.0803894);
}

double NNfunction_cRg::synapse0x2670890() {
   return (neuron0x265bda0()*-0.475879);
}

double NNfunction_cRg::synapse0x2670320() {
   return (neuron0x265c0e0()*-0.0560101);
}

double NNfunction_cRg::synapse0x2670360() {
   return (neuron0x265c640()*-0.120088);
}

double NNfunction_cRg::synapse0x26709e0() {
   return (neuron0x265c860()*-0.186235);
}

double NNfunction_cRg::synapse0x2670a20() {
   return (neuron0x265cba0()*0.321275);
}

double NNfunction_cRg::synapse0x2670a60() {
   return (neuron0x265cee0()*-0.0178749);
}

double NNfunction_cRg::synapse0x2670aa0() {
   return (neuron0x265d220()*0.0238943);
}

double NNfunction_cRg::synapse0x2670ae0() {
   return (neuron0x265d560()*-0.0124908);
}

double NNfunction_cRg::synapse0x2670b20() {
   return (neuron0x265d8a0()*-0.011134);
}

double NNfunction_cRg::synapse0x2670ea0() {
   return (neuron0x2658ce0()*0.00498528);
}

double NNfunction_cRg::synapse0x2670ee0() {
   return (neuron0x2659020()*-0.0708074);
}

double NNfunction_cRg::synapse0x2670f20() {
   return (neuron0x2659360()*0.0408406);
}

double NNfunction_cRg::synapse0x2670f60() {
   return (neuron0x26596a0()*0.85199);
}

double NNfunction_cRg::synapse0x2670fa0() {
   return (neuron0x26599e0()*-0.00755996);
}

double NNfunction_cRg::synapse0x2670fe0() {
   return (neuron0x2659d20()*-0.0307628);
}

double NNfunction_cRg::synapse0x2671020() {
   return (neuron0x265a060()*0.0679414);
}

double NNfunction_cRg::synapse0x2671060() {
   return (neuron0x265a3a0()*-0.0375525);
}

double NNfunction_cRg::synapse0x26710a0() {
   return (neuron0x265a6e0()*0.0151637);
}

double NNfunction_cRg::synapse0x26710e0() {
   return (neuron0x265aa20()*-0.00178534);
}

double NNfunction_cRg::synapse0x2671120() {
   return (neuron0x265ad60()*0.026638);
}

double NNfunction_cRg::synapse0x2671160() {
   return (neuron0x265b0a0()*-0.0659491);
}

double NNfunction_cRg::synapse0x26711a0() {
   return (neuron0x265b3e0()*0.0139184);
}

double NNfunction_cRg::synapse0x26711e0() {
   return (neuron0x265b720()*-0.0115138);
}

double NNfunction_cRg::synapse0x2671220() {
   return (neuron0x265ba60()*-0.0462078);
}

double NNfunction_cRg::synapse0x2671260() {
   return (neuron0x265bda0()*-0.370385);
}

double NNfunction_cRg::synapse0x2670cf0() {
   return (neuron0x265c0e0()*-0.0837502);
}

double NNfunction_cRg::synapse0x2670d30() {
   return (neuron0x265c640()*0.0118526);
}

double NNfunction_cRg::synapse0x26713b0() {
   return (neuron0x265c860()*-0.0366677);
}

double NNfunction_cRg::synapse0x26713f0() {
   return (neuron0x265cba0()*0.0380855);
}

double NNfunction_cRg::synapse0x2671430() {
   return (neuron0x265cee0()*-0.00179567);
}

double NNfunction_cRg::synapse0x2671470() {
   return (neuron0x265d220()*0.0205604);
}

double NNfunction_cRg::synapse0x26714b0() {
   return (neuron0x265d560()*0.0126107);
}

double NNfunction_cRg::synapse0x26714f0() {
   return (neuron0x265d8a0()*-0.021902);
}

double NNfunction_cRg::synapse0x2671870() {
   return (neuron0x2658ce0()*-0.0535699);
}

double NNfunction_cRg::synapse0x26718b0() {
   return (neuron0x2659020()*0.00200857);
}

double NNfunction_cRg::synapse0x26718f0() {
   return (neuron0x2659360()*-0.0201248);
}

double NNfunction_cRg::synapse0x2671930() {
   return (neuron0x26596a0()*-0.134785);
}

double NNfunction_cRg::synapse0x2671970() {
   return (neuron0x26599e0()*0.0506645);
}

double NNfunction_cRg::synapse0x26719b0() {
   return (neuron0x2659d20()*0.168113);
}

double NNfunction_cRg::synapse0x26719f0() {
   return (neuron0x265a060()*-0.199858);
}

double NNfunction_cRg::synapse0x2671a30() {
   return (neuron0x265a3a0()*0.193754);
}

double NNfunction_cRg::synapse0x2671a70() {
   return (neuron0x265a6e0()*-0.0337176);
}

double NNfunction_cRg::synapse0x2671ab0() {
   return (neuron0x265aa20()*-0.0458222);
}

double NNfunction_cRg::synapse0x2671af0() {
   return (neuron0x265ad60()*-0.0917244);
}

double NNfunction_cRg::synapse0x2671b30() {
   return (neuron0x265b0a0()*-0.164974);
}

double NNfunction_cRg::synapse0x2671b70() {
   return (neuron0x265b3e0()*-0.149472);
}

double NNfunction_cRg::synapse0x2671bb0() {
   return (neuron0x265b720()*0.00141762);
}

double NNfunction_cRg::synapse0x2671bf0() {
   return (neuron0x265ba60()*0.131197);
}

double NNfunction_cRg::synapse0x2671c30() {
   return (neuron0x265bda0()*0.495844);
}

double NNfunction_cRg::synapse0x26716c0() {
   return (neuron0x265c0e0()*-0.170527);
}

double NNfunction_cRg::synapse0x2671700() {
   return (neuron0x265c640()*-0.127165);
}

double NNfunction_cRg::synapse0x2671d80() {
   return (neuron0x265c860()*-0.0796444);
}

double NNfunction_cRg::synapse0x2671dc0() {
   return (neuron0x265cba0()*-0.16723);
}

double NNfunction_cRg::synapse0x2671e00() {
   return (neuron0x265cee0()*0.015214);
}

double NNfunction_cRg::synapse0x2671e40() {
   return (neuron0x265d220()*-0.014523);
}

double NNfunction_cRg::synapse0x2671e80() {
   return (neuron0x265d560()*0.010766);
}

double NNfunction_cRg::synapse0x2671ec0() {
   return (neuron0x265d8a0()*-0.0235779);
}

double NNfunction_cRg::synapse0x2672240() {
   return (neuron0x2658ce0()*-0.269665);
}

double NNfunction_cRg::synapse0x2672280() {
   return (neuron0x2659020()*-0.178217);
}

double NNfunction_cRg::synapse0x26722c0() {
   return (neuron0x2659360()*-0.0319893);
}

double NNfunction_cRg::synapse0x2672300() {
   return (neuron0x26596a0()*0.0229423);
}

double NNfunction_cRg::synapse0x2672340() {
   return (neuron0x26599e0()*0.353182);
}

double NNfunction_cRg::synapse0x2672380() {
   return (neuron0x2659d20()*-0.0361052);
}

double NNfunction_cRg::synapse0x26723c0() {
   return (neuron0x265a060()*-0.421959);
}

double NNfunction_cRg::synapse0x2672400() {
   return (neuron0x265a3a0()*0.18037);
}

double NNfunction_cRg::synapse0x2672440() {
   return (neuron0x265a6e0()*0.170041);
}

double NNfunction_cRg::synapse0x2672480() {
   return (neuron0x265aa20()*0.367741);
}

double NNfunction_cRg::synapse0x26724c0() {
   return (neuron0x265ad60()*-0.13745);
}

double NNfunction_cRg::synapse0x2672500() {
   return (neuron0x265b0a0()*-0.0118512);
}

double NNfunction_cRg::synapse0x2672540() {
   return (neuron0x265b3e0()*0.0187895);
}

double NNfunction_cRg::synapse0x2672580() {
   return (neuron0x265b720()*-0.150006);
}

double NNfunction_cRg::synapse0x26725c0() {
   return (neuron0x265ba60()*-0.583709);
}

double NNfunction_cRg::synapse0x2672600() {
   return (neuron0x265bda0()*-0.157106);
}

double NNfunction_cRg::synapse0x2672090() {
   return (neuron0x265c0e0()*-0.330889);
}

double NNfunction_cRg::synapse0x26720d0() {
   return (neuron0x265c640()*0.290535);
}

double NNfunction_cRg::synapse0x2672750() {
   return (neuron0x265c860()*0.382063);
}

double NNfunction_cRg::synapse0x2672790() {
   return (neuron0x265cba0()*-0.0406646);
}

double NNfunction_cRg::synapse0x26727d0() {
   return (neuron0x265cee0()*-0.231535);
}

double NNfunction_cRg::synapse0x2672810() {
   return (neuron0x265d220()*-0.473903);
}

double NNfunction_cRg::synapse0x2672850() {
   return (neuron0x265d560()*0.00920436);
}

double NNfunction_cRg::synapse0x2672890() {
   return (neuron0x265d8a0()*0.0778121);
}

double NNfunction_cRg::synapse0x2672c10() {
   return (neuron0x2658ce0()*-0.000172471);
}

double NNfunction_cRg::synapse0x2672c50() {
   return (neuron0x2659020()*-0.0161222);
}

double NNfunction_cRg::synapse0x2672c90() {
   return (neuron0x2659360()*-0.00149922);
}

double NNfunction_cRg::synapse0x2672cd0() {
   return (neuron0x26596a0()*-6.48937);
}

double NNfunction_cRg::synapse0x2672d10() {
   return (neuron0x26599e0()*-0.00129329);
}

double NNfunction_cRg::synapse0x2672d50() {
   return (neuron0x2659d20()*-0.00356687);
}

double NNfunction_cRg::synapse0x2672d90() {
   return (neuron0x265a060()*-0.00380585);
}

double NNfunction_cRg::synapse0x2672dd0() {
   return (neuron0x265a3a0()*-0.00967991);
}

double NNfunction_cRg::synapse0x2672e10() {
   return (neuron0x265a6e0()*0.021455);
}

double NNfunction_cRg::synapse0x2672e50() {
   return (neuron0x265aa20()*0.0194419);
}

double NNfunction_cRg::synapse0x2672e90() {
   return (neuron0x265ad60()*0.00304731);
}

double NNfunction_cRg::synapse0x2672ed0() {
   return (neuron0x265b0a0()*-0.0140434);
}

double NNfunction_cRg::synapse0x2672f10() {
   return (neuron0x265b3e0()*9.48351e-05);
}

double NNfunction_cRg::synapse0x2672f50() {
   return (neuron0x265b720()*0.000305287);
}

double NNfunction_cRg::synapse0x2672f90() {
   return (neuron0x265ba60()*0.0291508);
}

double NNfunction_cRg::synapse0x2672fd0() {
   return (neuron0x265bda0()*-0.957196);
}

double NNfunction_cRg::synapse0x2672a60() {
   return (neuron0x265c0e0()*-0.00822507);
}

double NNfunction_cRg::synapse0x2672aa0() {
   return (neuron0x265c640()*-0.00239646);
}

double NNfunction_cRg::synapse0x2673120() {
   return (neuron0x265c860()*0.017907);
}

double NNfunction_cRg::synapse0x2673160() {
   return (neuron0x265cba0()*0.014354);
}

double NNfunction_cRg::synapse0x26731a0() {
   return (neuron0x265cee0()*0.00425811);
}

double NNfunction_cRg::synapse0x26731e0() {
   return (neuron0x265d220()*-0.00800137);
}

double NNfunction_cRg::synapse0x2673220() {
   return (neuron0x265d560()*-0.00710053);
}

double NNfunction_cRg::synapse0x2673260() {
   return (neuron0x265d8a0()*-0.00323734);
}

double NNfunction_cRg::synapse0x26735e0() {
   return (neuron0x2658ce0()*0.002607);
}

double NNfunction_cRg::synapse0x2667bb0() {
   return (neuron0x2659020()*0.291771);
}

double NNfunction_cRg::synapse0x2667bf0() {
   return (neuron0x2659360()*0.0217222);
}

double NNfunction_cRg::synapse0x2667c30() {
   return (neuron0x26596a0()*0.151116);
}

double NNfunction_cRg::synapse0x2667e80() {
   return (neuron0x26599e0()*-0.0233826);
}

double NNfunction_cRg::synapse0x2667ec0() {
   return (neuron0x2659d20()*0.0137176);
}

double NNfunction_cRg::synapse0x2667f00() {
   return (neuron0x265a060()*-0.00960891);
}

double NNfunction_cRg::synapse0x2668150() {
   return (neuron0x265a3a0()*0.0177043);
}

double NNfunction_cRg::synapse0x2668190() {
   return (neuron0x265a6e0()*0.0768634);
}

double NNfunction_cRg::synapse0x26683e0() {
   return (neuron0x265aa20()*-0.103027);
}

double NNfunction_cRg::synapse0x2668420() {
   return (neuron0x265ad60()*0.0950082);
}

double NNfunction_cRg::synapse0x2668460() {
   return (neuron0x265b0a0()*-0.000488311);
}

double NNfunction_cRg::synapse0x26686b0() {
   return (neuron0x265b3e0()*-0.115668);
}

double NNfunction_cRg::synapse0x26686f0() {
   return (neuron0x265b720()*0.0118236);
}

double NNfunction_cRg::synapse0x2668940() {
   return (neuron0x265ba60()*-0.00160816);
}

double NNfunction_cRg::synapse0x2668980() {
   return (neuron0x265bda0()*-0.375928);
}

double NNfunction_cRg::synapse0x2673430() {
   return (neuron0x265c0e0()*0.0429517);
}

double NNfunction_cRg::synapse0x2673470() {
   return (neuron0x265c640()*-0.0516675);
}

double NNfunction_cRg::synapse0x2668ad0() {
   return (neuron0x265c860()*-0.0542003);
}

double NNfunction_cRg::synapse0x2668fe0() {
   return (neuron0x265cba0()*0.211083);
}

double NNfunction_cRg::synapse0x2669020() {
   return (neuron0x265cee0()*0.00244751);
}

double NNfunction_cRg::synapse0x2669060() {
   return (neuron0x265d220()*-0.00802413);
}

double NNfunction_cRg::synapse0x26692b0() {
   return (neuron0x265d560()*0.0106302);
}

double NNfunction_cRg::synapse0x26692f0() {
   return (neuron0x265d8a0()*0.00902898);
}

double NNfunction_cRg::synapse0x2668ba0() {
   return (neuron0x2658ce0()*-0.013804);
}

double NNfunction_cRg::synapse0x2668be0() {
   return (neuron0x2659020()*0.0357208);
}

double NNfunction_cRg::synapse0x2668c20() {
   return (neuron0x2659360()*0.00110187);
}

double NNfunction_cRg::synapse0x2668c60() {
   return (neuron0x26596a0()*-0.110698);
}

double NNfunction_cRg::synapse0x26695e0() {
   return (neuron0x26599e0()*-0.0153784);
}

double NNfunction_cRg::synapse0x2675930() {
   return (neuron0x2659d20()*0.344556);
}

double NNfunction_cRg::synapse0x2675970() {
   return (neuron0x265a060()*0.104938);
}

double NNfunction_cRg::synapse0x26759b0() {
   return (neuron0x265a3a0()*0.0106351);
}

double NNfunction_cRg::synapse0x26759f0() {
   return (neuron0x265a6e0()*-0.000777405);
}

double NNfunction_cRg::synapse0x2675a30() {
   return (neuron0x265aa20()*-0.013914);
}

double NNfunction_cRg::synapse0x2675a70() {
   return (neuron0x265ad60()*-0.0106988);
}

double NNfunction_cRg::synapse0x2675ab0() {
   return (neuron0x265b0a0()*0.00644813);
}

double NNfunction_cRg::synapse0x2675af0() {
   return (neuron0x265b3e0()*0.0042088);
}

double NNfunction_cRg::synapse0x2675b30() {
   return (neuron0x265b720()*0.0255234);
}

double NNfunction_cRg::synapse0x2675b70() {
   return (neuron0x265ba60()*0.0424429);
}

double NNfunction_cRg::synapse0x2675bb0() {
   return (neuron0x265bda0()*-0.557146);
}

double NNfunction_cRg::synapse0x26694c0() {
   return (neuron0x265c0e0()*-0.000497025);
}

double NNfunction_cRg::synapse0x2669500() {
   return (neuron0x265c640()*0.0116224);
}

double NNfunction_cRg::synapse0x2675d00() {
   return (neuron0x265c860()*-0.0344565);
}

double NNfunction_cRg::synapse0x2675d40() {
   return (neuron0x265cba0()*0.0448272);
}

double NNfunction_cRg::synapse0x2675d80() {
   return (neuron0x265cee0()*0.000436729);
}

double NNfunction_cRg::synapse0x2675dc0() {
   return (neuron0x265d220()*-0.0052172);
}

double NNfunction_cRg::synapse0x2675e00() {
   return (neuron0x265d560()*-0.00136084);
}

double NNfunction_cRg::synapse0x2675e40() {
   return (neuron0x265d8a0()*0.00362807);
}

double NNfunction_cRg::synapse0x26761c0() {
   return (neuron0x2658ce0()*0.0292394);
}

double NNfunction_cRg::synapse0x2676200() {
   return (neuron0x2659020()*-0.166484);
}

double NNfunction_cRg::synapse0x2676240() {
   return (neuron0x2659360()*-0.195664);
}

double NNfunction_cRg::synapse0x2676280() {
   return (neuron0x26596a0()*0.117837);
}

double NNfunction_cRg::synapse0x26762c0() {
   return (neuron0x26599e0()*-0.0417632);
}

double NNfunction_cRg::synapse0x2676300() {
   return (neuron0x2659d20()*0.265278);
}

double NNfunction_cRg::synapse0x2676340() {
   return (neuron0x265a060()*-0.125758);
}

double NNfunction_cRg::synapse0x2676380() {
   return (neuron0x265a3a0()*-0.0296064);
}

double NNfunction_cRg::synapse0x26763c0() {
   return (neuron0x265a6e0()*-0.152391);
}

double NNfunction_cRg::synapse0x2676400() {
   return (neuron0x265aa20()*-0.129018);
}

double NNfunction_cRg::synapse0x2676440() {
   return (neuron0x265ad60()*-0.205818);
}

double NNfunction_cRg::synapse0x2676480() {
   return (neuron0x265b0a0()*-0.182604);
}

double NNfunction_cRg::synapse0x26764c0() {
   return (neuron0x265b3e0()*0.338024);
}

double NNfunction_cRg::synapse0x2676500() {
   return (neuron0x265b720()*0.316418);
}

double NNfunction_cRg::synapse0x2676540() {
   return (neuron0x265ba60()*0.161609);
}

double NNfunction_cRg::synapse0x2676580() {
   return (neuron0x265bda0()*-0.672347);
}

double NNfunction_cRg::synapse0x2676010() {
   return (neuron0x265c0e0()*-0.101675);
}

double NNfunction_cRg::synapse0x2676050() {
   return (neuron0x265c640()*0.633118);
}

double NNfunction_cRg::synapse0x26766d0() {
   return (neuron0x265c860()*-0.383221);
}

double NNfunction_cRg::synapse0x2676710() {
   return (neuron0x265cba0()*0.600316);
}

double NNfunction_cRg::synapse0x2676750() {
   return (neuron0x265cee0()*0.134227);
}

double NNfunction_cRg::synapse0x2676790() {
   return (neuron0x265d220()*0.124089);
}

double NNfunction_cRg::synapse0x26767d0() {
   return (neuron0x265d560()*-0.068603);
}

double NNfunction_cRg::synapse0x2676810() {
   return (neuron0x265d8a0()*-0.075881);
}

double NNfunction_cRg::synapse0x2676b90() {
   return (neuron0x2658ce0()*0.00806863);
}

double NNfunction_cRg::synapse0x2676bd0() {
   return (neuron0x2659020()*0.053935);
}

double NNfunction_cRg::synapse0x2676c10() {
   return (neuron0x2659360()*-0.00299994);
}

double NNfunction_cRg::synapse0x2676c50() {
   return (neuron0x26596a0()*-0.104634);
}

double NNfunction_cRg::synapse0x2676c90() {
   return (neuron0x26599e0()*0.048154);
}

double NNfunction_cRg::synapse0x2676cd0() {
   return (neuron0x2659d20()*-0.118097);
}

double NNfunction_cRg::synapse0x2676d10() {
   return (neuron0x265a060()*0.120054);
}

double NNfunction_cRg::synapse0x2676d50() {
   return (neuron0x265a3a0()*0.0469659);
}

double NNfunction_cRg::synapse0x2676d90() {
   return (neuron0x265a6e0()*0.00184716);
}

double NNfunction_cRg::synapse0x2676dd0() {
   return (neuron0x265aa20()*-0.00366102);
}

double NNfunction_cRg::synapse0x2676e10() {
   return (neuron0x265ad60()*0.0121772);
}

double NNfunction_cRg::synapse0x2676e50() {
   return (neuron0x265b0a0()*-0.00169414);
}

double NNfunction_cRg::synapse0x2676e90() {
   return (neuron0x265b3e0()*-0.0109386);
}

double NNfunction_cRg::synapse0x2676ed0() {
   return (neuron0x265b720()*0.0226451);
}

double NNfunction_cRg::synapse0x2676f10() {
   return (neuron0x265ba60()*0.304194);
}

double NNfunction_cRg::synapse0x2676f50() {
   return (neuron0x265bda0()*-0.478983);
}

double NNfunction_cRg::synapse0x26769e0() {
   return (neuron0x265c0e0()*0.0774719);
}

double NNfunction_cRg::synapse0x2676a20() {
   return (neuron0x265c640()*-0.003888);
}

double NNfunction_cRg::synapse0x26770a0() {
   return (neuron0x265c860()*-0.0118949);
}

double NNfunction_cRg::synapse0x26770e0() {
   return (neuron0x265cba0()*0.00495255);
}

double NNfunction_cRg::synapse0x2677120() {
   return (neuron0x265cee0()*0.00511614);
}

double NNfunction_cRg::synapse0x2677160() {
   return (neuron0x265d220()*-0.0107535);
}

double NNfunction_cRg::synapse0x26771a0() {
   return (neuron0x265d560()*0.00432907);
}

double NNfunction_cRg::synapse0x26771e0() {
   return (neuron0x265d8a0()*0.00741429);
}

double NNfunction_cRg::synapse0x2677560() {
   return (neuron0x2658ce0()*0.0261516);
}

double NNfunction_cRg::synapse0x26775a0() {
   return (neuron0x2659020()*0.0482139);
}

double NNfunction_cRg::synapse0x26775e0() {
   return (neuron0x2659360()*-0.00779256);
}

double NNfunction_cRg::synapse0x2677620() {
   return (neuron0x26596a0()*0.335401);
}

double NNfunction_cRg::synapse0x2677660() {
   return (neuron0x26599e0()*-0.0118551);
}

double NNfunction_cRg::synapse0x26776a0() {
   return (neuron0x2659d20()*-0.0483004);
}

double NNfunction_cRg::synapse0x26776e0() {
   return (neuron0x265a060()*-0.0575114);
}

double NNfunction_cRg::synapse0x2677720() {
   return (neuron0x265a3a0()*-0.0278106);
}

double NNfunction_cRg::synapse0x2677760() {
   return (neuron0x265a6e0()*-0.0401049);
}

double NNfunction_cRg::synapse0x26777a0() {
   return (neuron0x265aa20()*-0.0469539);
}

double NNfunction_cRg::synapse0x26777e0() {
   return (neuron0x265ad60()*-0.00122094);
}

double NNfunction_cRg::synapse0x2677820() {
   return (neuron0x265b0a0()*1.00498);
}

double NNfunction_cRg::synapse0x2677860() {
   return (neuron0x265b3e0()*0.396668);
}

double NNfunction_cRg::synapse0x26778a0() {
   return (neuron0x265b720()*-0.168861);
}

double NNfunction_cRg::synapse0x26778e0() {
   return (neuron0x265ba60()*-0.060583);
}

double NNfunction_cRg::synapse0x2677920() {
   return (neuron0x265bda0()*-1.27832);
}

double NNfunction_cRg::synapse0x26773b0() {
   return (neuron0x265c0e0()*-0.188893);
}

double NNfunction_cRg::synapse0x26773f0() {
   return (neuron0x265c640()*-0.0740409);
}

double NNfunction_cRg::synapse0x2677a70() {
   return (neuron0x265c860()*-0.0757465);
}

double NNfunction_cRg::synapse0x2677ab0() {
   return (neuron0x265cba0()*-0.109086);
}

double NNfunction_cRg::synapse0x2677af0() {
   return (neuron0x265cee0()*0.0835075);
}

double NNfunction_cRg::synapse0x2677b30() {
   return (neuron0x265d220()*-0.0154542);
}

double NNfunction_cRg::synapse0x2677b70() {
   return (neuron0x265d560()*-0.0467883);
}

double NNfunction_cRg::synapse0x2677bb0() {
   return (neuron0x265d8a0()*0.010264);
}

double NNfunction_cRg::synapse0x2677f30() {
   return (neuron0x2658ce0()*0.029428);
}

double NNfunction_cRg::synapse0x2677f70() {
   return (neuron0x2659020()*0.00723885);
}

double NNfunction_cRg::synapse0x2677fb0() {
   return (neuron0x2659360()*-0.0197362);
}

double NNfunction_cRg::synapse0x2677ff0() {
   return (neuron0x26596a0()*-0.810494);
}

double NNfunction_cRg::synapse0x2678030() {
   return (neuron0x26599e0()*-0.00687365);
}

double NNfunction_cRg::synapse0x2678070() {
   return (neuron0x2659d20()*-0.00611277);
}

double NNfunction_cRg::synapse0x26780b0() {
   return (neuron0x265a060()*-0.0558857);
}

double NNfunction_cRg::synapse0x26780f0() {
   return (neuron0x265a3a0()*0.00730252);
}

double NNfunction_cRg::synapse0x2678130() {
   return (neuron0x265a6e0()*0.0214066);
}

double NNfunction_cRg::synapse0x2678170() {
   return (neuron0x265aa20()*0.0437391);
}

double NNfunction_cRg::synapse0x26781b0() {
   return (neuron0x265ad60()*0.0214819);
}

double NNfunction_cRg::synapse0x26781f0() {
   return (neuron0x265b0a0()*0.0188335);
}

double NNfunction_cRg::synapse0x2678230() {
   return (neuron0x265b3e0()*0.023731);
}

double NNfunction_cRg::synapse0x2678270() {
   return (neuron0x265b720()*-0.0422661);
}

double NNfunction_cRg::synapse0x26782b0() {
   return (neuron0x265ba60()*0.0118139);
}

double NNfunction_cRg::synapse0x26782f0() {
   return (neuron0x265bda0()*-4.58424);
}

double NNfunction_cRg::synapse0x2677d80() {
   return (neuron0x265c0e0()*-0.0341716);
}

double NNfunction_cRg::synapse0x2677dc0() {
   return (neuron0x265c640()*0.0358503);
}

double NNfunction_cRg::synapse0x2678440() {
   return (neuron0x265c860()*0.0594104);
}

double NNfunction_cRg::synapse0x2678480() {
   return (neuron0x265cba0()*0.0326624);
}

double NNfunction_cRg::synapse0x26784c0() {
   return (neuron0x265cee0()*-0.0157916);
}

double NNfunction_cRg::synapse0x2678500() {
   return (neuron0x265d220()*0.00088701);
}

double NNfunction_cRg::synapse0x2678540() {
   return (neuron0x265d560()*0.0023119);
}

double NNfunction_cRg::synapse0x2678580() {
   return (neuron0x265d8a0()*0.00435668);
}

double NNfunction_cRg::synapse0x2678900() {
   return (neuron0x2658ce0()*0.00583103);
}

double NNfunction_cRg::synapse0x2678940() {
   return (neuron0x2659020()*0.0138271);
}

double NNfunction_cRg::synapse0x2678980() {
   return (neuron0x2659360()*-0.00592619);
}

double NNfunction_cRg::synapse0x26789c0() {
   return (neuron0x26596a0()*-0.0844278);
}

double NNfunction_cRg::synapse0x2678a00() {
   return (neuron0x26599e0()*0.362666);
}

double NNfunction_cRg::synapse0x2678a40() {
   return (neuron0x2659d20()*0.0034701);
}

double NNfunction_cRg::synapse0x2678a80() {
   return (neuron0x265a060()*-0.10437);
}

double NNfunction_cRg::synapse0x2678ac0() {
   return (neuron0x265a3a0()*0.00875728);
}

double NNfunction_cRg::synapse0x2678b00() {
   return (neuron0x265a6e0()*-0.000564911);
}

double NNfunction_cRg::synapse0x2678b40() {
   return (neuron0x265aa20()*0.0156629);
}

double NNfunction_cRg::synapse0x2678b80() {
   return (neuron0x265ad60()*0.00561553);
}

double NNfunction_cRg::synapse0x2678bc0() {
   return (neuron0x265b0a0()*0.022552);
}

double NNfunction_cRg::synapse0x2678c00() {
   return (neuron0x265b3e0()*0.00389572);
}

double NNfunction_cRg::synapse0x2678c40() {
   return (neuron0x265b720()*-0.00389076);
}

double NNfunction_cRg::synapse0x2678c80() {
   return (neuron0x265ba60()*-0.0735449);
}

double NNfunction_cRg::synapse0x2678cc0() {
   return (neuron0x265bda0()*-0.477063);
}

double NNfunction_cRg::synapse0x2678750() {
   return (neuron0x265c0e0()*0.0310107);
}

double NNfunction_cRg::synapse0x2678790() {
   return (neuron0x265c640()*-0.00379486);
}

double NNfunction_cRg::synapse0x2678e10() {
   return (neuron0x265c860()*-0.00431736);
}

double NNfunction_cRg::synapse0x2678e50() {
   return (neuron0x265cba0()*0.0204659);
}

double NNfunction_cRg::synapse0x2678e90() {
   return (neuron0x265cee0()*-0.00927467);
}

double NNfunction_cRg::synapse0x2678ed0() {
   return (neuron0x265d220()*-0.000657779);
}

double NNfunction_cRg::synapse0x2678f10() {
   return (neuron0x265d560()*-0.00388207);
}

double NNfunction_cRg::synapse0x2678f50() {
   return (neuron0x265d8a0()*-0.0125868);
}

double NNfunction_cRg::synapse0x26792d0() {
   return (neuron0x2658ce0()*-0.0118063);
}

double NNfunction_cRg::synapse0x2679310() {
   return (neuron0x2659020()*0.120654);
}

double NNfunction_cRg::synapse0x2679350() {
   return (neuron0x2659360()*0.0246954);
}

double NNfunction_cRg::synapse0x2679390() {
   return (neuron0x26596a0()*-0.188883);
}

double NNfunction_cRg::synapse0x26793d0() {
   return (neuron0x26599e0()*0.0299636);
}

double NNfunction_cRg::synapse0x2679410() {
   return (neuron0x2659d20()*0.0343727);
}

double NNfunction_cRg::synapse0x2679450() {
   return (neuron0x265a060()*0.0512063);
}

double NNfunction_cRg::synapse0x2679490() {
   return (neuron0x265a3a0()*0.0425538);
}

double NNfunction_cRg::synapse0x26794d0() {
   return (neuron0x265a6e0()*-0.122262);
}

double NNfunction_cRg::synapse0x2679510() {
   return (neuron0x265aa20()*-0.147827);
}

double NNfunction_cRg::synapse0x2679550() {
   return (neuron0x265ad60()*-0.129991);
}

double NNfunction_cRg::synapse0x2679590() {
   return (neuron0x265b0a0()*-0.134277);
}

double NNfunction_cRg::synapse0x26795d0() {
   return (neuron0x265b3e0()*-0.0811069);
}

double NNfunction_cRg::synapse0x2679610() {
   return (neuron0x265b720()*0.0303073);
}

double NNfunction_cRg::synapse0x2679650() {
   return (neuron0x265ba60()*0.0104324);
}

double NNfunction_cRg::synapse0x2679690() {
   return (neuron0x265bda0()*-0.957774);
}

double NNfunction_cRg::synapse0x2679120() {
   return (neuron0x265c0e0()*0.0524814);
}

double NNfunction_cRg::synapse0x2679160() {
   return (neuron0x265c640()*-0.14183);
}

double NNfunction_cRg::synapse0x26797e0() {
   return (neuron0x265c860()*-0.0519042);
}

double NNfunction_cRg::synapse0x2679820() {
   return (neuron0x265cba0()*-0.0913551);
}

double NNfunction_cRg::synapse0x2679860() {
   return (neuron0x265cee0()*0.0286397);
}

double NNfunction_cRg::synapse0x26798a0() {
   return (neuron0x265d220()*-0.00307451);
}

double NNfunction_cRg::synapse0x26798e0() {
   return (neuron0x265d560()*-0.00135759);
}

double NNfunction_cRg::synapse0x2679920() {
   return (neuron0x265d8a0()*-0.0152063);
}

double NNfunction_cRg::synapse0x2679ca0() {
   return (neuron0x2658ce0()*-0.00974962);
}

double NNfunction_cRg::synapse0x2679ce0() {
   return (neuron0x2659020()*0.0111542);
}

double NNfunction_cRg::synapse0x2679d20() {
   return (neuron0x2659360()*-0.00937601);
}

double NNfunction_cRg::synapse0x2679d60() {
   return (neuron0x26596a0()*-17.4288);
}

double NNfunction_cRg::synapse0x2679da0() {
   return (neuron0x26599e0()*0.00885254);
}

double NNfunction_cRg::synapse0x2679de0() {
   return (neuron0x2659d20()*0.010262);
}

double NNfunction_cRg::synapse0x2679e20() {
   return (neuron0x265a060()*0.00375985);
}

double NNfunction_cRg::synapse0x2679e60() {
   return (neuron0x265a3a0()*0.00828085);
}

double NNfunction_cRg::synapse0x2679ea0() {
   return (neuron0x265a6e0()*-0.0138357);
}

double NNfunction_cRg::synapse0x2679ee0() {
   return (neuron0x265aa20()*-0.0142725);
}

double NNfunction_cRg::synapse0x2679f20() {
   return (neuron0x265ad60()*-0.00425698);
}

double NNfunction_cRg::synapse0x2679f60() {
   return (neuron0x265b0a0()*-0.000610022);
}

double NNfunction_cRg::synapse0x2679fa0() {
   return (neuron0x265b3e0()*-0.0237566);
}

double NNfunction_cRg::synapse0x2679fe0() {
   return (neuron0x265b720()*0.0032062);
}

double NNfunction_cRg::synapse0x267a020() {
   return (neuron0x265ba60()*0.0193673);
}

double NNfunction_cRg::synapse0x267a060() {
   return (neuron0x265bda0()*0.0762977);
}

double NNfunction_cRg::synapse0x2679af0() {
   return (neuron0x265c0e0()*0.0117026);
}

double NNfunction_cRg::synapse0x2679b30() {
   return (neuron0x265c640()*-0.0154318);
}

double NNfunction_cRg::synapse0x267a1b0() {
   return (neuron0x265c860()*0.0116279);
}

double NNfunction_cRg::synapse0x267a1f0() {
   return (neuron0x265cba0()*-0.00344102);
}

double NNfunction_cRg::synapse0x267a230() {
   return (neuron0x265cee0()*0.00543762);
}

double NNfunction_cRg::synapse0x267a270() {
   return (neuron0x265d220()*-0.0100201);
}

double NNfunction_cRg::synapse0x267a2b0() {
   return (neuron0x265d560()*-0.000590599);
}

double NNfunction_cRg::synapse0x267a2f0() {
   return (neuron0x265d8a0()*0.00328576);
}

double NNfunction_cRg::synapse0x2662da0() {
   return (neuron0x2658ce0()*0.0100926);
}

double NNfunction_cRg::synapse0x2662de0() {
   return (neuron0x2659020()*0.0219104);
}

double NNfunction_cRg::synapse0x2662e20() {
   return (neuron0x2659360()*0.0382173);
}

double NNfunction_cRg::synapse0x2662e60() {
   return (neuron0x26596a0()*1.01463);
}

double NNfunction_cRg::synapse0x2662ea0() {
   return (neuron0x26599e0()*0.00544172);
}

double NNfunction_cRg::synapse0x2662ee0() {
   return (neuron0x2659d20()*0.00917044);
}

double NNfunction_cRg::synapse0x2662f20() {
   return (neuron0x265a060()*0.0221149);
}

double NNfunction_cRg::synapse0x2662f60() {
   return (neuron0x265a3a0()*0.0126942);
}

double NNfunction_cRg::synapse0x267aa80() {
   return (neuron0x265a6e0()*0.0272709);
}

double NNfunction_cRg::synapse0x267aac0() {
   return (neuron0x265aa20()*0.0720148);
}

double NNfunction_cRg::synapse0x267ab00() {
   return (neuron0x265ad60()*-0.0404824);
}

double NNfunction_cRg::synapse0x267ab40() {
   return (neuron0x265b0a0()*-0.836484);
}

double NNfunction_cRg::synapse0x267ab80() {
   return (neuron0x265b3e0()*-0.0617591);
}

double NNfunction_cRg::synapse0x267abc0() {
   return (neuron0x265b720()*0.0937268);
}

double NNfunction_cRg::synapse0x267ac00() {
   return (neuron0x265ba60()*-0.0308775);
}

double NNfunction_cRg::synapse0x267ac40() {
   return (neuron0x265bda0()*0.0840741);
}

double NNfunction_cRg::synapse0x267a4c0() {
   return (neuron0x265c0e0()*0.0425817);
}

double NNfunction_cRg::synapse0x267a500() {
   return (neuron0x265c640()*0.0250062);
}

double NNfunction_cRg::synapse0x267ad90() {
   return (neuron0x265c860()*0.100378);
}

double NNfunction_cRg::synapse0x267add0() {
   return (neuron0x265cba0()*0.0227055);
}

double NNfunction_cRg::synapse0x267ae10() {
   return (neuron0x265cee0()*-0.00964116);
}

double NNfunction_cRg::synapse0x267ae50() {
   return (neuron0x265d220()*-0.00901055);
}

double NNfunction_cRg::synapse0x267ae90() {
   return (neuron0x265d560()*0.00403061);
}

double NNfunction_cRg::synapse0x267aed0() {
   return (neuron0x265d8a0()*-0.006879);
}

double NNfunction_cRg::synapse0x267b250() {
   return (neuron0x2658ce0()*-0.0170569);
}

double NNfunction_cRg::synapse0x267b290() {
   return (neuron0x2659020()*-0.00256065);
}

double NNfunction_cRg::synapse0x267b2d0() {
   return (neuron0x2659360()*-0.0230484);
}

double NNfunction_cRg::synapse0x267b310() {
   return (neuron0x26596a0()*-1.98425);
}

double NNfunction_cRg::synapse0x267b350() {
   return (neuron0x26599e0()*-0.0190722);
}

double NNfunction_cRg::synapse0x267b390() {
   return (neuron0x2659d20()*-0.0184446);
}

double NNfunction_cRg::synapse0x267b3d0() {
   return (neuron0x265a060()*0.0102722);
}

double NNfunction_cRg::synapse0x267b410() {
   return (neuron0x265a3a0()*-0.0166434);
}

double NNfunction_cRg::synapse0x267b450() {
   return (neuron0x265a6e0()*0.0199454);
}

double NNfunction_cRg::synapse0x267b490() {
   return (neuron0x265aa20()*-0.00534564);
}

double NNfunction_cRg::synapse0x267b4d0() {
   return (neuron0x265ad60()*0.0250099);
}

double NNfunction_cRg::synapse0x267b510() {
   return (neuron0x265b0a0()*0.139082);
}

double NNfunction_cRg::synapse0x267b550() {
   return (neuron0x265b3e0()*0.13641);
}

double NNfunction_cRg::synapse0x267b590() {
   return (neuron0x265b720()*0.0211948);
}

double NNfunction_cRg::synapse0x267b5d0() {
   return (neuron0x265ba60()*0.0581035);
}

double NNfunction_cRg::synapse0x267b610() {
   return (neuron0x265bda0()*-0.264628);
}

double NNfunction_cRg::synapse0x267b0a0() {
   return (neuron0x265c0e0()*0.0605526);
}

double NNfunction_cRg::synapse0x267b0e0() {
   return (neuron0x265c640()*0.123089);
}

double NNfunction_cRg::synapse0x267b760() {
   return (neuron0x265c860()*0.0290719);
}

double NNfunction_cRg::synapse0x267b7a0() {
   return (neuron0x265cba0()*0.0237146);
}

double NNfunction_cRg::synapse0x267b7e0() {
   return (neuron0x265cee0()*-0.00722329);
}

double NNfunction_cRg::synapse0x267b820() {
   return (neuron0x265d220()*0.00134656);
}

double NNfunction_cRg::synapse0x267b860() {
   return (neuron0x265d560()*0.0152401);
}

double NNfunction_cRg::synapse0x267b8a0() {
   return (neuron0x265d8a0()*0.0135712);
}

double NNfunction_cRg::synapse0x267bc20() {
   return (neuron0x2658ce0()*0.00573917);
}

double NNfunction_cRg::synapse0x267bc60() {
   return (neuron0x2659020()*-0.167741);
}

double NNfunction_cRg::synapse0x267bca0() {
   return (neuron0x2659360()*-0.00082782);
}

double NNfunction_cRg::synapse0x267bce0() {
   return (neuron0x26596a0()*2.11685);
}

double NNfunction_cRg::synapse0x267bd20() {
   return (neuron0x26599e0()*-0.0261414);
}

double NNfunction_cRg::synapse0x267bd60() {
   return (neuron0x2659d20()*-0.0343233);
}

double NNfunction_cRg::synapse0x267bda0() {
   return (neuron0x265a060()*-0.0216553);
}

double NNfunction_cRg::synapse0x267bde0() {
   return (neuron0x265a3a0()*0.0170305);
}

double NNfunction_cRg::synapse0x267be20() {
   return (neuron0x265a6e0()*0.0567564);
}

double NNfunction_cRg::synapse0x267be60() {
   return (neuron0x265aa20()*-0.032557);
}

double NNfunction_cRg::synapse0x267bea0() {
   return (neuron0x265ad60()*0.0475951);
}

double NNfunction_cRg::synapse0x267bee0() {
   return (neuron0x265b0a0()*0.0862957);
}

double NNfunction_cRg::synapse0x267bf20() {
   return (neuron0x265b3e0()*0.10316);
}

double NNfunction_cRg::synapse0x267bf60() {
   return (neuron0x265b720()*-0.0682319);
}

double NNfunction_cRg::synapse0x267bfa0() {
   return (neuron0x265ba60()*0.0572116);
}

double NNfunction_cRg::synapse0x267bfe0() {
   return (neuron0x265bda0()*0.147093);
}

double NNfunction_cRg::synapse0x267ba70() {
   return (neuron0x265c0e0()*-0.0114356);
}

double NNfunction_cRg::synapse0x267bab0() {
   return (neuron0x265c640()*0.248268);
}

double NNfunction_cRg::synapse0x266c5e0() {
   return (neuron0x265c860()*-0.167433);
}

double NNfunction_cRg::synapse0x266c620() {
   return (neuron0x265cba0()*0.0168711);
}

double NNfunction_cRg::synapse0x266c660() {
   return (neuron0x265cee0()*-0.0061509);
}

double NNfunction_cRg::synapse0x266c6a0() {
   return (neuron0x265d220()*-0.018194);
}

double NNfunction_cRg::synapse0x266c6e0() {
   return (neuron0x265d560()*-0.0192849);
}

double NNfunction_cRg::synapse0x266c720() {
   return (neuron0x265d8a0()*0.0444807);
}

double NNfunction_cRg::synapse0x266caa0() {
   return (neuron0x2658ce0()*0.271105);
}

double NNfunction_cRg::synapse0x266cae0() {
   return (neuron0x2659020()*0.148965);
}

double NNfunction_cRg::synapse0x266cb20() {
   return (neuron0x2659360()*-0.356249);
}

double NNfunction_cRg::synapse0x266cb60() {
   return (neuron0x26596a0()*-0.229216);
}

double NNfunction_cRg::synapse0x266cba0() {
   return (neuron0x26599e0()*0.0548067);
}

double NNfunction_cRg::synapse0x266cbe0() {
   return (neuron0x2659d20()*0.262358);
}

double NNfunction_cRg::synapse0x266cc20() {
   return (neuron0x265a060()*0.259877);
}

double NNfunction_cRg::synapse0x266cc60() {
   return (neuron0x265a3a0()*-0.266935);
}

double NNfunction_cRg::synapse0x266cca0() {
   return (neuron0x265a6e0()*-0.263032);
}

double NNfunction_cRg::synapse0x266cce0() {
   return (neuron0x265aa20()*-0.0334504);
}

double NNfunction_cRg::synapse0x266cd20() {
   return (neuron0x265ad60()*-0.296692);
}

double NNfunction_cRg::synapse0x266cd60() {
   return (neuron0x265b0a0()*-0.166032);
}

double NNfunction_cRg::synapse0x266cda0() {
   return (neuron0x265b3e0()*-0.077693);
}

double NNfunction_cRg::synapse0x266cde0() {
   return (neuron0x265b720()*0.183381);
}

double NNfunction_cRg::synapse0x266ce20() {
   return (neuron0x265ba60()*-0.564367);
}

double NNfunction_cRg::synapse0x266ce60() {
   return (neuron0x265bda0()*0.223306);
}

double NNfunction_cRg::synapse0x266c8f0() {
   return (neuron0x265c0e0()*-0.247369);
}

double NNfunction_cRg::synapse0x266c930() {
   return (neuron0x265c640()*0.0462183);
}

double NNfunction_cRg::synapse0x266cfb0() {
   return (neuron0x265c860()*-0.151804);
}

double NNfunction_cRg::synapse0x266cff0() {
   return (neuron0x265cba0()*-0.138043);
}

double NNfunction_cRg::synapse0x266d030() {
   return (neuron0x265cee0()*-0.134971);
}

double NNfunction_cRg::synapse0x266d070() {
   return (neuron0x265d220()*0.446378);
}

double NNfunction_cRg::synapse0x266d0b0() {
   return (neuron0x265d560()*0.150953);
}

double NNfunction_cRg::synapse0x266d0f0() {
   return (neuron0x265d8a0()*0.112542);
}

double NNfunction_cRg::synapse0x266d470() {
   return (neuron0x2658ce0()*-0.00909535);
}

double NNfunction_cRg::synapse0x266d4b0() {
   return (neuron0x2659020()*0.0303999);
}

double NNfunction_cRg::synapse0x266d4f0() {
   return (neuron0x2659360()*0.0121015);
}

double NNfunction_cRg::synapse0x266d530() {
   return (neuron0x26596a0()*0.0779931);
}

double NNfunction_cRg::synapse0x266d570() {
   return (neuron0x26599e0()*-0.0984004);
}

double NNfunction_cRg::synapse0x266d5b0() {
   return (neuron0x2659d20()*-0.0439287);
}

double NNfunction_cRg::synapse0x266d5f0() {
   return (neuron0x265a060()*-0.0500504);
}

double NNfunction_cRg::synapse0x266d630() {
   return (neuron0x265a3a0()*0.570397);
}

double NNfunction_cRg::synapse0x266d670() {
   return (neuron0x265a6e0()*0.00877695);
}

double NNfunction_cRg::synapse0x266d6b0() {
   return (neuron0x265aa20()*0.0418843);
}

double NNfunction_cRg::synapse0x266d6f0() {
   return (neuron0x265ad60()*0.0125138);
}

double NNfunction_cRg::synapse0x266d730() {
   return (neuron0x265b0a0()*0.0207064);
}

double NNfunction_cRg::synapse0x266d770() {
   return (neuron0x265b3e0()*0.00375089);
}

double NNfunction_cRg::synapse0x266d7b0() {
   return (neuron0x265b720()*-0.0324452);
}

double NNfunction_cRg::synapse0x266d7f0() {
   return (neuron0x265ba60()*-0.0979455);
}

double NNfunction_cRg::synapse0x266d830() {
   return (neuron0x265bda0()*-0.428961);
}

double NNfunction_cRg::synapse0x266d2c0() {
   return (neuron0x265c0e0()*-0.0167278);
}

double NNfunction_cRg::synapse0x266d300() {
   return (neuron0x265c640()*0.00669043);
}

double NNfunction_cRg::synapse0x266d980() {
   return (neuron0x265c860()*0.00141047);
}

double NNfunction_cRg::synapse0x266d9c0() {
   return (neuron0x265cba0()*0.0345911);
}

double NNfunction_cRg::synapse0x266da00() {
   return (neuron0x265cee0()*0.00826672);
}

double NNfunction_cRg::synapse0x266da40() {
   return (neuron0x265d220()*0.0155425);
}

double NNfunction_cRg::synapse0x266da80() {
   return (neuron0x265d560()*-0.023576);
}

double NNfunction_cRg::synapse0x266dac0() {
   return (neuron0x265d8a0()*0.00143807);
}

double NNfunction_cRg::synapse0x266de40() {
   return (neuron0x2658ce0()*-0.00254004);
}

double NNfunction_cRg::synapse0x266de80() {
   return (neuron0x2659020()*-0.0891048);
}

double NNfunction_cRg::synapse0x266dec0() {
   return (neuron0x2659360()*0.0203553);
}

double NNfunction_cRg::synapse0x266df00() {
   return (neuron0x26596a0()*1.94609);
}

double NNfunction_cRg::synapse0x266df40() {
   return (neuron0x26599e0()*0.0161987);
}

double NNfunction_cRg::synapse0x266df80() {
   return (neuron0x2659d20()*0.0226243);
}

double NNfunction_cRg::synapse0x266dfc0() {
   return (neuron0x265a060()*0.0125398);
}

double NNfunction_cRg::synapse0x266e000() {
   return (neuron0x265a3a0()*0.0172121);
}

double NNfunction_cRg::synapse0x266e040() {
   return (neuron0x265a6e0()*-0.010548);
}

double NNfunction_cRg::synapse0x266e080() {
   return (neuron0x265aa20()*-0.0380055);
}

double NNfunction_cRg::synapse0x266e0c0() {
   return (neuron0x265ad60()*-0.0235416);
}

double NNfunction_cRg::synapse0x266e100() {
   return (neuron0x265b0a0()*-0.126552);
}

double NNfunction_cRg::synapse0x266e140() {
   return (neuron0x265b3e0()*-0.103006);
}

double NNfunction_cRg::synapse0x266e180() {
   return (neuron0x265b720()*-0.000790141);
}

double NNfunction_cRg::synapse0x266e1c0() {
   return (neuron0x265ba60()*-0.0497712);
}

double NNfunction_cRg::synapse0x266e200() {
   return (neuron0x265bda0()*0.578394);
}

double NNfunction_cRg::synapse0x266dc90() {
   return (neuron0x265c0e0()*-0.0249331);
}

double NNfunction_cRg::synapse0x266dcd0() {
   return (neuron0x265c640()*-0.109838);
}

double NNfunction_cRg::synapse0x266e350() {
   return (neuron0x265c860()*-0.0666334);
}

double NNfunction_cRg::synapse0x266e390() {
   return (neuron0x265cba0()*-0.00217142);
}

double NNfunction_cRg::synapse0x266e3d0() {
   return (neuron0x265cee0()*0.00455841);
}

double NNfunction_cRg::synapse0x266e410() {
   return (neuron0x265d220()*0.00954988);
}

double NNfunction_cRg::synapse0x266e450() {
   return (neuron0x265d560()*-0.00953808);
}

double NNfunction_cRg::synapse0x266e490() {
   return (neuron0x265d8a0()*-0.0158662);
}

double NNfunction_cRg::synapse0x2680360() {
   return (neuron0x2658ce0()*0.0104609);
}

double NNfunction_cRg::synapse0x26803a0() {
   return (neuron0x2659020()*-0.0148637);
}

double NNfunction_cRg::synapse0x26803e0() {
   return (neuron0x2659360()*-0.01512);
}

double NNfunction_cRg::synapse0x2680420() {
   return (neuron0x26596a0()*0.739);
}

double NNfunction_cRg::synapse0x2680460() {
   return (neuron0x26599e0()*0.0230154);
}

double NNfunction_cRg::synapse0x26804a0() {
   return (neuron0x2659d20()*0.0125825);
}

double NNfunction_cRg::synapse0x26804e0() {
   return (neuron0x265a060()*0.00184709);
}

double NNfunction_cRg::synapse0x2680520() {
   return (neuron0x265a3a0()*0.0407979);
}

double NNfunction_cRg::synapse0x2680560() {
   return (neuron0x265a6e0()*-0.120263);
}

double NNfunction_cRg::synapse0x26805a0() {
   return (neuron0x265aa20()*-0.00229757);
}

double NNfunction_cRg::synapse0x26805e0() {
   return (neuron0x265ad60()*-0.0586958);
}

double NNfunction_cRg::synapse0x2680620() {
   return (neuron0x265b0a0()*0.0114502);
}

double NNfunction_cRg::synapse0x2680660() {
   return (neuron0x265b3e0()*-0.562982);
}

double NNfunction_cRg::synapse0x26806a0() {
   return (neuron0x265b720()*0.0621581);
}

double NNfunction_cRg::synapse0x26806e0() {
   return (neuron0x265ba60()*0.0284912);
}

double NNfunction_cRg::synapse0x2680720() {
   return (neuron0x265bda0()*0.368866);
}

double NNfunction_cRg::synapse0x266e4d0() {
   return (neuron0x265c0e0()*0.033464);
}

double NNfunction_cRg::synapse0x266e510() {
   return (neuron0x265c640()*-0.047137);
}

double NNfunction_cRg::synapse0x2680870() {
   return (neuron0x265c860()*0.17278);
}

double NNfunction_cRg::synapse0x26808b0() {
   return (neuron0x265cba0()*0.0408662);
}

double NNfunction_cRg::synapse0x26808f0() {
   return (neuron0x265cee0()*0.00942087);
}

double NNfunction_cRg::synapse0x2680930() {
   return (neuron0x265d220()*0.00992721);
}

double NNfunction_cRg::synapse0x2680970() {
   return (neuron0x265d560()*-0.0118803);
}

double NNfunction_cRg::synapse0x26809b0() {
   return (neuron0x265d8a0()*-0.0121761);
}

double NNfunction_cRg::synapse0x2680d30() {
   return (neuron0x2658ce0()*-0.0282178);
}

double NNfunction_cRg::synapse0x2680d70() {
   return (neuron0x2659020()*0.0775462);
}

double NNfunction_cRg::synapse0x2680db0() {
   return (neuron0x2659360()*0.00885141);
}

double NNfunction_cRg::synapse0x2680df0() {
   return (neuron0x26596a0()*-0.279882);
}

double NNfunction_cRg::synapse0x2680e30() {
   return (neuron0x26599e0()*0.0137165);
}

double NNfunction_cRg::synapse0x2680e70() {
   return (neuron0x2659d20()*0.0389127);
}

double NNfunction_cRg::synapse0x2680eb0() {
   return (neuron0x265a060()*0.0589607);
}

double NNfunction_cRg::synapse0x2680ef0() {
   return (neuron0x265a3a0()*0.0156237);
}

double NNfunction_cRg::synapse0x2680f30() {
   return (neuron0x265a6e0()*0.0412328);
}

double NNfunction_cRg::synapse0x2680f70() {
   return (neuron0x265aa20()*-0.409583);
}

double NNfunction_cRg::synapse0x2680fb0() {
   return (neuron0x265ad60()*-0.780197);
}

double NNfunction_cRg::synapse0x2680ff0() {
   return (neuron0x265b0a0()*-0.00178206);
}

double NNfunction_cRg::synapse0x2681030() {
   return (neuron0x265b3e0()*0.0755588);
}

double NNfunction_cRg::synapse0x2681070() {
   return (neuron0x265b720()*-0.0776182);
}

double NNfunction_cRg::synapse0x26810b0() {
   return (neuron0x265ba60()*0.0358103);
}

double NNfunction_cRg::synapse0x26810f0() {
   return (neuron0x265bda0()*0.427374);
}

double NNfunction_cRg::synapse0x2680b80() {
   return (neuron0x265c0e0()*-0.0307829);
}

double NNfunction_cRg::synapse0x2680bc0() {
   return (neuron0x265c640()*-0.187072);
}

double NNfunction_cRg::synapse0x2681240() {
   return (neuron0x265c860()*0.0610636);
}

double NNfunction_cRg::synapse0x2681280() {
   return (neuron0x265cba0()*0.0677123);
}

double NNfunction_cRg::synapse0x26812c0() {
   return (neuron0x265cee0()*-0.00979703);
}

double NNfunction_cRg::synapse0x2681300() {
   return (neuron0x265d220()*-0.00457485);
}

double NNfunction_cRg::synapse0x2681340() {
   return (neuron0x265d560()*0.0241172);
}

double NNfunction_cRg::synapse0x2681380() {
   return (neuron0x265d8a0()*0.0254927);
}

double NNfunction_cRg::synapse0x2681700() {
   return (neuron0x2658ce0()*-0.0713421);
}

double NNfunction_cRg::synapse0x2681740() {
   return (neuron0x2659020()*0.437129);
}

double NNfunction_cRg::synapse0x2681780() {
   return (neuron0x2659360()*-0.205426);
}

double NNfunction_cRg::synapse0x26817c0() {
   return (neuron0x26596a0()*0.281228);
}

double NNfunction_cRg::synapse0x2681800() {
   return (neuron0x26599e0()*-0.325156);
}

double NNfunction_cRg::synapse0x2681840() {
   return (neuron0x2659d20()*-0.0912128);
}

double NNfunction_cRg::synapse0x2681880() {
   return (neuron0x265a060()*0.343314);
}

double NNfunction_cRg::synapse0x26818c0() {
   return (neuron0x265a3a0()*0.275797);
}

double NNfunction_cRg::synapse0x2681900() {
   return (neuron0x265a6e0()*-0.498304);
}

double NNfunction_cRg::synapse0x2681940() {
   return (neuron0x265aa20()*-0.396501);
}

double NNfunction_cRg::synapse0x2681980() {
   return (neuron0x265ad60()*0.155199);
}

double NNfunction_cRg::synapse0x26819c0() {
   return (neuron0x265b0a0()*0.325618);
}

double NNfunction_cRg::synapse0x2681a00() {
   return (neuron0x265b3e0()*0.377676);
}

double NNfunction_cRg::synapse0x2681a40() {
   return (neuron0x265b720()*0.17333);
}

double NNfunction_cRg::synapse0x2681a80() {
   return (neuron0x265ba60()*0.109248);
}

double NNfunction_cRg::synapse0x2681ac0() {
   return (neuron0x265bda0()*0.197468);
}

double NNfunction_cRg::synapse0x2681550() {
   return (neuron0x265c0e0()*0.175612);
}

double NNfunction_cRg::synapse0x2681590() {
   return (neuron0x265c640()*0.299707);
}

double NNfunction_cRg::synapse0x2681c10() {
   return (neuron0x265c860()*0.0962179);
}

double NNfunction_cRg::synapse0x2681c50() {
   return (neuron0x265cba0()*0.415834);
}

double NNfunction_cRg::synapse0x2681c90() {
   return (neuron0x265cee0()*-0.306892);
}

double NNfunction_cRg::synapse0x2681cd0() {
   return (neuron0x265d220()*-0.30137);
}

double NNfunction_cRg::synapse0x2681d10() {
   return (neuron0x265d560()*-0.167369);
}

double NNfunction_cRg::synapse0x2681d50() {
   return (neuron0x265d8a0()*0.0417596);
}

double NNfunction_cRg::synapse0x26820d0() {
   return (neuron0x2658ce0()*0.0194419);
}

double NNfunction_cRg::synapse0x2682110() {
   return (neuron0x2659020()*0.235706);
}

double NNfunction_cRg::synapse0x2682150() {
   return (neuron0x2659360()*-0.00930787);
}

double NNfunction_cRg::synapse0x2682190() {
   return (neuron0x26596a0()*2.13903);
}

double NNfunction_cRg::synapse0x26821d0() {
   return (neuron0x26599e0()*0.0162028);
}

double NNfunction_cRg::synapse0x2682210() {
   return (neuron0x2659d20()*0.00663159);
}

double NNfunction_cRg::synapse0x2682250() {
   return (neuron0x265a060()*-0.0188749);
}

double NNfunction_cRg::synapse0x2682290() {
   return (neuron0x265a3a0()*0.0166942);
}

double NNfunction_cRg::synapse0x26822d0() {
   return (neuron0x265a6e0()*0.000334556);
}

double NNfunction_cRg::synapse0x2682310() {
   return (neuron0x265aa20()*0.0409324);
}

double NNfunction_cRg::synapse0x2682350() {
   return (neuron0x265ad60()*-0.0231231);
}

double NNfunction_cRg::synapse0x2682390() {
   return (neuron0x265b0a0()*-0.0431049);
}

double NNfunction_cRg::synapse0x26823d0() {
   return (neuron0x265b3e0()*-0.100529);
}

double NNfunction_cRg::synapse0x2682410() {
   return (neuron0x265b720()*-0.00682576);
}

double NNfunction_cRg::synapse0x2682450() {
   return (neuron0x265ba60()*0.0260227);
}

double NNfunction_cRg::synapse0x2682490() {
   return (neuron0x265bda0()*-0.141034);
}

double NNfunction_cRg::synapse0x2681f20() {
   return (neuron0x265c0e0()*-0.0315943);
}

double NNfunction_cRg::synapse0x2681f60() {
   return (neuron0x265c640()*-0.0336002);
}

double NNfunction_cRg::synapse0x26825e0() {
   return (neuron0x265c860()*0.191172);
}

double NNfunction_cRg::synapse0x2682620() {
   return (neuron0x265cba0()*0.0444067);
}

double NNfunction_cRg::synapse0x2682660() {
   return (neuron0x265cee0()*0.0112381);
}

double NNfunction_cRg::synapse0x26826a0() {
   return (neuron0x265d220()*-0.0312454);
}

double NNfunction_cRg::synapse0x26826e0() {
   return (neuron0x265d560()*-0.00120574);
}

double NNfunction_cRg::synapse0x2682720() {
   return (neuron0x265d8a0()*0.00795006);
}

double NNfunction_cRg::synapse0x2418af0() {
   return (neuron0x265dd10()*-0.0581047);
}

double NNfunction_cRg::synapse0x2418b30() {
   return (neuron0x265e660()*-0.848946);
}

double NNfunction_cRg::synapse0x26601d0() {
   return (neuron0x265f140()*0.475812);
}

double NNfunction_cRg::synapse0x2660210() {
   return (neuron0x265ebe0()*-0.511389);
}

double NNfunction_cRg::synapse0x2660ba0() {
   return (neuron0x265ff20()*-0.0348292);
}

double NNfunction_cRg::synapse0x2660be0() {
   return (neuron0x26608f0()*0.0985773);
}

double NNfunction_cRg::synapse0x2661970() {
   return (neuron0x26616c0()*-0.0533179);
}

double NNfunction_cRg::synapse0x26619b0() {
   return (neuron0x2662090()*-0.111087);
}

double NNfunction_cRg::synapse0x2662340() {
   return (neuron0x2662a60()*-0.827984);
}

double NNfunction_cRg::synapse0x2662380() {
   return (neuron0x2663540()*-0.141989);
}

double NNfunction_cRg::synapse0x2662d10() {
   return (neuron0x2663f10()*0.0988104);
}

double NNfunction_cRg::synapse0x2662d50() {
   return (neuron0x2660ff0()*0.495083);
}

double NNfunction_cRg::synapse0x26637f0() {
   return (neuron0x2665ac0()*-0.205794);
}

double NNfunction_cRg::synapse0x2663830() {
   return (neuron0x2666490()*-0.452726);
}

double NNfunction_cRg::synapse0x26641c0() {
   return (neuron0x2666e60()*0.285741);
}

double NNfunction_cRg::synapse0x2664200() {
   return (neuron0x2667830()*-0.281546);
}

double NNfunction_cRg::synapse0x26612a0() {
   return (neuron0x2669640()*-0.517664);
}

double NNfunction_cRg::synapse0x26612e0() {
   return (neuron0x2669920()*0.4407);
}

double NNfunction_cRg::synapse0x2665d70() {
   return (neuron0x266a2f0()*0.695874);
}

double NNfunction_cRg::synapse0x2665db0() {
   return (neuron0x266acc0()*-0.360599);
}

double NNfunction_cRg::synapse0x2666740() {
   return (neuron0x266b690()*0.891794);
}

double NNfunction_cRg::synapse0x2666780() {
   return (neuron0x266c060()*0.127746);
}

double NNfunction_cRg::synapse0x2667110() {
   return (neuron0x2664bb0()*-0.0304747);
}

double NNfunction_cRg::synapse0x2667150() {
   return (neuron0x2665580()*-0.0525605);
}

double NNfunction_cRg::synapse0x2667ae0() {
   return (neuron0x266edf0()*-0.869291);
}

double NNfunction_cRg::synapse0x2667b20() {
   return (neuron0x266f7c0()*0.81928);
}

double NNfunction_cRg::synapse0x265bc80() {
   return (neuron0x2670190()*0.0180178);
}

double NNfunction_cRg::synapse0x265bcc0() {
   return (neuron0x2670b60()*-1.18992);
}

double NNfunction_cRg::synapse0x2669bd0() {
   return (neuron0x2671530()*0.0935748);
}

double NNfunction_cRg::synapse0x2669c10() {
   return (neuron0x2671f00()*-0.0336178);
}

double NNfunction_cRg::synapse0x266a5a0() {
   return (neuron0x26728d0()*0.45741);
}

double NNfunction_cRg::synapse0x266a5e0() {
   return (neuron0x26732a0()*0.380685);
}

double NNfunction_cRg::synapse0x266af70() {
   return (neuron0x2669330()*-0.255595);
}

double NNfunction_cRg::synapse0x266afb0() {
   return (neuron0x2675e80()*-0.0064607);
}

double NNfunction_cRg::synapse0x266b940() {
   return (neuron0x2676850()*-0.273981);
}

double NNfunction_cRg::synapse0x266b980() {
   return (neuron0x2677220()*0.0866503);
}

double NNfunction_cRg::synapse0x266c310() {
   return (neuron0x2677bf0()*-0.316534);
}

double NNfunction_cRg::synapse0x266c350() {
   return (neuron0x26785c0()*-0.229867);
}

double NNfunction_cRg::synapse0x2664e60() {
   return (neuron0x2678f90()*0.387605);
}

double NNfunction_cRg::synapse0x2664ea0() {
   return (neuron0x2679960()*4.6529);
}

double NNfunction_cRg::synapse0x266e710() {
   return (neuron0x267a330()*-0.189133);
}

double NNfunction_cRg::synapse0x266e750() {
   return (neuron0x267af10()*0.12501);
}

double NNfunction_cRg::synapse0x266f0a0() {
   return (neuron0x267b8e0()*-1.13039);
}

double NNfunction_cRg::synapse0x266f0e0() {
   return (neuron0x266c760()*-0.0270556);
}

double NNfunction_cRg::synapse0x266fa70() {
   return (neuron0x266d130()*-0.12416);
}

double NNfunction_cRg::synapse0x266fab0() {
   return (neuron0x266db00()*-0.555899);
}

double NNfunction_cRg::synapse0x2670440() {
   return (neuron0x2680140()*-0.440085);
}

double NNfunction_cRg::synapse0x2670480() {
   return (neuron0x26809f0()*-0.0724879);
}

double NNfunction_cRg::synapse0x2670e10() {
   return (neuron0x26813c0()*-0.0388376);
}

double NNfunction_cRg::synapse0x2670e50() {
   return (neuron0x2681d90()*-0.937569);
}

double NNfunction_cRg::synapse0x2673550() {
   return (neuron0x265dd10()*0.0171541);
}

double NNfunction_cRg::synapse0x2673590() {
   return (neuron0x265e660()*-1.51884);
}

double NNfunction_cRg::synapse0x2668b10() {
   return (neuron0x265f140()*0.641166);
}

double NNfunction_cRg::synapse0x2668b50() {
   return (neuron0x265ebe0()*-0.244261);
}

double NNfunction_cRg::synapse0x2676130() {
   return (neuron0x265ff20()*0.0141097);
}

double NNfunction_cRg::synapse0x2676170() {
   return (neuron0x26608f0()*-0.103754);
}

double NNfunction_cRg::synapse0x2676b00() {
   return (neuron0x26616c0()*0.0179808);
}

double NNfunction_cRg::synapse0x2676b40() {
   return (neuron0x2662090()*0.54255);
}

double NNfunction_cRg::synapse0x26774d0() {
   return (neuron0x2662a60()*-0.104226);
}

double NNfunction_cRg::synapse0x2677510() {
   return (neuron0x2663540()*-0.336612);
}

double NNfunction_cRg::synapse0x2677ea0() {
   return (neuron0x2663f10()*1.47157);
}

double NNfunction_cRg::synapse0x2677ee0() {
   return (neuron0x2660ff0()*-0.0527777);
}

double NNfunction_cRg::synapse0x2678870() {
   return (neuron0x2665ac0()*1.26702);
}

double NNfunction_cRg::synapse0x26788b0() {
   return (neuron0x2666490()*1.01568);
}

double NNfunction_cRg::synapse0x2679240() {
   return (neuron0x2666e60()*-0.348004);
}

double NNfunction_cRg::synapse0x2679280() {
   return (neuron0x2667830()*-0.270245);
}

double NNfunction_cRg::synapse0x2679c10() {
   return (neuron0x2669640()*0.0276001);
}

double NNfunction_cRg::synapse0x2679c50() {
   return (neuron0x2669920()*0.52656);
}

double NNfunction_cRg::synapse0x267a5e0() {
   return (neuron0x266a2f0()*1.50446);
}

double NNfunction_cRg::synapse0x267a620() {
   return (neuron0x266acc0()*-0.448163);
}

double NNfunction_cRg::synapse0x267b1c0() {
   return (neuron0x266b690()*1.38009);
}

double NNfunction_cRg::synapse0x267b200() {
   return (neuron0x266c060()*-0.0501001);
}

double NNfunction_cRg::synapse0x267bb90() {
   return (neuron0x2664bb0()*-1.14753);
}

double NNfunction_cRg::synapse0x267bbd0() {
   return (neuron0x2665580()*0.00171537);
}

double NNfunction_cRg::synapse0x266ca10() {
   return (neuron0x266edf0()*-0.0550933);
}

double NNfunction_cRg::synapse0x266ca50() {
   return (neuron0x266f7c0()*0.0116197);
}

double NNfunction_cRg::synapse0x266d3e0() {
   return (neuron0x2670190()*0.136489);
}

double NNfunction_cRg::synapse0x266d420() {
   return (neuron0x2670b60()*-0.835963);
}

double NNfunction_cRg::synapse0x266ddb0() {
   return (neuron0x2671530()*0.264629);
}

double NNfunction_cRg::synapse0x266ddf0() {
   return (neuron0x2671f00()*0.0137515);
}

double NNfunction_cRg::synapse0x26802d0() {
   return (neuron0x26728d0()*-1.25345);
}

double NNfunction_cRg::synapse0x2680310() {
   return (neuron0x26732a0()*0.677268);
}

double NNfunction_cRg::synapse0x2680ca0() {
   return (neuron0x2669330()*-0.751466);
}

double NNfunction_cRg::synapse0x2680ce0() {
   return (neuron0x2675e80()*0.069564);
}

double NNfunction_cRg::synapse0x2681670() {
   return (neuron0x2676850()*-0.631655);
}

double NNfunction_cRg::synapse0x26816b0() {
   return (neuron0x2677220()*0.0829334);
}

double NNfunction_cRg::synapse0x2682040() {
   return (neuron0x2677bf0()*-0.242927);
}

double NNfunction_cRg::synapse0x2682080() {
   return (neuron0x26785c0()*-0.686752);
}

double NNfunction_cRg::synapse0x265df30() {
   return (neuron0x2678f90()*0.46477);
}

double NNfunction_cRg::synapse0x265df70() {
   return (neuron0x2679960()*0.28914);
}

double NNfunction_cRg::synapse0x26717e0() {
   return (neuron0x267a330()*-0.242221);
}

double NNfunction_cRg::synapse0x2671820() {
   return (neuron0x267af10()*1.28335);
}

double NNfunction_cRg::synapse0x2682760() {
   return (neuron0x267b8e0()*0.105193);
}

double NNfunction_cRg::synapse0x26827a0() {
   return (neuron0x266c760()*0.00963639);
}

double NNfunction_cRg::synapse0x26827e0() {
   return (neuron0x266d130()*-0.385405);
}

double NNfunction_cRg::synapse0x2682820() {
   return (neuron0x266db00()*1.43539);
}

double NNfunction_cRg::synapse0x26896d0() {
   return (neuron0x2680140()*-0.315735);
}

double NNfunction_cRg::synapse0x2689710() {
   return (neuron0x26809f0()*-0.165936);
}

double NNfunction_cRg::synapse0x2689750() {
   return (neuron0x26813c0()*-0.00426397);
}

double NNfunction_cRg::synapse0x2689790() {
   return (neuron0x2681d90()*0.581514);
}

double NNfunction_cRg::synapse0x2689b10() {
   return (neuron0x265dd10()*0.638611);
}

double NNfunction_cRg::synapse0x2689b50() {
   return (neuron0x265e660()*0.549527);
}

double NNfunction_cRg::synapse0x2689b90() {
   return (neuron0x265f140()*0.0887772);
}

double NNfunction_cRg::synapse0x2689bd0() {
   return (neuron0x265ebe0()*0.219436);
}

double NNfunction_cRg::synapse0x2689c10() {
   return (neuron0x265ff20()*0.580723);
}

double NNfunction_cRg::synapse0x2689c50() {
   return (neuron0x26608f0()*0.51993);
}

double NNfunction_cRg::synapse0x2689c90() {
   return (neuron0x26616c0()*0.332996);
}

double NNfunction_cRg::synapse0x2689cd0() {
   return (neuron0x2662090()*0.338461);
}

double NNfunction_cRg::synapse0x2689d10() {
   return (neuron0x2662a60()*0.359716);
}

double NNfunction_cRg::synapse0x2689d50() {
   return (neuron0x2663540()*-0.000409312);
}

double NNfunction_cRg::synapse0x2689d90() {
   return (neuron0x2663f10()*0.378823);
}

double NNfunction_cRg::synapse0x2689dd0() {
   return (neuron0x2660ff0()*0.539984);
}

double NNfunction_cRg::synapse0x2689e10() {
   return (neuron0x2665ac0()*0.387524);
}

double NNfunction_cRg::synapse0x2689e50() {
   return (neuron0x2666490()*0.0281212);
}

double NNfunction_cRg::synapse0x2689e90() {
   return (neuron0x2666e60()*0.288167);
}

double NNfunction_cRg::synapse0x2689ed0() {
   return (neuron0x2667830()*0.832661);
}

double NNfunction_cRg::synapse0x2689960() {
   return (neuron0x2669640()*-0.0221526);
}

double NNfunction_cRg::synapse0x26899a0() {
   return (neuron0x2669920()*0.123986);
}

double NNfunction_cRg::synapse0x268a020() {
   return (neuron0x266a2f0()*-0.0519288);
}

double NNfunction_cRg::synapse0x268a060() {
   return (neuron0x266acc0()*0.106172);
}

double NNfunction_cRg::synapse0x268a0a0() {
   return (neuron0x266b690()*0.0791637);
}

double NNfunction_cRg::synapse0x268a0e0() {
   return (neuron0x266c060()*-0.0254913);
}

double NNfunction_cRg::synapse0x268a120() {
   return (neuron0x2664bb0()*0.596995);
}

double NNfunction_cRg::synapse0x268a160() {
   return (neuron0x2665580()*0.662733);
}

double NNfunction_cRg::synapse0x268a1a0() {
   return (neuron0x266edf0()*0.776075);
}

double NNfunction_cRg::synapse0x268a1e0() {
   return (neuron0x266f7c0()*0.213308);
}

double NNfunction_cRg::synapse0x268a220() {
   return (neuron0x2670190()*0.696345);
}

double NNfunction_cRg::synapse0x268a260() {
   return (neuron0x2670b60()*0.31822);
}

double NNfunction_cRg::synapse0x268a2a0() {
   return (neuron0x2671530()*-0.0504518);
}

double NNfunction_cRg::synapse0x268a2e0() {
   return (neuron0x2671f00()*0.0976015);
}

double NNfunction_cRg::synapse0x268a320() {
   return (neuron0x26728d0()*0.685528);
}

double NNfunction_cRg::synapse0x268a360() {
   return (neuron0x26732a0()*0.606378);
}

double NNfunction_cRg::synapse0x2689f10() {
   return (neuron0x2669330()*0.544736);
}

double NNfunction_cRg::synapse0x2689f50() {
   return (neuron0x2675e80()*0.33766);
}

double NNfunction_cRg::synapse0x2689f90() {
   return (neuron0x2676850()*0.282673);
}

double NNfunction_cRg::synapse0x2689fd0() {
   return (neuron0x2677220()*0.196103);
}

double NNfunction_cRg::synapse0x268a5b0() {
   return (neuron0x2677bf0()*0.0894682);
}

double NNfunction_cRg::synapse0x268a5f0() {
   return (neuron0x26785c0()*0.518459);
}

double NNfunction_cRg::synapse0x268a630() {
   return (neuron0x2678f90()*-0.0466753);
}

double NNfunction_cRg::synapse0x268a670() {
   return (neuron0x2679960()*0.531702);
}

double NNfunction_cRg::synapse0x268a6b0() {
   return (neuron0x267a330()*-0.133629);
}

double NNfunction_cRg::synapse0x268a6f0() {
   return (neuron0x267af10()*0.422405);
}

double NNfunction_cRg::synapse0x268a730() {
   return (neuron0x267b8e0()*-0.440384);
}

double NNfunction_cRg::synapse0x268a770() {
   return (neuron0x266c760()*0.569984);
}

double NNfunction_cRg::synapse0x268a7b0() {
   return (neuron0x266d130()*0.0125963);
}

double NNfunction_cRg::synapse0x268a7f0() {
   return (neuron0x266db00()*0.256921);
}

double NNfunction_cRg::synapse0x268a830() {
   return (neuron0x2680140()*0.215041);
}

double NNfunction_cRg::synapse0x268a870() {
   return (neuron0x26809f0()*0.162833);
}

double NNfunction_cRg::synapse0x268a8b0() {
   return (neuron0x26813c0()*0.109861);
}

double NNfunction_cRg::synapse0x268a8f0() {
   return (neuron0x2681d90()*0.00478354);
}

double NNfunction_cRg::synapse0x268ac70() {
   return (neuron0x265dd10()*0.260332);
}

double NNfunction_cRg::synapse0x268acb0() {
   return (neuron0x265e660()*0.772849);
}

double NNfunction_cRg::synapse0x268acf0() {
   return (neuron0x265f140()*-0.451023);
}

double NNfunction_cRg::synapse0x268ad30() {
   return (neuron0x265ebe0()*0.638529);
}

double NNfunction_cRg::synapse0x268ad70() {
   return (neuron0x265ff20()*-0.0379406);
}

double NNfunction_cRg::synapse0x268adb0() {
   return (neuron0x26608f0()*-0.241039);
}

double NNfunction_cRg::synapse0x268adf0() {
   return (neuron0x26616c0()*0.351341);
}

double NNfunction_cRg::synapse0x268ae30() {
   return (neuron0x2662090()*0.591008);
}

double NNfunction_cRg::synapse0x268ae70() {
   return (neuron0x2662a60()*0.845233);
}

double NNfunction_cRg::synapse0x268aeb0() {
   return (neuron0x2663540()*-0.214144);
}

double NNfunction_cRg::synapse0x268aef0() {
   return (neuron0x2663f10()*0.398278);
}

double NNfunction_cRg::synapse0x268af30() {
   return (neuron0x2660ff0()*-1.30115);
}

double NNfunction_cRg::synapse0x268af70() {
   return (neuron0x2665ac0()*1.17976);
}

double NNfunction_cRg::synapse0x268afb0() {
   return (neuron0x2666490()*0.217729);
}

double NNfunction_cRg::synapse0x268aff0() {
   return (neuron0x2666e60()*-0.529013);
}

double NNfunction_cRg::synapse0x268b030() {
   return (neuron0x2667830()*-0.1648);
}

double NNfunction_cRg::synapse0x268aac0() {
   return (neuron0x2669640()*0.245664);
}

double NNfunction_cRg::synapse0x268ab00() {
   return (neuron0x2669920()*0.0534386);
}

double NNfunction_cRg::synapse0x268b180() {
   return (neuron0x266a2f0()*-0.418948);
}

double NNfunction_cRg::synapse0x268b1c0() {
   return (neuron0x266acc0()*-0.14164);
}

double NNfunction_cRg::synapse0x268b200() {
   return (neuron0x266b690()*-0.550328);
}

double NNfunction_cRg::synapse0x268b240() {
   return (neuron0x266c060()*-0.664612);
}

double NNfunction_cRg::synapse0x268b280() {
   return (neuron0x2664bb0()*-0.854299);
}

double NNfunction_cRg::synapse0x268b2c0() {
   return (neuron0x2665580()*0.300452);
}

double NNfunction_cRg::synapse0x268b300() {
   return (neuron0x266edf0()*0.794295);
}

double NNfunction_cRg::synapse0x268b340() {
   return (neuron0x266f7c0()*-1.49364);
}

double NNfunction_cRg::synapse0x268b380() {
   return (neuron0x2670190()*0.287654);
}

double NNfunction_cRg::synapse0x268b3c0() {
   return (neuron0x2670b60()*0.832754);
}

double NNfunction_cRg::synapse0x268b400() {
   return (neuron0x2671530()*-0.383918);
}

double NNfunction_cRg::synapse0x268b440() {
   return (neuron0x2671f00()*0.239589);
}

double NNfunction_cRg::synapse0x268b480() {
   return (neuron0x26728d0()*-1.63622);
}

double NNfunction_cRg::synapse0x268b4c0() {
   return (neuron0x26732a0()*0.391135);
}

double NNfunction_cRg::synapse0x268b070() {
   return (neuron0x2669330()*0.242113);
}

double NNfunction_cRg::synapse0x268b0b0() {
   return (neuron0x2675e80()*0.177596);
}

double NNfunction_cRg::synapse0x268b0f0() {
   return (neuron0x2676850()*0.449093);
}

double NNfunction_cRg::synapse0x268b130() {
   return (neuron0x2677220()*0.0188059);
}

double NNfunction_cRg::synapse0x268b710() {
   return (neuron0x2677bf0()*-2.7446);
}

double NNfunction_cRg::synapse0x268b750() {
   return (neuron0x26785c0()*-0.129274);
}

double NNfunction_cRg::synapse0x268b790() {
   return (neuron0x2678f90()*-0.259965);
}

double NNfunction_cRg::synapse0x268b7d0() {
   return (neuron0x2679960()*-4.23818);
}

double NNfunction_cRg::synapse0x268b810() {
   return (neuron0x267a330()*0.199456);
}

double NNfunction_cRg::synapse0x268b850() {
   return (neuron0x267af10()*-0.333374);
}

double NNfunction_cRg::synapse0x268b890() {
   return (neuron0x267b8e0()*1.43991);
}

double NNfunction_cRg::synapse0x268b8d0() {
   return (neuron0x266c760()*0.33023);
}

double NNfunction_cRg::synapse0x268b910() {
   return (neuron0x266d130()*0.042314);
}

double NNfunction_cRg::synapse0x268b950() {
   return (neuron0x266db00()*1.38156);
}

double NNfunction_cRg::synapse0x268b990() {
   return (neuron0x2680140()*0.30721);
}

double NNfunction_cRg::synapse0x268b9d0() {
   return (neuron0x26809f0()*-0.174413);
}

double NNfunction_cRg::synapse0x268ba10() {
   return (neuron0x26813c0()*0.083009);
}

double NNfunction_cRg::synapse0x268ba50() {
   return (neuron0x2681d90()*1.54662);
}

double NNfunction_cRg::synapse0x268bdd0() {
   return (neuron0x265dd10()*-0.0222125);
}

double NNfunction_cRg::synapse0x268be10() {
   return (neuron0x265e660()*0.521884);
}

double NNfunction_cRg::synapse0x268be50() {
   return (neuron0x265f140()*-1.28839);
}

double NNfunction_cRg::synapse0x268be90() {
   return (neuron0x265ebe0()*0.0634698);
}

double NNfunction_cRg::synapse0x268bed0() {
   return (neuron0x265ff20()*-0.0560678);
}

double NNfunction_cRg::synapse0x268bf10() {
   return (neuron0x26608f0()*-0.181037);
}

double NNfunction_cRg::synapse0x268bf50() {
   return (neuron0x26616c0()*-0.0807498);
}

double NNfunction_cRg::synapse0x268bf90() {
   return (neuron0x2662090()*-1.02978);
}

double NNfunction_cRg::synapse0x268bfd0() {
   return (neuron0x2662a60()*1.11861);
}

double NNfunction_cRg::synapse0x268c010() {
   return (neuron0x2663540()*-0.00302449);
}

double NNfunction_cRg::synapse0x268c050() {
   return (neuron0x2663f10()*0.601449);
}

double NNfunction_cRg::synapse0x268c090() {
   return (neuron0x2660ff0()*-0.187656);
}

double NNfunction_cRg::synapse0x268c0d0() {
   return (neuron0x2665ac0()*1.23705);
}

double NNfunction_cRg::synapse0x268c110() {
   return (neuron0x2666490()*0.984433);
}

double NNfunction_cRg::synapse0x268c150() {
   return (neuron0x2666e60()*-0.286816);
}

double NNfunction_cRg::synapse0x268c190() {
   return (neuron0x2667830()*-0.512637);
}

double NNfunction_cRg::synapse0x268bc20() {
   return (neuron0x2669640()*0.215994);
}

double NNfunction_cRg::synapse0x268bc60() {
   return (neuron0x2669920()*-0.460486);
}

double NNfunction_cRg::synapse0x268c2e0() {
   return (neuron0x266a2f0()*-0.0693674);
}

double NNfunction_cRg::synapse0x268c320() {
   return (neuron0x266acc0()*-0.86626);
}

double NNfunction_cRg::synapse0x268c360() {
   return (neuron0x266b690()*0.206767);
}

double NNfunction_cRg::synapse0x268c3a0() {
   return (neuron0x266c060()*0.0742347);
}

double NNfunction_cRg::synapse0x268c3e0() {
   return (neuron0x2664bb0()*-1.68754);
}

double NNfunction_cRg::synapse0x268c420() {
   return (neuron0x2665580()*-0.0718379);
}

double NNfunction_cRg::synapse0x268c460() {
   return (neuron0x266edf0()*-0.538732);
}

double NNfunction_cRg::synapse0x268c4a0() {
   return (neuron0x266f7c0()*-0.539871);
}

double NNfunction_cRg::synapse0x268c4e0() {
   return (neuron0x2670190()*-0.00331885);
}

double NNfunction_cRg::synapse0x268c520() {
   return (neuron0x2670b60()*-0.165232);
}

double NNfunction_cRg::synapse0x268c560() {
   return (neuron0x2671530()*-0.476295);
}

double NNfunction_cRg::synapse0x268c5a0() {
   return (neuron0x2671f00()*-0.0210529);
}

double NNfunction_cRg::synapse0x268c5e0() {
   return (neuron0x26728d0()*-1.13743);
}

double NNfunction_cRg::synapse0x268c620() {
   return (neuron0x26732a0()*0.0776211);
}

double NNfunction_cRg::synapse0x268c1d0() {
   return (neuron0x2669330()*-0.256872);
}

double NNfunction_cRg::synapse0x268c210() {
   return (neuron0x2675e80()*-0.0261416);
}

double NNfunction_cRg::synapse0x268c250() {
   return (neuron0x2676850()*-0.597677);
}

double NNfunction_cRg::synapse0x268c290() {
   return (neuron0x2677220()*0.0207747);
}

double NNfunction_cRg::synapse0x268c870() {
   return (neuron0x2677bf0()*1.28414);
}

double NNfunction_cRg::synapse0x268c8b0() {
   return (neuron0x26785c0()*-0.297458);
}

double NNfunction_cRg::synapse0x268c8f0() {
   return (neuron0x2678f90()*0.364775);
}

double NNfunction_cRg::synapse0x268c930() {
   return (neuron0x2679960()*-0.223565);
}

double NNfunction_cRg::synapse0x268c970() {
   return (neuron0x267a330()*-0.0719647);
}

double NNfunction_cRg::synapse0x268c9b0() {
   return (neuron0x267af10()*-0.262249);
}

double NNfunction_cRg::synapse0x268c9f0() {
   return (neuron0x267b8e0()*0.692912);
}

double NNfunction_cRg::synapse0x268ca30() {
   return (neuron0x266c760()*-0.00977097);
}

double NNfunction_cRg::synapse0x268ca70() {
   return (neuron0x266d130()*-0.014907);
}

double NNfunction_cRg::synapse0x268cab0() {
   return (neuron0x266db00()*1.2146);
}

double NNfunction_cRg::synapse0x268caf0() {
   return (neuron0x2680140()*0.0462172);
}

double NNfunction_cRg::synapse0x268cb30() {
   return (neuron0x26809f0()*-0.0143297);
}

double NNfunction_cRg::synapse0x268cb70() {
   return (neuron0x26813c0()*-0.00122621);
}

double NNfunction_cRg::synapse0x268cbb0() {
   return (neuron0x2681d90()*0.475301);
}

double NNfunction_cRg::synapse0x268ce10() {
   return (neuron0x2688f90()*-10.9158);
}

double NNfunction_cRg::synapse0x268ce50() {
   return (neuron0x2689330()*-8.23117);
}

double NNfunction_cRg::synapse0x268ce90() {
   return (neuron0x26897d0()*4.98257);
}

double NNfunction_cRg::synapse0x268ced0() {
   return (neuron0x268a930()*-6.72101);
}

double NNfunction_cRg::synapse0x268cf10() {
   return (neuron0x268ba90()*-4.44776);
}

