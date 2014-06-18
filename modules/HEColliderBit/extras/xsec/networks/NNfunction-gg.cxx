#include "NNfunction-gg.h"
#include <cmath>

double NNfunction-gg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5203)/15.1512;
   input1 = (in1 - 63.3371)/881.572;
   input2 = (in2 - 488.492)/537.467;
   input3 = (in3 - 312.536)/854.586;
   input4 = (in4 - 1141.91)/955.445;
   input5 = (in5 - 1102.43)/1003.55;
   input6 = (in6 - 1104.86)/996.949;
   input7 = (in7 - 1090.96)/964.834;
   input8 = (in8 - 1100.82)/1005.05;
   input9 = (in9 - 1091.46)/996.54;
   input10 = (in10 - 1077.58)/952.839;
   input11 = (in11 - 1071.32)/966.513;
   input12 = (in12 - 1092.08)/1020.27;
   input13 = (in13 - 828.813)/774.635;
   input14 = (in14 - 1086.15)/984.913;
   input15 = (in15 - 1091.69)/995.503;
   input16 = (in16 - 725.74)/672.495;
   input17 = (in17 - 1096.45)/1000.46;
   input18 = (in18 - 1101.12)/1025.3;
   input19 = (in19 - 1082.52)/965.637;
   input20 = (in20 - -213.395)/689.579;
   input21 = (in21 - -339.632)/1214.46;
   input22 = (in22 - -72.0045)/1255.04;
   input23 = (in23 - -12.9826)/656.177;
   switch(index) {
     case 0:
         return neuron0x3495a60();
     default:
         return 0.;
   }
}

double NNfunction-gg::Value(int index, double* input) {
   input0 = (input[0] - 23.5203)/15.1512;
   input1 = (input[1] - 63.3371)/881.572;
   input2 = (input[2] - 488.492)/537.467;
   input3 = (input[3] - 312.536)/854.586;
   input4 = (input[4] - 1141.91)/955.445;
   input5 = (input[5] - 1102.43)/1003.55;
   input6 = (input[6] - 1104.86)/996.949;
   input7 = (input[7] - 1090.96)/964.834;
   input8 = (input[8] - 1100.82)/1005.05;
   input9 = (input[9] - 1091.46)/996.54;
   input10 = (input[10] - 1077.58)/952.839;
   input11 = (input[11] - 1071.32)/966.513;
   input12 = (input[12] - 1092.08)/1020.27;
   input13 = (input[13] - 828.813)/774.635;
   input14 = (input[14] - 1086.15)/984.913;
   input15 = (input[15] - 1091.69)/995.503;
   input16 = (input[16] - 725.74)/672.495;
   input17 = (input[17] - 1096.45)/1000.46;
   input18 = (input[18] - 1101.12)/1025.3;
   input19 = (input[19] - 1082.52)/965.637;
   input20 = (input[20] - -213.395)/689.579;
   input21 = (input[21] - -339.632)/1214.46;
   input22 = (input[22] - -72.0045)/1255.04;
   input23 = (input[23] - -12.9826)/656.177;
   switch(index) {
     case 0:
         return neuron0x3495a60();
     default:
         return 0.;
   }
}

double NNfunction-gg::neuron0x3460ad0() {
   return input0;
}

double NNfunction-gg::neuron0x3460d80() {
   return input1;
}

double NNfunction-gg::neuron0x34610c0() {
   return input2;
}

double NNfunction-gg::neuron0x3461400() {
   return input3;
}

double NNfunction-gg::neuron0x3461740() {
   return input4;
}

double NNfunction-gg::neuron0x3461a80() {
   return input5;
}

double NNfunction-gg::neuron0x3461dc0() {
   return input6;
}

double NNfunction-gg::neuron0x3462100() {
   return input7;
}

double NNfunction-gg::neuron0x3462440() {
   return input8;
}

double NNfunction-gg::neuron0x3462780() {
   return input9;
}

double NNfunction-gg::neuron0x3462ac0() {
   return input10;
}

double NNfunction-gg::neuron0x3462e00() {
   return input11;
}

double NNfunction-gg::neuron0x3463140() {
   return input12;
}

double NNfunction-gg::neuron0x3463480() {
   return input13;
}

double NNfunction-gg::neuron0x34637c0() {
   return input14;
}

double NNfunction-gg::neuron0x3463b00() {
   return input15;
}

double NNfunction-gg::neuron0x3463e40() {
   return input16;
}

double NNfunction-gg::neuron0x34643a0() {
   return input17;
}

double NNfunction-gg::neuron0x3464650() {
   return input18;
}

double NNfunction-gg::neuron0x3464990() {
   return input19;
}

double NNfunction-gg::neuron0x3464cd0() {
   return input20;
}

double NNfunction-gg::neuron0x3465010() {
   return input21;
}

double NNfunction-gg::neuron0x3465350() {
   return input22;
}

double NNfunction-gg::neuron0x3465690() {
   return input23;
}

double NNfunction-gg::input0x3465b00() {
   double input = 5.03177;
   input += synapse0x3465e40();
   input += synapse0x3465e80();
   input += synapse0x3465ec0();
   input += synapse0x3465f00();
   input += synapse0x3465f40();
   input += synapse0x3465f80();
   input += synapse0x3465fc0();
   input += synapse0x3466000();
   input += synapse0x3466040();
   input += synapse0x3466080();
   input += synapse0x34660c0();
   input += synapse0x3466100();
   input += synapse0x3466140();
   input += synapse0x3466180();
   input += synapse0x34661c0();
   input += synapse0x3466200();
   input += synapse0x3465c90();
   input += synapse0x3465cd0();
   input += synapse0x321d350();
   input += synapse0x321d390();
   input += synapse0x2c384b0();
   input += synapse0x2c384f0();
   input += synapse0x3466350();
   input += synapse0x3466390();
   return input;
}

double NNfunction-gg::neuron0x3465b00() {
   double input = input0x3465b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34663d0() {
   double input = 0.390384;
   input += synapse0x3466710();
   input += synapse0x3466750();
   input += synapse0x3466790();
   input += synapse0x34667d0();
   input += synapse0x3466810();
   input += synapse0x3466850();
   input += synapse0x3466890();
   input += synapse0x34668d0();
   input += synapse0x3466910();
   input += synapse0x3466240();
   input += synapse0x3466280();
   input += synapse0x34662c0();
   input += synapse0x3466300();
   input += synapse0x3466b60();
   input += synapse0x3466ba0();
   input += synapse0x3466be0();
   input += synapse0x3466560();
   input += synapse0x34665a0();
   input += synapse0x3466d30();
   input += synapse0x3466d70();
   input += synapse0x3466db0();
   input += synapse0x3466df0();
   input += synapse0x3466e30();
   input += synapse0x3466e70();
   return input;
}

double NNfunction-gg::neuron0x34663d0() {
   double input = input0x34663d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3466eb0() {
   double input = 0.213022;
   input += synapse0x34671f0();
   input += synapse0x3467230();
   input += synapse0x3467270();
   input += synapse0x34672b0();
   input += synapse0x34672f0();
   input += synapse0x3467330();
   input += synapse0x3467370();
   input += synapse0x34673b0();
   input += synapse0x34673f0();
   input += synapse0x3467430();
   input += synapse0x3467470();
   input += synapse0x34674b0();
   input += synapse0x34674f0();
   input += synapse0x3467530();
   input += synapse0x3467570();
   input += synapse0x34675b0();
   input += synapse0x3467040();
   input += synapse0x3467080();
   input += synapse0x1e38180();
   input += synapse0x322abd0();
   input += synapse0x322ac10();
   input += synapse0x34694e0();
   input += synapse0x3469520();
   input += synapse0x3460810();
   return input;
}

double NNfunction-gg::neuron0x3466eb0() {
   double input = input0x3466eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3466950() {
   double input = 0.172003;
   input += synapse0x34608e0();
   input += synapse0x322b450();
   input += synapse0x3466ae0();
   input += synapse0x3466b20();
   input += synapse0x3467700();
   input += synapse0x3467740();
   input += synapse0x3467780();
   input += synapse0x34677c0();
   input += synapse0x3467800();
   input += synapse0x3467840();
   input += synapse0x3467880();
   input += synapse0x34678c0();
   input += synapse0x3467900();
   input += synapse0x3467940();
   input += synapse0x3467980();
   input += synapse0x34679c0();
   input += synapse0x3460850();
   input += synapse0x3460890();
   input += synapse0x3467b10();
   input += synapse0x3467b50();
   input += synapse0x3467b90();
   input += synapse0x3467bd0();
   input += synapse0x3467c10();
   input += synapse0x3467c50();
   return input;
}

double NNfunction-gg::neuron0x3466950() {
   double input = input0x3466950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3467c90() {
   double input = 0.0619656;
   input += synapse0x3467fd0();
   input += synapse0x3468010();
   input += synapse0x3468050();
   input += synapse0x3468090();
   input += synapse0x34680d0();
   input += synapse0x3468110();
   input += synapse0x3468150();
   input += synapse0x3468190();
   input += synapse0x34681d0();
   input += synapse0x3468210();
   input += synapse0x3468250();
   input += synapse0x3468290();
   input += synapse0x34682d0();
   input += synapse0x3468310();
   input += synapse0x3468350();
   input += synapse0x3468390();
   input += synapse0x34684e0();
   input += synapse0x3467e20();
   input += synapse0x3467e60();
   input += synapse0x3469620();
   input += synapse0x3469660();
   input += synapse0x34696a0();
   input += synapse0x34696e0();
   input += synapse0x3469720();
   return input;
}

double NNfunction-gg::neuron0x3467c90() {
   double input = input0x3467c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3469760() {
   double input = 1.01772;
   input += synapse0x3469aa0();
   input += synapse0x3469ae0();
   input += synapse0x3469b20();
   input += synapse0x3469b60();
   input += synapse0x3469ba0();
   input += synapse0x3469be0();
   input += synapse0x3469c20();
   input += synapse0x3469c60();
   input += synapse0x3469ca0();
   input += synapse0x322af20();
   input += synapse0x322af60();
   input += synapse0x322afa0();
   input += synapse0x322afe0();
   input += synapse0x322b020();
   input += synapse0x322b060();
   input += synapse0x322b0a0();
   input += synapse0x34698f0();
   input += synapse0x3469930();
   input += synapse0x322b1f0();
   input += synapse0x322b230();
   input += synapse0x322b270();
   input += synapse0x322b2b0();
   input += synapse0x322b2f0();
   input += synapse0x346a4f0();
   return input;
}

double NNfunction-gg::neuron0x3469760() {
   double input = input0x3469760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346a530() {
   double input = 1.34881;
   input += synapse0x346a870();
   input += synapse0x346a8b0();
   input += synapse0x346a8f0();
   input += synapse0x346a930();
   input += synapse0x346a970();
   input += synapse0x346a9b0();
   input += synapse0x346a9f0();
   input += synapse0x346aa30();
   input += synapse0x346aa70();
   input += synapse0x346aab0();
   input += synapse0x346aaf0();
   input += synapse0x346ab30();
   input += synapse0x346ab70();
   input += synapse0x346abb0();
   input += synapse0x346abf0();
   input += synapse0x346ac30();
   input += synapse0x346a6c0();
   input += synapse0x346a700();
   input += synapse0x346ad80();
   input += synapse0x346adc0();
   input += synapse0x346ae00();
   input += synapse0x346ae40();
   input += synapse0x346ae80();
   input += synapse0x346aec0();
   return input;
}

double NNfunction-gg::neuron0x346a530() {
   double input = input0x346a530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346af00() {
   double input = -1.83038;
   input += synapse0x346b240();
   input += synapse0x346b280();
   input += synapse0x346b2c0();
   input += synapse0x346b300();
   input += synapse0x346b340();
   input += synapse0x346b380();
   input += synapse0x346b3c0();
   input += synapse0x346b400();
   input += synapse0x346b440();
   input += synapse0x346b480();
   input += synapse0x346b4c0();
   input += synapse0x346b500();
   input += synapse0x346b540();
   input += synapse0x346b580();
   input += synapse0x346b5c0();
   input += synapse0x346b600();
   input += synapse0x346b090();
   input += synapse0x346b0d0();
   input += synapse0x346b750();
   input += synapse0x346b790();
   input += synapse0x346b7d0();
   input += synapse0x346b810();
   input += synapse0x346b850();
   input += synapse0x346b890();
   return input;
}

double NNfunction-gg::neuron0x346af00() {
   double input = input0x346af00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346b8d0() {
   double input = 2.14321;
   input += synapse0x3464290();
   input += synapse0x34642d0();
   input += synapse0x3464310();
   input += synapse0x3464350();
   input += synapse0x346be20();
   input += synapse0x346be60();
   input += synapse0x346bea0();
   input += synapse0x346bee0();
   input += synapse0x346bf20();
   input += synapse0x346bf60();
   input += synapse0x346bfa0();
   input += synapse0x346bfe0();
   input += synapse0x346c020();
   input += synapse0x346c060();
   input += synapse0x346c0a0();
   input += synapse0x346c0e0();
   input += synapse0x346ba60();
   input += synapse0x346baa0();
   input += synapse0x346c230();
   input += synapse0x346c270();
   input += synapse0x346c2b0();
   input += synapse0x346c2f0();
   input += synapse0x346c330();
   input += synapse0x346c370();
   return input;
}

double NNfunction-gg::neuron0x346b8d0() {
   double input = input0x346b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346c3b0() {
   double input = 0.446049;
   input += synapse0x346c6f0();
   input += synapse0x346c730();
   input += synapse0x346c770();
   input += synapse0x346c7b0();
   input += synapse0x346c7f0();
   input += synapse0x346c830();
   input += synapse0x346c870();
   input += synapse0x346c8b0();
   input += synapse0x346c8f0();
   input += synapse0x346c930();
   input += synapse0x346c970();
   input += synapse0x346c9b0();
   input += synapse0x346c9f0();
   input += synapse0x346ca30();
   input += synapse0x346ca70();
   input += synapse0x346cab0();
   input += synapse0x346c540();
   input += synapse0x346c580();
   input += synapse0x346cc00();
   input += synapse0x346cc40();
   input += synapse0x346cc80();
   input += synapse0x346ccc0();
   input += synapse0x346cd00();
   input += synapse0x346cd40();
   return input;
}

double NNfunction-gg::neuron0x346c3b0() {
   double input = input0x346c3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346cd80() {
   double input = 3.00763;
   input += synapse0x346d0c0();
   input += synapse0x346d100();
   input += synapse0x346d140();
   input += synapse0x346d180();
   input += synapse0x346d1c0();
   input += synapse0x346d200();
   input += synapse0x346d240();
   input += synapse0x346d280();
   input += synapse0x346d2c0();
   input += synapse0x346d300();
   input += synapse0x346d340();
   input += synapse0x346d380();
   input += synapse0x346d3c0();
   input += synapse0x346d400();
   input += synapse0x346d440();
   input += synapse0x346d480();
   input += synapse0x346cf10();
   input += synapse0x346cf50();
   input += synapse0x3469ce0();
   input += synapse0x3469d20();
   input += synapse0x3469d60();
   input += synapse0x3469da0();
   input += synapse0x3469de0();
   input += synapse0x3469e20();
   return input;
}

double NNfunction-gg::neuron0x346cd80() {
   double input = input0x346cd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3469e60() {
   double input = -1.75471;
   input += synapse0x346a1a0();
   input += synapse0x346a1e0();
   input += synapse0x346a220();
   input += synapse0x346a260();
   input += synapse0x346a2a0();
   input += synapse0x346a2e0();
   input += synapse0x346a320();
   input += synapse0x346a360();
   input += synapse0x346a3a0();
   input += synapse0x346a3e0();
   input += synapse0x346a420();
   input += synapse0x346a460();
   input += synapse0x346a4a0();
   input += synapse0x346e5e0();
   input += synapse0x346e620();
   input += synapse0x346e660();
   input += synapse0x3469ff0();
   input += synapse0x346a030();
   input += synapse0x346e7b0();
   input += synapse0x346e7f0();
   input += synapse0x346e830();
   input += synapse0x346e870();
   input += synapse0x346e8b0();
   input += synapse0x346e8f0();
   return input;
}

double NNfunction-gg::neuron0x3469e60() {
   double input = input0x3469e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346e930() {
   double input = 0.162469;
   input += synapse0x346ec70();
   input += synapse0x346ecb0();
   input += synapse0x346ecf0();
   input += synapse0x346ed30();
   input += synapse0x346ed70();
   input += synapse0x346edb0();
   input += synapse0x346edf0();
   input += synapse0x346ee30();
   input += synapse0x346ee70();
   input += synapse0x346eeb0();
   input += synapse0x346eef0();
   input += synapse0x346ef30();
   input += synapse0x346ef70();
   input += synapse0x346efb0();
   input += synapse0x346eff0();
   input += synapse0x346f030();
   input += synapse0x346eac0();
   input += synapse0x346eb00();
   input += synapse0x346f180();
   input += synapse0x346f1c0();
   input += synapse0x346f200();
   input += synapse0x346f240();
   input += synapse0x346f280();
   input += synapse0x346f2c0();
   return input;
}

double NNfunction-gg::neuron0x346e930() {
   double input = input0x346e930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346f300() {
   double input = -0.642406;
   input += synapse0x346f640();
   input += synapse0x346f680();
   input += synapse0x346f6c0();
   input += synapse0x346f700();
   input += synapse0x346f740();
   input += synapse0x346f780();
   input += synapse0x346f7c0();
   input += synapse0x346f800();
   input += synapse0x346f840();
   input += synapse0x346f880();
   input += synapse0x346f8c0();
   input += synapse0x346f900();
   input += synapse0x346f940();
   input += synapse0x346f980();
   input += synapse0x346f9c0();
   input += synapse0x346fa00();
   input += synapse0x346f490();
   input += synapse0x346f4d0();
   input += synapse0x346fb50();
   input += synapse0x346fb90();
   input += synapse0x346fbd0();
   input += synapse0x346fc10();
   input += synapse0x346fc50();
   input += synapse0x346fc90();
   return input;
}

double NNfunction-gg::neuron0x346f300() {
   double input = input0x346f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346fcd0() {
   double input = -0.208056;
   input += synapse0x3470010();
   input += synapse0x3470050();
   input += synapse0x3470090();
   input += synapse0x34700d0();
   input += synapse0x3470110();
   input += synapse0x3470150();
   input += synapse0x3470190();
   input += synapse0x34701d0();
   input += synapse0x3470210();
   input += synapse0x3470250();
   input += synapse0x3470290();
   input += synapse0x34702d0();
   input += synapse0x3470310();
   input += synapse0x3470350();
   input += synapse0x3470390();
   input += synapse0x34703d0();
   input += synapse0x346fe60();
   input += synapse0x346fea0();
   input += synapse0x3470520();
   input += synapse0x3470560();
   input += synapse0x34705a0();
   input += synapse0x34705e0();
   input += synapse0x3470620();
   input += synapse0x3470660();
   return input;
}

double NNfunction-gg::neuron0x346fcd0() {
   double input = input0x346fcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34706a0() {
   double input = 0.768234;
   input += synapse0x34709e0();
   input += synapse0x3460c60();
   input += synapse0x3460ca0();
   input += synapse0x3460fa0();
   input += synapse0x3460fe0();
   input += synapse0x34612e0();
   input += synapse0x3461320();
   input += synapse0x3461620();
   input += synapse0x3461660();
   input += synapse0x3461960();
   input += synapse0x34619a0();
   input += synapse0x3461ca0();
   input += synapse0x3461ce0();
   input += synapse0x3461fe0();
   input += synapse0x3462020();
   input += synapse0x3462320();
   input += synapse0x3462360();
   input += synapse0x3462660();
   input += synapse0x34626a0();
   input += synapse0x34629a0();
   input += synapse0x34629e0();
   input += synapse0x3462ce0();
   input += synapse0x3462d20();
   input += synapse0x3463020();
   return input;
}

double NNfunction-gg::neuron0x34706a0() {
   double input = input0x34706a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34724b0() {
   double input = -0.609869;
   input += synapse0x3463060();
   input += synapse0x3463d20();
   input += synapse0x3463d60();
   input += synapse0x3470830();
   input += synapse0x3470870();
   input += synapse0x3464060();
   input += synapse0x34640a0();
   input += synapse0x3464530();
   input += synapse0x3464570();
   input += synapse0x3464870();
   input += synapse0x34648b0();
   input += synapse0x3464bb0();
   input += synapse0x3464bf0();
   input += synapse0x3464ef0();
   input += synapse0x3464f30();
   input += synapse0x3465230();
   input += synapse0x3465270();
   input += synapse0x3465570();
   input += synapse0x34655b0();
   input += synapse0x34658b0();
   input += synapse0x34658f0();
   input += synapse0x3463360();
   input += synapse0x34633a0();
   input += synapse0x3472750();
   return input;
}

double NNfunction-gg::neuron0x34724b0() {
   double input = input0x34724b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3472790() {
   double input = 0.153487;
   input += synapse0x3472ad0();
   input += synapse0x3472b10();
   input += synapse0x3472b50();
   input += synapse0x3472b90();
   input += synapse0x3472bd0();
   input += synapse0x3472c10();
   input += synapse0x3472c50();
   input += synapse0x3472c90();
   input += synapse0x3472cd0();
   input += synapse0x3472d10();
   input += synapse0x3472d50();
   input += synapse0x3472d90();
   input += synapse0x3472dd0();
   input += synapse0x3472e10();
   input += synapse0x3472e50();
   input += synapse0x3472e90();
   input += synapse0x3472920();
   input += synapse0x3472960();
   input += synapse0x3472fe0();
   input += synapse0x3473020();
   input += synapse0x3473060();
   input += synapse0x34730a0();
   input += synapse0x34730e0();
   input += synapse0x3473120();
   return input;
}

double NNfunction-gg::neuron0x3472790() {
   double input = input0x3472790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3473160() {
   double input = 0.0335954;
   input += synapse0x34734a0();
   input += synapse0x34734e0();
   input += synapse0x3473520();
   input += synapse0x3473560();
   input += synapse0x34735a0();
   input += synapse0x34735e0();
   input += synapse0x3473620();
   input += synapse0x3473660();
   input += synapse0x34736a0();
   input += synapse0x34736e0();
   input += synapse0x3473720();
   input += synapse0x3473760();
   input += synapse0x34737a0();
   input += synapse0x34737e0();
   input += synapse0x3473820();
   input += synapse0x3473860();
   input += synapse0x34732f0();
   input += synapse0x3473330();
   input += synapse0x34739b0();
   input += synapse0x34739f0();
   input += synapse0x3473a30();
   input += synapse0x3473a70();
   input += synapse0x3473ab0();
   input += synapse0x3473af0();
   return input;
}

double NNfunction-gg::neuron0x3473160() {
   double input = input0x3473160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3473b30() {
   double input = 0.895628;
   input += synapse0x3473e70();
   input += synapse0x3473eb0();
   input += synapse0x3473ef0();
   input += synapse0x3473f30();
   input += synapse0x3473f70();
   input += synapse0x3473fb0();
   input += synapse0x3473ff0();
   input += synapse0x3474030();
   input += synapse0x3474070();
   input += synapse0x34740b0();
   input += synapse0x34740f0();
   input += synapse0x3474130();
   input += synapse0x3474170();
   input += synapse0x34741b0();
   input += synapse0x34741f0();
   input += synapse0x3474230();
   input += synapse0x3473cc0();
   input += synapse0x3473d00();
   input += synapse0x3474380();
   input += synapse0x34743c0();
   input += synapse0x3474400();
   input += synapse0x3474440();
   input += synapse0x3474480();
   input += synapse0x34744c0();
   return input;
}

double NNfunction-gg::neuron0x3473b30() {
   double input = input0x3473b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3474500() {
   double input = -0.679457;
   input += synapse0x3474840();
   input += synapse0x3474880();
   input += synapse0x34748c0();
   input += synapse0x3474900();
   input += synapse0x3474940();
   input += synapse0x3474980();
   input += synapse0x34749c0();
   input += synapse0x3474a00();
   input += synapse0x3474a40();
   input += synapse0x3474a80();
   input += synapse0x3474ac0();
   input += synapse0x3474b00();
   input += synapse0x3474b40();
   input += synapse0x3474b80();
   input += synapse0x3474bc0();
   input += synapse0x3474c00();
   input += synapse0x3474690();
   input += synapse0x34746d0();
   input += synapse0x3474d50();
   input += synapse0x3474d90();
   input += synapse0x3474dd0();
   input += synapse0x3474e10();
   input += synapse0x3474e50();
   input += synapse0x3474e90();
   return input;
}

double NNfunction-gg::neuron0x3474500() {
   double input = input0x3474500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3474ed0() {
   double input = -0.113736;
   input += synapse0x3475210();
   input += synapse0x3475250();
   input += synapse0x3475290();
   input += synapse0x34752d0();
   input += synapse0x3475310();
   input += synapse0x3475350();
   input += synapse0x3475390();
   input += synapse0x34753d0();
   input += synapse0x3475410();
   input += synapse0x346d5d0();
   input += synapse0x346d610();
   input += synapse0x346d650();
   input += synapse0x346d690();
   input += synapse0x346d6d0();
   input += synapse0x346d710();
   input += synapse0x346d750();
   input += synapse0x3475060();
   input += synapse0x34750a0();
   input += synapse0x346d8a0();
   input += synapse0x346d8e0();
   input += synapse0x346d920();
   input += synapse0x346d960();
   input += synapse0x346d9a0();
   input += synapse0x346d9e0();
   return input;
}

double NNfunction-gg::neuron0x3474ed0() {
   double input = input0x3474ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346da20() {
   double input = -1.43778;
   input += synapse0x346dd60();
   input += synapse0x346dda0();
   input += synapse0x346dde0();
   input += synapse0x346de20();
   input += synapse0x346de60();
   input += synapse0x346dea0();
   input += synapse0x346dee0();
   input += synapse0x346df20();
   input += synapse0x346df60();
   input += synapse0x346dfa0();
   input += synapse0x346dfe0();
   input += synapse0x346e020();
   input += synapse0x346e060();
   input += synapse0x346e0a0();
   input += synapse0x346e0e0();
   input += synapse0x346e120();
   input += synapse0x346dbb0();
   input += synapse0x346dbf0();
   input += synapse0x346e270();
   input += synapse0x346e2b0();
   input += synapse0x346e2f0();
   input += synapse0x346e330();
   input += synapse0x346e370();
   input += synapse0x346e3b0();
   return input;
}

double NNfunction-gg::neuron0x346da20() {
   double input = input0x346da20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x346e3f0() {
   double input = 0.210088;
   input += synapse0x346e580();
   input += synapse0x3477610();
   input += synapse0x3477650();
   input += synapse0x3477690();
   input += synapse0x34776d0();
   input += synapse0x3477710();
   input += synapse0x3477750();
   input += synapse0x3477790();
   input += synapse0x34777d0();
   input += synapse0x3477810();
   input += synapse0x3477850();
   input += synapse0x3477890();
   input += synapse0x34778d0();
   input += synapse0x3477910();
   input += synapse0x3477950();
   input += synapse0x3477990();
   input += synapse0x3477460();
   input += synapse0x34774a0();
   input += synapse0x3477ae0();
   input += synapse0x3477b20();
   input += synapse0x3477b60();
   input += synapse0x3477ba0();
   input += synapse0x3477be0();
   input += synapse0x3477c20();
   return input;
}

double NNfunction-gg::neuron0x346e3f0() {
   double input = input0x346e3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3477c60() {
   double input = -2.0536;
   input += synapse0x3477fa0();
   input += synapse0x3477fe0();
   input += synapse0x3478020();
   input += synapse0x3478060();
   input += synapse0x34780a0();
   input += synapse0x34780e0();
   input += synapse0x3478120();
   input += synapse0x3478160();
   input += synapse0x34781a0();
   input += synapse0x34781e0();
   input += synapse0x3478220();
   input += synapse0x3478260();
   input += synapse0x34782a0();
   input += synapse0x34782e0();
   input += synapse0x3478320();
   input += synapse0x3478360();
   input += synapse0x3477df0();
   input += synapse0x3477e30();
   input += synapse0x34784b0();
   input += synapse0x34784f0();
   input += synapse0x3478530();
   input += synapse0x3478570();
   input += synapse0x34785b0();
   input += synapse0x34785f0();
   return input;
}

double NNfunction-gg::neuron0x3477c60() {
   double input = input0x3477c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3478630() {
   double input = 1.41633;
   input += synapse0x3478970();
   input += synapse0x34789b0();
   input += synapse0x34789f0();
   input += synapse0x3478a30();
   input += synapse0x3478a70();
   input += synapse0x3478ab0();
   input += synapse0x3478af0();
   input += synapse0x3478b30();
   input += synapse0x3478b70();
   input += synapse0x3478bb0();
   input += synapse0x3478bf0();
   input += synapse0x3478c30();
   input += synapse0x3478c70();
   input += synapse0x3478cb0();
   input += synapse0x3478cf0();
   input += synapse0x3478d30();
   input += synapse0x34787c0();
   input += synapse0x3478800();
   input += synapse0x3478e80();
   input += synapse0x3478ec0();
   input += synapse0x3478f00();
   input += synapse0x3478f40();
   input += synapse0x3478f80();
   input += synapse0x3478fc0();
   return input;
}

double NNfunction-gg::neuron0x3478630() {
   double input = input0x3478630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3479000() {
   double input = -0.3817;
   input += synapse0x3479340();
   input += synapse0x3479380();
   input += synapse0x34793c0();
   input += synapse0x3479400();
   input += synapse0x3479440();
   input += synapse0x3479480();
   input += synapse0x34794c0();
   input += synapse0x3479500();
   input += synapse0x3479540();
   input += synapse0x3479580();
   input += synapse0x34795c0();
   input += synapse0x3479600();
   input += synapse0x3479640();
   input += synapse0x3479680();
   input += synapse0x34796c0();
   input += synapse0x3479700();
   input += synapse0x3479190();
   input += synapse0x34791d0();
   input += synapse0x3479850();
   input += synapse0x3479890();
   input += synapse0x34798d0();
   input += synapse0x3479910();
   input += synapse0x3479950();
   input += synapse0x3479990();
   return input;
}

double NNfunction-gg::neuron0x3479000() {
   double input = input0x3479000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34799d0() {
   double input = 0.421867;
   input += synapse0x3479d10();
   input += synapse0x3479d50();
   input += synapse0x3479d90();
   input += synapse0x3479dd0();
   input += synapse0x3479e10();
   input += synapse0x3479e50();
   input += synapse0x3479e90();
   input += synapse0x3479ed0();
   input += synapse0x3479f10();
   input += synapse0x3479f50();
   input += synapse0x3479f90();
   input += synapse0x3479fd0();
   input += synapse0x347a010();
   input += synapse0x347a050();
   input += synapse0x347a090();
   input += synapse0x347a0d0();
   input += synapse0x3479b60();
   input += synapse0x3479ba0();
   input += synapse0x347a220();
   input += synapse0x347a260();
   input += synapse0x347a2a0();
   input += synapse0x347a2e0();
   input += synapse0x347a320();
   input += synapse0x347a360();
   return input;
}

double NNfunction-gg::neuron0x34799d0() {
   double input = input0x34799d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347a3a0() {
   double input = 2.80623;
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

double NNfunction-gg::neuron0x347a3a0() {
   double input = input0x347a3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347ad70() {
   double input = -1.24532;
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
   input += synapse0x347b5c0();
   input += synapse0x347b600();
   input += synapse0x347b640();
   input += synapse0x347b680();
   input += synapse0x347b6c0();
   input += synapse0x347b700();
   return input;
}

double NNfunction-gg::neuron0x347ad70() {
   double input = input0x347ad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347b740() {
   double input = 0.810815;
   input += synapse0x347ba80();
   input += synapse0x347bac0();
   input += synapse0x347bb00();
   input += synapse0x347bb40();
   input += synapse0x347bb80();
   input += synapse0x347bbc0();
   input += synapse0x347bc00();
   input += synapse0x347bc40();
   input += synapse0x347bc80();
   input += synapse0x347bcc0();
   input += synapse0x347bd00();
   input += synapse0x347bd40();
   input += synapse0x347bd80();
   input += synapse0x347bdc0();
   input += synapse0x347be00();
   input += synapse0x347be40();
   input += synapse0x347b8d0();
   input += synapse0x347b910();
   input += synapse0x347bf90();
   input += synapse0x347bfd0();
   input += synapse0x347c010();
   input += synapse0x347c050();
   input += synapse0x347c090();
   input += synapse0x347c0d0();
   return input;
}

double NNfunction-gg::neuron0x347b740() {
   double input = input0x347b740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347c110() {
   double input = 9.68904;
   input += synapse0x347c450();
   input += synapse0x3470a20();
   input += synapse0x3470a60();
   input += synapse0x3470aa0();
   input += synapse0x3470cf0();
   input += synapse0x3470d30();
   input += synapse0x3470d70();
   input += synapse0x3470fc0();
   input += synapse0x3471000();
   input += synapse0x3471250();
   input += synapse0x3471290();
   input += synapse0x34712d0();
   input += synapse0x3471520();
   input += synapse0x3471560();
   input += synapse0x34717b0();
   input += synapse0x34717f0();
   input += synapse0x347c2a0();
   input += synapse0x347c2e0();
   input += synapse0x3471940();
   input += synapse0x3471e50();
   input += synapse0x3471e90();
   input += synapse0x3471ed0();
   input += synapse0x3472120();
   input += synapse0x3472160();
   return input;
}

double NNfunction-gg::neuron0x347c110() {
   double input = input0x347c110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34721a0() {
   double input = -0.0543089;
   input += synapse0x3471a10();
   input += synapse0x3471a50();
   input += synapse0x3471a90();
   input += synapse0x3471ad0();
   input += synapse0x3472450();
   input += synapse0x347e7a0();
   input += synapse0x347e7e0();
   input += synapse0x347e820();
   input += synapse0x347e860();
   input += synapse0x347e8a0();
   input += synapse0x347e8e0();
   input += synapse0x347e920();
   input += synapse0x347e960();
   input += synapse0x347e9a0();
   input += synapse0x347e9e0();
   input += synapse0x347ea20();
   input += synapse0x3472330();
   input += synapse0x3472370();
   input += synapse0x347eb70();
   input += synapse0x347ebb0();
   input += synapse0x347ebf0();
   input += synapse0x347ec30();
   input += synapse0x347ec70();
   input += synapse0x347ecb0();
   return input;
}

double NNfunction-gg::neuron0x34721a0() {
   double input = input0x34721a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347ecf0() {
   double input = 4.16909;
   input += synapse0x347f030();
   input += synapse0x347f070();
   input += synapse0x347f0b0();
   input += synapse0x347f0f0();
   input += synapse0x347f130();
   input += synapse0x347f170();
   input += synapse0x347f1b0();
   input += synapse0x347f1f0();
   input += synapse0x347f230();
   input += synapse0x347f270();
   input += synapse0x347f2b0();
   input += synapse0x347f2f0();
   input += synapse0x347f330();
   input += synapse0x347f370();
   input += synapse0x347f3b0();
   input += synapse0x347f3f0();
   input += synapse0x347ee80();
   input += synapse0x347eec0();
   input += synapse0x347f540();
   input += synapse0x347f580();
   input += synapse0x347f5c0();
   input += synapse0x347f600();
   input += synapse0x347f640();
   input += synapse0x347f680();
   return input;
}

double NNfunction-gg::neuron0x347ecf0() {
   double input = input0x347ecf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x347f6c0() {
   double input = 0.0940324;
   input += synapse0x347fa00();
   input += synapse0x347fa40();
   input += synapse0x347fa80();
   input += synapse0x347fac0();
   input += synapse0x347fb00();
   input += synapse0x347fb40();
   input += synapse0x347fb80();
   input += synapse0x347fbc0();
   input += synapse0x347fc00();
   input += synapse0x347fc40();
   input += synapse0x347fc80();
   input += synapse0x347fcc0();
   input += synapse0x347fd00();
   input += synapse0x347fd40();
   input += synapse0x347fd80();
   input += synapse0x347fdc0();
   input += synapse0x347f850();
   input += synapse0x347f890();
   input += synapse0x347ff10();
   input += synapse0x347ff50();
   input += synapse0x347ff90();
   input += synapse0x347ffd0();
   input += synapse0x3480010();
   input += synapse0x3480050();
   return input;
}

double NNfunction-gg::neuron0x347f6c0() {
   double input = input0x347f6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3480090() {
   double input = -0.00564207;
   input += synapse0x34803d0();
   input += synapse0x3480410();
   input += synapse0x3480450();
   input += synapse0x3480490();
   input += synapse0x34804d0();
   input += synapse0x3480510();
   input += synapse0x3480550();
   input += synapse0x3480590();
   input += synapse0x34805d0();
   input += synapse0x3480610();
   input += synapse0x3480650();
   input += synapse0x3480690();
   input += synapse0x34806d0();
   input += synapse0x3480710();
   input += synapse0x3480750();
   input += synapse0x3480790();
   input += synapse0x3480220();
   input += synapse0x3480260();
   input += synapse0x34808e0();
   input += synapse0x3480920();
   input += synapse0x3480960();
   input += synapse0x34809a0();
   input += synapse0x34809e0();
   input += synapse0x3480a20();
   return input;
}

double NNfunction-gg::neuron0x3480090() {
   double input = input0x3480090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3480a60() {
   double input = 0.100023;
   input += synapse0x3480da0();
   input += synapse0x3480de0();
   input += synapse0x3480e20();
   input += synapse0x3480e60();
   input += synapse0x3480ea0();
   input += synapse0x3480ee0();
   input += synapse0x3480f20();
   input += synapse0x3480f60();
   input += synapse0x3480fa0();
   input += synapse0x3480fe0();
   input += synapse0x3481020();
   input += synapse0x3481060();
   input += synapse0x34810a0();
   input += synapse0x34810e0();
   input += synapse0x3481120();
   input += synapse0x3481160();
   input += synapse0x3480bf0();
   input += synapse0x3480c30();
   input += synapse0x34812b0();
   input += synapse0x34812f0();
   input += synapse0x3481330();
   input += synapse0x3481370();
   input += synapse0x34813b0();
   input += synapse0x34813f0();
   return input;
}

double NNfunction-gg::neuron0x3480a60() {
   double input = input0x3480a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3481430() {
   double input = 0.0170557;
   input += synapse0x3481770();
   input += synapse0x34817b0();
   input += synapse0x34817f0();
   input += synapse0x3481830();
   input += synapse0x3481870();
   input += synapse0x34818b0();
   input += synapse0x34818f0();
   input += synapse0x3481930();
   input += synapse0x3481970();
   input += synapse0x34819b0();
   input += synapse0x34819f0();
   input += synapse0x3481a30();
   input += synapse0x3481a70();
   input += synapse0x3481ab0();
   input += synapse0x3481af0();
   input += synapse0x3481b30();
   input += synapse0x34815c0();
   input += synapse0x3481600();
   input += synapse0x3481c80();
   input += synapse0x3481cc0();
   input += synapse0x3481d00();
   input += synapse0x3481d40();
   input += synapse0x3481d80();
   input += synapse0x3481dc0();
   return input;
}

double NNfunction-gg::neuron0x3481430() {
   double input = input0x3481430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3481e00() {
   double input = -0.141294;
   input += synapse0x3482140();
   input += synapse0x3482180();
   input += synapse0x34821c0();
   input += synapse0x3482200();
   input += synapse0x3482240();
   input += synapse0x3482280();
   input += synapse0x34822c0();
   input += synapse0x3482300();
   input += synapse0x3482340();
   input += synapse0x3482380();
   input += synapse0x34823c0();
   input += synapse0x3482400();
   input += synapse0x3482440();
   input += synapse0x3482480();
   input += synapse0x34824c0();
   input += synapse0x3482500();
   input += synapse0x3481f90();
   input += synapse0x3481fd0();
   input += synapse0x3482650();
   input += synapse0x3482690();
   input += synapse0x34826d0();
   input += synapse0x3482710();
   input += synapse0x3482750();
   input += synapse0x3482790();
   return input;
}

double NNfunction-gg::neuron0x3481e00() {
   double input = input0x3481e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34827d0() {
   double input = -0.468784;
   input += synapse0x3482b10();
   input += synapse0x3482b50();
   input += synapse0x3482b90();
   input += synapse0x3482bd0();
   input += synapse0x3482c10();
   input += synapse0x3482c50();
   input += synapse0x3482c90();
   input += synapse0x3482cd0();
   input += synapse0x3482d10();
   input += synapse0x3482d50();
   input += synapse0x3482d90();
   input += synapse0x3482dd0();
   input += synapse0x3482e10();
   input += synapse0x3482e50();
   input += synapse0x3482e90();
   input += synapse0x3482ed0();
   input += synapse0x3482960();
   input += synapse0x34829a0();
   input += synapse0x3483020();
   input += synapse0x3483060();
   input += synapse0x34830a0();
   input += synapse0x34830e0();
   input += synapse0x3483120();
   input += synapse0x3483160();
   return input;
}

double NNfunction-gg::neuron0x34827d0() {
   double input = input0x34827d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34831a0() {
   double input = 0.018056;
   input += synapse0x346bc10();
   input += synapse0x346bc50();
   input += synapse0x346bc90();
   input += synapse0x346bcd0();
   input += synapse0x346bd10();
   input += synapse0x346bd50();
   input += synapse0x346bd90();
   input += synapse0x346bdd0();
   input += synapse0x34838f0();
   input += synapse0x3483930();
   input += synapse0x3483970();
   input += synapse0x34839b0();
   input += synapse0x34839f0();
   input += synapse0x3483a30();
   input += synapse0x3483a70();
   input += synapse0x3483ab0();
   input += synapse0x3483330();
   input += synapse0x3483370();
   input += synapse0x3483c00();
   input += synapse0x3483c40();
   input += synapse0x3483c80();
   input += synapse0x3483cc0();
   input += synapse0x3483d00();
   input += synapse0x3483d40();
   return input;
}

double NNfunction-gg::neuron0x34831a0() {
   double input = input0x34831a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3483d80() {
   double input = 1.64244;
   input += synapse0x34840c0();
   input += synapse0x3484100();
   input += synapse0x3484140();
   input += synapse0x3484180();
   input += synapse0x34841c0();
   input += synapse0x3484200();
   input += synapse0x3484240();
   input += synapse0x3484280();
   input += synapse0x34842c0();
   input += synapse0x3484300();
   input += synapse0x3484340();
   input += synapse0x3484380();
   input += synapse0x34843c0();
   input += synapse0x3484400();
   input += synapse0x3484440();
   input += synapse0x3484480();
   input += synapse0x3483f10();
   input += synapse0x3483f50();
   input += synapse0x34845d0();
   input += synapse0x3484610();
   input += synapse0x3484650();
   input += synapse0x3484690();
   input += synapse0x34846d0();
   input += synapse0x3484710();
   return input;
}

double NNfunction-gg::neuron0x3483d80() {
   double input = input0x3483d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3484750() {
   double input = 2.39211;
   input += synapse0x3484a90();
   input += synapse0x3484ad0();
   input += synapse0x3484b10();
   input += synapse0x3484b50();
   input += synapse0x3484b90();
   input += synapse0x3484bd0();
   input += synapse0x3484c10();
   input += synapse0x3484c50();
   input += synapse0x3484c90();
   input += synapse0x3484cd0();
   input += synapse0x3484d10();
   input += synapse0x3484d50();
   input += synapse0x3484d90();
   input += synapse0x3484dd0();
   input += synapse0x3484e10();
   input += synapse0x3484e50();
   input += synapse0x34848e0();
   input += synapse0x3484920();
   input += synapse0x3475450();
   input += synapse0x3475490();
   input += synapse0x34754d0();
   input += synapse0x3475510();
   input += synapse0x3475550();
   input += synapse0x3475590();
   return input;
}

double NNfunction-gg::neuron0x3484750() {
   double input = input0x3484750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34755d0() {
   double input = 1.80876;
   input += synapse0x3475910();
   input += synapse0x3475950();
   input += synapse0x3475990();
   input += synapse0x34759d0();
   input += synapse0x3475a10();
   input += synapse0x3475a50();
   input += synapse0x3475a90();
   input += synapse0x3475ad0();
   input += synapse0x3475b10();
   input += synapse0x3475b50();
   input += synapse0x3475b90();
   input += synapse0x3475bd0();
   input += synapse0x3475c10();
   input += synapse0x3475c50();
   input += synapse0x3475c90();
   input += synapse0x3475cd0();
   input += synapse0x3475760();
   input += synapse0x34757a0();
   input += synapse0x3475e20();
   input += synapse0x3475e60();
   input += synapse0x3475ea0();
   input += synapse0x3475ee0();
   input += synapse0x3475f20();
   input += synapse0x3475f60();
   return input;
}

double NNfunction-gg::neuron0x34755d0() {
   double input = input0x34755d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3475fa0() {
   double input = -1.71766;
   input += synapse0x34762e0();
   input += synapse0x3476320();
   input += synapse0x3476360();
   input += synapse0x34763a0();
   input += synapse0x34763e0();
   input += synapse0x3476420();
   input += synapse0x3476460();
   input += synapse0x34764a0();
   input += synapse0x34764e0();
   input += synapse0x3476520();
   input += synapse0x3476560();
   input += synapse0x34765a0();
   input += synapse0x34765e0();
   input += synapse0x3476620();
   input += synapse0x3476660();
   input += synapse0x34766a0();
   input += synapse0x3476130();
   input += synapse0x3476170();
   input += synapse0x34767f0();
   input += synapse0x3476830();
   input += synapse0x3476870();
   input += synapse0x34768b0();
   input += synapse0x34768f0();
   input += synapse0x3476930();
   return input;
}

double NNfunction-gg::neuron0x3475fa0() {
   double input = input0x3475fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3476970() {
   double input = 0.694983;
   input += synapse0x3476cb0();
   input += synapse0x3476cf0();
   input += synapse0x3476d30();
   input += synapse0x3476d70();
   input += synapse0x3476db0();
   input += synapse0x3476df0();
   input += synapse0x3476e30();
   input += synapse0x3476e70();
   input += synapse0x3476eb0();
   input += synapse0x3476ef0();
   input += synapse0x3476f30();
   input += synapse0x3476f70();
   input += synapse0x3476fb0();
   input += synapse0x3476ff0();
   input += synapse0x3477030();
   input += synapse0x3477070();
   input += synapse0x3476b00();
   input += synapse0x3476b40();
   input += synapse0x34771c0();
   input += synapse0x3477200();
   input += synapse0x3477240();
   input += synapse0x3477280();
   input += synapse0x34772c0();
   input += synapse0x3477300();
   return input;
}

double NNfunction-gg::neuron0x3476970() {
   double input = input0x3476970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3488fb0() {
   double input = 1.15185;
   input += synapse0x34891d0();
   input += synapse0x3489210();
   input += synapse0x3489250();
   input += synapse0x3489290();
   input += synapse0x34892d0();
   input += synapse0x3489310();
   input += synapse0x3489350();
   input += synapse0x3489390();
   input += synapse0x34893d0();
   input += synapse0x3489410();
   input += synapse0x3489450();
   input += synapse0x3489490();
   input += synapse0x34894d0();
   input += synapse0x3489510();
   input += synapse0x3489550();
   input += synapse0x3489590();
   input += synapse0x3477340();
   input += synapse0x3477380();
   input += synapse0x34896e0();
   input += synapse0x3489720();
   input += synapse0x3489760();
   input += synapse0x34897a0();
   input += synapse0x34897e0();
   input += synapse0x3489820();
   return input;
}

double NNfunction-gg::neuron0x3488fb0() {
   double input = input0x3488fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3489860() {
   double input = 1.27237;
   input += synapse0x3489ba0();
   input += synapse0x3489be0();
   input += synapse0x3489c20();
   input += synapse0x3489c60();
   input += synapse0x3489ca0();
   input += synapse0x3489ce0();
   input += synapse0x3489d20();
   input += synapse0x3489d60();
   input += synapse0x3489da0();
   input += synapse0x3489de0();
   input += synapse0x3489e20();
   input += synapse0x3489e60();
   input += synapse0x3489ea0();
   input += synapse0x3489ee0();
   input += synapse0x3489f20();
   input += synapse0x3489f60();
   input += synapse0x34899f0();
   input += synapse0x3489a30();
   input += synapse0x348a0b0();
   input += synapse0x348a0f0();
   input += synapse0x348a130();
   input += synapse0x348a170();
   input += synapse0x348a1b0();
   input += synapse0x348a1f0();
   return input;
}

double NNfunction-gg::neuron0x3489860() {
   double input = input0x3489860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x348a230() {
   double input = 0.235774;
   input += synapse0x348a570();
   input += synapse0x348a5b0();
   input += synapse0x348a5f0();
   input += synapse0x348a630();
   input += synapse0x348a670();
   input += synapse0x348a6b0();
   input += synapse0x348a6f0();
   input += synapse0x348a730();
   input += synapse0x348a770();
   input += synapse0x348a7b0();
   input += synapse0x348a7f0();
   input += synapse0x348a830();
   input += synapse0x348a870();
   input += synapse0x348a8b0();
   input += synapse0x348a8f0();
   input += synapse0x348a930();
   input += synapse0x348a3c0();
   input += synapse0x348a400();
   input += synapse0x348aa80();
   input += synapse0x348aac0();
   input += synapse0x348ab00();
   input += synapse0x348ab40();
   input += synapse0x348ab80();
   input += synapse0x348abc0();
   return input;
}

double NNfunction-gg::neuron0x348a230() {
   double input = input0x348a230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x348ac00() {
   double input = 1.83182;
   input += synapse0x348af40();
   input += synapse0x348af80();
   input += synapse0x348afc0();
   input += synapse0x348b000();
   input += synapse0x348b040();
   input += synapse0x348b080();
   input += synapse0x348b0c0();
   input += synapse0x348b100();
   input += synapse0x348b140();
   input += synapse0x348b180();
   input += synapse0x348b1c0();
   input += synapse0x348b200();
   input += synapse0x348b240();
   input += synapse0x348b280();
   input += synapse0x348b2c0();
   input += synapse0x348b300();
   input += synapse0x348ad90();
   input += synapse0x348add0();
   input += synapse0x348b450();
   input += synapse0x348b490();
   input += synapse0x348b4d0();
   input += synapse0x348b510();
   input += synapse0x348b550();
   input += synapse0x348b590();
   return input;
}

double NNfunction-gg::neuron0x348ac00() {
   double input = input0x348ac00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3491e00() {
   double input = -1.73892;
   input += synapse0x322b3c0();
   input += synapse0x322b400();
   input += synapse0x3467f40();
   input += synapse0x3467f80();
   input += synapse0x3469a10();
   input += synapse0x3469a50();
   input += synapse0x346a7e0();
   input += synapse0x346a820();
   input += synapse0x346b1b0();
   input += synapse0x346b1f0();
   input += synapse0x346bb80();
   input += synapse0x346bbc0();
   input += synapse0x346c660();
   input += synapse0x346c6a0();
   input += synapse0x346d030();
   input += synapse0x346d070();
   input += synapse0x346a110();
   input += synapse0x346a150();
   input += synapse0x346ebe0();
   input += synapse0x346ec20();
   input += synapse0x346f5b0();
   input += synapse0x346f5f0();
   input += synapse0x346ff80();
   input += synapse0x346ffc0();
   input += synapse0x3470950();
   input += synapse0x3470990();
   input += synapse0x34639e0();
   input += synapse0x3463a20();
   input += synapse0x3472a40();
   input += synapse0x3472a80();
   input += synapse0x3473410();
   input += synapse0x3473450();
   input += synapse0x3473de0();
   input += synapse0x3473e20();
   input += synapse0x34747b0();
   input += synapse0x34747f0();
   input += synapse0x3475180();
   input += synapse0x34751c0();
   input += synapse0x346dcd0();
   input += synapse0x346dd10();
   input += synapse0x3477580();
   input += synapse0x34775c0();
   input += synapse0x3477f10();
   input += synapse0x3477f50();
   input += synapse0x34788e0();
   input += synapse0x3478920();
   input += synapse0x34792b0();
   input += synapse0x34792f0();
   input += synapse0x3479c80();
   input += synapse0x3479cc0();
   return input;
}

double NNfunction-gg::neuron0x3491e00() {
   double input = input0x3491e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34921a0() {
   double input = -0.351545;
   input += synapse0x347c3c0();
   input += synapse0x347c400();
   input += synapse0x3471980();
   input += synapse0x34719c0();
   input += synapse0x347efa0();
   input += synapse0x347efe0();
   input += synapse0x347f970();
   input += synapse0x347f9b0();
   input += synapse0x3480340();
   input += synapse0x3480380();
   input += synapse0x3480d10();
   input += synapse0x3480d50();
   input += synapse0x34816e0();
   input += synapse0x3481720();
   input += synapse0x34820b0();
   input += synapse0x34820f0();
   input += synapse0x3482a80();
   input += synapse0x3482ac0();
   input += synapse0x3483450();
   input += synapse0x3483490();
   input += synapse0x3484030();
   input += synapse0x3484070();
   input += synapse0x3484a00();
   input += synapse0x3484a40();
   input += synapse0x3475880();
   input += synapse0x34758c0();
   input += synapse0x3476250();
   input += synapse0x3476290();
   input += synapse0x3476c20();
   input += synapse0x3476c60();
   input += synapse0x3489140();
   input += synapse0x3489180();
   input += synapse0x3489b10();
   input += synapse0x3489b50();
   input += synapse0x348a4e0();
   input += synapse0x348a520();
   input += synapse0x348aeb0();
   input += synapse0x348aef0();
   input += synapse0x3465db0();
   input += synapse0x3465df0();
   input += synapse0x347a650();
   input += synapse0x347a690();
   input += synapse0x348b5d0();
   input += synapse0x348b610();
   input += synapse0x348b650();
   input += synapse0x348b690();
   input += synapse0x3492540();
   input += synapse0x3492580();
   input += synapse0x34925c0();
   input += synapse0x3492600();
   return input;
}

double NNfunction-gg::neuron0x34921a0() {
   double input = input0x34921a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3492640() {
   double input = -0.548318;
   input += synapse0x3492980();
   input += synapse0x34929c0();
   input += synapse0x3492a00();
   input += synapse0x3492a40();
   input += synapse0x3492a80();
   input += synapse0x3492ac0();
   input += synapse0x3492b00();
   input += synapse0x3492b40();
   input += synapse0x3492b80();
   input += synapse0x3492bc0();
   input += synapse0x3492c00();
   input += synapse0x3492c40();
   input += synapse0x3492c80();
   input += synapse0x3492cc0();
   input += synapse0x3492d00();
   input += synapse0x3492d40();
   input += synapse0x34927d0();
   input += synapse0x3492810();
   input += synapse0x3492e90();
   input += synapse0x3492ed0();
   input += synapse0x3492f10();
   input += synapse0x3492f50();
   input += synapse0x3492f90();
   input += synapse0x3492fd0();
   input += synapse0x3493010();
   input += synapse0x3493050();
   input += synapse0x3493090();
   input += synapse0x34930d0();
   input += synapse0x3493110();
   input += synapse0x3493150();
   input += synapse0x3493190();
   input += synapse0x34931d0();
   input += synapse0x3492d80();
   input += synapse0x3492dc0();
   input += synapse0x3492e00();
   input += synapse0x3492e40();
   input += synapse0x3493420();
   input += synapse0x3493460();
   input += synapse0x34934a0();
   input += synapse0x34934e0();
   input += synapse0x3493520();
   input += synapse0x3493560();
   input += synapse0x34935a0();
   input += synapse0x34935e0();
   input += synapse0x3493620();
   input += synapse0x3493660();
   input += synapse0x34936a0();
   input += synapse0x34936e0();
   input += synapse0x3493720();
   input += synapse0x3493760();
   return input;
}

double NNfunction-gg::neuron0x3492640() {
   double input = input0x3492640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x34937a0() {
   double input = 1.17727;
   input += synapse0x3493ae0();
   input += synapse0x3493b20();
   input += synapse0x3493b60();
   input += synapse0x3493ba0();
   input += synapse0x3493be0();
   input += synapse0x3493c20();
   input += synapse0x3493c60();
   input += synapse0x3493ca0();
   input += synapse0x3493ce0();
   input += synapse0x3493d20();
   input += synapse0x3493d60();
   input += synapse0x3493da0();
   input += synapse0x3493de0();
   input += synapse0x3493e20();
   input += synapse0x3493e60();
   input += synapse0x3493ea0();
   input += synapse0x3493930();
   input += synapse0x3493970();
   input += synapse0x3493ff0();
   input += synapse0x3494030();
   input += synapse0x3494070();
   input += synapse0x34940b0();
   input += synapse0x34940f0();
   input += synapse0x3494130();
   input += synapse0x3494170();
   input += synapse0x34941b0();
   input += synapse0x34941f0();
   input += synapse0x3494230();
   input += synapse0x3494270();
   input += synapse0x34942b0();
   input += synapse0x34942f0();
   input += synapse0x3494330();
   input += synapse0x3493ee0();
   input += synapse0x3493f20();
   input += synapse0x3493f60();
   input += synapse0x3493fa0();
   input += synapse0x3494580();
   input += synapse0x34945c0();
   input += synapse0x3494600();
   input += synapse0x3494640();
   input += synapse0x3494680();
   input += synapse0x34946c0();
   input += synapse0x3494700();
   input += synapse0x3494740();
   input += synapse0x3494780();
   input += synapse0x34947c0();
   input += synapse0x3494800();
   input += synapse0x3494840();
   input += synapse0x3494880();
   input += synapse0x34948c0();
   return input;
}

double NNfunction-gg::neuron0x34937a0() {
   double input = input0x34937a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3494900() {
   double input = 0.250074;
   input += synapse0x3494c40();
   input += synapse0x3494c80();
   input += synapse0x3494cc0();
   input += synapse0x3494d00();
   input += synapse0x3494d40();
   input += synapse0x3494d80();
   input += synapse0x3494dc0();
   input += synapse0x3494e00();
   input += synapse0x3494e40();
   input += synapse0x3494e80();
   input += synapse0x3494ec0();
   input += synapse0x3494f00();
   input += synapse0x3494f40();
   input += synapse0x3494f80();
   input += synapse0x3494fc0();
   input += synapse0x3495000();
   input += synapse0x3494a90();
   input += synapse0x3494ad0();
   input += synapse0x3495150();
   input += synapse0x3495190();
   input += synapse0x34951d0();
   input += synapse0x3495210();
   input += synapse0x3495250();
   input += synapse0x3495290();
   input += synapse0x34952d0();
   input += synapse0x3495310();
   input += synapse0x3495350();
   input += synapse0x3495390();
   input += synapse0x34953d0();
   input += synapse0x3495410();
   input += synapse0x3495450();
   input += synapse0x3495490();
   input += synapse0x3495040();
   input += synapse0x3495080();
   input += synapse0x34950c0();
   input += synapse0x3495100();
   input += synapse0x34956e0();
   input += synapse0x3495720();
   input += synapse0x3495760();
   input += synapse0x34957a0();
   input += synapse0x34957e0();
   input += synapse0x3495820();
   input += synapse0x3495860();
   input += synapse0x34958a0();
   input += synapse0x34958e0();
   input += synapse0x3495920();
   input += synapse0x3495960();
   input += synapse0x34959a0();
   input += synapse0x34959e0();
   input += synapse0x3495a20();
   return input;
}

double NNfunction-gg::neuron0x3494900() {
   double input = input0x3494900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-gg::input0x3495a60() {
   double input = 3.24379;
   input += synapse0x3495c80();
   input += synapse0x3495cc0();
   input += synapse0x3495d00();
   input += synapse0x3495d40();
   input += synapse0x3495d80();
   return input;
}

double NNfunction-gg::neuron0x3495a60() {
   double input = input0x3495a60();
   return (input * 1)+0;
}

double NNfunction-gg::synapse0x3465e40() {
   return (neuron0x3460ad0()*0.0248047);
}

double NNfunction-gg::synapse0x3465e80() {
   return (neuron0x3460d80()*-0.0326155);
}

double NNfunction-gg::synapse0x3465ec0() {
   return (neuron0x34610c0()*-0.0655807);
}

double NNfunction-gg::synapse0x3465f00() {
   return (neuron0x3461400()*-2.89757);
}

double NNfunction-gg::synapse0x3465f40() {
   return (neuron0x3461740()*0.104512);
}

double NNfunction-gg::synapse0x3465f80() {
   return (neuron0x3461a80()*-0.0255164);
}

double NNfunction-gg::synapse0x3465fc0() {
   return (neuron0x3461dc0()*0.0227806);
}

double NNfunction-gg::synapse0x3466000() {
   return (neuron0x3462100()*0.0269057);
}

double NNfunction-gg::synapse0x3466040() {
   return (neuron0x3462440()*0.0587765);
}

double NNfunction-gg::synapse0x3466080() {
   return (neuron0x3462780()*0.0729941);
}

double NNfunction-gg::synapse0x34660c0() {
   return (neuron0x3462ac0()*0.0415058);
}

double NNfunction-gg::synapse0x3466100() {
   return (neuron0x3462e00()*0.0132003);
}

double NNfunction-gg::synapse0x3466140() {
   return (neuron0x3463140()*0.0674759);
}

double NNfunction-gg::synapse0x3466180() {
   return (neuron0x3463480()*-0.27878);
}

double NNfunction-gg::synapse0x34661c0() {
   return (neuron0x34637c0()*0.0518366);
}

double NNfunction-gg::synapse0x3466200() {
   return (neuron0x3463b00()*-0.0215556);
}

double NNfunction-gg::synapse0x3465c90() {
   return (neuron0x3463e40()*-0.26138);
}

double NNfunction-gg::synapse0x3465cd0() {
   return (neuron0x34643a0()*0.00585532);
}

double NNfunction-gg::synapse0x321d350() {
   return (neuron0x3464650()*-0.0519779);
}

double NNfunction-gg::synapse0x321d390() {
   return (neuron0x3464990()*-0.0824149);
}

double NNfunction-gg::synapse0x2c384b0() {
   return (neuron0x3464cd0()*-0.10586);
}

double NNfunction-gg::synapse0x2c384f0() {
   return (neuron0x3465010()*0.075268);
}

double NNfunction-gg::synapse0x3466350() {
   return (neuron0x3465350()*0.023131);
}

double NNfunction-gg::synapse0x3466390() {
   return (neuron0x3465690()*-0.0503992);
}

double NNfunction-gg::synapse0x3466710() {
   return (neuron0x3460ad0()*-0.0208127);
}

double NNfunction-gg::synapse0x3466750() {
   return (neuron0x3460d80()*-0.0230745);
}

double NNfunction-gg::synapse0x3466790() {
   return (neuron0x34610c0()*-0.0165394);
}

double NNfunction-gg::synapse0x34667d0() {
   return (neuron0x3461400()*-0.0539839);
}

double NNfunction-gg::synapse0x3466810() {
   return (neuron0x3461740()*0.0109216);
}

double NNfunction-gg::synapse0x3466850() {
   return (neuron0x3461a80()*-0.0190309);
}

double NNfunction-gg::synapse0x3466890() {
   return (neuron0x3461dc0()*-0.00171494);
}

double NNfunction-gg::synapse0x34668d0() {
   return (neuron0x3462100()*-0.0204933);
}

double NNfunction-gg::synapse0x3466910() {
   return (neuron0x3462440()*-0.0379468);
}

double NNfunction-gg::synapse0x3466240() {
   return (neuron0x3462780()*-0.0047878);
}

double NNfunction-gg::synapse0x3466280() {
   return (neuron0x3462ac0()*-0.00919488);
}

double NNfunction-gg::synapse0x34662c0() {
   return (neuron0x3462e00()*1.06143);
}

double NNfunction-gg::synapse0x3466300() {
   return (neuron0x3463140()*-0.0915224);
}

double NNfunction-gg::synapse0x3466b60() {
   return (neuron0x3463480()*-0.0603012);
}

double NNfunction-gg::synapse0x3466ba0() {
   return (neuron0x34637c0()*-0.137738);
}

double NNfunction-gg::synapse0x3466be0() {
   return (neuron0x3463b00()*-0.0923254);
}

double NNfunction-gg::synapse0x3466560() {
   return (neuron0x3463e40()*-0.0548445);
}

double NNfunction-gg::synapse0x34665a0() {
   return (neuron0x34643a0()*-0.296473);
}

double NNfunction-gg::synapse0x3466d30() {
   return (neuron0x3464650()*-0.0318358);
}

double NNfunction-gg::synapse0x3466d70() {
   return (neuron0x3464990()*-0.0182623);
}

double NNfunction-gg::synapse0x3466db0() {
   return (neuron0x3464cd0()*-0.104964);
}

double NNfunction-gg::synapse0x3466df0() {
   return (neuron0x3465010()*0.0274167);
}

double NNfunction-gg::synapse0x3466e30() {
   return (neuron0x3465350()*0.0504589);
}

double NNfunction-gg::synapse0x3466e70() {
   return (neuron0x3465690()*0.0254923);
}

double NNfunction-gg::synapse0x34671f0() {
   return (neuron0x3460ad0()*-0.0362101);
}

double NNfunction-gg::synapse0x3467230() {
   return (neuron0x3460d80()*0.00913714);
}

double NNfunction-gg::synapse0x3467270() {
   return (neuron0x34610c0()*-0.0399769);
}

double NNfunction-gg::synapse0x34672b0() {
   return (neuron0x3461400()*1.0735);
}

double NNfunction-gg::synapse0x34672f0() {
   return (neuron0x3461740()*0.0216713);
}

double NNfunction-gg::synapse0x3467330() {
   return (neuron0x3461a80()*0.0172311);
}

double NNfunction-gg::synapse0x3467370() {
   return (neuron0x3461dc0()*-0.00237022);
}

double NNfunction-gg::synapse0x34673b0() {
   return (neuron0x3462100()*0.00988753);
}

double NNfunction-gg::synapse0x34673f0() {
   return (neuron0x3462440()*-0.00864993);
}

double NNfunction-gg::synapse0x3467430() {
   return (neuron0x3462780()*0.0353502);
}

double NNfunction-gg::synapse0x3467470() {
   return (neuron0x3462ac0()*-0.00374124);
}

double NNfunction-gg::synapse0x34674b0() {
   return (neuron0x3462e00()*0.00485822);
}

double NNfunction-gg::synapse0x34674f0() {
   return (neuron0x3463140()*-0.122274);
}

double NNfunction-gg::synapse0x3467530() {
   return (neuron0x3463480()*-0.132682);
}

double NNfunction-gg::synapse0x3467570() {
   return (neuron0x34637c0()*-0.182228);
}

double NNfunction-gg::synapse0x34675b0() {
   return (neuron0x3463b00()*-0.0653279);
}

double NNfunction-gg::synapse0x3467040() {
   return (neuron0x3463e40()*-0.079899);
}

double NNfunction-gg::synapse0x3467080() {
   return (neuron0x34643a0()*-0.080133);
}

double NNfunction-gg::synapse0x1e38180() {
   return (neuron0x3464650()*-0.0398285);
}

double NNfunction-gg::synapse0x322abd0() {
   return (neuron0x3464990()*-0.052893);
}

double NNfunction-gg::synapse0x322ac10() {
   return (neuron0x3464cd0()*-0.015046);
}

double NNfunction-gg::synapse0x34694e0() {
   return (neuron0x3465010()*0.0208921);
}

double NNfunction-gg::synapse0x3469520() {
   return (neuron0x3465350()*0.0140884);
}

double NNfunction-gg::synapse0x3460810() {
   return (neuron0x3465690()*-0.0223025);
}

double NNfunction-gg::synapse0x34608e0() {
   return (neuron0x3460ad0()*0.499718);
}

double NNfunction-gg::synapse0x322b450() {
   return (neuron0x3460d80()*-0.379119);
}

double NNfunction-gg::synapse0x3466ae0() {
   return (neuron0x34610c0()*-0.0708119);
}

double NNfunction-gg::synapse0x3466b20() {
   return (neuron0x3461400()*0.436105);
}

double NNfunction-gg::synapse0x3467700() {
   return (neuron0x3461740()*-0.0431789);
}

double NNfunction-gg::synapse0x3467740() {
   return (neuron0x3461a80()*0.173578);
}

double NNfunction-gg::synapse0x3467780() {
   return (neuron0x3461dc0()*0.247937);
}

double NNfunction-gg::synapse0x34677c0() {
   return (neuron0x3462100()*-0.0796095);
}

double NNfunction-gg::synapse0x3467800() {
   return (neuron0x3462440()*0.225904);
}

double NNfunction-gg::synapse0x3467840() {
   return (neuron0x3462780()*0.0340806);
}

double NNfunction-gg::synapse0x3467880() {
   return (neuron0x3462ac0()*0.105638);
}

double NNfunction-gg::synapse0x34678c0() {
   return (neuron0x3462e00()*-0.307623);
}

double NNfunction-gg::synapse0x3467900() {
   return (neuron0x3463140()*-0.182078);
}

double NNfunction-gg::synapse0x3467940() {
   return (neuron0x3463480()*-0.322785);
}

double NNfunction-gg::synapse0x3467980() {
   return (neuron0x34637c0()*-0.192958);
}

double NNfunction-gg::synapse0x34679c0() {
   return (neuron0x3463b00()*-0.200272);
}

double NNfunction-gg::synapse0x3460850() {
   return (neuron0x3463e40()*-0.343856);
}

double NNfunction-gg::synapse0x3460890() {
   return (neuron0x34643a0()*0.106827);
}

double NNfunction-gg::synapse0x3467b10() {
   return (neuron0x3464650()*0.0310546);
}

double NNfunction-gg::synapse0x3467b50() {
   return (neuron0x3464990()*-0.158935);
}

double NNfunction-gg::synapse0x3467b90() {
   return (neuron0x3464cd0()*-0.141725);
}

double NNfunction-gg::synapse0x3467bd0() {
   return (neuron0x3465010()*-0.207952);
}

double NNfunction-gg::synapse0x3467c10() {
   return (neuron0x3465350()*-0.0718477);
}

double NNfunction-gg::synapse0x3467c50() {
   return (neuron0x3465690()*0.209201);
}

double NNfunction-gg::synapse0x3467fd0() {
   return (neuron0x3460ad0()*-0.0624987);
}

double NNfunction-gg::synapse0x3468010() {
   return (neuron0x3460d80()*0.0341615);
}

double NNfunction-gg::synapse0x3468050() {
   return (neuron0x34610c0()*0.115835);
}

double NNfunction-gg::synapse0x3468090() {
   return (neuron0x3461400()*-0.601124);
}

double NNfunction-gg::synapse0x34680d0() {
   return (neuron0x3461740()*0.0917159);
}

double NNfunction-gg::synapse0x3468110() {
   return (neuron0x3461a80()*0.127989);
}

double NNfunction-gg::synapse0x3468150() {
   return (neuron0x3461dc0()*-0.06178);
}

double NNfunction-gg::synapse0x3468190() {
   return (neuron0x3462100()*-0.0558683);
}

double NNfunction-gg::synapse0x34681d0() {
   return (neuron0x3462440()*0.0654644);
}

double NNfunction-gg::synapse0x3468210() {
   return (neuron0x3462780()*-0.153082);
}

double NNfunction-gg::synapse0x3468250() {
   return (neuron0x3462ac0()*0.105421);
}

double NNfunction-gg::synapse0x3468290() {
   return (neuron0x3462e00()*-0.0744055);
}

double NNfunction-gg::synapse0x34682d0() {
   return (neuron0x3463140()*-0.193305);
}

double NNfunction-gg::synapse0x3468310() {
   return (neuron0x3463480()*0.116209);
}

double NNfunction-gg::synapse0x3468350() {
   return (neuron0x34637c0()*-0.35249);
}

double NNfunction-gg::synapse0x3468390() {
   return (neuron0x3463b00()*0.140407);
}

double NNfunction-gg::synapse0x34684e0() {
   return (neuron0x3463e40()*0.687013);
}

double NNfunction-gg::synapse0x3467e20() {
   return (neuron0x34643a0()*-0.121876);
}

double NNfunction-gg::synapse0x3467e60() {
   return (neuron0x3464650()*0.114316);
}

double NNfunction-gg::synapse0x3469620() {
   return (neuron0x3464990()*0.126519);
}

double NNfunction-gg::synapse0x3469660() {
   return (neuron0x3464cd0()*0.776187);
}

double NNfunction-gg::synapse0x34696a0() {
   return (neuron0x3465010()*-0.106748);
}

double NNfunction-gg::synapse0x34696e0() {
   return (neuron0x3465350()*-0.361696);
}

double NNfunction-gg::synapse0x3469720() {
   return (neuron0x3465690()*0.104484);
}

double NNfunction-gg::synapse0x3469aa0() {
   return (neuron0x3460ad0()*0.00524722);
}

double NNfunction-gg::synapse0x3469ae0() {
   return (neuron0x3460d80()*-0.0085974);
}

double NNfunction-gg::synapse0x3469b20() {
   return (neuron0x34610c0()*-0.0389511);
}

double NNfunction-gg::synapse0x3469b60() {
   return (neuron0x3461400()*2.27923);
}

double NNfunction-gg::synapse0x3469ba0() {
   return (neuron0x3461740()*0.00482083);
}

double NNfunction-gg::synapse0x3469be0() {
   return (neuron0x3461a80()*-0.00126266);
}

double NNfunction-gg::synapse0x3469c20() {
   return (neuron0x3461dc0()*0.0326883);
}

double NNfunction-gg::synapse0x3469c60() {
   return (neuron0x3462100()*0.0203188);
}

double NNfunction-gg::synapse0x3469ca0() {
   return (neuron0x3462440()*0.0190805);
}

double NNfunction-gg::synapse0x322af20() {
   return (neuron0x3462780()*0.0341408);
}

double NNfunction-gg::synapse0x322af60() {
   return (neuron0x3462ac0()*0.0216779);
}

double NNfunction-gg::synapse0x322afa0() {
   return (neuron0x3462e00()*-0.0179437);
}

double NNfunction-gg::synapse0x322afe0() {
   return (neuron0x3463140()*-0.142029);
}

double NNfunction-gg::synapse0x322b020() {
   return (neuron0x3463480()*-0.128919);
}

double NNfunction-gg::synapse0x322b060() {
   return (neuron0x34637c0()*0.0595456);
}

double NNfunction-gg::synapse0x322b0a0() {
   return (neuron0x3463b00()*-0.01826);
}

double NNfunction-gg::synapse0x34698f0() {
   return (neuron0x3463e40()*-0.0576696);
}

double NNfunction-gg::synapse0x3469930() {
   return (neuron0x34643a0()*-0.0427488);
}

double NNfunction-gg::synapse0x322b1f0() {
   return (neuron0x3464650()*-0.0970822);
}

double NNfunction-gg::synapse0x322b230() {
   return (neuron0x3464990()*0.0363503);
}

double NNfunction-gg::synapse0x322b270() {
   return (neuron0x3464cd0()*-0.0812781);
}

double NNfunction-gg::synapse0x322b2b0() {
   return (neuron0x3465010()*0.0141351);
}

double NNfunction-gg::synapse0x322b2f0() {
   return (neuron0x3465350()*0.0218748);
}

double NNfunction-gg::synapse0x346a4f0() {
   return (neuron0x3465690()*-0.00933787);
}

double NNfunction-gg::synapse0x346a870() {
   return (neuron0x3460ad0()*0.0256926);
}

double NNfunction-gg::synapse0x346a8b0() {
   return (neuron0x3460d80()*-0.024117);
}

double NNfunction-gg::synapse0x346a8f0() {
   return (neuron0x34610c0()*-0.177242);
}

double NNfunction-gg::synapse0x346a930() {
   return (neuron0x3461400()*-0.170532);
}

double NNfunction-gg::synapse0x346a970() {
   return (neuron0x3461740()*0.123665);
}

double NNfunction-gg::synapse0x346a9b0() {
   return (neuron0x3461a80()*-0.0421909);
}

double NNfunction-gg::synapse0x346a9f0() {
   return (neuron0x3461dc0()*0.0255034);
}

double NNfunction-gg::synapse0x346aa30() {
   return (neuron0x3462100()*0.0368408);
}

double NNfunction-gg::synapse0x346aa70() {
   return (neuron0x3462440()*0.0679774);
}

double NNfunction-gg::synapse0x346aab0() {
   return (neuron0x3462780()*0.0510124);
}

double NNfunction-gg::synapse0x346aaf0() {
   return (neuron0x3462ac0()*0.0143371);
}

double NNfunction-gg::synapse0x346ab30() {
   return (neuron0x3462e00()*0.0289411);
}

double NNfunction-gg::synapse0x346ab70() {
   return (neuron0x3463140()*4.92992e-05);
}

double NNfunction-gg::synapse0x346abb0() {
   return (neuron0x3463480()*-0.292144);
}

double NNfunction-gg::synapse0x346abf0() {
   return (neuron0x34637c0()*-0.341771);
}

double NNfunction-gg::synapse0x346ac30() {
   return (neuron0x3463b00()*-0.0743943);
}

double NNfunction-gg::synapse0x346a6c0() {
   return (neuron0x3463e40()*-0.151431);
}

double NNfunction-gg::synapse0x346a700() {
   return (neuron0x34643a0()*-0.0493263);
}

double NNfunction-gg::synapse0x346ad80() {
   return (neuron0x3464650()*0.028436);
}

double NNfunction-gg::synapse0x346adc0() {
   return (neuron0x3464990()*-0.127824);
}

double NNfunction-gg::synapse0x346ae00() {
   return (neuron0x3464cd0()*-0.178841);
}

double NNfunction-gg::synapse0x346ae40() {
   return (neuron0x3465010()*0.0974579);
}

double NNfunction-gg::synapse0x346ae80() {
   return (neuron0x3465350()*0.0605764);
}

double NNfunction-gg::synapse0x346aec0() {
   return (neuron0x3465690()*-0.0558873);
}

double NNfunction-gg::synapse0x346b240() {
   return (neuron0x3460ad0()*-0.0181094);
}

double NNfunction-gg::synapse0x346b280() {
   return (neuron0x3460d80()*-0.00543058);
}

double NNfunction-gg::synapse0x346b2c0() {
   return (neuron0x34610c0()*0.14672);
}

double NNfunction-gg::synapse0x346b300() {
   return (neuron0x3461400()*0.487476);
}

double NNfunction-gg::synapse0x346b340() {
   return (neuron0x3461740()*-0.15568);
}

double NNfunction-gg::synapse0x346b380() {
   return (neuron0x3461a80()*-0.022608);
}

double NNfunction-gg::synapse0x346b3c0() {
   return (neuron0x3461dc0()*-0.0296482);
}

double NNfunction-gg::synapse0x346b400() {
   return (neuron0x3462100()*-0.0917913);
}

double NNfunction-gg::synapse0x346b440() {
   return (neuron0x3462440()*-0.091288);
}

double NNfunction-gg::synapse0x346b480() {
   return (neuron0x3462780()*-0.128556);
}

double NNfunction-gg::synapse0x346b4c0() {
   return (neuron0x3462ac0()*-0.0669245);
}

double NNfunction-gg::synapse0x346b500() {
   return (neuron0x3462e00()*-0.306071);
}

double NNfunction-gg::synapse0x346b540() {
   return (neuron0x3463140()*0.0434894);
}

double NNfunction-gg::synapse0x346b580() {
   return (neuron0x3463480()*0.417161);
}

double NNfunction-gg::synapse0x346b5c0() {
   return (neuron0x34637c0()*-0.0389703);
}

double NNfunction-gg::synapse0x346b600() {
   return (neuron0x3463b00()*0.0185896);
}

double NNfunction-gg::synapse0x346b090() {
   return (neuron0x3463e40()*0.319208);
}

double NNfunction-gg::synapse0x346b0d0() {
   return (neuron0x34643a0()*0.0175886);
}

double NNfunction-gg::synapse0x346b750() {
   return (neuron0x3464650()*0.0782609);
}

double NNfunction-gg::synapse0x346b790() {
   return (neuron0x3464990()*0.135598);
}

double NNfunction-gg::synapse0x346b7d0() {
   return (neuron0x3464cd0()*0.0725621);
}

double NNfunction-gg::synapse0x346b810() {
   return (neuron0x3465010()*-0.0976227);
}

double NNfunction-gg::synapse0x346b850() {
   return (neuron0x3465350()*0.00127054);
}

double NNfunction-gg::synapse0x346b890() {
   return (neuron0x3465690()*0.0875981);
}

double NNfunction-gg::synapse0x3464290() {
   return (neuron0x3460ad0()*-0.00227039);
}

double NNfunction-gg::synapse0x34642d0() {
   return (neuron0x3460d80()*0.00864599);
}

double NNfunction-gg::synapse0x3464310() {
   return (neuron0x34610c0()*-0.0275039);
}

double NNfunction-gg::synapse0x3464350() {
   return (neuron0x3461400()*8.31361);
}

double NNfunction-gg::synapse0x346be20() {
   return (neuron0x3461740()*0.00294499);
}

double NNfunction-gg::synapse0x346be60() {
   return (neuron0x3461a80()*0.0334253);
}

double NNfunction-gg::synapse0x346bea0() {
   return (neuron0x3461dc0()*0.01559);
}

double NNfunction-gg::synapse0x346bee0() {
   return (neuron0x3462100()*-0.00232083);
}

double NNfunction-gg::synapse0x346bf20() {
   return (neuron0x3462440()*-0.0146455);
}

double NNfunction-gg::synapse0x346bf60() {
   return (neuron0x3462780()*0.0142552);
}

double NNfunction-gg::synapse0x346bfa0() {
   return (neuron0x3462ac0()*-0.00975225);
}

double NNfunction-gg::synapse0x346bfe0() {
   return (neuron0x3462e00()*0.0223841);
}

double NNfunction-gg::synapse0x346c020() {
   return (neuron0x3463140()*-0.035895);
}

double NNfunction-gg::synapse0x346c060() {
   return (neuron0x3463480()*0.0275465);
}

double NNfunction-gg::synapse0x346c0a0() {
   return (neuron0x34637c0()*0.015001);
}

double NNfunction-gg::synapse0x346c0e0() {
   return (neuron0x3463b00()*0.0358557);
}

double NNfunction-gg::synapse0x346ba60() {
   return (neuron0x3463e40()*-0.0324455);
}

double NNfunction-gg::synapse0x346baa0() {
   return (neuron0x34643a0()*-0.00180004);
}

double NNfunction-gg::synapse0x346c230() {
   return (neuron0x3464650()*0.00845832);
}

double NNfunction-gg::synapse0x346c270() {
   return (neuron0x3464990()*-0.00692732);
}

double NNfunction-gg::synapse0x346c2b0() {
   return (neuron0x3464cd0()*-0.0162074);
}

double NNfunction-gg::synapse0x346c2f0() {
   return (neuron0x3465010()*-0.00242862);
}

double NNfunction-gg::synapse0x346c330() {
   return (neuron0x3465350()*0.00598349);
}

double NNfunction-gg::synapse0x346c370() {
   return (neuron0x3465690()*0.0225052);
}

double NNfunction-gg::synapse0x346c6f0() {
   return (neuron0x3460ad0()*0.0389823);
}

double NNfunction-gg::synapse0x346c730() {
   return (neuron0x3460d80()*-0.0330997);
}

double NNfunction-gg::synapse0x346c770() {
   return (neuron0x34610c0()*0.00888835);
}

double NNfunction-gg::synapse0x346c7b0() {
   return (neuron0x3461400()*0.96436);
}

double NNfunction-gg::synapse0x346c7f0() {
   return (neuron0x3461740()*0.0990898);
}

double NNfunction-gg::synapse0x346c830() {
   return (neuron0x3461a80()*0.00920331);
}

double NNfunction-gg::synapse0x346c870() {
   return (neuron0x3461dc0()*0.0429862);
}

double NNfunction-gg::synapse0x346c8b0() {
   return (neuron0x3462100()*0.0567498);
}

double NNfunction-gg::synapse0x346c8f0() {
   return (neuron0x3462440()*0.0784818);
}

double NNfunction-gg::synapse0x346c930() {
   return (neuron0x3462780()*0.0775682);
}

double NNfunction-gg::synapse0x346c970() {
   return (neuron0x3462ac0()*0.0552924);
}

double NNfunction-gg::synapse0x346c9b0() {
   return (neuron0x3462e00()*-0.0140664);
}

double NNfunction-gg::synapse0x346c9f0() {
   return (neuron0x3463140()*-0.108329);
}

double NNfunction-gg::synapse0x346ca30() {
   return (neuron0x3463480()*-0.113764);
}

double NNfunction-gg::synapse0x346ca70() {
   return (neuron0x34637c0()*0.558731);
}

double NNfunction-gg::synapse0x346cab0() {
   return (neuron0x3463b00()*-0.0173411);
}

double NNfunction-gg::synapse0x346c540() {
   return (neuron0x3463e40()*-0.141304);
}

double NNfunction-gg::synapse0x346c580() {
   return (neuron0x34643a0()*0.0303421);
}

double NNfunction-gg::synapse0x346cc00() {
   return (neuron0x3464650()*-0.123864);
}

double NNfunction-gg::synapse0x346cc40() {
   return (neuron0x3464990()*-0.015424);
}

double NNfunction-gg::synapse0x346cc80() {
   return (neuron0x3464cd0()*0.0612757);
}

double NNfunction-gg::synapse0x346ccc0() {
   return (neuron0x3465010()*0.0403625);
}

double NNfunction-gg::synapse0x346cd00() {
   return (neuron0x3465350()*-0.0615173);
}

double NNfunction-gg::synapse0x346cd40() {
   return (neuron0x3465690()*-0.0450401);
}

double NNfunction-gg::synapse0x346d0c0() {
   return (neuron0x3460ad0()*-0.00732732);
}

double NNfunction-gg::synapse0x346d100() {
   return (neuron0x3460d80()*0.0175472);
}

double NNfunction-gg::synapse0x346d140() {
   return (neuron0x34610c0()*0.0240145);
}

double NNfunction-gg::synapse0x346d180() {
   return (neuron0x3461400()*7.03449);
}

double NNfunction-gg::synapse0x346d1c0() {
   return (neuron0x3461740()*0.0125556);
}

double NNfunction-gg::synapse0x346d200() {
   return (neuron0x3461a80()*0.0531573);
}

double NNfunction-gg::synapse0x346d240() {
   return (neuron0x3461dc0()*0.0419687);
}

double NNfunction-gg::synapse0x346d280() {
   return (neuron0x3462100()*0.00577341);
}

double NNfunction-gg::synapse0x346d2c0() {
   return (neuron0x3462440()*-0.030109);
}

double NNfunction-gg::synapse0x346d300() {
   return (neuron0x3462780()*0.0166026);
}

double NNfunction-gg::synapse0x346d340() {
   return (neuron0x3462ac0()*0.0162438);
}

double NNfunction-gg::synapse0x346d380() {
   return (neuron0x3462e00()*0.0325485);
}

double NNfunction-gg::synapse0x346d3c0() {
   return (neuron0x3463140()*-0.0636592);
}

double NNfunction-gg::synapse0x346d400() {
   return (neuron0x3463480()*-0.00520036);
}

double NNfunction-gg::synapse0x346d440() {
   return (neuron0x34637c0()*0.0241754);
}

double NNfunction-gg::synapse0x346d480() {
   return (neuron0x3463b00()*0.0262344);
}

double NNfunction-gg::synapse0x346cf10() {
   return (neuron0x3463e40()*-0.068184);
}

double NNfunction-gg::synapse0x346cf50() {
   return (neuron0x34643a0()*0.00539917);
}

double NNfunction-gg::synapse0x3469ce0() {
   return (neuron0x3464650()*-0.0325813);
}

double NNfunction-gg::synapse0x3469d20() {
   return (neuron0x3464990()*-0.00402293);
}

double NNfunction-gg::synapse0x3469d60() {
   return (neuron0x3464cd0()*-0.0434043);
}

double NNfunction-gg::synapse0x3469da0() {
   return (neuron0x3465010()*0.0070276);
}

double NNfunction-gg::synapse0x3469de0() {
   return (neuron0x3465350()*-0.00847327);
}

double NNfunction-gg::synapse0x3469e20() {
   return (neuron0x3465690()*0.0196167);
}

double NNfunction-gg::synapse0x346a1a0() {
   return (neuron0x3460ad0()*-0.0596008);
}

double NNfunction-gg::synapse0x346a1e0() {
   return (neuron0x3460d80()*0.0904838);
}

double NNfunction-gg::synapse0x346a220() {
   return (neuron0x34610c0()*0.14605);
}

double NNfunction-gg::synapse0x346a260() {
   return (neuron0x3461400()*-1.31759);
}

double NNfunction-gg::synapse0x346a2a0() {
   return (neuron0x3461740()*-0.0946895);
}

double NNfunction-gg::synapse0x346a2e0() {
   return (neuron0x3461a80()*-0.0576572);
}

double NNfunction-gg::synapse0x346a320() {
   return (neuron0x3461dc0()*0.0408714);
}

double NNfunction-gg::synapse0x346a360() {
   return (neuron0x3462100()*-0.277566);
}

double NNfunction-gg::synapse0x346a3a0() {
   return (neuron0x3462440()*0.208279);
}

double NNfunction-gg::synapse0x346a3e0() {
   return (neuron0x3462780()*0.00703737);
}

double NNfunction-gg::synapse0x346a420() {
   return (neuron0x3462ac0()*0.254204);
}

double NNfunction-gg::synapse0x346a460() {
   return (neuron0x3462e00()*0.0022074);
}

double NNfunction-gg::synapse0x346a4a0() {
   return (neuron0x3463140()*-0.366241);
}

double NNfunction-gg::synapse0x346e5e0() {
   return (neuron0x3463480()*0.141127);
}

double NNfunction-gg::synapse0x346e620() {
   return (neuron0x34637c0()*-0.44424);
}

double NNfunction-gg::synapse0x346e660() {
   return (neuron0x3463b00()*0.333665);
}

double NNfunction-gg::synapse0x3469ff0() {
   return (neuron0x3463e40()*0.617325);
}

double NNfunction-gg::synapse0x346a030() {
   return (neuron0x34643a0()*0.455482);
}

double NNfunction-gg::synapse0x346e7b0() {
   return (neuron0x3464650()*0.405407);
}

double NNfunction-gg::synapse0x346e7f0() {
   return (neuron0x3464990()*0.204585);
}

double NNfunction-gg::synapse0x346e830() {
   return (neuron0x3464cd0()*0.410409);
}

double NNfunction-gg::synapse0x346e870() {
   return (neuron0x3465010()*-0.180522);
}

double NNfunction-gg::synapse0x346e8b0() {
   return (neuron0x3465350()*-0.367186);
}

double NNfunction-gg::synapse0x346e8f0() {
   return (neuron0x3465690()*0.252686);
}

double NNfunction-gg::synapse0x346ec70() {
   return (neuron0x3460ad0()*-0.423479);
}

double NNfunction-gg::synapse0x346ecb0() {
   return (neuron0x3460d80()*0.0918993);
}

double NNfunction-gg::synapse0x346ecf0() {
   return (neuron0x34610c0()*-0.658822);
}

double NNfunction-gg::synapse0x346ed30() {
   return (neuron0x3461400()*-0.871299);
}

double NNfunction-gg::synapse0x346ed70() {
   return (neuron0x3461740()*0.0228298);
}

double NNfunction-gg::synapse0x346edb0() {
   return (neuron0x3461a80()*0.457443);
}

double NNfunction-gg::synapse0x346edf0() {
   return (neuron0x3461dc0()*0.113541);
}

double NNfunction-gg::synapse0x346ee30() {
   return (neuron0x3462100()*-0.522516);
}

double NNfunction-gg::synapse0x346ee70() {
   return (neuron0x3462440()*0.314322);
}

double NNfunction-gg::synapse0x346eeb0() {
   return (neuron0x3462780()*-0.165964);
}

double NNfunction-gg::synapse0x346eef0() {
   return (neuron0x3462ac0()*0.347379);
}

double NNfunction-gg::synapse0x346ef30() {
   return (neuron0x3462e00()*-0.196055);
}

double NNfunction-gg::synapse0x346ef70() {
   return (neuron0x3463140()*0.335524);
}

double NNfunction-gg::synapse0x346efb0() {
   return (neuron0x3463480()*-0.276708);
}

double NNfunction-gg::synapse0x346eff0() {
   return (neuron0x34637c0()*0.0597703);
}

double NNfunction-gg::synapse0x346f030() {
   return (neuron0x3463b00()*-0.000230591);
}

double NNfunction-gg::synapse0x346eac0() {
   return (neuron0x3463e40()*-0.469545);
}

double NNfunction-gg::synapse0x346eb00() {
   return (neuron0x34643a0()*-0.402159);
}

double NNfunction-gg::synapse0x346f180() {
   return (neuron0x3464650()*-0.080692);
}

double NNfunction-gg::synapse0x346f1c0() {
   return (neuron0x3464990()*-0.350689);
}

double NNfunction-gg::synapse0x346f200() {
   return (neuron0x3464cd0()*-0.235313);
}

double NNfunction-gg::synapse0x346f240() {
   return (neuron0x3465010()*0.0577817);
}

double NNfunction-gg::synapse0x346f280() {
   return (neuron0x3465350()*-0.175223);
}

double NNfunction-gg::synapse0x346f2c0() {
   return (neuron0x3465690()*-0.455712);
}

double NNfunction-gg::synapse0x346f640() {
   return (neuron0x3460ad0()*0.346984);
}

double NNfunction-gg::synapse0x346f680() {
   return (neuron0x3460d80()*0.433777);
}

double NNfunction-gg::synapse0x346f6c0() {
   return (neuron0x34610c0()*-0.383086);
}

double NNfunction-gg::synapse0x346f700() {
   return (neuron0x3461400()*-2.96596);
}

double NNfunction-gg::synapse0x346f740() {
   return (neuron0x3461740()*0.434782);
}

double NNfunction-gg::synapse0x346f780() {
   return (neuron0x3461a80()*0.169457);
}

double NNfunction-gg::synapse0x346f7c0() {
   return (neuron0x3461dc0()*0.277609);
}

double NNfunction-gg::synapse0x346f800() {
   return (neuron0x3462100()*0.220343);
}

double NNfunction-gg::synapse0x346f840() {
   return (neuron0x3462440()*0.297579);
}

double NNfunction-gg::synapse0x346f880() {
   return (neuron0x3462780()*0.261471);
}

double NNfunction-gg::synapse0x346f8c0() {
   return (neuron0x3462ac0()*0.363566);
}

double NNfunction-gg::synapse0x346f900() {
   return (neuron0x3462e00()*-0.222869);
}

double NNfunction-gg::synapse0x346f940() {
   return (neuron0x3463140()*-0.286222);
}

double NNfunction-gg::synapse0x346f980() {
   return (neuron0x3463480()*-0.141085);
}

double NNfunction-gg::synapse0x346f9c0() {
   return (neuron0x34637c0()*0.194633);
}

double NNfunction-gg::synapse0x346fa00() {
   return (neuron0x3463b00()*-0.283606);
}

double NNfunction-gg::synapse0x346f490() {
   return (neuron0x3463e40()*-0.417811);
}

double NNfunction-gg::synapse0x346f4d0() {
   return (neuron0x34643a0()*-0.125267);
}

double NNfunction-gg::synapse0x346fb50() {
   return (neuron0x3464650()*0.127638);
}

double NNfunction-gg::synapse0x346fb90() {
   return (neuron0x3464990()*0.20431);
}

double NNfunction-gg::synapse0x346fbd0() {
   return (neuron0x3464cd0()*-0.624904);
}

double NNfunction-gg::synapse0x346fc10() {
   return (neuron0x3465010()*0.305038);
}

double NNfunction-gg::synapse0x346fc50() {
   return (neuron0x3465350()*-0.201639);
}

double NNfunction-gg::synapse0x346fc90() {
   return (neuron0x3465690()*0.396237);
}

double NNfunction-gg::synapse0x3470010() {
   return (neuron0x3460ad0()*-0.0352999);
}

double NNfunction-gg::synapse0x3470050() {
   return (neuron0x3460d80()*0.00489066);
}

double NNfunction-gg::synapse0x3470090() {
   return (neuron0x34610c0()*0.0366017);
}

double NNfunction-gg::synapse0x34700d0() {
   return (neuron0x3461400()*-0.473818);
}

double NNfunction-gg::synapse0x3470110() {
   return (neuron0x3461740()*-0.013136);
}

double NNfunction-gg::synapse0x3470150() {
   return (neuron0x3461a80()*0.124573);
}

double NNfunction-gg::synapse0x3470190() {
   return (neuron0x3461dc0()*0.0148391);
}

double NNfunction-gg::synapse0x34701d0() {
   return (neuron0x3462100()*0.0378141);
}

double NNfunction-gg::synapse0x3470210() {
   return (neuron0x3462440()*0.0148221);
}

double NNfunction-gg::synapse0x3470250() {
   return (neuron0x3462780()*0.0232101);
}

double NNfunction-gg::synapse0x3470290() {
   return (neuron0x3462ac0()*0.021531);
}

double NNfunction-gg::synapse0x34702d0() {
   return (neuron0x3462e00()*-0.621453);
}

double NNfunction-gg::synapse0x3470310() {
   return (neuron0x3463140()*0.0798908);
}

double NNfunction-gg::synapse0x3470350() {
   return (neuron0x3463480()*0.149148);
}

double NNfunction-gg::synapse0x3470390() {
   return (neuron0x34637c0()*0.33697);
}

double NNfunction-gg::synapse0x34703d0() {
   return (neuron0x3463b00()*0.0674398);
}

double NNfunction-gg::synapse0x346fe60() {
   return (neuron0x3463e40()*0.0627232);
}

double NNfunction-gg::synapse0x346fea0() {
   return (neuron0x34643a0()*-0.382038);
}

double NNfunction-gg::synapse0x3470520() {
   return (neuron0x3464650()*0.12498);
}

double NNfunction-gg::synapse0x3470560() {
   return (neuron0x3464990()*0.0168297);
}

double NNfunction-gg::synapse0x34705a0() {
   return (neuron0x3464cd0()*0.100759);
}

double NNfunction-gg::synapse0x34705e0() {
   return (neuron0x3465010()*-0.0191335);
}

double NNfunction-gg::synapse0x3470620() {
   return (neuron0x3465350()*-0.0464955);
}

double NNfunction-gg::synapse0x3470660() {
   return (neuron0x3465690()*0.0276066);
}

double NNfunction-gg::synapse0x34709e0() {
   return (neuron0x3460ad0()*0.100816);
}

double NNfunction-gg::synapse0x3460c60() {
   return (neuron0x3460d80()*0.0572901);
}

double NNfunction-gg::synapse0x3460ca0() {
   return (neuron0x34610c0()*-0.344573);
}

double NNfunction-gg::synapse0x3460fa0() {
   return (neuron0x3461400()*-1.93401);
}

double NNfunction-gg::synapse0x3460fe0() {
   return (neuron0x3461740()*0.253081);
}

double NNfunction-gg::synapse0x34612e0() {
   return (neuron0x3461a80()*0.0478573);
}

double NNfunction-gg::synapse0x3461320() {
   return (neuron0x3461dc0()*0.030661);
}

double NNfunction-gg::synapse0x3461620() {
   return (neuron0x3462100()*0.17252);
}

double NNfunction-gg::synapse0x3461660() {
   return (neuron0x3462440()*0.111545);
}

double NNfunction-gg::synapse0x3461960() {
   return (neuron0x3462780()*-0.0574059);
}

double NNfunction-gg::synapse0x34619a0() {
   return (neuron0x3462ac0()*0.0817109);
}

double NNfunction-gg::synapse0x3461ca0() {
   return (neuron0x3462e00()*-0.21005);
}

double NNfunction-gg::synapse0x3461ce0() {
   return (neuron0x3463140()*-0.901929);
}

double NNfunction-gg::synapse0x3461fe0() {
   return (neuron0x3463480()*-0.465861);
}

double NNfunction-gg::synapse0x3462020() {
   return (neuron0x34637c0()*0.238452);
}

double NNfunction-gg::synapse0x3462320() {
   return (neuron0x3463b00()*-0.655502);
}

double NNfunction-gg::synapse0x3462360() {
   return (neuron0x3463e40()*0.0983655);
}

double NNfunction-gg::synapse0x3462660() {
   return (neuron0x34643a0()*-0.196613);
}

double NNfunction-gg::synapse0x34626a0() {
   return (neuron0x3464650()*-0.313566);
}

double NNfunction-gg::synapse0x34629a0() {
   return (neuron0x3464990()*-0.341557);
}

double NNfunction-gg::synapse0x34629e0() {
   return (neuron0x3464cd0()*1.20095);
}

double NNfunction-gg::synapse0x3462ce0() {
   return (neuron0x3465010()*-0.227072);
}

double NNfunction-gg::synapse0x3462d20() {
   return (neuron0x3465350()*-0.566404);
}

double NNfunction-gg::synapse0x3463020() {
   return (neuron0x3465690()*0.414001);
}

double NNfunction-gg::synapse0x3463060() {
   return (neuron0x3460ad0()*-0.220573);
}

double NNfunction-gg::synapse0x3463d20() {
   return (neuron0x3460d80()*0.0939183);
}

double NNfunction-gg::synapse0x3463d60() {
   return (neuron0x34610c0()*-0.390444);
}

double NNfunction-gg::synapse0x3470830() {
   return (neuron0x3461400()*-0.632128);
}

double NNfunction-gg::synapse0x3470870() {
   return (neuron0x3461740()*-0.0370869);
}

double NNfunction-gg::synapse0x3464060() {
   return (neuron0x3461a80()*0.133344);
}

double NNfunction-gg::synapse0x34640a0() {
   return (neuron0x3461dc0()*-0.13043);
}

double NNfunction-gg::synapse0x3464530() {
   return (neuron0x3462100()*-0.0163972);
}

double NNfunction-gg::synapse0x3464570() {
   return (neuron0x3462440()*0.0135049);
}

double NNfunction-gg::synapse0x3464870() {
   return (neuron0x3462780()*0.0101818);
}

double NNfunction-gg::synapse0x34648b0() {
   return (neuron0x3462ac0()*0.0549726);
}

double NNfunction-gg::synapse0x3464bb0() {
   return (neuron0x3462e00()*0.162088);
}

double NNfunction-gg::synapse0x3464bf0() {
   return (neuron0x3463140()*-0.170169);
}

double NNfunction-gg::synapse0x3464ef0() {
   return (neuron0x3463480()*0.0782794);
}

double NNfunction-gg::synapse0x3464f30() {
   return (neuron0x34637c0()*0.111697);
}

double NNfunction-gg::synapse0x3465230() {
   return (neuron0x3463b00()*-0.0293507);
}

double NNfunction-gg::synapse0x3465270() {
   return (neuron0x3463e40()*0.38715);
}

double NNfunction-gg::synapse0x3465570() {
   return (neuron0x34643a0()*-0.357235);
}

double NNfunction-gg::synapse0x34655b0() {
   return (neuron0x3464650()*0.215695);
}

double NNfunction-gg::synapse0x34658b0() {
   return (neuron0x3464990()*-0.0333361);
}

double NNfunction-gg::synapse0x34658f0() {
   return (neuron0x3464cd0()*0.606955);
}

double NNfunction-gg::synapse0x3463360() {
   return (neuron0x3465010()*-0.216206);
}

double NNfunction-gg::synapse0x34633a0() {
   return (neuron0x3465350()*-0.225694);
}

double NNfunction-gg::synapse0x3472750() {
   return (neuron0x3465690()*-0.273682);
}

double NNfunction-gg::synapse0x3472ad0() {
   return (neuron0x3460ad0()*0.139646);
}

double NNfunction-gg::synapse0x3472b10() {
   return (neuron0x3460d80()*-0.0091057);
}

double NNfunction-gg::synapse0x3472b50() {
   return (neuron0x34610c0()*0.0977367);
}

double NNfunction-gg::synapse0x3472b90() {
   return (neuron0x3461400()*2.36179);
}

double NNfunction-gg::synapse0x3472bd0() {
   return (neuron0x3461740()*-0.0436167);
}

double NNfunction-gg::synapse0x3472c10() {
   return (neuron0x3461a80()*-0.128606);
}

double NNfunction-gg::synapse0x3472c50() {
   return (neuron0x3461dc0()*0.0233803);
}

double NNfunction-gg::synapse0x3472c90() {
   return (neuron0x3462100()*-0.0583672);
}

double NNfunction-gg::synapse0x3472cd0() {
   return (neuron0x3462440()*-0.120486);
}

double NNfunction-gg::synapse0x3472d10() {
   return (neuron0x3462780()*-0.0258914);
}

double NNfunction-gg::synapse0x3472d50() {
   return (neuron0x3462ac0()*0.0127494);
}

double NNfunction-gg::synapse0x3472d90() {
   return (neuron0x3462e00()*-0.0326197);
}

double NNfunction-gg::synapse0x3472dd0() {
   return (neuron0x3463140()*-0.200985);
}

double NNfunction-gg::synapse0x3472e10() {
   return (neuron0x3463480()*0.698489);
}

double NNfunction-gg::synapse0x3472e50() {
   return (neuron0x34637c0()*-0.0799474);
}

double NNfunction-gg::synapse0x3472e90() {
   return (neuron0x3463b00()*0.0886679);
}

double NNfunction-gg::synapse0x3472920() {
   return (neuron0x3463e40()*0.155674);
}

double NNfunction-gg::synapse0x3472960() {
   return (neuron0x34643a0()*-0.0392341);
}

double NNfunction-gg::synapse0x3472fe0() {
   return (neuron0x3464650()*0.132433);
}

double NNfunction-gg::synapse0x3473020() {
   return (neuron0x3464990()*0.0681496);
}

double NNfunction-gg::synapse0x3473060() {
   return (neuron0x3464cd0()*0.0983114);
}

double NNfunction-gg::synapse0x34730a0() {
   return (neuron0x3465010()*0.0359118);
}

double NNfunction-gg::synapse0x34730e0() {
   return (neuron0x3465350()*-0.153516);
}

double NNfunction-gg::synapse0x3473120() {
   return (neuron0x3465690()*-0.109799);
}

double NNfunction-gg::synapse0x34734a0() {
   return (neuron0x3460ad0()*-2.8296e-06);
}

double NNfunction-gg::synapse0x34734e0() {
   return (neuron0x3460d80()*0.000442868);
}

double NNfunction-gg::synapse0x3473520() {
   return (neuron0x34610c0()*-0.0911721);
}

double NNfunction-gg::synapse0x3473560() {
   return (neuron0x3461400()*-1.15019);
}

double NNfunction-gg::synapse0x34735a0() {
   return (neuron0x3461740()*0.0171497);
}

double NNfunction-gg::synapse0x34735e0() {
   return (neuron0x3461a80()*-0.0387338);
}

double NNfunction-gg::synapse0x3473620() {
   return (neuron0x3461dc0()*-0.0201428);
}

double NNfunction-gg::synapse0x3473660() {
   return (neuron0x3462100()*-0.0238573);
}

double NNfunction-gg::synapse0x34736a0() {
   return (neuron0x3462440()*-0.0508687);
}

double NNfunction-gg::synapse0x34736e0() {
   return (neuron0x3462780()*-0.0143501);
}

double NNfunction-gg::synapse0x3473720() {
   return (neuron0x3462ac0()*-0.0106758);
}

double NNfunction-gg::synapse0x3473760() {
   return (neuron0x3462e00()*0.0478609);
}

double NNfunction-gg::synapse0x34737a0() {
   return (neuron0x3463140()*-0.0292316);
}

double NNfunction-gg::synapse0x34737e0() {
   return (neuron0x3463480()*-0.123393);
}

double NNfunction-gg::synapse0x3473820() {
   return (neuron0x34637c0()*-0.0187876);
}

double NNfunction-gg::synapse0x3473860() {
   return (neuron0x3463b00()*-0.0344435);
}

double NNfunction-gg::synapse0x34732f0() {
   return (neuron0x3463e40()*-0.146637);
}

double NNfunction-gg::synapse0x3473330() {
   return (neuron0x34643a0()*-0.0661749);
}

double NNfunction-gg::synapse0x34739b0() {
   return (neuron0x3464650()*-0.0317794);
}

double NNfunction-gg::synapse0x34739f0() {
   return (neuron0x3464990()*-0.0928074);
}

double NNfunction-gg::synapse0x3473a30() {
   return (neuron0x3464cd0()*-0.104273);
}

double NNfunction-gg::synapse0x3473a70() {
   return (neuron0x3465010()*0.0189257);
}

double NNfunction-gg::synapse0x3473ab0() {
   return (neuron0x3465350()*0.0392498);
}

double NNfunction-gg::synapse0x3473af0() {
   return (neuron0x3465690()*-0.0192193);
}

double NNfunction-gg::synapse0x3473e70() {
   return (neuron0x3460ad0()*0.00680395);
}

double NNfunction-gg::synapse0x3473eb0() {
   return (neuron0x3460d80()*0.00548284);
}

double NNfunction-gg::synapse0x3473ef0() {
   return (neuron0x34610c0()*0.0939323);
}

double NNfunction-gg::synapse0x3473f30() {
   return (neuron0x3461400()*0.316312);
}

double NNfunction-gg::synapse0x3473f70() {
   return (neuron0x3461740()*-0.111102);
}

double NNfunction-gg::synapse0x3473fb0() {
   return (neuron0x3461a80()*-0.0345023);
}

double NNfunction-gg::synapse0x3473ff0() {
   return (neuron0x3461dc0()*-0.0213851);
}

double NNfunction-gg::synapse0x3474030() {
   return (neuron0x3462100()*-0.0881133);
}

double NNfunction-gg::synapse0x3474070() {
   return (neuron0x3462440()*-0.061146);
}

double NNfunction-gg::synapse0x34740b0() {
   return (neuron0x3462780()*-0.112267);
}

double NNfunction-gg::synapse0x34740f0() {
   return (neuron0x3462ac0()*-0.0679648);
}

double NNfunction-gg::synapse0x3474130() {
   return (neuron0x3462e00()*-0.186923);
}

double NNfunction-gg::synapse0x3474170() {
   return (neuron0x3463140()*0.0165393);
}

double NNfunction-gg::synapse0x34741b0() {
   return (neuron0x3463480()*0.300689);
}

double NNfunction-gg::synapse0x34741f0() {
   return (neuron0x34637c0()*-0.070515);
}

double NNfunction-gg::synapse0x3474230() {
   return (neuron0x3463b00()*0.0448252);
}

double NNfunction-gg::synapse0x3473cc0() {
   return (neuron0x3463e40()*0.262705);
}

double NNfunction-gg::synapse0x3473d00() {
   return (neuron0x34643a0()*0.0239778);
}

double NNfunction-gg::synapse0x3474380() {
   return (neuron0x3464650()*0.0700137);
}

double NNfunction-gg::synapse0x34743c0() {
   return (neuron0x3464990()*0.0828839);
}

double NNfunction-gg::synapse0x3474400() {
   return (neuron0x3464cd0()*0.0328878);
}

double NNfunction-gg::synapse0x3474440() {
   return (neuron0x3465010()*-0.0519926);
}

double NNfunction-gg::synapse0x3474480() {
   return (neuron0x3465350()*0.0197821);
}

double NNfunction-gg::synapse0x34744c0() {
   return (neuron0x3465690()*0.0638657);
}

double NNfunction-gg::synapse0x3474840() {
   return (neuron0x3460ad0()*-0.00279547);
}

double NNfunction-gg::synapse0x3474880() {
   return (neuron0x3460d80()*-0.0020032);
}

double NNfunction-gg::synapse0x34748c0() {
   return (neuron0x34610c0()*-0.0151048);
}

double NNfunction-gg::synapse0x3474900() {
   return (neuron0x3461400()*-1.14415);
}

double NNfunction-gg::synapse0x3474940() {
   return (neuron0x3461740()*-0.0090544);
}

double NNfunction-gg::synapse0x3474980() {
   return (neuron0x3461a80()*0.00282955);
}

double NNfunction-gg::synapse0x34749c0() {
   return (neuron0x3461dc0()*-0.0184914);
}

double NNfunction-gg::synapse0x3474a00() {
   return (neuron0x3462100()*0.000403325);
}

double NNfunction-gg::synapse0x3474a40() {
   return (neuron0x3462440()*0.0255568);
}

double NNfunction-gg::synapse0x3474a80() {
   return (neuron0x3462780()*-0.008401);
}

double NNfunction-gg::synapse0x3474ac0() {
   return (neuron0x3462ac0()*0.0245852);
}

double NNfunction-gg::synapse0x3474b00() {
   return (neuron0x3462e00()*0.150074);
}

double NNfunction-gg::synapse0x3474b40() {
   return (neuron0x3463140()*-0.0544166);
}

double NNfunction-gg::synapse0x3474b80() {
   return (neuron0x3463480()*-0.0586056);
}

double NNfunction-gg::synapse0x3474bc0() {
   return (neuron0x34637c0()*-0.22132);
}

double NNfunction-gg::synapse0x3474c00() {
   return (neuron0x3463b00()*-0.0454088);
}

double NNfunction-gg::synapse0x3474690() {
   return (neuron0x3463e40()*-0.0334755);
}

double NNfunction-gg::synapse0x34746d0() {
   return (neuron0x34643a0()*0.765414);
}

double NNfunction-gg::synapse0x3474d50() {
   return (neuron0x3464650()*-0.081026);
}

double NNfunction-gg::synapse0x3474d90() {
   return (neuron0x3464990()*-0.0360137);
}

double NNfunction-gg::synapse0x3474dd0() {
   return (neuron0x3464cd0()*-0.0840553);
}

double NNfunction-gg::synapse0x3474e10() {
   return (neuron0x3465010()*0.0269992);
}

double NNfunction-gg::synapse0x3474e50() {
   return (neuron0x3465350()*0.0126701);
}

double NNfunction-gg::synapse0x3474e90() {
   return (neuron0x3465690()*0.00230832);
}

double NNfunction-gg::synapse0x3475210() {
   return (neuron0x3460ad0()*-0.191516);
}

double NNfunction-gg::synapse0x3475250() {
   return (neuron0x3460d80()*-0.128588);
}

double NNfunction-gg::synapse0x3475290() {
   return (neuron0x34610c0()*-0.390302);
}

double NNfunction-gg::synapse0x34752d0() {
   return (neuron0x3461400()*0.053572);
}

double NNfunction-gg::synapse0x3475310() {
   return (neuron0x3461740()*-0.486453);
}

double NNfunction-gg::synapse0x3475350() {
   return (neuron0x3461a80()*-0.0272577);
}

double NNfunction-gg::synapse0x3475390() {
   return (neuron0x3461dc0()*-0.135224);
}

double NNfunction-gg::synapse0x34753d0() {
   return (neuron0x3462100()*0.423124);
}

double NNfunction-gg::synapse0x3475410() {
   return (neuron0x3462440()*-0.252646);
}

double NNfunction-gg::synapse0x346d5d0() {
   return (neuron0x3462780()*0.165766);
}

double NNfunction-gg::synapse0x346d610() {
   return (neuron0x3462ac0()*0.11761);
}

double NNfunction-gg::synapse0x346d650() {
   return (neuron0x3462e00()*-0.336423);
}

double NNfunction-gg::synapse0x346d690() {
   return (neuron0x3463140()*0.230163);
}

double NNfunction-gg::synapse0x346d6d0() {
   return (neuron0x3463480()*0.645709);
}

double NNfunction-gg::synapse0x346d710() {
   return (neuron0x34637c0()*0.221599);
}

double NNfunction-gg::synapse0x346d750() {
   return (neuron0x3463b00()*0.0668807);
}

double NNfunction-gg::synapse0x3475060() {
   return (neuron0x3463e40()*0.183584);
}

double NNfunction-gg::synapse0x34750a0() {
   return (neuron0x34643a0()*0.641249);
}

double NNfunction-gg::synapse0x346d8a0() {
   return (neuron0x3464650()*0.238547);
}

double NNfunction-gg::synapse0x346d8e0() {
   return (neuron0x3464990()*0.786357);
}

double NNfunction-gg::synapse0x346d920() {
   return (neuron0x3464cd0()*0.681424);
}

double NNfunction-gg::synapse0x346d960() {
   return (neuron0x3465010()*0.224282);
}

double NNfunction-gg::synapse0x346d9a0() {
   return (neuron0x3465350()*-0.36509);
}

double NNfunction-gg::synapse0x346d9e0() {
   return (neuron0x3465690()*0.267982);
}

double NNfunction-gg::synapse0x346dd60() {
   return (neuron0x3460ad0()*0.0185737);
}

double NNfunction-gg::synapse0x346dda0() {
   return (neuron0x3460d80()*-0.00184826);
}

double NNfunction-gg::synapse0x346dde0() {
   return (neuron0x34610c0()*-0.0289345);
}

double NNfunction-gg::synapse0x346de20() {
   return (neuron0x3461400()*-1.20357);
}

double NNfunction-gg::synapse0x346de60() {
   return (neuron0x3461740()*0.0595441);
}

double NNfunction-gg::synapse0x346dea0() {
   return (neuron0x3461a80()*-0.0161652);
}

double NNfunction-gg::synapse0x346dee0() {
   return (neuron0x3461dc0()*0.00934086);
}

double NNfunction-gg::synapse0x346df20() {
   return (neuron0x3462100()*0.0180707);
}

double NNfunction-gg::synapse0x346df60() {
   return (neuron0x3462440()*0.0444818);
}

double NNfunction-gg::synapse0x346dfa0() {
   return (neuron0x3462780()*0.0527843);
}

double NNfunction-gg::synapse0x346dfe0() {
   return (neuron0x3462ac0()*0.0230645);
}

double NNfunction-gg::synapse0x346e020() {
   return (neuron0x3462e00()*0.00309153);
}

double NNfunction-gg::synapse0x346e060() {
   return (neuron0x3463140()*0.052143);
}

double NNfunction-gg::synapse0x346e0a0() {
   return (neuron0x3463480()*-0.160933);
}

double NNfunction-gg::synapse0x346e0e0() {
   return (neuron0x34637c0()*-0.636398);
}

double NNfunction-gg::synapse0x346e120() {
   return (neuron0x3463b00()*-0.00111648);
}

double NNfunction-gg::synapse0x346dbb0() {
   return (neuron0x3463e40()*-0.142896);
}

double NNfunction-gg::synapse0x346dbf0() {
   return (neuron0x34643a0()*-0.0594136);
}

double NNfunction-gg::synapse0x346e270() {
   return (neuron0x3464650()*-0.0468836);
}

double NNfunction-gg::synapse0x346e2b0() {
   return (neuron0x3464990()*-0.0313877);
}

double NNfunction-gg::synapse0x346e2f0() {
   return (neuron0x3464cd0()*-0.0614129);
}

double NNfunction-gg::synapse0x346e330() {
   return (neuron0x3465010()*0.0451529);
}

double NNfunction-gg::synapse0x346e370() {
   return (neuron0x3465350()*0.0208506);
}

double NNfunction-gg::synapse0x346e3b0() {
   return (neuron0x3465690()*-0.0239209);
}

double NNfunction-gg::synapse0x346e580() {
   return (neuron0x3460ad0()*-0.0138813);
}

double NNfunction-gg::synapse0x3477610() {
   return (neuron0x3460d80()*0.00371897);
}

double NNfunction-gg::synapse0x3477650() {
   return (neuron0x34610c0()*-0.00414632);
}

double NNfunction-gg::synapse0x3477690() {
   return (neuron0x3461400()*-0.765626);
}

double NNfunction-gg::synapse0x34776d0() {
   return (neuron0x3461740()*0.00921026);
}

double NNfunction-gg::synapse0x3477710() {
   return (neuron0x3461a80()*0.0189694);
}

double NNfunction-gg::synapse0x3477750() {
   return (neuron0x3461dc0()*0.0109594);
}

double NNfunction-gg::synapse0x3477790() {
   return (neuron0x3462100()*0.0188076);
}

double NNfunction-gg::synapse0x34777d0() {
   return (neuron0x3462440()*-0.00974015);
}

double NNfunction-gg::synapse0x3477810() {
   return (neuron0x3462780()*-0.00725315);
}

double NNfunction-gg::synapse0x3477850() {
   return (neuron0x3462ac0()*0.00409685);
}

double NNfunction-gg::synapse0x3477890() {
   return (neuron0x3462e00()*-0.0152511);
}

double NNfunction-gg::synapse0x34778d0() {
   return (neuron0x3463140()*-0.0386091);
}

double NNfunction-gg::synapse0x3477910() {
   return (neuron0x3463480()*-0.0519493);
}

double NNfunction-gg::synapse0x3477950() {
   return (neuron0x34637c0()*0.640619);
}

double NNfunction-gg::synapse0x3477990() {
   return (neuron0x3463b00()*-0.0196239);
}

double NNfunction-gg::synapse0x3477460() {
   return (neuron0x3463e40()*-0.0133508);
}

double NNfunction-gg::synapse0x34774a0() {
   return (neuron0x34643a0()*-0.0324836);
}

double NNfunction-gg::synapse0x3477ae0() {
   return (neuron0x3464650()*0.00685978);
}

double NNfunction-gg::synapse0x3477b20() {
   return (neuron0x3464990()*-0.00251311);
}

double NNfunction-gg::synapse0x3477b60() {
   return (neuron0x3464cd0()*0.0171775);
}

double NNfunction-gg::synapse0x3477ba0() {
   return (neuron0x3465010()*0.00532555);
}

double NNfunction-gg::synapse0x3477be0() {
   return (neuron0x3465350()*-0.00289211);
}

double NNfunction-gg::synapse0x3477c20() {
   return (neuron0x3465690()*-0.00139252);
}

double NNfunction-gg::synapse0x3477fa0() {
   return (neuron0x3460ad0()*0.144581);
}

double NNfunction-gg::synapse0x3477fe0() {
   return (neuron0x3460d80()*-0.0806403);
}

double NNfunction-gg::synapse0x3478020() {
   return (neuron0x34610c0()*0.0628099);
}

double NNfunction-gg::synapse0x3478060() {
   return (neuron0x3461400()*-5.91431);
}

double NNfunction-gg::synapse0x34780a0() {
   return (neuron0x3461740()*-0.133118);
}

double NNfunction-gg::synapse0x34780e0() {
   return (neuron0x3461a80()*-0.167102);
}

double NNfunction-gg::synapse0x3478120() {
   return (neuron0x3461dc0()*-0.0776064);
}

double NNfunction-gg::synapse0x3478160() {
   return (neuron0x3462100()*0.225495);
}

double NNfunction-gg::synapse0x34781a0() {
   return (neuron0x3462440()*-0.128277);
}

double NNfunction-gg::synapse0x34781e0() {
   return (neuron0x3462780()*0.0887967);
}

double NNfunction-gg::synapse0x3478220() {
   return (neuron0x3462ac0()*-0.105775);
}

double NNfunction-gg::synapse0x3478260() {
   return (neuron0x3462e00()*-0.039632);
}

double NNfunction-gg::synapse0x34782a0() {
   return (neuron0x3463140()*0.17593);
}

double NNfunction-gg::synapse0x34782e0() {
   return (neuron0x3463480()*0.139823);
}

double NNfunction-gg::synapse0x3478320() {
   return (neuron0x34637c0()*0.24767);
}

double NNfunction-gg::synapse0x3478360() {
   return (neuron0x3463b00()*0.0582685);
}

double NNfunction-gg::synapse0x3477df0() {
   return (neuron0x3463e40()*-0.364921);
}

double NNfunction-gg::synapse0x3477e30() {
   return (neuron0x34643a0()*-0.152039);
}

double NNfunction-gg::synapse0x34784b0() {
   return (neuron0x3464650()*-0.259599);
}

double NNfunction-gg::synapse0x34784f0() {
   return (neuron0x3464990()*-0.312555);
}

double NNfunction-gg::synapse0x3478530() {
   return (neuron0x3464cd0()*-0.0508811);
}

double NNfunction-gg::synapse0x3478570() {
   return (neuron0x3465010()*0.0716488);
}

double NNfunction-gg::synapse0x34785b0() {
   return (neuron0x3465350()*-0.0101007);
}

double NNfunction-gg::synapse0x34785f0() {
   return (neuron0x3465690()*-0.138004);
}

double NNfunction-gg::synapse0x3478970() {
   return (neuron0x3460ad0()*-0.25465);
}

double NNfunction-gg::synapse0x34789b0() {
   return (neuron0x3460d80()*0.0409789);
}

double NNfunction-gg::synapse0x34789f0() {
   return (neuron0x34610c0()*-0.425375);
}

double NNfunction-gg::synapse0x3478a30() {
   return (neuron0x3461400()*-1.93455);
}

double NNfunction-gg::synapse0x3478a70() {
   return (neuron0x3461740()*0.194071);
}

double NNfunction-gg::synapse0x3478ab0() {
   return (neuron0x3461a80()*-0.273861);
}

double NNfunction-gg::synapse0x3478af0() {
   return (neuron0x3461dc0()*-0.180595);
}

double NNfunction-gg::synapse0x3478b30() {
   return (neuron0x3462100()*-0.769803);
}

double NNfunction-gg::synapse0x3478b70() {
   return (neuron0x3462440()*0.0482291);
}

double NNfunction-gg::synapse0x3478bb0() {
   return (neuron0x3462780()*-0.0142446);
}

double NNfunction-gg::synapse0x3478bf0() {
   return (neuron0x3462ac0()*-0.255558);
}

double NNfunction-gg::synapse0x3478c30() {
   return (neuron0x3462e00()*-0.308276);
}

double NNfunction-gg::synapse0x3478c70() {
   return (neuron0x3463140()*-1.31424);
}

double NNfunction-gg::synapse0x3478cb0() {
   return (neuron0x3463480()*-0.993156);
}

double NNfunction-gg::synapse0x3478cf0() {
   return (neuron0x34637c0()*-0.962715);
}

double NNfunction-gg::synapse0x3478d30() {
   return (neuron0x3463b00()*-0.917783);
}

double NNfunction-gg::synapse0x34787c0() {
   return (neuron0x3463e40()*-0.767406);
}

double NNfunction-gg::synapse0x3478800() {
   return (neuron0x34643a0()*-0.47766);
}

double NNfunction-gg::synapse0x3478e80() {
   return (neuron0x3464650()*-0.997748);
}

double NNfunction-gg::synapse0x3478ec0() {
   return (neuron0x3464990()*-0.432092);
}

double NNfunction-gg::synapse0x3478f00() {
   return (neuron0x3464cd0()*-1.20552);
}

double NNfunction-gg::synapse0x3478f40() {
   return (neuron0x3465010()*0.639704);
}

double NNfunction-gg::synapse0x3478f80() {
   return (neuron0x3465350()*0.563461);
}

double NNfunction-gg::synapse0x3478fc0() {
   return (neuron0x3465690()*-0.0455429);
}

double NNfunction-gg::synapse0x3479340() {
   return (neuron0x3460ad0()*0.0778035);
}

double NNfunction-gg::synapse0x3479380() {
   return (neuron0x3460d80()*-0.0798988);
}

double NNfunction-gg::synapse0x34793c0() {
   return (neuron0x34610c0()*-0.0764989);
}

double NNfunction-gg::synapse0x3479400() {
   return (neuron0x3461400()*-1.75932);
}

double NNfunction-gg::synapse0x3479440() {
   return (neuron0x3461740()*0.0465027);
}

double NNfunction-gg::synapse0x3479480() {
   return (neuron0x3461a80()*-0.0382449);
}

double NNfunction-gg::synapse0x34794c0() {
   return (neuron0x3461dc0()*0.00049311);
}

double NNfunction-gg::synapse0x3479500() {
   return (neuron0x3462100()*-0.031709);
}

double NNfunction-gg::synapse0x3479540() {
   return (neuron0x3462440()*0.0922289);
}

double NNfunction-gg::synapse0x3479580() {
   return (neuron0x3462780()*0.00476955);
}

double NNfunction-gg::synapse0x34795c0() {
   return (neuron0x3462ac0()*0.023135);
}

double NNfunction-gg::synapse0x3479600() {
   return (neuron0x3462e00()*0.291146);
}

double NNfunction-gg::synapse0x3479640() {
   return (neuron0x3463140()*0.152893);
}

double NNfunction-gg::synapse0x3479680() {
   return (neuron0x3463480()*0.268905);
}

double NNfunction-gg::synapse0x34796c0() {
   return (neuron0x34637c0()*0.436434);
}

double NNfunction-gg::synapse0x3479700() {
   return (neuron0x3463b00()*0.150342);
}

double NNfunction-gg::synapse0x3479190() {
   return (neuron0x3463e40()*0.168816);
}

double NNfunction-gg::synapse0x34791d0() {
   return (neuron0x34643a0()*0.0399283);
}

double NNfunction-gg::synapse0x3479850() {
   return (neuron0x3464650()*-0.101245);
}

double NNfunction-gg::synapse0x3479890() {
   return (neuron0x3464990()*0.170596);
}

double NNfunction-gg::synapse0x34798d0() {
   return (neuron0x3464cd0()*-0.0677405);
}

double NNfunction-gg::synapse0x3479910() {
   return (neuron0x3465010()*0.0096745);
}

double NNfunction-gg::synapse0x3479950() {
   return (neuron0x3465350()*-0.0073561);
}

double NNfunction-gg::synapse0x3479990() {
   return (neuron0x3465690()*0.0516458);
}

double NNfunction-gg::synapse0x3479d10() {
   return (neuron0x3460ad0()*0.0597347);
}

double NNfunction-gg::synapse0x3479d50() {
   return (neuron0x3460d80()*-0.2212);
}

double NNfunction-gg::synapse0x3479d90() {
   return (neuron0x34610c0()*-0.553356);
}

double NNfunction-gg::synapse0x3479dd0() {
   return (neuron0x3461400()*3.27037);
}

double NNfunction-gg::synapse0x3479e10() {
   return (neuron0x3461740()*-0.275912);
}

double NNfunction-gg::synapse0x3479e50() {
   return (neuron0x3461a80()*-0.574612);
}

double NNfunction-gg::synapse0x3479e90() {
   return (neuron0x3461dc0()*-0.218033);
}

double NNfunction-gg::synapse0x3479ed0() {
   return (neuron0x3462100()*0.00596529);
}

double NNfunction-gg::synapse0x3479f10() {
   return (neuron0x3462440()*0.0717426);
}

double NNfunction-gg::synapse0x3479f50() {
   return (neuron0x3462780()*0.0905103);
}

double NNfunction-gg::synapse0x3479f90() {
   return (neuron0x3462ac0()*-0.0288667);
}

double NNfunction-gg::synapse0x3479fd0() {
   return (neuron0x3462e00()*0.395036);
}

double NNfunction-gg::synapse0x347a010() {
   return (neuron0x3463140()*-0.0897844);
}

double NNfunction-gg::synapse0x347a050() {
   return (neuron0x3463480()*-0.154749);
}

double NNfunction-gg::synapse0x347a090() {
   return (neuron0x34637c0()*-0.457657);
}

double NNfunction-gg::synapse0x347a0d0() {
   return (neuron0x3463b00()*-0.339516);
}

double NNfunction-gg::synapse0x3479b60() {
   return (neuron0x3463e40()*0.209049);
}

double NNfunction-gg::synapse0x3479ba0() {
   return (neuron0x34643a0()*0.194974);
}

double NNfunction-gg::synapse0x347a220() {
   return (neuron0x3464650()*-0.128246);
}

double NNfunction-gg::synapse0x347a260() {
   return (neuron0x3464990()*-0.0153026);
}

double NNfunction-gg::synapse0x347a2a0() {
   return (neuron0x3464cd0()*-0.657483);
}

double NNfunction-gg::synapse0x347a2e0() {
   return (neuron0x3465010()*-0.0869352);
}

double NNfunction-gg::synapse0x347a320() {
   return (neuron0x3465350()*0.370795);
}

double NNfunction-gg::synapse0x347a360() {
   return (neuron0x3465690()*-0.3204);
}

double NNfunction-gg::synapse0x347a6e0() {
   return (neuron0x3460ad0()*-0.00513721);
}

double NNfunction-gg::synapse0x347a720() {
   return (neuron0x3460d80()*-0.00384383);
}

double NNfunction-gg::synapse0x347a760() {
   return (neuron0x34610c0()*-0.0608811);
}

double NNfunction-gg::synapse0x347a7a0() {
   return (neuron0x3461400()*5.86797);
}

double NNfunction-gg::synapse0x347a7e0() {
   return (neuron0x3461740()*0.000227405);
}

double NNfunction-gg::synapse0x347a820() {
   return (neuron0x3461a80()*0.011706);
}

double NNfunction-gg::synapse0x347a860() {
   return (neuron0x3461dc0()*0.00201076);
}

double NNfunction-gg::synapse0x347a8a0() {
   return (neuron0x3462100()*-0.00135558);
}

double NNfunction-gg::synapse0x347a8e0() {
   return (neuron0x3462440()*0.00161667);
}

double NNfunction-gg::synapse0x347a920() {
   return (neuron0x3462780()*0.0102124);
}

double NNfunction-gg::synapse0x347a960() {
   return (neuron0x3462ac0()*-0.020749);
}

double NNfunction-gg::synapse0x347a9a0() {
   return (neuron0x3462e00()*0.0153787);
}

double NNfunction-gg::synapse0x347a9e0() {
   return (neuron0x3463140()*0.0478441);
}

double NNfunction-gg::synapse0x347aa20() {
   return (neuron0x3463480()*0.0360861);
}

double NNfunction-gg::synapse0x347aa60() {
   return (neuron0x34637c0()*0.00445173);
}

double NNfunction-gg::synapse0x347aaa0() {
   return (neuron0x3463b00()*0.0241583);
}

double NNfunction-gg::synapse0x347a530() {
   return (neuron0x3463e40()*0.00700676);
}

double NNfunction-gg::synapse0x347a570() {
   return (neuron0x34643a0()*-0.0201486);
}

double NNfunction-gg::synapse0x347abf0() {
   return (neuron0x3464650()*0.029135);
}

double NNfunction-gg::synapse0x347ac30() {
   return (neuron0x3464990()*0.00324964);
}

double NNfunction-gg::synapse0x347ac70() {
   return (neuron0x3464cd0()*0.00183281);
}

double NNfunction-gg::synapse0x347acb0() {
   return (neuron0x3465010()*-0.00609878);
}

double NNfunction-gg::synapse0x347acf0() {
   return (neuron0x3465350()*0.0186897);
}

double NNfunction-gg::synapse0x347ad30() {
   return (neuron0x3465690()*0.0159251);
}

double NNfunction-gg::synapse0x347b0b0() {
   return (neuron0x3460ad0()*0.0620152);
}

double NNfunction-gg::synapse0x347b0f0() {
   return (neuron0x3460d80()*0.104026);
}

double NNfunction-gg::synapse0x347b130() {
   return (neuron0x34610c0()*0.239899);
}

double NNfunction-gg::synapse0x347b170() {
   return (neuron0x3461400()*-1.13146);
}

double NNfunction-gg::synapse0x347b1b0() {
   return (neuron0x3461740()*0.0562286);
}

double NNfunction-gg::synapse0x347b1f0() {
   return (neuron0x3461a80()*-0.119701);
}

double NNfunction-gg::synapse0x347b230() {
   return (neuron0x3461dc0()*-0.300042);
}

double NNfunction-gg::synapse0x347b270() {
   return (neuron0x3462100()*-0.375153);
}

double NNfunction-gg::synapse0x347b2b0() {
   return (neuron0x3462440()*-0.293295);
}

double NNfunction-gg::synapse0x347b2f0() {
   return (neuron0x3462780()*-0.140466);
}

double NNfunction-gg::synapse0x347b330() {
   return (neuron0x3462ac0()*-0.0799264);
}

double NNfunction-gg::synapse0x347b370() {
   return (neuron0x3462e00()*-0.107446);
}

double NNfunction-gg::synapse0x347b3b0() {
   return (neuron0x3463140()*-0.455616);
}

double NNfunction-gg::synapse0x347b3f0() {
   return (neuron0x3463480()*-0.329092);
}

double NNfunction-gg::synapse0x347b430() {
   return (neuron0x34637c0()*-0.284983);
}

double NNfunction-gg::synapse0x347b470() {
   return (neuron0x3463b00()*-0.430193);
}

double NNfunction-gg::synapse0x347af00() {
   return (neuron0x3463e40()*0.318812);
}

double NNfunction-gg::synapse0x347af40() {
   return (neuron0x34643a0()*-0.317787);
}

double NNfunction-gg::synapse0x347b5c0() {
   return (neuron0x3464650()*-0.454741);
}

double NNfunction-gg::synapse0x347b600() {
   return (neuron0x3464990()*0.127776);
}

double NNfunction-gg::synapse0x347b640() {
   return (neuron0x3464cd0()*-0.459988);
}

double NNfunction-gg::synapse0x347b680() {
   return (neuron0x3465010()*-0.0691146);
}

double NNfunction-gg::synapse0x347b6c0() {
   return (neuron0x3465350()*0.637447);
}

double NNfunction-gg::synapse0x347b700() {
   return (neuron0x3465690()*0.280548);
}

double NNfunction-gg::synapse0x347ba80() {
   return (neuron0x3460ad0()*-0.278986);
}

double NNfunction-gg::synapse0x347bac0() {
   return (neuron0x3460d80()*-0.176828);
}

double NNfunction-gg::synapse0x347bb00() {
   return (neuron0x34610c0()*-0.308647);
}

double NNfunction-gg::synapse0x347bb40() {
   return (neuron0x3461400()*-0.983738);
}

double NNfunction-gg::synapse0x347bb80() {
   return (neuron0x3461740()*0.109365);
}

double NNfunction-gg::synapse0x347bbc0() {
   return (neuron0x3461a80()*-0.238735);
}

double NNfunction-gg::synapse0x347bc00() {
   return (neuron0x3461dc0()*0.0952739);
}

double NNfunction-gg::synapse0x347bc40() {
   return (neuron0x3462100()*0.268538);
}

double NNfunction-gg::synapse0x347bc80() {
   return (neuron0x3462440()*0.394026);
}

double NNfunction-gg::synapse0x347bcc0() {
   return (neuron0x3462780()*-0.130787);
}

double NNfunction-gg::synapse0x347bd00() {
   return (neuron0x3462ac0()*0.033606);
}

double NNfunction-gg::synapse0x347bd40() {
   return (neuron0x3462e00()*-0.0689186);
}

double NNfunction-gg::synapse0x347bd80() {
   return (neuron0x3463140()*-0.528338);
}

double NNfunction-gg::synapse0x347bdc0() {
   return (neuron0x3463480()*-0.0484053);
}

double NNfunction-gg::synapse0x347be00() {
   return (neuron0x34637c0()*-0.356005);
}

double NNfunction-gg::synapse0x347be40() {
   return (neuron0x3463b00()*0.50909);
}

double NNfunction-gg::synapse0x347b8d0() {
   return (neuron0x3463e40()*0.43073);
}

double NNfunction-gg::synapse0x347b910() {
   return (neuron0x34643a0()*0.280625);
}

double NNfunction-gg::synapse0x347bf90() {
   return (neuron0x3464650()*0.0803054);
}

double NNfunction-gg::synapse0x347bfd0() {
   return (neuron0x3464990()*0.0628225);
}

double NNfunction-gg::synapse0x347c010() {
   return (neuron0x3464cd0()*0.271469);
}

double NNfunction-gg::synapse0x347c050() {
   return (neuron0x3465010()*-0.128501);
}

double NNfunction-gg::synapse0x347c090() {
   return (neuron0x3465350()*-0.0899465);
}

double NNfunction-gg::synapse0x347c0d0() {
   return (neuron0x3465690()*-0.298818);
}

double NNfunction-gg::synapse0x347c450() {
   return (neuron0x3460ad0()*-0.00513631);
}

double NNfunction-gg::synapse0x3470a20() {
   return (neuron0x3460d80()*0.00350264);
}

double NNfunction-gg::synapse0x3470a60() {
   return (neuron0x34610c0()*-0.0105437);
}

double NNfunction-gg::synapse0x3470aa0() {
   return (neuron0x3461400()*23.0202);
}

double NNfunction-gg::synapse0x3470cf0() {
   return (neuron0x3461740()*0.00582002);
}

double NNfunction-gg::synapse0x3470d30() {
   return (neuron0x3461a80()*0.0343618);
}

double NNfunction-gg::synapse0x3470d70() {
   return (neuron0x3461dc0()*0.02821);
}

double NNfunction-gg::synapse0x3470fc0() {
   return (neuron0x3462100()*0.00409464);
}

double NNfunction-gg::synapse0x3471000() {
   return (neuron0x3462440()*-0.00719913);
}

double NNfunction-gg::synapse0x3471250() {
   return (neuron0x3462780()*0.0130295);
}

double NNfunction-gg::synapse0x3471290() {
   return (neuron0x3462ac0()*-0.00141765);
}

double NNfunction-gg::synapse0x34712d0() {
   return (neuron0x3462e00()*0.0116704);
}

double NNfunction-gg::synapse0x3471520() {
   return (neuron0x3463140()*-0.0147633);
}

double NNfunction-gg::synapse0x3471560() {
   return (neuron0x3463480()*0.0129485);
}

double NNfunction-gg::synapse0x34717b0() {
   return (neuron0x34637c0()*0.0141748);
}

double NNfunction-gg::synapse0x34717f0() {
   return (neuron0x3463b00()*0.0233277);
}

double NNfunction-gg::synapse0x347c2a0() {
   return (neuron0x3463e40()*-0.0193049);
}

double NNfunction-gg::synapse0x347c2e0() {
   return (neuron0x34643a0()*-0.0170709);
}

double NNfunction-gg::synapse0x3471940() {
   return (neuron0x3464650()*-0.00635959);
}

double NNfunction-gg::synapse0x3471e50() {
   return (neuron0x3464990()*-0.00516667);
}

double NNfunction-gg::synapse0x3471e90() {
   return (neuron0x3464cd0()*-0.0286805);
}

double NNfunction-gg::synapse0x3471ed0() {
   return (neuron0x3465010()*0.00170611);
}

double NNfunction-gg::synapse0x3472120() {
   return (neuron0x3465350()*0.0127528);
}

double NNfunction-gg::synapse0x3472160() {
   return (neuron0x3465690()*0.0138475);
}

double NNfunction-gg::synapse0x3471a10() {
   return (neuron0x3460ad0()*0.0309711);
}

double NNfunction-gg::synapse0x3471a50() {
   return (neuron0x3460d80()*-0.060958);
}

double NNfunction-gg::synapse0x3471a90() {
   return (neuron0x34610c0()*-0.0466338);
}

double NNfunction-gg::synapse0x3471ad0() {
   return (neuron0x3461400()*-2.16088);
}

double NNfunction-gg::synapse0x3472450() {
   return (neuron0x3461740()*0.100396);
}

double NNfunction-gg::synapse0x347e7a0() {
   return (neuron0x3461a80()*-0.0105058);
}

double NNfunction-gg::synapse0x347e7e0() {
   return (neuron0x3461dc0()*0.066614);
}

double NNfunction-gg::synapse0x347e820() {
   return (neuron0x3462100()*-0.0226957);
}

double NNfunction-gg::synapse0x347e860() {
   return (neuron0x3462440()*-0.142411);
}

double NNfunction-gg::synapse0x347e8a0() {
   return (neuron0x3462780()*0.164896);
}

double NNfunction-gg::synapse0x347e8e0() {
   return (neuron0x3462ac0()*-0.0741549);
}

double NNfunction-gg::synapse0x347e920() {
   return (neuron0x3462e00()*0.100187);
}

double NNfunction-gg::synapse0x347e960() {
   return (neuron0x3463140()*-0.00430267);
}

double NNfunction-gg::synapse0x347e9a0() {
   return (neuron0x3463480()*-0.0133351);
}

double NNfunction-gg::synapse0x347e9e0() {
   return (neuron0x34637c0()*-0.131454);
}

double NNfunction-gg::synapse0x347ea20() {
   return (neuron0x3463b00()*-0.17384);
}

double NNfunction-gg::synapse0x3472330() {
   return (neuron0x3463e40()*-0.307883);
}

double NNfunction-gg::synapse0x3472370() {
   return (neuron0x34643a0()*0.00324176);
}

double NNfunction-gg::synapse0x347eb70() {
   return (neuron0x3464650()*0.222846);
}

double NNfunction-gg::synapse0x347ebb0() {
   return (neuron0x3464990()*0.297285);
}

double NNfunction-gg::synapse0x347ebf0() {
   return (neuron0x3464cd0()*0.0108143);
}

double NNfunction-gg::synapse0x347ec30() {
   return (neuron0x3465010()*0.0219056);
}

double NNfunction-gg::synapse0x347ec70() {
   return (neuron0x3465350()*-0.104484);
}

double NNfunction-gg::synapse0x347ecb0() {
   return (neuron0x3465690()*-0.086277);
}

double NNfunction-gg::synapse0x347f030() {
   return (neuron0x3460ad0()*0.0338693);
}

double NNfunction-gg::synapse0x347f070() {
   return (neuron0x3460d80()*-0.0352909);
}

double NNfunction-gg::synapse0x347f0b0() {
   return (neuron0x34610c0()*-0.0339216);
}

double NNfunction-gg::synapse0x347f0f0() {
   return (neuron0x3461400()*-1.63569);
}

double NNfunction-gg::synapse0x347f130() {
   return (neuron0x3461740()*0.100014);
}

double NNfunction-gg::synapse0x347f170() {
   return (neuron0x3461a80()*-0.0197992);
}

double NNfunction-gg::synapse0x347f1b0() {
   return (neuron0x3461dc0()*0.0386719);
}

double NNfunction-gg::synapse0x347f1f0() {
   return (neuron0x3462100()*0.0348387);
}

double NNfunction-gg::synapse0x347f230() {
   return (neuron0x3462440()*0.0697243);
}

double NNfunction-gg::synapse0x347f270() {
   return (neuron0x3462780()*0.0674082);
}

double NNfunction-gg::synapse0x347f2b0() {
   return (neuron0x3462ac0()*0.0444989);
}

double NNfunction-gg::synapse0x347f2f0() {
   return (neuron0x3462e00()*-0.0306581);
}

double NNfunction-gg::synapse0x347f330() {
   return (neuron0x3463140()*0.0353623);
}

double NNfunction-gg::synapse0x347f370() {
   return (neuron0x3463480()*-0.212206);
}

double NNfunction-gg::synapse0x347f3b0() {
   return (neuron0x34637c0()*0.308707);
}

double NNfunction-gg::synapse0x347f3f0() {
   return (neuron0x3463b00()*-0.0264766);
}

double NNfunction-gg::synapse0x347ee80() {
   return (neuron0x3463e40()*-0.213169);
}

double NNfunction-gg::synapse0x347eec0() {
   return (neuron0x34643a0()*0.0150074);
}

double NNfunction-gg::synapse0x347f540() {
   return (neuron0x3464650()*-0.0644903);
}

double NNfunction-gg::synapse0x347f580() {
   return (neuron0x3464990()*-0.0522085);
}

double NNfunction-gg::synapse0x347f5c0() {
   return (neuron0x3464cd0()*-0.0822971);
}

double NNfunction-gg::synapse0x347f600() {
   return (neuron0x3465010()*0.0708544);
}

double NNfunction-gg::synapse0x347f640() {
   return (neuron0x3465350()*0.00591854);
}

double NNfunction-gg::synapse0x347f680() {
   return (neuron0x3465690()*-0.0353589);
}

double NNfunction-gg::synapse0x347fa00() {
   return (neuron0x3460ad0()*0.00778342);
}

double NNfunction-gg::synapse0x347fa40() {
   return (neuron0x3460d80()*0.0116904);
}

double NNfunction-gg::synapse0x347fa80() {
   return (neuron0x34610c0()*-0.00484497);
}

double NNfunction-gg::synapse0x347fac0() {
   return (neuron0x3461400()*0.884549);
}

double NNfunction-gg::synapse0x347fb00() {
   return (neuron0x3461740()*-0.00592608);
}

double NNfunction-gg::synapse0x347fb40() {
   return (neuron0x3461a80()*0.00846022);
}

double NNfunction-gg::synapse0x347fb80() {
   return (neuron0x3461dc0()*0.000674555);
}

double NNfunction-gg::synapse0x347fbc0() {
   return (neuron0x3462100()*0.00330962);
}

double NNfunction-gg::synapse0x347fc00() {
   return (neuron0x3462440()*-0.00984281);
}

double NNfunction-gg::synapse0x347fc40() {
   return (neuron0x3462780()*-0.0151571);
}

double NNfunction-gg::synapse0x347fc80() {
   return (neuron0x3462ac0()*-0.0193683);
}

double NNfunction-gg::synapse0x347fcc0() {
   return (neuron0x3462e00()*-1.03719);
}

double NNfunction-gg::synapse0x347fd00() {
   return (neuron0x3463140()*0.0463227);
}

double NNfunction-gg::synapse0x347fd40() {
   return (neuron0x3463480()*0.0493474);
}

double NNfunction-gg::synapse0x347fd80() {
   return (neuron0x34637c0()*0.123826);
}

double NNfunction-gg::synapse0x347fdc0() {
   return (neuron0x3463b00()*0.0558683);
}

double NNfunction-gg::synapse0x347f850() {
   return (neuron0x3463e40()*0.0168737);
}

double NNfunction-gg::synapse0x347f890() {
   return (neuron0x34643a0()*0.133464);
}

double NNfunction-gg::synapse0x347ff10() {
   return (neuron0x3464650()*0.0297903);
}

double NNfunction-gg::synapse0x347ff50() {
   return (neuron0x3464990()*0.0178371);
}

double NNfunction-gg::synapse0x347ff90() {
   return (neuron0x3464cd0()*0.0133623);
}

double NNfunction-gg::synapse0x347ffd0() {
   return (neuron0x3465010()*-0.0153209);
}

double NNfunction-gg::synapse0x3480010() {
   return (neuron0x3465350()*-0.0198267);
}

double NNfunction-gg::synapse0x3480050() {
   return (neuron0x3465690()*0.00169822);
}

double NNfunction-gg::synapse0x34803d0() {
   return (neuron0x3460ad0()*-0.09051);
}

double NNfunction-gg::synapse0x3480410() {
   return (neuron0x3460d80()*0.0193255);
}

double NNfunction-gg::synapse0x3480450() {
   return (neuron0x34610c0()*0.6961);
}

double NNfunction-gg::synapse0x3480490() {
   return (neuron0x3461400()*2.51558);
}

double NNfunction-gg::synapse0x34804d0() {
   return (neuron0x3461740()*0.340109);
}

double NNfunction-gg::synapse0x3480510() {
   return (neuron0x3461a80()*0.112438);
}

double NNfunction-gg::synapse0x3480550() {
   return (neuron0x3461dc0()*-0.697897);
}

double NNfunction-gg::synapse0x3480590() {
   return (neuron0x3462100()*-0.605857);
}

double NNfunction-gg::synapse0x34805d0() {
   return (neuron0x3462440()*-0.975996);
}

double NNfunction-gg::synapse0x3480610() {
   return (neuron0x3462780()*-0.300664);
}

double NNfunction-gg::synapse0x3480650() {
   return (neuron0x3462ac0()*-0.328374);
}

double NNfunction-gg::synapse0x3480690() {
   return (neuron0x3462e00()*-0.0415236);
}

double NNfunction-gg::synapse0x34806d0() {
   return (neuron0x3463140()*0.138404);
}

double NNfunction-gg::synapse0x3480710() {
   return (neuron0x3463480()*-0.0640072);
}

double NNfunction-gg::synapse0x3480750() {
   return (neuron0x34637c0()*-0.0384304);
}

double NNfunction-gg::synapse0x3480790() {
   return (neuron0x3463b00()*-0.0353228);
}

double NNfunction-gg::synapse0x3480220() {
   return (neuron0x3463e40()*0.251805);
}

double NNfunction-gg::synapse0x3480260() {
   return (neuron0x34643a0()*-0.629986);
}

double NNfunction-gg::synapse0x34808e0() {
   return (neuron0x3464650()*-0.908265);
}

double NNfunction-gg::synapse0x3480920() {
   return (neuron0x3464990()*0.247533);
}

double NNfunction-gg::synapse0x3480960() {
   return (neuron0x3464cd0()*-0.778753);
}

double NNfunction-gg::synapse0x34809a0() {
   return (neuron0x3465010()*0.262836);
}

double NNfunction-gg::synapse0x34809e0() {
   return (neuron0x3465350()*0.401177);
}

double NNfunction-gg::synapse0x3480a20() {
   return (neuron0x3465690()*-0.122187);
}

double NNfunction-gg::synapse0x3480da0() {
   return (neuron0x3460ad0()*0.0323321);
}

double NNfunction-gg::synapse0x3480de0() {
   return (neuron0x3460d80()*-0.000159633);
}

double NNfunction-gg::synapse0x3480e20() {
   return (neuron0x34610c0()*-0.0649706);
}

double NNfunction-gg::synapse0x3480e60() {
   return (neuron0x3461400()*2.85024);
}

double NNfunction-gg::synapse0x3480ea0() {
   return (neuron0x3461740()*0.101844);
}

double NNfunction-gg::synapse0x3480ee0() {
   return (neuron0x3461a80()*-0.10088);
}

double NNfunction-gg::synapse0x3480f20() {
   return (neuron0x3461dc0()*-0.0458709);
}

double NNfunction-gg::synapse0x3480f60() {
   return (neuron0x3462100()*-0.0122547);
}

double NNfunction-gg::synapse0x3480fa0() {
   return (neuron0x3462440()*0.0180309);
}

double NNfunction-gg::synapse0x3480fe0() {
   return (neuron0x3462780()*0.0244463);
}

double NNfunction-gg::synapse0x3481020() {
   return (neuron0x3462ac0()*-0.0383455);
}

double NNfunction-gg::synapse0x3481060() {
   return (neuron0x3462e00()*0.198046);
}

double NNfunction-gg::synapse0x34810a0() {
   return (neuron0x3463140()*-0.250858);
}

double NNfunction-gg::synapse0x34810e0() {
   return (neuron0x3463480()*-0.0101965);
}

double NNfunction-gg::synapse0x3481120() {
   return (neuron0x34637c0()*0.393152);
}

double NNfunction-gg::synapse0x3481160() {
   return (neuron0x3463b00()*-0.0204669);
}

double NNfunction-gg::synapse0x3480bf0() {
   return (neuron0x3463e40()*-0.107321);
}

double NNfunction-gg::synapse0x3480c30() {
   return (neuron0x34643a0()*0.169595);
}

double NNfunction-gg::synapse0x34812b0() {
   return (neuron0x3464650()*0.0291956);
}

double NNfunction-gg::synapse0x34812f0() {
   return (neuron0x3464990()*-0.142023);
}

double NNfunction-gg::synapse0x3481330() {
   return (neuron0x3464cd0()*0.0311252);
}

double NNfunction-gg::synapse0x3481370() {
   return (neuron0x3465010()*0.0152329);
}

double NNfunction-gg::synapse0x34813b0() {
   return (neuron0x3465350()*-0.0508161);
}

double NNfunction-gg::synapse0x34813f0() {
   return (neuron0x3465690()*-0.0732677);
}

double NNfunction-gg::synapse0x3481770() {
   return (neuron0x3460ad0()*-0.062573);
}

double NNfunction-gg::synapse0x34817b0() {
   return (neuron0x3460d80()*0.299682);
}

double NNfunction-gg::synapse0x34817f0() {
   return (neuron0x34610c0()*0.14029);
}

double NNfunction-gg::synapse0x3481830() {
   return (neuron0x3461400()*0.822063);
}

double NNfunction-gg::synapse0x3481870() {
   return (neuron0x3461740()*-0.115015);
}

double NNfunction-gg::synapse0x34818b0() {
   return (neuron0x3461a80()*-0.0653686);
}

double NNfunction-gg::synapse0x34818f0() {
   return (neuron0x3461dc0()*-0.178544);
}

double NNfunction-gg::synapse0x3481930() {
   return (neuron0x3462100()*-0.328322);
}

double NNfunction-gg::synapse0x3481970() {
   return (neuron0x3462440()*0.067955);
}

double NNfunction-gg::synapse0x34819b0() {
   return (neuron0x3462780()*-0.0612594);
}

double NNfunction-gg::synapse0x34819f0() {
   return (neuron0x3462ac0()*-0.00266144);
}

double NNfunction-gg::synapse0x3481a30() {
   return (neuron0x3462e00()*0.114316);
}

double NNfunction-gg::synapse0x3481a70() {
   return (neuron0x3463140()*0.246315);
}

double NNfunction-gg::synapse0x3481ab0() {
   return (neuron0x3463480()*0.138471);
}

double NNfunction-gg::synapse0x3481af0() {
   return (neuron0x34637c0()*0.299553);
}

double NNfunction-gg::synapse0x3481b30() {
   return (neuron0x3463b00()*-0.533838);
}

double NNfunction-gg::synapse0x34815c0() {
   return (neuron0x3463e40()*0.0711596);
}

double NNfunction-gg::synapse0x3481600() {
   return (neuron0x34643a0()*-0.494219);
}

double NNfunction-gg::synapse0x3481c80() {
   return (neuron0x3464650()*-0.296646);
}

double NNfunction-gg::synapse0x3481cc0() {
   return (neuron0x3464990()*-0.393308);
}

double NNfunction-gg::synapse0x3481d00() {
   return (neuron0x3464cd0()*-0.129524);
}

double NNfunction-gg::synapse0x3481d40() {
   return (neuron0x3465010()*0.166267);
}

double NNfunction-gg::synapse0x3481d80() {
   return (neuron0x3465350()*0.280593);
}

double NNfunction-gg::synapse0x3481dc0() {
   return (neuron0x3465690()*-0.0135977);
}

double NNfunction-gg::synapse0x3482140() {
   return (neuron0x3460ad0()*0.188847);
}

double NNfunction-gg::synapse0x3482180() {
   return (neuron0x3460d80()*-0.639018);
}

double NNfunction-gg::synapse0x34821c0() {
   return (neuron0x34610c0()*0.056132);
}

double NNfunction-gg::synapse0x3482200() {
   return (neuron0x3461400()*-1.87361);
}

double NNfunction-gg::synapse0x3482240() {
   return (neuron0x3461740()*-0.00225462);
}

double NNfunction-gg::synapse0x3482280() {
   return (neuron0x3461a80()*0.326124);
}

double NNfunction-gg::synapse0x34822c0() {
   return (neuron0x3461dc0()*0.333995);
}

double NNfunction-gg::synapse0x3482300() {
   return (neuron0x3462100()*0.291396);
}

double NNfunction-gg::synapse0x3482340() {
   return (neuron0x3462440()*-0.291956);
}

double NNfunction-gg::synapse0x3482380() {
   return (neuron0x3462780()*0.105394);
}

double NNfunction-gg::synapse0x34823c0() {
   return (neuron0x3462ac0()*0.176752);
}

double NNfunction-gg::synapse0x3482400() {
   return (neuron0x3462e00()*0.269249);
}

double NNfunction-gg::synapse0x3482440() {
   return (neuron0x3463140()*-0.322428);
}

double NNfunction-gg::synapse0x3482480() {
   return (neuron0x3463480()*0.31999);
}

double NNfunction-gg::synapse0x34824c0() {
   return (neuron0x34637c0()*0.180534);
}

double NNfunction-gg::synapse0x3482500() {
   return (neuron0x3463b00()*-0.140446);
}

double NNfunction-gg::synapse0x3481f90() {
   return (neuron0x3463e40()*0.277935);
}

double NNfunction-gg::synapse0x3481fd0() {
   return (neuron0x34643a0()*-0.116776);
}

double NNfunction-gg::synapse0x3482650() {
   return (neuron0x3464650()*0.050529);
}

double NNfunction-gg::synapse0x3482690() {
   return (neuron0x3464990()*-0.0236752);
}

double NNfunction-gg::synapse0x34826d0() {
   return (neuron0x3464cd0()*0.146548);
}

double NNfunction-gg::synapse0x3482710() {
   return (neuron0x3465010()*-0.34375);
}

double NNfunction-gg::synapse0x3482750() {
   return (neuron0x3465350()*0.287753);
}

double NNfunction-gg::synapse0x3482790() {
   return (neuron0x3465690()*-0.0568859);
}

double NNfunction-gg::synapse0x3482b10() {
   return (neuron0x3460ad0()*0.0284392);
}

double NNfunction-gg::synapse0x3482b50() {
   return (neuron0x3460d80()*-0.0316829);
}

double NNfunction-gg::synapse0x3482b90() {
   return (neuron0x34610c0()*0.589544);
}

double NNfunction-gg::synapse0x3482bd0() {
   return (neuron0x3461400()*-0.380163);
}

double NNfunction-gg::synapse0x3482c10() {
   return (neuron0x3461740()*-0.165294);
}

double NNfunction-gg::synapse0x3482c50() {
   return (neuron0x3461a80()*0.32224);
}

double NNfunction-gg::synapse0x3482c90() {
   return (neuron0x3461dc0()*-0.110528);
}

double NNfunction-gg::synapse0x3482cd0() {
   return (neuron0x3462100()*0.00185423);
}

double NNfunction-gg::synapse0x3482d10() {
   return (neuron0x3462440()*0.152214);
}

double NNfunction-gg::synapse0x3482d50() {
   return (neuron0x3462780()*0.015468);
}

double NNfunction-gg::synapse0x3482d90() {
   return (neuron0x3462ac0()*-0.286176);
}

double NNfunction-gg::synapse0x3482dd0() {
   return (neuron0x3462e00()*0.00973126);
}

double NNfunction-gg::synapse0x3482e10() {
   return (neuron0x3463140()*0.265284);
}

double NNfunction-gg::synapse0x3482e50() {
   return (neuron0x3463480()*0.133021);
}

double NNfunction-gg::synapse0x3482e90() {
   return (neuron0x34637c0()*-0.174199);
}

double NNfunction-gg::synapse0x3482ed0() {
   return (neuron0x3463b00()*-0.328114);
}

double NNfunction-gg::synapse0x3482960() {
   return (neuron0x3463e40()*-0.107536);
}

double NNfunction-gg::synapse0x34829a0() {
   return (neuron0x34643a0()*-0.210593);
}

double NNfunction-gg::synapse0x3483020() {
   return (neuron0x3464650()*-0.200036);
}

double NNfunction-gg::synapse0x3483060() {
   return (neuron0x3464990()*-0.020338);
}

double NNfunction-gg::synapse0x34830a0() {
   return (neuron0x3464cd0()*0.789093);
}

double NNfunction-gg::synapse0x34830e0() {
   return (neuron0x3465010()*-0.40375);
}

double NNfunction-gg::synapse0x3483120() {
   return (neuron0x3465350()*-0.371234);
}

double NNfunction-gg::synapse0x3483160() {
   return (neuron0x3465690()*0.0345611);
}

double NNfunction-gg::synapse0x346bc10() {
   return (neuron0x3460ad0()*0.311057);
}

double NNfunction-gg::synapse0x346bc50() {
   return (neuron0x3460d80()*0.55431);
}

double NNfunction-gg::synapse0x346bc90() {
   return (neuron0x34610c0()*-0.0414383);
}

double NNfunction-gg::synapse0x346bcd0() {
   return (neuron0x3461400()*-0.571179);
}

double NNfunction-gg::synapse0x346bd10() {
   return (neuron0x3461740()*0.353325);
}

double NNfunction-gg::synapse0x346bd50() {
   return (neuron0x3461a80()*0.616225);
}

double NNfunction-gg::synapse0x346bd90() {
   return (neuron0x3461dc0()*0.315169);
}

double NNfunction-gg::synapse0x346bdd0() {
   return (neuron0x3462100()*0.0666633);
}

double NNfunction-gg::synapse0x34838f0() {
   return (neuron0x3462440()*0.100304);
}

double NNfunction-gg::synapse0x3483930() {
   return (neuron0x3462780()*-0.0385108);
}

double NNfunction-gg::synapse0x3483970() {
   return (neuron0x3462ac0()*-0.69035);
}

double NNfunction-gg::synapse0x34839b0() {
   return (neuron0x3462e00()*0.794372);
}

double NNfunction-gg::synapse0x34839f0() {
   return (neuron0x3463140()*0.369907);
}

double NNfunction-gg::synapse0x3483a30() {
   return (neuron0x3463480()*0.0605531);
}

double NNfunction-gg::synapse0x3483a70() {
   return (neuron0x34637c0()*-0.096847);
}

double NNfunction-gg::synapse0x3483ab0() {
   return (neuron0x3463b00()*-0.410569);
}

double NNfunction-gg::synapse0x3483330() {
   return (neuron0x3463e40()*-0.0398924);
}

double NNfunction-gg::synapse0x3483370() {
   return (neuron0x34643a0()*0.240406);
}

double NNfunction-gg::synapse0x3483c00() {
   return (neuron0x3464650()*0.107038);
}

double NNfunction-gg::synapse0x3483c40() {
   return (neuron0x3464990()*0.515055);
}

double NNfunction-gg::synapse0x3483c80() {
   return (neuron0x3464cd0()*0.333043);
}

double NNfunction-gg::synapse0x3483cc0() {
   return (neuron0x3465010()*0.0745531);
}

double NNfunction-gg::synapse0x3483d00() {
   return (neuron0x3465350()*-0.442143);
}

double NNfunction-gg::synapse0x3483d40() {
   return (neuron0x3465690()*0.0719812);
}

double NNfunction-gg::synapse0x34840c0() {
   return (neuron0x3460ad0()*-0.00873536);
}

double NNfunction-gg::synapse0x3484100() {
   return (neuron0x3460d80()*-0.021288);
}

double NNfunction-gg::synapse0x3484140() {
   return (neuron0x34610c0()*-0.0474885);
}

double NNfunction-gg::synapse0x3484180() {
   return (neuron0x3461400()*4.70904);
}

double NNfunction-gg::synapse0x34841c0() {
   return (neuron0x3461740()*0.0213344);
}

double NNfunction-gg::synapse0x3484200() {
   return (neuron0x3461a80()*-0.0305387);
}

double NNfunction-gg::synapse0x3484240() {
   return (neuron0x3461dc0()*-0.0240786);
}

double NNfunction-gg::synapse0x3484280() {
   return (neuron0x3462100()*0.0264125);
}

double NNfunction-gg::synapse0x34842c0() {
   return (neuron0x3462440()*0.0371364);
}

double NNfunction-gg::synapse0x3484300() {
   return (neuron0x3462780()*0.0286764);
}

double NNfunction-gg::synapse0x3484340() {
   return (neuron0x3462ac0()*0.0251908);
}

double NNfunction-gg::synapse0x3484380() {
   return (neuron0x3462e00()*0.0608284);
}

double NNfunction-gg::synapse0x34843c0() {
   return (neuron0x3463140()*0.479544);
}

double NNfunction-gg::synapse0x3484400() {
   return (neuron0x3463480()*-0.00593581);
}

double NNfunction-gg::synapse0x3484440() {
   return (neuron0x34637c0()*-0.0328473);
}

double NNfunction-gg::synapse0x3484480() {
   return (neuron0x3463b00()*-0.063764);
}

double NNfunction-gg::synapse0x3483f10() {
   return (neuron0x3463e40()*-0.0411352);
}

double NNfunction-gg::synapse0x3483f50() {
   return (neuron0x34643a0()*-0.0206812);
}

double NNfunction-gg::synapse0x34845d0() {
   return (neuron0x3464650()*-0.0576493);
}

double NNfunction-gg::synapse0x3484610() {
   return (neuron0x3464990()*-0.0161816);
}

double NNfunction-gg::synapse0x3484650() {
   return (neuron0x3464cd0()*-0.0300338);
}

double NNfunction-gg::synapse0x3484690() {
   return (neuron0x3465010()*-0.000644961);
}

double NNfunction-gg::synapse0x34846d0() {
   return (neuron0x3465350()*-0.00702054);
}

double NNfunction-gg::synapse0x3484710() {
   return (neuron0x3465690()*-0.0120004);
}

double NNfunction-gg::synapse0x3484a90() {
   return (neuron0x3460ad0()*-0.0228021);
}

double NNfunction-gg::synapse0x3484ad0() {
   return (neuron0x3460d80()*0.0243362);
}

double NNfunction-gg::synapse0x3484b10() {
   return (neuron0x34610c0()*0.142318);
}

double NNfunction-gg::synapse0x3484b50() {
   return (neuron0x3461400()*-0.974813);
}

double NNfunction-gg::synapse0x3484b90() {
   return (neuron0x3461740()*-0.136936);
}

double NNfunction-gg::synapse0x3484bd0() {
   return (neuron0x3461a80()*0.0645378);
}

double NNfunction-gg::synapse0x3484c10() {
   return (neuron0x3461dc0()*-0.00230048);
}

double NNfunction-gg::synapse0x3484c50() {
   return (neuron0x3462100()*0.0360884);
}

double NNfunction-gg::synapse0x3484c90() {
   return (neuron0x3462440()*-0.00989543);
}

double NNfunction-gg::synapse0x3484cd0() {
   return (neuron0x3462780()*-0.0483574);
}

double NNfunction-gg::synapse0x3484d10() {
   return (neuron0x3462ac0()*-0.0287745);
}

double NNfunction-gg::synapse0x3484d50() {
   return (neuron0x3462e00()*-0.435627);
}

double NNfunction-gg::synapse0x3484d90() {
   return (neuron0x3463140()*-0.0546641);
}

double NNfunction-gg::synapse0x3484dd0() {
   return (neuron0x3463480()*0.288139);
}

double NNfunction-gg::synapse0x3484e10() {
   return (neuron0x34637c0()*-0.0765868);
}

double NNfunction-gg::synapse0x3484e50() {
   return (neuron0x3463b00()*0.00892155);
}

double NNfunction-gg::synapse0x34848e0() {
   return (neuron0x3463e40()*0.244616);
}

double NNfunction-gg::synapse0x3484920() {
   return (neuron0x34643a0()*-0.0368842);
}

double NNfunction-gg::synapse0x3475450() {
   return (neuron0x3464650()*0.0369996);
}

double NNfunction-gg::synapse0x3475490() {
   return (neuron0x3464990()*0.0790082);
}

double NNfunction-gg::synapse0x34754d0() {
   return (neuron0x3464cd0()*0.310646);
}

double NNfunction-gg::synapse0x3475510() {
   return (neuron0x3465010()*-0.114672);
}

double NNfunction-gg::synapse0x3475550() {
   return (neuron0x3465350()*-0.135788);
}

double NNfunction-gg::synapse0x3475590() {
   return (neuron0x3465690()*0.051129);
}

double NNfunction-gg::synapse0x3475910() {
   return (neuron0x3460ad0()*0.00770784);
}

double NNfunction-gg::synapse0x3475950() {
   return (neuron0x3460d80()*-0.0133623);
}

double NNfunction-gg::synapse0x3475990() {
   return (neuron0x34610c0()*0.0138765);
}

double NNfunction-gg::synapse0x34759d0() {
   return (neuron0x3461400()*0.86638);
}

double NNfunction-gg::synapse0x3475a10() {
   return (neuron0x3461740()*-0.0150067);
}

double NNfunction-gg::synapse0x3475a50() {
   return (neuron0x3461a80()*0.013542);
}

double NNfunction-gg::synapse0x3475a90() {
   return (neuron0x3461dc0()*0.0179535);
}

double NNfunction-gg::synapse0x3475ad0() {
   return (neuron0x3462100()*-0.0131399);
}

double NNfunction-gg::synapse0x3475b10() {
   return (neuron0x3462440()*-0.0313769);
}

double NNfunction-gg::synapse0x3475b50() {
   return (neuron0x3462780()*0.00412122);
}

double NNfunction-gg::synapse0x3475b90() {
   return (neuron0x3462ac0()*-0.00236278);
}

double NNfunction-gg::synapse0x3475bd0() {
   return (neuron0x3462e00()*-0.0388332);
}

double NNfunction-gg::synapse0x3475c10() {
   return (neuron0x3463140()*0.116181);
}

double NNfunction-gg::synapse0x3475c50() {
   return (neuron0x3463480()*0.0394441);
}

double NNfunction-gg::synapse0x3475c90() {
   return (neuron0x34637c0()*-0.179289);
}

double NNfunction-gg::synapse0x3475cd0() {
   return (neuron0x3463b00()*0.0410256);
}

double NNfunction-gg::synapse0x3475760() {
   return (neuron0x3463e40()*-0.019406);
}

double NNfunction-gg::synapse0x34757a0() {
   return (neuron0x34643a0()*0.00668333);
}

double NNfunction-gg::synapse0x3475e20() {
   return (neuron0x3464650()*0.0205064);
}

double NNfunction-gg::synapse0x3475e60() {
   return (neuron0x3464990()*0.0230298);
}

double NNfunction-gg::synapse0x3475ea0() {
   return (neuron0x3464cd0()*-0.03865);
}

double NNfunction-gg::synapse0x3475ee0() {
   return (neuron0x3465010()*-0.0176925);
}

double NNfunction-gg::synapse0x3475f20() {
   return (neuron0x3465350()*0.0245964);
}

double NNfunction-gg::synapse0x3475f60() {
   return (neuron0x3465690()*0.0227172);
}

double NNfunction-gg::synapse0x34762e0() {
   return (neuron0x3460ad0()*0.0079895);
}

double NNfunction-gg::synapse0x3476320() {
   return (neuron0x3460d80()*0.00663989);
}

double NNfunction-gg::synapse0x3476360() {
   return (neuron0x34610c0()*-0.0113118);
}

double NNfunction-gg::synapse0x34763a0() {
   return (neuron0x3461400()*-1.12499);
}

double NNfunction-gg::synapse0x34763e0() {
   return (neuron0x3461740()*-0.0158001);
}

double NNfunction-gg::synapse0x3476420() {
   return (neuron0x3461a80()*-0.00376551);
}

double NNfunction-gg::synapse0x3476460() {
   return (neuron0x3461dc0()*0.00848904);
}

double NNfunction-gg::synapse0x34764a0() {
   return (neuron0x3462100()*-0.00951406);
}

double NNfunction-gg::synapse0x34764e0() {
   return (neuron0x3462440()*0.0220307);
}

double NNfunction-gg::synapse0x3476520() {
   return (neuron0x3462780()*0.0241726);
}

double NNfunction-gg::synapse0x3476560() {
   return (neuron0x3462ac0()*0.0128551);
}

double NNfunction-gg::synapse0x34765a0() {
   return (neuron0x3462e00()*0.0824937);
}

double NNfunction-gg::synapse0x34765e0() {
   return (neuron0x3463140()*0.116273);
}

double NNfunction-gg::synapse0x3476620() {
   return (neuron0x3463480()*0.109038);
}

double NNfunction-gg::synapse0x3476660() {
   return (neuron0x34637c0()*-0.00910113);
}

double NNfunction-gg::synapse0x34766a0() {
   return (neuron0x3463b00()*0.0612177);
}

double NNfunction-gg::synapse0x3476130() {
   return (neuron0x3463e40()*0.104081);
}

double NNfunction-gg::synapse0x3476170() {
   return (neuron0x34643a0()*0.000484113);
}

double NNfunction-gg::synapse0x34767f0() {
   return (neuron0x3464650()*0.0114769);
}

double NNfunction-gg::synapse0x3476830() {
   return (neuron0x3464990()*0.0589013);
}

double NNfunction-gg::synapse0x3476870() {
   return (neuron0x3464cd0()*-0.0999282);
}

double NNfunction-gg::synapse0x34768b0() {
   return (neuron0x3465010()*-0.0291534);
}

double NNfunction-gg::synapse0x34768f0() {
   return (neuron0x3465350()*0.0283503);
}

double NNfunction-gg::synapse0x3476930() {
   return (neuron0x3465690()*0.000588709);
}

double NNfunction-gg::synapse0x3476cb0() {
   return (neuron0x3460ad0()*0.00345159);
}

double NNfunction-gg::synapse0x3476cf0() {
   return (neuron0x3460d80()*0.0188782);
}

double NNfunction-gg::synapse0x3476d30() {
   return (neuron0x34610c0()*-0.0364861);
}

double NNfunction-gg::synapse0x3476d70() {
   return (neuron0x3461400()*1.4807);
}

double NNfunction-gg::synapse0x3476db0() {
   return (neuron0x3461740()*0.0044212);
}

double NNfunction-gg::synapse0x3476df0() {
   return (neuron0x3461a80()*-0.014387);
}

double NNfunction-gg::synapse0x3476e30() {
   return (neuron0x3461dc0()*-0.0426947);
}

double NNfunction-gg::synapse0x3476e70() {
   return (neuron0x3462100()*0.0141959);
}

double NNfunction-gg::synapse0x3476eb0() {
   return (neuron0x3462440()*0.0252162);
}

double NNfunction-gg::synapse0x3476ef0() {
   return (neuron0x3462780()*-0.00400008);
}

double NNfunction-gg::synapse0x3476f30() {
   return (neuron0x3462ac0()*0.0289255);
}

double NNfunction-gg::synapse0x3476f70() {
   return (neuron0x3462e00()*1.52932);
}

double NNfunction-gg::synapse0x3476fb0() {
   return (neuron0x3463140()*-0.102735);
}

double NNfunction-gg::synapse0x3476ff0() {
   return (neuron0x3463480()*0.0469952);
}

double NNfunction-gg::synapse0x3477030() {
   return (neuron0x34637c0()*-0.046852);
}

double NNfunction-gg::synapse0x3477070() {
   return (neuron0x3463b00()*-0.000284938);
}

double NNfunction-gg::synapse0x3476b00() {
   return (neuron0x3463e40()*0.00229947);
}

double NNfunction-gg::synapse0x3476b40() {
   return (neuron0x34643a0()*-0.018992);
}

double NNfunction-gg::synapse0x34771c0() {
   return (neuron0x3464650()*-0.0324415);
}

double NNfunction-gg::synapse0x3477200() {
   return (neuron0x3464990()*0.0109456);
}

double NNfunction-gg::synapse0x3477240() {
   return (neuron0x3464cd0()*-0.0310214);
}

double NNfunction-gg::synapse0x3477280() {
   return (neuron0x3465010()*-0.00380363);
}

double NNfunction-gg::synapse0x34772c0() {
   return (neuron0x3465350()*-0.0231);
}

double NNfunction-gg::synapse0x3477300() {
   return (neuron0x3465690()*-0.0636173);
}

double NNfunction-gg::synapse0x34891d0() {
   return (neuron0x3460ad0()*0.0205018);
}

double NNfunction-gg::synapse0x3489210() {
   return (neuron0x3460d80()*-0.0268005);
}

double NNfunction-gg::synapse0x3489250() {
   return (neuron0x34610c0()*-0.0601324);
}

double NNfunction-gg::synapse0x3489290() {
   return (neuron0x3461400()*-1.50469);
}

double NNfunction-gg::synapse0x34892d0() {
   return (neuron0x3461740()*0.118572);
}

double NNfunction-gg::synapse0x3489310() {
   return (neuron0x3461a80()*-0.0104043);
}

double NNfunction-gg::synapse0x3489350() {
   return (neuron0x3461dc0()*0.0459903);
}

double NNfunction-gg::synapse0x3489390() {
   return (neuron0x3462100()*0.0516768);
}

double NNfunction-gg::synapse0x34893d0() {
   return (neuron0x3462440()*0.0889569);
}

double NNfunction-gg::synapse0x3489410() {
   return (neuron0x3462780()*0.0979836);
}

double NNfunction-gg::synapse0x3489450() {
   return (neuron0x3462ac0()*0.0579677);
}

double NNfunction-gg::synapse0x3489490() {
   return (neuron0x3462e00()*0.0211067);
}

double NNfunction-gg::synapse0x34894d0() {
   return (neuron0x3463140()*0.0574581);
}

double NNfunction-gg::synapse0x3489510() {
   return (neuron0x3463480()*-0.24672);
}

double NNfunction-gg::synapse0x3489550() {
   return (neuron0x34637c0()*-0.379145);
}

double NNfunction-gg::synapse0x3489590() {
   return (neuron0x3463b00()*-0.00622074);
}

double NNfunction-gg::synapse0x3477340() {
   return (neuron0x3463e40()*-0.176197);
}

double NNfunction-gg::synapse0x3477380() {
   return (neuron0x34643a0()*-0.0280962);
}

double NNfunction-gg::synapse0x34896e0() {
   return (neuron0x3464650()*-0.0137918);
}

double NNfunction-gg::synapse0x3489720() {
   return (neuron0x3464990()*-0.0588011);
}

double NNfunction-gg::synapse0x3489760() {
   return (neuron0x3464cd0()*-0.109795);
}

double NNfunction-gg::synapse0x34897a0() {
   return (neuron0x3465010()*0.0774806);
}

double NNfunction-gg::synapse0x34897e0() {
   return (neuron0x3465350()*0.0360877);
}

double NNfunction-gg::synapse0x3489820() {
   return (neuron0x3465690()*-0.0491413);
}

double NNfunction-gg::synapse0x3489ba0() {
   return (neuron0x3460ad0()*0.0116996);
}

double NNfunction-gg::synapse0x3489be0() {
   return (neuron0x3460d80()*0.0259784);
}

double NNfunction-gg::synapse0x3489c20() {
   return (neuron0x34610c0()*-0.0476404);
}

double NNfunction-gg::synapse0x3489c60() {
   return (neuron0x3461400()*0.710301);
}

double NNfunction-gg::synapse0x3489ca0() {
   return (neuron0x3461740()*0.038298);
}

double NNfunction-gg::synapse0x3489ce0() {
   return (neuron0x3461a80()*-0.00408007);
}

double NNfunction-gg::synapse0x3489d20() {
   return (neuron0x3461dc0()*0.0170007);
}

double NNfunction-gg::synapse0x3489d60() {
   return (neuron0x3462100()*0.0627394);
}

double NNfunction-gg::synapse0x3489da0() {
   return (neuron0x3462440()*0.079036);
}

double NNfunction-gg::synapse0x3489de0() {
   return (neuron0x3462780()*0.0494031);
}

double NNfunction-gg::synapse0x3489e20() {
   return (neuron0x3462ac0()*0.0533031);
}

double NNfunction-gg::synapse0x3489e60() {
   return (neuron0x3462e00()*0.0780878);
}

double NNfunction-gg::synapse0x3489ea0() {
   return (neuron0x3463140()*-0.00620493);
}

double NNfunction-gg::synapse0x3489ee0() {
   return (neuron0x3463480()*-0.145265);
}

double NNfunction-gg::synapse0x3489f20() {
   return (neuron0x34637c0()*-0.0298841);
}

double NNfunction-gg::synapse0x3489f60() {
   return (neuron0x3463b00()*-0.00846359);
}

double NNfunction-gg::synapse0x34899f0() {
   return (neuron0x3463e40()*-0.0177303);
}

double NNfunction-gg::synapse0x3489a30() {
   return (neuron0x34643a0()*0.0307164);
}

double NNfunction-gg::synapse0x348a0b0() {
   return (neuron0x3464650()*-0.0273364);
}

double NNfunction-gg::synapse0x348a0f0() {
   return (neuron0x3464990()*-0.0183431);
}

double NNfunction-gg::synapse0x348a130() {
   return (neuron0x3464cd0()*-0.0919278);
}

double NNfunction-gg::synapse0x348a170() {
   return (neuron0x3465010()*0.0232211);
}

double NNfunction-gg::synapse0x348a1b0() {
   return (neuron0x3465350()*-0.005593);
}

double NNfunction-gg::synapse0x348a1f0() {
   return (neuron0x3465690()*-0.0345482);
}

double NNfunction-gg::synapse0x348a570() {
   return (neuron0x3460ad0()*-0.123671);
}

double NNfunction-gg::synapse0x348a5b0() {
   return (neuron0x3460d80()*-0.0718482);
}

double NNfunction-gg::synapse0x348a5f0() {
   return (neuron0x34610c0()*-0.0676377);
}

double NNfunction-gg::synapse0x348a630() {
   return (neuron0x3461400()*-0.568969);
}

double NNfunction-gg::synapse0x348a670() {
   return (neuron0x3461740()*0.0520342);
}

double NNfunction-gg::synapse0x348a6b0() {
   return (neuron0x3461a80()*-0.150677);
}

double NNfunction-gg::synapse0x348a6f0() {
   return (neuron0x3461dc0()*-0.226833);
}

double NNfunction-gg::synapse0x348a730() {
   return (neuron0x3462100()*-0.401049);
}

double NNfunction-gg::synapse0x348a770() {
   return (neuron0x3462440()*0.252656);
}

double NNfunction-gg::synapse0x348a7b0() {
   return (neuron0x3462780()*-0.272931);
}

double NNfunction-gg::synapse0x348a7f0() {
   return (neuron0x3462ac0()*-0.262319);
}

double NNfunction-gg::synapse0x348a830() {
   return (neuron0x3462e00()*0.706778);
}

double NNfunction-gg::synapse0x348a870() {
   return (neuron0x3463140()*0.863995);
}

double NNfunction-gg::synapse0x348a8b0() {
   return (neuron0x3463480()*-0.302173);
}

double NNfunction-gg::synapse0x348a8f0() {
   return (neuron0x34637c0()*0.173865);
}

double NNfunction-gg::synapse0x348a930() {
   return (neuron0x3463b00()*0.214859);
}

double NNfunction-gg::synapse0x348a3c0() {
   return (neuron0x3463e40()*0.0572255);
}

double NNfunction-gg::synapse0x348a400() {
   return (neuron0x34643a0()*0.143662);
}

double NNfunction-gg::synapse0x348aa80() {
   return (neuron0x3464650()*0.251167);
}

double NNfunction-gg::synapse0x348aac0() {
   return (neuron0x3464990()*-0.0551599);
}

double NNfunction-gg::synapse0x348ab00() {
   return (neuron0x3464cd0()*-0.166571);
}

double NNfunction-gg::synapse0x348ab40() {
   return (neuron0x3465010()*0.0314682);
}

double NNfunction-gg::synapse0x348ab80() {
   return (neuron0x3465350()*0.0290179);
}

double NNfunction-gg::synapse0x348abc0() {
   return (neuron0x3465690()*0.0154362);
}

double NNfunction-gg::synapse0x348af40() {
   return (neuron0x3460ad0()*0.0507521);
}

double NNfunction-gg::synapse0x348af80() {
   return (neuron0x3460d80()*-0.00573602);
}

double NNfunction-gg::synapse0x348afc0() {
   return (neuron0x34610c0()*-0.205181);
}

double NNfunction-gg::synapse0x348b000() {
   return (neuron0x3461400()*-0.687564);
}

double NNfunction-gg::synapse0x348b040() {
   return (neuron0x3461740()*0.173387);
}

double NNfunction-gg::synapse0x348b080() {
   return (neuron0x3461a80()*-0.0265431);
}

double NNfunction-gg::synapse0x348b0c0() {
   return (neuron0x3461dc0()*0.0282247);
}

double NNfunction-gg::synapse0x348b100() {
   return (neuron0x3462100()*0.0816917);
}

double NNfunction-gg::synapse0x348b140() {
   return (neuron0x3462440()*0.0944383);
}

double NNfunction-gg::synapse0x348b180() {
   return (neuron0x3462780()*0.0880341);
}

double NNfunction-gg::synapse0x348b1c0() {
   return (neuron0x3462ac0()*0.0271528);
}

double NNfunction-gg::synapse0x348b200() {
   return (neuron0x3462e00()*0.165565);
}

double NNfunction-gg::synapse0x348b240() {
   return (neuron0x3463140()*-0.0599291);
}

double NNfunction-gg::synapse0x348b280() {
   return (neuron0x3463480()*-0.452535);
}

double NNfunction-gg::synapse0x348b2c0() {
   return (neuron0x34637c0()*-0.249973);
}

double NNfunction-gg::synapse0x348b300() {
   return (neuron0x3463b00()*-0.070923);
}

double NNfunction-gg::synapse0x348ad90() {
   return (neuron0x3463e40()*-0.303118);
}

double NNfunction-gg::synapse0x348add0() {
   return (neuron0x34643a0()*-0.0503717);
}

double NNfunction-gg::synapse0x348b450() {
   return (neuron0x3464650()*-0.0506755);
}

double NNfunction-gg::synapse0x348b490() {
   return (neuron0x3464990()*-0.174457);
}

double NNfunction-gg::synapse0x348b4d0() {
   return (neuron0x3464cd0()*-0.153849);
}

double NNfunction-gg::synapse0x348b510() {
   return (neuron0x3465010()*0.131583);
}

double NNfunction-gg::synapse0x348b550() {
   return (neuron0x3465350()*0.025402);
}

double NNfunction-gg::synapse0x348b590() {
   return (neuron0x3465690()*-0.0765599);
}

double NNfunction-gg::synapse0x322b3c0() {
   return (neuron0x3465b00()*-2.38744);
}

double NNfunction-gg::synapse0x322b400() {
   return (neuron0x34663d0()*0.341052);
}

double NNfunction-gg::synapse0x3467f40() {
   return (neuron0x3466eb0()*-0.742082);
}

double NNfunction-gg::synapse0x3467f80() {
   return (neuron0x3466950()*-0.00736783);
}

double NNfunction-gg::synapse0x3469a10() {
   return (neuron0x3467c90()*-0.0374919);
}

double NNfunction-gg::synapse0x3469a50() {
   return (neuron0x3469760()*0.737036);
}

double NNfunction-gg::synapse0x346a7e0() {
   return (neuron0x346a530()*0.924033);
}

double NNfunction-gg::synapse0x346a820() {
   return (neuron0x346af00()*-1.04181);
}

double NNfunction-gg::synapse0x346b1b0() {
   return (neuron0x346b8d0()*2.10363);
}

double NNfunction-gg::synapse0x346b1f0() {
   return (neuron0x346c3b0()*-0.43672);
}

double NNfunction-gg::synapse0x346bb80() {
   return (neuron0x346cd80()*-1.90306);
}

double NNfunction-gg::synapse0x346bbc0() {
   return (neuron0x3469e60()*-0.00948222);
}

double NNfunction-gg::synapse0x346c660() {
   return (neuron0x346e930()*0.00378775);
}

double NNfunction-gg::synapse0x346c6a0() {
   return (neuron0x346f300()*-0.00111908);
}

double NNfunction-gg::synapse0x346d030() {
   return (neuron0x346fcd0()*-0.185887);
}

double NNfunction-gg::synapse0x346d070() {
   return (neuron0x34706a0()*0.00996852);
}

double NNfunction-gg::synapse0x346a110() {
   return (neuron0x34724b0()*0.00462764);
}

double NNfunction-gg::synapse0x346a150() {
   return (neuron0x3472790()*0.0531911);
}

double NNfunction-gg::synapse0x346ebe0() {
   return (neuron0x3473160()*-1.00552);
}

double NNfunction-gg::synapse0x346ec20() {
   return (neuron0x3473b30()*-0.723636);
}

double NNfunction-gg::synapse0x346f5b0() {
   return (neuron0x3474500()*-0.215588);
}

double NNfunction-gg::synapse0x346f5f0() {
   return (neuron0x3474ed0()*-0.00475297);
}

double NNfunction-gg::synapse0x346ff80() {
   return (neuron0x346da20()*-0.867617);
}

double NNfunction-gg::synapse0x346ffc0() {
   return (neuron0x346e3f0()*-0.832564);
}

double NNfunction-gg::synapse0x3470950() {
   return (neuron0x3477c60()*-0.022649);
}

double NNfunction-gg::synapse0x3470990() {
   return (neuron0x3478630()*0.00144923);
}

double NNfunction-gg::synapse0x34639e0() {
   return (neuron0x3479000()*-0.123547);
}

double NNfunction-gg::synapse0x3463a20() {
   return (neuron0x34799d0()*-0.0247608);
}

double NNfunction-gg::synapse0x3472a40() {
   return (neuron0x347a3a0()*-2.8377);
}

double NNfunction-gg::synapse0x3472a80() {
   return (neuron0x347ad70()*0.00656218);
}

double NNfunction-gg::synapse0x3473410() {
   return (neuron0x347b740()*0.0101965);
}

double NNfunction-gg::synapse0x3473450() {
   return (neuron0x347c110()*6.14008);
}

double NNfunction-gg::synapse0x3473de0() {
   return (neuron0x34721a0()*-0.0459246);
}

double NNfunction-gg::synapse0x3473e20() {
   return (neuron0x347ecf0()*3.43189);
}

double NNfunction-gg::synapse0x34747b0() {
   return (neuron0x347f6c0()*0.511619);
}

double NNfunction-gg::synapse0x34747f0() {
   return (neuron0x3480090()*0.0122923);
}

double NNfunction-gg::synapse0x3475180() {
   return (neuron0x3480a60()*0.0646573);
}

double NNfunction-gg::synapse0x34751c0() {
   return (neuron0x3481430()*0.0187801);
}

double NNfunction-gg::synapse0x346dcd0() {
   return (neuron0x3481e00()*-0.00828922);
}

double NNfunction-gg::synapse0x346dd10() {
   return (neuron0x34827d0()*-0.0154856);
}

double NNfunction-gg::synapse0x3477580() {
   return (neuron0x34831a0()*-0.0079898);
}

double NNfunction-gg::synapse0x34775c0() {
   return (neuron0x3483d80()*0.310787);
}

double NNfunction-gg::synapse0x3477f10() {
   return (neuron0x3484750()*-0.284878);
}

double NNfunction-gg::synapse0x3477f50() {
   return (neuron0x34755d0()*0.505163);
}

double NNfunction-gg::synapse0x34788e0() {
   return (neuron0x3475fa0()*-0.575546);
}

double NNfunction-gg::synapse0x3478920() {
   return (neuron0x3476970()*0.0107068);
}

double NNfunction-gg::synapse0x34792b0() {
   return (neuron0x3488fb0()*-0.82273);
}

double NNfunction-gg::synapse0x34792f0() {
   return (neuron0x3489860()*-0.418007);
}

double NNfunction-gg::synapse0x3479c80() {
   return (neuron0x348a230()*0.00934382);
}

double NNfunction-gg::synapse0x3479cc0() {
   return (neuron0x348ac00()*-0.847093);
}

double NNfunction-gg::synapse0x347c3c0() {
   return (neuron0x3465b00()*-1.46744);
}

double NNfunction-gg::synapse0x347c400() {
   return (neuron0x34663d0()*0.220314);
}

double NNfunction-gg::synapse0x3471980() {
   return (neuron0x3466eb0()*1.07984);
}

double NNfunction-gg::synapse0x34719c0() {
   return (neuron0x3466950()*1.65134);
}

double NNfunction-gg::synapse0x347efa0() {
   return (neuron0x3467c90()*0.242936);
}

double NNfunction-gg::synapse0x347efe0() {
   return (neuron0x3469760()*2.25751);
}

double NNfunction-gg::synapse0x347f970() {
   return (neuron0x346a530()*0.483221);
}

double NNfunction-gg::synapse0x347f9b0() {
   return (neuron0x346af00()*-1.35984);
}

double NNfunction-gg::synapse0x3480340() {
   return (neuron0x346b8d0()*3.74707);
}

double NNfunction-gg::synapse0x3480380() {
   return (neuron0x346c3b0()*0.680893);
}

double NNfunction-gg::synapse0x3480d10() {
   return (neuron0x346cd80()*4.84901);
}

double NNfunction-gg::synapse0x3480d50() {
   return (neuron0x3469e60()*-2.05255);
}

double NNfunction-gg::synapse0x34816e0() {
   return (neuron0x346e930()*-1.33997);
}

double NNfunction-gg::synapse0x3481720() {
   return (neuron0x346f300()*-1.09752);
}

double NNfunction-gg::synapse0x34820b0() {
   return (neuron0x346fcd0()*-0.742201);
}

double NNfunction-gg::synapse0x34820f0() {
   return (neuron0x34706a0()*-0.476648);
}

double NNfunction-gg::synapse0x3482a80() {
   return (neuron0x34724b0()*-0.146409);
}

double NNfunction-gg::synapse0x3482ac0() {
   return (neuron0x3472790()*1.33234);
}

double NNfunction-gg::synapse0x3483450() {
   return (neuron0x3473160()*-1.86185);
}

double NNfunction-gg::synapse0x3483490() {
   return (neuron0x3473b30()*-0.890022);
}

double NNfunction-gg::synapse0x3484030() {
   return (neuron0x3474500()*-2.06455);
}

double NNfunction-gg::synapse0x3484070() {
   return (neuron0x3474ed0()*-0.019983);
}

double NNfunction-gg::synapse0x3484a00() {
   return (neuron0x346da20()*-1.93616);
}

double NNfunction-gg::synapse0x3484a40() {
   return (neuron0x346e3f0()*-1.952);
}

double NNfunction-gg::synapse0x3475880() {
   return (neuron0x3477c60()*-4.94783);
}

double NNfunction-gg::synapse0x34758c0() {
   return (neuron0x3478630()*-0.31173);
}

double NNfunction-gg::synapse0x3476250() {
   return (neuron0x3479000()*-1.48986);
}

double NNfunction-gg::synapse0x3476290() {
   return (neuron0x34799d0()*1.22371);
}

double NNfunction-gg::synapse0x3476c20() {
   return (neuron0x347a3a0()*3.40417);
}

double NNfunction-gg::synapse0x3476c60() {
   return (neuron0x347ad70()*-2.13516);
}

double NNfunction-gg::synapse0x3489140() {
   return (neuron0x347b740()*-0.751664);
}

double NNfunction-gg::synapse0x3489180() {
   return (neuron0x347c110()*7.36477);
}

double NNfunction-gg::synapse0x3489b10() {
   return (neuron0x34721a0()*-1.95782);
}

double NNfunction-gg::synapse0x3489b50() {
   return (neuron0x347ecf0()*1.66537);
}

double NNfunction-gg::synapse0x348a4e0() {
   return (neuron0x347f6c0()*1.27943);
}

double NNfunction-gg::synapse0x348a520() {
   return (neuron0x3480090()*0.819915);
}

double NNfunction-gg::synapse0x348aeb0() {
   return (neuron0x3480a60()*2.16109);
}

double NNfunction-gg::synapse0x348aef0() {
   return (neuron0x3481430()*0.224367);
}

double NNfunction-gg::synapse0x3465db0() {
   return (neuron0x3481e00()*-1.69039);
}

double NNfunction-gg::synapse0x3465df0() {
   return (neuron0x34827d0()*0.000399297);
}

double NNfunction-gg::synapse0x347a650() {
   return (neuron0x34831a0()*-0.627797);
}

double NNfunction-gg::synapse0x347a690() {
   return (neuron0x3483d80()*3.3744);
}

double NNfunction-gg::synapse0x348b5d0() {
   return (neuron0x3484750()*-0.657931);
}

double NNfunction-gg::synapse0x348b610() {
   return (neuron0x34755d0()*1.10853);
}

double NNfunction-gg::synapse0x348b650() {
   return (neuron0x3475fa0()*-2.41407);
}

double NNfunction-gg::synapse0x348b690() {
   return (neuron0x3476970()*1.01069);
}

double NNfunction-gg::synapse0x3492540() {
   return (neuron0x3488fb0()*-2.15664);
}

double NNfunction-gg::synapse0x3492580() {
   return (neuron0x3489860()*1.01223);
}

double NNfunction-gg::synapse0x34925c0() {
   return (neuron0x348a230()*-1.15563);
}

double NNfunction-gg::synapse0x3492600() {
   return (neuron0x348ac00()*-1.42934);
}

double NNfunction-gg::synapse0x3492980() {
   return (neuron0x3465b00()*-0.158883);
}

double NNfunction-gg::synapse0x34929c0() {
   return (neuron0x34663d0()*0.0400158);
}

double NNfunction-gg::synapse0x3492a00() {
   return (neuron0x3466eb0()*-0.480287);
}

double NNfunction-gg::synapse0x3492a40() {
   return (neuron0x3466950()*0.0158801);
}

double NNfunction-gg::synapse0x3492a80() {
   return (neuron0x3467c90()*0.0479494);
}

double NNfunction-gg::synapse0x3492ac0() {
   return (neuron0x3469760()*-0.767494);
}

double NNfunction-gg::synapse0x3492b00() {
   return (neuron0x346a530()*-0.268339);
}

double NNfunction-gg::synapse0x3492b40() {
   return (neuron0x346af00()*0.307872);
}

double NNfunction-gg::synapse0x3492b80() {
   return (neuron0x346b8d0()*-0.727099);
}

double NNfunction-gg::synapse0x3492bc0() {
   return (neuron0x346c3b0()*-0.305952);
}

double NNfunction-gg::synapse0x3492c00() {
   return (neuron0x346cd80()*-1.847);
}

double NNfunction-gg::synapse0x3492c40() {
   return (neuron0x3469e60()*-0.0137068);
}

double NNfunction-gg::synapse0x3492c80() {
   return (neuron0x346e930()*0.0078002);
}

double NNfunction-gg::synapse0x3492cc0() {
   return (neuron0x346f300()*-0.0159201);
}

double NNfunction-gg::synapse0x3492d00() {
   return (neuron0x346fcd0()*-0.0561329);
}

double NNfunction-gg::synapse0x3492d40() {
   return (neuron0x34706a0()*-0.0525992);
}

double NNfunction-gg::synapse0x34927d0() {
   return (neuron0x34724b0()*-0.0462234);
}

double NNfunction-gg::synapse0x3492810() {
   return (neuron0x3472790()*0.0808275);
}

double NNfunction-gg::synapse0x3492e90() {
   return (neuron0x3473160()*0.184064);
}

double NNfunction-gg::synapse0x3492ed0() {
   return (neuron0x3473b30()*-0.283295);
}

double NNfunction-gg::synapse0x3492f10() {
   return (neuron0x3474500()*0.304198);
}

double NNfunction-gg::synapse0x3492f50() {
   return (neuron0x3474ed0()*-0.00041883);
}

double NNfunction-gg::synapse0x3492f90() {
   return (neuron0x346da20()*0.635663);
}

double NNfunction-gg::synapse0x3492fd0() {
   return (neuron0x346e3f0()*1.19022);
}

double NNfunction-gg::synapse0x3493010() {
   return (neuron0x3477c60()*0.581779);
}

double NNfunction-gg::synapse0x3493050() {
   return (neuron0x3478630()*-0.0679714);
}

double NNfunction-gg::synapse0x3493090() {
   return (neuron0x3479000()*0.00176372);
}

double NNfunction-gg::synapse0x34930d0() {
   return (neuron0x34799d0()*-0.0375828);
}

double NNfunction-gg::synapse0x3493110() {
   return (neuron0x347a3a0()*-1.33206);
}

double NNfunction-gg::synapse0x3493150() {
   return (neuron0x347ad70()*-0.0174412);
}

double NNfunction-gg::synapse0x3493190() {
   return (neuron0x347b740()*0.0079401);
}

double NNfunction-gg::synapse0x34931d0() {
   return (neuron0x347c110()*-1.28427);
}

double NNfunction-gg::synapse0x3492d80() {
   return (neuron0x34721a0()*0.114854);
}

double NNfunction-gg::synapse0x3492dc0() {
   return (neuron0x347ecf0()*-1.07532);
}

double NNfunction-gg::synapse0x3492e00() {
   return (neuron0x347f6c0()*-0.45864);
}

double NNfunction-gg::synapse0x3492e40() {
   return (neuron0x3480090()*-0.0155564);
}

double NNfunction-gg::synapse0x3493420() {
   return (neuron0x3480a60()*-0.855719);
}

double NNfunction-gg::synapse0x3493460() {
   return (neuron0x3481430()*-0.0429162);
}

double NNfunction-gg::synapse0x34934a0() {
   return (neuron0x3481e00()*-0.0121023);
}

double NNfunction-gg::synapse0x34934e0() {
   return (neuron0x34827d0()*-0.00710468);
}

double NNfunction-gg::synapse0x3493520() {
   return (neuron0x34831a0()*0.0198305);
}

double NNfunction-gg::synapse0x3493560() {
   return (neuron0x3483d80()*-1.69837);
}

double NNfunction-gg::synapse0x34935a0() {
   return (neuron0x3484750()*-0.220318);
}

double NNfunction-gg::synapse0x34935e0() {
   return (neuron0x34755d0()*-1.5776);
}

double NNfunction-gg::synapse0x3493620() {
   return (neuron0x3475fa0()*1.19297);
}

double NNfunction-gg::synapse0x3493660() {
   return (neuron0x3476970()*-0.296299);
}

double NNfunction-gg::synapse0x34936a0() {
   return (neuron0x3488fb0()*0.352518);
}

double NNfunction-gg::synapse0x34936e0() {
   return (neuron0x3489860()*-0.955538);
}

double NNfunction-gg::synapse0x3493720() {
   return (neuron0x348a230()*-0.0675674);
}

double NNfunction-gg::synapse0x3493760() {
   return (neuron0x348ac00()*0.450516);
}

double NNfunction-gg::synapse0x3493ae0() {
   return (neuron0x3465b00()*0.063025);
}

double NNfunction-gg::synapse0x3493b20() {
   return (neuron0x34663d0()*0.781941);
}

double NNfunction-gg::synapse0x3493b60() {
   return (neuron0x3466eb0()*1.34821);
}

double NNfunction-gg::synapse0x3493ba0() {
   return (neuron0x3466950()*-0.0994634);
}

double NNfunction-gg::synapse0x3493be0() {
   return (neuron0x3467c90()*-0.0776452);
}

double NNfunction-gg::synapse0x3493c20() {
   return (neuron0x3469760()*1.36229);
}

double NNfunction-gg::synapse0x3493c60() {
   return (neuron0x346a530()*1.07625);
}

double NNfunction-gg::synapse0x3493ca0() {
   return (neuron0x346af00()*0.87393);
}

double NNfunction-gg::synapse0x3493ce0() {
   return (neuron0x346b8d0()*1.73547);
}

double NNfunction-gg::synapse0x3493d20() {
   return (neuron0x346c3b0()*0.505173);
}

double NNfunction-gg::synapse0x3493d60() {
   return (neuron0x346cd80()*2.25142);
}

double NNfunction-gg::synapse0x3493da0() {
   return (neuron0x3469e60()*0.330782);
}

double NNfunction-gg::synapse0x3493de0() {
   return (neuron0x346e930()*-0.242133);
}

double NNfunction-gg::synapse0x3493e20() {
   return (neuron0x346f300()*0.212418);
}

double NNfunction-gg::synapse0x3493e60() {
   return (neuron0x346fcd0()*0.908208);
}

double NNfunction-gg::synapse0x3493ea0() {
   return (neuron0x34706a0()*0.750816);
}

double NNfunction-gg::synapse0x3493930() {
   return (neuron0x34724b0()*0.654832);
}

double NNfunction-gg::synapse0x3493970() {
   return (neuron0x3472790()*0.808457);
}

double NNfunction-gg::synapse0x3493ff0() {
   return (neuron0x3473160()*0.0618936);
}

double NNfunction-gg::synapse0x3494030() {
   return (neuron0x3473b30()*1.43251);
}

double NNfunction-gg::synapse0x3494070() {
   return (neuron0x3474500()*-0.0609631);
}

double NNfunction-gg::synapse0x34940b0() {
   return (neuron0x3474ed0()*1.42333);
}

double NNfunction-gg::synapse0x34940f0() {
   return (neuron0x346da20()*0.125918);
}

double NNfunction-gg::synapse0x3494130() {
   return (neuron0x346e3f0()*0.28106);
}

double NNfunction-gg::synapse0x3494170() {
   return (neuron0x3477c60()*-0.39863);
}

double NNfunction-gg::synapse0x34941b0() {
   return (neuron0x3478630()*0.645739);
}

double NNfunction-gg::synapse0x34941f0() {
   return (neuron0x3479000()*0.0163713);
}

double NNfunction-gg::synapse0x3494230() {
   return (neuron0x34799d0()*1.12701);
}

double NNfunction-gg::synapse0x3494270() {
   return (neuron0x347a3a0()*0.802846);
}

double NNfunction-gg::synapse0x34942b0() {
   return (neuron0x347ad70()*0.977216);
}

double NNfunction-gg::synapse0x34942f0() {
   return (neuron0x347b740()*0.747609);
}

double NNfunction-gg::synapse0x3494330() {
   return (neuron0x347c110()*1.21269);
}

double NNfunction-gg::synapse0x3493ee0() {
   return (neuron0x34721a0()*0.377181);
}

double NNfunction-gg::synapse0x3493f20() {
   return (neuron0x347ecf0()*0.69319);
}

double NNfunction-gg::synapse0x3493f60() {
   return (neuron0x347f6c0()*1.38433);
}

double NNfunction-gg::synapse0x3493fa0() {
   return (neuron0x3480090()*1.09344);
}

double NNfunction-gg::synapse0x3494580() {
   return (neuron0x3480a60()*1.28524);
}

double NNfunction-gg::synapse0x34945c0() {
   return (neuron0x3481430()*1.11744);
}

double NNfunction-gg::synapse0x3494600() {
   return (neuron0x3481e00()*0.269636);
}

double NNfunction-gg::synapse0x3494640() {
   return (neuron0x34827d0()*-0.0200845);
}

double NNfunction-gg::synapse0x3494680() {
   return (neuron0x34831a0()*0.144512);
}

double NNfunction-gg::synapse0x34946c0() {
   return (neuron0x3483d80()*1.10099);
}

double NNfunction-gg::synapse0x3494700() {
   return (neuron0x3484750()*1.45108);
}

double NNfunction-gg::synapse0x3494740() {
   return (neuron0x34755d0()*0.963673);
}

double NNfunction-gg::synapse0x3494780() {
   return (neuron0x3475fa0()*-0.121311);
}

double NNfunction-gg::synapse0x34947c0() {
   return (neuron0x3476970()*0.670685);
}

double NNfunction-gg::synapse0x3494800() {
   return (neuron0x3488fb0()*0.823212);
}

double NNfunction-gg::synapse0x3494840() {
   return (neuron0x3489860()*0.19542);
}

double NNfunction-gg::synapse0x3494880() {
   return (neuron0x348a230()*0.770779);
}

double NNfunction-gg::synapse0x34948c0() {
   return (neuron0x348ac00()*0.194277);
}

double NNfunction-gg::synapse0x3494c40() {
   return (neuron0x3465b00()*0.127026);
}

double NNfunction-gg::synapse0x3494c80() {
   return (neuron0x34663d0()*-0.253088);
}

double NNfunction-gg::synapse0x3494cc0() {
   return (neuron0x3466eb0()*-0.887257);
}

double NNfunction-gg::synapse0x3494d00() {
   return (neuron0x3466950()*-0.092105);
}

double NNfunction-gg::synapse0x3494d40() {
   return (neuron0x3467c90()*-0.0811817);
}

double NNfunction-gg::synapse0x3494d80() {
   return (neuron0x3469760()*-0.920999);
}

double NNfunction-gg::synapse0x3494dc0() {
   return (neuron0x346a530()*-0.463606);
}

double NNfunction-gg::synapse0x3494e00() {
   return (neuron0x346af00()*0.577774);
}

double NNfunction-gg::synapse0x3494e40() {
   return (neuron0x346b8d0()*-0.679587);
}

double NNfunction-gg::synapse0x3494e80() {
   return (neuron0x346c3b0()*0.00226327);
}

double NNfunction-gg::synapse0x3494ec0() {
   return (neuron0x346cd80()*0.461014);
}

double NNfunction-gg::synapse0x3494f00() {
   return (neuron0x3469e60()*0.0284719);
}

double NNfunction-gg::synapse0x3494f40() {
   return (neuron0x346e930()*0.0108466);
}

double NNfunction-gg::synapse0x3494f80() {
   return (neuron0x346f300()*0.0147996);
}

double NNfunction-gg::synapse0x3494fc0() {
   return (neuron0x346fcd0()*0.206256);
}

double NNfunction-gg::synapse0x3495000() {
   return (neuron0x34706a0()*0.0731247);
}

double NNfunction-gg::synapse0x3494a90() {
   return (neuron0x34724b0()*0.0973533);
}

double NNfunction-gg::synapse0x3494ad0() {
   return (neuron0x3472790()*-0.256368);
}

double NNfunction-gg::synapse0x3495150() {
   return (neuron0x3473160()*0.861191);
}

double NNfunction-gg::synapse0x3495190() {
   return (neuron0x3473b30()*0.0581826);
}

double NNfunction-gg::synapse0x34951d0() {
   return (neuron0x3474500()*0.297185);
}

double NNfunction-gg::synapse0x3495210() {
   return (neuron0x3474ed0()*-0.00347995);
}

double NNfunction-gg::synapse0x3495250() {
   return (neuron0x346da20()*0.973903);
}

double NNfunction-gg::synapse0x3495290() {
   return (neuron0x346e3f0()*0.770667);
}

double NNfunction-gg::synapse0x34952d0() {
   return (neuron0x3477c60()*0.108544);
}

double NNfunction-gg::synapse0x3495310() {
   return (neuron0x3478630()*0.010862);
}

double NNfunction-gg::synapse0x3495350() {
   return (neuron0x3479000()*0.320224);
}

double NNfunction-gg::synapse0x3495390() {
   return (neuron0x34799d0()*0.0205476);
}

double NNfunction-gg::synapse0x34953d0() {
   return (neuron0x347a3a0()*-0.426244);
}

double NNfunction-gg::synapse0x3495410() {
   return (neuron0x347ad70()*-0.0361015);
}

double NNfunction-gg::synapse0x3495450() {
   return (neuron0x347b740()*0.013065);
}

double NNfunction-gg::synapse0x3495490() {
   return (neuron0x347c110()*-2.28188);
}

double NNfunction-gg::synapse0x3495040() {
   return (neuron0x34721a0()*0.227113);
}

double NNfunction-gg::synapse0x3495080() {
   return (neuron0x347ecf0()*-0.252433);
}

double NNfunction-gg::synapse0x34950c0() {
   return (neuron0x347f6c0()*-0.850688);
}

double NNfunction-gg::synapse0x3495100() {
   return (neuron0x3480090()*-0.0177217);
}

double NNfunction-gg::synapse0x34956e0() {
   return (neuron0x3480a60()*-0.448841);
}

double NNfunction-gg::synapse0x3495720() {
   return (neuron0x3481430()*0.00686009);
}

double NNfunction-gg::synapse0x3495760() {
   return (neuron0x3481e00()*0.0268728);
}

double NNfunction-gg::synapse0x34957a0() {
   return (neuron0x34827d0()*0.030177);
}

double NNfunction-gg::synapse0x34957e0() {
   return (neuron0x34831a0()*0.0232231);
}

double NNfunction-gg::synapse0x3495820() {
   return (neuron0x3483d80()*-0.673622);
}

double NNfunction-gg::synapse0x3495860() {
   return (neuron0x3484750()*0.0139384);
}

double NNfunction-gg::synapse0x34958a0() {
   return (neuron0x34755d0()*-0.933528);
}

double NNfunction-gg::synapse0x34958e0() {
   return (neuron0x3475fa0()*1.27474);
}

double NNfunction-gg::synapse0x3495920() {
   return (neuron0x3476970()*-0.383433);
}

double NNfunction-gg::synapse0x3495960() {
   return (neuron0x3488fb0()*0.72008);
}

double NNfunction-gg::synapse0x34959a0() {
   return (neuron0x3489860()*-0.514388);
}

double NNfunction-gg::synapse0x34959e0() {
   return (neuron0x348a230()*-0.0317713);
}

double NNfunction-gg::synapse0x3495a20() {
   return (neuron0x348ac00()*0.653524);
}

double NNfunction-gg::synapse0x3495c80() {
   return (neuron0x3491e00()*-20.0701);
}

double NNfunction-gg::synapse0x3495cc0() {
   return (neuron0x34921a0()*6.76929);
}

double NNfunction-gg::synapse0x3495d00() {
   return (neuron0x3492640()*-7.14264);
}

double NNfunction-gg::synapse0x3495d40() {
   return (neuron0x34937a0()*4.15832);
}

double NNfunction-gg::synapse0x3495d80() {
   return (neuron0x3494900()*-7.15108);
}

