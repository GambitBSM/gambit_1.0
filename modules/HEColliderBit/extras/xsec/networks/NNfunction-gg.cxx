#include "NNfunction-gg.h"
#include <cmath>

double NNfunction-gg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.848)/15.3344;
   input1 = (in1 - 28.102)/1095.61;
   input2 = (in2 - 627.923)/619.872;
   input3 = (in3 - 108.528)/971.172;
   input4 = (in4 - 1172.82)/1032.13;
   input5 = (in5 - 1086.4)/1073.31;
   input6 = (in6 - 1090.26)/1063.82;
   input7 = (in7 - 1093.17)/1028.69;
   input8 = (in8 - 1096.35)/1068.97;
   input9 = (in9 - 1081.96)/1056.52;
   input10 = (in10 - 1114.14)/1011.79;
   input11 = (in11 - 932.079)/1021.96;
   input12 = (in12 - 964.324)/1104.03;
   input13 = (in13 - 697.402)/818.832;
   input14 = (in14 - 960.81)/1052.01;
   input15 = (in15 - 969.41)/1068.38;
   input16 = (in16 - 673.146)/759.152;
   input17 = (in17 - 977.425)/1076.31;
   input18 = (in18 - 984.711)/1112.81;
   input19 = (in19 - 999.509)/1054.08;
   input20 = (in20 - -51.0723)/750.649;
   input21 = (in21 - -148.127)/1330.37;
   input22 = (in22 - -71.9197)/1418.89;
   input23 = (in23 - -87.0076)/702.614;
   switch(index) {
     case 0:
         return neuron0x24c1410();
     default:
         return 0.;
   }
}

double NNfunction-gg::Value(int index, double* input) {
   input0 = (input[0] - 23.848)/15.3344;
   input1 = (input[1] - 28.102)/1095.61;
   input2 = (input[2] - 627.923)/619.872;
   input3 = (input[3] - 108.528)/971.172;
   input4 = (input[4] - 1172.82)/1032.13;
   input5 = (input[5] - 1086.4)/1073.31;
   input6 = (input[6] - 1090.26)/1063.82;
   input7 = (input[7] - 1093.17)/1028.69;
   input8 = (input[8] - 1096.35)/1068.97;
   input9 = (input[9] - 1081.96)/1056.52;
   input10 = (input[10] - 1114.14)/1011.79;
   input11 = (input[11] - 932.079)/1021.96;
   input12 = (input[12] - 964.324)/1104.03;
   input13 = (input[13] - 697.402)/818.832;
   input14 = (input[14] - 960.81)/1052.01;
   input15 = (input[15] - 969.41)/1068.38;
   input16 = (input[16] - 673.146)/759.152;
   input17 = (input[17] - 977.425)/1076.31;
   input18 = (input[18] - 984.711)/1112.81;
   input19 = (input[19] - 999.509)/1054.08;
   input20 = (input[20] - -51.0723)/750.649;
   input21 = (input[21] - -148.127)/1330.37;
   input22 = (input[22] - -71.9197)/1418.89;
   input23 = (input[23] - -87.0076)/702.614;
   switch(index) {
     case 0:
         return neuron0x24c1410();
     default:
         return 0.;
   }
}

double NNfunction-gg::neuron0x248d500() {
   return input0;
}

double NNfunction-gg::neuron0x248d840() {
   return input1;
}

double NNfunction-gg::neuron0x248db80() {
   return input2;
}

double NNfunction-gg::neuron0x248dec0() {
   return input3;
}

double NNfunction-gg::neuron0x248e200() {
   return input4;
}

double NNfunction-gg::neuron0x248e540() {
   return input5;
}

double NNfunction-gg::neuron0x248e880() {
   return input6;
}

double NNfunction-gg::neuron0x248ebc0() {
   return input7;
}

double NNfunction-gg::neuron0x248ef00() {
   return input8;
}

double NNfunction-gg::neuron0x248f240() {
   return input9;
}

double NNfunction-gg::neuron0x248f580() {
   return input10;
}

double NNfunction-gg::neuron0x248f8c0() {
   return input11;
}

double NNfunction-gg::neuron0x248fc00() {
   return input12;
}

double NNfunction-gg::neuron0x248ff40() {
   return input13;
}

double NNfunction-gg::neuron0x2490280() {
   return input14;
}

double NNfunction-gg::neuron0x24905c0() {
   return input15;
}

double NNfunction-gg::neuron0x2490900() {
   return input16;
}

double NNfunction-gg::neuron0x2490e60() {
   return input17;
}

double NNfunction-gg::neuron0x2491080() {
   return input18;
}

double NNfunction-gg::neuron0x24913c0() {
   return input19;
}

double NNfunction-gg::neuron0x2491700() {
   return input20;
}

double NNfunction-gg::neuron0x2491a40() {
   return input21;
}

double NNfunction-gg::neuron0x2491d80() {
   return input22;
}

double NNfunction-gg::neuron0x24920c0() {
   return input23;
}

double NNfunction-gg::input0x2492530() {
   double input = 0.191524;
   input += synapse0x248d3c0();
   input += synapse0x248d400();
   input += synapse0x24927e0();
   input += synapse0x2492820();
   input += synapse0x2492860();
   input += synapse0x24928a0();
   input += synapse0x24928e0();
   input += synapse0x2492920();
   input += synapse0x2492960();
   input += synapse0x24929a0();
   input += synapse0x24929e0();
   input += synapse0x2492a20();
   input += synapse0x2492a60();
   input += synapse0x2492aa0();
   input += synapse0x2492ae0();
   input += synapse0x2492b20();
   input += synapse0x248d330();
   input += synapse0x248d370();
   input += synapse0x223f020();
   input += synapse0x223f060();
   input += synapse0x2492d80();
   input += synapse0x2492dc0();
   input += synapse0x2492e00();
   input += synapse0x2492e40();
   return input;
}

double NNfunction-gg::neuron0x2492530() {
   double input = input0x2492530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2492e80() {
   double input = 0.31652;
   input += synapse0x24931c0();
   input += synapse0x2493200();
   input += synapse0x2493240();
   input += synapse0x2493280();
   input += synapse0x24932c0();
   input += synapse0x2493300();
   input += synapse0x2493340();
   input += synapse0x2493380();
   input += synapse0x24933c0();
   input += synapse0x2492c70();
   input += synapse0x2492cb0();
   input += synapse0x2492cf0();
   input += synapse0x2492d30();
   input += synapse0x2493610();
   input += synapse0x2493650();
   input += synapse0x2493690();
   input += synapse0x2493010();
   input += synapse0x2493050();
   input += synapse0x24937e0();
   input += synapse0x2493820();
   input += synapse0x2493860();
   input += synapse0x24938a0();
   input += synapse0x24938e0();
   input += synapse0x2493920();
   return input;
}

double NNfunction-gg::neuron0x2492e80() {
   double input = input0x2492e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2493960() {
   double input = -0.188781;
   input += synapse0x2493ca0();
   input += synapse0x2493ce0();
   input += synapse0x2493d20();
   input += synapse0x2493d60();
   input += synapse0x2493da0();
   input += synapse0x2493de0();
   input += synapse0x2493e20();
   input += synapse0x2493e60();
   input += synapse0x2493ea0();
   input += synapse0x2493ee0();
   input += synapse0x2493f20();
   input += synapse0x2493f60();
   input += synapse0x2493fa0();
   input += synapse0x2493fe0();
   input += synapse0x2494020();
   input += synapse0x2494060();
   input += synapse0x2493af0();
   input += synapse0x2493b30();
   input += synapse0x223f380();
   input += synapse0x224cb20();
   input += synapse0x224cb60();
   input += synapse0x247c590();
   input += synapse0x247c5d0();
   input += synapse0x247c610();
   return input;
}

double NNfunction-gg::neuron0x2493960() {
   double input = input0x2493960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2493400() {
   double input = -0.813163;
   input += synapse0x224d3c0();
   input += synapse0x2493590();
   input += synapse0x24935d0();
   input += synapse0x24941b0();
   input += synapse0x24941f0();
   input += synapse0x2494230();
   input += synapse0x2494270();
   input += synapse0x24942b0();
   input += synapse0x24942f0();
   input += synapse0x2494330();
   input += synapse0x2494370();
   input += synapse0x24943b0();
   input += synapse0x24943f0();
   input += synapse0x2494430();
   input += synapse0x2494470();
   input += synapse0x24944b0();
   input += synapse0x248d440();
   input += synapse0x248d480();
   input += synapse0x248d4c0();
   input += synapse0x2494600();
   input += synapse0x2494640();
   input += synapse0x2494680();
   input += synapse0x24946c0();
   input += synapse0x2494700();
   return input;
}

double NNfunction-gg::neuron0x2493400() {
   double input = input0x2493400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2494740() {
   double input = 4.81673;
   input += synapse0x2494a80();
   input += synapse0x2494ac0();
   input += synapse0x2494b00();
   input += synapse0x2494b40();
   input += synapse0x2494b80();
   input += synapse0x2494bc0();
   input += synapse0x2494c00();
   input += synapse0x2494c40();
   input += synapse0x2494c80();
   input += synapse0x2494cc0();
   input += synapse0x2494d00();
   input += synapse0x2494d40();
   input += synapse0x2494d80();
   input += synapse0x2494dc0();
   input += synapse0x2494e00();
   input += synapse0x2494e40();
   input += synapse0x24948d0();
   input += synapse0x2494910();
   input += synapse0x2494f90();
   input += synapse0x2494fd0();
   input += synapse0x2495010();
   input += synapse0x2495050();
   input += synapse0x2495090();
   input += synapse0x24950d0();
   return input;
}

double NNfunction-gg::neuron0x2494740() {
   double input = input0x2494740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2495110() {
   double input = -2.71161;
   input += synapse0x2495450();
   input += synapse0x2495490();
   input += synapse0x24954d0();
   input += synapse0x2495510();
   input += synapse0x2495550();
   input += synapse0x2495590();
   input += synapse0x24955d0();
   input += synapse0x2495610();
   input += synapse0x2495650();
   input += synapse0x224ce90();
   input += synapse0x224ced0();
   input += synapse0x224cf10();
   input += synapse0x224cf50();
   input += synapse0x224cf90();
   input += synapse0x224cfd0();
   input += synapse0x224d010();
   input += synapse0x24952a0();
   input += synapse0x24952e0();
   input += synapse0x224d160();
   input += synapse0x224d1a0();
   input += synapse0x224d1e0();
   input += synapse0x224d220();
   input += synapse0x224d260();
   input += synapse0x2495ea0();
   return input;
}

double NNfunction-gg::neuron0x2495110() {
   double input = input0x2495110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2495ee0() {
   double input = -0.666596;
   input += synapse0x2496220();
   input += synapse0x2496260();
   input += synapse0x24962a0();
   input += synapse0x24962e0();
   input += synapse0x2496320();
   input += synapse0x2496360();
   input += synapse0x24963a0();
   input += synapse0x24963e0();
   input += synapse0x2496420();
   input += synapse0x2496460();
   input += synapse0x24964a0();
   input += synapse0x24964e0();
   input += synapse0x2496520();
   input += synapse0x2496560();
   input += synapse0x24965a0();
   input += synapse0x24965e0();
   input += synapse0x2496070();
   input += synapse0x24960b0();
   input += synapse0x2496730();
   input += synapse0x2496770();
   input += synapse0x24967b0();
   input += synapse0x24967f0();
   input += synapse0x2496830();
   input += synapse0x2496870();
   return input;
}

double NNfunction-gg::neuron0x2495ee0() {
   double input = input0x2495ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24968b0() {
   double input = 3.76049;
   input += synapse0x2496bf0();
   input += synapse0x2496c30();
   input += synapse0x2496c70();
   input += synapse0x2496cb0();
   input += synapse0x2496cf0();
   input += synapse0x2496d30();
   input += synapse0x2496d70();
   input += synapse0x2496db0();
   input += synapse0x2496df0();
   input += synapse0x2496e30();
   input += synapse0x2496e70();
   input += synapse0x2496eb0();
   input += synapse0x2496ef0();
   input += synapse0x2496f30();
   input += synapse0x2496f70();
   input += synapse0x2496fb0();
   input += synapse0x2496a40();
   input += synapse0x2496a80();
   input += synapse0x2497100();
   input += synapse0x2497140();
   input += synapse0x2497180();
   input += synapse0x24971c0();
   input += synapse0x2497200();
   input += synapse0x2497240();
   return input;
}

double NNfunction-gg::neuron0x24968b0() {
   double input = input0x24968b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2497280() {
   double input = -1.18289;
   input += synapse0x2490d50();
   input += synapse0x2490d90();
   input += synapse0x2490dd0();
   input += synapse0x2490e10();
   input += synapse0x24977d0();
   input += synapse0x2497810();
   input += synapse0x2497850();
   input += synapse0x2497890();
   input += synapse0x24978d0();
   input += synapse0x2497910();
   input += synapse0x2497950();
   input += synapse0x2497990();
   input += synapse0x24979d0();
   input += synapse0x2497a10();
   input += synapse0x2497a50();
   input += synapse0x2497a90();
   input += synapse0x2497410();
   input += synapse0x2497450();
   input += synapse0x2497be0();
   input += synapse0x2497c20();
   input += synapse0x2497c60();
   input += synapse0x2497ca0();
   input += synapse0x2497ce0();
   input += synapse0x2497d20();
   return input;
}

double NNfunction-gg::neuron0x2497280() {
   double input = input0x2497280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2497d60() {
   double input = -0.0951241;
   input += synapse0x24980a0();
   input += synapse0x24980e0();
   input += synapse0x2498120();
   input += synapse0x2498160();
   input += synapse0x24981a0();
   input += synapse0x24981e0();
   input += synapse0x2498220();
   input += synapse0x2498260();
   input += synapse0x24982a0();
   input += synapse0x24982e0();
   input += synapse0x2498320();
   input += synapse0x2498360();
   input += synapse0x24983a0();
   input += synapse0x24983e0();
   input += synapse0x2498420();
   input += synapse0x2498460();
   input += synapse0x2497ef0();
   input += synapse0x2497f30();
   input += synapse0x24985b0();
   input += synapse0x24985f0();
   input += synapse0x2498630();
   input += synapse0x2498670();
   input += synapse0x24986b0();
   input += synapse0x24986f0();
   return input;
}

double NNfunction-gg::neuron0x2497d60() {
   double input = input0x2497d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2498730() {
   double input = -0.546324;
   input += synapse0x2498a70();
   input += synapse0x2498ab0();
   input += synapse0x2498af0();
   input += synapse0x2498b30();
   input += synapse0x2498b70();
   input += synapse0x2498bb0();
   input += synapse0x2498bf0();
   input += synapse0x2498c30();
   input += synapse0x2498c70();
   input += synapse0x2498cb0();
   input += synapse0x2498cf0();
   input += synapse0x2498d30();
   input += synapse0x2498d70();
   input += synapse0x2498db0();
   input += synapse0x2498df0();
   input += synapse0x2498e30();
   input += synapse0x24988c0();
   input += synapse0x2498900();
   input += synapse0x2495690();
   input += synapse0x24956d0();
   input += synapse0x2495710();
   input += synapse0x2495750();
   input += synapse0x2495790();
   input += synapse0x24957d0();
   return input;
}

double NNfunction-gg::neuron0x2498730() {
   double input = input0x2498730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2495810() {
   double input = -0.919986;
   input += synapse0x2495b50();
   input += synapse0x2495b90();
   input += synapse0x2495bd0();
   input += synapse0x2495c10();
   input += synapse0x2495c50();
   input += synapse0x2495c90();
   input += synapse0x2495cd0();
   input += synapse0x2495d10();
   input += synapse0x2495d50();
   input += synapse0x2495d90();
   input += synapse0x2495dd0();
   input += synapse0x2495e10();
   input += synapse0x2495e50();
   input += synapse0x2499f90();
   input += synapse0x2499fd0();
   input += synapse0x249a010();
   input += synapse0x24959a0();
   input += synapse0x24959e0();
   input += synapse0x249a160();
   input += synapse0x249a1a0();
   input += synapse0x249a1e0();
   input += synapse0x249a220();
   input += synapse0x249a260();
   input += synapse0x249a2a0();
   return input;
}

double NNfunction-gg::neuron0x2495810() {
   double input = input0x2495810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249a2e0() {
   double input = -0.782109;
   input += synapse0x249a620();
   input += synapse0x249a660();
   input += synapse0x249a6a0();
   input += synapse0x249a6e0();
   input += synapse0x249a720();
   input += synapse0x249a760();
   input += synapse0x249a7a0();
   input += synapse0x249a7e0();
   input += synapse0x249a820();
   input += synapse0x249a860();
   input += synapse0x249a8a0();
   input += synapse0x249a8e0();
   input += synapse0x249a920();
   input += synapse0x249a960();
   input += synapse0x249a9a0();
   input += synapse0x249a9e0();
   input += synapse0x249a470();
   input += synapse0x249a4b0();
   input += synapse0x249ab30();
   input += synapse0x249ab70();
   input += synapse0x249abb0();
   input += synapse0x249abf0();
   input += synapse0x249ac30();
   input += synapse0x249ac70();
   return input;
}

double NNfunction-gg::neuron0x249a2e0() {
   double input = input0x249a2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249acb0() {
   double input = 0.737476;
   input += synapse0x249aff0();
   input += synapse0x249b030();
   input += synapse0x249b070();
   input += synapse0x249b0b0();
   input += synapse0x249b0f0();
   input += synapse0x249b130();
   input += synapse0x249b170();
   input += synapse0x249b1b0();
   input += synapse0x249b1f0();
   input += synapse0x249b230();
   input += synapse0x249b270();
   input += synapse0x249b2b0();
   input += synapse0x249b2f0();
   input += synapse0x249b330();
   input += synapse0x249b370();
   input += synapse0x249b3b0();
   input += synapse0x249ae40();
   input += synapse0x249ae80();
   input += synapse0x249b500();
   input += synapse0x249b540();
   input += synapse0x249b580();
   input += synapse0x249b5c0();
   input += synapse0x249b600();
   input += synapse0x249b640();
   return input;
}

double NNfunction-gg::neuron0x249acb0() {
   double input = input0x249acb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249b680() {
   double input = 0.0447595;
   input += synapse0x249b9c0();
   input += synapse0x249ba00();
   input += synapse0x249ba40();
   input += synapse0x249ba80();
   input += synapse0x249bac0();
   input += synapse0x249bb00();
   input += synapse0x249bb40();
   input += synapse0x249bb80();
   input += synapse0x249bbc0();
   input += synapse0x249bc00();
   input += synapse0x249bc40();
   input += synapse0x249bc80();
   input += synapse0x249bcc0();
   input += synapse0x249bd00();
   input += synapse0x249bd40();
   input += synapse0x249bd80();
   input += synapse0x249b810();
   input += synapse0x249b850();
   input += synapse0x249bed0();
   input += synapse0x249bf10();
   input += synapse0x249bf50();
   input += synapse0x249bf90();
   input += synapse0x249bfd0();
   input += synapse0x249c010();
   return input;
}

double NNfunction-gg::neuron0x249b680() {
   double input = input0x249b680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249c050() {
   double input = 0.26584;
   input += synapse0x249c390();
   input += synapse0x248d720();
   input += synapse0x248d760();
   input += synapse0x248da60();
   input += synapse0x248daa0();
   input += synapse0x248dda0();
   input += synapse0x248dde0();
   input += synapse0x248e0e0();
   input += synapse0x248e120();
   input += synapse0x248e420();
   input += synapse0x248e460();
   input += synapse0x248e760();
   input += synapse0x248e7a0();
   input += synapse0x248eaa0();
   input += synapse0x248eae0();
   input += synapse0x248ede0();
   input += synapse0x248ee20();
   input += synapse0x248f120();
   input += synapse0x248f160();
   input += synapse0x248f460();
   input += synapse0x248f4a0();
   input += synapse0x248f7a0();
   input += synapse0x248f7e0();
   input += synapse0x248fae0();
   return input;
}

double NNfunction-gg::neuron0x249c050() {
   double input = input0x249c050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249de60() {
   double input = 0.475031;
   input += synapse0x248fb20();
   input += synapse0x24907e0();
   input += synapse0x2490820();
   input += synapse0x249c1e0();
   input += synapse0x249c220();
   input += synapse0x2490b20();
   input += synapse0x2490b60();
   input += synapse0x1495710();
   input += synapse0x1495750();
   input += synapse0x24912a0();
   input += synapse0x24912e0();
   input += synapse0x24915e0();
   input += synapse0x2491620();
   input += synapse0x2491920();
   input += synapse0x2491960();
   input += synapse0x2491c60();
   input += synapse0x2491ca0();
   input += synapse0x2491fa0();
   input += synapse0x2491fe0();
   input += synapse0x24922e0();
   input += synapse0x2492320();
   input += synapse0x248fe20();
   input += synapse0x248fe60();
   input += synapse0x249e100();
   return input;
}

double NNfunction-gg::neuron0x249de60() {
   double input = input0x249de60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249e140() {
   double input = -0.498764;
   input += synapse0x249e480();
   input += synapse0x249e4c0();
   input += synapse0x249e500();
   input += synapse0x249e540();
   input += synapse0x249e580();
   input += synapse0x249e5c0();
   input += synapse0x249e600();
   input += synapse0x249e640();
   input += synapse0x249e680();
   input += synapse0x249e6c0();
   input += synapse0x249e700();
   input += synapse0x249e740();
   input += synapse0x249e780();
   input += synapse0x249e7c0();
   input += synapse0x249e800();
   input += synapse0x249e840();
   input += synapse0x249e2d0();
   input += synapse0x249e310();
   input += synapse0x249e990();
   input += synapse0x249e9d0();
   input += synapse0x249ea10();
   input += synapse0x249ea50();
   input += synapse0x249ea90();
   input += synapse0x249ead0();
   return input;
}

double NNfunction-gg::neuron0x249e140() {
   double input = input0x249e140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249eb10() {
   double input = -0.243574;
   input += synapse0x249ee50();
   input += synapse0x249ee90();
   input += synapse0x249eed0();
   input += synapse0x249ef10();
   input += synapse0x249ef50();
   input += synapse0x249ef90();
   input += synapse0x249efd0();
   input += synapse0x249f010();
   input += synapse0x249f050();
   input += synapse0x249f090();
   input += synapse0x249f0d0();
   input += synapse0x249f110();
   input += synapse0x249f150();
   input += synapse0x249f190();
   input += synapse0x249f1d0();
   input += synapse0x249f210();
   input += synapse0x249eca0();
   input += synapse0x249ece0();
   input += synapse0x249f360();
   input += synapse0x249f3a0();
   input += synapse0x249f3e0();
   input += synapse0x249f420();
   input += synapse0x249f460();
   input += synapse0x249f4a0();
   return input;
}

double NNfunction-gg::neuron0x249eb10() {
   double input = input0x249eb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249f4e0() {
   double input = -0.237579;
   input += synapse0x249f820();
   input += synapse0x249f860();
   input += synapse0x249f8a0();
   input += synapse0x249f8e0();
   input += synapse0x249f920();
   input += synapse0x249f960();
   input += synapse0x249f9a0();
   input += synapse0x249f9e0();
   input += synapse0x249fa20();
   input += synapse0x249fa60();
   input += synapse0x249faa0();
   input += synapse0x249fae0();
   input += synapse0x249fb20();
   input += synapse0x249fb60();
   input += synapse0x249fba0();
   input += synapse0x249fbe0();
   input += synapse0x249f670();
   input += synapse0x249f6b0();
   input += synapse0x249fd30();
   input += synapse0x249fd70();
   input += synapse0x249fdb0();
   input += synapse0x249fdf0();
   input += synapse0x249fe30();
   input += synapse0x249fe70();
   return input;
}

double NNfunction-gg::neuron0x249f4e0() {
   double input = input0x249f4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249feb0() {
   double input = -0.689447;
   input += synapse0x24a01f0();
   input += synapse0x24a0230();
   input += synapse0x24a0270();
   input += synapse0x24a02b0();
   input += synapse0x24a02f0();
   input += synapse0x24a0330();
   input += synapse0x24a0370();
   input += synapse0x24a03b0();
   input += synapse0x24a03f0();
   input += synapse0x24a0430();
   input += synapse0x24a0470();
   input += synapse0x24a04b0();
   input += synapse0x24a04f0();
   input += synapse0x24a0530();
   input += synapse0x24a0570();
   input += synapse0x24a05b0();
   input += synapse0x24a0040();
   input += synapse0x24a0080();
   input += synapse0x24a0700();
   input += synapse0x24a0740();
   input += synapse0x24a0780();
   input += synapse0x24a07c0();
   input += synapse0x24a0800();
   input += synapse0x24a0840();
   return input;
}

double NNfunction-gg::neuron0x249feb0() {
   double input = input0x249feb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a0880() {
   double input = 0.790128;
   input += synapse0x24a0bc0();
   input += synapse0x24a0c00();
   input += synapse0x24a0c40();
   input += synapse0x24a0c80();
   input += synapse0x24a0cc0();
   input += synapse0x24a0d00();
   input += synapse0x24a0d40();
   input += synapse0x24a0d80();
   input += synapse0x24a0dc0();
   input += synapse0x2498f80();
   input += synapse0x2498fc0();
   input += synapse0x2499000();
   input += synapse0x2499040();
   input += synapse0x2499080();
   input += synapse0x24990c0();
   input += synapse0x2499100();
   input += synapse0x24a0a10();
   input += synapse0x24a0a50();
   input += synapse0x2499250();
   input += synapse0x2499290();
   input += synapse0x24992d0();
   input += synapse0x2499310();
   input += synapse0x2499350();
   input += synapse0x2499390();
   return input;
}

double NNfunction-gg::neuron0x24a0880() {
   double input = input0x24a0880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24993d0() {
   double input = 0.501893;
   input += synapse0x2499710();
   input += synapse0x2499750();
   input += synapse0x2499790();
   input += synapse0x24997d0();
   input += synapse0x2499810();
   input += synapse0x2499850();
   input += synapse0x2499890();
   input += synapse0x24998d0();
   input += synapse0x2499910();
   input += synapse0x2499950();
   input += synapse0x2499990();
   input += synapse0x24999d0();
   input += synapse0x2499a10();
   input += synapse0x2499a50();
   input += synapse0x2499a90();
   input += synapse0x2499ad0();
   input += synapse0x2499560();
   input += synapse0x24995a0();
   input += synapse0x2499c20();
   input += synapse0x2499c60();
   input += synapse0x2499ca0();
   input += synapse0x2499ce0();
   input += synapse0x2499d20();
   input += synapse0x2499d60();
   return input;
}

double NNfunction-gg::neuron0x24993d0() {
   double input = input0x24993d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x2499da0() {
   double input = -0.310818;
   input += synapse0x2499f30();
   input += synapse0x24a2fc0();
   input += synapse0x24a3000();
   input += synapse0x24a3040();
   input += synapse0x24a3080();
   input += synapse0x24a30c0();
   input += synapse0x24a3100();
   input += synapse0x24a3140();
   input += synapse0x24a3180();
   input += synapse0x24a31c0();
   input += synapse0x24a3200();
   input += synapse0x24a3240();
   input += synapse0x24a3280();
   input += synapse0x24a32c0();
   input += synapse0x24a3300();
   input += synapse0x24a3340();
   input += synapse0x24a2e10();
   input += synapse0x24a2e50();
   input += synapse0x24a3490();
   input += synapse0x24a34d0();
   input += synapse0x24a3510();
   input += synapse0x24a3550();
   input += synapse0x24a3590();
   input += synapse0x24a35d0();
   return input;
}

double NNfunction-gg::neuron0x2499da0() {
   double input = input0x2499da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a3610() {
   double input = 0.321116;
   input += synapse0x24a3950();
   input += synapse0x24a3990();
   input += synapse0x24a39d0();
   input += synapse0x24a3a10();
   input += synapse0x24a3a50();
   input += synapse0x24a3a90();
   input += synapse0x24a3ad0();
   input += synapse0x24a3b10();
   input += synapse0x24a3b50();
   input += synapse0x24a3b90();
   input += synapse0x24a3bd0();
   input += synapse0x24a3c10();
   input += synapse0x24a3c50();
   input += synapse0x24a3c90();
   input += synapse0x24a3cd0();
   input += synapse0x24a3d10();
   input += synapse0x24a37a0();
   input += synapse0x24a37e0();
   input += synapse0x24a3e60();
   input += synapse0x24a3ea0();
   input += synapse0x24a3ee0();
   input += synapse0x24a3f20();
   input += synapse0x24a3f60();
   input += synapse0x24a3fa0();
   return input;
}

double NNfunction-gg::neuron0x24a3610() {
   double input = input0x24a3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a3fe0() {
   double input = 1.12762;
   input += synapse0x24a4320();
   input += synapse0x24a4360();
   input += synapse0x24a43a0();
   input += synapse0x24a43e0();
   input += synapse0x24a4420();
   input += synapse0x24a4460();
   input += synapse0x24a44a0();
   input += synapse0x24a44e0();
   input += synapse0x24a4520();
   input += synapse0x24a4560();
   input += synapse0x24a45a0();
   input += synapse0x24a45e0();
   input += synapse0x24a4620();
   input += synapse0x24a4660();
   input += synapse0x24a46a0();
   input += synapse0x24a46e0();
   input += synapse0x24a4170();
   input += synapse0x24a41b0();
   input += synapse0x24a4830();
   input += synapse0x24a4870();
   input += synapse0x24a48b0();
   input += synapse0x24a48f0();
   input += synapse0x24a4930();
   input += synapse0x24a4970();
   return input;
}

double NNfunction-gg::neuron0x24a3fe0() {
   double input = input0x24a3fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a49b0() {
   double input = -0.518242;
   input += synapse0x24a4cf0();
   input += synapse0x24a4d30();
   input += synapse0x24a4d70();
   input += synapse0x24a4db0();
   input += synapse0x24a4df0();
   input += synapse0x24a4e30();
   input += synapse0x24a4e70();
   input += synapse0x24a4eb0();
   input += synapse0x24a4ef0();
   input += synapse0x24a4f30();
   input += synapse0x24a4f70();
   input += synapse0x24a4fb0();
   input += synapse0x24a4ff0();
   input += synapse0x24a5030();
   input += synapse0x24a5070();
   input += synapse0x24a50b0();
   input += synapse0x24a4b40();
   input += synapse0x24a4b80();
   input += synapse0x24a5200();
   input += synapse0x24a5240();
   input += synapse0x24a5280();
   input += synapse0x24a52c0();
   input += synapse0x24a5300();
   input += synapse0x24a5340();
   return input;
}

double NNfunction-gg::neuron0x24a49b0() {
   double input = input0x24a49b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a5380() {
   double input = -0.536751;
   input += synapse0x24a56c0();
   input += synapse0x24a5700();
   input += synapse0x24a5740();
   input += synapse0x24a5780();
   input += synapse0x24a57c0();
   input += synapse0x24a5800();
   input += synapse0x24a5840();
   input += synapse0x24a5880();
   input += synapse0x24a58c0();
   input += synapse0x24a5900();
   input += synapse0x24a5940();
   input += synapse0x24a5980();
   input += synapse0x24a59c0();
   input += synapse0x24a5a00();
   input += synapse0x24a5a40();
   input += synapse0x24a5a80();
   input += synapse0x24a5510();
   input += synapse0x24a5550();
   input += synapse0x24a5bd0();
   input += synapse0x24a5c10();
   input += synapse0x24a5c50();
   input += synapse0x24a5c90();
   input += synapse0x24a5cd0();
   input += synapse0x24a5d10();
   return input;
}

double NNfunction-gg::neuron0x24a5380() {
   double input = input0x24a5380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a5d50() {
   double input = -0.185708;
   input += synapse0x24a6090();
   input += synapse0x24a60d0();
   input += synapse0x24a6110();
   input += synapse0x24a6150();
   input += synapse0x24a6190();
   input += synapse0x24a61d0();
   input += synapse0x24a6210();
   input += synapse0x24a6250();
   input += synapse0x24a6290();
   input += synapse0x24a62d0();
   input += synapse0x24a6310();
   input += synapse0x24a6350();
   input += synapse0x24a6390();
   input += synapse0x24a63d0();
   input += synapse0x24a6410();
   input += synapse0x24a6450();
   input += synapse0x24a5ee0();
   input += synapse0x24a5f20();
   input += synapse0x24a65a0();
   input += synapse0x24a65e0();
   input += synapse0x24a6620();
   input += synapse0x24a6660();
   input += synapse0x24a66a0();
   input += synapse0x24a66e0();
   return input;
}

double NNfunction-gg::neuron0x24a5d50() {
   double input = input0x24a5d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a6720() {
   double input = -0.316272;
   input += synapse0x24a6a60();
   input += synapse0x24a6aa0();
   input += synapse0x24a6ae0();
   input += synapse0x24a6b20();
   input += synapse0x24a6b60();
   input += synapse0x24a6ba0();
   input += synapse0x24a6be0();
   input += synapse0x24a6c20();
   input += synapse0x24a6c60();
   input += synapse0x24a6ca0();
   input += synapse0x24a6ce0();
   input += synapse0x24a6d20();
   input += synapse0x24a6d60();
   input += synapse0x24a6da0();
   input += synapse0x24a6de0();
   input += synapse0x24a6e20();
   input += synapse0x24a68b0();
   input += synapse0x24a68f0();
   input += synapse0x24a6f70();
   input += synapse0x24a6fb0();
   input += synapse0x24a6ff0();
   input += synapse0x24a7030();
   input += synapse0x24a7070();
   input += synapse0x24a70b0();
   return input;
}

double NNfunction-gg::neuron0x24a6720() {
   double input = input0x24a6720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a70f0() {
   double input = 0.402818;
   input += synapse0x24a7430();
   input += synapse0x24a7470();
   input += synapse0x24a74b0();
   input += synapse0x24a74f0();
   input += synapse0x24a7530();
   input += synapse0x24a7570();
   input += synapse0x24a75b0();
   input += synapse0x24a75f0();
   input += synapse0x24a7630();
   input += synapse0x24a7670();
   input += synapse0x24a76b0();
   input += synapse0x24a76f0();
   input += synapse0x24a7730();
   input += synapse0x24a7770();
   input += synapse0x24a77b0();
   input += synapse0x24a77f0();
   input += synapse0x24a7280();
   input += synapse0x24a72c0();
   input += synapse0x24a7940();
   input += synapse0x24a7980();
   input += synapse0x24a79c0();
   input += synapse0x24a7a00();
   input += synapse0x24a7a40();
   input += synapse0x24a7a80();
   return input;
}

double NNfunction-gg::neuron0x24a70f0() {
   double input = input0x24a70f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a7ac0() {
   double input = -0.157547;
   input += synapse0x24a7e00();
   input += synapse0x249c3d0();
   input += synapse0x249c410();
   input += synapse0x249c450();
   input += synapse0x249c6a0();
   input += synapse0x249c6e0();
   input += synapse0x249c720();
   input += synapse0x249c970();
   input += synapse0x249c9b0();
   input += synapse0x249cc00();
   input += synapse0x249cc40();
   input += synapse0x249cc80();
   input += synapse0x249ced0();
   input += synapse0x249cf10();
   input += synapse0x249d160();
   input += synapse0x249d1a0();
   input += synapse0x24a7c50();
   input += synapse0x24a7c90();
   input += synapse0x249d2f0();
   input += synapse0x249d800();
   input += synapse0x249d840();
   input += synapse0x249d880();
   input += synapse0x249dad0();
   input += synapse0x249db10();
   return input;
}

double NNfunction-gg::neuron0x24a7ac0() {
   double input = input0x24a7ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x249db50() {
   double input = -0.161111;
   input += synapse0x249d3c0();
   input += synapse0x249d400();
   input += synapse0x249d440();
   input += synapse0x249d480();
   input += synapse0x249de00();
   input += synapse0x24aa150();
   input += synapse0x24aa190();
   input += synapse0x24aa1d0();
   input += synapse0x24aa210();
   input += synapse0x24aa250();
   input += synapse0x24aa290();
   input += synapse0x24aa2d0();
   input += synapse0x24aa310();
   input += synapse0x24aa350();
   input += synapse0x24aa390();
   input += synapse0x24aa3d0();
   input += synapse0x249dce0();
   input += synapse0x249dd20();
   input += synapse0x24aa520();
   input += synapse0x24aa560();
   input += synapse0x24aa5a0();
   input += synapse0x24aa5e0();
   input += synapse0x24aa620();
   input += synapse0x24aa660();
   return input;
}

double NNfunction-gg::neuron0x249db50() {
   double input = input0x249db50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24aa6a0() {
   double input = 0.0142728;
   input += synapse0x24aa9e0();
   input += synapse0x24aaa20();
   input += synapse0x24aaa60();
   input += synapse0x24aaaa0();
   input += synapse0x24aaae0();
   input += synapse0x24aab20();
   input += synapse0x24aab60();
   input += synapse0x24aaba0();
   input += synapse0x24aabe0();
   input += synapse0x24aac20();
   input += synapse0x24aac60();
   input += synapse0x24aaca0();
   input += synapse0x24aace0();
   input += synapse0x24aad20();
   input += synapse0x24aad60();
   input += synapse0x24aada0();
   input += synapse0x24aa830();
   input += synapse0x24aa870();
   input += synapse0x24aaef0();
   input += synapse0x24aaf30();
   input += synapse0x24aaf70();
   input += synapse0x24aafb0();
   input += synapse0x24aaff0();
   input += synapse0x24ab030();
   return input;
}

double NNfunction-gg::neuron0x24aa6a0() {
   double input = input0x24aa6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24ab070() {
   double input = 0.938097;
   input += synapse0x24ab3b0();
   input += synapse0x24ab3f0();
   input += synapse0x24ab430();
   input += synapse0x24ab470();
   input += synapse0x24ab4b0();
   input += synapse0x24ab4f0();
   input += synapse0x24ab530();
   input += synapse0x24ab570();
   input += synapse0x24ab5b0();
   input += synapse0x24ab5f0();
   input += synapse0x24ab630();
   input += synapse0x24ab670();
   input += synapse0x24ab6b0();
   input += synapse0x24ab6f0();
   input += synapse0x24ab730();
   input += synapse0x24ab770();
   input += synapse0x24ab200();
   input += synapse0x24ab240();
   input += synapse0x24ab8c0();
   input += synapse0x24ab900();
   input += synapse0x24ab940();
   input += synapse0x24ab980();
   input += synapse0x24ab9c0();
   input += synapse0x24aba00();
   return input;
}

double NNfunction-gg::neuron0x24ab070() {
   double input = input0x24ab070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24aba40() {
   double input = -0.716738;
   input += synapse0x24abd80();
   input += synapse0x24abdc0();
   input += synapse0x24abe00();
   input += synapse0x24abe40();
   input += synapse0x24abe80();
   input += synapse0x24abec0();
   input += synapse0x24abf00();
   input += synapse0x24abf40();
   input += synapse0x24abf80();
   input += synapse0x24abfc0();
   input += synapse0x24ac000();
   input += synapse0x24ac040();
   input += synapse0x24ac080();
   input += synapse0x24ac0c0();
   input += synapse0x24ac100();
   input += synapse0x24ac140();
   input += synapse0x24abbd0();
   input += synapse0x24abc10();
   input += synapse0x24ac290();
   input += synapse0x24ac2d0();
   input += synapse0x24ac310();
   input += synapse0x24ac350();
   input += synapse0x24ac390();
   input += synapse0x24ac3d0();
   return input;
}

double NNfunction-gg::neuron0x24aba40() {
   double input = input0x24aba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24ac410() {
   double input = -0.200701;
   input += synapse0x24ac750();
   input += synapse0x24ac790();
   input += synapse0x24ac7d0();
   input += synapse0x24ac810();
   input += synapse0x24ac850();
   input += synapse0x24ac890();
   input += synapse0x24ac8d0();
   input += synapse0x24ac910();
   input += synapse0x24ac950();
   input += synapse0x24ac990();
   input += synapse0x24ac9d0();
   input += synapse0x24aca10();
   input += synapse0x24aca50();
   input += synapse0x24aca90();
   input += synapse0x24acad0();
   input += synapse0x24acb10();
   input += synapse0x24ac5a0();
   input += synapse0x24ac5e0();
   input += synapse0x24acc60();
   input += synapse0x24acca0();
   input += synapse0x24acce0();
   input += synapse0x24acd20();
   input += synapse0x24acd60();
   input += synapse0x24acda0();
   return input;
}

double NNfunction-gg::neuron0x24ac410() {
   double input = input0x24ac410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24acde0() {
   double input = -0.147863;
   input += synapse0x24ad120();
   input += synapse0x24ad160();
   input += synapse0x24ad1a0();
   input += synapse0x24ad1e0();
   input += synapse0x24ad220();
   input += synapse0x24ad260();
   input += synapse0x24ad2a0();
   input += synapse0x24ad2e0();
   input += synapse0x24ad320();
   input += synapse0x24ad360();
   input += synapse0x24ad3a0();
   input += synapse0x24ad3e0();
   input += synapse0x24ad420();
   input += synapse0x24ad460();
   input += synapse0x24ad4a0();
   input += synapse0x24ad4e0();
   input += synapse0x24acf70();
   input += synapse0x24acfb0();
   input += synapse0x24ad630();
   input += synapse0x24ad670();
   input += synapse0x24ad6b0();
   input += synapse0x24ad6f0();
   input += synapse0x24ad730();
   input += synapse0x24ad770();
   return input;
}

double NNfunction-gg::neuron0x24acde0() {
   double input = input0x24acde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24ad7b0() {
   double input = 0.493522;
   input += synapse0x24adaf0();
   input += synapse0x24adb30();
   input += synapse0x24adb70();
   input += synapse0x24adbb0();
   input += synapse0x24adbf0();
   input += synapse0x24adc30();
   input += synapse0x24adc70();
   input += synapse0x24adcb0();
   input += synapse0x24adcf0();
   input += synapse0x24add30();
   input += synapse0x24add70();
   input += synapse0x24addb0();
   input += synapse0x24addf0();
   input += synapse0x24ade30();
   input += synapse0x24ade70();
   input += synapse0x24adeb0();
   input += synapse0x24ad940();
   input += synapse0x24ad980();
   input += synapse0x24ae000();
   input += synapse0x24ae040();
   input += synapse0x24ae080();
   input += synapse0x24ae0c0();
   input += synapse0x24ae100();
   input += synapse0x24ae140();
   return input;
}

double NNfunction-gg::neuron0x24ad7b0() {
   double input = input0x24ad7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24ae180() {
   double input = -1.49701;
   input += synapse0x24ae4c0();
   input += synapse0x24ae500();
   input += synapse0x24ae540();
   input += synapse0x24ae580();
   input += synapse0x24ae5c0();
   input += synapse0x24ae600();
   input += synapse0x24ae640();
   input += synapse0x24ae680();
   input += synapse0x24ae6c0();
   input += synapse0x24ae700();
   input += synapse0x24ae740();
   input += synapse0x24ae780();
   input += synapse0x24ae7c0();
   input += synapse0x24ae800();
   input += synapse0x24ae840();
   input += synapse0x24ae880();
   input += synapse0x24ae310();
   input += synapse0x24ae350();
   input += synapse0x24ae9d0();
   input += synapse0x24aea10();
   input += synapse0x24aea50();
   input += synapse0x24aea90();
   input += synapse0x24aead0();
   input += synapse0x24aeb10();
   return input;
}

double NNfunction-gg::neuron0x24ae180() {
   double input = input0x24ae180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24aeb50() {
   double input = 0.0291144;
   input += synapse0x24975c0();
   input += synapse0x2497600();
   input += synapse0x2497640();
   input += synapse0x2497680();
   input += synapse0x24976c0();
   input += synapse0x2497700();
   input += synapse0x2497740();
   input += synapse0x2497780();
   input += synapse0x24af2a0();
   input += synapse0x24af2e0();
   input += synapse0x24af320();
   input += synapse0x24af360();
   input += synapse0x24af3a0();
   input += synapse0x24af3e0();
   input += synapse0x24af420();
   input += synapse0x24af460();
   input += synapse0x24aece0();
   input += synapse0x24aed20();
   input += synapse0x24af5b0();
   input += synapse0x24af5f0();
   input += synapse0x24af630();
   input += synapse0x24af670();
   input += synapse0x24af6b0();
   input += synapse0x24af6f0();
   return input;
}

double NNfunction-gg::neuron0x24aeb50() {
   double input = input0x24aeb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24af730() {
   double input = 1.04239;
   input += synapse0x24afa70();
   input += synapse0x24afab0();
   input += synapse0x24afaf0();
   input += synapse0x24afb30();
   input += synapse0x24afb70();
   input += synapse0x24afbb0();
   input += synapse0x24afbf0();
   input += synapse0x24afc30();
   input += synapse0x24afc70();
   input += synapse0x24afcb0();
   input += synapse0x24afcf0();
   input += synapse0x24afd30();
   input += synapse0x24afd70();
   input += synapse0x24afdb0();
   input += synapse0x24afdf0();
   input += synapse0x24afe30();
   input += synapse0x24af8c0();
   input += synapse0x24af900();
   input += synapse0x24aff80();
   input += synapse0x24affc0();
   input += synapse0x24b0000();
   input += synapse0x24b0040();
   input += synapse0x24b0080();
   input += synapse0x24b00c0();
   return input;
}

double NNfunction-gg::neuron0x24af730() {
   double input = input0x24af730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24b0100() {
   double input = -0.0233729;
   input += synapse0x24b0440();
   input += synapse0x24b0480();
   input += synapse0x24b04c0();
   input += synapse0x24b0500();
   input += synapse0x24b0540();
   input += synapse0x24b0580();
   input += synapse0x24b05c0();
   input += synapse0x24b0600();
   input += synapse0x24b0640();
   input += synapse0x24b0680();
   input += synapse0x24b06c0();
   input += synapse0x24b0700();
   input += synapse0x24b0740();
   input += synapse0x24b0780();
   input += synapse0x24b07c0();
   input += synapse0x24b0800();
   input += synapse0x24b0290();
   input += synapse0x24b02d0();
   input += synapse0x24a0e00();
   input += synapse0x24a0e40();
   input += synapse0x24a0e80();
   input += synapse0x24a0ec0();
   input += synapse0x24a0f00();
   input += synapse0x24a0f40();
   return input;
}

double NNfunction-gg::neuron0x24b0100() {
   double input = input0x24b0100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a0f80() {
   double input = -0.777975;
   input += synapse0x24a12c0();
   input += synapse0x24a1300();
   input += synapse0x24a1340();
   input += synapse0x24a1380();
   input += synapse0x24a13c0();
   input += synapse0x24a1400();
   input += synapse0x24a1440();
   input += synapse0x24a1480();
   input += synapse0x24a14c0();
   input += synapse0x24a1500();
   input += synapse0x24a1540();
   input += synapse0x24a1580();
   input += synapse0x24a15c0();
   input += synapse0x24a1600();
   input += synapse0x24a1640();
   input += synapse0x24a1680();
   input += synapse0x24a1110();
   input += synapse0x24a1150();
   input += synapse0x24a17d0();
   input += synapse0x24a1810();
   input += synapse0x24a1850();
   input += synapse0x24a1890();
   input += synapse0x24a18d0();
   input += synapse0x24a1910();
   return input;
}

double NNfunction-gg::neuron0x24a0f80() {
   double input = input0x24a0f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a1950() {
   double input = -0.789617;
   input += synapse0x24a1c90();
   input += synapse0x24a1cd0();
   input += synapse0x24a1d10();
   input += synapse0x24a1d50();
   input += synapse0x24a1d90();
   input += synapse0x24a1dd0();
   input += synapse0x24a1e10();
   input += synapse0x24a1e50();
   input += synapse0x24a1e90();
   input += synapse0x24a1ed0();
   input += synapse0x24a1f10();
   input += synapse0x24a1f50();
   input += synapse0x24a1f90();
   input += synapse0x24a1fd0();
   input += synapse0x24a2010();
   input += synapse0x24a2050();
   input += synapse0x24a1ae0();
   input += synapse0x24a1b20();
   input += synapse0x24a21a0();
   input += synapse0x24a21e0();
   input += synapse0x24a2220();
   input += synapse0x24a2260();
   input += synapse0x24a22a0();
   input += synapse0x24a22e0();
   return input;
}

double NNfunction-gg::neuron0x24a1950() {
   double input = input0x24a1950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24a2320() {
   double input = -0.049452;
   input += synapse0x24a2660();
   input += synapse0x24a26a0();
   input += synapse0x24a26e0();
   input += synapse0x24a2720();
   input += synapse0x24a2760();
   input += synapse0x24a27a0();
   input += synapse0x24a27e0();
   input += synapse0x24a2820();
   input += synapse0x24a2860();
   input += synapse0x24a28a0();
   input += synapse0x24a28e0();
   input += synapse0x24a2920();
   input += synapse0x24a2960();
   input += synapse0x24a29a0();
   input += synapse0x24a29e0();
   input += synapse0x24a2a20();
   input += synapse0x24a24b0();
   input += synapse0x24a24f0();
   input += synapse0x24a2b70();
   input += synapse0x24a2bb0();
   input += synapse0x24a2bf0();
   input += synapse0x24a2c30();
   input += synapse0x24a2c70();
   input += synapse0x24a2cb0();
   return input;
}

double NNfunction-gg::neuron0x24a2320() {
   double input = input0x24a2320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24b4960() {
   double input = -0.835822;
   input += synapse0x24b4b80();
   input += synapse0x24b4bc0();
   input += synapse0x24b4c00();
   input += synapse0x24b4c40();
   input += synapse0x24b4c80();
   input += synapse0x24b4cc0();
   input += synapse0x24b4d00();
   input += synapse0x24b4d40();
   input += synapse0x24b4d80();
   input += synapse0x24b4dc0();
   input += synapse0x24b4e00();
   input += synapse0x24b4e40();
   input += synapse0x24b4e80();
   input += synapse0x24b4ec0();
   input += synapse0x24b4f00();
   input += synapse0x24b4f40();
   input += synapse0x24a2cf0();
   input += synapse0x24a2d30();
   input += synapse0x24b5090();
   input += synapse0x24b50d0();
   input += synapse0x24b5110();
   input += synapse0x24b5150();
   input += synapse0x24b5190();
   input += synapse0x24b51d0();
   return input;
}

double NNfunction-gg::neuron0x24b4960() {
   double input = input0x24b4960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24b5210() {
   double input = -0.7313;
   input += synapse0x24b5550();
   input += synapse0x24b5590();
   input += synapse0x24b55d0();
   input += synapse0x24b5610();
   input += synapse0x24b5650();
   input += synapse0x24b5690();
   input += synapse0x24b56d0();
   input += synapse0x24b5710();
   input += synapse0x24b5750();
   input += synapse0x24b5790();
   input += synapse0x24b57d0();
   input += synapse0x24b5810();
   input += synapse0x24b5850();
   input += synapse0x24b5890();
   input += synapse0x24b58d0();
   input += synapse0x24b5910();
   input += synapse0x24b53a0();
   input += synapse0x24b53e0();
   input += synapse0x24b5a60();
   input += synapse0x24b5aa0();
   input += synapse0x24b5ae0();
   input += synapse0x24b5b20();
   input += synapse0x24b5b60();
   input += synapse0x24b5ba0();
   return input;
}

double NNfunction-gg::neuron0x24b5210() {
   double input = input0x24b5210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24b5be0() {
   double input = 0.0473574;
   input += synapse0x24b5f20();
   input += synapse0x24b5f60();
   input += synapse0x24b5fa0();
   input += synapse0x24b5fe0();
   input += synapse0x24b6020();
   input += synapse0x24b6060();
   input += synapse0x24b60a0();
   input += synapse0x24b60e0();
   input += synapse0x24b6120();
   input += synapse0x24b6160();
   input += synapse0x24b61a0();
   input += synapse0x24b61e0();
   input += synapse0x24b6220();
   input += synapse0x24b6260();
   input += synapse0x24b62a0();
   input += synapse0x24b62e0();
   input += synapse0x24b5d70();
   input += synapse0x24b5db0();
   input += synapse0x24b6430();
   input += synapse0x24b6470();
   input += synapse0x24b64b0();
   input += synapse0x24b64f0();
   input += synapse0x24b6530();
   input += synapse0x24b6570();
   return input;
}

double NNfunction-gg::neuron0x24b5be0() {
   double input = input0x24b5be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24b65b0() {
   double input = -0.0916766;
   input += synapse0x24b68f0();
   input += synapse0x24b6930();
   input += synapse0x24b6970();
   input += synapse0x24b69b0();
   input += synapse0x24b69f0();
   input += synapse0x24b6a30();
   input += synapse0x24b6a70();
   input += synapse0x24b6ab0();
   input += synapse0x24b6af0();
   input += synapse0x24b6b30();
   input += synapse0x24b6b70();
   input += synapse0x24b6bb0();
   input += synapse0x24b6bf0();
   input += synapse0x24b6c30();
   input += synapse0x24b6c70();
   input += synapse0x24b6cb0();
   input += synapse0x24b6740();
   input += synapse0x24b6780();
   input += synapse0x24b6e00();
   input += synapse0x24b6e40();
   input += synapse0x24b6e80();
   input += synapse0x24b6ec0();
   input += synapse0x24b6f00();
   input += synapse0x24b6f40();
   return input;
}

double NNfunction-gg::neuron0x24b65b0() {
   double input = input0x24b65b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24bd7b0() {
   double input = 0.237113;
   input += synapse0x224d330();
   input += synapse0x224d370();
   input += synapse0x24949f0();
   input += synapse0x2494a30();
   input += synapse0x24953c0();
   input += synapse0x2495400();
   input += synapse0x2496190();
   input += synapse0x24961d0();
   input += synapse0x2496b60();
   input += synapse0x2496ba0();
   input += synapse0x2497530();
   input += synapse0x2497570();
   input += synapse0x2498010();
   input += synapse0x2498050();
   input += synapse0x24989e0();
   input += synapse0x2498a20();
   input += synapse0x2495ac0();
   input += synapse0x2495b00();
   input += synapse0x249a590();
   input += synapse0x249a5d0();
   input += synapse0x249af60();
   input += synapse0x249afa0();
   input += synapse0x249b930();
   input += synapse0x249b970();
   input += synapse0x249c300();
   input += synapse0x249c340();
   input += synapse0x24904a0();
   input += synapse0x24904e0();
   input += synapse0x249e3f0();
   input += synapse0x249e430();
   input += synapse0x249edc0();
   input += synapse0x249ee00();
   input += synapse0x249f790();
   input += synapse0x249f7d0();
   input += synapse0x24a0160();
   input += synapse0x24a01a0();
   input += synapse0x24a0b30();
   input += synapse0x24a0b70();
   input += synapse0x2499680();
   input += synapse0x24996c0();
   input += synapse0x24a2f30();
   input += synapse0x24a2f70();
   input += synapse0x24a38c0();
   input += synapse0x24a3900();
   input += synapse0x24a4290();
   input += synapse0x24a42d0();
   input += synapse0x24a4c60();
   input += synapse0x24a4ca0();
   input += synapse0x24a5630();
   input += synapse0x24a5670();
   return input;
}

double NNfunction-gg::neuron0x24bd7b0() {
   double input = input0x24bd7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24bdb50() {
   double input = 0.839509;
   input += synapse0x24a7d70();
   input += synapse0x24a7db0();
   input += synapse0x249d330();
   input += synapse0x249d370();
   input += synapse0x24aa950();
   input += synapse0x24aa990();
   input += synapse0x24ab320();
   input += synapse0x24ab360();
   input += synapse0x24abcf0();
   input += synapse0x24abd30();
   input += synapse0x24ac6c0();
   input += synapse0x24ac700();
   input += synapse0x24ad090();
   input += synapse0x24ad0d0();
   input += synapse0x24ada60();
   input += synapse0x24adaa0();
   input += synapse0x24ae430();
   input += synapse0x24ae470();
   input += synapse0x24aee00();
   input += synapse0x24aee40();
   input += synapse0x24af9e0();
   input += synapse0x24afa20();
   input += synapse0x24b03b0();
   input += synapse0x24b03f0();
   input += synapse0x24a1230();
   input += synapse0x24a1270();
   input += synapse0x24a1c00();
   input += synapse0x24a1c40();
   input += synapse0x24a25d0();
   input += synapse0x24a2610();
   input += synapse0x24b4af0();
   input += synapse0x24b4b30();
   input += synapse0x24b54c0();
   input += synapse0x24b5500();
   input += synapse0x24b5e90();
   input += synapse0x24b5ed0();
   input += synapse0x24b6860();
   input += synapse0x24b68a0();
   input += synapse0x2492750();
   input += synapse0x2492790();
   input += synapse0x24a6000();
   input += synapse0x24a6040();
   input += synapse0x24b6f80();
   input += synapse0x24b6fc0();
   input += synapse0x24b7000();
   input += synapse0x24b7040();
   input += synapse0x24bdef0();
   input += synapse0x24bdf30();
   input += synapse0x24bdf70();
   input += synapse0x24bdfb0();
   return input;
}

double NNfunction-gg::neuron0x24bdb50() {
   double input = input0x24bdb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24bdff0() {
   double input = -0.266141;
   input += synapse0x24be330();
   input += synapse0x24be370();
   input += synapse0x24be3b0();
   input += synapse0x24be3f0();
   input += synapse0x24be430();
   input += synapse0x24be470();
   input += synapse0x24be4b0();
   input += synapse0x24be4f0();
   input += synapse0x24be530();
   input += synapse0x24be570();
   input += synapse0x24be5b0();
   input += synapse0x24be5f0();
   input += synapse0x24be630();
   input += synapse0x24be670();
   input += synapse0x24be6b0();
   input += synapse0x24be6f0();
   input += synapse0x24be180();
   input += synapse0x24be1c0();
   input += synapse0x24be840();
   input += synapse0x24be880();
   input += synapse0x24be8c0();
   input += synapse0x24be900();
   input += synapse0x24be940();
   input += synapse0x24be980();
   input += synapse0x24be9c0();
   input += synapse0x24bea00();
   input += synapse0x24bea40();
   input += synapse0x24bea80();
   input += synapse0x24beac0();
   input += synapse0x24beb00();
   input += synapse0x24beb40();
   input += synapse0x24beb80();
   input += synapse0x24be730();
   input += synapse0x24be770();
   input += synapse0x24be7b0();
   input += synapse0x24be7f0();
   input += synapse0x24bedd0();
   input += synapse0x24bee10();
   input += synapse0x24bee50();
   input += synapse0x24bee90();
   input += synapse0x24beed0();
   input += synapse0x24bef10();
   input += synapse0x24bef50();
   input += synapse0x24bef90();
   input += synapse0x24befd0();
   input += synapse0x24bf010();
   input += synapse0x24bf050();
   input += synapse0x24bf090();
   input += synapse0x24bf0d0();
   input += synapse0x24bf110();
   return input;
}

double NNfunction-gg::neuron0x24bdff0() {
   double input = input0x24bdff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24bf150() {
   double input = -2.19784;
   input += synapse0x24bf490();
   input += synapse0x24bf4d0();
   input += synapse0x24bf510();
   input += synapse0x24bf550();
   input += synapse0x24bf590();
   input += synapse0x24bf5d0();
   input += synapse0x24bf610();
   input += synapse0x24bf650();
   input += synapse0x24bf690();
   input += synapse0x24bf6d0();
   input += synapse0x24bf710();
   input += synapse0x24bf750();
   input += synapse0x24bf790();
   input += synapse0x24bf7d0();
   input += synapse0x24bf810();
   input += synapse0x24bf850();
   input += synapse0x24bf2e0();
   input += synapse0x24bf320();
   input += synapse0x24bf9a0();
   input += synapse0x24bf9e0();
   input += synapse0x24bfa20();
   input += synapse0x24bfa60();
   input += synapse0x24bfaa0();
   input += synapse0x24bfae0();
   input += synapse0x24bfb20();
   input += synapse0x24bfb60();
   input += synapse0x24bfba0();
   input += synapse0x24bfbe0();
   input += synapse0x24bfc20();
   input += synapse0x24bfc60();
   input += synapse0x24bfca0();
   input += synapse0x24bfce0();
   input += synapse0x24bf890();
   input += synapse0x24bf8d0();
   input += synapse0x24bf910();
   input += synapse0x24bf950();
   input += synapse0x24bff30();
   input += synapse0x24bff70();
   input += synapse0x24bffb0();
   input += synapse0x24bfff0();
   input += synapse0x24c0030();
   input += synapse0x24c0070();
   input += synapse0x24c00b0();
   input += synapse0x24c00f0();
   input += synapse0x24c0130();
   input += synapse0x24c0170();
   input += synapse0x24c01b0();
   input += synapse0x24c01f0();
   input += synapse0x24c0230();
   input += synapse0x24c0270();
   return input;
}

double NNfunction-gg::neuron0x24bf150() {
   double input = input0x24bf150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24c02b0() {
   double input = -0.678173;
   input += synapse0x24c05f0();
   input += synapse0x24c0630();
   input += synapse0x24c0670();
   input += synapse0x24c06b0();
   input += synapse0x24c06f0();
   input += synapse0x24c0730();
   input += synapse0x24c0770();
   input += synapse0x24c07b0();
   input += synapse0x24c07f0();
   input += synapse0x24c0830();
   input += synapse0x24c0870();
   input += synapse0x24c08b0();
   input += synapse0x24c08f0();
   input += synapse0x24c0930();
   input += synapse0x24c0970();
   input += synapse0x24c09b0();
   input += synapse0x24c0440();
   input += synapse0x24c0480();
   input += synapse0x24c0b00();
   input += synapse0x24c0b40();
   input += synapse0x24c0b80();
   input += synapse0x24c0bc0();
   input += synapse0x24c0c00();
   input += synapse0x24c0c40();
   input += synapse0x24c0c80();
   input += synapse0x24c0cc0();
   input += synapse0x24c0d00();
   input += synapse0x24c0d40();
   input += synapse0x24c0d80();
   input += synapse0x24c0dc0();
   input += synapse0x24c0e00();
   input += synapse0x24c0e40();
   input += synapse0x24c09f0();
   input += synapse0x24c0a30();
   input += synapse0x24c0a70();
   input += synapse0x24c0ab0();
   input += synapse0x24c1090();
   input += synapse0x24c10d0();
   input += synapse0x24c1110();
   input += synapse0x24c1150();
   input += synapse0x24c1190();
   input += synapse0x24c11d0();
   input += synapse0x24c1210();
   input += synapse0x24c1250();
   input += synapse0x24c1290();
   input += synapse0x24c12d0();
   input += synapse0x24c1310();
   input += synapse0x24c1350();
   input += synapse0x24c1390();
   input += synapse0x24c13d0();
   return input;
}

double NNfunction-gg::neuron0x24c02b0() {
   double input = input0x24c02b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x24c1410() {
   double input = -1.15569;
   input += synapse0x24c1630();
   input += synapse0x24c1670();
   input += synapse0x24c16b0();
   input += synapse0x24c16f0();
   input += synapse0x24c1730();
   return input;
}

double NNfunction-gg::neuron0x24c1410() {
   double input = input0x24c1410();
   return (input * 1)+0;
}

double NNfunction-gg::synapse0x248d3c0() {
   return (neuron0x248d500()*0.123786);
}

double NNfunction-gg::synapse0x248d400() {
   return (neuron0x248d840()*-0.26109);
}

double NNfunction-gg::synapse0x24927e0() {
   return (neuron0x248db80()*0.00297148);
}

double NNfunction-gg::synapse0x2492820() {
   return (neuron0x248dec0()*-0.337264);
}

double NNfunction-gg::synapse0x2492860() {
   return (neuron0x248e200()*-0.0409059);
}

double NNfunction-gg::synapse0x24928a0() {
   return (neuron0x248e540()*0.138792);
}

double NNfunction-gg::synapse0x24928e0() {
   return (neuron0x248e880()*-0.302878);
}

double NNfunction-gg::synapse0x2492920() {
   return (neuron0x248ebc0()*0.241324);
}

double NNfunction-gg::synapse0x2492960() {
   return (neuron0x248ef00()*0.217304);
}

double NNfunction-gg::synapse0x24929a0() {
   return (neuron0x248f240()*-0.0301039);
}

double NNfunction-gg::synapse0x24929e0() {
   return (neuron0x248f580()*0.00545308);
}

double NNfunction-gg::synapse0x2492a20() {
   return (neuron0x248f8c0()*0.00550762);
}

double NNfunction-gg::synapse0x2492a60() {
   return (neuron0x248fc00()*-0.225301);
}

double NNfunction-gg::synapse0x2492aa0() {
   return (neuron0x248ff40()*-0.37232);
}

double NNfunction-gg::synapse0x2492ae0() {
   return (neuron0x2490280()*0.160493);
}

double NNfunction-gg::synapse0x2492b20() {
   return (neuron0x24905c0()*-0.501839);
}

double NNfunction-gg::synapse0x248d330() {
   return (neuron0x2490900()*-0.23049);
}

double NNfunction-gg::synapse0x248d370() {
   return (neuron0x2490e60()*-0.015098);
}

double NNfunction-gg::synapse0x223f020() {
   return (neuron0x2491080()*0.0361272);
}

double NNfunction-gg::synapse0x223f060() {
   return (neuron0x24913c0()*0.113913);
}

double NNfunction-gg::synapse0x2492d80() {
   return (neuron0x2491700()*0.781292);
}

double NNfunction-gg::synapse0x2492dc0() {
   return (neuron0x2491a40()*0.708322);
}

double NNfunction-gg::synapse0x2492e00() {
   return (neuron0x2491d80()*0.387576);
}

double NNfunction-gg::synapse0x2492e40() {
   return (neuron0x24920c0()*-0.365777);
}

double NNfunction-gg::synapse0x24931c0() {
   return (neuron0x248d500()*0.00814363);
}

double NNfunction-gg::synapse0x2493200() {
   return (neuron0x248d840()*0.0163052);
}

double NNfunction-gg::synapse0x2493240() {
   return (neuron0x248db80()*-0.0921432);
}

double NNfunction-gg::synapse0x2493280() {
   return (neuron0x248dec0()*0.393138);
}

double NNfunction-gg::synapse0x24932c0() {
   return (neuron0x248e200()*-0.118476);
}

double NNfunction-gg::synapse0x2493300() {
   return (neuron0x248e540()*-0.0449822);
}

double NNfunction-gg::synapse0x2493340() {
   return (neuron0x248e880()*-0.0480674);
}

double NNfunction-gg::synapse0x2493380() {
   return (neuron0x248ebc0()*-0.00780431);
}

double NNfunction-gg::synapse0x24933c0() {
   return (neuron0x248ef00()*-0.0963425);
}

double NNfunction-gg::synapse0x2492c70() {
   return (neuron0x248f240()*-0.163638);
}

double NNfunction-gg::synapse0x2492cb0() {
   return (neuron0x248f580()*0.088927);
}

double NNfunction-gg::synapse0x2492cf0() {
   return (neuron0x248f8c0()*-0.194115);
}

double NNfunction-gg::synapse0x2492d30() {
   return (neuron0x248fc00()*-0.340578);
}

double NNfunction-gg::synapse0x2493610() {
   return (neuron0x248ff40()*-0.109557);
}

double NNfunction-gg::synapse0x2493650() {
   return (neuron0x2490280()*-0.664571);
}

double NNfunction-gg::synapse0x2493690() {
   return (neuron0x24905c0()*-0.27924);
}

double NNfunction-gg::synapse0x2493010() {
   return (neuron0x2490900()*-0.0628024);
}

double NNfunction-gg::synapse0x2493050() {
   return (neuron0x2490e60()*-0.719958);
}

double NNfunction-gg::synapse0x24937e0() {
   return (neuron0x2491080()*0.228234);
}

double NNfunction-gg::synapse0x2493820() {
   return (neuron0x24913c0()*-0.436951);
}

double NNfunction-gg::synapse0x2493860() {
   return (neuron0x2491700()*0.19344);
}

double NNfunction-gg::synapse0x24938a0() {
   return (neuron0x2491a40()*0.0672739);
}

double NNfunction-gg::synapse0x24938e0() {
   return (neuron0x2491d80()*-0.0625243);
}

double NNfunction-gg::synapse0x2493920() {
   return (neuron0x24920c0()*-0.053667);
}

double NNfunction-gg::synapse0x2493ca0() {
   return (neuron0x248d500()*0.140391);
}

double NNfunction-gg::synapse0x2493ce0() {
   return (neuron0x248d840()*-0.655477);
}

double NNfunction-gg::synapse0x2493d20() {
   return (neuron0x248db80()*-0.160862);
}

double NNfunction-gg::synapse0x2493d60() {
   return (neuron0x248dec0()*1.30333);
}

double NNfunction-gg::synapse0x2493da0() {
   return (neuron0x248e200()*0.399419);
}

double NNfunction-gg::synapse0x2493de0() {
   return (neuron0x248e540()*-0.245356);
}

double NNfunction-gg::synapse0x2493e20() {
   return (neuron0x248e880()*-0.417603);
}

double NNfunction-gg::synapse0x2493e60() {
   return (neuron0x248ebc0()*0.405385);
}

double NNfunction-gg::synapse0x2493ea0() {
   return (neuron0x248ef00()*0.256984);
}

double NNfunction-gg::synapse0x2493ee0() {
   return (neuron0x248f240()*0.336772);
}

double NNfunction-gg::synapse0x2493f20() {
   return (neuron0x248f580()*-0.00976702);
}

double NNfunction-gg::synapse0x2493f60() {
   return (neuron0x248f8c0()*0.384803);
}

double NNfunction-gg::synapse0x2493fa0() {
   return (neuron0x248fc00()*0.0139625);
}

double NNfunction-gg::synapse0x2493fe0() {
   return (neuron0x248ff40()*-0.083664);
}

double NNfunction-gg::synapse0x2494020() {
   return (neuron0x2490280()*-0.63581);
}

double NNfunction-gg::synapse0x2494060() {
   return (neuron0x24905c0()*0.508989);
}

double NNfunction-gg::synapse0x2493af0() {
   return (neuron0x2490900()*-0.186059);
}

double NNfunction-gg::synapse0x2493b30() {
   return (neuron0x2490e60()*0.72185);
}

double NNfunction-gg::synapse0x223f380() {
   return (neuron0x2491080()*-0.899912);
}

double NNfunction-gg::synapse0x224cb20() {
   return (neuron0x24913c0()*-0.549436);
}

double NNfunction-gg::synapse0x224cb60() {
   return (neuron0x2491700()*-0.626959);
}

double NNfunction-gg::synapse0x247c590() {
   return (neuron0x2491a40()*-0.211578);
}

double NNfunction-gg::synapse0x247c5d0() {
   return (neuron0x2491d80()*0.323925);
}

double NNfunction-gg::synapse0x247c610() {
   return (neuron0x24920c0()*-0.0951824);
}

double NNfunction-gg::synapse0x224d3c0() {
   return (neuron0x248d500()*0.00362109);
}

double NNfunction-gg::synapse0x2493590() {
   return (neuron0x248d840()*0.0343418);
}

double NNfunction-gg::synapse0x24935d0() {
   return (neuron0x248db80()*0.059454);
}

double NNfunction-gg::synapse0x24941b0() {
   return (neuron0x248dec0()*-0.352313);
}

double NNfunction-gg::synapse0x24941f0() {
   return (neuron0x248e200()*0.00560276);
}

double NNfunction-gg::synapse0x2494230() {
   return (neuron0x248e540()*0.0371196);
}

double NNfunction-gg::synapse0x2494270() {
   return (neuron0x248e880()*0.0220094);
}

double NNfunction-gg::synapse0x24942b0() {
   return (neuron0x248ebc0()*0.0222848);
}

double NNfunction-gg::synapse0x24942f0() {
   return (neuron0x248ef00()*0.0436861);
}

double NNfunction-gg::synapse0x2494330() {
   return (neuron0x248f240()*0.0306569);
}

double NNfunction-gg::synapse0x2494370() {
   return (neuron0x248f580()*0.0223147);
}

double NNfunction-gg::synapse0x24943b0() {
   return (neuron0x248f8c0()*0.128961);
}

double NNfunction-gg::synapse0x24943f0() {
   return (neuron0x248fc00()*-0.581356);
}

double NNfunction-gg::synapse0x2494430() {
   return (neuron0x248ff40()*0.361814);
}

double NNfunction-gg::synapse0x2494470() {
   return (neuron0x2490280()*0.126609);
}

double NNfunction-gg::synapse0x24944b0() {
   return (neuron0x24905c0()*0.34285);
}

double NNfunction-gg::synapse0x248d440() {
   return (neuron0x2490900()*0.288745);
}

double NNfunction-gg::synapse0x248d480() {
   return (neuron0x2490e60()*0.153957);
}

double NNfunction-gg::synapse0x248d4c0() {
   return (neuron0x2491080()*0.365211);
}

double NNfunction-gg::synapse0x2494600() {
   return (neuron0x24913c0()*0.0489933);
}

double NNfunction-gg::synapse0x2494640() {
   return (neuron0x2491700()*-0.0110772);
}

double NNfunction-gg::synapse0x2494680() {
   return (neuron0x2491a40()*-0.000978174);
}

double NNfunction-gg::synapse0x24946c0() {
   return (neuron0x2491d80()*-0.00287134);
}

double NNfunction-gg::synapse0x2494700() {
   return (neuron0x24920c0()*0.016369);
}

double NNfunction-gg::synapse0x2494a80() {
   return (neuron0x248d500()*-0.000531222);
}

double NNfunction-gg::synapse0x2494ac0() {
   return (neuron0x248d840()*0.000926708);
}

double NNfunction-gg::synapse0x2494b00() {
   return (neuron0x248db80()*-0.00260594);
}

double NNfunction-gg::synapse0x2494b40() {
   return (neuron0x248dec0()*1.82493);
}

double NNfunction-gg::synapse0x2494b80() {
   return (neuron0x248e200()*-0.00900844);
}

double NNfunction-gg::synapse0x2494bc0() {
   return (neuron0x248e540()*0.000351665);
}

double NNfunction-gg::synapse0x2494c00() {
   return (neuron0x248e880()*-0.00332585);
}

double NNfunction-gg::synapse0x2494c40() {
   return (neuron0x248ebc0()*0.00145349);
}

double NNfunction-gg::synapse0x2494c80() {
   return (neuron0x248ef00()*-0.0071343);
}

double NNfunction-gg::synapse0x2494cc0() {
   return (neuron0x248f240()*0.00262521);
}

double NNfunction-gg::synapse0x2494d00() {
   return (neuron0x248f580()*0.000586692);
}

double NNfunction-gg::synapse0x2494d40() {
   return (neuron0x248f8c0()*-0.0323796);
}

double NNfunction-gg::synapse0x2494d80() {
   return (neuron0x248fc00()*0.0178958);
}

double NNfunction-gg::synapse0x2494dc0() {
   return (neuron0x248ff40()*-0.0512018);
}

double NNfunction-gg::synapse0x2494e00() {
   return (neuron0x2490280()*-0.0731692);
}

double NNfunction-gg::synapse0x2494e40() {
   return (neuron0x24905c0()*0.0179496);
}

double NNfunction-gg::synapse0x24948d0() {
   return (neuron0x2490900()*-0.0323343);
}

double NNfunction-gg::synapse0x2494910() {
   return (neuron0x2490e60()*0.0236983);
}

double NNfunction-gg::synapse0x2494f90() {
   return (neuron0x2491080()*0.0195293);
}

double NNfunction-gg::synapse0x2494fd0() {
   return (neuron0x24913c0()*-0.0212652);
}

double NNfunction-gg::synapse0x2495010() {
   return (neuron0x2491700()*0.0194018);
}

double NNfunction-gg::synapse0x2495050() {
   return (neuron0x2491a40()*-0.000890512);
}

double NNfunction-gg::synapse0x2495090() {
   return (neuron0x2491d80()*-0.00521536);
}

double NNfunction-gg::synapse0x24950d0() {
   return (neuron0x24920c0()*-0.00739218);
}

double NNfunction-gg::synapse0x2495450() {
   return (neuron0x248d500()*-0.00360321);
}

double NNfunction-gg::synapse0x2495490() {
   return (neuron0x248d840()*0.00659673);
}

double NNfunction-gg::synapse0x24954d0() {
   return (neuron0x248db80()*-0.00649446);
}

double NNfunction-gg::synapse0x2495510() {
   return (neuron0x248dec0()*-20.5398);
}

double NNfunction-gg::synapse0x2495550() {
   return (neuron0x248e200()*0.00915069);
}

double NNfunction-gg::synapse0x2495590() {
   return (neuron0x248e540()*0.010949);
}

double NNfunction-gg::synapse0x24955d0() {
   return (neuron0x248e880()*0.027449);
}

double NNfunction-gg::synapse0x2495610() {
   return (neuron0x248ebc0()*0.0109782);
}

double NNfunction-gg::synapse0x2495650() {
   return (neuron0x248ef00()*-0.00092208);
}

double NNfunction-gg::synapse0x224ce90() {
   return (neuron0x248f240()*-0.00207985);
}

double NNfunction-gg::synapse0x224ced0() {
   return (neuron0x248f580()*-0.00966996);
}

double NNfunction-gg::synapse0x224cf10() {
   return (neuron0x248f8c0()*-0.016667);
}

double NNfunction-gg::synapse0x224cf50() {
   return (neuron0x248fc00()*0.00640822);
}

double NNfunction-gg::synapse0x224cf90() {
   return (neuron0x248ff40()*-0.00202639);
}

double NNfunction-gg::synapse0x224cfd0() {
   return (neuron0x2490280()*0.00215384);
}

double NNfunction-gg::synapse0x224d010() {
   return (neuron0x24905c0()*-0.00612738);
}

double NNfunction-gg::synapse0x24952a0() {
   return (neuron0x2490900()*0.00382229);
}

double NNfunction-gg::synapse0x24952e0() {
   return (neuron0x2490e60()*-0.0100432);
}

double NNfunction-gg::synapse0x224d160() {
   return (neuron0x2491080()*-0.00197401);
}

double NNfunction-gg::synapse0x224d1a0() {
   return (neuron0x24913c0()*-0.0134393);
}

double NNfunction-gg::synapse0x224d1e0() {
   return (neuron0x2491700()*0.0102139);
}

double NNfunction-gg::synapse0x224d220() {
   return (neuron0x2491a40()*0.00534092);
}

double NNfunction-gg::synapse0x224d260() {
   return (neuron0x2491d80()*0.00880466);
}

double NNfunction-gg::synapse0x2495ea0() {
   return (neuron0x24920c0()*-0.0147736);
}

double NNfunction-gg::synapse0x2496220() {
   return (neuron0x248d500()*-0.116215);
}

double NNfunction-gg::synapse0x2496260() {
   return (neuron0x248d840()*0.443532);
}

double NNfunction-gg::synapse0x24962a0() {
   return (neuron0x248db80()*-0.589403);
}

double NNfunction-gg::synapse0x24962e0() {
   return (neuron0x248dec0()*-0.793248);
}

double NNfunction-gg::synapse0x2496320() {
   return (neuron0x248e200()*0.256441);
}

double NNfunction-gg::synapse0x2496360() {
   return (neuron0x248e540()*-0.115707);
}

double NNfunction-gg::synapse0x24963a0() {
   return (neuron0x248e880()*0.363796);
}

double NNfunction-gg::synapse0x24963e0() {
   return (neuron0x248ebc0()*-0.0577515);
}

double NNfunction-gg::synapse0x2496420() {
   return (neuron0x248ef00()*-0.310424);
}

double NNfunction-gg::synapse0x2496460() {
   return (neuron0x248f240()*-0.0444893);
}

double NNfunction-gg::synapse0x24964a0() {
   return (neuron0x248f580()*-0.370486);
}

double NNfunction-gg::synapse0x24964e0() {
   return (neuron0x248f8c0()*0.056541);
}

double NNfunction-gg::synapse0x2496520() {
   return (neuron0x248fc00()*-0.0203553);
}

double NNfunction-gg::synapse0x2496560() {
   return (neuron0x248ff40()*-0.56874);
}

double NNfunction-gg::synapse0x24965a0() {
   return (neuron0x2490280()*0.20347);
}

double NNfunction-gg::synapse0x24965e0() {
   return (neuron0x24905c0()*-0.346834);
}

double NNfunction-gg::synapse0x2496070() {
   return (neuron0x2490900()*0.456082);
}

double NNfunction-gg::synapse0x24960b0() {
   return (neuron0x2490e60()*0.117631);
}

double NNfunction-gg::synapse0x2496730() {
   return (neuron0x2491080()*0.386784);
}

double NNfunction-gg::synapse0x2496770() {
   return (neuron0x24913c0()*-0.0496646);
}

double NNfunction-gg::synapse0x24967b0() {
   return (neuron0x2491700()*0.0205378);
}

double NNfunction-gg::synapse0x24967f0() {
   return (neuron0x2491a40()*-0.410077);
}

double NNfunction-gg::synapse0x2496830() {
   return (neuron0x2491d80()*-0.18266);
}

double NNfunction-gg::synapse0x2496870() {
   return (neuron0x24920c0()*0.220023);
}

double NNfunction-gg::synapse0x2496bf0() {
   return (neuron0x248d500()*0.00317754);
}

double NNfunction-gg::synapse0x2496c30() {
   return (neuron0x248d840()*-0.00435458);
}

double NNfunction-gg::synapse0x2496c70() {
   return (neuron0x248db80()*0.00214599);
}

double NNfunction-gg::synapse0x2496cb0() {
   return (neuron0x248dec0()*-2.22954);
}

double NNfunction-gg::synapse0x2496cf0() {
   return (neuron0x248e200()*0.0131792);
}

double NNfunction-gg::synapse0x2496d30() {
   return (neuron0x248e540()*0.00201671);
}

double NNfunction-gg::synapse0x2496d70() {
   return (neuron0x248e880()*0.00213595);
}

double NNfunction-gg::synapse0x2496db0() {
   return (neuron0x248ebc0()*0.00401132);
}

double NNfunction-gg::synapse0x2496df0() {
   return (neuron0x248ef00()*0.00346838);
}

double NNfunction-gg::synapse0x2496e30() {
   return (neuron0x248f240()*0.00230438);
}

double NNfunction-gg::synapse0x2496e70() {
   return (neuron0x248f580()*-0.000473856);
}

double NNfunction-gg::synapse0x2496eb0() {
   return (neuron0x248f8c0()*-0.111182);
}

double NNfunction-gg::synapse0x2496ef0() {
   return (neuron0x248fc00()*0.0410716);
}

double NNfunction-gg::synapse0x2496f30() {
   return (neuron0x248ff40()*-0.0266197);
}

double NNfunction-gg::synapse0x2496f70() {
   return (neuron0x2490280()*-0.156351);
}

double NNfunction-gg::synapse0x2496fb0() {
   return (neuron0x24905c0()*0.011423);
}

double NNfunction-gg::synapse0x2496a40() {
   return (neuron0x2490900()*-0.0282889);
}

double NNfunction-gg::synapse0x2496a80() {
   return (neuron0x2490e60()*-0.0329642);
}

double NNfunction-gg::synapse0x2497100() {
   return (neuron0x2491080()*0.0177665);
}

double NNfunction-gg::synapse0x2497140() {
   return (neuron0x24913c0()*-0.01627);
}

double NNfunction-gg::synapse0x2497180() {
   return (neuron0x2491700()*-0.0104361);
}

double NNfunction-gg::synapse0x24971c0() {
   return (neuron0x2491a40()*0.00162632);
}

double NNfunction-gg::synapse0x2497200() {
   return (neuron0x2491d80()*0.00444007);
}

double NNfunction-gg::synapse0x2497240() {
   return (neuron0x24920c0()*-0.00357205);
}

double NNfunction-gg::synapse0x2490d50() {
   return (neuron0x248d500()*0.0114995);
}

double NNfunction-gg::synapse0x2490d90() {
   return (neuron0x248d840()*-0.000232034);
}

double NNfunction-gg::synapse0x2490dd0() {
   return (neuron0x248db80()*-0.0199747);
}

double NNfunction-gg::synapse0x2490e10() {
   return (neuron0x248dec0()*-1.00709);
}

double NNfunction-gg::synapse0x24977d0() {
   return (neuron0x248e200()*0.0218465);
}

double NNfunction-gg::synapse0x2497810() {
   return (neuron0x248e540()*0.00541897);
}

double NNfunction-gg::synapse0x2497850() {
   return (neuron0x248e880()*-0.0119963);
}

double NNfunction-gg::synapse0x2497890() {
   return (neuron0x248ebc0()*0.00704982);
}

double NNfunction-gg::synapse0x24978d0() {
   return (neuron0x248ef00()*0.00600769);
}

double NNfunction-gg::synapse0x2497910() {
   return (neuron0x248f240()*0.0178614);
}

double NNfunction-gg::synapse0x2497950() {
   return (neuron0x248f580()*-0.000205662);
}

double NNfunction-gg::synapse0x2497990() {
   return (neuron0x248f8c0()*0.0408745);
}

double NNfunction-gg::synapse0x24979d0() {
   return (neuron0x248fc00()*0.0166414);
}

double NNfunction-gg::synapse0x2497a10() {
   return (neuron0x248ff40()*0.00893172);
}

double NNfunction-gg::synapse0x2497a50() {
   return (neuron0x2490280()*0.112901);
}

double NNfunction-gg::synapse0x2497a90() {
   return (neuron0x24905c0()*0.0400379);
}

double NNfunction-gg::synapse0x2497410() {
   return (neuron0x2490900()*0.0119803);
}

double NNfunction-gg::synapse0x2497450() {
   return (neuron0x2490e60()*0.126511);
}

double NNfunction-gg::synapse0x2497be0() {
   return (neuron0x2491080()*0.0531114);
}

double NNfunction-gg::synapse0x2497c20() {
   return (neuron0x24913c0()*-0.00408036);
}

double NNfunction-gg::synapse0x2497c60() {
   return (neuron0x2491700()*-0.0299133);
}

double NNfunction-gg::synapse0x2497ca0() {
   return (neuron0x2491a40()*0.00421923);
}

double NNfunction-gg::synapse0x2497ce0() {
   return (neuron0x2491d80()*0.00316798);
}

double NNfunction-gg::synapse0x2497d20() {
   return (neuron0x24920c0()*0.0179677);
}

double NNfunction-gg::synapse0x24980a0() {
   return (neuron0x248d500()*-0.438918);
}

double NNfunction-gg::synapse0x24980e0() {
   return (neuron0x248d840()*-0.17689);
}

double NNfunction-gg::synapse0x2498120() {
   return (neuron0x248db80()*0.124027);
}

double NNfunction-gg::synapse0x2498160() {
   return (neuron0x248dec0()*1.11786);
}

double NNfunction-gg::synapse0x24981a0() {
   return (neuron0x248e200()*0.75265);
}

double NNfunction-gg::synapse0x24981e0() {
   return (neuron0x248e540()*-0.0444356);
}

double NNfunction-gg::synapse0x2498220() {
   return (neuron0x248e880()*0.247172);
}

double NNfunction-gg::synapse0x2498260() {
   return (neuron0x248ebc0()*0.00592657);
}

double NNfunction-gg::synapse0x24982a0() {
   return (neuron0x248ef00()*-0.663355);
}

double NNfunction-gg::synapse0x24982e0() {
   return (neuron0x248f240()*0.180158);
}

double NNfunction-gg::synapse0x2498320() {
   return (neuron0x248f580()*-0.495598);
}

double NNfunction-gg::synapse0x2498360() {
   return (neuron0x248f8c0()*0.394848);
}

double NNfunction-gg::synapse0x24983a0() {
   return (neuron0x248fc00()*0.21199);
}

double NNfunction-gg::synapse0x24983e0() {
   return (neuron0x248ff40()*-0.0134699);
}

double NNfunction-gg::synapse0x2498420() {
   return (neuron0x2490280()*0.126849);
}

double NNfunction-gg::synapse0x2498460() {
   return (neuron0x24905c0()*0.352313);
}

double NNfunction-gg::synapse0x2497ef0() {
   return (neuron0x2490900()*-0.863226);
}

double NNfunction-gg::synapse0x2497f30() {
   return (neuron0x2490e60()*0.431264);
}

double NNfunction-gg::synapse0x24985b0() {
   return (neuron0x2491080()*0.203243);
}

double NNfunction-gg::synapse0x24985f0() {
   return (neuron0x24913c0()*-0.345408);
}

double NNfunction-gg::synapse0x2498630() {
   return (neuron0x2491700()*-0.166656);
}

double NNfunction-gg::synapse0x2498670() {
   return (neuron0x2491a40()*-0.0818265);
}

double NNfunction-gg::synapse0x24986b0() {
   return (neuron0x2491d80()*0.102482);
}

double NNfunction-gg::synapse0x24986f0() {
   return (neuron0x24920c0()*0.35824);
}

double NNfunction-gg::synapse0x2498a70() {
   return (neuron0x248d500()*-0.0256177);
}

double NNfunction-gg::synapse0x2498ab0() {
   return (neuron0x248d840()*-0.0581326);
}

double NNfunction-gg::synapse0x2498af0() {
   return (neuron0x248db80()*0.232576);
}

double NNfunction-gg::synapse0x2498b30() {
   return (neuron0x248dec0()*-0.79251);
}

double NNfunction-gg::synapse0x2498b70() {
   return (neuron0x248e200()*0.512676);
}

double NNfunction-gg::synapse0x2498bb0() {
   return (neuron0x248e540()*-0.443963);
}

double NNfunction-gg::synapse0x2498bf0() {
   return (neuron0x248e880()*0.329402);
}

double NNfunction-gg::synapse0x2498c30() {
   return (neuron0x248ebc0()*-0.242204);
}

double NNfunction-gg::synapse0x2498c70() {
   return (neuron0x248ef00()*0.317485);
}

double NNfunction-gg::synapse0x2498cb0() {
   return (neuron0x248f240()*0.407789);
}

double NNfunction-gg::synapse0x2498cf0() {
   return (neuron0x248f580()*-0.449643);
}

double NNfunction-gg::synapse0x2498d30() {
   return (neuron0x248f8c0()*-0.216402);
}

double NNfunction-gg::synapse0x2498d70() {
   return (neuron0x248fc00()*-0.125967);
}

double NNfunction-gg::synapse0x2498db0() {
   return (neuron0x248ff40()*0.347923);
}

double NNfunction-gg::synapse0x2498df0() {
   return (neuron0x2490280()*0.307406);
}

double NNfunction-gg::synapse0x2498e30() {
   return (neuron0x24905c0()*0.112294);
}

double NNfunction-gg::synapse0x24988c0() {
   return (neuron0x2490900()*0.109125);
}

double NNfunction-gg::synapse0x2498900() {
   return (neuron0x2490e60()*0.239378);
}

double NNfunction-gg::synapse0x2495690() {
   return (neuron0x2491080()*-0.485992);
}

double NNfunction-gg::synapse0x24956d0() {
   return (neuron0x24913c0()*-0.315488);
}

double NNfunction-gg::synapse0x2495710() {
   return (neuron0x2491700()*-0.049513);
}

double NNfunction-gg::synapse0x2495750() {
   return (neuron0x2491a40()*0.320573);
}

double NNfunction-gg::synapse0x2495790() {
   return (neuron0x2491d80()*-0.125276);
}

double NNfunction-gg::synapse0x24957d0() {
   return (neuron0x24920c0()*-0.330146);
}

double NNfunction-gg::synapse0x2495b50() {
   return (neuron0x248d500()*-0.00335306);
}

double NNfunction-gg::synapse0x2495b90() {
   return (neuron0x248d840()*0.00879416);
}

double NNfunction-gg::synapse0x2495bd0() {
   return (neuron0x248db80()*-0.00444264);
}

double NNfunction-gg::synapse0x2495c10() {
   return (neuron0x248dec0()*-19.2624);
}

double NNfunction-gg::synapse0x2495c50() {
   return (neuron0x248e200()*0.0105337);
}

double NNfunction-gg::synapse0x2495c90() {
   return (neuron0x248e540()*0.0109382);
}

double NNfunction-gg::synapse0x2495cd0() {
   return (neuron0x248e880()*0.0298991);
}

double NNfunction-gg::synapse0x2495d10() {
   return (neuron0x248ebc0()*0.0118944);
}

double NNfunction-gg::synapse0x2495d50() {
   return (neuron0x248ef00()*-0.000537571);
}

double NNfunction-gg::synapse0x2495d90() {
   return (neuron0x248f240()*-0.00382291);
}

double NNfunction-gg::synapse0x2495dd0() {
   return (neuron0x248f580()*-0.00763797);
}

double NNfunction-gg::synapse0x2495e10() {
   return (neuron0x248f8c0()*-0.00704839);
}

double NNfunction-gg::synapse0x2495e50() {
   return (neuron0x248fc00()*-0.000191726);
}

double NNfunction-gg::synapse0x2499f90() {
   return (neuron0x248ff40()*-0.00801447);
}

double NNfunction-gg::synapse0x2499fd0() {
   return (neuron0x2490280()*0.00246822);
}

double NNfunction-gg::synapse0x249a010() {
   return (neuron0x24905c0()*-0.0100513);
}

double NNfunction-gg::synapse0x24959a0() {
   return (neuron0x2490900()*-0.00653208);
}

double NNfunction-gg::synapse0x24959e0() {
   return (neuron0x2490e60()*-0.00651106);
}

double NNfunction-gg::synapse0x249a160() {
   return (neuron0x2491080()*-0.00141012);
}

double NNfunction-gg::synapse0x249a1a0() {
   return (neuron0x24913c0()*-0.0125193);
}

double NNfunction-gg::synapse0x249a1e0() {
   return (neuron0x2491700()*0.0103176);
}

double NNfunction-gg::synapse0x249a220() {
   return (neuron0x2491a40()*0.00586228);
}

double NNfunction-gg::synapse0x249a260() {
   return (neuron0x2491d80()*0.00962287);
}

double NNfunction-gg::synapse0x249a2a0() {
   return (neuron0x24920c0()*-0.0100259);
}

double NNfunction-gg::synapse0x249a620() {
   return (neuron0x248d500()*-0.163066);
}

double NNfunction-gg::synapse0x249a660() {
   return (neuron0x248d840()*-0.0674633);
}

double NNfunction-gg::synapse0x249a6a0() {
   return (neuron0x248db80()*-0.224875);
}

double NNfunction-gg::synapse0x249a6e0() {
   return (neuron0x248dec0()*0.587343);
}

double NNfunction-gg::synapse0x249a720() {
   return (neuron0x248e200()*0.0304447);
}

double NNfunction-gg::synapse0x249a760() {
   return (neuron0x248e540()*-0.0529717);
}

double NNfunction-gg::synapse0x249a7a0() {
   return (neuron0x248e880()*0.0627736);
}

double NNfunction-gg::synapse0x249a7e0() {
   return (neuron0x248ebc0()*0.489767);
}

double NNfunction-gg::synapse0x249a820() {
   return (neuron0x248ef00()*-0.263437);
}

double NNfunction-gg::synapse0x249a860() {
   return (neuron0x248f240()*0.25299);
}

double NNfunction-gg::synapse0x249a8a0() {
   return (neuron0x248f580()*-0.102753);
}

double NNfunction-gg::synapse0x249a8e0() {
   return (neuron0x248f8c0()*-0.149247);
}

double NNfunction-gg::synapse0x249a920() {
   return (neuron0x248fc00()*0.249967);
}

double NNfunction-gg::synapse0x249a960() {
   return (neuron0x248ff40()*-0.290428);
}

double NNfunction-gg::synapse0x249a9a0() {
   return (neuron0x2490280()*0.608193);
}

double NNfunction-gg::synapse0x249a9e0() {
   return (neuron0x24905c0()*-0.36121);
}

double NNfunction-gg::synapse0x249a470() {
   return (neuron0x2490900()*-0.560197);
}

double NNfunction-gg::synapse0x249a4b0() {
   return (neuron0x2490e60()*-0.100677);
}

double NNfunction-gg::synapse0x249ab30() {
   return (neuron0x2491080()*-0.0224133);
}

double NNfunction-gg::synapse0x249ab70() {
   return (neuron0x24913c0()*-0.0454074);
}

double NNfunction-gg::synapse0x249abb0() {
   return (neuron0x2491700()*-0.475344);
}

double NNfunction-gg::synapse0x249abf0() {
   return (neuron0x2491a40()*0.258239);
}

double NNfunction-gg::synapse0x249ac30() {
   return (neuron0x2491d80()*0.322584);
}

double NNfunction-gg::synapse0x249ac70() {
   return (neuron0x24920c0()*-0.12003);
}

double NNfunction-gg::synapse0x249aff0() {
   return (neuron0x248d500()*-0.012226);
}

double NNfunction-gg::synapse0x249b030() {
   return (neuron0x248d840()*0.193883);
}

double NNfunction-gg::synapse0x249b070() {
   return (neuron0x248db80()*-0.0751749);
}

double NNfunction-gg::synapse0x249b0b0() {
   return (neuron0x248dec0()*-1.29753);
}

double NNfunction-gg::synapse0x249b0f0() {
   return (neuron0x248e200()*-0.3839);
}

double NNfunction-gg::synapse0x249b130() {
   return (neuron0x248e540()*-0.3299);
}

double NNfunction-gg::synapse0x249b170() {
   return (neuron0x248e880()*0.224391);
}

double NNfunction-gg::synapse0x249b1b0() {
   return (neuron0x248ebc0()*-0.0142151);
}

double NNfunction-gg::synapse0x249b1f0() {
   return (neuron0x248ef00()*0.0712622);
}

double NNfunction-gg::synapse0x249b230() {
   return (neuron0x248f240()*-0.0153823);
}

double NNfunction-gg::synapse0x249b270() {
   return (neuron0x248f580()*-0.548473);
}

double NNfunction-gg::synapse0x249b2b0() {
   return (neuron0x248f8c0()*-0.386252);
}

double NNfunction-gg::synapse0x249b2f0() {
   return (neuron0x248fc00()*-0.275994);
}

double NNfunction-gg::synapse0x249b330() {
   return (neuron0x248ff40()*-0.363164);
}

double NNfunction-gg::synapse0x249b370() {
   return (neuron0x2490280()*0.201936);
}

double NNfunction-gg::synapse0x249b3b0() {
   return (neuron0x24905c0()*-0.539477);
}

double NNfunction-gg::synapse0x249ae40() {
   return (neuron0x2490900()*-0.369108);
}

double NNfunction-gg::synapse0x249ae80() {
   return (neuron0x2490e60()*-0.287778);
}

double NNfunction-gg::synapse0x249b500() {
   return (neuron0x2491080()*-0.386376);
}

double NNfunction-gg::synapse0x249b540() {
   return (neuron0x24913c0()*-0.0771886);
}

double NNfunction-gg::synapse0x249b580() {
   return (neuron0x2491700()*0.727751);
}

double NNfunction-gg::synapse0x249b5c0() {
   return (neuron0x2491a40()*-0.353085);
}

double NNfunction-gg::synapse0x249b600() {
   return (neuron0x2491d80()*0.378235);
}

double NNfunction-gg::synapse0x249b640() {
   return (neuron0x24920c0()*-0.493828);
}

double NNfunction-gg::synapse0x249b9c0() {
   return (neuron0x248d500()*0.434873);
}

double NNfunction-gg::synapse0x249ba00() {
   return (neuron0x248d840()*0.612534);
}

double NNfunction-gg::synapse0x249ba40() {
   return (neuron0x248db80()*-0.0404432);
}

double NNfunction-gg::synapse0x249ba80() {
   return (neuron0x248dec0()*-0.282553);
}

double NNfunction-gg::synapse0x249bac0() {
   return (neuron0x248e200()*0.473423);
}

double NNfunction-gg::synapse0x249bb00() {
   return (neuron0x248e540()*0.185816);
}

double NNfunction-gg::synapse0x249bb40() {
   return (neuron0x248e880()*-0.0162672);
}

double NNfunction-gg::synapse0x249bb80() {
   return (neuron0x248ebc0()*0.165833);
}

double NNfunction-gg::synapse0x249bbc0() {
   return (neuron0x248ef00()*-0.242499);
}

double NNfunction-gg::synapse0x249bc00() {
   return (neuron0x248f240()*0.297366);
}

double NNfunction-gg::synapse0x249bc40() {
   return (neuron0x248f580()*0.115266);
}

double NNfunction-gg::synapse0x249bc80() {
   return (neuron0x248f8c0()*-0.0330791);
}

double NNfunction-gg::synapse0x249bcc0() {
   return (neuron0x248fc00()*0.283281);
}

double NNfunction-gg::synapse0x249bd00() {
   return (neuron0x248ff40()*-0.158562);
}

double NNfunction-gg::synapse0x249bd40() {
   return (neuron0x2490280()*-0.383518);
}

double NNfunction-gg::synapse0x249bd80() {
   return (neuron0x24905c0()*0.0890156);
}

double NNfunction-gg::synapse0x249b810() {
   return (neuron0x2490900()*-0.107309);
}

double NNfunction-gg::synapse0x249b850() {
   return (neuron0x2490e60()*0.371824);
}

double NNfunction-gg::synapse0x249bed0() {
   return (neuron0x2491080()*0.380502);
}

double NNfunction-gg::synapse0x249bf10() {
   return (neuron0x24913c0()*-0.269311);
}

double NNfunction-gg::synapse0x249bf50() {
   return (neuron0x2491700()*-0.790747);
}

double NNfunction-gg::synapse0x249bf90() {
   return (neuron0x2491a40()*-0.436758);
}

double NNfunction-gg::synapse0x249bfd0() {
   return (neuron0x2491d80()*-0.0160309);
}

double NNfunction-gg::synapse0x249c010() {
   return (neuron0x24920c0()*-0.0236703);
}

double NNfunction-gg::synapse0x249c390() {
   return (neuron0x248d500()*-0.462727);
}

double NNfunction-gg::synapse0x248d720() {
   return (neuron0x248d840()*-0.0972286);
}

double NNfunction-gg::synapse0x248d760() {
   return (neuron0x248db80()*0.293867);
}

double NNfunction-gg::synapse0x248da60() {
   return (neuron0x248dec0()*0.981088);
}

double NNfunction-gg::synapse0x248daa0() {
   return (neuron0x248e200()*-0.364503);
}

double NNfunction-gg::synapse0x248dda0() {
   return (neuron0x248e540()*-0.166554);
}

double NNfunction-gg::synapse0x248dde0() {
   return (neuron0x248e880()*-0.00171444);
}

double NNfunction-gg::synapse0x248e0e0() {
   return (neuron0x248ebc0()*-0.40682);
}

double NNfunction-gg::synapse0x248e120() {
   return (neuron0x248ef00()*0.447121);
}

double NNfunction-gg::synapse0x248e420() {
   return (neuron0x248f240()*-0.301549);
}

double NNfunction-gg::synapse0x248e460() {
   return (neuron0x248f580()*-0.0873755);
}

double NNfunction-gg::synapse0x248e760() {
   return (neuron0x248f8c0()*-0.432815);
}

double NNfunction-gg::synapse0x248e7a0() {
   return (neuron0x248fc00()*0.065876);
}

double NNfunction-gg::synapse0x248eaa0() {
   return (neuron0x248ff40()*0.339849);
}

double NNfunction-gg::synapse0x248eae0() {
   return (neuron0x2490280()*0.59577);
}

double NNfunction-gg::synapse0x248ede0() {
   return (neuron0x24905c0()*-0.116644);
}

double NNfunction-gg::synapse0x248ee20() {
   return (neuron0x2490900()*-0.449941);
}

double NNfunction-gg::synapse0x248f120() {
   return (neuron0x2490e60()*-0.0191779);
}

double NNfunction-gg::synapse0x248f160() {
   return (neuron0x2491080()*0.348566);
}

double NNfunction-gg::synapse0x248f460() {
   return (neuron0x24913c0()*-0.186773);
}

double NNfunction-gg::synapse0x248f4a0() {
   return (neuron0x2491700()*0.131749);
}

double NNfunction-gg::synapse0x248f7a0() {
   return (neuron0x2491a40()*0.389965);
}

double NNfunction-gg::synapse0x248f7e0() {
   return (neuron0x2491d80()*-0.197797);
}

double NNfunction-gg::synapse0x248fae0() {
   return (neuron0x24920c0()*0.106506);
}

double NNfunction-gg::synapse0x248fb20() {
   return (neuron0x248d500()*0.115543);
}

double NNfunction-gg::synapse0x24907e0() {
   return (neuron0x248d840()*-0.349655);
}

double NNfunction-gg::synapse0x2490820() {
   return (neuron0x248db80()*-0.147646);
}

double NNfunction-gg::synapse0x249c1e0() {
   return (neuron0x248dec0()*-0.0604781);
}

double NNfunction-gg::synapse0x249c220() {
   return (neuron0x248e200()*-0.0700052);
}

double NNfunction-gg::synapse0x2490b20() {
   return (neuron0x248e540()*0.162976);
}

double NNfunction-gg::synapse0x2490b60() {
   return (neuron0x248e880()*-0.26609);
}

double NNfunction-gg::synapse0x1495710() {
   return (neuron0x248ebc0()*0.118423);
}

double NNfunction-gg::synapse0x1495750() {
   return (neuron0x248ef00()*0.107108);
}

double NNfunction-gg::synapse0x24912a0() {
   return (neuron0x248f240()*0.0624688);
}

double NNfunction-gg::synapse0x24912e0() {
   return (neuron0x248f580()*0.0846706);
}

double NNfunction-gg::synapse0x24915e0() {
   return (neuron0x248f8c0()*0.0970721);
}

double NNfunction-gg::synapse0x2491620() {
   return (neuron0x248fc00()*0.331401);
}

double NNfunction-gg::synapse0x2491920() {
   return (neuron0x248ff40()*-0.134479);
}

double NNfunction-gg::synapse0x2491960() {
   return (neuron0x2490280()*-0.305057);
}

double NNfunction-gg::synapse0x2491c60() {
   return (neuron0x24905c0()*-0.157895);
}

double NNfunction-gg::synapse0x2491ca0() {
   return (neuron0x2490900()*0.2135);
}

double NNfunction-gg::synapse0x2491fa0() {
   return (neuron0x2490e60()*0.224958);
}

double NNfunction-gg::synapse0x2491fe0() {
   return (neuron0x2491080()*-0.0374562);
}

double NNfunction-gg::synapse0x24922e0() {
   return (neuron0x24913c0()*0.0868905);
}

double NNfunction-gg::synapse0x2492320() {
   return (neuron0x2491700()*-0.435754);
}

double NNfunction-gg::synapse0x248fe20() {
   return (neuron0x2491a40()*0.425724);
}

double NNfunction-gg::synapse0x248fe60() {
   return (neuron0x2491d80()*0.0461229);
}

double NNfunction-gg::synapse0x249e100() {
   return (neuron0x24920c0()*-0.0119443);
}

double NNfunction-gg::synapse0x249e480() {
   return (neuron0x248d500()*-0.220331);
}

double NNfunction-gg::synapse0x249e4c0() {
   return (neuron0x248d840()*-0.266703);
}

double NNfunction-gg::synapse0x249e500() {
   return (neuron0x248db80()*-0.314133);
}

double NNfunction-gg::synapse0x249e540() {
   return (neuron0x248dec0()*0.814761);
}

double NNfunction-gg::synapse0x249e580() {
   return (neuron0x248e200()*-0.251244);
}

double NNfunction-gg::synapse0x249e5c0() {
   return (neuron0x248e540()*0.111021);
}

double NNfunction-gg::synapse0x249e600() {
   return (neuron0x248e880()*-0.419522);
}

double NNfunction-gg::synapse0x249e640() {
   return (neuron0x248ebc0()*0.353035);
}

double NNfunction-gg::synapse0x249e680() {
   return (neuron0x248ef00()*-0.507873);
}

double NNfunction-gg::synapse0x249e6c0() {
   return (neuron0x248f240()*-0.443038);
}

double NNfunction-gg::synapse0x249e700() {
   return (neuron0x248f580()*0.0286029);
}

double NNfunction-gg::synapse0x249e740() {
   return (neuron0x248f8c0()*-0.288422);
}

double NNfunction-gg::synapse0x249e780() {
   return (neuron0x248fc00()*-0.022282);
}

double NNfunction-gg::synapse0x249e7c0() {
   return (neuron0x248ff40()*-0.253616);
}

double NNfunction-gg::synapse0x249e800() {
   return (neuron0x2490280()*-0.572482);
}

double NNfunction-gg::synapse0x249e840() {
   return (neuron0x24905c0()*-0.43684);
}

double NNfunction-gg::synapse0x249e2d0() {
   return (neuron0x2490900()*0.582876);
}

double NNfunction-gg::synapse0x249e310() {
   return (neuron0x2490e60()*-0.208185);
}

double NNfunction-gg::synapse0x249e990() {
   return (neuron0x2491080()*0.214231);
}

double NNfunction-gg::synapse0x249e9d0() {
   return (neuron0x24913c0()*-0.28391);
}

double NNfunction-gg::synapse0x249ea10() {
   return (neuron0x2491700()*-0.553321);
}

double NNfunction-gg::synapse0x249ea50() {
   return (neuron0x2491a40()*0.268529);
}

double NNfunction-gg::synapse0x249ea90() {
   return (neuron0x2491d80()*0.212637);
}

double NNfunction-gg::synapse0x249ead0() {
   return (neuron0x24920c0()*0.155819);
}

double NNfunction-gg::synapse0x249ee50() {
   return (neuron0x248d500()*-0.127942);
}

double NNfunction-gg::synapse0x249ee90() {
   return (neuron0x248d840()*0.23556);
}

double NNfunction-gg::synapse0x249eed0() {
   return (neuron0x248db80()*0.657189);
}

double NNfunction-gg::synapse0x249ef10() {
   return (neuron0x248dec0()*0.857806);
}

double NNfunction-gg::synapse0x249ef50() {
   return (neuron0x248e200()*-0.0382184);
}

double NNfunction-gg::synapse0x249ef90() {
   return (neuron0x248e540()*-0.572769);
}

double NNfunction-gg::synapse0x249efd0() {
   return (neuron0x248e880()*0.0583948);
}

double NNfunction-gg::synapse0x249f010() {
   return (neuron0x248ebc0()*-0.228002);
}

double NNfunction-gg::synapse0x249f050() {
   return (neuron0x248ef00()*-0.312007);
}

double NNfunction-gg::synapse0x249f090() {
   return (neuron0x248f240()*-0.188287);
}

double NNfunction-gg::synapse0x249f0d0() {
   return (neuron0x248f580()*-0.429474);
}

double NNfunction-gg::synapse0x249f110() {
   return (neuron0x248f8c0()*0.410916);
}

double NNfunction-gg::synapse0x249f150() {
   return (neuron0x248fc00()*0.156063);
}

double NNfunction-gg::synapse0x249f190() {
   return (neuron0x248ff40()*-0.736201);
}

double NNfunction-gg::synapse0x249f1d0() {
   return (neuron0x2490280()*-0.958861);
}

double NNfunction-gg::synapse0x249f210() {
   return (neuron0x24905c0()*-0.517258);
}

double NNfunction-gg::synapse0x249eca0() {
   return (neuron0x2490900()*0.588774);
}

double NNfunction-gg::synapse0x249ece0() {
   return (neuron0x2490e60()*-0.317812);
}

double NNfunction-gg::synapse0x249f360() {
   return (neuron0x2491080()*-0.772198);
}

double NNfunction-gg::synapse0x249f3a0() {
   return (neuron0x24913c0()*-0.211713);
}

double NNfunction-gg::synapse0x249f3e0() {
   return (neuron0x2491700()*-0.149866);
}

double NNfunction-gg::synapse0x249f420() {
   return (neuron0x2491a40()*-0.66277);
}

double NNfunction-gg::synapse0x249f460() {
   return (neuron0x2491d80()*0.21248);
}

double NNfunction-gg::synapse0x249f4a0() {
   return (neuron0x24920c0()*0.867);
}

double NNfunction-gg::synapse0x249f820() {
   return (neuron0x248d500()*0.353048);
}

double NNfunction-gg::synapse0x249f860() {
   return (neuron0x248d840()*0.0316663);
}

double NNfunction-gg::synapse0x249f8a0() {
   return (neuron0x248db80()*-0.203614);
}

double NNfunction-gg::synapse0x249f8e0() {
   return (neuron0x248dec0()*1.21803);
}

double NNfunction-gg::synapse0x249f920() {
   return (neuron0x248e200()*0.236104);
}

double NNfunction-gg::synapse0x249f960() {
   return (neuron0x248e540()*-0.0109771);
}

double NNfunction-gg::synapse0x249f9a0() {
   return (neuron0x248e880()*0.0125538);
}

double NNfunction-gg::synapse0x249f9e0() {
   return (neuron0x248ebc0()*0.222798);
}

double NNfunction-gg::synapse0x249fa20() {
   return (neuron0x248ef00()*-0.110115);
}

double NNfunction-gg::synapse0x249fa60() {
   return (neuron0x248f240()*0.118977);
}

double NNfunction-gg::synapse0x249faa0() {
   return (neuron0x248f580()*0.115799);
}

double NNfunction-gg::synapse0x249fae0() {
   return (neuron0x248f8c0()*0.772622);
}

double NNfunction-gg::synapse0x249fb20() {
   return (neuron0x248fc00()*0.318477);
}

double NNfunction-gg::synapse0x249fb60() {
   return (neuron0x248ff40()*0.0546711);
}

double NNfunction-gg::synapse0x249fba0() {
   return (neuron0x2490280()*-0.256392);
}

double NNfunction-gg::synapse0x249fbe0() {
   return (neuron0x24905c0()*0.0877627);
}

double NNfunction-gg::synapse0x249f670() {
   return (neuron0x2490900()*-0.451249);
}

double NNfunction-gg::synapse0x249f6b0() {
   return (neuron0x2490e60()*0.184873);
}

double NNfunction-gg::synapse0x249fd30() {
   return (neuron0x2491080()*0.450286);
}

double NNfunction-gg::synapse0x249fd70() {
   return (neuron0x24913c0()*0.287387);
}

double NNfunction-gg::synapse0x249fdb0() {
   return (neuron0x2491700()*-0.556758);
}

double NNfunction-gg::synapse0x249fdf0() {
   return (neuron0x2491a40()*-0.542155);
}

double NNfunction-gg::synapse0x249fe30() {
   return (neuron0x2491d80()*0.107278);
}

double NNfunction-gg::synapse0x249fe70() {
   return (neuron0x24920c0()*0.59796);
}

double NNfunction-gg::synapse0x24a01f0() {
   return (neuron0x248d500()*-0.258735);
}

double NNfunction-gg::synapse0x24a0230() {
   return (neuron0x248d840()*-0.516194);
}

double NNfunction-gg::synapse0x24a0270() {
   return (neuron0x248db80()*0.571434);
}

double NNfunction-gg::synapse0x24a02b0() {
   return (neuron0x248dec0()*-1.37023);
}

double NNfunction-gg::synapse0x24a02f0() {
   return (neuron0x248e200()*-0.781546);
}

double NNfunction-gg::synapse0x24a0330() {
   return (neuron0x248e540()*0.0991035);
}

double NNfunction-gg::synapse0x24a0370() {
   return (neuron0x248e880()*0.12537);
}

double NNfunction-gg::synapse0x24a03b0() {
   return (neuron0x248ebc0()*0.30219);
}

double NNfunction-gg::synapse0x24a03f0() {
   return (neuron0x248ef00()*0.112921);
}

double NNfunction-gg::synapse0x24a0430() {
   return (neuron0x248f240()*-0.336455);
}

double NNfunction-gg::synapse0x24a0470() {
   return (neuron0x248f580()*-0.0504907);
}

double NNfunction-gg::synapse0x24a04b0() {
   return (neuron0x248f8c0()*0.238738);
}

double NNfunction-gg::synapse0x24a04f0() {
   return (neuron0x248fc00()*0.328601);
}

double NNfunction-gg::synapse0x24a0530() {
   return (neuron0x248ff40()*0.201343);
}

double NNfunction-gg::synapse0x24a0570() {
   return (neuron0x2490280()*0.376606);
}

double NNfunction-gg::synapse0x24a05b0() {
   return (neuron0x24905c0()*0.442447);
}

double NNfunction-gg::synapse0x24a0040() {
   return (neuron0x2490900()*0.319951);
}

double NNfunction-gg::synapse0x24a0080() {
   return (neuron0x2490e60()*-0.556234);
}

double NNfunction-gg::synapse0x24a0700() {
   return (neuron0x2491080()*-0.531747);
}

double NNfunction-gg::synapse0x24a0740() {
   return (neuron0x24913c0()*0.183203);
}

double NNfunction-gg::synapse0x24a0780() {
   return (neuron0x2491700()*0.641607);
}

double NNfunction-gg::synapse0x24a07c0() {
   return (neuron0x2491a40()*-0.245963);
}

double NNfunction-gg::synapse0x24a0800() {
   return (neuron0x2491d80()*0.36585);
}

double NNfunction-gg::synapse0x24a0840() {
   return (neuron0x24920c0()*0.415743);
}

double NNfunction-gg::synapse0x24a0bc0() {
   return (neuron0x248d500()*0.0025141);
}

double NNfunction-gg::synapse0x24a0c00() {
   return (neuron0x248d840()*-5.93584e-05);
}

double NNfunction-gg::synapse0x24a0c40() {
   return (neuron0x248db80()*0.0033269);
}

double NNfunction-gg::synapse0x24a0c80() {
   return (neuron0x248dec0()*15.3074);
}

double NNfunction-gg::synapse0x24a0cc0() {
   return (neuron0x248e200()*0.000179174);
}

double NNfunction-gg::synapse0x24a0d00() {
   return (neuron0x248e540()*-0.00259211);
}

double NNfunction-gg::synapse0x24a0d40() {
   return (neuron0x248e880()*-0.00464038);
}

double NNfunction-gg::synapse0x24a0d80() {
   return (neuron0x248ebc0()*-0.00121736);
}

double NNfunction-gg::synapse0x24a0dc0() {
   return (neuron0x248ef00()*0.000592954);
}

double NNfunction-gg::synapse0x2498f80() {
   return (neuron0x248f240()*-0.00248596);
}

double NNfunction-gg::synapse0x2498fc0() {
   return (neuron0x248f580()*0.00461401);
}

double NNfunction-gg::synapse0x2499000() {
   return (neuron0x248f8c0()*0.015919);
}

double NNfunction-gg::synapse0x2499040() {
   return (neuron0x248fc00()*-0.00631984);
}

double NNfunction-gg::synapse0x2499080() {
   return (neuron0x248ff40()*-0.00753711);
}

double NNfunction-gg::synapse0x24990c0() {
   return (neuron0x2490280()*-0.000434778);
}

double NNfunction-gg::synapse0x2499100() {
   return (neuron0x24905c0()*-0.00126965);
}

double NNfunction-gg::synapse0x24a0a10() {
   return (neuron0x2490900()*-0.0107975);
}

double NNfunction-gg::synapse0x24a0a50() {
   return (neuron0x2490e60()*0.00601095);
}

double NNfunction-gg::synapse0x2499250() {
   return (neuron0x2491080()*0.00106029);
}

double NNfunction-gg::synapse0x2499290() {
   return (neuron0x24913c0()*0.00661393);
}

double NNfunction-gg::synapse0x24992d0() {
   return (neuron0x2491700()*-0.00659841);
}

double NNfunction-gg::synapse0x2499310() {
   return (neuron0x2491a40()*-0.000823198);
}

double NNfunction-gg::synapse0x2499350() {
   return (neuron0x2491d80()*-0.00216332);
}

double NNfunction-gg::synapse0x2499390() {
   return (neuron0x24920c0()*0.00469351);
}

double NNfunction-gg::synapse0x2499710() {
   return (neuron0x248d500()*0.0636482);
}

double NNfunction-gg::synapse0x2499750() {
   return (neuron0x248d840()*-0.149795);
}

double NNfunction-gg::synapse0x2499790() {
   return (neuron0x248db80()*-0.385139);
}

double NNfunction-gg::synapse0x24997d0() {
   return (neuron0x248dec0()*-0.759135);
}

double NNfunction-gg::synapse0x2499810() {
   return (neuron0x248e200()*0.265926);
}

double NNfunction-gg::synapse0x2499850() {
   return (neuron0x248e540()*0.137143);
}

double NNfunction-gg::synapse0x2499890() {
   return (neuron0x248e880()*0.223954);
}

double NNfunction-gg::synapse0x24998d0() {
   return (neuron0x248ebc0()*0.121115);
}

double NNfunction-gg::synapse0x2499910() {
   return (neuron0x248ef00()*0.502208);
}

double NNfunction-gg::synapse0x2499950() {
   return (neuron0x248f240()*0.128051);
}

double NNfunction-gg::synapse0x2499990() {
   return (neuron0x248f580()*0.395462);
}

double NNfunction-gg::synapse0x24999d0() {
   return (neuron0x248f8c0()*0.670133);
}

double NNfunction-gg::synapse0x2499a10() {
   return (neuron0x248fc00()*-0.0461372);
}

double NNfunction-gg::synapse0x2499a50() {
   return (neuron0x248ff40()*-0.141036);
}

double NNfunction-gg::synapse0x2499a90() {
   return (neuron0x2490280()*0.577365);
}

double NNfunction-gg::synapse0x2499ad0() {
   return (neuron0x24905c0()*0.259284);
}

double NNfunction-gg::synapse0x2499560() {
   return (neuron0x2490900()*0.341498);
}

double NNfunction-gg::synapse0x24995a0() {
   return (neuron0x2490e60()*0.391029);
}

double NNfunction-gg::synapse0x2499c20() {
   return (neuron0x2491080()*0.09419);
}

double NNfunction-gg::synapse0x2499c60() {
   return (neuron0x24913c0()*0.443022);
}

double NNfunction-gg::synapse0x2499ca0() {
   return (neuron0x2491700()*0.587314);
}

double NNfunction-gg::synapse0x2499ce0() {
   return (neuron0x2491a40()*0.15247);
}

double NNfunction-gg::synapse0x2499d20() {
   return (neuron0x2491d80()*-0.14452);
}

double NNfunction-gg::synapse0x2499d60() {
   return (neuron0x24920c0()*-0.129785);
}

double NNfunction-gg::synapse0x2499f30() {
   return (neuron0x248d500()*0.00575419);
}

double NNfunction-gg::synapse0x24a2fc0() {
   return (neuron0x248d840()*-0.00570699);
}

double NNfunction-gg::synapse0x24a3000() {
   return (neuron0x248db80()*-0.0119948);
}

double NNfunction-gg::synapse0x24a3040() {
   return (neuron0x248dec0()*-1.07844);
}

double NNfunction-gg::synapse0x24a3080() {
   return (neuron0x248e200()*0.00876041);
}

double NNfunction-gg::synapse0x24a30c0() {
   return (neuron0x248e540()*-0.0034101);
}

double NNfunction-gg::synapse0x24a3100() {
   return (neuron0x248e880()*-0.00809089);
}

double NNfunction-gg::synapse0x24a3140() {
   return (neuron0x248ebc0()*-0.00169442);
}

double NNfunction-gg::synapse0x24a3180() {
   return (neuron0x248ef00()*0.0115921);
}

double NNfunction-gg::synapse0x24a31c0() {
   return (neuron0x248f240()*-0.0118152);
}

double NNfunction-gg::synapse0x24a3200() {
   return (neuron0x248f580()*0.0147045);
}

double NNfunction-gg::synapse0x24a3240() {
   return (neuron0x248f8c0()*0.870151);
}

double NNfunction-gg::synapse0x24a3280() {
   return (neuron0x248fc00()*-0.0514793);
}

double NNfunction-gg::synapse0x24a32c0() {
   return (neuron0x248ff40()*0.0813645);
}

double NNfunction-gg::synapse0x24a3300() {
   return (neuron0x2490280()*0.306154);
}

double NNfunction-gg::synapse0x24a3340() {
   return (neuron0x24905c0()*-0.0581362);
}

double NNfunction-gg::synapse0x24a2e10() {
   return (neuron0x2490900()*0.050917);
}

double NNfunction-gg::synapse0x24a2e50() {
   return (neuron0x2490e60()*-0.0849255);
}

double NNfunction-gg::synapse0x24a3490() {
   return (neuron0x2491080()*-0.0608666);
}

double NNfunction-gg::synapse0x24a34d0() {
   return (neuron0x24913c0()*-0.0112441);
}

double NNfunction-gg::synapse0x24a3510() {
   return (neuron0x2491700()*-0.0426603);
}

double NNfunction-gg::synapse0x24a3550() {
   return (neuron0x2491a40()*0.000912136);
}

double NNfunction-gg::synapse0x24a3590() {
   return (neuron0x2491d80()*0.0179316);
}

double NNfunction-gg::synapse0x24a35d0() {
   return (neuron0x24920c0()*0.01299);
}

double NNfunction-gg::synapse0x24a3950() {
   return (neuron0x248d500()*0.0274585);
}

double NNfunction-gg::synapse0x24a3990() {
   return (neuron0x248d840()*-0.00523916);
}

double NNfunction-gg::synapse0x24a39d0() {
   return (neuron0x248db80()*-0.0269109);
}

double NNfunction-gg::synapse0x24a3a10() {
   return (neuron0x248dec0()*0.116839);
}

double NNfunction-gg::synapse0x24a3a50() {
   return (neuron0x248e200()*0.0640692);
}

double NNfunction-gg::synapse0x24a3a90() {
   return (neuron0x248e540()*0.00315642);
}

double NNfunction-gg::synapse0x24a3ad0() {
   return (neuron0x248e880()*-0.00548056);
}

double NNfunction-gg::synapse0x24a3b10() {
   return (neuron0x248ebc0()*-0.00171691);
}

double NNfunction-gg::synapse0x24a3b50() {
   return (neuron0x248ef00()*0.0354222);
}

double NNfunction-gg::synapse0x24a3b90() {
   return (neuron0x248f240()*0.014961);
}

double NNfunction-gg::synapse0x24a3bd0() {
   return (neuron0x248f580()*0.00839958);
}

double NNfunction-gg::synapse0x24a3c10() {
   return (neuron0x248f8c0()*-0.26831);
}

double NNfunction-gg::synapse0x24a3c50() {
   return (neuron0x248fc00()*0.0943023);
}

double NNfunction-gg::synapse0x24a3c90() {
   return (neuron0x248ff40()*0.049807);
}

double NNfunction-gg::synapse0x24a3cd0() {
   return (neuron0x2490280()*-0.0802325);
}

double NNfunction-gg::synapse0x24a3d10() {
   return (neuron0x24905c0()*0.0132133);
}

double NNfunction-gg::synapse0x24a37a0() {
   return (neuron0x2490900()*0.0308011);
}

double NNfunction-gg::synapse0x24a37e0() {
   return (neuron0x2490e60()*-0.10332);
}

double NNfunction-gg::synapse0x24a3e60() {
   return (neuron0x2491080()*0.0306069);
}

double NNfunction-gg::synapse0x24a3ea0() {
   return (neuron0x24913c0()*-0.00950472);
}

double NNfunction-gg::synapse0x24a3ee0() {
   return (neuron0x2491700()*-0.0959377);
}

double NNfunction-gg::synapse0x24a3f20() {
   return (neuron0x2491a40()*0.0121154);
}

double NNfunction-gg::synapse0x24a3f60() {
   return (neuron0x2491d80()*0.0377856);
}

double NNfunction-gg::synapse0x24a3fa0() {
   return (neuron0x24920c0()*0.0480116);
}

double NNfunction-gg::synapse0x24a4320() {
   return (neuron0x248d500()*-0.0133629);
}

double NNfunction-gg::synapse0x24a4360() {
   return (neuron0x248d840()*0.00279781);
}

double NNfunction-gg::synapse0x24a43a0() {
   return (neuron0x248db80()*0.00248986);
}

double NNfunction-gg::synapse0x24a43e0() {
   return (neuron0x248dec0()*-0.0380519);
}

double NNfunction-gg::synapse0x24a4420() {
   return (neuron0x248e200()*0.0306578);
}

double NNfunction-gg::synapse0x24a4460() {
   return (neuron0x248e540()*-0.00353027);
}

double NNfunction-gg::synapse0x24a44a0() {
   return (neuron0x248e880()*0.0214666);
}

double NNfunction-gg::synapse0x24a44e0() {
   return (neuron0x248ebc0()*0.00263341);
}

double NNfunction-gg::synapse0x24a4520() {
   return (neuron0x248ef00()*-0.0125494);
}

double NNfunction-gg::synapse0x24a4560() {
   return (neuron0x248f240()*0.0179451);
}

double NNfunction-gg::synapse0x24a45a0() {
   return (neuron0x248f580()*0.0120977);
}

double NNfunction-gg::synapse0x24a45e0() {
   return (neuron0x248f8c0()*0.200848);
}

double NNfunction-gg::synapse0x24a4620() {
   return (neuron0x248fc00()*-0.0494075);
}

double NNfunction-gg::synapse0x24a4660() {
   return (neuron0x248ff40()*-0.0688209);
}

double NNfunction-gg::synapse0x24a46a0() {
   return (neuron0x2490280()*0.0802421);
}

double NNfunction-gg::synapse0x24a46e0() {
   return (neuron0x24905c0()*0.0588707);
}

double NNfunction-gg::synapse0x24a4170() {
   return (neuron0x2490900()*-0.0674192);
}

double NNfunction-gg::synapse0x24a41b0() {
   return (neuron0x2490e60()*-0.800994);
}

double NNfunction-gg::synapse0x24a4830() {
   return (neuron0x2491080()*0.0426587);
}

double NNfunction-gg::synapse0x24a4870() {
   return (neuron0x24913c0()*0.0215115);
}

double NNfunction-gg::synapse0x24a48b0() {
   return (neuron0x2491700()*0.0148237);
}

double NNfunction-gg::synapse0x24a48f0() {
   return (neuron0x2491a40()*-0.000109105);
}

double NNfunction-gg::synapse0x24a4930() {
   return (neuron0x2491d80()*-0.00153017);
}

double NNfunction-gg::synapse0x24a4970() {
   return (neuron0x24920c0()*0.0191017);
}

double NNfunction-gg::synapse0x24a4cf0() {
   return (neuron0x248d500()*-0.0598962);
}

double NNfunction-gg::synapse0x24a4d30() {
   return (neuron0x248d840()*0.21632);
}

double NNfunction-gg::synapse0x24a4d70() {
   return (neuron0x248db80()*-0.186259);
}

double NNfunction-gg::synapse0x24a4db0() {
   return (neuron0x248dec0()*-1.06186);
}

double NNfunction-gg::synapse0x24a4df0() {
   return (neuron0x248e200()*0.187087);
}

double NNfunction-gg::synapse0x24a4e30() {
   return (neuron0x248e540()*-0.201325);
}

double NNfunction-gg::synapse0x24a4e70() {
   return (neuron0x248e880()*-0.278751);
}

double NNfunction-gg::synapse0x24a4eb0() {
   return (neuron0x248ebc0()*0.0206023);
}

double NNfunction-gg::synapse0x24a4ef0() {
   return (neuron0x248ef00()*-0.200813);
}

double NNfunction-gg::synapse0x24a4f30() {
   return (neuron0x248f240()*-0.077712);
}

double NNfunction-gg::synapse0x24a4f70() {
   return (neuron0x248f580()*0.290492);
}

double NNfunction-gg::synapse0x24a4fb0() {
   return (neuron0x248f8c0()*-1.02106);
}

double NNfunction-gg::synapse0x24a4ff0() {
   return (neuron0x248fc00()*-0.141183);
}

double NNfunction-gg::synapse0x24a5030() {
   return (neuron0x248ff40()*-0.0184352);
}

double NNfunction-gg::synapse0x24a5070() {
   return (neuron0x2490280()*-0.253112);
}

double NNfunction-gg::synapse0x24a50b0() {
   return (neuron0x24905c0()*-0.0152193);
}

double NNfunction-gg::synapse0x24a4b40() {
   return (neuron0x2490900()*-0.327942);
}

double NNfunction-gg::synapse0x24a4b80() {
   return (neuron0x2490e60()*0.0280728);
}

double NNfunction-gg::synapse0x24a5200() {
   return (neuron0x2491080()*-0.147415);
}

double NNfunction-gg::synapse0x24a5240() {
   return (neuron0x24913c0()*-0.640333);
}

double NNfunction-gg::synapse0x24a5280() {
   return (neuron0x2491700()*-0.260803);
}

double NNfunction-gg::synapse0x24a52c0() {
   return (neuron0x2491a40()*-0.0380502);
}

double NNfunction-gg::synapse0x24a5300() {
   return (neuron0x2491d80()*0.464013);
}

double NNfunction-gg::synapse0x24a5340() {
   return (neuron0x24920c0()*0.0676165);
}

double NNfunction-gg::synapse0x24a56c0() {
   return (neuron0x248d500()*-0.0476638);
}

double NNfunction-gg::synapse0x24a5700() {
   return (neuron0x248d840()*0.294315);
}

double NNfunction-gg::synapse0x24a5740() {
   return (neuron0x248db80()*-0.247506);
}

double NNfunction-gg::synapse0x24a5780() {
   return (neuron0x248dec0()*-0.208354);
}

double NNfunction-gg::synapse0x24a57c0() {
   return (neuron0x248e200()*0.197831);
}

double NNfunction-gg::synapse0x24a5800() {
   return (neuron0x248e540()*-0.0739606);
}

double NNfunction-gg::synapse0x24a5840() {
   return (neuron0x248e880()*-0.0143018);
}

double NNfunction-gg::synapse0x24a5880() {
   return (neuron0x248ebc0()*0.211283);
}

double NNfunction-gg::synapse0x24a58c0() {
   return (neuron0x248ef00()*-0.0187778);
}

double NNfunction-gg::synapse0x24a5900() {
   return (neuron0x248f240()*0.0230225);
}

double NNfunction-gg::synapse0x24a5940() {
   return (neuron0x248f580()*0.257946);
}

double NNfunction-gg::synapse0x24a5980() {
   return (neuron0x248f8c0()*0.0329928);
}

double NNfunction-gg::synapse0x24a59c0() {
   return (neuron0x248fc00()*0.210527);
}

double NNfunction-gg::synapse0x24a5a00() {
   return (neuron0x248ff40()*0.15492);
}

double NNfunction-gg::synapse0x24a5a40() {
   return (neuron0x2490280()*-0.505986);
}

double NNfunction-gg::synapse0x24a5a80() {
   return (neuron0x24905c0()*-0.187742);
}

double NNfunction-gg::synapse0x24a5510() {
   return (neuron0x2490900()*0.186936);
}

double NNfunction-gg::synapse0x24a5550() {
   return (neuron0x2490e60()*0.352876);
}

double NNfunction-gg::synapse0x24a5bd0() {
   return (neuron0x2491080()*-0.52941);
}

double NNfunction-gg::synapse0x24a5c10() {
   return (neuron0x24913c0()*0.290438);
}

double NNfunction-gg::synapse0x24a5c50() {
   return (neuron0x2491700()*0.656291);
}

double NNfunction-gg::synapse0x24a5c90() {
   return (neuron0x2491a40()*-0.0862408);
}

double NNfunction-gg::synapse0x24a5cd0() {
   return (neuron0x2491d80()*-0.398742);
}

double NNfunction-gg::synapse0x24a5d10() {
   return (neuron0x24920c0()*0.0831379);
}

double NNfunction-gg::synapse0x24a6090() {
   return (neuron0x248d500()*-0.00265222);
}

double NNfunction-gg::synapse0x24a60d0() {
   return (neuron0x248d840()*-0.00584561);
}

double NNfunction-gg::synapse0x24a6110() {
   return (neuron0x248db80()*-0.0142213);
}

double NNfunction-gg::synapse0x24a6150() {
   return (neuron0x248dec0()*1.11327);
}

double NNfunction-gg::synapse0x24a6190() {
   return (neuron0x248e200()*-0.0120633);
}

double NNfunction-gg::synapse0x24a61d0() {
   return (neuron0x248e540()*0.00813835);
}

double NNfunction-gg::synapse0x24a6210() {
   return (neuron0x248e880()*-0.000173792);
}

double NNfunction-gg::synapse0x24a6250() {
   return (neuron0x248ebc0()*0.00298795);
}

double NNfunction-gg::synapse0x24a6290() {
   return (neuron0x248ef00()*-0.0148124);
}

double NNfunction-gg::synapse0x24a62d0() {
   return (neuron0x248f240()*0.000346529);
}

double NNfunction-gg::synapse0x24a6310() {
   return (neuron0x248f580()*0.00387607);
}

double NNfunction-gg::synapse0x24a6350() {
   return (neuron0x248f8c0()*0.220739);
}

double NNfunction-gg::synapse0x24a6390() {
   return (neuron0x248fc00()*-0.106366);
}

double NNfunction-gg::synapse0x24a63d0() {
   return (neuron0x248ff40()*-0.0640638);
}

double NNfunction-gg::synapse0x24a6410() {
   return (neuron0x2490280()*0.235691);
}

double NNfunction-gg::synapse0x24a6450() {
   return (neuron0x24905c0()*-0.0149992);
}

double NNfunction-gg::synapse0x24a5ee0() {
   return (neuron0x2490900()*-0.0196522);
}

double NNfunction-gg::synapse0x24a5f20() {
   return (neuron0x2490e60()*0.127216);
}

double NNfunction-gg::synapse0x24a65a0() {
   return (neuron0x2491080()*-0.0317329);
}

double NNfunction-gg::synapse0x24a65e0() {
   return (neuron0x24913c0()*-0.00526812);
}

double NNfunction-gg::synapse0x24a6620() {
   return (neuron0x2491700()*0.0490436);
}

double NNfunction-gg::synapse0x24a6660() {
   return (neuron0x2491a40()*-0.00498528);
}

double NNfunction-gg::synapse0x24a66a0() {
   return (neuron0x2491d80()*-0.0194124);
}

double NNfunction-gg::synapse0x24a66e0() {
   return (neuron0x24920c0()*-0.0246446);
}

double NNfunction-gg::synapse0x24a6a60() {
   return (neuron0x248d500()*0.0137191);
}

double NNfunction-gg::synapse0x24a6aa0() {
   return (neuron0x248d840()*-0.0194092);
}

double NNfunction-gg::synapse0x24a6ae0() {
   return (neuron0x248db80()*-0.0164385);
}

double NNfunction-gg::synapse0x24a6b20() {
   return (neuron0x248dec0()*-0.959554);
}

double NNfunction-gg::synapse0x24a6b60() {
   return (neuron0x248e200()*-0.00867047);
}

double NNfunction-gg::synapse0x24a6ba0() {
   return (neuron0x248e540()*0.00614891);
}

double NNfunction-gg::synapse0x24a6be0() {
   return (neuron0x248e880()*-0.00648677);
}

double NNfunction-gg::synapse0x24a6c20() {
   return (neuron0x248ebc0()*-0.0154634);
}

double NNfunction-gg::synapse0x24a6c60() {
   return (neuron0x248ef00()*0.00855679);
}

double NNfunction-gg::synapse0x24a6ca0() {
   return (neuron0x248f240()*0.00636004);
}

double NNfunction-gg::synapse0x24a6ce0() {
   return (neuron0x248f580()*0.00614092);
}

double NNfunction-gg::synapse0x24a6d20() {
   return (neuron0x248f8c0()*0.0769102);
}

double NNfunction-gg::synapse0x24a6d60() {
   return (neuron0x248fc00()*0.0230012);
}

double NNfunction-gg::synapse0x24a6da0() {
   return (neuron0x248ff40()*0.0416744);
}

double NNfunction-gg::synapse0x24a6de0() {
   return (neuron0x2490280()*-0.886339);
}

double NNfunction-gg::synapse0x24a6e20() {
   return (neuron0x24905c0()*0.0237069);
}

double NNfunction-gg::synapse0x24a68b0() {
   return (neuron0x2490900()*0.000553943);
}

double NNfunction-gg::synapse0x24a68f0() {
   return (neuron0x2490e60()*0.136974);
}

double NNfunction-gg::synapse0x24a6f70() {
   return (neuron0x2491080()*0.0380261);
}

double NNfunction-gg::synapse0x24a6fb0() {
   return (neuron0x24913c0()*0.0266196);
}

double NNfunction-gg::synapse0x24a6ff0() {
   return (neuron0x2491700()*-0.0162167);
}

double NNfunction-gg::synapse0x24a7030() {
   return (neuron0x2491a40()*-0.00912025);
}

double NNfunction-gg::synapse0x24a7070() {
   return (neuron0x2491d80()*0.0144454);
}

double NNfunction-gg::synapse0x24a70b0() {
   return (neuron0x24920c0()*0.00513388);
}

double NNfunction-gg::synapse0x24a7430() {
   return (neuron0x248d500()*0.42115);
}

double NNfunction-gg::synapse0x24a7470() {
   return (neuron0x248d840()*-0.251931);
}

double NNfunction-gg::synapse0x24a74b0() {
   return (neuron0x248db80()*0.194688);
}

double NNfunction-gg::synapse0x24a74f0() {
   return (neuron0x248dec0()*-1.43751);
}

double NNfunction-gg::synapse0x24a7530() {
   return (neuron0x248e200()*0.0844814);
}

double NNfunction-gg::synapse0x24a7570() {
   return (neuron0x248e540()*0.329012);
}

double NNfunction-gg::synapse0x24a75b0() {
   return (neuron0x248e880()*-0.311498);
}

double NNfunction-gg::synapse0x24a75f0() {
   return (neuron0x248ebc0()*0.55208);
}

double NNfunction-gg::synapse0x24a7630() {
   return (neuron0x248ef00()*0.159715);
}

double NNfunction-gg::synapse0x24a7670() {
   return (neuron0x248f240()*-0.15269);
}

double NNfunction-gg::synapse0x24a76b0() {
   return (neuron0x248f580()*0.153077);
}

double NNfunction-gg::synapse0x24a76f0() {
   return (neuron0x248f8c0()*-0.34183);
}

double NNfunction-gg::synapse0x24a7730() {
   return (neuron0x248fc00()*-0.072744);
}

double NNfunction-gg::synapse0x24a7770() {
   return (neuron0x248ff40()*-0.462118);
}

double NNfunction-gg::synapse0x24a77b0() {
   return (neuron0x2490280()*0.241956);
}

double NNfunction-gg::synapse0x24a77f0() {
   return (neuron0x24905c0()*-0.444198);
}

double NNfunction-gg::synapse0x24a7280() {
   return (neuron0x2490900()*-0.348831);
}

double NNfunction-gg::synapse0x24a72c0() {
   return (neuron0x2490e60()*0.0346106);
}

double NNfunction-gg::synapse0x24a7940() {
   return (neuron0x2491080()*-0.0481351);
}

double NNfunction-gg::synapse0x24a7980() {
   return (neuron0x24913c0()*-0.115648);
}

double NNfunction-gg::synapse0x24a79c0() {
   return (neuron0x2491700()*-0.374359);
}

double NNfunction-gg::synapse0x24a7a00() {
   return (neuron0x2491a40()*0.202551);
}

double NNfunction-gg::synapse0x24a7a40() {
   return (neuron0x2491d80()*-0.112661);
}

double NNfunction-gg::synapse0x24a7a80() {
   return (neuron0x24920c0()*0.0969905);
}

double NNfunction-gg::synapse0x24a7e00() {
   return (neuron0x248d500()*0.185604);
}

double NNfunction-gg::synapse0x249c3d0() {
   return (neuron0x248d840()*-0.091065);
}

double NNfunction-gg::synapse0x249c410() {
   return (neuron0x248db80()*0.319465);
}

double NNfunction-gg::synapse0x249c450() {
   return (neuron0x248dec0()*-0.256425);
}

double NNfunction-gg::synapse0x249c6a0() {
   return (neuron0x248e200()*-0.168411);
}

double NNfunction-gg::synapse0x249c6e0() {
   return (neuron0x248e540()*-0.0414784);
}

double NNfunction-gg::synapse0x249c720() {
   return (neuron0x248e880()*-0.204664);
}

double NNfunction-gg::synapse0x249c970() {
   return (neuron0x248ebc0()*-0.363184);
}

double NNfunction-gg::synapse0x249c9b0() {
   return (neuron0x248ef00()*0.0650987);
}

double NNfunction-gg::synapse0x249cc00() {
   return (neuron0x248f240()*0.0813468);
}

double NNfunction-gg::synapse0x249cc40() {
   return (neuron0x248f580()*0.049163);
}

double NNfunction-gg::synapse0x249cc80() {
   return (neuron0x248f8c0()*0.00411344);
}

double NNfunction-gg::synapse0x249ced0() {
   return (neuron0x248fc00()*-0.0719541);
}

double NNfunction-gg::synapse0x249cf10() {
   return (neuron0x248ff40()*0.517075);
}

double NNfunction-gg::synapse0x249d160() {
   return (neuron0x2490280()*-0.290761);
}

double NNfunction-gg::synapse0x249d1a0() {
   return (neuron0x24905c0()*0.427877);
}

double NNfunction-gg::synapse0x24a7c50() {
   return (neuron0x2490900()*-0.540478);
}

double NNfunction-gg::synapse0x24a7c90() {
   return (neuron0x2490e60()*0.353208);
}

double NNfunction-gg::synapse0x249d2f0() {
   return (neuron0x2491080()*-0.34834);
}

double NNfunction-gg::synapse0x249d800() {
   return (neuron0x24913c0()*-0.20097);
}

double NNfunction-gg::synapse0x249d840() {
   return (neuron0x2491700()*0.275939);
}

double NNfunction-gg::synapse0x249d880() {
   return (neuron0x2491a40()*0.600153);
}

double NNfunction-gg::synapse0x249dad0() {
   return (neuron0x2491d80()*0.300073);
}

double NNfunction-gg::synapse0x249db10() {
   return (neuron0x24920c0()*-0.185368);
}

double NNfunction-gg::synapse0x249d3c0() {
   return (neuron0x248d500()*-0.0122358);
}

double NNfunction-gg::synapse0x249d400() {
   return (neuron0x248d840()*0.0318134);
}

double NNfunction-gg::synapse0x249d440() {
   return (neuron0x248db80()*0.0341665);
}

double NNfunction-gg::synapse0x249d480() {
   return (neuron0x248dec0()*-0.879418);
}

double NNfunction-gg::synapse0x249de00() {
   return (neuron0x248e200()*0.0178897);
}

double NNfunction-gg::synapse0x24aa150() {
   return (neuron0x248e540()*0.0163989);
}

double NNfunction-gg::synapse0x24aa190() {
   return (neuron0x248e880()*0.00539836);
}

double NNfunction-gg::synapse0x24aa1d0() {
   return (neuron0x248ebc0()*0.0063369);
}

double NNfunction-gg::synapse0x24aa210() {
   return (neuron0x248ef00()*0.0214495);
}

double NNfunction-gg::synapse0x24aa250() {
   return (neuron0x248f240()*0.0335639);
}

double NNfunction-gg::synapse0x24aa290() {
   return (neuron0x248f580()*0.0115899);
}

double NNfunction-gg::synapse0x24aa2d0() {
   return (neuron0x248f8c0()*1.16149);
}

double NNfunction-gg::synapse0x24aa310() {
   return (neuron0x248fc00()*0.0268549);
}

double NNfunction-gg::synapse0x24aa350() {
   return (neuron0x248ff40()*-0.0554941);
}

double NNfunction-gg::synapse0x24aa390() {
   return (neuron0x2490280()*-0.870784);
}

double NNfunction-gg::synapse0x24aa3d0() {
   return (neuron0x24905c0()*0.00276551);
}

double NNfunction-gg::synapse0x249dce0() {
   return (neuron0x2490900()*-0.00931932);
}

double NNfunction-gg::synapse0x249dd20() {
   return (neuron0x2490e60()*-0.0603805);
}

double NNfunction-gg::synapse0x24aa520() {
   return (neuron0x2491080()*-0.0430742);
}

double NNfunction-gg::synapse0x24aa560() {
   return (neuron0x24913c0()*0.0106463);
}

double NNfunction-gg::synapse0x24aa5a0() {
   return (neuron0x2491700()*0.0470685);
}

double NNfunction-gg::synapse0x24aa5e0() {
   return (neuron0x2491a40()*0.00192268);
}

double NNfunction-gg::synapse0x24aa620() {
   return (neuron0x2491d80()*-0.0351692);
}

double NNfunction-gg::synapse0x24aa660() {
   return (neuron0x24920c0()*0.00406761);
}

double NNfunction-gg::synapse0x24aa9e0() {
   return (neuron0x248d500()*0.402115);
}

double NNfunction-gg::synapse0x24aaa20() {
   return (neuron0x248d840()*0.18974);
}

double NNfunction-gg::synapse0x24aaa60() {
   return (neuron0x248db80()*-0.757367);
}

double NNfunction-gg::synapse0x24aaaa0() {
   return (neuron0x248dec0()*0.241316);
}

double NNfunction-gg::synapse0x24aaae0() {
   return (neuron0x248e200()*-0.0977586);
}

double NNfunction-gg::synapse0x24aab20() {
   return (neuron0x248e540()*0.0185082);
}

double NNfunction-gg::synapse0x24aab60() {
   return (neuron0x248e880()*-0.23047);
}

double NNfunction-gg::synapse0x24aaba0() {
   return (neuron0x248ebc0()*-0.0728886);
}

double NNfunction-gg::synapse0x24aabe0() {
   return (neuron0x248ef00()*0.014117);
}

double NNfunction-gg::synapse0x24aac20() {
   return (neuron0x248f240()*-0.0301579);
}

double NNfunction-gg::synapse0x24aac60() {
   return (neuron0x248f580()*-0.298527);
}

double NNfunction-gg::synapse0x24aaca0() {
   return (neuron0x248f8c0()*-0.125544);
}

double NNfunction-gg::synapse0x24aace0() {
   return (neuron0x248fc00()*0.215037);
}

double NNfunction-gg::synapse0x24aad20() {
   return (neuron0x248ff40()*0.868825);
}

double NNfunction-gg::synapse0x24aad60() {
   return (neuron0x2490280()*0.627963);
}

double NNfunction-gg::synapse0x24aada0() {
   return (neuron0x24905c0()*0.292216);
}

double NNfunction-gg::synapse0x24aa830() {
   return (neuron0x2490900()*-0.244488);
}

double NNfunction-gg::synapse0x24aa870() {
   return (neuron0x2490e60()*-0.04777);
}

double NNfunction-gg::synapse0x24aaef0() {
   return (neuron0x2491080()*0.526938);
}

double NNfunction-gg::synapse0x24aaf30() {
   return (neuron0x24913c0()*0.51617);
}

double NNfunction-gg::synapse0x24aaf70() {
   return (neuron0x2491700()*-0.0376783);
}

double NNfunction-gg::synapse0x24aafb0() {
   return (neuron0x2491a40()*-0.586756);
}

double NNfunction-gg::synapse0x24aaff0() {
   return (neuron0x2491d80()*-0.0774871);
}

double NNfunction-gg::synapse0x24ab030() {
   return (neuron0x24920c0()*-0.489231);
}

double NNfunction-gg::synapse0x24ab3b0() {
   return (neuron0x248d500()*-0.310265);
}

double NNfunction-gg::synapse0x24ab3f0() {
   return (neuron0x248d840()*-0.112329);
}

double NNfunction-gg::synapse0x24ab430() {
   return (neuron0x248db80()*-0.0806308);
}

double NNfunction-gg::synapse0x24ab470() {
   return (neuron0x248dec0()*1.12792);
}

double NNfunction-gg::synapse0x24ab4b0() {
   return (neuron0x248e200()*0.120677);
}

double NNfunction-gg::synapse0x24ab4f0() {
   return (neuron0x248e540()*-0.250987);
}

double NNfunction-gg::synapse0x24ab530() {
   return (neuron0x248e880()*0.260573);
}

double NNfunction-gg::synapse0x24ab570() {
   return (neuron0x248ebc0()*-0.183296);
}

double NNfunction-gg::synapse0x24ab5b0() {
   return (neuron0x248ef00()*0.163705);
}

double NNfunction-gg::synapse0x24ab5f0() {
   return (neuron0x248f240()*-0.176093);
}

double NNfunction-gg::synapse0x24ab630() {
   return (neuron0x248f580()*0.0715103);
}

double NNfunction-gg::synapse0x24ab670() {
   return (neuron0x248f8c0()*-0.35657);
}

double NNfunction-gg::synapse0x24ab6b0() {
   return (neuron0x248fc00()*-0.548134);
}

double NNfunction-gg::synapse0x24ab6f0() {
   return (neuron0x248ff40()*-0.394496);
}

double NNfunction-gg::synapse0x24ab730() {
   return (neuron0x2490280()*-0.631245);
}

double NNfunction-gg::synapse0x24ab770() {
   return (neuron0x24905c0()*-0.0942649);
}

double NNfunction-gg::synapse0x24ab200() {
   return (neuron0x2490900()*0.0668536);
}

double NNfunction-gg::synapse0x24ab240() {
   return (neuron0x2490e60()*-0.0908054);
}

double NNfunction-gg::synapse0x24ab8c0() {
   return (neuron0x2491080()*-0.562903);
}

double NNfunction-gg::synapse0x24ab900() {
   return (neuron0x24913c0()*-0.201521);
}

double NNfunction-gg::synapse0x24ab940() {
   return (neuron0x2491700()*-0.060422);
}

double NNfunction-gg::synapse0x24ab980() {
   return (neuron0x2491a40()*0.0710589);
}

double NNfunction-gg::synapse0x24ab9c0() {
   return (neuron0x2491d80()*0.304487);
}

double NNfunction-gg::synapse0x24aba00() {
   return (neuron0x24920c0()*-0.184106);
}

double NNfunction-gg::synapse0x24abd80() {
   return (neuron0x248d500()*-0.189383);
}

double NNfunction-gg::synapse0x24abdc0() {
   return (neuron0x248d840()*-0.113617);
}

double NNfunction-gg::synapse0x24abe00() {
   return (neuron0x248db80()*-0.0592655);
}

double NNfunction-gg::synapse0x24abe40() {
   return (neuron0x248dec0()*-1.01408);
}

double NNfunction-gg::synapse0x24abe80() {
   return (neuron0x248e200()*0.209286);
}

double NNfunction-gg::synapse0x24abec0() {
   return (neuron0x248e540()*0.268945);
}

double NNfunction-gg::synapse0x24abf00() {
   return (neuron0x248e880()*0.329517);
}

double NNfunction-gg::synapse0x24abf40() {
   return (neuron0x248ebc0()*0.149493);
}

double NNfunction-gg::synapse0x24abf80() {
   return (neuron0x248ef00()*0.431806);
}

double NNfunction-gg::synapse0x24abfc0() {
   return (neuron0x248f240()*0.10709);
}

double NNfunction-gg::synapse0x24ac000() {
   return (neuron0x248f580()*-0.123492);
}

double NNfunction-gg::synapse0x24ac040() {
   return (neuron0x248f8c0()*0.307465);
}

double NNfunction-gg::synapse0x24ac080() {
   return (neuron0x248fc00()*-0.387668);
}

double NNfunction-gg::synapse0x24ac0c0() {
   return (neuron0x248ff40()*0.237239);
}

double NNfunction-gg::synapse0x24ac100() {
   return (neuron0x2490280()*-0.0789334);
}

double NNfunction-gg::synapse0x24ac140() {
   return (neuron0x24905c0()*-0.237671);
}

double NNfunction-gg::synapse0x24abbd0() {
   return (neuron0x2490900()*-0.67231);
}

double NNfunction-gg::synapse0x24abc10() {
   return (neuron0x2490e60()*0.448264);
}

double NNfunction-gg::synapse0x24ac290() {
   return (neuron0x2491080()*0.190601);
}

double NNfunction-gg::synapse0x24ac2d0() {
   return (neuron0x24913c0()*-0.0416603);
}

double NNfunction-gg::synapse0x24ac310() {
   return (neuron0x2491700()*-0.367517);
}

double NNfunction-gg::synapse0x24ac350() {
   return (neuron0x2491a40()*0.0553031);
}

double NNfunction-gg::synapse0x24ac390() {
   return (neuron0x2491d80()*0.303428);
}

double NNfunction-gg::synapse0x24ac3d0() {
   return (neuron0x24920c0()*0.228687);
}

double NNfunction-gg::synapse0x24ac750() {
   return (neuron0x248d500()*-0.230118);
}

double NNfunction-gg::synapse0x24ac790() {
   return (neuron0x248d840()*-0.051548);
}

double NNfunction-gg::synapse0x24ac7d0() {
   return (neuron0x248db80()*-0.113708);
}

double NNfunction-gg::synapse0x24ac810() {
   return (neuron0x248dec0()*1.00442);
}

double NNfunction-gg::synapse0x24ac850() {
   return (neuron0x248e200()*0.304609);
}

double NNfunction-gg::synapse0x24ac890() {
   return (neuron0x248e540()*-0.185968);
}

double NNfunction-gg::synapse0x24ac8d0() {
   return (neuron0x248e880()*0.193657);
}

double NNfunction-gg::synapse0x24ac910() {
   return (neuron0x248ebc0()*-0.231803);
}

double NNfunction-gg::synapse0x24ac950() {
   return (neuron0x248ef00()*-0.154047);
}

double NNfunction-gg::synapse0x24ac990() {
   return (neuron0x248f240()*0.0836845);
}

double NNfunction-gg::synapse0x24ac9d0() {
   return (neuron0x248f580()*0.194427);
}

double NNfunction-gg::synapse0x24aca10() {
   return (neuron0x248f8c0()*-0.41807);
}

double NNfunction-gg::synapse0x24aca50() {
   return (neuron0x248fc00()*-0.391831);
}

double NNfunction-gg::synapse0x24aca90() {
   return (neuron0x248ff40()*-0.144899);
}

double NNfunction-gg::synapse0x24acad0() {
   return (neuron0x2490280()*0.156324);
}

double NNfunction-gg::synapse0x24acb10() {
   return (neuron0x24905c0()*-0.303682);
}

double NNfunction-gg::synapse0x24ac5a0() {
   return (neuron0x2490900()*0.267026);
}

double NNfunction-gg::synapse0x24ac5e0() {
   return (neuron0x2490e60()*-0.454692);
}

double NNfunction-gg::synapse0x24acc60() {
   return (neuron0x2491080()*-0.382435);
}

double NNfunction-gg::synapse0x24acca0() {
   return (neuron0x24913c0()*0.0984423);
}

double NNfunction-gg::synapse0x24acce0() {
   return (neuron0x2491700()*0.595715);
}

double NNfunction-gg::synapse0x24acd20() {
   return (neuron0x2491a40()*0.0416381);
}

double NNfunction-gg::synapse0x24acd60() {
   return (neuron0x2491d80()*-0.170614);
}

double NNfunction-gg::synapse0x24acda0() {
   return (neuron0x24920c0()*-0.292936);
}

double NNfunction-gg::synapse0x24ad120() {
   return (neuron0x248d500()*0.775339);
}

double NNfunction-gg::synapse0x24ad160() {
   return (neuron0x248d840()*0.109217);
}

double NNfunction-gg::synapse0x24ad1a0() {
   return (neuron0x248db80()*-0.0596366);
}

double NNfunction-gg::synapse0x24ad1e0() {
   return (neuron0x248dec0()*0.428443);
}

double NNfunction-gg::synapse0x24ad220() {
   return (neuron0x248e200()*0.33728);
}

double NNfunction-gg::synapse0x24ad260() {
   return (neuron0x248e540()*0.2356);
}

double NNfunction-gg::synapse0x24ad2a0() {
   return (neuron0x248e880()*0.296567);
}

double NNfunction-gg::synapse0x24ad2e0() {
   return (neuron0x248ebc0()*0.326095);
}

double NNfunction-gg::synapse0x24ad320() {
   return (neuron0x248ef00()*0.345519);
}

double NNfunction-gg::synapse0x24ad360() {
   return (neuron0x248f240()*-0.21529);
}

double NNfunction-gg::synapse0x24ad3a0() {
   return (neuron0x248f580()*-0.642346);
}

double NNfunction-gg::synapse0x24ad3e0() {
   return (neuron0x248f8c0()*-0.230047);
}

double NNfunction-gg::synapse0x24ad420() {
   return (neuron0x248fc00()*-0.610253);
}

double NNfunction-gg::synapse0x24ad460() {
   return (neuron0x248ff40()*0.395431);
}

double NNfunction-gg::synapse0x24ad4a0() {
   return (neuron0x2490280()*-0.363788);
}

double NNfunction-gg::synapse0x24ad4e0() {
   return (neuron0x24905c0()*-0.341145);
}

double NNfunction-gg::synapse0x24acf70() {
   return (neuron0x2490900()*-0.11588);
}

double NNfunction-gg::synapse0x24acfb0() {
   return (neuron0x2490e60()*0.18434);
}

double NNfunction-gg::synapse0x24ad630() {
   return (neuron0x2491080()*-0.177273);
}

double NNfunction-gg::synapse0x24ad670() {
   return (neuron0x24913c0()*0.0744005);
}

double NNfunction-gg::synapse0x24ad6b0() {
   return (neuron0x2491700()*-0.269395);
}

double NNfunction-gg::synapse0x24ad6f0() {
   return (neuron0x2491a40()*-0.11148);
}

double NNfunction-gg::synapse0x24ad730() {
   return (neuron0x2491d80()*0.554922);
}

double NNfunction-gg::synapse0x24ad770() {
   return (neuron0x24920c0()*-0.000478697);
}

double NNfunction-gg::synapse0x24adaf0() {
   return (neuron0x248d500()*-0.00185694);
}

double NNfunction-gg::synapse0x24adb30() {
   return (neuron0x248d840()*-0.00127099);
}

double NNfunction-gg::synapse0x24adb70() {
   return (neuron0x248db80()*-0.00599575);
}

double NNfunction-gg::synapse0x24adbb0() {
   return (neuron0x248dec0()*-4.47271);
}

double NNfunction-gg::synapse0x24adbf0() {
   return (neuron0x248e200()*0.00621467);
}

double NNfunction-gg::synapse0x24adc30() {
   return (neuron0x248e540()*0.00327862);
}

double NNfunction-gg::synapse0x24adc70() {
   return (neuron0x248e880()*0.00392785);
}

double NNfunction-gg::synapse0x24adcb0() {
   return (neuron0x248ebc0()*0.00584246);
}

double NNfunction-gg::synapse0x24adcf0() {
   return (neuron0x248ef00()*-0.000867956);
}

double NNfunction-gg::synapse0x24add30() {
   return (neuron0x248f240()*-9.67087e-05);
}

double NNfunction-gg::synapse0x24add70() {
   return (neuron0x248f580()*-0.000238828);
}

double NNfunction-gg::synapse0x24addb0() {
   return (neuron0x248f8c0()*-0.00997126);
}

double NNfunction-gg::synapse0x24addf0() {
   return (neuron0x248fc00()*-0.0329256);
}

double NNfunction-gg::synapse0x24ade30() {
   return (neuron0x248ff40()*-0.0466142);
}

double NNfunction-gg::synapse0x24ade70() {
   return (neuron0x2490280()*-0.0114738);
}

double NNfunction-gg::synapse0x24adeb0() {
   return (neuron0x24905c0()*-0.00931681);
}

double NNfunction-gg::synapse0x24ad940() {
   return (neuron0x2490900()*-0.0246173);
}

double NNfunction-gg::synapse0x24ad980() {
   return (neuron0x2490e60()*0.0166634);
}

double NNfunction-gg::synapse0x24ae000() {
   return (neuron0x2491080()*-0.00600505);
}

double NNfunction-gg::synapse0x24ae040() {
   return (neuron0x24913c0()*-0.0109753);
}

double NNfunction-gg::synapse0x24ae080() {
   return (neuron0x2491700()*0.00632473);
}

double NNfunction-gg::synapse0x24ae0c0() {
   return (neuron0x2491a40()*0.00329979);
}

double NNfunction-gg::synapse0x24ae100() {
   return (neuron0x2491d80()*-0.000874286);
}

double NNfunction-gg::synapse0x24ae140() {
   return (neuron0x24920c0()*-0.00846372);
}

double NNfunction-gg::synapse0x24ae4c0() {
   return (neuron0x248d500()*-0.232045);
}

double NNfunction-gg::synapse0x24ae500() {
   return (neuron0x248d840()*0.06004);
}

double NNfunction-gg::synapse0x24ae540() {
   return (neuron0x248db80()*-0.0294052);
}

double NNfunction-gg::synapse0x24ae580() {
   return (neuron0x248dec0()*-1.08576);
}

double NNfunction-gg::synapse0x24ae5c0() {
   return (neuron0x248e200()*-0.279371);
}

double NNfunction-gg::synapse0x24ae600() {
   return (neuron0x248e540()*-0.140878);
}

double NNfunction-gg::synapse0x24ae640() {
   return (neuron0x248e880()*-0.330862);
}

double NNfunction-gg::synapse0x24ae680() {
   return (neuron0x248ebc0()*-0.30246);
}

double NNfunction-gg::synapse0x24ae6c0() {
   return (neuron0x248ef00()*-0.289076);
}

double NNfunction-gg::synapse0x24ae700() {
   return (neuron0x248f240()*0.025334);
}

double NNfunction-gg::synapse0x24ae740() {
   return (neuron0x248f580()*-0.533746);
}

double NNfunction-gg::synapse0x24ae780() {
   return (neuron0x248f8c0()*0.258208);
}

double NNfunction-gg::synapse0x24ae7c0() {
   return (neuron0x248fc00()*0.297282);
}

double NNfunction-gg::synapse0x24ae800() {
   return (neuron0x248ff40()*-0.0419851);
}

double NNfunction-gg::synapse0x24ae840() {
   return (neuron0x2490280()*-0.202793);
}

double NNfunction-gg::synapse0x24ae880() {
   return (neuron0x24905c0()*-0.411266);
}

double NNfunction-gg::synapse0x24ae310() {
   return (neuron0x2490900()*0.00642949);
}

double NNfunction-gg::synapse0x24ae350() {
   return (neuron0x2490e60()*0.166536);
}

double NNfunction-gg::synapse0x24ae9d0() {
   return (neuron0x2491080()*0.197544);
}

double NNfunction-gg::synapse0x24aea10() {
   return (neuron0x24913c0()*0.0652143);
}

double NNfunction-gg::synapse0x24aea50() {
   return (neuron0x2491700()*-0.239082);
}

double NNfunction-gg::synapse0x24aea90() {
   return (neuron0x2491a40()*-0.152573);
}

double NNfunction-gg::synapse0x24aead0() {
   return (neuron0x2491d80()*-0.157755);
}

double NNfunction-gg::synapse0x24aeb10() {
   return (neuron0x24920c0()*0.170144);
}

double NNfunction-gg::synapse0x24975c0() {
   return (neuron0x248d500()*0.302243);
}

double NNfunction-gg::synapse0x2497600() {
   return (neuron0x248d840()*-0.429507);
}

double NNfunction-gg::synapse0x2497640() {
   return (neuron0x248db80()*-0.0953119);
}

double NNfunction-gg::synapse0x2497680() {
   return (neuron0x248dec0()*-0.119296);
}

double NNfunction-gg::synapse0x24976c0() {
   return (neuron0x248e200()*0.129475);
}

double NNfunction-gg::synapse0x2497700() {
   return (neuron0x248e540()*0.0685826);
}

double NNfunction-gg::synapse0x2497740() {
   return (neuron0x248e880()*0.451613);
}

double NNfunction-gg::synapse0x2497780() {
   return (neuron0x248ebc0()*0.755722);
}

double NNfunction-gg::synapse0x24af2a0() {
   return (neuron0x248ef00()*0.184776);
}

double NNfunction-gg::synapse0x24af2e0() {
   return (neuron0x248f240()*0.634926);
}

double NNfunction-gg::synapse0x24af320() {
   return (neuron0x248f580()*0.319408);
}

double NNfunction-gg::synapse0x24af360() {
   return (neuron0x248f8c0()*0.193191);
}

double NNfunction-gg::synapse0x24af3a0() {
   return (neuron0x248fc00()*-0.169747);
}

double NNfunction-gg::synapse0x24af3e0() {
   return (neuron0x248ff40()*0.416209);
}

double NNfunction-gg::synapse0x24af420() {
   return (neuron0x2490280()*0.307074);
}

double NNfunction-gg::synapse0x24af460() {
   return (neuron0x24905c0()*0.330579);
}

double NNfunction-gg::synapse0x24aece0() {
   return (neuron0x2490900()*0.174095);
}

double NNfunction-gg::synapse0x24aed20() {
   return (neuron0x2490e60()*0.27219);
}

double NNfunction-gg::synapse0x24af5b0() {
   return (neuron0x2491080()*-0.0764583);
}

double NNfunction-gg::synapse0x24af5f0() {
   return (neuron0x24913c0()*0.298702);
}

double NNfunction-gg::synapse0x24af630() {
   return (neuron0x2491700()*-0.202919);
}

double NNfunction-gg::synapse0x24af670() {
   return (neuron0x2491a40()*0.378878);
}

double NNfunction-gg::synapse0x24af6b0() {
   return (neuron0x2491d80()*-0.230662);
}

double NNfunction-gg::synapse0x24af6f0() {
   return (neuron0x24920c0()*0.106796);
}

double NNfunction-gg::synapse0x24afa70() {
   return (neuron0x248d500()*0.0526488);
}

double NNfunction-gg::synapse0x24afab0() {
   return (neuron0x248d840()*0.419402);
}

double NNfunction-gg::synapse0x24afaf0() {
   return (neuron0x248db80()*-0.790893);
}

double NNfunction-gg::synapse0x24afb30() {
   return (neuron0x248dec0()*-0.0626799);
}

double NNfunction-gg::synapse0x24afb70() {
   return (neuron0x248e200()*0.312062);
}

double NNfunction-gg::synapse0x24afbb0() {
   return (neuron0x248e540()*0.295665);
}

double NNfunction-gg::synapse0x24afbf0() {
   return (neuron0x248e880()*0.107281);
}

double NNfunction-gg::synapse0x24afc30() {
   return (neuron0x248ebc0()*-0.0388066);
}

double NNfunction-gg::synapse0x24afc70() {
   return (neuron0x248ef00()*0.287933);
}

double NNfunction-gg::synapse0x24afcb0() {
   return (neuron0x248f240()*0.222419);
}

double NNfunction-gg::synapse0x24afcf0() {
   return (neuron0x248f580()*0.401063);
}

double NNfunction-gg::synapse0x24afd30() {
   return (neuron0x248f8c0()*0.0920371);
}

double NNfunction-gg::synapse0x24afd70() {
   return (neuron0x248fc00()*0.121851);
}

double NNfunction-gg::synapse0x24afdb0() {
   return (neuron0x248ff40()*-0.551344);
}

double NNfunction-gg::synapse0x24afdf0() {
   return (neuron0x2490280()*0.29477);
}

double NNfunction-gg::synapse0x24afe30() {
   return (neuron0x24905c0()*-0.0977497);
}

double NNfunction-gg::synapse0x24af8c0() {
   return (neuron0x2490900()*-0.83291);
}

double NNfunction-gg::synapse0x24af900() {
   return (neuron0x2490e60()*0.345759);
}

double NNfunction-gg::synapse0x24aff80() {
   return (neuron0x2491080()*0.197447);
}

double NNfunction-gg::synapse0x24affc0() {
   return (neuron0x24913c0()*-0.22919);
}

double NNfunction-gg::synapse0x24b0000() {
   return (neuron0x2491700()*-0.119557);
}

double NNfunction-gg::synapse0x24b0040() {
   return (neuron0x2491a40()*-0.0740399);
}

double NNfunction-gg::synapse0x24b0080() {
   return (neuron0x2491d80()*0.0205786);
}

double NNfunction-gg::synapse0x24b00c0() {
   return (neuron0x24920c0()*0.0409334);
}

double NNfunction-gg::synapse0x24b0440() {
   return (neuron0x248d500()*0.0721636);
}

double NNfunction-gg::synapse0x24b0480() {
   return (neuron0x248d840()*0.0438294);
}

double NNfunction-gg::synapse0x24b04c0() {
   return (neuron0x248db80()*0.0566697);
}

double NNfunction-gg::synapse0x24b0500() {
   return (neuron0x248dec0()*0.606365);
}

double NNfunction-gg::synapse0x24b0540() {
   return (neuron0x248e200()*-0.157499);
}

double NNfunction-gg::synapse0x24b0580() {
   return (neuron0x248e540()*-0.45373);
}

double NNfunction-gg::synapse0x24b05c0() {
   return (neuron0x248e880()*-0.247937);
}

double NNfunction-gg::synapse0x24b0600() {
   return (neuron0x248ebc0()*0.102275);
}

double NNfunction-gg::synapse0x24b0640() {
   return (neuron0x248ef00()*0.321821);
}

double NNfunction-gg::synapse0x24b0680() {
   return (neuron0x248f240()*-0.266616);
}

double NNfunction-gg::synapse0x24b06c0() {
   return (neuron0x248f580()*-0.409197);
}

double NNfunction-gg::synapse0x24b0700() {
   return (neuron0x248f8c0()*-0.292979);
}

double NNfunction-gg::synapse0x24b0740() {
   return (neuron0x248fc00()*-0.273605);
}

double NNfunction-gg::synapse0x24b0780() {
   return (neuron0x248ff40()*0.000908014);
}

double NNfunction-gg::synapse0x24b07c0() {
   return (neuron0x2490280()*0.349676);
}

double NNfunction-gg::synapse0x24b0800() {
   return (neuron0x24905c0()*-0.0950593);
}

double NNfunction-gg::synapse0x24b0290() {
   return (neuron0x2490900()*0.345463);
}

double NNfunction-gg::synapse0x24b02d0() {
   return (neuron0x2490e60()*-0.373702);
}

double NNfunction-gg::synapse0x24a0e00() {
   return (neuron0x2491080()*-0.194111);
}

double NNfunction-gg::synapse0x24a0e40() {
   return (neuron0x24913c0()*-0.416113);
}

double NNfunction-gg::synapse0x24a0e80() {
   return (neuron0x2491700()*0.745181);
}

double NNfunction-gg::synapse0x24a0ec0() {
   return (neuron0x2491a40()*0.487614);
}

double NNfunction-gg::synapse0x24a0f00() {
   return (neuron0x2491d80()*-0.12746);
}

double NNfunction-gg::synapse0x24a0f40() {
   return (neuron0x24920c0()*0.335986);
}

double NNfunction-gg::synapse0x24a12c0() {
   return (neuron0x248d500()*-0.0275836);
}

double NNfunction-gg::synapse0x24a1300() {
   return (neuron0x248d840()*-0.20156);
}

double NNfunction-gg::synapse0x24a1340() {
   return (neuron0x248db80()*-0.0985186);
}

double NNfunction-gg::synapse0x24a1380() {
   return (neuron0x248dec0()*-1.53925);
}

double NNfunction-gg::synapse0x24a13c0() {
   return (neuron0x248e200()*-0.835451);
}

double NNfunction-gg::synapse0x24a1400() {
   return (neuron0x248e540()*0.152529);
}

double NNfunction-gg::synapse0x24a1440() {
   return (neuron0x248e880()*0.49516);
}

double NNfunction-gg::synapse0x24a1480() {
   return (neuron0x248ebc0()*-0.280407);
}

double NNfunction-gg::synapse0x24a14c0() {
   return (neuron0x248ef00()*-0.192759);
}

double NNfunction-gg::synapse0x24a1500() {
   return (neuron0x248f240()*-0.283314);
}

double NNfunction-gg::synapse0x24a1540() {
   return (neuron0x248f580()*0.539097);
}

double NNfunction-gg::synapse0x24a1580() {
   return (neuron0x248f8c0()*-0.212212);
}

double NNfunction-gg::synapse0x24a15c0() {
   return (neuron0x248fc00()*-0.0987379);
}

double NNfunction-gg::synapse0x24a1600() {
   return (neuron0x248ff40()*0.119081);
}

double NNfunction-gg::synapse0x24a1640() {
   return (neuron0x2490280()*-0.139659);
}

double NNfunction-gg::synapse0x24a1680() {
   return (neuron0x24905c0()*-0.0911435);
}

double NNfunction-gg::synapse0x24a1110() {
   return (neuron0x2490900()*0.212137);
}

double NNfunction-gg::synapse0x24a1150() {
   return (neuron0x2490e60()*-0.125742);
}

double NNfunction-gg::synapse0x24a17d0() {
   return (neuron0x2491080()*-0.195121);
}

double NNfunction-gg::synapse0x24a1810() {
   return (neuron0x24913c0()*-0.103373);
}

double NNfunction-gg::synapse0x24a1850() {
   return (neuron0x2491700()*0.0915145);
}

double NNfunction-gg::synapse0x24a1890() {
   return (neuron0x2491a40()*0.505435);
}

double NNfunction-gg::synapse0x24a18d0() {
   return (neuron0x2491d80()*0.0636869);
}

double NNfunction-gg::synapse0x24a1910() {
   return (neuron0x24920c0()*0.324446);
}

double NNfunction-gg::synapse0x24a1c90() {
   return (neuron0x248d500()*-0.00334648);
}

double NNfunction-gg::synapse0x24a1cd0() {
   return (neuron0x248d840()*-0.00309436);
}

double NNfunction-gg::synapse0x24a1d10() {
   return (neuron0x248db80()*-0.0356255);
}

double NNfunction-gg::synapse0x24a1d50() {
   return (neuron0x248dec0()*0.955753);
}

double NNfunction-gg::synapse0x24a1d90() {
   return (neuron0x248e200()*-0.0295896);
}

double NNfunction-gg::synapse0x24a1dd0() {
   return (neuron0x248e540()*0.00314377);
}

double NNfunction-gg::synapse0x24a1e10() {
   return (neuron0x248e880()*-0.00677942);
}

double NNfunction-gg::synapse0x24a1e50() {
   return (neuron0x248ebc0()*-0.00560399);
}

double NNfunction-gg::synapse0x24a1e90() {
   return (neuron0x248ef00()*-0.0259157);
}

double NNfunction-gg::synapse0x24a1ed0() {
   return (neuron0x248f240()*-0.0034252);
}

double NNfunction-gg::synapse0x24a1f10() {
   return (neuron0x248f580()*0.000756378);
}

double NNfunction-gg::synapse0x24a1f50() {
   return (neuron0x248f8c0()*-0.128405);
}

double NNfunction-gg::synapse0x24a1f90() {
   return (neuron0x248fc00()*-0.149442);
}

double NNfunction-gg::synapse0x24a1fd0() {
   return (neuron0x248ff40()*-0.191028);
}

double NNfunction-gg::synapse0x24a2010() {
   return (neuron0x2490280()*-0.112543);
}

double NNfunction-gg::synapse0x24a2050() {
   return (neuron0x24905c0()*-0.0467089);
}

double NNfunction-gg::synapse0x24a1ae0() {
   return (neuron0x2490900()*-0.0770762);
}

double NNfunction-gg::synapse0x24a1b20() {
   return (neuron0x2490e60()*-0.0590758);
}

double NNfunction-gg::synapse0x24a21a0() {
   return (neuron0x2491080()*-0.0408597);
}

double NNfunction-gg::synapse0x24a21e0() {
   return (neuron0x24913c0()*-0.045863);
}

double NNfunction-gg::synapse0x24a2220() {
   return (neuron0x2491700()*0.0406626);
}

double NNfunction-gg::synapse0x24a2260() {
   return (neuron0x2491a40()*-0.00173405);
}

double NNfunction-gg::synapse0x24a22a0() {
   return (neuron0x2491d80()*-0.0130132);
}

double NNfunction-gg::synapse0x24a22e0() {
   return (neuron0x24920c0()*-0.0218926);
}

double NNfunction-gg::synapse0x24a2660() {
   return (neuron0x248d500()*-0.0257822);
}

double NNfunction-gg::synapse0x24a26a0() {
   return (neuron0x248d840()*-0.00365062);
}

double NNfunction-gg::synapse0x24a26e0() {
   return (neuron0x248db80()*-0.00394037);
}

double NNfunction-gg::synapse0x24a2720() {
   return (neuron0x248dec0()*1.22052);
}

double NNfunction-gg::synapse0x24a2760() {
   return (neuron0x248e200()*-0.0159213);
}

double NNfunction-gg::synapse0x24a27a0() {
   return (neuron0x248e540()*-0.0206178);
}

double NNfunction-gg::synapse0x24a27e0() {
   return (neuron0x248e880()*-0.0084134);
}

double NNfunction-gg::synapse0x24a2820() {
   return (neuron0x248ebc0()*-0.00851166);
}

double NNfunction-gg::synapse0x24a2860() {
   return (neuron0x248ef00()*-0.0161949);
}

double NNfunction-gg::synapse0x24a28a0() {
   return (neuron0x248f240()*0.000195322);
}

double NNfunction-gg::synapse0x24a28e0() {
   return (neuron0x248f580()*-0.0174523);
}

double NNfunction-gg::synapse0x24a2920() {
   return (neuron0x248f8c0()*1.3804);
}

double NNfunction-gg::synapse0x24a2960() {
   return (neuron0x248fc00()*-0.0544324);
}

double NNfunction-gg::synapse0x24a29a0() {
   return (neuron0x248ff40()*0.00306738);
}

double NNfunction-gg::synapse0x24a29e0() {
   return (neuron0x2490280()*-0.0805517);
}

double NNfunction-gg::synapse0x24a2a20() {
   return (neuron0x24905c0()*-0.0586543);
}

double NNfunction-gg::synapse0x24a24b0() {
   return (neuron0x2490900()*-0.000655816);
}

double NNfunction-gg::synapse0x24a24f0() {
   return (neuron0x2490e60()*-0.104738);
}

double NNfunction-gg::synapse0x24a2b70() {
   return (neuron0x2491080()*-0.0337463);
}

double NNfunction-gg::synapse0x24a2bb0() {
   return (neuron0x24913c0()*-0.0296094);
}

double NNfunction-gg::synapse0x24a2bf0() {
   return (neuron0x2491700()*0.00364806);
}

double NNfunction-gg::synapse0x24a2c30() {
   return (neuron0x2491a40()*-0.00607016);
}

double NNfunction-gg::synapse0x24a2c70() {
   return (neuron0x2491d80()*-0.00168704);
}

double NNfunction-gg::synapse0x24a2cb0() {
   return (neuron0x24920c0()*-0.00939002);
}

double NNfunction-gg::synapse0x24b4b80() {
   return (neuron0x248d500()*0.349029);
}

double NNfunction-gg::synapse0x24b4bc0() {
   return (neuron0x248d840()*-0.190356);
}

double NNfunction-gg::synapse0x24b4c00() {
   return (neuron0x248db80()*0.219401);
}

double NNfunction-gg::synapse0x24b4c40() {
   return (neuron0x248dec0()*-0.86975);
}

double NNfunction-gg::synapse0x24b4c80() {
   return (neuron0x248e200()*0.313517);
}

double NNfunction-gg::synapse0x24b4cc0() {
   return (neuron0x248e540()*-0.509364);
}

double NNfunction-gg::synapse0x24b4d00() {
   return (neuron0x248e880()*-0.317396);
}

double NNfunction-gg::synapse0x24b4d40() {
   return (neuron0x248ebc0()*0.412208);
}

double NNfunction-gg::synapse0x24b4d80() {
   return (neuron0x248ef00()*-0.048658);
}

double NNfunction-gg::synapse0x24b4dc0() {
   return (neuron0x248f240()*0.228315);
}

double NNfunction-gg::synapse0x24b4e00() {
   return (neuron0x248f580()*-0.204676);
}

double NNfunction-gg::synapse0x24b4e40() {
   return (neuron0x248f8c0()*-0.0203169);
}

double NNfunction-gg::synapse0x24b4e80() {
   return (neuron0x248fc00()*-0.792495);
}

double NNfunction-gg::synapse0x24b4ec0() {
   return (neuron0x248ff40()*0.532776);
}

double NNfunction-gg::synapse0x24b4f00() {
   return (neuron0x2490280()*0.456309);
}

double NNfunction-gg::synapse0x24b4f40() {
   return (neuron0x24905c0()*-0.04141);
}

double NNfunction-gg::synapse0x24a2cf0() {
   return (neuron0x2490900()*-0.359963);
}

double NNfunction-gg::synapse0x24a2d30() {
   return (neuron0x2490e60()*-0.0669618);
}

double NNfunction-gg::synapse0x24b5090() {
   return (neuron0x2491080()*0.271255);
}

double NNfunction-gg::synapse0x24b50d0() {
   return (neuron0x24913c0()*-0.0333674);
}

double NNfunction-gg::synapse0x24b5110() {
   return (neuron0x2491700()*-0.19967);
}

double NNfunction-gg::synapse0x24b5150() {
   return (neuron0x2491a40()*0.0065028);
}

double NNfunction-gg::synapse0x24b5190() {
   return (neuron0x2491d80()*-0.335672);
}

double NNfunction-gg::synapse0x24b51d0() {
   return (neuron0x24920c0()*-0.0052959);
}

double NNfunction-gg::synapse0x24b5550() {
   return (neuron0x248d500()*-0.209148);
}

double NNfunction-gg::synapse0x24b5590() {
   return (neuron0x248d840()*0.0632991);
}

double NNfunction-gg::synapse0x24b55d0() {
   return (neuron0x248db80()*-0.581726);
}

double NNfunction-gg::synapse0x24b5610() {
   return (neuron0x248dec0()*-2.54241);
}

double NNfunction-gg::synapse0x24b5650() {
   return (neuron0x248e200()*0.445671);
}

double NNfunction-gg::synapse0x24b5690() {
   return (neuron0x248e540()*-0.310489);
}

double NNfunction-gg::synapse0x24b56d0() {
   return (neuron0x248e880()*-0.346538);
}

double NNfunction-gg::synapse0x24b5710() {
   return (neuron0x248ebc0()*-0.0303509);
}

double NNfunction-gg::synapse0x24b5750() {
   return (neuron0x248ef00()*0.223746);
}

double NNfunction-gg::synapse0x24b5790() {
   return (neuron0x248f240()*-0.127415);
}

double NNfunction-gg::synapse0x24b57d0() {
   return (neuron0x248f580()*-0.0334319);
}

double NNfunction-gg::synapse0x24b5810() {
   return (neuron0x248f8c0()*-0.05014);
}

double NNfunction-gg::synapse0x24b5850() {
   return (neuron0x248fc00()*0.0111734);
}

double NNfunction-gg::synapse0x24b5890() {
   return (neuron0x248ff40()*-0.0271942);
}

double NNfunction-gg::synapse0x24b58d0() {
   return (neuron0x2490280()*-0.43579);
}

double NNfunction-gg::synapse0x24b5910() {
   return (neuron0x24905c0()*0.0183499);
}

double NNfunction-gg::synapse0x24b53a0() {
   return (neuron0x2490900()*-0.236869);
}

double NNfunction-gg::synapse0x24b53e0() {
   return (neuron0x2490e60()*0.036334);
}

double NNfunction-gg::synapse0x24b5a60() {
   return (neuron0x2491080()*-0.310676);
}

double NNfunction-gg::synapse0x24b5aa0() {
   return (neuron0x24913c0()*-0.179951);
}

double NNfunction-gg::synapse0x24b5ae0() {
   return (neuron0x2491700()*-0.246751);
}

double NNfunction-gg::synapse0x24b5b20() {
   return (neuron0x2491a40()*-0.0194167);
}

double NNfunction-gg::synapse0x24b5b60() {
   return (neuron0x2491d80()*0.406559);
}

double NNfunction-gg::synapse0x24b5ba0() {
   return (neuron0x24920c0()*-0.0210697);
}

double NNfunction-gg::synapse0x24b5f20() {
   return (neuron0x248d500()*-0.389319);
}

double NNfunction-gg::synapse0x24b5f60() {
   return (neuron0x248d840()*0.114046);
}

double NNfunction-gg::synapse0x24b5fa0() {
   return (neuron0x248db80()*0.017656);
}

double NNfunction-gg::synapse0x24b5fe0() {
   return (neuron0x248dec0()*0.37975);
}

double NNfunction-gg::synapse0x24b6020() {
   return (neuron0x248e200()*-0.398381);
}

double NNfunction-gg::synapse0x24b6060() {
   return (neuron0x248e540()*0.224218);
}

double NNfunction-gg::synapse0x24b60a0() {
   return (neuron0x248e880()*-0.245856);
}

double NNfunction-gg::synapse0x24b60e0() {
   return (neuron0x248ebc0()*-0.0610134);
}

double NNfunction-gg::synapse0x24b6120() {
   return (neuron0x248ef00()*0.0666263);
}

double NNfunction-gg::synapse0x24b6160() {
   return (neuron0x248f240()*-0.236239);
}

double NNfunction-gg::synapse0x24b61a0() {
   return (neuron0x248f580()*0.0649428);
}

double NNfunction-gg::synapse0x24b61e0() {
   return (neuron0x248f8c0()*-0.598651);
}

double NNfunction-gg::synapse0x24b6220() {
   return (neuron0x248fc00()*0.358549);
}

double NNfunction-gg::synapse0x24b6260() {
   return (neuron0x248ff40()*0.0728896);
}

double NNfunction-gg::synapse0x24b62a0() {
   return (neuron0x2490280()*-0.397102);
}

double NNfunction-gg::synapse0x24b62e0() {
   return (neuron0x24905c0()*-0.0022706);
}

double NNfunction-gg::synapse0x24b5d70() {
   return (neuron0x2490900()*0.360775);
}

double NNfunction-gg::synapse0x24b5db0() {
   return (neuron0x2490e60()*0.263343);
}

double NNfunction-gg::synapse0x24b6430() {
   return (neuron0x2491080()*0.178728);
}

double NNfunction-gg::synapse0x24b6470() {
   return (neuron0x24913c0()*0.146983);
}

double NNfunction-gg::synapse0x24b64b0() {
   return (neuron0x2491700()*-0.406862);
}

double NNfunction-gg::synapse0x24b64f0() {
   return (neuron0x2491a40()*-0.101358);
}

double NNfunction-gg::synapse0x24b6530() {
   return (neuron0x2491d80()*0.209413);
}

double NNfunction-gg::synapse0x24b6570() {
   return (neuron0x24920c0()*0.233347);
}

double NNfunction-gg::synapse0x24b68f0() {
   return (neuron0x248d500()*-0.0016929);
}

double NNfunction-gg::synapse0x24b6930() {
   return (neuron0x248d840()*0.00633195);
}

double NNfunction-gg::synapse0x24b6970() {
   return (neuron0x248db80()*0.00221724);
}

double NNfunction-gg::synapse0x24b69b0() {
   return (neuron0x248dec0()*0.788953);
}

double NNfunction-gg::synapse0x24b69f0() {
   return (neuron0x248e200()*-0.00873634);
}

double NNfunction-gg::synapse0x24b6a30() {
   return (neuron0x248e540()*-0.00182642);
}

double NNfunction-gg::synapse0x24b6a70() {
   return (neuron0x248e880()*0.00504069);
}

double NNfunction-gg::synapse0x24b6ab0() {
   return (neuron0x248ebc0()*-0.00395503);
}

double NNfunction-gg::synapse0x24b6af0() {
   return (neuron0x248ef00()*-7.89479e-05);
}

double NNfunction-gg::synapse0x24b6b30() {
   return (neuron0x248f240()*0.00420958);
}

double NNfunction-gg::synapse0x24b6b70() {
   return (neuron0x248f580()*0.00552155);
}

double NNfunction-gg::synapse0x24b6bb0() {
   return (neuron0x248f8c0()*0.271077);
}

double NNfunction-gg::synapse0x24b6bf0() {
   return (neuron0x248fc00()*-0.00369995);
}

double NNfunction-gg::synapse0x24b6c30() {
   return (neuron0x248ff40()*-0.01311);
}

double NNfunction-gg::synapse0x24b6c70() {
   return (neuron0x2490280()*-0.820473);
}

double NNfunction-gg::synapse0x24b6cb0() {
   return (neuron0x24905c0()*0.025117);
}

double NNfunction-gg::synapse0x24b6740() {
   return (neuron0x2490900()*-0.0120176);
}

double NNfunction-gg::synapse0x24b6780() {
   return (neuron0x2490e60()*0.0578735);
}

double NNfunction-gg::synapse0x24b6e00() {
   return (neuron0x2491080()*0.01079);
}

double NNfunction-gg::synapse0x24b6e40() {
   return (neuron0x24913c0()*0.00580322);
}

double NNfunction-gg::synapse0x24b6e80() {
   return (neuron0x2491700()*0.00608711);
}

double NNfunction-gg::synapse0x24b6ec0() {
   return (neuron0x2491a40()*-0.00196749);
}

double NNfunction-gg::synapse0x24b6f00() {
   return (neuron0x2491d80()*-0.000223532);
}

double NNfunction-gg::synapse0x24b6f40() {
   return (neuron0x24920c0()*-0.000865463);
}

double NNfunction-gg::synapse0x224d330() {
   return (neuron0x2492530()*-0.00288563);
}

double NNfunction-gg::synapse0x224d370() {
   return (neuron0x2492e80()*-0.0356804);
}

double NNfunction-gg::synapse0x24949f0() {
   return (neuron0x2493960()*-0.00299614);
}

double NNfunction-gg::synapse0x2494a30() {
   return (neuron0x2493400()*0.0798548);
}

double NNfunction-gg::synapse0x24953c0() {
   return (neuron0x2494740()*-0.274396);
}

double NNfunction-gg::synapse0x2495400() {
   return (neuron0x2495110()*4.34136);
}

double NNfunction-gg::synapse0x2496190() {
   return (neuron0x2495ee0()*0.00617908);
}

double NNfunction-gg::synapse0x24961d0() {
   return (neuron0x24968b0()*2.11738);
}

double NNfunction-gg::synapse0x2496b60() {
   return (neuron0x2497280()*0.101497);
}

double NNfunction-gg::synapse0x2496ba0() {
   return (neuron0x2497d60()*0.00489021);
}

double NNfunction-gg::synapse0x2497530() {
   return (neuron0x2498730()*0.00469104);
}

double NNfunction-gg::synapse0x2497570() {
   return (neuron0x2495810()*-1.23737);
}

double NNfunction-gg::synapse0x2498010() {
   return (neuron0x249a2e0()*-0.00239093);
}

double NNfunction-gg::synapse0x2498050() {
   return (neuron0x249acb0()*-0.00710123);
}

double NNfunction-gg::synapse0x24989e0() {
   return (neuron0x249b680()*-0.00546837);
}

double NNfunction-gg::synapse0x2498a20() {
   return (neuron0x249c050()*-0.00884593);
}

double NNfunction-gg::synapse0x2495ac0() {
   return (neuron0x249de60()*-0.00804406);
}

double NNfunction-gg::synapse0x2495b00() {
   return (neuron0x249e140()*-0.00690731);
}

double NNfunction-gg::synapse0x249a590() {
   return (neuron0x249eb10()*-0.00328576);
}

double NNfunction-gg::synapse0x249a5d0() {
   return (neuron0x249f4e0()*0.0064211);
}

double NNfunction-gg::synapse0x249af60() {
   return (neuron0x249feb0()*0.00777986);
}

double NNfunction-gg::synapse0x249afa0() {
   return (neuron0x24a0880()*-1.40996);
}

double NNfunction-gg::synapse0x249b930() {
   return (neuron0x24993d0()*0.00475428);
}

double NNfunction-gg::synapse0x249b970() {
   return (neuron0x2499da0()*0.501129);
}

double NNfunction-gg::synapse0x249c300() {
   return (neuron0x24a3610()*-0.405832);
}

double NNfunction-gg::synapse0x249c340() {
   return (neuron0x24a3fe0()*-0.232803);
}

double NNfunction-gg::synapse0x24904a0() {
   return (neuron0x24a49b0()*0.00796703);
}

double NNfunction-gg::synapse0x24904e0() {
   return (neuron0x24a5380()*0.0122719);
}

double NNfunction-gg::synapse0x249e3f0() {
   return (neuron0x24a5d50()*-1.318);
}

double NNfunction-gg::synapse0x249e430() {
   return (neuron0x24a6720()*0.254368);
}

double NNfunction-gg::synapse0x249edc0() {
   return (neuron0x24a70f0()*0.00287649);
}

double NNfunction-gg::synapse0x249ee00() {
   return (neuron0x24a7ac0()*0.00900526);
}

double NNfunction-gg::synapse0x249f790() {
   return (neuron0x249db50()*0.220119);
}

double NNfunction-gg::synapse0x249f7d0() {
   return (neuron0x24aa6a0()*-0.00148244);
}

double NNfunction-gg::synapse0x24a0160() {
   return (neuron0x24ab070()*-0.00728411);
}

double NNfunction-gg::synapse0x24a01a0() {
   return (neuron0x24aba40()*0.00844786);
}

double NNfunction-gg::synapse0x24a0b30() {
   return (neuron0x24ac410()*0.0196908);
}

double NNfunction-gg::synapse0x24a0b70() {
   return (neuron0x24acde0()*0.00106233);
}

double NNfunction-gg::synapse0x2499680() {
   return (neuron0x24ad7b0()*1.00479);
}

double NNfunction-gg::synapse0x24996c0() {
   return (neuron0x24ae180()*-0.00573673);
}

double NNfunction-gg::synapse0x24a2f30() {
   return (neuron0x24aeb50()*-0.000292638);
}

double NNfunction-gg::synapse0x24a2f70() {
   return (neuron0x24af730()*-0.00516577);
}

double NNfunction-gg::synapse0x24a38c0() {
   return (neuron0x24b0100()*0.00399596);
}

double NNfunction-gg::synapse0x24a3900() {
   return (neuron0x24a0f80()*-0.00133278);
}

double NNfunction-gg::synapse0x24a4290() {
   return (neuron0x24a1950()*0.89384);
}

double NNfunction-gg::synapse0x24a42d0() {
   return (neuron0x24a2320()*-0.117708);
}

double NNfunction-gg::synapse0x24a4c60() {
   return (neuron0x24b4960()*0.00540083);
}

double NNfunction-gg::synapse0x24a4ca0() {
   return (neuron0x24b5210()*-0.00567801);
}

double NNfunction-gg::synapse0x24a5630() {
   return (neuron0x24b5be0()*0.00149152);
}

double NNfunction-gg::synapse0x24a5670() {
   return (neuron0x24b65b0()*-0.743809);
}

double NNfunction-gg::synapse0x24a7d70() {
   return (neuron0x2492530()*0.489351);
}

double NNfunction-gg::synapse0x24a7db0() {
   return (neuron0x2492e80()*0.77801);
}

double NNfunction-gg::synapse0x249d330() {
   return (neuron0x2493960()*1.26674);
}

double NNfunction-gg::synapse0x249d370() {
   return (neuron0x2493400()*-0.110937);
}

double NNfunction-gg::synapse0x24aa950() {
   return (neuron0x2494740()*0.114538);
}

double NNfunction-gg::synapse0x24aa990() {
   return (neuron0x2495110()*-0.581148);
}

double NNfunction-gg::synapse0x24ab320() {
   return (neuron0x2495ee0()*-0.222728);
}

double NNfunction-gg::synapse0x24ab360() {
   return (neuron0x24968b0()*0.177679);
}

double NNfunction-gg::synapse0x24abcf0() {
   return (neuron0x2497280()*-0.534787);
}

double NNfunction-gg::synapse0x24abd30() {
   return (neuron0x2497d60()*1.83261);
}

double NNfunction-gg::synapse0x24ac6c0() {
   return (neuron0x2498730()*0.531207);
}

double NNfunction-gg::synapse0x24ac700() {
   return (neuron0x2495810()*0.552147);
}

double NNfunction-gg::synapse0x24ad090() {
   return (neuron0x249a2e0()*0.944004);
}

double NNfunction-gg::synapse0x24ad0d0() {
   return (neuron0x249acb0()*-0.0344148);
}

double NNfunction-gg::synapse0x24ada60() {
   return (neuron0x249b680()*1.24661);
}

double NNfunction-gg::synapse0x24adaa0() {
   return (neuron0x249c050()*0.0170446);
}

double NNfunction-gg::synapse0x24ae430() {
   return (neuron0x249de60()*0.666919);
}

double NNfunction-gg::synapse0x24ae470() {
   return (neuron0x249e140()*1.13254);
}

double NNfunction-gg::synapse0x24aee00() {
   return (neuron0x249eb10()*1.27799);
}

double NNfunction-gg::synapse0x24aee40() {
   return (neuron0x249f4e0()*1.29579);
}

double NNfunction-gg::synapse0x24af9e0() {
   return (neuron0x249feb0()*0.113908);
}

double NNfunction-gg::synapse0x24afa20() {
   return (neuron0x24a0880()*1.32961);
}

double NNfunction-gg::synapse0x24b03b0() {
   return (neuron0x24993d0()*1.13321);
}

double NNfunction-gg::synapse0x24b03f0() {
   return (neuron0x2499da0()*0.721948);
}

double NNfunction-gg::synapse0x24a1230() {
   return (neuron0x24a3610()*0.984238);
}

double NNfunction-gg::synapse0x24a1270() {
   return (neuron0x24a3fe0()*1.65);
}

double NNfunction-gg::synapse0x24a1c00() {
   return (neuron0x24a49b0()*0.353806);
}

double NNfunction-gg::synapse0x24a1c40() {
   return (neuron0x24a5380()*0.0656088);
}

double NNfunction-gg::synapse0x24a25d0() {
   return (neuron0x24a5d50()*0.477897);
}

double NNfunction-gg::synapse0x24a2610() {
   return (neuron0x24a6720()*0.693276);
}

double NNfunction-gg::synapse0x24b4af0() {
   return (neuron0x24a70f0()*0.652974);
}

double NNfunction-gg::synapse0x24b4b30() {
   return (neuron0x24a7ac0()*1.67611);
}

double NNfunction-gg::synapse0x24b54c0() {
   return (neuron0x249db50()*-0.104656);
}

double NNfunction-gg::synapse0x24b5500() {
   return (neuron0x24aa6a0()*0.177783);
}

double NNfunction-gg::synapse0x24b5e90() {
   return (neuron0x24ab070()*0.0318277);
}

double NNfunction-gg::synapse0x24b5ed0() {
   return (neuron0x24aba40()*0.488516);
}

double NNfunction-gg::synapse0x24b6860() {
   return (neuron0x24ac410()*0.554672);
}

double NNfunction-gg::synapse0x24b68a0() {
   return (neuron0x24acde0()*0.603539);
}

double NNfunction-gg::synapse0x2492750() {
   return (neuron0x24ad7b0()*-0.798014);
}

double NNfunction-gg::synapse0x2492790() {
   return (neuron0x24ae180()*1.13874);
}

double NNfunction-gg::synapse0x24a6000() {
   return (neuron0x24aeb50()*0.918103);
}

double NNfunction-gg::synapse0x24a6040() {
   return (neuron0x24af730()*0.885059);
}

double NNfunction-gg::synapse0x24b6f80() {
   return (neuron0x24b0100()*-0.676082);
}

double NNfunction-gg::synapse0x24b6fc0() {
   return (neuron0x24a0f80()*0.470098);
}

double NNfunction-gg::synapse0x24b7000() {
   return (neuron0x24a1950()*-0.785938);
}

double NNfunction-gg::synapse0x24b7040() {
   return (neuron0x24a2320()*1.18263);
}

double NNfunction-gg::synapse0x24bdef0() {
   return (neuron0x24b4960()*0.888964);
}

double NNfunction-gg::synapse0x24bdf30() {
   return (neuron0x24b5210()*0.309114);
}

double NNfunction-gg::synapse0x24bdf70() {
   return (neuron0x24b5be0()*0.369293);
}

double NNfunction-gg::synapse0x24bdfb0() {
   return (neuron0x24b65b0()*0.363552);
}

double NNfunction-gg::synapse0x24be330() {
   return (neuron0x2492530()*0.148573);
}

double NNfunction-gg::synapse0x24be370() {
   return (neuron0x2492e80()*-0.529587);
}

double NNfunction-gg::synapse0x24be3b0() {
   return (neuron0x2493960()*-1.03797);
}

double NNfunction-gg::synapse0x24be3f0() {
   return (neuron0x2493400()*0.0490105);
}

double NNfunction-gg::synapse0x24be430() {
   return (neuron0x2494740()*-1.47284);
}

double NNfunction-gg::synapse0x24be470() {
   return (neuron0x2495110()*7.47137);
}

double NNfunction-gg::synapse0x24be4b0() {
   return (neuron0x2495ee0()*1.31857);
}

double NNfunction-gg::synapse0x24be4f0() {
   return (neuron0x24968b0()*0.957853);
}

double NNfunction-gg::synapse0x24be530() {
   return (neuron0x2497280()*1.2458);
}

double NNfunction-gg::synapse0x24be570() {
   return (neuron0x2497d60()*-0.751168);
}

double NNfunction-gg::synapse0x24be5b0() {
   return (neuron0x2498730()*0.853379);
}

double NNfunction-gg::synapse0x24be5f0() {
   return (neuron0x2495810()*5.59474);
}

double NNfunction-gg::synapse0x24be630() {
   return (neuron0x249a2e0()*-1.2951);
}

double NNfunction-gg::synapse0x24be670() {
   return (neuron0x249acb0()*0.73317);
}

double NNfunction-gg::synapse0x24be6b0() {
   return (neuron0x249b680()*-0.829141);
}

double NNfunction-gg::synapse0x24be6f0() {
   return (neuron0x249c050()*-1.66436);
}

double NNfunction-gg::synapse0x24be180() {
   return (neuron0x249de60()*0.00969613);
}

double NNfunction-gg::synapse0x24be1c0() {
   return (neuron0x249e140()*-1.13562);
}

double NNfunction-gg::synapse0x24be840() {
   return (neuron0x249eb10()*-1.33764);
}

double NNfunction-gg::synapse0x24be880() {
   return (neuron0x249f4e0()*-0.124932);
}

double NNfunction-gg::synapse0x24be8c0() {
   return (neuron0x249feb0()*0.883279);
}

double NNfunction-gg::synapse0x24be900() {
   return (neuron0x24a0880()*-6.52827);
}

double NNfunction-gg::synapse0x24be940() {
   return (neuron0x24993d0()*-0.416282);
}

double NNfunction-gg::synapse0x24be980() {
   return (neuron0x2499da0()*1.42623);
}

double NNfunction-gg::synapse0x24be9c0() {
   return (neuron0x24a3610()*-1.37776);
}

double NNfunction-gg::synapse0x24bea00() {
   return (neuron0x24a3fe0()*-0.203577);
}

double NNfunction-gg::synapse0x24bea40() {
   return (neuron0x24a49b0()*0.908207);
}

double NNfunction-gg::synapse0x24bea80() {
   return (neuron0x24a5380()*-0.276954);
}

double NNfunction-gg::synapse0x24beac0() {
   return (neuron0x24a5d50()*-2.02679);
}

double NNfunction-gg::synapse0x24beb00() {
   return (neuron0x24a6720()*1.10786);
}

double NNfunction-gg::synapse0x24beb40() {
   return (neuron0x24a70f0()*1.22006);
}

double NNfunction-gg::synapse0x24beb80() {
   return (neuron0x24a7ac0()*-0.55978);
}

double NNfunction-gg::synapse0x24be730() {
   return (neuron0x249db50()*1.65128);
}

double NNfunction-gg::synapse0x24be770() {
   return (neuron0x24aa6a0()*-1.1706);
}

double NNfunction-gg::synapse0x24be7b0() {
   return (neuron0x24ab070()*-1.00184);
}

double NNfunction-gg::synapse0x24be7f0() {
   return (neuron0x24aba40()*0.65685);
}

double NNfunction-gg::synapse0x24bedd0() {
   return (neuron0x24ac410()*-1.44066);
}

double NNfunction-gg::synapse0x24bee10() {
   return (neuron0x24acde0()*-1.1564);
}

double NNfunction-gg::synapse0x24bee50() {
   return (neuron0x24ad7b0()*2.8923);
}

double NNfunction-gg::synapse0x24bee90() {
   return (neuron0x24ae180()*1.14561);
}

double NNfunction-gg::synapse0x24beed0() {
   return (neuron0x24aeb50()*-0.635149);
}

double NNfunction-gg::synapse0x24bef10() {
   return (neuron0x24af730()*-0.886881);
}

double NNfunction-gg::synapse0x24bef50() {
   return (neuron0x24b0100()*-1.03329);
}

double NNfunction-gg::synapse0x24bef90() {
   return (neuron0x24a0f80()*0.980789);
}

double NNfunction-gg::synapse0x24befd0() {
   return (neuron0x24a1950()*-0.761407);
}

double NNfunction-gg::synapse0x24bf010() {
   return (neuron0x24a2320()*-2.32459);
}

double NNfunction-gg::synapse0x24bf050() {
   return (neuron0x24b4960()*1.03549);
}

double NNfunction-gg::synapse0x24bf090() {
   return (neuron0x24b5210()*2.42007);
}

double NNfunction-gg::synapse0x24bf0d0() {
   return (neuron0x24b5be0()*-0.942123);
}

double NNfunction-gg::synapse0x24bf110() {
   return (neuron0x24b65b0()*-1.22957);
}

double NNfunction-gg::synapse0x24bf490() {
   return (neuron0x2492530()*-0.0052702);
}

double NNfunction-gg::synapse0x24bf4d0() {
   return (neuron0x2492e80()*0.0243933);
}

double NNfunction-gg::synapse0x24bf510() {
   return (neuron0x2493960()*0.000411881);
}

double NNfunction-gg::synapse0x24bf550() {
   return (neuron0x2493400()*-0.0751742);
}

double NNfunction-gg::synapse0x24bf590() {
   return (neuron0x2494740()*-3.63165);
}

double NNfunction-gg::synapse0x24bf5d0() {
   return (neuron0x2495110()*-4.20566);
}

double NNfunction-gg::synapse0x24bf610() {
   return (neuron0x2495ee0()*-0.00225498);
}

double NNfunction-gg::synapse0x24bf650() {
   return (neuron0x24968b0()*-0.896891);
}

double NNfunction-gg::synapse0x24bf690() {
   return (neuron0x2497280()*1.12461);
}

double NNfunction-gg::synapse0x24bf6d0() {
   return (neuron0x2497d60()*-7.76133e-05);
}

double NNfunction-gg::synapse0x24bf710() {
   return (neuron0x2498730()*-0.00394482);
}

double NNfunction-gg::synapse0x24bf750() {
   return (neuron0x2495810()*10.0742);
}

double NNfunction-gg::synapse0x24bf790() {
   return (neuron0x249a2e0()*0.000204346);
}

double NNfunction-gg::synapse0x24bf7d0() {
   return (neuron0x249acb0()*0.00175042);
}

double NNfunction-gg::synapse0x24bf810() {
   return (neuron0x249b680()*0.00550731);
}

double NNfunction-gg::synapse0x24bf850() {
   return (neuron0x249c050()*-0.00115087);
}

double NNfunction-gg::synapse0x24bf2e0() {
   return (neuron0x249de60()*0.00025493);
}

double NNfunction-gg::synapse0x24bf320() {
   return (neuron0x249e140()*-0.000537544);
}

double NNfunction-gg::synapse0x24bf9a0() {
   return (neuron0x249eb10()*0.000489996);
}

double NNfunction-gg::synapse0x24bf9e0() {
   return (neuron0x249f4e0()*-0.00222069);
}

double NNfunction-gg::synapse0x24bfa20() {
   return (neuron0x249feb0()*-8.37961e-05);
}

double NNfunction-gg::synapse0x24bfa60() {
   return (neuron0x24a0880()*-5.02292);
}

double NNfunction-gg::synapse0x24bfaa0() {
   return (neuron0x24993d0()*0.00279847);
}

double NNfunction-gg::synapse0x24bfae0() {
   return (neuron0x2499da0()*0.21133);
}

double NNfunction-gg::synapse0x24bfb20() {
   return (neuron0x24a3610()*-0.823784);
}

double NNfunction-gg::synapse0x24bfb60() {
   return (neuron0x24a3fe0()*0.170678);
}

double NNfunction-gg::synapse0x24bfba0() {
   return (neuron0x24a49b0()*-0.00259628);
}

double NNfunction-gg::synapse0x24bfbe0() {
   return (neuron0x24a5380()*-0.00507543);
}

double NNfunction-gg::synapse0x24bfc20() {
   return (neuron0x24a5d50()*-0.776555);
}

double NNfunction-gg::synapse0x24bfc60() {
   return (neuron0x24a6720()*0.384243);
}

double NNfunction-gg::synapse0x24bfca0() {
   return (neuron0x24a70f0()*0.000397621);
}

double NNfunction-gg::synapse0x24bfce0() {
   return (neuron0x24a7ac0()*0.00436202);
}

double NNfunction-gg::synapse0x24bf890() {
   return (neuron0x249db50()*0.0759387);
}

double NNfunction-gg::synapse0x24bf8d0() {
   return (neuron0x24aa6a0()*0.00268648);
}

double NNfunction-gg::synapse0x24bf910() {
   return (neuron0x24ab070()*0.0173905);
}

double NNfunction-gg::synapse0x24bf950() {
   return (neuron0x24aba40()*-0.00740411);
}

double NNfunction-gg::synapse0x24bff30() {
   return (neuron0x24ac410()*0.0148087);
}

double NNfunction-gg::synapse0x24bff70() {
   return (neuron0x24acde0()*0.00747073);
}

double NNfunction-gg::synapse0x24bffb0() {
   return (neuron0x24ad7b0()*1.7623);
}

double NNfunction-gg::synapse0x24bfff0() {
   return (neuron0x24ae180()*-0.00382856);
}

double NNfunction-gg::synapse0x24c0030() {
   return (neuron0x24aeb50()*0.00340494);
}

double NNfunction-gg::synapse0x24c0070() {
   return (neuron0x24af730()*0.000189468);
}

double NNfunction-gg::synapse0x24c00b0() {
   return (neuron0x24b0100()*0.0076022);
}

double NNfunction-gg::synapse0x24c00f0() {
   return (neuron0x24a0f80()*-0.00256385);
}

double NNfunction-gg::synapse0x24c0130() {
   return (neuron0x24a1950()*-0.294349);
}

double NNfunction-gg::synapse0x24c0170() {
   return (neuron0x24a2320()*-0.230473);
}

double NNfunction-gg::synapse0x24c01b0() {
   return (neuron0x24b4960()*-0.0130625);
}

double NNfunction-gg::synapse0x24c01f0() {
   return (neuron0x24b5210()*-0.00052472);
}

double NNfunction-gg::synapse0x24c0230() {
   return (neuron0x24b5be0()*-0.00167092);
}

double NNfunction-gg::synapse0x24c0270() {
   return (neuron0x24b65b0()*-0.399516);
}

double NNfunction-gg::synapse0x24c05f0() {
   return (neuron0x2492530()*-1.25118);
}

double NNfunction-gg::synapse0x24c0630() {
   return (neuron0x2492e80()*-1.18244);
}

double NNfunction-gg::synapse0x24c0670() {
   return (neuron0x2493960()*-0.987099);
}

double NNfunction-gg::synapse0x24c06b0() {
   return (neuron0x2493400()*0.855204);
}

double NNfunction-gg::synapse0x24c06f0() {
   return (neuron0x2494740()*0.718484);
}

double NNfunction-gg::synapse0x24c0730() {
   return (neuron0x2495110()*-0.133252);
}

double NNfunction-gg::synapse0x24c0770() {
   return (neuron0x2495ee0()*-1.17262);
}

double NNfunction-gg::synapse0x24c07b0() {
   return (neuron0x24968b0()*-0.636757);
}

double NNfunction-gg::synapse0x24c07f0() {
   return (neuron0x2497280()*-0.172569);
}

double NNfunction-gg::synapse0x24c0830() {
   return (neuron0x2497d60()*0.141281);
}

double NNfunction-gg::synapse0x24c0870() {
   return (neuron0x2498730()*-0.651428);
}

double NNfunction-gg::synapse0x24c08b0() {
   return (neuron0x2495810()*-0.702575);
}

double NNfunction-gg::synapse0x24c08f0() {
   return (neuron0x249a2e0()*-0.572232);
}

double NNfunction-gg::synapse0x24c0930() {
   return (neuron0x249acb0()*-1.32116);
}

double NNfunction-gg::synapse0x24c0970() {
   return (neuron0x249b680()*-1.28224);
}

double NNfunction-gg::synapse0x24c09b0() {
   return (neuron0x249c050()*0.251679);
}

double NNfunction-gg::synapse0x24c0440() {
   return (neuron0x249de60()*-1.2077);
}

double NNfunction-gg::synapse0x24c0480() {
   return (neuron0x249e140()*-0.830246);
}

double NNfunction-gg::synapse0x24c0b00() {
   return (neuron0x249eb10()*-0.964073);
}

double NNfunction-gg::synapse0x24c0b40() {
   return (neuron0x249f4e0()*0.267445);
}

double NNfunction-gg::synapse0x24c0b80() {
   return (neuron0x249feb0()*0.903385);
}

double NNfunction-gg::synapse0x24c0bc0() {
   return (neuron0x24a0880()*-0.0166609);
}

double NNfunction-gg::synapse0x24c0c00() {
   return (neuron0x24993d0()*0.338782);
}

double NNfunction-gg::synapse0x24c0c40() {
   return (neuron0x2499da0()*-0.864082);
}

double NNfunction-gg::synapse0x24c0c80() {
   return (neuron0x24a3610()*-1.2674);
}

double NNfunction-gg::synapse0x24c0cc0() {
   return (neuron0x24a3fe0()*-1.30815);
}

double NNfunction-gg::synapse0x24c0d00() {
   return (neuron0x24a49b0()*-0.299108);
}

double NNfunction-gg::synapse0x24c0d40() {
   return (neuron0x24a5380()*1.15306);
}

double NNfunction-gg::synapse0x24c0d80() {
   return (neuron0x24a5d50()*-0.267307);
}

double NNfunction-gg::synapse0x24c0dc0() {
   return (neuron0x24a6720()*-0.16223);
}

double NNfunction-gg::synapse0x24c0e00() {
   return (neuron0x24a70f0()*-1.24426);
}

double NNfunction-gg::synapse0x24c0e40() {
   return (neuron0x24a7ac0()*-1.23874);
}

double NNfunction-gg::synapse0x24c09f0() {
   return (neuron0x249db50()*-0.792711);
}

double NNfunction-gg::synapse0x24c0a30() {
   return (neuron0x24aa6a0()*0.733991);
}

double NNfunction-gg::synapse0x24c0a70() {
   return (neuron0x24ab070()*-1.05522);
}

double NNfunction-gg::synapse0x24c0ab0() {
   return (neuron0x24aba40()*-0.397967);
}

double NNfunction-gg::synapse0x24c1090() {
   return (neuron0x24ac410()*0.371359);
}

double NNfunction-gg::synapse0x24c10d0() {
   return (neuron0x24acde0()*-0.856728);
}

double NNfunction-gg::synapse0x24c1110() {
   return (neuron0x24ad7b0()*-0.255434);
}

double NNfunction-gg::synapse0x24c1150() {
   return (neuron0x24ae180()*-1.21114);
}

double NNfunction-gg::synapse0x24c1190() {
   return (neuron0x24aeb50()*0.341694);
}

double NNfunction-gg::synapse0x24c11d0() {
   return (neuron0x24af730()*-1.57534);
}

double NNfunction-gg::synapse0x24c1210() {
   return (neuron0x24b0100()*1.17008);
}

double NNfunction-gg::synapse0x24c1250() {
   return (neuron0x24a0f80()*-0.886004);
}

double NNfunction-gg::synapse0x24c1290() {
   return (neuron0x24a1950()*1.32247);
}

double NNfunction-gg::synapse0x24c12d0() {
   return (neuron0x24a2320()*-0.631646);
}

double NNfunction-gg::synapse0x24c1310() {
   return (neuron0x24b4960()*-0.827048);
}

double NNfunction-gg::synapse0x24c1350() {
   return (neuron0x24b5210()*-0.0650182);
}

double NNfunction-gg::synapse0x24c1390() {
   return (neuron0x24b5be0()*0.139516);
}

double NNfunction-gg::synapse0x24c13d0() {
   return (neuron0x24b65b0()*-0.447906);
}

double NNfunction-gg::synapse0x24c1630() {
   return (neuron0x24bd7b0()*13.7764);
}

double NNfunction-gg::synapse0x24c1670() {
   return (neuron0x24bdb50()*-5.04513);
}

double NNfunction-gg::synapse0x24c16b0() {
   return (neuron0x24bdff0()*7.40261);
}

double NNfunction-gg::synapse0x24c16f0() {
   return (neuron0x24bf150()*-20.8546);
}

double NNfunction-gg::synapse0x24c1730() {
   return (neuron0x24c02b0()*9.02983);
}

