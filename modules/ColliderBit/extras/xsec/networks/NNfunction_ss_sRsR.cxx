#include "NNfunction_ss_sRsR.h"
#include <cmath>

double NNfunction_ss_sRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8822)/15.0582;
   input1 = (in1 - 30.7749)/876.44;
   input2 = (in2 - 445.355)/549.532;
   input3 = (in3 - 136.432)/679.9;
   input4 = (in4 - 781.865)/809.368;
   input5 = (in5 - 659.82)/772.752;
   input6 = (in6 - 671.762)/783.85;
   input7 = (in7 - 670.158)/771.189;
   input8 = (in8 - 670.023)/808.221;
   input9 = (in9 - 659.016)/792.007;
   input10 = (in10 - 694.888)/814.717;
   input11 = (in11 - 631.721)/676.682;
   input12 = (in12 - 637.112)/684.99;
   input13 = (in13 - 471.609)/408.365;
   input14 = (in14 - 625.338)/639.355;
   input15 = (in15 - 625.078)/639.201;
   input16 = (in16 - 456.019)/447.985;
   input17 = (in17 - 650.336)/706.844;
   input18 = (in18 - 389.293)/248.335;
   input19 = (in19 - 667.351)/703.704;
   input20 = (in20 - -125.68)/416.265;
   input21 = (in21 - -152.794)/946.957;
   input22 = (in22 - 5.74157)/956.249;
   input23 = (in23 - -76.7089)/515.673;
   switch(index) {
     case 0:
         return neuron0x348c080();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.8822)/15.0582;
   input1 = (input[1] - 30.7749)/876.44;
   input2 = (input[2] - 445.355)/549.532;
   input3 = (input[3] - 136.432)/679.9;
   input4 = (input[4] - 781.865)/809.368;
   input5 = (input[5] - 659.82)/772.752;
   input6 = (input[6] - 671.762)/783.85;
   input7 = (input[7] - 670.158)/771.189;
   input8 = (input[8] - 670.023)/808.221;
   input9 = (input[9] - 659.016)/792.007;
   input10 = (input[10] - 694.888)/814.717;
   input11 = (input[11] - 631.721)/676.682;
   input12 = (input[12] - 637.112)/684.99;
   input13 = (input[13] - 471.609)/408.365;
   input14 = (input[14] - 625.338)/639.355;
   input15 = (input[15] - 625.078)/639.201;
   input16 = (input[16] - 456.019)/447.985;
   input17 = (input[17] - 650.336)/706.844;
   input18 = (input[18] - 389.293)/248.335;
   input19 = (input[19] - 667.351)/703.704;
   input20 = (input[20] - -125.68)/416.265;
   input21 = (input[21] - -152.794)/946.957;
   input22 = (input[22] - 5.74157)/956.249;
   input23 = (input[23] - -76.7089)/515.673;
   switch(index) {
     case 0:
         return neuron0x348c080();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRsR::neuron0x3458170() {
   return input0;
}

double NNfunction_ss_sRsR::neuron0x34584b0() {
   return input1;
}

double NNfunction_ss_sRsR::neuron0x34587f0() {
   return input2;
}

double NNfunction_ss_sRsR::neuron0x3458b30() {
   return input3;
}

double NNfunction_ss_sRsR::neuron0x3458e70() {
   return input4;
}

double NNfunction_ss_sRsR::neuron0x34591b0() {
   return input5;
}

double NNfunction_ss_sRsR::neuron0x34594f0() {
   return input6;
}

double NNfunction_ss_sRsR::neuron0x3459830() {
   return input7;
}

double NNfunction_ss_sRsR::neuron0x3459b70() {
   return input8;
}

double NNfunction_ss_sRsR::neuron0x3459eb0() {
   return input9;
}

double NNfunction_ss_sRsR::neuron0x345a1f0() {
   return input10;
}

double NNfunction_ss_sRsR::neuron0x345a530() {
   return input11;
}

double NNfunction_ss_sRsR::neuron0x345a870() {
   return input12;
}

double NNfunction_ss_sRsR::neuron0x345abb0() {
   return input13;
}

double NNfunction_ss_sRsR::neuron0x345aef0() {
   return input14;
}

double NNfunction_ss_sRsR::neuron0x345b230() {
   return input15;
}

double NNfunction_ss_sRsR::neuron0x345b570() {
   return input16;
}

double NNfunction_ss_sRsR::neuron0x345bad0() {
   return input17;
}

double NNfunction_ss_sRsR::neuron0x345bcf0() {
   return input18;
}

double NNfunction_ss_sRsR::neuron0x345c030() {
   return input19;
}

double NNfunction_ss_sRsR::neuron0x345c370() {
   return input20;
}

double NNfunction_ss_sRsR::neuron0x345c6b0() {
   return input21;
}

double NNfunction_ss_sRsR::neuron0x345c9f0() {
   return input22;
}

double NNfunction_ss_sRsR::neuron0x345cd30() {
   return input23;
}

double NNfunction_ss_sRsR::input0x345d1a0() {
   double input = -0.896586;
   input += synapse0x3458030();
   input += synapse0x3458070();
   input += synapse0x345d450();
   input += synapse0x345d490();
   input += synapse0x345d4d0();
   input += synapse0x345d510();
   input += synapse0x345d550();
   input += synapse0x345d590();
   input += synapse0x345d5d0();
   input += synapse0x345d610();
   input += synapse0x345d650();
   input += synapse0x345d690();
   input += synapse0x345d6d0();
   input += synapse0x345d710();
   input += synapse0x345d750();
   input += synapse0x345d790();
   input += synapse0x3457fa0();
   input += synapse0x3457fe0();
   input += synapse0x3213360();
   input += synapse0x32133a0();
   input += synapse0x345d9f0();
   input += synapse0x345da30();
   input += synapse0x345da70();
   input += synapse0x345dab0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345d1a0() {
   double input = input0x345d1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x345daf0() {
   double input = 0.899743;
   input += synapse0x345de30();
   input += synapse0x345de70();
   input += synapse0x345deb0();
   input += synapse0x345def0();
   input += synapse0x345df30();
   input += synapse0x345df70();
   input += synapse0x345dfb0();
   input += synapse0x345dff0();
   input += synapse0x345e030();
   input += synapse0x345d8e0();
   input += synapse0x345d920();
   input += synapse0x345d960();
   input += synapse0x345d9a0();
   input += synapse0x345e280();
   input += synapse0x345e2c0();
   input += synapse0x345e300();
   input += synapse0x345dc80();
   input += synapse0x345dcc0();
   input += synapse0x345e450();
   input += synapse0x345e490();
   input += synapse0x345e4d0();
   input += synapse0x345e510();
   input += synapse0x345e550();
   input += synapse0x345e590();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345daf0() {
   double input = input0x345daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x345e5d0() {
   double input = -0.658926;
   input += synapse0x345e910();
   input += synapse0x345e950();
   input += synapse0x345e990();
   input += synapse0x345e9d0();
   input += synapse0x345ea10();
   input += synapse0x345ea50();
   input += synapse0x345ea90();
   input += synapse0x345ead0();
   input += synapse0x345eb10();
   input += synapse0x345eb50();
   input += synapse0x345eb90();
   input += synapse0x345ebd0();
   input += synapse0x345ec10();
   input += synapse0x345ec50();
   input += synapse0x345ec90();
   input += synapse0x345ecd0();
   input += synapse0x345e760();
   input += synapse0x345e7a0();
   input += synapse0x3213a00();
   input += synapse0x32212d0();
   input += synapse0x3221310();
   input += synapse0x3447200();
   input += synapse0x3447240();
   input += synapse0x3447280();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345e5d0() {
   double input = input0x345e5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x345e070() {
   double input = -0.378216;
   input += synapse0x3221b50();
   input += synapse0x345e200();
   input += synapse0x345e240();
   input += synapse0x345ee20();
   input += synapse0x345ee60();
   input += synapse0x345eea0();
   input += synapse0x345eee0();
   input += synapse0x345ef20();
   input += synapse0x345ef60();
   input += synapse0x345efa0();
   input += synapse0x345efe0();
   input += synapse0x345f020();
   input += synapse0x345f060();
   input += synapse0x345f0a0();
   input += synapse0x345f0e0();
   input += synapse0x345f120();
   input += synapse0x34580b0();
   input += synapse0x34580f0();
   input += synapse0x3458130();
   input += synapse0x345f270();
   input += synapse0x345f2b0();
   input += synapse0x345f2f0();
   input += synapse0x345f330();
   input += synapse0x345f370();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345e070() {
   double input = input0x345e070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x345f3b0() {
   double input = 0.0381515;
   input += synapse0x345f6f0();
   input += synapse0x345f730();
   input += synapse0x345f770();
   input += synapse0x345f7b0();
   input += synapse0x345f7f0();
   input += synapse0x345f830();
   input += synapse0x345f870();
   input += synapse0x345f8b0();
   input += synapse0x345f8f0();
   input += synapse0x345f930();
   input += synapse0x345f970();
   input += synapse0x345f9b0();
   input += synapse0x345f9f0();
   input += synapse0x345fa30();
   input += synapse0x345fa70();
   input += synapse0x345fab0();
   input += synapse0x345f540();
   input += synapse0x345f580();
   input += synapse0x345fc00();
   input += synapse0x345fc40();
   input += synapse0x345fc80();
   input += synapse0x345fcc0();
   input += synapse0x345fd00();
   input += synapse0x345fd40();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345f3b0() {
   double input = input0x345f3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x345fd80() {
   double input = 6.24429;
   input += synapse0x34600c0();
   input += synapse0x3460100();
   input += synapse0x3460140();
   input += synapse0x3460180();
   input += synapse0x34601c0();
   input += synapse0x3460200();
   input += synapse0x3460240();
   input += synapse0x3460280();
   input += synapse0x34602c0();
   input += synapse0x3221620();
   input += synapse0x3221660();
   input += synapse0x32216a0();
   input += synapse0x32216e0();
   input += synapse0x3221720();
   input += synapse0x3221760();
   input += synapse0x32217a0();
   input += synapse0x345ff10();
   input += synapse0x345ff50();
   input += synapse0x32218f0();
   input += synapse0x3221930();
   input += synapse0x3221970();
   input += synapse0x32219b0();
   input += synapse0x32219f0();
   input += synapse0x3460b10();
   return input;
}

double NNfunction_ss_sRsR::neuron0x345fd80() {
   double input = input0x345fd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3460b50() {
   double input = -1.15686;
   input += synapse0x3460e90();
   input += synapse0x3460ed0();
   input += synapse0x3460f10();
   input += synapse0x3460f50();
   input += synapse0x3460f90();
   input += synapse0x3460fd0();
   input += synapse0x3461010();
   input += synapse0x3461050();
   input += synapse0x3461090();
   input += synapse0x34610d0();
   input += synapse0x3461110();
   input += synapse0x3461150();
   input += synapse0x3461190();
   input += synapse0x34611d0();
   input += synapse0x3461210();
   input += synapse0x3461250();
   input += synapse0x3460ce0();
   input += synapse0x3460d20();
   input += synapse0x34613a0();
   input += synapse0x34613e0();
   input += synapse0x3461420();
   input += synapse0x3461460();
   input += synapse0x34614a0();
   input += synapse0x34614e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3460b50() {
   double input = input0x3460b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3461520() {
   double input = 0.896333;
   input += synapse0x3461860();
   input += synapse0x34618a0();
   input += synapse0x34618e0();
   input += synapse0x3461920();
   input += synapse0x3461960();
   input += synapse0x34619a0();
   input += synapse0x34619e0();
   input += synapse0x3461a20();
   input += synapse0x3461a60();
   input += synapse0x3461aa0();
   input += synapse0x3461ae0();
   input += synapse0x3461b20();
   input += synapse0x3461b60();
   input += synapse0x3461ba0();
   input += synapse0x3461be0();
   input += synapse0x3461c20();
   input += synapse0x34616b0();
   input += synapse0x34616f0();
   input += synapse0x3461d70();
   input += synapse0x3461db0();
   input += synapse0x3461df0();
   input += synapse0x3461e30();
   input += synapse0x3461e70();
   input += synapse0x3461eb0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3461520() {
   double input = input0x3461520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3461ef0() {
   double input = -1.74647;
   input += synapse0x345b9c0();
   input += synapse0x345ba00();
   input += synapse0x345ba40();
   input += synapse0x345ba80();
   input += synapse0x3462440();
   input += synapse0x3462480();
   input += synapse0x34624c0();
   input += synapse0x3462500();
   input += synapse0x3462540();
   input += synapse0x3462580();
   input += synapse0x34625c0();
   input += synapse0x3462600();
   input += synapse0x3462640();
   input += synapse0x3462680();
   input += synapse0x34626c0();
   input += synapse0x3462700();
   input += synapse0x3462080();
   input += synapse0x34620c0();
   input += synapse0x3462850();
   input += synapse0x3462890();
   input += synapse0x34628d0();
   input += synapse0x3462910();
   input += synapse0x3462950();
   input += synapse0x3462990();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3461ef0() {
   double input = input0x3461ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34629d0() {
   double input = 0.781645;
   input += synapse0x3462d10();
   input += synapse0x3462d50();
   input += synapse0x3462d90();
   input += synapse0x3462dd0();
   input += synapse0x3462e10();
   input += synapse0x3462e50();
   input += synapse0x3462e90();
   input += synapse0x3462ed0();
   input += synapse0x3462f10();
   input += synapse0x3462f50();
   input += synapse0x3462f90();
   input += synapse0x3462fd0();
   input += synapse0x3463010();
   input += synapse0x3463050();
   input += synapse0x3463090();
   input += synapse0x34630d0();
   input += synapse0x3462b60();
   input += synapse0x3462ba0();
   input += synapse0x3463220();
   input += synapse0x3463260();
   input += synapse0x34632a0();
   input += synapse0x34632e0();
   input += synapse0x3463320();
   input += synapse0x3463360();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34629d0() {
   double input = input0x34629d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34633a0() {
   double input = 0.391882;
   input += synapse0x34636e0();
   input += synapse0x3463720();
   input += synapse0x3463760();
   input += synapse0x34637a0();
   input += synapse0x34637e0();
   input += synapse0x3463820();
   input += synapse0x3463860();
   input += synapse0x34638a0();
   input += synapse0x34638e0();
   input += synapse0x3463920();
   input += synapse0x3463960();
   input += synapse0x34639a0();
   input += synapse0x34639e0();
   input += synapse0x3463a20();
   input += synapse0x3463a60();
   input += synapse0x3463aa0();
   input += synapse0x3463530();
   input += synapse0x3463570();
   input += synapse0x3460300();
   input += synapse0x3460340();
   input += synapse0x3460380();
   input += synapse0x34603c0();
   input += synapse0x3460400();
   input += synapse0x3460440();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34633a0() {
   double input = input0x34633a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3460480() {
   double input = 0.572394;
   input += synapse0x34607c0();
   input += synapse0x3460800();
   input += synapse0x3460840();
   input += synapse0x3460880();
   input += synapse0x34608c0();
   input += synapse0x3460900();
   input += synapse0x3460940();
   input += synapse0x3460980();
   input += synapse0x34609c0();
   input += synapse0x3460a00();
   input += synapse0x3460a40();
   input += synapse0x3460a80();
   input += synapse0x3460ac0();
   input += synapse0x3464c00();
   input += synapse0x3464c40();
   input += synapse0x3464c80();
   input += synapse0x3460610();
   input += synapse0x3460650();
   input += synapse0x3464dd0();
   input += synapse0x3464e10();
   input += synapse0x3464e50();
   input += synapse0x3464e90();
   input += synapse0x3464ed0();
   input += synapse0x3464f10();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3460480() {
   double input = input0x3460480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3464f50() {
   double input = 0.205882;
   input += synapse0x3465290();
   input += synapse0x34652d0();
   input += synapse0x3465310();
   input += synapse0x3465350();
   input += synapse0x3465390();
   input += synapse0x34653d0();
   input += synapse0x3465410();
   input += synapse0x3465450();
   input += synapse0x3465490();
   input += synapse0x34654d0();
   input += synapse0x3465510();
   input += synapse0x3465550();
   input += synapse0x3465590();
   input += synapse0x34655d0();
   input += synapse0x3465610();
   input += synapse0x3465650();
   input += synapse0x34650e0();
   input += synapse0x3465120();
   input += synapse0x34657a0();
   input += synapse0x34657e0();
   input += synapse0x3465820();
   input += synapse0x3465860();
   input += synapse0x34658a0();
   input += synapse0x34658e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3464f50() {
   double input = input0x3464f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3465920() {
   double input = 1.38967;
   input += synapse0x3465c60();
   input += synapse0x3465ca0();
   input += synapse0x3465ce0();
   input += synapse0x3465d20();
   input += synapse0x3465d60();
   input += synapse0x3465da0();
   input += synapse0x3465de0();
   input += synapse0x3465e20();
   input += synapse0x3465e60();
   input += synapse0x3465ea0();
   input += synapse0x3465ee0();
   input += synapse0x3465f20();
   input += synapse0x3465f60();
   input += synapse0x3465fa0();
   input += synapse0x3465fe0();
   input += synapse0x3466020();
   input += synapse0x3465ab0();
   input += synapse0x3465af0();
   input += synapse0x3466170();
   input += synapse0x34661b0();
   input += synapse0x34661f0();
   input += synapse0x3466230();
   input += synapse0x3466270();
   input += synapse0x34662b0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3465920() {
   double input = input0x3465920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34662f0() {
   double input = -0.397561;
   input += synapse0x3466630();
   input += synapse0x3466670();
   input += synapse0x34666b0();
   input += synapse0x34666f0();
   input += synapse0x3466730();
   input += synapse0x3466770();
   input += synapse0x34667b0();
   input += synapse0x34667f0();
   input += synapse0x3466830();
   input += synapse0x3466870();
   input += synapse0x34668b0();
   input += synapse0x34668f0();
   input += synapse0x3466930();
   input += synapse0x3466970();
   input += synapse0x34669b0();
   input += synapse0x34669f0();
   input += synapse0x3466480();
   input += synapse0x34664c0();
   input += synapse0x3466b40();
   input += synapse0x3466b80();
   input += synapse0x3466bc0();
   input += synapse0x3466c00();
   input += synapse0x3466c40();
   input += synapse0x3466c80();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34662f0() {
   double input = input0x34662f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3466cc0() {
   double input = 0.710654;
   input += synapse0x3467000();
   input += synapse0x3458390();
   input += synapse0x34583d0();
   input += synapse0x34586d0();
   input += synapse0x3458710();
   input += synapse0x3458a10();
   input += synapse0x3458a50();
   input += synapse0x3458d50();
   input += synapse0x3458d90();
   input += synapse0x3459090();
   input += synapse0x34590d0();
   input += synapse0x34593d0();
   input += synapse0x3459410();
   input += synapse0x3459710();
   input += synapse0x3459750();
   input += synapse0x3459a50();
   input += synapse0x3459a90();
   input += synapse0x3459d90();
   input += synapse0x3459dd0();
   input += synapse0x345a0d0();
   input += synapse0x345a110();
   input += synapse0x345a410();
   input += synapse0x345a450();
   input += synapse0x345a750();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3466cc0() {
   double input = input0x3466cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3468ad0() {
   double input = -0.571852;
   input += synapse0x345a790();
   input += synapse0x345b450();
   input += synapse0x345b490();
   input += synapse0x3466e50();
   input += synapse0x3466e90();
   input += synapse0x345b790();
   input += synapse0x345b7d0();
   input += synapse0x3213240();
   input += synapse0x3213280();
   input += synapse0x345bf10();
   input += synapse0x345bf50();
   input += synapse0x345c250();
   input += synapse0x345c290();
   input += synapse0x345c590();
   input += synapse0x345c5d0();
   input += synapse0x345c8d0();
   input += synapse0x345c910();
   input += synapse0x345cc10();
   input += synapse0x345cc50();
   input += synapse0x345cf50();
   input += synapse0x345cf90();
   input += synapse0x345aa90();
   input += synapse0x345aad0();
   input += synapse0x3468d70();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3468ad0() {
   double input = input0x3468ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3468db0() {
   double input = 1.65358;
   input += synapse0x34690f0();
   input += synapse0x3469130();
   input += synapse0x3469170();
   input += synapse0x34691b0();
   input += synapse0x34691f0();
   input += synapse0x3469230();
   input += synapse0x3469270();
   input += synapse0x34692b0();
   input += synapse0x34692f0();
   input += synapse0x3469330();
   input += synapse0x3469370();
   input += synapse0x34693b0();
   input += synapse0x34693f0();
   input += synapse0x3469430();
   input += synapse0x3469470();
   input += synapse0x34694b0();
   input += synapse0x3468f40();
   input += synapse0x3468f80();
   input += synapse0x3469600();
   input += synapse0x3469640();
   input += synapse0x3469680();
   input += synapse0x34696c0();
   input += synapse0x3469700();
   input += synapse0x3469740();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3468db0() {
   double input = input0x3468db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3469780() {
   double input = -0.134097;
   input += synapse0x3469ac0();
   input += synapse0x3469b00();
   input += synapse0x3469b40();
   input += synapse0x3469b80();
   input += synapse0x3469bc0();
   input += synapse0x3469c00();
   input += synapse0x3469c40();
   input += synapse0x3469c80();
   input += synapse0x3469cc0();
   input += synapse0x3469d00();
   input += synapse0x3469d40();
   input += synapse0x3469d80();
   input += synapse0x3469dc0();
   input += synapse0x3469e00();
   input += synapse0x3469e40();
   input += synapse0x3469e80();
   input += synapse0x3469910();
   input += synapse0x3469950();
   input += synapse0x3469fd0();
   input += synapse0x346a010();
   input += synapse0x346a050();
   input += synapse0x346a090();
   input += synapse0x346a0d0();
   input += synapse0x346a110();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3469780() {
   double input = input0x3469780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346a150() {
   double input = -0.852382;
   input += synapse0x346a490();
   input += synapse0x346a4d0();
   input += synapse0x346a510();
   input += synapse0x346a550();
   input += synapse0x346a590();
   input += synapse0x346a5d0();
   input += synapse0x346a610();
   input += synapse0x346a650();
   input += synapse0x346a690();
   input += synapse0x346a6d0();
   input += synapse0x346a710();
   input += synapse0x346a750();
   input += synapse0x346a790();
   input += synapse0x346a7d0();
   input += synapse0x346a810();
   input += synapse0x346a850();
   input += synapse0x346a2e0();
   input += synapse0x346a320();
   input += synapse0x346a9a0();
   input += synapse0x346a9e0();
   input += synapse0x346aa20();
   input += synapse0x346aa60();
   input += synapse0x346aaa0();
   input += synapse0x346aae0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346a150() {
   double input = input0x346a150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346ab20() {
   double input = 1.5913;
   input += synapse0x346ae60();
   input += synapse0x346aea0();
   input += synapse0x346aee0();
   input += synapse0x346af20();
   input += synapse0x346af60();
   input += synapse0x346afa0();
   input += synapse0x346afe0();
   input += synapse0x346b020();
   input += synapse0x346b060();
   input += synapse0x346b0a0();
   input += synapse0x346b0e0();
   input += synapse0x346b120();
   input += synapse0x346b160();
   input += synapse0x346b1a0();
   input += synapse0x346b1e0();
   input += synapse0x346b220();
   input += synapse0x346acb0();
   input += synapse0x346acf0();
   input += synapse0x346b370();
   input += synapse0x346b3b0();
   input += synapse0x346b3f0();
   input += synapse0x346b430();
   input += synapse0x346b470();
   input += synapse0x346b4b0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346ab20() {
   double input = input0x346ab20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346b4f0() {
   double input = -1.30652;
   input += synapse0x346b830();
   input += synapse0x346b870();
   input += synapse0x346b8b0();
   input += synapse0x346b8f0();
   input += synapse0x346b930();
   input += synapse0x346b970();
   input += synapse0x346b9b0();
   input += synapse0x346b9f0();
   input += synapse0x346ba30();
   input += synapse0x3463bf0();
   input += synapse0x3463c30();
   input += synapse0x3463c70();
   input += synapse0x3463cb0();
   input += synapse0x3463cf0();
   input += synapse0x3463d30();
   input += synapse0x3463d70();
   input += synapse0x346b680();
   input += synapse0x346b6c0();
   input += synapse0x3463ec0();
   input += synapse0x3463f00();
   input += synapse0x3463f40();
   input += synapse0x3463f80();
   input += synapse0x3463fc0();
   input += synapse0x3464000();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346b4f0() {
   double input = input0x346b4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3464040() {
   double input = 3.49659;
   input += synapse0x3464380();
   input += synapse0x34643c0();
   input += synapse0x3464400();
   input += synapse0x3464440();
   input += synapse0x3464480();
   input += synapse0x34644c0();
   input += synapse0x3464500();
   input += synapse0x3464540();
   input += synapse0x3464580();
   input += synapse0x34645c0();
   input += synapse0x3464600();
   input += synapse0x3464640();
   input += synapse0x3464680();
   input += synapse0x34646c0();
   input += synapse0x3464700();
   input += synapse0x3464740();
   input += synapse0x34641d0();
   input += synapse0x3464210();
   input += synapse0x3464890();
   input += synapse0x34648d0();
   input += synapse0x3464910();
   input += synapse0x3464950();
   input += synapse0x3464990();
   input += synapse0x34649d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3464040() {
   double input = input0x3464040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3464a10() {
   double input = 2.75935;
   input += synapse0x3464ba0();
   input += synapse0x346dc30();
   input += synapse0x346dc70();
   input += synapse0x346dcb0();
   input += synapse0x346dcf0();
   input += synapse0x346dd30();
   input += synapse0x346dd70();
   input += synapse0x346ddb0();
   input += synapse0x346ddf0();
   input += synapse0x346de30();
   input += synapse0x346de70();
   input += synapse0x346deb0();
   input += synapse0x346def0();
   input += synapse0x346df30();
   input += synapse0x346df70();
   input += synapse0x346dfb0();
   input += synapse0x346da80();
   input += synapse0x346dac0();
   input += synapse0x346e100();
   input += synapse0x346e140();
   input += synapse0x346e180();
   input += synapse0x346e1c0();
   input += synapse0x346e200();
   input += synapse0x346e240();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3464a10() {
   double input = input0x3464a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346e280() {
   double input = 0.305588;
   input += synapse0x346e5c0();
   input += synapse0x346e600();
   input += synapse0x346e640();
   input += synapse0x346e680();
   input += synapse0x346e6c0();
   input += synapse0x346e700();
   input += synapse0x346e740();
   input += synapse0x346e780();
   input += synapse0x346e7c0();
   input += synapse0x346e800();
   input += synapse0x346e840();
   input += synapse0x346e880();
   input += synapse0x346e8c0();
   input += synapse0x346e900();
   input += synapse0x346e940();
   input += synapse0x346e980();
   input += synapse0x346e410();
   input += synapse0x346e450();
   input += synapse0x346ead0();
   input += synapse0x346eb10();
   input += synapse0x346eb50();
   input += synapse0x346eb90();
   input += synapse0x346ebd0();
   input += synapse0x346ec10();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346e280() {
   double input = input0x346e280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346ec50() {
   double input = -0.141736;
   input += synapse0x346ef90();
   input += synapse0x346efd0();
   input += synapse0x346f010();
   input += synapse0x346f050();
   input += synapse0x346f090();
   input += synapse0x346f0d0();
   input += synapse0x346f110();
   input += synapse0x346f150();
   input += synapse0x346f190();
   input += synapse0x346f1d0();
   input += synapse0x346f210();
   input += synapse0x346f250();
   input += synapse0x346f290();
   input += synapse0x346f2d0();
   input += synapse0x346f310();
   input += synapse0x346f350();
   input += synapse0x346ede0();
   input += synapse0x346ee20();
   input += synapse0x346f4a0();
   input += synapse0x346f4e0();
   input += synapse0x346f520();
   input += synapse0x346f560();
   input += synapse0x346f5a0();
   input += synapse0x346f5e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346ec50() {
   double input = input0x346ec50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346f620() {
   double input = 0.571571;
   input += synapse0x346f960();
   input += synapse0x346f9a0();
   input += synapse0x346f9e0();
   input += synapse0x346fa20();
   input += synapse0x346fa60();
   input += synapse0x346faa0();
   input += synapse0x346fae0();
   input += synapse0x346fb20();
   input += synapse0x346fb60();
   input += synapse0x346fba0();
   input += synapse0x346fbe0();
   input += synapse0x346fc20();
   input += synapse0x346fc60();
   input += synapse0x346fca0();
   input += synapse0x346fce0();
   input += synapse0x346fd20();
   input += synapse0x346f7b0();
   input += synapse0x346f7f0();
   input += synapse0x346fe70();
   input += synapse0x346feb0();
   input += synapse0x346fef0();
   input += synapse0x346ff30();
   input += synapse0x346ff70();
   input += synapse0x346ffb0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346f620() {
   double input = input0x346f620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346fff0() {
   double input = -1.58892;
   input += synapse0x3470330();
   input += synapse0x3470370();
   input += synapse0x34703b0();
   input += synapse0x34703f0();
   input += synapse0x3470430();
   input += synapse0x3470470();
   input += synapse0x34704b0();
   input += synapse0x34704f0();
   input += synapse0x3470530();
   input += synapse0x3470570();
   input += synapse0x34705b0();
   input += synapse0x34705f0();
   input += synapse0x3470630();
   input += synapse0x3470670();
   input += synapse0x34706b0();
   input += synapse0x34706f0();
   input += synapse0x3470180();
   input += synapse0x34701c0();
   input += synapse0x3470840();
   input += synapse0x3470880();
   input += synapse0x34708c0();
   input += synapse0x3470900();
   input += synapse0x3470940();
   input += synapse0x3470980();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346fff0() {
   double input = input0x346fff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34709c0() {
   double input = 0.329392;
   input += synapse0x3470d00();
   input += synapse0x3470d40();
   input += synapse0x3470d80();
   input += synapse0x3470dc0();
   input += synapse0x3470e00();
   input += synapse0x3470e40();
   input += synapse0x3470e80();
   input += synapse0x3470ec0();
   input += synapse0x3470f00();
   input += synapse0x3470f40();
   input += synapse0x3470f80();
   input += synapse0x3470fc0();
   input += synapse0x3471000();
   input += synapse0x3471040();
   input += synapse0x3471080();
   input += synapse0x34710c0();
   input += synapse0x3470b50();
   input += synapse0x3470b90();
   input += synapse0x3471210();
   input += synapse0x3471250();
   input += synapse0x3471290();
   input += synapse0x34712d0();
   input += synapse0x3471310();
   input += synapse0x3471350();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34709c0() {
   double input = input0x34709c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3471390() {
   double input = -2.115;
   input += synapse0x34716d0();
   input += synapse0x3471710();
   input += synapse0x3471750();
   input += synapse0x3471790();
   input += synapse0x34717d0();
   input += synapse0x3471810();
   input += synapse0x3471850();
   input += synapse0x3471890();
   input += synapse0x34718d0();
   input += synapse0x3471910();
   input += synapse0x3471950();
   input += synapse0x3471990();
   input += synapse0x34719d0();
   input += synapse0x3471a10();
   input += synapse0x3471a50();
   input += synapse0x3471a90();
   input += synapse0x3471520();
   input += synapse0x3471560();
   input += synapse0x3471be0();
   input += synapse0x3471c20();
   input += synapse0x3471c60();
   input += synapse0x3471ca0();
   input += synapse0x3471ce0();
   input += synapse0x3471d20();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3471390() {
   double input = input0x3471390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3471d60() {
   double input = 0.422404;
   input += synapse0x34720a0();
   input += synapse0x34720e0();
   input += synapse0x3472120();
   input += synapse0x3472160();
   input += synapse0x34721a0();
   input += synapse0x34721e0();
   input += synapse0x3472220();
   input += synapse0x3472260();
   input += synapse0x34722a0();
   input += synapse0x34722e0();
   input += synapse0x3472320();
   input += synapse0x3472360();
   input += synapse0x34723a0();
   input += synapse0x34723e0();
   input += synapse0x3472420();
   input += synapse0x3472460();
   input += synapse0x3471ef0();
   input += synapse0x3471f30();
   input += synapse0x34725b0();
   input += synapse0x34725f0();
   input += synapse0x3472630();
   input += synapse0x3472670();
   input += synapse0x34726b0();
   input += synapse0x34726f0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3471d60() {
   double input = input0x3471d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3472730() {
   double input = 0.347709;
   input += synapse0x3472a70();
   input += synapse0x3467040();
   input += synapse0x3467080();
   input += synapse0x34670c0();
   input += synapse0x3467310();
   input += synapse0x3467350();
   input += synapse0x3467390();
   input += synapse0x34675e0();
   input += synapse0x3467620();
   input += synapse0x3467870();
   input += synapse0x34678b0();
   input += synapse0x34678f0();
   input += synapse0x3467b40();
   input += synapse0x3467b80();
   input += synapse0x3467dd0();
   input += synapse0x3467e10();
   input += synapse0x34728c0();
   input += synapse0x3472900();
   input += synapse0x3467f60();
   input += synapse0x3468470();
   input += synapse0x34684b0();
   input += synapse0x34684f0();
   input += synapse0x3468740();
   input += synapse0x3468780();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3472730() {
   double input = input0x3472730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34687c0() {
   double input = -0.25679;
   input += synapse0x3468030();
   input += synapse0x3468070();
   input += synapse0x34680b0();
   input += synapse0x34680f0();
   input += synapse0x3468a70();
   input += synapse0x3474dc0();
   input += synapse0x3474e00();
   input += synapse0x3474e40();
   input += synapse0x3474e80();
   input += synapse0x3474ec0();
   input += synapse0x3474f00();
   input += synapse0x3474f40();
   input += synapse0x3474f80();
   input += synapse0x3474fc0();
   input += synapse0x3475000();
   input += synapse0x3475040();
   input += synapse0x3468950();
   input += synapse0x3468990();
   input += synapse0x3475190();
   input += synapse0x34751d0();
   input += synapse0x3475210();
   input += synapse0x3475250();
   input += synapse0x3475290();
   input += synapse0x34752d0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34687c0() {
   double input = input0x34687c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3475310() {
   double input = 0.0615596;
   input += synapse0x3475650();
   input += synapse0x3475690();
   input += synapse0x34756d0();
   input += synapse0x3475710();
   input += synapse0x3475750();
   input += synapse0x3475790();
   input += synapse0x34757d0();
   input += synapse0x3475810();
   input += synapse0x3475850();
   input += synapse0x3475890();
   input += synapse0x34758d0();
   input += synapse0x3475910();
   input += synapse0x3475950();
   input += synapse0x3475990();
   input += synapse0x34759d0();
   input += synapse0x3475a10();
   input += synapse0x34754a0();
   input += synapse0x34754e0();
   input += synapse0x3475b60();
   input += synapse0x3475ba0();
   input += synapse0x3475be0();
   input += synapse0x3475c20();
   input += synapse0x3475c60();
   input += synapse0x3475ca0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3475310() {
   double input = input0x3475310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3475ce0() {
   double input = 1.75818;
   input += synapse0x3476020();
   input += synapse0x3476060();
   input += synapse0x34760a0();
   input += synapse0x34760e0();
   input += synapse0x3476120();
   input += synapse0x3476160();
   input += synapse0x34761a0();
   input += synapse0x34761e0();
   input += synapse0x3476220();
   input += synapse0x3476260();
   input += synapse0x34762a0();
   input += synapse0x34762e0();
   input += synapse0x3476320();
   input += synapse0x3476360();
   input += synapse0x34763a0();
   input += synapse0x34763e0();
   input += synapse0x3475e70();
   input += synapse0x3475eb0();
   input += synapse0x3476530();
   input += synapse0x3476570();
   input += synapse0x34765b0();
   input += synapse0x34765f0();
   input += synapse0x3476630();
   input += synapse0x3476670();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3475ce0() {
   double input = input0x3475ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34766b0() {
   double input = -0.217997;
   input += synapse0x34769f0();
   input += synapse0x3476a30();
   input += synapse0x3476a70();
   input += synapse0x3476ab0();
   input += synapse0x3476af0();
   input += synapse0x3476b30();
   input += synapse0x3476b70();
   input += synapse0x3476bb0();
   input += synapse0x3476bf0();
   input += synapse0x3476c30();
   input += synapse0x3476c70();
   input += synapse0x3476cb0();
   input += synapse0x3476cf0();
   input += synapse0x3476d30();
   input += synapse0x3476d70();
   input += synapse0x3476db0();
   input += synapse0x3476840();
   input += synapse0x3476880();
   input += synapse0x3476f00();
   input += synapse0x3476f40();
   input += synapse0x3476f80();
   input += synapse0x3476fc0();
   input += synapse0x3477000();
   input += synapse0x3477040();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34766b0() {
   double input = input0x34766b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3477080() {
   double input = 0.91785;
   input += synapse0x34773c0();
   input += synapse0x3477400();
   input += synapse0x3477440();
   input += synapse0x3477480();
   input += synapse0x34774c0();
   input += synapse0x3477500();
   input += synapse0x3477540();
   input += synapse0x3477580();
   input += synapse0x34775c0();
   input += synapse0x3477600();
   input += synapse0x3477640();
   input += synapse0x3477680();
   input += synapse0x34776c0();
   input += synapse0x3477700();
   input += synapse0x3477740();
   input += synapse0x3477780();
   input += synapse0x3477210();
   input += synapse0x3477250();
   input += synapse0x34778d0();
   input += synapse0x3477910();
   input += synapse0x3477950();
   input += synapse0x3477990();
   input += synapse0x34779d0();
   input += synapse0x3477a10();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3477080() {
   double input = input0x3477080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3477a50() {
   double input = -0.169936;
   input += synapse0x3477d90();
   input += synapse0x3477dd0();
   input += synapse0x3477e10();
   input += synapse0x3477e50();
   input += synapse0x3477e90();
   input += synapse0x3477ed0();
   input += synapse0x3477f10();
   input += synapse0x3477f50();
   input += synapse0x3477f90();
   input += synapse0x3477fd0();
   input += synapse0x3478010();
   input += synapse0x3478050();
   input += synapse0x3478090();
   input += synapse0x34780d0();
   input += synapse0x3478110();
   input += synapse0x3478150();
   input += synapse0x3477be0();
   input += synapse0x3477c20();
   input += synapse0x34782a0();
   input += synapse0x34782e0();
   input += synapse0x3478320();
   input += synapse0x3478360();
   input += synapse0x34783a0();
   input += synapse0x34783e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3477a50() {
   double input = input0x3477a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3478420() {
   double input = 3.15098;
   input += synapse0x3478760();
   input += synapse0x34787a0();
   input += synapse0x34787e0();
   input += synapse0x3478820();
   input += synapse0x3478860();
   input += synapse0x34788a0();
   input += synapse0x34788e0();
   input += synapse0x3478920();
   input += synapse0x3478960();
   input += synapse0x34789a0();
   input += synapse0x34789e0();
   input += synapse0x3478a20();
   input += synapse0x3478a60();
   input += synapse0x3478aa0();
   input += synapse0x3478ae0();
   input += synapse0x3478b20();
   input += synapse0x34785b0();
   input += synapse0x34785f0();
   input += synapse0x3478c70();
   input += synapse0x3478cb0();
   input += synapse0x3478cf0();
   input += synapse0x3478d30();
   input += synapse0x3478d70();
   input += synapse0x3478db0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3478420() {
   double input = input0x3478420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3478df0() {
   double input = 0.0654743;
   input += synapse0x3479130();
   input += synapse0x3479170();
   input += synapse0x34791b0();
   input += synapse0x34791f0();
   input += synapse0x3479230();
   input += synapse0x3479270();
   input += synapse0x34792b0();
   input += synapse0x34792f0();
   input += synapse0x3479330();
   input += synapse0x3479370();
   input += synapse0x34793b0();
   input += synapse0x34793f0();
   input += synapse0x3479430();
   input += synapse0x3479470();
   input += synapse0x34794b0();
   input += synapse0x34794f0();
   input += synapse0x3478f80();
   input += synapse0x3478fc0();
   input += synapse0x3479640();
   input += synapse0x3479680();
   input += synapse0x34796c0();
   input += synapse0x3479700();
   input += synapse0x3479740();
   input += synapse0x3479780();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3478df0() {
   double input = input0x3478df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34797c0() {
   double input = 0.975621;
   input += synapse0x3462230();
   input += synapse0x3462270();
   input += synapse0x34622b0();
   input += synapse0x34622f0();
   input += synapse0x3462330();
   input += synapse0x3462370();
   input += synapse0x34623b0();
   input += synapse0x34623f0();
   input += synapse0x3479f10();
   input += synapse0x3479f50();
   input += synapse0x3479f90();
   input += synapse0x3479fd0();
   input += synapse0x347a010();
   input += synapse0x347a050();
   input += synapse0x347a090();
   input += synapse0x347a0d0();
   input += synapse0x3479950();
   input += synapse0x3479990();
   input += synapse0x347a220();
   input += synapse0x347a260();
   input += synapse0x347a2a0();
   input += synapse0x347a2e0();
   input += synapse0x347a320();
   input += synapse0x347a360();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34797c0() {
   double input = input0x34797c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x347a3a0() {
   double input = 0.891231;
   input += synapse0x347a6e0();
   input += synapse0x347a720();
   input += synapse0x347a760();
   input += synapse0x347a7a0();
   input += synapse0x347a7e0();
   input += synapse0x347a820();
   input += synapse0x347a860();
   input += synapse0x347a8a0();
   input += synapse0x347a8e0();
   input += synapse0x347a920();
   input += synapse0x347a960();
   input += synapse0x347a9a0();
   input += synapse0x347a9e0();
   input += synapse0x347aa20();
   input += synapse0x347aa60();
   input += synapse0x347aaa0();
   input += synapse0x347a530();
   input += synapse0x347a570();
   input += synapse0x347abf0();
   input += synapse0x347ac30();
   input += synapse0x347ac70();
   input += synapse0x347acb0();
   input += synapse0x347acf0();
   input += synapse0x347ad30();
   return input;
}

double NNfunction_ss_sRsR::neuron0x347a3a0() {
   double input = input0x347a3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x347ad70() {
   double input = 0.30342;
   input += synapse0x347b0b0();
   input += synapse0x347b0f0();
   input += synapse0x347b130();
   input += synapse0x347b170();
   input += synapse0x347b1b0();
   input += synapse0x347b1f0();
   input += synapse0x347b230();
   input += synapse0x347b270();
   input += synapse0x347b2b0();
   input += synapse0x347b2f0();
   input += synapse0x347b330();
   input += synapse0x347b370();
   input += synapse0x347b3b0();
   input += synapse0x347b3f0();
   input += synapse0x347b430();
   input += synapse0x347b470();
   input += synapse0x347af00();
   input += synapse0x347af40();
   input += synapse0x346ba70();
   input += synapse0x346bab0();
   input += synapse0x346baf0();
   input += synapse0x346bb30();
   input += synapse0x346bb70();
   input += synapse0x346bbb0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x347ad70() {
   double input = input0x347ad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346bbf0() {
   double input = 0.488087;
   input += synapse0x346bf30();
   input += synapse0x346bf70();
   input += synapse0x346bfb0();
   input += synapse0x346bff0();
   input += synapse0x346c030();
   input += synapse0x346c070();
   input += synapse0x346c0b0();
   input += synapse0x346c0f0();
   input += synapse0x346c130();
   input += synapse0x346c170();
   input += synapse0x346c1b0();
   input += synapse0x346c1f0();
   input += synapse0x346c230();
   input += synapse0x346c270();
   input += synapse0x346c2b0();
   input += synapse0x346c2f0();
   input += synapse0x346bd80();
   input += synapse0x346bdc0();
   input += synapse0x346c440();
   input += synapse0x346c480();
   input += synapse0x346c4c0();
   input += synapse0x346c500();
   input += synapse0x346c540();
   input += synapse0x346c580();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346bbf0() {
   double input = input0x346bbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346c5c0() {
   double input = -2.05005;
   input += synapse0x346c900();
   input += synapse0x346c940();
   input += synapse0x346c980();
   input += synapse0x346c9c0();
   input += synapse0x346ca00();
   input += synapse0x346ca40();
   input += synapse0x346ca80();
   input += synapse0x346cac0();
   input += synapse0x346cb00();
   input += synapse0x346cb40();
   input += synapse0x346cb80();
   input += synapse0x346cbc0();
   input += synapse0x346cc00();
   input += synapse0x346cc40();
   input += synapse0x346cc80();
   input += synapse0x346ccc0();
   input += synapse0x346c750();
   input += synapse0x346c790();
   input += synapse0x346ce10();
   input += synapse0x346ce50();
   input += synapse0x346ce90();
   input += synapse0x346ced0();
   input += synapse0x346cf10();
   input += synapse0x346cf50();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346c5c0() {
   double input = input0x346c5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x346cf90() {
   double input = -2.76677;
   input += synapse0x346d2d0();
   input += synapse0x346d310();
   input += synapse0x346d350();
   input += synapse0x346d390();
   input += synapse0x346d3d0();
   input += synapse0x346d410();
   input += synapse0x346d450();
   input += synapse0x346d490();
   input += synapse0x346d4d0();
   input += synapse0x346d510();
   input += synapse0x346d550();
   input += synapse0x346d590();
   input += synapse0x346d5d0();
   input += synapse0x346d610();
   input += synapse0x346d650();
   input += synapse0x346d690();
   input += synapse0x346d120();
   input += synapse0x346d160();
   input += synapse0x346d7e0();
   input += synapse0x346d820();
   input += synapse0x346d860();
   input += synapse0x346d8a0();
   input += synapse0x346d8e0();
   input += synapse0x346d920();
   return input;
}

double NNfunction_ss_sRsR::neuron0x346cf90() {
   double input = input0x346cf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x347f5d0() {
   double input = -0.0443984;
   input += synapse0x347f7f0();
   input += synapse0x347f830();
   input += synapse0x347f870();
   input += synapse0x347f8b0();
   input += synapse0x347f8f0();
   input += synapse0x347f930();
   input += synapse0x347f970();
   input += synapse0x347f9b0();
   input += synapse0x347f9f0();
   input += synapse0x347fa30();
   input += synapse0x347fa70();
   input += synapse0x347fab0();
   input += synapse0x347faf0();
   input += synapse0x347fb30();
   input += synapse0x347fb70();
   input += synapse0x347fbb0();
   input += synapse0x346d960();
   input += synapse0x346d9a0();
   input += synapse0x347fd00();
   input += synapse0x347fd40();
   input += synapse0x347fd80();
   input += synapse0x347fdc0();
   input += synapse0x347fe00();
   input += synapse0x347fe40();
   return input;
}

double NNfunction_ss_sRsR::neuron0x347f5d0() {
   double input = input0x347f5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x347fe80() {
   double input = 1.64858;
   input += synapse0x34801c0();
   input += synapse0x3480200();
   input += synapse0x3480240();
   input += synapse0x3480280();
   input += synapse0x34802c0();
   input += synapse0x3480300();
   input += synapse0x3480340();
   input += synapse0x3480380();
   input += synapse0x34803c0();
   input += synapse0x3480400();
   input += synapse0x3480440();
   input += synapse0x3480480();
   input += synapse0x34804c0();
   input += synapse0x3480500();
   input += synapse0x3480540();
   input += synapse0x3480580();
   input += synapse0x3480010();
   input += synapse0x3480050();
   input += synapse0x34806d0();
   input += synapse0x3480710();
   input += synapse0x3480750();
   input += synapse0x3480790();
   input += synapse0x34807d0();
   input += synapse0x3480810();
   return input;
}

double NNfunction_ss_sRsR::neuron0x347fe80() {
   double input = input0x347fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3480850() {
   double input = 0.0196484;
   input += synapse0x3480b90();
   input += synapse0x3480bd0();
   input += synapse0x3480c10();
   input += synapse0x3480c50();
   input += synapse0x3480c90();
   input += synapse0x3480cd0();
   input += synapse0x3480d10();
   input += synapse0x3480d50();
   input += synapse0x3480d90();
   input += synapse0x3480dd0();
   input += synapse0x3480e10();
   input += synapse0x3480e50();
   input += synapse0x3480e90();
   input += synapse0x3480ed0();
   input += synapse0x3480f10();
   input += synapse0x3480f50();
   input += synapse0x34809e0();
   input += synapse0x3480a20();
   input += synapse0x34810a0();
   input += synapse0x34810e0();
   input += synapse0x3481120();
   input += synapse0x3481160();
   input += synapse0x34811a0();
   input += synapse0x34811e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3480850() {
   double input = input0x3480850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3481220() {
   double input = -0.343119;
   input += synapse0x3481560();
   input += synapse0x34815a0();
   input += synapse0x34815e0();
   input += synapse0x3481620();
   input += synapse0x3481660();
   input += synapse0x34816a0();
   input += synapse0x34816e0();
   input += synapse0x3481720();
   input += synapse0x3481760();
   input += synapse0x34817a0();
   input += synapse0x34817e0();
   input += synapse0x3481820();
   input += synapse0x3481860();
   input += synapse0x34818a0();
   input += synapse0x34818e0();
   input += synapse0x3481920();
   input += synapse0x34813b0();
   input += synapse0x34813f0();
   input += synapse0x3481a70();
   input += synapse0x3481ab0();
   input += synapse0x3481af0();
   input += synapse0x3481b30();
   input += synapse0x3481b70();
   input += synapse0x3481bb0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3481220() {
   double input = input0x3481220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3488420() {
   double input = -0.775925;
   input += synapse0x3221ac0();
   input += synapse0x3221b00();
   input += synapse0x345f660();
   input += synapse0x345f6a0();
   input += synapse0x3460030();
   input += synapse0x3460070();
   input += synapse0x3460e00();
   input += synapse0x3460e40();
   input += synapse0x34617d0();
   input += synapse0x3461810();
   input += synapse0x34621a0();
   input += synapse0x34621e0();
   input += synapse0x3462c80();
   input += synapse0x3462cc0();
   input += synapse0x3463650();
   input += synapse0x3463690();
   input += synapse0x3460730();
   input += synapse0x3460770();
   input += synapse0x3465200();
   input += synapse0x3465240();
   input += synapse0x3465bd0();
   input += synapse0x3465c10();
   input += synapse0x34665a0();
   input += synapse0x34665e0();
   input += synapse0x3466f70();
   input += synapse0x3466fb0();
   input += synapse0x345b110();
   input += synapse0x345b150();
   input += synapse0x3469060();
   input += synapse0x34690a0();
   input += synapse0x3469a30();
   input += synapse0x3469a70();
   input += synapse0x346a400();
   input += synapse0x346a440();
   input += synapse0x346add0();
   input += synapse0x346ae10();
   input += synapse0x346b7a0();
   input += synapse0x346b7e0();
   input += synapse0x34642f0();
   input += synapse0x3464330();
   input += synapse0x346dba0();
   input += synapse0x346dbe0();
   input += synapse0x346e530();
   input += synapse0x346e570();
   input += synapse0x346ef00();
   input += synapse0x346ef40();
   input += synapse0x346f8d0();
   input += synapse0x346f910();
   input += synapse0x34702a0();
   input += synapse0x34702e0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3488420() {
   double input = input0x3488420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x34887c0() {
   double input = -0.809791;
   input += synapse0x34729e0();
   input += synapse0x3472a20();
   input += synapse0x3467fa0();
   input += synapse0x3467fe0();
   input += synapse0x34755c0();
   input += synapse0x3475600();
   input += synapse0x3475f90();
   input += synapse0x3475fd0();
   input += synapse0x3476960();
   input += synapse0x34769a0();
   input += synapse0x3477330();
   input += synapse0x3477370();
   input += synapse0x3477d00();
   input += synapse0x3477d40();
   input += synapse0x34786d0();
   input += synapse0x3478710();
   input += synapse0x34790a0();
   input += synapse0x34790e0();
   input += synapse0x3479a70();
   input += synapse0x3479ab0();
   input += synapse0x347a650();
   input += synapse0x347a690();
   input += synapse0x347b020();
   input += synapse0x347b060();
   input += synapse0x346bea0();
   input += synapse0x346bee0();
   input += synapse0x346c870();
   input += synapse0x346c8b0();
   input += synapse0x346d240();
   input += synapse0x346d280();
   input += synapse0x347f760();
   input += synapse0x347f7a0();
   input += synapse0x3480130();
   input += synapse0x3480170();
   input += synapse0x3480b00();
   input += synapse0x3480b40();
   input += synapse0x34814d0();
   input += synapse0x3481510();
   input += synapse0x345d3c0();
   input += synapse0x345d400();
   input += synapse0x3470c70();
   input += synapse0x3470cb0();
   input += synapse0x3481bf0();
   input += synapse0x3481c30();
   input += synapse0x3481c70();
   input += synapse0x3481cb0();
   input += synapse0x3488b60();
   input += synapse0x3488ba0();
   input += synapse0x3488be0();
   input += synapse0x3488c20();
   return input;
}

double NNfunction_ss_sRsR::neuron0x34887c0() {
   double input = input0x34887c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3488c60() {
   double input = 0.205215;
   input += synapse0x3488fa0();
   input += synapse0x3488fe0();
   input += synapse0x3489020();
   input += synapse0x3489060();
   input += synapse0x34890a0();
   input += synapse0x34890e0();
   input += synapse0x3489120();
   input += synapse0x3489160();
   input += synapse0x34891a0();
   input += synapse0x34891e0();
   input += synapse0x3489220();
   input += synapse0x3489260();
   input += synapse0x34892a0();
   input += synapse0x34892e0();
   input += synapse0x3489320();
   input += synapse0x3489360();
   input += synapse0x3488df0();
   input += synapse0x3488e30();
   input += synapse0x34894b0();
   input += synapse0x34894f0();
   input += synapse0x3489530();
   input += synapse0x3489570();
   input += synapse0x34895b0();
   input += synapse0x34895f0();
   input += synapse0x3489630();
   input += synapse0x3489670();
   input += synapse0x34896b0();
   input += synapse0x34896f0();
   input += synapse0x3489730();
   input += synapse0x3489770();
   input += synapse0x34897b0();
   input += synapse0x34897f0();
   input += synapse0x34893a0();
   input += synapse0x34893e0();
   input += synapse0x3489420();
   input += synapse0x3489460();
   input += synapse0x3489a40();
   input += synapse0x3489a80();
   input += synapse0x3489ac0();
   input += synapse0x3489b00();
   input += synapse0x3489b40();
   input += synapse0x3489b80();
   input += synapse0x3489bc0();
   input += synapse0x3489c00();
   input += synapse0x3489c40();
   input += synapse0x3489c80();
   input += synapse0x3489cc0();
   input += synapse0x3489d00();
   input += synapse0x3489d40();
   input += synapse0x3489d80();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3488c60() {
   double input = input0x3488c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x3489dc0() {
   double input = 0.492476;
   input += synapse0x348a100();
   input += synapse0x348a140();
   input += synapse0x348a180();
   input += synapse0x348a1c0();
   input += synapse0x348a200();
   input += synapse0x348a240();
   input += synapse0x348a280();
   input += synapse0x348a2c0();
   input += synapse0x348a300();
   input += synapse0x348a340();
   input += synapse0x348a380();
   input += synapse0x348a3c0();
   input += synapse0x348a400();
   input += synapse0x348a440();
   input += synapse0x348a480();
   input += synapse0x348a4c0();
   input += synapse0x3489f50();
   input += synapse0x3489f90();
   input += synapse0x348a610();
   input += synapse0x348a650();
   input += synapse0x348a690();
   input += synapse0x348a6d0();
   input += synapse0x348a710();
   input += synapse0x348a750();
   input += synapse0x348a790();
   input += synapse0x348a7d0();
   input += synapse0x348a810();
   input += synapse0x348a850();
   input += synapse0x348a890();
   input += synapse0x348a8d0();
   input += synapse0x348a910();
   input += synapse0x348a950();
   input += synapse0x348a500();
   input += synapse0x348a540();
   input += synapse0x348a580();
   input += synapse0x348a5c0();
   input += synapse0x348aba0();
   input += synapse0x348abe0();
   input += synapse0x348ac20();
   input += synapse0x348ac60();
   input += synapse0x348aca0();
   input += synapse0x348ace0();
   input += synapse0x348ad20();
   input += synapse0x348ad60();
   input += synapse0x348ada0();
   input += synapse0x348ade0();
   input += synapse0x348ae20();
   input += synapse0x348ae60();
   input += synapse0x348aea0();
   input += synapse0x348aee0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x3489dc0() {
   double input = input0x3489dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x348af20() {
   double input = -0.489359;
   input += synapse0x348b260();
   input += synapse0x348b2a0();
   input += synapse0x348b2e0();
   input += synapse0x348b320();
   input += synapse0x348b360();
   input += synapse0x348b3a0();
   input += synapse0x348b3e0();
   input += synapse0x348b420();
   input += synapse0x348b460();
   input += synapse0x348b4a0();
   input += synapse0x348b4e0();
   input += synapse0x348b520();
   input += synapse0x348b560();
   input += synapse0x348b5a0();
   input += synapse0x348b5e0();
   input += synapse0x348b620();
   input += synapse0x348b0b0();
   input += synapse0x348b0f0();
   input += synapse0x348b770();
   input += synapse0x348b7b0();
   input += synapse0x348b7f0();
   input += synapse0x348b830();
   input += synapse0x348b870();
   input += synapse0x348b8b0();
   input += synapse0x348b8f0();
   input += synapse0x348b930();
   input += synapse0x348b970();
   input += synapse0x348b9b0();
   input += synapse0x348b9f0();
   input += synapse0x348ba30();
   input += synapse0x348ba70();
   input += synapse0x348bab0();
   input += synapse0x348b660();
   input += synapse0x348b6a0();
   input += synapse0x348b6e0();
   input += synapse0x348b720();
   input += synapse0x348bd00();
   input += synapse0x348bd40();
   input += synapse0x348bd80();
   input += synapse0x348bdc0();
   input += synapse0x348be00();
   input += synapse0x348be40();
   input += synapse0x348be80();
   input += synapse0x348bec0();
   input += synapse0x348bf00();
   input += synapse0x348bf40();
   input += synapse0x348bf80();
   input += synapse0x348bfc0();
   input += synapse0x348c000();
   input += synapse0x348c040();
   return input;
}

double NNfunction_ss_sRsR::neuron0x348af20() {
   double input = input0x348af20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRsR::input0x348c080() {
   double input = 3.27572;
   input += synapse0x348c2a0();
   input += synapse0x348c2e0();
   input += synapse0x348c320();
   input += synapse0x348c360();
   input += synapse0x348c3a0();
   return input;
}

double NNfunction_ss_sRsR::neuron0x348c080() {
   double input = input0x348c080();
   return (input * 1)+0;
}

double NNfunction_ss_sRsR::synapse0x3458030() {
   return (neuron0x3458170()*0.0171058);
}

double NNfunction_ss_sRsR::synapse0x3458070() {
   return (neuron0x34584b0()*-0.298839);
}

double NNfunction_ss_sRsR::synapse0x345d450() {
   return (neuron0x34587f0()*-0.0529931);
}

double NNfunction_ss_sRsR::synapse0x345d490() {
   return (neuron0x3458b30()*0.724512);
}

double NNfunction_ss_sRsR::synapse0x345d4d0() {
   return (neuron0x3458e70()*-0.182392);
}

double NNfunction_ss_sRsR::synapse0x345d510() {
   return (neuron0x34591b0()*-0.0327592);
}

double NNfunction_ss_sRsR::synapse0x345d550() {
   return (neuron0x34594f0()*0.107212);
}

double NNfunction_ss_sRsR::synapse0x345d590() {
   return (neuron0x3459830()*-0.208393);
}

double NNfunction_ss_sRsR::synapse0x345d5d0() {
   return (neuron0x3459b70()*-0.0050509);
}

double NNfunction_ss_sRsR::synapse0x345d610() {
   return (neuron0x3459eb0()*0.0475259);
}

double NNfunction_ss_sRsR::synapse0x345d650() {
   return (neuron0x345a1f0()*-0.0272179);
}

double NNfunction_ss_sRsR::synapse0x345d690() {
   return (neuron0x345a530()*0.1277);
}

double NNfunction_ss_sRsR::synapse0x345d6d0() {
   return (neuron0x345a870()*0.0691069);
}

double NNfunction_ss_sRsR::synapse0x345d710() {
   return (neuron0x345abb0()*-0.0021345);
}

double NNfunction_ss_sRsR::synapse0x345d750() {
   return (neuron0x345aef0()*0.122189);
}

double NNfunction_ss_sRsR::synapse0x345d790() {
   return (neuron0x345b230()*0.0203575);
}

double NNfunction_ss_sRsR::synapse0x3457fa0() {
   return (neuron0x345b570()*-0.0562349);
}

double NNfunction_ss_sRsR::synapse0x3457fe0() {
   return (neuron0x345bad0()*-0.0152129);
}

double NNfunction_ss_sRsR::synapse0x3213360() {
   return (neuron0x345bcf0()*0.368087);
}

double NNfunction_ss_sRsR::synapse0x32133a0() {
   return (neuron0x345c030()*0.0735103);
}

double NNfunction_ss_sRsR::synapse0x345d9f0() {
   return (neuron0x345c370()*-0.0456103);
}

double NNfunction_ss_sRsR::synapse0x345da30() {
   return (neuron0x345c6b0()*-0.0551768);
}

double NNfunction_ss_sRsR::synapse0x345da70() {
   return (neuron0x345c9f0()*0.00412228);
}

double NNfunction_ss_sRsR::synapse0x345dab0() {
   return (neuron0x345cd30()*-0.0138432);
}

double NNfunction_ss_sRsR::synapse0x345de30() {
   return (neuron0x3458170()*-0.364047);
}

double NNfunction_ss_sRsR::synapse0x345de70() {
   return (neuron0x34584b0()*-0.214618);
}

double NNfunction_ss_sRsR::synapse0x345deb0() {
   return (neuron0x34587f0()*-0.244124);
}

double NNfunction_ss_sRsR::synapse0x345def0() {
   return (neuron0x3458b30()*0.624094);
}

double NNfunction_ss_sRsR::synapse0x345df30() {
   return (neuron0x3458e70()*-0.211058);
}

double NNfunction_ss_sRsR::synapse0x345df70() {
   return (neuron0x34591b0()*-0.140032);
}

double NNfunction_ss_sRsR::synapse0x345dfb0() {
   return (neuron0x34594f0()*-0.437561);
}

double NNfunction_ss_sRsR::synapse0x345dff0() {
   return (neuron0x3459830()*-0.511738);
}

double NNfunction_ss_sRsR::synapse0x345e030() {
   return (neuron0x3459b70()*-0.195381);
}

double NNfunction_ss_sRsR::synapse0x345d8e0() {
   return (neuron0x3459eb0()*0.0427377);
}

double NNfunction_ss_sRsR::synapse0x345d920() {
   return (neuron0x345a1f0()*0.143712);
}

double NNfunction_ss_sRsR::synapse0x345d960() {
   return (neuron0x345a530()*0.728355);
}

double NNfunction_ss_sRsR::synapse0x345d9a0() {
   return (neuron0x345a870()*-0.775754);
}

double NNfunction_ss_sRsR::synapse0x345e280() {
   return (neuron0x345abb0()*-0.588117);
}

double NNfunction_ss_sRsR::synapse0x345e2c0() {
   return (neuron0x345aef0()*0.366536);
}

double NNfunction_ss_sRsR::synapse0x345e300() {
   return (neuron0x345b230()*0.344815);
}

double NNfunction_ss_sRsR::synapse0x345dc80() {
   return (neuron0x345b570()*-0.472599);
}

double NNfunction_ss_sRsR::synapse0x345dcc0() {
   return (neuron0x345bad0()*0.248567);
}

double NNfunction_ss_sRsR::synapse0x345e450() {
   return (neuron0x345bcf0()*0.396057);
}

double NNfunction_ss_sRsR::synapse0x345e490() {
   return (neuron0x345c030()*-0.17471);
}

double NNfunction_ss_sRsR::synapse0x345e4d0() {
   return (neuron0x345c370()*0.121336);
}

double NNfunction_ss_sRsR::synapse0x345e510() {
   return (neuron0x345c6b0()*-0.177271);
}

double NNfunction_ss_sRsR::synapse0x345e550() {
   return (neuron0x345c9f0()*-0.193738);
}

double NNfunction_ss_sRsR::synapse0x345e590() {
   return (neuron0x345cd30()*-0.378286);
}

double NNfunction_ss_sRsR::synapse0x345e910() {
   return (neuron0x3458170()*-0.00552419);
}

double NNfunction_ss_sRsR::synapse0x345e950() {
   return (neuron0x34584b0()*0.0243367);
}

double NNfunction_ss_sRsR::synapse0x345e990() {
   return (neuron0x34587f0()*-0.0224185);
}

double NNfunction_ss_sRsR::synapse0x345e9d0() {
   return (neuron0x3458b30()*-0.117161);
}

double NNfunction_ss_sRsR::synapse0x345ea10() {
   return (neuron0x3458e70()*-1.05179);
}

double NNfunction_ss_sRsR::synapse0x345ea50() {
   return (neuron0x34591b0()*-0.206676);
}

double NNfunction_ss_sRsR::synapse0x345ea90() {
   return (neuron0x34594f0()*-0.609196);
}

double NNfunction_ss_sRsR::synapse0x345ead0() {
   return (neuron0x3459830()*0.376671);
}

double NNfunction_ss_sRsR::synapse0x345eb10() {
   return (neuron0x3459b70()*0.0683683);
}

double NNfunction_ss_sRsR::synapse0x345eb50() {
   return (neuron0x3459eb0()*0.116658);
}

double NNfunction_ss_sRsR::synapse0x345eb90() {
   return (neuron0x345a1f0()*-0.0682417);
}

double NNfunction_ss_sRsR::synapse0x345ebd0() {
   return (neuron0x345a530()*-0.0592145);
}

double NNfunction_ss_sRsR::synapse0x345ec10() {
   return (neuron0x345a870()*-0.115937);
}

double NNfunction_ss_sRsR::synapse0x345ec50() {
   return (neuron0x345abb0()*-0.0782093);
}

double NNfunction_ss_sRsR::synapse0x345ec90() {
   return (neuron0x345aef0()*-0.302414);
}

double NNfunction_ss_sRsR::synapse0x345ecd0() {
   return (neuron0x345b230()*-0.106064);
}

double NNfunction_ss_sRsR::synapse0x345e760() {
   return (neuron0x345b570()*-0.192765);
}

double NNfunction_ss_sRsR::synapse0x345e7a0() {
   return (neuron0x345bad0()*-0.0694037);
}

double NNfunction_ss_sRsR::synapse0x3213a00() {
   return (neuron0x345bcf0()*0.37442);
}

double NNfunction_ss_sRsR::synapse0x32212d0() {
   return (neuron0x345c030()*-0.0649664);
}

double NNfunction_ss_sRsR::synapse0x3221310() {
   return (neuron0x345c370()*0.100191);
}

double NNfunction_ss_sRsR::synapse0x3447200() {
   return (neuron0x345c6b0()*-0.0126116);
}

double NNfunction_ss_sRsR::synapse0x3447240() {
   return (neuron0x345c9f0()*0.0752892);
}

double NNfunction_ss_sRsR::synapse0x3447280() {
   return (neuron0x345cd30()*0.00248698);
}

double NNfunction_ss_sRsR::synapse0x3221b50() {
   return (neuron0x3458170()*0.00716789);
}

double NNfunction_ss_sRsR::synapse0x345e200() {
   return (neuron0x34584b0()*0.851531);
}

double NNfunction_ss_sRsR::synapse0x345e240() {
   return (neuron0x34587f0()*0.836801);
}

double NNfunction_ss_sRsR::synapse0x345ee20() {
   return (neuron0x3458b30()*-1.47248);
}

double NNfunction_ss_sRsR::synapse0x345ee60() {
   return (neuron0x3458e70()*0.166645);
}

double NNfunction_ss_sRsR::synapse0x345eea0() {
   return (neuron0x34591b0()*0.491652);
}

double NNfunction_ss_sRsR::synapse0x345eee0() {
   return (neuron0x34594f0()*0.358025);
}

double NNfunction_ss_sRsR::synapse0x345ef20() {
   return (neuron0x3459830()*0.11554);
}

double NNfunction_ss_sRsR::synapse0x345ef60() {
   return (neuron0x3459b70()*-0.200205);
}

double NNfunction_ss_sRsR::synapse0x345efa0() {
   return (neuron0x3459eb0()*0.0372922);
}

double NNfunction_ss_sRsR::synapse0x345efe0() {
   return (neuron0x345a1f0()*-0.686573);
}

double NNfunction_ss_sRsR::synapse0x345f020() {
   return (neuron0x345a530()*0.207656);
}

double NNfunction_ss_sRsR::synapse0x345f060() {
   return (neuron0x345a870()*-0.829298);
}

double NNfunction_ss_sRsR::synapse0x345f0a0() {
   return (neuron0x345abb0()*0.219789);
}

double NNfunction_ss_sRsR::synapse0x345f0e0() {
   return (neuron0x345aef0()*-0.164396);
}

double NNfunction_ss_sRsR::synapse0x345f120() {
   return (neuron0x345b230()*-0.321206);
}

double NNfunction_ss_sRsR::synapse0x34580b0() {
   return (neuron0x345b570()*0.0165013);
}

double NNfunction_ss_sRsR::synapse0x34580f0() {
   return (neuron0x345bad0()*2.58047);
}

double NNfunction_ss_sRsR::synapse0x3458130() {
   return (neuron0x345bcf0()*-1.12555);
}

double NNfunction_ss_sRsR::synapse0x345f270() {
   return (neuron0x345c030()*-0.0618687);
}

double NNfunction_ss_sRsR::synapse0x345f2b0() {
   return (neuron0x345c370()*-0.743451);
}

double NNfunction_ss_sRsR::synapse0x345f2f0() {
   return (neuron0x345c6b0()*-0.0782937);
}

double NNfunction_ss_sRsR::synapse0x345f330() {
   return (neuron0x345c9f0()*0.545539);
}

double NNfunction_ss_sRsR::synapse0x345f370() {
   return (neuron0x345cd30()*-0.0278546);
}

double NNfunction_ss_sRsR::synapse0x345f6f0() {
   return (neuron0x3458170()*-0.0474988);
}

double NNfunction_ss_sRsR::synapse0x345f730() {
   return (neuron0x34584b0()*-0.0390275);
}

double NNfunction_ss_sRsR::synapse0x345f770() {
   return (neuron0x34587f0()*-0.120355);
}

double NNfunction_ss_sRsR::synapse0x345f7b0() {
   return (neuron0x3458b30()*0.540582);
}

double NNfunction_ss_sRsR::synapse0x345f7f0() {
   return (neuron0x3458e70()*-0.0287784);
}

double NNfunction_ss_sRsR::synapse0x345f830() {
   return (neuron0x34591b0()*-0.0151275);
}

double NNfunction_ss_sRsR::synapse0x345f870() {
   return (neuron0x34594f0()*0.0254928);
}

double NNfunction_ss_sRsR::synapse0x345f8b0() {
   return (neuron0x3459830()*0.00304719);
}

double NNfunction_ss_sRsR::synapse0x345f8f0() {
   return (neuron0x3459b70()*-0.0735354);
}

double NNfunction_ss_sRsR::synapse0x345f930() {
   return (neuron0x3459eb0()*0.109536);
}

double NNfunction_ss_sRsR::synapse0x345f970() {
   return (neuron0x345a1f0()*-0.0297974);
}

double NNfunction_ss_sRsR::synapse0x345f9b0() {
   return (neuron0x345a530()*-0.00514289);
}

double NNfunction_ss_sRsR::synapse0x345f9f0() {
   return (neuron0x345a870()*0.00344031);
}

double NNfunction_ss_sRsR::synapse0x345fa30() {
   return (neuron0x345abb0()*0.0396875);
}

double NNfunction_ss_sRsR::synapse0x345fa70() {
   return (neuron0x345aef0()*-0.596105);
}

double NNfunction_ss_sRsR::synapse0x345fab0() {
   return (neuron0x345b230()*0.0950552);
}

double NNfunction_ss_sRsR::synapse0x345f540() {
   return (neuron0x345b570()*-0.0317795);
}

double NNfunction_ss_sRsR::synapse0x345f580() {
   return (neuron0x345bad0()*-0.000634165);
}

double NNfunction_ss_sRsR::synapse0x345fc00() {
   return (neuron0x345bcf0()*0.422679);
}

double NNfunction_ss_sRsR::synapse0x345fc40() {
   return (neuron0x345c030()*0.0148879);
}

double NNfunction_ss_sRsR::synapse0x345fc80() {
   return (neuron0x345c370()*-0.0243004);
}

double NNfunction_ss_sRsR::synapse0x345fcc0() {
   return (neuron0x345c6b0()*-0.0218572);
}

double NNfunction_ss_sRsR::synapse0x345fd00() {
   return (neuron0x345c9f0()*0.00207347);
}

double NNfunction_ss_sRsR::synapse0x345fd40() {
   return (neuron0x345cd30()*0.0374544);
}

double NNfunction_ss_sRsR::synapse0x34600c0() {
   return (neuron0x3458170()*0.0308607);
}

double NNfunction_ss_sRsR::synapse0x3460100() {
   return (neuron0x34584b0()*0.0915171);
}

double NNfunction_ss_sRsR::synapse0x3460140() {
   return (neuron0x34587f0()*-0.0167082);
}

double NNfunction_ss_sRsR::synapse0x3460180() {
   return (neuron0x3458b30()*2.81457);
}

double NNfunction_ss_sRsR::synapse0x34601c0() {
   return (neuron0x3458e70()*-0.0590461);
}

double NNfunction_ss_sRsR::synapse0x3460200() {
   return (neuron0x34591b0()*0.0347652);
}

double NNfunction_ss_sRsR::synapse0x3460240() {
   return (neuron0x34594f0()*-0.0263419);
}

double NNfunction_ss_sRsR::synapse0x3460280() {
   return (neuron0x3459830()*-0.0269294);
}

double NNfunction_ss_sRsR::synapse0x34602c0() {
   return (neuron0x3459b70()*0.00439772);
}

double NNfunction_ss_sRsR::synapse0x3221620() {
   return (neuron0x3459eb0()*0.0333034);
}

double NNfunction_ss_sRsR::synapse0x3221660() {
   return (neuron0x345a1f0()*-0.0118192);
}

double NNfunction_ss_sRsR::synapse0x32216a0() {
   return (neuron0x345a530()*-0.00428705);
}

double NNfunction_ss_sRsR::synapse0x32216e0() {
   return (neuron0x345a870()*-0.000635703);
}

double NNfunction_ss_sRsR::synapse0x3221720() {
   return (neuron0x345abb0()*0.00379241);
}

double NNfunction_ss_sRsR::synapse0x3221760() {
   return (neuron0x345aef0()*-0.0219653);
}

double NNfunction_ss_sRsR::synapse0x32217a0() {
   return (neuron0x345b230()*-0.13142);
}

double NNfunction_ss_sRsR::synapse0x345ff10() {
   return (neuron0x345b570()*-0.0226744);
}

double NNfunction_ss_sRsR::synapse0x345ff50() {
   return (neuron0x345bad0()*0.00508236);
}

double NNfunction_ss_sRsR::synapse0x32218f0() {
   return (neuron0x345bcf0()*-0.503718);
}

double NNfunction_ss_sRsR::synapse0x3221930() {
   return (neuron0x345c030()*0.024985);
}

double NNfunction_ss_sRsR::synapse0x3221970() {
   return (neuron0x345c370()*-0.00825745);
}

double NNfunction_ss_sRsR::synapse0x32219b0() {
   return (neuron0x345c6b0()*0.00630585);
}

double NNfunction_ss_sRsR::synapse0x32219f0() {
   return (neuron0x345c9f0()*-0.0350953);
}

double NNfunction_ss_sRsR::synapse0x3460b10() {
   return (neuron0x345cd30()*0.00106493);
}

double NNfunction_ss_sRsR::synapse0x3460e90() {
   return (neuron0x3458170()*0.0967149);
}

double NNfunction_ss_sRsR::synapse0x3460ed0() {
   return (neuron0x34584b0()*-0.0231269);
}

double NNfunction_ss_sRsR::synapse0x3460f10() {
   return (neuron0x34587f0()*0.0124586);
}

double NNfunction_ss_sRsR::synapse0x3460f50() {
   return (neuron0x3458b30()*0.0960109);
}

double NNfunction_ss_sRsR::synapse0x3460f90() {
   return (neuron0x3458e70()*-0.00761077);
}

double NNfunction_ss_sRsR::synapse0x3460fd0() {
   return (neuron0x34591b0()*0.0149752);
}

double NNfunction_ss_sRsR::synapse0x3461010() {
   return (neuron0x34594f0()*-0.013998);
}

double NNfunction_ss_sRsR::synapse0x3461050() {
   return (neuron0x3459830()*0.00907323);
}

double NNfunction_ss_sRsR::synapse0x3461090() {
   return (neuron0x3459b70()*-0.014498);
}

double NNfunction_ss_sRsR::synapse0x34610d0() {
   return (neuron0x3459eb0()*-0.00827383);
}

double NNfunction_ss_sRsR::synapse0x3461110() {
   return (neuron0x345a1f0()*-0.0149751);
}

double NNfunction_ss_sRsR::synapse0x3461150() {
   return (neuron0x345a530()*-0.383086);
}

double NNfunction_ss_sRsR::synapse0x3461190() {
   return (neuron0x345a870()*-0.366513);
}

double NNfunction_ss_sRsR::synapse0x34611d0() {
   return (neuron0x345abb0()*0.0417656);
}

double NNfunction_ss_sRsR::synapse0x3461210() {
   return (neuron0x345aef0()*-0.169255);
}

double NNfunction_ss_sRsR::synapse0x3461250() {
   return (neuron0x345b230()*-0.217156);
}

double NNfunction_ss_sRsR::synapse0x3460ce0() {
   return (neuron0x345b570()*0.0478268);
}

double NNfunction_ss_sRsR::synapse0x3460d20() {
   return (neuron0x345bad0()*-0.207083);
}

double NNfunction_ss_sRsR::synapse0x34613a0() {
   return (neuron0x345bcf0()*0.0284003);
}

double NNfunction_ss_sRsR::synapse0x34613e0() {
   return (neuron0x345c030()*-0.0629121);
}

double NNfunction_ss_sRsR::synapse0x3461420() {
   return (neuron0x345c370()*0.00923214);
}

double NNfunction_ss_sRsR::synapse0x3461460() {
   return (neuron0x345c6b0()*0.0207724);
}

double NNfunction_ss_sRsR::synapse0x34614a0() {
   return (neuron0x345c9f0()*-0.0179407);
}

double NNfunction_ss_sRsR::synapse0x34614e0() {
   return (neuron0x345cd30()*0.035888);
}

double NNfunction_ss_sRsR::synapse0x3461860() {
   return (neuron0x3458170()*-0.339667);
}

double NNfunction_ss_sRsR::synapse0x34618a0() {
   return (neuron0x34584b0()*0.229609);
}

double NNfunction_ss_sRsR::synapse0x34618e0() {
   return (neuron0x34587f0()*0.311606);
}

double NNfunction_ss_sRsR::synapse0x3461920() {
   return (neuron0x3458b30()*1.20474);
}

double NNfunction_ss_sRsR::synapse0x3461960() {
   return (neuron0x3458e70()*0.660981);
}

double NNfunction_ss_sRsR::synapse0x34619a0() {
   return (neuron0x34591b0()*-0.296463);
}

double NNfunction_ss_sRsR::synapse0x34619e0() {
   return (neuron0x34594f0()*0.177504);
}

double NNfunction_ss_sRsR::synapse0x3461a20() {
   return (neuron0x3459830()*-0.259296);
}

double NNfunction_ss_sRsR::synapse0x3461a60() {
   return (neuron0x3459b70()*0.236422);
}

double NNfunction_ss_sRsR::synapse0x3461aa0() {
   return (neuron0x3459eb0()*-0.061915);
}

double NNfunction_ss_sRsR::synapse0x3461ae0() {
   return (neuron0x345a1f0()*-0.189731);
}

double NNfunction_ss_sRsR::synapse0x3461b20() {
   return (neuron0x345a530()*-0.198956);
}

double NNfunction_ss_sRsR::synapse0x3461b60() {
   return (neuron0x345a870()*-0.809645);
}

double NNfunction_ss_sRsR::synapse0x3461ba0() {
   return (neuron0x345abb0()*1.06652);
}

double NNfunction_ss_sRsR::synapse0x3461be0() {
   return (neuron0x345aef0()*0.0206348);
}

double NNfunction_ss_sRsR::synapse0x3461c20() {
   return (neuron0x345b230()*0.560279);
}

double NNfunction_ss_sRsR::synapse0x34616b0() {
   return (neuron0x345b570()*0.154723);
}

double NNfunction_ss_sRsR::synapse0x34616f0() {
   return (neuron0x345bad0()*-0.000198149);
}

double NNfunction_ss_sRsR::synapse0x3461d70() {
   return (neuron0x345bcf0()*0.908624);
}

double NNfunction_ss_sRsR::synapse0x3461db0() {
   return (neuron0x345c030()*-0.596323);
}

double NNfunction_ss_sRsR::synapse0x3461df0() {
   return (neuron0x345c370()*0.0478359);
}

double NNfunction_ss_sRsR::synapse0x3461e30() {
   return (neuron0x345c6b0()*0.681436);
}

double NNfunction_ss_sRsR::synapse0x3461e70() {
   return (neuron0x345c9f0()*0.321757);
}

double NNfunction_ss_sRsR::synapse0x3461eb0() {
   return (neuron0x345cd30()*0.183423);
}

double NNfunction_ss_sRsR::synapse0x345b9c0() {
   return (neuron0x3458170()*-0.134605);
}

double NNfunction_ss_sRsR::synapse0x345ba00() {
   return (neuron0x34584b0()*0.996291);
}

double NNfunction_ss_sRsR::synapse0x345ba40() {
   return (neuron0x34587f0()*0.624177);
}

double NNfunction_ss_sRsR::synapse0x345ba80() {
   return (neuron0x3458b30()*1.51375);
}

double NNfunction_ss_sRsR::synapse0x3462440() {
   return (neuron0x3458e70()*-1.2129);
}

double NNfunction_ss_sRsR::synapse0x3462480() {
   return (neuron0x34591b0()*-0.623227);
}

double NNfunction_ss_sRsR::synapse0x34624c0() {
   return (neuron0x34594f0()*0.609459);
}

double NNfunction_ss_sRsR::synapse0x3462500() {
   return (neuron0x3459830()*-0.723931);
}

double NNfunction_ss_sRsR::synapse0x3462540() {
   return (neuron0x3459b70()*0.837088);
}

double NNfunction_ss_sRsR::synapse0x3462580() {
   return (neuron0x3459eb0()*0.401617);
}

double NNfunction_ss_sRsR::synapse0x34625c0() {
   return (neuron0x345a1f0()*0.429478);
}

double NNfunction_ss_sRsR::synapse0x3462600() {
   return (neuron0x345a530()*0.351514);
}

double NNfunction_ss_sRsR::synapse0x3462640() {
   return (neuron0x345a870()*0.502639);
}

double NNfunction_ss_sRsR::synapse0x3462680() {
   return (neuron0x345abb0()*0.884037);
}

double NNfunction_ss_sRsR::synapse0x34626c0() {
   return (neuron0x345aef0()*0.827053);
}

double NNfunction_ss_sRsR::synapse0x3462700() {
   return (neuron0x345b230()*0.603054);
}

double NNfunction_ss_sRsR::synapse0x3462080() {
   return (neuron0x345b570()*-1.16166);
}

double NNfunction_ss_sRsR::synapse0x34620c0() {
   return (neuron0x345bad0()*-0.474723);
}

double NNfunction_ss_sRsR::synapse0x3462850() {
   return (neuron0x345bcf0()*-0.697591);
}

double NNfunction_ss_sRsR::synapse0x3462890() {
   return (neuron0x345c030()*-0.636355);
}

double NNfunction_ss_sRsR::synapse0x34628d0() {
   return (neuron0x345c370()*0.519196);
}

double NNfunction_ss_sRsR::synapse0x3462910() {
   return (neuron0x345c6b0()*1.03016);
}

double NNfunction_ss_sRsR::synapse0x3462950() {
   return (neuron0x345c9f0()*-1.32221);
}

double NNfunction_ss_sRsR::synapse0x3462990() {
   return (neuron0x345cd30()*0.0205615);
}

double NNfunction_ss_sRsR::synapse0x3462d10() {
   return (neuron0x3458170()*-0.130372);
}

double NNfunction_ss_sRsR::synapse0x3462d50() {
   return (neuron0x34584b0()*1.17328);
}

double NNfunction_ss_sRsR::synapse0x3462d90() {
   return (neuron0x34587f0()*-1.39725);
}

double NNfunction_ss_sRsR::synapse0x3462dd0() {
   return (neuron0x3458b30()*0.159747);
}

double NNfunction_ss_sRsR::synapse0x3462e10() {
   return (neuron0x3458e70()*-0.818357);
}

double NNfunction_ss_sRsR::synapse0x3462e50() {
   return (neuron0x34591b0()*-0.507967);
}

double NNfunction_ss_sRsR::synapse0x3462e90() {
   return (neuron0x34594f0()*0.39801);
}

double NNfunction_ss_sRsR::synapse0x3462ed0() {
   return (neuron0x3459830()*-0.415006);
}

double NNfunction_ss_sRsR::synapse0x3462f10() {
   return (neuron0x3459b70()*1.62732);
}

double NNfunction_ss_sRsR::synapse0x3462f50() {
   return (neuron0x3459eb0()*-1.47771);
}

double NNfunction_ss_sRsR::synapse0x3462f90() {
   return (neuron0x345a1f0()*-0.0658863);
}

double NNfunction_ss_sRsR::synapse0x3462fd0() {
   return (neuron0x345a530()*-0.716567);
}

double NNfunction_ss_sRsR::synapse0x3463010() {
   return (neuron0x345a870()*-0.953755);
}

double NNfunction_ss_sRsR::synapse0x3463050() {
   return (neuron0x345abb0()*0.962705);
}

double NNfunction_ss_sRsR::synapse0x3463090() {
   return (neuron0x345aef0()*0.992605);
}

double NNfunction_ss_sRsR::synapse0x34630d0() {
   return (neuron0x345b230()*-1.33161);
}

double NNfunction_ss_sRsR::synapse0x3462b60() {
   return (neuron0x345b570()*0.15637);
}

double NNfunction_ss_sRsR::synapse0x3462ba0() {
   return (neuron0x345bad0()*0.034618);
}

double NNfunction_ss_sRsR::synapse0x3463220() {
   return (neuron0x345bcf0()*0.672757);
}

double NNfunction_ss_sRsR::synapse0x3463260() {
   return (neuron0x345c030()*0.353487);
}

double NNfunction_ss_sRsR::synapse0x34632a0() {
   return (neuron0x345c370()*-1.4759);
}

double NNfunction_ss_sRsR::synapse0x34632e0() {
   return (neuron0x345c6b0()*1.47296);
}

double NNfunction_ss_sRsR::synapse0x3463320() {
   return (neuron0x345c9f0()*-0.248838);
}

double NNfunction_ss_sRsR::synapse0x3463360() {
   return (neuron0x345cd30()*-0.192332);
}

double NNfunction_ss_sRsR::synapse0x34636e0() {
   return (neuron0x3458170()*0.124003);
}

double NNfunction_ss_sRsR::synapse0x3463720() {
   return (neuron0x34584b0()*0.417157);
}

double NNfunction_ss_sRsR::synapse0x3463760() {
   return (neuron0x34587f0()*0.103089);
}

double NNfunction_ss_sRsR::synapse0x34637a0() {
   return (neuron0x3458b30()*0.00261818);
}

double NNfunction_ss_sRsR::synapse0x34637e0() {
   return (neuron0x3458e70()*0.00672107);
}

double NNfunction_ss_sRsR::synapse0x3463820() {
   return (neuron0x34591b0()*-0.515467);
}

double NNfunction_ss_sRsR::synapse0x3463860() {
   return (neuron0x34594f0()*0.0499841);
}

double NNfunction_ss_sRsR::synapse0x34638a0() {
   return (neuron0x3459830()*-0.783423);
}

double NNfunction_ss_sRsR::synapse0x34638e0() {
   return (neuron0x3459b70()*-0.0369517);
}

double NNfunction_ss_sRsR::synapse0x3463920() {
   return (neuron0x3459eb0()*0.031015);
}

double NNfunction_ss_sRsR::synapse0x3463960() {
   return (neuron0x345a1f0()*0.0489645);
}

double NNfunction_ss_sRsR::synapse0x34639a0() {
   return (neuron0x345a530()*-0.169018);
}

double NNfunction_ss_sRsR::synapse0x34639e0() {
   return (neuron0x345a870()*-0.0725784);
}

double NNfunction_ss_sRsR::synapse0x3463a20() {
   return (neuron0x345abb0()*-0.0316366);
}

double NNfunction_ss_sRsR::synapse0x3463a60() {
   return (neuron0x345aef0()*-0.376344);
}

double NNfunction_ss_sRsR::synapse0x3463aa0() {
   return (neuron0x345b230()*-0.134667);
}

double NNfunction_ss_sRsR::synapse0x3463530() {
   return (neuron0x345b570()*0.106332);
}

double NNfunction_ss_sRsR::synapse0x3463570() {
   return (neuron0x345bad0()*-0.0175868);
}

double NNfunction_ss_sRsR::synapse0x3460300() {
   return (neuron0x345bcf0()*1.15122);
}

double NNfunction_ss_sRsR::synapse0x3460340() {
   return (neuron0x345c030()*-0.191795);
}

double NNfunction_ss_sRsR::synapse0x3460380() {
   return (neuron0x345c370()*0.111618);
}

double NNfunction_ss_sRsR::synapse0x34603c0() {
   return (neuron0x345c6b0()*-0.110808);
}

double NNfunction_ss_sRsR::synapse0x3460400() {
   return (neuron0x345c9f0()*0.0406568);
}

double NNfunction_ss_sRsR::synapse0x3460440() {
   return (neuron0x345cd30()*-0.098286);
}

double NNfunction_ss_sRsR::synapse0x34607c0() {
   return (neuron0x3458170()*-0.33556);
}

double NNfunction_ss_sRsR::synapse0x3460800() {
   return (neuron0x34584b0()*0.0153014);
}

double NNfunction_ss_sRsR::synapse0x3460840() {
   return (neuron0x34587f0()*-0.0145329);
}

double NNfunction_ss_sRsR::synapse0x3460880() {
   return (neuron0x3458b30()*-0.0295452);
}

double NNfunction_ss_sRsR::synapse0x34608c0() {
   return (neuron0x3458e70()*0.0394184);
}

double NNfunction_ss_sRsR::synapse0x3460900() {
   return (neuron0x34591b0()*-0.0162607);
}

double NNfunction_ss_sRsR::synapse0x3460940() {
   return (neuron0x34594f0()*0.0653143);
}

double NNfunction_ss_sRsR::synapse0x3460980() {
   return (neuron0x3459830()*-0.0531326);
}

double NNfunction_ss_sRsR::synapse0x34609c0() {
   return (neuron0x3459b70()*0.0376118);
}

double NNfunction_ss_sRsR::synapse0x3460a00() {
   return (neuron0x3459eb0()*0.0257886);
}

double NNfunction_ss_sRsR::synapse0x3460a40() {
   return (neuron0x345a1f0()*0.0440141);
}

double NNfunction_ss_sRsR::synapse0x3460a80() {
   return (neuron0x345a530()*0.0469369);
}

double NNfunction_ss_sRsR::synapse0x3460ac0() {
   return (neuron0x345a870()*-0.0466118);
}

double NNfunction_ss_sRsR::synapse0x3464c00() {
   return (neuron0x345abb0()*0.00897936);
}

double NNfunction_ss_sRsR::synapse0x3464c40() {
   return (neuron0x345aef0()*-0.0623975);
}

double NNfunction_ss_sRsR::synapse0x3464c80() {
   return (neuron0x345b230()*0.0197511);
}

double NNfunction_ss_sRsR::synapse0x3460610() {
   return (neuron0x345b570()*-0.00251449);
}

double NNfunction_ss_sRsR::synapse0x3460650() {
   return (neuron0x345bad0()*0.0157234);
}

double NNfunction_ss_sRsR::synapse0x3464dd0() {
   return (neuron0x345bcf0()*-0.859857);
}

double NNfunction_ss_sRsR::synapse0x3464e10() {
   return (neuron0x345c030()*0.0999338);
}

double NNfunction_ss_sRsR::synapse0x3464e50() {
   return (neuron0x345c370()*-0.0602381);
}

double NNfunction_ss_sRsR::synapse0x3464e90() {
   return (neuron0x345c6b0()*-0.0345029);
}

double NNfunction_ss_sRsR::synapse0x3464ed0() {
   return (neuron0x345c9f0()*0.0226382);
}

double NNfunction_ss_sRsR::synapse0x3464f10() {
   return (neuron0x345cd30()*-0.152276);
}

double NNfunction_ss_sRsR::synapse0x3465290() {
   return (neuron0x3458170()*0.159449);
}

double NNfunction_ss_sRsR::synapse0x34652d0() {
   return (neuron0x34584b0()*-0.218934);
}

double NNfunction_ss_sRsR::synapse0x3465310() {
   return (neuron0x34587f0()*-0.236863);
}

double NNfunction_ss_sRsR::synapse0x3465350() {
   return (neuron0x3458b30()*-1.04752);
}

double NNfunction_ss_sRsR::synapse0x3465390() {
   return (neuron0x3458e70()*-0.493564);
}

double NNfunction_ss_sRsR::synapse0x34653d0() {
   return (neuron0x34591b0()*-0.388402);
}

double NNfunction_ss_sRsR::synapse0x3465410() {
   return (neuron0x34594f0()*-0.18266);
}

double NNfunction_ss_sRsR::synapse0x3465450() {
   return (neuron0x3459830()*-0.759587);
}

double NNfunction_ss_sRsR::synapse0x3465490() {
   return (neuron0x3459b70()*-0.653935);
}

double NNfunction_ss_sRsR::synapse0x34654d0() {
   return (neuron0x3459eb0()*-1.03936);
}

double NNfunction_ss_sRsR::synapse0x3465510() {
   return (neuron0x345a1f0()*-1.01338);
}

double NNfunction_ss_sRsR::synapse0x3465550() {
   return (neuron0x345a530()*-0.144848);
}

double NNfunction_ss_sRsR::synapse0x3465590() {
   return (neuron0x345a870()*0.278314);
}

double NNfunction_ss_sRsR::synapse0x34655d0() {
   return (neuron0x345abb0()*1.10429);
}

double NNfunction_ss_sRsR::synapse0x3465610() {
   return (neuron0x345aef0()*0.177293);
}

double NNfunction_ss_sRsR::synapse0x3465650() {
   return (neuron0x345b230()*-1.0193);
}

double NNfunction_ss_sRsR::synapse0x34650e0() {
   return (neuron0x345b570()*-0.934817);
}

double NNfunction_ss_sRsR::synapse0x3465120() {
   return (neuron0x345bad0()*-0.15273);
}

double NNfunction_ss_sRsR::synapse0x34657a0() {
   return (neuron0x345bcf0()*1.26738);
}

double NNfunction_ss_sRsR::synapse0x34657e0() {
   return (neuron0x345c030()*0.887399);
}

double NNfunction_ss_sRsR::synapse0x3465820() {
   return (neuron0x345c370()*0.399062);
}

double NNfunction_ss_sRsR::synapse0x3465860() {
   return (neuron0x345c6b0()*-0.756761);
}

double NNfunction_ss_sRsR::synapse0x34658a0() {
   return (neuron0x345c9f0()*0.604832);
}

double NNfunction_ss_sRsR::synapse0x34658e0() {
   return (neuron0x345cd30()*0.190566);
}

double NNfunction_ss_sRsR::synapse0x3465c60() {
   return (neuron0x3458170()*-0.0371072);
}

double NNfunction_ss_sRsR::synapse0x3465ca0() {
   return (neuron0x34584b0()*0.136698);
}

double NNfunction_ss_sRsR::synapse0x3465ce0() {
   return (neuron0x34587f0()*-0.243574);
}

double NNfunction_ss_sRsR::synapse0x3465d20() {
   return (neuron0x3458b30()*-0.151666);
}

double NNfunction_ss_sRsR::synapse0x3465d60() {
   return (neuron0x3458e70()*-0.0783898);
}

double NNfunction_ss_sRsR::synapse0x3465da0() {
   return (neuron0x34591b0()*-0.54984);
}

double NNfunction_ss_sRsR::synapse0x3465de0() {
   return (neuron0x34594f0()*0.155392);
}

double NNfunction_ss_sRsR::synapse0x3465e20() {
   return (neuron0x3459830()*0.28248);
}

double NNfunction_ss_sRsR::synapse0x3465e60() {
   return (neuron0x3459b70()*0.0463252);
}

double NNfunction_ss_sRsR::synapse0x3465ea0() {
   return (neuron0x3459eb0()*0.0608299);
}

double NNfunction_ss_sRsR::synapse0x3465ee0() {
   return (neuron0x345a1f0()*-0.0845165);
}

double NNfunction_ss_sRsR::synapse0x3465f20() {
   return (neuron0x345a530()*0.0562965);
}

double NNfunction_ss_sRsR::synapse0x3465f60() {
   return (neuron0x345a870()*0.00701823);
}

double NNfunction_ss_sRsR::synapse0x3465fa0() {
   return (neuron0x345abb0()*-0.0249788);
}

double NNfunction_ss_sRsR::synapse0x3465fe0() {
   return (neuron0x345aef0()*0.344383);
}

double NNfunction_ss_sRsR::synapse0x3466020() {
   return (neuron0x345b230()*-0.226076);
}

double NNfunction_ss_sRsR::synapse0x3465ab0() {
   return (neuron0x345b570()*-0.137507);
}

double NNfunction_ss_sRsR::synapse0x3465af0() {
   return (neuron0x345bad0()*0.125227);
}

double NNfunction_ss_sRsR::synapse0x3466170() {
   return (neuron0x345bcf0()*-0.642059);
}

double NNfunction_ss_sRsR::synapse0x34661b0() {
   return (neuron0x345c030()*0.230501);
}

double NNfunction_ss_sRsR::synapse0x34661f0() {
   return (neuron0x345c370()*-0.069332);
}

double NNfunction_ss_sRsR::synapse0x3466230() {
   return (neuron0x345c6b0()*0.0198623);
}

double NNfunction_ss_sRsR::synapse0x3466270() {
   return (neuron0x345c9f0()*0.0437744);
}

double NNfunction_ss_sRsR::synapse0x34662b0() {
   return (neuron0x345cd30()*-0.0704748);
}

double NNfunction_ss_sRsR::synapse0x3466630() {
   return (neuron0x3458170()*0.13154);
}

double NNfunction_ss_sRsR::synapse0x3466670() {
   return (neuron0x34584b0()*-0.988827);
}

double NNfunction_ss_sRsR::synapse0x34666b0() {
   return (neuron0x34587f0()*1.89143);
}

double NNfunction_ss_sRsR::synapse0x34666f0() {
   return (neuron0x3458b30()*-0.061975);
}

double NNfunction_ss_sRsR::synapse0x3466730() {
   return (neuron0x3458e70()*0.197596);
}

double NNfunction_ss_sRsR::synapse0x3466770() {
   return (neuron0x34591b0()*0.776173);
}

double NNfunction_ss_sRsR::synapse0x34667b0() {
   return (neuron0x34594f0()*1.10534);
}

double NNfunction_ss_sRsR::synapse0x34667f0() {
   return (neuron0x3459830()*0.699176);
}

double NNfunction_ss_sRsR::synapse0x3466830() {
   return (neuron0x3459b70()*0.356767);
}

double NNfunction_ss_sRsR::synapse0x3466870() {
   return (neuron0x3459eb0()*-0.745253);
}

double NNfunction_ss_sRsR::synapse0x34668b0() {
   return (neuron0x345a1f0()*0.275514);
}

double NNfunction_ss_sRsR::synapse0x34668f0() {
   return (neuron0x345a530()*-0.0124596);
}

double NNfunction_ss_sRsR::synapse0x3466930() {
   return (neuron0x345a870()*-0.105808);
}

double NNfunction_ss_sRsR::synapse0x3466970() {
   return (neuron0x345abb0()*-1.39973);
}

double NNfunction_ss_sRsR::synapse0x34669b0() {
   return (neuron0x345aef0()*-0.160977);
}

double NNfunction_ss_sRsR::synapse0x34669f0() {
   return (neuron0x345b230()*-1.21304);
}

double NNfunction_ss_sRsR::synapse0x3466480() {
   return (neuron0x345b570()*0.492677);
}

double NNfunction_ss_sRsR::synapse0x34664c0() {
   return (neuron0x345bad0()*-1.84503);
}

double NNfunction_ss_sRsR::synapse0x3466b40() {
   return (neuron0x345bcf0()*1.19508);
}

double NNfunction_ss_sRsR::synapse0x3466b80() {
   return (neuron0x345c030()*0.289726);
}

double NNfunction_ss_sRsR::synapse0x3466bc0() {
   return (neuron0x345c370()*-0.488478);
}

double NNfunction_ss_sRsR::synapse0x3466c00() {
   return (neuron0x345c6b0()*0.193044);
}

double NNfunction_ss_sRsR::synapse0x3466c40() {
   return (neuron0x345c9f0()*0.0565794);
}

double NNfunction_ss_sRsR::synapse0x3466c80() {
   return (neuron0x345cd30()*0.0714742);
}

double NNfunction_ss_sRsR::synapse0x3467000() {
   return (neuron0x3458170()*0.192489);
}

double NNfunction_ss_sRsR::synapse0x3458390() {
   return (neuron0x34584b0()*0.0998457);
}

double NNfunction_ss_sRsR::synapse0x34583d0() {
   return (neuron0x34587f0()*-0.145143);
}

double NNfunction_ss_sRsR::synapse0x34586d0() {
   return (neuron0x3458b30()*1.09319);
}

double NNfunction_ss_sRsR::synapse0x3458710() {
   return (neuron0x3458e70()*-0.297086);
}

double NNfunction_ss_sRsR::synapse0x3458a10() {
   return (neuron0x34591b0()*-1.0113);
}

double NNfunction_ss_sRsR::synapse0x3458a50() {
   return (neuron0x34594f0()*-0.718962);
}

double NNfunction_ss_sRsR::synapse0x3458d50() {
   return (neuron0x3459830()*0.0883366);
}

double NNfunction_ss_sRsR::synapse0x3458d90() {
   return (neuron0x3459b70()*0.052594);
}

double NNfunction_ss_sRsR::synapse0x3459090() {
   return (neuron0x3459eb0()*-0.680574);
}

double NNfunction_ss_sRsR::synapse0x34590d0() {
   return (neuron0x345a1f0()*0.952086);
}

double NNfunction_ss_sRsR::synapse0x34593d0() {
   return (neuron0x345a530()*0.140761);
}

double NNfunction_ss_sRsR::synapse0x3459410() {
   return (neuron0x345a870()*-0.137367);
}

double NNfunction_ss_sRsR::synapse0x3459710() {
   return (neuron0x345abb0()*0.0451022);
}

double NNfunction_ss_sRsR::synapse0x3459750() {
   return (neuron0x345aef0()*-0.32564);
}

double NNfunction_ss_sRsR::synapse0x3459a50() {
   return (neuron0x345b230()*0.0234064);
}

double NNfunction_ss_sRsR::synapse0x3459a90() {
   return (neuron0x345b570()*-0.110802);
}

double NNfunction_ss_sRsR::synapse0x3459d90() {
   return (neuron0x345bad0()*0.332277);
}

double NNfunction_ss_sRsR::synapse0x3459dd0() {
   return (neuron0x345bcf0()*1.12399);
}

double NNfunction_ss_sRsR::synapse0x345a0d0() {
   return (neuron0x345c030()*0.171661);
}

double NNfunction_ss_sRsR::synapse0x345a110() {
   return (neuron0x345c370()*0.117394);
}

double NNfunction_ss_sRsR::synapse0x345a410() {
   return (neuron0x345c6b0()*-0.697673);
}

double NNfunction_ss_sRsR::synapse0x345a450() {
   return (neuron0x345c9f0()*0.774359);
}

double NNfunction_ss_sRsR::synapse0x345a750() {
   return (neuron0x345cd30()*0.483046);
}

double NNfunction_ss_sRsR::synapse0x345a790() {
   return (neuron0x3458170()*-0.0296555);
}

double NNfunction_ss_sRsR::synapse0x345b450() {
   return (neuron0x34584b0()*-0.0600867);
}

double NNfunction_ss_sRsR::synapse0x345b490() {
   return (neuron0x34587f0()*-0.0105568);
}

double NNfunction_ss_sRsR::synapse0x3466e50() {
   return (neuron0x3458b30()*-0.0874798);
}

double NNfunction_ss_sRsR::synapse0x3466e90() {
   return (neuron0x3458e70()*-0.0710836);
}

double NNfunction_ss_sRsR::synapse0x345b790() {
   return (neuron0x34591b0()*-0.0270097);
}

double NNfunction_ss_sRsR::synapse0x345b7d0() {
   return (neuron0x34594f0()*0.0217938);
}

double NNfunction_ss_sRsR::synapse0x3213240() {
   return (neuron0x3459830()*-0.0527013);
}

double NNfunction_ss_sRsR::synapse0x3213280() {
   return (neuron0x3459b70()*-0.398232);
}

double NNfunction_ss_sRsR::synapse0x345bf10() {
   return (neuron0x3459eb0()*0.346668);
}

double NNfunction_ss_sRsR::synapse0x345bf50() {
   return (neuron0x345a1f0()*0.481383);
}

double NNfunction_ss_sRsR::synapse0x345c250() {
   return (neuron0x345a530()*-0.0503173);
}

double NNfunction_ss_sRsR::synapse0x345c290() {
   return (neuron0x345a870()*-0.11201);
}

double NNfunction_ss_sRsR::synapse0x345c590() {
   return (neuron0x345abb0()*-0.01696);
}

double NNfunction_ss_sRsR::synapse0x345c5d0() {
   return (neuron0x345aef0()*-0.171211);
}

double NNfunction_ss_sRsR::synapse0x345c8d0() {
   return (neuron0x345b230()*-0.0737622);
}

double NNfunction_ss_sRsR::synapse0x345c910() {
   return (neuron0x345b570()*-0.0301535);
}

double NNfunction_ss_sRsR::synapse0x345cc10() {
   return (neuron0x345bad0()*-0.182017);
}

double NNfunction_ss_sRsR::synapse0x345cc50() {
   return (neuron0x345bcf0()*1.07283);
}

double NNfunction_ss_sRsR::synapse0x345cf50() {
   return (neuron0x345c030()*-0.16095);
}

double NNfunction_ss_sRsR::synapse0x345cf90() {
   return (neuron0x345c370()*0.0148492);
}

double NNfunction_ss_sRsR::synapse0x345aa90() {
   return (neuron0x345c6b0()*-0.00831333);
}

double NNfunction_ss_sRsR::synapse0x345aad0() {
   return (neuron0x345c9f0()*0.0198246);
}

double NNfunction_ss_sRsR::synapse0x3468d70() {
   return (neuron0x345cd30()*-0.00227443);
}

double NNfunction_ss_sRsR::synapse0x34690f0() {
   return (neuron0x3458170()*-0.0146447);
}

double NNfunction_ss_sRsR::synapse0x3469130() {
   return (neuron0x34584b0()*-0.0253277);
}

double NNfunction_ss_sRsR::synapse0x3469170() {
   return (neuron0x34587f0()*-0.00364161);
}

double NNfunction_ss_sRsR::synapse0x34691b0() {
   return (neuron0x3458b30()*3.11786);
}

double NNfunction_ss_sRsR::synapse0x34691f0() {
   return (neuron0x3458e70()*0.0303749);
}

double NNfunction_ss_sRsR::synapse0x3469230() {
   return (neuron0x34591b0()*-0.0198053);
}

double NNfunction_ss_sRsR::synapse0x3469270() {
   return (neuron0x34594f0()*-0.0193508);
}

double NNfunction_ss_sRsR::synapse0x34692b0() {
   return (neuron0x3459830()*0.0430822);
}

double NNfunction_ss_sRsR::synapse0x34692f0() {
   return (neuron0x3459b70()*-0.0157396);
}

double NNfunction_ss_sRsR::synapse0x3469330() {
   return (neuron0x3459eb0()*-0.0423599);
}

double NNfunction_ss_sRsR::synapse0x3469370() {
   return (neuron0x345a1f0()*0.00326417);
}

double NNfunction_ss_sRsR::synapse0x34693b0() {
   return (neuron0x345a530()*0.0188374);
}

double NNfunction_ss_sRsR::synapse0x34693f0() {
   return (neuron0x345a870()*0.0286434);
}

double NNfunction_ss_sRsR::synapse0x3469430() {
   return (neuron0x345abb0()*-0.0750121);
}

double NNfunction_ss_sRsR::synapse0x3469470() {
   return (neuron0x345aef0()*0.0298646);
}

double NNfunction_ss_sRsR::synapse0x34694b0() {
   return (neuron0x345b230()*0.0708087);
}

double NNfunction_ss_sRsR::synapse0x3468f40() {
   return (neuron0x345b570()*-0.0253713);
}

double NNfunction_ss_sRsR::synapse0x3468f80() {
   return (neuron0x345bad0()*0.0237071);
}

double NNfunction_ss_sRsR::synapse0x3469600() {
   return (neuron0x345bcf0()*-0.0908878);
}

double NNfunction_ss_sRsR::synapse0x3469640() {
   return (neuron0x345c030()*-0.0291187);
}

double NNfunction_ss_sRsR::synapse0x3469680() {
   return (neuron0x345c370()*0.0131095);
}

double NNfunction_ss_sRsR::synapse0x34696c0() {
   return (neuron0x345c6b0()*-0.0168281);
}

double NNfunction_ss_sRsR::synapse0x3469700() {
   return (neuron0x345c9f0()*0.0085354);
}

double NNfunction_ss_sRsR::synapse0x3469740() {
   return (neuron0x345cd30()*0.0152643);
}

double NNfunction_ss_sRsR::synapse0x3469ac0() {
   return (neuron0x3458170()*0.101365);
}

double NNfunction_ss_sRsR::synapse0x3469b00() {
   return (neuron0x34584b0()*1.13462);
}

double NNfunction_ss_sRsR::synapse0x3469b40() {
   return (neuron0x34587f0()*1.13836);
}

double NNfunction_ss_sRsR::synapse0x3469b80() {
   return (neuron0x3458b30()*-0.983394);
}

double NNfunction_ss_sRsR::synapse0x3469bc0() {
   return (neuron0x3458e70()*-0.0745398);
}

double NNfunction_ss_sRsR::synapse0x3469c00() {
   return (neuron0x34591b0()*-0.507923);
}

double NNfunction_ss_sRsR::synapse0x3469c40() {
   return (neuron0x34594f0()*0.818097);
}

double NNfunction_ss_sRsR::synapse0x3469c80() {
   return (neuron0x3459830()*0.116879);
}

double NNfunction_ss_sRsR::synapse0x3469cc0() {
   return (neuron0x3459b70()*-0.126968);
}

double NNfunction_ss_sRsR::synapse0x3469d00() {
   return (neuron0x3459eb0()*-0.146409);
}

double NNfunction_ss_sRsR::synapse0x3469d40() {
   return (neuron0x345a1f0()*0.0383531);
}

double NNfunction_ss_sRsR::synapse0x3469d80() {
   return (neuron0x345a530()*-0.723605);
}

double NNfunction_ss_sRsR::synapse0x3469dc0() {
   return (neuron0x345a870()*0.0367806);
}

double NNfunction_ss_sRsR::synapse0x3469e00() {
   return (neuron0x345abb0()*0.398835);
}

double NNfunction_ss_sRsR::synapse0x3469e40() {
   return (neuron0x345aef0()*-0.067983);
}

double NNfunction_ss_sRsR::synapse0x3469e80() {
   return (neuron0x345b230()*-0.24142);
}

double NNfunction_ss_sRsR::synapse0x3469910() {
   return (neuron0x345b570()*0.369584);
}

double NNfunction_ss_sRsR::synapse0x3469950() {
   return (neuron0x345bad0()*0.474819);
}

double NNfunction_ss_sRsR::synapse0x3469fd0() {
   return (neuron0x345bcf0()*-0.0763984);
}

double NNfunction_ss_sRsR::synapse0x346a010() {
   return (neuron0x345c030()*0.357107);
}

double NNfunction_ss_sRsR::synapse0x346a050() {
   return (neuron0x345c370()*-0.13464);
}

double NNfunction_ss_sRsR::synapse0x346a090() {
   return (neuron0x345c6b0()*0.494746);
}

double NNfunction_ss_sRsR::synapse0x346a0d0() {
   return (neuron0x345c9f0()*-0.375561);
}

double NNfunction_ss_sRsR::synapse0x346a110() {
   return (neuron0x345cd30()*0.932127);
}

double NNfunction_ss_sRsR::synapse0x346a490() {
   return (neuron0x3458170()*-0.146819);
}

double NNfunction_ss_sRsR::synapse0x346a4d0() {
   return (neuron0x34584b0()*-0.0552051);
}

double NNfunction_ss_sRsR::synapse0x346a510() {
   return (neuron0x34587f0()*-0.0219808);
}

double NNfunction_ss_sRsR::synapse0x346a550() {
   return (neuron0x3458b30()*0.196675);
}

double NNfunction_ss_sRsR::synapse0x346a590() {
   return (neuron0x3458e70()*0.267899);
}

double NNfunction_ss_sRsR::synapse0x346a5d0() {
   return (neuron0x34591b0()*-0.117035);
}

double NNfunction_ss_sRsR::synapse0x346a610() {
   return (neuron0x34594f0()*-0.690188);
}

double NNfunction_ss_sRsR::synapse0x346a650() {
   return (neuron0x3459830()*-0.314817);
}

double NNfunction_ss_sRsR::synapse0x346a690() {
   return (neuron0x3459b70()*-0.0226584);
}

double NNfunction_ss_sRsR::synapse0x346a6d0() {
   return (neuron0x3459eb0()*-0.11697);
}

double NNfunction_ss_sRsR::synapse0x346a710() {
   return (neuron0x345a1f0()*0.00923506);
}

double NNfunction_ss_sRsR::synapse0x346a750() {
   return (neuron0x345a530()*0.00288997);
}

double NNfunction_ss_sRsR::synapse0x346a790() {
   return (neuron0x345a870()*-0.0214245);
}

double NNfunction_ss_sRsR::synapse0x346a7d0() {
   return (neuron0x345abb0()*-0.0760068);
}

double NNfunction_ss_sRsR::synapse0x346a810() {
   return (neuron0x345aef0()*0.393379);
}

double NNfunction_ss_sRsR::synapse0x346a850() {
   return (neuron0x345b230()*0.0252392);
}

double NNfunction_ss_sRsR::synapse0x346a2e0() {
   return (neuron0x345b570()*-0.280444);
}

double NNfunction_ss_sRsR::synapse0x346a320() {
   return (neuron0x345bad0()*0.0149889);
}

double NNfunction_ss_sRsR::synapse0x346a9a0() {
   return (neuron0x345bcf0()*0.397072);
}

double NNfunction_ss_sRsR::synapse0x346a9e0() {
   return (neuron0x345c030()*0.015707);
}

double NNfunction_ss_sRsR::synapse0x346aa20() {
   return (neuron0x345c370()*-0.0370953);
}

double NNfunction_ss_sRsR::synapse0x346aa60() {
   return (neuron0x345c6b0()*0.039598);
}

double NNfunction_ss_sRsR::synapse0x346aaa0() {
   return (neuron0x345c9f0()*0.0403651);
}

double NNfunction_ss_sRsR::synapse0x346aae0() {
   return (neuron0x345cd30()*0.0714376);
}

double NNfunction_ss_sRsR::synapse0x346ae60() {
   return (neuron0x3458170()*0.0475824);
}

double NNfunction_ss_sRsR::synapse0x346aea0() {
   return (neuron0x34584b0()*-0.0371571);
}

double NNfunction_ss_sRsR::synapse0x346aee0() {
   return (neuron0x34587f0()*0.139809);
}

double NNfunction_ss_sRsR::synapse0x346af20() {
   return (neuron0x3458b30()*-0.271684);
}

double NNfunction_ss_sRsR::synapse0x346af60() {
   return (neuron0x3458e70()*0.519061);
}

double NNfunction_ss_sRsR::synapse0x346afa0() {
   return (neuron0x34591b0()*0.00928645);
}

double NNfunction_ss_sRsR::synapse0x346afe0() {
   return (neuron0x34594f0()*-0.587099);
}

double NNfunction_ss_sRsR::synapse0x346b020() {
   return (neuron0x3459830()*0.352047);
}

double NNfunction_ss_sRsR::synapse0x346b060() {
   return (neuron0x3459b70()*0.0846901);
}

double NNfunction_ss_sRsR::synapse0x346b0a0() {
   return (neuron0x3459eb0()*0.0449475);
}

double NNfunction_ss_sRsR::synapse0x346b0e0() {
   return (neuron0x345a1f0()*0.172878);
}

double NNfunction_ss_sRsR::synapse0x346b120() {
   return (neuron0x345a530()*0.0264797);
}

double NNfunction_ss_sRsR::synapse0x346b160() {
   return (neuron0x345a870()*0.00986594);
}

double NNfunction_ss_sRsR::synapse0x346b1a0() {
   return (neuron0x345abb0()*8.4859e-06);
}

double NNfunction_ss_sRsR::synapse0x346b1e0() {
   return (neuron0x345aef0()*-0.620434);
}

double NNfunction_ss_sRsR::synapse0x346b220() {
   return (neuron0x345b230()*-0.515806);
}

double NNfunction_ss_sRsR::synapse0x346acb0() {
   return (neuron0x345b570()*0.073648);
}

double NNfunction_ss_sRsR::synapse0x346acf0() {
   return (neuron0x345bad0()*0.0699254);
}

double NNfunction_ss_sRsR::synapse0x346b370() {
   return (neuron0x345bcf0()*0.220492);
}

double NNfunction_ss_sRsR::synapse0x346b3b0() {
   return (neuron0x345c030()*0.139803);
}

double NNfunction_ss_sRsR::synapse0x346b3f0() {
   return (neuron0x345c370()*0.0628188);
}

double NNfunction_ss_sRsR::synapse0x346b430() {
   return (neuron0x345c6b0()*-0.0971693);
}

double NNfunction_ss_sRsR::synapse0x346b470() {
   return (neuron0x345c9f0()*0.0472533);
}

double NNfunction_ss_sRsR::synapse0x346b4b0() {
   return (neuron0x345cd30()*-0.118118);
}

double NNfunction_ss_sRsR::synapse0x346b830() {
   return (neuron0x3458170()*0.201333);
}

double NNfunction_ss_sRsR::synapse0x346b870() {
   return (neuron0x34584b0()*-0.821041);
}

double NNfunction_ss_sRsR::synapse0x346b8b0() {
   return (neuron0x34587f0()*0.48398);
}

double NNfunction_ss_sRsR::synapse0x346b8f0() {
   return (neuron0x3458b30()*-0.0442328);
}

double NNfunction_ss_sRsR::synapse0x346b930() {
   return (neuron0x3458e70()*0.948099);
}

double NNfunction_ss_sRsR::synapse0x346b970() {
   return (neuron0x34591b0()*0.208078);
}

double NNfunction_ss_sRsR::synapse0x346b9b0() {
   return (neuron0x34594f0()*0.312223);
}

double NNfunction_ss_sRsR::synapse0x346b9f0() {
   return (neuron0x3459830()*-0.341989);
}

double NNfunction_ss_sRsR::synapse0x346ba30() {
   return (neuron0x3459b70()*-0.883708);
}

double NNfunction_ss_sRsR::synapse0x3463bf0() {
   return (neuron0x3459eb0()*0.47733);
}

double NNfunction_ss_sRsR::synapse0x3463c30() {
   return (neuron0x345a1f0()*-0.429627);
}

double NNfunction_ss_sRsR::synapse0x3463c70() {
   return (neuron0x345a530()*0.0728114);
}

double NNfunction_ss_sRsR::synapse0x3463cb0() {
   return (neuron0x345a870()*-1.63855);
}

double NNfunction_ss_sRsR::synapse0x3463cf0() {
   return (neuron0x345abb0()*1.3513);
}

double NNfunction_ss_sRsR::synapse0x3463d30() {
   return (neuron0x345aef0()*0.60202);
}

double NNfunction_ss_sRsR::synapse0x3463d70() {
   return (neuron0x345b230()*-0.336093);
}

double NNfunction_ss_sRsR::synapse0x346b680() {
   return (neuron0x345b570()*0.701083);
}

double NNfunction_ss_sRsR::synapse0x346b6c0() {
   return (neuron0x345bad0()*-2.13243);
}

double NNfunction_ss_sRsR::synapse0x3463ec0() {
   return (neuron0x345bcf0()*0.00416218);
}

double NNfunction_ss_sRsR::synapse0x3463f00() {
   return (neuron0x345c030()*0.70453);
}

double NNfunction_ss_sRsR::synapse0x3463f40() {
   return (neuron0x345c370()*0.201212);
}

double NNfunction_ss_sRsR::synapse0x3463f80() {
   return (neuron0x345c6b0()*-0.0270465);
}

double NNfunction_ss_sRsR::synapse0x3463fc0() {
   return (neuron0x345c9f0()*-0.0331849);
}

double NNfunction_ss_sRsR::synapse0x3464000() {
   return (neuron0x345cd30()*-0.148594);
}

double NNfunction_ss_sRsR::synapse0x3464380() {
   return (neuron0x3458170()*-0.021492);
}

double NNfunction_ss_sRsR::synapse0x34643c0() {
   return (neuron0x34584b0()*-0.0208656);
}

double NNfunction_ss_sRsR::synapse0x3464400() {
   return (neuron0x34587f0()*0.0161055);
}

double NNfunction_ss_sRsR::synapse0x3464440() {
   return (neuron0x3458b30()*0.0147115);
}

double NNfunction_ss_sRsR::synapse0x3464480() {
   return (neuron0x3458e70()*0.0143006);
}

double NNfunction_ss_sRsR::synapse0x34644c0() {
   return (neuron0x34591b0()*-0.0242158);
}

double NNfunction_ss_sRsR::synapse0x3464500() {
   return (neuron0x34594f0()*-0.00272062);
}

double NNfunction_ss_sRsR::synapse0x3464540() {
   return (neuron0x3459830()*-0.0280671);
}

double NNfunction_ss_sRsR::synapse0x3464580() {
   return (neuron0x3459b70()*0.0807209);
}

double NNfunction_ss_sRsR::synapse0x34645c0() {
   return (neuron0x3459eb0()*-0.046219);
}

double NNfunction_ss_sRsR::synapse0x3464600() {
   return (neuron0x345a1f0()*0.0891401);
}

double NNfunction_ss_sRsR::synapse0x3464640() {
   return (neuron0x345a530()*0.0121825);
}

double NNfunction_ss_sRsR::synapse0x3464680() {
   return (neuron0x345a870()*0.0102525);
}

double NNfunction_ss_sRsR::synapse0x34646c0() {
   return (neuron0x345abb0()*0.0383105);
}

double NNfunction_ss_sRsR::synapse0x3464700() {
   return (neuron0x345aef0()*-0.0169542);
}

double NNfunction_ss_sRsR::synapse0x3464740() {
   return (neuron0x345b230()*-0.0247829);
}

double NNfunction_ss_sRsR::synapse0x34641d0() {
   return (neuron0x345b570()*0.0400301);
}

double NNfunction_ss_sRsR::synapse0x3464210() {
   return (neuron0x345bad0()*0.0254555);
}

double NNfunction_ss_sRsR::synapse0x3464890() {
   return (neuron0x345bcf0()*4.00104);
}

double NNfunction_ss_sRsR::synapse0x34648d0() {
   return (neuron0x345c030()*0.00936213);
}

double NNfunction_ss_sRsR::synapse0x3464910() {
   return (neuron0x345c370()*0.00499408);
}

double NNfunction_ss_sRsR::synapse0x3464950() {
   return (neuron0x345c6b0()*0.00211205);
}

double NNfunction_ss_sRsR::synapse0x3464990() {
   return (neuron0x345c9f0()*-0.00759907);
}

double NNfunction_ss_sRsR::synapse0x34649d0() {
   return (neuron0x345cd30()*0.00445518);
}

double NNfunction_ss_sRsR::synapse0x3464ba0() {
   return (neuron0x3458170()*-0.0398814);
}

double NNfunction_ss_sRsR::synapse0x346dc30() {
   return (neuron0x34584b0()*-0.0360208);
}

double NNfunction_ss_sRsR::synapse0x346dc70() {
   return (neuron0x34587f0()*-0.104827);
}

double NNfunction_ss_sRsR::synapse0x346dcb0() {
   return (neuron0x3458b30()*-1.4198);
}

double NNfunction_ss_sRsR::synapse0x346dcf0() {
   return (neuron0x3458e70()*-0.190874);
}

double NNfunction_ss_sRsR::synapse0x346dd30() {
   return (neuron0x34591b0()*-0.00167316);
}

double NNfunction_ss_sRsR::synapse0x346dd70() {
   return (neuron0x34594f0()*-0.0139718);
}

double NNfunction_ss_sRsR::synapse0x346ddb0() {
   return (neuron0x3459830()*-0.157417);
}

double NNfunction_ss_sRsR::synapse0x346ddf0() {
   return (neuron0x3459b70()*0.0133132);
}

double NNfunction_ss_sRsR::synapse0x346de30() {
   return (neuron0x3459eb0()*0.075647);
}

double NNfunction_ss_sRsR::synapse0x346de70() {
   return (neuron0x345a1f0()*0.0138717);
}

double NNfunction_ss_sRsR::synapse0x346deb0() {
   return (neuron0x345a530()*-0.0588937);
}

double NNfunction_ss_sRsR::synapse0x346def0() {
   return (neuron0x345a870()*-0.0568035);
}

double NNfunction_ss_sRsR::synapse0x346df30() {
   return (neuron0x345abb0()*0.0334095);
}

double NNfunction_ss_sRsR::synapse0x346df70() {
   return (neuron0x345aef0()*-0.0880562);
}

double NNfunction_ss_sRsR::synapse0x346dfb0() {
   return (neuron0x345b230()*-0.231275);
}

double NNfunction_ss_sRsR::synapse0x346da80() {
   return (neuron0x345b570()*0.0501482);
}

double NNfunction_ss_sRsR::synapse0x346dac0() {
   return (neuron0x345bad0()*-0.0789253);
}

double NNfunction_ss_sRsR::synapse0x346e100() {
   return (neuron0x345bcf0()*-0.329068);
}

double NNfunction_ss_sRsR::synapse0x346e140() {
   return (neuron0x345c030()*0.0291483);
}

double NNfunction_ss_sRsR::synapse0x346e180() {
   return (neuron0x345c370()*-0.00736319);
}

double NNfunction_ss_sRsR::synapse0x346e1c0() {
   return (neuron0x345c6b0()*-0.0529191);
}

double NNfunction_ss_sRsR::synapse0x346e200() {
   return (neuron0x345c9f0()*-0.0280986);
}

double NNfunction_ss_sRsR::synapse0x346e240() {
   return (neuron0x345cd30()*-0.00884683);
}

double NNfunction_ss_sRsR::synapse0x346e5c0() {
   return (neuron0x3458170()*-0.1487);
}

double NNfunction_ss_sRsR::synapse0x346e600() {
   return (neuron0x34584b0()*-0.350243);
}

double NNfunction_ss_sRsR::synapse0x346e640() {
   return (neuron0x34587f0()*0.0733343);
}

double NNfunction_ss_sRsR::synapse0x346e680() {
   return (neuron0x3458b30()*-0.0567174);
}

double NNfunction_ss_sRsR::synapse0x346e6c0() {
   return (neuron0x3458e70()*-0.0891931);
}

double NNfunction_ss_sRsR::synapse0x346e700() {
   return (neuron0x34591b0()*-0.0424674);
}

double NNfunction_ss_sRsR::synapse0x346e740() {
   return (neuron0x34594f0()*-0.0158078);
}

double NNfunction_ss_sRsR::synapse0x346e780() {
   return (neuron0x3459830()*-0.163508);
}

double NNfunction_ss_sRsR::synapse0x346e7c0() {
   return (neuron0x3459b70()*0.0481268);
}

double NNfunction_ss_sRsR::synapse0x346e800() {
   return (neuron0x3459eb0()*-0.167257);
}

double NNfunction_ss_sRsR::synapse0x346e840() {
   return (neuron0x345a1f0()*0.0122083);
}

double NNfunction_ss_sRsR::synapse0x346e880() {
   return (neuron0x345a530()*0.0467671);
}

double NNfunction_ss_sRsR::synapse0x346e8c0() {
   return (neuron0x345a870()*-0.0633885);
}

double NNfunction_ss_sRsR::synapse0x346e900() {
   return (neuron0x345abb0()*0.00650774);
}

double NNfunction_ss_sRsR::synapse0x346e940() {
   return (neuron0x345aef0()*0.0831008);
}

double NNfunction_ss_sRsR::synapse0x346e980() {
   return (neuron0x345b230()*0.094186);
}

double NNfunction_ss_sRsR::synapse0x346e410() {
   return (neuron0x345b570()*0.741215);
}

double NNfunction_ss_sRsR::synapse0x346e450() {
   return (neuron0x345bad0()*-0.0467052);
}

double NNfunction_ss_sRsR::synapse0x346ead0() {
   return (neuron0x345bcf0()*0.0262356);
}

double NNfunction_ss_sRsR::synapse0x346eb10() {
   return (neuron0x345c030()*-0.021196);
}

double NNfunction_ss_sRsR::synapse0x346eb50() {
   return (neuron0x345c370()*-0.0678435);
}

double NNfunction_ss_sRsR::synapse0x346eb90() {
   return (neuron0x345c6b0()*0.182545);
}

double NNfunction_ss_sRsR::synapse0x346ebd0() {
   return (neuron0x345c9f0()*0.13237);
}

double NNfunction_ss_sRsR::synapse0x346ec10() {
   return (neuron0x345cd30()*0.197802);
}

double NNfunction_ss_sRsR::synapse0x346ef90() {
   return (neuron0x3458170()*0.124751);
}

double NNfunction_ss_sRsR::synapse0x346efd0() {
   return (neuron0x34584b0()*-0.0378021);
}

double NNfunction_ss_sRsR::synapse0x346f010() {
   return (neuron0x34587f0()*-0.0289166);
}

double NNfunction_ss_sRsR::synapse0x346f050() {
   return (neuron0x3458b30()*-0.195308);
}

double NNfunction_ss_sRsR::synapse0x346f090() {
   return (neuron0x3458e70()*-0.0885384);
}

double NNfunction_ss_sRsR::synapse0x346f0d0() {
   return (neuron0x34591b0()*-0.0128461);
}

double NNfunction_ss_sRsR::synapse0x346f110() {
   return (neuron0x34594f0()*-0.0446677);
}

double NNfunction_ss_sRsR::synapse0x346f150() {
   return (neuron0x3459830()*-0.0307845);
}

double NNfunction_ss_sRsR::synapse0x346f190() {
   return (neuron0x3459b70()*0.0488918);
}

double NNfunction_ss_sRsR::synapse0x346f1d0() {
   return (neuron0x3459eb0()*0.0179991);
}

double NNfunction_ss_sRsR::synapse0x346f210() {
   return (neuron0x345a1f0()*-0.00764346);
}

double NNfunction_ss_sRsR::synapse0x346f250() {
   return (neuron0x345a530()*-0.117822);
}

double NNfunction_ss_sRsR::synapse0x346f290() {
   return (neuron0x345a870()*-0.08148);
}

double NNfunction_ss_sRsR::synapse0x346f2d0() {
   return (neuron0x345abb0()*0.0181987);
}

double NNfunction_ss_sRsR::synapse0x346f310() {
   return (neuron0x345aef0()*-0.124891);
}

double NNfunction_ss_sRsR::synapse0x346f350() {
   return (neuron0x345b230()*-0.102837);
}

double NNfunction_ss_sRsR::synapse0x346ede0() {
   return (neuron0x345b570()*-0.0521843);
}

double NNfunction_ss_sRsR::synapse0x346ee20() {
   return (neuron0x345bad0()*-0.061066);
}

double NNfunction_ss_sRsR::synapse0x346f4a0() {
   return (neuron0x345bcf0()*-0.286792);
}

double NNfunction_ss_sRsR::synapse0x346f4e0() {
   return (neuron0x345c030()*0.0121762);
}

double NNfunction_ss_sRsR::synapse0x346f520() {
   return (neuron0x345c370()*0.019117);
}

double NNfunction_ss_sRsR::synapse0x346f560() {
   return (neuron0x345c6b0()*-0.00470251);
}

double NNfunction_ss_sRsR::synapse0x346f5a0() {
   return (neuron0x345c9f0()*-2.50527e-05);
}

double NNfunction_ss_sRsR::synapse0x346f5e0() {
   return (neuron0x345cd30()*0.093879);
}

double NNfunction_ss_sRsR::synapse0x346f960() {
   return (neuron0x3458170()*0.115421);
}

double NNfunction_ss_sRsR::synapse0x346f9a0() {
   return (neuron0x34584b0()*-0.0144568);
}

double NNfunction_ss_sRsR::synapse0x346f9e0() {
   return (neuron0x34587f0()*0.0182862);
}

double NNfunction_ss_sRsR::synapse0x346fa20() {
   return (neuron0x3458b30()*-0.0363402);
}

double NNfunction_ss_sRsR::synapse0x346fa60() {
   return (neuron0x3458e70()*-0.00556504);
}

double NNfunction_ss_sRsR::synapse0x346faa0() {
   return (neuron0x34591b0()*0.00203048);
}

double NNfunction_ss_sRsR::synapse0x346fae0() {
   return (neuron0x34594f0()*-0.0374965);
}

double NNfunction_ss_sRsR::synapse0x346fb20() {
   return (neuron0x3459830()*0.0117039);
}

double NNfunction_ss_sRsR::synapse0x346fb60() {
   return (neuron0x3459b70()*0.0246028);
}

double NNfunction_ss_sRsR::synapse0x346fba0() {
   return (neuron0x3459eb0()*-0.0284165);
}

double NNfunction_ss_sRsR::synapse0x346fbe0() {
   return (neuron0x345a1f0()*-0.00321499);
}

double NNfunction_ss_sRsR::synapse0x346fc20() {
   return (neuron0x345a530()*-0.0119229);
}

double NNfunction_ss_sRsR::synapse0x346fc60() {
   return (neuron0x345a870()*0.0396946);
}

double NNfunction_ss_sRsR::synapse0x346fca0() {
   return (neuron0x345abb0()*-0.00391017);
}

double NNfunction_ss_sRsR::synapse0x346fce0() {
   return (neuron0x345aef0()*0.0139924);
}

double NNfunction_ss_sRsR::synapse0x346fd20() {
   return (neuron0x345b230()*-0.00187556);
}

double NNfunction_ss_sRsR::synapse0x346f7b0() {
   return (neuron0x345b570()*-0.00361598);
}

double NNfunction_ss_sRsR::synapse0x346f7f0() {
   return (neuron0x345bad0()*-0.00016439);
}

double NNfunction_ss_sRsR::synapse0x346fe70() {
   return (neuron0x345bcf0()*2.12127);
}

double NNfunction_ss_sRsR::synapse0x346feb0() {
   return (neuron0x345c030()*-0.0303556);
}

double NNfunction_ss_sRsR::synapse0x346fef0() {
   return (neuron0x345c370()*0.0220356);
}

double NNfunction_ss_sRsR::synapse0x346ff30() {
   return (neuron0x345c6b0()*0.0104053);
}

double NNfunction_ss_sRsR::synapse0x346ff70() {
   return (neuron0x345c9f0()*-0.00791894);
}

double NNfunction_ss_sRsR::synapse0x346ffb0() {
   return (neuron0x345cd30()*0.0798039);
}

double NNfunction_ss_sRsR::synapse0x3470330() {
   return (neuron0x3458170()*-0.0187427);
}

double NNfunction_ss_sRsR::synapse0x3470370() {
   return (neuron0x34584b0()*-0.0407322);
}

double NNfunction_ss_sRsR::synapse0x34703b0() {
   return (neuron0x34587f0()*0.0767038);
}

double NNfunction_ss_sRsR::synapse0x34703f0() {
   return (neuron0x3458b30()*-0.0159855);
}

double NNfunction_ss_sRsR::synapse0x3470430() {
   return (neuron0x3458e70()*0.134886);
}

double NNfunction_ss_sRsR::synapse0x3470470() {
   return (neuron0x34591b0()*0.0111454);
}

double NNfunction_ss_sRsR::synapse0x34704b0() {
   return (neuron0x34594f0()*0.0347019);
}

double NNfunction_ss_sRsR::synapse0x34704f0() {
   return (neuron0x3459830()*7.09161e-05);
}

double NNfunction_ss_sRsR::synapse0x3470530() {
   return (neuron0x3459b70()*0.0797265);
}

double NNfunction_ss_sRsR::synapse0x3470570() {
   return (neuron0x3459eb0()*-0.227557);
}

double NNfunction_ss_sRsR::synapse0x34705b0() {
   return (neuron0x345a1f0()*0.541115);
}

double NNfunction_ss_sRsR::synapse0x34705f0() {
   return (neuron0x345a530()*0.177413);
}

double NNfunction_ss_sRsR::synapse0x3470630() {
   return (neuron0x345a870()*0.316204);
}

double NNfunction_ss_sRsR::synapse0x3470670() {
   return (neuron0x345abb0()*0.212171);
}

double NNfunction_ss_sRsR::synapse0x34706b0() {
   return (neuron0x345aef0()*0.132845);
}

double NNfunction_ss_sRsR::synapse0x34706f0() {
   return (neuron0x345b230()*0.108537);
}

double NNfunction_ss_sRsR::synapse0x3470180() {
   return (neuron0x345b570()*0.134651);
}

double NNfunction_ss_sRsR::synapse0x34701c0() {
   return (neuron0x345bad0()*0.28636);
}

double NNfunction_ss_sRsR::synapse0x3470840() {
   return (neuron0x345bcf0()*-1.984);
}

double NNfunction_ss_sRsR::synapse0x3470880() {
   return (neuron0x345c030()*0.00858213);
}

double NNfunction_ss_sRsR::synapse0x34708c0() {
   return (neuron0x345c370()*0.0496868);
}

double NNfunction_ss_sRsR::synapse0x3470900() {
   return (neuron0x345c6b0()*0.0123717);
}

double NNfunction_ss_sRsR::synapse0x3470940() {
   return (neuron0x345c9f0()*0.0614187);
}

double NNfunction_ss_sRsR::synapse0x3470980() {
   return (neuron0x345cd30()*0.000102313);
}

double NNfunction_ss_sRsR::synapse0x3470d00() {
   return (neuron0x3458170()*0.14289);
}

double NNfunction_ss_sRsR::synapse0x3470d40() {
   return (neuron0x34584b0()*0.132482);
}

double NNfunction_ss_sRsR::synapse0x3470d80() {
   return (neuron0x34587f0()*-1.1398);
}

double NNfunction_ss_sRsR::synapse0x3470dc0() {
   return (neuron0x3458b30()*3.34374);
}

double NNfunction_ss_sRsR::synapse0x3470e00() {
   return (neuron0x3458e70()*-0.400383);
}

double NNfunction_ss_sRsR::synapse0x3470e40() {
   return (neuron0x34591b0()*0.0788141);
}

double NNfunction_ss_sRsR::synapse0x3470e80() {
   return (neuron0x34594f0()*-0.315013);
}

double NNfunction_ss_sRsR::synapse0x3470ec0() {
   return (neuron0x3459830()*0.654262);
}

double NNfunction_ss_sRsR::synapse0x3470f00() {
   return (neuron0x3459b70()*0.213979);
}

double NNfunction_ss_sRsR::synapse0x3470f40() {
   return (neuron0x3459eb0()*0.765033);
}

double NNfunction_ss_sRsR::synapse0x3470f80() {
   return (neuron0x345a1f0()*-0.0879862);
}

double NNfunction_ss_sRsR::synapse0x3470fc0() {
   return (neuron0x345a530()*-0.798238);
}

double NNfunction_ss_sRsR::synapse0x3471000() {
   return (neuron0x345a870()*-0.550855);
}

double NNfunction_ss_sRsR::synapse0x3471040() {
   return (neuron0x345abb0()*-0.757092);
}

double NNfunction_ss_sRsR::synapse0x3471080() {
   return (neuron0x345aef0()*-0.638578);
}

double NNfunction_ss_sRsR::synapse0x34710c0() {
   return (neuron0x345b230()*-1.27879);
}

double NNfunction_ss_sRsR::synapse0x3470b50() {
   return (neuron0x345b570()*-0.0962637);
}

double NNfunction_ss_sRsR::synapse0x3470b90() {
   return (neuron0x345bad0()*0.726542);
}

double NNfunction_ss_sRsR::synapse0x3471210() {
   return (neuron0x345bcf0()*1.33597);
}

double NNfunction_ss_sRsR::synapse0x3471250() {
   return (neuron0x345c030()*-0.253548);
}

double NNfunction_ss_sRsR::synapse0x3471290() {
   return (neuron0x345c370()*0.615221);
}

double NNfunction_ss_sRsR::synapse0x34712d0() {
   return (neuron0x345c6b0()*0.545412);
}

double NNfunction_ss_sRsR::synapse0x3471310() {
   return (neuron0x345c9f0()*-0.294572);
}

double NNfunction_ss_sRsR::synapse0x3471350() {
   return (neuron0x345cd30()*0.157302);
}

double NNfunction_ss_sRsR::synapse0x34716d0() {
   return (neuron0x3458170()*0.00329644);
}

double NNfunction_ss_sRsR::synapse0x3471710() {
   return (neuron0x34584b0()*-0.0277833);
}

double NNfunction_ss_sRsR::synapse0x3471750() {
   return (neuron0x34587f0()*-0.0028056);
}

double NNfunction_ss_sRsR::synapse0x3471790() {
   return (neuron0x3458b30()*3.49829);
}

double NNfunction_ss_sRsR::synapse0x34717d0() {
   return (neuron0x3458e70()*-0.0260022);
}

double NNfunction_ss_sRsR::synapse0x3471810() {
   return (neuron0x34591b0()*0.000648159);
}

double NNfunction_ss_sRsR::synapse0x3471850() {
   return (neuron0x34594f0()*0.0160509);
}

double NNfunction_ss_sRsR::synapse0x3471890() {
   return (neuron0x3459830()*-0.0243461);
}

double NNfunction_ss_sRsR::synapse0x34718d0() {
   return (neuron0x3459b70()*0.00263394);
}

double NNfunction_ss_sRsR::synapse0x3471910() {
   return (neuron0x3459eb0()*0.0314413);
}

double NNfunction_ss_sRsR::synapse0x3471950() {
   return (neuron0x345a1f0()*-0.00163047);
}

double NNfunction_ss_sRsR::synapse0x3471990() {
   return (neuron0x345a530()*-0.0231802);
}

double NNfunction_ss_sRsR::synapse0x34719d0() {
   return (neuron0x345a870()*-0.0255425);
}

double NNfunction_ss_sRsR::synapse0x3471a10() {
   return (neuron0x345abb0()*0.027558);
}

double NNfunction_ss_sRsR::synapse0x3471a50() {
   return (neuron0x345aef0()*-0.0369581);
}

double NNfunction_ss_sRsR::synapse0x3471a90() {
   return (neuron0x345b230()*-0.0412403);
}

double NNfunction_ss_sRsR::synapse0x3471520() {
   return (neuron0x345b570()*0.0245519);
}

double NNfunction_ss_sRsR::synapse0x3471560() {
   return (neuron0x345bad0()*-0.0186839);
}

double NNfunction_ss_sRsR::synapse0x3471be0() {
   return (neuron0x345bcf0()*0.399314);
}

double NNfunction_ss_sRsR::synapse0x3471c20() {
   return (neuron0x345c030()*0.00454509);
}

double NNfunction_ss_sRsR::synapse0x3471c60() {
   return (neuron0x345c370()*-0.0121336);
}

double NNfunction_ss_sRsR::synapse0x3471ca0() {
   return (neuron0x345c6b0()*-0.00438295);
}

double NNfunction_ss_sRsR::synapse0x3471ce0() {
   return (neuron0x345c9f0()*-0.010034);
}

double NNfunction_ss_sRsR::synapse0x3471d20() {
   return (neuron0x345cd30()*-0.000545534);
}

double NNfunction_ss_sRsR::synapse0x34720a0() {
   return (neuron0x3458170()*-0.0721797);
}

double NNfunction_ss_sRsR::synapse0x34720e0() {
   return (neuron0x34584b0()*-0.304984);
}

double NNfunction_ss_sRsR::synapse0x3472120() {
   return (neuron0x34587f0()*0.252798);
}

double NNfunction_ss_sRsR::synapse0x3472160() {
   return (neuron0x3458b30()*0.378519);
}

double NNfunction_ss_sRsR::synapse0x34721a0() {
   return (neuron0x3458e70()*-0.146585);
}

double NNfunction_ss_sRsR::synapse0x34721e0() {
   return (neuron0x34591b0()*0.191774);
}

double NNfunction_ss_sRsR::synapse0x3472220() {
   return (neuron0x34594f0()*-0.148097);
}

double NNfunction_ss_sRsR::synapse0x3472260() {
   return (neuron0x3459830()*-0.186889);
}

double NNfunction_ss_sRsR::synapse0x34722a0() {
   return (neuron0x3459b70()*0.916397);
}

double NNfunction_ss_sRsR::synapse0x34722e0() {
   return (neuron0x3459eb0()*-0.382229);
}

double NNfunction_ss_sRsR::synapse0x3472320() {
   return (neuron0x345a1f0()*0.0289632);
}

double NNfunction_ss_sRsR::synapse0x3472360() {
   return (neuron0x345a530()*0.184263);
}

double NNfunction_ss_sRsR::synapse0x34723a0() {
   return (neuron0x345a870()*-0.592817);
}

double NNfunction_ss_sRsR::synapse0x34723e0() {
   return (neuron0x345abb0()*0.0939776);
}

double NNfunction_ss_sRsR::synapse0x3472420() {
   return (neuron0x345aef0()*0.192606);
}

double NNfunction_ss_sRsR::synapse0x3472460() {
   return (neuron0x345b230()*0.00415626);
}

double NNfunction_ss_sRsR::synapse0x3471ef0() {
   return (neuron0x345b570()*0.774463);
}

double NNfunction_ss_sRsR::synapse0x3471f30() {
   return (neuron0x345bad0()*-0.31662);
}

double NNfunction_ss_sRsR::synapse0x34725b0() {
   return (neuron0x345bcf0()*0.550452);
}

double NNfunction_ss_sRsR::synapse0x34725f0() {
   return (neuron0x345c030()*0.0847517);
}

double NNfunction_ss_sRsR::synapse0x3472630() {
   return (neuron0x345c370()*-0.303475);
}

double NNfunction_ss_sRsR::synapse0x3472670() {
   return (neuron0x345c6b0()*-0.0816044);
}

double NNfunction_ss_sRsR::synapse0x34726b0() {
   return (neuron0x345c9f0()*0.0523483);
}

double NNfunction_ss_sRsR::synapse0x34726f0() {
   return (neuron0x345cd30()*0.465202);
}

double NNfunction_ss_sRsR::synapse0x3472a70() {
   return (neuron0x3458170()*-0.458047);
}

double NNfunction_ss_sRsR::synapse0x3467040() {
   return (neuron0x34584b0()*-0.476064);
}

double NNfunction_ss_sRsR::synapse0x3467080() {
   return (neuron0x34587f0()*0.345726);
}

double NNfunction_ss_sRsR::synapse0x34670c0() {
   return (neuron0x3458b30()*0.406016);
}

double NNfunction_ss_sRsR::synapse0x3467310() {
   return (neuron0x3458e70()*0.180549);
}

double NNfunction_ss_sRsR::synapse0x3467350() {
   return (neuron0x34591b0()*-0.324809);
}

double NNfunction_ss_sRsR::synapse0x3467390() {
   return (neuron0x34594f0()*-0.965235);
}

double NNfunction_ss_sRsR::synapse0x34675e0() {
   return (neuron0x3459830()*0.347277);
}

double NNfunction_ss_sRsR::synapse0x3467620() {
   return (neuron0x3459b70()*0.173718);
}

double NNfunction_ss_sRsR::synapse0x3467870() {
   return (neuron0x3459eb0()*0.294035);
}

double NNfunction_ss_sRsR::synapse0x34678b0() {
   return (neuron0x345a1f0()*0.165431);
}

double NNfunction_ss_sRsR::synapse0x34678f0() {
   return (neuron0x345a530()*0.107468);
}

double NNfunction_ss_sRsR::synapse0x3467b40() {
   return (neuron0x345a870()*0.444423);
}

double NNfunction_ss_sRsR::synapse0x3467b80() {
   return (neuron0x345abb0()*-0.346292);
}

double NNfunction_ss_sRsR::synapse0x3467dd0() {
   return (neuron0x345aef0()*-0.294834);
}

double NNfunction_ss_sRsR::synapse0x3467e10() {
   return (neuron0x345b230()*0.996951);
}

double NNfunction_ss_sRsR::synapse0x34728c0() {
   return (neuron0x345b570()*0.450204);
}

double NNfunction_ss_sRsR::synapse0x3472900() {
   return (neuron0x345bad0()*-0.574058);
}

double NNfunction_ss_sRsR::synapse0x3467f60() {
   return (neuron0x345bcf0()*-0.809154);
}

double NNfunction_ss_sRsR::synapse0x3468470() {
   return (neuron0x345c030()*-0.149429);
}

double NNfunction_ss_sRsR::synapse0x34684b0() {
   return (neuron0x345c370()*0.127914);
}

double NNfunction_ss_sRsR::synapse0x34684f0() {
   return (neuron0x345c6b0()*-0.138295);
}

double NNfunction_ss_sRsR::synapse0x3468740() {
   return (neuron0x345c9f0()*-0.141943);
}

double NNfunction_ss_sRsR::synapse0x3468780() {
   return (neuron0x345cd30()*-0.504721);
}

double NNfunction_ss_sRsR::synapse0x3468030() {
   return (neuron0x3458170()*-0.0522543);
}

double NNfunction_ss_sRsR::synapse0x3468070() {
   return (neuron0x34584b0()*0.755396);
}

double NNfunction_ss_sRsR::synapse0x34680b0() {
   return (neuron0x34587f0()*-0.119541);
}

double NNfunction_ss_sRsR::synapse0x34680f0() {
   return (neuron0x3458b30()*-0.323658);
}

double NNfunction_ss_sRsR::synapse0x3468a70() {
   return (neuron0x3458e70()*-0.241116);
}

double NNfunction_ss_sRsR::synapse0x3474dc0() {
   return (neuron0x34591b0()*1.51339);
}

double NNfunction_ss_sRsR::synapse0x3474e00() {
   return (neuron0x34594f0()*-0.066894);
}

double NNfunction_ss_sRsR::synapse0x3474e40() {
   return (neuron0x3459830()*-0.523425);
}

double NNfunction_ss_sRsR::synapse0x3474e80() {
   return (neuron0x3459b70()*0.0465032);
}

double NNfunction_ss_sRsR::synapse0x3474ec0() {
   return (neuron0x3459eb0()*0.0993995);
}

double NNfunction_ss_sRsR::synapse0x3474f00() {
   return (neuron0x345a1f0()*-0.119498);
}

double NNfunction_ss_sRsR::synapse0x3474f40() {
   return (neuron0x345a530()*0.166717);
}

double NNfunction_ss_sRsR::synapse0x3474f80() {
   return (neuron0x345a870()*-0.049355);
}

double NNfunction_ss_sRsR::synapse0x3474fc0() {
   return (neuron0x345abb0()*-0.42832);
}

double NNfunction_ss_sRsR::synapse0x3475000() {
   return (neuron0x345aef0()*0.122166);
}

double NNfunction_ss_sRsR::synapse0x3475040() {
   return (neuron0x345b230()*-0.110547);
}

double NNfunction_ss_sRsR::synapse0x3468950() {
   return (neuron0x345b570()*-0.404214);
}

double NNfunction_ss_sRsR::synapse0x3468990() {
   return (neuron0x345bad0()*0.472338);
}

double NNfunction_ss_sRsR::synapse0x3475190() {
   return (neuron0x345bcf0()*-1.24968);
}

double NNfunction_ss_sRsR::synapse0x34751d0() {
   return (neuron0x345c030()*0.376303);
}

double NNfunction_ss_sRsR::synapse0x3475210() {
   return (neuron0x345c370()*-0.103726);
}

double NNfunction_ss_sRsR::synapse0x3475250() {
   return (neuron0x345c6b0()*0.0715613);
}

double NNfunction_ss_sRsR::synapse0x3475290() {
   return (neuron0x345c9f0()*0.0221713);
}

double NNfunction_ss_sRsR::synapse0x34752d0() {
   return (neuron0x345cd30()*-0.19728);
}

double NNfunction_ss_sRsR::synapse0x3475650() {
   return (neuron0x3458170()*-0.0134603);
}

double NNfunction_ss_sRsR::synapse0x3475690() {
   return (neuron0x34584b0()*-0.0707852);
}

double NNfunction_ss_sRsR::synapse0x34756d0() {
   return (neuron0x34587f0()*-0.0535879);
}

double NNfunction_ss_sRsR::synapse0x3475710() {
   return (neuron0x3458b30()*0.0683631);
}

double NNfunction_ss_sRsR::synapse0x3475750() {
   return (neuron0x3458e70()*-0.0777879);
}

double NNfunction_ss_sRsR::synapse0x3475790() {
   return (neuron0x34591b0()*-0.058873);
}

double NNfunction_ss_sRsR::synapse0x34757d0() {
   return (neuron0x34594f0()*-0.00694227);
}

double NNfunction_ss_sRsR::synapse0x3475810() {
   return (neuron0x3459830()*-0.0516859);
}

double NNfunction_ss_sRsR::synapse0x3475850() {
   return (neuron0x3459b70()*-0.268151);
}

double NNfunction_ss_sRsR::synapse0x3475890() {
   return (neuron0x3459eb0()*0.334011);
}

double NNfunction_ss_sRsR::synapse0x34758d0() {
   return (neuron0x345a1f0()*-0.54808);
}

double NNfunction_ss_sRsR::synapse0x3475910() {
   return (neuron0x345a530()*0.202798);
}

double NNfunction_ss_sRsR::synapse0x3475950() {
   return (neuron0x345a870()*0.208998);
}

double NNfunction_ss_sRsR::synapse0x3475990() {
   return (neuron0x345abb0()*0.210782);
}

double NNfunction_ss_sRsR::synapse0x34759d0() {
   return (neuron0x345aef0()*-0.042643);
}

double NNfunction_ss_sRsR::synapse0x3475a10() {
   return (neuron0x345b230()*0.0604158);
}

double NNfunction_ss_sRsR::synapse0x34754a0() {
   return (neuron0x345b570()*0.132235);
}

double NNfunction_ss_sRsR::synapse0x34754e0() {
   return (neuron0x345bad0()*0.139883);
}

double NNfunction_ss_sRsR::synapse0x3475b60() {
   return (neuron0x345bcf0()*1.6224);
}

double NNfunction_ss_sRsR::synapse0x3475ba0() {
   return (neuron0x345c030()*-0.0714246);
}

double NNfunction_ss_sRsR::synapse0x3475be0() {
   return (neuron0x345c370()*-0.0141215);
}

double NNfunction_ss_sRsR::synapse0x3475c20() {
   return (neuron0x345c6b0()*-0.0622783);
}

double NNfunction_ss_sRsR::synapse0x3475c60() {
   return (neuron0x345c9f0()*0.029866);
}

double NNfunction_ss_sRsR::synapse0x3475ca0() {
   return (neuron0x345cd30()*-0.0729725);
}

double NNfunction_ss_sRsR::synapse0x3476020() {
   return (neuron0x3458170()*0.0298661);
}

double NNfunction_ss_sRsR::synapse0x3476060() {
   return (neuron0x34584b0()*-0.170047);
}

double NNfunction_ss_sRsR::synapse0x34760a0() {
   return (neuron0x34587f0()*0.0841067);
}

double NNfunction_ss_sRsR::synapse0x34760e0() {
   return (neuron0x3458b30()*-1.04976);
}

double NNfunction_ss_sRsR::synapse0x3476120() {
   return (neuron0x3458e70()*0.138524);
}

double NNfunction_ss_sRsR::synapse0x3476160() {
   return (neuron0x34591b0()*-0.00230139);
}

double NNfunction_ss_sRsR::synapse0x34761a0() {
   return (neuron0x34594f0()*0.0734025);
}

double NNfunction_ss_sRsR::synapse0x34761e0() {
   return (neuron0x3459830()*-0.0574536);
}

double NNfunction_ss_sRsR::synapse0x3476220() {
   return (neuron0x3459b70()*-0.00675519);
}

double NNfunction_ss_sRsR::synapse0x3476260() {
   return (neuron0x3459eb0()*-0.0159268);
}

double NNfunction_ss_sRsR::synapse0x34762a0() {
   return (neuron0x345a1f0()*0.0545145);
}

double NNfunction_ss_sRsR::synapse0x34762e0() {
   return (neuron0x345a530()*0.173863);
}

double NNfunction_ss_sRsR::synapse0x3476320() {
   return (neuron0x345a870()*0.134381);
}

double NNfunction_ss_sRsR::synapse0x3476360() {
   return (neuron0x345abb0()*-0.0209448);
}

double NNfunction_ss_sRsR::synapse0x34763a0() {
   return (neuron0x345aef0()*-0.158655);
}

double NNfunction_ss_sRsR::synapse0x34763e0() {
   return (neuron0x345b230()*0.0508145);
}

double NNfunction_ss_sRsR::synapse0x3475e70() {
   return (neuron0x345b570()*-0.286636);
}

double NNfunction_ss_sRsR::synapse0x3475eb0() {
   return (neuron0x345bad0()*0.0523452);
}

double NNfunction_ss_sRsR::synapse0x3476530() {
   return (neuron0x345bcf0()*-0.066352);
}

double NNfunction_ss_sRsR::synapse0x3476570() {
   return (neuron0x345c030()*0.0699772);
}

double NNfunction_ss_sRsR::synapse0x34765b0() {
   return (neuron0x345c370()*-0.0408871);
}

double NNfunction_ss_sRsR::synapse0x34765f0() {
   return (neuron0x345c6b0()*0.0624834);
}

double NNfunction_ss_sRsR::synapse0x3476630() {
   return (neuron0x345c9f0()*0.0505016);
}

double NNfunction_ss_sRsR::synapse0x3476670() {
   return (neuron0x345cd30()*0.0239927);
}

double NNfunction_ss_sRsR::synapse0x34769f0() {
   return (neuron0x3458170()*0.0224537);
}

double NNfunction_ss_sRsR::synapse0x3476a30() {
   return (neuron0x34584b0()*0.204553);
}

double NNfunction_ss_sRsR::synapse0x3476a70() {
   return (neuron0x34587f0()*0.103652);
}

double NNfunction_ss_sRsR::synapse0x3476ab0() {
   return (neuron0x3458b30()*-0.062677);
}

double NNfunction_ss_sRsR::synapse0x3476af0() {
   return (neuron0x3458e70()*-0.0412161);
}

double NNfunction_ss_sRsR::synapse0x3476b30() {
   return (neuron0x34591b0()*-0.0978721);
}

double NNfunction_ss_sRsR::synapse0x3476b70() {
   return (neuron0x34594f0()*-0.0345728);
}

double NNfunction_ss_sRsR::synapse0x3476bb0() {
   return (neuron0x3459830()*0.0875951);
}

double NNfunction_ss_sRsR::synapse0x3476bf0() {
   return (neuron0x3459b70()*0.186462);
}

double NNfunction_ss_sRsR::synapse0x3476c30() {
   return (neuron0x3459eb0()*-0.104525);
}

double NNfunction_ss_sRsR::synapse0x3476c70() {
   return (neuron0x345a1f0()*-0.0301857);
}

double NNfunction_ss_sRsR::synapse0x3476cb0() {
   return (neuron0x345a530()*-0.691986);
}

double NNfunction_ss_sRsR::synapse0x3476cf0() {
   return (neuron0x345a870()*-0.0505617);
}

double NNfunction_ss_sRsR::synapse0x3476d30() {
   return (neuron0x345abb0()*-0.304459);
}

double NNfunction_ss_sRsR::synapse0x3476d70() {
   return (neuron0x345aef0()*-0.148407);
}

double NNfunction_ss_sRsR::synapse0x3476db0() {
   return (neuron0x345b230()*-0.115068);
}

double NNfunction_ss_sRsR::synapse0x3476840() {
   return (neuron0x345b570()*-0.188764);
}

double NNfunction_ss_sRsR::synapse0x3476880() {
   return (neuron0x345bad0()*0.102614);
}

double NNfunction_ss_sRsR::synapse0x3476f00() {
   return (neuron0x345bcf0()*-0.0415395);
}

double NNfunction_ss_sRsR::synapse0x3476f40() {
   return (neuron0x345c030()*-0.705185);
}

double NNfunction_ss_sRsR::synapse0x3476f80() {
   return (neuron0x345c370()*0.074909);
}

double NNfunction_ss_sRsR::synapse0x3476fc0() {
   return (neuron0x345c6b0()*-0.0161152);
}

double NNfunction_ss_sRsR::synapse0x3477000() {
   return (neuron0x345c9f0()*0.0456184);
}

double NNfunction_ss_sRsR::synapse0x3477040() {
   return (neuron0x345cd30()*-0.0641669);
}

double NNfunction_ss_sRsR::synapse0x34773c0() {
   return (neuron0x3458170()*-0.401036);
}

double NNfunction_ss_sRsR::synapse0x3477400() {
   return (neuron0x34584b0()*-1.02545);
}

double NNfunction_ss_sRsR::synapse0x3477440() {
   return (neuron0x34587f0()*-1.06759);
}

double NNfunction_ss_sRsR::synapse0x3477480() {
   return (neuron0x3458b30()*0.966191);
}

double NNfunction_ss_sRsR::synapse0x34774c0() {
   return (neuron0x3458e70()*-0.31541);
}

double NNfunction_ss_sRsR::synapse0x3477500() {
   return (neuron0x34591b0()*-0.0963796);
}

double NNfunction_ss_sRsR::synapse0x3477540() {
   return (neuron0x34594f0()*-0.0145135);
}

double NNfunction_ss_sRsR::synapse0x3477580() {
   return (neuron0x3459830()*-0.763805);
}

double NNfunction_ss_sRsR::synapse0x34775c0() {
   return (neuron0x3459b70()*-0.846744);
}

double NNfunction_ss_sRsR::synapse0x3477600() {
   return (neuron0x3459eb0()*-0.316887);
}

double NNfunction_ss_sRsR::synapse0x3477640() {
   return (neuron0x345a1f0()*-0.205586);
}

double NNfunction_ss_sRsR::synapse0x3477680() {
   return (neuron0x345a530()*0.296301);
}

double NNfunction_ss_sRsR::synapse0x34776c0() {
   return (neuron0x345a870()*0.417635);
}

double NNfunction_ss_sRsR::synapse0x3477700() {
   return (neuron0x345abb0()*-0.390086);
}

double NNfunction_ss_sRsR::synapse0x3477740() {
   return (neuron0x345aef0()*-0.542784);
}

double NNfunction_ss_sRsR::synapse0x3477780() {
   return (neuron0x345b230()*-0.182572);
}

double NNfunction_ss_sRsR::synapse0x3477210() {
   return (neuron0x345b570()*0.429083);
}

double NNfunction_ss_sRsR::synapse0x3477250() {
   return (neuron0x345bad0()*0.465243);
}

double NNfunction_ss_sRsR::synapse0x34778d0() {
   return (neuron0x345bcf0()*0.0745335);
}

double NNfunction_ss_sRsR::synapse0x3477910() {
   return (neuron0x345c030()*-0.123963);
}

double NNfunction_ss_sRsR::synapse0x3477950() {
   return (neuron0x345c370()*-0.320472);
}

double NNfunction_ss_sRsR::synapse0x3477990() {
   return (neuron0x345c6b0()*0.584327);
}

double NNfunction_ss_sRsR::synapse0x34779d0() {
   return (neuron0x345c9f0()*-0.371052);
}

double NNfunction_ss_sRsR::synapse0x3477a10() {
   return (neuron0x345cd30()*0.292167);
}

double NNfunction_ss_sRsR::synapse0x3477d90() {
   return (neuron0x3458170()*0.144374);
}

double NNfunction_ss_sRsR::synapse0x3477dd0() {
   return (neuron0x34584b0()*0.881104);
}

double NNfunction_ss_sRsR::synapse0x3477e10() {
   return (neuron0x34587f0()*-0.0116388);
}

double NNfunction_ss_sRsR::synapse0x3477e50() {
   return (neuron0x3458b30()*-0.210328);
}

double NNfunction_ss_sRsR::synapse0x3477e90() {
   return (neuron0x3458e70()*0.546076);
}

double NNfunction_ss_sRsR::synapse0x3477ed0() {
   return (neuron0x34591b0()*0.490933);
}

double NNfunction_ss_sRsR::synapse0x3477f10() {
   return (neuron0x34594f0()*1.13632);
}

double NNfunction_ss_sRsR::synapse0x3477f50() {
   return (neuron0x3459830()*0.99088);
}

double NNfunction_ss_sRsR::synapse0x3477f90() {
   return (neuron0x3459b70()*0.571409);
}

double NNfunction_ss_sRsR::synapse0x3477fd0() {
   return (neuron0x3459eb0()*0.487022);
}

double NNfunction_ss_sRsR::synapse0x3478010() {
   return (neuron0x345a1f0()*0.385296);
}

double NNfunction_ss_sRsR::synapse0x3478050() {
   return (neuron0x345a530()*-1.64263);
}

double NNfunction_ss_sRsR::synapse0x3478090() {
   return (neuron0x345a870()*2.34488);
}

double NNfunction_ss_sRsR::synapse0x34780d0() {
   return (neuron0x345abb0()*0.426447);
}

double NNfunction_ss_sRsR::synapse0x3478110() {
   return (neuron0x345aef0()*-1.19322);
}

double NNfunction_ss_sRsR::synapse0x3478150() {
   return (neuron0x345b230()*-0.735167);
}

double NNfunction_ss_sRsR::synapse0x3477be0() {
   return (neuron0x345b570()*0.2238);
}

double NNfunction_ss_sRsR::synapse0x3477c20() {
   return (neuron0x345bad0()*-1.06254);
}

double NNfunction_ss_sRsR::synapse0x34782a0() {
   return (neuron0x345bcf0()*-1.36013);
}

double NNfunction_ss_sRsR::synapse0x34782e0() {
   return (neuron0x345c030()*1.68438);
}

double NNfunction_ss_sRsR::synapse0x3478320() {
   return (neuron0x345c370()*0.126694);
}

double NNfunction_ss_sRsR::synapse0x3478360() {
   return (neuron0x345c6b0()*0.369361);
}

double NNfunction_ss_sRsR::synapse0x34783a0() {
   return (neuron0x345c9f0()*-0.104913);
}

double NNfunction_ss_sRsR::synapse0x34783e0() {
   return (neuron0x345cd30()*-0.0551648);
}

double NNfunction_ss_sRsR::synapse0x3478760() {
   return (neuron0x3458170()*-0.613282);
}

double NNfunction_ss_sRsR::synapse0x34787a0() {
   return (neuron0x34584b0()*0.0344651);
}

double NNfunction_ss_sRsR::synapse0x34787e0() {
   return (neuron0x34587f0()*-0.0249447);
}

double NNfunction_ss_sRsR::synapse0x3478820() {
   return (neuron0x3458b30()*-0.0459825);
}

double NNfunction_ss_sRsR::synapse0x3478860() {
   return (neuron0x3458e70()*0.0765131);
}

double NNfunction_ss_sRsR::synapse0x34788a0() {
   return (neuron0x34591b0()*-0.0401297);
}

double NNfunction_ss_sRsR::synapse0x34788e0() {
   return (neuron0x34594f0()*0.130295);
}

double NNfunction_ss_sRsR::synapse0x3478920() {
   return (neuron0x3459830()*-0.110918);
}

double NNfunction_ss_sRsR::synapse0x3478960() {
   return (neuron0x3459b70()*0.0614131);
}

double NNfunction_ss_sRsR::synapse0x34789a0() {
   return (neuron0x3459eb0()*0.049492);
}

double NNfunction_ss_sRsR::synapse0x34789e0() {
   return (neuron0x345a1f0()*0.0865279);
}

double NNfunction_ss_sRsR::synapse0x3478a20() {
   return (neuron0x345a530()*0.0508112);
}

double NNfunction_ss_sRsR::synapse0x3478a60() {
   return (neuron0x345a870()*-0.1406);
}

double NNfunction_ss_sRsR::synapse0x3478aa0() {
   return (neuron0x345abb0()*0.0247716);
}

double NNfunction_ss_sRsR::synapse0x3478ae0() {
   return (neuron0x345aef0()*-0.144937);
}

double NNfunction_ss_sRsR::synapse0x3478b20() {
   return (neuron0x345b230()*0.0310728);
}

double NNfunction_ss_sRsR::synapse0x34785b0() {
   return (neuron0x345b570()*0.00722666);
}

double NNfunction_ss_sRsR::synapse0x34785f0() {
   return (neuron0x345bad0()*0.0108446);
}

double NNfunction_ss_sRsR::synapse0x3478c70() {
   return (neuron0x345bcf0()*-0.705103);
}

double NNfunction_ss_sRsR::synapse0x3478cb0() {
   return (neuron0x345c030()*0.193857);
}

double NNfunction_ss_sRsR::synapse0x3478cf0() {
   return (neuron0x345c370()*-0.114806);
}

double NNfunction_ss_sRsR::synapse0x3478d30() {
   return (neuron0x345c6b0()*-0.0598738);
}

double NNfunction_ss_sRsR::synapse0x3478d70() {
   return (neuron0x345c9f0()*0.0474297);
}

double NNfunction_ss_sRsR::synapse0x3478db0() {
   return (neuron0x345cd30()*-0.294883);
}

double NNfunction_ss_sRsR::synapse0x3479130() {
   return (neuron0x3458170()*-0.0729244);
}

double NNfunction_ss_sRsR::synapse0x3479170() {
   return (neuron0x34584b0()*-0.0472502);
}

double NNfunction_ss_sRsR::synapse0x34791b0() {
   return (neuron0x34587f0()*0.0549711);
}

double NNfunction_ss_sRsR::synapse0x34791f0() {
   return (neuron0x3458b30()*0.488878);
}

double NNfunction_ss_sRsR::synapse0x3479230() {
   return (neuron0x3458e70()*0.00755508);
}

double NNfunction_ss_sRsR::synapse0x3479270() {
   return (neuron0x34591b0()*0.0882602);
}

double NNfunction_ss_sRsR::synapse0x34792b0() {
   return (neuron0x34594f0()*0.0862682);
}

double NNfunction_ss_sRsR::synapse0x34792f0() {
   return (neuron0x3459830()*0.0305721);
}

double NNfunction_ss_sRsR::synapse0x3479330() {
   return (neuron0x3459b70()*-0.0308137);
}

double NNfunction_ss_sRsR::synapse0x3479370() {
   return (neuron0x3459eb0()*0.0324676);
}

double NNfunction_ss_sRsR::synapse0x34793b0() {
   return (neuron0x345a1f0()*0.0106649);
}

double NNfunction_ss_sRsR::synapse0x34793f0() {
   return (neuron0x345a530()*0.00478645);
}

double NNfunction_ss_sRsR::synapse0x3479430() {
   return (neuron0x345a870()*0.0322777);
}

double NNfunction_ss_sRsR::synapse0x3479470() {
   return (neuron0x345abb0()*-0.0516446);
}

double NNfunction_ss_sRsR::synapse0x34794b0() {
   return (neuron0x345aef0()*-0.0187832);
}

double NNfunction_ss_sRsR::synapse0x34794f0() {
   return (neuron0x345b230()*-0.785301);
}

double NNfunction_ss_sRsR::synapse0x3478f80() {
   return (neuron0x345b570()*0.0704266);
}

double NNfunction_ss_sRsR::synapse0x3478fc0() {
   return (neuron0x345bad0()*-0.0244802);
}

double NNfunction_ss_sRsR::synapse0x3479640() {
   return (neuron0x345bcf0()*0.60152);
}

double NNfunction_ss_sRsR::synapse0x3479680() {
   return (neuron0x345c030()*0.0194909);
}

double NNfunction_ss_sRsR::synapse0x34796c0() {
   return (neuron0x345c370()*-0.016989);
}

double NNfunction_ss_sRsR::synapse0x3479700() {
   return (neuron0x345c6b0()*0.0324397);
}

double NNfunction_ss_sRsR::synapse0x3479740() {
   return (neuron0x345c9f0()*0.0199395);
}

double NNfunction_ss_sRsR::synapse0x3479780() {
   return (neuron0x345cd30()*0.0289607);
}

double NNfunction_ss_sRsR::synapse0x3462230() {
   return (neuron0x3458170()*-0.0284699);
}

double NNfunction_ss_sRsR::synapse0x3462270() {
   return (neuron0x34584b0()*-0.763577);
}

double NNfunction_ss_sRsR::synapse0x34622b0() {
   return (neuron0x34587f0()*-0.179939);
}

double NNfunction_ss_sRsR::synapse0x34622f0() {
   return (neuron0x3458b30()*-0.829245);
}

double NNfunction_ss_sRsR::synapse0x3462330() {
   return (neuron0x3458e70()*-0.770068);
}

double NNfunction_ss_sRsR::synapse0x3462370() {
   return (neuron0x34591b0()*-0.449006);
}

double NNfunction_ss_sRsR::synapse0x34623b0() {
   return (neuron0x34594f0()*0.410174);
}

double NNfunction_ss_sRsR::synapse0x34623f0() {
   return (neuron0x3459830()*-0.509815);
}

double NNfunction_ss_sRsR::synapse0x3479f10() {
   return (neuron0x3459b70()*-0.174739);
}

double NNfunction_ss_sRsR::synapse0x3479f50() {
   return (neuron0x3459eb0()*-0.731965);
}

double NNfunction_ss_sRsR::synapse0x3479f90() {
   return (neuron0x345a1f0()*0.258368);
}

double NNfunction_ss_sRsR::synapse0x3479fd0() {
   return (neuron0x345a530()*-1.94665);
}

double NNfunction_ss_sRsR::synapse0x347a010() {
   return (neuron0x345a870()*0.6145);
}

double NNfunction_ss_sRsR::synapse0x347a050() {
   return (neuron0x345abb0()*-0.468676);
}

double NNfunction_ss_sRsR::synapse0x347a090() {
   return (neuron0x345aef0()*0.887168);
}

double NNfunction_ss_sRsR::synapse0x347a0d0() {
   return (neuron0x345b230()*0.713594);
}

double NNfunction_ss_sRsR::synapse0x3479950() {
   return (neuron0x345b570()*0.0393701);
}

double NNfunction_ss_sRsR::synapse0x3479990() {
   return (neuron0x345bad0()*-0.920803);
}

double NNfunction_ss_sRsR::synapse0x347a220() {
   return (neuron0x345bcf0()*0.888605);
}

double NNfunction_ss_sRsR::synapse0x347a260() {
   return (neuron0x345c030()*0.774882);
}

double NNfunction_ss_sRsR::synapse0x347a2a0() {
   return (neuron0x345c370()*-0.814084);
}

double NNfunction_ss_sRsR::synapse0x347a2e0() {
   return (neuron0x345c6b0()*-0.767902);
}

double NNfunction_ss_sRsR::synapse0x347a320() {
   return (neuron0x345c9f0()*1.17862);
}

double NNfunction_ss_sRsR::synapse0x347a360() {
   return (neuron0x345cd30()*0.15641);
}

double NNfunction_ss_sRsR::synapse0x347a6e0() {
   return (neuron0x3458170()*0.0899699);
}

double NNfunction_ss_sRsR::synapse0x347a720() {
   return (neuron0x34584b0()*-0.22901);
}

double NNfunction_ss_sRsR::synapse0x347a760() {
   return (neuron0x34587f0()*0.205897);
}

double NNfunction_ss_sRsR::synapse0x347a7a0() {
   return (neuron0x3458b30()*0.21746);
}

double NNfunction_ss_sRsR::synapse0x347a7e0() {
   return (neuron0x3458e70()*0.011576);
}

double NNfunction_ss_sRsR::synapse0x347a820() {
   return (neuron0x34591b0()*-0.0595821);
}

double NNfunction_ss_sRsR::synapse0x347a860() {
   return (neuron0x34594f0()*-0.151955);
}

double NNfunction_ss_sRsR::synapse0x347a8a0() {
   return (neuron0x3459830()*-0.170111);
}

double NNfunction_ss_sRsR::synapse0x347a8e0() {
   return (neuron0x3459b70()*-0.0981829);
}

double NNfunction_ss_sRsR::synapse0x347a920() {
   return (neuron0x3459eb0()*-0.875852);
}

double NNfunction_ss_sRsR::synapse0x347a960() {
   return (neuron0x345a1f0()*-0.319982);
}

double NNfunction_ss_sRsR::synapse0x347a9a0() {
   return (neuron0x345a530()*0.388149);
}

double NNfunction_ss_sRsR::synapse0x347a9e0() {
   return (neuron0x345a870()*-0.285346);
}

double NNfunction_ss_sRsR::synapse0x347aa20() {
   return (neuron0x345abb0()*-0.124662);
}

double NNfunction_ss_sRsR::synapse0x347aa60() {
   return (neuron0x345aef0()*0.0947133);
}

double NNfunction_ss_sRsR::synapse0x347aaa0() {
   return (neuron0x345b230()*0.0731115);
}

double NNfunction_ss_sRsR::synapse0x347a530() {
   return (neuron0x345b570()*-0.171829);
}

double NNfunction_ss_sRsR::synapse0x347a570() {
   return (neuron0x345bad0()*-0.613222);
}

double NNfunction_ss_sRsR::synapse0x347abf0() {
   return (neuron0x345bcf0()*1.36605);
}

double NNfunction_ss_sRsR::synapse0x347ac30() {
   return (neuron0x345c030()*-1.24982);
}

double NNfunction_ss_sRsR::synapse0x347ac70() {
   return (neuron0x345c370()*-0.126491);
}

double NNfunction_ss_sRsR::synapse0x347acb0() {
   return (neuron0x345c6b0()*-0.0943336);
}

double NNfunction_ss_sRsR::synapse0x347acf0() {
   return (neuron0x345c9f0()*-0.0514922);
}

double NNfunction_ss_sRsR::synapse0x347ad30() {
   return (neuron0x345cd30()*0.140115);
}

double NNfunction_ss_sRsR::synapse0x347b0b0() {
   return (neuron0x3458170()*-0.0650197);
}

double NNfunction_ss_sRsR::synapse0x347b0f0() {
   return (neuron0x34584b0()*0.0505304);
}

double NNfunction_ss_sRsR::synapse0x347b130() {
   return (neuron0x34587f0()*-0.0191661);
}

double NNfunction_ss_sRsR::synapse0x347b170() {
   return (neuron0x3458b30()*0.382289);
}

double NNfunction_ss_sRsR::synapse0x347b1b0() {
   return (neuron0x3458e70()*0.19259);
}

double NNfunction_ss_sRsR::synapse0x347b1f0() {
   return (neuron0x34591b0()*0.0814957);
}

double NNfunction_ss_sRsR::synapse0x347b230() {
   return (neuron0x34594f0()*0.0177954);
}

double NNfunction_ss_sRsR::synapse0x347b270() {
   return (neuron0x3459830()*0.00991155);
}

double NNfunction_ss_sRsR::synapse0x347b2b0() {
   return (neuron0x3459b70()*-1.18292);
}

double NNfunction_ss_sRsR::synapse0x347b2f0() {
   return (neuron0x3459eb0()*-1.08205);
}

double NNfunction_ss_sRsR::synapse0x347b330() {
   return (neuron0x345a1f0()*-0.0328538);
}

double NNfunction_ss_sRsR::synapse0x347b370() {
   return (neuron0x345a530()*-0.0764795);
}

double NNfunction_ss_sRsR::synapse0x347b3b0() {
   return (neuron0x345a870()*0.0654434);
}

double NNfunction_ss_sRsR::synapse0x347b3f0() {
   return (neuron0x345abb0()*-0.00674617);
}

double NNfunction_ss_sRsR::synapse0x347b430() {
   return (neuron0x345aef0()*0.0957069);
}

double NNfunction_ss_sRsR::synapse0x347b470() {
   return (neuron0x345b230()*-0.00882096);
}

double NNfunction_ss_sRsR::synapse0x347af00() {
   return (neuron0x345b570()*0.211943);
}

double NNfunction_ss_sRsR::synapse0x347af40() {
   return (neuron0x345bad0()*0.241096);
}

double NNfunction_ss_sRsR::synapse0x346ba70() {
   return (neuron0x345bcf0()*1.81725);
}

double NNfunction_ss_sRsR::synapse0x346bab0() {
   return (neuron0x345c030()*0.264121);
}

double NNfunction_ss_sRsR::synapse0x346baf0() {
   return (neuron0x345c370()*0.0782836);
}

double NNfunction_ss_sRsR::synapse0x346bb30() {
   return (neuron0x345c6b0()*-0.0128464);
}

double NNfunction_ss_sRsR::synapse0x346bb70() {
   return (neuron0x345c9f0()*-0.0294728);
}

double NNfunction_ss_sRsR::synapse0x346bbb0() {
   return (neuron0x345cd30()*-0.0701124);
}

double NNfunction_ss_sRsR::synapse0x346bf30() {
   return (neuron0x3458170()*-0.219622);
}

double NNfunction_ss_sRsR::synapse0x346bf70() {
   return (neuron0x34584b0()*-0.00761983);
}

double NNfunction_ss_sRsR::synapse0x346bfb0() {
   return (neuron0x34587f0()*-0.0243542);
}

double NNfunction_ss_sRsR::synapse0x346bff0() {
   return (neuron0x3458b30()*-0.0496267);
}

double NNfunction_ss_sRsR::synapse0x346c030() {
   return (neuron0x3458e70()*0.00723851);
}

double NNfunction_ss_sRsR::synapse0x346c070() {
   return (neuron0x34591b0()*-0.0122847);
}

double NNfunction_ss_sRsR::synapse0x346c0b0() {
   return (neuron0x34594f0()*0.039763);
}

double NNfunction_ss_sRsR::synapse0x346c0f0() {
   return (neuron0x3459830()*-0.0435126);
}

double NNfunction_ss_sRsR::synapse0x346c130() {
   return (neuron0x3459b70()*0.0308561);
}

double NNfunction_ss_sRsR::synapse0x346c170() {
   return (neuron0x3459eb0()*0.0255169);
}

double NNfunction_ss_sRsR::synapse0x346c1b0() {
   return (neuron0x345a1f0()*0.0255715);
}

double NNfunction_ss_sRsR::synapse0x346c1f0() {
   return (neuron0x345a530()*-0.00246832);
}

double NNfunction_ss_sRsR::synapse0x346c230() {
   return (neuron0x345a870()*-0.0682826);
}

double NNfunction_ss_sRsR::synapse0x346c270() {
   return (neuron0x345abb0()*0.0147223);
}

double NNfunction_ss_sRsR::synapse0x346c2b0() {
   return (neuron0x345aef0()*-0.0688799);
}

double NNfunction_ss_sRsR::synapse0x346c2f0() {
   return (neuron0x345b230()*-0.0206647);
}

double NNfunction_ss_sRsR::synapse0x346bd80() {
   return (neuron0x345b570()*-0.0174687);
}

double NNfunction_ss_sRsR::synapse0x346bdc0() {
   return (neuron0x345bad0()*-0.00633283);
}

double NNfunction_ss_sRsR::synapse0x346c440() {
   return (neuron0x345bcf0()*0.0595861);
}

double NNfunction_ss_sRsR::synapse0x346c480() {
   return (neuron0x345c030()*0.0633264);
}

double NNfunction_ss_sRsR::synapse0x346c4c0() {
   return (neuron0x345c370()*-0.0416552);
}

double NNfunction_ss_sRsR::synapse0x346c500() {
   return (neuron0x345c6b0()*-0.0270296);
}

double NNfunction_ss_sRsR::synapse0x346c540() {
   return (neuron0x345c9f0()*0.0174476);
}

double NNfunction_ss_sRsR::synapse0x346c580() {
   return (neuron0x345cd30()*-0.10145);
}

double NNfunction_ss_sRsR::synapse0x346c900() {
   return (neuron0x3458170()*-0.0192098);
}

double NNfunction_ss_sRsR::synapse0x346c940() {
   return (neuron0x34584b0()*0.113418);
}

double NNfunction_ss_sRsR::synapse0x346c980() {
   return (neuron0x34587f0()*2.14567);
}

double NNfunction_ss_sRsR::synapse0x346c9c0() {
   return (neuron0x3458b30()*-2.86577);
}

double NNfunction_ss_sRsR::synapse0x346ca00() {
   return (neuron0x3458e70()*-0.0441431);
}

double NNfunction_ss_sRsR::synapse0x346ca40() {
   return (neuron0x34591b0()*-0.770643);
}

double NNfunction_ss_sRsR::synapse0x346ca80() {
   return (neuron0x34594f0()*-0.721304);
}

double NNfunction_ss_sRsR::synapse0x346cac0() {
   return (neuron0x3459830()*-0.25545);
}

double NNfunction_ss_sRsR::synapse0x346cb00() {
   return (neuron0x3459b70()*-0.54777);
}

double NNfunction_ss_sRsR::synapse0x346cb40() {
   return (neuron0x3459eb0()*-0.715821);
}

double NNfunction_ss_sRsR::synapse0x346cb80() {
   return (neuron0x345a1f0()*0.231431);
}

double NNfunction_ss_sRsR::synapse0x346cbc0() {
   return (neuron0x345a530()*-0.363839);
}

double NNfunction_ss_sRsR::synapse0x346cc00() {
   return (neuron0x345a870()*-0.569439);
}

double NNfunction_ss_sRsR::synapse0x346cc40() {
   return (neuron0x345abb0()*-1.07136);
}

double NNfunction_ss_sRsR::synapse0x346cc80() {
   return (neuron0x345aef0()*-0.832369);
}

double NNfunction_ss_sRsR::synapse0x346ccc0() {
   return (neuron0x345b230()*-0.285981);
}

double NNfunction_ss_sRsR::synapse0x346c750() {
   return (neuron0x345b570()*0.262952);
}

double NNfunction_ss_sRsR::synapse0x346c790() {
   return (neuron0x345bad0()*0.225033);
}

double NNfunction_ss_sRsR::synapse0x346ce10() {
   return (neuron0x345bcf0()*1.60333);
}

double NNfunction_ss_sRsR::synapse0x346ce50() {
   return (neuron0x345c030()*0.287235);
}

double NNfunction_ss_sRsR::synapse0x346ce90() {
   return (neuron0x345c370()*-0.335284);
}

double NNfunction_ss_sRsR::synapse0x346ced0() {
   return (neuron0x345c6b0()*0.113679);
}

double NNfunction_ss_sRsR::synapse0x346cf10() {
   return (neuron0x345c9f0()*0.0682081);
}

double NNfunction_ss_sRsR::synapse0x346cf50() {
   return (neuron0x345cd30()*0.00562817);
}

double NNfunction_ss_sRsR::synapse0x346d2d0() {
   return (neuron0x3458170()*0.332697);
}

double NNfunction_ss_sRsR::synapse0x346d310() {
   return (neuron0x34584b0()*-0.0260736);
}

double NNfunction_ss_sRsR::synapse0x346d350() {
   return (neuron0x34587f0()*0.00755574);
}

double NNfunction_ss_sRsR::synapse0x346d390() {
   return (neuron0x3458b30()*0.0170191);
}

double NNfunction_ss_sRsR::synapse0x346d3d0() {
   return (neuron0x3458e70()*-0.046183);
}

double NNfunction_ss_sRsR::synapse0x346d410() {
   return (neuron0x34591b0()*0.0269818);
}

double NNfunction_ss_sRsR::synapse0x346d450() {
   return (neuron0x34594f0()*-0.0733639);
}

double NNfunction_ss_sRsR::synapse0x346d490() {
   return (neuron0x3459830()*0.0653382);
}

double NNfunction_ss_sRsR::synapse0x346d4d0() {
   return (neuron0x3459b70()*-0.0351729);
}

double NNfunction_ss_sRsR::synapse0x346d510() {
   return (neuron0x3459eb0()*-0.024747);
}

double NNfunction_ss_sRsR::synapse0x346d550() {
   return (neuron0x345a1f0()*-0.051243);
}

double NNfunction_ss_sRsR::synapse0x346d590() {
   return (neuron0x345a530()*0.000256391);
}

double NNfunction_ss_sRsR::synapse0x346d5d0() {
   return (neuron0x345a870()*0.101346);
}

double NNfunction_ss_sRsR::synapse0x346d610() {
   return (neuron0x345abb0()*-0.0178006);
}

double NNfunction_ss_sRsR::synapse0x346d650() {
   return (neuron0x345aef0()*0.094734);
}

double NNfunction_ss_sRsR::synapse0x346d690() {
   return (neuron0x345b230()*-0.0116267);
}

double NNfunction_ss_sRsR::synapse0x346d120() {
   return (neuron0x345b570()*-0.0146954);
}

double NNfunction_ss_sRsR::synapse0x346d160() {
   return (neuron0x345bad0()*0.00832779);
}

double NNfunction_ss_sRsR::synapse0x346d7e0() {
   return (neuron0x345bcf0()*0.242199);
}

double NNfunction_ss_sRsR::synapse0x346d820() {
   return (neuron0x345c030()*-0.110486);
}

double NNfunction_ss_sRsR::synapse0x346d860() {
   return (neuron0x345c370()*0.0637656);
}

double NNfunction_ss_sRsR::synapse0x346d8a0() {
   return (neuron0x345c6b0()*0.0286486);
}

double NNfunction_ss_sRsR::synapse0x346d8e0() {
   return (neuron0x345c9f0()*-0.0221833);
}

double NNfunction_ss_sRsR::synapse0x346d920() {
   return (neuron0x345cd30()*0.155083);
}

double NNfunction_ss_sRsR::synapse0x347f7f0() {
   return (neuron0x3458170()*0.0614647);
}

double NNfunction_ss_sRsR::synapse0x347f830() {
   return (neuron0x34584b0()*-0.600294);
}

double NNfunction_ss_sRsR::synapse0x347f870() {
   return (neuron0x34587f0()*0.869694);
}

double NNfunction_ss_sRsR::synapse0x347f8b0() {
   return (neuron0x3458b30()*0.589201);
}

double NNfunction_ss_sRsR::synapse0x347f8f0() {
   return (neuron0x3458e70()*-0.0396608);
}

double NNfunction_ss_sRsR::synapse0x347f930() {
   return (neuron0x34591b0()*-0.276357);
}

double NNfunction_ss_sRsR::synapse0x347f970() {
   return (neuron0x34594f0()*0.101294);
}

double NNfunction_ss_sRsR::synapse0x347f9b0() {
   return (neuron0x3459830()*0.0650085);
}

double NNfunction_ss_sRsR::synapse0x347f9f0() {
   return (neuron0x3459b70()*0.11154);
}

double NNfunction_ss_sRsR::synapse0x347fa30() {
   return (neuron0x3459eb0()*0.0991982);
}

double NNfunction_ss_sRsR::synapse0x347fa70() {
   return (neuron0x345a1f0()*-0.264694);
}

double NNfunction_ss_sRsR::synapse0x347fab0() {
   return (neuron0x345a530()*-0.050634);
}

double NNfunction_ss_sRsR::synapse0x347faf0() {
   return (neuron0x345a870()*0.546961);
}

double NNfunction_ss_sRsR::synapse0x347fb30() {
   return (neuron0x345abb0()*0.522285);
}

double NNfunction_ss_sRsR::synapse0x347fb70() {
   return (neuron0x345aef0()*-0.596233);
}

double NNfunction_ss_sRsR::synapse0x347fbb0() {
   return (neuron0x345b230()*-0.212412);
}

double NNfunction_ss_sRsR::synapse0x346d960() {
   return (neuron0x345b570()*0.0114304);
}

double NNfunction_ss_sRsR::synapse0x346d9a0() {
   return (neuron0x345bad0()*0.65807);
}

double NNfunction_ss_sRsR::synapse0x347fd00() {
   return (neuron0x345bcf0()*-0.260736);
}

double NNfunction_ss_sRsR::synapse0x347fd40() {
   return (neuron0x345c030()*-1.08615);
}

double NNfunction_ss_sRsR::synapse0x347fd80() {
   return (neuron0x345c370()*0.0999449);
}

double NNfunction_ss_sRsR::synapse0x347fdc0() {
   return (neuron0x345c6b0()*-0.51829);
}

double NNfunction_ss_sRsR::synapse0x347fe00() {
   return (neuron0x345c9f0()*0.535767);
}

double NNfunction_ss_sRsR::synapse0x347fe40() {
   return (neuron0x345cd30()*-0.16934);
}

double NNfunction_ss_sRsR::synapse0x34801c0() {
   return (neuron0x3458170()*0.336177);
}

double NNfunction_ss_sRsR::synapse0x3480200() {
   return (neuron0x34584b0()*0.0043931);
}

double NNfunction_ss_sRsR::synapse0x3480240() {
   return (neuron0x34587f0()*0.0955048);
}

double NNfunction_ss_sRsR::synapse0x3480280() {
   return (neuron0x3458b30()*0.54975);
}

double NNfunction_ss_sRsR::synapse0x34802c0() {
   return (neuron0x3458e70()*0.0400352);
}

double NNfunction_ss_sRsR::synapse0x3480300() {
   return (neuron0x34591b0()*-0.00935996);
}

double NNfunction_ss_sRsR::synapse0x3480340() {
   return (neuron0x34594f0()*0.165462);
}

double NNfunction_ss_sRsR::synapse0x3480380() {
   return (neuron0x3459830()*0.108582);
}

double NNfunction_ss_sRsR::synapse0x34803c0() {
   return (neuron0x3459b70()*-0.161129);
}

double NNfunction_ss_sRsR::synapse0x3480400() {
   return (neuron0x3459eb0()*-0.0297514);
}

double NNfunction_ss_sRsR::synapse0x3480440() {
   return (neuron0x345a1f0()*-0.0117373);
}

double NNfunction_ss_sRsR::synapse0x3480480() {
   return (neuron0x345a530()*-0.244355);
}

double NNfunction_ss_sRsR::synapse0x34804c0() {
   return (neuron0x345a870()*-0.141166);
}

double NNfunction_ss_sRsR::synapse0x3480500() {
   return (neuron0x345abb0()*-0.0994495);
}

double NNfunction_ss_sRsR::synapse0x3480540() {
   return (neuron0x345aef0()*0.174212);
}

double NNfunction_ss_sRsR::synapse0x3480580() {
   return (neuron0x345b230()*0.181901);
}

double NNfunction_ss_sRsR::synapse0x3480010() {
   return (neuron0x345b570()*-0.097218);
}

double NNfunction_ss_sRsR::synapse0x3480050() {
   return (neuron0x345bad0()*-0.0589024);
}

double NNfunction_ss_sRsR::synapse0x34806d0() {
   return (neuron0x345bcf0()*1.09918);
}

double NNfunction_ss_sRsR::synapse0x3480710() {
   return (neuron0x345c030()*-0.190434);
}

double NNfunction_ss_sRsR::synapse0x3480750() {
   return (neuron0x345c370()*0.0680752);
}

double NNfunction_ss_sRsR::synapse0x3480790() {
   return (neuron0x345c6b0()*0.06828);
}

double NNfunction_ss_sRsR::synapse0x34807d0() {
   return (neuron0x345c9f0()*0.0576205);
}

double NNfunction_ss_sRsR::synapse0x3480810() {
   return (neuron0x345cd30()*0.0730498);
}

double NNfunction_ss_sRsR::synapse0x3480b90() {
   return (neuron0x3458170()*0.0494905);
}

double NNfunction_ss_sRsR::synapse0x3480bd0() {
   return (neuron0x34584b0()*0.825683);
}

double NNfunction_ss_sRsR::synapse0x3480c10() {
   return (neuron0x34587f0()*-1.23058);
}

double NNfunction_ss_sRsR::synapse0x3480c50() {
   return (neuron0x3458b30()*1.10052);
}

double NNfunction_ss_sRsR::synapse0x3480c90() {
   return (neuron0x3458e70()*0.59713);
}

double NNfunction_ss_sRsR::synapse0x3480cd0() {
   return (neuron0x34591b0()*0.458216);
}

double NNfunction_ss_sRsR::synapse0x3480d10() {
   return (neuron0x34594f0()*-0.869748);
}

double NNfunction_ss_sRsR::synapse0x3480d50() {
   return (neuron0x3459830()*-0.33177);
}

double NNfunction_ss_sRsR::synapse0x3480d90() {
   return (neuron0x3459b70()*-1.13835);
}

double NNfunction_ss_sRsR::synapse0x3480dd0() {
   return (neuron0x3459eb0()*0.0314194);
}

double NNfunction_ss_sRsR::synapse0x3480e10() {
   return (neuron0x345a1f0()*-0.686871);
}

double NNfunction_ss_sRsR::synapse0x3480e50() {
   return (neuron0x345a530()*1.47649);
}

double NNfunction_ss_sRsR::synapse0x3480e90() {
   return (neuron0x345a870()*-0.711738);
}

double NNfunction_ss_sRsR::synapse0x3480ed0() {
   return (neuron0x345abb0()*-0.692497);
}

double NNfunction_ss_sRsR::synapse0x3480f10() {
   return (neuron0x345aef0()*-1.16389);
}

double NNfunction_ss_sRsR::synapse0x3480f50() {
   return (neuron0x345b230()*0.613221);
}

double NNfunction_ss_sRsR::synapse0x34809e0() {
   return (neuron0x345b570()*-0.518303);
}

double NNfunction_ss_sRsR::synapse0x3480a20() {
   return (neuron0x345bad0()*-1.03667);
}

double NNfunction_ss_sRsR::synapse0x34810a0() {
   return (neuron0x345bcf0()*0.747275);
}

double NNfunction_ss_sRsR::synapse0x34810e0() {
   return (neuron0x345c030()*1.15148);
}

double NNfunction_ss_sRsR::synapse0x3481120() {
   return (neuron0x345c370()*-0.715483);
}

double NNfunction_ss_sRsR::synapse0x3481160() {
   return (neuron0x345c6b0()*0.681801);
}

double NNfunction_ss_sRsR::synapse0x34811a0() {
   return (neuron0x345c9f0()*0.0528097);
}

double NNfunction_ss_sRsR::synapse0x34811e0() {
   return (neuron0x345cd30()*-0.142998);
}

double NNfunction_ss_sRsR::synapse0x3481560() {
   return (neuron0x3458170()*0.0147534);
}

double NNfunction_ss_sRsR::synapse0x34815a0() {
   return (neuron0x34584b0()*-0.0244883);
}

double NNfunction_ss_sRsR::synapse0x34815e0() {
   return (neuron0x34587f0()*0.00363381);
}

double NNfunction_ss_sRsR::synapse0x3481620() {
   return (neuron0x3458b30()*-6.12268);
}

double NNfunction_ss_sRsR::synapse0x3481660() {
   return (neuron0x3458e70()*0.0246009);
}

double NNfunction_ss_sRsR::synapse0x34816a0() {
   return (neuron0x34591b0()*-0.00477163);
}

double NNfunction_ss_sRsR::synapse0x34816e0() {
   return (neuron0x34594f0()*-0.0218011);
}

double NNfunction_ss_sRsR::synapse0x3481720() {
   return (neuron0x3459830()*0.0332825);
}

double NNfunction_ss_sRsR::synapse0x3481760() {
   return (neuron0x3459b70()*-0.0220179);
}

double NNfunction_ss_sRsR::synapse0x34817a0() {
   return (neuron0x3459eb0()*-0.0237036);
}

double NNfunction_ss_sRsR::synapse0x34817e0() {
   return (neuron0x345a1f0()*0.00511825);
}

double NNfunction_ss_sRsR::synapse0x3481820() {
   return (neuron0x345a530()*0.0375059);
}

double NNfunction_ss_sRsR::synapse0x3481860() {
   return (neuron0x345a870()*0.0173193);
}

double NNfunction_ss_sRsR::synapse0x34818a0() {
   return (neuron0x345abb0()*-0.0731831);
}

double NNfunction_ss_sRsR::synapse0x34818e0() {
   return (neuron0x345aef0()*-0.0251371);
}

double NNfunction_ss_sRsR::synapse0x3481920() {
   return (neuron0x345b230()*0.0437865);
}

double NNfunction_ss_sRsR::synapse0x34813b0() {
   return (neuron0x345b570()*-0.0573051);
}

double NNfunction_ss_sRsR::synapse0x34813f0() {
   return (neuron0x345bad0()*0.034035);
}

double NNfunction_ss_sRsR::synapse0x3481a70() {
   return (neuron0x345bcf0()*-0.726115);
}

double NNfunction_ss_sRsR::synapse0x3481ab0() {
   return (neuron0x345c030()*0.0105789);
}

double NNfunction_ss_sRsR::synapse0x3481af0() {
   return (neuron0x345c370()*0.00223594);
}

double NNfunction_ss_sRsR::synapse0x3481b30() {
   return (neuron0x345c6b0()*0.00970076);
}

double NNfunction_ss_sRsR::synapse0x3481b70() {
   return (neuron0x345c9f0()*0.00548766);
}

double NNfunction_ss_sRsR::synapse0x3481bb0() {
   return (neuron0x345cd30()*-0.00794402);
}

double NNfunction_ss_sRsR::synapse0x3221ac0() {
   return (neuron0x345d1a0()*-0.48951);
}

double NNfunction_ss_sRsR::synapse0x3221b00() {
   return (neuron0x345daf0()*0.0250396);
}

double NNfunction_ss_sRsR::synapse0x345f660() {
   return (neuron0x345e5d0()*-0.114584);
}

double NNfunction_ss_sRsR::synapse0x345f6a0() {
   return (neuron0x345e070()*-0.0108855);
}

double NNfunction_ss_sRsR::synapse0x3460030() {
   return (neuron0x345f3b0()*-0.514805);
}

double NNfunction_ss_sRsR::synapse0x3460070() {
   return (neuron0x345fd80()*0.894659);
}

double NNfunction_ss_sRsR::synapse0x3460e00() {
   return (neuron0x3460b50()*-1.241);
}

double NNfunction_ss_sRsR::synapse0x3460e40() {
   return (neuron0x3461520()*0.00158175);
}

double NNfunction_ss_sRsR::synapse0x34617d0() {
   return (neuron0x3461ef0()*0.00454276);
}

double NNfunction_ss_sRsR::synapse0x3461810() {
   return (neuron0x34629d0()*-0.00783515);
}

double NNfunction_ss_sRsR::synapse0x34621a0() {
   return (neuron0x34633a0()*-0.13438);
}

double NNfunction_ss_sRsR::synapse0x34621e0() {
   return (neuron0x3460480()*-0.989281);
}

double NNfunction_ss_sRsR::synapse0x3462c80() {
   return (neuron0x3464f50()*-0.0011665);
}

double NNfunction_ss_sRsR::synapse0x3462cc0() {
   return (neuron0x3465920()*0.124018);
}

double NNfunction_ss_sRsR::synapse0x3463650() {
   return (neuron0x34662f0()*0.0143824);
}

double NNfunction_ss_sRsR::synapse0x3463690() {
   return (neuron0x3466cc0()*0.00426278);
}

double NNfunction_ss_sRsR::synapse0x3460730() {
   return (neuron0x3468ad0()*0.232656);
}

double NNfunction_ss_sRsR::synapse0x3460770() {
   return (neuron0x3468db0()*-0.935212);
}

double NNfunction_ss_sRsR::synapse0x3465200() {
   return (neuron0x3469780()*-0.00484604);
}

double NNfunction_ss_sRsR::synapse0x3465240() {
   return (neuron0x346a150()*-0.14651);
}

double NNfunction_ss_sRsR::synapse0x3465bd0() {
   return (neuron0x346ab20()*0.0699263);
}

double NNfunction_ss_sRsR::synapse0x3465c10() {
   return (neuron0x346b4f0()*-0.00183304);
}

double NNfunction_ss_sRsR::synapse0x34665a0() {
   return (neuron0x3464040()*0.448439);
}

double NNfunction_ss_sRsR::synapse0x34665e0() {
   return (neuron0x3464a10()*0.465383);
}

double NNfunction_ss_sRsR::synapse0x3466f70() {
   return (neuron0x346e280()*0.105918);
}

double NNfunction_ss_sRsR::synapse0x3466fb0() {
   return (neuron0x346ec50()*1.16256);
}

double NNfunction_ss_sRsR::synapse0x345b110() {
   return (neuron0x346f620()*0.517122);
}

double NNfunction_ss_sRsR::synapse0x345b150() {
   return (neuron0x346fff0()*-0.16394);
}

double NNfunction_ss_sRsR::synapse0x3469060() {
   return (neuron0x34709c0()*0.0204211);
}

double NNfunction_ss_sRsR::synapse0x34690a0() {
   return (neuron0x3471390()*0.984407);
}

double NNfunction_ss_sRsR::synapse0x3469a30() {
   return (neuron0x3471d60()*-0.0197563);
}

double NNfunction_ss_sRsR::synapse0x3469a70() {
   return (neuron0x3472730()*0.0279814);
}

double NNfunction_ss_sRsR::synapse0x346a400() {
   return (neuron0x34687c0()*0.0388605);
}

double NNfunction_ss_sRsR::synapse0x346a440() {
   return (neuron0x3475310()*0.269329);
}

double NNfunction_ss_sRsR::synapse0x346add0() {
   return (neuron0x3475ce0()*0.182976);
}

double NNfunction_ss_sRsR::synapse0x346ae10() {
   return (neuron0x34766b0()*0.112001);
}

double NNfunction_ss_sRsR::synapse0x346b7a0() {
   return (neuron0x3477080()*0.0291801);
}

double NNfunction_ss_sRsR::synapse0x346b7e0() {
   return (neuron0x3477a50()*0.00845703);
}

double NNfunction_ss_sRsR::synapse0x34642f0() {
   return (neuron0x3478420()*0.207958);
}

double NNfunction_ss_sRsR::synapse0x3464330() {
   return (neuron0x3478df0()*-0.221535);
}

double NNfunction_ss_sRsR::synapse0x346dba0() {
   return (neuron0x34797c0()*-0.0165965);
}

double NNfunction_ss_sRsR::synapse0x346dbe0() {
   return (neuron0x347a3a0()*0.058082);
}

double NNfunction_ss_sRsR::synapse0x346e530() {
   return (neuron0x347ad70()*0.0894229);
}

double NNfunction_ss_sRsR::synapse0x346e570() {
   return (neuron0x346bbf0()*0.288123);
}

double NNfunction_ss_sRsR::synapse0x346ef00() {
   return (neuron0x346c5c0()*-0.0015349);
}

double NNfunction_ss_sRsR::synapse0x346ef40() {
   return (neuron0x346cf90()*-2.99132);
}

double NNfunction_ss_sRsR::synapse0x346f8d0() {
   return (neuron0x347f5d0()*0.024194);
}

double NNfunction_ss_sRsR::synapse0x346f910() {
   return (neuron0x347fe80()*0.162313);
}

double NNfunction_ss_sRsR::synapse0x34702a0() {
   return (neuron0x3480850()*0.015574);
}

double NNfunction_ss_sRsR::synapse0x34702e0() {
   return (neuron0x3481220()*-0.657502);
}

double NNfunction_ss_sRsR::synapse0x34729e0() {
   return (neuron0x345d1a0()*-0.881255);
}

double NNfunction_ss_sRsR::synapse0x3472a20() {
   return (neuron0x345daf0()*-0.337552);
}

double NNfunction_ss_sRsR::synapse0x3467fa0() {
   return (neuron0x345e5d0()*-1.56633);
}

double NNfunction_ss_sRsR::synapse0x3467fe0() {
   return (neuron0x345e070()*-2.86717);
}

double NNfunction_ss_sRsR::synapse0x34755c0() {
   return (neuron0x345f3b0()*-0.000754686);
}

double NNfunction_ss_sRsR::synapse0x3475600() {
   return (neuron0x345fd80()*-0.0462587);
}

double NNfunction_ss_sRsR::synapse0x3475f90() {
   return (neuron0x3460b50()*-0.859155);
}

double NNfunction_ss_sRsR::synapse0x3475fd0() {
   return (neuron0x3461520()*-0.107845);
}

double NNfunction_ss_sRsR::synapse0x3476960() {
   return (neuron0x3461ef0()*-3.34152);
}

double NNfunction_ss_sRsR::synapse0x34769a0() {
   return (neuron0x34629d0()*2.714);
}

double NNfunction_ss_sRsR::synapse0x3477330() {
   return (neuron0x34633a0()*0.649997);
}

double NNfunction_ss_sRsR::synapse0x3477370() {
   return (neuron0x3460480()*0.0110254);
}

double NNfunction_ss_sRsR::synapse0x3477d00() {
   return (neuron0x3464f50()*1.3734);
}

double NNfunction_ss_sRsR::synapse0x3477d40() {
   return (neuron0x3465920()*0.81135);
}

double NNfunction_ss_sRsR::synapse0x34786d0() {
   return (neuron0x34662f0()*-3.2957);
}

double NNfunction_ss_sRsR::synapse0x3478710() {
   return (neuron0x3466cc0()*0.321743);
}

double NNfunction_ss_sRsR::synapse0x34790a0() {
   return (neuron0x3468ad0()*-0.02671);
}

double NNfunction_ss_sRsR::synapse0x34790e0() {
   return (neuron0x3468db0()*-1.4131);
}

double NNfunction_ss_sRsR::synapse0x3479a70() {
   return (neuron0x3469780()*-0.778733);
}

double NNfunction_ss_sRsR::synapse0x3479ab0() {
   return (neuron0x346a150()*-1.68551);
}

double NNfunction_ss_sRsR::synapse0x347a650() {
   return (neuron0x346ab20()*0.613006);
}

double NNfunction_ss_sRsR::synapse0x347a690() {
   return (neuron0x346b4f0()*-3.1723);
}

double NNfunction_ss_sRsR::synapse0x347b020() {
   return (neuron0x3464040()*-0.160971);
}

double NNfunction_ss_sRsR::synapse0x347b060() {
   return (neuron0x3464a10()*0.350554);
}

double NNfunction_ss_sRsR::synapse0x346bea0() {
   return (neuron0x346e280()*-0.634254);
}

double NNfunction_ss_sRsR::synapse0x346bee0() {
   return (neuron0x346ec50()*-0.624555);
}

double NNfunction_ss_sRsR::synapse0x346c870() {
   return (neuron0x346f620()*-1.2481);
}

double NNfunction_ss_sRsR::synapse0x346c8b0() {
   return (neuron0x346fff0()*-1.89101);
}

double NNfunction_ss_sRsR::synapse0x346d240() {
   return (neuron0x34709c0()*2.3775);
}

double NNfunction_ss_sRsR::synapse0x346d280() {
   return (neuron0x3471390()*-0.778423);
}

double NNfunction_ss_sRsR::synapse0x347f760() {
   return (neuron0x3471d60()*-0.569381);
}

double NNfunction_ss_sRsR::synapse0x347f7a0() {
   return (neuron0x3472730()*-0.665759);
}

double NNfunction_ss_sRsR::synapse0x3480130() {
   return (neuron0x34687c0()*-1.28888);
}

double NNfunction_ss_sRsR::synapse0x3480170() {
   return (neuron0x3475310()*-0.204221);
}

double NNfunction_ss_sRsR::synapse0x3480b00() {
   return (neuron0x3475ce0()*-0.500767);
}

double NNfunction_ss_sRsR::synapse0x3480b40() {
   return (neuron0x34766b0()*-1.43674);
}

double NNfunction_ss_sRsR::synapse0x34814d0() {
   return (neuron0x3477080()*1.45173);
}

double NNfunction_ss_sRsR::synapse0x3481510() {
   return (neuron0x3477a50()*-3.38638);
}

double NNfunction_ss_sRsR::synapse0x345d3c0() {
   return (neuron0x3478420()*-0.649155);
}

double NNfunction_ss_sRsR::synapse0x345d400() {
   return (neuron0x3478df0()*-0.169485);
}

double NNfunction_ss_sRsR::synapse0x3470c70() {
   return (neuron0x34797c0()*2.01065);
}

double NNfunction_ss_sRsR::synapse0x3470cb0() {
   return (neuron0x347a3a0()*1.16634);
}

double NNfunction_ss_sRsR::synapse0x3481bf0() {
   return (neuron0x347ad70()*0.512689);
}

double NNfunction_ss_sRsR::synapse0x3481c30() {
   return (neuron0x346bbf0()*-1.2865);
}

double NNfunction_ss_sRsR::synapse0x3481c70() {
   return (neuron0x346c5c0()*-4.08658);
}

double NNfunction_ss_sRsR::synapse0x3481cb0() {
   return (neuron0x346cf90()*-0.699641);
}

double NNfunction_ss_sRsR::synapse0x3488b60() {
   return (neuron0x347f5d0()*-0.953449);
}

double NNfunction_ss_sRsR::synapse0x3488ba0() {
   return (neuron0x347fe80()*-1.74823);
}

double NNfunction_ss_sRsR::synapse0x3488be0() {
   return (neuron0x3480850()*2.03455);
}

double NNfunction_ss_sRsR::synapse0x3488c20() {
   return (neuron0x3481220()*1.17665);
}

double NNfunction_ss_sRsR::synapse0x3488fa0() {
   return (neuron0x345d1a0()*2.52794);
}

double NNfunction_ss_sRsR::synapse0x3488fe0() {
   return (neuron0x345daf0()*0.204283);
}

double NNfunction_ss_sRsR::synapse0x3489020() {
   return (neuron0x345e5d0()*0.481731);
}

double NNfunction_ss_sRsR::synapse0x3489060() {
   return (neuron0x345e070()*-0.150688);
}

double NNfunction_ss_sRsR::synapse0x34890a0() {
   return (neuron0x345f3b0()*2.40761);
}

double NNfunction_ss_sRsR::synapse0x34890e0() {
   return (neuron0x345fd80()*-0.379593);
}

double NNfunction_ss_sRsR::synapse0x3489120() {
   return (neuron0x3460b50()*0.88075);
}

double NNfunction_ss_sRsR::synapse0x3489160() {
   return (neuron0x3461520()*0.324304);
}

double NNfunction_ss_sRsR::synapse0x34891a0() {
   return (neuron0x3461ef0()*0.14379);
}

double NNfunction_ss_sRsR::synapse0x34891e0() {
   return (neuron0x34629d0()*0.096525);
}

double NNfunction_ss_sRsR::synapse0x3489220() {
   return (neuron0x34633a0()*0.439828);
}

double NNfunction_ss_sRsR::synapse0x3489260() {
   return (neuron0x3460480()*1.15838);
}

double NNfunction_ss_sRsR::synapse0x34892a0() {
   return (neuron0x3464f50()*0.00748048);
}

double NNfunction_ss_sRsR::synapse0x34892e0() {
   return (neuron0x3465920()*-1.21409);
}

double NNfunction_ss_sRsR::synapse0x3489320() {
   return (neuron0x34662f0()*-0.111681);
}

double NNfunction_ss_sRsR::synapse0x3489360() {
   return (neuron0x3466cc0()*0.133557);
}

double NNfunction_ss_sRsR::synapse0x3488df0() {
   return (neuron0x3468ad0()*-1.8358);
}

double NNfunction_ss_sRsR::synapse0x3488e30() {
   return (neuron0x3468db0()*1.03354);
}

double NNfunction_ss_sRsR::synapse0x34894b0() {
   return (neuron0x3469780()*0.0652688);
}

double NNfunction_ss_sRsR::synapse0x34894f0() {
   return (neuron0x346a150()*0.991235);
}

double NNfunction_ss_sRsR::synapse0x3489530() {
   return (neuron0x346ab20()*-0.396702);
}

double NNfunction_ss_sRsR::synapse0x3489570() {
   return (neuron0x346b4f0()*-0.16682);
}

double NNfunction_ss_sRsR::synapse0x34895b0() {
   return (neuron0x3464040()*-3.67178);
}

double NNfunction_ss_sRsR::synapse0x34895f0() {
   return (neuron0x3464a10()*-4.44186);
}

double NNfunction_ss_sRsR::synapse0x3489630() {
   return (neuron0x346e280()*-1.23039);
}

double NNfunction_ss_sRsR::synapse0x3489670() {
   return (neuron0x346ec50()*-2.38797);
}

double NNfunction_ss_sRsR::synapse0x34896b0() {
   return (neuron0x346f620()*-1.67917);
}

double NNfunction_ss_sRsR::synapse0x34896f0() {
   return (neuron0x346fff0()*1.40231);
}

double NNfunction_ss_sRsR::synapse0x3489730() {
   return (neuron0x34709c0()*0.159411);
}

double NNfunction_ss_sRsR::synapse0x3489770() {
   return (neuron0x3471390()*-5.7532);
}

double NNfunction_ss_sRsR::synapse0x34897b0() {
   return (neuron0x3471d60()*0.476698);
}

double NNfunction_ss_sRsR::synapse0x34897f0() {
   return (neuron0x3472730()*0.271391);
}

double NNfunction_ss_sRsR::synapse0x34893a0() {
   return (neuron0x34687c0()*-0.188222);
}

double NNfunction_ss_sRsR::synapse0x34893e0() {
   return (neuron0x3475310()*-1.00411);
}

double NNfunction_ss_sRsR::synapse0x3489420() {
   return (neuron0x3475ce0()*-3.29);
}

double NNfunction_ss_sRsR::synapse0x3489460() {
   return (neuron0x34766b0()*-1.08555);
}

double NNfunction_ss_sRsR::synapse0x3489a40() {
   return (neuron0x3477080()*0.255899);
}

double NNfunction_ss_sRsR::synapse0x3489a80() {
   return (neuron0x3477a50()*0.21705);
}

double NNfunction_ss_sRsR::synapse0x3489ac0() {
   return (neuron0x3478420()*-0.337438);
}

double NNfunction_ss_sRsR::synapse0x3489b00() {
   return (neuron0x3478df0()*2.7878);
}

double NNfunction_ss_sRsR::synapse0x3489b40() {
   return (neuron0x34797c0()*0.0110401);
}

double NNfunction_ss_sRsR::synapse0x3489b80() {
   return (neuron0x347a3a0()*-0.284518);
}

double NNfunction_ss_sRsR::synapse0x3489bc0() {
   return (neuron0x347ad70()*-0.523957);
}

double NNfunction_ss_sRsR::synapse0x3489c00() {
   return (neuron0x346bbf0()*0.903904);
}

double NNfunction_ss_sRsR::synapse0x3489c40() {
   return (neuron0x346c5c0()*-0.0222676);
}

double NNfunction_ss_sRsR::synapse0x3489c80() {
   return (neuron0x346cf90()*2.45531);
}

double NNfunction_ss_sRsR::synapse0x3489cc0() {
   return (neuron0x347f5d0()*0.285528);
}

double NNfunction_ss_sRsR::synapse0x3489d00() {
   return (neuron0x347fe80()*2.59262);
}

double NNfunction_ss_sRsR::synapse0x3489d40() {
   return (neuron0x3480850()*0.14861);
}

double NNfunction_ss_sRsR::synapse0x3489d80() {
   return (neuron0x3481220()*2.53718);
}

double NNfunction_ss_sRsR::synapse0x348a100() {
   return (neuron0x345d1a0()*-2.12536);
}

double NNfunction_ss_sRsR::synapse0x348a140() {
   return (neuron0x345daf0()*-1.57252);
}

double NNfunction_ss_sRsR::synapse0x348a180() {
   return (neuron0x345e5d0()*1.4506);
}

double NNfunction_ss_sRsR::synapse0x348a1c0() {
   return (neuron0x345e070()*1.10043);
}

double NNfunction_ss_sRsR::synapse0x348a200() {
   return (neuron0x345f3b0()*-1.06823);
}

double NNfunction_ss_sRsR::synapse0x348a240() {
   return (neuron0x345fd80()*-6.28787);
}

double NNfunction_ss_sRsR::synapse0x348a280() {
   return (neuron0x3460b50()*0.1897);
}

double NNfunction_ss_sRsR::synapse0x348a2c0() {
   return (neuron0x3461520()*-0.921858);
}

double NNfunction_ss_sRsR::synapse0x348a300() {
   return (neuron0x3461ef0()*-0.204744);
}

double NNfunction_ss_sRsR::synapse0x348a340() {
   return (neuron0x34629d0()*-0.477816);
}

double NNfunction_ss_sRsR::synapse0x348a380() {
   return (neuron0x34633a0()*1.15981);
}

double NNfunction_ss_sRsR::synapse0x348a3c0() {
   return (neuron0x3460480()*0.727069);
}

double NNfunction_ss_sRsR::synapse0x348a400() {
   return (neuron0x3464f50()*-0.216277);
}

double NNfunction_ss_sRsR::synapse0x348a440() {
   return (neuron0x3465920()*-1.02055);
}

double NNfunction_ss_sRsR::synapse0x348a480() {
   return (neuron0x34662f0()*0.207107);
}

double NNfunction_ss_sRsR::synapse0x348a4c0() {
   return (neuron0x3466cc0()*-0.977103);
}

double NNfunction_ss_sRsR::synapse0x3489f50() {
   return (neuron0x3468ad0()*-1.01201);
}

double NNfunction_ss_sRsR::synapse0x3489f90() {
   return (neuron0x3468db0()*8.7057);
}

double NNfunction_ss_sRsR::synapse0x348a610() {
   return (neuron0x3469780()*-0.927623);
}

double NNfunction_ss_sRsR::synapse0x348a650() {
   return (neuron0x346a150()*1.54745);
}

double NNfunction_ss_sRsR::synapse0x348a690() {
   return (neuron0x346ab20()*-1.82372);
}

double NNfunction_ss_sRsR::synapse0x348a6d0() {
   return (neuron0x346b4f0()*0.622555);
}

double NNfunction_ss_sRsR::synapse0x348a710() {
   return (neuron0x3464040()*-2.46704);
}

double NNfunction_ss_sRsR::synapse0x348a750() {
   return (neuron0x3464a10()*0.730785);
}

double NNfunction_ss_sRsR::synapse0x348a790() {
   return (neuron0x346e280()*-0.5011);
}

double NNfunction_ss_sRsR::synapse0x348a7d0() {
   return (neuron0x346ec50()*0.44589);
}

double NNfunction_ss_sRsR::synapse0x348a810() {
   return (neuron0x346f620()*0.00147167);
}

double NNfunction_ss_sRsR::synapse0x348a850() {
   return (neuron0x346fff0()*1.30723);
}

double NNfunction_ss_sRsR::synapse0x348a890() {
   return (neuron0x34709c0()*-1.19875);
}

double NNfunction_ss_sRsR::synapse0x348a8d0() {
   return (neuron0x3471390()*-1.95972);
}

double NNfunction_ss_sRsR::synapse0x348a910() {
   return (neuron0x3471d60()*-0.513257);
}

double NNfunction_ss_sRsR::synapse0x348a950() {
   return (neuron0x3472730()*-1.00469);
}

double NNfunction_ss_sRsR::synapse0x348a500() {
   return (neuron0x34687c0()*-1.13951);
}

double NNfunction_ss_sRsR::synapse0x348a540() {
   return (neuron0x3475310()*-1.29595);
}

double NNfunction_ss_sRsR::synapse0x348a580() {
   return (neuron0x3475ce0()*-0.340024);
}

double NNfunction_ss_sRsR::synapse0x348a5c0() {
   return (neuron0x34766b0()*0.499962);
}

double NNfunction_ss_sRsR::synapse0x348aba0() {
   return (neuron0x3477080()*0.327351);
}

double NNfunction_ss_sRsR::synapse0x348abe0() {
   return (neuron0x3477a50()*-0.519664);
}

double NNfunction_ss_sRsR::synapse0x348ac20() {
   return (neuron0x3478420()*-0.16114);
}

double NNfunction_ss_sRsR::synapse0x348ac60() {
   return (neuron0x3478df0()*-0.51696);
}

double NNfunction_ss_sRsR::synapse0x348aca0() {
   return (neuron0x34797c0()*-0.483778);
}

double NNfunction_ss_sRsR::synapse0x348ace0() {
   return (neuron0x347a3a0()*-0.692141);
}

double NNfunction_ss_sRsR::synapse0x348ad20() {
   return (neuron0x347ad70()*-0.926489);
}

double NNfunction_ss_sRsR::synapse0x348ad60() {
   return (neuron0x346bbf0()*-0.445309);
}

double NNfunction_ss_sRsR::synapse0x348ada0() {
   return (neuron0x346c5c0()*0.15125);
}

double NNfunction_ss_sRsR::synapse0x348ade0() {
   return (neuron0x346cf90()*-1.02251);
}

double NNfunction_ss_sRsR::synapse0x348ae20() {
   return (neuron0x347f5d0()*-0.850084);
}

double NNfunction_ss_sRsR::synapse0x348ae60() {
   return (neuron0x347fe80()*-1.98529);
}

double NNfunction_ss_sRsR::synapse0x348aea0() {
   return (neuron0x3480850()*-0.0339429);
}

double NNfunction_ss_sRsR::synapse0x348aee0() {
   return (neuron0x3481220()*4.1484);
}

double NNfunction_ss_sRsR::synapse0x348b260() {
   return (neuron0x345d1a0()*0.2186);
}

double NNfunction_ss_sRsR::synapse0x348b2a0() {
   return (neuron0x345daf0()*-0.0062969);
}

double NNfunction_ss_sRsR::synapse0x348b2e0() {
   return (neuron0x345e5d0()*0.0690877);
}

double NNfunction_ss_sRsR::synapse0x348b320() {
   return (neuron0x345e070()*0.000593868);
}

double NNfunction_ss_sRsR::synapse0x348b360() {
   return (neuron0x345f3b0()*0.357909);
}

double NNfunction_ss_sRsR::synapse0x348b3a0() {
   return (neuron0x345fd80()*-0.545663);
}

double NNfunction_ss_sRsR::synapse0x348b3e0() {
   return (neuron0x3460b50()*-0.0224121);
}

double NNfunction_ss_sRsR::synapse0x348b420() {
   return (neuron0x3461520()*-0.0129393);
}

double NNfunction_ss_sRsR::synapse0x348b460() {
   return (neuron0x3461ef0()*0.00161846);
}

double NNfunction_ss_sRsR::synapse0x348b4a0() {
   return (neuron0x34629d0()*0.00590269);
}

double NNfunction_ss_sRsR::synapse0x348b4e0() {
   return (neuron0x34633a0()*0.097898);
}

double NNfunction_ss_sRsR::synapse0x348b520() {
   return (neuron0x3460480()*-1.83892);
}

double NNfunction_ss_sRsR::synapse0x348b560() {
   return (neuron0x3464f50()*-0.00231082);
}

double NNfunction_ss_sRsR::synapse0x348b5a0() {
   return (neuron0x3465920()*-0.10111);
}

double NNfunction_ss_sRsR::synapse0x348b5e0() {
   return (neuron0x34662f0()*-0.00589327);
}

double NNfunction_ss_sRsR::synapse0x348b620() {
   return (neuron0x3466cc0()*0.000215036);
}

double NNfunction_ss_sRsR::synapse0x348b0b0() {
   return (neuron0x3468ad0()*-0.17992);
}

double NNfunction_ss_sRsR::synapse0x348b0f0() {
   return (neuron0x3468db0()*0.357953);
}

double NNfunction_ss_sRsR::synapse0x348b770() {
   return (neuron0x3469780()*0.00567276);
}

double NNfunction_ss_sRsR::synapse0x348b7b0() {
   return (neuron0x346a150()*0.0804028);
}

double NNfunction_ss_sRsR::synapse0x348b7f0() {
   return (neuron0x346ab20()*-0.0411332);
}

double NNfunction_ss_sRsR::synapse0x348b830() {
   return (neuron0x346b4f0()*0.00732808);
}

double NNfunction_ss_sRsR::synapse0x348b870() {
   return (neuron0x3464040()*1.42933);
}

double NNfunction_ss_sRsR::synapse0x348b8b0() {
   return (neuron0x3464a10()*-0.268728);
}

double NNfunction_ss_sRsR::synapse0x348b8f0() {
   return (neuron0x346e280()*-0.042744);
}

double NNfunction_ss_sRsR::synapse0x348b930() {
   return (neuron0x346ec50()*-1.40185);
}

double NNfunction_ss_sRsR::synapse0x348b970() {
   return (neuron0x346f620()*1.06476);
}

double NNfunction_ss_sRsR::synapse0x348b9b0() {
   return (neuron0x346fff0()*0.148862);
}

double NNfunction_ss_sRsR::synapse0x348b9f0() {
   return (neuron0x34709c0()*-0.0165179);
}

double NNfunction_ss_sRsR::synapse0x348ba30() {
   return (neuron0x3471390()*-0.368425);
}

double NNfunction_ss_sRsR::synapse0x348ba70() {
   return (neuron0x3471d60()*0.0136206);
}

double NNfunction_ss_sRsR::synapse0x348bab0() {
   return (neuron0x3472730()*-0.0149708);
}

double NNfunction_ss_sRsR::synapse0x348b660() {
   return (neuron0x34687c0()*-0.0286968);
}

double NNfunction_ss_sRsR::synapse0x348b6a0() {
   return (neuron0x3475310()*-0.193921);
}

double NNfunction_ss_sRsR::synapse0x348b6e0() {
   return (neuron0x3475ce0()*-0.123673);
}

double NNfunction_ss_sRsR::synapse0x348b720() {
   return (neuron0x34766b0()*-0.0810352);
}

double NNfunction_ss_sRsR::synapse0x348bd00() {
   return (neuron0x3477080()*-0.0234563);
}

double NNfunction_ss_sRsR::synapse0x348bd40() {
   return (neuron0x3477a50()*-0.00731608);
}

double NNfunction_ss_sRsR::synapse0x348bd80() {
   return (neuron0x3478420()*-2.7962);
}

double NNfunction_ss_sRsR::synapse0x348bdc0() {
   return (neuron0x3478df0()*0.157805);
}

double NNfunction_ss_sRsR::synapse0x348be00() {
   return (neuron0x34797c0()*0.0118651);
}

double NNfunction_ss_sRsR::synapse0x348be40() {
   return (neuron0x347a3a0()*-0.0521522);
}

double NNfunction_ss_sRsR::synapse0x348be80() {
   return (neuron0x347ad70()*-0.0687751);
}

double NNfunction_ss_sRsR::synapse0x348bec0() {
   return (neuron0x346bbf0()*3.17804);
}

double NNfunction_ss_sRsR::synapse0x348bf00() {
   return (neuron0x346c5c0()*0.0133614);
}

double NNfunction_ss_sRsR::synapse0x348bf40() {
   return (neuron0x346cf90()*-3.96683);
}

double NNfunction_ss_sRsR::synapse0x348bf80() {
   return (neuron0x347f5d0()*-0.0184379);
}

double NNfunction_ss_sRsR::synapse0x348bfc0() {
   return (neuron0x347fe80()*-0.100598);
}

double NNfunction_ss_sRsR::synapse0x348c000() {
   return (neuron0x3480850()*-0.0132841);
}

double NNfunction_ss_sRsR::synapse0x348c040() {
   return (neuron0x3481220()*0.366903);
}

double NNfunction_ss_sRsR::synapse0x348c2a0() {
   return (neuron0x3488420()*-4.77602);
}

double NNfunction_ss_sRsR::synapse0x348c2e0() {
   return (neuron0x34887c0()*-4.63592);
}

double NNfunction_ss_sRsR::synapse0x348c320() {
   return (neuron0x3488c60()*9.33033);
}

double NNfunction_ss_sRsR::synapse0x348c360() {
   return (neuron0x3489dc0()*9.53868);
}

double NNfunction_ss_sRsR::synapse0x348c3a0() {
   return (neuron0x348af20()*-6.79608);
}

